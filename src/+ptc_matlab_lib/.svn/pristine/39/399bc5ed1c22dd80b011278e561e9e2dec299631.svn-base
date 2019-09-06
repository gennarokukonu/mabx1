function out = compute_TSC1_checksum(varargin)

%{
Function template:
out = ptc_matlab_lib.compute_TSC1_checksum( ...
    'SPN695_EngineOverrideControlMode', ______, ...
    'SPN696_EngineRequestedSpeedControlConditions', ______, ...
    'SPN897_OverrideControlModePriority', ______, ...
    'SPN898_EngineRequestedSpeedSpeedLimit', ______, ...
    'SPN518_EngineRequestedTorqueTorqueLimit', ______, ...
    'SPN3349_TSC1TransmissionRate', ______, ...
    'SPN3350_TSC1ControlPurpose', ______, ...
    'SPN4191_EngineRequestedTorqueFractional', ______, ...
    'SPN4206_MessageCounter', ______, ...
    'SPN4207_MessageChecksum', ______, ...
    'MessageIdentifierHex', ______);
%}

import('ptc_matlab_lib.*');
pairs = {'SPN695_EngineOverrideControlMode', NaN(0, 2), ...
    'SPN696_EngineRequestedSpeedControlConditions', NaN(0, 2), ...
    'SPN897_OverrideControlModePriority', NaN(0, 2), ...
    'SPN898_EngineRequestedSpeedSpeedLimit', NaN(0, 2), ...
    'SPN518_EngineRequestedTorqueTorqueLimit', NaN(0, 2), ...
    'SPN3349_TSC1TransmissionRate', NaN(0, 2), ...
    'SPN3350_TSC1ControlPurpose', NaN(0, 2), ...
    'SPN4191_EngineRequestedTorqueFractional', NaN(0, 2), ...
    'SPN4206_MessageCounter', NaN(0, 2), ...
    'SPN4207_MessageChecksum', NaN(0, 2), ...
    'MessageIdentifierHex', '', ...
    'ShowWaitbar', true};
ARGS = parseargs(varargin, pairs);

NUMBER_OF_STEPS = 6;
CURRENT_STEP = 0;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'WindowStyle', 'modal', 'Pointer', 'watch');
end

%% Step 1: Set up input signals
INPUTSIGNALS = struct('SPN695_EngineOverrideControlMode', struct('Data', {ARGS.SPN695_EngineOverrideControlMode}, 'Units', '', 'ScaleFactor', 1, 'Offset', 0, 'DataType', 'uint8'), ...
    'SPN696_EngineRequestedSpeedControlConditions', struct('Data', {ARGS.SPN696_EngineRequestedSpeedControlConditions}, 'Units', '', 'ScaleFactor', 1, 'Offset', 0, 'DataType', 'uint8'), ...
    'SPN897_OverrideControlModePriority', struct('Data', {ARGS.SPN897_OverrideControlModePriority}, 'Units', '', 'ScaleFactor', 1, 'Offset', 0, 'DataType', 'uint8'), ...
    'SPN898_EngineRequestedSpeedSpeedLimit', struct('Data', {ARGS.SPN898_EngineRequestedSpeedSpeedLimit}, 'Units', 'rpm', 'ScaleFactor', 0.125, 'Offset', 0, 'DataType', 'uint16'), ...
    'SPN518_EngineRequestedTorqueTorqueLimit', struct('Data', {ARGS.SPN518_EngineRequestedTorqueTorqueLimit}, 'Units', '%', 'ScaleFactor', 1, 'Offset', -125, 'DataType', 'uint8'), ...
    'SPN3349_TSC1TransmissionRate', struct('Data', {ARGS.SPN3349_TSC1TransmissionRate}, 'Units', '', 'ScaleFactor', 1, 'Offset', 0, 'DataType', 'uint8'), ...
    'SPN3350_TSC1ControlPurpose', struct('Data', {ARGS.SPN3350_TSC1ControlPurpose}, 'Units', '', 'ScaleFactor', 1, 'Offset', 0, 'DataType', 'uint8'), ...
    'SPN4191_EngineRequestedTorqueFractional', struct('Data', {ARGS.SPN4191_EngineRequestedTorqueFractional}, 'Units', '%', 'ScaleFactor', 0.125, 'Offset', 0, 'DataType', 'uint8'), ...
    'SPN4206_MessageCounter', struct('Data', {ARGS.SPN4206_MessageCounter}, 'Units', '', 'ScaleFactor', 1, 'Offset', 0, 'DataType', 'uint8'), ...
    'SPN4207_MessageChecksum', struct('Data', {ARGS.SPN4207_MessageChecksum}, 'Units', '', 'ScaleFactor', 1, 'Offset', 0, 'DataType', 'uint8'));
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Create timeseries objects
INPUTSIGNAL_NAMES = fieldnames(INPUTSIGNALS);
tsobjects = cell(numel(INPUTSIGNAL_NAMES), 1);
for ctr = 1:numel(tsobjects)
    thisSignalName = INPUTSIGNAL_NAMES{ctr};
    tsobjects{ctr} = timeseries(INPUTSIGNALS.(thisSignalName).Data(:, 2), INPUTSIGNALS.(thisSignalName).Data(:, 1), 'Name', thisSignalName);
    tsobjects{ctr}.DataInfo.Units = INPUTSIGNALS.(thisSignalName).Units;
