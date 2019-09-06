function varargout = get_controltec_data(varargin)
%get_controltec_data: Function to read ControlTec CSV data downloaded from
%ControlTec's website

import('ptc_matlab_lib.*');
pairs = {'ControlTecCSVFilePath', '', ...
    'CSVSeparator', ',', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', {}};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.ControlTecCSVFilePath, 'file')
    [filename, pathname] = uigetfile({'*.csv', 'CSV File (*.csv)'}, 'Select CSV file', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = [];
        return;
    end
    ARGS.ControlTecCSVFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

fid = fopen(ARGS.ControlTecCSVFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);

Columns = (strexplode(file{1}, ARGS.CSVSeparator)).';
Data = (reshape(strexplode(strimplode(file(2:end, 1), ARGS.CSVSeparator), ARGS.CSVSeparator), numel(Columns), [])).';

[~, time_stamp_idx] = ismember('time_stamp', Columns);
[~, indices] = unique(Data(:, time_stamp_idx));
Data = Data(indices, :);

varargout{1} = struct('FilePath', ARGS.ControlTecCSVFilePath, 'ColumnNames', {Columns}, 'Data', {Data});

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end