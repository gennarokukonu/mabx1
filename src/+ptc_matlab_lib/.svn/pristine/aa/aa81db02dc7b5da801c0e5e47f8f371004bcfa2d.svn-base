function [status, result, cmdString] = python(varargin)
%PYTHON Execute Python command and return the result.
%   PYTHON(PYTHONFILE) calls python script specified by the file PYTHONFILE
%   using appropriate python executable.
%
%   PYTHON(PYTHONFILE,ARG1,ARG2,...) passes the arguments ARG1,ARG2,...
%   to the python script file PYTHONFILE, and calls it by using appropriate
%   python executable.
%
%   [~, RESULT]=PYTHON(...) outputs the result of attempted python call.  If the
%   exit status of python is not zero, an error will be returned.
%
%   [STATUS,RESULT] = PYTHON(...) outputs the result of the python call, and
%   also saves its exit status into variable STATUS.
%
%   If the Python executable is not available, it can be downloaded from:
%     http://www.python.org
%
%   See also PERL, SYSTEM, JAVA, MEX.

import('ptc_matlab_lib.*');

if ispc
    pairs = {'PythonExecutable', cell(0, 1)};
    if ismember('PythonExecutable', varargin)
        idx = find(strcmp('PythonExecutable', varargin), 1);
        optionlist = varargin(idx:idx+1);
        varargin = varargin([1:idx-1 idx+2:end]);
    else
        optionlist = pairs;
    end
    ARGS = parseargs(optionlist, pairs);
    ARGS.PythonExecutable = cellstr(ARGS.PythonExecutable);
    found = false;
    for ctr = 1:numel(ARGS.PythonExecutable)
        if exist(ARGS.PythonExecutable{ctr}, 'file')
            ARGS.PythonExecutable = ['"' ARGS.PythonExecutable{ctr} '"'];
            found = true;
            break;
        end
    end
    if ~found
        ARGS.PythonExecutable = 'python';
    end
else
    ARGS.PythonExecutable = 'python';
end

spaces_indices = cellfun(@(X) any(isspace(X)), varargin);
cmdString = [ARGS.PythonExecutable ' ' strimplode(varargin, ' ')];

[status, result] = system(cmdString);
result = strtrim(result);

end
