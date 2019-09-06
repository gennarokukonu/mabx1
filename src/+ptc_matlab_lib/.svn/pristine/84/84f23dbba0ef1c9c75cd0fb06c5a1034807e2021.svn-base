function autogen_model_list(varargin)
%AUTOGEN_MODEL_LIST: This function extracts all parameters for Constant
%blocks, Gain blocks, Lookup blocks, Lookup2D blocks, and Override blocks,
%and all named signals, and saves them as a 'data dictionary' in MAT files.
%
%   This function can take a significant amount of time (of the order of 5
%   minutes), which depends on the size of the model, and other factors
%   (such as the presence of duplicated signal names in buses).
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   While using this function, the following points need to be kept in
%   mind:
%
%   1. Do not use non-virtual buses.
%
%   2. Tunable parameters should not reside inside masked subsystems with
%   their own local workspaces. Such parameters should be specified in the
%   dialog boxes for such masked subsystems.
%
%   3. Bus signals will not be linked to Simulink.Signal objects. Only
%   scalar, vector, and matrix lines will.
%
%   4. Make sure that the model can be compiled and built before running
%   this script. Also, keep in mind that this script will make irreversible
%   changes to the model. Make a backup before running this script.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   In order to use autogen_model_list, go through the following steps:
%   1. From the command line, run "feature('EngineInterface', true)"
%   (without double quotes). This command enables the Simulink engine
%   interface, which is needed by this function. The command has to be
%   executed from the command line, and as of R2010bSP1, does not work when
%   called from a script or a function M file.
%
%   2. Navigate to the model directory, and open the model that has to be
%   prepared for the HIL (or use the necessary launch script). Open the
%   subsystem that you wish to generate the data dictionary for. Make sure
%   that the current working directory is the same as the model directory.
%
%   3. Run autogen_model_list. This function performs the following
%   operations:
%       3.1 Model compilation: The function first compiles the model.
%
%       3.2 Check for duplicate signal names entering bus creators and
%       muxes. Duplicate signal names can cause significant reductions in
%       speed.
%
%       3.3 Extraction of signal handles: The function extracts the handles
%       of all signals, along with their source port handles. This step is
%       necessary because multiple signals may have the same source, and
%       these should have the same signal name in subsequent steps if they
%       refer to the same signal. If not, the script should create a buffer
%       to essentially create a new signal, using a signal conversion
%       block.
%
%       3.4 Extraction of blocks for which the data dictionary is to be
%       created. For example, these could be Constant blocks, Gain blocks,
%       Lookup blocks, Lookup2D blocks, and Override blocks. The data types
%       for the parameters are extracted in the same step.
%
%       3.5 Model termination: Companion to the model compilation step.
%
%       3.6 Creation of signal list: In this step, all NAMED signals only
%       will be collected, their names conditioned to meet naming
%       requirements, and saved in the file ['autogen_' bdroot(Sys)
%       '_signallist.mat'] as Simulink.Signal objects.
%
%       3.7 Creation of parameter list: For this step, first all
%       selected block types are identified (e.g. Constant, Gain, Lookup,
%       Lookup2D, and Override), and their parameters are collected and
%       saved in the file ['autogen_' bdroot(Sys) '_parameterlist.mat'] as
%       Simulink.Parameter objects.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   POINTS TO NOTE:
%
%   1. The function will NEVER make any changes to linked library blocks.
%   2. The function will NEVER make any changes to masked subsystems with
%   their own local workspace.
%   3. Aftter running, the function will do a sanity check, to ensure that
%   there are no duplicated parameter names specified within the model.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   SYNTAX:
%   autogen_model_list(<Property>, <Value>, ...)
%
%   'Sys', <bdroot(gcs)>: Specify the base system for which the data
%   dictionaries are to be created. By default, this would be the whole
%   model.
%
%   'ShouldCreateParameterList', <true>: Specify whether parameters should
%   be extracted or not.
%
%   'ShouldCreateSignalList', <true>: Specify whether signals should be
%   extracted or not.
%
%   'ParameterListBlockTypes', <{'Constant', 'Gain', 'Lookup',
%   'Lookup2D'}>: Specify which block types are to be accessed for
%   parameter extraction. This step applies only to built in blocks (or
%   blocks where the block type is stored in the 'BlockType' property. Only
%   supported blocktypes may be entered.
%
%   'PTC_BlockTypes', <{'Override'}>: Specify which block types with the
%   property 'PTC_BlockType' are to be accessed for parameter extraction.
%   Only supported blocktypes may be entered.
%
%   'PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST', <{'Override', 'Decode_DM1'}>:
%   Specify which PTC blocks are to be ignored during parameter and signal
%   extraction.
%
%   'SkipParameterExtractionIdentifier',
%   <getenv_matlab('ENV_VAR_SKIP_PARAMETER_EXTRACTION_IDENTIFIER')>: String
%   which flags a block (or subsystem) to be excluded from the parameter
%   extraction process.
%
%   'SkipSignalExtractionIdentifier',
%   <getenv_matlab('ENV_VAR_SKIP_SIGNAL_EXTRACTION_IDENTIFIER')>: String
%   which flags a block (or subsystem) to be excluded from the signal
%   extraction process.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   Contact: Sundeep Tuteja (sundeep.tuteja@paccar.com)

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs), ...
    'ShouldCreateParameterList', true, ...
    'OverwriteParameterList', false, ...
    'ShouldCreateSignalList', true, ...
    'OverwriteSignalList', false, ...
    'ParameterListBlockTypes', {'Constant', 'Gain', 'Lookup', 'Lookup2D'}, ...
    'PTC_BlockType', {'Override'}, ...
    'PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST', {'Override', 'Decode_DM1'}, ...
    'SkipParameterExtractionIdentifier', getenv_matlab('ENV_VAR_SKIP_PARAMETER_EXTRACTION_IDENTIFIER'), ...
    'SkipSignalExtractionIdentifier', getenv_matlab('ENV_VAR_SKIP_SIGNAL_EXTRACTION_IDENTIFIER')};
