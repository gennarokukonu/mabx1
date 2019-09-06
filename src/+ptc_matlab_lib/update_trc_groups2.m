function update_trc_groups2(varargin)

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs), ...
    'TRCFilePath', fullfile(pwd, [bdroot(gcs) '.trc']), ...
    'BlockTypes', {'Constant'; 'Gain'; 'Lookup'; 'Lookup2D'}, ...
    'PTC_BlockTypes', {'Override'}, ...
    'FunctionalUnitIdentifierRegExp', '__TREAT_AS_FUNCTIONAL_UNIT__', ...
    'ShowWaitbar', true, ...
    'WorkspaceStruct', workspacestruct('Workspace', 'base', 'ClassNameRegularExpressionFilter', '(\<Simulink.Signal\>)|(\<Simulink.Parameter\>)|(\<mpt.Signal\>)|(\<mpt.Parameter\>)|(\<ASAP2.Signal\>)|(\<ASAP2.Parameter\>)')};
ARGS = parseargs(varargin, pairs);

%Select TRC File Path
if ~exist(ARGS.TRCFilePath, 'file')
    [filename, pathname] = uigetfile({'*.trc', 'TRC File (*.trc)'; '*', 'All Files (*)'}, 'TRC File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.TRCFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    NUMBER_OF_STEPS = 5;
    CURRENT_STEP = 0;
    waitbar_hndl = waitbar(CURRENT_STEP/NUMBER_OF_STEPS, 'Updating TRC File...', 'Name', 'Updating TRC File...', 'Pointer', 'watch', 'CloseRequestFcn', '');
end

%Step 1: Organize all object names by functional unit
FunctionalUnits.SysNames = find_system(ARGS.Sys, ...
    'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', ...
    'LoadFullyIfNeeded', 'on', ...
    'RegExp', 'on', ...
    'BlockType', 'SubSystem', ...
    'AttributesFormatString', ARGS.FunctionalUnitIdentifierRegExp);
tempstring = randstring(5);
FunctionalUnits.SysNames = flipud(sort(FunctionalUnits.SysNames(:))); %#ok<FLPST>
FunctionalUnits.SysNames_Formatted = strrep(FunctionalUnits.SysNames, '//', tempstring);

FunctionalUnits.ParameterNames = cell(numel(FunctionalUnits.SysNames), 1);
FunctionalUnits.SignalNames = cell(numel(FunctionalUnits.SysNames), 1);
BlockParamList = cell(numel(ARGS.BlockTypes) + numel(ARGS.PTC_BlockTypes), 1);
BlockHandles = cell(numel(FunctionalUnits.SysNames), 1);
SignalHandles = cell(numel(FunctionalUnits.SysNames), 1);
previous_block_handles = NaN(0, 1);
previous_signal_handles = NaN(0, 1);
for ctr = 1:numel(FunctionalUnits.SysNames)
    
    BlockHandles{ctr} = cellfun(@(X) ptc_matlab_lib.columnvec(find_system(FunctionalUnits.SysNames{ctr}, ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'FindAll', 'on', ...
        'BlockType', X)), ARGS.BlockTypes, 'UniformOutput', false);
    
    BlockHandles{ctr} = [BlockHandles{ctr}(:);
        cellfun(@(X) ptc_matlab_lib.columnvec(find_system(FunctionalUnits.SysNames{ctr}, ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'FindAll', 'on', ...
        'PTC_BlockType', X)), ARGS.PTC_BlockTypes, 'UniformOutput', false)];
    
    SignalHandles{ctr} = columnvec(find_system(FunctionalUnits.SysNames{ctr}, ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'FindAll', 'on', ...
        'RegExp', 'on', ...
        'Type', 'line', ...
        'Name', '^[^<]'));
    
    if ctr > 1
        BlockHandles{ctr} = cellfun(@(X) ptc_matlab_lib.columnvec(setdiff(X, previous_block_handles)), BlockHandles{ctr}, 'UniformOutput', false);
        SignalHandles{ctr} = setdiff(SignalHandles{ctr}, previous_signal_handles);
    end
    previous_block_handles = [previous_block_handles;
        cat(1, BlockHandles{ctr}{:})]; %#ok<AGROW>
    previous_signal_handles = [previous_signal_handles;
        SignalHandles{ctr}]; %#ok<AGROW>
    
    for ctr2 = 1:numel(ARGS.BlockTypes)
        if ~isempty(BlockHandles{ctr}{ctr2})
            switch ARGS.BlockTypes{ctr2}
                case 'Constant'
                    BlockParamList{ctr2} = columnvec(cellstr2(get(BlockHandles{ctr}{ctr2}, 'Value')));
                case 'Gain'
                    BlockParamList{ctr2} = columnvec(cellstr2(get(BlockHandles{ctr}{ctr2}, 'Gain')));
                case 'Lookup'
                    BlockParamList{ctr2} = columnvec(cellstr2(get(BlockHandles{ctr}{ctr2}, {'InputValues'; 'Table'})));
                case 'Lookup2D'
                    BlockParamList{ctr2} = columnvec(cellstr2(get(BlockHandles{ctr}{ctr2}, {'RowIndex'; 'ColumnIndex'; 'Table'})));
                otherwise
                    error([mfilename ':' thisfuncname ':UnknownBlockType'], ['The block type ' ARGS.BlockTypes{ctr2} ' is not yet supported.']);
            end
        end
    end
    for ctr3 = ctr2 + 1 : ctr2 + numel(ARGS.PTC_BlockTypes)
        if ~isempty(BlockHandles{ctr}{ctr3})
            switch ARGS.PTC_BlockTypes{ctr3 - ctr2}
                case 'Override'
                    BlockParamList{ctr3} = columnvec(cellstr2(get(BlockHandles{ctr}{ctr3}, {'ShouldOverride'; 'OverrideValue'})));
                otherwise
                    error([mfilename ':' thisfuncname ':UnknownBlockType'], ['The block type ' ARGS.PTC_BlockTypes{ctr3} ' is not yet supported.']);
            end
        end
    end
    FunctionalUnits.ParameterNames{ctr} = intersect(strtrim(unique(cat(1, BlockParamList{:}))), fieldnames(ARGS.WorkspaceStruct));
    if ~isempty(SignalHandles{ctr})
        FunctionalUnits.SignalNames{ctr} = intersect(strtrim(unique(cellstr2(get(SignalHandles{ctr}, 'Name')))), fieldnames(ARGS.WorkspaceStruct));
    end
    
end

FunctionalUnits = structfun(@flipud, FunctionalUnits, 'UniformOutput', false);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%Step 2: Parse TRC file
trcFileParsedCell = trcParseTrcFile2('TRCFilePath', ARGS.TRCFilePath, 'ShowWaitbar', false);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%Step 3: Obtain the section corresponding to group 'Tunable Parameters' or
%'Tunable_Parameters'
for ctr = 1:numel(trcFileParsedCell)
    if isstruct(trcFileParsedCell{ctr})
        assert(isfield(trcFileParsedCell{ctr}, 'Name'));
        if ~isempty(regexp(trcFileParsedCell{ctr}.Name, '\s*group\s+"Tunable[ _]Parameters"\s*', 'once'))
            TunableParametersIdx.Start = ctr;
            break;
        end
    end
end

desired_endgroup_position = 1; %i.e. 1st occurrence of endgroup
actual_endgroup_position = 1; %i.e. 1st occurrence of endgroup
for ctr2 = ctr+1 : numel(trcFileParsedCell)
    if isstruct(trcFileParsedCell{ctr2})
        assert(isfield(trcFileParsedCell{ctr2}, 'Name'));
        if ~isempty(regexp(trcFileParsedCell{ctr2}.Name, '\s*group\s+"', 'once'))
            desired_endgroup_position = desired_endgroup_position + 1;
        end
    elseif ~isempty(regexp(trcFileParsedCell{ctr2}, '\s*endgroup\s*', 'once'))
        if actual_endgroup_position == desired_endgroup_position
            TunableParametersIdx.Stop = ctr2;
            break;
        else
            actual_endgroup_position = actual_endgroup_position + 1;
        end
    end
end

PARAMETER_SECTION_OLD = trcFileParsedCell(TunableParametersIdx.Start : TunableParametersIdx.Stop);
PARAMETER_SECTION_NEW = {struct('Name', 'group "Tunable_Parameters"', 'Fields', {{'flags'}}, 'Values', {{' COLLAPSED'}});
    [sprintf('\r\n') 'endgroup -- "Tunable_Parameters"']};
offset = 0;
for SysNameCtr = 1:numel(FunctionalUnits.SysNames)
    [~, thisSysName] = fileparts(FunctionalUnits.SysNames_Formatted{SysNameCtr});
    thisSysName = strrep(thisSysName, ' ', '_');
    if SysNameCtr >= 2
        oldpath = strsplit(FunctionalUnits.SysNames_Formatted{SysNameCtr-1}, '/');
        newpath = strsplit(FunctionalUnits.SysNames_Formatted{SysNameCtr}, '/');
        if numel(oldpath) > numel(newpath) || ~isequal(oldpath, newpath(1:numel(oldpath)))
            offset = offset - (numel(oldpath) - numel(newpath)) - 1;
        end
    end
    PARAMETER_SECTION_NEW = push(PARAMETER_SECTION_NEW, ...
        {struct('Name', ['group "' thisSysName '"'], 'Fields', {{'flags'}}, 'Values', {{' COLLAPSED'}});
        [sprintf('\r\n') 'endgroup -- "' thisSysName '"']}, ...
        numel(PARAMETER_SECTION_NEW) - offset);
    offset = offset + 1;
    for ParamCtr = 1:numel(FunctionalUnits.ParameterNames{SysNameCtr})
        found = false;
        for ctr = 1:numel(PARAMETER_SECTION_OLD)
            if isstruct(PARAMETER_SECTION_OLD{ctr}) && strcmp(PARAMETER_SECTION_OLD{ctr}.Name, FunctionalUnits.ParameterNames{SysNameCtr}{ParamCtr})
                found = true;
                break;
            end
        end
        if found
            PARAMETER_SECTION_NEW = push(PARAMETER_SECTION_NEW, PARAMETER_SECTION_OLD(ctr), numel(PARAMETER_SECTION_NEW) - offset);
        end
    end
end

trcFileParsedCell(TunableParametersIdx.Start : TunableParametersIdx.Stop) = [];
trcFileParsedCell = push(trcFileParsedCell, PARAMETER_SECTION_NEW, TunableParametersIdx.Start);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%Step 4: Obtain the section corresponding to group 'Labels'
for ctr = 1:numel(trcFileParsedCell)
    if isstruct(trcFileParsedCell{ctr})
        assert(isfield(trcFileParsedCell{ctr}, 'Name'));
        if ~isempty(regexp(trcFileParsedCell{ctr}.Name, '\s*group\s+"Labels"\s*', 'once'))
            LabelsIdx.Start = ctr;
            break;
        end
    end
end

desired_endgroup_position = 1; %i.e. 1st occurrence of endgroup
actual_endgroup_position = 1; %i.e. 1st occurrence of endgroup
for ctr2 = ctr+1 : numel(trcFileParsedCell)
    if isstruct(trcFileParsedCell{ctr2})
        assert(isfield(trcFileParsedCell{ctr2}, 'Name'));
        if ~isempty(regexp(trcFileParsedCell{ctr2}.Name, '\s*group\s+"', 'once'))
            desired_endgroup_position = desired_endgroup_position + 1;
        end
    elseif ~isempty(regexp(trcFileParsedCell{ctr2}, '\s*endgroup\s*', 'once'))
        if actual_endgroup_position == desired_endgroup_position
            LabelsIdx.Stop = ctr2;
            break;
        else
            actual_endgroup_position = actual_endgroup_position + 1;
        end
    end
end

LABEL_SECTION_OLD = trcFileParsedCell(LabelsIdx.Start : LabelsIdx.Stop);
LABEL_SECTION_NEW = {struct('Name', 'group "Labels"', 'Fields', {{'flags'}}, 'Values', {{' COLLAPSED'}});
    [sprintf('\r\n') 'endgroup -- "Labels"']};
offset = 0;
for SysNameCtr = 1:numel(FunctionalUnits.SysNames)
    [~, thisSysName] = fileparts(FunctionalUnits.SysNames_Formatted{SysNameCtr});
    thisSysName = strrep(thisSysName, ' ', '_');
    if SysNameCtr >= 2
        oldpath = strsplit(FunctionalUnits.SysNames_Formatted{SysNameCtr-1}, '/');
        newpath = strsplit(FunctionalUnits.SysNames_Formatted{SysNameCtr}, '/');
        if numel(oldpath) > numel(newpath) || ~isequal(oldpath, newpath(1:numel(oldpath)))
            offset = offset - (numel(oldpath) - numel(newpath)) - 1;
        end
    end
    LABEL_SECTION_NEW = push(LABEL_SECTION_NEW, ...
        {struct('Name', ['group "' thisSysName '"'], 'Fields', {{'flags'}}, 'Values', {{' COLLAPSED'}});
        [sprintf('\r\n') 'endgroup -- "' thisSysName '"']}, ...
        numel(LABEL_SECTION_NEW) - offset);
    offset = offset + 1;
    for SignalCtr = 1:numel(FunctionalUnits.SignalNames{SysNameCtr})
        found = false;
        for ctr = 1:numel(LABEL_SECTION_OLD)
            if isstruct(LABEL_SECTION_OLD{ctr}) && strcmp(LABEL_SECTION_OLD{ctr}.Name, FunctionalUnits.SignalNames{SysNameCtr}{SignalCtr})
                found = true;
                break;
            end
        end
        if found
            LABEL_SECTION_NEW = push(LABEL_SECTION_NEW, LABEL_SECTION_OLD(ctr), numel(LABEL_SECTION_NEW) - offset);
            LABEL_SECTION_OLD(ctr) = [];
        end
    end
end

trcFileParsedCell(LabelsIdx.Start : LabelsIdx.Stop) = [];
trcFileParsedCell = push(trcFileParsedCell, LABEL_SECTION_NEW, LabelsIdx.Start);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%Step 5: Writing TRC File
copyfile(ARGS.TRCFilePath, [ARGS.TRCFilePath '.bak'], 'f');
trcWriteTrcFile2('TrcParsedCell', trcFileParsedCell, ...
    'OutputTRCFilePath', ARGS.TRCFilePath, ...
    'ShowWaitbar', false);

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end