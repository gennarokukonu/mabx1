function [status, result] = svnup(varargin)
%SVNUP Non-interactive svn update
%
%   svnup('Path', <getenv_matlab('ENV_VAR_ROOT_DIR')>)

import('ptc_matlab_lib.*');

pairs = {'Path', getenv_matlab('ENV_VAR_ROOT_DIR')};
parseargs(varargin, pairs);

args = rowvec({'update', Path, '--non-interactive', '--trust-server-cert'});
[status, result] = svn(args{:});

end