parseargs(varargin, pairs);

%Start timer
tic;

%1. Compile model
waitbar_hndl = waitbar(0, ['Compiling ' formatstr(bdroot(Sys), 'FormatUnderscores', true) '...'], 'Pointer', 'watch');
alwaysontop(waitbar_hndl, true); drawnow;
feval(bdroot(Sys), [], [], [], 'compile');
waitbar(1, waitbar_hndl);
delete(waitbar_hndl);

%2. Check for duplicate signal names of signals entering bus creator and
%mux blocks. This check has to be performed on the whole model.
blocklist = find_system(bdroot(Sys), ...
    'LoadFullyIfNeeded', 'on', ...
    'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', ...
    'RegExp', 'on', ...
    'BlockType', ['(\<' strimplode({'BusCreator', 'Mux'}, '\>)|(\<') '\>)']);
InputSignalNames = get_param(blocklist, 'InputSignalNames');
InputSignalNames = cellfun(@(X) X(~cellfun(@isempty, X)), InputSignalNames(:), 'UniformOutput', false);
duplicate_indices = cellfun(@(X) ~isequal(unique(X(:)), sort(X(:))), InputSignalNames(:));
duplicate_blocks = blocklist(duplicate_indices);
if ~isempty(duplicate_blocks)
    feval(bdroot(Sys), [], [], [], 'term');
    waitfor(msgbox_editable('MessageString', [{'The following blocks have duplicate signal names entering them. Please make all signal names of signals entering bus creator and mux blocks unique.'}; ...
        {''};
        duplicate_blocks(:)], ...
        'Color', 'red'));
    cellfun(@hilite_system, duplicate_blocks);
    return;
end
clear('blocklist', 'InputSignalNames', 'duplicate_indices', 'duplicate_blocks');
        

try
    %3. Extract all signals
    [signal_handle_list, source_port_list, ALL_BUS_HANDLES] = find_all_signals('Sys', Sys, ...
        'SkipSignalExtractionIdentifier', SkipSignalExtractionIdentifier, ...
        'PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST', PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST);
    
    %4. Extract all data types
    [BlockList, DataTypeList] = get_outport_data_types('Sys', Sys, ...
        'BlockType', ParameterListBlockTypes, ...
        'PTC_BlockType', PTC_BlockType, ...
        'SkipParameterExtractionIdentifier', SkipParameterExtractionIdentifier, ...
        'PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST', PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST);
    
    %5. Terminate model
    feval(bdroot(Sys), [], [], [], 'term');
catch ME
    feval(bdroot(Sys), [], [], [], 'term');
    rethrow(ME);
end

ModelDirectory = fileparts(get_param(bdroot(Sys), 'FileName'));

