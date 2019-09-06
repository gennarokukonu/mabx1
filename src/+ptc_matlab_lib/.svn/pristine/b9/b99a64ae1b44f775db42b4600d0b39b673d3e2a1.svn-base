function out = get_vision_data(varargin)
%GET_VISION_DATA: Extracts the specified data from a Vision REC file,
%exported to MAT.

import('ptc_matlab_lib.*');

pairs = {'FilePath', '', ...
    'SamplingIntervalSeconds', 1, ...
    'ShouldIncludeVirtualDataItems', false, ...
    'InterpMethod', 'zoh', ...
    'TimeZone', '', ...
    'ShowWaitbar', true};
ARGS = parseargs(varargin, pairs);

ARGS.FilePath = strtrim(ARGS.FilePath);
if isempty(ARGS.FilePath)
    [filename, pathname] = uigetfile({'*.rec', 'REC File'; '*.mat', 'MAT File'}, 'Select ATI Vision REC File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        out = [];
        return;
    end
    ARGS.FilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    waitbar_hndl = waitbar(0, 'Reading Vision Data...', 'CloseRequestFcn', '', 'Pointer', 'watch');
    ticid = tic;
end

out.FilePath = ARGS.FilePath;

[~, ~, FILE_EXT] = fileparts(ARGS.FilePath);
if pathcmp(FILE_EXT, '.rec')
    %Export the REC file to MAT
    visionobj = ati_vision_lib;
    [~, ARGS.FilePath] = visionobj.visionExportREC2MAT('RECFilePath', ARGS.FilePath);
    thisVar = load(ARGS.FilePath);
    rmdir(fileparts(ARGS.FilePath), 's');
else
    thisVar = load(ARGS.FilePath);
end

thisStartDatenum = datenum([thisVar.header.startdate ' ' thisVar.header.starttime], 'mm/dd/yy HH:MM:SS');
[~, new_thisStartDatenum] = isodatetime('TimeStamp', thisStartDatenum, 'TimeZone', ARGS.TimeZone);
difftime = thisStartDatenum - new_thisStartDatenum.LocalTimeStamp;
thisStartDatenum = thisStartDatenum + difftime;

varnames = rowvec(setdiff(fieldnames(thisVar), {'header'}));
out.colheaders = cell(1, numel(varnames));
out.units = cell(1, length(out.colheaders));
TSObjects = cell(1, length(out.colheaders));
for ctr = 1:length(out.colheaders)
    %Create a cell array of timeseries objects
    thisVarName = varnames{ctr};
    out.colheaders{ctr} = thisVar.(thisVarName).Channelname;
    thisTimeVal = thisVar.(thisVarName).time(:);
    switch lower(thisVar.(thisVarName).timeunit)
        case {'seconds', 'second', 'sec', 's'}
            thisTimeStamp = thisStartDatenum + thisTimeVal./(24*3600);
        case {'milliseconds', 'millisecond', 'ms', 'millisec'}
            thisTimeStamp = thisStartDatenum + thisTimeVal./(24*3600*1000);
    end
    TSObjects{ctr} = timeseries(thisVar.(thisVarName).signals.values(:), thisTimeStamp*24*3600, ...
        'Name', thisVarName);
    TSObjects{ctr}.TimeInfo.Units = 'seconds';
    TSObjects{ctr}.DataInfo.Units = thisVar.(thisVarName).unit;
    out.units{ctr} = thisVar.(thisVarName).unit;    
end

% Sundeep Tuteja, 2014-08-21: VirtualDataItems should not be included in
% this list.
if ~ARGS.ShouldIncludeVirtualDataItems
    indices = cellfun(@isempty, regexp(out.colheaders, '^VirtualDataItems\.', 'once'));
    out.colheaders = out.colheaders(indices);
    out.units = out.units(indices);
    TSObjects = TSObjects(indices);
end

[starttime, idx_start] = max(cellfun(@(X) X.Time(1), TSObjects));
[stoptime, idx_stop] = min(cellfun(@(X) X.Time(end), TSObjects));

%Sundeep Tuteja, 2012-11-09: Having vision files with non-overlapping
%datasets is becoming an increasingly disturbing issue. This happens when
%even one variable is not recorded correctly. For this reason, these files
%are to be ignored.
if starttime >= stoptime
    warning([mfilename ':' thisfuncname ':' 'NonOverlappingDataSetsEncountered'], ['WARNING: Datasets ' TSObjects{idx_start}.Name ' and ' TSObjects{idx_stop}.Name ' in file ' formatstr(ARGS.FilePath, 'FormatBackslashes', true) ' do not contain any overlapping information. The file will be ignored.']);
    out = struct([]);
    return;
end

TSObjects = cellfun(@(X) resample(X, starttime:ARGS.SamplingIntervalSeconds:stoptime, ARGS.InterpMethod), TSObjects, 'UniformOutput', false);

out.data = cellfun(@(X) X.Data(:), (TSObjects(:)).', 'UniformOutput', false);

%Add Time_s, PC Timestamp
[out.colheaders, indices] = union(out.colheaders, {'PC Timestamp', 'Time_s'});
out.units = push(out.units(indices), {'datenum', 's'}, find(ismember(out.colheaders, {'PC Timestamp', 'Time_s'})));
out.data = push(out.data(indices), {TSObjects{1}.Time(:)/(24*3600), TSObjects{1}.Time(:)}, find(ismember(out.colheaders, {'PC Timestamp', 'Time_s'})));
out.data = cell2mat(out.data);

PC_Timestamp_IDX = find(strcmp('PC Timestamp', out.colheaders), 1);
Time_s_IDX = find(strcmp('Time_s', out.colheaders), 1);
diff_indices = setdiff(1:numel(out.colheaders), [PC_Timestamp_IDX Time_s_IDX]);
out.colheaders = [{'PC Timestamp', 'Time_s'} out.colheaders(diff_indices)];
out.units = [out.units([PC_Timestamp_IDX Time_s_IDX]) out.units(diff_indices)];
out.data = [out.data(:, [PC_Timestamp_IDX Time_s_IDX]) out.data(:, diff_indices)];

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end