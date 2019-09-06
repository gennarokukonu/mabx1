function write_srec_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'SRECDATA', struct([]), ...
    'SRECFilePath', '', ...
    'SRECExtensions', get_srec_extensions(), ...
    'PreferredDataSequenceRecordType', 'S3', ...
    'ShouldAddRecordCount', true, ...
    'PreferredRecordCountRecordType', 'S6', ...
    'DefaultByteCount', 16, ...
    'ShowWaitbar', true, ...
    'NewLine', sprintf('\r\n'), ...
    'WaitbarParams', {}};
ARGS = parseargs(varargin, pairs);
ARGS.SRECExtensions = sort(ARGS.SRECExtensions);
SRECExtensions_wild = strcat('*.', ARGS.SRECExtensions);

if ARGS.DefaultByteCount < 1 || ARGS.DefaultByteCount > 250
    error([mfilename ':' thisfuncname ':InvalidByteCount'], 'Invalid byte count specified. Please specify a value between 1 and 250 (inclusive)');
end

while isempty(ARGS.SRECFilePath)
    FileOpts = cellfun(@(X, Y) {Y, [X ' File (' Y ')']}, ARGS.SRECExtensions, SRECExtensions_wild, 'UniformOutput', false);
    [filename, pathname] = uiputfile(cat(1, FileOpts{:}), 'Save S-Record File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.SRECFilePath = fullfile(pathname, filename);
    if ~check_write_permissions(fileparts(ARGS.SRECFilePath))
        waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the S-Record file.', 'ERROR', 'modal'));
        ARGS.SRECFilePath = '';
    end
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 8;

%% Step 1: Set up SREC_BLOCK_HEADER
if isfield(ARGS.SRECDATA, 'SREC_BLOCK_HEADER')
    SREC_BLOCK_HEADER.RecordTypes = cell(numel(ARGS.SRECDATA.SREC_BLOCK_HEADER.AddressList), 1);
    SREC_BLOCK_HEADER.Addresses = cell(numel(ARGS.SRECDATA.SREC_BLOCK_HEADER.AddressList), 1);
    SREC_BLOCK_HEADER.Data = cell(numel(ARGS.SRECDATA.SREC_BLOCK_HEADER.AddressList), 1);
    for ctr = 1:numel(ARGS.SRECDATA.SREC_BLOCK_HEADER.AddressList)
        thisData = ARGS.SRECDATA.SREC_BLOCK_HEADER.DataList{ctr};
        NumBytes = length(thisData) * 0.5;
        
        %Set up chunk 1
        NumRows = floor(NumBytes/ARGS.DefaultByteCount);
        chunk1 = thisData(1 : 2*NumRows*ARGS.DefaultByteCount);
        
        if NumRows * ARGS.DefaultByteCount < NumBytes
            %Set up chunk 2
            chunk2 = pad_to_length('InputVector', thisData(2*NumRows*ARGS.DefaultByteCount + 1 : end), 'PadDirection', 'right', 'PadValue', '_', 'FinalLength', 2*ARGS.DefaultByteCount);
            thisData = [reshape(chunk1, [], NumRows).';
                chunk2(:).'];
        else
            thisData = reshape(chunk1, [], NumRows).';
        end
        if isempty(thisData)
            thisData = repmat('__', 1, ARGS.DefaultByteCount);
        end
        
        AddressOffsets = [0; arrayfun(@(X) X * nnz(thisData(X, :) ~= '_') * 0.5, (1:size(thisData, 1)-1).')];
        theseAddresses = ARGS.SRECDATA.SREC_BLOCK_HEADER.AddressList(ctr) + uint64(AddressOffsets);
        
        SREC_BLOCK_HEADER.RecordTypes{ctr} = repmat('S0', numel(theseAddresses), 1);
        SREC_BLOCK_HEADER.Addresses{ctr} = theseAddresses;
        SREC_BLOCK_HEADER.Data{ctr} = thisData;
    end
else
    SREC_BLOCK_HEADER.RecordTypes = cell(0, 1);
    SREC_BLOCK_HEADER.Addresses = cell(0, 1);
    SREC_BLOCK_HEADER.Data = cell(0, 1);
end
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 2: Set up SREC_DATA_SEQUENCE
RECORD_COUNT = 0;
if isfield(ARGS.SRECDATA, 'SREC_DATA_SEQUENCE')
    SREC_DATA_SEQUENCE.RecordTypes = cell(numel(ARGS.SRECDATA.SREC_DATA_SEQUENCE.AddressList), 1);
    SREC_DATA_SEQUENCE.Addresses = cell(numel(ARGS.SRECDATA.SREC_DATA_SEQUENCE.AddressList), 1);
    SREC_DATA_SEQUENCE.Data = cell(numel(ARGS.SRECDATA.SREC_DATA_SEQUENCE.AddressList), 1);
    for ctr = 1:numel(ARGS.SRECDATA.SREC_DATA_SEQUENCE.AddressList)
        thisData = ARGS.SRECDATA.SREC_DATA_SEQUENCE.DataList{ctr};
        NumBytes = length(thisData) * 0.5;
        
        %Set up chunk 1
        NumRows = floor(NumBytes/ARGS.DefaultByteCount);
        chunk1 = thisData(1 : 2*NumRows*ARGS.DefaultByteCount);
        
        if NumRows * ARGS.DefaultByteCount < NumBytes
            %Set up chunk 2
            chunk2 = pad_to_length('InputVector', thisData(2*NumRows*ARGS.DefaultByteCount + 1 : end), 'PadDirection', 'right', 'PadValue', '_', 'FinalLength', 2*ARGS.DefaultByteCount);
            thisData = [reshape(chunk1, [], NumRows).';
                chunk2(:).'];
        else
            thisData = reshape(chunk1, [], NumRows).';
        end
        if isempty(thisData)
            thisData = repmat('__', 1, ARGS.DefaultByteCount);
        end
        
        AddressOffsets = [0; arrayfun(@(X) X * nnz(thisData(X, :) ~= '_') * 0.5, (1:size(thisData, 1)-1).')];
        theseAddresses = ARGS.SRECDATA.SREC_DATA_SEQUENCE.AddressList(ctr) + uint64(AddressOffsets);
        
        SREC_DATA_SEQUENCE.RecordTypes{ctr} = repmat('S3', numel(theseAddresses), 1);
        SREC_DATA_SEQUENCE.Addresses{ctr} = theseAddresses;
        SREC_DATA_SEQUENCE.Data{ctr} = thisData;
        
        %Incrementing record count
        RECORD_COUNT = RECORD_COUNT + numel(theseAddresses);
    end
else
    SREC_DATA_SEQUENCE.RecordTypes{ctr} = cell(0, 1);
    SREC_DATA_SEQUENCE.Addresses{ctr} = cell(0, 1);
    SREC_DATA_SEQUENCE.Data{ctr} = cell(0, 1);
end
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 3: Add record count, if applicable
if ARGS.ShouldAddRecordCount
    SREC_RECORD_COUNT.RecordTypes = {'S6'};
    if RECORD_COUNT <= hex2dec('FFFF')
        SREC_RECORD_COUNT.RecordTypes = {ARGS.PreferredRecordCountRecordType};
    end
    SREC_RECORD_COUNT.Addresses = {min(RECORD_COUNT, hex2dec('FFFFFF'))};
    SREC_RECORD_COUNT.Data = {repmat('__', 1, ARGS.DefaultByteCount)};
else
    SREC_RECORD_COUNT.RecordTypes = cell(0, 1);
    SREC_RECORD_COUNT.Addresses = cell(0, 1);
    SREC_RECORD_COUNT.Data = cell(0, 1);
end
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 4: Set up SREC_BLOCK_END
SREC_BLOCK_END.RecordTypes = {'S7'};
SREC_BLOCK_END.Addresses = {0};
SREC_BLOCK_END.Data = {repmat('__', 1, ARGS.DefaultByteCount)};
if isfield(ARGS.SRECDATA, 'SREC_DATA_SEQUENCE')
    SREC_BLOCK_END.Addresses = {ARGS.SRECDATA.SREC_DATA_SEQUENCE.AddressList(1)};
end
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 5: Combine data
SRECDATA.RecordTypes = [cat(1, SREC_BLOCK_HEADER.RecordTypes{:}); cat(1, SREC_DATA_SEQUENCE.RecordTypes{:}); cat(1, SREC_RECORD_COUNT.RecordTypes{:}); cat(1, SREC_BLOCK_END.RecordTypes{:})];
SRECDATA.Addresses = [cat(1, SREC_BLOCK_HEADER.Addresses{:}); cat(1, SREC_DATA_SEQUENCE.Addresses{:}); cat(1, SREC_RECORD_COUNT.Addresses{:}); cat(1, SREC_BLOCK_END.Addresses{:})];
SRECDATA.Data = [cat(1, SREC_BLOCK_HEADER.Data{:}); cat(1, SREC_DATA_SEQUENCE.Data{:}); cat(1, SREC_RECORD_COUNT.Data{:}); cat(1, SREC_BLOCK_END.Data{:})];

SRECDATA.RecordTypes = cellstr(SRECDATA.RecordTypes);
SRECDATA.Data = cellstr(SRECDATA.Data);

SRECDATA.Data = strrep(SRECDATA.Data, '__', '');
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 6: Compute byte counts, address info etc.
ADDRESS_LENGTH_BYTES = containers.Map({'S0'; 'S1'; 'S2'; 'S3'; 'S5'; 'S6'; 'S7'; 'S8'; 'S9'}, [2; 2; 3; 4; 2; 3; 4; 3; 2]);
assert(ismember(ARGS.PreferredDataSequenceRecordType, {'S1'; 'S2'; 'S3'}));
datarecordidx = ismember(SRECDATA.RecordTypes, {'S1'; 'S2'; 'S3'});
terminationrecordidx = ismember(SRECDATA.RecordTypes, {'S7'; 'S8'; 'S9'});
switch ARGS.PreferredDataSequenceRecordType
    case 'S1'
        SRECDATA.RecordTypes(SRECDATA.Addresses <= hex2dec('FFFF') & datarecordidx) = {'S1'};
        SRECDATA.RecordTypes(SRECDATA.Addresses <= hex2dec('FFFF') & terminationrecordidx) = {'S9'};
    case 'S2'
        SRECDATA.RecordTypes(SRECDATA.Addresses <= hex2dec('FFFFFF') & datarecordidx) = {'S2'};
        SRECDATA.RecordTypes(SRECDATA.Addresses <= hex2dec('FFFFFF') & terminationrecordidx) = {'S8'};
    case 'S3'
        SRECDATA.RecordTypes(SRECDATA.Addresses <= hex2dec('FFFFFFFF') & datarecordidx) = {'S3'};
        SRECDATA.RecordTypes(SRECDATA.Addresses <= hex2dec('FFFFFFFF') & terminationrecordidx) = {'S7'};
end
AddressLengthBytes = cellfun(@(X) ADDRESS_LENGTH_BYTES(X), SRECDATA.RecordTypes);
DataLengthBytes = 0.5*cellfun(@length, SRECDATA.Data);
ByteCounts = AddressLengthBytes + DataLengthBytes + 1;
assert(all(ByteCounts <= hex2dec('FF')));
ByteCountsHex = dec2hex(ByteCounts, 2);
AddressesHex = cellstr(dec2hex(SRECDATA.Addresses, 8));
AddressesHex = arrayfun(@(X, Y) X{1}(end-Y*2+1 : end), AddressesHex, AddressLengthBytes, 'UniformOutput', false);

CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 7: Compute checksums
maxDataLengthBytes = max(DataLengthBytes);
data_for_checksum = SRECDATA.Data;
for ctr = 1:numel(data_for_checksum)
    data_for_checksum{ctr} = [data_for_checksum{ctr} repmat('0', 1, maxDataLengthBytes*2 - DataLengthBytes(ctr)*2)];
end
data_for_checksum = [ByteCountsHex, ...
    dec2hex(SRECDATA.Addresses, 8), ...
    cell2mat(data_for_checksum)];
data_for_checksum = mat2cell(data_for_checksum, ones(size(data_for_checksum, 1), 1), 2*ones(0.5*size(data_for_checksum, 2), 1));
sums = sum(reshape(hex2dec(data_for_checksum), size(data_for_checksum)), 2);
ChecksumsBin = num2str(cell2mat(arrayfun(@(X) ~bitget(X, 8:-1:1), sums, 'UniformOutput', false)));
ChecksumsHex = dec2hex(bin2dec(ChecksumsBin), 2);

CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 8: Write to file
STR = strcat(SRECDATA.RecordTypes, cellstr(ByteCountsHex), AddressesHex, SRECDATA.Data, cellstr(ChecksumsHex));
fid = fopen(ARGS.SRECFilePath, 'w');
fwrite(fid, [strjoin((STR(:)).', ARGS.NewLine), ARGS.NewLine]);
fclose(fid);

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end