function varargout = get_dsv_data(varargin)
%GET_DSV_DATA: Function to read DSV calibration information as used in
%a dSPACE platform. This function assumes that the option to include only
%those Simulink.Parameter objects whose storage class is set to
%'ExportedGlobal' is used.

import('ptc_matlab_lib.*');
pairs = {'DSVFilePath', '', ...
    'ShowWaitbar', true, ...
    'HashAlgorithm', 'SHA-512', ...
    'WaitbarParams', cell(0, 1), ...
    'HeaderRowStart', 1, ...
    'HeaderRowStop', 4, ...
    'DataRowStart', 5, ...
    'Prefix', 'Tunable Parameters', ...
    'LabelNameIdx', 2, ...
    'ValueIdx', 4, ...
    'DSVLabelPathSeparator', '/', ...
    'CommentString', '<Enter your comment here>', ...
    'Delimiter', ','};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.DSVFilePath, 'file')
    [filename, pathname] = uigetfile({'*.dsv', 'DSV File (*.dsv)'; '*', 'All Files (*)'}, 'Select DSV File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.DSVFilePath = fullfile(pathname, filename);
end

NUMBER_OF_STEPS = 2;
CURRENT_STEP = 0;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

%% Step 1: Read DSV File
fid = fopen(ARGS.DSVFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
file(cellfun(@isempty, file)) = [];
fclose(fid);
DSV.FilePath = ARGS.DSVFilePath;
DSV.HashAlgorithm = ARGS.HashAlgorithm;
DSV.Hash = hashfile('FilePath', DSV.FilePath, 'HashAlgorithm', DSV.HashAlgorithm);
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Process DSV file
DSV.DSVDATA.Header = file(ARGS.HeaderRowStart:ARGS.HeaderRowStop);
DSV.DSVDATA.Data.LabelNames = cell(numel(file(ARGS.DataRowStart:end)), 1);
DSV.DSVDATA.Data.Values = cell(numel(file(ARGS.DataRowStart:end)), 1);
file_data_splitstr = cellfun(@(X) ptc_matlab_lib.strexplode(X, ARGS.Delimiter), file(ARGS.DataRowStart:end), 'UniformOutput', false);
for ctr = 1:numel(file_data_splitstr)
    thisLabel = strexplode(file_data_splitstr{ctr}{ARGS.LabelNameIdx}, ARGS.DSVLabelPathSeparator);
    DSV.DSVDATA.Data.LabelNames{ctr} = strrep(thisLabel{end}, '"', '');
    DSV.DSVDATA.Data.Values{ctr} = strtrim(file_data_splitstr{ctr}(ARGS.ValueIdx:end));
end
[~, indices] = unique(DSV.DSVDATA.Data.LabelNames, 'last');
DSV.DSVDATA.Data = structfun(@(X) X(indices, :), DSV.DSVDATA.Data, 'UniformOutput', false);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

varargout{1} = DSV;

end