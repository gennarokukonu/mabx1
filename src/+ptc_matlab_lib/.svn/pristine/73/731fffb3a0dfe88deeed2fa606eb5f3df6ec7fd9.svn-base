function out = rand_inrange(minval, maxval, dimensions)
%RAND_INRANGE(MINVAL, MAXVAL): Returns a random value x where
%MINVAL<=x<=MAXVAL.
%
%RAND_INRANGE(MINVAL, MAXVAL, DIMENSIONS): Returns a matrix X with the
%specified dimensions where MINVAL<=x<=MAXVAL, x being any element in the
%matrix X. Whether or not individual elements x are unique is not
%guaranteed.
%
%   See also: rand

import('ptc_matlab_lib.*');

if nargin==0
    minval = 0;
    maxval = 1;
    dimensions = [1 1];
elseif nargin==2
    dimensions = [1 1];
elseif nargin==3
    %Do nothing
else
    error([mfilename ':' thisfuncname ':InvalidNumberOfArguments'], 'Invalid number of arguments.');
end

if isscalar(dimensions)
    dimensions = [dimensions 1];
end

if ~isfinite(minval) || ~isscalar(minval) || ~isfinite(maxval) || ~isscalar(maxval) || ~isvector(dimensions)
    error([mfilename ':' thisfuncname ':InvalidArgumentType'], 'Invalid argument type');
end

rng('shuffle');

%Minor correction. In order to avoid incorrect results for corner cases, it
%is necessary to limit the difference between minval and maxval to
%computable values, say, getmaxdtval('double')
doublemax = getmaxdtval('double');
doublemin = getmindtval('double');
minval = limit('InMatrix', minval, ...
    'UpperLimit', doublemax, ...
    'LowerLimit', maxval - doublemax);
maxval = limit('InMatrix', maxval, ...
    'UpperLimit', doublemax + minval, ...
    'LowerLimit', doublemin);

out = interp1([0 1]', [minval maxval]', rand(dimensions));

out = reshape(out, dimensions);

end