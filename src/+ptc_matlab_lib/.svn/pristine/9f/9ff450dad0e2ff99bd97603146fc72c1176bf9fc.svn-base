function varargout = GoOffline(obj)
%GOONLINE 

try
    obj.PROJECT_INTERFACE.CalibrationManagement.StopOnlineCalibration;
    rvalue=1;
catch
    rvalue=0;
end

varargout{1}=rvalue;

end
