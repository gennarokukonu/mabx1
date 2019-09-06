function P = genpath_nosvn(varargin)
%GENPATH_NOSVN Generate recursive toolbox path while excluding '.svn' and
%'_svn' directories
%   P = GENPATH_NOSVN returns a new path string by adding all the
%   subdirectories of MATLABROOT/toolbox, including empty subdirectories
%
%   P = GENPATH_NOSVN(D) returns a path string starting in D, plus,
%   recursively, all the subdirectories of D, including empty
%   subdirectories
%
%   NOTE 1: GENPATH will not exactly recreate the original MATLAB path.
%  
%   NOTE 2: GENPATH only includes subdirectories allowed on the MATLAB
%   path.
%  
%   See also path, genpath, addpath, rmpath, savepath.

import('ptc_matlab_lib.*');

if nargin==0
    inarg = fullfile(matlabroot, 'toolbox');
elseif nargin==1
    inarg = varargin{1};
else
    error([mfilename ':' thisfuncname ':InvalidNumberOfArguments'], 'Invalid number of arguments');
end

%Obtain the result of genpath
P = genpath(inarg);
if ~isempty(P)    
    P = regexp(P, pathsep, 'split');
    
    if ispc
        pattern = '(\\\.svn)|(\\_svn)';
    else
        pattern = '(/\.svn)|(/_svn)';
    end
    
    P(~cellfun(@isempty, regexp(normcase(P), normcase(pattern), 'once'))) = [];
    P = strimplode(P, pathsep);
end

end