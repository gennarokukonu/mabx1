function [status, result, cmdString] = svn(varargin)
%SVN Execute SVN command and return the result.
%   SVN(ARG1,ARG2,...) passes the arguments ARG1,ARG2,...
%   to the svn command line tool and calls the built command.
%
%   [~, RESULT]=SVN(...) outputs the result of attempted svn call.  If the
%   exit status of svn is not zero, an error will be returned.
%
%   [STATUS,RESULT] = SVN(...) outputs the result of the svn call, and
%   also saves its exit status into variable STATUS.
%
%   If the SVN executable is not available, it can be downloaded from:
%     http://subversion.tigris.org
%
%   See also PYTHON, PERL, SYSTEM, JAVA, MEX.

import('ptc_matlab_lib.*');

if ispc
    pairs = {'SVNExecutable', {fullfile(getenv('PROGRAMFILES'), 'TortoiseSVN', 'bin', 'svn.exe');
        fullfile(getenv('PROGRAMFILES(X86)'), 'TortoiseSVN', 'bin', 'svn.exe')}};
    if ismember('SVNExecutable', varargin)
        idx = find(strcmp('SVNExecutable', varargin), 1);
        optionlist = varargin(idx:idx+1);
        varargin = varargin([1:idx-1 idx+2:end]);
    else
        optionlist = pairs;
    end
    ARGS = parseargs(optionlist, pairs);
    ARGS.SVNExecutable = cellstr(ARGS.SVNExecutable);
    found = false;
    for ctr = 1:numel(ARGS.SVNExecutable)
        if exist(ARGS.SVNExecutable{ctr}, 'file')
            ARGS.SVNExecutable = ['"' ARGS.SVNExecutable{ctr} '"'];
            found = true;
            break;
        end
    end
    if ~found
        ARGS.SVNExecutable = 'svn';
    end
else
    ARGS.SVNExecutable = 'svn';
end

spaces_indices = cellfun(@(X) any(isspace(X)), varargin);
cmdString = [ARGS.SVNExecutable ' ' strimplode(varargin, ' ')];

[status, result] = system(cmdString);
result = strtrim(result);

end

