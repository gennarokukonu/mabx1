function write_dsv_data(varargin)
%WRITE_DSV_DATA: Function to write DSV calibration information as used in
%a dSPACE platform. This function assumes that the option to include only
%those Simulink.Parameter objects whose storage class is set to
%'ExportedGlobal' is used.

import('ptc_matlab_lib.*');
pairs = {'DSVFilePath', '', ...
    'DSVDATA', struct([]), ...
    'ShowWaitbar', true, ...
    'WaitbarParams', cell(0, 1), ...
    'Prefix', 'Tunable Parameters', ...
    'DSVLabelPathSeparator', '/', ...
    'Delimiter', ','};
ARGS = parseargs(varargin, pairs);

while isempty(ARGS.DSVFilePath)
    [filename, pathname] = uiputfile({'*.dsv', 'DSV File (*.dsv)'}, 'Save DSV file as...', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.DSVFilePath = fullfile(pathname, filename);
    if ~check_write_permissions(fileparts(ARGS.DSVFilePath))
        waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the DSV file.', 'ERROR', 'modal'));
        ARGS.DSVFilePath = '';
    end
end

NUMBER_OF_STEPS = 2;
CURRENT_STEP = 0;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

%% Step 1: Process data
[~, indices] = unique(ARGS.DSVDATA.Data.LabelNames, 'last');
ARGS.DSVDATA.Data = structfun(@(X) X(indices, :), ARGS.DSVDATA.Data, 'UniformOutput', false);
STR = cell(numel(ARGS.DSVDATA.Data.LabelNames), 1);
for ctr = 1:numel(STR)
    if numel(ARGS.DSVDATA.Data.Values{ctr}) >= 2
        initcode = '2';
    else
        initcode = '1';
    end
    STR{ctr} = [initcode ARGS.Delimiter '"' ARGS.Prefix '"' ARGS.DSVLabelPathSeparator '"' ARGS.DSVDATA.Data.LabelNames{ctr} '"' ARGS.Delimiter '""' ARGS.Delimiter strimplode(ARGS.DSVDATA.Data.Values{ctr}, ARGS.Delimiter)];
end
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Write to DSV file
STR = strimplode([ARGS.DSVDATA.Header; STR; {''}], sprintf('\r\n'));
fid = fopen(ARGS.DSVFilePath, 'w');
fwrite(fid, STR);
fclose(fid);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end