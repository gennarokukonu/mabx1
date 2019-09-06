function varargout = svn_get_url(varargin)

import('ptc_matlab_lib.*');
pairs = {'Path', ''};
ARGS = parseargs(varargin, pairs);

[status, result] = svn('info', ['"' ARGS.Path '"@']);
if status
    result = '';
else
    X = regexp(result, '\s+URL:\s+(?<URL>[^\s]+)\s+', 'once', 'names');
    result = X.URL;
end

varargout{1} = result;

end