function generate_microautobox_data_dictionary(varargin)

import('ptc_matlab_lib.*');
pairs = {'A2LDATA', struct([]), ...
    'SRECDATA', struct([]), ...
    'OutputDirectory', '', ...
    'EnumPrefix', 'ENUM_', ...
    'EnumSuffix', '_T', ...
    'DefaultStorageClass', 'ExportedGlobal', ...
    'AMPV_FileName', 'DD_AMPV_Shared', ...
    'Signal_FileName', 'DD_Signal_Shared', ...
    'FloatingPointDataTypeOverride', 'double', ...
    'ShowWaitbar', true};
ARGS = parseargs(varargin, pairs);

%% Step 1: Select directory for output files. Ensure that this directory is empty
while ~exist(ARGS.OutputDirectory, 'dir') || ~check_write_permissions(ARGS.OutputDirectory)
    ARGS.OutputDirectory = uigetdir(pwd);
    if isequal(ARGS.OutputDirectory, 0)
        %Cancel was pressed
        return;
    end
    if ~exist(ARGS.OutputDirectory, 'dir') || ~check_write_permissions(ARGS.OutputDirectory)
        waitfor(errordlg('ERROR: Insufficient permissions. Please select a different directory.', 'ERROR', 'modal'));
    end
end

%% Step 2: Retrieve A2L information
if isempty(ARGS.A2LDATA)
    A2LStruct = get_a2l_data('ShowWaitbar', ARGS.ShowWaitbar);
    if isequal(A2LStruct, 0)
        %Cancel was pressed
        return;
    end
    ARGS.A2LDATA = A2LStruct.A2LDATA;
end

%% Step 3: Retrieve S-Record information
if isempty(ARGS.SRECDATA)
    SRECStruct = get_srec_data('ShowWaitbar', ARGS.ShowWaitbar);
    if isequal(SRECStruct, 0)
        %Cancel was pressed
        return;
    end
    ARGS.SRECDATA = SRECStruct.SRECDATA;
end

NUMBER_OF_STEPS = 4;
CURRENT_STEP = 0;
if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'WindowStyle', 'modal', 'Pointer', 'watch');
end

%% Step 4: Retrieve label information
LabelStruct = get_srec_label_info('A2LDATA', ARGS.A2LDATA, ...
    'SRECDATA', ARGS.SRECDATA, ...
    'LabelName', '*', ...
    'ShowWaitbar', false);
LabelStruct.MATLABDataTypes = cell(numel(LabelStruct.DataTypes), 1);
LabelStruct.MATLABDataTypes(strcmp('SBYTE', LabelStruct.DataTypes)) = {'int8'};
LabelStruct.MATLABDataTypes(strcmp('UBYTE', LabelStruct.DataTypes)) = {'uint8'};
LabelStruct.MATLABDataTypes(strcmp('SWORD', LabelStruct.DataTypes)) = {'int16'};
LabelStruct.MATLABDataTypes(strcmp('UWORD', LabelStruct.DataTypes)) = {'uint16'};
LabelStruct.MATLABDataTypes(strcmp('SLONG', LabelStruct.DataTypes)) = {'int32'};
LabelStruct.MATLABDataTypes(strcmp('ULONG', LabelStruct.DataTypes)) = {'uint32'};
LabelStruct.MATLABDataTypes(strcmp('A_INT64', LabelStruct.DataTypes)) = {'int64'};
LabelStruct.MATLABDataTypes(strcmp('A_UINT64', LabelStruct.DataTypes)) = {'uint64'};
LabelStruct.MATLABDataTypes(strcmp('FLOAT32_IEEE', LabelStruct.DataTypes)) = {'single'};
LabelStruct.MATLABDataTypes(strcmp('FLOAT64_IEEE', LabelStruct.DataTypes)) = {'double'};
LabelStruct.MaxDTVals = getmaxdtval(LabelStruct.MATLABDataTypes);
LabelStruct.MinDTVals = getmindtval(LabelStruct.MATLABDataTypes);
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 5: Generate enumeration information
TAB = sprintf('\t');
if verLessThan('matlab', '8.3')
    varnamefunc = @genvarname;
else
    varnamefunc = @matlab.lang.makeValidName;
end
try
    FileNameList = matlab.lang.makeUniqueStrings(matlab.lang.makeValidName(strcat(ARGS.EnumPrefix, ARGS.A2LDATA.Compu_Vtabs.LabelNames, ARGS.EnumSuffix)));
catch
    FileNameList = genvarname(strcat(ARGS.EnumPrefix, ARGS.A2LDATA.Compu_Vtabs.LabelNames, ARGS.EnumSuffix)); %#ok<DEPGENAM>
