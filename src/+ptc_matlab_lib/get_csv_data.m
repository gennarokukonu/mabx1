function varargout = get_csv_data(varargin)
%GET_CSV_DATA: Function to read CSV calibration information as used in
%TeamCenter

import('ptc_matlab_lib.*');
pairs = {'CSVFilePath', '', ...
    'ShowWaitbar', true, ...
    'HashAlgorithm', 'SHA-512', ...
    'WaitbarParams', cell(0, 1), ...
    'RecognizeQuotesForASCII', true, ...
    'HeaderRow', 1, ...
    'Delimiter', ','};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.CSVFilePath, 'file')
    [filename, pathname] = uigetfile({'*.csv', 'CSV File (*.csv)'; '*', 'All Files (*)'}, 'Select CSV File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.CSVFilePath = fullfile(pathname, filename);
end

NUMBER_OF_STEPS = 2;
CURRENT_STEP = 0;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

%% Step 1: Read CSV File
fid = fopen(ARGS.CSVFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);
CSV.FilePath = ARGS.CSVFilePath;
CSV.HashAlgorithm = ARGS.HashAlgorithm;
CSV.Hash = hashfile('FilePath', CSV.FilePath, 'HashAlgorithm', CSV.HashAlgorithm);
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Process CSV file
file = cellfun(@(X) ptc_matlab_lib.rowvec(strtrim(ptc_matlab_lib.strexplode(X, ARGS.Delimiter))), file, 'UniformOutput', false);
if size(file, 1) > ARGS.HeaderRow
    file(ARGS.HeaderRow + 1 : end) = cellfun(@(X) X(~cellfun(@isempty, X)), file(ARGS.HeaderRow + 1 : end), 'UniformOutput', false);
end
if isempty(file)
    error([mfilename ':' thisfuncname ':EmptyFileEncountered'], 'Empty file encountered');
end
while isempty(file{1})
    file(1) = [];
end
while isempty(file{end})
    file(end) = [];
end
if isempty(file)
    error([mfilename ':' thisfuncname ':EmptyFileEncountered'], 'Empty file encountered');
end
CSV.CSVDATA.Header = file{ARGS.HeaderRow};
CSV.CSVDATA.Content.LabelNames = cell(0, 1);
CSV.CSVDATA.Content.LabelTypes = cell(0, 1);
CSV.CSVDATA.Content.Values = cell(0, 1);
file(1) = [];
while isempty(file{1})
    file(1) = [];
end
while ~isempty(file)
    CSV.CSVDATA.Content.LabelNames{end+1, 1} = file{1}{1};
    file(1) = [];
    while numel(file) >= 1 && isempty(file{1})
        file(1) = [];
    end
    CSV.CSVDATA.Content.LabelTypes{end+1, 1} = file{1}{1};
    switch file{1}{1}
        case {'VALUE', 'VAL_BLK', 'AXIS_PTS', 'ASCII'}
            CSV.CSVDATA.Content.Values{end+1, 1} = rowvec(file{1}(2:end));
            file(1) = [];
            while numel(file) >= 1 && isempty(file{1})
                file(1) = [];
            end
        case {'CURVE', 'MAP'}
            file(1) = [];
            while numel(file) >= 1 && isempty(file{1})
                file(1) = [];
            end
            ctr = 1;
            CSV.CSVDATA.Content.Values{end+1, 1} = cell(0, numel(file{ctr}));
            while ctr <= numel(file) && ~isempty(file{ctr})
                CSV.CSVDATA.Content.Values{end, 1}(ctr, 1:numel(file{ctr})) = rowvec(file{ctr});
                ctr = ctr + 1;
            end
            if ctr - 1 <= numel(file)
                file(1:ctr-1) = [];
            end
            while numel(file) >= 1 && isempty(file{1})
                file(1) = [];
            end
    end
end

[CSV.CSVDATA.Content.LabelNames, indices] = sort(CSV.CSVDATA.Content.LabelNames);
CSV.CSVDATA.Content.LabelTypes = CSV.CSVDATA.Content.LabelTypes(indices);
CSV.CSVDATA.Content.Values = CSV.CSVDATA.Content.Values(indices);

%Replace quotes for ASCII items
if ARGS.RecognizeQuotesForASCII
    idx = strcmp('ASCII', CSV.CSVDATA.Content.LabelTypes);
    if any(idx)
        CSV.CSVDATA.Content.Values(idx) = cellfun(@(X) regexprep(X, '^[''"]', ''), CSV.CSVDATA.Content.Values(idx), 'UniformOutput', false);
        CSV.CSVDATA.Content.Values(idx) = cellfun(@(X) regexprep(X, '[''"]$', ''), CSV.CSVDATA.Content.Values(idx), 'UniformOutput', false);
    end
end

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

varargout{1} = CSV;

end