function varargout = visionStrategyImport(obj, varargin)
% visionStrategyImport(obj, varargin)
%
% Description: Function to import one of the following files into a new or
% existing strategy: (*.hex, *.s19, *.bin, *.a2l, *.rob, *.ati, *.map)
%
% Syntax: error_code = visionStrategyImport('StrategyFilePath', <''>, ...
%   'ImportFilePath', <''>)
%
% Parameters:
%   StrategyFilePath - Path to the strategy file
%
%   ImportFilePath - Path to the file to be imported
%
% Return value: Returns an error code. Zero means success

import('ptc_matlab_lib.*');

pairs = {'DeviceName', 'PCM', ...
    'StrategyFilePath', '', ...
    'ImportFilePath', '', ...
    'StrategyPreset', 'DAF'};
ARGS = parseargs(varargin, pairs);

ARGS.StrategyFilePath = strtrim(ARGS.StrategyFilePath);
ARGS.ImportFilePath = strtrim(ARGS.ImportFilePath);

if isempty(ARGS.StrategyFilePath)
    [filename, pathname] = uigetfile({'*.vst', 'Vision Strategy File (*.vst)'}, 'Select Strategy File');
    if isequal(filename, 0) || isequal(pathname, 0)
        varargout{1} = obj.ERRORCODES.VISION_COULD_NOT_IMPORT_FILE;
        return;
    end
    ARGS.StrategyFilePath = fullfile(pathname, filename);
end

if isempty(ARGS.ImportFilePath)
    [filename, pathname] = uigetfile({'*.a2l', 'A2L File (*.a2l)'; '*.c19', 'C19 File (*.c19)'}, 'Select file to be imported');
    if isequal(filename, 0) || isequal(pathname, 0)
        varargout{1} = obj.ERRORCODES.VISION_COULD_NOT_IMPORT_FILE;
        return;
    end
    ARGS.ImportFilePath = fullfile(pathname, filename);
end

try
    [~, ~, ImportFileExt] = fileparts(ARGS.ImportFilePath);
    if pathcmp(ImportFileExt, '.a2l')
        obj.STRATEGY_INTERFACE.SetASAP2ImportProperties(true, ...
            false, ...
            true, ...
            true, ...
            true, ...
            false, ...
            false, ...
            'NAMES_AS_GROUPS', ...
            ARGS.StrategyPreset, ...
            false);
        obj.STRATEGY_INTERFACE.Import(ARGS.ImportFilePath);
    elseif pathcmp(ImportFileExt, '.hex')
        obj.STRATEGY_INTERFACE.SetHexImportProperties(true, false, false, false, {}, true);
    end
    
    %Import file, and save the file
    obj.STRATEGY_INTERFACE.Import(ARGS.ImportFilePath);
    obj.STRATEGY_INTERFACE.SaveAs(ARGS.StrategyFilePath);
    rvalue = obj.ERRORCODES.VISION_SUCCESS;
catch
    rvalue = obj.ERRORCODES.VISION_COULD_NOT_IMPORT_FILE;
end

varargout{1} = rvalue;

end
