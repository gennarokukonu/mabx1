function varargout = get_ecu_config_ini_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'ECUConfigINIFilePath', '', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', {}};
ARGS = parseargs(varargin, pairs);

if isempty(ARGS.ECUConfigINIFilePath)
    [filename, pathname] = uigetfile({'*.ini', 'INI File (*.ini)'}, 'Select INI File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.ECUConfigINIFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Parsing INI file, please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

NUMBER_OF_STEPS = 3;
CURRENT_STEP = 0;

%% Step 1: Read INI file
fid = fopen(ARGS.ECUConfigINIFilePath, 'r');
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = strtrim(file{1});
file(cellfun(@isempty, file)) = [];
fclose(fid);
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 2: Extract ECU information for each defined ECU type
ecu_def_start_indices = find(strcmp('[ecu_def_start]', file));
ecu_def_end_indices = find(strcmp('[ecu_def_end]', file));
assert(numel(ecu_def_start_indices) == numel(ecu_def_end_indices));
NumECUs = numel(ecu_def_start_indices);
file = arrayfun(@(X, Y) cellfun(@(Z) strtrim(ptc_matlab_lib.strexplode(Z, '=')), file(X+1:Y-1), 'UniformOutput', false), ecu_def_start_indices, ecu_def_end_indices, 'UniformOutput', false);
file = cellfun(@(X) cat(1, X{:}), file, 'UniformOutput', false);
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 3: Set up output
varargout{1} = struct('FilePath', ARGS.ECUConfigINIFilePath, ...
    'ECU_CONFIG_DATA', repmat(struct('FIELDS', {{}}, 'VALUES', {{}}), NumECUs, 1));
for ctr = 1:NumECUs
    varargout{1}.ECU_CONFIG_DATA(ctr).FIELDS = file{ctr}(1:2:end);
    varargout{1}.ECU_CONFIG_DATA(ctr).VALUES = file{ctr}(2:2:end);
end
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end