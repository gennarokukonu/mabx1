function out = num2str_custom(in, varargin)
%NUM2STR_CUSTOM Same as num2str, but displays the result in a single line
%as a MATLAB expression. Takes the same arguments as num2str
%
%   See also: num2str

import('ptc_matlab_lib.*');

if ndims(in) >= 3 || ~isnumeric(in)
    out = ['<' regexprep(num2str(size(in)), '\s+', 'x') ' ' class(in) '>'];
    return;
end

if isempty(varargin)
    out = regexprep(strimplode(cellstr(num2str(in)), '; '), '\s+', ' ');
else
    varargin = rowvec(varargin);
    out = regexprep(strimplode(cellstr(num2str(in, varargin{:})), '; '), '\s+', ' ');
end

if ~isscalar(in)
    out = ['[' strtrim(out) ']'];
end

%Fix for cases where the imaginary part may be infinity
out = strrep(out, 'Infi', 'Inf*i');

end