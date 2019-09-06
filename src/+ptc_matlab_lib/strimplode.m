function out = strimplode(cellarray, separator)
%STRIMPLODE: Function to join multiple strings
%   STRIMPLODE(CELLARRAY, SEPARATOR) Joins cell array of strings CELLARRAY
%   using SEPARATOR as the intermediate string.
%
%   See also: strsplit, strexplode

if isempty(cellarray)
    out = '';
    return;
end
if nargin == 1
    separator = '';
end

separator = ptc_matlab_lib.formatstr(separator, 'FormatBackslashes', true);
out = strjoin(cellarray(:).', separator);

%% Sundeep Tuteja, 2014-01-22: This code is to be used once the move is made to MATLAB R2011b or later.
% cellarray2 = ptc_matlab_lib.push(cellarray(:), repmat({separator}, numel(cellarray)-1, 1), 2:2:2*numel(cellarray)-1);
% out = char([cellarray2{:}]);

end