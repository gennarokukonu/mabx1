function varargout = visionSetVariable(obj, varargin)
% visionSetVariable(obj, varargin)
%
% Description: Function to set variables within ATI Vision.
%
% IMPORTANT!!! This function needs to be used with care. Care has to be taken to
% not allow critically wrong values to be set, otherwise that can have a detrimental
% effect on the system connected.
%
% Syntax: error_code = visionSetVariable('DeviceName', <'PCM'>, ...
%   'FullDataItemName', <FullDataItemName>, 'ValuesDictionary', <ValuesDictionary>)
%
% Parameters:
%   DeviceName - Name of the device to be accessed
%
%   FullDataItemName - Full name of the variable to be written to
%
%   ValuesDictionary - Dictionary of values to be written. Depending on
%   the variable type, the appropriate properties are to be set
%       1. Text String: {'TargetValue', <TargetValue String>}
%       2. Scalar: {'TargetValue', <TargetValue Scalar>}
%       3. State Variable: {'TargetValue', <TargetValue Scalar>}
%       4. 1D Array: {'YAxisTargetValues', <TargetValues array>}
%       5. 2D Array: {'ZAxisTargetValues', <TargetValues matrix>}
%       6. 2D Table: {'XAxisTargetValues', <TargetValues array>, 'YAxisTargetValues', <TargetValues array>}
%       7. 3D Table: {'XAxisTargetValues', <TargetValues array>, 'YAxisTargetValues', <TargetValues array>,
%                     'ZAxisTargetValues', <TargetValues matrix>}
%
%       Wherever a matrix needs to be specified, the number of rows is equal to
%       the number of elements in the X axis, and the number of columns is equal to
%       the number of elements in the Y axis.
%
% Return value: Returns an error code. Zero means success.

import('ptc_matlab_lib.*');

pairs = {'DeviceName', 'PCM', ...
    'FullDataItemName', '', ...
    'ValuesDictionary', {}};
parseargs(varargin, pairs);

try
    if strcmp(DeviceName, 'PCM')
        Device = obj.DEVICE_PCM;
    else
        Device = obj.PROJECT_INTERFACE.FindDevice(DeviceName);
    end
    Variable = Device.FindDataItem(FullDataItemName);
    
    for ctr = 1:2:length(ValuesDictionary)
        Variable.(ValuesDictionary{ctr}) = ValuesDictionary{ctr+1};
    end
    
    rvalue = obj.ERRORCODES.VISION_SUCCESS;
catch
    rvalue = obj.ERRORCODES.VISION_COULD_NOT_SET_VARIABLE;
end

varargout{1} = rvalue;

end
