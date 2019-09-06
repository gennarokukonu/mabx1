function varargout = set_srec_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'SRECDATA', struct([]), ...
    'ShowWaitbar', false, ...
    'Address', [], ...
    'DataHex', '', ...
    'AddressOffset', 0, ...
    'SREC_RECORD_FIELD_NAME', 'SREC_DATA_SEQUENCE'}; % This needs to be either SREC_BLOCK_HEADER or SREC_DATA_SEQUENCE or SREC_RECORD_COUNT or SREC_BLOCK_END
ARGS = parseargs(varargin, pairs);

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'WindowStyle', 'modal', 'Pointer', 'watch');
end

%Step 1: Process data such that it is returned as a char array of bytes
SRECDATA = ARGS.SRECDATA;
ARGS.DataHex = ARGS.DataHex(:).';
NUMCHARS = length(ARGS.DataHex);
assert(mod(NUMCHARS, 2) == 0);
NUMBYTES = NUMCHARS * 0.5;
SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList = cellfun(@(X) X(:).', SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList, 'UniformOutput', false);
[~, idx] = sort(SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList);
SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME) = structfun(@(X) X(idx), SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME), 'UniformOutput', false);
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

% Step 2: Inject specified hex data into specified address, while being
% mindful of all the situations that can be encountered.
StartAddress = ARGS.Address + ARGS.AddressOffset;
EndAddress = StartAddress + NUMBYTES - 1;
DataHex = [ARGS.DataHex(1:2:end).' ARGS.DataHex(2:2:end).'];

if numel(SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList) >= 1
    OriginalStartAddress = SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList(1);
    OriginalEndAddress = SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList(end) + 0.5*length(SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList{end}) - 1;
    ConsecutiveAddressList = (OriginalStartAddress : OriginalEndAddress).';
    ConsecutiveDataList = repmat('__', numel(ConsecutiveAddressList), 1);
    for ctr = 1:numel(SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList)
        thisStartAddress = SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList(ctr);
        thisDataList = SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList{ctr}(:);
        thisDataList = [thisDataList(1:2:end) thisDataList(2:2:end)];
        ConsecutiveDataList(thisStartAddress - OriginalStartAddress + 1 : thisStartAddress - OriginalStartAddress + size(thisDataList, 1), :) = thisDataList;
    end
    
    if EndAddress < OriginalStartAddress
        ConsecutiveAddressList = [(StartAddress : ConsecutiveAddressList(1) - 1).'; ConsecutiveAddressList];
        ConsecutiveDataList = [DataHex;
            repmat('__', numel(ConsecutiveAddressList) - (size(DataHex, 1) + size(ConsecutiveDataList, 1)), 1);
            ConsecutiveDataList];
    elseif OriginalEndAddress < StartAddress
        ConsecutiveAddressList = [ConsecutiveAddressList; (ConsecutiveAddressList(end) + 1 : EndAddress).'];
        ConsecutiveDataList = [ConsecutiveDataList;
            repmat('__', numel(ConsecutiveAddressList) - (size(DataHex, 1) + size(ConsecutiveDataList, 1)), 1);
            DataHex];
    elseif OriginalStartAddress >= StartAddress && OriginalEndAddress <= EndAddress
        ConsecutiveAddressList = (StartAddress : EndAddress).';
        ConsecutiveDataList = DataHex;
    elseif OriginalStartAddress <= StartAddress && OriginalEndAddress >= EndAddress
        ConsecutiveAddressList = (OriginalStartAddress : OriginalEndAddress).';
        ConsecutiveDataList(StartAddress - OriginalStartAddress + 1 : EndAddress - OriginalStartAddress + 1, :) = DataHex;
    elseif OriginalStartAddress > StartAddress && OriginalEndAddress > EndAddress
        ConsecutiveAddressList = (StartAddress : OriginalEndAddress).';
        StartIdx = EndAddress - OriginalStartAddress + 1;
        ConsecutiveDataList = [DataHex;
            ConsecutiveDataList(StartIdx:end, :)];
    elseif OriginalStartAddress < StartAddress && OriginalEndAddress < EndAddress
        ConsecutiveAddressList = (OriginalStartAddress : EndAddress).';
        EndIdx = StartAddress - 1 - OriginalStartAddress + 1;
        ConsecutiveDataList = [ConsecutiveDataList(1:EndIdx, :);
            DataHex];
    end
    
    idx = ConsecutiveDataList(:, 1) == '_';
    ConsecutiveDataList(idx, :) = [];
    ConsecutiveAddressList(idx) = [];
    idx = find(diff(ConsecutiveAddressList) ~= 1) + 1;
    if numel(idx) >= 1
        SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList = [ConsecutiveAddressList(1); ConsecutiveAddressList(idx)];
        SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList = cell(numel(SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList), 1);
        thisStartIdx = 1;
        for ctr = 1:numel(SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList)
            if ctr < numel(SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList)
                thisEndIdx = idx(ctr)-1;
                x = ConsecutiveDataList(thisStartIdx : thisEndIdx, :).';
                thisStartIdx = thisEndIdx + 1;
            else
                x = ConsecutiveDataList(thisStartIdx : end, :).';
            end
            SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList{ctr} = x(:).';
        end
    else
        SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList = ConsecutiveAddressList(1);
        x = ConsecutiveDataList.';
        SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList = {x(:).'};
    end
else
    SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).AddressList = StartAddress;
    SRECDATA.(ARGS.SREC_RECORD_FIELD_NAME).DataList = {ARGS.DataHex};
end

varargout{1} = SRECDATA;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end