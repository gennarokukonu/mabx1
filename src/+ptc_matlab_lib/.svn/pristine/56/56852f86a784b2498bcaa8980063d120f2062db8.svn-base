function version = os_ver
%os_ver: Returns the OS version as a string.

import('ptc_matlab_lib.*');

try
    OS = System.Environment.OSVersion;
    result = [num2str(OS.Version.Major) '.' num2str(OS.Version.Minor) '.' num2str(OS.Version.Build)];
catch
    result = char(java.lang.System.getProperty('os.version'));
end

version = strtrim(result);

end