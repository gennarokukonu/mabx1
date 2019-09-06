function varargout = get_vat2000_data(varargin)
%Function to import VAT2000 data
%Originally developed by Ben de Boer
%Modified by Sundeep Tuteja

import('ptc_matlab_lib.*');
pairs = {'VAT2000FilePath', '', ...
    'HashAlgorithm', 'SHA-512', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.VAT2000FilePath, 'file')
    [filename, pathname] = uigetfile({'*.txt', 'VAT2000 File (*.txt)'; '*', 'All Files (*)'}, 'Select VAT2000 file', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.VAT2000FilePath = fullfile(pathname, filename);
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 6;
TABCHAR = sprintf('\t');

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

%% Step 1: Read VAT2000 File
fid = fopen(ARGS.VAT2000FilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Remove comments
file = regexprep(file, ';.*', '');
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 3: Remove empty lines
TABCHAR_str = ['_' randstring(5) '_'];
file = strrep(file, TABCHAR, TABCHAR_str);
file = strtrim(file);
file(cellfun(@isempty, file)) = [];
file = strrep(file, TABCHAR_str, TABCHAR);
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 4: Initialize output structure
VAT2000Struct.FilePath = ARGS.VAT2000FilePath;
VAT2000Struct.Hash = hashfile('FilePath', ARGS.VAT2000FilePath, 'HashAlgorithm', ARGS.HashAlgorithm);
VAT2000Struct.HashAlgorithm = ARGS.HashAlgorithm;
VAT2000Struct.RawContent = file;
NUM_LABELS = nnz(cellfun(@(X) X(1) ~= TABCHAR, file));
VAT2000Struct.VAT2000DATA.LabelNames = cell(NUM_LABELS, 1);
VAT2000Struct.VAT2000DATA.LabelDescriptions = cell(NUM_LABELS, 1);
VAT2000Struct.VAT2000DATA.Units = repmat({''}, NUM_LABELS, 1);
VAT2000Struct.VAT2000DATA.ValuesNumeric = cell(NUM_LABELS, 1);
VAT2000Struct.VAT2000DATA.ValuesEnum = repmat({''}, NUM_LABELS, 1);
VAT2000Struct.VAT2000DATA.AxisValues = repmat({cell(0, 1)}, NUM_LABELS, 1);
VAT2000Struct.VAT2000DATA.AxisUnits = repmat({cell(0, 1)}, NUM_LABELS, 1);
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 5: Commence processing
linenumber = 1;
CURRENT_ITEM_CTR = 1;
while linenumber <= numel(file)
    assert(CURRENT_ITEM_CTR <= NUM_LABELS);
    thisLine = file{linenumber};
    if thisLine(1) ~= TABCHAR
        thisLine_split = strexplode(thisLine, TABCHAR);
        VAT2000Struct.VAT2000DATA.LabelNames{CURRENT_ITEM_CTR, 1} = thisLine_split{1};
        VAT2000Struct.VAT2000DATA.LabelDescriptions{CURRENT_ITEM_CTR, 1} = regexprep(thisLine_split{end}, '^#', '');
        if linenumber < numel(file) && file{linenumber + 1}(1) ~= TABCHAR || linenumber == numel(file)
            %Definitely a scalar
            value_numeric = str2double(thisLine_split{2});
            if ~isnan(value_numeric)
                %Not an enum
                VAT2000Struct.VAT2000DATA.ValuesNumeric{CURRENT_ITEM_CTR, 1} = value_numeric;
                VAT2000Struct.VAT2000DATA.Units{CURRENT_ITEM_CTR, 1} = regexprep(thisLine_split{end-1}, '[\[\]]', '');
            elseif isnan(value_numeric) && strcmp(thisLine_split{2}, '#NAN#')
                %NaN
                VAT2000Struct.VAT2000DATA.ValuesNumeric{CURRENT_ITEM_CTR, 1} = NaN;
                VAT2000Struct.VAT2000DATA.Units{CURRENT_ITEM_CTR, 1} = regexprep(thisLine_split{end-1}, '[\[\]]', '');
            else
                %An enum
                VAT2000Struct.VAT2000DATA.ValuesEnum{CURRENT_ITEM_CTR, 1} = thisLine_split{2};
                VAT2000Struct.VAT2000DATA.ValuesNumeric{CURRENT_ITEM_CTR, 1} = str2double(regexprep(thisLine_split{end-1}, '[\[\(\]\)]', ''));
                VAT2000Struct.VAT2000DATA.Units{CURRENT_ITEM_CTR, 1} = '';
            end
        elseif linenumber < numel(file) && file{linenumber + 1}(1) == TABCHAR
            %Non scalar
            if isempty(thisLine_split{2})
                %3D map, from the VAT2000 file's perspective
                VAT2000Struct.VAT2000DATA.AxisValues{CURRENT_ITEM_CTR, 1} = {str2double(thisLine_split(3:end-2))};
                VAT2000Struct.VAT2000DATA.AxisValues{CURRENT_ITEM_CTR, 1} = VAT2000Struct.VAT2000DATA.AxisValues{CURRENT_ITEM_CTR, 1}(:);
                VAT2000Struct.VAT2000DATA.AxisUnits{CURRENT_ITEM_CTR, 1} = {regexprep(thisLine_split{end-1}, '[\[\]]', '')};
                
                nextLine = strtrim(file{linenumber + 1});
                nextLine_split = strexplode(nextLine, TABCHAR);
                VAT2000Struct.VAT2000DATA.AxisUnits{CURRENT_ITEM_CTR, 1}{end+1, 1} = regexprep(nextLine_split{end}, '[\[\]]', '');
                
                nextLine = strtrim(file{linenumber + 2});
                nextLine_split = strexplode(nextLine, TABCHAR);
                VAT2000Struct.VAT2000DATA.Units{CURRENT_ITEM_CTR, 1} = regexprep(nextLine_split{end}, '[\[\]]', '');
                
                startLineNumber = linenumber + 1;
                stopLineNumber = startLineNumber;
                while stopLineNumber < numel(file) && file{stopLineNumber + 1}(1) == TABCHAR
                    stopLineNumber = stopLineNumber + 1;
                end
                DATA = file(startLineNumber:stopLineNumber);
                DATA = regexprep(DATA, '\[.*\]', '');
                DATA = strtrim(DATA);
                DATA = cellfun(@(X) ptc_matlab_lib.strexplode(X, TABCHAR).', DATA, 'UniformOutput', false);
                DATA = cat(1, DATA{:});
                DATA = str2double(DATA);
                VAT2000Struct.VAT2000DATA.AxisValues{CURRENT_ITEM_CTR, 1}{end+1, 1} = DATA(:, 1);
                VAT2000Struct.VAT2000DATA.ValuesNumeric{CURRENT_ITEM_CTR, 1} = DATA(:, 2:end);
                linenumber = stopLineNumber;
            else
                %2D map, from the VAT2000 file's perspective
                VAT2000Struct.VAT2000DATA.AxisValues{CURRENT_ITEM_CTR, 1} = {str2double(thisLine_split(2:end-2))};
                VAT2000Struct.VAT2000DATA.AxisValues{CURRENT_ITEM_CTR, 1} = VAT2000Struct.VAT2000DATA.AxisValues{CURRENT_ITEM_CTR, 1}(:);
                VAT2000Struct.VAT2000DATA.AxisUnits{CURRENT_ITEM_CTR, 1} = {regexprep(thisLine_split{end-1}, '[\[\]]', '')};
                
                nextLine = strtrim(file{linenumber + 1});
                nextLine_split = strexplode(nextLine, TABCHAR);
                VAT2000Struct.VAT2000DATA.ValuesNumeric{CURRENT_ITEM_CTR, 1} = str2double(nextLine_split(1:end-1));
                VAT2000Struct.VAT2000DATA.ValuesNumeric{CURRENT_ITEM_CTR, 1} = VAT2000Struct.VAT2000DATA.ValuesNumeric{CURRENT_ITEM_CTR, 1}(:);
                VAT2000Struct.VAT2000DATA.Units{CURRENT_ITEM_CTR, 1} = regexprep(nextLine_split{end}, '[\[\]]', '');
                linenumber = linenumber + 1;
            end
        end
    end
    linenumber = linenumber + 1;
    CURRENT_ITEM_CTR = CURRENT_ITEM_CTR + 1;
end

%% Step 6: Sort labels
[~, indices] = sort(VAT2000Struct.VAT2000DATA.LabelNames);
VAT2000Struct.VAT2000DATA = structfun(@(X) X(indices, :), VAT2000Struct.VAT2000DATA, 'UniformOutput', false);

varargout{1} = VAT2000Struct;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end