end
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 3: Synchronize time vector
[tsobjects{:}] = synchronize_custom(tsobjects, 'Intersection', 'InterpMethod', 'zoh');
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 4: Compute raw values
for ctr = 1:numel(tsobjects)
    thisSignalName = INPUTSIGNAL_NAMES{ctr};
    thisRawData = realvalue2storedinteger('RealValue', tsobjects{ctr}.Data, 'DataType', INPUTSIGNALS.(thisSignalName).DataType, 'ScaleFactor', INPUTSIGNALS.(thisSignalName).ScaleFactor, 'Offset', INPUTSIGNALS.(thisSignalName).Offset);
    thisRawData = cast(thisRawData, INPUTSIGNALS.(thisSignalName).DataType);
    tsobjects{ctr}.UserData = struct('RawData', {thisRawData});
end
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 5: Compute raw stream for each timestep
MessageIdentifier = uint32(hex2dec(ARGS.MessageIdentifierHex));
MessageIDLowByte = uint8(bin2dec(num2str(bitget(MessageIdentifier, 8:-1:1))));
MessageIDMidLowByte = uint8(bin2dec(num2str(bitget(MessageIdentifier, 16:-1:9))));
MessageIDMidHighByte = uint8(bin2dec(num2str(bitget(MessageIdentifier, 24:-1:17))));
MessageIDHighByte = uint8(bin2dec(num2str(bitget(MessageIdentifier, 32:-1:25))));

byte1_list = uint8(bin2dec(strcat('11', dec2bin(tsobjects{3}.UserData.RawData, 2), dec2bin(tsobjects{2}.UserData.RawData, 2), dec2bin(tsobjects{1}.UserData.RawData, 2))));

x = dec2bin(tsobjects{4}.UserData.RawData, 16);
byte2_list = uint8(bin2dec(x(:, end-7:end)));
byte3_list = uint8(bin2dec(x(:, 1:8)));

byte4_list = uint8(tsobjects{5}.UserData.RawData);
byte5_list = uint8(bin2dec(strcat(dec2bin(tsobjects{7}.UserData.RawData, 5), dec2bin(tsobjects{6}.UserData.RawData, 3))));
byte6_list = uint8(bin2dec(strcat('1111', dec2bin(tsobjects{8}.UserData.RawData, 4))));
byte7_list = uint8(bin2dec('11111111') .* ones(numel(byte1_list), 1));

MessageCounterList = bitand(uint8(bin2dec(dec2bin(tsobjects{9}.UserData.RawData, 4))), 15, 'uint8');
MessageChecksumOriginal = uint8(bin2dec(dec2bin(tsobjects{10}.UserData.RawData, 4)));

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 6: Compute checksum
x = c_sum([byte1_list(:) byte2_list(:) byte3_list(:) byte4_list(:) byte5_list(:) byte6_list(:) byte7_list(:) MessageCounterList(:) ...
    MessageIDLowByte*ones(numel(byte1_list), 1, 'uint8') MessageIDMidLowByte*ones(numel(byte1_list), 1, 'uint8') MessageIDMidHighByte*ones(numel(byte1_list), 1, 'uint8') MessageIDHighByte*ones(numel(byte1_list), 1, 'uint8')], ...
    2, 'uint8');
x1 = bitand(bitshift(x, -6, 'uint8'), 3, 'uint8');
x2 = bitshift(x, -3, 'uint8');
MessageChecksumCalc = bitand(c_sum([x1(:) x2(:) x(:)], 2, 'uint8'), 7, 'uint8');

out.Pass = isequal(MessageChecksumCalc, MessageChecksumOriginal);
out.MessageIdentifierHex = ARGS.MessageIdentifierHex;
out.OriginalData = tsobjects;
out.CalculatedChecksums = timeseries(MessageChecksumCalc, tsobjects{1}.Time, 'Name', 'Calculated Checksums');
out.OriginalChecksums = timeseries(MessageChecksumOriginal, tsobjects{1}.Time, 'Name', 'Original Checksums');
out.ChecksumDiff = timeseries(MessageChecksumCalc ~= MessageChecksumOriginal, tsobjects{1}.Time, 'Name', 'Checksum Failures');

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end