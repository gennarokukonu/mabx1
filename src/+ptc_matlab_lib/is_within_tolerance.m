function varargout = is_within_tolerance(inmatrix, value_to_compare, varargin)
%IS_WITHIN_TOLERANCE: Checks to see if a value meets a specific tolerance
%criterion. For NaN and Inf comparisons, this tolerance value is always
%zero.
%
%   SYNTAX:
%   VARARGOUT = IS_WITHIN_TOLERANCE(INMATRIX, VALUE_TO_COMPARE, VARARGIN)
%   VALUE_TO_COMPARE can be a scalar, or a matrix of the same size as
%   INMATRIX.
%
%   {'TolType', <'absolute'>}: The other option is 'relative', for relative
%   tolerance
%
%   {'TolVal', <0>}
%
%   {'ModifierFunction', @abs}: By default, the modifier function specified
%   is applied to the operand before comparison. This modifier function can
%   be specified as the empty matrix []. The modifier function must accept
%   a single argument, and must operate on a vector/matrix, such that the
%   size of the output is equal to the size of the input.
%
%   {'ComparisonOperator', @le}: By default, the logical operator specified is
%   used for the comparison operation. This logical operator defaults to <=
%   (less than or equal to), and is mandatory. The operator must be a
%   binary operator (i.e. it must accept two arguments), and must operate
%   on vectors/matrices, such that the output is a scalar logical value.
%
%   {'ArithmeticOperator', @minus}: By default, the subtraction operator is
%   used for the arithmetic operation. This can be changed.
%
%   NOTE: Even if a relative tolerance type has been specified, absolute
%   tolerance will still be used for the following cases:
%   1. Elements of inmatrix which are zero
%   2. Elements of inmatrix and value_to_compare which are Inf or -Inf
%   3. Elements of inmatrix and value_to_compare which are NaN
%
%   Any values present in the output that do not fit in with the rest of
%   the output will be replaced by NaN.
%
%   See also: isequal, isequalwithequalnans

import('ptc_matlab_lib.*');

pairs = {'TolValSize', [1, 1], ...
    'TolType', 'absolute', ...
    'TolVal', 0, ...
    'ModifierFunction', 'abs', ...
    'ArithmeticOperator', 'minus', ...
    'TreatNaNsAsEqual', false, ...
    'ComparisonOperator', 'le'};
ARGS = parseargs(varargin, pairs);

if ~isequal(size(ARGS.TolVal), ARGS.TolValSize)
    if isequal(ARGS.TolValSize, 'VARIABLE')
        %Do nothing
    elseif isscalar(ARGS.TolVal)
        ARGS.TolVal = ARGS.TolVal * ones(ARGS.TolValSize);
    elseif numel(ARGS.TolVal) == prod(ARGS.TolValSize)
        ARGS.TolVal = reshape(ARGS.TolVal, ARGS.TolValSize);
    else
        error([mfilename ':' thisfuncname ':InvalidTolValSize'], 'Invalid TolValSize specified.');
    end
end

ARGS.ModifierFunction = str2func(ARGS.ModifierFunction);
ARGS.ArithmeticOperator = str2func(ARGS.ArithmeticOperator);
ARGS.ComparisonOperator = str2func(ARGS.ComparisonOperator);

inmatrix = double(inmatrix);
value_to_compare = double(value_to_compare);
ARGS.TolVal = double(ARGS.TolVal);

outval = false(size(inmatrix));

if isscalar(value_to_compare)
    value_to_compare = value_to_compare*ones(size(inmatrix));
end

switch ARGS.TolType
    case 'absolute'
        if ARGS.TreatNaNsAsEqual
            nan_random_value = rand;
            inmatrix(isnan(inmatrix)) = nan_random_value;
            value_to_compare(isnan(value_to_compare)) = nan_random_value;
        end
        empty_random_value = rand;
        if isempty(inmatrix)
            inmatrix = empty_random_value;
        end
        if isempty(value_to_compare)
            value_to_compare = empty_random_value;
        end
        x = feval(ARGS.ArithmeticOperator, inmatrix, value_to_compare);
        if ~isempty(ARGS.ModifierFunction)
            x = feval(ARGS.ModifierFunction, x);
        end        
        x = feval(ARGS.ComparisonOperator, x, ARGS.TolVal);
        if isempty(x)
            x = false;
        end
        outval = x;
        
    case 'relative'
        %If we are checking for NaNs and Infs, use special criteria
        inf_indices = isinf(value_to_compare) | isinf(inmatrix);
        nan_indices = isnan(value_to_compare) | isnan(inmatrix);
        zero_indices = (inmatrix == 0);
        
        %Abnormal indices
        %Switch to an absolute tolerance calculation for abnormal indices
        abnormal_indices = zero_indices | inf_indices | nan_indices;
        outval(abnormal_indices) = feval(thisfuncname, ...
            inmatrix(abnormal_indices), value_to_compare(abnormal_indices), ...
            'TolType', 'absolute', 'TolVal', ARGS.TolVal, ...
            'ComparisonOperator', ARGS.ComparisonOperator, ...
            'ModifierFunction', ARGS.ModifierFunction, ...
            'ArithmeticOperator', ARGS.ArithmeticOperator);
        
        %Normal indices
        normal_indices = ~abnormal_indices;
        x = feval(ARGS.ArithmeticOperator, inmatrix(normal_indices), value_to_compare(normal_indices));
        x = x./inmatrix(normal_indices);
        if ~isempty(ARGS.ModifierFunction)
            x = feval(ARGS.ModifierFunction, x);
        end
        x = feval(ARGS.ComparisonOperator, x, ARGS.TolVal);
        outval(normal_indices) = x;
        
    otherwise
        error([mfilename ':' thisfuncname ':UnknownTolType'], 'Unknown tolerance type specified');
end

outval(isnan(outval)) = false;
varargout{1} = logical(outval);

end