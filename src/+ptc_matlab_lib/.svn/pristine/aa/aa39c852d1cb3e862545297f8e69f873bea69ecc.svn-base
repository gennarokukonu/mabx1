function result = convert2decimalnum(VECINPUT, base, varargin)
%CONVERT2DECIMALNUM Converts a number from a specified base to base 10
%
%   SYNTAX
%   RESULT = CONVERT2DECIMALNUM(VECINPUT, BASE) Converts a number specified by a
%   vector VECINPUT of the constituent digits from the specified base to
%   base 10, and returns the result. VECINPUT has to be a vector of whole
%   numbers, and BASE has to be a positive integer greater than or equal to
%   2.
%
%   RESULT = CONVERT2DECIMALNUM(VECINPUT, BASE, 'ShouldValidate', <true>):
%   If specified as false, the function won't display a warning if an error
%   in conversion comes up.
%
%   See also: convert2basen

import('ptc_matlab_lib.*');

if nargin<2
    error([mfilename ':' thisfuncname ':InvalidNumberOfArguments'], 'Invalid number of arguments');
elseif isempty(VECINPUT)
    result = [];
    return;
elseif ~isvector(VECINPUT) || (~isnumeric(VECINPUT) && ~islogical(VECINPUT) && ~ischar(VECINPUT)) || ~isscalar(base)
    error([mfilename ':' thisfuncname ':InvalidDataType'], 'VECINPUT has to be a numeric or char vector, and BASE has to be a numeric scalar');
elseif mod(base, 1)~=0 || base <= 1
    error([mfilename ':' thisfuncname ':InvalidBase'], 'BASE has to be a positive integer greater than or equal to 2');
end

if ischar(VECINPUT)
    VECINPUT = regexprep(lower(VECINPUT), '\s+', '');
    alpha_indices = isstrprop(VECINPUT, 'alpha');
    numeric_indices = isstrprop(VECINPUT, 'digit');
    VECINPUT(alpha_indices) = VECINPUT(alpha_indices) - 87;
    VECINPUT(numeric_indices) = VECINPUT(numeric_indices) - 48;
end

VECINPUT = double(VECINPUT);
if ~(any(VECINPUT))
    VECINPUT = 0;
else
    VECINPUT = VECINPUT(find(VECINPUT, 1):end);
end

pairs = {'ShouldValidate', true};
parseargs(varargin, pairs);

len_VECINPUT = length(VECINPUT);
result = arrayfun(@(X) VECINPUT(X)*base^(len_VECINPUT - X), 1:len_VECINPUT);
result = sum(result);

if ShouldValidate && ~isequal(columnvec(convert2basen(result, base, 'ShouldValidate', false)), VECINPUT(:))
    warning([mfilename ':' thisfuncname ':InputOutOfBounds'], 'Error in conversion: Input out of bounds');
end

end