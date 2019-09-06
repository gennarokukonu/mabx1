function varargout = visionCloseProject(obj, varargin)
% visionCloseProject(obj, varargin)
%
% Description: Function to close the currently open project.
%
% Syntax: error_code = visionCloseProject;
%
% Parameters: None
%
% Return value: Returns an error code. Zero means success

try
    obj.PROJECT_INTERFACE.Close();
    rvalue = obj.ERRORCODES.VISION_SUCCESS;
catch
    rvalue = obj.ERRORCODES.VISION_COULD_NOT_CLOSE_PROJECT;
end

varargout{1} = rvalue;

end