end
for ctr = 1:numel(ARGS.A2LDATA.Compu_Vtabs.LabelNames)
    thisLabelDescription = ARGS.A2LDATA.Compu_Vtabs.LabelDescriptions{ctr};
    thisEnumeration = ARGS.A2LDATA.Compu_Vtabs.Enumerations{ctr};
    thisFileName = FileNameList{ctr};
    
    theseKeys = thisEnumeration.keys; theseValues = thisEnumeration.values;
    [~, indices] = sort(str2double(theseKeys));
    theseKeys = theseKeys(indices); theseValues = theseValues(indices);
    theseKeys = theseKeys(:); theseValues = theseValues(:);
    
    %Sundeep Tuteja, 2018-11-28: The class name can be a part of the
    %enumeration, at the source. If that's the case, it would be redundant
    %to retain it in this file as well. We need to remove the class name.
    if all(~cellfun(@isempty, regexp(theseValues, ['^' thisFileName '_'])))
        theseValues = regexprep(theseValues, ['^' thisFileName '_'], '');
        addClassNameToEnumNames = 'true';
    else
        addClassNameToEnumNames = 'false';
    end
    
    STR = [{['classdef ' thisFileName ' < Simulink.IntEnumType']};
        {['%' thisFileName ' ' thisLabelDescription]};
        {''};
        {[TAB 'enumeration']};
        cellfun(@(X, Y) [TAB TAB varnamefunc(strrep(X, ' ', '_')) '(' Y ')'], theseValues, theseKeys, 'UniformOutput', false);
        {[TAB 'end']};
        {[TAB 'methods (Static = true)']};
        {[TAB TAB 'function retVal = getDescription']};
        {[TAB TAB TAB 'retVal = ''' thisLabelDescription ''';']};
        {[TAB TAB 'end']};
        {[TAB TAB 'function retVal = addClassNameToEnumNames']};
        {[TAB TAB TAB 'retVal = ' addClassNameToEnumNames ';']};
        {[TAB TAB 'end']};
        {[TAB TAB 'function retVal = getDataScope']};
        {[TAB TAB TAB 'retVal = ''Exported'';']};
        {[TAB TAB 'end']};
        {[TAB TAB 'function retVal = getHeaderFile']};
        {[TAB TAB TAB 'retVal = ''EnumTypes.h'';']};
        {[TAB TAB 'end']};
        {[TAB TAB 'function retVal = getMotoHawkEnumStruct']};
        {[TAB TAB TAB '[enumerations, fields] = enumeration(mfilename);']};
        {[TAB TAB TAB 'retVal = struct(''name'', fields(:), ''value'', num2cell(double(enumerations)));']};
        {[TAB TAB 'end']};
        {[TAB TAB 'function retVal = getRaptorEnumStruct']};
        {[TAB TAB TAB '[enumerations, fields] = enumeration(mfilename);']};
        {[TAB TAB TAB 'retVal = struct(''Name'', fields(:), ''Value'', num2cell(double(enumerations)));']};
        {[TAB TAB 'end']};
        {[TAB 'end']};
        {''};
        {'end'}];
    
    fid = fopen(fullfile(ARGS.OutputDirectory, [thisFileName '.m']), 'w');
    fwrite(fid, strimplode(STR, sprintf('\r\n')));
    fclose(fid);
end
OLD_DIRECTORY = pwd;
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 6: Create APV/MPV MAT files
Characteristics_Indices = strcmp('Characteristics', LabelStruct.LabelTypes) | strcmp('Axis_Pts', LabelStruct.LabelTypes);
thisLabelStruct = structfun(@(X) X(Characteristics_Indices, :), LabelStruct, 'UniformOutput', false);

%Sundeep Tuteja, 2017-03-21: Replacing dots with underscores and adjusting
%all label names to conform to MATLAB's rules
try
    [thisLabelStruct.LabelNames_MATLAB, modified_label_indices] = matlab.lang.makeUniqueStrings(matlab.lang.makeValidName(thisLabelStruct.LabelNames), namelengthmax);
catch
    thisLabelStruct.LabelNames_MATLAB = genvarname(thisLabelStruct.LabelNames); %#ok<DEPGENAM>
    modified_label_indices = ~strcmp(thisLabelStruct.LabelNames_MATLAB, thisLabelStruct.LabelNames);
end
non_empty_indices = find(cellfun(@isempty, thisLabelStruct.AxisLabels));
modified_labels_MATLAB = thisLabelStruct.LabelNames_MATLAB(modified_label_indices);
thisLabelStruct.AxisLabels_MATLAB = thisLabelStruct.AxisLabels;
for idx = (non_empty_indices(:)).'
    [tf, loc] = ismember(thisLabelStruct.AxisLabels{idx}, thisLabelStruct.LabelNames(modified_label_indices));
    thisLabelStruct.AxisLabels_MATLAB{idx}(tf) = modified_labels_MATLAB(nonzeros(loc));
end

switch ARGS.FloatingPointDataTypeOverride
    case 'single'
        thisLabelStruct.RealWorldValues = arrayfun(@(X, Y) min(X{1}, Y - eps(-Y)), ...
            cellfun(@single, thisLabelStruct.RealWorldValues, 'UniformOutput', false), ...
            single(thisLabelStruct.MaxVals), ...
            'UniformOutput', false);
        
        thisLabelStruct.RealWorldValues = arrayfun(@(X, Y) max(X{1}, Y + eps(Y)), ...
            cellfun(@single, thisLabelStruct.RealWorldValues, 'UniformOutput', false), ...
            single(thisLabelStruct.MinVals), ...
            'UniformOutput', false);
    case 'double'
        thisLabelStruct.RealWorldValues = arrayfun(@(X, Y) min(X{1}, Y - eps(-Y)), ...
            cellfun(@double, thisLabelStruct.RealWorldValues, 'UniformOutput', false), ...
            double(thisLabelStruct.MaxVals), ...
            'UniformOutput', false);
        
        thisLabelStruct.RealWorldValues = arrayfun(@(X, Y) max(X{1}, Y + eps(Y)), ...
            cellfun(@double, thisLabelStruct.RealWorldValues, 'UniformOutput', false), ...
            double(thisLabelStruct.MinVals), ...
            'UniformOutput', false);
end

clear('ObjList');
ObjList(1:numel(thisLabelStruct.LabelNames), 1) = ptc_matlab_lib.PTC_MBDS_Parameter;
for ctr = 1:numel(ObjList)
    ObjList(ctr) = ptc_matlab_lib.PTC_MBDS_Parameter; %This line is necessary because of the .CoderInfo issue
    ObjList(ctr).ASAP2_Identifier = thisLabelStruct.LabelNames{ctr};
    ObjList(ctr).ASAP2_Precision = thisLabelStruct.Precisions{ctr};
    ObjList(ctr).Axis_Labels = thisLabelStruct.AxisLabels_MATLAB{ctr};
    ObjList(ctr).CoderInfo.StorageClass = ARGS.DefaultStorageClass;
    ObjList(ctr).DocUnits = thisLabelStruct.Units{ctr};
    ObjList(ctr).Description = thisLabelStruct.LabelDescriptions{ctr};
end

float_indices = thisLabelStruct.ScaleFactors ~= 1 | ...
    thisLabelStruct.Offsets ~= 0 | ...
    ismember(thisLabelStruct.MATLABDataTypes, {'single'; 'double'; 'auto'}) | ...
    thisLabelStruct.MaxDTVals < thisLabelStruct.MaxVals | ...
    thisLabelStruct.MinDTVals > thisLabelStruct.MinVals;
thisLabelStruct.MATLABDataTypes(float_indices) = {ARGS.FloatingPointDataTypeOverride};
thisLabelStruct.MinDTVals(float_indices) = getmindtval(ARGS.FloatingPointDataTypeOverride);
thisLabelStruct.MaxDTVals(float_indices) = getmaxdtval(ARGS.FloatingPointDataTypeOverride);
thisLabelStruct.MinVals = max(thisLabelStruct.MinVals, thisLabelStruct.MinDTVals);
thisLabelStruct.MaxVals = min(thisLabelStruct.MaxVals, thisLabelStruct.MaxDTVals);

enum_indices = ~cellfun(@isempty, thisLabelStruct.EnumerationInfo);

if any(enum_indices)
    data = thisLabelStruct.EnumerationInfo(enum_indices);
    data = cat(1, data{:}); %Creating an array of identical structures
    LabelName_IDX = strcmp('LabelName', fieldnames(data));
    EnumInfoList = struct2cell(data);
    EnumLabelNames = EnumInfoList(LabelName_IDX, :);
    EnumDataTypes = strcat(['Enum: ' ARGS.EnumPrefix], EnumLabelNames, ARGS.EnumSuffix);
    extctr = 1;
    cd(ARGS.OutputDirectory);
    for ctr = find(enum_indices).'
        ObjList(ctr).DataType = EnumDataTypes{extctr};
        ObjList(ctr).Min = [];
        ObjList(ctr).Max = [];
        ObjList(ctr).Value = feval([ARGS.EnumPrefix EnumLabelNames{extctr} ARGS.EnumSuffix], thisLabelStruct.RealWorldValues{ctr});
        extctr = extctr + 1;
    end
    cd(OLD_DIRECTORY);
end

for ctr = find(~enum_indices).'
    ObjList(ctr).DataType = thisLabelStruct.MATLABDataTypes{ctr};
    ObjList(ctr).Min = thisLabelStruct.MinVals(ctr);
    ObjList(ctr).Max = thisLabelStruct.MaxVals(ctr);
    ObjList(ctr).Value = cast(thisLabelStruct.RealWorldValues{ctr}, ObjList(ctr).DataType);
end

VarList = struct;
for ctr = 1:numel(thisLabelStruct.LabelNames_MATLAB)
    VarList.(thisLabelStruct.LabelNames_MATLAB{ctr}) = ObjList(ctr);
end
clear('ObjList');

cd(ARGS.OutputDirectory);
save(fullfile(ARGS.OutputDirectory, [ARGS.AMPV_FileName '.mat']), '-struct', 'VarList');
cd(OLD_DIRECTORY);
clear('VarList');
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 7: Create Signal MAT files
Measurements_Indices = strcmp('Measurements', LabelStruct.LabelTypes);
thisLabelStruct = structfun(@(X) X(Measurements_Indices, :), LabelStruct, 'UniformOutput', false);

%Sundeep Tuteja, 2017-03-21: Replacing dots with underscores and adjusting
%all label names to conform to MATLAB's rules
try
    thisLabelStruct.LabelNames_MATLAB = matlab.lang.makeUniqueStrings(matlab.lang.makeValidName(thisLabelStruct.LabelNames), namelengthmax);
catch
    thisLabelStruct.LabelNames_MATLAB = genvarname(strrep(thisLabelStruct.LabelNames, '.', '_')); %#ok<DEPGENAM>
end

clear('ObjList');
ObjList(1:numel(thisLabelStruct.LabelNames), 1) = ptc_matlab_lib.PTC_MBDS_Signal;
for ctr = 1:numel(ObjList)
    ObjList(ctr) = ptc_matlab_lib.PTC_MBDS_Signal; %This line is necessary because of the .CoderInfo issue
    ObjList(ctr).ASAP2_Identifier = thisLabelStruct.LabelNames{ctr};
    ObjList(ctr).ASAP2_Precision = thisLabelStruct.Precisions{ctr};
    ObjList(ctr).CoderInfo.StorageClass = ARGS.DefaultStorageClass;
    ObjList(ctr).DocUnits = thisLabelStruct.Units{ctr};
    ObjList(ctr).Description = thisLabelStruct.LabelDescriptions{ctr};
end

float_indices = thisLabelStruct.ScaleFactors ~= 1 | ...
    thisLabelStruct.Offsets ~= 0 | ...
    ismember(thisLabelStruct.MATLABDataTypes, {'single'; 'double'; 'auto'}) | ...
    thisLabelStruct.MaxDTVals < thisLabelStruct.MaxVals | ...
    thisLabelStruct.MinDTVals > thisLabelStruct.MinVals;
thisLabelStruct.MATLABDataTypes(float_indices) = {ARGS.FloatingPointDataTypeOverride};
thisLabelStruct.MinDTVals(float_indices) = getmindtval(ARGS.FloatingPointDataTypeOverride);
thisLabelStruct.MaxDTVals(float_indices) = getmaxdtval(ARGS.FloatingPointDataTypeOverride);
thisLabelStruct.MinVals = max(thisLabelStruct.MinVals, thisLabelStruct.MinDTVals);
thisLabelStruct.MaxVals = min(thisLabelStruct.MaxVals, thisLabelStruct.MaxDTVals);

enum_indices = ~cellfun(@isempty, thisLabelStruct.EnumerationInfo);

if any(enum_indices)
    data = thisLabelStruct.EnumerationInfo(enum_indices);
    data = cat(1, data{:}); %Creating an array of identical structures
    LabelName_IDX = strcmp('LabelName', fieldnames(data));
    EnumInfoList = struct2cell(data);
    EnumLabelNames = EnumInfoList(LabelName_IDX, :);
    EnumDataTypes = strcat(['Enum: ' ARGS.EnumPrefix], EnumLabelNames, ARGS.EnumSuffix);
    extctr = 1;
    cd(ARGS.OutputDirectory);
    for ctr = find(enum_indices).'
        ObjList(ctr).DataType = EnumDataTypes{extctr};
        ObjList(ctr).Min = [];
        ObjList(ctr).Max = [];
        extctr = extctr + 1;
    end
    cd(OLD_DIRECTORY);
end

for ctr = find(~enum_indices).'
    ObjList(ctr).DataType = thisLabelStruct.MATLABDataTypes{ctr};
    ObjList(ctr).Min = thisLabelStruct.MinVals(ctr);
    ObjList(ctr).Max = thisLabelStruct.MaxVals(ctr);
end

VarList = struct;
for ctr = 1:numel(thisLabelStruct.LabelNames_MATLAB)
    VarList.(thisLabelStruct.LabelNames_MATLAB{ctr}) = ObjList(ctr);
end
clear('ObjList');

cd(ARGS.OutputDirectory);
save(fullfile(ARGS.OutputDirectory, [ARGS.Signal_FileName '.mat']), '-struct', 'VarList');
cd(OLD_DIRECTORY);
clear('VarList');

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end
