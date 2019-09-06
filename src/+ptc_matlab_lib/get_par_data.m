function varargout = get_par_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'PARFilePath', '', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', cell(0, 1), ...
    'HashAlgorithm', 'SHA-512', ...
    'MetaDataLength', 22, ...
    'Separator', ';'};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.PARFilePath, 'file')
    [filename, pathname] = uigetfile({'*.par', 'PAR File (*.par)'}, 'Select PAR File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.PARFilePath = fullfile(pathname, filename);
end

NUMBER_OF_STEPS = 2;
CURRENT_STEP=0;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

%Step 1: Read PAR File
fid = fopen(ARGS.PARFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end
PARStruct = struct('FilePath', ARGS.PARFilePath, ...
    'Hash', hashfile('FilePath', ARGS.PARFilePath, 'HashAlgorithm', ARGS.HashAlgorithm), ...
    'HashAlgorithm', ARGS.HashAlgorithm, ...
    'PARDATA', struct('LabelNames', '', 'Data', ''));

%Step 2: Process PAR File
metadata = cellfun(@(X) X(1:ARGS.MetaDataLength), file, 'UniformOutput', false);
data = unique(cellfun(@(X) X(ARGS.MetaDataLength + 1 : end), file, 'UniformOutput', false));
data = cellfun(@(X) strsplit(X, ARGS.Separator), data, 'UniformOutput', false);
data = cat(1, data{:});
%Sundeep Tuteja, 2018-08-27: To deal with empty files.
if isempty(data)
    data = cell(0, 2);
end
[~, idx] = sort(data(:, 1));
data = data(idx, :); metadata = metadata(idx);
LabelNames = data(:, 1);
LabelData = data(:, 2);
[PARStruct.PARDATA.LabelNames, ia] = unique(LabelNames, 'last');
PARStruct.PARDATA.Data = cell(numel(PARStruct.PARDATA.LabelNames), 1);
PARStruct.PARDATA.MetaData = cell(numel(PARStruct.PARDATA.LabelNames), 1);
for ctr = 1:numel(PARStruct.PARDATA.LabelNames)
    if ctr == 1
        idx = 1:ia(ctr);
    else
        idx = ia(ctr-1) + 1 : ia(ctr);
    end
    thisData = LabelData(idx);
    thisData = cellfun(@(X) X(9:end), thisData, 'UniformOutput', false); %9, because the first 8 characters are simply row number and number of bytes, which can be ignored
    PARStruct.PARDATA.Data{ctr} = cat(2, thisData{:});
    
    assert(numel(unique(metadata(idx))) == 1);
    PARStruct.PARDATA.MetaData{ctr} = metadata{idx(1)};
end
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

varargout{1} = PARStruct;

end