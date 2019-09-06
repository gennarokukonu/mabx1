function varargout = MaximizeWindow(obj,varargin)
%MAXIMIZESCREEN
MAXIMIZED=1;
try
    obj.PROJECT_INTERFACE.MainWindow.State = MAXIMIZED;
    rvalue=1;
catch
    rvalue=0;
end

varargout{1}=rvalue;

end