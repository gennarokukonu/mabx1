function varargout = PTC_MBDS_BlockCallback(varargin) %#ok<STOUT>

import('ptc_matlab_lib.*');
pairs = {'action', 'BlockCallback', ...
    'BlockHandle', gcbh, ...
    'ParamVariable', ''};
ARGS = parseargs(varargin, pairs);

persistent PERSISTENT;
PERSISTENT.MaskNames = cellstr2(get(ARGS.BlockHandle, 'MaskNames'));
PERSISTENT.MaskEnables = cellstr2(get(ARGS.BlockHandle, 'MaskEnables'));
PERSISTENT.MaskValues = cellstr2(get(ARGS.BlockHandle, 'MaskValues'));

PROJECTKEY = 'tp1be5793d_1ce4_404f_a400_f494df1eeba7';
if ~isappdata(0, PROJECTKEY)
    setappdata(0, PROJECTKEY, struct([]));
end
PROJECTAPPDATA = getappdata(0, PROJECTKEY);

ARGS.BlockPath = [get(ARGS.BlockHandle, 'Path') '/' get(ARGS.BlockHandle, 'Name')];
%ARGS.BlockPath = pathcat('Params', {get(ARGS.BlockHandle, 'Path'), get(ARGS.BlockHandle, 'Name')}, 'PathSeparator', '/');

FIND_SETTINGS = {'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', ...
    'FindAll', 'on'};

SysNames = {'simulink';
    'PTC_MBDS_LIB'};
loaded_indices = bdIsLoaded(SysNames);
not_loaded_indices = find(~loaded_indices);
for idx = (not_loaded_indices(:)).'
    load_system(SysNames{idx});
end

LINEFEED = sprintf('\n');

