function varargout = get_canape_csv_data(varargin)
%get_canape_csv_data: Function to read CANape CSV calibration files
%This script is meant to work with the file format of a file extracted
%directly from the PCC ecu itself.

import('ptc_matlab_lib.*');

pairs = {'CSVFilePath', '', ...
    'A2LStruct', struct([]), ...
    'A2LTagFilter', {'Mod_Common'; 'Characteristics'; 'Axis_Pts'}, ...
    'CSVSeparator', ',', ...
    'ShowWaitbar', true, ...
    'StartingRow', 2, ...
    'WaitbarParams', {}};
ARGS = parseargs(varargin, pairs);

ARGS.A2LTagFilter = cellstr(ARGS.A2LTagFilter);
ARGS.A2LTagFilter = ARGS.A2LTagFilter(:);

if isempty(ARGS.A2LStruct)
    A2LStruct = get_a2l_data('A2LTagFilter', ARGS.A2LTagFilter);
    if isequal(A2LStruct, 0)
        %The operation was cancelled
        varargout{1} = [];
        return;
    end
end

if isempty(ARGS.CSVFilePath)
    [filename, pathname] = uigetfile({'*.csv', 'CSV File (*.csv)'}, 'Select CSV File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = [];
        return;
    end
    ARGS.CSVFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', ARGS.WaitbarParams{:});
end

%% Step 1: Read file
fid = fopen(ARGS.CSVFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);
file = file(~cellfun(@isempty, file));
file = file(ARGS.StartingRow:end);

%% Step 2: Extract label names.
% The label names can be in the format <part1>.<part2>_idx1_idx2. The logic
% being used is that if part1 is present in part2, then the label is to be
% separated, otherwise, the entire string is to be considered.
data.LabelNames = cell(0, 1);
data.Values = cell(0, 1);
A2LSuperStruct = struct('LabelNames', {[A2LStruct.A2LDATA.Characteristics.LabelNames; A2LStruct.A2LDATA.Axis_Pts.LabelNames]}, ...
    'Enumerations', {[A2LStruct.A2LDATA.Characteristics.Enumerations; A2LStruct.A2LDATA.Axis_Pts.Enumerations]}, ...
    'Dimensions', {[A2LStruct.A2LDATA.Characteristics.Dimensions; A2LStruct.A2LDATA.Axis_Pts.Dimensions]});
for ctr = 1 : 2 : numel(file)
    thisLabel_A2L = file{ctr};
    thisLabel_A2L = strrep(thisLabel_A2L, ARGS.CSVSeparator, '');
    thisLabel_Split = strexplode(thisLabel_A2L, '.');
    if numel(thisLabel_Split) == 2
        if strncmp(thisLabel_Split{1}, thisLabel_Split{2}, length(thisLabel_Split{1}))
            thisLabel_Simulink = thisLabel_Split{1};            
            if ~strcmp(thisLabel_Split{1}, thisLabel_Split{2})
                thisSuffix = thisLabel_Split{2}(length(thisLabel_Split{1})+1:end);
                thisIndex = regexp(thisSuffix, '_(?<rowidx>\d+)_(?<colidx>\d+)$', 'names');
                if isempty(thisIndex)
                    thisIndex = regexp(thisSuffix, '_(?<rowidx>\d+)$', 'names');
                    %Need to treat as row vector
                    if ~isempty(thisIndex)
                        thisIndex(1).colidx = '0';
                        thisLabel_A2L = [thisLabel_Split{1} '.' thisLabel_Split{1}];
                    else
                        thisIndex = struct('rowidx', '0', 'colidx', '0');
                        thisLabel_A2L = [thisLabel_Split{1} '.' thisLabel_Split{2}];
                    end
                else
                    thisLabel_A2L = [thisLabel_Split{1} '.' thisLabel_Split{1}];
                end
            else
                thisIndex = struct('rowidx', '0', 'colidx', '0');
            end
        else
            thisLabel_Simulink = thisLabel_A2L;
        end
    end
    
    thisValueInfo = file{ctr+1};
    thisValueInfo = strexplode(thisValueInfo, ARGS.CSVSeparator);
    thisValueType = thisValueInfo{1};
    thisValue = thisValueInfo{end};
    
    %Check to see if the value is an enumeration. If so, use the
    %appropriate enumeration value available from the A2L file.
    if strcmp(thisValueType, 'VALUE') && isnan(str2double(thisValue))
        idx = find(strcmp(thisLabel_A2L, A2LSuperStruct.LabelNames), 1);
        if isempty(idx)
            continue;
        end
        thisEnumeration = A2LSuperStruct.Enumerations{idx};        
        thisEnumeration = containers.Map(thisEnumeration.values, thisEnumeration.keys);
        try
            thisValue = thisEnumeration(strrep(thisValue, '''', ''));
        catch
            waitfor(errordlg(['ERROR: Could not find enumeration ' strrep(thisValue, '''', '') ' for ' thisLabel_A2L '. Select correct enumeration:'], 'ERROR', 'modal'));
            [selection, ok] = listdlg('ListString', thisEnumeration.keys, ...
                'ListSize', [200 500], ...
                'SelectionMode', 'single');
            while ~ok
                waitfor(errordlg(['ERROR: Could not find enumeration ' strrep(thisValue, '''', '') ' for ' thisLabel_A2L '. Select correct enumeration:'], 'ERROR', 'modal'));
                [selection, ok] = listdlg('ListString', thisEnumeration.keys, ...
                    'ListSize', [200 500], ...
                    'SelectionMode', 'single');
            end
            keylist = thisEnumeration.keys;
            thisValue = keylist{selection};
            thisValue = thisEnumeration(strrep(thisValue, '''', ''));
        end
    end

    if ~ismember(thisLabel_Simulink, data.LabelNames)
        data.LabelNames{end+1, 1} = thisLabel_Simulink;
    end
    idx = find(strcmp(thisLabel_Simulink, data.LabelNames), 1);
    if strcmp(thisValueType, 'VALUE')
        data.Values{idx, 1}(str2double(thisIndex.rowidx)+1, str2double(thisIndex.colidx)+1) = str2double(thisValue);
    elseif strcmp(thisValueType, 'ASCII')
        data.Values{idx, 1} = strrep(thisValue, '''', '');
    end
end

varargout{1} = data;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end
