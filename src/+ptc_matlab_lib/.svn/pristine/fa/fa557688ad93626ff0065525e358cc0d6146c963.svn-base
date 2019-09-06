function varargout = svn_get_current_revision(varargin)

import('ptc_matlab_lib.*');
pairs = {'Path', pwd};
ARGS = parseargs(varargin, pairs);

[~, STR] = svn('info', [ARGS.Path '@']);
STR = strexplode(strtrim(STR), sprintf('\n'));
STR = strtrim(STR);

x = regexp(STR, 'Revision:\s+(?<Revision>\d+)', 'names', 'once');
x = x(find(~cellfun(@isempty, x), 1));
varargout{1} = str2double(x{1}.Revision);

end