switch ARGS.action
    case 'init'
        
        if isprop(ARGS.BlockHandle, 'PTC_MBDS_BlockVersion')
            set(ARGS.BlockHandle, 'PTC_MBDS_BlockVersion', PTC_MBDS_Version_Fcn);
        end
        
        if isprop(ARGS.BlockHandle, 'BlockType')
            switch get(ARGS.BlockHandle, 'BlockType')
                case 'Inport'
                    if isprop(ARGS.BlockHandle, 'Unit')
                        AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                        AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                        AttributesFormatString = union(AttributesFormatString, 'Unit: %<Unit>', 'stable');
                        set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    end
            end
        end
        
        if isprop(ARGS.BlockHandle, 'PTC_BlockType')
            switch get(ARGS.BlockHandle, 'PTC_BlockType')
                %% CASE PTC_MBDS_RealTimeSynchronization_TimeFactor
                case 'PTC_MBDS_RealTimeSynchronization_TimeFactor'
                    if isprop(ARGS.BlockHandle, 'TimeFactor')
                        TimeFactor_eval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'TimeFactor')));
                        if isa(TimeFactor_eval, 'Simulink.Parameter')
                            TimeFactor_eval = TimeFactor_eval.Value;
                        end
                        TimeFactor_eval = double(TimeFactor_eval);
                        if ~isscalar(TimeFactor_eval) || isnan(TimeFactor_eval) || TimeFactor_eval <= 0 || ~isreal(TimeFactor_eval)
                            waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for TimeFactor. TimeFactor must be a positive real scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                            set(ARGS.BlockHandle, 'TimeFactor', get(ARGS.BlockHandle, 'TimeFactor_prev'));
                            close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                            return;
                        end
                    end
                    
                    %% CASE PTC_MBDS_GetTickCounter
                case 'PTC_MBDS_GetTickCounter'
                    switch get_param(bdroot(ARGS.BlockPath), 'SystemTargetFile')
                        case 'raptor.tlc'
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'GetTickCounter_', 'PTC_MBDS_LIB/MBDS Standard Library/Verification/Run-Time Measurement/private/GetTickCounter/GetTickCounter_RAPTOR', 'noprompt');
                        otherwise
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'GetTickCounter_', 'PTC_MBDS_LIB/MBDS Standard Library/Verification/Run-Time Measurement/private/GetTickCounter/GetTickCounter_Generic', 'noprompt');
                    end
                    
                    %% CASE PTC_MBDS_Split_Real_Integer_Fraction
                case 'PTC_MBDS_Split_Real_Integer_Fraction'
                    %Do nothing
                    
                    %% CASE PTC_MBDS_SignalOverride
                case 'PTC_MBDS_SignalOverride'
                    %Do nothing
                    
                    %% CASE PTC_MBDS_DTC_Leaky_Bucket
                case 'PTC_MBDS_DTC_Leaky_Bucket'
                    %Do nothing
                    
                    %% CASE PTC_MBDS_Encode_VP1
                case {'PTC_MBDS_Encode_ACC1', 'PTC_MBDS_Encode_AMB', 'PTC_MBDS_Encode_AT1DPFSSC', 'PTC_MBDS_Encode_CCVS1', 'PTC_MBDS_Encode_EEC1', 'PTC_MBDS_Encode_EEC2', 'PTC_MBDS_Encode_ETC1', 'PTC_MBDS_Encode_ETC2', ...
                        'PTC_MBDS_Encode_LFE1', 'PTC_MBDS_Encode_PCC1', 'PTC_MBDS_Encode_TC1', 'PTC_MBDS_Encode_TSC1', 'PTC_MBDS_Encode_VDHR', 'PTC_MBDS_Encode_VP1', ...
                        'PTC_MBDS_Encode_XBR'}
                    DLC = slevalglobal('Expression', get(ARGS.BlockHandle, 'DLC'));
                    RawDataExternalInput_Mask_BlockType = get_param([ARGS.BlockPath '/RawDataExternalInput_Mask'], 'BlockType');
                    SignalNames = get(ARGS.BlockHandle, 'MaskNames');
                    SignalNames(ismember(SignalNames, {'DLC'; 'RawDataExternalInput_Mask'; 'PTC_BlockType'; 'PTC_MBDS_BlockVersion'})) = [];
                    if strcmp(get(ARGS.BlockHandle, 'RawDataExternalInput_Mask'), 'off')
                        if strcmp(RawDataExternalInput_Mask_BlockType, 'Inport')
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'RawDataExternalInput_Mask', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/Constant', 'noprompt');
                        end
                        set_param([ARGS.BlockPath '/RawDataExternalInput_Mask'], 'Value', ['uint8(255*ones(1, ' num2str(DLC) '))']);
                    else
                        if strcmp(RawDataExternalInput_Mask_BlockType, 'Constant')
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'RawDataExternalInput_Mask', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/Inport', 'noprompt');
                            set_param([ARGS.BlockPath '/RawDataExternalInput_Mask'], 'Port', '1', 'OutDataTypeStr', 'uint8', 'PortDimensions', num2str(DLC));
                        end
                    end
                    
                    %Sundeep Tuteja: 2017-03-21: A convention has to be followed.
                    %The Mask Parameter names corresponding to signal enables need
                    %to match the signal names used on the inports. This was done
                    %so that all encoder blocks could be handled in this particular
                    %subroutine. THIS IS IMPORTANT.
                    SignalStatusList = cellstr(get(ARGS.BlockHandle, SignalNames(:)));
                    for ctr = 1:numel(SignalStatusList)
                        thisBlockType = get_param([ARGS.BlockPath '/' SignalNames{ctr}], 'BlockType');
                        if strcmp(get(ARGS.BlockHandle, SignalNames{ctr}), 'on')
                            if strcmp(thisBlockType, 'Ground')
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', SignalNames{ctr}, 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/Inport', 'noprompt');
                            end
                        else
                            if strcmp(thisBlockType, 'Inport')
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', SignalNames{ctr}, 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/Ground', 'noprompt');
                                set_param([ARGS.BlockPath '/' SignalNames{ctr}], 'ShowName', 'on');
                            end
                        end
                    end
                    
                    % Arrange Inports
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    [~, loc] = ismember([{'RawDataExternalInput_Mask'}; SignalNames], InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_Constant
                case 'PTC_MBDS_Constant'
                    thisValue = strtrim(get_param(ARGS.BlockPath, 'Value2'));
                    set_param(ARGS.BlockPath, 'Value', thisValue);
                    try
                        thisValueEval = slevalglobal('Expression', thisValue);
                        if isa(thisValueEval, 'Simulink.Parameter')
                            if isscalar(thisValueEval.Value)
                                if isIntEnumType(thisValueEval.Value)
                                    set_param(ARGS.BlockPath, 'AttributesFormatString', ['Value: ' class(thisValueEval.Value) '.' char(thisValueEval.Value) LINEFEED 'Unit: ''' thisValueEval.DocUnits '''']);
                                else
                                    set_param(ARGS.BlockPath, 'AttributesFormatString', ['Value: ' num2expr('InputMatrix', double(thisValueEval.Value)) LINEFEED 'Unit: ''' thisValueEval.DocUnits '''']);
                                end
                            else
                                set_param(ARGS.BlockPath, 'AttributesFormatString', ['Value: <' strimplode(strtrim(cellstr(num2str(thisValueEval.Dimensions(:)))), ' X ') '>' LINEFEED 'Unit: ''' thisValueEval.DocUnits '''']);
                            end
                        else
                            set_param(ARGS.BlockPath, 'AttributesFormatString', '');
                        end
                    catch
                        set_param(ARGS.BlockPath, 'AttributesFormatString', '');
                    end
                    
                    %% CASE PTC_MBDS_GCM_1793_196_1503_Raptor_CAN_TX_Raw
                case 'PTC_MBDS_GCM_1793_196_1503_Raptor_CAN_TX_Raw'
                    paramCANBusNames = get(ARGS.BlockHandle, 'paramCANBusNames');
                    paramQueueSize = get(ARGS.BlockHandle, 'paramQueueSize');
                    
                    paramCANBusNames = ptc_matlab_lib.slevalglobal('Expression', paramCANBusNames);
                    paramQueueSize = ptc_matlab_lib.slevalglobal('Expression', paramQueueSize);
                    if isa(paramQueueSize, 'Simulink.Parameter')
                        paramQueueSize = paramQueueSize.Value;
                    end
                    IsValid = iscellstr(paramCANBusNames) && numel(paramCANBusNames) == 3 && numel(unique(paramCANBusNames)) == 3 && ...
                        isscalar(paramQueueSize) && paramQueueSize >= 1 && mod(paramQueueSize, 1) == 0;
                    if IsValid
                        set_param([ARGS.BlockPath '/CAN_Channel1_Tx/raptor_can_txraw'], ...
                            'canBus', ['''' paramCANBusNames{1} ''''], ...
                            'queueSize', num2str(paramQueueSize));
                        
                        set_param([ARGS.BlockPath '/CAN_Channel2_Tx/raptor_can_txraw'], ...
                            'canBus', ['''' paramCANBusNames{2} ''''], ...
                            'queueSize', num2str(paramQueueSize));
                        
                        set_param([ARGS.BlockPath '/CAN_Channel3_Tx/raptor_can_txraw'], ...
                            'canBus', ['''' paramCANBusNames{3} ''''], ...
                            'queueSize', num2str(paramQueueSize));
                    else
                        error([mfilename ':' thisfuncname ':InvalidParametersSpecified'], 'Invalid parameters specified');
                    end
                    
                    %% CASE PTC_MBDS_GCM_1793_196_1503_Raptor_CAN_RX_Raw
                case 'PTC_MBDS_GCM_1793_196_1503_Raptor_CAN_RX_Raw'
                    paramExtendedIdentifier = get(ARGS.BlockHandle, 'paramExtendedIdentifier');
                    paramIdentifier = get(ARGS.BlockHandle, 'paramIdentifier');
                    paramMatchIdentifierExactly = get(ARGS.BlockHandle, 'paramMatchIdentifierExactly');
                    paramCANBusNames = get(ARGS.BlockHandle, 'paramCANBusNames');
                    paramQueueSize = get(ARGS.BlockHandle, 'paramQueueSize');
                    
                    if strcmp(paramExtendedIdentifier, 'on')
                        paramExtendedIdentifier = true;
                        IdentifierLength_bits = 29;
                    else
                        paramExtendedIdentifier = false;
                        IdentifierLength_bits = 11;
                    end
                    paramIdentifier = ptc_matlab_lib.slevalglobal('Expression', paramIdentifier);
                    if isa(paramIdentifier, 'Simulink.Parameter')
                        paramIdentifier = paramIdentifier.Value;
                    end
                    paramCANBusNames = ptc_matlab_lib.slevalglobal('Expression', paramCANBusNames);
                    paramQueueSize = ptc_matlab_lib.slevalglobal('Expression', paramQueueSize);
                    if isa(paramQueueSize, 'Simulink.Parameter')
                        paramQueueSize = paramQueueSize.Value;
                    end
                    
                    IsValid = paramIdentifier >= 0 && paramIdentifier <= bin2dec(repmat('1', 1, IdentifierLength_bits)) && ...
                        mod(paramIdentifier, 1) == 0 && iscellstr(paramCANBusNames) && numel(paramCANBusNames) == 3 && numel(unique(paramCANBusNames)) == 3 && ...
                        isscalar(paramQueueSize) && paramQueueSize >= 1 && mod(paramQueueSize, 1) == 0;
                    if IsValid
                        mailbox_names = strcat('mailbox_', {randstring(10); randstring(10); randstring(10)});
                        BooleanStr = {'0'; '1'};
                        if paramExtendedIdentifier
                            if strcmp(paramMatchIdentifierExactly, 'on')
                                idMask = 'hex2dec(''1FFFFFFF'')';
                            elseif bin2dec(num2str(bitget(paramIdentifier, 24:-1:16, 'uint32'))) >= 240
                                idMask = 'hex2dec(''03FFFFFF'')';
                            else
                                idMask = 'hex2dec(''03FF00FF'')';
                            end
                        else
                            idMask = 'hex2dec(''07FF'')';
                        end
                        
                        set_param([ARGS.BlockPath '/Channel1_Rx/raptor_can_rxraw'], 'canBus', ['''' paramCANBusNames{1} ''''], ...
                            'extendedId', BooleanStr{double(paramExtendedIdentifier)+1}, ...
                            'id', num2str(paramIdentifier), ...
                            'idMask', idMask, ...
                            'mailbox', ['''' mailbox_names{1} ''''], ...
                            'queueSize', num2str(paramQueueSize));
                        set_param([ARGS.BlockPath '/Channel1_Rx/GetTimestamp/GetTimestamp/raptor_can_trigger'], 'mailbox', ['''' mailbox_names{1} '''']);
                        
                        set_param([ARGS.BlockPath '/Channel2_Rx/raptor_can_rxraw'], 'canBus', ['''' paramCANBusNames{2} ''''], ...
                            'extendedId', BooleanStr{double(paramExtendedIdentifier)+1}, ...
                            'id', num2str(paramIdentifier), ...
                            'idMask', idMask, ...
                            'mailbox', ['''' mailbox_names{2} ''''], ...
                            'queueSize', num2str(paramQueueSize));
                        set_param([ARGS.BlockPath '/Channel2_Rx/GetTimestamp/GetTimestamp/raptor_can_trigger'], 'mailbox', ['''' mailbox_names{2} '''']);
                        
                        set_param([ARGS.BlockPath '/Channel3_Rx/raptor_can_rxraw'], 'canBus', ['''' paramCANBusNames{3} ''''], ...
                            'extendedId', BooleanStr{double(paramExtendedIdentifier)+1}, ...
                            'id', num2str(paramIdentifier), ...
                            'idMask', idMask, ...
                            'mailbox', ['''' mailbox_names{3} ''''], ...
                            'queueSize', num2str(paramQueueSize));
                        set_param([ARGS.BlockPath '/Channel3_Rx/GetTimestamp/GetTimestamp/raptor_can_trigger'], 'mailbox', ['''' mailbox_names{3} '''']);
                    else
                        error([mfilename ':' thisfuncname ':InvalidParametersSpecified'], 'Invalid parameters specified');
                    end
                    
                    %% CASE PTC_MBDS_EnumSwitch
                case 'PTC_MBDS_EnumSwitch'
                    EnumerationTypeName = char(strtrim(get_param(ARGS.BlockPath, 'EnumerationTypeName')));
                    [~, EnumFieldsList] = enumeration(EnumerationTypeName);
                    if isempty(EnumFieldsList)
                        %Delete all lines
                        LineHandles = find_system(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FindAll', 'on', 'Type', 'line');
                        delete_line(LineHandles(ishandle(LineHandles)));
                        
                        %Delete all inports
                        InportPaths = cellstr2(find_system(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'BlockType', 'Inport'));
                        for ctr = 1:numel(InportPaths)
                            try %#ok<TRYNC>
                                delete_block([ARGS.BlockPath '/In' num2str(ctr)]);
                            end
                        end
                        
                        %Update parameter for Multiport_Switch
                        set_param([ARGS.BlockPath '/Multiport_Switch'], 'DataPortIndices', '{1,2,3}');
                        
                        %Set mask display string
                        set_param(ARGS.BlockPath, 'MaskDisplay', 'disp(sprintf(''ENUM\nSWITCH''));');
                    elseif numel(EnumFieldsList) == 1
                        waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'The enumeration data type needs to have at least two enumerations defined.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                        set(ARGS.BlockHandle, 'EnumerationTypeName', get(ARGS.BlockHandle, 'EnumerationTypeNamePrev'));
                        close_system(ARGS.BlockPath);
                        open_system(ARGS.BlockPath);
                        return;
                    else
                        %Delete all lines
                        LineHandles = find_system(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FindAll', 'on', 'Type', 'line');
                        delete_line(LineHandles(ishandle(LineHandles)));
                        
                        %Delete excess inports
                        InportPaths = cellstr2(find_system(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'BlockType', 'Inport'));
                        if numel(InportPaths) > numel(EnumFieldsList)+1
                            for ctr = numel(EnumFieldsList)+2 : numel(InportPaths)
                                try %#ok<TRYNC>
                                    delete_block([ARGS.BlockPath '/In' num2str(ctr)]);
                                end
                            end
                        end
                        
                        %Add missing inports
                        if numel(InportPaths) < numel(EnumFieldsList)+1
                            for ctr = numel(InportPaths)+1 : numel(EnumFieldsList)+1
                                add_block('PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/Inport', [ARGS.BlockPath '/In' num2str(ctr)]);
                            end
                        end
                        set_param([ARGS.BlockPath '/In1'], 'OutDataTypeStr', ['Enum: ' EnumerationTypeName]);
                        set_param([ARGS.BlockPath '/In1'], 'PortDimensions', '1');
                        
                        %Update parameter for Multiport_Switch
                        set_param([ARGS.BlockPath '/Multiport_Switch'], 'DataPortIndices', ['{' strimplode(strcat(EnumerationTypeName, '.', (EnumFieldsList(:)).'), ', ') '}']);
                        
                        %Reconnect lines
                        add_line(ARGS.BlockPath, 'Multiport_Switch/1', 'Out/1');
                        for ctr = 1:numel(EnumFieldsList)+1
                            add_line(ARGS.BlockPath, ['In' num2str(ctr) '/1'], ['Multiport_Switch/' num2str(ctr)]);
                        end
                        
                        %Set mask display string
                        PortLabelStrings = cell(numel(EnumFieldsList)+1, 1);
                        PortLabelStrings{1} = 'port_label(''input'', 1, ''[SEL]'');';
                        for ctr = 2:numel(PortLabelStrings)
                            PortLabelStrings{ctr} = ['port_label(''input'', ' num2str(ctr) ', ''' EnumFieldsList{ctr-1} ''');'];
                        end
                        MaskDisplayString = ['disp(sprintf(''ENUM\nSWITCH''));' LINEFEED ...
                            strimplode(PortLabelStrings, LINEFEED)];
                        set_param(ARGS.BlockPath, 'MaskDisplay', MaskDisplayString);
                        
                        set(ARGS.BlockHandle, 'EnumerationTypeNamePrev', EnumerationTypeName);
                    end
                    
                    %% CASE PTC_MBDS_DateTimeAssemble
                case 'PTC_MBDS_DateTimeAssemble'
                    ENO_Enabled = get_param(ARGS.BlockPath, 'ENO_Enabled');
                    ENO_BlockType = get_param([ARGS.BlockPath '/ENO'], 'BlockType');
                    if strcmp(ENO_Enabled, 'off')
                        if strcmp(ENO_BlockType, 'Outport')
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sinks/Terminator', 'noprompt');
                            MaskDisplayString = ['disp(sprintf(''Date Time\nAssemble''));' LINEFEED ...
                                'port_label(''input'', 1, ''Year'');' LINEFEED ...
                                'port_label(''input'', 2, ''Month'');' LINEFEED ...
                                'port_label(''input'', 3, ''Day'');' LINEFEED ...
                                'port_label(''input'', 4, ''Hours'');' LINEFEED ...
                                'port_label(''input'', 5, ''Minutes'');' LINEFEED ...
                                'port_label(''input'', 6, ''Seconds'');' LINEFEED ...
                                'port_label(''output'', 1, ''DT'');'];
                            set_param(ARGS.BlockPath, 'MaskDisplay', MaskDisplayString);
                        end
                    else
                        if strcmp(ENO_BlockType, 'Terminator')
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sinks/Outport', 'noprompt');
                            set_param([ARGS.BlockPath '/ENO'], 'OutDataTypeStr', 'boolean');
                            MaskDisplayString = ['disp(sprintf(''Date Time\nAssemble''));' LINEFEED ...
                                'port_label(''input'', 1, ''Year'');' LINEFEED ...
                                'port_label(''input'', 2, ''Month'');' LINEFEED ...
                                'port_label(''input'', 3, ''Day'');' LINEFEED ...
                                'port_label(''input'', 4, ''Hours'');' LINEFEED ...
                                'port_label(''input'', 5, ''Minutes'');' LINEFEED ...
                                'port_label(''input'', 6, ''Seconds'');' LINEFEED ...
                                'port_label(''output'', 1, ''DT'');' LINEFEED ...
                                'port_label(''output'', 2, ''ENO'');'];
                            set_param(ARGS.BlockPath, 'MaskDisplay', MaskDisplayString);
                        end
                    end
                    
                    %% CASE PTC_MBDS_DateTimeDisassemble
                case 'PTC_MBDS_DateTimeDisassemble'
                    ENO_Enabled = get_param(ARGS.BlockPath, 'ENO_Enabled');
                    ENO_BlockType = get_param([ARGS.BlockPath '/ENO'], 'BlockType');
                    if strcmp(ENO_Enabled, 'off')
                        if strcmp(ENO_BlockType, 'Outport')
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sinks/Terminator', 'noprompt');
                            MaskDisplayString = ['disp(sprintf(''Date Time\nDisassemble''));' LINEFEED ...
                                'port_label(''input'', 1, ''DT'');' LINEFEED ...
                                'port_label(''output'', 1, ''Year'');' LINEFEED ...
                                'port_label(''output'', 2, ''Month'');' LINEFEED ...
                                'port_label(''output'', 3, ''Day'');' LINEFEED ...
                                'port_label(''output'', 4, ''Hours'');' LINEFEED ...
                                'port_label(''output'', 5, ''Minutes'');' LINEFEED ...
                                'port_label(''output'', 6, ''Seconds'');' LINEFEED ...
                                'port_label(''output'', 7, ''Day of Week'');'];
                            set_param(ARGS.BlockPath, 'MaskDisplay', MaskDisplayString);
                        end
                    else
                        if strcmp(ENO_BlockType, 'Terminator')
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sinks/Outport', 'noprompt');
                            set_param([ARGS.BlockPath '/ENO'], 'OutDataTypeStr', 'boolean');
                            MaskDisplayString = ['disp(sprintf(''Date Time\nDisassemble''));' LINEFEED ...
                                'port_label(''input'', 1, ''DT'');' LINEFEED ...
                                'port_label(''output'', 1, ''Year'');' LINEFEED ...
                                'port_label(''output'', 2, ''Month'');' LINEFEED ...
                                'port_label(''output'', 3, ''Day'');' LINEFEED ...
                                'port_label(''output'', 4, ''Hours'');' LINEFEED ...
                                'port_label(''output'', 5, ''Minutes'');' LINEFEED ...
                                'port_label(''output'', 6, ''Seconds'');' LINEFEED ...
                                'port_label(''output'', 7, ''Day of Week'');' LINEFEED ...
                                'port_label(''output'', 8, ''ENO'');'];
                            set_param(ARGS.BlockPath, 'MaskDisplay', MaskDisplayString);
                        end
                    end
                    
                    %% CASE PTC_MBDS_MergeBuses
                case 'PTC_MBDS_MergeBuses'
                    Param_NumberOfBuses = evalsafe(char(get_param(ARGS.BlockPath, 'NumberOfBuses')));
                    if isa(Param_NumberOfBuses, 'Simulink.Parameter')
                        Param_NumberOfBuses = Param_NumberOfBuses.Value;
                    end
                    Param_NumberOfBuses = round(Param_NumberOfBuses);
                    if ~isscalar(Param_NumberOfBuses) || Param_NumberOfBuses < 1
                        waitfor(msgbox_editable('MessageString', 'Invalid number of buses', 'Color', 'red', 'WindowStyle', 'modal'));
                        set_param(ARGS.BlockPath, 'NumberOfBuses', get_param(ARGS.BlockPath, 'NumberOfBusesPrev'));
                        close_system(ARGS.BlockPath);
                        open_system(ARGS.BlockPath);
                        return;
                    end
                    
                    %Delete all lines
                    LineHandles = find_system(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FindAll', 'on', 'Type', 'line');
                    delete_line(LineHandles(ishandle(LineHandles)));
                    
                    %Delete BusCreator
                    try %#ok<TRYNC>
                        delete_block([ARGS.BlockPath '/BusCreator']);
                    end
                    
                    %Delete all bus selectors
                    InportPaths = cellstr2(find_system(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'BlockType', 'Inport'));
                    if numel(InportPaths) >= 2
                        for ctr = 1:numel(InportPaths)
                            try %#ok<TRYNC>
                                delete_block([ARGS.BlockPath '/BusSelector' num2str(ctr)]);
                            end
                        end
                    end
                    
                    %Delete excess inports
                    if numel(InportPaths) > Param_NumberOfBuses
                        for ctr = Param_NumberOfBuses + 1 : numel(InportPaths)
                            try %#ok<TRYNC>
                                delete_block([ARGS.BlockPath '/In' num2str(ctr)]);
                            end
                        end
                    end
                    
                    %Add missing inports and missing bus selectors
                    if numel(InportPaths) < Param_NumberOfBuses
                        for ctr = numel(InportPaths) + 1 : Param_NumberOfBuses
                            add_block('built-in/Inport', [ARGS.BlockPath '/In' num2str(ctr)]);
                        end
                    end
                    
                    %Add bus selectors
                    if Param_NumberOfBuses >= 2
                        for ctr = 1:Param_NumberOfBuses
                            add_block(['simulink/Signal Routing/Bus' LINEFEED 'Selector'], [ARGS.BlockPath '/BusSelector' num2str(ctr)]);
                        end
                    end
                    
                    %Add bus creator
                    if Param_NumberOfBuses >= 2
                        add_block(['simulink/Signal Routing/Bus' LINEFEED 'Creator'], [ARGS.BlockPath '/BusCreator']);
                        add_line(ARGS.BlockPath, 'BusCreator/1', 'Out1/1');
                    end
                    
                    %Connect lines from inports
                    if Param_NumberOfBuses == 1
                        add_line(ARGS.BlockPath, 'In1/1', 'Out1/1');
                    elseif Param_NumberOfBuses >= 2
                        NumOfInputs = 0;
                        OutputSignalNames = cell(numel(Param_NumberOfBuses), 1);
                        for ctr = 1:Param_NumberOfBuses
                            add_line(ARGS.BlockPath, ['In' num2str(ctr) '/1'], ['BusSelector' num2str(ctr) '/1']);
                            theseInputSignals = get_param([ARGS.BlockPath '/BusSelector' num2str(ctr)], 'InputSignals');
                            if ~isempty(theseInputSignals)
                                if ~iscellstr(theseInputSignals)
                                    theseInputSignals = cellfun(@(X) X{1}, theseInputSignals, 'UniformOutput', false);
                                end
                                theseOutputSignals = strimplode(theseInputSignals, ',');
                                NumOfInputs = NumOfInputs + numel(theseInputSignals);
                                OutputSignalNames{ctr} = theseInputSignals(:);
                                set_param([ARGS.BlockPath '/BusSelector' num2str(ctr)], 'OutputSignals', theseOutputSignals);
                            end
                        end
                        set_param([ARGS.BlockPath '/BusCreator'], 'Inputs', num2str(max(NumOfInputs, 1)));
                        counter = 0;
                        for ctr = 1:Param_NumberOfBuses
                            ctr_str = num2str(ctr);
                            theseInputSignals = get_param([ARGS.BlockPath '/BusSelector' num2str(ctr)], 'InputSignals');
                            if ~isempty(theseInputSignals)
                                for ctr2 = 1:numel(OutputSignalNames{ctr})
                                    counter = counter + 1;
                                    add_line(ARGS.BlockPath, ['BusSelector' ctr_str '/' num2str(ctr2)], ['BusCreator/' num2str(counter)]);
                                end
                            end
                        end
                    end
                    
                    %Update Param_NumberOfBuses_Prev
                    set_param(ARGS.BlockPath, 'NumberOfBusesPrev', char(strtrim(get_param(ARGS.BlockPath, 'NumberOfBuses'))));
                    set_param(ARGS.BlockPath, 'NumberOfBuses', char(strtrim(get_param(ARGS.BlockPath, 'NumberOfBuses'))));
                    
                    %% CASE PTC_MBDS_Delay
                case 'PTC_MBDS_Delay'
                    IsValid = true;
                    Param_DelayLength = round(str2double(get_param(ARGS.BlockPath, 'DelayLength')));
                    if ~isscalar(Param_DelayLength) || Param_DelayLength < 1
                        IsValid = false;
                    end
                    
                    if IsValid
                        BlockPaths = find_system(ARGS.BlockPath, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'BlockType', 'UnitDelay');
                        for ctr = 1:numel(BlockPaths)
                            PortHandles = get_param(BlockPaths{ctr}, 'PortHandles');
                            line1 = get(PortHandles.Inport, 'line');
                            line2 = get(PortHandles.Outport, 'line');
                            if line1 ~= -1
                                delete_line(line1);
                            end
                            if line2 ~= -1
                                delete_line(line2);
                            end
                            delete_block(BlockPaths{ctr});
                        end
                        
                        for ctr = 1:Param_DelayLength
                            add_block('PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Discrete Operations/Unit_Delay', [ARGS.BlockPath '/Unit_Delay' num2str(ctr)]);
                            set_param([ARGS.BlockPath '/Unit_Delay' num2str(ctr)], 'InitialCondition', 'InitialCondition');
                            if ctr == 1
                                SrcPort = 'In1/1';
                            else
                                SrcPort = ['Unit_Delay' num2str(ctr-1) '/1'];
                            end
                            DestPort = ['Unit_Delay' num2str(ctr) '/1'];
                            add_line(ARGS.BlockPath, SrcPort, DestPort);
                        end
                        SrcPort = ['Unit_Delay' num2str(ctr) '/1'];
                        DestPort = 'Out1/1';
                        add_line(ARGS.BlockPath, SrcPort, DestPort);
                        
                        set_param(ARGS.BlockPath, 'DelayLengthPrev', strtrim(get_param(ARGS.BlockPath, 'DelayLength')));
                        set_param(ARGS.BlockPath, 'DelayLength', strtrim(get_param(ARGS.BlockPath, 'DelayLength')));
                    end
                    
                    %% CASE PTC_MBDS_Raptor_Table_2D
                case 'PTC_MBDS_Raptor_Table_2D'
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        thisInterpolationMethod = get(ARGS.BlockHandle, 'InterpolationMethod');
                        assert(numel(thisParameterObject.Axis_Labels) == 2);
                        ColumnAxisObjectName = thisParameterObject.Axis_Labels{1};
                        thisColumnAxisObject = slevalglobal('Expression', ColumnAxisObjectName);
                        assert(isa(thisColumnAxisObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        RowAxisObjectName = thisParameterObject.Axis_Labels{2};
                        thisRowAxisObject = slevalglobal('Expression', RowAxisObjectName);
                        assert(isa(thisRowAxisObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        AttributesFormatString = ['Row Axis: ' RowAxisObjectName ' (' slevalglobal('Expression', thisRowAxisObject.DocUnits) ')' LINEFEED ...
                            'Column Axis: ' ColumnAxisObjectName ' (' slevalglobal('Expression', thisColumnAxisObject.DocUnits) ')' LINEFEED ...
                            'Data Axis: ' ParameterObjectName ' (' thisParameterObject.DocUnits ')' LINEFEED ...
                            'Interpolation Method: ' thisInterpolationMethod];
                        set(ARGS.BlockHandle, 'AttributesFormatString', AttributesFormatString);
                        
                        %Populating raptor_table_axis_row
                        dataName = ['''' RowAxisObjectName ''''];
                        
                        if isempty(thisRowAxisObject.Value)
                            error([mfilename ':' thisfuncname ':EmptyParameterObject'], 'ERROR: Empty parameter objects should not be used');
                        else
                            initValue = RowAxisObjectName;
                        end
                        
                        dataType = compute_mldt('DataType', thisRowAxisObject.DataType);
                        
                        calHelp = ['''' formatstr(thisRowAxisObject.Description, 'FormatSingleQuotes', true) ''''];
                        calUnit = ['''' thisRowAxisObject.DocUnits ''''];
                        
                        if ~isempty(thisRowAxisObject.Min)
                            calMin = num2str(thisRowAxisObject.Min);
                        else
                            calMin = num2str(ptc_matlab_lib.getmindtval(dataType));
                        end
                        if ~isempty(thisRowAxisObject.Max)
                            calMax = num2str(thisRowAxisObject.Max);
                        else
                            calMax = num2str(ptc_matlab_lib.getmaxdtval(dataType));
                        end
                        
                        calFormat = ['''' thisRowAxisObject.getRaptorCalFormat() ''''];
                        
                        if ~isprimitivesldt(thisRowAxisObject.DataType)
                            try
                                dtobj = evalsafe(thisRowAxisObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisRowAxisObject.DataType ''');']);
                                end
                            end
                            calGain = num2str(dtobj.Slope);
                            calOffset = num2str(dtobj.Bias);
                        else
                            calGain = '1';
                            calOffset = '0';
                        end
                        
                        set_param([ARGS.BlockPath '/raptor_table_axis_row'], ...
                            'dataName', dataName, ...
                            'initValue', initValue, ...
                            'dataType', dataType, ...
                            'calHelp', calHelp, ...
                            'calUnit', calUnit, ...
                            'calMin', calMin, ...
                            'calMax', calMax, ...
                            'calFormat', calFormat, ...
                            'calGain', calGain, ...
                            'calOffset', calOffset);
                        
                        %Populating raptor_table_axis_column
                        dataName = ['''' ColumnAxisObjectName ''''];
                        
                        if isempty(thisColumnAxisObject.Value)
                            error([mfilename ':' thisfuncname ':EmptyParameterObject'], 'ERROR: Empty parameter objects should not be used');
                        else
                            initValue = ColumnAxisObjectName;
                        end
                        
                        dataType = compute_mldt('DataType', thisColumnAxisObject.DataType);
                        
                        calHelp = ['''' formatstr(thisColumnAxisObject.Description, 'FormatSingleQuotes', true) ''''];
                        calUnit = ['''' thisColumnAxisObject.DocUnits ''''];
                        
                        if ~isempty(thisColumnAxisObject.Min)
                            calMin = num2str(thisColumnAxisObject.Min);
                        else
                            calMin = num2str(ptc_matlab_lib.getmindtval(dataType));
                        end
                        if ~isempty(thisColumnAxisObject.Max)
                            calMax = num2str(thisColumnAxisObject.Max);
                        else
                            calMax = num2str(ptc_matlab_lib.getmaxdtval(dataType));
                        end
                        
                        calFormat = ['''' thisColumnAxisObject.getRaptorCalFormat() ''''];
                        
                        if ~isprimitivesldt(thisColumnAxisObject.DataType)
                            try
                                dtobj = evalsafe(thisColumnAxisObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisColumnAxisObject.DataType ''');']);
                                end
                            end
                            calGain = num2str(dtobj.Slope);
                            calOffset = num2str(dtobj.Bias);
                        else
                            calGain = '1';
                            calOffset = '0';
                        end
                        
                        set_param([ARGS.BlockPath '/raptor_table_axis_column'], ...
                            'dataName', dataName, ...
                            'initValue', initValue, ...
                            'dataType', dataType, ...
                            'calHelp', calHelp, ...
                            'calUnit', calUnit, ...
                            'calMin', calMin, ...
                            'calMax', calMax, ...
                            'calFormat', calFormat, ...
                            'calGain', calGain, ...
                            'calOffset', calOffset);
                        
                        %Populating raptor_table_interpolate_2d
                        dataName = ['''' ParameterObjectName ''''];
                        
                        if isempty(thisParameterObject.Value)
                            error([mfilename ':' thisfuncname ':EmptyParameterObject'], 'ERROR: Empty parameter objects should not be used');
                        else
                            initValue = ParameterObjectName;
                        end
                        
                        dataType = compute_mldt('DataType', thisParameterObject.DataType);
                        
                        calHelp = ['''' formatstr(thisParameterObject.Description, 'FormatSingleQuotes', true) ''''];
                        calUnit = ['''' thisParameterObject.DocUnits ''''];
                        
                        if ~isempty(thisParameterObject.Min)
                            calMin = num2str(thisParameterObject.Min);
                        else
                            calMin = num2str(ptc_matlab_lib.getmindtval(dataType));
                        end
                        if ~isempty(thisParameterObject.Max)
                            calMax = num2str(thisParameterObject.Max);
                        else
                            calMax = num2str(ptc_matlab_lib.getmaxdtval(dataType));
                        end
                        
                        calFormat = ['''' thisParameterObject.getRaptorCalFormat() ''''];
                        
                        if ~isprimitivesldt(thisParameterObject.DataType)
                            try
                                dtobj = evalsafe(thisParameterObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisParameterObject.DataType ''');']);
                                end
                            end
                            calGain = num2str(dtobj.Slope);
                            calOffset = num2str(dtobj.Bias);
                        else
                            calGain = '1';
                            calOffset = '0';
                        end
                        
                        set_param([ARGS.BlockPath '/raptor_table_interpolate_2d'], ...
                            'dataName', dataName, ...
                            'initValue', initValue, ...
                            'dataType', dataType, ...
                            'calHelp', calHelp, ...
                            'calUnit', calUnit, ...
                            'calMin', calMin, ...
                            'calMax', calMax, ...
                            'calFormat', calFormat, ...
                            'calGain', calGain, ...
                            'calOffset', calOffset);
                    end
                    
                    if ~IsValid
                        AttributesFormatString = '';
                        set(ARGS.BlockHandle, 'AttributesFormatString', AttributesFormatString);
                        
                        set_param([ARGS.BlockPath '/raptor_table_axis_row'], ...
                            'dataName', '''''', 'initValue', '[0 1]', 'dataType', 'single', ...
                            'calHelp', '''''', 'calUnit', '''''', 'calMin', '-Inf', ...
                            'calMax', 'Inf', 'calFormat', '''-1''', 'calGain', '1', ...
                            'calOffset', '0');
                        
                        set_param([ARGS.BlockPath '/raptor_table_axis_column'], ...
                            'dataName', '''''', 'initValue', '[0 1]', 'dataType', 'single', ...
                            'calHelp', '''''', 'calUnit', '''''', 'calMin', '-Inf', ...
                            'calMax', 'Inf', 'calFormat', '''-1''', 'calGain', '1', ...
                            'calOffset', '0');
                        
                        set_param([ARGS.BlockPath '/raptor_table_interpolate_2d'], ...
                            'dataName', '''''', 'initValue', '[0 0; 0 0]', 'dataType', 'single', ...
                            'calHelp', '''''', 'calUnit', '''''', 'calMin', '-Inf', ...
                            'calMax', 'Inf', 'calFormat', '''-1''', 'calGain', '1', ...
                            'calOffset', '0');
                    end
                    
                    %% CASE PTC_MBDS_Raptor_Table_1D
                case 'PTC_MBDS_Raptor_Table_1D'
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        thisInterpolationMethod = get(ARGS.BlockHandle, 'InterpolationMethod');
                        assert(numel(thisParameterObject.Axis_Labels) == 1);
                        AxisObjectName = thisParameterObject.Axis_Labels{1};
                        thisAxisObject = slevalglobal('Expression', AxisObjectName);
                        assert(isa(thisAxisObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        AttributesFormatString = ['X Axis: ' AxisObjectName ' (' slevalglobal('Expression', thisAxisObject.DocUnits) ')' LINEFEED ...
                            'Y Axis: ' ParameterObjectName ' (' thisParameterObject.DocUnits ')' LINEFEED ...
                            'Interpolation Method: ' thisInterpolationMethod];
                        set(ARGS.BlockHandle, 'AttributesFormatString', AttributesFormatString);
                        
                        %Populating raptor_table_axis
                        dataName = ['''' AxisObjectName ''''];
                        
                        if isempty(thisAxisObject.Value)
                            error([mfilename ':' thisfuncname ':EmptyParameterObject'], 'ERROR: Empty parameter objects should not be used');
                        else
                            initValue = AxisObjectName;
                        end
                        
                        dataType = compute_mldt('DataType', thisAxisObject.DataType);
                        
                        calHelp = ['''' formatstr(thisAxisObject.Description, 'FormatSingleQuotes', true) ''''];
                        calUnit = ['''' thisAxisObject.DocUnits ''''];
                        
                        if ~isempty(thisAxisObject.Min)
                            calMin = num2str(thisAxisObject.Min);
                        else
                            calMin = num2str(ptc_matlab_lib.getmindtval(dataType));
                        end
                        if ~isempty(thisAxisObject.Max)
                            calMax = num2str(thisAxisObject.Max);
                        else
                            calMax = num2str(ptc_matlab_lib.getmaxdtval(dataType));
                        end
                        
                        calFormat = ['''' thisAxisObject.getRaptorCalFormat() ''''];
                        
                        if ~isprimitivesldt(thisAxisObject.DataType)
                            try
                                dtobj = evalsafe(thisAxisObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisAxisObject.DataType ''');']);
                                end
                            end
                            calGain = num2str(dtobj.Slope);
                            calOffset = num2str(dtobj.Bias);
                        else
                            calGain = '1';
                            calOffset = '0';
                        end
                        
                        set_param([ARGS.BlockPath '/raptor_table_axis'], ...
                            'dataName', dataName, ...
                            'initValue', initValue, ...
                            'dataType', dataType, ...
                            'calHelp', calHelp, ...
                            'calUnit', calUnit, ...
                            'calMin', calMin, ...
                            'calMax', calMax, ...
                            'calFormat', calFormat, ...
                            'calGain', calGain, ...
                            'calOffset', calOffset);
                        
                        %Populating raptor_table_interpolate_1d
                        dataName = ['''' ParameterObjectName ''''];
                        
                        if isempty(thisParameterObject.Value)
                            error([mfilename ':' thisfuncname ':EmptyParameterObject'], 'ERROR: Empty parameter objects should not be used');
                        else
                            initValue = ParameterObjectName;
                        end
                        
                        dataType = compute_mldt('DataType', thisParameterObject.DataType);
                        
                        calHelp = ['''' formatstr(thisParameterObject.Description, 'FormatSingleQuotes', true) ''''];
                        calUnit = ['''' thisParameterObject.DocUnits ''''];
                        
                        if ~isempty(thisParameterObject.Min)
                            calMin = num2str(thisParameterObject.Min);
                        else
                            calMin = num2str(ptc_matlab_lib.getmindtval(dataType));
                        end
                        if ~isempty(thisParameterObject.Max)
                            calMax = num2str(thisParameterObject.Max);
                        else
                            calMax = num2str(ptc_matlab_lib.getmaxdtval(dataType));
                        end
                        
                        calFormat = ['''' thisParameterObject.getRaptorCalFormat() ''''];
                        
                        if ~isprimitivesldt(thisParameterObject.DataType)
                            try
                                dtobj = evalsafe(thisParameterObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisParameterObject.DataType ''');']);
                                end
                            end
                            calGain = num2str(dtobj.Slope);
                            calOffset = num2str(dtobj.Bias);
                        else
                            calGain = '1';
                            calOffset = '0';
                        end
                        
                        set_param([ARGS.BlockPath '/raptor_table_interpolate_1d'], ...
                            'dataName', dataName, ...
                            'initValue', initValue, ...
                            'dataType', dataType, ...
                            'calHelp', calHelp, ...
                            'calUnit', calUnit, ...
                            'calMin', calMin, ...
                            'calMax', calMax, ...
                            'calFormat', calFormat, ...
                            'calGain', calGain, ...
                            'calOffset', calOffset);
                    end
                    
                    if ~IsValid
                        AttributesFormatString = '';
                        set(ARGS.BlockHandle, 'AttributesFormatString', AttributesFormatString);
                        
                        set_param([ARGS.BlockPath '/raptor_table_axis'], ...
                            'dataName', '''''', ...
                            'initValue', '[0 1]', ...
                            'dataType', 'single', ...
                            'calHelp', '''''', ...
                            'calUnit', '''''', ...
                            'calMin', '-Inf', ...
                            'calMax', 'Inf', ...
                            'calFormat', '''-1''', ...
                            'calGain', '1', ...
                            'calOffset', '0');
                        
                        set_param([ARGS.BlockPath '/raptor_table_interpolate_1d'], ...
                            'dataName', '''''', ...
                            'initValue', '[0 0]', ...
                            'dataType', 'single', ...
                            'calHelp', '''''', ...
                            'calUnit', '''''', ...
                            'calMin', '-Inf', ...
                            'calMax', 'Inf', ...
                            'calFormat', '''-1''', ...
                            'calGain', '1', ...
                            'calOffset', '0');
                    end
                    
                    %% CASE PTC_MBDS_1D_Lookup_Table, PTC_MBDS_2D_Lookup_Table
                case {'PTC_MBDS_1D_Lookup_Table', 'PTC_MBDS_2D_Lookup_Table'}
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        thisPTCBlockType = get(ARGS.BlockHandle, 'PTC_BlockType');
                        thisInterpolationMethod = get(ARGS.BlockHandle, 'InterpolationMethod');
                        switch thisPTCBlockType
                            case 'PTC_MBDS_1D_Lookup_Table'
                                assert(numel(thisParameterObject.Axis_Labels) == 1);
                            case 'PTC_MBDS_2D_Lookup_Table'
                                assert(numel(thisParameterObject.Axis_Labels) == 2);
                        end
                    catch
                        IsValid = false;
                    end
                    
                    thisTarget = get_param(bdroot(ARGS.BlockPath), 'SystemTargetFile');
                    if IsValid
                        switch thisPTCBlockType
                            case 'PTC_MBDS_1D_Lookup_Table'
                                if strcmp(thisTarget, 'raptor.tlc') && strcmp(thisInterpolationMethod, 'Linear')
                                    replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '1D_Lookup_Table', 'BlockType', 'Lookup_n-D', 'PTC_MBDS_LIB/Raptor/Lookup Tables/Raptor_Table_1D', 'noprompt');
                                    set_param([ARGS.BlockPath '/1D_Lookup_Table'], 'ParameterObjectName', ParameterObjectName);
                                elseif strcmp(thisTarget, 'raptor.tlc') && ~strcmp(thisInterpolationMethod, 'Linear') || ~strcmp(thisTarget, 'raptor.tlc')
                                    porthandles = get_param([ARGS.BlockPath '/In'], 'PortHandles');
                                    linehandle = get(porthandles.Outport, 'Line');
                                    if linehandle ~= -1
                                        delete_line(linehandle);
                                    end
                                    replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '1D_Lookup_Table', 'PTC_BlockType', 'PTC_MBDS_Raptor_Table_1D', sprintf('PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Lookup Tables/Lookup\nTable (n-D)'), 'noprompt');
                                    set_param([ARGS.BlockPath '/1D_Lookup_Table'], ...
                                        'NumberOfTableDimensions', '1', ...
                                        'Table', ParameterObjectName, ...
                                        'BreakPointsForDimension1', thisParameterObject.Axis_Labels{1}, ...
                                        'InterpMethod', thisInterpolationMethod, ...
                                        'OutDataTypeStr', 'Inherit: Inherit from ''Table data''');
                                    add_line(ARGS.BlockPath, 'In/1', '1D_Lookup_Table/1');
                                    if strcmp(thisTarget, 'raptor.tlc')
                                        warning([mfilename ':' thisfuncname ':WarningUnsupportedInterpMethod'], 'WARNING: %s: Unsupported interpolation method ''%s''. Table parameters will be hardcoded in software.', ARGS.BlockPath, thisInterpolationMethod);
                                    end
                                end
                                AttributesFormatString = ['X Axis: ' thisParameterObject.Axis_Labels{1} ' (' slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.DocUnits']) ')' LINEFEED ...
                                    'Y Axis: ' ParameterObjectName ' (' thisParameterObject.DocUnits ')' LINEFEED ...
                                    'Interpolation Method: ' thisInterpolationMethod];
                            case 'PTC_MBDS_2D_Lookup_Table'
                                if strcmp(thisTarget, 'raptor.tlc') && strcmp(thisInterpolationMethod, 'Linear')
                                    replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '2D_Lookup_Table', 'BlockType', 'Lookup_n-D', 'PTC_MBDS_LIB/Raptor/Lookup Tables/Raptor_Table_2D', 'noprompt');
                                    set_param([ARGS.BlockPath '/2D_Lookup_Table'], 'ParameterObjectName', ParameterObjectName);
                                elseif strcmp(thisTarget, 'raptor.tlc') && ~strcmp(thisInterpolationMethod, 'Linear') || ~strcmp(thisTarget, 'raptor.tlc')
                                    replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '2D_Lookup_Table', 'PTC_BlockType', 'PTC_MBDS_Raptor_Table_2D', sprintf('PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Lookup Tables/Lookup\nTable (n-D)'), 'noprompt');
                                    set_param([ARGS.BlockPath '/2D_Lookup_Table'], ...
                                        'NumberOfTableDimensions', '2', ...
                                        'Table', ParameterObjectName, ...
                                        'BreakPointsForDimension1', thisParameterObject.Axis_Labels{2}, ...
                                        'BreakPointsForDimension2', thisParameterObject.Axis_Labels{1}, ...
                                        'InterpMethod', thisInterpolationMethod, ...
                                        'OutDataTypeStr', 'Inherit: Inherit from ''Table data''');
                                    if strcmp(thisTarget, 'raptor.tlc')
                                        warning([mfilename ':' thisfuncname ':WarningUnsupportedInterpMethod'], 'WARNING: %s: Unsupported interpolation method ''%s''. Table parameters will be hardcoded in software.', ARGS.BlockPath, thisInterpolationMethod);
                                    end
                                end
                                AttributesFormatString = ['Row Axis: ' thisParameterObject.Axis_Labels{2} ' (' slevalglobal('Expression', [thisParameterObject.Axis_Labels{2} '.DocUnits']) ')' LINEFEED ...
                                    'Column Axis: ' thisParameterObject.Axis_Labels{1} ' (' slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.DocUnits']) ')' LINEFEED ...
                                    'Data Axis: ' ParameterObjectName ' (' thisParameterObject.DocUnits ')' LINEFEED ...
                                    'Interpolation Method: ' thisInterpolationMethod];
                        end
                        set(ARGS.BlockHandle, 'AttributesFormatString', AttributesFormatString);
                    end
                    
                    if ~IsValid
                        thisPTCBlockType = get(ARGS.BlockHandle, 'PTC_BlockType');
                        AttributesFormatString = '';
                        switch thisPTCBlockType
                            case 'PTC_MBDS_1D_Lookup_Table'
                                porthandles = get_param([ARGS.BlockPath '/In'], 'PortHandles');
                                linehandle = get(porthandles.Outport, 'Line');
                                if linehandle ~= -1
                                    delete_line(linehandle);
                                end
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '1D_Lookup_Table', 'PTC_BlockType', 'PTC_MBDS_Raptor_Table_1D', sprintf('PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Lookup Tables/Lookup\nTable (n-D)'), 'noprompt');
                                add_line(ARGS.BlockPath, 'In/1', '1D_Lookup_Table/1');
                                set_param([ARGS.BlockPath '/1D_Lookup_Table'], ...
                                    'NumberOfTableDimensions', '1', ...
                                    'Table', '[0 0]', ...
                                    'BreakPointsForDimension1', '[0 1]', ...
                                    'InterpMethod', get(ARGS.BlockHandle, 'InterpolationMethod'));
                            case 'PTC_MBDS_2D_Lookup_Table'
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '2D_Lookup_Table', 'PTC_BlockType', 'PTC_MBDS_Raptor_Table_2D', sprintf('PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Lookup Tables/Lookup\nTable (n-D)'), 'noprompt');
                                set_param([ARGS.BlockPath '/2D_Lookup_Table'], ...
                                    'NumberOfTableDimensions', '2', ...
                                    'Table', '[0 0; 0 0]', ...
                                    'BreakPointsForDimension1', '[0 1]', ...
                                    'BreakPointsForDimension2', '[0 1]', ...
                                    'InterpMethod', get(ARGS.BlockHandle, 'InterpolationMethod'));
                        end
                        set(ARGS.BlockHandle, 'AttributesFormatString', AttributesFormatString);
                    end
                    
                    %% CASE PTC_MBDS_MotoHawk_Map_1d_Ref, PTC_MBDS_MotoHawk_Map_2d_Ref
                case {'PTC_MBDS_MotoHawk_Map_1d_Ref', 'PTC_MBDS_MotoHawk_Map_2d_Ref'}
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        
                        for ctr = 1:numel(thisParameterObject.Axis_Labels)
                            assert(isa(slevalglobal('Expression', thisParameterObject.Axis_Labels{ctr}), 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        end
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                        AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_MotoHawk_Map_1d_Ref'
                                thisblk = 'motohawk_interpolation_1d_reference';
                                AttributesFormatString = union(AttributesFormatString, ...
                                    {['X Axis: ' thisParameterObject.Axis_Labels{1}];
                                    ['Y Axis: ' ParameterObjectName]}, 'stable');
                            case 'PTC_MBDS_MotoHawk_Map_2d_Ref'
                                thisblk = 'motohawk_interpolation_2d_reference';
                                AttributesFormatString = union(AttributesFormatString, ...
                                    {['Row Axis: ' thisParameterObject.Axis_Labels{2}];
                                    ['Column Axis: ' thisParameterObject.Axis_Labels{1}];
                                    ['Data Axis: ' ParameterObjectName]}, 'stable');
                        end
                        set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                        
                        set_param([ARGS.BlockPath '/' thisblk], 'nam', ['''' thisParameterObject.ASAP2_Identifier 'Map''']);
                        
                        mldt = compute_mldt('DataType', thisParameterObject.DataType);
                        set_param([ARGS.BlockPath '/' thisblk], 'dt', mldt);
                        
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_MotoHawk_Map_1d_Ref'
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference'], 'nam', ['''' slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.ASAP2_Identifier']) 'IdxArr''']);
                                
                                mldt = compute_mldt('DataType', slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.DataType']));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference'], 'dt', mldt);
                            case 'PTC_MBDS_MotoHawk_Map_2d_Ref'
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_col'], 'nam', ['''' slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.ASAP2_Identifier']) 'IdxArr''']);
                                mldt = compute_mldt('DataType', slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.DataType']));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_col'], 'dt', mldt);
                                
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_row'], 'nam', ['''' slevalglobal('Expression', [thisParameterObject.Axis_Labels{2} '.ASAP2_Identifier']) 'IdxArr''']);
                                mldt = compute_mldt('DataType', slevalglobal('Expression', [thisParameterObject.Axis_Labels{2} '.DataType']));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_row'], 'dt', mldt);
                        end
                    end
                    
                    if ~IsValid
                        AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                        AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_MotoHawk_Map_1d_Ref'
                                set_param([ARGS.BlockPath '/motohawk_interpolation_1d_reference'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference'], 'dt', 'double');
                                regexpresult = regexp(AttributesFormatString, '(\<X Axis:\s*\w+\>)|(\<Y Axis:\s*\w+>)');
                            case 'PTC_MBDS_MotoHawk_Map_2d_Ref'
                                set_param([ARGS.BlockPath '/motohawk_interpolation_2d_reference'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_col'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_col'], 'dt', 'double');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_row'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_reference_row'], 'dt', 'double');
                                regexpresult = regexp(AttributesFormatString, '(\<Row Axis:\s*\w+\>)|(\<Column Axis:\s*\w+>)|(\<Data Axis:\s*\w+\>)');
                        end
                        indices = cellfun(@isempty, regexpresult);
                        AttributesFormatString(indices) = [];
                        set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    end
                    
                    %% CASE PTC_MBDS_MotoHawk_Map_1d_Def, PTC_MBDS_MotoHawk_Map_2d_Def
                case {'PTC_MBDS_MotoHawk_Map_1d_Def', 'PTC_MBDS_MotoHawk_Map_2d_Def'}
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        
                        for ctr = 1:numel(thisParameterObject.Axis_Labels)
                            assert(isa(slevalglobal('Expression', thisParameterObject.Axis_Labels{ctr}), 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                        end
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        if ~isprimitivesldt(thisParameterObject.DataType)
                            try
                                dtobj = evalsafe(thisParameterObject.DataType);
                            catch
                                IsValid = false;
                            end
                        else
                            dtobj = fixdt(thisParameterObject.DataType);
                        end
                    end
                    
                    if IsValid
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_MotoHawk_Map_1d_Def'
                                thisblk = 'motohawk_interpolation_1d';
                            case 'PTC_MBDS_MotoHawk_Map_2d_Def'
                                thisblk = 'motohawk_interpolation_2d';
                        end
                        
                        set_param([ARGS.BlockPath '/' thisblk], 'nam', ['''' thisParameterObject.ASAP2_Identifier '''']);
                        
                        [mldt, mldt_cast] = compute_mldt('DataType', thisParameterObject.DataType);
                        
                        set_param([ARGS.BlockPath '/' thisblk], 'table_data', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Value''), ''%s'')', ParameterObjectName, mldt_cast));
                        set_param([ARGS.BlockPath '/' thisblk], 'help', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Description'')', ParameterObjectName));
                        set_param([ARGS.BlockPath '/' thisblk], 'units', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.DocUnits'')', ParameterObjectName));
                        if ~isempty(thisParameterObject.Min)
                            set_param([ARGS.BlockPath '/' thisblk], 'min_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min'')', ParameterObjectName));
                        else
                            set_param([ARGS.BlockPath '/' thisblk], 'min_val', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        if ~isempty(thisParameterObject.Max)
                            set_param([ARGS.BlockPath '/' thisblk], 'max_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Max'')', ParameterObjectName));
                        else
                            set_param([ARGS.BlockPath '/' thisblk], 'max_val', sprintf('cast(ptc_matlab_lib.getmaxdtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        set_param([ARGS.BlockPath '/' thisblk], 'precision', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.ASAP2_Precision'')', ParameterObjectName));
                        if ~isprimitivesldt(thisParameterObject.DataType)
                            try
                                dtobj = evalsafe(thisParameterObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisParameterObject.DataType ''');']);
                                end
                            end
                            set_param([ARGS.BlockPath '/' thisblk], 'gain', num2str(dtobj.Slope));
                            set_param([ARGS.BlockPath '/' thisblk], 'offset', num2str(dtobj.Bias));
                        else
                            set_param([ARGS.BlockPath '/' thisblk], 'gain', '1');
                            set_param([ARGS.BlockPath '/' thisblk], 'offset', '0');
                        end
                        set_param([ARGS.BlockPath '/' thisblk], 'exp', '1');
                        
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_MotoHawk_Map_1d_Def'
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'nam', ['''' slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.ASAP2_Identifier']) '''']);
                                
                                [mldt, mldt_cast] = compute_mldt('DataType', slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.DataType']));
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'breakpoint_data', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Value''), ''%s'')', thisParameterObject.Axis_Labels{1}, mldt_cast));
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'help', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Description'')', thisParameterObject.Axis_Labels{1}));
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'units', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.DocUnits'')', thisParameterObject.Axis_Labels{1}));
                                if ~isempty(slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.Min']))
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'min_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min'')', thisParameterObject.Axis_Labels{1}));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'min_val', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                                end
                                if ~isempty(slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.Max']))
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'max_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Max'')', thisParameterObject.Axis_Labels{1}));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'max_val', sprintf('cast(ptc_matlab_lib.getmaxdtval(''%s''), ''%s'')', mldt, mldt_cast));
                                end
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'precision', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.ASAP2_Precision'')', thisParameterObject.Axis_Labels{1}));
                                thisAxisObject = slevalglobal('Expression', thisParameterObject.Axis_Labels{1});
                                if ~isprimitivesldt(thisAxisObject.DataType)
                                    try
                                        dtobj = evalsafe(thisAxisObject.DataType);
                                    catch
                                        try %#ok<TRYNC>
                                            dtobj = evalsafe(['fixdt(''' thisAxisObject.DataType ''');']);
                                        end
                                    end
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'gain', num2str(dtobj.Slope));
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'offset', num2str(dtobj.Bias));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'gain', '1');
                                    set_param([ARGS.BlockPath '/motohawk_prelookup'], 'offset', '0');
                                end
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'exp', '1');
                                
                            case 'PTC_MBDS_MotoHawk_Map_2d_Def'
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'nam', ['''' slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.ASAP2_Identifier']) '''']);
                                [mldt, mldt_cast] = compute_mldt('DataType', slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.DataType']));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'breakpoint_data', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Value''), ''%s'')', thisParameterObject.Axis_Labels{1}, mldt_cast));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'help', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Description'')', thisParameterObject.Axis_Labels{1}));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'units', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.DocUnits'')', thisParameterObject.Axis_Labels{1}));
                                if ~isempty(slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.Min']))
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'min_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min'')', thisParameterObject.Axis_Labels{1}));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'min_val', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                                end
                                if ~isempty(slevalglobal('Expression', [thisParameterObject.Axis_Labels{1} '.Max']))
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'max_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Max'')', thisParameterObject.Axis_Labels{1}));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'max_val', sprintf('cast(ptc_matlab_lib.getmaxdtval(''%s''), ''%s'')', mldt, mldt_cast));
                                end
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'precision', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.ASAP2_Precision'')', thisParameterObject.Axis_Labels{1}));
                                thisAxisObject = slevalglobal('Expression', thisParameterObject.Axis_Labels{1});
                                if ~isprimitivesldt(thisAxisObject.DataType)
                                    try
                                        dtobj = evalsafe(thisAxisObject.DataType);
                                    catch
                                        try %#ok<TRYNC>
                                            dtobj = evalsafe(['fixdt(''' thisAxisObject.DataType ''');']);
                                        end
                                    end
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'gain', num2str(dtobj.Slope));
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'offset', num2str(dtobj.Bias));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'gain', '1');
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'offset', '0');
                                end
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'exp', '1');
                                
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'nam', ['''' slevalglobal('Expression', [thisParameterObject.Axis_Labels{2} '.ASAP2_Identifier']) '''']);
                                [mldt, mldt_cast] = compute_mldt('DataType', slevalglobal('Expression', [thisParameterObject.Axis_Labels{2} '.DataType']));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'breakpoint_data', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Value''), ''%s'')', thisParameterObject.Axis_Labels{2}, mldt_cast));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'help', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Description'')', thisParameterObject.Axis_Labels{2}));
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'units', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.DocUnits'')', thisParameterObject.Axis_Labels{2}));
                                if ~isempty(slevalglobal('Expression', [thisParameterObject.Axis_Labels{2} '.Min']))
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'min_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min'')', thisParameterObject.Axis_Labels{2}));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'min_val', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                                end
                                if ~isempty(slevalglobal('Expression', [thisParameterObject.Axis_Labels{2} '.Max']))
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'max_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Max'')', thisParameterObject.Axis_Labels{2}));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'max_val', sprintf('cast(ptc_matlab_lib.getmaxdtval(''%s''), ''%s'')', mldt, mldt_cast));
                                end
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'precision', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.ASAP2_Precision'')', thisParameterObject.Axis_Labels{2}));
                                thisAxisObject = slevalglobal('Expression', thisParameterObject.Axis_Labels{2});
                                if ~isprimitivesldt(thisAxisObject.DataType)
                                    try
                                        dtobj = evalsafe(thisAxisObject.DataType);
                                    catch
                                        try %#ok<TRYNC>
                                            dtobj = evalsafe(['fixdt(''' thisAxisObject.DataType ''');']);
                                        end
                                    end
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'gain', num2str(dtobj.Slope));
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'offset', num2str(dtobj.Bias));
                                else
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'gain', '1');
                                    set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'offset', '0');
                                end
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'exp', '1');
                        end
                    end
                    
                    if ~IsValid
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_MotoHawk_Map_1d_Def'
                                thisblk = 'motohawk_interpolation_1d';
                            case 'PTC_MBDS_MotoHawk_Map_2d_Def'
                                thisblk = 'motohawk_interpolation_2d';
                        end
                        
                        set_param([ARGS.BlockPath '/' thisblk], 'nam', '''''');
                        set_param([ARGS.BlockPath '/' thisblk], 'table_data', '[]');
                        set_param([ARGS.BlockPath '/' thisblk], 'help', '''''');
                        set_param([ARGS.BlockPath '/' thisblk], 'units', '''''');
                        set_param([ARGS.BlockPath '/' thisblk], 'min_val', '[]');
                        set_param([ARGS.BlockPath '/' thisblk], 'max_val', '[]');
                        set_param([ARGS.BlockPath '/' thisblk], 'precision', '''''');
                        set_param([ARGS.BlockPath '/' thisblk], 'gain', '1');
                        set_param([ARGS.BlockPath '/' thisblk], 'offset', '0');
                        set_param([ARGS.BlockPath '/' thisblk], 'exp', '1');
                        
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_MotoHawk_Map_1d_Def'
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'breakpoint_data', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'help', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'units', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'min_val', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'max_val', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'precision', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'gain', '1');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'offset', '0');
                                set_param([ARGS.BlockPath '/motohawk_prelookup'], 'exp', '1');
                                
                            case 'PTC_MBDS_MotoHawk_Map_2d_Def'
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'breakpoint_data', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'help', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'units', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'min_val', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'max_val', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'precision', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'gain', '1');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'offset', '0');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_col'], 'exp', '1');
                                
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'nam', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'breakpoint_data', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'help', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'units', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'min_val', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'max_val', '[]');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'precision', '''''');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'gain', '1');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'offset', '0');
                                set_param([ARGS.BlockPath '/motohawk_prelookup_row'], 'exp', '1');
                        end
                    end
                    
                    %% CASE PTC_MBDS_MotoHawk_Axis_Def
                case 'PTC_MBDS_MotoHawk_Axis_Def'
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'nam', ['''' thisParameterObject.ASAP2_Identifier '''']);
                        
                        [mldt, mldt_cast] = compute_mldt('DataType', thisParameterObject.DataType);
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'breakpoint_data', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Value''), ''%s'')', ParameterObjectName, mldt_cast));
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'help', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Description'')', ParameterObjectName));
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'units', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.DocUnits'')', ParameterObjectName));
                        if ~isempty(thisParameterObject.Min)
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'min_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min'')', ParameterObjectName));
                        else
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'min_val', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        if ~isempty(thisParameterObject.Max)
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'max_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Max'')', ParameterObjectName));
                        else
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'max_val', sprintf('cast(ptc_matlab_lib.getmaxdtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'precision', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.ASAP2_Precision'')', ParameterObjectName));
                        if ~isprimitivesldt(thisParameterObject.DataType)
                            try
                                dtobj = evalsafe(thisParameterObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisParameterObject.DataType ''');']);
                                end
                            end
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'gain', num2str(dtobj.Slope));
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'offset', num2str(dtobj.Bias));
                        else
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'gain', '1');
                            set_param([ARGS.BlockPath '/motohawk_prelookup'], 'offset', '0');
                        end
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'exp', '1');
                    end
                    
                    if ~IsValid
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'breakpoint_data', '[]');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'help', '''''');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'units', '''''');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'min_val', '[]');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'max_val', '[]');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'precision', '''''');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'gain', '1');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'offset', '0');
                        set_param([ARGS.BlockPath '/motohawk_prelookup'], 'exp', '1');
                    end
                    
                    %% CASE PTC_MBDS_Raptor_Data_Read
                case 'PTC_MBDS_Raptor_Data_Read'
                    IsValid = true;
                    ObjectName = char(strtrim(get(ARGS.BlockHandle, 'ObjectName')));
                    try
                        thisObject = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', ObjectName);
                        assert(isa(thisObject, 'ptc_matlab_lib.PTC_MBDS_Signal'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        dataName = ['''' ObjectName ''''];
                        
                        if isequal(thisObject.Dimensions, -1)
                            error([mfilename ':' thisfuncname ':UnspecifiedDimensions'], 'Dimensions of every signal object must be specified explicitly.');
                        else
                            dims = pad_to_length('InputVector', thisObject.Dimensions, 'PadValue', 1, 'PadDirection', 'right', 'FinalLength', 2);
                        end
                        
                        if prod(dims) == 1
                            dataShape = 'Scalar';
                        elseif numel(dims) == 1 || (numel(dims) == 2 && ismember(1, dims))
                            dataShape = 'Vector';
                        elseif numel(dims) == 2
                            dataShape = 'Matrix';
                        else
                            error([mfilename ':' thisfuncname ':InvalidDimensions'], 'Invalid dimensions');
                        end
                        
                        idxSource = 'Read Entire Vector/Matrix';
                        
                        set_param([ARGS.BlockPath '/raptor_data_read'], ...
                            'dataName', dataName, ...
                            'dataShape', dataShape, ...
                            'idxSource', idxSource);
                        
                        dt = regexprep(thisObject.DataType, '^(e|E)num:\s+', '');
                        if isIntEnumType(dt)
                            OutDataTypeStr = ['Enum: ' dt];
                        elseif strcmp(dt, 'auto')
                            OutDataTypeStr = 'Inherit: auto';
                        else
                            OutDataTypeStr = dt;
                        end
                        
                        PortDimensions = num2expr('InputMatrix', thisObject.Dimensions);
                        
                        set_param([ARGS.BlockPath '/Outport'], ...
                            'OutDataTypeStr', OutDataTypeStr, ...
                            'PortDimensions', PortDimensions);
                        
                        PortHandles = get_param([ARGS.BlockPath '/data_type_conversion'], 'PortHandles');
                        LineHandle = get(PortHandles.Outport(1), 'Line');
                        if iscell(LineHandle)
                            LineHandle = cell2mat(LineHandle);
                        end
                        set(LineHandle(1), 'Name', ObjectName);
                    end
                    
                    if ~IsValid
                        set_param([ARGS.BlockPath '/raptor_data_read'], ...
                            'dataName', '''DataName''', ...
                            'dataShape', 'Scalar', ...
                            'idxSource', 'Read Entire Vector/Matrix');
                        set_param([ARGS.BlockPath '/Outport'], ...
                            'OutDataTypeStr', 'Inherit: auto', ...
                            'PortDimensions', '-1');
                        
                        PortHandles = get_param([ARGS.BlockPath '/data_type_conversion'], 'PortHandles');
                        LineHandle = get(PortHandles.Outport(1), 'Line');
                        if iscell(LineHandle)
                            LineHandle = cell2mat(LineHandle);
                        end
                        set(LineHandle(1), 'Name', '');
                    end
                    
                    %% CASE PTC_MBDS_MotoHawk_Data_Read
                case 'PTC_MBDS_MotoHawk_Data_Read'
                    IsValid = true;
                    ObjectName = char(strtrim(get(ARGS.BlockHandle, 'ObjectName')));
                    try
                        thisObject = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', ObjectName);
                        assert(isa(thisObject, 'ptc_matlab_lib.PTC_MBDS_Signal') || isa(thisObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'nam', ['''' ObjectName '_''']);
                        
                        mldt = compute_mldt('DataType', thisObject.DataType);
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'typ', mldt);
                        
                        if isa(thisObject, 'ptc_matlab_lib.PTC_MBDS_Parameter')
                            dims = size(thisObject.Value);
                        elseif isa(thisObject, 'ptc_matlab_lib.PTC_MBDS_Signal')
                            dims = pad_to_length('InputVector', thisObject.Dimensions, 'PadValue', 1, 'PadDirection', 'right', 'FinalLength', 2);
                        end
                        
                        if isequal(dims, [1, 1])
                            set_param([ARGS.BlockPath '/motohawk_data_read'], 'structure', 'Scalar');
                        elseif ismember(1, dims)
                            set_param([ARGS.BlockPath '/motohawk_data_read'], 'structure', 'Vector');
                        elseif numel(dims) == 2
                            set_param([ARGS.BlockPath '/motohawk_data_read'], 'structure', 'Matrix');
                        else
                            error([mfilename ':' thisfuncname ':InvalidDimensions'], 'Invalid dimensions');
                        end
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'sz_vec', num2str(prod(dims)));
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'sz_row', num2str(dims(1)));
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'sz_col', num2str(dims(2)));
                        
                        dt = regexprep(thisObject.DataType, '^(e|E)num:\s+', '');
                        if isIntEnumType(dt)
                            set_param([ARGS.BlockPath '/Outport'], 'OutDataTypeStr', ['Enum: ' dt]);
                        else
                            set_param([ARGS.BlockPath '/Outport'], 'OutDataTypeStr', dt);
                        end
                        
                        PortHandles = get_param([ARGS.BlockPath '/data_type_conversion'], 'PortHandles');
                        LineHandle = get(PortHandles.Outport(1), 'Line');
                        if iscell(LineHandle)
                            LineHandle = cell2mat(LineHandle);
                        end
                        set(LineHandle(1), 'Name', ObjectName);
                    end
                    
                    if ~IsValid
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'typ', 'single');
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'structure', 'Scalar');
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'sz_vec', '1');
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'sz_row', '1');
                        set_param([ARGS.BlockPath '/motohawk_data_read'], 'sz_col', '1');
                        set_param([ARGS.BlockPath '/Outport'], 'OutDataTypeStr', 'Inherit: auto');
                        PortHandles = get_param([ARGS.BlockPath '/data_type_conversion'], 'PortHandles');
                        LineHandle = get(PortHandles.Outport(1), 'Line');
                        if iscell(LineHandle)
                            LineHandle = cell2mat(LineHandle);
                        end
                        set(LineHandle(1), 'Name', '');
                    end
                    
                    %% CASE PTC_MBDS_Raptor_Measurement
                case 'PTC_MBDS_Raptor_Measurement'
                    IsValid = true;
                    SignalObjectName = char(strtrim(get(ARGS.BlockHandle, 'SignalObjectName')));
                    try
                        thisSignalObject = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', SignalObjectName);
                        assert(isa(thisSignalObject, 'ptc_matlab_lib.PTC_MBDS_Signal'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        dataName = ['''' SignalObjectName ''''];
                        
                        dt = regexprep(thisSignalObject.DataType, '^(e|E)num:\s+', '');
                        if isIntEnumType(dt)
                            calEnum = [dt '.getRaptorEnumStruct()'];
                            calDispType = 'Enumeration';
                        else
                            calEnum = '{''Disabled'', ''Enabled''}';
                            calDispType = 'Number';
                        end
                        
                        calHelp = ['''' formatstr(thisSignalObject.Description, 'FormatSingleQuotes', true) ''''];
                        calUnit = ['''' thisSignalObject.DocUnits ''''];
                        
                        mldt = compute_mldt('DataType', thisSignalObject.DataType);
                        if ~isempty(thisSignalObject.Min)
                            calMin = num2str(thisSignalObject.Min);
                        else
                            calMin = num2str(ptc_matlab_lib.getmindtval(mldt));
                        end
                        if ~isempty(thisSignalObject.Max)
                            calMax = num2str(thisSignalObject.Max);
                        else
                            calMax = num2str(ptc_matlab_lib.getmaxdtval(mldt));
                        end
                        
                        calFormat = ['''' thisSignalObject.getRaptorCalFormat() ''''];
                        if ~isprimitivesldt(thisSignalObject.DataType)
                            try
                                dtobj = evalsafe(thisSignalObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisSignalObject.DataType ''');']);
                                end
                            end
                            calGain = num2str(dtobj.Slope);
                            calOffset = num2str(dtobj.Bias);
                        else
                            calGain = '1';
                            calOffset = '0';
                        end
                        
                        if isIntEnumType(dt)
                            OutDataTypeStr = ['Enum: ' dt];
                        elseif strcmp(dt, 'auto')
                            OutDataTypeStr = 'Inherit: auto';
                        else
                            OutDataTypeStr = dt;
                        end
                        PortDimensions = num2expr('InputMatrix', thisSignalObject.Dimensions);
                        set_param([ARGS.BlockPath '/Inport'], ...
                            'OutDataTypeStr', OutDataTypeStr, ...
                            'PortDimensions', PortDimensions);
                        
                        if isequal(thisSignalObject.Dimensions, -1)
                            error([mfilename ':' thisfuncname ':UnspecifiedDimensions'], 'Dimensions of every signal object must be specified explicitly.');
                        else
                            dims = pad_to_length('InputVector', thisSignalObject.Dimensions, 'PadValue', 1, 'PadDirection', 'right', 'FinalLength', 2);
                        end
                        
                        if isempty(thisSignalObject.InitialValue)
                            if isIntEnumType(dt)
                                initValue = num2expr('InputMatrix', repmat(double(slevalglobal('Expression', [dt '.getDefaultValue()'])), dims), 'ShowNewLines', false);
                            elseif isempty(thisSignalObject.Min) || isempty(thisSignalObject.Max)
                                initValue = num2expr('InputMatrix', repmat(max(mean([getmindtval(mldt) getmaxdtval(mldt)]), 0), dims), 'ShowNewLines', false);
                            else
                                initValue = num2expr('InputMatrix', repmat(max(mean([thisSignalObject.Min thisSignalObject.Max]), 0), dims), 'ShowNewLines', false);
                            end
                        else
                            initValue = double(slevalglobal('Expression', thisSignalObject.InitialValue));
                            if isscalar(initValue)
                                initValue = repmat(initValue, dims);
                            end
                            initValue = num2expr('InputMatrix', initValue, 'ShowNewLines', false);
                        end
                        
                        if any(strcmp(mldt, {'double', 'single', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'boolean'}))
                            dataType = mldt;
                        else
                            dataType = containerdatatype2('MinVal', getmindtval(mldt), 'MaxVal', getmaxdtval(mldt), 'OutputType', 'simulink');
                        end
                        
                        set_param([ARGS.BlockPath '/raptor_data_def'], ...
                            'dataName', dataName, ...
                            'initValue', initValue, ...
                            'dataType', dataType, ...
                            'calDispType', calDispType, ...
                            'calEnum', calEnum, ...
                            'calHelp', calHelp, ...
                            'calUnit', calUnit, ...
                            'calFormat', calFormat, ...
                            'calMin', calMin, ...
                            'calMax', calMax, ...
                            'calGain', calGain, ...
                            'calOffset', calOffset);
                        
                        if isequal(thisSignalObject.Dimensions, -1)
                            error([mfilename ':' thisfuncname ':UnspecifiedDimensions'], 'Dimensions of every signal object must be specified explicitly.');
                        elseif prod(thisSignalObject.Dimensions) == 1
                            dataShape = 'Scalar';
                        elseif numel(thisSignalObject.Dimensions) == 1 || (numel(thisSignalObject.Dimensions) == 2 && ismember(1, thisSignalObject.Dimensions))
                            dataShape = 'Vector';
                        elseif numel(thisSignalObject.Dimensions) == 2
                            dataShape = 'Matrix';
                        else
                            error([mfilename ':' thisfuncname ':InvalidDimensions'], 'Invalid dimensions');
                        end
                        idxSource = 'Write Entire Vector/Matrix';
                        set_param([ARGS.BlockPath '/raptor_data_write'], ...
                            'dataName', dataName, ...
                            'dataShape', dataShape, ...
                            'idxSource', idxSource);
                    end
                    
                    if ~IsValid
                        set_param([ARGS.BlockPath '/Inport'], ...
                            'OutDataTypeStr', 'Inherit: auto', ...
                            'PortDimensions', '-1');
                        
                        set_param([ARGS.BlockPath '/raptor_data_def'], ...
                            'dataName', '''''', ...
                            'initValue', '0', ...
                            'dataType', 'single', ...
                            'calDispType', 'Number', ...
                            'calEnum', '{''FALSE''; ''TRUE''}', ...
                            'calHelp', '''', ...
                            'calUnit', '''', ...
                            'calFormat', '''-1''', ...
                            'calMin', '-Inf', ...
                            'calMax', 'Inf', ...
                            'calGain', '1', ...
                            'calOffset', '0');
                        
                        set_param([ARGS.BlockPath '/raptor_data_write'], ...
                            'dataName', '''''', ...
                            'dataShape', 'Scalar', ...
                            'idxSource', 'Write Entire Vector/Matrix');
                    end
                    
                    %% CASE PTC_MBDS_MotoHawk_Probe
                case 'PTC_MBDS_MotoHawk_Probe'
                    IsValid = true;
                    SignalObjectName = char(strtrim(get(ARGS.BlockHandle, 'SignalObjectName')));
                    try
                        thisSignalObject = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', SignalObjectName);
                        assert(isa(thisSignalObject, 'ptc_matlab_lib.PTC_MBDS_Signal'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'nam', ['''' thisSignalObject.ASAP2_Identifier '''']);
                        
                        [mldt, mldt_cast] = compute_mldt('DataType', thisSignalObject.DataType);
                        
                        dt = regexprep(thisSignalObject.DataType, '^(e|E)num:\s+', '');
                        if isIntEnumType(dt)
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'enum_struct', [dt '.getMotoHawkEnumStruct()']);
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'view_as', 'Enumeration');
                        else
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'view_as', 'Number');
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'enum_struct', '{''Disabled'', ''Enabled''}');
                        end
                        
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'help', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Description'')', SignalObjectName));
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'units', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.DocUnits'')', SignalObjectName));
                        if ~isempty(thisSignalObject.Min)
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'min_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min'')', SignalObjectName));
                        else
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'min_val', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        if ~isempty(thisSignalObject.Max)
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'max_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Max'')', SignalObjectName));
                        else
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'max_val', sprintf('cast(ptc_matlab_lib.getmaxdtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'precision', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.ASAP2_Precision'')', SignalObjectName));
                        if ~isprimitivesldt(thisSignalObject.DataType)
                            try
                                dtobj = evalsafe(thisSignalObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisSignalObject.DataType ''');']);
                                end
                            end
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'gain', num2str(dtobj.Slope));
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'offset', num2str(dtobj.Bias));
                        else
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'gain', '1');
                            set_param([ARGS.BlockPath '/motohawk_probe'], 'offset', '0');
                        end
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'exp', '1');
                        
                        if isIntEnumType(dt)
                            set_param([ARGS.BlockPath '/Inport'], 'OutDataTypeStr', ['Enum: ' dt]);
                        else
                            set_param([ARGS.BlockPath '/Inport'], 'OutDataTypeStr', dt);
                        end
                        set_param([ARGS.BlockPath '/Inport'], 'PortDimensions', num2expr('InputMatrix', thisSignalObject.Dimensions));
                        
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'nam', ['''' SignalObjectName '_''']);
                        if isempty(thisSignalObject.InitialValue)
                            if isempty(thisSignalObject.Min)
                                set_param([ARGS.BlockPath '/motohawk_data_def'], 'data', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                            else
                                set_param([ARGS.BlockPath '/motohawk_data_def'], 'data', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min''), ''%s'')', SignalObjectName, mldt_cast));
                            end
                        else
                            set_param([ARGS.BlockPath '/motohawk_data_def'], 'data', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ptc_matlab_lib.slevalglobal(''Expression'', ''%s.InitialValue'')), ''%s'')', SignalObjectName, mldt_cast));
                        end
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'typ', mldt);
                        
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'nam', get_param([ARGS.BlockPath '/motohawk_data_def'], 'nam'));
                        if thisSignalObject.Dimensions == -1
                            error([mfilename ':' thisfuncname ':UnspecifiedDimensions'], 'Dimensions of every signal object must be specified explicitly.');
                        elseif prod(thisSignalObject.Dimensions) == 1
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'structure', 'Scalar');
                        elseif numel(thisSignalObject.Dimensions) == 1 || (numel(thisSignalObject.Dimensions) == 2 && ismember(1, thisSignalObject.Dimensions))
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'structure', 'Vector');
                        elseif numel(thisSignalObject.Dimensions) == 2
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'structure', 'Matrix');
                        else
                            error([mfilename ':' thisfuncname ':InvalidDimensions'], 'Invalid dimensions');
                        end
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_vec', num2str(prod(thisSignalObject.Dimensions)));
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_row', num2str(thisSignalObject.Dimensions(1)));
                        if numel(thisSignalObject.Dimensions) == 2
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_col', num2str(thisSignalObject.Dimensions(2)));
                        else
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_col', '1');
                        end
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'typ', mldt);
                    end
                    
                    if ~IsValid
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'view_as', 'Number');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'enum_struct', '{''Disabled'', ''Enabled''}');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'help', '''''');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'units', '''''');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'min_val', '-Inf');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'max_val', 'Inf');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'precision', '''''');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'gain', '1');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'offset', '0');
                        set_param([ARGS.BlockPath '/motohawk_probe'], 'exp', '1');
                        
                        set_param([ARGS.BlockPath '/Inport'], 'OutDataTypeStr', 'Inherit: auto');
                        set_param([ARGS.BlockPath '/Inport'], 'PortDimensions', '-1');
                        
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'data', '0');
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'typ', 'single');
                        
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'structure', 'Scalar');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_vec', '1');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_row', '1');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_col', '1');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'typ', 'single');
                    end
                    
                    %% CASE PTC_MBDS_Raptor_Adjustment
                case 'PTC_MBDS_Raptor_Adjustment'
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        if strcmp(thisParameterObject.CoderInfo.StorageClass, 'Custom') && strcmp(thisParameterObject.CoderInfo.CustomStorageClass, 'Const')
                            storage = 'Constant (FLASH)';
                        else
                            storage = 'Calibration';
                        end
                        
                        paramName = ['''' ParameterObjectName ''''];
                        
                        mldt = compute_mldt('DataType', thisParameterObject.DataType);
                        if isempty(thisParameterObject.Value)
                            error([mfilename ':' thisfuncname ':EmptyParameterObject'], 'ERROR: Empty parameter objects should not be used');
                        else
                            initValue = ParameterObjectName;
                        end
                        
                        if any(strcmp(mldt, {'double', 'single', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'boolean'}))
                            dataType = mldt;
                        else
                            dataType = containerdatatype2('MinVal', getmindtval(mldt), 'MaxVal', getmaxdtval(mldt), 'OutputType', 'simulink');
                        end
                        
                        dt = regexprep(thisParameterObject.DataType, '^(e|E)num:\s+', '');
                        if isIntEnumType(dt)
                            calEnum = [dt '.getRaptorEnumStruct()'];
                            calDispType = 'Enumeration';
                        else
                            calEnum = '{''Disabled'', ''Enabled''}';
                            calDispType = 'Number';
                        end
                        
                        calHelp = ['''' formatstr(thisParameterObject.Description, 'FormatSingleQuotes', true) ''''];
                        calUnit = ['''' thisParameterObject.DocUnits ''''];
                        
                        if ~isempty(thisParameterObject.Min)
                            calMin = num2str(thisParameterObject.Min);
                        else
                            calMin = num2str(ptc_matlab_lib.getmindtval(mldt));
                        end
                        if ~isempty(thisParameterObject.Max)
                            calMax = num2str(thisParameterObject.Max);
                        else
                            calMax = num2str(ptc_matlab_lib.getmaxdtval(mldt));
                        end
                        
                        calFormat = ['''' thisParameterObject.getRaptorCalFormat() ''''];
                        
                        if ~isprimitivesldt(thisParameterObject.DataType)
                            try
                                dtobj = evalsafe(thisParameterObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisParameterObject.DataType ''');']);
                                end
                            end
                            calGain = num2str(dtobj.Slope);
                            calOffset = num2str(dtobj.Bias);
                        else
                            calGain = '1';
                            calOffset = '0';
                        end
                        
                        set_param([ARGS.BlockPath '/raptor_adjustment'], ...
                            'paramName', paramName, ...
                            'initValue', initValue, ...
                            'dataType', dataType, ...
                            'storage', storage, ...
                            'calEnum', calEnum, ...
                            'calDispType', calDispType, ...
                            'calHelp', calHelp, ...
                            'calUnit', calUnit, ...
                            'calMin', calMin, ...
                            'calMax', calMax, ...
                            'calFormat', calFormat, ...
                            'calGain', calGain, ...
                            'calOffset', calOffset);
                        
                        if isIntEnumType(dt)
                            OutDataTypeStr = ['Enum: ' dt];
                        elseif strcmp(dt, 'auto')
                            OutDataTypeStr = 'Inherit: auto';
                        else
                            OutDataTypeStr = dt;
                        end
                        PortDimensions = num2expr('InputMatrix', thisParameterObject.Dimensions);
                        set_param([ARGS.BlockPath '/Outport'], ...
                            'OutDataTypeStr', OutDataTypeStr, ...
                            'PortDimensions', PortDimensions);
                    end
                    
                    if ~IsValid
                        set_param([ARGS.BlockPath '/raptor_adjustment'], ...
                            'paramName', '''DataName''', ...
                            'initValue', '0', ...
                            'dataType', 'single', ...
                            'storage', 'Calibration', ...
                            'calDispType', 'Number', ...
                            'calEnum', '{''False'', ''True''}', ...
                            'calHelp', '''''', ...
                            'calUnit', '''''', ...
                            'calMin', '-Inf', ...
                            'calMax', 'Inf', ...
                            'calFormat', '''-1''', ...
                            'calGain', '1', ...
                            'calOffset', '0');
                        
                        set_param([ARGS.BlockPath '/Outport'], ...
                            'OutDataTypeStr', 'Inherit: auto', ...
                            'PortDimensions', '-1');
                    end
                    
                    %% CASE PTC_MBDS_MotoHawk_Calibration_Def
                case 'PTC_MBDS_MotoHawk_Calibration_Def'
                    IsValid = true;
                    ParameterObjectName = char(strtrim(get(ARGS.BlockHandle, 'ParameterObjectName')));
                    try
                        thisParameterObject = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', ParameterObjectName);
                        assert(isa(thisParameterObject, 'ptc_matlab_lib.PTC_MBDS_Parameter'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'nam', ['''' thisParameterObject.ASAP2_Identifier '''']);
                        
                        [mldt, mldt_cast] = compute_mldt('DataType', thisParameterObject.DataType);
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'val', sprintf('cast(ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Value''), ''%s'')', ParameterObjectName, mldt_cast));
                        
                        dt = regexprep(thisParameterObject.DataType, '^(e|E)num:\s+', '');
                        if isIntEnumType(dt)
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'Enum_struct', [dt '.getMotoHawkEnumStruct()']);
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'View_as', 'Enumeration');
                        else
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'View_as', 'Number');
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'Enum_struct', '{''Disabled'', ''Enabled''}');
                        end
                        
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'help', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Description'')', ParameterObjectName));
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'units', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.DocUnits'')', ParameterObjectName));
                        if ~isempty(thisParameterObject.Min)
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'min_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Min'')', ParameterObjectName));
                        else
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'min_val', sprintf('cast(ptc_matlab_lib.getmindtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        if ~isempty(thisParameterObject.Max)
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'max_val', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.Max'')', ParameterObjectName));
                        else
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'max_val', sprintf('cast(ptc_matlab_lib.getmaxdtval(''%s''), ''%s'')', mldt, mldt_cast));
                        end
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'precision', sprintf('ptc_matlab_lib.slevalglobal(''Expression'', ''%s.ASAP2_Precision'')', ParameterObjectName));
                        if ~isprimitivesldt(thisParameterObject.DataType)
                            try
                                dtobj = evalsafe(thisParameterObject.DataType);
                            catch
                                try %#ok<TRYNC>
                                    dtobj = evalsafe(['fixdt(''' thisParameterObject.DataType ''');']);
                                end
                            end
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'gain', num2str(dtobj.Slope));
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'offset', num2str(dtobj.Bias));
                        else
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'gain', '1');
                            set_param([ARGS.BlockPath '/motohawk_calibration'], 'offset', '0');
                        end
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'exp', '1');
                        
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'nam', ['''' ParameterObjectName '_''']);
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'data', get_param([ARGS.BlockPath '/motohawk_calibration'], 'val'));
                        
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'nam', get_param([ARGS.BlockPath '/motohawk_data_def'], 'nam'));
                        if isscalar(thisParameterObject.Value)
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'structure', 'Scalar');
                        elseif isvector(thisParameterObject.Value)
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'structure', 'Vector');
                        elseif ismatrix(thisParameterObject.Value)
                            set_param([ARGS.BlockPath '/motohawk_data_write'], 'structure', 'Matrix');
                        else
                            error([mfilename ':' thisfuncname ':InvalidDimensions'], 'Invalid dimensions');
                        end
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_vec', num2str(numel(thisParameterObject.Value)));
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_row', num2str(size(thisParameterObject.Value, 1)));
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_col', num2str(size(thisParameterObject.Value, 2)));
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'typ', mldt);
                    end
                    
                    if ~IsValid
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'val', '0');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'View_as', 'Number');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'Enum_struct', '{''Disabled'', ''Enabled''}');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'help', '''''');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'units', '''''');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'min_val', '-Inf');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'max_val', 'Inf');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'precision', '''''');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'gain', '1');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'offset', '0');
                        set_param([ARGS.BlockPath '/motohawk_calibration'], 'exp', '1');
                        
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_data_def'], 'data', '0');
                        
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'nam', '''''');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_row', '1');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'sz_col', '1');
                        set_param([ARGS.BlockPath '/motohawk_data_write'], 'typ', 'single');
                    end
                    
                    %% CASE PTC_MBDS_Data_Store_Write_Reference, PTC_MBDS_Data_Store_Read_Reference, PTC_MBDS_Constant_Reference
                case {'PTC_MBDS_Data_Store_Write_Reference', 'PTC_MBDS_Data_Store_Read_Reference', 'PTC_MBDS_Constant_Reference'}
                    IsValid = true;
                    thisTarget = get_param(bdroot(ARGS.BlockPath), 'SystemTargetFile');
                    MapObjectName = char(strtrim(get(ARGS.BlockHandle, 'MapObjectName')));
                    try
                        thisMapObject = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', MapObjectName);
                        assert(isa(thisMapObject, 'ptc_matlab_lib.PTC_MBDS_KIBES_SymbolMap'));
                    catch
                        IsValid = false;
                    end
                    
                    if IsValid
                        KIBESName = char(strtrim(get(ARGS.BlockHandle, 'KIBESName')));
                        KIBESSymbolNames = unique(thisMapObject.get_KIBES_Symbol_Names(KIBESName));
                        IsValid = ~isempty(KIBESSymbolNames);
                    end
                    
                    if IsValid
                        BlockWidth = 500;
                        BlockHeight = 30;
                        BlockSpacing = 10;
                        
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_Data_Store_Write_Reference'
                                In1_Position = get_param([ARGS.BlockPath '/In1'], 'Position');
                                
                                BlockPosition = [In1_Position(1) + 100, ...
                                    In1_Position(2) + 0.5*(In1_Position(4) - In1_Position(2)) - 0.5*BlockHeight, ...
                                    In1_Position(1) + 100 + BlockWidth, ...
                                    In1_Position(4) - 0.5*(In1_Position(4) - In1_Position(2)) + 0.5*BlockHeight];
                                
                                %Sundeep Tuteja, 2019-04-23: The add_block
                                %command can have the effect of running
                                %init multiple times, which is undesirable.
                                %Hence, we make this code more dynamic.
                                In1_PortHandles = get_param([ARGS.BlockPath '/In1'], 'PortHandles');
                                In1_LineHandle = get(In1_PortHandles.Outport, 'Line');
                                DestinationHandles = get(In1_LineHandle, 'DstBlockHandle');
                                DestinationHandles = DestinationHandles(DestinationHandles ~= -1);
                                for ctr = 1:numel(DestinationHandles)
                                    thisDstPortHandles = get(DestinationHandles(ctr), 'PortHandles');
                                    thisLineHandle = get(thisDstPortHandles.Inport, 'Line');
                                    delete(DestinationHandles(ctr));
                                    delete(thisLineHandle);
                                end
                                
                                switch thisTarget
                                    case 'raptor.tlc'
                                        for ctr = 1:numel(KIBESSymbolNames)
                                            BlockPosition(2) = BlockPosition(2) + (ctr - 1) * (BlockHeight + BlockSpacing);
                                            BlockPosition(4) = BlockPosition(4) + (ctr - 1) * (BlockHeight + BlockSpacing);
                                            hndl = add_block('PTC_MBDS_LIB/Raptor/Sinks/Raptor_Measurement', [ARGS.BlockPath '/' KIBESSymbolNames{ctr}]);
                                            set(hndl, 'Position', BlockPosition, ...
                                                'SignalObjectName', KIBESSymbolNames{ctr}, ...
                                                'ShowName', 'off');
                                            add_line(ARGS.BlockPath, 'In1/1', [KIBESSymbolNames{ctr} '/1']);
                                        end
                                    otherwise
                                        for ctr = 1:numel(KIBESSymbolNames)
                                            BlockPosition(2) = BlockPosition(2) + (ctr - 1) * (BlockHeight + BlockSpacing);
                                            BlockPosition(4) = BlockPosition(4) + (ctr - 1) * (BlockHeight + BlockSpacing);
                                            hndl = add_block(sprintf('simulink/Signal\nRouting/Data Store\nWrite'), [ARGS.BlockPath '/' KIBESSymbolNames{ctr}]);
                                            set(hndl, 'Position', BlockPosition, ...
                                                'DataStoreName', KIBESSymbolNames{ctr}, ...
                                                'ShowName', 'off');
                                            add_line(ARGS.BlockPath, 'In1/1', [KIBESSymbolNames{ctr} '/1']);
                                        end
                                end
                                
                            case {'PTC_MBDS_Data_Store_Read_Reference', 'PTC_MBDS_Constant_Reference'}
                                Outport_Position = get_param([ARGS.BlockPath '/Outport'], 'Position');
                                
                                BlockPosition = [Outport_Position(1) - 100 - BlockWidth, ...
                                    Outport_Position(2) + 0.5*(Outport_Position(4) - Outport_Position(2)) - 0.5*BlockHeight, ...
                                    Outport_Position(1) - 100, ...
                                    Outport_Position(4) - 0.5*(Outport_Position(4) - Outport_Position(2)) + 0.5*BlockHeight];
                                
                                %Sundeep Tuteja, 2019-04-23: The add_block
                                %command can have the effect of running
                                %init multiple times, which is undesirable.
                                %Hence, we make this code more dynamic.
                                Outport_PortHandles = get_param([ARGS.BlockPath '/Outport'], 'PortHandles');
                                Outport_LineHandle = get(Outport_PortHandles.Inport, 'Line');
                                SourceHandle = get(Outport_LineHandle, 'SrcBlockHandle');
                                if SourceHandle ~= -1
                                    delete(SourceHandle);
                                end
                                delete_line(Outport_LineHandle);
                                
                                switch get(ARGS.BlockHandle, 'PTC_BlockType')
                                    case 'PTC_MBDS_Data_Store_Read_Reference'
                                        switch thisTarget
                                            case 'raptor.tlc'
                                                hndl = add_block('PTC_MBDS_LIB/Raptor/Sources/Raptor_Data_Read', [ARGS.BlockPath '/' KIBESSymbolNames{1}]);
                                                set(hndl, 'ObjectName', KIBESSymbolNames{1});
                                            otherwise
                                                hndl = add_block(sprintf('simulink/Signal\nRouting/Data Store\nRead'), [ARGS.BlockPath '/' KIBESSymbolNames{1}]);
                                                set(hndl, 'DataStoreName', KIBESSymbolNames{1});
                                        end
                                    case 'PTC_MBDS_Constant_Reference'
                                        switch thisTarget
                                            case 'raptor.tlc'
                                                hndl = add_block('PTC_MBDS_LIB/Raptor/Sources/Raptor_Adjustment', [ARGS.BlockPath '/' KIBESSymbolNames{1}]);
                                                set(hndl, 'ParameterObjectName', KIBESSymbolNames{1});
                                            otherwise
                                                hndl = add_block('simulink/Sources/Constant', [ARGS.BlockPath '/' KIBESSymbolNames{1}]);
                                                set(hndl, 'Value', KIBESSymbolNames{1});
                                        end
                                end
                                set(hndl, 'Position', BlockPosition, ...
                                    'ShowName', 'off');
                                add_line(ARGS.BlockPath, [KIBESSymbolNames{1} '/1'], 'Outport/1');
                        end
                    end
                    
                    if ~IsValid
                        switch get(ARGS.BlockHandle, 'PTC_BlockType')
                            case 'PTC_MBDS_Data_Store_Write_Reference'
                                In1_PortHandles = get_param([ARGS.BlockPath '/In1'], 'PortHandles');
                                In1_LineHandle = get(In1_PortHandles.Outport, 'Line');
                                DestinationHandles = get(In1_LineHandle, 'DstBlockHandle');
                                DestinationHandles = DestinationHandles(DestinationHandles ~= -1);
                                for ctr = 1:numel(DestinationHandles)
                                    thisDstPortHandles = get(DestinationHandles(ctr), 'PortHandles');
                                    thisLineHandle = get(thisDstPortHandles.Inport, 'Line');
                                    delete(DestinationHandles(ctr));
                                    delete(thisLineHandle);
                                end
                                
                                hndl = add_block('PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sinks/Terminator', [ARGS.BlockPath '/Terminator']);
                                In1_Position = get_param([ARGS.BlockPath '/In1'], 'Position');
                                set(hndl, 'Position', [In1_Position(1)+100, In1_Position(2) In1_Position(3)+100 In1_Position(4)]);
                                add_line(ARGS.BlockPath, 'In1/1', 'Terminator/1');
                                
                            case {'PTC_MBDS_Data_Store_Read_Reference', 'PTC_MBDS_Constant_Reference'}
                                Outport_PortHandles = get_param([ARGS.BlockPath '/Outport'], 'PortHandles');
                                Outport_LineHandle = get(Outport_PortHandles.Inport, 'Line');
                                SourceHandle = get(Outport_LineHandle, 'SrcBlockHandle');
                                if SourceHandle ~= -1
                                    delete(SourceHandle);
                                end
                                delete_line(Outport_LineHandle);
                                
                                hndl = add_block('PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/Ground', [ARGS.BlockPath '/Ground']);
                                Outport_Position = get_param([ARGS.BlockPath '/Outport'], 'Position');
                                set(hndl, 'Position', [Outport_Position(1)-100, Outport_Position(2) Outport_Position(3)-100 Outport_Position(4)]);
                                add_line(ARGS.BlockPath, 'Ground/1', 'Outport/1');
                        end
                    end
                    
                    %% CASE PTC_MBDS_ProbeMarker
                case 'PTC_MBDS_ProbeMarker'
                    MarkerName = strtrim(get(ARGS.BlockHandle, 'MarkerName'));
                    if ~isfield(PROJECTAPPDATA, genvarname(bdroot(ARGS.BlockPath)))
                        PROJECTAPPDATA(1).(genvarname(bdroot(ARGS.BlockPath))) = struct([]);
                    end
                    ModelAppData = PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath)));
                    if isempty(ModelAppData) || ...
                            ~isfield_recursive(ModelAppData, 'ProbeMarkerList.Names') || ...
                            ~isfield_recursive(ModelAppData, 'ProbeMarkerList.Handles')
                        ModelAppData(1).ProbeMarkerList.Names = cell(0, 1);
                        ModelAppData(1).ProbeMarkerList.Handles = NaN(0, 1);
                        ModelAppData(1).ProbeMarkerList.Paths = cell(0, 1);
                    end
                    
                    if ~isempty(MarkerName)
                        thisIdx = find(strcmp(ARGS.BlockPath, ModelAppData(1).ProbeMarkerList.Paths), 1);
                        if isempty(thisIdx)
                            ModelAppData(1).ProbeMarkerList.Names{end+1, 1} = MarkerName;
                            ModelAppData(1).ProbeMarkerList.Handles(end+1, 1) = ARGS.BlockHandle;
                            ModelAppData(1).ProbeMarkerList.Paths{end+1, 1} = ARGS.BlockPath;
                            [ModelAppData(1).ProbeMarkerList.Names, indices] = sort(ModelAppData(1).ProbeMarkerList.Names);
                            ModelAppData(1).ProbeMarkerList.Handles = ModelAppData(1).ProbeMarkerList.Handles(indices);
                            ModelAppData(1).ProbeMarkerList.Paths = ModelAppData(1).ProbeMarkerList.Paths(indices);
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        else
                            ModelAppData(1).ProbeMarkerList.Names{thisIdx, 1} = MarkerName;
                            ModelAppData(1).ProbeMarkerList.Handles(thisIdx, 1) = ARGS.BlockHandle;
                            ModelAppData(1).ProbeMarkerList.Paths{thisIdx, 1} = ARGS.BlockPath;
                            [ModelAppData(1).ProbeMarkerList.Names, indices] = sort(ModelAppData(1).ProbeMarkerList.Names);
                            ModelAppData(1).ProbeMarkerList.Handles = ModelAppData(1).ProbeMarkerList.Handles(indices);
                            ModelAppData(1).ProbeMarkerList.Paths = ModelAppData(1).ProbeMarkerList.Paths(indices);
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        end
                    elseif isempty(MarkerName)
                        thisIdx = find(strcmp(ARGS.BlockPath, ModelAppData(1).ProbeMarkerList.Paths), 1);
                        if ~isempty(thisIdx)
                            ModelAppData(1).ProbeMarkerList.Names(thisIdx, :) = [];
                            ModelAppData(1).ProbeMarkerList.Handles(thisIdx, :) = [];
                            ModelAppData(1).ProbeMarkerList.Paths(thisIdx, :) = [];
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        end
                    end
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    AttributesFormatString = union(AttributesFormatString, 'PM_%<MarkerName>', 'stable');
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    if PTC_MBDS_GlobalDisable_Fcn || strcmp(get(ARGS.BlockHandle, 'Disable'), 'on')
                        load_system('simulink');
                        replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'SignalConversion_In', ['simulink/Ports &' LINEFEED 'Subsystems/Subsystem'], 'noprompt');
                        replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'SignalConversion_Out', ['simulink/Ports &' LINEFEED 'Subsystems/Subsystem'], 'noprompt');
                    elseif ~PTC_MBDS_GlobalDisable_Fcn && strcmp(get(ARGS.BlockHandle, 'Disable'), 'off')
                        load_system('simulink');
                        replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'SignalConversion_In', ['simulink/Signal' LINEFEED 'Attributes/Signal' LINEFEED 'Conversion'], 'noprompt');
                        replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'SignalConversion_Out', ['simulink/Signal' LINEFEED 'Attributes/Signal' LINEFEED 'Conversion'], 'noprompt');
                    end
                    
                    %% CASE PTC_MBDS_ForceMarker
                case 'PTC_MBDS_ForceMarker'
                    MarkerName = strtrim(get(ARGS.BlockHandle, 'MarkerName'));
                    if ~isfield(PROJECTAPPDATA, genvarname(bdroot(ARGS.BlockPath)))
                        PROJECTAPPDATA(1).(genvarname(bdroot(ARGS.BlockPath))) = struct([]);
                    end
                    ModelAppData = PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath)));
                    if isempty(ModelAppData) || ...
                            ~isfield_recursive(ModelAppData, 'ForceMarkerList.Names') || ...
                            ~isfield_recursive(ModelAppData, 'ForceMarkerList.Handles') || ...
                            ~isfield_recursive(ModelAppData, 'ForceMarkerList.Paths')
                        ModelAppData(1).ForceMarkerList.Names = cell(0, 1);
                        ModelAppData(1).ForceMarkerList.Handles = NaN(0, 1);
                        ModelAppData(1).ForceMarkerList.Paths = cell(0, 1);
                    end
                    
                    if ~isempty(MarkerName)
                        thisIdx = find(strcmp(ARGS.BlockPath, ModelAppData(1).ForceMarkerList.Paths), 1);
                        if isempty(thisIdx)
                            ModelAppData(1).ForceMarkerList.Names{end+1, 1} = MarkerName;
                            ModelAppData(1).ForceMarkerList.Handles(end+1, 1) = ARGS.BlockHandle;
                            ModelAppData(1).ForceMarkerList.Paths{end+1, 1} = ARGS.BlockPath;
                            [ModelAppData(1).ForceMarkerList.Names, indices] = sort(ModelAppData(1).ForceMarkerList.Names);
                            ModelAppData(1).ForceMarkerList.Handles = ModelAppData(1).ForceMarkerList.Handles(indices);
                            ModelAppData(1).ForceMarkerList.Paths = ModelAppData(1).ForceMarkerList.Paths(indices);
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        else
                            ModelAppData(1).ForceMarkerList.Names{thisIdx, 1} = MarkerName;
                            ModelAppData(1).ForceMarkerList.Handles(thisIdx, 1) = ARGS.BlockHandle;
                            ModelAppData(1).ForceMarkerList.Paths{thisIdx, 1} = ARGS.BlockPath;
                            [ModelAppData(1).ForceMarkerList.Names, indices] = sort(ModelAppData(1).ForceMarkerList.Names);
                            ModelAppData(1).ForceMarkerList.Handles = ModelAppData(1).ForceMarkerList.Handles(indices);
                            ModelAppData(1).ForceMarkerList.Paths = ModelAppData(1).ForceMarkerList.Paths(indices);
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        end
                    elseif isempty(MarkerName)
                        thisIdx = find(strcmp(ARGS.BlockPath, ModelAppData(1).ForceMarkerList.Paths), 1);
                        if ~isempty(thisIdx)
                            ModelAppData(1).ForceMarkerList.Names(thisIdx, :) = [];
                            ModelAppData(1).ForceMarkerList.Handles(thisIdx, :) = [];
                            ModelAppData(1).ForceMarkerList.Paths{thisIdx, :} = [];
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        end
                    end
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    AttributesFormatString = union(AttributesFormatString, 'FM_%<MarkerName>', 'stable');
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    if PTC_MBDS_GlobalDisable_Fcn || ...
                            (strcmp(get(ARGS.BlockHandle, 'Disable'), 'on') && ~PTC_MBDS_GlobalFeedThrough_Fcn)
                        set(ARGS.BlockHandle, 'BlockChoice', 'Disabled');
                    else
                        set(ARGS.BlockHandle, 'BlockChoice', 'DebugNumeric');
                    end
                    
                    %% CASE PTC_MBDS_Switch
                case 'PTC_MBDS_Switch'
                    if ~strcmp(get(ARGS.BlockHandle, 'OutDataTypeStr_'), get(ARGS.BlockHandle, 'OutDataTypeStr'))
                        set(ARGS.BlockHandle, 'OutDataTypeStr', get(ARGS.BlockHandle, 'OutDataTypeStr_'));
                    end
                    if ~strcmp(get(ARGS.BlockHandle, 'SaturateOnIntegerOverflow_'), get(ARGS.BlockHandle, 'SaturateOnIntegerOverflow'))
                        set(ARGS.BlockHandle, 'SaturateOnIntegerOverflow', get(ARGS.BlockHandle, 'SaturateOnIntegerOverflow_'));
                    end
                    if ~strcmp(get(ARGS.BlockHandle, 'InputSameDT_'), get(ARGS.BlockHandle, 'InputSameDT'))
                        set(ARGS.BlockHandle, 'InputSameDT', get(ARGS.BlockHandle, 'InputSameDT_'));
                    end
                    
                    %% CASE PTC_MBDS_StringDelete, PTC_MBDS_StringFind, PTC_MBDS_StringLeft, PTC_MBDS_StringRight, PTC_MBDS_StringInsert, PTC_MBDS_StringMid, PTC_MBDS_StringReplace
                case {'PTC_MBDS_StringDelete', 'PTC_MBDS_StringFind', 'PTC_MBDS_StringLeft', ...
                        'PTC_MBDS_StringRight', 'PTC_MBDS_StringInsert', 'PTC_MBDS_StringMid', ...
                        'PTC_MBDS_StringReplace'}
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                        [~, indices] = sort(OutportNumbers);
                        OutportHandles = OutportHandles(indices);
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'ENO_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'ENO_Enabled'), 'on')
                            if ~ismember('ENO', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'built-in/Outport', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'ENO_Enabled'), 'off')
                            if ismember('ENO', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'built-in/Terminator', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'Out'; 'ENO'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_StringConcat
                case 'PTC_MBDS_StringConcat'
                    pairs = {'MaxStringNumber', 10};
                    ARGS = structcopy(ARGS, parseargs(varargin, pairs));
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    
                    if str2double(strtrim(get(ARGS.BlockHandle, 'StringNumber'))) ~= numel(InportHandles)
                        thisStringNumber = str2double(strtrim(get(ARGS.BlockHandle, 'StringNumber')));
                        for ctr = 1:min(thisStringNumber, ARGS.MaxStringNumber)
                            ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', ['In' num2str(ctr)], 'built-in/Inport', 'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'uint8');
                            set_param(ReplacedBlock{1}, 'PortDimensions', 'MaxStringLength+1');
                            set_param(ReplacedBlock{1}, 'VarSizeSig', 'No');
                            set_param(ReplacedBlock{1}, 'SignalType', 'real');
                        end
                        for ctr = thisStringNumber+1:ARGS.MaxStringNumber
                            ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', ['In' num2str(ctr)], 'built-in/Constant', 'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'uint8');
                            set_param(ReplacedBlock{1}, 'Value', 'zeros(1, MaxStringLength+1, ''uint8'')');
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                        [~, indices] = sort(OutportNumbers);
                        OutportHandles = OutportHandles(indices);
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'ENO_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'ENO_Enabled'), 'on')
                            if ~ismember('ENO', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'built-in/Outport', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'ENO_Enabled'), 'off')
                            if ismember('ENO', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'ENO', 'built-in/Terminator', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'Out'; 'ENO'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_TimerRetrigger_RE, PTC_MBDS_Timer_RE
                case {'PTC_MBDS_TimerRetrigger_RE', 'PTC_MBDS_Timer_RE'}
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'dT = %<dT>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'dT = %<dT>', 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                        [~, indices] = sort(InportNumbers);
                        InportHandles = InportHandles(indices);
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'dT_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                            if ismember('dT', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/dT'], 'Value', strtrim(get(ARGS.BlockHandle, 'dT')));
                        elseif strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'on')
                            if ~ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'OutDataTypeStr', strtrim(get(ARGS.BlockHandle, 'OutDataTypeStr')));
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'dT'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                        [~, indices] = sort(OutportNumbers);
                        OutportHandles = OutportHandles(indices);
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'x_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'x_Enabled'), 'off')
                            if ismember('x', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'x', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'x_Enabled'), 'on')
                            if ~ismember('x', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'x', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'y_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'y_Enabled'), 'off')
                            if ismember('y', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'y', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'y_Enabled'), 'on')
                            if ~ismember('y', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'y', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'y'; 'x'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_CountDown_RE, PTC_MBDS_CounterUpDown_RE, PTC_MBDS_Counter_RE
                case {'PTC_MBDS_CountDown_RE', 'PTC_MBDS_CounterUpDown_RE', 'PTC_MBDS_Counter_RE'}
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                        [~, indices] = sort(InportNumbers);
                        InportHandles = InportHandles(indices);
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'OutDataTypeStr', strtrim(get(ARGS.BlockHandle, 'OutDataTypeStr')));
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'E'; 'R'; 'IV'; 'DIR'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                        [~, indices] = sort(OutportNumbers);
                        OutportHandles = OutportHandles(indices);
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'x_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'x_Enabled'), 'off')
                            if ismember('x', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'x', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'x_Enabled'), 'on')
                            if ~ismember('x', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'x', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'y_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'y_Enabled'), 'off')
                            if ismember('y', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'y', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'y_Enabled'), 'on')
                            if ~ismember('y', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'y', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'y'; 'x'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_SampleAndHold_RE
                case 'PTC_MBDS_SampleAndHold_RE'
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                        [~, indices] = sort(InportNumbers);
                        InportHandles = InportHandles(indices);
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_RSFlipFlop, PTC_MBDS_SRFlipFlop
                case {'PTC_MBDS_RSFlipFlop', 'PTC_MBDS_SRFlipFlop'}
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                        [~, indices] = sort(OutportNumbers);
                        OutportHandles = OutportHandles(indices);
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'Q_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'Q_Enabled'), 'off')
                            if ismember('Q', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'Q', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'Q_Enabled'), 'on')
                            if ~ismember('Q', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'Q', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'Not_Q_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'Not_Q_Enabled'), 'off')
                            if ismember('~Q', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '~Q', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'Not_Q_Enabled'), 'on')
                            if ~ismember('~Q', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', '~Q', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    if ~isempty(OutportHandles)
                        OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    else
                        OutportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'Q'; '~Q'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_DifferenceQuotient
                case 'PTC_MBDS_DifferenceQuotient'
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'dT = %<dT>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'dT = %<dT>', 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                        [~, indices] = sort(InportNumbers);
                        InportHandles = InportHandles(indices);
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'dT_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                            if ismember('dT', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/dT'], 'Value', strtrim(get(ARGS.BlockHandle, 'dT')));
                        elseif strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'on')
                            if ~ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'dT'; 'u'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_DeltaOneStep, PTC_MBDS_EdgeBi, PTC_MBDS_EdgeFalling, PTC_MBDS_EdgeRising
                case {'PTC_MBDS_DeltaOneStep', 'PTC_MBDS_EdgeBi', 'PTC_MBDS_EdgeFalling', 'PTC_MBDS_EdgeRising'}
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                        [~, indices] = sort(InportNumbers);
                        InportHandles = InportHandles(indices);
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    if ~isempty(InportHandles)
                        InportNames = cellstr2(get(InportHandles, 'Name'));
                    else
                        InportNames = cell(0, 1);
                    end
                    [~, loc] = ismember({'u'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_IntegratorK_REL, PTC_MBDS_IntegratorT_REL
                case {'PTC_MBDS_IntegratorK_REL', 'PTC_MBDS_IntegratorT_REL'}
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, {'MN = %<MN>'; 'MX = %<MX>'}, 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, {'MN = %<MN>'; 'MX = %<MX>'}, 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, {'dT = %<dT>'}, 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, {'dT = %<dT>'}, 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'MXMN_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                            if ismember('MX', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MX', 'built-in/Constant', 'noprompt');
                                set_param([ARGS.BlockPath '/MX'], 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/MX'], 'Value', strtrim(get(ARGS.BlockHandle, 'MX')));
                            if ismember('MN', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MN', 'built-in/Constant', 'noprompt');
                                set_param([ARGS.BlockPath '/MN'], 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/MN'], 'Value', strtrim(get(ARGS.BlockHandle, 'MN')));
                        elseif strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'on')
                            if ~ismember('MX', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MX', 'built-in/Inport', 'noprompt');
                            end
                            if ~ismember('MN', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MN', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'dT_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                            if ismember('dT', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/dT'], 'Value', strtrim(get(ARGS.BlockHandle, 'dT')));
                        elseif strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'on')
                            if ~ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'MX'; 'MN'; 'K'; 'T'; 'dT'; 'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                    [~, indices] = sort(OutportNumbers);
                    OutportHandles = OutportHandles(indices);
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_max_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'off')
                            if ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'on')
                            if ~ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_min_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'off')
                            if ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'on')
                            if ~ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    [~, loc] = ismember({'y'; 'B_min'; 'B_max'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_Accumulator_REL
                case 'PTC_MBDS_Accumulator_REL'
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, {'MN = %<MN>'; 'MX = %<MX>'}, 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, {'MN = %<MN>'; 'MX = %<MX>'}, 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'MXMN_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                            if ismember('MX', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MX', 'built-in/Constant', 'noprompt');
                                set_param([ARGS.BlockPath '/MX'], 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/MX'], 'Value', strtrim(get(ARGS.BlockHandle, 'MX')));
                            if ismember('MN', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MN', 'built-in/Constant', 'noprompt');
                                set_param([ARGS.BlockPath '/MN'], 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/MN'], 'Value', strtrim(get(ARGS.BlockHandle, 'MN')));
                        elseif strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'on')
                            if ~ismember('MX', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MX', 'built-in/Inport', 'noprompt');
                            end
                            if ~ismember('MN', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MN', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'MX'; 'MN'; 'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                    [~, indices] = sort(OutportNumbers);
                    OutportHandles = OutportHandles(indices);
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_max_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'off')
                            if ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'on')
                            if ~ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_min_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'off')
                            if ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'on')
                            if ~ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    [~, loc] = ismember({'y'; 'B_min'; 'B_max'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_HighpassT_RE, PTC_MBDS_LowpassT_RE
                case {'PTC_MBDS_HighpassT_RE', 'PTC_MBDS_LowpassT_RE'}
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'dT = %<dT>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'dT = %<dT>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'dT_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                            if ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Constant', 'noprompt');
                                set_param([ARGS.BlockPath '/dT'], 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/dT'], 'Value', strtrim(get(ARGS.BlockHandle, 'dT')));
                        elseif strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'on')
                            if ~ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'T'; 'dT'; 'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_TurnOffDelayTime, PTC_MBDS_TurnOnDelayTime
                case {'PTC_MBDS_TurnOffDelayTime', 'PTC_MBDS_TurnOnDelayTime'}
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'dT = %<dT>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'dT = %<dT>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'dT_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                            if ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Constant', 'noprompt');
                                set_param([ARGS.BlockPath '/dT'], 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/dT'], 'Value', strtrim(get(ARGS.BlockHandle, 'dT')));
                        elseif strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'on')
                            if ~ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'T'; 'dT'; 'u'; 'R'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_TurnOffDelaySample, PTC_MBDS_TurnOnDelaySample
                case {'PTC_MBDS_TurnOffDelaySample', 'PTC_MBDS_TurnOnDelaySample'}
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'n'; 'u'; 'R'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_DateTimeSource
                case 'PTC_MBDS_DateTimeSource'
                    InputValue = get(ARGS.BlockHandle, 'InputValue');
                    InputValue = regexprep(InputValue, '\s+', '');
                    
                    TS_Epoch_Seconds = datenum('1970-01-01-00:00:00', 'yyyy-mm-dd-HH:MM:SS') * 24 * 3600;
                    TS_End_Seconds = datenum('2105-12-31-23:59:59', 'yyyy-mm-dd-HH:MM:SS') * 24 * 3600;
                    try
                        TS_Input_Seconds = datenum(InputValue, 'yyyy-mm-dd-HH:MM:SS') * 24 * 3600;
                    catch
                        waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid pattern entered.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                        InputValue = '1970-01-01-00:00:00';
                        set(ARGS.BlockHandle, 'InputValue', InputValue);
                        TS_Input_Seconds = datenum(InputValue, 'yyyy-mm-dd-HH:MM:SS') * 24 * 3600;
                    end
                    
                    Output = min(TS_Input_Seconds - TS_Epoch_Seconds, TS_End_Seconds - TS_Epoch_Seconds);
                    set(ARGS.BlockHandle, 'Value', num2str(Output));
                    set(ARGS.BlockHandle, 'InputValue', datestr(TS_Input_Seconds/(24*3600), 'yyyy-mm-dd-HH:MM:SS'));
                    
                    %% CASE PTC_MBDS_StringSource
                case 'PTC_MBDS_StringSource'
                    InputValue = get(ARGS.BlockHandle, 'InputValue');
                    MaxStringLength = evalsafe(char(get(ARGS.BlockHandle, 'MaxStringLength')));
                    if ~isempty(InputValue)
                        NumericValue = pad_to_length('InputVector', double(InputValue(:)), ...
                            'FinalLength', MaxStringLength+1, ...
                            'PadValue', 0, ...
                            'PadDirection', 'down');
                        set(ARGS.BlockHandle, 'Value', ['uint8(' num2expr('InputMatrix', NumericValue, 'ShowNewLines', false) ')']);
                    else
                        set(ARGS.BlockHandle, 'Value', ['uint8(' num2expr('InputMatrix', zeros(1, MaxStringLength+1), 'ShowNewLines', false) ')']);
                    end
                    
                    %% CASE PTC_MBDS_TimeSource
                case 'PTC_MBDS_TimeSource'
                    InputValue = get(ARGS.BlockHandle, 'InputValue');
                    InputValue = regexprep(InputValue, '\s+', '');
                    
                    Numerals = regexp(InputValue, '[^\d.eE+-]+', 'split');
                    MultiplierSymbols = regexp(InputValue, '[\d.eE+-]+', 'split');
                    Numerals(cellfun(@isempty, Numerals)) = [];
                    MultiplierSymbols(cellfun(@isempty, MultiplierSymbols)) = [];
                    if numel(Numerals) ~= numel(MultiplierSymbols)
                        waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid pattern entered.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                        InputValue = '1d1h1m1s1ms';
                        set(ARGS.BlockHandle, 'InputValue', InputValue);
                    end
                    
                    %Obtain multiplier values
                    Multipliers = NaN(size(MultiplierSymbols));
                    Multipliers(ismember(MultiplierSymbols, {'d'})) = 24*60*60*1000;
                    Multipliers(ismember(MultiplierSymbols, {'h'})) = 60*60*1000;
                    Multipliers(ismember(MultiplierSymbols, {'m'})) = 60*1000;
                    Multipliers(ismember(MultiplierSymbols, {'s'})) = 1000;
                    Multipliers(ismember(MultiplierSymbols, {'ms'})) = 1;
                    if any(isnan(Multipliers(:)))
                        waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid pattern entered.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                        InputValue = '1d1h1m1s1ms';
                        set(ARGS.BlockHandle, 'InputValue', InputValue);
                    end
                    
                    Numerals = str2double(Numerals);
                    NumericValue = sum(Numerals .* Multipliers);
                    NumericValue = min(NumericValue, 49.7*24*3600*1000);
                    set(ARGS.BlockHandle, 'Value', num2str(NumericValue));
                    
                    %% CASE PTC_MBDS_FIFO
                case 'PTC_MBDS_FIFO'
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    AttributesFormatString = union(AttributesFormatString, {'QueueSize = %<QueueSize>'; 'Circular = %<Circular>'}, 'stable');
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    QueueSize_eval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'QueueSize')));
                    if isa(QueueSize_eval, 'Simulink.Parameter')
                        QueueSize_eval = QueueSize_eval.Value;
                    end
                    QueueSize_eval = double(QueueSize_eval);
                    if ~isscalar(QueueSize_eval) || isnan(QueueSize_eval) || QueueSize_eval <= 0 || ~isequal(mod(QueueSize_eval, 1), 0)
                        waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for QueueSize. QueueSize must be a positive integral scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                        set(ARGS.BlockHandle, 'QueueSize', get(ARGS.BlockHandle, 'QueueSize_prev'));
                        close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                        return;
                    end
                    
                    
                    %% CASE PTC_MBDS_MeanValueT_RE
                case 'PTC_MBDS_MeanValueT_RE'
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'K_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'K = %<K>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'K = %<K>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'K_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'K_Enabled'), 'off')
                            if ismember('K', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'K', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            K_eval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'K')));
                            if isa(K_eval, 'Simulink.Parameter')
                                K_eval = K_eval.Value;
                            end
                            K_eval = double(K_eval);
                            if ~isscalar(K_eval) || isnan(K_eval) || K_eval <= 0 || ~isequal(mod(K_eval, 1), 0)
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for K. K must be a positive integral scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, 'K', get(ARGS.BlockHandle, 'K_prev'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            set_param([ARGS.BlockPath '/InitVector'], 'Value', ['ones(1, ' num2str(K_eval) ')']);
                            set_param([ARGS.BlockPath '/K'], 'Value', strtrim(get(ARGS.BlockHandle, 'K')));
                        elseif strcmp(get(ARGS.BlockHandle, 'K_Enabled'), 'on')
                            if ~ismember('K', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'K', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'u'; 'E'; 'R'; 'IV'; 'K'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_Running_Average
                case 'PTC_MBDS_Running_Average'
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                    [~, indices] = sort(OutportNumbers);
                    OutportHandles = OutportHandles(indices);
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'Sat_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'Sat_Enabled'), 'off')
                            if ismember('Sat', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'Sat', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'Sat_Enabled'), 'on')
                            if ~ismember('Sat', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'Sat', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    [~, loc] = ismember({'y'; 'Sat'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_MaxLog_RE, PTC_MBDS_MinLog_RE
                case {'PTC_MBDS_MaxLog_RE', 'PTC_MBDS_MinLog_RE'}
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                    [~, indices] = sort(OutportNumbers);
                    OutportHandles = OutportHandles(indices);
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_max_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'off')
                            if ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'on')
                            if ~ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_min_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'off')
                            if ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'on')
                            if ~ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    [~, loc] = ismember({'y'; 'B_min'; 'B_max'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_Limit
                case 'PTC_MBDS_Limit'
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'SaturateOnIntegerOverflow'), 'on')
                        AttributesFormatString = union(AttributesFormatString, 'Saturate: on', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'Saturate: on', 'stable');
                    end
                    if isequal(PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MX'})), {'on'})
                        AttributesFormatString = union(AttributesFormatString, 'MX = %<MX>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'MX = %<MX>', 'stable');
                    end
                    if isequal(PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MN'})), {'on'})
                        AttributesFormatString = union(AttributesFormatString, 'MN = %<MN>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'MN = %<MN>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    set_param([ARGS.BlockPath '/DataType'], 'OutDataTypeStr', strtrim(get(ARGS.BlockHandle, 'OutDataTypeStr')));
                    set_param([ARGS.BlockPath '/DataType'], 'SaturateOnIntegerOverflow', strtrim(get(ARGS.BlockHandle, 'SaturateOnIntegerOverflow')));
                    set_param([ARGS.BlockPath '/Operator_MX'], 'InputSameDT', strtrim(get(ARGS.BlockHandle, 'InputSameDT')));
                    set_param([ARGS.BlockPath '/Operator_MN'], 'InputSameDT', strtrim(get(ARGS.BlockHandle, 'InputSameDT')));
                    
                    if strcmp(get(ARGS.BlockHandle, 'InOutSameDT'), 'off')
                        if ~isempty(find_system(ARGS.BlockPath, FIND_SETTINGS{:}, 'SearchDepth', 1, 'Name', 'Data_Type_Duplicate'))
                            LineHandles = get_param([ARGS.BlockPath '/Data_Type_Duplicate'], 'LineHandles');
                            delete_line(LineHandles.Inport);
                            delete_block([ARGS.BlockPath '/Data_Type_Duplicate']);
                        end
                    elseif strcmp(get(ARGS.BlockHandle, 'InOutSameDT'), 'on')
                        if isempty(find_system(ARGS.BlockPath, FIND_SETTINGS{:}, 'SearchDepth', 1, 'Name', 'Data_Type_Duplicate'))
                            BlockHandle = add_block('built-in/DataTypeDuplicate', [ARGS.BlockPath '/Data_Type_Duplicate']);
                            set(BlockHandle, 'Position', [540, 65, 580, 105]);
                            set(BlockHandle, 'NumInputPorts', '2');
                            add_line(ARGS.BlockPath, 'u/1', 'Data_Type_Duplicate/1');
                            add_line(ARGS.BlockPath, 'DataType/1', 'Data_Type_Duplicate/2');
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                        if ismember('MX', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MX', 'built-in/Constant', 'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                        end
                        set_param([ARGS.BlockPath '/MX'], 'Value', strtrim(get(ARGS.BlockHandle, 'MX')));
                        if ismember('MN', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MN', 'built-in/Constant', 'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                        end
                        set_param([ARGS.BlockPath '/MN'], 'Value', strtrim(get(ARGS.BlockHandle, 'MN')));
                    elseif strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'on')
                        if ~ismember('MX', InportNames)
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MX', 'built-in/Inport', 'noprompt');
                        end
                        if ~ismember('MN', InportNames)
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'MN', 'built-in/Inport', 'noprompt');
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'MX'; 'MN'; 'u'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                    [~, indices] = sort(OutportNumbers);
                    OutportHandles = OutportHandles(indices);
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_min_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'off')
                            if ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'on')
                            if ~ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_max_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'off')
                            if ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'on')
                            if ~ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    [~, loc] = ismember({'y'; 'B_min'; 'B_max'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_Repeating_Sequence_Stair
                case 'PTC_MBDS_Repeating_Sequence_Stair'
                    OutValues_eval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'OutValues')));
                    if isa(OutValues_eval, 'Simulink.Parameter')
                        OutValues_eval = OutValues_eval.Value;
                    end
                    if ~isvector(OutValues_eval)
                        waitfor(msgbox_editable('MessageString', ['ERROR in ''' ARGS.BlockPath ''': Initialization commands cannot be evaluated. --> Parameter ''OutValues'' must be a vector or a scalar'], ...
                            'Color', 'red', 'WindowStyle', 'modal'));
                        set(ARGS.BlockHandle, 'OutValues', get(ARGS.BlockHandle, 'OutValues_prev'));
                        close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                    end
                    
                    %% CASE PTC_MBDS_Interval
                case 'PTC_MBDS_Interval'
                    set_param([ARGS.BlockPath '/Operator_MX'], 'InputSameDT', get(ARGS.BlockHandle, 'InputSameDT'));
                    set_param([ARGS.BlockPath '/Operator_MN'], 'InputSameDT', get(ARGS.BlockHandle, 'InputSameDT'));
                    
                    switch get(ARGS.BlockHandle, 'IntervalMode')
                        case '[MN;MX]'
                            set_param([ARGS.BlockPath '/Operator_MX'], 'Operator', '>=');
                            set_param([ARGS.BlockPath '/Operator_MN'], 'Operator', '>=');
                        case '[MN;MX['
                            set_param([ARGS.BlockPath '/Operator_MX'], 'Operator', '>');
                            set_param([ARGS.BlockPath '/Operator_MN'], 'Operator', '>=');
                        case ']MN;MX]'
                            set_param([ARGS.BlockPath '/Operator_MX'], 'Operator', '>=');
                            set_param([ARGS.BlockPath '/Operator_MN'], 'Operator', '>');
                        case ']MN;MX['
                            set_param([ARGS.BlockPath '/Operator_MX'], 'Operator', '>');
                            set_param([ARGS.BlockPath '/Operator_MN'], 'Operator', '>');
                    end
                    
                    %% CASE PTC_MBDS_SetBit
                case 'PTC_MBDS_SetBit'
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'SEL = %<SEL>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'SEL = %<SEL>', 'stable');
                    end
                    if strcmp(get(ARGS.BlockHandle, 'VAL_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'VAL = %<VAL>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'VAL = %<VAL>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    if strcmp(get(ARGS.BlockHandle, 'ZeroIndexing'), 'off')
                        set_param([ARGS.BlockPath '/LoopOverBits/IndexOffset'], 'Value', '1');
                    else
                        set_param([ARGS.BlockPath '/LoopOverBits/IndexOffset'], 'Value', '0');
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'off')
                        if ismember('SEL', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, ...
                                'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                                'Name', 'SEL', ...
                                'built-in/Constant', ...
                                'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'uint8');
                        end
                        set_param([ARGS.BlockPath '/SEL'], 'Value', strtrim(get(ARGS.BlockHandle, 'SEL')));
                    elseif strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'on')
                        if ~ismember('SEL', InportNames)
                            replace_block(ARGS.BlockPath, ...
                                'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                                'Name', 'SEL', ...
                                'built-in/Inport', ...
                                'noprompt');
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if strcmp(get(ARGS.BlockHandle, 'VAL_Enabled'), 'off')
                        if ismember('VAL', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, ...
                                'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                                'Name', 'VAL', ...
                                'built-in/Constant', ...
                                'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                        end
                        set_param([ARGS.BlockPath '/VAL'], 'Value', strtrim(get(ARGS.BlockHandle, 'VAL')));
                    elseif strcmp(get(ARGS.BlockHandle, 'VAL_Enabled'), 'on')
                        if ~ismember('VAL', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, ...
                                'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                                'Name', 'VAL', ...
                                'built-in/Inport', ...
                                'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'u'; 'SEL'; 'VAL'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_GetBit
                case 'PTC_MBDS_GetBit'
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'SEL = %<SEL>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'SEL = %<SEL>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    if strcmp(get(ARGS.BlockHandle, 'ZeroIndexing'), 'off')
                        set_param([ARGS.BlockPath '/LoopOverBits/IndexOffset'], 'Value', '1');
                    else
                        set_param([ARGS.BlockPath '/LoopOverBits/IndexOffset'], 'Value', '0');
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'off')
                        if ismember('SEL', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, ...
                                'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                                'Name', 'SEL', ...
                                'built-in/Constant', ...
                                'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'uint8');
                        end
                        set_param([ARGS.BlockPath '/SEL'], 'Value', strtrim(get(ARGS.BlockHandle, 'SEL')));
                    elseif strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'on')
                        if ~ismember('SEL', InportNames)
                            replace_block(ARGS.BlockPath, ...
                                'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                                'Name', 'SEL', ...
                                'built-in/Inport', ...
                                'noprompt');
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'u'; 'SEL'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_EQ, PTC_MBDS_GE, PTC_MBDS_GT, PTC_MBDS_LE, PTC_MBDS_LT, PTC_MBDS_NE
                case {'PTC_MBDS_EQ', 'PTC_MBDS_GE', 'PTC_MBDS_GT', 'PTC_MBDS_LE', 'PTC_MBDS_LT', 'PTC_MBDS_NE'}
                    set_param([ARGS.BlockPath '/Operator'], 'InputSameDT', get(ARGS.BlockHandle, 'InputSameDT'));
                    
                    %% CASE PTC_MBDS_DifferenceLimiter, PTC_MBDS_GradientLimiter, PTC_MBDS_Hysteresis
                case {'PTC_MBDS_DifferenceLimiter', 'PTC_MBDS_GradientLimiter', 'PTC_MBDS_Hysteresis'}
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'LULD_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'LULD_Enabled'), 'off')
                            AttributesFormatString = union(AttributesFormatString, {'LD = %<LD>'; 'LU = %<LU>'}, 'stable');
                        else
                            AttributesFormatString = setdiff(AttributesFormatString, {'LD = %<LD>'; 'LU = %<LU>'}, 'stable');
                        end
                    end
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'dT_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                            AttributesFormatString = union(AttributesFormatString, 'dT = %<dT>', 'stable');
                        else
                            AttributesFormatString = setdiff(AttributesFormatString, 'dT = %<dT>', 'stable');
                        end
                    end
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                        else
                            AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                        end
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'LULD_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'LULD_Enabled'), 'off')
                            if ismember('LU', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'LU', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/LU'], 'Value', strtrim(get(ARGS.BlockHandle, 'LU')));
                            if ismember('LD', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'LD', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/LD'], 'Value', strtrim(get(ARGS.BlockHandle, 'LD')));
                        elseif strcmp(get(ARGS.BlockHandle, 'LULD_Enabled'), 'on')
                            if ~ismember('LU', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'LU', 'built-in/Inport', 'noprompt');
                            end
                            if ~ismember('LD', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'LD', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'dT_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                            if ismember('dT', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/dT'], 'Value', strtrim(get(ARGS.BlockHandle, 'dT')));
                        elseif strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'on')
                            if ~ismember('dT', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'dT', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'E_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                            if ismember('E', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                        elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                            if ~ismember('E', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'R_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                            if ismember('R', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                            end
                            set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                        elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                            if ~ismember('R', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'IV_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                            if ismember('IV', InportNames)
                                ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                                set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                            end
                            set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                        elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                            if ~ismember('IV', InportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'LU'; 'LD'; 'dT'; 'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNumbers = str2double(cellstr2(get(OutportHandles, 'Port')));
                    [~, indices] = sort(OutportNumbers);
                    OutportHandles = OutportHandles(indices);
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_min_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'off')
                            if ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_min_Enabled'), 'on')
                            if ~ismember('B_min', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_min', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    if isfield(get(ARGS.BlockHandle, 'ObjectParameters'), 'B_max_Enabled')
                        if strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'off')
                            if ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Terminator', 'noprompt');
                            end
                        elseif strcmp(get(ARGS.BlockHandle, 'B_max_Enabled'), 'on')
                            if ~ismember('B_max', OutportNames)
                                replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'B_max', 'built-in/Outport', 'noprompt');
                            end
                        end
                    end
                    
                    OutportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Outport');
                    OutportNames = cellstr2(get(OutportHandles, 'Name'));
                    [~, loc] = ismember({'y'; 'B_min'; 'B_max'}, OutportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(OutportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_Delay_RE
                case 'PTC_MBDS_Delay_RE'
                    feval(str2func(thisfuncname), 'ParamVariable', 'R_Enabled');
                    
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        AttributesFormatString = union(AttributesFormatString, 'IV = %<IV>', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'IV = %<IV>', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'off')
                        if ismember('E', InportNames)
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Constant', 'noprompt');
                        end
                        set_param([ARGS.BlockPath '/E'], 'Value', 'true');
                    elseif strcmp(get(ARGS.BlockHandle, 'E_Enabled'), 'on')
                        if ~ismember('E', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'E', 'built-in/Inport', 'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                        end
                    end
                    
                    if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                        if ismember('R', InportNames)
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Constant', 'noprompt');
                        end
                        set_param([ARGS.BlockPath '/R'], 'Value', 'false');
                    elseif strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'on')
                        if ~ismember('R', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'R', 'built-in/Inport', 'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                        end
                    end
                    
                    if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                        if ismember('IV', InportNames)
                            ReplacedBlock = replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Constant', 'noprompt');
                            set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                        end
                        set_param([ARGS.BlockPath '/IV'], 'Value', strtrim(get(ARGS.BlockHandle, 'IV')));
                    elseif strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'on')
                        if ~ismember('IV', InportNames)
                            replace_block(ARGS.BlockPath, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, 'Name', 'IV', 'built-in/Inport', 'noprompt');
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    [~, loc] = ismember({'u'; 'E'; 'R'; 'IV'}, InportNames);
                    loc = nonzeros(loc);
                    for ctr = numel(loc):-1:1
                        set(InportHandles(loc(ctr)), 'Port', num2str(ctr));
                    end
                    
                    %% CASE PTC_MBDS_NOT
                case 'PTC_MBDS_NOT'
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'BitwiseMode'), 'on')
                        AttributesFormatString = union(AttributesFormatString, 'bitwise', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'bitwise', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if strcmp(get(ARGS.BlockHandle, 'BitwiseMode'), 'on')
                        set_param([ARGS.BlockPath '/DataType'], 'OutDataTypeStr', strtrim(get(ARGS.BlockHandle, 'OutDataTypeStr')));
                        ReplacedBlock = replace_block(ARGS.BlockPath, ...
                            'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                            'Name', 'Operator', ...
                            ['simulink/Logic and Bit' LINEFEED 'Operations/Bitwise' LINEFEED 'Operator'], ...
                            'noprompt');
                        set_param(ReplacedBlock{1}, 'Operator', 'NOT');
                        set(InportHandles, 'OutDataTypeStr', 'Inherit: auto');
                    else
                        set_param([ARGS.BlockPath '/DataType'], 'OutDataTypeStr', 'boolean');
                        ReplacedBlock = replace_block(ARGS.BlockPath, ...
                            'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                            'Name', 'Operator', ...
                            'built-in/Logic', ...
                            'noprompt');
                        set_param(ReplacedBlock{1}, 'Operator', 'NOT');
                        set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                        set(InportHandles, 'OutDataTypeStr', 'boolean');
                        LineHandles = get(InportHandles, 'LineHandles');
                        if ~iscell(LineHandles)
                            LineHandles = {LineHandles};
                        end
                        LineHandles = cellfun(@(X) X.Outport, LineHandles);
                        delete_line(LineHandles);
                        for ctr = 1:numel(InportNames)
                            add_line(ARGS.BlockPath, [InportNames{ctr} '/1'], ['Operator/' num2str(ctr)]);
                        end
                    end
                    
                    %% CASE PTC_MBDS_AND, PTC_MBDS_OR, PTC_MBDS_XOR
                case {'PTC_MBDS_AND', 'PTC_MBDS_OR', 'PTC_MBDS_XOR'}
                    AttributesFormatString = strtrim(strexplode(get(ARGS.BlockHandle, 'AttributesFormatString'), LINEFEED));
                    AttributesFormatString(cellfun(@isempty, AttributesFormatString)) = [];
                    if strcmp(get(ARGS.BlockHandle, 'BitwiseMode'), 'on')
                        AttributesFormatString = union(AttributesFormatString, 'bitwise', 'stable');
                    else
                        AttributesFormatString = setdiff(AttributesFormatString, 'bitwise', 'stable');
                    end
                    set(ARGS.BlockHandle, 'AttributesFormatString', strimplode(AttributesFormatString, LINEFEED));
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    
                    NumInputs = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'Inputs')));
                    if NumInputs ~= numel(InportHandles)
                        LineHandles = get(InportHandles, 'LineHandles');
                        if ~iscell(LineHandles)
                            LineHandles = {LineHandles};
                        end
                        LineHandles = cellfun(@(X) X.Outport, LineHandles);
                        delete_line(LineHandles);
                        delete(InportHandles);
                        NumInputs = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'Inputs')));
                        if strcmp(get_param([ARGS.BlockPath '/Operator'], 'BlockType'), 'Logic')
                            set_param([ARGS.BlockPath '/Operator'], 'Inputs', num2str(NumInputs));
                            for ctr = 1:NumInputs
                                add_block('built-in/Inport', [ARGS.BlockPath '/u' num2str(ctr)], 'Port', num2str(ctr), 'OutDataTypeStr', 'boolean');
                                add_line(ARGS.BlockPath, ['u' num2str(ctr) '/1'], ['Operator/' num2str(ctr)]);
                            end
                        else
                            set_param([ARGS.BlockPath '/Operator'], 'UseBitMask', get(ARGS.BlockHandle, 'UseBitMask'));
                            set_param([ARGS.BlockPath '/Operator'], 'NumInputPorts', num2str(NumInputs));
                            for ctr = 1:NumInputs
                                add_block('built-in/Inport', [ARGS.BlockPath '/u' num2str(ctr)], 'Port', num2str(ctr), 'OutDataTypeStr', 'Inherit: auto');
                                add_line(ARGS.BlockPath, ['u' num2str(ctr) '/1'], ['Operator/' num2str(ctr)]);
                            end
                        end
                    end
                    
                    InportHandles = find_system(ARGS.BlockPath, ...
                        FIND_SETTINGS{:}, ...
                        'SearchDepth', 1, ...
                        'BlockType', 'Inport');
                    InportNumbers = str2double(cellstr2(get(InportHandles, 'Port')));
                    [~, indices] = sort(InportNumbers);
                    InportHandles = InportHandles(indices);
                    InportNames = cellstr2(get(InportHandles, 'Name'));
                    
                    if strcmp(get(ARGS.BlockHandle, 'BitwiseMode'), 'on')
                        set_param([ARGS.BlockPath '/DataType'], 'OutDataTypeStr', strtrim(get(ARGS.BlockHandle, 'OutDataTypeStr')));
                        ReplacedBlock = replace_block(ARGS.BlockPath, ...
                            'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                            'Name', 'Operator', ...
                            ['simulink/Logic and Bit' LINEFEED 'Operations/Bitwise' LINEFEED 'Operator'], ...
                            'noprompt');
                        if strcmp(get(ARGS.BlockHandle, 'UseBitMask'), 'off')
                            set_param(ReplacedBlock{1}, 'UseBitMask', 'off');
                            set_param(ReplacedBlock{1}, 'NumInputPorts', num2str(numel(InportHandles)));
                        else
                            set_param(ReplacedBlock{1}, 'UseBitMask', 'on');
                            set_param(ReplacedBlock{1}, 'BitMask', strtrim(get(ARGS.BlockHandle, 'BitMask')));
                        end
                        set(InportHandles, 'OutDataTypeStr', 'Inherit: auto');
                        LineHandles = get(InportHandles, 'LineHandles');
                        if ~iscell(LineHandles)
                            LineHandles = {LineHandles};
                        end
                        LineHandles = cellfun(@(X) X.Outport, LineHandles);
                        delete_line(LineHandles);
                        for ctr = 1:numel(InportNames)
                            add_line(ARGS.BlockPath, [InportNames{ctr} '/1'], ['Operator/' num2str(ctr)]);
                        end
                    else
                        set_param([ARGS.BlockPath '/DataType'], 'OutDataTypeStr', 'boolean');
                        ReplacedBlock = replace_block(ARGS.BlockPath, ...
                            'LookUnderMasks', 'all', 'FollowLinks', 'on', 'SearchDepth', 1, ...
                            'Name', 'Operator', ...
                            'built-in/Logic', ...
                            'noprompt');
                        set_param(ReplacedBlock{1}, 'Inputs', num2str(numel(InportHandles)));
                        set_param(ReplacedBlock{1}, 'OutDataTypeStr', 'boolean');
                        indices = ~strcmp('boolean', cellstr2(get(InportHandles, 'OutDataTypeStr')));
                        set(InportHandles(indices), 'OutDataTypeStr', 'boolean');
                        LineHandles = get(InportHandles, 'LineHandles');
                        if ~iscell(LineHandles)
                            LineHandles = {LineHandles};
                        end
                        LineHandles = cellfun(@(X) X.Outport, LineHandles);
                        delete_line(LineHandles);
                        for ctr = 1:numel(InportNames)
                            add_line(ARGS.BlockPath, [InportNames{ctr} '/1'], ['Operator/' num2str(ctr)]);
                        end
                    end
                    
                    switch get(ARGS.BlockHandle, 'PTC_BlockType')
                        case 'PTC_MBDS_AND'
                            if ~strcmp(get_param([ARGS.BlockPath '/Operator'], 'Operator'), 'AND')
                                set_param([ARGS.BlockPath '/Operator'], 'Operator', 'AND');
                            end
                        case 'PTC_MBDS_OR'
                            if ~strcmp(get_param([ARGS.BlockPath '/Operator'], 'Operator'), 'OR')
                                set_param([ARGS.BlockPath '/Operator'], 'Operator', 'OR');
                            end
                        case 'PTC_MBDS_XOR'
                            if ~strcmp(get_param([ARGS.BlockPath '/Operator'], 'Operator'), 'XOR')
                                set_param([ARGS.BlockPath '/Operator'], 'Operator', 'XOR');
                            end
                    end
            end
        end
        
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        
    case 'BlockCallback'
        if isprop(ARGS.BlockHandle, 'PTC_BlockType')
            switch get(ARGS.BlockHandle, 'PTC_BlockType')
                %% CASE PTC_MBDS_GCM_1793_196_1503_Raptor_CAN_RX_Raw
                case 'PTC_MBDS_GCM_1793_196_1503_Raptor_CAN_RX_Raw'
                    switch ARGS.ParamVariable
                        case 'paramExtendedIdentifier'
                            if strcmp(get(ARGS.BlockHandle, 'paramExtendedIdentifier'), 'off')
                                set(ARGS.BlockHandle, 'paramMatchIdentifierExactly', 'on');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'paramMatchIdentifierExactly'})) = {'off'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'paramMatchIdentifierExactly'})) = {'on'};
                            end
                    end
                    set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                    
                    %% CASE PTC_MBDS_EnumSwitch
                case 'PTC_MBDS_EnumSwitch'
                    switch ARGS.ParamVariable
                        case 'EnumerationTypeName'
                            EnumerationTypeName = char(strtrim(get_param(ARGS.BlockPath, 'EnumerationTypeName')));
                            [~, EnumFieldsList] = enumeration(EnumerationTypeName);
                            if numel(EnumFieldsList) == 1
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'The enumeration data type needs to have at least two enumerations defined.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set_param(ARGS.BlockPath, 'EnumerationTypeName', get_param(ARGS.BlockPath, 'EnumerationTypeNamePrev'));
                                close_system(ARGS.BlockPath);
                                open_system(ARGS.BlockPath);
                                return;
                            end
                    end
                    
                    %% CASE PTC_MBDS_MergeBuses
                case 'PTC_MBDS_MergeBuses'
                    switch ARGS.ParamVariable
                        case 'NumberOfBuses'
                            Param_NumberOfBuses = evalsafe(char(get_param(ARGS.BlockPath, 'NumberOfBuses')));
                            if isa(Param_NumberOfBuses, 'Simulink.Parameter')
                                Param_NumberOfBuses = Param_NumberOfBuses.Value;
                            end
                            Param_NumberOfBuses = round(Param_NumberOfBuses);
                            if ~isscalar(Param_NumberOfBuses) || Param_NumberOfBuses < 1
                                waitfor(msgbox_editable('MessageString', 'Invalid number of buses', 'Color', 'red', 'WindowStyle', 'modal'));
                                set_param(ARGS.BlockPath, 'NumberOfBuses', get_param(ARGS.BlockPath, 'NumberOfBusesPrev'));
                                close_system(ARGS.BlockPath);
                                open_system(ARGS.BlockPath);
                                return;
                            end
                    end
                    
                    %% CASE PTC_MBDS_Delay
                case 'PTC_MBDS_Delay'
                    switch ARGS.ParamVariable
                        case 'DelayLength'
                            Param_DelayLength = evalsafe(char(get_param(ARGS.BlockPath, 'DelayLength')));
                            if isa(Param_DelayLength, 'Simulink.Parameter')
                                Param_DelayLength = Param_DelayLength.Value;
                            end
                            Param_DelayLength = round(Param_DelayLength);
                            if ~isscalar(Param_DelayLength) || Param_DelayLength < 1
                                waitfor(msgbox_editable('MessageString', 'Invalid delay length', 'Color', 'red', 'WindowStyle', 'modal'));
                                set_param(ARGS.BlockPath, 'DelayLength', get_param(ARGS.BlockPath, 'DelayLengthPrev'));
                                close_system(ARGS.BlockPath);
                                open_system(ARGS.BlockPath);
                                return;
                            end
                    end
                    
                    %% CASE PTC_MBDS_Repeating_Sequence_Stair
                case 'PTC_MBDS_Repeating_Sequence_Stair'
                    switch ARGS.ParamVariable
                        case 'OutValues'
                            try
                                OutValues_eval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'OutValues')));
                                if isa(OutValues_eval, 'Simulink.Parameter')
                                    OutValues_eval = OutValues_eval.Value;
                                end
                                OutValues_eval = double(OutValues_eval);
                                if ~isvector(OutValues_eval)
                                    waitfor(msgbox_editable('MessageString', ['ERROR in ''' ARGS.BlockPath ''': Initialization commands cannot be evaluated. --> Parameter ''OutValues'' must be a vector or a scalar'], ...
                                        'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'OutValues', get(ARGS.BlockHandle, 'OutValues_prev'));
                                    close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                    return;
                                end
                            catch
                                waitfor(msgbox_editable('MessageString', ['ERROR in ''' ARGS.BlockPath ''': Initialization commands cannot be evaluated. --> Parameter ''OutValues'' must be a vector or a scalar'], ...
                                    'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, 'OutValues', get(ARGS.BlockHandle, 'OutValues_prev'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            set(ARGS.BlockHandle, 'OutValues_prev', get(ARGS.BlockHandle, 'OutValues'));
                    end
                    
                    %% CASE PTC_MBDS_AND, PTC_MBDS_OR, PTC_MBDS_XOR
                case {'PTC_MBDS_AND', 'PTC_MBDS_OR', 'PTC_MBDS_XOR'}
                    switch ARGS.ParamVariable
                        case 'BitwiseMode'
                            if strcmp(get(ARGS.BlockHandle, 'BitwiseMode'), 'off')
                                set(ARGS.BlockHandle, 'UseBitMask', 'off');
                                set(ARGS.BlockHandle, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'UseBitMask'; 'BitMask'; 'OutDataTypeStr'})) = {'off'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'UseBitMask'; 'OutDataTypeStr'})) = {'on'};
                            end
                        case 'UseBitMask'
                            if strcmp(get(ARGS.BlockHandle, 'UseBitMask'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'Inputs'})) = {'on'};
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'BitMask'})) = {'off'};
                            else
                                set(ARGS.BlockHandle, 'Inputs', '1');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'Inputs'})) = {'off'};
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'BitMask'})) = {'on'};
                            end
                    end
                    set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                    
                    %% CASE PTC_MBDS_NOT
                case 'PTC_MBDS_NOT'
                    switch ARGS.ParamVariable
                        case 'BitwiseMode'
                            if strcmp(get(ARGS.BlockHandle, 'BitwiseMode'), 'off')
                                set(ARGS.BlockHandle, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'OutDataTypeStr'})) = {'off'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'OutDataTypeStr'})) = {'on'};
                            end
                    end
                    set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                    
                    %% CASE PTC_MBDS_Delay_RE
                case 'PTC_MBDS_Delay_RE'
                    switch ARGS.ParamVariable
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    %% CASE PTC_MBDS_GetBit
                case 'PTC_MBDS_GetBit'
                    switch ARGS.ParamVariable
                        case 'SEL_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'SEL'})) = {'on'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'SEL'})) = {'off'};
                            end
                    end
                    set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                    
                    %% CASE PTC_MBDS_SetBit
                case 'PTC_MBDS_SetBit'
                    switch ARGS.ParamVariable
                        case 'SEL_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'SEL_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'SEL'})) = {'on'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'SEL'})) = {'off'};
                            end
                            
                        case 'VAL_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'VAL_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'VAL'})) = {'on'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'VAL'})) = {'off'};
                            end
                    end
                    set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                    
                    %% CASE PTC_MBDS_DifferenceLimiter, PTC_MBDS_GradientLimiter, PTC_MBDS_Hysteresis
                case {'PTC_MBDS_DifferenceLimiter', 'PTC_MBDS_GradientLimiter', 'PTC_MBDS_Hysteresis'}
                    switch ARGS.ParamVariable
                        case 'LULD_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'LULD_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'LU'; 'LD'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'LU'; 'LD'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'dT_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_Limit
                case 'PTC_MBDS_Limit'
                    switch ARGS.ParamVariable
                        case 'MXMN_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MX'; 'MN'})) = {'on'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MX'; 'MN'})) = {'off'};
                            end
                    end
                    set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                    
                    %% CASE PTC_MBDS_Running_Average
                case 'PTC_MBDS_Running_Average'
                    switch ARGS.ParamVariable
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_MaxLog_RE, PTC_MBDS_MinLog_RE
                case {'PTC_MBDS_MaxLog_RE', 'PTC_MBDS_MinLog_RE'}
                    switch ARGS.ParamVariable
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_Linear_Scaling, PTC_MBDS_Linear_Scaling_Inverse
                case {'PTC_MBDS_Linear_Scaling', 'PTC_MBDS_Linear_Scaling_Inverse'}
                    switch ARGS.ParamVariable
                        case 'ScaleFactor'
                            try
                                ScaleFactorVal = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'ScaleFactor')));
                                if isa(ScaleFactorVal, 'Simulink.Parameter')
                                    ScaleFactorVal = ScaleFactorVal.Value;
                                end
                                ScaleFactorVal = double(ScaleFactorVal);
                                if ~isscalar(ScaleFactorVal) || ~isreal(ScaleFactorVal) || isnan(ScaleFactorVal) || (ScaleFactorVal == 0 && strcmp(get(ARGS.BlockHandle, 'PTC_BlockType'), 'PTC_MBDS_Linear_Scaling_Inverse'))
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for ScaleFactor. ScaleFactor must be a real, non-zero, scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'ScaleFactor', get(ARGS.BlockHandle, 'ScaleFactor_prev'));
                                    close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                    return;
                                elseif ~isscalar(ScaleFactorVal) || ~isreal(ScaleFactorVal) || isnan(ScaleFactorVal)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for ScaleFactor. ScaleFactor must be a real, scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'ScaleFactor', get(ARGS.BlockHandle, 'ScaleFactor_prev'));
                                    close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                    return;
                                end
                            catch
                                if strcmp(get(ARGS.BlockHandle, 'PTC_BlockType'), 'PTC_MBDS_Linear_Scaling_Inverse')
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for ScaleFactor. ScaleFactor must be a real, non-zero, scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                else
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for ScaleFactor. ScaleFactor must be a real, scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                end
                                set(ARGS.BlockHandle, 'ScaleFactor', get(ARGS.BlockHandle, 'ScaleFactor_prev'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            set(ARGS.BlockHandle, 'ScaleFactor_prev', get(ARGS.BlockHandle, 'ScaleFactor'));
                            
                        case 'Offset'
                            try
                                OffsetVal = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'Offset')));
                                if isa(OffsetVal, 'Simulink.Parameter')
                                    OffsetVal = OffsetVal.Value;
                                end
                                OffsetVal = double(OffsetVal);
                                if ~isscalar(OffsetVal) || ~isreal(OffsetVal) || isnan(OffsetVal)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for Offset. Offset must be a real, scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'Offset', get(ARGS.BlockHandle, 'Offset_prev'));
                                    close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                    return;
                                end
                            catch
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for Offset. Offset must be a real, scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, 'Offset', get(ARGS.BlockHandle, 'Offset_prev'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            set(ARGS.BlockHandle, 'Offset_prev', get(ARGS.BlockHandle, 'Offset'));
                    end
                    
                    %% CASE PTC_MBDS_RealTimeSynchronization_TimeFactor
                case 'PTC_MBDS_RealTimeSynchronization_TimeFactor'
                    switch ARGS.ParamVariable
                        case 'Enable'
                            if strcmp(get(ARGS.BlockHandle, 'Enable'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'TimeFactor'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'TimeFactor'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'TimeFactor'
                            try
                                TimeFactor_eval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'TimeFactor')));
                                if isa(TimeFactor_eval, 'Simulink.Parameter')
                                    TimeFactor_eval = TimeFactor_eval.Value;
                                end
                                TimeFactor_eval = double(TimeFactor_eval);
                                if ~isscalar(TimeFactor_eval) || isnan(TimeFactor_eval) || TimeFactor_eval <= 0 || ~isreal(TimeFactor_eval)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for TimeFactor. TimeFactor must be a positive real scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'TimeFactor', get(ARGS.BlockHandle, 'TimeFactor_prev'));
                                    close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                    return;
                                end
                            catch
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for TimeFactor. TimeFactor must be a positive real scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, 'TimeFactor', get(ARGS.BlockHandle, 'TimeFactor_prev'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            set(ARGS.BlockHandle, 'TimeFactor_prev', get(ARGS.BlockHandle, 'TimeFactor'));
                    end
                    
                    %% CASE PTC_MBDS_FIFO
                case 'PTC_MBDS_FIFO'
                    switch ARGS.ParamVariable
                        case 'QueueSize'
                            try
                                QueueSize_eval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'QueueSize')));
                                if isa(QueueSize_eval, 'Simulink.Parameter')
                                    QueueSize_eval = QueueSize_eval.Value;
                                end
                                QueueSize_eval = double(QueueSize_eval);
                                if ~isscalar(QueueSize_eval) || isnan(QueueSize_eval) || QueueSize_eval <= 0 || ~isequal(mod(QueueSize_eval, 1), 0)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for QueueSize. QueueSize must be a positive integral scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'QueueSize', get(ARGS.BlockHandle, 'QueueSize_prev'));
                                    close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                    return;
                                end
                            catch
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for QueueSize. QueueSize must be a positive integral scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, 'QueueSize', get(ARGS.BlockHandle, 'QueueSize_prev'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            set(ARGS.BlockHandle, 'QueueSize_prev', get(ARGS.BlockHandle, 'QueueSize'));
                    end
                    
                    %% CASE PTC_MBDS_MeanValueT_RE
                case 'PTC_MBDS_MeanValueT_RE'
                    switch ARGS.ParamVariable
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'K_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'K_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'K'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'K'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'K'
                            if strcmp(get(ARGS.BlockHandle, 'K_Enabled'), 'off')
                                try
                                    Kval = slevalglobal('Sys', bdroot(ARGS.BlockPath), 'Expression', strtrim(get(ARGS.BlockHandle, 'K')));
                                    if isa(Kval, 'Simulink.Parameter')
                                        Kval = Kval.Value;
                                    end
                                    Kval = double(Kval);
                                    if ~isscalar(Kval) || isnan(Kval) || Kval <= 0 || ~isequal(mod(Kval, 1), 0)
                                        waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for K. K must be a positive integral scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                        set(ARGS.BlockHandle, 'K', get(ARGS.BlockHandle, 'K_prev'));
                                        close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                        return;
                                    end
                                catch
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid value entered for K. K must be a positive integral scalar value.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'K', get(ARGS.BlockHandle, 'K_prev'));
                                    close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                    return;
                                end
                                set(ARGS.BlockHandle, 'K_prev', get(ARGS.BlockHandle, 'K'));
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_TurnOffDelayTime, PTC_MBDS_TurnOnDelayTime
                case {'PTC_MBDS_TurnOffDelayTime', 'PTC_MBDS_TurnOnDelayTime'}
                    switch ARGS.ParamVariable
                        case 'dT_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'on'};
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'off'};
                            end
                    end
                    set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                    
                    %% CASE PTC_MBDS_HighpassT_RE, PTC_MBDS_LowpassT_RE
                case {'PTC_MBDS_HighpassT_RE', 'PTC_MBDS_LowpassT_RE'}
                    switch ARGS.ParamVariable
                        case 'dT_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_Accumulator_REL
                case 'PTC_MBDS_Accumulator_REL'
                    switch ARGS.ParamVariable
                        case 'MXMN_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MX'; 'MN'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MX'; 'MN'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_IntegratorK_REL, PTC_MBDS_IntegratorT_REL
                case {'PTC_MBDS_IntegratorK_REL', 'PTC_MBDS_IntegratorT_REL'}
                    switch ARGS.ParamVariable
                        case 'MXMN_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'MXMN_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MX'; 'MN'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MX'; 'MN'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'dT_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_DeltaOneStep, PTC_MBDS_EdgeBi, PTC_MBDS_EdgeFalling, PTC_MBDS_EdgeRising
                case {'PTC_MBDS_DeltaOneStep', 'PTC_MBDS_EdgeBi', 'PTC_MBDS_EdgeFalling', 'PTC_MBDS_EdgeRising'}
                    switch ARGS.ParamVariable
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_DifferenceQuotient
                case 'PTC_MBDS_DifferenceQuotient'
                    switch ARGS.ParamVariable
                        case 'dT_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_RSFlipFlop, PTC_MBDS_SRFlipFlop
                case {'PTC_MBDS_RSFlipFlop', 'PTC_MBDS_SRFlipFlop'}
                    switch ARGS.ParamVariable
                        case {'Q_Enabled', 'Not_Q_Enabled'}
                            if strcmp(get(ARGS.BlockHandle, 'Q_Enabled'), 'off') && strcmp(get(ARGS.BlockHandle, 'Not_Q_Enabled'), 'off')
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: At least one output port needs to be provided by the block.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, ARGS.ParamVariable, 'on');
                            end
                    end
                    
                    %% CASE PTC_MBDS_SampleAndHold_RE
                case 'PTC_MBDS_SampleAndHold_RE'
                    switch ARGS.ParamVariable
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                    end
                    
                    %% CASE PTC_MBDS_StringSource
                case 'PTC_MBDS_StringSource'
                    pairs = {'ShouldAllowEmptyString', false};
                    ARGS = structcopy(ARGS, parseargs(varargin, pairs));
                    switch ARGS.ParamVariable
                        case 'InputValue'
                            InputValue = get(ARGS.BlockHandle, 'InputValue');
                            MaxStringLength = evalsafe(char(get(ARGS.BlockHandle, 'MaxStringLength')));
                            if length(InputValue) > MaxStringLength
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['WARNING: String length exceeds ' num2str(MaxStringLength) ' characters. It will be truncated.']}, 'Color', 'yellow', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, 'InputValue', InputValue(1:MaxStringLength));
                            elseif ~ARGS.ShouldAllowEmptyString && strcmp(InputValue, '')
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Empty strings are not permitted.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            else
                                if ~isempty(InputValue)
                                    NumericValue = pad_to_length('InputVector', double(InputValue(:)), ...
                                        'FinalLength', MaxStringLength+1, ...
                                        'PadValue', 0, ...
                                        'PadDirection', 'down');
                                    set(ARGS.BlockHandle, 'Value', ['uint8(' num2expr('InputMatrix', NumericValue, 'ShowNewLines', false) ')']);
                                else
                                    set(ARGS.BlockHandle, 'Value', ['uint8(' num2expr('InputMatrix', zeros(1, MaxStringLength), 'ShowNewLines', false) ')']);
                                end
                            end
                    end
                    
                    %% CASE PTC_MBDS_TimeSource
                case 'PTC_MBDS_TimeSource'
                    switch ARGS.ParamVariable
                        case 'InputValue'
                            InputValue = regexprep(get(ARGS.BlockHandle, 'InputValue'), '\s+', '');
                            Numerals = regexp(InputValue, '[^\d.eE+-]+', 'split');
                            MultiplierSymbols = regexp(InputValue, '[\d.eE+-]+', 'split');
                            Numerals(cellfun(@isempty, Numerals)) = [];
                            MultiplierSymbols(cellfun(@isempty, MultiplierSymbols)) = [];
                            if numel(Numerals) ~= numel(MultiplierSymbols)
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid pattern entered.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            
                            %Obtain multiplier values
                            Multipliers = NaN(size(MultiplierSymbols));
                            Multipliers(ismember(MultiplierSymbols, {'d'})) = 24*60*60*1000;
                            Multipliers(ismember(MultiplierSymbols, {'h'})) = 60*60*1000;
                            Multipliers(ismember(MultiplierSymbols, {'m'})) = 60*1000;
                            Multipliers(ismember(MultiplierSymbols, {'s'})) = 1000;
                            Multipliers(ismember(MultiplierSymbols, {'ms'})) = 1;
                            if any(isnan(Multipliers(:)))
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid pattern entered.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            
                            Numerals = str2double(Numerals);
                            NumericValue = sum(Numerals .* Multipliers);
                            NumericValue = min(NumericValue, 49.7*24*3600*1000);
                            set(ARGS.BlockHandle, 'Value', num2str(NumericValue));
                    end
                    
                    %% CASE PTC_MBDS_DateTimeSource
                case 'PTC_MBDS_DateTimeSource'
                    switch ARGS.ParamVariable
                        case 'InputValue'
                            InputValue = get(ARGS.BlockHandle, 'InputValue');
                            InputValue = regexprep(InputValue, '\s+', '');
                            
                            TS_Epoch_Seconds = datenum('1970-01-01-00:00:00', 'yyyy-mm-dd-HH:MM:SS') * 24 * 3600;
                            TS_End_Seconds = datenum('2105-12-31-23:59:59', 'yyyy-mm-dd-HH:MM:SS') * 24 * 3600;
                            try
                                TS_Input_Seconds = datenum(InputValue, 'yyyy-mm-dd-HH:MM:SS') * 24 * 3600;
                            catch
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid pattern entered.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                            
                            Output = min(TS_Input_Seconds - TS_Epoch_Seconds, TS_End_Seconds - TS_Epoch_Seconds);
                            set(ARGS.BlockHandle, 'Value', num2str(Output));
                            set(ARGS.BlockHandle, 'InputValue', datestr(TS_Input_Seconds/(24*3600), 'yyyy-mm-dd-HH:MM:SS'));
                    end
                    
                    %% CASE PTC_MBDS_CountDown_RE, PTC_MBDS_CounterUpDown_RE, PTC_MBDS_Counter_RE
                case {'PTC_MBDS_CountDown_RE', 'PTC_MBDS_CounterUpDown_RE', 'PTC_MBDS_Counter_RE'}
                    switch ARGS.ParamVariable
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'; 'OutDataTypeStr'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                set(ARGS.BlockHandle, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'; 'OutDataTypeStr'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                            
                        case {'x_Enabled', 'y_Enabled'}
                            if strcmp(get(ARGS.BlockHandle, 'x_Enabled'), 'off') && strcmp(get(ARGS.BlockHandle, 'y_Enabled'), 'off')
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: At least one output port needs to be provided by the block.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, ARGS.ParamVariable, 'on');
                            end
                    end
                    
                    %% CASE PTC_MBDS_TimerRetrigger_RE, PTC_MBDS_Timer_RE
                case {'PTC_MBDS_TimerRetrigger_RE', 'PTC_MBDS_Timer_RE'}
                    switch ARGS.ParamVariable
                        case 'dT_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'dT_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'dT'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'IV_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'IV_Enabled'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'; 'OutDataTypeStr'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                set(ARGS.BlockHandle, 'OutDataTypeStr', 'Inherit: Inherit via back propagation');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV'; 'OutDataTypeStr'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                            
                        case 'R_Enabled'
                            if strcmp(get(ARGS.BlockHandle, 'R_Enabled'), 'off')
                                set(ARGS.BlockHandle, 'IV_Enabled', 'off');
                                %set(ARGS.BlockHandle, 'IV', '0');
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'; 'IV'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            else
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'IV_Enabled'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                                feval(str2func(thisfuncname), 'ParamVariable', 'IV_Enabled');
                            end
                            
                        case {'x_Enabled', 'y_Enabled'}
                            if strcmp(get(ARGS.BlockHandle, 'x_Enabled'), 'off') && strcmp(get(ARGS.BlockHandle, 'y_Enabled'), 'off')
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: At least one output port needs to be provided by the block.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, ARGS.ParamVariable, 'on');
                            end
                    end
                    
                    %% CASE PTC_MBDS_StringConcat
                case 'PTC_MBDS_StringConcat'
                    switch ARGS.ParamVariable
                        case 'StringNumber'
                            pairs = {'MaxStringNumber', 10};
                            ARGS = structcopy(ARGS, parseargs(varargin, pairs));
                            StringNumber = floor(str2double(strtrim(get(ARGS.BlockHandle, 'StringNumber'))));
                            if isnan(StringNumber) || StringNumber < 2 || StringNumber > ARGS.MaxStringNumber
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Invalid number of inputs.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                close_system(ARGS.BlockPath); open_system(ARGS.BlockPath);
                                return;
                            end
                    end
                    
                    %% CASE PTC_MBDS_StringDisplay
                case 'PTC_MBDS_StringDisplay'
                    switch ARGS.ParamVariable
                        case 'MaxRowCount'
                            MaxRowCount = get(ARGS.BlockHandle, 'MaxRowCount');
                            if MaxRowCount < 1
                                waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; 'ERROR: Maximum number of rows cannot be less than 1. Setting to the default value of ''1''.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                set(ARGS.BlockHandle, 'MaxRowCount', '1');
                            end
                    end
                    
                    %% CASE PTC_MBDS_ProbeMarker
                case 'PTC_MBDS_ProbeMarker'
                    pairs = {'ShouldValidateIdentifiers', false};
                    ARGS = structcopy(ARGS, parseargs(varargin, pairs));
                    switch ARGS.ParamVariable
                        case 'MarkerName'
                            MarkerName = get(ARGS.BlockHandle, 'MarkerName');
                            if ARGS.ShouldValidateIdentifiers
                                if ~(isvarname(MarkerName) && length(MarkerName) <= 31) && ~isempty(MarkerName)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['ERROR: The specified Probe-Marker name ''' MarkerName ''' is invalid.']; ''; 'The specified name does not comply to the ANSI-C naming standard. Please specify a valid Force-Marker name with a length less than or equal to 31 characters.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'MarkerName', '');
                                    close_system(ARGS.BlockPath);
                                    open_system(ARGS.BlockPath);
                                end
                            end
                            
                            if ~isfield(PROJECTAPPDATA, genvarname(bdroot(ARGS.BlockPath)))
                                PROJECTAPPDATA(1).(genvarname(bdroot(ARGS.BlockPath))) = struct([]);
                            end
                            ModelAppData = PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath)));
                            if isempty(ModelAppData) || ...
                                    ~isfield_recursive(ModelAppData, 'ProbeMarkerList.Names') || ...
                                    ~isfield_recursive(ModelAppData, 'ProbeMarkerList.Handles') || ...
                                    ~isfield_recursive(ModelAppData, 'ProbeMarkerList.Paths')
                                ModelAppData(1).ProbeMarkerList.Names = cell(0, 1);
                                ModelAppData(1).ProbeMarkerList.Handles = NaN(0, 1);
                                ModelAppData(1).ProbeMarkerList.Paths = cell(0, 1);
                            end
                            [tf, loc] = ismember(ARGS.BlockPath, ModelAppData(1).ProbeMarkerList.Paths);
                            if tf
                                OldMarkerName = ModelAppData(1).ProbeMarkerList.Names{loc};
                                if ~isempty(MarkerName) && ~strcmp(OldMarkerName, MarkerName) && ismember(MarkerName, ModelAppData(1).ProbeMarkerList.Names)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['ERROR: The specified Probe-Marker name ''' MarkerName ''' is already in use. Please choose another.']}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    PERSISTENT.MaskValues(ismember(PERSISTENT.MaskNames, {'MarkerName'})) = {''};
                                    set(ARGS.BlockHandle, 'MaskValues', PERSISTENT.MaskValues);
                                    close_system(ARGS.BlockPath);
                                    open_system(ARGS.BlockPath);
                                    return;
                                end
                            else
                                if ~isempty(MarkerName) && ismember(MarkerName, ModelAppData(1).ProbeMarkerList.Names)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['ERROR: The specified Probe-Marker name ''' MarkerName ''' is already in use. Please choose another.']}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    PERSISTENT.MaskValues(ismember(PERSISTENT.MaskNames, {'MarkerName'})) = {''};
                                    set(ARGS.BlockHandle, 'MaskValues', PERSISTENT.MaskValues);
                                    close_system(ARGS.BlockPath);
                                    open_system(ARGS.BlockPath);
                                    return;
                                end
                            end
                            
                        case 'Disable'
                            if strcmp(get(ARGS.BlockHandle, 'Disable'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MarkerName'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            elseif strcmp(get(ARGS.BlockHandle, 'Disable'), 'on')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MarkerName'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                    end
                    
                    %% CASE PTC_MBDS_ForceMarker
                case 'PTC_MBDS_ForceMarker'
                    pairs = {'ShouldValidateIdentifiers', false};
                    ARGS = structcopy(ARGS, parseargs(varargin, pairs));
                    switch ARGS.ParamVariable
                        case 'MarkerName'
                            MarkerName = get(ARGS.BlockHandle, 'MarkerName');
                            if ARGS.ShouldValidateIdentifiers
                                if ~(isvarname(MarkerName) && length(MarkerName) <= 31) && ~isempty(MarkerName)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['ERROR: The specified Force-Marker name ''' MarkerName ''' is invalid.']; ''; 'The specified name does not comply to the ANSI-C naming standard. Please specify a valid Force-Marker name with a length less than or equal to 31 characters.'}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    set(ARGS.BlockHandle, 'MarkerName', '');
                                    close_system(ARGS.BlockPath);
                                    open_system(ARGS.BlockPath);
                                end
                            end
                            
                            if ~isfield(PROJECTAPPDATA, genvarname(bdroot(ARGS.BlockPath)))
                                PROJECTAPPDATA(1).(genvarname(bdroot(ARGS.BlockPath))) = struct([]);
                            end
                            ModelAppData = PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath)));
                            if isempty(ModelAppData) || ...
                                    ~isfield_recursive(ModelAppData, 'ForceMarkerList.Names') || ...
                                    ~isfield_recursive(ModelAppData, 'ForceMarkerList.Handles') || ...
                                    ~isfield_recursive(ModelAppData, 'ForceMarkerList.Paths')
                                ModelAppData(1).ForceMarkerList.Names = cell(0, 1);
                                ModelAppData(1).ForceMarkerList.Handles = NaN(0, 1);
                                ModelAppData(1).ForceMarkerList.Paths = cell(0, 1);
                            end
                            [tf, loc] = ismember(ARGS.BlockPath, ModelAppData(1).ForceMarkerList.Paths);
                            if tf
                                OldMarkerName = ModelAppData(1).ForceMarkerList.Names{loc};
                                if ~isempty(MarkerName) && ~strcmp(OldMarkerName, MarkerName) && ismember(MarkerName, ModelAppData(1).ForceMarkerList.Names)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['ERROR: The specified Force-Marker name ''' MarkerName ''' is already in use. Please choose another.']}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    PERSISTENT.MaskValues(ismember(PERSISTENT.MaskNames, {'MarkerName'})) = {''};
                                    set(ARGS.BlockHandle, 'MaskValues', PERSISTENT.MaskValues);
                                    close_system(ARGS.BlockPath);
                                    open_system(ARGS.BlockPath);
                                    return;
                                end
                            else
                                if ~isempty(MarkerName) && ismember(MarkerName, ModelAppData(1).ForceMarkerList.Names)
                                    waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['ERROR: The specified Force-Marker name ''' MarkerName ''' is already in use. Please choose another.']}, 'Color', 'red', 'WindowStyle', 'modal'));
                                    PERSISTENT.MaskValues(ismember(PERSISTENT.MaskNames, {'MarkerName'})) = {''};
                                    set(ARGS.BlockHandle, 'MaskValues', PERSISTENT.MaskValues);
                                    close_system(ARGS.BlockPath);
                                    open_system(ARGS.BlockPath);
                                    return;
                                end
                            end
                            
                        case 'Disable'
                            if strcmp(get(ARGS.BlockHandle, 'Disable'), 'off')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MarkerName'; 'Value'; 'FeedThrough'})) = {'on'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            elseif strcmp(get(ARGS.BlockHandle, 'Disable'), 'on')
                                PERSISTENT.MaskEnables(ismember(PERSISTENT.MaskNames, {'MarkerName'; 'Value'; 'FeedThrough'})) = {'off'};
                                set(ARGS.BlockHandle, 'MaskEnables', PERSISTENT.MaskEnables);
                            end
                    end
                    
                otherwise
                    %Do nothing
            end
        end
        
    case 'StartFcn'
        if isprop(ARGS.BlockHandle, 'PTC_BlockType')
            switch get(ARGS.BlockHandle, 'PTC_BlockType')
                case 'PTC_MBDS_StringDisplay'
                    BlockSignature = ['x_' randstring(PTC_MBDS_BlockSignatureLength_Fcn - 2)];
                    setappdata(0, BlockSignature, struct('Object', Simulink.Mask.get(ARGS.BlockPath), ...
                        'Handle', ARGS.BlockHandle, ...
                        'OriginalValue', get_param(ARGS.BlockPath, 'BlockSignature')));
                    set_param(ARGS.BlockPath, 'BlockSignature', BlockSignature);
            end
        end
        
    case 'StopFcn'
        if isprop(ARGS.BlockHandle, 'PTC_BlockType')
            switch get(ARGS.BlockHandle, 'PTC_BlockType')
                case 'PTC_MBDS_StringDisplay'
                    BlockSignature = get(ARGS.BlockHandle, 'BlockSignature');
                    thisBlockInfo = getappdata(0, BlockSignature);
                    rmappdata(0, BlockSignature);
                    set_param(ARGS.BlockPath, 'BlockSignature', thisBlockInfo.OriginalValue);
            end
        end
        
    case 'DeleteFcn'
        if isprop(ARGS.BlockHandle, 'PTC_BlockType')
            switch get(ARGS.BlockHandle, 'PTC_BlockType')
                case 'PTC_MBDS_ForceMarker'
                    if isfield(PROJECTAPPDATA, genvarname(bdroot(ARGS.BlockPath)))
                        ModelAppData = PROJECTAPPDATA(1).(genvarname(bdroot(ARGS.BlockPath)));
                        if isfield_recursive(ModelAppData, 'ForceMarkerList.Names') && ...
                                isfield_recursive(ModelAppData, 'ForceMarkerList.Handles') && ...
                                isfield_recursive(ModelAppData, 'ForceMarkerList.Paths')
                            thisIdx = strcmp(ARGS.BlockPath, ModelAppData(1).ForceMarkerList.Paths);
                            ModelAppData(1).ForceMarkerList.Names(thisIdx, :) = [];
                            ModelAppData(1).ForceMarkerList.Handles(thisIdx, :) = [];
                            ModelAppData(1).ForceMarkerList.Paths(thisIdx, :) = [];
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        end
                    end
                    
                case 'PTC_MBDS_ProbeMarker'
                    if isfield(PROJECTAPPDATA, genvarname(bdroot(ARGS.BlockPath)))
                        ModelAppData = PROJECTAPPDATA(1).(genvarname(bdroot(ARGS.BlockPath)));
                        if isfield_recursive(ModelAppData, 'ProbeMarkerList.Names') && ...
                                isfield_recursive(ModelAppData, 'ProbeMarkerList.Handles') && ...
                                isfield_recursive(ModelAppData, 'ProbeMarkerList.Paths')
                            thisIdx = strcmp(ARGS.BlockPath, ModelAppData(1).ProbeMarkerList.Paths);
                            ModelAppData(1).ProbeMarkerList.Names(thisIdx, :) = [];
                            ModelAppData(1).ProbeMarkerList.Handles(thisIdx, :) = [];
                            ModelAppData(1).ProbeMarkerList.Paths(thisIdx, :) = [];
                            PROJECTAPPDATA.(genvarname(bdroot(ARGS.BlockPath))) = ModelAppData;
                            setappdata(0, PROJECTKEY, PROJECTAPPDATA);
                        end
                    end
            end
        end
        
    case 'CopyFcn'
        if isprop(ARGS.BlockHandle, 'PTC_BlockType')
            switch get(ARGS.BlockHandle, 'PTC_BlockType')
                case 'PTC_MBDS_ForceMarker'
                    set(ARGS.BlockHandle, 'MarkerName', '');
                    
                case 'PTC_MBDS_ProbeMarker'
                    set(ARGS.BlockHandle, 'MarkerName', '');
                    
                case {'PTC_MBDS_RealTimeSynchronization', 'PTC_MBDS_RealTimeSynchronization_TimeFactor'}
                    if ~strcmp(bdroot(ARGS.BlockPath), get(ARGS.BlockHandle, 'Path'))
                        waitfor(msgbox_editable('MessageString', {ARGS.BlockPath; ''; ['ERROR: The location ' get(ARGS.BlockHandle, 'Path') ' is invalid for block ' get(ARGS.BlockHandle, 'Name') '. This block may be placed only in the top level of the model.']}, ...
                            'WindowStyle', 'modal', 'Color', 'red'));
                        
                        TimerObj = timer('ExecutionMode', 'singleShot', ...
                            'Name', ['Delete_' get(ARGS.BlockHandle, 'PTC_BlockType')], ...
                            'StartDelay', 0.1, ...
                            'TimerFcn', {str2func('Timer_Callback'), 'action', 'delete_block', 'BlockPath', ARGS.BlockPath});
                        start(TimerObj);
                    end
            end
        end
        
    case 'UndoDeleteFcn'
        if isprop(ARGS.BlockHandle, 'PTC_BlockType')
            switch get(ARGS.BlockHandle, 'PTC_BlockType')
                case 'PTC_MBDS_ForceMarker'
                    feval(str2func(thisfuncname), 'action', 'init');
                    
                case 'PTC_MBDS_ProbeMarker'
                    feval(str2func(thisfuncname), 'action', 'init');
            end
        end
end

end

function Timer_Callback(varargin)

persistent PERSISTENT;

if length(varargin) >= 2 && isscalar(varargin{1}) && (ishghandle(varargin{1}) || isa(varargin{1}, 'timer'))
    %This call has come from a Callback, with the source handle and
    %event data fields as the first two arguments. These can be ignored.
    PERSISTENT.SRC_HANDLE = varargin{1};
    PERSISTENT.EVENT_DATA = varargin{2};
    varargin = varargin(3:end);
else
    PERSISTENT.SRC_HANDLE = [];
    PERSISTENT.EVENT_DATA = struct([]);
end

pairs = {'action', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

switch ARGS.action
    case 'delete_block'
        pairs = {'BlockPath', ''};
        ARGS = ptc_matlab_lib.structcopy(ARGS, ptc_matlab_lib.parseargs(varargin, pairs));
        close_system(ARGS.BlockPath);
        delete_block(ARGS.BlockPath);
end

end

function varargout = compute_mldt(varargin)

import('ptc_matlab_lib.*');
pairs = {'DataType', ''};
ARGS = parseargs(varargin, pairs);

dt = regexprep(ARGS.DataType, '^(e|E)num:\s+', '');
maxdtval = getmaxdtval(dt);
mindtval = getmindtval(dt);
if isIntEnumType(dt)
    if maxdtval <= intmax('uint8') && mindtval >= intmin('uint8')
        mldt = 'uint8';
    elseif maxdtval <= intmax('int8') && mindtval >= intmin('int8')
        mldt = 'int8';
    elseif maxdtval <= intmax('uint16') && mindtval >= intmin('uint16')
        mldt = 'uint16';
    elseif maxdtval <= intmax('int16') && mindtval >= intmin('int16')
        mldt = 'int16';
    elseif maxdtval <= intmax('uint32') && mindtval >= intmin('uint32')
        mldt = 'uint32';
    elseif maxdtval <= intmax('int32') && mindtval >= intmin('int32')
        mldt = 'int32';
    elseif maxdtval <= intmax('uint64') && mindtval >= intmin('uint64')
        mldt = 'uint64';
    elseif maxdtval <= intmax('int64') && mindtval >= intmin('int64')
        mldt = 'int64';
    else
        error([mfilename ':' thisfuncname ':InvalidDataType'], 'Invalid data type');
    end
elseif strcmp(dt, 'auto')
    mldt = 'double';
else
    mldt = dt;
end
if strcmp(mldt, 'boolean')
    mldt_cast = 'logical';
else
    mldt_cast = mldt;
end

varargout = {mldt; mldt_cast};

end