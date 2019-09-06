function varargout = GoOnline(obj)
%GOONLINE 

try
    obj.PROJECT_INTERFACE.CalibrationManagement.StartOnlineCalibration;
    rvalue=1;
catch
    % Online Calibration Failed. Try to Refresh Interface Connection and
    % Platform Configuration, then attempt to Start Online Calibration
    % again.
    try
        obj.PROJECT_INTERFACE.PlatformManagement.RefreshInterfaceConnections(1);
        obj.PROJECT_INTERFACE.PlatformManagement.RefreshPlatformConfiguration;
        obj.PROJECT_INTERFACE.CalibrationManagement.StartOnlineCalibration;
        rvalue=1;
    catch
        rvalue=0;    
    end
end

varargout{1}=rvalue;

end
