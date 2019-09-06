function bin2mhx(varargin)
%BIN2MHX: Function to convert a BIN file to an MHX (Motorola S-Record) file

import('ptc_matlab_lib.*');
pairs = {'BINFilePath', '', ...
    'SRECFilePath', '', ...
    'StartingAddress', 0, ...
    'PreferredDataSequenceRecordType', 'S3', ...
    'ShouldAddRecordCount', true, ...
    'PreferredRecordCountRecordType', 'S6', ...
    'DefaultByteCount', 32, ...
    'ShowWaitbar', true, ...
    'NewLine', sprintf('\r\n'), ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.BINFilePath, 'file')
    [filename, pathname] = uigetfile({'*.bin', 'BIN File (*.bin)'; '*', 'All Files (*)'}, 'Select BIN file', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.BINFilePath = fullfile(pathname, filename);
end

if isempty(ARGS.SRECFilePath)
    [BINFileDir, BINFileName] = fileparts(ARGS.BINFilePath);
    while true
        [filename, pathname] = uiputfile({'*.mhx', 'MHX File (*.mhx)'}, 'Save As...', fullfile(BINFileDir, [BINFileName '.mhx']));
        if isequal(filename, 0) || isequal(pathname, 0)
            %Cancel was pressed
            return;
        end
        if ~check_write_permissions(pathname)
            waitfor(msgbox_editable('MessageString', 'ERROR: Insufficient permissions. Choose another location.', 'Color', 'red', 'WindowStyle', 'modal'));
        else
            break;
        end
    end
    ARGS.SRECFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

%Step 1: Prepare hex dataset for output MHX file
fid = fopen(ARGS.BINFilePath, 'r');
data = fread(fid);
fclose(fid);
DataHex = cellstr(dec2hex(data, 2));
DataHex = strjoin(DataHex(:).', '');
SRECDATA.SREC_DATA_SEQUENCE.AddressList = uint64(ARGS.StartingAddress);
SRECDATA.SREC_DATA_SEQUENCE.DataList = {DataHex};

CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%Step 2: Write SREC Data
write_srec_data('SRECDATA', SRECDATA, ...
    'SRECFilePath', ARGS.SRECFilePath, ...
    'PreferredDataSequenceRecordType', ARGS.PreferredDataSequenceRecordType, ...
    'ShouldAddRecordCount', ARGS.ShouldAddRecordCount, ...
    'PreferredRecordCountRecordType', ARGS.PreferredRecordCountRecordType, ...
    'DefaultByteCount', ARGS.DefaultByteCount, ...
    'ShowWaitbar', false, ...
    'NewLine', ARGS.NewLine);

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(0.5);
    delete(waitbar_hndl);
end

end