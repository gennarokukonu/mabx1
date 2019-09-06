function varargout = get_srec_data(varargin)

import('ptc_matlab_lib.*');

pairs = {'SRECFilePath', '', ...
    'ShouldValidateChecksums', true, ...
    'ShouldValidateRecordCounts', true, ...
    'ShowWaitbar', true, ...
    'SRECExtensions', get_srec_extensions, ...
    'FillerByteHex', 'FF', ...
    'HashAlgorithm', 'SHA-512', ...
    'WaitbarParams', {}};
ARGS = parseargs(varargin, pairs);
ARGS.SRECExtensions = sort(ARGS.SRECExtensions);

SRECExtensions_wild = strcat('*.', ARGS.SRECExtensions);

if ~exist(ARGS.SRECFilePath, 'file')
    [filename, pathname] = uigetfile({strimplode(SRECExtensions_wild, ';'), ['Motorola S-Record File (' strimplode(SRECExtensions_wild, ', ') ')']}, 'Select Motorola S-Record File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.SRECFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    tic;
    [~, ~, FileExt] = fileparts(ARGS.SRECFilePath);
    waitbar_hndl = waitbar(0, ['Parsing ' strrep(upper(FileExt), '.', '') ' file, please wait...'], 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

ARGS.FillerByteHex = dec2hex(hex2dec(ARGS.FillerByteHex), 2);

NUMBER_OF_STEPS = 8;
CURRENT_STEP = 0;

%% Step 1: Read file
fid = fopen(ARGS.SRECFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = strtrim(file{1});
file(cellfun(@isempty, file)) = [];
fclose(fid);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 2: Get record types
SREC.RecordTypes = cellfun(@(X) X(1:2), file, 'UniformOutput', false);
SREC.ByteCounts = cellfun(@(X) X(3:4), file, 'UniformOutput', false);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 3: Get addresses
SREC.AddressLengthsBytes = NaN(length(SREC.RecordTypes), 1);
SREC.AddressLengthsBytes(ismember(SREC.RecordTypes, {'S0'; 'S1'; 'S5'; 'S9'})) = 2;
SREC.AddressLengthsBytes(ismember(SREC.RecordTypes, {'S2'; 'S6'; 'S8'})) = 3;
SREC.AddressLengthsBytes(ismember(SREC.RecordTypes, {'S3'; 'S7'})) = 4;
SREC.Addresses = hex2dec2(arrayfun(@(X, Y) X{1}(5:4+Y*2), file, SREC.AddressLengthsBytes, 'UniformOutput', false));

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 4: Get data, exclude checksum
SREC.Data = arrayfun(@(X, Y) X{1}(5+Y*2:end-2), file, SREC.AddressLengthsBytes, 'UniformOutput', false);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 5: Get checksum
SREC.Checksums = arrayfun(@(X) X{1}(end-1:end), file, 'UniformOutput', false);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 6: Validate checksum
if ARGS.ShouldValidateChecksums
    if ARGS.ShowWaitbar
        waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl, 'Verifying record checksums, please wait...');
    end
    data_for_checksum = cellfun(@(X) X(3:end), file, 'UniformOutput', false);
    ByteCounts = hex2dec(SREC.ByteCounts);
    maxlen = max(ByteCounts);
    indices = ByteCounts < maxlen;
    data_for_checksum(indices) = arrayfun(@(X, Y) [X{1} repmat('00', 1, maxlen + 1 - Y)], data_for_checksum(indices), ByteCounts(indices)+1, 'UniformOutput', false);
    data_for_checksum = char(data_for_checksum);
    data_for_checksum = arrayfun(@(X) data_for_checksum(:, X:X+1), 1:2:size(data_for_checksum, 2), 'UniformOutput', false);
    data_for_checksum = reshape(hex2dec(data_for_checksum), numel(file), []);
    checksum = sum(data_for_checksum, 2);
    bits = arrayfun(@(X) bitget(X, 1:8), checksum, 'UniformOutput', false);
    indices = ~cellfun(@all, bits);
    if any(indices)
        if ARGS.ShowWaitbar
            delete(waitbar_hndl);
        end
        error([mfilename ':' thisfuncname ':ChecksumFailed'], ['ERROR: Checksum failed. Contact a developer.\n' ...
            'File: ' formatstr(ARGS.SRECFilePath, 'FormatBackslashes', true) '\n' ...
            'Line(s): ' num2str_custom(find(indices))]);
    end
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 7: Validate record counts
if ARGS.ShouldValidateRecordCounts
    if ARGS.ShowWaitbar
        waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl, 'Verifying record count, please wait...');
    end
    idx = find(ismember(SREC.RecordTypes, {'S1'; 'S2'; 'S3'}));
    idx_start = find(diff([0; idx]) > 1);
    idx_end = [idx_start(2:end) - 1; numel(idx)];
    RecordCountsActual = idx_end - idx_start + 1;
    record_count_idx = ismember(SREC.RecordTypes, {'S5'; 'S6'});
    if any(record_count_idx)
        RecordCountsRead = SREC.Addresses(record_count_idx);
        if ~isequal(RecordCountsRead, RecordCountsActual)
            if ARGS.ShowWaitbar
                delete(waitbar_hndl);
            end
            error([mfilename ':' thisfuncname ':RecordCountValidationFailed'], ['ERROR: Record count validation failed. Contact a developer.\n' ...
                'File: ' formatstr(ARGS.SRECFilePath, 'FormatBackslashes', true)]);
        end
    end
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 8: Obtain information about consecutive s-record regions.
% This is useful when  s-record files contain a small number of consecutive
% memory regions, which is usually the case.
SREC_RECORD_TYPES = {{'S0'}; {'S1'; 'S2'; 'S3'}; {'S5'; 'S6'}; {'S7'; 'S8'; 'S9'}};
SREC_REGIONS = {'SREC_BLOCK_HEADER'; 'SREC_DATA_SEQUENCE'; 'SREC_RECORD_COUNT'; 'SREC_BLOCK_END'};
for RegionCtr = 1:numel(SREC_REGIONS)
    theseIndices = ismember(SREC.RecordTypes, SREC_RECORD_TYPES{RegionCtr});
    if any(theseIndices)
        theseAddresses = SREC.Addresses(theseIndices);
        theseData = SREC.Data(theseIndices);
        theseByteLengths = 0.5*cellfun(@length, theseData);
        if ~strcmp(SREC_REGIONS{RegionCtr}, 'SREC_RECORD_COUNT')
            if numel(theseAddresses) > 1
                ConsecutiveIndices = [true; diff(theseAddresses) ~= theseByteLengths(1:end-1)];
            else
                ConsecutiveIndices = true;
            end
            RegionIndices = find(ConsecutiveIndices);
        else
            RegionIndices = 1:numel(theseAddresses);
        end
        SREC.(SREC_REGIONS{RegionCtr}).AddressList = theseAddresses(RegionIndices);
        SREC.(SREC_REGIONS{RegionCtr}).DataList = cell(numel(SREC.(SREC_REGIONS{RegionCtr}).AddressList), 1);
        for ctr = 1:numel(RegionIndices)-1
            SREC.(SREC_REGIONS{RegionCtr}).DataList{ctr} = strjoin(rowvec(theseData(RegionIndices(ctr) : RegionIndices(ctr+1) - 1)), '');
        end
        SREC.(SREC_REGIONS{RegionCtr}).DataList{end} = strjoin(rowvec(theseData(RegionIndices(end) : end)), '');
        
        [SREC.(SREC_REGIONS{RegionCtr}).AddressList, indices] = sort(SREC.(SREC_REGIONS{RegionCtr}).AddressList);
        SREC.(SREC_REGIONS{RegionCtr}).DataList = SREC.(SREC_REGIONS{RegionCtr}).DataList(indices);
    end
end

varargout{1} = struct('FilePath', ARGS.SRECFilePath, ...
    'Hash', hashfile('FilePath', ARGS.SRECFilePath, 'HashAlgorithm', ARGS.HashAlgorithm), ...
    'HashAlgorithm', ARGS.HashAlgorithm, ...
    'SRECDATA', partialstruct(SREC, SREC_REGIONS));

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc) ' seconds.']);
    pause(0.5);
    delete(waitbar_hndl);
end

end