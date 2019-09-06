% Author: Ben de Boer, Controls Intern - Aftertreatment
% Date: 12/Sept/2017
% Email: Ben.de.Boer@PACCAR.com

% VAT2000 - output from get_vat2000_data
% Modified by Sundeep Tuteja

function write_vat2000_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'VAT2000FilePath', '', ...
    'VAT2000DATA', struct([]), ...
    'ShowWaitbar', true, ...
    'Delimiter', sprintf('\t'), ...
    'NewLine', sprintf('\r\n'), ...
    'HeaderInformation', cell(0, 1), ...
    'NaNString', '#NAN#', ...
    'FormatString', '%1.12g', ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);
ARGS.HeaderInformation = columnvec(cellstr(ARGS.HeaderInformation));

while isempty(ARGS.VAT2000FilePath)
    [filename, pathname] = uiputfile({'*.txt', 'VAT2000 File (*.txt)'}, 'Save VAT2000 file as...', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.VAT2000FilePath = fullfile(pathname, filename);
    if ~check_write_permissions(fileparts(ARGS.VAT2000FilePath))
        waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the VAT2000 file.', 'ERROR', 'modal'));
        ARGS.VAT2000FilePath = '';
    end
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;
LF = sprintf('\n'); %#ok<SPRINTFN>

%% Step 1: Process Data
VAT2000DATA = ARGS.VAT2000DATA;
DELIMITER = ARGS.Delimiter;
NEWLINE = ARGS.NewLine;
[~, indices] = sort(VAT2000DATA.LabelNames);
VAT2000DATA = structfun(@(X) X(indices, :), VAT2000DATA, 'UniformOutput', false);
STR = cell(numel(VAT2000DATA.LabelNames), 1);
VAT2000DATA.LabelDescriptions = strrep(VAT2000DATA.LabelDescriptions, LF, '|');
VAT2000DATA.Units(cellfun(@isempty, VAT2000DATA.Units)) = {'No unit'};
for ctr = 1:numel(VAT2000DATA.LabelNames)
    VAT2000DATA.AxisUnits{ctr}(cellfun(@isempty, VAT2000DATA.AxisUnits{ctr})) = {'No unit'};
end
for ctr = 1:numel(STR)
    if numel(VAT2000DATA.ValuesNumeric{ctr}) == 1
        %i.e. Scalar
        if isempty(VAT2000DATA.ValuesEnum{ctr})
            %i.e. Numeric scalar
            if isnan(VAT2000DATA.ValuesNumeric{ctr})
                STR{ctr} = [VAT2000DATA.LabelNames{ctr} DELIMITER ...
                    ARGS.NaNString DELIMITER ...
                    '[' VAT2000DATA.Units{ctr} ']' DELIMITER ...
                    '#' VAT2000DATA.LabelDescriptions{ctr}];
            else
                STR{ctr} = [VAT2000DATA.LabelNames{ctr} DELIMITER ...
                    num2str(VAT2000DATA.ValuesNumeric{ctr}, ARGS.FormatString) DELIMITER ...
                    '[' VAT2000DATA.Units{ctr} ']' DELIMITER ...
                    '#' VAT2000DATA.LabelDescriptions{ctr}];
            end
        else
            %i.e. Enum scalar
            STR{ctr} = [VAT2000DATA.LabelNames{ctr} DELIMITER ...
                VAT2000DATA.ValuesEnum{ctr} DELIMITER ...
                '[(' num2str(VAT2000DATA.ValuesNumeric{ctr}) ')]' DELIMITER ...
                '#' VAT2000DATA.LabelDescriptions{ctr}];
        end
    elseif isvector(VAT2000DATA.ValuesNumeric{ctr})
        %i.e. Vector (numeric)
        if ~isempty(VAT2000DATA.AxisValues{ctr})
            AxisValuesStr = strtrim(cellstr(num2str(VAT2000DATA.AxisValues{ctr}{1}(:), ARGS.FormatString)));
            AxisValuesStr(strcmp('NaN', AxisValuesStr)) = {ARGS.NaNString};
            AxisValuesStr = strjoin(AxisValuesStr(:).', DELIMITER);
            AxisUnit = VAT2000DATA.AxisUnits{ctr}{1};
        else
            AxisValuesStr = strtrim(cellstr(num2str((0:numel(VAT2000DATA.ValuesNumeric{ctr})-1).')));
            AxisValuesStr = strjoin(AxisValuesStr(:).', DELIMITER);
            AxisUnit = 'No unit';
        end
        DataValuesStr = strtrim(cellstr(num2str(VAT2000DATA.ValuesNumeric{ctr}(:), ARGS.FormatString)));
        DataValuesStr(strcmp('NaN', DataValuesStr)) = {ARGS.NaNString};
        DataValuesStr = strjoin(DataValuesStr(:).', DELIMITER);
        
        line1 = [VAT2000DATA.LabelNames{ctr} DELIMITER ...
            AxisValuesStr DELIMITER ...
            '[' AxisUnit ']' DELIMITER ...
            '#' VAT2000DATA.LabelDescriptions{ctr}];
        line2 = [DELIMITER ...
            DataValuesStr DELIMITER ...
            '[' VAT2000DATA.Units{ctr} ']'];
        STR{ctr} = [line1 NEWLINE ...
            line2];
    elseif ismatrix(VAT2000DATA.ValuesNumeric{ctr})
        %i.e. Matrix (numeric)
        if ~isempty(VAT2000DATA.AxisValues{ctr})
            AxisValuesStr1 = strtrim(cellstr(num2str(VAT2000DATA.AxisValues{ctr}{1}(:), ARGS.FormatString)));
            AxisValuesStr1(strcmp('NaN', AxisValuesStr1)) = {ARGS.NaNString};
            AxisValuesStr1 = strjoin(AxisValuesStr1(:).', DELIMITER);
            AxisUnit1 = VAT2000DATA.AxisUnits{ctr}{1};
            AxisValuesStr2 = strtrim(cellstr(num2str(VAT2000DATA.AxisValues{ctr}{2}(:), ARGS.FormatString)));
            AxisValuesStr2(strcmp('NaN', AxisValuesStr2)) = {ARGS.NaNString};
            AxisValuesStr2 = AxisValuesStr2(:);
            AxisUnit2 = VAT2000DATA.AxisUnits{ctr}{2};
        else
            AxisValuesStr1 = strtrim(cellstr(num2str((0:numel(VAT2000DATA.ValuesNumeric{ctr})-1).')));
            AxisValuesStr1 = strjoin(AxisValuesStr1(:).', DELIMITER);
            AxisUnit1 = 'No unit';
            AxisValuesStr2 = strtrim(cellstr(num2str((0:numel(VAT2000DATA.ValuesNumeric{ctr})-1).')));
            AxisValuesStr2 = AxisValuesStr2(:);
            AxisUnit2 = 'No unit';
        end
        
        DataValues = VAT2000DATA.ValuesNumeric{ctr};
        row1 = DataValues(1, :); row1 = strtrim(cellstr(num2str(row1(:), ARGS.FormatString))); row1(strcmp('NaN', row1)) = {ARGS.NaNString};
        row2 = DataValues(2, :); row2 = strtrim(cellstr(num2str(row2(:), ARGS.FormatString))); row2(strcmp('NaN', row2)) = {ARGS.NaNString};
        
        line1 = [VAT2000DATA.LabelNames{ctr} DELIMITER DELIMITER ...
            AxisValuesStr1 DELIMITER ...
            '[' AxisUnit1 ']' DELIMITER ...
            '#' VAT2000DATA.LabelDescriptions{ctr}];
        line2 = [DELIMITER ...
            AxisValuesStr2{1} DELIMITER ...
            strjoin(row1(:).', DELIMITER) DELIMITER ...
            '[' AxisUnit2 ']'];
        line3 = [DELIMITER ...
            AxisValuesStr2{2} DELIMITER ...
            strjoin(row2(:).', DELIMITER) DELIMITER ...
            '[' VAT2000DATA.Units{ctr} ']'];
        lines = cell(size(DataValues, 1)-2, 1);
        for ctr2 = 1:numel(lines)
            thisRow = DataValues(ctr2 + 2, :);
            thisRow = strtrim(cellstr(num2str(thisRow(:), ARGS.FormatString))).';
            thisRow(strcmp('NaN', thisRow)) = {ARGS.NaNString};
            lines{ctr2} = [DELIMITER ...
                AxisValuesStr2{ctr2+2} DELIMITER ...
                strjoin(thisRow(:).', DELIMITER)];
        end
        
        STR{ctr} = [line1 NEWLINE ...
            line2 NEWLINE ...
            line3 NEWLINE ...
            strjoin(lines(:).', NEWLINE)];
    else
        error([mfilename ':' thisfuncname ':InvalidNumberOfDimensions'], 'Invalid number of dimensions specified');
    end
end
STR = [strjoin(STR(:).', NEWLINE) NEWLINE ...
    ';*************** END OF FILE ***************' NEWLINE];
if ~isempty(ARGS.HeaderInformation)
    STR = [strimplode(strcat(';', ARGS.HeaderInformation), NEWLINE) NEWLINE ...
        STR];
end
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Write to file
fid = fopen(ARGS.VAT2000FilePath, 'w');
fwrite(fid, STR);
fclose(fid);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end