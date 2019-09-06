function varargout = is_svn_versioned_file(varargin)

import('ptc_matlab_lib.*');

pairs = {'Path', cell(0, 1)};
ARGS = parseargs(varargin, pairs);
if isempty(ARGS.Path)
    ARGS.Path = uiselectfiles();
end
ARGS.Path = cellstr(ARGS.Path);

varargout{1} = false(size(ARGS.Path));
for ctr = 1:numel(ARGS.Path)
    if ~exist(ARGS.Path{ctr}, 'dir') && ~exist(ARGS.Path{ctr}, 'file')
        varargout{1}(ctr) = false;
    else
        [~, info] = svn('info', ['"' ARGS.Path{ctr} '"@']);
        info = strtrim(info);
        info = strexplode(info, sprintf('\n'));
        info = info{1};
        varargout{1}(ctr) = isempty(strfind(info, 'W155010')) && isempty(strfind(info, 'E200025'));
    end
end

end