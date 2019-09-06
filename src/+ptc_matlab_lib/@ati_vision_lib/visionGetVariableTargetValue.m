function varargout = visionGetVariableTargetValue(obj, varargin)
% visionGetVariableTargetValue(obj, varargin)
%
% Description: Function to read a variable's TargetValue property from ATI
% Vision. This function can be used for text strings, scalars, and state
% variables.
%
% Syntax: Variable = visionGetVariableTargetValue(obj, 'DeviceName',
% <'PCM'>, 'FullDataItemName', <FullDataItemName>)
%
% Parameters:
%   DeviceName - Name of the device to be accessed
%
%   FullDataItemName - Name of the variable to be read
%
% Return value:
%   Variable - Returns the variable value (TargetValue).

import('ptc_matlab_lib.*');

pairs = {'DeviceName', 'PCM', ...
    'FullDataItemName', ''};
parseargs(varargin, pairs);

if strcmp(DeviceName, 'PCM')
    Device = obj.DEVICE_PCM;
else
    Device = obj.PROJECT_INTERFACE.FindDevice(DeviceName);
end
varargout{1} = Device.FindDataItem(FullDataItemName).TargetValue;

end
