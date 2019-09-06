function out = get_calterm_data(varargin)
%GET_CALTERM_DATA: Extracts all the numeric data from a CALTERM log file wh

import('ptc_matlab_lib.*');

pairs = {'FilePath', '', ...
    'DateRow', 2, ...
    'HeaderRow', 8, ...
    'UnitRow', 9, ...
    'StartingRow', 11, ...
    'ShouldResample', true, ...
    'SamplingIntervalSeconds', 1, ...
    'InterpMethod', 'zoh', ...
    'ShouldWarnTimestampReversal', true, ...
    'ShowWaitbar', true, ...
    'TimeZone', '', ...
    'OutputFormat', ''};
ARGS = parseargs(varargin, pairs);

%Step 1: Read CSV file
ARGS.FilePath = strtrim(ARGS.FilePath);
if isempty(ARGS.FilePath)
    [filename, pathname] = uigetfile({'*.csv', 'CSV File'}, 'Select CSV File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.FilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    waitbar_hndl = waitbar(0, 'Reading Calterm Data...', 'CloseRequestFcn', '', 'Pointer', 'watch');
    ticid = tic;    
end
    
out.FilePath = ARGS.FilePath;

%Read column headers, units, and data
%Go to the Header row and start
fid = fopen(ARGS.FilePath, 'r'); fseek(fid, 0, 'bof');
for ctr = 1:(ARGS.DateRow - 1)
    fgetl(fid);
end

thisDate = strtrim(fgetl(fid));
try
    thisDate = datestr(datenum(thisDate, 'mm/dd/yyyy'), 'yyyymmdd');
catch %#ok<CTCH>
    thisDate = datestr(datenum(thisDate, 'mm/dd/yyyy'), 'yyyymmdd');
end

[~] = arrayfun(@(X) fgetl(fid), 1:(ARGS.HeaderRow - ARGS.DateRow - 1), 'UniformOutput', false);
out.colheaders = rowvec(strtrim(strexplode(strtrim(fgetl(fid)), ',')));
[~] = arrayfun(@(X) fgetl(fid), 1:(ARGS.UnitRow - ARGS.HeaderRow - 1), 'UniformOutput', false);
out.units = rowvec(strtrim(strexplode(strtrim(fgetl(fid)), ',')));
[~] = arrayfun(@(X) fgetl(fid), 1:(ARGS.StartingRow - ARGS.UnitRow - 1), 'UniformOutput', false);

formatstring = repmat({'%n'}, 1, length(out.colheaders));
string_indices = strcmp('PC Timestamp', out.colheaders) | ...
    strcmp('DLA Timestamp', out.colheaders) | ...
    strcmp('Parameter Name', out.colheaders) | ...
    strcmp('ActiveFaults', out.colheaders) | ...
    strcmp('InactiveFaults', out.colheaders) | ...
	strcmp('GPS_Date', out.colheaders) | ...
	strcmp('GPS_Time', out.colheaders) | ...
	strcmp('VIN', out.colheaders) | ...
    strcmp('CarrierName', out.colheaders) | ...
    strcmp('DAPConfiguration', out.colheaders) | ...
    strcmp('DAPVersion', out.colheaders) | ...
    strcmp('J1939StackStatus', out.colheaders) | ...
    strcmp('ModemName', out.colheaders) | ...
    strcmp('ModemSerialNumber', out.colheaders) | ...
    strcmp('OutboundQueueCount', out.colheaders) | ...
    strcmp('V_SFD_IncompleteRegenUpdt', out.colheaders) | ...
	strcmp('ModemESN', out.colheaders) | ...
    strcmpi('HEX', out.units);
formatstring(string_indices) = {'%s'};

out.data = textscan(fid, [formatstring{:}], 'Delimiter', ',');
hex_columns = find(strcmpi('HEX', out.units));
fclose(fid);

%Sundeep Tuteja, 2012-09-14: The cell2mat function will fail for out.data
%when different numbers of rows are present. The solution is to eliminate
%extra elements.
min_numel = min(cellfun(@(X) numel(X), out.data));
out.data = cellfun(@(X) X(1:min_numel), out.data, 'UniformOutput', false);

%Sundeep Tuteja, 2012-08-25: It looks like data recording errors can create
%invalid 'NaN' values. These should be eliminated.
numeric_indices = cellfun(@(X) isnumeric(X), out.data);
[NaN_Indices_Rows1, NaN_Indices_Columns1] = ind2sub(size(cell2mat(out.data(numeric_indices))), find(isnan(columnvec(cell2mat(out.data(numeric_indices)))))); %#ok<NASGU>
temp = out.data(hex_columns);
temp = cat(2, temp{:});
[NaN_Indices_Rows2, NaN_Indices_Columns2] = ind2sub(size(temp), find(strcmp('NaN', temp(:)))); %#ok<NASGU>
rows_to_keep = setdiff(1:rows(out.data{1}), [NaN_Indices_Rows1(:); NaN_Indices_Rows2(:)]);
out.data = cellfun(@(X) X(rows_to_keep), out.data, 'UniformOutput', false);
clear('rows_to_keep');

temp = out.data(hex_columns);
temp = cat(2, temp{:});
if isempty(temp)
    temp = cell(0, 1);
end
temp(strcmpi('_TRUE', temp(:))) = {'1'};
temp(ismember(temp(:), {'_FALSE', 'SCR_ELECTRIC_HEATING_HC'})) = {'0'};
temp = reshape(num2cell(hex2dec(temp)), rows(out.data{1}), length(hex_columns));
temp = arrayfun(@(X) cell2mat(temp(:, X)), 1:cols(temp), 'UniformOutput', false);
out.data(hex_columns) = temp; clear('temp');

PC_TimeStamps_Index = strcmp('PC Timestamp', out.colheaders);
TimeStamps = out.data{PC_TimeStamps_Index};
TimeStamps = strcat(thisDate, TimeStamps); %yyyymmddHH:MM:SS.FFF

cellstr_indices = cellfun(@iscellstr, out.data);
out.data(cellstr_indices) = cellfun(@(X) str2double(X), out.data(cellstr_indices), 'UniformOutput', false);

%Reference Bug 622845: datenum and datevec functions error unexpectedly on 64-bit Windows systems
%Workaround: Redundant try-catch
try
    out.data{PC_TimeStamps_Index} = datenum(TimeStamps, 'yyyymmddHH:MM:SS.FFF');
catch %#ok<CTCH>
    out.data{PC_TimeStamps_Index} = datenum(TimeStamps, 'yyyymmddHH:MM:SS.FFF');
end
out.data = cat(2, out.data{:});

assert(isequal(length(out.colheaders), length(out.units), cols(out.data)));

difftime = diff(out.data(:, PC_TimeStamps_Index));

%Sundeep Tuteja, 2013-02-07: Optionally warn the user about timestamp
%reversals. Ordinarily, if data logging is done correctly, these reversals
%would indicate a crossover to the next day. If not, then this happens
%because of an issue with Calterm.
if ARGS.ShouldWarnTimestampReversal
    erroneous_indices = find(difftime < 0) + 1;
    if ~isempty(erroneous_indices)
        outsubset = out.data(erroneous_indices, PC_TimeStamps_Index);
        %The assumption is that if the timestamp reversal occurs at midnight,
        %it is legitimate.
        erroneous_indices2 = find(~ismember(datestr(outsubset(:), 'HH:MM'), {'00:00'}));
        if ~isempty(erroneous_indices2)
            bad_timestamps = outsubset(erroneous_indices2);
            bad_timestamps = datestr(bad_timestamps, 'yyyy-mm-dd HH:MM:SS.FFF');
            erroneous_indices_str = cellstr(num2str(erroneous_indices(:)+10)); %10 happens to be the offset because of headers
            waitfor(msgbox_editable('MessageString', [{['WARNING: The following timestamp reversals have occurred in file ' ARGS.FilePath '...']}; {''}; ...
                strcat(bad_timestamps, ',row:', erroneous_indices_str)], ...
                'Color', 'yellow', 'WindowStyle', 'modal'));
        end
    end
end 

crossover_indices = find(difftime < 0) + 1; %Indicates crossover
addendum = zeros(length(out.data(:, PC_TimeStamps_Index)), 1);
addendum(crossover_indices) = 1;
addendum = cumsum(addendum);
out.data(:, PC_TimeStamps_Index) = out.data(:, PC_TimeStamps_Index) + addendum;

nan_columns = arrayfun(@(X) all(isnan(out.data(:, X))), 1:cols(out.data));
out.colheaders(nan_columns) = [];
out.units(nan_columns) = [];
out.data(:, nan_columns) = [];

%Repair cases of missing data
PC_TimeStamps_Index = find(strcmp('PC Timestamp', out.colheaders), 1);
%The possibility exists of some of these timestamps being NaN. Eliminate
%them.
indices = isnan(out.data(:, PC_TimeStamps_Index));
out.data(indices, :) = [];

timevector = out.data(:, PC_TimeStamps_Index);
[timevector, indices] = unique(timevector, 'first');
out.data = out.data(indices, :);

for colctr = 1:cols(out.data)
    nan_indices = isnan(out.data(:, colctr));
    out.data(nan_indices, colctr) = interp1(timevector(~nan_indices), out.data(~nan_indices, colctr), timevector(nan_indices), 'linear', 'extrap');
end

if ARGS.ShouldResample
    TSObject = timeseries(out.data, out.data(:, PC_TimeStamps_Index));
    TSObject.TimeInfo.Units = 'days';
    TSObject = resample(TSObject, TSObject.Time(1):ARGS.SamplingIntervalSeconds/(24*3600):TSObject.Time(end), ARGS.InterpMethod);
    out.data = TSObject.Data;
    out.data(:, PC_TimeStamps_Index) = TSObject.Time(:);
end

[out.colheaders, indices] = sort(out.colheaders);
out.units = out.units(indices);
out.data = out.data(:, indices);

PC_TimeStamps_Index = find(strcmp('PC Timestamp', out.colheaders), 1);
[~, newtime] = isodatetime('TimeStamp', out.data(1, PC_TimeStamps_Index), 'TimeZone', ARGS.TimeZone);
difftime = out.data(1, PC_TimeStamps_Index) - newtime.LocalTimeStamp;
out.data(:, PC_TimeStamps_Index) = out.data(:, PC_TimeStamps_Index) + difftime;

diff_indices = setdiff(1:numel(out.colheaders), PC_TimeStamps_Index);
out.colheaders = [{'PC Timestamp'} out.colheaders(diff_indices)];
out.units = [{'datenum'} out.units(diff_indices)];
out.data = [out.data(:, PC_TimeStamps_Index) out.data(:, diff_indices)];

if strcmpi(ARGS.OutputFormat, 'CUMMINS')
    evalin('base', 'clear;');
    arrayfun(@(X, Y) assignin('base', X{1}, out.data(:, Y)), genvarname_custom(out.colheaders(:)), (1:size(out.data, 2)).');
end

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end