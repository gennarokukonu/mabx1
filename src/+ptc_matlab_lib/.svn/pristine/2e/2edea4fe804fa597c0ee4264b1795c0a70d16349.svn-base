function PTC_MBDS_ConvertModel(varargin)

import('ptc_matlab_lib.*');

pairs = {'PTC_MBDS_LIB_ROOT', '', ...
    'MBDS_PROJECT_ROOT', '', ...
    'GroupSeparatorCharOld', '.', ...
    'GroupSeparatorCharNew', '_', ...
    'ShouldCheckSVNConsistency', true, ...
    'ShouldReplaceDoubleQuotes', false};
ARGS = parseargs(varargin, pairs);

LINEFEED = sprintf('\n');

if isempty(ARGS.PTC_MBDS_LIB_ROOT)
    directory = uigetdir(mfiledir, 'Select PTC_MBDS_LIB_ROOT');
    if isequal(directory, 0)
        %Cancel was pressed
        return;
    end
    ARGS.PTC_MBDS_LIB_ROOT = directory;
end

if isempty(ARGS.MBDS_PROJECT_ROOT)
    directory = uigetdir(mfiledir, 'Select MBDS_PROJECT_ROOT');
    if isequal(directory, 0)
        %Cancel was pressed
        return;
    end
    ARGS.MBDS_PROJECT_ROOT = directory;
end

addpath(ARGS.PTC_MBDS_LIB_ROOT);

pairs = {'FileList', {fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_Modules.slx'), ...
    fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_Subsystems.slx'), ...
    fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_Applications.slx'), ...
    fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_PrjLib.slx')}, ...
    'LibraryFileList', {fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_Modules.slx'), ...
    fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_Subsystems.slx'), ...
    fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_Applications.slx')}, ...
    'EnumInputDir', fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary'), ...
    'RCP_ROOT', fullfile(ARGS.MBDS_PROJECT_ROOT, 'UserExtensions', 'RCP')};
ARGS = structcopy(ARGS, parseargs(varargin, pairs));

pairs = {'EnumOutputDir', fullfile(ARGS.RCP_ROOT, 'Enumerations'), ...
    'InputA2LFilePath', fullfile(ARGS.MBDS_PROJECT_ROOT, 'Output', 'ASAM_pif.A2L'), ...
    'InputSRECFilePath', fullfile(ARGS.MBDS_PROJECT_ROOT, 'Output', 'PIFDataset.mhx'), ...
    'InputConstantsFilePath', fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'PrjConstants.m'), ...
    'InputSignalFilePath', fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'PrjSignals.m'), ...
    'OutputConstantsFilePath', fullfile(ARGS.RCP_ROOT, 'DataDictionaries', 'DD_Constants.m'), ...
    'OutputSignalFilePath', fullfile(ARGS.RCP_ROOT, 'DataDictionaries', 'DD_Signals.m'), ...
    'OutputParametersFilePath', fullfile(ARGS.RCP_ROOT, 'DataDictionaries', 'DD_Parameters.m'), ...
    'OutputKIBESSymbolMapSignalsFilePath', fullfile(ARGS.RCP_ROOT, 'Utilities', 'KIBESSymbolMapSignals.m'), ...
    'OutputKIBESSymbolMapParamsFilePath', fullfile(ARGS.RCP_ROOT, 'Utilities', 'KIBESSymbolMapParams.m'), ...
    'PTC_MBDS_LIB_FilePath', fullfile(ARGS.PTC_MBDS_LIB_ROOT, 'PTC_MBDS_LIB.slx')};
ARGS = structcopy(ARGS, parseargs(varargin, pairs));

ARGS.FileList = unique(columnvec(cellstr2(ARGS.FileList)), 'stable');

%Ensure that all files are synced with SVN
if ARGS.ShouldCheckSVNConsistency
    if ~svn_consistency_check('SVNROOT', ARGS.MBDS_PROJECT_ROOT, 'ShowDialog', true, 'ShouldUpdate', true)
        return;
    end
end

answer = questdlg('This procedure can make changes to the project that may not be easily reversed. Are you sure you want to proceed?', 'QUESTION', 'YES', 'NO', 'NO');
if strcmp(answer, 'NO')
    return;
end

%Parsing A2L File
if ~exist(ARGS.InputA2LFilePath, 'file')
    [filename, pathname] = uigetfile({'*.a2l', 'A2L File (*.a2l)'}, 'Select A2L File', fullfile(ARGS.MBDS_PROJECT_ROOT, 'Output'));
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.InputA2LFilePath = fullfile(pathname, filename);
end
A2LStruct = get_a2l_data('A2LFilePath', ARGS.InputA2LFilePath, ...
    'A2LTagFilter', {'Mod_Common'; 'Characteristics'; 'Compu_Vtabs'; 'Axis_Pts'; 'Measurements'});

%Parsing S-Record File Path
if ~exist(ARGS.InputSRECFilePath, 'file')
    SRECExtensions = strcat('*.', get_srec_extensions());
    [~, A2LFileDir] = fileparts(ARGS.InputA2LFilePath);
    [filename, pathname] = uigetfile({strimplode(SRECExtensions, ';'), ['Motorola S-Record file (' strimplode(SRECExtensions, ', ') ')']}, 'Select Motorola S-Record file', fullfile(A2LFileDir, SRECFile));
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.InputSRECFilePath = fullfile(pathname, filename);
end
SRECStruct = get_srec_data('SRECFilePath', ARGS.InputSRECFilePath);

%Obtain label values
LABELINFO = get_srec_label_info('A2LDATA', A2LStruct.A2LDATA, ...
    'SRECDATA', SRECStruct.SRECDATA, ...
    'LabelName', '*');

