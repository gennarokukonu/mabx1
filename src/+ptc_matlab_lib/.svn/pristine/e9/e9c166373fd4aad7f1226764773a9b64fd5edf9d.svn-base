function varargout = visionGetVariable(obj, varargin)
% visionGetVariable(obj, varargin)
%
% Description: Function to read variable from ATI Vision
%
% Syntax: [error_code, Variable] = visionGetVariable(obj, 'DeviceName',
% <'PCM'>, 'FullDataItemName', <FullDataItemName>)
%
% Parameters:
%   DeviceName - Name of the device to be accessed
%
%   FullDataItemName - Name of the variable to be read
%
% Return value: Returns a vector containing two elements
%   error_code - Returns an error code. Zero means success.
%
%   Variable - Returns the variable object.

import('ptc_matlab_lib.*');

pairs = {'DeviceName', 'PCM', ...
    'FullDataItemName', ''};
parseargs(varargin, pairs);

try
    if strcmp(DeviceName, 'PCM')
        Device = obj.DEVICE_PCM;
    else
        Device = obj.PROJECT_INTERFACE.FindDevice(DeviceName);
    end
    Variable = Device.FindDataItem(FullDataItemName);
    rvalue = obj.ERRORCODES.VISION_SUCCESS;
catch
    Variable = [];
    rvalue = obj.ERRORCODES.VISION_COULD_NOT_GET_VARIABLE;
end

varargout{1} = rvalue;
varargout{2} = Variable;

end
