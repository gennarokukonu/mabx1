function varargout = get_a2l_data(varargin)
%get_a2l_data: Function to get signal information out of an A2L file.
% See https://wiki.asam.net/display/STANDARDS/ASAM+MCD-2+MC
% THIS FUNCTION DOES NOT SUPPORT EVERY A2L CONSTRUCT. IT ONLY SUPPORTS THE
% MOST COMMON ONES USEFUL FOR PTC

import('ptc_matlab_lib.*');

pairs = {'A2LFilePath', '', ...
    'A2LTagFilter', {'Mod_Common'; 'Mod_Par'; 'Characteristics'; 'Measurements'; 'Compu_Methods'; 'Compu_Vtabs'; 'Compu_Vtab_Ranges'; 'Axis_Pts'; 'Record_Layouts'}, ...
    'ShowWaitbar', true, ...
    'HashAlgorithm', 'SHA-512', ...
    'WaitbarParams', cell(0, 1), ...
    'DefaultByteOrder', 'MSB_FIRST', ...
    'DefaultECUCalibrationOffset', '0x0', ...
    'FormulaConversionMap', {'', '@(X)X';
    'X&1', '@(X)bitand(X,1)';
    'X*1.0', '@(X)X'}};
ARGS = parseargs(varargin, pairs);

ARGS.A2LTagFilter = cellstr(ARGS.A2LTagFilter);
ARGS.A2LTagFilter = ARGS.A2LTagFilter(:);

