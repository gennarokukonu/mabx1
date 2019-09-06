function varargout = visionProjectGoOnline(obj, varargin)
% visionProjectGoOnline(varargin)
%
% Description: Function to get the open Vision project to go online.
%
% Syntax: error_code = visionProjectGoOnline;
%
% Parameters: None
%
% Return value: Returns an error code. Zero means success

try
    obj.PROJECT_INTERFACE.Online = true;
    if obj.PROJECT_INTERFACE.Online
        rvalue = obj.ERRORCODES.VISION_SUCCESS;
    else
        rvalue = obj.ERRORCODES.VISION_PROJECT_COULD_NOT_GO_ONLINE;
    end
catch
    rvalue = obj.ERRORCODES.VISION_PROJECT_COULD_NOT_GO_ONLINE;
end

varargout{1} = rvalue;

end