function out = isfigure(hndls)
%ISFIGURE True for figure handles
%   ISFIGURE(HNDLS) Checks each element of the vector of handles HNDLS to
%   see if the parent handle is the root object (handle 0). Returns a true
%   if the parent handle is the root object, else it returns false.
%
%   See also ishandle.

import('ptc_matlab_lib.*');

if nargin~=1
    error([mfilename ':' thisfuncname ':InvalidNumberOfArguments'], 'Invalid number of arguments');
elseif ~isvector(hndls) || ~all(columnvec(ishandle(hndls)))
    out = false;
    return;
end

if verLessThan('matlab', '8.4')
    out = arrayfun(@(X) ishandle(X) && isequal(get(X, 'Parent'), 0), hndls(:));
else
    out = arrayfun(@(X) isa(X, 'matlab.ui.Figure'), hndls(:));
end
out = reshape(out, size(hndls));

end
