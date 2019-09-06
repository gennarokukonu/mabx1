function varargout = GetActiveProcesses(varargin)

import('ptc_matlab_lib.*');

if ~ispc
    error([mfilename ':' thisfuncname ':OSNotSupported'], ['The architecture ' computer('arch') ' is not supported.']);
end

if ispc
    STR = {'Option Explicit';
        'Dim objWMIService, objProcess, colProcess';
        'Dim strComputer, strList';
        '';
        'strComputer = "."';
        '';
        'Set objWMIService = GetObject("winmgmts:" _';
        '& "{impersonationLevel=impersonate}!\\" _ ';
        '& strComputer & "\root\cimv2")';
        '';
        'Set colProcess = objWMIService.ExecQuery _';
        '("Select * from Win32_Process")';
        '';
        'For Each objProcess in colProcess';
        '    WScript.StdOut.Writeline objProcess.Name';
        'Next';
        '';
        'WScript.Quit'};
    
    VBSFilePath = [tempname '.vbs'];
    fid = fopen(VBSFilePath, 'w');
    fprintf(fid, strimplode(formatstr(STR, 'FormatBackslashes', true), '\r\n'));
    fclose(fid);
    [~, result] = system(['cscript "' VBSFilePath '"']);
    delete(VBSFilePath);
    result = strexplode(result, sprintf('\n'));
    result = result(4:end);
    result(cellfun(@isempty, result)) = [];
    varargout{1} = result;
end

end