if ~exist(ARGS.A2LFilePath, 'file')
    [filename, pathname] = uigetfile({'*.a2l', 'A2L File (*.a2l)'}, 'Select A2L File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.A2LFilePath = fullfile(pathname, filename);
end
A2L.FilePath = ARGS.A2LFilePath;
A2L.Hash = hashfile('FilePath', ARGS.A2LFilePath, 'HashAlgorithm', ARGS.HashAlgorithm);
A2L.HashAlgorithm = ARGS.HashAlgorithm;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Parsing A2L file, please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

NUMBER_OF_STEPS = 11;
CURRENT_STEP = 0;

%% Step 1: Read file
fid = fopen(ARGS.A2LFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);

%Ignore comments
separator = [randstring(3) sprintf('\r\n') randstring(3)];
file = strimplode(strtrim(file), separator);
file = regexprep(file, '/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+/', '');
file = strexplode(file, separator);

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 2: Process strings
if ~isempty(ARGS.A2LTagFilter)
    mod_common_indices = regexp(file, '.*/begin\s+MOD_COMMON');
    mod_common_indices = find(~cellfun(@isempty, mod_common_indices));
    mod_common_indices_end = regexp(file, '.*/end\s+MOD_COMMON');
    mod_common_indices_end = find(~cellfun(@isempty, mod_common_indices_end));
    
    mod_par_indices = regexp(file, '.*/begin\s+MOD_PAR');
    mod_par_indices = find(~cellfun(@isempty, mod_par_indices));
    mod_par_indices_end = regexp(file, '.*/end\s+MOD_PAR');
    mod_par_indices_end = find(~cellfun(@isempty, mod_par_indices_end));
    
    compu_method_indices = regexp(file, '.*/begin\s+COMPU_METHOD');
    compu_method_indices = find(~cellfun(@isempty, compu_method_indices));
    compu_method_indices_end = regexp(file, '.*/end\s+COMPU_METHOD');
    compu_method_indices_end = find(~cellfun(@isempty, compu_method_indices_end));
    
    compu_vtab_indices = regexp(file, '.*/begin\s+COMPU_VTAB');
    compu_vtab_indices = find(~cellfun(@isempty, compu_vtab_indices));
    compu_vtab_indices_end = regexp(file, '.*/end\s+COMPU_VTAB');
    compu_vtab_indices_end = find(~cellfun(@isempty, compu_vtab_indices_end));
    
    compu_vtab_range_indices = regexp(file, '.*/begin\s+COMPU_VTAB_RANGE');
    compu_vtab_range_indices = find(~cellfun(@isempty, compu_vtab_range_indices));
    compu_vtab_range_indices_end = regexp(file, '.*/end\s+COMPU_VTAB_RANGE');
    compu_vtab_range_indices_end = find(~cellfun(@isempty, compu_vtab_range_indices_end));
    
    record_layout_indices = regexp(file, '.*/begin\s+RECORD_LAYOUT');
    record_layout_indices = find(~cellfun(@isempty, record_layout_indices));
    record_layout_indices_end = regexp(file, '.*/end\s+RECORD_LAYOUT');
    record_layout_indices_end = find(~cellfun(@isempty, record_layout_indices_end));
end

if ismember('Measurements', ARGS.A2LTagFilter)
    measurement_indices = regexp(file, '.*/begin\s+MEASUREMENT');
    measurement_indices = find(~cellfun(@isempty, measurement_indices));
    measurement_indices_end = regexp(file, '.*/end\s+MEASUREMENT');
    measurement_indices_end = find(~cellfun(@isempty, measurement_indices_end));
end

if ismember('Characteristics', ARGS.A2LTagFilter)
    characteristic_indices = regexp(file, '.*/begin\s+CHARACTERISTIC');
    characteristic_indices = find(~cellfun(@isempty, characteristic_indices));
    characteristic_indices_end = regexp(file, '.*/end\s+CHARACTERISTIC');
    characteristic_indices_end = find(~cellfun(@isempty, characteristic_indices_end));
end

if ismember('Axis_Pts', ARGS.A2LTagFilter)
    axis_pts_indices = regexp(file, '.*/begin\s+AXIS_PTS');
    axis_pts_indices = find(~cellfun(@isempty, axis_pts_indices));
    axis_pts_indices_end = regexp(file, '.*/end\s+AXIS_PTS');
    axis_pts_indices_end = find(~cellfun(@isempty, axis_pts_indices_end));
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 3: Record Layouts
indices = arrayfun(@(X, Y) (X:Y).', record_layout_indices(:), record_layout_indices_end(:), 'UniformOutput', false);
indices = cell2mat(indices);
record_layout_info = strimplode(file(indices), ' ');
record_layout_info = regexp(record_layout_info, '(\s*/begin\s+RECORD_LAYOUT\s*)|(\s*/end\s+RECORD_LAYOUT\s*)', 'split');
record_layout_info(1:2:end) = [];

pattern1 = '(?<LabelNames>[^\s]+)';
pattern2 = '\s+AXIS_PTS_X\s+\d+\s+(?<Axis_Pts_X_DataTypes>[^\s]+)\s+(?<Axis_Pts_X_IndexTypes>[^\s]+)';
pattern3 = '\s+AXIS_PTS_Y\s+\d+\s+(?<Axis_Pts_Y_DataTypes>[^\s]+)\s+(?<Axis_Pts_Y_IndexTypes>[^\s]+)';
pattern4 = '\s+FNC_VALUES\s+\d+\s+(?<Fnc_Values_DataTypes>[^\s]+)\s+(?<Fnc_Values_IndexTypes>[^\s]+)';
pattern5 = '\s+AXIS_RESCALE_X\s+\d+\s+(?<Axis_Rescale_X_DataTypes>[^\s]+)\s+(?<Axis_Rescale_X_IndexTypes>[^\s]+)';
temp1 = regexp(record_layout_info, pattern1, 'once', 'names'); temp1 = temp1(:); temp1(cellfun(@isempty, temp1)) = {struct('LabelNames', '')};
temp2 = regexp(record_layout_info, pattern2, 'once', 'names'); temp2 = temp2(:); temp2(cellfun(@isempty, temp2)) = {struct('Axis_Pts_X_DataTypes', '', 'Axis_Pts_X_IndexTypes', '')};
temp3 = regexp(record_layout_info, pattern3, 'once', 'names'); temp3 = temp3(:); temp3(cellfun(@isempty, temp3)) = {struct('Axis_Pts_Y_DataTypes', '', 'Axis_Pts_Y_IndexTypes', '')};
temp4 = regexp(record_layout_info, pattern4, 'once', 'names'); temp4 = temp4(:); temp4(cellfun(@isempty, temp4)) = {struct('Fnc_Values_DataTypes', '', 'Fnc_Values_IndexTypes', '')};
temp5 = regexp(record_layout_info, pattern5, 'once', 'names'); temp5 = temp5(:); temp5(cellfun(@isempty, temp5)) = {struct('Axis_Rescale_X_DataTypes', '', 'Axis_Rescale_X_IndexTypes', '')};
Record_Layouts_Struct.LabelNames = cellfun(@(X) X.LabelNames, temp1, 'UniformOutput', false);
Record_Layouts_Struct.Axis_Pts_X_DataTypes = cellfun(@(X) X.Axis_Pts_X_DataTypes, temp2, 'UniformOutput', false);
Record_Layouts_Struct.Axis_Pts_X_IndexTypes = cellfun(@(X) X.Axis_Pts_X_IndexTypes, temp2, 'UniformOutput', false);
Record_Layouts_Struct.Axis_Pts_Y_DataTypes = cellfun(@(X) X.Axis_Pts_Y_DataTypes, temp3, 'UniformOutput', false);
Record_Layouts_Struct.Axis_Pts_Y_IndexTypes = cellfun(@(X) X.Axis_Pts_Y_IndexTypes, temp3, 'UniformOutput', false);
Record_Layouts_Struct.Fnc_Values_DataTypes = cellfun(@(X) X.Fnc_Values_DataTypes, temp4, 'UniformOutput', false);
Record_Layouts_Struct.Fnc_Values_IndexTypes = cellfun(@(X) X.Fnc_Values_IndexTypes, temp4, 'UniformOutput', false);
Record_Layouts_Struct.Axis_Rescale_X_DataTypes = cellfun(@(X) X.Axis_Rescale_X_DataTypes, temp5, 'UniformOutput', false);
Record_Layouts_Struct.Axis_Rescale_X_IndexTypes = cellfun(@(X) X.Axis_Rescale_X_IndexTypes, temp5, 'UniformOutput', false);

if ismember('Record_Layouts', ARGS.A2LTagFilter)
    A2L.A2LDATA.Record_Layouts = Record_Layouts_Struct;
    [~, indices] = unique(A2L.A2LDATA.Record_Layouts.LabelNames, 'last');
    A2L.A2LDATA.Record_Layouts = structfun(@(X) X(indices, :), A2L.A2LDATA.Record_Layouts, 'UniformOutput', false);
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 4: Byte ordering
indices = arrayfun(@(X, Y) (X:Y).', mod_common_indices(:), mod_common_indices_end(:), 'UniformOutput', false);
indices = cell2mat(indices);
mod_common_info = strimplode(file(indices), ' ');
mod_common_info = regexp(mod_common_info, '(\s*/begin\s+MOD_COMMON\s*)|(\s*/end\s+MOD_COMMON\s*', 'split');
mod_common_info(1:2:end) = [];

pattern1 = '\s*"(?<LongIdentifier>((.*?)(?<!\\)))"';
pattern2 = '\s+BYTE_ORDER\s+(?<Byte_Order>[^\s]+)';

temp1 = regexp(mod_common_info, pattern1, 'once', 'names'); temp1 = temp1(:);
temp2 = regexp(mod_common_info, pattern2, 'once', 'names'); temp2 = temp2(:);

Mod_Common_Struct.LongIdentifier = {''};
Mod_Common_Struct.Byte_Order = cellstr(ARGS.DefaultByteOrder);
if ~isempty(temp1{1})
    Mod_Common_Struct.LongIdentifier = strrep(cellfun(@(X) X.LongIdentifier, temp1, 'UniformOutput', false), '\"', '"');
end
if ~isempty(temp2{1})
    Mod_Common_Struct.Byte_Order = cellfun(@(X) X.Byte_Order, temp2, 'UniformOutput', false);
end

Mod_Common_Struct.LongIdentifier = Mod_Common_Struct.LongIdentifier{end};
Mod_Common_Struct.Byte_Order = Mod_Common_Struct.Byte_Order{end};

if ismember('Mod_Common', ARGS.A2LTagFilter)
    A2L.A2LDATA.Mod_Common = Mod_Common_Struct;
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 5: ECU_CALIBRATION_OFFSET
indices = arrayfun(@(X, Y) (X:Y).', mod_par_indices(:), mod_par_indices_end(:), 'UniformOutput', false);
indices = cell2mat(indices);
mod_par_info = strimplode(file(indices), ' ');
mod_par_info = regexp(mod_par_info, '(\s*/begin\s+MOD_PAR\s*)|(\s*/end\s+MOD_PAR\s*', 'split');
mod_par_info(1:2:end) = [];

pattern1 = '\s*"(?<LongIdentifier>((.*?)(?<!\\)))"';
pattern2 = '\s+ECU_CALIBRATION_OFFSET\s+(?<ECU_Calibration_Offset>[^\s]+)';

temp1 = regexp(mod_par_info, pattern1, 'once', 'names'); temp1 = temp1(:);
temp2 = regexp(mod_par_info, pattern2, 'once', 'names'); temp2 = temp2(:);

Mod_Par_Struct.LongIdentifier = {''};
Mod_Par_Struct.ECU_Calibration_Offset = cellstr(ARGS.DefaultECUCalibrationOffset);
if ~isempty(temp1{1})
    Mod_Par_Struct.LongIdentifier = strrep(cellfun(@(X) X.LongIdentifier, temp1, 'UniformOutput', false), '\"', '"');
end
if ~isempty(temp2{1})
    Mod_Par_Struct.ECU_Calibration_Offset = cellfun(@(X) X.ECU_Calibration_Offset, temp2, 'UniformOutput', false);
end

Mod_Par_Struct.LongIdentifier = Mod_Par_Struct.LongIdentifier{end};
Mod_Par_Struct.ECU_Calibration_Offset = Mod_Par_Struct.ECU_Calibration_Offset{end};

if isempty(regexp(Mod_Par_Struct.ECU_Calibration_Offset, '^0x', 'once'))
    Mod_Par_Struct.ECU_Calibration_Offset = uint64(str2double(Mod_Par_Struct.ECU_Calibration_Offset));
else
    Mod_Par_Struct.ECU_Calibration_Offset = hex2dec2(strtrim(regexprep(Mod_Par_Struct.ECU_Calibration_Offset, '^0x', '')));
end

if ismember('Mod_Par', ARGS.A2LTagFilter)
    A2L.A2LDATA.Mod_Par = Mod_Par_Struct;
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end


%% Step 6: Compu Methods
indices = arrayfun(@(X, Y) (X:Y).', compu_method_indices(:), compu_method_indices_end(:), 'UniformOutput', false);
indices = cell2mat(indices);
compu_method_info = strimplode(file(indices), ' ');
compu_method_info = regexp(compu_method_info, '(\s*/begin\s+COMPU_METHOD\s*)|(\s*/end\s+COMPU_METHOD\s*)', 'split');
compu_method_info(1:2:end) = [];

pattern1 = '(?<LabelNames>[^\s]+)\s+"(?<LabelDescriptions>((.*?)(?<!\\)))"\s+[^\s]+\s+"(?<Precisions>((.*?)(?<!\\)))"\s+"(?<Units>((.*?)(?<!\\)))"';
pattern2 = 'COEFFS\s+(?<Coeffs>([^"]|(\\"))*)\s*';
pattern3 = 'COMPU_TAB_REF\s+(?<Compu_Tab_Refs>[^\s]+)';
pattern4 = 'IDENTICAL\s*';
pattern5 = 'COEFFS_LINEAR\s+(?<Coeffs>([^"]|(\\"))*)\s*';
pattern6 = '/begin\s+FORMULA\s+"(?<FormulaFunction>((.*?)(?<!\\)))"';
pattern7 = 'FORMULA_INV\s+"(?<FormulaFunction>((.*?)(?<!\\)))"';

temp1 = regexp(compu_method_info, pattern1, 'once', 'names'); temp1 = temp1(:);
temp2 = regexp(compu_method_info, pattern2, 'once', 'names'); temp2 = temp2(:);
temp3 = regexp(compu_method_info, pattern3, 'once', 'names'); temp3 = temp3(:);
temp4 = regexp(compu_method_info, pattern4, 'once', 'names'); temp4 = temp4(:);
temp5 = regexp(compu_method_info, pattern5, 'once', 'names'); temp5 = temp5(:);
temp6 = regexp(compu_method_info, pattern6, 'once', 'names'); temp6 = temp6(:);
temp7 = regexp(compu_method_info, pattern7, 'once', 'names'); temp7 = temp7(:);

Compu_Methods_Struct.LabelNames = cellfun(@(X) X.LabelNames, temp1, 'UniformOutput', false);
Compu_Methods_Struct.LabelDescriptions = strrep(cellfun(@(X) X.LabelDescriptions, temp1, 'UniformOutput', false), '\"', '"');
Compu_Methods_Struct.Precisions = strrep(cellfun(@(X) X.Precisions, temp1, 'UniformOutput', false), '\"', '"');
Compu_Methods_Struct.Precisions = strrep(Compu_Methods_Struct.Precisions, '%', '');
Compu_Methods_Struct.Units = strrep(cellfun(@(X) X.Units, temp1, 'UniformOutput', false), '\"', '"');

Compu_Methods_Struct.Coeffs = NaN(numel(temp2), 6);
logical_indices1 = ~cellfun(@isempty, temp2);
Compu_Methods_Struct.Coeffs(logical_indices1, :) = cell2mat(cellfun(@(X) sscanf(X.Coeffs, '%f'), (temp2(logical_indices1)).', 'UniformOutput', false)).';
logical_indices2 = ~cellfun(@isempty, temp4);
Compu_Methods_Struct.Coeffs(logical_indices2, :) = repmat([0 1 0 0 0 1], numel(temp4(logical_indices2)), 1);
logical_indices3 = ~cellfun(@isempty, temp5);
if any(logical_indices3)
    linear_coeffs = cell2mat(cellfun(@(X) sscanf(X.Coeffs, '%f'), (temp5(logical_indices3)).', 'UniformOutput', false)).';
    Compu_Methods_Struct.Coeffs(logical_indices3, :) = [zeros(rows(linear_coeffs), 1) ones(rows(linear_coeffs), 1) ...
        linear_coeffs(:, 2) zeros(rows(linear_coeffs), 2) linear_coeffs(:, 1)];
end
indices = find(~(logical_indices1 | logical_indices2 | logical_indices3));
Compu_Methods_Struct.Coeffs(indices, :) = [zeros(numel(indices), 1), ...
    ones(numel(indices), 1), ...
    zeros(numel(indices), 3), ...
    ones(numel(indices), 1)];

Compu_Methods_Struct.Formula = repmat({''}, numel(temp6), 1);
logical_indices = ~cellfun(@isempty, temp6);
Compu_Methods_Struct.Formula(logical_indices, :) = cellfun(@(X) X.FormulaFunction, temp6(logical_indices), 'UniformOutput', false);
Compu_Methods_Struct.Formula = regexprep(Compu_Methods_Struct.Formula, '\s+', '');
[tf, loc] = ismember(Compu_Methods_Struct.Formula, ARGS.FormulaConversionMap(:, 1));
if ~all(tf)
    error([mfilename ':' thisfuncname ':UnsupportedFormulaeEncountered'], 'Unsupported conversion formulae encountered.');
end
Compu_Methods_Struct.Formula(tf) = ARGS.FormulaConversionMap(nonzeros(loc), 2);

Compu_Methods_Struct.Formula_Inv = repmat({''}, numel(temp7), 1);
logical_indices = ~cellfun(@isempty, temp7);
Compu_Methods_Struct.Formula_Inv(logical_indices, :) = cellfun(@(X) X.FormulaFunction, temp7(logical_indices), 'UniformOutput', false);
Compu_Methods_Struct.Formula_Inv = regexprep(Compu_Methods_Struct.Formula_Inv, '\s+', '');
[tf, loc] = ismember(Compu_Methods_Struct.Formula_Inv, ARGS.FormulaConversionMap(:, 1));
assert(all(tf));
Compu_Methods_Struct.Formula_Inv(tf) = ARGS.FormulaConversionMap(nonzeros(loc), 2);

Compu_Methods_Struct.Compu_Tab_Refs = repmat({''}, numel(temp3), 1);
logical_indices = cellfun(@isempty, temp3);
if ~all(logical_indices)
    Compu_Methods_Struct.Compu_Tab_Refs(~logical_indices, :) = cellfun(@(X) X.Compu_Tab_Refs, temp3(~logical_indices), 'UniformOutput', false);
end

%Sundeep Tuteja, 2018-04-10: Adding implicit compu method NO_COMPU_METHOD,
%in accordance with ASAP2 standard.
if ~ismember('NO_COMPU_METHOD', Compu_Methods_Struct.LabelNames)
    Compu_Methods_Struct.LabelNames{end+1, 1} = 'NO_COMPU_METHOD';
    Compu_Methods_Struct.Compu_Tab_Refs{end+1, 1} = '';
    Compu_Methods_Struct.Coeffs(end+1, :) = [0 1 0 0 0 1];
    Compu_Methods_Struct.Formula{end+1, 1} = '@(X)X';
    Compu_Methods_Struct.Formula_Inv{end+1, 1} = '@(X)X';
    Compu_Methods_Struct.LabelDescriptions{end+1, 1} = '';
    Compu_Methods_Struct.Precisions{end+1, 1} = '1.12';
    Compu_Methods_Struct.Units{end+1, 1} = '';
end

if ismember('Compu_Methods', ARGS.A2LTagFilter)
    A2L.A2LDATA.Compu_Methods = Compu_Methods_Struct;
    [~, indices] = unique(A2L.A2LDATA.Compu_Methods.LabelNames, 'last');
    A2L.A2LDATA.Compu_Methods = structfun(@(X) X(indices, :), A2L.A2LDATA.Compu_Methods, 'UniformOutput', false);
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 7: Compu Vtabs
indices = arrayfun(@(X, Y) (X:Y).', compu_vtab_indices(:), compu_vtab_indices_end(:), 'UniformOutput', false);
indices = cell2mat(indices);
compu_vtab_info = strimplode(file(indices), ' ');
compu_vtab_info = regexp(compu_vtab_info, '(\s*/begin\s+COMPU_VTAB\s*)|(\s*/end\s+COMPU_VTAB\s*)', 'split');
compu_vtab_info(1:2:end) = [];

pattern1 = '(?<LabelNames>[^\s]+)\s+"(?<LabelDescriptions>((.*?)(?<!\\)))"\s+TAB_VERB\s+(?<Tab_Verbs>\d+)\s+(?<Enumerations>.+)';
temp1 = regexp(compu_vtab_info, pattern1, 'once', 'names'); temp1 = cell2mat(temp1(:));
if ~isempty(temp1)
    fields = fieldnames(temp1); temp1 = struct2cell(temp1);
    Enumerations_Index = strcmp('Enumerations', fields);
    separator = ['_' randstring(5) '_'];
    double_quote = ['_' randstring(5) '_'];
    backslash = ['_' randstring(5) '_'];
    percent = ['_' randstring(5) '_'];
    temp1(Enumerations_Index, :) = strrep(temp1(Enumerations_Index, :), '\\', backslash);
    temp1(Enumerations_Index, :) = strrep(temp1(Enumerations_Index, :), '\"', double_quote);
    temp1(Enumerations_Index, :) = strrep(temp1(Enumerations_Index, :), '%', percent);
    temp1(Enumerations_Index, :) = regexprep(temp1(Enumerations_Index, :), '(\s+")|("\s*)', separator);
    temp1(Enumerations_Index, :) = strrep(temp1(Enumerations_Index, :), double_quote, '\"');
    temp1(Enumerations_Index, :) = strrep(temp1(Enumerations_Index, :), backslash, '\\');
    temp1(Enumerations_Index, :) = strrep(temp1(Enumerations_Index, :), percent, '%%');
    temp1(Enumerations_Index, :) = regexp(temp1(Enumerations_Index, :), separator, 'split');
    temp1(Enumerations_Index, :) = cellfun(@(X) containers.Map(X(1:2:end-2), cellfun(@sprintf, X(2:2:end-1), 'UniformOutput', false), 'uniformValues', true), temp1(Enumerations_Index, :), 'UniformOutput', false);
    
    Compu_Vtabs_Struct = struct('LabelNames', {temp1(strcmp('LabelNames', fields), :).'}, ...
        'LabelDescriptions', {regexprep(temp1(strcmp('LabelDescriptions', fields), :).', '(("{2,2})|(\\"))', '"')}, ...
        'Tab_Verbs', {str2double(temp1(strcmp('Tab_Verbs', fields), :).')}, ...
        'Enumerations', {temp1(strcmp('Enumerations', fields), :).'});
else
    Compu_Vtabs_Struct = struct('LabelNames', {cell(0, 1)}, ...
        'LabelDescriptions', {cell(0, 1)}, ...
        'Tab_Verbs', {cell(0, 1)}, ...
        'Enumerations', {cell(0, 1)});
end

if ismember('Compu_Vtabs', ARGS.A2LTagFilter)
    A2L.A2LDATA.Compu_Vtabs = Compu_Vtabs_Struct;
    [~, indices] = unique(A2L.A2LDATA.Compu_Vtabs.LabelNames, 'last');
    A2L.A2LDATA.Compu_Vtabs = structfun(@(X) X(indices, :), A2L.A2LDATA.Compu_Vtabs, 'UniformOutput', false);
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 8: Compu Vtab Ranges
indices = arrayfun(@(X, Y) (X:Y).', compu_vtab_range_indices(:), compu_vtab_range_indices_end(:), 'UniformOutput', false);
indices = cell2mat(indices);
compu_vtab_range_info = strimplode(file(indices), ' ');
compu_vtab_range_info = regexp(compu_vtab_range_info, '(\s*/begin\s+COMPU_VTAB_RANGE\s*)|(\s*/end\s+COMPU_VTAB_RANGE\s*)', 'split');
compu_vtab_range_info(1:2:end) = [];

pattern1 = '(?<LabelNames>[^\s]+)\s+"(?<LabelDescriptions>((.*?)(?<!\\)))"\s+(?<NumberOfElements>\d+)\s+(?<RangeDefinitions>.+)';
temp1 = regexp(compu_vtab_range_info, pattern1, 'once', 'names'); temp1 = cell2mat(temp1(:));
if ~isempty(temp1)
    fields = fieldnames(temp1); temp1 = struct2cell(temp1);
    RangeDefinitions_Index = strcmp('RangeDefinitions', fields);
    separator = ['_' randstring(5) '_'];
    double_quote = ['_' randstring(5) '_'];
    backslash = ['_' randstring(5) '_'];
    percent = ['_' randstring(5) '_'];
    temp1(RangeDefinitions_Index, :) = strrep(temp1(RangeDefinitions_Index, :), '\\', backslash);
    temp1(RangeDefinitions_Index, :) = strrep(temp1(RangeDefinitions_Index, :), '\"', double_quote);
    temp1(RangeDefinitions_Index, :) = strrep(temp1(RangeDefinitions_Index, :), '%', percent);
    temp1(RangeDefinitions_Index, :) = regexprep(temp1(RangeDefinitions_Index, :), '(\s+")|("\s*)', separator);
    temp1(RangeDefinitions_Index, :) = strrep(temp1(RangeDefinitions_Index, :), double_quote, '\"');
    temp1(RangeDefinitions_Index, :) = strrep(temp1(RangeDefinitions_Index, :), backslash, '\\');
    temp1(RangeDefinitions_Index, :) = strrep(temp1(RangeDefinitions_Index, :), percent, '%%');
    temp1(RangeDefinitions_Index, :) = regexp(temp1(RangeDefinitions_Index, :), separator, 'split');
    temp1(RangeDefinitions_Index, :) = cellfun(@(X) containers.Map(X(1:2:end-2), cellfun(@sprintf, X(2:2:end-1), 'UniformOutput', false), 'uniformValues', true), temp1(RangeDefinitions_Index, :), 'UniformOutput', false);
    
    Compu_Vtab_Ranges_Struct = struct('LabelNames', {temp1(strcmp('LabelNames', fields), :).'}, ...
        'LabelDescriptions', {regexprep(temp1(strcmp('LabelDescriptions', fields), :).', '(("{2,2})|(\\"))', '"')}, ...
        'NumberOfElements', {str2double(temp1(strcmp('NumberOfElements', fields), :).')}, ...
        'RangeDefinitions', {temp1(strcmp('RangeDefinitions', fields), :).'});
else
    Compu_Vtab_Ranges_Struct = struct('LabelNames', {cell(0, 1)}, ...
        'LabelDescriptions', {cell(0, 1)}, ...
        'NumberOfElements', {[]}, ...
        'RangeDefinitions', {cell(0, 1)});
end

if ismember('Compu_Vtab_Ranges', ARGS.A2LTagFilter)
    A2L.A2LDATA.Compu_Vtab_Ranges = Compu_Vtab_Ranges_Struct;
    [~, indices] = unique(A2L.A2LDATA.Compu_Vtab_Ranges.LabelNames, 'last');
    A2L.A2LDATA.Compu_Vtab_Ranges = structfun(@(X) X(indices, :), A2L.A2LDATA.Compu_Vtab_Ranges, 'UniformOutput', false);
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 9: Measurements
if ismember('Measurements', ARGS.A2LTagFilter)
    indices = arrayfun(@(X, Y) (X:Y).', measurement_indices(:), measurement_indices_end(:), 'UniformOutput', false);
    indices = cell2mat(indices);
    measurement_info = strimplode(file(indices), ' ');
    measurement_info = regexp(measurement_info, '(\s*/begin\s+MEASUREMENT\s*)|(\s*/end\s+MEASUREMENT\s*)', 'split');
    measurement_info(1:2:end) = [];
    
    pattern1 = '(?<LabelNames>[^\s]+)\s+"(?<LabelDescriptions>((.*?)(?<!\\)))"\s+(?<DataTypes>[^\s]+)\s+(?<Compu_Methods>[^\s]+)\s+[^\s]+\s+[^\s]+\s+(?<MinValues>[^\s]+)\s+(?<MaxValues>[^\s]+)';
    pattern2 = '\s+ECU_ADDRESS\s+0x(?<ECUAddresses>[^\s]+)\s*';
    pattern3 = '\s+ARRAY_SIZE\s+(?<ArraySizes>[^\s]+)\s*';
    pattern4 = '\s+MATRIX_DIM\s+(?<Rows>\d+)\s+(?<Columns>\d+)\s+\d+\s*';
    pattern5 = '\s+BIT_MASK\s+0x(?<BitMask>[^\s]+)\s*';
    pattern6 = '\s+ASAP1B_LOCID\s+0x(?<PART1>[^\s]+)\s+0x(?<PART2>[^\s]+)\s*';
    pattern7 = '\s+LEFT_SHIFT\s+(?<LeftShift>[^\s]+)\s*';
    pattern8 = '\s+RIGHT_SHIFT\s+(?<RightShift>[^\s]+)\s*';
    pattern9 = '\s+SIGN_EXTEND\s*';
    pattern10 = '\s+BYTE_ORDER\s+(?<ByteOrder>[^\s]+)\s*';
    pattern11 = '\s+ECU_ADDRESS_EXTENSION\s+0x(?<ECUAddressExtensions>[^\s]+)\s*';
    pattern12 = '\s+PHYS_UNIT\s+"(?<PhysicalUnit>((.*?)(?<!\\)))"\s*';
    temp1 = regexp(measurement_info, pattern1, 'once', 'names'); temp1 = temp1(:);
    temp2 = regexp(measurement_info, pattern2, 'once', 'names'); temp2 = temp2(:);
    temp3 = regexp(measurement_info, pattern3, 'once', 'names'); temp3 = temp3(:);
    temp4 = regexp(measurement_info, pattern4, 'once', 'names'); temp4 = temp4(:);
    temp5 = regexp(measurement_info, pattern5, 'once', 'names'); temp5 = temp5(:);
    temp6 = regexp(measurement_info, pattern6, 'once', 'names'); temp6 = temp6(:);
    temp7 = regexp(measurement_info, pattern7, 'once', 'names'); temp7 = temp7(:);
    temp8 = regexp(measurement_info, pattern8, 'once', 'names'); temp8 = temp8(:);
    temp9 = regexp(measurement_info, pattern9, 'once', 'names'); temp9 = temp9(:);
    temp10 = regexp(measurement_info, pattern10, 'once', 'names'); temp10 = temp10(:);
    temp11 = regexp(measurement_info, pattern11, 'once', 'names'); temp11 = temp11(:);
    temp12 = regexp(measurement_info, pattern12, 'once', 'names'); temp12 = temp12(:);
    
    LabelNames = cellfun(@(X) X.LabelNames, temp1, 'UniformOutput', false);
    LabelDescriptions = regexprep(cellfun(@(X) X.LabelDescriptions, temp1, 'UniformOutput', false), '(("{2,2})|(\\"))', '"');
    DataTypes = cellfun(@(X) X.DataTypes, temp1, 'UniformOutput', false);
    
    Compu_Methods = cellfun(@(X) X.Compu_Methods, temp1, 'UniformOutput', false);
    [~, loc] = ismember(Compu_Methods, Compu_Methods_Struct.LabelNames);
    Coeffs = Compu_Methods_Struct.Coeffs(loc, :);
    Precisions = Compu_Methods_Struct.Precisions(loc, :);
    Units = Compu_Methods_Struct.Units(loc);
    idx = ~cellfun(@isempty, temp12);
    Units(idx) = regexprep(cellfun(@(X) X.PhysicalUnit, temp12(idx), 'UniformOutput', false), '(("{2,2})|(\\"))', '"');
    Formula = Compu_Methods_Struct.Formula(loc);
    Formula_Inv = Compu_Methods_Struct.Formula_Inv(loc);
    
    Compu_Vtabs = Compu_Methods_Struct.Compu_Tab_Refs(loc, :);
    [tf, loc2] = ismember(Compu_Vtabs, Compu_Vtabs_Struct.LabelNames);
    Compu_Vtabs(~tf) = {''};
    Enumerations = cell(length(Compu_Vtabs), 1);
    Enumerations(tf) = Compu_Vtabs_Struct.Enumerations(nonzeros(loc2));
    EnumerationInfo = cell(length(Compu_Vtabs), 1);
    EnumerationInfo(tf) = arrayfun(@(X) struct('LabelName', Compu_Vtabs_Struct.LabelNames{X}, ...
        'LabelDescription', Compu_Vtabs_Struct.LabelDescriptions{X}, ...
        'Tab_Verb', Compu_Vtabs_Struct.Tab_Verbs(X), ...
        'Enumeration', Compu_Vtabs_Struct.Enumerations{X}), ...
        nonzeros(loc2), 'UniformOutput', false);
    [tf, loc2] = ismember(Compu_Vtabs, Compu_Vtab_Ranges_Struct.LabelNames);
    RangeDefinitions = cell(length(Compu_Vtabs), 1);
    RangeDefinitions(tf) = Compu_Vtab_Ranges_Struct.RangeDefinitions(nonzeros(loc2));
    
    MinValues = cellfun(@(X) X.MinValues, temp1, 'UniformOutput', false);
    MaxValues = cellfun(@(X) X.MaxValues, temp1, 'UniformOutput', false);
    MinValues = str2double(MinValues);
    MaxValues = str2double(MaxValues);
    
    ECUAddresses = cell(numel(MinValues), 1);
    indices = cellfun(@isempty, temp2);
    ECUAddresses(indices) = {'0'};
    ECUAddresses(~indices) = cellfun(@(X) X.ECUAddresses, temp2(~indices), 'UniformOutput', false);
    
    ECUAddressExtensions = cell(numel(MinValues), 1);
    indices = cellfun(@isempty, temp11);
    ECUAddressExtensions(indices) = {'0'};
    ECUAddressExtensions(~indices) = cellfun(@(X) X.ECUAddressExtensions, temp11(~indices), 'UniformOutput', false);
    
    Dimensions = NaN(numel(ECUAddresses), 2);
    
    indices3 = ~cellfun(@isempty, temp3);
    indices4 = ~cellfun(@isempty, temp4);
    indices_unspecified = ~(indices3 | indices4);
    if any(indices3)
        Dimensions(indices3, :) = [str2double(cellfun(@(X) X.ArraySizes, temp3(indices3), 'UniformOutput', false)) ...
            ones(nnz(indices3), 1)];
    end
    if any(indices4)
        Dimensions(indices4, :) = cell2mat(cellfun(@(X) [str2double(X.Rows) str2double(X.Columns)], ...
            temp4(indices4), 'UniformOutput', false));
    end
    Dimensions(indices_unspecified, :) = ones(nnz(indices_unspecified), 2);
    
    indices = ~ismember(DataTypes, {'UBYTE', 'SBYTE', 'UWORD', 'SWORD', 'ULONG', 'SLONG', 'A_UINT64', 'A_INT64', 'FLOAT32_IEEE', 'FLOAT64_IEEE'});
    DataTypes(indices) = arrayfun(@(X, Y) ptc_matlab_lib.containerdatatype2('MinVal', X, 'MaxVal', Y, 'OutputType', 'a2l'), ...
        MinValues(indices), MaxValues(indices), 'UniformOutput', false);
    
    BitMasks = cell(numel(ECUAddresses), 1);
    indices = ~cellfun(@isempty, temp5);
    if any(indices)
        BitMasks(indices) = cellfun(@(X) X.BitMask, temp5(indices), 'UniformOutput', false);
    end
    if any(~indices)
        BitMasks(~indices) = arrayfun(@(X) repmat('FF', 1, X), ceil(get_num_bits(DataTypes(~indices))/8), 'UniformOutput', false);
    end
    BitMasks = reshape(hex2dec2(BitMasks), [], 1);
    
    LeftShifts = NaN(numel(ECUAddresses), 1);
    indices1 = ~cellfun(@isempty, temp7);
    if any(indices1)
        LeftShifts(indices1) = str2double(cellfun(@(X) X.LeftShift, temp7(indices1), 'UniformOutput', false));
    end
    if any(~indices1)
        LeftShifts(~indices1) = 0;
    end
    
    RightShifts = NaN(numel(ECUAddresses), 1);
    indices2 = ~cellfun(@isempty, temp8);
    if any(indices2)
        RightShifts(indices2) = str2double(cellfun(@(X) X.RightShift, temp8(indices2), 'UniformOutput', false));
    end
    if any(~indices2 & ~indices1)
        RightShifts(~indices2 & ~indices1) = cell2mat(cellfun(@(X) find(X ~= '0', 1), cellstr(fliplr(dec2bin2(BitMasks(~indices2 & ~indices1)))), 'UniformOutput', false)) - 1;
    end
    if any(~indices2 & indices1)
        RightShifts(~indices2 & indices1) = 0;
    end
    
    SignExtends = false(numel(ECUAddresses), 1);
    indices = ~cellfun(@isempty, temp9);
    if any(indices)
        SignExtends(indices) = true;
    end
    
    ByteOrders = cell(numel(ECUAddresses), 1);
    indices = ~cellfun(@isempty, temp10);
    if any(indices)
        ByteOrders(indices) = cellfun(@(X) X.ByteOrder, temp10(indices), 'UniformOutput', false);
    end
    if any(~indices)
        if isfield(Mod_Common_Struct, 'Byte_Order')
            ByteOrders(~indices) = {Mod_Common_Struct.Byte_Order};
        else
            ByteOrders(~indices) = {ARGS.DefaultByteOrder};
        end
    end
    
    ASAP1B_LOCIDs = NaN(numel(ECUAddresses), 2);
    indices = ~cellfun(@isempty, temp6);
    if any(indices)
        tempvar = cellfun(@(X) {X.PART1, X.PART2}, temp6(indices), 'UniformOutput', false);
        ASAP1B_LOCIDs(indices, :) = reshape(hex2dec2([tempvar{:}]), 2, []).';
        clear('tempvar');
    end
    
    A2L.A2LDATA.Measurements = struct('LabelNames', {LabelNames}, ...
        'LabelDescriptions', {LabelDescriptions}, ...
        'DataTypes', {DataTypes}, ...
        'IndexTypes', {repmat({'INDEX_INCR'}, size(DataTypes))}, ...
        'Coeffs', {Coeffs}, ...
        'Enumerations', {Enumerations}, ...
        'EnumerationInfo', {EnumerationInfo}, ...
        'Compu_Vtab_LabelNames', {Compu_Vtabs}, ...
        'RangeDefinitions', {RangeDefinitions}, ...
        'Precisions', {Precisions}, ...
        'Units', {Units}, ...
        'Formula', {Formula}, ...
        'Formula_Inv', {Formula_Inv}, ...
        'MinValues', {MinValues}, ...
        'MaxValues', {MaxValues}, ...
        'ECUAddresses', {reshape(hex2dec2(ECUAddresses), [], 1)}, ...
        'ECUAddressExtensions', {reshape(hex2dec2(ECUAddressExtensions), [], 1)}, ...
        'Dimensions', {Dimensions}, ...
        'ByteOrders', {ByteOrders}, ...
        'BitMasks', {BitMasks}, ...
        'LeftShifts', {LeftShifts}, ...
        'RightShifts', {RightShifts}, ...
        'SignExtends', {SignExtends}, ...
        'ASAP1B_LOCIDs', {ASAP1B_LOCIDs});
    
    [~, indices] = unique(A2L.A2LDATA.Measurements.LabelNames, 'last');
    A2L.A2LDATA.Measurements = structfun(@(X) X(indices, :), A2L.A2LDATA.Measurements, 'UniformOutput', false);
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 10: Characteristics
if ismember('Characteristics', ARGS.A2LTagFilter)
    indices = arrayfun(@(X, Y) (X:Y).', characteristic_indices(:), characteristic_indices_end(:), 'UniformOutput', false);
    indices = cell2mat(indices);
    characteristic_info = strimplode(file(indices), ' ');
    characteristic_info = regexp(characteristic_info, '(\s*/begin\s+CHARACTERISTIC\s*)|(\s*/end\s+CHARACTERISTIC\s*)', 'split');
    characteristic_info(1:2:end) = [];
    
    pattern1 = '(?<LabelNames>[^\s]+)\s+"(?<LabelDescriptions>((.*?)(?<!\\)))"\s+(?<CharacteristicTypes>[^\s]+)\s+0x(?<ECUAddresses>[^\s]+)\s+(?<RecordLayouts>[^\s]+)\s+[^\s]+\s+(?<Compu_Methods>[^\s]+)\s+(?<MinValues>[^\s]+)\s+(?<MaxValues>[^\s]+)';
    pattern2 = '\s+NUMBER\s+(?<ArraySizes>[^\s]+)\s*';
    pattern3 = '\s+MATRIX_DIM\s+(?<Rows>\d+)\s+(?<Columns>\d+)\s+\d+\s*';
    pattern4 = '\s+BIT_MASK\s+0x(?<BitMask>[^\s]+)\s*';
    pattern5 = '\s+ASAP1B_LOCID\s+0x(?<PART1>[^\s]+)\s+0x(?<PART2>[^\s]+)\s*';
    pattern6 = '\s+LEFT_SHIFT\s+(?<LeftShift>[^\s]+)\s*';
    pattern7 = '\s+RIGHT_SHIFT\s+(?<RightShift>[^\s]+)\s*';
    pattern8 = '\s+SIGN_EXTEND\s*';
    pattern9 = '\s+BYTE_ORDER\s+(?<ByteOrder>[^\s]+)\s*';
    pattern10 = '\s+ECU_ADDRESS_EXTENSION\s+0x(?<ECUAddressExtensions>[^\s]+)\s*';
    pattern11 = '\s+PHYS_UNIT\s+"(?<PhysicalUnit>((.*?)(?<!\\)))"\s*';
    temp1 = regexp(characteristic_info, pattern1, 'once', 'names'); temp1 = temp1(:);
    temp2 = regexp(characteristic_info, pattern2, 'once', 'names'); temp2 = temp2(:);
    temp3 = regexp(characteristic_info, pattern3, 'once', 'names'); temp3 = temp3(:);
    temp4 = regexp(characteristic_info, pattern4, 'once', 'names'); temp4 = temp4(:);
    temp5 = regexp(characteristic_info, pattern5, 'once', 'names'); temp5 = temp5(:);
    temp6 = regexp(characteristic_info, pattern6, 'once', 'names'); temp6 = temp6(:);
    temp7 = regexp(characteristic_info, pattern7, 'once', 'names'); temp7 = temp7(:);
    temp8 = regexp(characteristic_info, pattern8, 'once', 'names'); temp8 = temp8(:);
    temp9 = regexp(characteristic_info, pattern9, 'once', 'names'); temp9 = temp9(:);
    temp10 = regexp(characteristic_info, pattern10, 'once', 'names'); temp10 = temp10(:);
    temp11 = regexp(characteristic_info, pattern11, 'once', 'names'); temp11 = temp11(:);
    
    LabelNames = cellfun(@(X) X.LabelNames, temp1, 'UniformOutput', false);
    LabelDescriptions = regexprep(cellfun(@(X) X.LabelDescriptions, temp1, 'UniformOutput', false), '(("{2,2})|(\\"))', '"');
    CharacteristicTypes = cellfun(@(X) X.CharacteristicTypes, temp1, 'UniformOutput', false);
    ECUAddresses = cellfun(@(X) X.ECUAddresses, temp1, 'UniformOutput', false);
    
    ECUAddressExtensions = cell(numel(ECUAddresses), 1);
    indices = cellfun(@isempty, temp10);
    ECUAddressExtensions(indices) = {'0'};
    ECUAddressExtensions(~indices) = cellfun(@(X) X.ECUAddressExtensions, temp10(~indices), 'UniformOutput', false);
    
    DataTypes = cell(numel(temp1), 1);
    IndexTypes = cell(numel(temp1), 1);
    RecordLayouts = cellfun(@(X) X.RecordLayouts, temp1, 'UniformOutput', false);
    [tf, loc] = ismember(RecordLayouts, Record_Layouts_Struct.LabelNames);
    DataTypes(tf) = Record_Layouts_Struct.Fnc_Values_DataTypes(nonzeros(loc));
    IndexTypes(tf) = Record_Layouts_Struct.Fnc_Values_IndexTypes(nonzeros(loc));
    
    Compu_Methods = cellfun(@(X) X.Compu_Methods, temp1, 'UniformOutput', false);
    [~, loc] = ismember(Compu_Methods, Compu_Methods_Struct.LabelNames);
    Coeffs = Compu_Methods_Struct.Coeffs(loc, :);
    Precisions = Compu_Methods_Struct.Precisions(loc);
    Units = Compu_Methods_Struct.Units(loc);
    idx = ~cellfun(@isempty, temp11);
    Units(idx) = regexprep(cellfun(@(X) X.PhysicalUnit, temp11(idx), 'UniformOutput', false), '(("{2,2})|(\\"))', '"');
    Formula = Compu_Methods_Struct.Formula(loc);
    Formula_Inv = Compu_Methods_Struct.Formula_Inv(loc);
    
    Compu_Vtabs = Compu_Methods_Struct.Compu_Tab_Refs(loc, :);
    [tf, loc2] = ismember(Compu_Vtabs, Compu_Vtabs_Struct.LabelNames);
    Compu_Vtabs(~tf) = {''};
    Enumerations = cell(length(Compu_Vtabs), 1);
    Enumerations(tf) = Compu_Vtabs_Struct.Enumerations(nonzeros(loc2));
    EnumerationInfo = cell(length(Compu_Vtabs), 1);
    EnumerationInfo(tf) = arrayfun(@(X) struct('LabelName', Compu_Vtabs_Struct.LabelNames{X}, ...
        'LabelDescription', Compu_Vtabs_Struct.LabelDescriptions{X}, ...
        'Tab_Verb', Compu_Vtabs_Struct.Tab_Verbs(X), ...
        'Enumeration', Compu_Vtabs_Struct.Enumerations{X}), ...
        nonzeros(loc2), 'UniformOutput', false);
    [tf, loc2] = ismember(Compu_Vtabs, Compu_Vtab_Ranges_Struct.LabelNames);
    RangeDefinitions = cell(length(Compu_Vtabs), 1);
    RangeDefinitions(tf) = Compu_Vtab_Ranges_Struct.RangeDefinitions(nonzeros(loc2));
    
    MinValues = cellfun(@(X) X.MinValues, temp1, 'UniformOutput', false);
    MaxValues = cellfun(@(X) X.MaxValues, temp1, 'UniformOutput', false);
    MinValues = str2double(MinValues);
    MaxValues = str2double(MaxValues);
    
    %Populate Dimensions, Axis_Descrs
    Dimensions = NaN(numel(CharacteristicTypes), 2);
    AxisLabels = cell(numel(CharacteristicTypes), 1);
    
    %VALUE
    %Sundeep Tuteja, 2016-08-22: The initial value for Dimensions
    %corresponding to VAL_BLK should apparently be set to [1, 1]. This will
    %be overwritten later if need be.
    indices = strcmp('VALUE', CharacteristicTypes) | strcmp('VAL_BLK', CharacteristicTypes) | strcmp('ASCII', CharacteristicTypes);
    if any(indices)
        Dimensions(indices, :) = ones(nnz(indices), 2);
        AxisLabels(indices) = {cell(0, 1)};
    end
    
    indices1 = ~cellfun(@isempty, temp2);
    indices2 = ~cellfun(@isempty, temp3);
    %assert(none(indices1 .* indices2));
    if any(indices1)
        Dimensions(indices1, :) = [str2double(cellfun(@(X) X.ArraySizes, temp2(indices1), 'UniformOutput', false)) ...
            ones(nnz(indices1), 1)];
    end
    if any(indices2)
        Dimensions(indices2, :) = cell2mat(cellfun(@(X) [str2double(X.Rows) str2double(X.Columns)], ...
            temp3(indices2), 'UniformOutput', false));
    end
    
    BitMasks = cell(numel(CharacteristicTypes), 1);
    indices = ~cellfun(@isempty, temp4);
    if any(indices)
        BitMasks(indices) = cellfun(@(X) X.BitMask, temp4(indices), 'UniformOutput', false);
    end
    if any(~indices)
        BitMasks(~indices) = arrayfun(@(X) repmat('FF', 1, X), ceil(get_num_bits(DataTypes(~indices))/8), 'UniformOutput', false);
    end
    BitMasks = reshape(hex2dec2(BitMasks), [], 1);
    
    LeftShifts = NaN(numel(CharacteristicTypes), 1);
    indices1 = ~cellfun(@isempty, temp6);
    if any(indices1)
        LeftShifts(indices1) = str2double(cellfun(@(X) X.LeftShift, temp6(indices1), 'UniformOutput', false));
    end
    if any(~indices1)
        LeftShifts(~indices1) = 0;
    end
    
    RightShifts = NaN(numel(CharacteristicTypes), 1);
    indices2 = ~cellfun(@isempty, temp7);
    if any(indices2)
        RightShifts(indices2) = str2double(cellfun(@(X) X.RightShift, temp7(indices2), 'UniformOutput', false));
    end
    if any(~indices2 & ~indices1)
        RightShifts(~indices2 & ~indices1) = cell2mat(cellfun(@(X) find(X ~= '0', 1), cellstr(fliplr(dec2bin2(BitMasks(~indices2 & ~indices1)))), 'UniformOutput', false)) - 1;
    end
    if any(~indices2 & indices1)
        RightShifts(~indices2 & indices1) = 0;
    end
    
    SignExtends = false(numel(CharacteristicTypes), 1);
    indices = ~cellfun(@isempty, temp8);
    if any(indices)
        SignExtends(indices) = true;
    end
    
    %VAL_BLK or ASCII
    %It is being assumed here that axis labels are never defined for VAL_BLK and
    %ASCII characteristic types.
    indices = strcmp('VAL_BLK', CharacteristicTypes) | strcmp('ASCII', CharacteristicTypes);
    AxisLabels(indices) = {cell(0, 1)};
    
    %CURVE
    indices = strcmp('CURVE', CharacteristicTypes);
    characteristic_info_subset = characteristic_info(indices);
    axis_descr_info = strimplode(characteristic_info_subset, ' ');
    axis_descr_info = regexp(axis_descr_info, '(\s*/begin\s+AXIS_DESCR\s*)|(\s*/end\s+AXIS_DESCR\s*)', 'split');
    axis_descr_info(1:2:end) = [];
    pattern = '[^\s]+\s+[^\s]+\s+[^\s]+\s+(?<Dimensions>[^\s]+)\s+';
    temp = regexp(axis_descr_info, pattern, 'once', 'names'); temp = temp(:);
    Dimensions(indices, :) = [str2double(cellfun(@(X) X.Dimensions, temp, 'UniformOutput', false)) ...
        ones(numel(characteristic_info_subset), 1)];
    pattern = '\s+AXIS_PTS_REF\s+(?<AxisLabels>[^\s]+)';
    temp = regexp(axis_descr_info, pattern, 'once', 'names'); temp = temp(:);
    tempAxisLabels = AxisLabels(indices);
    tempAxisLabels(~cellfun(@isempty, temp)) = cellfun(@(X) cellstr(X.AxisLabels), temp(~cellfun(@isempty, temp)), 'UniformOutput', false);
    AxisLabels(indices) = tempAxisLabels;
    
    %MAP
    indices = strcmp('MAP', CharacteristicTypes);
    characteristic_info_subset = characteristic_info(indices);
    axis_descr_info = strimplode(characteristic_info_subset, ' ');
    axis_descr_info = regexp(axis_descr_info, '(\s*/begin\s+AXIS_DESCR\s*)|(\s*/end\s+AXIS_DESCR\s*)', 'split');
    axis_descr_info(1:2:end) = [];
    pattern = '[^\s]+\s+[^\s]+\s+[^\s]+\s+(?<Dimensions>[^\s]+)\s+';
    temp = regexp(axis_descr_info, pattern, 'once', 'names'); temp = temp(:);
    Dimensions(indices, :) = [str2double(cellfun(@(X) X.Dimensions, temp(2:2:end), 'UniformOutput', false)) ...
        str2double(cellfun(@(X) X.Dimensions, temp(1:2:end), 'UniformOutput', false))];
    pattern = '\s+AXIS_PTS_REF\s+(?<AxisLabels>[^\s]+)';
    temp = regexp(axis_descr_info, pattern, 'once', 'names'); temp = temp(:);
    AxisLabels(indices) = cellfun(@(X, Y) {X.AxisLabels; Y.AxisLabels}, temp(1:2:end), temp(2:2:end), 'UniformOutput', false);
    
    %TBD: Maybe CUBOID, CUBE_4, CUBE_5???
    %While CUBOID, CUBE_4, and CUBE_5 are not supported, we need to remove the corresponding
    %entries
    indices = ismember(CharacteristicTypes, {'CUBOID'; 'CUBE_4'; 'CUBE_5'});
    if any(indices)
        LabelNames(indices, :) = [];
        LabelDescriptions(indices, :) = [];
        ECUAddresses(indices, :) = [];
        ECUAddressExtensions(indices, :) = [];
        DataTypes(indices, :) = [];
        IndexTypes(indices, :) = [];
        CharacteristicTypes(indices, :) = [];
        Coeffs(indices, :) = [];
        Enumerations(indices, :) = [];
        EnumerationInfo(indices, :) = [];
        Compu_Vtabs(indices, :) = [];
        RangeDefinitions(indices, :) = [];
        Precisions(indices, :) = [];
        Units(indices, :) = [];
        Formula(indices, :) = [];
        Formula_Inv(indices, :) = [];
        MinValues(indices, :) = [];
        MaxValues(indices, :) = [];
        Dimensions(indices, :) = [];
        AxisLabels(indices, :) = [];
        BitMasks(indices, :) = [];
        LeftShifts(indices, :) = [];
        RightShifts(indices, :) = [];
        SignExtends(indices, :) = [];
    end
    
    %Sundeep Tuteja, 2013-05-07: Assert, no NaNs in Dimensions
    assert(none(isnan(Dimensions(:))));
    
    %Sundeep Tuteja, 2012-11-02: It looks like cases exist when the
    %datatype for characteristic values is not specified. In these cases,
    %the datatype must be ascertained based on the limits.
    indices = ~ismember(DataTypes, {'UBYTE', 'SBYTE', 'UWORD', 'SWORD', 'ULONG', 'SLONG', 'A_UINT64', 'A_INT64', 'FLOAT32_IEEE', 'FLOAT64_IEEE'});
    DataTypes(indices) = arrayfun(@(X, Y) ptc_matlab_lib.containerdatatype2('MinVal', X, 'MaxVal', Y, 'OutputType', 'a2l'), ...
        MinValues(indices), MaxValues(indices), 'UniformOutput', false);
    
    ASAP1B_LOCIDs = NaN(numel(ECUAddresses), 2);
    indices = ~cellfun(@isempty, temp5);
    if any(indices)
        tempvar = cellfun(@(X) {X.PART1, X.PART2}, temp5(indices), 'UniformOutput', false);
        ASAP1B_LOCIDs(indices, :) = reshape(hex2dec2([tempvar{:}]), 2, []).';
        clear('tempvar');
    end
    
    ByteOrders = cell(numel(ECUAddresses), 1);
    indices = ~cellfun(@isempty, temp9);
    if any(indices)
        ByteOrders(indices) = cellfun(@(X) X.ByteOrder, temp9(indices), 'UniformOutput', false);
    end
    if any(~indices)
        if isfield(Mod_Common_Struct, 'Byte_Order')
            ByteOrders(~indices) = {Mod_Common_Struct.Byte_Order};
        else
            ByteOrders(~indices) = {ARGS.DefaultByteOrder};
        end
    end
    
    A2L.A2LDATA.Characteristics = struct('LabelNames', {LabelNames}, ...
        'LabelDescriptions', {LabelDescriptions}, ...
        'ECUAddresses', {reshape(hex2dec2(ECUAddresses), [], 1) + Mod_Par_Struct.ECU_Calibration_Offset}, ...
        'ECUAddressExtensions', {reshape(hex2dec2(ECUAddressExtensions), [], 1)}, ...
        'DataTypes', {DataTypes}, ...
        'IndexTypes', {IndexTypes}, ...
        'CharacteristicTypes', {CharacteristicTypes}, ...
        'Coeffs', {Coeffs}, ...
        'Enumerations', {Enumerations}, ...
        'EnumerationInfo', {EnumerationInfo}, ...
        'Compu_Vtab_LabelNames', {Compu_Vtabs}, ...
        'RangeDefinitions', {RangeDefinitions}, ...
        'Precisions', {Precisions}, ...
        'Units', {Units}, ...
        'Formula', {Formula}, ...
        'Formula_Inv', {Formula_Inv}, ...
        'MinValues', {MinValues}, ...
        'MaxValues', {MaxValues}, ...
        'Dimensions', {Dimensions}, ...
        'AxisLabels', {AxisLabels}, ...
        'ByteOrders', {ByteOrders}, ...
        'BitMasks', {BitMasks}, ...
        'LeftShifts', {LeftShifts}, ...
        'RightShifts', {RightShifts}, ...
        'SignExtends', {SignExtends}, ...
        'ASAP1B_LOCIDs', {ASAP1B_LOCIDs});
    
    [~, indices] = unique(A2L.A2LDATA.Characteristics.LabelNames, 'last');
    A2L.A2LDATA.Characteristics = structfun(@(X) X(indices, :), A2L.A2LDATA.Characteristics, 'UniformOutput', false);
end

if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(CURRENT_STEP/NUMBER_OF_STEPS, waitbar_hndl);
end

%% Step 11: Axis_Pts
if ismember('Axis_Pts', ARGS.A2LTagFilter)
    indices = arrayfun(@(X, Y) (X:Y).', axis_pts_indices(:), axis_pts_indices_end(:), 'UniformOutput', false);
    indices = cell2mat(indices);
    axis_pts_info = strimplode(file(indices), ' ');
    axis_pts_info = regexp(axis_pts_info, '(\s*/begin\s+AXIS_PTS\s*)|(\s*/end\s+AXIS_PTS\s*)', 'split');
    axis_pts_info(1:2:end) = [];
    
    pattern = '(?<LabelNames>[^\s]+)\s+"(?<LabelDescriptions>((.*?)(?<!\\)))"\s+0x(?<ECUAddresses>[^\s]+)\s+[^\s]+\s+(?<RecordLayouts>[^\s]+)\s+[^\s]+\s+(?<Compu_Methods>[^\s]+)\s+(?<Dimensions>[^\s]+)\s+(?<MinValues>[^\s]+)\s+(?<MaxValues>[^\s]+)';
    pattern2 = '\s+BIT_MASK\s+0x(?<BitMask>[^\s]+)\s*';
    pattern3 = '\s+ASAP1B_LOCID\s+0x(?<PART1>[^\s]+)\s+0x(?<PART2>[^\s]+)\s*';
    pattern4 = '\s+LEFT_SHIFT\s+(?<LeftShift>[^\s]+)\s*';
    pattern5 = '\s+RIGHT_SHIFT\s+(?<RightShift>[^\s]+)\s*';
    pattern6 = '\s+SIGN_EXTEND\s*';
    pattern7 = '\s+BYTE_ORDER\s+(?<ByteOrder>[^\s]+)\s*';
    pattern8 = '\s+ECU_ADDRESS_EXTENSION\s+0x(?<ECUAddressExtensions>[^\s]+)\s*';
    pattern9 = '\s+PHYS_UNIT\s+"(?<PhysicalUnit>((.*?)(?<!\\)))"\s*';
    temp = regexp(axis_pts_info, pattern, 'once', 'names'); temp = temp(:);
    temp2 = regexp(axis_pts_info, pattern2, 'once', 'names'); temp2 = temp2(:);
    temp3 = regexp(axis_pts_info, pattern3, 'once', 'names'); temp3 = temp3(:);
    temp4 = regexp(axis_pts_info, pattern4, 'once', 'names'); temp4 = temp4(:);
    temp5 = regexp(axis_pts_info, pattern5, 'once', 'names'); temp5 = temp5(:);
    temp6 = regexp(axis_pts_info, pattern6, 'once', 'names'); temp6 = temp6(:);
    temp7 = regexp(axis_pts_info, pattern7, 'once', 'names'); temp7 = temp7(:);
    temp8 = regexp(axis_pts_info, pattern8, 'once', 'names'); temp8 = temp8(:);
    temp9 = regexp(axis_pts_info, pattern9, 'once', 'names'); temp9 = temp9(:);
    
    LabelNames = cellfun(@(X) X.LabelNames, temp, 'UniformOutput', false);
    LabelDescriptions = regexprep(cellfun(@(X) X.LabelDescriptions, temp, 'UniformOutput', false), '(("{2,2})|(\\"))', '"');
    ECUAddresses = cellfun(@(X) X.ECUAddresses, temp, 'UniformOutput', false);
    CharacteristicTypes = repmat({'AXIS_PTS'}, size(ECUAddresses));
    
    ECUAddressExtensions = cell(numel(ECUAddresses), 1);
    indices = cellfun(@isempty, temp8);
    ECUAddressExtensions(indices) = {'0'};
    ECUAddressExtensions(~indices) = cellfun(@(X) X.ECUAddressExtensions, temp8(~indices), 'UniformOutput', false);
    
    DataTypes = cell(numel(LabelNames), 1); IndexTypes = cell(numel(LabelNames), 1);
    RecordLayouts = cellfun(@(X) X.RecordLayouts, temp, 'UniformOutput', false);
    [tf, loc] = ismember(RecordLayouts, Record_Layouts_Struct.LabelNames);
    FncValuesDataTypes = Record_Layouts_Struct.Fnc_Values_DataTypes(nonzeros(loc));
    AxisPtsXDataTypes = Record_Layouts_Struct.Axis_Pts_X_DataTypes(nonzeros(loc));
    AxisPtsYDataTypes = Record_Layouts_Struct.Axis_Pts_Y_DataTypes(nonzeros(loc));
    AxisRescaleXDataTypes = Record_Layouts_Struct.Axis_Rescale_X_DataTypes(nonzeros(loc));
    FncValuesIndexTypes = Record_Layouts_Struct.Fnc_Values_IndexTypes(nonzeros(loc));
    AxisPtsXIndexTypes = Record_Layouts_Struct.Axis_Pts_X_IndexTypes(nonzeros(loc));
    AxisPtsYIndexTypes = Record_Layouts_Struct.Axis_Pts_Y_IndexTypes(nonzeros(loc));
    AxisRescaleXIndexTypes = Record_Layouts_Struct.Axis_Rescale_X_IndexTypes(nonzeros(loc));
    tempDataTypes = FncValuesDataTypes; tempIndexTypes = FncValuesIndexTypes;
    empty_indices = cellfun(@isempty, tempDataTypes); tempDataTypes(empty_indices) = AxisPtsXDataTypes(empty_indices); tempIndexTypes(empty_indices) = AxisPtsXIndexTypes(empty_indices);
    empty_indices = cellfun(@isempty, tempDataTypes); tempDataTypes(empty_indices) = AxisPtsYDataTypes(empty_indices); tempIndexTypes(empty_indices) = AxisPtsYIndexTypes(empty_indices);
    empty_indices = cellfun(@isempty, tempDataTypes); tempDataTypes(empty_indices) = AxisRescaleXDataTypes(empty_indices); tempIndexTypes(empty_indices) = AxisRescaleXIndexTypes(empty_indices);
    DataTypes(tf) = tempDataTypes;
    IndexTypes(tf) = tempIndexTypes;
    
    BitMasks = cell(numel(ECUAddresses), 1);
    indices = ~cellfun(@isempty, temp2);
    if any(indices)
        BitMasks(indices) = cellfun(@(X) X.BitMask, temp2(indices), 'UniformOutput', false);
    end
    if any(~indices)
        BitMasks(~indices) = arrayfun(@(X) repmat('FF', 1, X), ceil(get_num_bits(DataTypes(~indices))/8), 'UniformOutput', false);
    end
    BitMasks = reshape(hex2dec2(BitMasks), [], 1);
    
    LeftShifts = NaN(numel(CharacteristicTypes), 1);
    indices1 = ~cellfun(@isempty, temp4);
    if any(indices1)
        LeftShifts(indices1) = str2double(cellfun(@(X) X.LeftShift, temp4(indices1), 'UniformOutput', false));
    end
    if any(~indices1)
        LeftShifts(~indices1) = 0;
    end
    
    RightShifts = NaN(numel(CharacteristicTypes), 1);
    indices2 = ~cellfun(@isempty, temp5);
    if any(indices2)
        RightShifts(indices2) = str2double(cellfun(@(X) X.RightShift, temp5(indices2), 'UniformOutput', false));
    end
    if any(~indices2 & ~indices1)
        RightShifts(~indices2 & ~indices1) = cell2mat(cellfun(@(X) find(X ~= '0', 1), cellstr(fliplr(dec2bin2(BitMasks(~indices2 & ~indices1)))), 'UniformOutput', false)) - 1;
    end
    if any(~indices2 & indices1)
        RightShifts(~indices2 & indices1) = 0;
    end
    
    SignExtends = false(numel(CharacteristicTypes), 1);
    indices = ~cellfun(@isempty, temp6);
    if any(indices)
        SignExtends(indices) = true;
    end
    
    Compu_Methods = cellfun(@(X) X.Compu_Methods, temp, 'UniformOutput', false);
    [~, loc] = ismember(Compu_Methods, Compu_Methods_Struct.LabelNames);
    Coeffs = Compu_Methods_Struct.Coeffs(loc, :);
    Precisions = Compu_Methods_Struct.Precisions(loc, :);
    Units = Compu_Methods_Struct.Units(loc);
    idx = ~cellfun(@isempty, temp9);
    Units(idx) = regexprep(cellfun(@(X) X.PhysicalUnit, temp9(idx), 'UniformOutput', false), '(("{2,2})|(\\"))', '"');
    Formula = Compu_Methods_Struct.Formula(loc);
    Formula_Inv = Compu_Methods_Struct.Formula_Inv(loc);
    
    Compu_Vtabs = Compu_Methods_Struct.Compu_Tab_Refs(loc, :);
    [tf, loc2] = ismember(Compu_Vtabs, Compu_Vtabs_Struct.LabelNames);
    Compu_Vtabs(~tf) = {''};
    Enumerations = cell(length(Compu_Vtabs), 1);
    Enumerations(tf) = Compu_Vtabs_Struct.Enumerations(nonzeros(loc2));
    EnumerationInfo = cell(length(Compu_Vtabs), 1);
    EnumerationInfo(tf) = arrayfun(@(X) struct('LabelName', Compu_Vtabs_Struct.LabelNames{X}, ...
        'LabelDescription', Compu_Vtabs_Struct.LabelDescriptions{X}, ...
        'Tab_Verb', Compu_Vtabs_Struct.Tab_Verbs(X), ...
        'Enumeration', Compu_Vtabs_Struct.Enumerations{X}), ...
        nonzeros(loc2), 'UniformOutput', false);
    [tf, loc2] = ismember(Compu_Vtabs, Compu_Vtab_Ranges_Struct.LabelNames);
    RangeDefinitions = cell(length(Compu_Vtabs), 1);
    RangeDefinitions(tf) = Compu_Vtab_Ranges_Struct.RangeDefinitions(nonzeros(loc2));
    
    Dimensions = [str2double(cellfun(@(X) X.Dimensions, temp, 'UniformOutput', false)) ...
        ones(numel(LabelNames), 1)];
    
    MinValues = cellfun(@(X) X.MinValues, temp, 'UniformOutput', false);
    MaxValues = cellfun(@(X) X.MaxValues, temp, 'UniformOutput', false);
    MinValues = str2double(MinValues);
    MaxValues = str2double(MaxValues);
    
    indices = ~ismember(DataTypes, {'UBYTE', 'SBYTE', 'UWORD', 'SWORD', 'ULONG', 'SLONG', 'A_UINT64', 'A_INT64', 'FLOAT32_IEEE', 'FLOAT64_IEEE'});
    DataTypes(indices) = arrayfun(@(X, Y) ptc_matlab_lib.containerdatatype2('MinVal', X, 'MaxVal', Y, 'OutputType', 'a2l'), ...
        MinValues(indices), MaxValues(indices), 'UniformOutput', false);
    
    ASAP1B_LOCIDs = NaN(numel(ECUAddresses), 2);
    indices = ~cellfun(@isempty, temp3);
    if any(indices)
        tempvar = cellfun(@(X) {X.PART1, X.PART2}, temp3(indices), 'UniformOutput', false);
        ASAP1B_LOCIDs(indices, :) = reshape(hex2dec2([tempvar{:}]), 2, []).';
        clear('tempvar');
    end
    
    ByteOrders = cell(numel(ECUAddresses), 1);
    indices = ~cellfun(@isempty, temp7);
    if any(indices)
        ByteOrders(indices) = cellfun(@(X) X.ByteOrder, temp7(indices), 'UniformOutput', false);
    end
    if any(~indices)
        if isfield(Mod_Common_Struct, 'Byte_Order')
            ByteOrders(~indices) = {Mod_Common_Struct.Byte_Order};
        else
            ByteOrders(~indices) = {ARGS.DefaultByteOrder};
        end
    end
    
    A2L.A2LDATA.Axis_Pts = struct('LabelNames', {LabelNames}, ...
        'LabelDescriptions', {LabelDescriptions}, ...
        'ECUAddresses', {reshape(hex2dec2(ECUAddresses), [], 1) + Mod_Par_Struct.ECU_Calibration_Offset}, ...
        'ECUAddressExtensions', {reshape(hex2dec2(ECUAddressExtensions), [], 1)}, ...
        'CharacteristicTypes', {CharacteristicTypes}, ...
        'DataTypes', {DataTypes}, ...
        'IndexTypes', {IndexTypes}, ...
        'Coeffs', {Coeffs}, ...
        'Compu_Vtab_LabelNames', {Compu_Vtabs}, ...
        'Enumerations', {Enumerations}, ...
        'EnumerationInfo', {EnumerationInfo}, ...
        'RangeDefinitions', {RangeDefinitions}, ...
        'Precisions', {Precisions}, ...
        'Units', {Units}, ...
        'Formula', {Formula}, ...
        'Formula_Inv', {Formula_Inv}, ...
        'MinValues', {MinValues}, ...
        'MaxValues', {MaxValues}, ...
        'Dimensions', {Dimensions}, ...
        'ByteOrders', {ByteOrders}, ...
        'BitMasks', {BitMasks}, ...
        'LeftShifts', {LeftShifts}, ...
        'RightShifts', {RightShifts}, ...
        'SignExtends', {SignExtends}, ...
        'ASAP1B_LOCIDs', {ASAP1B_LOCIDs});
    
    [~, indices] = unique(A2L.A2LDATA.Axis_Pts.LabelNames, 'last');
    A2L.A2LDATA.Axis_Pts = structfun(@(X) X(indices, :), A2L.A2LDATA.Axis_Pts, 'UniformOutput', false);
end

varargout{1} = A2L;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end