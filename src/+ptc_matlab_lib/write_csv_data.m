function write_csv_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'CSVFilePath', '', ...
    'CSVDATA', struct([]), ...
    'ShowWaitbar', true, ...
    'NewLine', sprintf('\r\n'), ...
    'Delimiter', ',', ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

while isempty(ARGS.CSVFilePath)
    [filename, pathname] = uiputfile({'*.csv', 'CSV File (*.csv)'}, 'Save CSV file as...', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.CSVFilePath = fullfile(pathname, filename);
    if ~check_write_permissions(fileparts(ARGS.CSVFilePath))
        waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the CSV file.', 'ERROR', 'modal'));
        ARGS.CSVFilePath = '';
    end
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

%% Step 1: Process data
assert(isequal(numel(ARGS.CSVDATA.Content.LabelNames), numel(ARGS.CSVDATA.Content.LabelTypes), numel(ARGS.CSVDATA.Content.Values)));
STR = cell(numel(ARGS.CSVDATA.Content.LabelNames), 1);
[ARGS.CSVDATA.Content.LabelNames, indices] = sort(ARGS.CSVDATA.Content.LabelNames);
ARGS.CSVDATA.Content.LabelTypes = ARGS.CSVDATA.Content.LabelTypes(indices);
ARGS.CSVDATA.Content.Values = ARGS.CSVDATA.Content.Values(indices);
for ctr = 1:numel(STR)
    switch ARGS.CSVDATA.Content.LabelTypes{ctr}
        case {'VALUE', 'VAL_BLK', 'AXIS_PTS', 'ASCII'}
            STR{ctr} = [ARGS.Delimiter ARGS.CSVDATA.Content.LabelNames{ctr} ARGS.NewLine ...
                ARGS.CSVDATA.Content.LabelTypes{ctr} ARGS.Delimiter ARGS.Delimiter strjoin(ARGS.CSVDATA.Content.Values{ctr}(:).', ARGS.Delimiter)];
        case {'CURVE'}
            STR{ctr} = [ARGS.Delimiter ARGS.CSVDATA.Content.LabelNames{ctr} ARGS.NewLine ...
                ARGS.CSVDATA.Content.LabelTypes{ctr} ARGS.NewLine ...
                strimplode(arrayfun(@(X) [ARGS.Delimiter ARGS.Delimiter strjoin(ARGS.CSVDATA.Content.Values{ctr}(X, :), ARGS.Delimiter)], 1:size(ARGS.CSVDATA.Content.Values{ctr}, 1), 'UniformOutput', false), ARGS.NewLine)];
        case {'MAP'}
            STR{ctr} = [ARGS.Delimiter ARGS.CSVDATA.Content.LabelNames{ctr} ARGS.NewLine ...
                ARGS.CSVDATA.Content.LabelTypes{ctr} ARGS.NewLine ARGS.NewLine ...
                strimplode(arrayfun(@(X) [ARGS.Delimiter ARGS.Delimiter strjoin(ARGS.CSVDATA.Content.Values{ctr}(X, :), ARGS.Delimiter)], 1:size(ARGS.CSVDATA.Content.Values{ctr}, 1), 'UniformOutput', false), ARGS.NewLine)];
    end
end
STR = [strimplode(ARGS.CSVDATA.Header, ARGS.Delimiter) ARGS.NewLine ...
    strjoin(STR(:).', [ARGS.NewLine ARGS.NewLine]) ARGS.NewLine];
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Write CSV file
fid = fopen(ARGS.CSVFilePath, 'w');
fwrite(fid, STR);
fclose(fid);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end