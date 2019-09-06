function varargout = ShowWindow(obj, varargin)
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
    obj.PROJECT_INTERFACE.MainWindow.Visible = 1;
%     rvalue = obj.ERRORCODES.VISION_SUCCESS;
    rvalue = 1;
catch
%     rvalue = obj.ERRORCODES.VISION_COULD_NOT_CLOSE_PROJECT;
    rvalue = 0;
end

varargout{1} = rvalue;

end


