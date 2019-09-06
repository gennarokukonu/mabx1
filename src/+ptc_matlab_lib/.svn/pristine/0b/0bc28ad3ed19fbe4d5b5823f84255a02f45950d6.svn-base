function out = get_cft_data(varargin)

import('ptc_matlab_lib.*');

pairs = {'FilePath', '', ...
    'SamplingIntervalSeconds', 1, ...
    'InterpMethod', 'zoh', ...
    'ShowWaitbar', true, ...
    'TimeZone', ''};
ARGS = parseargs(varargin, pairs);

ARGS.FilePath = strtrim(ARGS.FilePath);
if isempty(ARGS.FilePath)
    [filename, pathname] = uigetfile({'*.csv', 'CSV File'}, 'Select CSV File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        out = [];
        return;
    end
    ARGS.FilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    waitbar_hndl = waitbar(0, 'Reading CFT Data...', 'CloseRequestFcn', '', 'Pointer', 'watch');
    ticid = tic;
end

out.FilePath = ARGS.FilePath;

%Open CSV file
fid = fopen(ARGS.FilePath, 'r'); fseek(fid, 0, 'bof');

%Get colheaders
out.colheaders = strtrim(strsplit(fgetl(fid), ','));

%Get units
units = regexp(out.colheaders, '\((?<unit>.*)\)$', 'once', 'names');
out.units = repmat({''}, 1, numel(out.colheaders));
non_empty_indices = ~cellfun(@isempty, units);
out.units(non_empty_indices) = cellfun(@(X) X.unit, units(non_empty_indices), 'UniformOutput', false);

%Condition out.colheaders
out.colheaders = regexprep(out.colheaders, '\((?<unit>.*)\)$', '');
out.colheaders = strtrim(out.colheaders);

%Get raw CSV data
formatstring = repmat({'%s'}, 1, numel(out.colheaders));
out.data = textscan(fid, [formatstring{:}], 'Delimiter', ',');
for ctr = 1:numel(out.data)
    %-0.12345 is a placeholder for NaN
    out.data{ctr}(strcmp('-0.12345', out.data{ctr})) = {'NaN'};
end

%Close file
fclose(fid);

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end