function vec = convert2basen(NUMINPUT, base, varargin)
%CONVERT2BASEN Converts an input number into its base n equivalent
%   SYNTAX
%   VEC = CONVERT2BASEN(NUMINPUT, N) Returns an input number NUMINPUT as its base
%   N equivalent, as a vector of digits. NUMINPUT has to be a whole number,
%   and N has to be a positive integer greater than or equal to 2.
%
%   Be mindful of errors arising from inaccurate floating point
%   representations of large numbers.
%
%   VEC = CONVERT2BASEN(NUMINPUT, N, 'ShouldValidate', <true>): If the
%   variable ShouldValidate is set to false, the function won't display a
%   warning for incorrect results.
%
%   See also: convert2decimalnum

import('ptc_matlab_lib.*');

if nargin<2
    error([mfilename ':' thisfuncname ':InvalidNumberOfArguments'], 'Invalid number of arguments');
elseif isempty(NUMINPUT)
    vec = [];
    return;
elseif ~isscalar(NUMINPUT) || ~isscalar(base)
    error([mfilename ':' thisfuncname ':InvalidDataType'], 'Both NUMINPUT and N have to be scalar numeric values');
elseif mod(NUMINPUT, 1)~=0 || NUMINPUT<0
    error([mfilename ':' thisfuncname ':InvalidNUMINPUT'], 'NUMINPUT has to be a whole number');
elseif mod(base, 1)~=0 || base <= 1
    error([mfilename ':' thisfuncname ':InvalidBase'], 'N has to be a positive integer greater than or equal to 2');
end

pairs = {'ShouldValidate', true};
parseargs(varargin, pairs);

NUMINPUT = double(NUMINPUT);

% nval = NUMINPUT;
% vec = [];
% while nval >= base
%     vec = [mod(nval, base) vec];
%     assert(~any(vec >= base) && ~any(vec < 0));
%     nval = floor(nval/base);
% end
% vec = [nval vec];

%Note: Zero is zero in any base system
if NUMINPUT == 0
    vec = 0;
    return;
end

nval = NUMINPUT;
vec = NaN(1, floor((log10(nval)/log10(base))+1));
ctr = 1;
while nval >= base
    vec(ctr) = mod(nval, base); ctr = ctr + 1;
    if any(vec >= base) || any(vec < 0)
        error([mfilename ':' thisfuncname ':InputOutOfBounds'], 'Error: Input out of bounds');
    end
    nval = floor(nval/base);
end
vec(ctr) = nval;
assert(~any(isnan(vec)));
vec = fliplr(vec);

if ShouldValidate && ~isequal(convert2decimalnum(vec, base, 'ShouldValidate', false), NUMINPUT)
    warning([mfilename ':' thisfuncname ':InputOutOfBounds'], 'Error in conversion: Input out of bounds');
end

end