%Save Enumerations
ticid = tic;
fprintf([isodatetime ' - ' mfilename ' - Saving enumerations...']);
EnumDefinitionFileList = dir(fullfile(ARGS.EnumInputDir, '*.m'));
[~, EnumClassNameList] = arrayfun(@(X) fileparts(fullfile(ARGS.EnumInputDir, X.name)), EnumDefinitionFileList, 'UniformOutput', false);
EnumClassNameList(~isIntEnumType(EnumClassNameList)) = [];
if ~isempty(EnumClassNameList)
    for ctr = 1:numel(EnumClassNameList)
        ENUMINFO.FilePath = fullfile(ARGS.EnumOutputDir, [EnumClassNameList{ctr} '.m']);
        [EnumValues, EnumStrings] = enumeration(EnumClassNameList{ctr});
        EnumValuesNumeric = double(EnumValues);
        if ismember('getDefaultValue', methods(EnumClassNameList{ctr}))
            DefaultEnumValueString = char(evalsafe([EnumClassNameList{ctr} '.getDefaultValue;']));
        else
            DefaultEnumValueString = EnumStrings{find(EnumValuesNumeric == min(EnumValuesNumeric), 1)};
        end
        EnumDescriptionString = evalsafe([EnumClassNameList{ctr} '.getDescription;']);
        EnumDescriptionString = formatstr(EnumDescriptionString, 'FormatBackSlashes', true, 'FormatPercentageSymbols', true, 'FormatNewLines', true, 'FormatCarriageReturns', true, 'FormatSingleQuotes', true, 'FormatTabs', true);
        ENUMINFO.ClassDef = [{['classdef ' EnumClassNameList{ctr} ' < Simulink.IntEnumType']};
            {[sprintf('\t') 'enumeration']};
            arrayfun(@(X, Y) [sprintf('\t\t') X{1} '(' num2str(Y) ')'], EnumStrings(:), EnumValuesNumeric(:), 'UniformOutput', false);
            {[sprintf('\t') 'end']};
            {[sprintf('\t') 'methods (Static = true)']};
            {[sprintf('\t\t') 'function retVal = getDefaultValue()']};
            {[sprintf('\t\t\t') 'retVal = eval([mfilename ''.' DefaultEnumValueString ''']);']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = addClassNameToEnumNames()']};
            {[sprintf('\t\t\t') 'retVal = true;']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getHeaderFile()']};
            {[sprintf('\t\t\t') 'retVal = ''EnumTypes.h'';']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getDataScope()']};
            {[sprintf('\t\t\t') 'retVal = ''Exported'';']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getDescription()']};
            {[sprintf('\t\t\t') 'retVal = sprintf(''' EnumDescriptionString ''');']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getMotoHawkEnumStruct()']};
            {[sprintf('\t\t\t') '[enumerations, fields] = enumeration(mfilename);']};
            {[sprintf('\t\t\t') 'retVal = struct(''name'', fields(:), ''value'', num2cell(double(enumerations)));']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getRaptorEnumStruct()']};
            {[sprintf('\t\t\t') '[enumerations, fields] = enumeration(mfilename);']};
            {[sprintf('\t\t\t') 'retVal = struct(''Name'', fields(:), ''Value'', num2cell(double(enumerations)));']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t') 'end']};
            {'end'}];
        if ~exist(fileparts(ENUMINFO.FilePath), 'dir')
            mkdir(fileparts(ENUMINFO.FilePath));
        end
        fid = fopen(ENUMINFO.FilePath, 'w');
        fwrite(fid, strimplode(ENUMINFO.ClassDef, sprintf('\r\n')));
        fclose(fid);
    end
end

if ~isempty(A2LStruct.A2LDATA.Compu_Vtabs.LabelNames)
    A2LStruct.A2LDATA.Compu_Vtabs.LabelNames_Portable = genvarname(regexprep(A2LStruct.A2LDATA.Compu_Vtabs.LabelNames, '\s+', '_'));
    for ctr = 1:numel(A2LStruct.A2LDATA.Compu_Vtabs.LabelNames_Portable)
        ENUMINFO.FilePath = fullfile(ARGS.EnumOutputDir, [A2LStruct.A2LDATA.Compu_Vtabs.LabelNames_Portable{ctr} '.m']);
        EnumValues = A2LStruct.A2LDATA.Compu_Vtabs.Enumerations{ctr}.keys;
        EnumValuesNumeric = str2double(EnumValues);
        EnumStrings = genvarname(regexprep(A2LStruct.A2LDATA.Compu_Vtabs.Enumerations{ctr}.values, '\s+', '_'));
        [tf, loc] = ismember('DEFAULT_VALUE', EnumValues);
        if tf
            DefaultEnumValueString = EnumStrings{loc};
        else
            DefaultEnumValueString = EnumStrings{find(EnumValuesNumeric == min(EnumValuesNumeric), 1)};
        end
        indices = isnan(EnumValuesNumeric);
        EnumValuesNumeric(indices) = [];
        EnumValues(indices) = [];
        EnumStrings(indices) = [];
        [EnumValuesNumeric, indices] = sort(EnumValuesNumeric);
        EnumValues = EnumValues(indices); %#ok<NASGU>
        EnumStrings = EnumStrings(indices);
        EnumDescriptionString = A2LStruct.A2LDATA.Compu_Vtabs.LabelDescriptions{ctr};
        EnumDescriptionString = formatstr(EnumDescriptionString, 'FormatBackSlashes', true, 'FormatPercentageSymbols', true, 'FormatNewLines', true, 'FormatCarriageReturns', true, 'FormatSingleQuotes', true, 'FormatTabs', true);
        ENUMINFO.ClassDef = [{['classdef ' A2LStruct.A2LDATA.Compu_Vtabs.LabelNames_Portable{ctr} ' < Simulink.IntEnumType']};
            {[sprintf('\t') 'enumeration']};
            arrayfun(@(X, Y) [sprintf('\t\t') X{1} '(' num2str(Y) ')'], EnumStrings(:), EnumValuesNumeric(:), 'UniformOutput', false);
            {[sprintf('\t') 'end']};
            {[sprintf('\t') 'methods (Static = true)']};
            {[sprintf('\t\t') 'function retVal = getDefaultValue()']};
            {[sprintf('\t\t\t') 'retVal = eval([mfilename ''.' DefaultEnumValueString ''']);']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = addClassNameToEnumNames()']};
            {[sprintf('\t\t\t') 'retVal = true;']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getHeaderFile()']};
            {[sprintf('\t\t\t') 'retVal = ''EnumTypes.h'';']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getDataScope()']};
            {[sprintf('\t\t\t') 'retVal = ''Exported'';']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getDescription()']};
            {[sprintf('\t\t\t') 'retVal = sprintf(''' EnumDescriptionString ''');']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getMotoHawkEnumStruct()']};
            {[sprintf('\t\t\t') '[enumerations, fields] = enumeration(mfilename);']};
            {[sprintf('\t\t\t') 'retVal = struct(''name'', fields(:), ''value'', num2cell(double(enumerations)));']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t\t') 'function retVal = getRaptorEnumStruct()']};
            {[sprintf('\t\t\t') '[enumerations, fields] = enumeration(mfilename);']};
            {[sprintf('\t\t\t') 'retVal = struct(''Name'', fields(:), ''Value'', num2cell(double(enumerations)));']};
            {[sprintf('\t\t') 'end']};
            {[sprintf('\t') 'end']};
            {'end'}];
        if ~exist(fileparts(ENUMINFO.FilePath), 'dir')
            mkdir(fileparts(ENUMINFO.FilePath));
        end
        fid = fopen(ENUMINFO.FilePath, 'w');
        fwrite(fid, strimplode(ENUMINFO.ClassDef, sprintf('\r\n')));
        fclose(fid);
    end
end
fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);

%Parse A2L file, save parameters
ticid = tic;
fprintf([isodatetime ' - ' mfilename ' - Generating parameter list...']);
label_list = genvarname([strrep(A2LStruct.A2LDATA.Characteristics.LabelNames, ARGS.GroupSeparatorCharOld, ARGS.GroupSeparatorCharNew);
    strrep(A2LStruct.A2LDATA.Axis_Pts.LabelNames, ARGS.GroupSeparatorCharOld, ARGS.GroupSeparatorCharNew)]);
A2LStruct.A2LDATA.Characteristics.LabelNames_Portable = label_list(1:numel(A2LStruct.A2LDATA.Characteristics.LabelNames));
A2LStruct.A2LDATA.Axis_Pts.LabelNames_Portable = label_list(numel(A2LStruct.A2LDATA.Characteristics.LabelNames)+1:end);
A2LStruct.A2LDATA.Characteristics.AxisLabels_Portable = repmat({cell(0, 1)}, numel(A2LStruct.A2LDATA.Characteristics.LabelNames), 1);
table_indices = find(~cellfun(@isempty, A2LStruct.A2LDATA.Characteristics.AxisLabels));
for idx = (table_indices(:)).'
    [~, loc] = ismember(A2LStruct.A2LDATA.Characteristics.AxisLabels{idx}, A2LStruct.A2LDATA.Axis_Pts.LabelNames);
    A2LStruct.A2LDATA.Characteristics.AxisLabels_Portable{idx} = A2LStruct.A2LDATA.Axis_Pts.LabelNames_Portable(nonzeros(loc));
end
KIBES_SYMBOL_MAP_PARAMS = PTC_MBDS_KIBES_SymbolMap('KIBES_Names', A2LStruct.A2LDATA.Characteristics.LabelNames_Portable, 'KIBES_Symbol_Names', A2LStruct.A2LDATA.Characteristics.LabelNames);
Max_Single = realmax('single');
Min_Single = -realmax('single');
OLD_PATH = path;
if ~any(pathcmp(ARGS.EnumOutputDir, path))
    addpath(ARGS.EnumOutputDir);
end
for A2LTags = {'Characteristics', 'Axis_Pts'}
    for ctr = 1:numel(A2LStruct.A2LDATA.(A2LTags{1}).LabelNames)
        OriginalLabelName = A2LStruct.A2LDATA.(A2LTags{1}).LabelNames{ctr};
        thisLabelName = A2LStruct.A2LDATA.(A2LTags{1}).LabelNames_Portable{ctr};
        ParameterObjStruct.(thisLabelName) = ptc_matlab_lib.PTC_MBDS_Parameter;
        ParameterObjStruct.(thisLabelName).CoderInfo.StorageClass = 'ExportedGlobal';
        %ParameterObjStruct.(thisLabelName).CoderInfo.Alias = A2LStruct.A2LDATA.(A2LTags{1}).LabelNames_Portable{ctr};
        ParameterObjStruct.(thisLabelName).Description = A2LStruct.A2LDATA.(A2LTags{1}).LabelDescriptions{ctr};
        if isempty(A2LStruct.A2LDATA.(A2LTags{1}).EnumerationInfo{ctr})
            if ismember(A2LStruct.A2LDATA.(A2LTags{1}).DataTypes{ctr}, {'UBYTE'; 'SBYTE'; 'UWORD'; 'SWORD'; 'ULONG'; 'SLONG'}) && ...
                    A2LStruct.A2LDATA.(A2LTags{1}).MinValues(ctr) == 0 && A2LStruct.A2LDATA.(A2LTags{1}).MaxValues(ctr) == 1 && ...
                    all(A2LStruct.A2LDATA.(A2LTags{1}).Coeffs(ctr, :) == [0, 1, 0, 0, 0, 1])
                ParameterObjStruct.(thisLabelName).DataType = 'boolean';
            elseif A2LStruct.A2LDATA.(A2LTags{1}).MinValues(ctr) >= Min_Single && A2LStruct.A2LDATA.(A2LTags{1}).MaxValues(ctr) <= Max_Single && ...
                    any(A2LStruct.A2LDATA.(A2LTags{1}).Coeffs(ctr, :) ~= [0, 1, 0, 0, 0, 1])
                ParameterObjStruct.(thisLabelName).DataType = 'single';
            elseif any(A2LStruct.A2LDATA.(A2LTags{1}).Coeffs(ctr, :) ~= [0, 1, 0, 0, 0, 1])
                ParameterObjStruct.(thisLabelName).DataType = 'double';
            else
                switch A2LStruct.A2LDATA.(A2LTags{1}).DataTypes{ctr}
                    case 'UBYTE'
                        ParameterObjStruct.(thisLabelName).DataType = 'uint8';
                    case 'SBYTE'
                        ParameterObjStruct.(thisLabelName).DataType = 'int8';
                    case 'UWORD'
                        ParameterObjStruct.(thisLabelName).DataType = 'uint16';
                    case 'SWORD'
                        ParameterObjStruct.(thisLabelName).DataType = 'int16';
                    case 'ULONG'
                        ParameterObjStruct.(thisLabelName).DataType = 'uint32';
                    case 'SLONG'
                        ParameterObjStruct.(thisLabelName).DataType = 'int32';
                    case 'A_UINT64'
                        ParameterObjStruct.(thisLabelName).DataType = 'uint64';
                    case 'A_INT64'
                        ParameterObjStruct.(thisLabelName).DataType = 'int64';
                    case 'FLOAT32_IEEE'
                        ParameterObjStruct.(thisLabelName).DataType = 'single';
                    case 'FLOAT64_IEEE'
                        ParameterObjStruct.(thisLabelName).DataType = 'double';
                end
            end
            if A2LStruct.A2LDATA.(A2LTags{1}).MinValues(ctr) < getmindtval(A2LStruct.A2LDATA.(A2LTags{1}).DataTypes{ctr})
                ParameterObjStruct.(thisLabelName).Min = [];
            else
                ParameterObjStruct.(thisLabelName).Min = A2LStruct.A2LDATA.(A2LTags{1}).MinValues(ctr);
            end
            if A2LStruct.A2LDATA.(A2LTags{1}).MaxValues(ctr) > getmaxdtval(A2LStruct.A2LDATA.(A2LTags{1}).DataTypes{ctr})
                ParameterObjStruct.(thisLabelName).Max = [];
            else
                ParameterObjStruct.(thisLabelName).Max = A2LStruct.A2LDATA.(A2LTags{1}).MaxValues(ctr);
            end
        else
            ParameterObjStruct.(thisLabelName).DataType = ['Enum: ' genvarname(regexprep(A2LStruct.A2LDATA.(A2LTags{1}).EnumerationInfo{ctr}.LabelName, '\s+', '_'))];
            ParameterObjStruct.(thisLabelName).Min = [];
            ParameterObjStruct.(thisLabelName).Max = [];
        end
        ParameterObjStruct.(thisLabelName).DocUnits = A2LStruct.A2LDATA.(A2LTags{1}).Units{ctr};
        ParameterObjStruct.(thisLabelName).ASAP2_Formula = A2LStruct.A2LDATA.(A2LTags{1}).Formula{ctr};
        ParameterObjStruct.(thisLabelName).ASAP2_FormulaInv = A2LStruct.A2LDATA.(A2LTags{1}).Formula_Inv{ctr};
        ParameterObjStruct.(thisLabelName).ASAP2_Identifier = A2LStruct.A2LDATA.(A2LTags{1}).LabelNames{ctr};
        thisDataType = regexprep(ParameterObjStruct.(thisLabelName).DataType, '^Enum:\s*', '');
        if strcmp(thisDataType, 'auto')
            thisDataType = 'double';
        end
        thisValue = LABELINFO.RealWorldValues{strcmp(OriginalLabelName, LABELINFO.LabelNames)};
        if isvector(thisValue)
            thisValue = (thisValue(:)).';
        end
        thisValue = feval(thisDataType, thisValue);
        ParameterObjStruct.(thisLabelName).Value = limit('InMatrix', thisValue, ...
            'UpperLimit', ParameterObjStruct.(thisLabelName).Max, ...
            'LowerLimit', ParameterObjStruct.(thisLabelName).Min, ...
            'ShouldPerformFloatingPointCorrection', true);
        if strcmp(A2LTags{1}, 'Characteristics')
            ParameterObjStruct.(thisLabelName).Axis_Labels = A2LStruct.A2LDATA.Characteristics.AxisLabels_Portable{ctr}(:);
        elseif strcmp(A2LTags{1}, 'Axis_Pts')
            ParameterObjStruct.(thisLabelName).Axis_Labels = cell(0, 1);
        end
    end
end
if ~exist(fileparts(ARGS.OutputParametersFilePath), 'dir')
    mkdir(fileparts(ARGS.OutputParametersFilePath));
end
fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);

%Save PrjConstants
ticid = tic;
if exist(ARGS.InputConstantsFilePath, 'file')
    [~, InputConstantsFileName] = fileparts(ARGS.InputConstantsFilePath);
    if ~exist(fileparts(ARGS.OutputConstantsFilePath), 'dir')
        mkdir(fileparts(ARGS.OutputConstantsFilePath));
    end
    fprintf([isodatetime ' - ' mfilename ' - Saving ' formatstr(ARGS.OutputConstantsFilePath, 'FormatBackslashes', true) '...']);
    STRUCT = struct([]);
    evalsafe([InputConstantsFileName '; STRUCT = ptc_matlab_lib.workspacestruct;'], cell(0, 1), {'STRUCT', STRUCT});
    STRUCT = rmfield(STRUCT, {'zzz_internal_Z5i5NgrI88'; 'STRUCT'});
    STRUCT = copyfields(STRUCT, workspacestruct('Workspace', 'base'));
    ptc_matlab_lib.export_data_dictionary('WorkspaceStruct', STRUCT, 'ShouldEcho', false, 'ShowWaitbar', false, 'OutputFilePath', ARGS.OutputConstantsFilePath);
    fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);
end

ticid_main = tic;
if exist(fullfile(ARGS.RCP_ROOT, 'conversion_log.txt'), 'file')
    delete(fullfile(ARGS.RCP_ROOT, 'conversion_log.txt'));
end
diary(fullfile(ARGS.RCP_ROOT, 'conversion_log.txt'));

%Close all models
bdclose('all');

%Load PTC_MBDS_LIB
load_system(ARGS.PTC_MBDS_LIB_FilePath);

%Loop through ARGS.FileList
SignalObjStruct = struct;
KIBES_SYMBOL_MAP_SIGNALS = cell(numel(ARGS.FileList)*2, 1);
KIBES_SYMBOL_SIGNALS_CTR = 1;
for mdlctr = 1:numel(ARGS.FileList)
    [~, ModelFileName] = fileparts(ARGS.FileList{mdlctr});
    
    disp([isodatetime ' - ' mfilename ' - Loading system ' ARGS.FileList{mdlctr}]);
    load_system(ARGS.FileList{mdlctr});
    assert(strcmp(bdroot(gcs), ModelFileName));
    
    %Unlock file if needed. Remember to lock again after completion
    ShouldLock = false;
    if strcmp(get_param(ModelFileName, 'Lock'), 'on')
        set_param(ModelFileName, 'Lock', 'off');
        ShouldLock = true;
    end
    
    %Sundeep Tuteja, 2016-05-26: The file MBDS_Applications.slx contains
    %code to prevent the use of these subsystems inside any block other
    %than the so called 'System' block in MBDS. For this reason, the
    %CopyFcn callback needs to be removed for every block in this
    %subsystem.
    if pathcmp(ARGS.FileList{mdlctr}, fullfile(ARGS.MBDS_PROJECT_ROOT, 'ProjectLibrary', 'MBDS_Applications.slx'))
        BlockList = find_system(ModelFileName, 'FollowLinks', 'off', 'SearchDepth', 1, 'LookUnderMasks', 'off', 'FindAll', 'on', 'RegExp', 'on', 'BlockType', 'SubSystem', 'CopyFcn', '.+');
        if ~isempty(BlockList)
            set(BlockList, 'CopyFcn', '');
        end
    end
    
    %Set property for library links display to all
    set_param(ModelFileName, 'LibraryLinkDisplay', 'all');
    
    %Sundeep Tuteja, 2016-10-31: Replacing double quotes, as some versions
    %of dSPACE have compatibility problems with double quotes.
    if ARGS.ShouldReplaceDoubleQuotes
        MaskBlockList = cellstr2(find_system(ModelFileName, 'SearchDepth', 1, 'LookUnderMasks', 'off', 'FollowLinks', 'off', 'RegExp', 'on', 'Mask', 'on', 'MaskDescription', '.*".*'));
        for MaskBlockCtr = 1:numel(MaskBlockList)
            set_param(MaskBlockList{MaskBlockCtr}, 'MaskDescription', strrep(get_param(MaskBlockList{MaskBlockCtr}, 'MaskDescription'), '"', ''''''));
        end
        
        MaskBlockList = cellstr2(find_system(ModelFileName, 'SearchDepth', 1, 'LookUnderMasks', 'off', 'FollowLinks', 'off', 'RegExp', 'on', 'Mask', 'on', 'Description', '.*".*'));
        for MaskBlockCtr = 1:numel(MaskBlockList)
            set_param(MaskBlockList{MaskBlockCtr}, 'Description', strrep(get_param(MaskBlockList{MaskBlockCtr}, 'Description'), '"', ''''''));
        end
    end
    
    %Identifying all Continental MBDS blocks. It is being assumed that
    %any block which has the property MBDS_BlockVersion is a Continental
    %MBDS block
    MBDSBlockPathList = cellstr2(find_system(ModelFileName, 'LookUnderMasks', 'all', 'FollowLinks', 'off', 'Mask', 'on', 'MBDS_LibraryBlock', 'on'));
    MBDSBlockPathList = flipud(unique(MBDSBlockPathList)); %This statement also sorts the array
    MBDSBlockList = cellfun(@(X) get_param(X, 'Handle'), MBDSBlockPathList(:));
    
    if ~isempty(MBDSBlockList)
        MaskTypeList = cellstr2(get(MBDSBlockList, 'MaskType'));
        
        %Sundeep Tuteja, 2016-05-20: All KIBES_Signal input blocks needs to be replaced by data store reads
        %Similarly, all KIBES_Signal output blocks need to be replaced
        %with datastore writes
        KIBES_Signal_Blocks.Handles = MBDSBlockList(strcmp('KIBES_Signal', MaskTypeList));
        if ~isempty(KIBES_Signal_Blocks.Handles)
            KIBES_Signal_Blocks.PortHandles = get(KIBES_Signal_Blocks.Handles, 'PortHandles');
            if ~iscell(KIBES_Signal_Blocks.PortHandles)
                KIBES_Signal_Blocks.PortHandles = {KIBES_Signal_Blocks.PortHandles};
            end
            KIBES_Signal_Blocks.Positions = get(KIBES_Signal_Blocks.Handles, 'Position');
            if ~iscell(KIBES_Signal_Blocks.Positions)
                KIBES_Signal_Blocks.Positions = {KIBES_Signal_Blocks.Positions};
            end
            KIBES_Signal_Blocks.Parents = cellstr2(get(KIBES_Signal_Blocks.Handles, 'Parent'));
            KIBES_Signal_Blocks.Names = cellstr2(get(KIBES_Signal_Blocks.Handles, 'Name'));
            KIBES_Signal_Blocks.ASAP2_Identifiers = regexprep(KIBES_Signal_Blocks.Names, '^((in_)|(out_))', '');
            
            KIBES_Signal_Blocks.Type = cell(numel(KIBES_Signal_Blocks.Handles), 1);
            indices = cellfun(@(X) isempty(X.Inport) && ~isempty(X.Outport), KIBES_Signal_Blocks.PortHandles);
            KIBES_Signal_Blocks.Type(indices) = {'IN'};
            indices = cellfun(@(X) ~isempty(X.Inport) && isempty(X.Outport), KIBES_Signal_Blocks.PortHandles);
            KIBES_Signal_Blocks.Type(indices) = {'OUT'};
            
            KIBES_Signal_Blocks.SymbolNames = cellstr2(get(KIBES_Signal_Blocks.Handles, 'SymbolName'));
            KIBES_SYMBOL_MAP_SIGNALS{KIBES_SYMBOL_SIGNALS_CTR, 1} = PTC_MBDS_KIBES_SymbolMap('KIBES_Symbol_Names', KIBES_Signal_Blocks.SymbolNames, 'KIBES_Names', KIBES_Signal_Blocks.Names);
            KIBES_SYMBOL_SIGNALS_CTR = KIBES_SYMBOL_SIGNALS_CTR + 1;
            KIBES_Signal_Blocks.DataSizes = str2double(cellstr2(get(KIBES_Signal_Blocks.Handles, 'DataSize')));
            KIBES_Signal_Blocks.Slopes = str2double(cellstr2(get(KIBES_Signal_Blocks.Handles, 'Slope')));
            KIBES_Signal_Blocks.Biases = str2double(cellstr2(get(KIBES_Signal_Blocks.Handles, 'Bias')));
            KIBES_Signal_Blocks.Units = cellstr2(get(KIBES_Signal_Blocks.Handles, 'Unit'));
            %Sundeep Tuteja, 2017-01-05: Beginning with MBDS 5.40, this
            %statement doesn't seem to be working. Hence the exception
            %handling workaround below.
            try
                KIBES_Signal_Blocks.DataTypes = cellstr2(get(KIBES_Signal_Blocks.Handles, 'DataType'));
            catch
                KIBES_Signal_Blocks.DataTypes = cellfun(@(X) get_param(X, 'DataType'), strcat2(KIBES_Signal_Blocks.Parents, '/', KIBES_Signal_Blocks.Names), 'UniformOutput', false);
            end
            KIBES_Signal_Blocks.DataTypes(KIBES_Signal_Blocks.Slopes ~= 1 | KIBES_Signal_Blocks.Biases ~= 0 | strcmp('double', KIBES_Signal_Blocks.DataTypes)) = {'single'};
            
            VarsToKeep = fieldnames(workspacestruct('Workspace', 'base'));
            if strcmp(ModelFileName, 'MBDS_Applications')
                AppList = find_system(ModelFileName, 'SearchDepth', 1, 'FindAll', 'on', 'MBDS_ElementType', 'Application');
                AppList = cellstr2(get(AppList, 'Name'));
                %Sundeep Tuteja, 2018-03-13: This step instantiates the
                %associated Simulink.Signal objects in the base workspace. This
                %property can be useful to extract accurate information.
                currdir = pwd;
                for AppCtr = 1:numel(AppList)
                    if exist(fullfile(ARGS.MBDS_PROJECT_ROOT, 'Applications', AppList{AppCtr}, [AppList{AppCtr} '.slx']), 'file')
                        cd(fullfile(ARGS.MBDS_PROJECT_ROOT, 'Applications', AppList{AppCtr}));
                        if bdIsLoaded(AppList{AppCtr})
                            close_system(AppList{AppCtr});
                        end
                        load_system(AppList{AppCtr});
                        close_system(AppList{AppCtr});
                        cd(currdir);
                    end
                end
            end
            BaseWorkspaceStruct = workspacestruct('Workspace', 'base');
            BaseWorkspaceStruct = partialstruct(BaseWorkspaceStruct, setdiff(fieldnames(BaseWorkspaceStruct), VarsToKeep));
            evalin('base', ['clearvars(''-except'', ''' strimplode(VarsToKeep, ''', ''') ''');']);
            
            for ctr = rowvec(find(strcmp('IN', KIBES_Signal_Blocks.Type)))
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}) = ptc_matlab_lib.PTC_MBDS_Signal;
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Complexity = 'real';
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).SamplingMode = 'Sample based';
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).DataType = KIBES_Signal_Blocks.DataTypes{ctr};
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Dimensions = KIBES_Signal_Blocks.DataSizes(ctr);
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).DimensionsMode = 'Fixed';
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).DocUnits = KIBES_Signal_Blocks.Units{ctr};
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).CoderInfo.StorageClass = 'ExportedGlobal';
                %SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).CoderInfo.Alias = KIBES_Signal_Blocks.SymbolNames{ctr};
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).ASAP2_Identifier = KIBES_Signal_Blocks.ASAP2_Identifiers{ctr};
                if isfield(BaseWorkspaceStruct, KIBES_Signal_Blocks.SymbolNames{ctr}) && isa(BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}), 'Simulink.Signal')
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Description = BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Description;
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Min = double(BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Min);
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Max = double(BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Max);
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).InitialValue = BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).InitialValue;
                end
                
                disp([isodatetime ' - ' mfilename ' - Replacing block ' KIBES_Signal_Blocks.Parents{ctr} '/' KIBES_Signal_Blocks.Names{ctr}]);
                replaced_block = replace_block([KIBES_Signal_Blocks.Parents{ctr} '/' KIBES_Signal_Blocks.Names{ctr}], ...
                    'LookUnderMasks', 'all', ...
                    'FollowLinks', 'off', ...
                    'SearchDepth', 0, ...
                    'Name', KIBES_Signal_Blocks.Names{ctr}, ...
                    'PTC_MBDS_LIB/Signal Routing/Data_Store_Read_Reference', ...
                    'noprompt');
                assert(numel(replaced_block) == 1);
                
                set_param(replaced_block{1}, 'MapObjectName', 'KIBES_SYMBOL_MAP_SIGNALS');
                set_param(replaced_block{1}, 'KIBESName', KIBES_Signal_Blocks.Names{ctr});
                set_param(replaced_block{1}, 'Position', KIBES_Signal_Blocks.Positions{ctr});
                set_param(replaced_block{1}, 'ShowName', 'off');
            end
            
            for ctr = rowvec(find(strcmp('OUT', KIBES_Signal_Blocks.Type)))
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}) = ptc_matlab_lib.PTC_MBDS_Signal;
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Complexity = 'real';
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).SamplingMode = 'Sample based';
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).DataType = KIBES_Signal_Blocks.DataTypes{ctr};
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Dimensions = KIBES_Signal_Blocks.DataSizes(ctr);
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).DimensionsMode = 'Fixed';
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).DocUnits = KIBES_Signal_Blocks.Units{ctr};
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).CoderInfo.StorageClass = 'ExportedGlobal';
                %SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).CoderInfo.Alias = KIBES_Signal_Blocks.SymbolNames{ctr};
                SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).ASAP2_Identifier = KIBES_Signal_Blocks.ASAP2_Identifiers{ctr};
                if isfield(BaseWorkspaceStruct, KIBES_Signal_Blocks.SymbolNames{ctr}) && isa(BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}), 'Simulink.Signal')
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Description = BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Description;
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Min = double(BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Min);
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Max = double(BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).Max);
                    SignalObjStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).InitialValue = BaseWorkspaceStruct.(KIBES_Signal_Blocks.SymbolNames{ctr}).InitialValue;
                end
                
                disp([isodatetime ' - ' mfilename ' - Replacing block ' KIBES_Signal_Blocks.Parents{ctr} '/' KIBES_Signal_Blocks.Names{ctr}]);
                replaced_block = replace_block([KIBES_Signal_Blocks.Parents{ctr} '/' KIBES_Signal_Blocks.Names{ctr}], ...
                    'LookUnderMasks', 'all', ...
                    'FollowLinks', 'off', ...
                    'SearchDepth', 0, ...
                    'Name', KIBES_Signal_Blocks.Names{ctr}, ...
                    'PTC_MBDS_LIB/Signal Routing/Data_Store_Write_Reference', ...
                    'noprompt');
                assert(numel(replaced_block) == 1);
                
                set_param(replaced_block{1}, 'MapObjectName', 'KIBES_SYMBOL_MAP_SIGNALS');
                set_param(replaced_block{1}, 'KIBESName', KIBES_Signal_Blocks.Names{ctr});
                set_param(replaced_block{1}, 'Position', KIBES_Signal_Blocks.Positions{ctr});
                set_param(replaced_block{1}, 'ShowName', 'off');
            end
        end
        
        %Sundeep Tuteja, 2016-05-23: Identify KIBES_VirtualConnector
        %blocks and replace them with DataStoreReads and DataStoreWrites
        %as well.
        KIBES_VirtualConnector_Blocks.Handles = MBDSBlockList(strcmp('KIBES_VirtualConnector', MaskTypeList));
        if ~isempty(KIBES_VirtualConnector_Blocks.Handles)
            KIBES_VirtualConnector_Blocks.PortHandles = get(KIBES_VirtualConnector_Blocks.Handles, 'PortHandles');
            if ~iscell(KIBES_VirtualConnector_Blocks.PortHandles)
                KIBES_VirtualConnector_Blocks.PortHandles = {KIBES_VirtualConnector_Blocks.PortHandles};
            end
            KIBES_VirtualConnector_Blocks.Positions = get(KIBES_VirtualConnector_Blocks.Handles, 'Position');
            if ~iscell(KIBES_VirtualConnector_Blocks.Positions)
                KIBES_VirtualConnector_Blocks.Positions = {KIBES_VirtualConnector_Blocks.Positions};
            end
            KIBES_VirtualConnector_Blocks.Parents = cellstr2(get(KIBES_VirtualConnector_Blocks.Handles, 'Parent'));
            KIBES_VirtualConnector_Blocks.Names = cellstr2(get(KIBES_VirtualConnector_Blocks.Handles, 'Name'));
            
            KIBES_VirtualConnector_Blocks.Type = cell(numel(KIBES_VirtualConnector_Blocks.Handles), 1);
            indices = cellfun(@(X) isempty(X.Inport) && ~isempty(X.Outport), KIBES_VirtualConnector_Blocks.PortHandles);
            KIBES_VirtualConnector_Blocks.Type(indices) = {'IN'};
            indices = cellfun(@(X) ~isempty(X.Inport) && isempty(X.Outport), KIBES_VirtualConnector_Blocks.PortHandles);
            KIBES_VirtualConnector_Blocks.Type(indices) = {'OUT'};
            
            KIBES_VirtualConnector_Blocks.SymbolNames = cellstr2(get(KIBES_VirtualConnector_Blocks.Handles, 'SymbolName'));
            KIBES_SYMBOL_MAP_SIGNALS{KIBES_SYMBOL_SIGNALS_CTR, 1} = PTC_MBDS_KIBES_SymbolMap('KIBES_Symbol_Names', KIBES_VirtualConnector_Blocks.SymbolNames, 'KIBES_Names', KIBES_VirtualConnector_Blocks.Names);
            KIBES_SYMBOL_SIGNALS_CTR = KIBES_SYMBOL_SIGNALS_CTR + 1;
            
            for ctr = rowvec(find(strcmp('IN', KIBES_VirtualConnector_Blocks.Type)))
                disp([isodatetime ' - ' mfilename ' - Replacing block ' KIBES_VirtualConnector_Blocks.Parents{ctr} '/' KIBES_VirtualConnector_Blocks.Names{ctr}]);
                replaced_block = replace_block([KIBES_VirtualConnector_Blocks.Parents{ctr} '/' KIBES_VirtualConnector_Blocks.Names{ctr}], ...
                    'LookUnderMasks', 'all', ...
                    'FollowLinks', 'off', ...
                    'SearchDepth', 0, ...
                    'Name', KIBES_VirtualConnector_Blocks.Names{ctr}, ...
                    'PTC_MBDS_LIB/Signal Routing/Data_Store_Read_Reference', ...
                    'noprompt');
                assert(numel(replaced_block) == 1);
                
                set_param(replaced_block{1}, 'MapObjectName', 'KIBES_SYMBOL_MAP_SIGNALS');
                set_param(replaced_block{1}, 'KIBESName', KIBES_VirtualConnector_Blocks.Names{ctr});
                set_param(replaced_block{1}, 'Position', KIBES_VirtualConnector_Blocks.Positions{ctr});
                set_param(replaced_block{1}, 'ShowName', 'off');
            end
            
            for ctr = rowvec(find(strcmp('OUT', KIBES_VirtualConnector_Blocks.Type)))
                disp([isodatetime ' - ' mfilename ' - Replacing block ' KIBES_VirtualConnector_Blocks.Parents{ctr} '/' KIBES_VirtualConnector_Blocks.Names{ctr}]);
                replaced_block = replace_block([KIBES_VirtualConnector_Blocks.Parents{ctr} '/' KIBES_VirtualConnector_Blocks.Names{ctr}], ...
                    'LookUnderMasks', 'all', ...
                    'FollowLinks', 'off', ...
                    'SearchDepth', 0, ...
                    'Name', KIBES_VirtualConnector_Blocks.Names{ctr}, ...
                    'PTC_MBDS_LIB/Signal Routing/Data_Store_Write_Reference', ...
                    'noprompt');
                assert(numel(replaced_block) == 1);
                
                set_param(replaced_block{1}, 'MapObjectName', 'KIBES_SYMBOL_MAP_SIGNALS');
                set_param(replaced_block{1}, 'KIBESName', KIBES_VirtualConnector_Blocks.Names{ctr});
                set_param(replaced_block{1}, 'Position', KIBES_VirtualConnector_Blocks.Positions{ctr});
                set_param(replaced_block{1}, 'ShowName', 'off');
            end
        end
        
        PTC_MBDS_BlockList = get_conversion_table(MaskTypeList);
        indices = cellfun(@isempty, PTC_MBDS_BlockList);
        PTC_MBDS_BlockList(indices) = [];
        MBDSBlockList(indices) = [];
        
        if ~isempty(MBDSBlockList)
            LinkStatusList = cellstr2(get_param(get(MBDSBlockList, 'Parent'), 'LinkStatus'));
            indices = ~strcmp('none', LinkStatusList);
            PTC_MBDS_BlockList(indices) = [];
            MBDSBlockList(indices) = [];
            
            if ~isempty(MBDSBlockList)
                %Obtain mask parameter list. This list will have to be restored for
                %every block that is replaced.
                MBDSMaskNamesList = get(MBDSBlockList, 'MaskNames');
                if ischar(MBDSMaskNamesList)
                    MBDSMaskNamesList = {cellstr2(MBDSMaskNamesList)};
                elseif iscellstr(MBDSMaskNamesList)
                    MBDSMaskNamesList = {MBDSMaskNamesList};
                end
                MBDSMaskNamesList = MBDSMaskNamesList(:);
                
                MBDSMaskValuesList = get(MBDSBlockList, 'MaskValues');
                if ischar(MBDSMaskValuesList)
                    MBDSMaskValuesList = {cellstr2(MBDSMaskValuesList)};
                elseif iscellstr(MBDSMaskValuesList)
                    MBDSMaskValuesList = {MBDSMaskValuesList};
                end
                MBDSMaskValuesList = MBDSMaskValuesList(:);
                
                PortHandlesList = get(MBDSBlockList, 'PortHandles');
                if ~iscell(PortHandlesList)
                    PortHandlesList = {PortHandlesList};
                end
                
                MBDSBlockNameList = cellstr2(get(MBDSBlockList, 'Name'));
                
                MBDSBlockPathList = strcat2(cellstr2(get(MBDSBlockList, 'Path')), '/', MBDSBlockNameList);
                
                MBDSBlockPositionList = get(MBDSBlockList, 'Position');
                if ~iscell(MBDSBlockPositionList)
                    MBDSBlockPositionList = {MBDSBlockPositionList};
                end
                
                for MBDSBlockCtr = 1:numel(MBDSBlockList)
                    %Obtain InputLineSrcPortList and InputLineDstPortList
                    if ~isempty(PortHandlesList{MBDSBlockCtr}.Inport)
                        InputLineHandles = get(PortHandlesList{MBDSBlockCtr}.Inport, 'Line');
                        if iscell(InputLineHandles)
                            InputLineHandles = cell2mat(InputLineHandles);
                        end
                        InputLineHandles(InputLineHandles == -1) = [];
                        InputLineSrcPortHandles = get(InputLineHandles, 'SrcPortHandle');
                        if iscell(InputLineSrcPortHandles)
                            InputLineSrcPortHandles = cell2mat(InputLineSrcPortHandles);
                        end
                        InputLineSrcPortHandles = unique(InputLineSrcPortHandles);
                        
                        InputLineHandles = get(InputLineSrcPortHandles, 'Line');
                        if iscell(InputLineHandles)
                            InputLineHandles = cell2mat(InputLineHandles);
                        end
                        InputLineHandles(InputLineHandles == -1) = [];
                        InputLineDstPortHandles = get(InputLineHandles, 'DstPortHandle');
                        if ~iscell(InputLineDstPortHandles)
                            InputLineDstPortHandles = {InputLineDstPortHandles};
                        end
                        
                        if ~isempty(InputLineSrcPortHandles)
                            InputLineSrcPortParentList = cellstr2(get(InputLineSrcPortHandles, 'Parent'));
                            temp = cellfun(@(X) get_param(X, 'Parent'), InputLineSrcPortParentList, 'UniformOutput', false);
                            InputLineSrcPortParentNameList = cellfun(@(X, Y) regexprep(X, ['^' regexptranslate('escape', Y) '/'], ''), InputLineSrcPortParentList, temp, 'UniformOutput', false);
                            InputLineSrcPortNumberList = get(InputLineSrcPortHandles, 'PortNumber');
                            if iscell(InputLineSrcPortNumberList)
                                InputLineSrcPortNumberList = strtrim(cellstr2(num2str(cell2mat(InputLineSrcPortNumberList))));
                            else
                                InputLineSrcPortNumberList = strtrim(cellstr2(num2str(InputLineSrcPortNumberList)));
                            end
                            InputLineSrcPortList = strcat2(InputLineSrcPortParentNameList, '/', InputLineSrcPortNumberList);
                            
                            InputLineDstPortNumberList = cell(numel(InputLineDstPortHandles), 1);
                            InputLineDstPortTypeList = cellfun(@(X) ptc_matlab_lib.cellstr2(get(X, 'PortType')), InputLineDstPortHandles, 'UniformOutput', false);
                            InputLineDstPortParentList = cellfun(@(X) ptc_matlab_lib.cellstr2(get(X, 'Parent')), InputLineDstPortHandles, 'UniformOutput', false);
                            InputLineDstPortParentNameList = cell(numel(InputLineDstPortHandles), 1);
                            InputLineDstPortList = cell(numel(InputLineDstPortHandles), 1);
                            for ctr = 1:numel(InputLineDstPortParentList)
                                temp = cellfun(@(X) get_param(X, 'Parent'), InputLineDstPortParentList{ctr}, 'UniformOutput', false);
                                InputLineDstPortParentNameList{ctr} = cellfun(@(X, Y) regexprep(X, ['^' regexptranslate('escape', Y) '/'], ''), InputLineDstPortParentList{ctr}, temp, 'UniformOutput', false);
                                InputLineDstPortNumberList{ctr} = get(InputLineDstPortHandles{ctr}, 'PortNumber');
                                if iscell(InputLineDstPortNumberList{ctr})
                                    InputLineDstPortNumberList{ctr} = strtrim(cellstr2(num2str(cell2mat(InputLineDstPortNumberList{ctr}))));
                                else
                                    InputLineDstPortNumberList{ctr} = strtrim(cellstr2(num2str(InputLineDstPortNumberList{ctr})));
                                end
                                InputLineDstPortTypeList_for_addline = InputLineDstPortNumberList{ctr};
                                InputLineDstPortTypeList_for_addline(strcmp('enable', InputLineDstPortTypeList{ctr})) = {'Enable'};
                                InputLineDstPortTypeList_for_addline(strcmp('trigger', InputLineDstPortTypeList{ctr})) = {'Trigger'};
                                InputLineDstPortTypeList_for_addline(strcmp('ifaction', InputLineDstPortTypeList{ctr})) = {'Ifaction'};
                                InputLineDstPortTypeList_for_addline(strcmp('state', InputLineDstPortTypeList{ctr})) = {'State'};
                                InputLineDstPortList{ctr} = strcat2(InputLineDstPortParentNameList{ctr}, '/', InputLineDstPortTypeList_for_addline);
                            end
                        else
                            InputLineHandles = zeros(0, 1);
                            InputLineSrcPortList = cell(0, 1);
                        end
                    else
                        InputLineHandles = zeros(0, 1);
                        InputLineSrcPortList = cell(0, 1);
                    end
                    
                    %Obtain OutputLineSrcPortList and OutputLineDstPortList
                    if ~isempty(PortHandlesList{MBDSBlockCtr}.Outport)
                        OutputLineHandles = get(PortHandlesList{MBDSBlockCtr}.Outport, 'Line');
                        if iscell(OutputLineHandles)
                            OutputLineHandles = cell2mat(OutputLineHandles);
                        end
                        OutputLineHandles(OutputLineHandles == -1) = [];
                        OutputLineSrcPortHandles = get(OutputLineHandles, 'SrcPortHandle');
                        %Sundeep Tuteja, 2019-03-28: Escape to deal with lines
                        %with no source port
                        if iscell(OutputLineSrcPortHandles)
                            OutputLineSrcPortHandles = cell2mat(OutputLineSrcPortHandles);
                        end
                        OutputLineSrcPortHandles(OutputLineSrcPortHandles == -1) = [];
                        
                        OutputLineDstPortHandles = get(OutputLineHandles, 'DstPorthandle');
                        %Sundeep Tuteja, 2019-03-28: Escape to deal with lines
                        %with no destination port. The resulting cell array
                        %OutputLineDstPortHandles may contain empty elements,
                        %that could be thought of as terminators for the purpose
                        %of this script.
                        if ~iscell(OutputLineDstPortHandles)
                            OutputLineDstPortHandles = {OutputLineDstPortHandles};
                        end
                        for OutputLineDstPortHandlesCtr = 1:numel(OutputLineDstPortHandles)
                            OutputLineDstPortHandles{OutputLineDstPortHandlesCtr}(OutputLineDstPortHandles{OutputLineDstPortHandlesCtr} == -1) = [];
                            OutputLineDstPortHandles{OutputLineDstPortHandlesCtr} = OutputLineDstPortHandles{OutputLineDstPortHandlesCtr}(:);
                        end
                        
                        if ~isempty(OutputLineSrcPortHandles)
                            OutputLineSrcPortParentList = cellstr2(get(OutputLineSrcPortHandles, 'Parent'));
                            temp = cellfun(@(X) get_param(X, 'Parent'), OutputLineSrcPortParentList, 'UniformOutput', false);
                            OutputLineSrcPortParentNameList = cellfun(@(X, Y) regexprep(X, ['^' regexptranslate('escape', Y) '/'], ''), OutputLineSrcPortParentList, temp, 'UniformOutput', false);
                            OutputLineSrcPortNumberList = get(OutputLineSrcPortHandles, 'PortNumber');
                            if iscell(OutputLineSrcPortNumberList)
                                OutputLineSrcPortNumberList = strtrim(cellstr2(num2str(cell2mat(OutputLineSrcPortNumberList))));
                            else
                                OutputLineSrcPortNumberList = strtrim(cellstr2(num2str(OutputLineSrcPortNumberList)));
                            end
                            OutputLineSrcPortList = strcat2(OutputLineSrcPortParentNameList, '/', OutputLineSrcPortNumberList);
                            
                            OutputLineDstPortNumberList = cell(numel(OutputLineDstPortHandles), 1);
                            OutputLineDstPortTypeList = cell(numel(OutputLineDstPortHandles), 1);
                            OutputLineDstPortParentList = cell(numel(OutputLineDstPortHandles), 1);
                            for ctr = 1:numel(OutputLineDstPortHandles)
                                if ~isempty(OutputLineDstPortHandles{ctr})
                                    OutputLineDstPortTypeList{ctr} = cellstr2(get(OutputLineDstPortHandles{ctr}, 'PortType'));
                                    OutputLineDstPortParentList{ctr} = cellstr2(get(OutputLineDstPortHandles{ctr}, 'Parent'));
                                else
                                    OutputLineDstPortTypeList{ctr} = cell(0, 1);
                                    OutputLineDstPortParentList{ctr} = cell(0, 1);
                                end
                            end
                            %OutputLineDstPortTypeList = cellfun(@(X) ptc_matlab_lib.cellstr2(get(X, 'PortType')), OutputLineDstPortHandles, 'UniformOutput', false);
                            %OutputLineDstPortParentList = cellfun(@(X) ptc_matlab_lib.cellstr2(get(X, 'Parent')), OutputLineDstPortHandles, 'UniformOutput', false);
                            OutputLineDstPortParentNameList = cell(numel(OutputLineDstPortHandles), 1);
                            OutputLineDstPortList = cell(numel(OutputLineDstPortHandles), 1);
                            for ctr = 1:numel(OutputLineDstPortParentList)
                                OutputLineDstPortParentNameList{ctr} = cell(numel(OutputLineDstPortHandles{ctr}), 1);
                                OutputLineDstPortNumberList{ctr} = cell(numel(OutputLineDstPortHandles{ctr}), 1);
                                assert(numel(OutputLineDstPortHandles{ctr}) == numel(OutputLineDstPortParentList{ctr}));
                                for ctr2 = 1:numel(OutputLineDstPortParentList{ctr})
                                    if ~isempty(OutputLineDstPortParentList{ctr}{ctr2})
                                        temp = get_param(OutputLineDstPortParentList{ctr}{ctr2}, 'Parent');
                                        OutputLineDstPortParentNameList{ctr}{ctr2} = regexprep(OutputLineDstPortParentList{ctr}{ctr2}, ['^' regexptranslate('escape', temp) '/'], '');
                                        OutputLineDstPortNumberList{ctr}{ctr2} = num2str(get(OutputLineDstPortHandles{ctr}(ctr2), 'PortNumber'));
                                    else
                                        OutputLineDstPortParentNameList{ctr}{ctr2} = '';
                                        OutputLineDstPortNumberList{ctr}{ctr2} = '';
                                    end
                                end
                                OutputLineDstPortTypeList_for_addline = OutputLineDstPortNumberList{ctr};
                                OutputLineDstPortTypeList_for_addline(strcmp('enable', OutputLineDstPortTypeList{ctr})) = {'Enable'};
                                OutputLineDstPortTypeList_for_addline(strcmp('trigger', OutputLineDstPortTypeList{ctr})) = {'Trigger'};
                                OutputLineDstPortTypeList_for_addline(strcmp('ifaction', OutputLineDstPortTypeList{ctr})) = {'Ifaction'};
                                OutputLineDstPortTypeList_for_addline(strcmp('state', OutputLineDstPortTypeList{ctr})) = {'State'};
                                OutputLineDstPortList{ctr} = cell(numel(OutputLineDstPortParentNameList{ctr}), 1);
                                assert(numel(OutputLineDstPortParentNameList{ctr}) == numel(OutputLineDstPortTypeList_for_addline));
                                for ctr2 = 1:numel(OutputLineDstPortParentNameList{ctr})
                                    if ~isempty(OutputLineDstPortTypeList_for_addline{ctr2})
                                        OutputLineDstPortList{ctr}{ctr2} = strcat2(OutputLineDstPortParentNameList{ctr}{ctr2}, '/', OutputLineDstPortTypeList_for_addline{ctr2});
                                    else
                                        OutputLineDstPortList{ctr}{ctr2} = '';
                                    end
                                end
                            end
                        else
                            OutputLineHandles = zeros(0, 1);
                            OutputLineSrcPortList = cell(0, 1);
                        end
                    else
                        OutputLineHandles = zeros(0, 1);
                        OutputLineSrcPortList = cell(0, 1);
                    end
                    
                    %Commence block replacement
                    if ~isempty(InputLineHandles)
                        delete(InputLineHandles);
                    end
                    if ~isempty(OutputLineHandles)
                        delete(OutputLineHandles);
                    end
                    
                    disp([isodatetime ' - ' mfilename ' - Replacing block ' MBDSBlockPathList{MBDSBlockCtr}]);
                    InportNamesList = cell(0, 1);
                    OutportNamesList = cell(0, 1);
                    if ~isempty(PortHandlesList{MBDSBlockCtr}.Inport)
                        InportNamesList = cellstr2(get(PortHandlesList{MBDSBlockCtr}.Inport, 'Name'));
                    end
                    if ~isempty(PortHandlesList{MBDSBlockCtr}.Outport)
                        OutportNamesList = cellstr2(get(PortHandlesList{MBDSBlockCtr}.Outport, 'Name'));
                    end
                    replaced_block = replace_block(MBDSBlockPathList{MBDSBlockCtr}, 'LookUnderMasks', 'all', 'FollowLinks', 'off', 'SearchDepth', 0, 'Name', MBDSBlockNameList{MBDSBlockCtr}, PTC_MBDS_BlockList{MBDSBlockCtr}, 'noprompt');
                    assert(numel(replaced_block) == 1);
                    PTCMBDSMaskNames = get_param(replaced_block{1}, 'MaskNames');
                    [common_params, idx_mbds, idx_ptc_mbds] = intersect(MBDSMaskNamesList{MBDSBlockCtr}, PTCMBDSMaskNames);
                    thisMBDSMaskValues = MBDSMaskValuesList{MBDSBlockCtr}(idx_mbds);
                    
                    ShouldRepeat = true;
                    timeoutcounter = 1;
                    while ShouldRepeat && timeoutcounter <= 100
                        for ctr = 1:numel(common_params)
                            set_param(replaced_block{1}, common_params{ctr}, thisMBDSMaskValues{ctr});
                        end
                        PTCMBDSMaskValues = get_param(replaced_block{1}, 'MaskValues');
                        thisPTCMBDSMaskValues = PTCMBDSMaskValues(idx_ptc_mbds);
                        ShouldRepeat = ~isequaln(thisMBDSMaskValues, thisPTCMBDSMaskValues);
                        timeoutcounter = timeoutcounter + 1;
                    end
                    if ShouldRepeat
                        error([mfilename ':' thisfuncname ':UnableToTransferParameters'], ['Unable to transfer parameters to block ' replaced_block{1}]);
                    end
                    
                    set_param(replaced_block{1}, 'Position', MBDSBlockPositionList{MBDSBlockCtr});
                    
                    NewPortHandles = get_param(replaced_block{1}, 'PortHandles');
                    for ctr = 1:numel(NewPortHandles.Inport)
                        set(NewPortHandles.Inport(ctr), 'Name', InportNamesList{ctr});
                    end
                    for ctr = 1:numel(NewPortHandles.Outport)
                        set(NewPortHandles.Outport(ctr), 'Name', OutportNamesList{ctr});
                    end
                    if ~isempty(NewPortHandles.Inport)
                        assert(all(strcmp(cellstr2(get(NewPortHandles.Inport, 'Name')), InportNamesList)));
                    end
                    if ~isempty(NewPortHandles.Outport)
                        assert(all(strcmp(cellstr2(get(NewPortHandles.Outport, 'Name')), OutportNamesList)));
                    end
                    
                    for ctr = 1:numel(InputLineSrcPortList)
                        for ctr2 = 1:numel(InputLineDstPortList{ctr})
                            add_line(get_param(replaced_block{1}, 'Parent'), InputLineSrcPortList{ctr}, InputLineDstPortList{ctr}{ctr2}, 'autorouting', 'on');
                        end
                    end
                    
                    for ctr = 1:numel(OutputLineSrcPortList)
                        for ctr2 = 1:numel(OutputLineDstPortList{ctr})
                            if ~isempty(OutputLineDstPortList{ctr}{ctr2})
                                add_line(get_param(replaced_block{1}, 'Parent'), OutputLineSrcPortList{ctr}, OutputLineDstPortList{ctr}{ctr2}, 'autorouting', 'on');
                            end
                        end
                    end
                end
            end
        end
    end
    
    if ARGS.ShouldReplaceDoubleQuotes
        blocklist = find_system(bdroot(ModelFileName), 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'RegExp', 'on', 'Description', '.*".*');
        s = warning('off', 'Simulink:Commands:SetParamLinkChangeWarn');
        for dquotectr = 1:numel(blocklist)
            set_param(blocklist{dquotectr}, 'Description', strrep(get_param(blocklist{dquotectr}, 'Description'), '"', ''''''));
        end
        warning(s.state, 'Simulink:Commands:SetParamLinkChangeWarn');
    end
    
    if ShouldLock
        set_param(ModelFileName, 'Lock', 'on');
    end
    
    [ModelFileDir, ModelFileName, ModelFileExt] = fileparts(ARGS.FileList{mdlctr});
    [~, dirname] = fileparts(ModelFileDir);
    disp([isodatetime ' - ' mfilename ' - Saving system ' ARGS.FileList{mdlctr} ' as ' fullfile(ARGS.RCP_ROOT, dirname, [ModelFileName ModelFileExt])]);
    if ~exist(fullfile(ARGS.RCP_ROOT, dirname), 'dir')
        mkdir(fullfile(ARGS.RCP_ROOT, dirname));
    end
    save_system(ARGS.FileList{mdlctr}, fullfile(ARGS.RCP_ROOT, dirname, [ModelFileName ModelFileExt]));
    
    %Close bdroot(gcs)
    close_system(ModelFileName);
end

%Reorganizing symbol map to ensure we always have access to a mapping
%between every symbol name and every signal name
KIBES_SYMBOL_MAP_SIGNALS = KIBES_SYMBOL_MAP_SIGNALS(~cellfun(@isempty, KIBES_SYMBOL_MAP_SIGNALS));
if ~isempty(KIBES_SYMBOL_MAP_SIGNALS)
    KIBESSymbolNameList = cellfun(@(X) ptc_matlab_lib.columnvec(X.KIBES_Symbol_Names), KIBES_SYMBOL_MAP_SIGNALS, 'UniformOutput', false);
    KIBESNameList = cellfun(@(X) ptc_matlab_lib.columnvec(X.KIBES_Names), KIBES_SYMBOL_MAP_SIGNALS, 'UniformOutput', false);
    KIBES_SYMBOL_MAP_SIGNALS = PTC_MBDS_KIBES_SymbolMap('KIBES_Symbol_Names', cat(1, KIBESSymbolNameList{:}), ...
        'KIBES_Names', cat(1, KIBESNameList{:}));
end

%Saving signals data dictionary
ticid = tic;
if ~exist(fileparts(ARGS.OutputSignalFilePath), 'dir')
    mkdir(fileparts(ARGS.OutputSignalFilePath));
end
fprintf([isodatetime ' - ' mfilename ' - Generating output signal list...']);
if exist(ARGS.InputSignalFilePath, 'file')
    [~, InputSignalFileName] = fileparts(ARGS.InputSignalFilePath);
    InputSignalWorkspaceStruct = struct;
    evalsafe([InputSignalFileName '; InputSignalWorkspaceStruct = ptc_matlab_lib.workspacestruct(''Workspace'', ''caller''); InputSignalWorkspaceStruct = rmfield(InputSignalWorkspaceStruct, {''zzz_internal_Z5i5NgrI88''; ''InputSignalWorkspaceStruct''});'], {}, {'InputSignalWorkspaceStruct', InputSignalWorkspaceStruct});
    SignalObjStruct = structcopy(SignalObjStruct, InputSignalWorkspaceStruct);
end
fields = fieldnames(SignalObjStruct);
for thisField = (fields(:)).'
    if isa(SignalObjStruct.(thisField{1}), 'Simulink.Signal')
        SignalObjStruct.(thisField{1}) = ptc_matlab_lib.PTC_MBDS_Signal(SignalObjStruct.(thisField{1}));
        SignalObjStruct.(thisField{1}).Complexity = 'real';
        SignalObjStruct.(thisField{1}).SamplingMode = 'Sample based';
        SignalObjStruct.(thisField{1}).DimensionsMode = 'Fixed';
        %if isempty(SignalObjStruct.(thisField{1}).CoderInfo.Alias)
        %    SignalObjStruct.(thisField{1}).CoderInfo.Alias = thisField{1};
        %end
        if isempty(SignalObjStruct.(thisField{1}).ASAP2_Identifier)
            SignalObjStruct.(thisField{1}).ASAP2_Identifier = thisField{1};
        end
    end
end
if ~exist(fileparts(ARGS.OutputSignalFilePath), 'dir')
    mkdir(fileparts(ARGS.OutputSignalFilePath));
end
fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);

%Mangling ASAP2 Identifiers as needed
asap2ids = [cellfun(@(X) ParameterObjStruct.(X).ASAP2_Identifier, fieldnames(ParameterObjStruct), 'UniformOutput', false);
    cellfun(@(X) SignalObjStruct.(X).ASAP2_Identifier, fieldnames(SignalObjStruct), 'UniformOutput', false)];
try
    asap2ids = matlab.lang.makeValidName(matlab.lang.makeUniqueStrings(asap2ids));
catch
    asap2ids = genvarname(strrep(asap2ids, ARGS.GroupSeparatorCharOld, ARGS.GroupSeparatorCharNew));
end
idx = 1;
ParameterObjStruct2 = struct;
ParameterObjStruct_fields = fieldnames(ParameterObjStruct);
for thisField = ParameterObjStruct_fields(:).'
    ParameterObjStruct2.(asap2ids{idx}) = ParameterObjStruct.(thisField{1}).copy;
    idx = idx + 1;
end
SignalObjStruct2 = struct;
SignalObjStruct_fields = fieldnames(SignalObjStruct);
for thisField = SignalObjStruct_fields(:).'
    SignalObjStruct2.(asap2ids{idx}) = SignalObjStruct.(thisField{1}).copy;
    idx = idx + 1;
end
ParameterObjStruct2_fields = fieldnames(ParameterObjStruct2);
[~, ia, ib] = intersect(KIBES_SYMBOL_MAP_PARAMS.KIBES_Symbol_Names, ParameterObjStruct_fields);
for idx = 1:numel(ia)
    KIBES_SYMBOL_MAP_PARAMS.KIBES_Symbol_Names(strcmp(KIBES_SYMBOL_MAP_PARAMS.KIBES_Symbol_Names{ia(idx)}, KIBES_SYMBOL_MAP_PARAMS.KIBES_Symbol_Names)) = ParameterObjStruct2_fields(ib(idx));
end
SignalObjStruct2_fields = fieldnames(SignalObjStruct2);
[~, ia, ib] = intersect(KIBES_SYMBOL_MAP_SIGNALS.KIBES_Symbol_Names, SignalObjStruct_fields);
for idx = 1:numel(ia)
    KIBES_SYMBOL_MAP_SIGNALS.KIBES_Symbol_Names(strcmp(KIBES_SYMBOL_MAP_SIGNALS.KIBES_Symbol_Names{ia(idx)}, KIBES_SYMBOL_MAP_SIGNALS.KIBES_Symbol_Names)) = SignalObjStruct2_fields(ib(idx));
end
ParameterObjStruct = ParameterObjStruct2;
SignalObjStruct = SignalObjStruct2;
clear('ParameterObjStruct2', 'SignalObjStruct2', 'ParameterObjStruct2_fields', 'SignalObjStruct2_fields');

%Saving KIBES_SYMBOL_MAP_SIGNALS
ticid = tic;
if ~exist(fileparts(ARGS.OutputKIBESSymbolMapSignalsFilePath), 'dir')
    mkdir(fileparts(ARGS.OutputKIBESSymbolMapSignalsFilePath));
end
fprintf([isodatetime ' - ' mfilename ' - Saving ' formatstr(ARGS.OutputKIBESSymbolMapSignalsFilePath, 'FormatBackslashes', true) '...']);
[~, KIBESSymbolMapSignalsFileName] = fileparts(ARGS.OutputKIBESSymbolMapSignalsFilePath);
fid = fopen(ARGS.OutputKIBESSymbolMapSignalsFilePath, 'w');
STR = [{['function KIBES_SYMBOL_MAP_SIGNALS = ' KIBESSymbolMapSignalsFileName]};
    {''};
    {var2text('VariableName', 'KIBES_SYMBOL_MAP_SIGNALS', 'VariableValue', KIBES_SYMBOL_MAP_SIGNALS)};
    {''};
    {'end'}];
fwrite(fid, strimplode(STR, LINEFEED));
fclose(fid);
fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);

%Saving KIBES_SYMBOL_MAP_PARAMS
ticid = tic;
if ~exist(fileparts(ARGS.OutputKIBESSymbolMapParamsFilePath), 'dir')
    mkdir(fileparts(ARGS.OutputKIBESSymbolMapParamsFilePath));
end
fprintf([isodatetime ' - ' mfilename ' - Saving ' formatstr(ARGS.OutputKIBESSymbolMapParamsFilePath, 'FormatBackslashes', true) '...']);
[~, KIBESSymbolMapParamsFileName] = fileparts(ARGS.OutputKIBESSymbolMapParamsFilePath);
fid = fopen(ARGS.OutputKIBESSymbolMapParamsFilePath, 'w');
STR = [{['function KIBES_SYMBOL_MAP_PARAMS = ' KIBESSymbolMapParamsFileName]};
    {''};
    {var2text('VariableName', 'KIBES_SYMBOL_MAP_PARAMS', 'VariableValue', KIBES_SYMBOL_MAP_PARAMS)};
    {''};
    {'end'}];
fwrite(fid, strimplode(STR, LINEFEED));
fclose(fid);
fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);

%Generate parameter file
ticid = tic;
fprintf([isodatetime ' - ' mfilename ' - Saving file "%s"...'], ARGS.OutputParametersFilePath);
export_data_dictionary('WorkspaceStruct', ParameterObjStruct, ...
    'OutputFilePath', ARGS.OutputParametersFilePath, ...
    'ShowWaitbar', false, ...
    'ShouldEcho', false);
fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);
path(OLD_PATH);

%Generate signals file
ticid = tic;
fprintf([isodatetime ' - ' mfilename ' - Saving file "%s"...'], ARGS.OutputSignalFilePath);
export_data_dictionary('WorkspaceStruct', SignalObjStruct, ...
    'OutputFilePath', ARGS.OutputSignalFilePath, ...
    'ShowWaitbar', false, ...
    'ShouldEcho', false);
fprintf(['done, took ' num2str(toc(ticid)) ' seconds\n']);

%Close PTC_MBDS_LIB
[~, ModelFileName] = fileparts(ARGS.PTC_MBDS_LIB_FilePath);
close_system(ModelFileName);

%Create standalone library files
LibraryFileList = intersect(ARGS.FileList(:), ARGS.LibraryFileList(:));
if ~isempty(LibraryFileList)
    [LibraryFileDirList, LibraryFileNameList, LibraryFileExtList] = cellfun(@fileparts, LibraryFileList, 'UniformOutput', false);
    [~, dirnamelist] = cellfun(@fileparts, LibraryFileDirList, 'UniformOutput', false);
    LibraryFileList = cellfun(@(X, Y, Z) fullfile(ARGS.RCP_ROOT, X, [Y Z]), dirnamelist, LibraryFileNameList, LibraryFileExtList, 'UniformOutput', false);
    create_standalone_libraries('InputFilePaths', LibraryFileList);
end

diary('off');
waitfor(msgbox(['Conversion complete, took ' num2str(toc(ticid_main)) ' seconds.'], 'Message', 'modal'));

end

%% FUNCTION create_standalone_libraries

function create_standalone_libraries(varargin)

import('ptc_matlab_lib.*');
pairs = {'InputFilePaths', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

if isempty(ARGS.InputFilePaths)
    ARGS.InputFilePaths = uiselectfiles('FilterSpec', {'*.slx', 'SLX File (*.slx)'});
    if isequal(ARGS.InputFilePaths, 0)
        %Cancel was pressed
        return;
    end
end

ORIGINAL_PATH = path;

InputFiles = struct('Directory', {cell(numel(ARGS.InputFilePaths), 1)}, ...
    'Name', {cell(numel(ARGS.InputFilePaths), 1)}, ...
    'Extension', {cell(numel(ARGS.InputFilePaths), 1)});
for ctr = 1:numel(ARGS.InputFilePaths)
    [InputFiles.Directory{ctr}, InputFiles.Name{ctr}, InputFiles.Extension{ctr}] = fileparts(ARGS.InputFilePaths{ctr});
    if bdIsLoaded(InputFiles.Name{ctr})
        close_system(InputFiles.Name{ctr});
    end
end

PATHS_TO_ADD = unique(InputFiles.Directory);
for ctr = 1:numel(PATHS_TO_ADD)
    path(PATHS_TO_ADD{ctr}, path);
end

for ctr = 1:numel(ARGS.InputFilePaths)
    ticid = tic;
    fprintf([isodatetime ' - ' mfilename ' - Loading system ' formatstr(ARGS.InputFilePaths{ctr}, 'FormatBackslashes', true) '...']);
    if ~strcmp(which(InputFiles.Name{ctr}), fullfile(InputFiles.Directory{ctr}, [InputFiles.Name{ctr} InputFiles.Extension{ctr}]))
        error([mfilename ':' thisfuncname ':InvalidFileShadowingEncountered'], ['Encountered shadowed file ' formatstr(which(InputFiles.Name{ctr}), 'FormatBackslashes', true)]);
    end
    load_system(InputFiles.Name{ctr});
    fprintf(['done, took ' num2str(toc(ticid)) ' seconds.\n']);
    
    set_param(InputFiles.Name{ctr}, 'Lock', 'off');
    
    BlockPaths = find_system(InputFiles.Name{ctr}, 'SearchDepth', 1, 'LookUnderMasks', 'off', 'FollowLinks', 'off', 'Parent', InputFiles.Name{ctr});
    for ctr2 = 1:numel(BlockPaths)
        thisBlockName = get_param(BlockPaths{ctr2}, 'Name');
        thisModelName = thisBlockName;
        if bdIsLoaded(thisModelName)
            close_system(thisModelName);
        end
        if exist(thisModelName, 'file') && ~strcmp(which(thisModelName), fullfile(InputFiles.Directory{ctr}, [thisModelName '.slx']))
            error([mfilename ':' thisfuncname ':InvalidFileShadowingEncountered'], ['Encountered shadowed file ' formatstr(which(thisModelName), 'FormatBackslashes', true)]);
        elseif exist(thisModelName, 'file')
            load_system(thisModelName);
        elseif ~exist(thisModelName, 'file')
            new_system(thisModelName, 'Library');
        end
        all_blocks = find_system(thisModelName, 'SearchDepth', 1, 'LookUnderMasks', 'off', 'FollowLinks', 'off', 'Parent', thisModelName);
        all_blocks = cellstr2(all_blocks);
        set_param(thisModelName, 'Lock', 'off');
        for ctr3 = 1:numel(all_blocks)
            delete_block(all_blocks{ctr3});
        end
        add_block(BlockPaths{ctr2}, [thisModelName '/' thisBlockName]);
        set_param([thisModelName '/' thisBlockName], 'LinkStatus', 'none');
        set_param(thisModelName, 'LibraryLinkDisplay', 'all');
        delete_block(BlockPaths{ctr2});
        disp([isodatetime ' - ' mfilename ' - Saving file ' fullfile(InputFiles.Directory{ctr}, [thisModelName '.slx'])]);
        save_system(thisModelName, fullfile(InputFiles.Directory{ctr}, [thisModelName '.slx']));
        add_block([thisModelName '/' thisBlockName], BlockPaths{ctr2});
        close_system(thisModelName);
    end
    
    disp([isodatetime ' - ' mfilename ' - Saving file ' ARGS.InputFilePaths{ctr}]);
    save_system(InputFiles.Name{ctr}, ARGS.InputFilePaths{ctr});
    close_system(InputFiles.Name{ctr});
end

matlabpath(ORIGINAL_PATH);

end

function out = get_conversion_table(MBDSMaskTypes)

MBDSMaskTypes = ptc_matlab_lib.cellstr2(MBDSMaskTypes);

TableData = { ...
    'AND', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/AND';
    'Accumulator_REL', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Integrators/Accumulator_REL';
    'CountDown_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Counter & Timer/CountDown_RE';
    'CounterUpDown_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Counter & Timer/CounterUpDown_RE';
    'Counter_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Counter & Timer/Counter_RE';
    'DateTimeAssemble', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Date & Time Operations/Date & Time Conversions/DateTimeAssemble';
    'DateTimeDisassemble', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Date & Time Operations/Date & Time Conversions/DateTimeDisassemble';
    'DateTimeSource', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Date & Time Operations/DateTimeSource';
    'DateTimeSource', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/DateTimeSource';
    'DeadBand', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/DeadBand';
    'Delay_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Discrete Operations/Delay_RE';
    'DeltaOneStep', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/DeltaOneStep';
    'DifferenceLimiter', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/DifferenceLimiter';
    'DifferenceQuotient', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/DifferenceQuotient';
    'EQ', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/EQ';
    'EdgeBi', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/EdgeBi';
    'EdgeFalling', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/EdgeFalling';
    'EdgeRising', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/EdgeRising';
    'ForceMarker', 'PTC_MBDS_LIB/MBDS Standard Library/Verification/Run-Time Verification/ForceMarker';
    'GE', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/GE';
    'GT', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/GT';
    'GetBit', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/GetBit';
    'GetTickCounter', 'PTC_MBDS_LIB/MBDS Standard Library/Verification/Run-Time Measurement/GetTickCounter';
    'GradientLimiter', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/GradientLimiter';
    'HighpassT_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Filters/HighpassT_RE';
    'Hysteresis', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/Hysteresis';
    'IntegratorK_REL', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Integrators/IntegratorK_REL';
    'IntegratorT_REL', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Integrators/IntegratorT_REL';
    'Interval', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/Interval';
    'LE', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/LE';
    'LT', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/LT';
    'Limit', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/Limit';
    'LowpassT_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Filters/LowpassT_RE';
    'MaxLog_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/MaxLog_RE';
    'MeanValueT_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/MeanValueT_RE';
    'MinLog_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Non-Linear Operations/MinLog_RE';
    'Modulo', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Math Operations/Modulo';
    'NE', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/NE';
    'NOT', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/NOT';
    'OR', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/OR';
    'ProbeMarker', 'PTC_MBDS_LIB/MBDS Standard Library/Verification/Run-Time Verification/ProbeMarker';
    'RSFlipFlop', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/RSFlipFlop';
    'RealTimeSynchronization', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/HMI/RealTimeSynchronization';
    'SRFlipFlop', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/SRFlipFlop';
    'SampleAndHold_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Memory Blocks/SampleAndHold_RE';
    'ScrollCenteredNoWrap', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/HMI/ScrollCenteredNoWrap';
    'ScrollLineNoWrap', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/HMI/ScrollLineNoWrap';
    'ScrollLineRoundTrip', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/HMI/ScrollLineRoundTrip';
    'ScrollLineWrapAround', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/HMI/ScrollLineWrapAround';
    'ScrollPageNoWrap', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/HMI/ScrollPageNoWrap';
    'ScrollPageWrapAround', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/HMI/ScrollPageWrapAround';
    'SetBit', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/SetBit';
    'StringCompare', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringCompare';
    'StringConcat', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringConcat';
    'StringDelete', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringDelete';
    'StringDelete', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringReplace/StringDelete';
    'StringDisplay', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringDisplay';
    'StringDisplay', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sinks/StringDisplay';
    'StringFind', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringFind';
    'StringFromNumber', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringFromNumber';
    'StringInsert', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringInsert';
    'StringInsert', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringReplace/StringInsert';
    'StringLeft', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringLeft';
    'StringLen', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringLen';
    'StringMid', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringMid';
    'StringReplace', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringReplace';
    'StringRight', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringRight';
    'StringSource', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringSource';
    'StringSource', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/StringSource';
    'StringToNumber', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/String Operations/StringToNumber';
    'Switch', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Signal Routing/Switch';
    'TimeSource', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Date & Time Operations/TimeSource';
    'TimeSource', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/TimeSource';
    'TimerRetrigger_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Counter & Timer/TimerRetrigger_RE';
    'Timer_RE', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Counter & Timer/Timer_RE';
    'Toggle', 'PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Sources/Toggle';
    'TurnOffDelaySample', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Delay Blocks/TurnOffDelaySample';
    'TurnOffDelayTime', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Delay Blocks/TurnOffDelayTime';
    'TurnOnDelaySample', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Delay Blocks/TurnOnDelaySample';
    'TurnOnDelayTime', 'PTC_MBDS_LIB/MBDS Standard Library/Extended Operations/Delay Blocks/TurnOnDelayTime';
    'XOR', 'PTC_MBDS_LIB/MBDS Standard Library/Basic Operations/Logic and Bit Operations/XOR' ...
    };

MBDSMaskTypeList = TableData(:, 1);
PTC_MBDS_LIB_BlockPaths = TableData(:, 2);

out = repmat({''}, size(MBDSMaskTypes));
[indices, loc] = ismember(MBDSMaskTypes, MBDSMaskTypeList);
out(indices) = PTC_MBDS_LIB_BlockPaths(nonzeros(loc));

end

function out = mfiledir

if ~isdeployed
    stack = dbstack('-completenames');
    
    if length(stack) >= 2
        out = fileparts(stack(2).file);
    else
        out = '';
    end
else
    out = pwd;
end

end