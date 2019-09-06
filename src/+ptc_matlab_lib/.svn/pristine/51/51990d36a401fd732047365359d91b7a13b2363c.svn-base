function varargout = visionExportREC2MAT(obj, varargin)
% visionExportREC2MAT(obj, varargin)
%
% Description: Function to export a REC file to MAT.
%
% Syntax: [error_code, MATFilePath] = visionExportREC2MAT(obj, 'RECFilePath',
% <RECFilePath>)
%
% Parameters:
%   RECFilePath: Path to the Vision REC file
%
% Return value:
%   error_code: Returns an error code. Zero means success
%
%   MATFilePath: Returns the path to exported MAT file

import('ptc_matlab_lib.*');

try
    pairs = {'RECFilePath', ''};
    ARGS = parseargs(varargin, pairs);
    
    ARGS.RECFilePath = strtrim(ARGS.RECFilePath);
    
    if isempty(ARGS.RECFilePath)
        [filename, pathname] = uigetfile({'*.rec', 'REC File (*.rec)'}, 'Vision REC File', pwd);
        if isequal(filename, 0) || isequal(pathname, 0)
            %Cancel was pressed
            varargout{1} = obj.ERRORCODES.VISION_REC_FILE_EXPORT_CANCELLED;
            return;
        end
        ARGS.RECFilePath = fullfile(pathname, filename);
    end
    
    %Export recorder file to MAT
    [~, filename, fileext] = fileparts(ARGS.RECFilePath);
    tempDirectory = tempname;
    if ~exist(tempDirectory, 'dir')
        mkdir(tempDirectory);
    end
    tempRECFilePath = fullfile(tempDirectory, [filename fileext]);
    copyfile(ARGS.RECFilePath, tempRECFilePath, 'f');
    
    RECORDER_INTERFACE = actxserver('Vision.RecorderFile');
    status_code = RECORDER_INTERFACE.OpenRecorderFile(tempRECFilePath);
    if ~ismember(status_code, {'VISION_OK', 'VISION__OK'})
        varargout{1} = obj.ERRORCODES.VISION_COULD_NOT_OPEN_RECORDER_FILE;
        varargout{2} = [];
        return;
    end
    
    [RECFileDir, RECFileName] = fileparts(tempRECFilePath);
    
    status_code = RECORDER_INTERFACE.ExportToMatlab( ...
        fullfile(RECFileDir, [RECFileName '.mat']), ...             % szPath as String
        true, ...                                                   % MatlabStructure as Boolean
        'VISION_REC_MAT_EXPORT_BET_SAMPLES_USE_MOST_RECENT', ...    % BetweenSamples as VISION_REC_MAT_EXPORT_BET_SAMPLES
        'A', ...                                                    % ArrayName as String
        false, ...                                                  % Workspace as Boolean
        true, ...                                                   % WriteFullName as Boolean
        'VISION_REC_EXPORT_TIMESTAMP_FASTEST_SAMPLE', ...           % TimestampType as VISION_REC_EXPORT_TIMESTAMP
        100, ...                                                    % TimestampResolution as Long
        'VISION_TIME_UNIT_MILLI' ...                                % TimestampResolutionUnits as VISION_TIME_UNIT
        );
    
%     status_code = obj.RECORDER_INTERFACE.Export( ...
%         tempRECFilePath, ...               %bstrFilename as String
%         'VISION_REC_EXPORT_MATLAB' ...      %Format as VISION_REC_EXPORT_FILE_FORMAT
%         );
    
    delete(tempRECFilePath);
    
    if ismember(status_code, {'VISION_OK', 'VISION__OK'}) && exist(fullfile(RECFileDir, [RECFileName '.mat']), 'file')
        varargout{1} = obj.ERRORCODES.VISION_SUCCESS;
        varargout{2} = fullfile(RECFileDir, [RECFileName '.mat']);
    else
        varargout{1} = obj.ERRORCODES.VISION_COULD_NOT_EXPORT_REC_FILE_TO_MAT;
        varargout{2} = [];
    end
catch %#ok<CTCH>
    varargout{1} = obj.ERRORCODES.VISION_COULD_NOT_EXPORT_REC_FILE_TO_MAT;
    varargout{2} = [];
end

end
