function varargout = visionGetVariableTargetState(obj, varargin)
% visionGetVariableTargetState(obj, varargin)
%
% Description: Function to read a variable's TargetState property from ATI
% Vision. This function can be used for state variables.
%
% Syntax: Variable = visionGetVariableTargetState(obj, 'DeviceName',
% <'PCM'>, 'FullDataItemName', <FullDataItemName>)
%
% Parameters:
%   DeviceName - Name of the device to be accessed
%
%   FullDataItemName - Name of the variable to be read
%
% Return value:
%   Variable - Returns the variable state as a string (TargetString).

import('ptc_matlab_lib.*');

pairs = {'DeviceName', 'PCM', ...
    'FullDataItemName', ''};
parseargs(varargin, pairs);

if strcmp(DeviceName, 'PCM')
    Device = obj.DEVICE_PCM;
else
    Device = obj.PROJECT_INTERFACE.FindDevice(DeviceName);
end
varargout{1} = Device.FindDataItem(FullDataItemName).TargetState;

end
