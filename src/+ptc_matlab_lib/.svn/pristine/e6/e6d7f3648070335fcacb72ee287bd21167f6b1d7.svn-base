function varargout = pad_to_length(varargin)
%PAD_TO_LENGTH('FinalLength', <FinalLength>, 'PadValue', <PadValue>,
%'InputVector', <InputVector>, 'PadDirection', <'left' or 'up'/'right' or 'down'>)

import('ptc_matlab_lib.*');

pairs = {'FinalLength', [], ...
    'PadValue', 0, ...
    'InputVector', [], ...
    'PadDirection', 'left', ...
    'ShouldTrim', true};
ARGS = parseargs(varargin, pairs);

if iscell(ARGS.InputVector)
    if isnumeric(ARGS.PadValue)
        ARGS.PadValue = num2cell(ARGS.PadValue);
    elseif ischar(ARGS.PadValue)
        ARGS.PadValue = cellstr(ARGS.PadValue);
    end
end

%Optimization
if length(ARGS.InputVector) == ARGS.FinalLength
    %Nothing to do
    varargout{1} = ARGS.InputVector;
    return;
end

InputVector = rowvec(ARGS.InputVector);
initial_length = length(ARGS.InputVector);
pad_length = max(ARGS.FinalLength - initial_length, 0);
pad_vector = repmat(ARGS.PadValue, 1, ceil(pad_length/length(ARGS.PadValue)));

switch ARGS.PadDirection
    case {'left', 'up'}
        VecOut = [pad_vector InputVector];
        if ARGS.ShouldTrim
            VecOut = VecOut(length(VecOut)-ARGS.FinalLength+1:end);
        end
    case {'right', 'down'}
        VecOut = [InputVector pad_vector];
        if ARGS.ShouldTrim
            VecOut = VecOut(1:end-(length(VecOut)-ARGS.FinalLength));
        end
    otherwise
        error([mfilename ':' thisfuncname ':InvalidPadDirection'], 'Invalid pad direction');
end

if numel(ARGS.InputVector) == 1
    if ismember(ARGS.PadDirection, {'left', 'right'})
        varargout{1} = (VecOut(:)).';
    elseif ismember(ARGS.PadDirection, {'up', 'down'})
        varargout{1} = VecOut(:);
    end
elseif isempty(ARGS.InputVector) && ismember(ARGS.PadDirection, {'left'; 'right'})
    varargout{1} = (VecOut(:)).';
elseif isempty(ARGS.InputVector) && ismember(ARGS.PadDirection, {'up'; 'down'})
    varargout{1} = VecOut(:);
elseif iscolumn(ARGS.InputVector)
    varargout{1} = VecOut(:);
elseif isrow(ARGS.InputVector)
    varargout{1} = (VecOut(:)).';
end

end