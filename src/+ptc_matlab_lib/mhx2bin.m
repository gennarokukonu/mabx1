function mhx2bin(varargin)

import('ptc_matlab_lib.*');
pairs = {'MHXFilePath', '', ...
    'OutputFilePath', '', ...
    'FillerByte', uint8(hex2dec('FF')), ...
    'ShowWaitbar', true};
ARGS = parseargs(varargin, pairs);

ARGS.FillerByte = uint8(ARGS.FillerByte);

SRECExtensions = get_srec_extensions();
SRECExtensions_wild = strcat('*.', SRECExtensions);
if ~exist(ARGS.MHXFilePath, 'file')
    [filename, pathname] = uigetfile({strjoin(SRECExtensions_wild(:).', ';'), ['Motorola S-Record File (' strjoin(SRECExtensions_wild(:).', ', ') ')']; '*', 'All files'}, 'Select Motorola S-Record File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.MHXFilePath = fullfile(pathname, filename);
end

ARGS.OutputFilePath = strtrim(ARGS.OutputFilePath);
if isempty(ARGS.OutputFilePath)
    [MHXFileDir, MHXFileName] = fileparts(ARGS.MHXFilePath);
    while true
        [filename, pathname] = uiputfile({'*.bin', 'BIN File (*.bin)'}, 'Save as...', fullfile(MHXFileDir, [MHXFileName '.bin']));
        if isequal(filename, 0) || isequal(pathname, 0)
            %Cancel was pressed
            return;
        end
        if check_write_permissions(pathname)
            ARGS.OutputFilePath = fullfile(pathname, filename);
            break;
        end
        waitfor(msgbox_editable('MessageString', 'ERROR: Insufficient permissions. Please select a different location.', 'Color', 'red', 'WindowStyle', 'modal'));
    end
end

if ARGS.ShowWaitbar
    ticid = tic;
    CURRENT_STEP = 0;
    NUMBER_OF_STEPS = 3;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', 'WindowStyle', 'modal');
end

%% Step 1: Read S-Record file
SREC = get_srec_data('SRECFilePath', ARGS.MHXFilePath, ...
    'ShowWaitbar', false);
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Commence conversion. Note that only SREC_DATA_SEQUENCE is to be used
assert(isfield(SREC.SRECDATA, 'SREC_DATA_SEQUENCE'), ...
    [mfilename ':' thisfuncname ':InvalidSRecordFile'], ...
    ['File ''' ARGS.MHXFilePath ''' is not a valid S-Record file, or it is missing field SREC_DATA_SEQUENCE']);
[~, idx] = sort(SREC.SRECDATA.SREC_DATA_SEQUENCE.AddressList);
SREC.SRECDATA.SREC_DATA_SEQUENCE = structfun(@(X) X(idx), SREC.SRECDATA.SREC_DATA_SEQUENCE, 'UniformOutput', false);

StartingAddress = SREC.SRECDATA.SREC_DATA_SEQUENCE.AddressList(1);
EndingAddress = SREC.SRECDATA.SREC_DATA_SEQUENCE.AddressList(end) + length(SREC.SRECDATA.SREC_DATA_SEQUENCE.DataList{end})*0.5 - 1;
BINARYSTREAM = ARGS.FillerByte * ones(EndingAddress - StartingAddress + 1, 1, 'uint8');
for ctr = 1:numel(SREC.SRECDATA.SREC_DATA_SEQUENCE.AddressList)
    startidx = SREC.SRECDATA.SREC_DATA_SEQUENCE.AddressList(ctr) - StartingAddress + 1;
    endidx = startidx + length(SREC.SRECDATA.SREC_DATA_SEQUENCE.DataList{ctr})*0.5 - 1;
    DataHex = [SREC.SRECDATA.SREC_DATA_SEQUENCE.DataList{ctr}(1:2:end);
        SREC.SRECDATA.SREC_DATA_SEQUENCE.DataList{ctr}(2:2:end)].';
    BINARYSTREAM(startidx:endidx) = uint8(hex2dec(DataHex));
end
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 3: Write BINARYSTREAM to output file
fid = fopen(ARGS.OutputFilePath, 'w');
fwrite(fid, BINARYSTREAM);
fclose(fid);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end