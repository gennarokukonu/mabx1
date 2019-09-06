function varargout = slworkspacestruct(varargin)
%This function will return the contents of the base workspace or the caller
%workspace as a MATLAB structure.

import('ptc_matlab_lib.*');
pairs = {'Sys', bdroot(gcs), ...
    'VariableNameRegularExpressionFilter', '.*', ...
    'VariableNameRegExpFun', @regexp, ...
    'ClassNameRegularExpressionFilter', '.*', ...
    'ClassNameRegExpFun', @regexp};
ARGS = parseargs(varargin, pairs);

ARGS.VariableNameList = cellstr(slevalglobal('Sys', ARGS.Sys, 'Expression', 'who;'));
indices = cellfun(@isempty, ARGS.VariableNameRegExpFun(ARGS.VariableNameList, ARGS.VariableNameRegularExpressionFilter, 'once'));
ARGS.VariableNameList(indices) = [];
if isempty(ARGS.VariableNameList)
    varargout{1} = struct([]);
    return;
end

for ctr = 1:numel(ARGS.VariableNameList)
    thisObject = slevalglobal('Sys', ARGS.Sys, 'Expression', [ARGS.VariableNameList{ctr} ';']);
    if ~isempty(ARGS.ClassNameRegExpFun(class(thisObject), ARGS.ClassNameRegularExpressionFilter, 'once'))
        if ~isa(thisObject, 'handle')
            varargout{1}.(ARGS.VariableNameList{ctr}) = thisObject;
        else
            if ~isa(thisObject, 'matlab.ui.Figure')
                try
                    varargout{1}.(ARGS.VariableNameList{ctr}) = thisObject.copy;
                catch
                    varargout{1}.(ARGS.VariableNameList{ctr}) = thisObject;
                end
            else
                varargout{1}.(ARGS.VariableNameList{ctr}) = thisObject;
            end
        end
    end
end

end