if ShouldCreateSignalList
    %6. Create model signal list
    %This is a long step
    OutputFilePath = fullfile(ModelDirectory, ['autogen_' bdroot(Sys) '_signallist.mat']);
    create_hil_signallist('Sys', Sys, ...
        'SignalHandleList', signal_handle_list, ...
        'SourcePortList', source_port_list, ...
        'OutputFilePath', OutputFilePath, ...
        'OverwriteSignalList', OverwriteSignalList, ...
        'ALL_BUS_HANDLES', ALL_BUS_HANDLES);
    evalin('base', ['load(''' OutputFilePath ''')']);
end

if ShouldCreateParameterList
    %7. Create model parameter list
    OutputFilePath = fullfile(ModelDirectory, ['autogen_' bdroot(Sys) '_parameterlist.mat']);
    create_hil_parameterlist('Sys', Sys, ...
        'BlockList', BlockList, ...
        'DataTypeList', DataTypeList, ...
        'OutputFilePath', OutputFilePath, ...
        'OverwriteParameterList', OverwriteParameterList);
    evalin('base', ['load(''' OutputFilePath ''')']);
end

%Add PostCodeGenCommand: update_trc_groups
set_param(bdroot(Sys), 'PostCodeGenCommand', 'ptc_matlab_lib.update_trc_groups');

%Set the Inline Parameters option
set_param(bdroot(Sys), 'InlineParams', 'on');

%Set the MUX blocks used to create bus signals option to 'ErrorLevel1'
set_param(bdroot(Sys), 'StrictBusMsg', 'ErrorLevel1');

fprintf([repmat('*', 1, 80) '\n']);
fprintf([isodatetime ' - ' mfilename ' - Completed operation; took ' num2str(toc) ' seconds.\n']);
fprintf([repmat('*', 1, 80) '\n']);

end

%% FUNCTION find_all_signals %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function varargout = find_all_signals(varargin)

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs), ...
    'PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST', {}, ...
    'SkipSignalExtractionIdentifier', ''};
parseargs(varargin, pairs);
SkipSignalExtractionIdentifier = strtrim(SkipSignalExtractionIdentifier);

varargout = cell(1, 2);

handle_list = unique(find_system(Sys, ...
    'LoadFullyIfNeeded', 'on', ...
    'LookUnderMasks', 'graphical', ...
    'RegExp', 'on', ...
    'FollowLinks', 'off', ...
    'FindAll', 'on', ...
    'Type', 'line', ...
    'Name', '^[^<]'));
HandleNameList = cellstr(get(handle_list, 'Name'));
HandleNameList = strtrim(HandleNameList);
handle_list(cellfun(@isempty, HandleNameList)) = [];

%We wish to exclude buses...
complete_port_list = unique(find_system(Sys, ...
    'LoadFullyIfNeeded', 'on', ...
    'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', ...
    'FindAll', 'on', ...
    'Type', 'port'));
bus_types = get(complete_port_list, 'CompiledBusType');
bus_handles = cell2mat(get(complete_port_list, 'Line'));
bus_handles(strcmp('NOT_BUS', cellstr(bus_types))) = [];
handle_list = setdiff(handle_list, bus_handles);

%Exclude signal handles whose parent block is a linked library block.
%Note that the 'ReferenceBlock' property works for resolved links, but not
%for unresolved links. For unresolved links, we need to use the
%AncestorBlock property instead (which in turn, does not work for resolved
%links). This just complicates things.
library_list = arrayfun(@ptc_matlab_lib.get_parent_library_name, handle_list, 'UniformOutput', false);
exclusion_indices = cellfun(@(X) ~isempty(X), library_list);
handle_list(exclusion_indices) = [];

%We would also like to exclude those blocks which are a part of
%PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST
if ~isempty(PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST)
    exclusion_indices = [];
    for ctr = 1:length(handle_list)
        thisParentList = get_parent_list(handle_list(ctr));
        thisParentList(~cellfun(@(X) ptc_matlab_lib.has_param(X, 'PTC_BlockType'), thisParentList)) = [];
        ptc_blocktype_thisParentList = get_param(thisParentList, 'PTC_BlockType');
        if any(ismember(ptc_blocktype_thisParentList, PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST))
            exclusion_indices(end+1, 1) = ctr; %#ok<AGROW>
        end
    end
    handle_list(exclusion_indices) = [];
end

%Exclude signal handles whose parent blocks include stateflow blocks
exclusion_indices = [];
for ctr = 1:length(handle_list)
    thisParentList = get_parent_list(handle_list(ctr));
    MaskTypeList = cellstr(get_param(thisParentList, 'MaskType'));
    if any(strcmp('Stateflow', MaskTypeList))
        exclusion_indices(end+1, 1) = ctr; %#ok<AGROW>
    end
end
handle_list(exclusion_indices) = [];

%Exclude signal handles whose parent blocks have been flagged to be ignored
%by the signal extraction process.
if ~isempty(SkipSignalExtractionIdentifier)
    exclusion_indices = [];
    for ctr = 1:length(handle_list)
        thisParentList = get_parent_list(handle_list(ctr));
        thisAttributesFormatStringList = cellfun(@(X) get_param(X, 'AttributesFormatString'), thisParentList, 'UniformOutput', false);
        x = strfind(thisAttributesFormatStringList, SkipSignalExtractionIdentifier);
        if any(~cellfun(@isempty, x))
            exclusion_indices(end+1, 1) = ctr; %#ok<AGROW>
        end
    end
    handle_list(exclusion_indices) = [];
end

%Give every signal that is an output of an override block the same name as
%the override block, and add the list of line handles to handle_list
override_block_list = find_system(Sys, ...
    'LoadFullyIfNeeded', 'on', ...
    'LookUnderMasks', 'graphical', ...
    'FollowLinks', 'off', ...
    'FindAll', 'on', ...
    'PTC_BlockType', 'Override');
if ~isempty(override_block_list)
    PortHandles = get(override_block_list, 'PortHandles');
    if ~iscell(PortHandles)
        PortHandles = {PortHandles};
    end
    OutportHandles = cellfun(@(X) X.Outport(1), PortHandles);
    LineHandles = cell2mat(columnvec(get(OutportHandles, 'Line')));
    if ~isempty(LineHandles)
        Name_List = get(override_block_list, 'Name');
        Name_List = regexprep(Name_List, '^s_', '');
        Name_List = regexprep(Name_List, '^ov_', '');
        Name_List = cellfun(@(X) ptc_matlab_lib.genvarname_custom(['s_ov_' X]), Name_List, 'UniformOutput', false);
        set(LineHandles(:), {'SignalNameFromLabel'}, Name_List(:));
        
        %Add the list of LineHandles to SignalHandleList
        handle_list = union(handle_list(:), LineHandles(:));
    end
end

%We need to identify those port handles that really have the same
%source. To do this we need to identify the actual source ports of each
%line, and that, in turn, requires the use of the Simulink Engine
%Interface. This is an undocumented feature, but has existed for a long
%time. Note that a signal may have multiple destination port handles, but
%can have only one source port handle
DstPortHandles = get(handle_list, 'DstPortHandle');
DstPortHandles = cellfun(@(X) X(1), DstPortHandles);
SrcPortHandles = get(handle_list, 'SrcPortHandle');
SrcPortHandles = cellfun(@(X) X(1), SrcPortHandles);

%Remove handles for unconnected lines
logical_indices = (DstPortHandles == -1) | (SrcPortHandles == -1);
DstPortHandles(logical_indices) = [];
SrcPortHandles(logical_indices) = [];
handle_list(logical_indices) = [];

uddobject_list = get(DstPortHandles, 'UDDObject');
sourceport_list = NaN(length(uddobject_list), 1);
for ctr = 1:length(uddobject_list)
    thisActualSrc = uddobject_list{ctr}.getActualSrc;
    sourceport_list(ctr) = thisActualSrc(1);
end
sourceport_list(isnan(sourceport_list)) = [];

assert(isequal(length(handle_list), length(sourceport_list)));

varargout{1} = handle_list;
varargout{2} = sourceport_list;
varargout{3} = bus_handles;

end

%% FUNCTION get_outport_data_types %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function varargout = get_outport_data_types(varargin)

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs), ...
    'BlockType', {'Constant', 'Gain', 'Lookup', 'Lookup2D'}, ...
    'PTC_BlockType', {'Override'}, ...
    'SkipParameterExtractionIdentifier', '', ...
    'PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST', {}};
parseargs(varargin, pairs);
SkipParameterExtractionIdentifier = strtrim(SkipParameterExtractionIdentifier);

varargout = cell(1, 2);

%Once the model is compiled, we need to obtain port data types.
block_list = find_system(Sys, ...
    'LoadFullyIfNeeded', 'on', ...
    'LookUnderMasks', 'graphical', ...
    'RegExp', 'on', ...
    'FollowLinks', 'off', ...
    'FindAll', 'off', ...
    'BlockType', ['(\<' strimplode(BlockType, '\>)|(\<') '\>)']);
block_list = union(block_list(:), ...
    find_system(Sys, ...
    'LoadFullyIfNeeded', 'on', ...
    'LookUnderMasks', 'graphical', ...
    'RegExp', 'on', ...
    'FollowLinks', 'off', ...
    'FindAll', 'off', ...
    'PTC_BlockType', ['(\<' strimplode(PTC_BlockType, '\>)|(\<') '\>)']));
block_list(strcmp('', block_list)) = [];

%Eliminate blocks that have been flagged to be ignored
if ~isempty(SkipParameterExtractionIdentifier)
    block_list_diff = find_system(Sys, ...
        'LoadFullyIfNeeded', 'on', ...
        'LookUnderMasks', 'all', ...
        'RegExp', 'on', ...
        'FollowLinks', 'on', ...
        'FindAll', 'off', ...
        'AttributesFormatString', SkipParameterExtractionIdentifier);
    block_list = setdiff(block_list, block_list_diff);
    clear('block_list_diff');
    
    %Eliminate blocks that reside inside subsystems that have been flagged to
    %be ignored
    exclusion_indices = [];
    for ctr = 1:length(block_list)
        thisParentList = get_parent_list(block_list{ctr});
        thisAttributesFormatStringList = get_param(thisParentList, 'AttributesFormatString');
        x = strfind(thisAttributesFormatStringList, SkipParameterExtractionIdentifier);
        if any(~cellfun(@isempty, x))
            exclusion_indices(end+1, 1) = ctr; %#ok<AGROW>
        end
    end
    block_list(exclusion_indices) = [];
end

%We would also like to exclude those blocks which are a part of
%PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST
if ~isempty(PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST)
    exclusion_indices = [];
    for ctr = 1:length(block_list)
        thisParentList = get_parent_list(block_list{ctr});
        thisParentList(~cellfun(@(X) ptc_matlab_lib.has_param(X, 'PTC_BlockType'), thisParentList)) = [];
        ptc_blocktype_thisParentList = get_param(thisParentList, 'PTC_BlockType');
        if any(ismember(ptc_blocktype_thisParentList, PARENT_PTC_BLOCKTYPE_EXCLUSION_LIST))
            exclusion_indices(end+1, 1) = ctr; %#ok<AGROW>
        end
    end
    block_list(exclusion_indices) = [];
end

DataTypeList = cell(length(block_list), 1);
for ctr = 1:length(block_list)
    porthndl = get_param(block_list{ctr}, 'PortHandles');
    thisDataType = get(porthndl.Outport(1), 'CompiledPortDataType');
    if isempty(thisDataType) || ...
            ~strcmp(get_param(block_list{ctr}, 'BlockType'), 'Constant')
        thisDataType = 'double';
    elseif isempty(ver('fixpoint')) && any(strfind(thisDataType, 'fix'))
        thisDataType = containerdatatype(thisDataType);
    end
    DataTypeList{ctr, 1} = thisDataType;
end

varargout{1} = block_list;
varargout{2} = DataTypeList;

end

%% FUNCTION create_hil_parameterlist %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function create_hil_parameterlist(varargin)

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs), ...
    'BlockList', {}, ...
    'DataTypeList', {}, ...
    'OverwriteParameterList', false, ...
    'OutputFilePath', ''};
parseargs(varargin, pairs);

if isempty(OutputFilePath) %#ok<NODEF>
    [filename, pathname] = uiputfile('*.mat', 'Save Parameter List');
    if isequal(filename, 0) || isequal(pathname, 0)
        return;
    else
        OutputFilePath = fullfile(pathname, filename);
    end
end

parameter_list = struct([]);

waitbar_hndl = waitbar(0, ['0 of ' num2str(length(BlockList)) ' completed'], 'Name', 'Creating Parameter List', 'Pointer', 'watch'); %#ok<NODEF>
alwaysontop(waitbar_hndl, true);
drawnow;
for ctr = 1:length(BlockList)
    if has_param(BlockList{ctr}, 'PTC_BlockType')
        thisBlockType = get_param(BlockList{ctr}, 'PTC_BlockType');
    else
        thisBlockType = get_param(BlockList{ctr}, 'BlockType');
    end
    
    switch thisBlockType
        case 'Constant'
            
            %%%%%%%%%%%%%%% CONSTANT BLOCKS %%%%%%%%%%%%%%%
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'Value', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', (ctr == 1)); %#ok<USENS>
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
            
        case 'Gain'
            
            %%%%%%%%%%%%%%% GAIN BLOCKS %%%%%%%%%%%%%%%
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'Gain', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', (ctr == 1));
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
            
        case 'Lookup'
            
            %%%%%%%%%%%%%%% LOOKUP BLOCKS %%%%%%%%%%%%%%%
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'InputValues', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', (ctr == 1));
            BlockList = strrep(BlockList, BlockList{ctr}, updated_BlockPath);
            
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'Table', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', false);
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
            
        case 'Lookup2D'
            
            %%%%%%%%%%%%%%% LOOKUP2D BLOCKS %%%%%%%%%%%%%%%
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'RowIndex', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', (ctr == 1));
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
            
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'ColumnIndex', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', false);
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
            
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'Table', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', false);
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
            
        case 'Override'
            
            %%%%%%%%%%%%%%% OVERRIDE BLOCKS %%%%%%%%%%%%%%%
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'ShouldOverride', ...
                'ParamDataType', 'fixdt(''boolean'')', ...
                'ShouldInit', (ctr == 1));
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
            
            [parameter_list, updated_BlockPath] = update_parameter_list('parameter_list', parameter_list, ...
                'BlockPath', BlockList{ctr}, ...
                'ParamValueStr', 'OverrideValue', ...
                'ParamDataType', ['fixdt(''' DataTypeList{ctr} ''')'], ...
                'ShouldInit', false);
            BlockList = strrep(BlockList, [BlockList{ctr} '/'], [updated_BlockPath '/']);
            BlockList{ctr} = updated_BlockPath;
    end
    
    waitbar(ctr/length(BlockList), waitbar_hndl, [num2str(ctr) ' of ' num2str(length(BlockList)) ' completed']);
end
delete(waitbar_hndl);

%Before saving, make sure that any parameters already present in
%OutputFilePath that are being used in the model are not eliminated. If
%they are, add them to parameter_list.
if exist(OutputFilePath, 'file')
    old_parameter_list = load(OutputFilePath);
    missing_parameters = setdiff(fieldnames(old_parameter_list), fieldnames(parameter_list));
    system_list = cellfun(@(X) find_system(bdroot(Sys), ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'BlockDialogParams', X), missing_parameters, 'UniformOutput', false);
    missing_parameters(cellfun(@isempty, system_list)) = [];
    if ~isempty(missing_parameters)
        missing_parameter_vals = cellfun(@(X) old_parameter_list.(X), missing_parameters, 'UniformOutput', false);
        append_struct = cell2struct(missing_parameter_vals(:), missing_parameters(:), 1);
        parameter_list = copyfields(append_struct, parameter_list);
    end
end

parameter_list = orderfields(parameter_list);
if isempty(parameter_list)
    %We need to create a 0X1 struct array with no fields
    parameter_list = struct('f1', 'val1');
    parameter_list = rmfield(parameter_list, 'f1'); %#ok<NASGU>
end
if OverwriteParameterList || ~exist(OutputFilePath, 'file')
    save(OutputFilePath, '-struct', 'parameter_list', '-v7.3');
else
    save(OutputFilePath, '-struct', 'parameter_list', '-v7.3', '-append');
end

if exist(OutputFilePath, 'file')
    fprintf([isodatetime ' - ' mfilename ' - Created file ' formatstr(OutputFilePath, 'FormatBackslashes', true) '\n']);
end

end

%% FUNCTION update_parameter_list %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function varargout = update_parameter_list(varargin)

import('ptc_matlab_lib.*');

persistent ParamNameList;

varargout = cell(1, 2);

pairs = {'parameter_list', struct([]), ...
    'BlockPath', '', ...
    'ParamValueStr', '', ...
    'ShouldInit', false, ...
    'MaxIdentifierLength', 31};
parseargs(varargin, pairs);

ParamValue_preeval = strtrim(get_param(BlockPath, ParamValueStr)); %#ok<NODEF>
thisval = evalin('base', ParamValue_preeval);

if isa(thisval, 'Simulink.Parameter')
    thisdt = thisval.DataType;
    thismax = thisval.Max;
    thismin = thisval.Min;
    theseunits = thisval.DocUnits;
    thisstorageclass = thisval.RTWInfo.StorageClass;
    thisval = double(thisval.Value);
else
    if islogical(thisval)
        thisdt = 'boolean';
    else
        thisdt = class(thisval);
    end
    thismax = getmaxdtval(thisdt);
    thismin = getmindtval(thisdt);
    theseunits = '';
    thisstorageclass = 'ExportedGlobal';
    thisval = double(thisval);
end
if strcmp(thisdt, 'auto')
    thisdt = 'double';
end

pairs = {'ParamValue', thisval, ...
    'ParamDataType', thisdt, ...
    'ParamMin', thismin, ...
    'ParamMax', thismax, ...
    'ParamDocUnits', theseunits, ...
    'ParamStorageClass', thisstorageclass};
parseargs(varargin, pairs);

if any(isnan(ParamValue)) %#ok<NODEF>
    error([mfilename ':' thisfuncname ':FoundNaN'], 'Parameter contains NaNs. NaNs are not permitted.');
end
ParamMin = limit('InMatrix', ParamMin, 'LowerLimit', getmindtval(ParamDataType), 'UpperLimit', getmaxdtval(ParamDataType)); %#ok<NODEF>
ParamMax = limit('InMatrix', ParamMax, 'LowerLimit', getmindtval(ParamDataType), 'UpperLimit', getmaxdtval(ParamDataType)); %#ok<NODEF>
if isreal(ParamValue)
    ParamValue = limit('InMatrix', ParamValue, 'LowerLimit', ParamMin, 'UpperLimit', ParamMax);
else
    ParamValue = limit('InMatrix', ParamValue, 'LowerLimit', complex(ParamMin, ParamMin), 'UpperLimit', complex(ParamMax, ParamMax));
end

if ShouldInit
    %Get list of Simulink.Parameter objects in the base workspace
    full_var_list = evalin('base', 'whos');
    classlist = arrayfun(@(x) x.class, full_var_list, 'UniformOutput', false);
    ParamNameList = full_var_list(strcmp('Simulink.Parameter', classlist));
    ParamNameList = arrayfun(@(x) x.name, ParamNameList, 'UniformOutput', false);
end

%Compute ParamName
OutputSignalNames = cellstr(get_param(BlockPath, 'OutputSignalNames'));
OutputSignalNames(cellfun(@isempty, OutputSignalNames)) = [];
ParamValue_preeval_split = strexplode(ParamValue_preeval, '.');
if isvarname(ParamValue_preeval_split{1}) && existvar('Location', 'base', 'Vars', ParamValue_preeval_split{1}) && ...
        isa(evalin('base', ParamValue_preeval_split{1}), 'Simulink.Parameter') && ...
        ~isempty(regexp(ParamValue_preeval_split{1}, '^p_', 'once')) && ...
        length(ParamValue_preeval_split{1}) <= MaxIdentifierLength
    ParamName = genvarname_custom(ParamValue_preeval);
elseif ~isempty(OutputSignalNames) && strcmp(get_param(BlockPath, 'BlockType'), 'Constant')
    OutputSignalNames{1} = regexprep(OutputSignalNames{1}, '_s$', '');
    OutputSignalNames{1} = regexprep(OutputSignalNames{1}, '^s_', '');
    ParamName = genvarname_custom(OutputSignalNames{1});
elseif isvarname(ParamValue_preeval_split{1}) && existvar('Location', 'base', 'Vars', ParamValue_preeval_split{1})
    ParamName = genvarname_custom(ParamValue_preeval);
else
    thisBlockName = get_param(BlockPath, 'Name');
    ParamName = genvarname_custom(thisBlockName);
end

%Condition ParamName
if has_param(BlockPath, 'PTC_BlockType')
    if strcmp(get_param(BlockPath, 'PTC_BlockType'), 'Override')
        ParamName = regexprep(ParamName, '^p_', '');
        ParamName = regexprep(ParamName, '^ov_', '');
        ParamName = regexprep(ParamName, '^ovval_', '');
        switch ParamValueStr
            case 'ShouldOverride'
                ParamName = ['ov_' ParamName];
            case 'OverrideValue'
                ParamName = ['ovval_' ParamName];
        end
    end
end

if isempty(regexp(ParamName, '^p_', 'once'))
    ParamName = ['p_' ParamName];
end

if existvar('Location', 'base', 'Vars', ParamName) && ...
        isa(evalin('base', ParamName), 'Simulink.Parameter') && ...
        ~isempty(regexp(ParamName, '^p_', 'once')) && ...
        length(ParamName) <= MaxIdentifierLength && ...
        strcmp(ParamValue_preeval_split{1}, ParamName)
    newvar = false;
else
    newvar = true;
end

if newvar
    %It is a new variable
    %Step to address the limitation of a maximum identifier length
    ParamName = ParamName(1:min(MaxIdentifierLength, length(ParamName)));
    counter = 1;
    origParamName = ParamName;
    existing_paths = cellstr(find_system(get_param(BlockPath, 'Parent'), ...
        'SearchDepth', 1, ...
        'FollowLinks', 'off', ...
        'LookUnderMasks', 'graphical', ...
        'Name', regexprep(ParamName, '^p_', '')));
    num_existing = length(existing_paths);
    BlockParent = get_param(BlockPath, 'Parent');
    while ismember(ParamName, ParamNameList) || ...
            (num_existing == 1 && strcmp(existing_paths{1}, [BlockParent '/' regexprep(ParamName, '^p_', '')]) && ...
            ~strcmp(BlockPath, existing_paths{1}))
        addendum = ['_' num2str(counter)];
        
        ParamName = origParamName;
        ParamName(MaxIdentifierLength - length(addendum) + 1:MaxIdentifierLength) = addendum;
        ParamName(ParamName == 0) = '';
        ParamName = genvarname_custom(ParamName);
        
        existing_paths = cellstr(find_system(get_param(BlockPath, 'Parent'), ...
            'SearchDepth', 1, ...
            'FollowLinks', 'on', ...
            'LookUnderMasks', 'all', ...
            'Name', regexprep(ParamName, '^p_', '')));
        num_existing = length(existing_paths);
        
        counter = counter + 1;
    end
    ParamNameList{end+1, 1} = ParamName;
end

%Set the block name to be the same as the parameter name if we're referring
%to Constant blocks
if strcmp(get_param(BlockPath, 'BlockType'), 'Constant')
    BlockParent = get_param(BlockPath, 'Parent');
    set_param(BlockPath, 'Name', regexprep(ParamName, '^p_', ''));
    BlockPath = [BlockParent '/' regexprep(ParamName, '^p_', '')];
end

%Set the block name to be the same as the parameter name if we're referring
%to Override blocks
if has_param(BlockPath, 'PTC_BlockType')
    if strcmp(get_param(BlockPath, 'PTC_BlockType'), 'Override')
        BlockParent = get_param(BlockPath, 'Parent');
        if strcmp(ParamValueStr, 'ShouldOverride')
            set_param(BlockPath, 'Name', regexprep(ParamName, '^p_ov_', ''));
            BlockPath = [BlockParent '/' regexprep(ParamName, '^p_ov_', '')];
        end
    end
end

%Create Simulink.Parameter object
parameter_list(1).(ParamName) = Simulink.Parameter;

%Setting parameter value
parameter_list.(ParamName).Value = ParamValue;

%Setting parameter data type
parameter_list.(ParamName).DataType = ParamDataType;

%Setting parameter lower limit
parameter_list.(ParamName).Min = ParamMin;

%Setting parameter upper limit
parameter_list.(ParamName).Max = ParamMax;

%Set remaining parameter properties
parameter_list.(ParamName).DocUnits = ParamDocUnits;
parameter_list.(ParamName).Description = '';
parameter_list.(ParamName).RTWInfo.StorageClass = ParamStorageClass;
parameter_list.(ParamName).RTWInfo.Alias = ParamName;

%Finally, set the parameter
set_param(BlockPath, ParamValueStr, ParamName);
assert(strcmp(get_param(BlockPath, ParamValueStr), ParamName));

varargout{1} = parameter_list;
varargout{2} = BlockPath;

end

%% FUNCTION create_hil_signallist %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function create_hil_signallist(varargin)

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs), ...
    'SignalHandleList', [], ...
    'SourcePortList', [], ...
    'OutputFilePath', '', ...
    'OverwriteSignalList', false, ...
    'ALL_BUS_HANDLES', []};
parseargs(varargin, pairs);

if isempty(OutputFilePath) %#ok<NODEF>
    [filename, pathname] = uiputfile('*.mat', 'Save Signal List');
    if isequal(filename, 0) || isequal(pathname, 0)
        return;
    else
        OutputFilePath = fullfile(pathname, filename);
    end
end

%These all have to be named signals
assert(length(SignalHandleList) == length(SourcePortList)); %#ok<NODEF>
logical_indices = ~ishandle(SignalHandleList);
SignalHandleList(logical_indices) = [];
SourcePortList(logical_indices) = [];
logical_indices = cellfun(@isempty, strtrim(cellstr(get(SignalHandleList, 'Name'))));
SignalHandleList(logical_indices) = [];
SourcePortList(logical_indices) = [];

signal_list = struct([]);
SourcePortList_unique = unique(SourcePortList);
waitbar_hndl = waitbar(0, ['0 of ' num2str(length(SourcePortList_unique)) ' completed'], 'Name', 'Creating Signal List...', 'Pointer', 'watch');
alwaysontop(waitbar_hndl, true); drawnow;
for portlistctr = 1:length(SourcePortList_unique)
    thisSignalHandleList = SignalHandleList(SourcePortList == SourcePortList_unique(portlistctr));
    signal_list = update_signal_list('signal_list', signal_list, ...
        'SignalStorageClass', 'ExportedGlobal', ...
        'SignalHandles', thisSignalHandleList, ...
        'OutputFilePath', OutputFilePath, ...
        'ALL_BUS_HANDLES', ALL_BUS_HANDLES, ...
        'ShouldInit', (portlistctr == 1));
    waitbar(portlistctr/length(SourcePortList_unique), waitbar_hndl, [num2str(portlistctr) ' of ' num2str(length(SourcePortList_unique)) ' completed']);
end
delete(waitbar_hndl);

%Add setting MustResolveToSignalObject, applicable only for storage class
%auto
set(SignalHandleList, 'StorageClass', 'Auto');
set(SignalHandleList, 'MustResolveToSignalObject', true);

%Before saving, look for missing signals that are still being used.
if exist(OutputFilePath, 'file')
    original_signal_list = load(OutputFilePath);
    missing_signals = setdiff(fieldnames(original_signal_list), fieldnames(signal_list));
    
    signal_handle_list = cellfun(@(X) find_system(bdroot(Sys), ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'FindAll', 'on', ...
        'Type', 'line', ...
        'Name', X), missing_signals, 'UniformOutput', false);
    
    missing_signals(cellfun(@isempty, signal_handle_list)) = [];
    if ~isempty(missing_signals)
        missing_signal_vals = cellfun(@(X) original_signal_list.(X), missing_signals, 'UniformOutput', false);
        append_struct = cell2struct(missing_signal_vals(:), missing_signals(:), 1);
        signal_list = copyfields(append_struct, signal_list);
    end
end

signal_list = orderfields(signal_list);
if isempty(signal_list)
    %We need to make a 1X1 struct array with no fields
    signal_list = struct('f1', 'val1');
    signal_list = rmfield(signal_list, 'f1'); %#ok<NASGU>
end
if OverwriteSignalList || ~exist(OutputFilePath, 'file')
    save(OutputFilePath, '-struct', 'signal_list', '-v7.3');
else
    save(OutputFilePath, '-struct', 'signal_list', '-v7.3', '-append');
end

if exist(OutputFilePath, 'file')
    fprintf([isodatetime ' - ' mfilename ' - Created file ' formatstr(OutputFilePath, 'FormatBackslashes', true) '\n']);
end

end

%% FUNCTION update_signal_list %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function varargout = update_signal_list(varargin)

import('ptc_matlab_lib.*');

persistent SignalNameList;

pairs = {'signal_list', struct([]), ...
    'SignalStorageClass', '', ...
    'SignalHandles', [], ...
    'OutputFilePath', '', ...
    'SignalDataType', 'Auto', ...
    'MaxIdentifierLength', 31, ...
    'ALL_BUS_HANDLES', [], ...
    'ShouldInit', false};
parseargs(varargin, pairs);

assert(MaxIdentifierLength >= 2);

if ShouldInit
    %Get list of Simulink.Signal objects in the base workspace
    full_var_list = evalin('base', 'whos');
    classlist = arrayfun(@(x) x.class, full_var_list, 'UniformOutput', false);
    SignalNameList = full_var_list(strcmp('Simulink.Signal', classlist));
    SignalNameList = arrayfun(@(x) x.name, SignalNameList, 'UniformOutput', false);
end

%Compute SignalName
SignalName = get(SignalHandles(1), 'Name'); %#ok<NODEF>
SignalName = genvarname_custom(SignalName);

%Conditon SignalName
SignalName = regexprep(SignalName, '_s$', '');
if isvarname(SignalName) && existvar('Location', 'base', 'Vars', SignalName)
    x = evalin('base', SignalName);
    if isa(x, 'Simulink.Signal') && ~isempty(regexp(SignalName, '^s_', 'once'))
        newvar = false;
    else
        newvar = true;
    end
else
    newvar = true;
end

if isempty(regexp(SignalName, '^s_', 'once'))
    SignalName = ['s_' SignalName];
end
if length(SignalName) > MaxIdentifierLength
    newvar = true;
end

if newvar
    %It is a new variable
    %Step to address the limitation of a maximum identifier length
    SignalName = SignalName(1:min(MaxIdentifierLength, length(SignalName)));
    counter = 1;
    origSignalName = SignalName;
    while ismember(SignalName, SignalNameList)
        addendum = ['_' num2str(counter)];
        SignalName = origSignalName;
        SignalName(MaxIdentifierLength - length(addendum) + 1:MaxIdentifierLength) = addendum;
        SignalName(SignalName == 0) = '';
        SignalName = genvarname_custom(SignalName);
        counter = counter + 1;
    end
    SignalNameList{end+1, 1} = SignalName;
end

%Create Simulink.Signal object
signal_list(1).(SignalName) = Simulink.Signal;

signal_list.(SignalName).Description = '';
signal_list.(SignalName).RTWInfo.StorageClass = SignalStorageClass;
signal_list.(SignalName).RTWInfo.Alias = SignalName;
signal_list.(SignalName).DataType = SignalDataType;

%Set the handle name as well
set(SignalHandles, 'SignalNameFromLabel', SignalName);

%Make sure the variable name has actually been set
assert(all(strcmp(SignalName, get(SignalHandles, 'Name'))));

if none(ismember(SignalHandles, ALL_BUS_HANDLES))
    SrcPortList = get(SignalHandles, 'SrcPortHandle');
    if iscell(SrcPortList)
        SrcPortList = cell2mat(SrcPortList);
    end
    SrcPortList = unique(SrcPortList);
    SrcParentList = get(SrcPortList, 'Parent');
    SrcParentHandleList = get_param(SrcParentList, 'Handle');
    if iscell(SrcParentHandleList)
        SrcParentHandleList = cell2mat(SrcParentHandleList);
    end
    logical_indices = strcmp('off', get(SrcParentHandleList, 'Virtual'));
    SrcPortList(logical_indices) = [];
    if ~isempty(SrcPortList)
        OutputSignalNames = cellstr(get(SrcPortList, 'Name'));
        logical_indices = cellfun(@(X) ptc_matlab_lib.existvar('Location', 'base', 'Vars', X) && isa(evalin('base', X), 'Simulink.Signal'), OutputSignalNames);
        SrcPortList(logical_indices) = [];
    end
    if ~isempty(SrcPortList)
        add_signal_conversions('SrcPortList', SrcPortList);
    end
end

%Return
varargout{1} = signal_list;

end

%% FUNCTION add_signal_conversions

function varargout = add_signal_conversions(varargin)

import('ptc_matlab_lib.*');

pairs = {'SrcPortList', [], ...
    'autorouting', 'off'};
parseargs(varargin, pairs);
SrcPortList = unique(SrcPortList); %#ok<NODEF>

formatfunc = @(X) ptc_matlab_lib.formatstr(X, 'FormatFrontSlashes', true);

block_handles = [];
counter = 1;
for ctr = 1:length(SrcPortList)    
    thisSrcPort = SrcPortList(ctr);
    thisSignalHandle = get(thisSrcPort, 'Line');
    thisDstPort = get(thisSignalHandle, 'DstPortHandle'); %Can be a vector
    thisName = get(thisSignalHandle, 'Name');
    
    thisParent = get(thisSignalHandle, 'Parent');    
    MustResolveToSignalObject = get(thisSignalHandle, 'MustResolveToSignalObject');    
    thisSignalPoints = get(thisSignalHandle, 'Points');
    thisSrcBlock = get(thisSrcPort, 'Parent');
    thisSrcBlockName = get_param(thisSrcBlock, 'Name');
    OutportHandles = get_param(thisSrcBlock, 'PortHandles');
    OutportHandles = OutportHandles.Outport;
    thisPortHandle_pos = find(OutportHandles == thisSrcPort, 1);
    assert(~isempty(thisPortHandle_pos));
    
    %Add the signal conversion block. Note that the block needs to be
    %positioned such that it lies on the signal itself, as well as
    %possible. This will be invaluable later on. We can use the line
    %divider formula
    point_of_consideration = [thisSignalPoints(1, 1) + 0.2*(thisSignalPoints(2, 1) - thisSignalPoints(1, 1)) ...
        thisSignalPoints(1, 2) + 0.2*(thisSignalPoints(2, 2) - thisSignalPoints(1, 2))];
    newpos = [point_of_consideration(1, 1)-2.5 point_of_consideration(1, 2)-2.5 ...
        point_of_consideration(1, 1)+2.5 point_of_consideration(1, 2)+2.5];

    block_handles(end+1, 1) = add_block('built-in/SignalConversion', ...
        [thisParent '/Signal_Conversion_' num2str(counter)], ...
        'MakeNameUnique', 'on', ...
        'ShowName', 'off', ...
        'Position', newpos); %#ok<AGROW>
    block_name = get(block_handles(end), 'Name');
    counter = counter + 1;

    delete_line(thisSignalHandle);
    linehandle = add_line(thisParent, [formatfunc(thisSrcBlockName) '/' num2str(thisPortHandle_pos)], [formatfunc(block_name) '/1'], 'autorouting', autorouting);    
    %Here for some reason, we need to use the Name property, possibly
    %because we are erasing the name altogether.
    set(linehandle, 'Name', '');
    
    for dstporthandle_ctr = 1:length(thisDstPort)
        thisDstPort_parentblock = get(thisDstPort(dstporthandle_ctr), 'Parent');
        thisDstPort_parentblock_name = get_param(thisDstPort_parentblock, 'Name');
        thisDstPort_parentblock_portHandles = get_param(thisDstPort_parentblock, 'PortHandles');
        thisDstPort_position = find(thisDstPort_parentblock_portHandles.Inport == thisDstPort(dstporthandle_ctr), 1);
        assert(~isempty(thisDstPort_position));
        linehandle = add_line(thisParent, [formatfunc(block_name) '/1'], [formatfunc(thisDstPort_parentblock_name) '/' num2str(thisDstPort_position)], 'autorouting', autorouting); %#ok<AGROW>
        propstruct = struct('SignalNameFromLabel', thisName, ...
            'MustResolveToSignalObject', MustResolveToSignalObject);
        set(linehandle, propstruct);
    end
end

varargout{1} = block_handles;

end