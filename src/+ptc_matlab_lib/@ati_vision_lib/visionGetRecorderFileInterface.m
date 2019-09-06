function varargout = visionGetRecorderFileInterface(obj, varargin)
% visionGetRecorderFile(obj, varargin)
%
% Description: Function to get the interface to an ATI Vision recorder
%
% Syntax: [error_code, RecorderFileInterface] = visionGetRecorderFileInterface('RecorderFilePath', <''>)
%
% Parameters:
%   RecorderFilePath - Absolute path of the recorder file to be opened. The
%   default value is the empty string. If left unspecified, the function
%   prompts the user to select the Vision REC File.
%
% Return value: Returns an error code (zero means success), and an object
% of class COM.Vision_RecorderFile

import('ptc_matlab_lib.*');
pairs = {'RecorderFilePath', ''};
parseargs(varargin, pairs);

if isempty(strtrim(RecorderFilePath)) || ~exist(strtrim(RecorderFilePath), 'file')
    [filename, pathname] = uigetfile({'*.rec'; 'REC File (*.rec)'}, 'Choose REC File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
end

try
    RecorderFile = actxserver('Vision.RecorderFile');
    RecorderFile.OpenRecorderFile(fullfile(pathname, filename));
    
    rvalue = obj.ERRORCODES.VISION_SUCCESS;
catch
    rvalue = obj.ERRORCODES.VISION_COULD_NOT_GET_RECORDER_FILE_INTERFACE;
end

varargout = {rvalue, RecorderFile};

end
