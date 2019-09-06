function out = get_puma_data(varargin)
%GET_PUMA_DATA: Extracts numeric data from a PUMA log file

pairs = {'FilePath', '', ...
    'HeaderRow', 1, ...
    'UnitRow', 2, ...
    'StartingRow', 3, ...
    'TimeZone', '', ...
    'ShouldResample', false, ...
    'SamplingIntervalSeconds', 1, ...
    'InterpMethod', 'zoh', ...
    'OutputType', '', ...
    'ShowWaitbar', true};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

%Step 1: Read TXT file
ARGS.FilePath = strtrim(ARGS.FilePath);
if isempty(ARGS.FilePath)
    [filename, pathname] = uigetfile({'*.txt', 'TXT File'}, 'Select TXT File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.FilePath = fullfile(pathname, filename);
end

ticid = tic;
if ARGS.ShowWaitbar
    waitbar_hndl = waitbar(0, 'Reading Puma Data...', 'Pointer', 'watch', 'CloseRequestFcn', '');
end

out.FilePath = ARGS.FilePath;

START_TIMESTAMP_LABELS = {'$iStartTime'};
RECORDER_TIME_LABELS = {'recorder_time'; 'Time'};

%Read column headers, units, and data
%Go to the Header row and start
%In this step, the space delimited ASCII file needs to be correctly parsed
%to ensure that the columns are correctly represented.
fid = fopen(ARGS.FilePath, 'r'); fseek(fid, 0, 'bof');
try
    arrayfun(@(X) fgetl(fid), 1:(ARGS.HeaderRow - 1));
    out.colheaders = ptc_matlab_lib.rowvec(strtrim(regexp(strtrim(fgetl(fid)), '\s+', 'split')));
    arrayfun(@(X) fgetl(fid), 1:(ARGS.UnitRow - ARGS.HeaderRow - 1));
    out.units = ptc_matlab_lib.rowvec(strtrim(regexp(strtrim(fgetl(fid)), '\t', 'split')));
    arrayfun(@(X) fgetl(fid), 1:(ARGS.StartingRow - ARGS.UnitRow - 1));
    out.data = textscan(fid, '%s', 'Delimiter', sprintf('\t'), 'BufSize', 99999);
    fclose(fid);
catch ME
    fclose(fid);
    rethrow(ME);
end

out.data = strtrim((reshape(out.data{1}(:), numel(out.colheaders), numel(out.data{1})/numel(out.colheaders))).');

header_label_indices = regexp(out.colheaders, '^\$', 'once');
header_label_indices = find(~cellfun(@isempty, header_label_indices));

%Extracting StartingTime for later use
if ~any(ismember(START_TIMESTAMP_LABELS, out.colheaders))
    StartingTime = NaN;
else
    TIMESTAMP_LABEL = START_TIMESTAMP_LABELS{find(ismember(START_TIMESTAMP_LABELS, out.colheaders), 1)};
    StartingTime = out.data{1, find(strcmp(TIMESTAMP_LABEL, out.colheaders), 1)};
    if ~isempty(StartingTime)
        StartingTime = datenum(StartingTime, 'yyyy/mm/dd HH:MM:SS');
        [~, StartingTimeNew] = ptc_matlab_lib.isodatetime('TimeStamp', StartingTime, 'TimeZone', ARGS.TimeZone);
        difftime = StartingTime - StartingTimeNew.LocalTimeStamp;
        StartingTime = StartingTime + difftime;
    else
        StartingTime = NaN;
    end
end

out.colheaders(:, header_label_indices) = [];
out.units(:, header_label_indices) = [];
out.data(:, header_label_indices) = [];

[out.colheaders, i1] = union(out.colheaders, {'PC Timestamp'});
PC_Timestamp_IDX = find(strcmp('PC Timestamp', out.colheaders), 1);
out.units = ptc_matlab_lib.push(out.units(i1), {'datenum'}, PC_Timestamp_IDX);
out.data = out.data(:, i1);
out.data = [out.data(:, 1:PC_Timestamp_IDX-1) repmat({'0'}, size(out.data, 1), 1) out.data(:, PC_Timestamp_IDX:end)];
out.data = strrep(out.data, '**', 'NaN');
out.data(cellfun(@isempty, out.data)) = {'NaN'};
data_size = size(out.data);

if verLessThan('matlab', '7.13')
    out.data = ptc_matlab_lib.strimplode(out.data(:), ';');
else
    out.data = ptc_matlab_lib.push(out.data(:), repmat({';'}, numel(out.data)-1, 1), 2:2:2*numel(out.data)-1);
    out.data = [out.data{:}];
end

out.data = sscanf(out.data, '%f;');
out.data = reshape(out.data, data_size);

recorder_time_IDX = find(ismember(out.colheaders, RECORDER_TIME_LABELS), 1);
recorder_time_units = out.units{recorder_time_IDX};
switch recorder_time_units
    case {'ms', 'millisecond', 'milliseconds'}
        RecorderTimeFactor = 0.001;
    case {'s', 'second', 'seconds'}
        RecorderTimeFactor = 1;
    case {'min', 'minute', 'minutes'}
        RecorderTimeFactor = 60;
    case {'hr', 'hour', 'hours'}
        RecorderTimeFactor = 3600;
    case {'day', 'days'}
        RecorderTimeFactor = 24 * 3600;
    case {'us', 'microsecond', 'microseconds'}
        RecorderTimeFactor = 1e-6;
    case {'ns', 'nanosecond', 'nanoseconds'}
        RecorderTimeFactor = 1e-9;
    case {'ps', 'picosecond', 'picoseconds'}
        RecorderTimeFactor = 1e-12;
    case {'fs', 'femtosecond', 'femtoseconds'}
        RecorderTimeFactor = 1e-15;
    case {'as', 'attosecond', 'attoseconds'}
        RecorderTimeFactor = 1e-18;
    case {'zs', 'zeptosecond', 'zeptoseconds'}
        RecorderTimeFactor = 1e-21;
    case {'ys', 'yoctosecond', 'yoctoseconds'}
        RecorderTimeFactor = 1e-24;
    otherwise
        error([mfilename ':' thisfuncname ':UnsupportedUnitForTime'], ['The unit ' recorder_time_units ' is not supported. Please contact a developer']);
end
out.data(:, PC_Timestamp_IDX) = StartingTime + (RecorderTimeFactor*out.data(:, recorder_time_IDX))/(24*3600);

[out.colheaders, indices] = sort(out.colheaders);
out.units = out.units(indices);
out.data = out.data(:, indices);

PC_Timestamp_IDX = find(strcmp('PC Timestamp', out.colheaders), 1);
recorder_time_IDX = find(ismember(out.colheaders, RECORDER_TIME_LABELS), 1);
diff_indices = setdiff(1:numel(out.colheaders), [PC_Timestamp_IDX recorder_time_IDX]);
out.colheaders = [{'PC Timestamp', 'recorder_time'} out.colheaders(diff_indices)];
out.units = [out.units([PC_Timestamp_IDX recorder_time_IDX]) out.units(diff_indices)];
out.data = [out.data(:, [PC_Timestamp_IDX recorder_time_IDX]) out.data(:, diff_indices)];

%Merge rows with duplicate timestamps
recorder_time_IDX = find(strcmp('recorder_time', out.colheaders), 1);
out.data = sortrows(out.data, recorder_time_IDX);
[~, ifirst] = unique(out.data(:, recorder_time_IDX), 'first');
[~, ilast] = unique(out.data(:, recorder_time_IDX), 'last');
if ~isequal(ifirst, ilast)
    duplicate_indices = arrayfun(@(X, Y) (X:Y).', ifirst(:), ilast(:), 'UniformOutput', false);
    for these_indices = ptc_matlab_lib.rowvec(duplicate_indices)
        these_nan_indices = isnan(out.data(these_indices{1}(1), :));
        next_non_nan_indices = ~cell2mat(arrayfun(@(X) isnan(out.data(X, :)), these_indices{1}(2:end), 'UniformOutput', false));
        if isempty(next_non_nan_indices)
            indices_to_change = [];
        else
            these_nan_indices = cumprod([these_nan_indices; ~next_non_nan_indices(1:end-1, :)], 1);
            indices_to_change = these_nan_indices & next_non_nan_indices;
        end
        for ctr2 = 1:size(indices_to_change, 1)
            out.data(these_indices{1}(1), indices_to_change(ctr2, :)) = out.data(these_indices{1}(ctr2+1), indices_to_change(ctr2, :));
        end
    end
    out.data = out.data(cellfun(@(X) X(1), duplicate_indices(:)), :);
end

%Resampling if desired
if ARGS.ShouldResample
    recorder_time_IDX = find(strcmp('recorder_time', out.colheaders), 1);
    TSObject = timeseries(out.data, RecorderTimeFactor * out.data(:, recorder_time_IDX));
    TSObject.TimeInfo.Units = 'seconds';
    TSObject = resample(TSObject, TSObject.Time(1):ARGS.SamplingIntervalSeconds:TSObject.Time(end), ARGS.InterpMethod);
    out.data = TSObject.Data;
    out.data(:, recorder_time_IDX) = TSObject.Time(:) / RecorderTimeFactor;
end

%Sundeep Tuteja, 2014-07-21: If the selected OutputType is set to
%SIMULINK_SIMIN_MATRIX, then execute this code. This will populate the base
%workspace with the variable names which can be imported directly into
%Simulink using the SimIn block.
if strcmp(ARGS.OutputType, 'SIMULINK_SIMIN_MATRIX')
    recorder_time_IDX = find(strcmp('recorder_time', out.colheaders), 1);
    time_axis = out.data(:, recorder_time_IDX) * RecorderTimeFactor;
    varnames = ptc_matlab_lib.genvarname_custom(out.colheaders(:));
    for ctr = 1:numel(varnames)
        assignin('base', varnames{ctr}, [time_axis, out.data(:, ctr)]);
    end
end

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(0.5);
    delete(waitbar_hndl);
end

end