function varargout = visionProjectGoOffline(obj, varargin)
% visionProjectGoOffline(varargin)
%
% Description: Function to get the open Vision project to go offline.
%
% Syntax: error_code = visionProjectGoOffline;
%
% Parameters: None
%
% Return value: Returns an error code. Zero means success

try
    obj.PROJECT_INTERFACE.Online = false;
    if ~(obj.PROJECT_INTERFACE.Online)
        rvalue = obj.ERRORCODES.VISION_SUCCESS;
    else
        rvalue = obj.ERRORCODES.VISION_PROJECT_COULD_NOT_GO_OFFLINE;
    end
catch
    rvalue = obj.ERRORCODES.VISION_PROJECT_COULD_NOT_GO_OFFLINE;
end

varargout{1} = rvalue;

end