function varargout = visionOpenProject(obj, varargin)
% visionOpenProject(varargin)
%
% Description: Function to open an ATI Vision project
%
% Syntax: error_code = visionOpenProject('VPJFilePath', <VPJFilePath>)
%         error_code = visionOpenProject %Opens a file selection dialog
%
% Parameters:
%   VPJFilePath - Complete path to the VPJ file to be opened. If left
%   empty, the function opens a file selection dialog to open the VPJ file.
%
% Return value: Returns an error code. Zero means success

import('ptc_matlab_lib.*');

pairs = {'VPJFilePath', ''};
parseargs(varargin, pairs);

VPJFilePath = strtrim(VPJFilePath);

if isempty(VPJFilePath) || ~exist(VPJFilePath, 'file')
    [filename, pathname] = uigetfile({'*.vpj', 'VPJ File'}, 'Choose VPJ File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    else
        VPJFilePath = fullfile(pathname, filename);
    end    
end

try
    obj.PROJECT_INTERFACE.Open(VPJFilePath);
    rvalue = obj.ERRORCODES.VISION_SUCCESS;
catch
    rvalue = obj.ERRORCODES.VISION_COULD_NOT_OPEN_PROJECT;
end

varargout{1} = rvalue;

end