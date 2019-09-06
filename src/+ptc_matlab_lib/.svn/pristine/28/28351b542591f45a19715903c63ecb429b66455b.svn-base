function str = strexplode(str, separator)
%STREXPLODE Split a string into a cell array of strings
%   STREXPLODE(STR, SEPARATOR): Splits a string STR into a cell array of
%   strings by using the string SEPARATOR. If SEPARATOR is not specified,
%   it defaults to the null string (''), resulting in a cell array of which
%   each element is a character in string STR. The output is always a cell
%   array.
%
%   See also: strimplode, strcat, strvcat, regexp.

import('ptc_matlab_lib.*');

if ~ischar(str) || (nargin==2 && ~ischar(separator))
    error([mfilename ':' thisfuncname ':InvalidDataType'], 'STR and SEPARATOR have to be strings');
end

if nargin==1
    separator = '';
end

if isempty(str)
    str = {str};
    return;
elseif ~isempty(separator)
    str = regexp(str, regexptranslate('escape', separator), 'split');
    str = str(:);
else
    str = cellstr(str(:));
end

end