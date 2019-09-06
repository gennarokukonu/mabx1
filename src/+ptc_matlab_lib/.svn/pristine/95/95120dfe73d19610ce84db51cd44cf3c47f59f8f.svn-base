function varargout = visionKill(obj, varargin)
% visionCloseProject(obj, varargin)
%
% Description: Function to kill ATI Vision. Kills Vision.exe. Use with care.
%
% Syntax: error_code = visionKill;
%
% Parameters: None
%
% Return value: Returns an error code. Zero means success

import('ptc_matlab_lib.*');

try
    system('taskkill /im Vision.exe /f');
    if ~ismember('Vision.exe', GetActiveProcessList)
        rvalue = obj.ERRORCODES.VISION_SUCCESS;
    else
        rvalue = obj.ERRORCODES.VISION_COULD_NOT_KILL;
    end
catch
    rvalue = obj.ERRORCODES.VISION_COULD_NOT_KILL;
end

varargout{1} = rvalue;

end