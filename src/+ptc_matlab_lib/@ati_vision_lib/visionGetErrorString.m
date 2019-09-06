function varargout = visionGetErrorString(obj, varargin)
% visionGetErrorString(obj, varargin)
%
% Description: Function to get the error string corresponding to an error
% code.
%
% Syntax: error_string = visionGetErrorString(obj,
% 'ErrorCode', <ErrorCode>)
%
% Parameters:
%   ErrorCode - Error code for which the corresponding error string is to
%   be obtained.
%
% Return value:
%   error_string - The string corresponding to the error code

import('ptc_matlab_lib.*');

pairs = {'ErrorCode', []};
parseargs(varargin, pairs);

error_strings = properties(obj.ERRORCODES);
error_values = cellfun(@(X) obj.ERRORCODES.(X), error_strings, 'UniformOutput', false);
index = find(cell2mat(error_values) == ErrorCode, 1);

if ~isempty(index)
    varargout{1} = error_strings{index};
else
    varargout{1} = '';
end

end