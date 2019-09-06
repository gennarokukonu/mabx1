function varargout = L4_init(varargin)

%Base workspace cleanup
ticid1 = tic;
L4_cleanup;
clc;
dspacerc;

%Preserve current path
oldpath = path;

%Change current working directory to file directory
cd(fullfile(mfiledir, '..'));
ROOT = mfiledir;

%Set up cleanup procedure
paths_to_remove = cell(0, 1);

addpath(ROOT); paths_to_remove{end+1, 1} = ROOT;
addpath(fullfile(ROOT, 'DataDictionaries')); paths_to_remove{end+1, 1} = fullfile(ROOT, 'DataDictionaries');
addpath(fullfile(ROOT, 'Enumerations')); paths_to_remove{end+1, 1} = fullfile(ROOT, 'Enumerations');
addpath(fullfile(ROOT, 'PTC_MBDS_LIB')); paths_to_remove{end+1, 1} = fullfile(ROOT, 'PTC_MBDS_LIB');
addpath(fullfile(ROOT, 'EmE_MBD_Blockset')); paths_to_remove{end+1, 1} = fullfile(ROOT, 'EmE_MBD_Blockset');
addpath(fullfile(ROOT, 'ProjectLibrary')); paths_to_remove{end+1, 1} = fullfile(ROOT, 'ProjectLibrary');
addpath(fullfile(ROOT, 'ProjectLibrary', 'Enumerations')); paths_to_remove{end+1, 1} = fullfile(ROOT, 'ProjectLibrary', 'Enumerations');
addpath(fullfile(ROOT, 'Utilities')); paths_to_remove{end+1, 1} = fullfile(ROOT, 'Utilities');

pairs = {'Variant', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

VARIANTLIST = {'MABX_PTC_166';'MABX_PTC_1571';'MABX_PIC_KW'; 'SIM'};
VARIANTLIST = unique(VARIANTLIST);
if ~ismember(ARGS.Variant, VARIANTLIST)
    [selection, ok] = listdlg('ListString', VARIANTLIST, 'PromptString', 'Select variant', 'SelectionMode', 'single');
    if ~ok
        %Cancel was pressed
        path(oldpath);
        return;
    end
    ARGS.Variant = VARIANTLIST{selection};
end

fprintf([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Selected Variant: ' ARGS.Variant '\n']);
fprintf([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Running ' mfilename '...\n']);

%Data dictionary init
switch ARGS.Variant
    case 'MABX_PTC_166'
        %L4_MABX Data dictionaries
        DataDictionaryList = [{'Command', 'GLB_CAL', 'ShouldExport', true};
            {'Command', 'GLB_CONST', 'ShouldExport', true};
            {'Command', 'GLB_SIG', 'ShouldExport', true};
            {'Command', 'SUB_L4_Task_10ms_SUB_BRKPEDARB_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'L4_MABX_166_TS_CAL', 'ShouldExport', true}; % Truck Specific Cal for 166
            {'Command', 'L4_MABX_166_TS_SIG', 'ShouldExport', true}; % Truck Specific Sig for 166				
            {'Command', 'CreateHW_Interface({''PIC_KW'',''PTC_1571'',''PTC_166''}, ''PTC_166'')', 'ShouldExport', false};% Argument lists all possible HW interface blocks, followed by selected one
%             {'Command', 'InitializeRTMapsInterface','ShouldExport',false}
];
    case 'MABX_PTC_1571'
        %L4_MABX Data dictionaries
        DataDictionaryList = [{'Command', 'GLB_CAL', 'ShouldExport', true};
            {'Command', 'GLB_CONST', 'ShouldExport', true};
            {'Command', 'GLB_SIG', 'ShouldExport', true};
            {'Command', 'SUB_L4_Task_10ms_SUB_BRKPEDARB_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'L4_MABX_1571_TS_CAL', 'ShouldExport', true}; % Truck Specific Cal for 1571
            {'Command', 'L4_MABX_1571_TS_SIG', 'ShouldExport', true}; % Truck Specific Sig for 1571			
            {'Command', 'L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'CreateHW_Interface({''PIC_KW'',''PTC_1571'',''PTC_166''}, ''PTC_1571'')', 'ShouldExport', false};% Argument lists all possible HW interface blocks, followed by selected one
%             {'Command', 'InitializeRTMapsInterface','ShouldExport',false}
];
    case 'MABX_PIC_KW'
        %L4_MABX Data dictionaries
        DataDictionaryList = [{'Command', 'GLB_CAL', 'ShouldExport', true};
            {'Command', 'GLB_CONST', 'ShouldExport', true};
            {'Command', 'GLB_SIG', 'ShouldExport', true};
            {'Command', 'SUB_L4_Task_10ms_SUB_BRKPEDARB_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'L4_MABX_PIC_TS_CAL', 'ShouldExport', true}; % Truck Specific Cal for PIC
            {'Command', 'L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'L4_MABX_PIC_TS_SIG', 'ShouldExport', true}; % Truck Specific Cal for PIC
            {'Command', 'RTMapsRx', 'ShouldExport', true};
            {'Command', 'RTMapsTx', 'ShouldExport', true};
            {'Command', 'CreateHW_Interface({''PIC_KW'',''PTC_1571'',''PIC_1''}, ''PIC_KW'')', 'ShouldExport', false};% Argument lists all possible HW interface blocks, followed by selected one
            {'Command', 'InitializeRTMapsInterface','ShouldExport',false}
];
        case 'MABX_PIC_PB'
        %L4_MABX Data dictionaries
        DataDictionaryList = [{'Command', 'GLB_CAL', 'ShouldExport', true};
            {'Command', 'GLB_CONST', 'ShouldExport', true};
            {'Command', 'GLB_SIG', 'ShouldExport', true};
            {'Command', 'SUB_L4_Task_10ms_SUB_BRKPEDARB_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'L4_MABX_PIC_TS_CAL', 'ShouldExport', true}; % Truck Specific Cal for PIC
            {'Command', 'L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'L4_MABX_PIC_TS_SIG', 'ShouldExport', true}; % Truck Specific Cal for PIC
            {'Command', 'RTMapsRx', 'ShouldExport', true};
            {'Command', 'RTMapsTx', 'ShouldExport', true};
            {'Command', 'CreateHW_Interface({''PIC_KW'',''PTC_1571'',''PIC_1''}, ''PIC_PB'')', 'ShouldExport', false};% Argument lists all possible HW interface blocks, followed by selected one
            {'Command', 'InitializeRTMapsInterface','ShouldExport',false}
];
    case 'SIM'
        addpath(fullfile(ROOT, '..', 'cycle_data')); paths_to_remove{end+1, 1} = fullfile(ROOT, '..', 'cycle_data');
        filelist = cellstr(ls(fullfile(ROOT, '..', 'cycle_data', '*.mat')));
        SelectedFile = ptc_matlab_lib.uiselectfromlist('ListString', filelist, 'SelectionMode', 'single', 'FigureParams', {'Name', 'Select Cycle'});
        if isequal(SelectedFile, 0)
            %Cancel was pressed
            path(oldpath);
            return;
        end
        
        DataDictionaryList = [{'Command', 'GLB_CAL', 'ShouldExport', true};
            {'Command', 'GLB_CONST', 'ShouldExport', true};
            {'Command', 'GLB_SIG', 'ShouldExport', true};
            {'Command', 'SUB_ECU_ABS_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_CruiseController_CAL', 'ShouldExport', true};
            {'Command', 'SUB_L4_Task_10ms_SUB_BRKPEDARB_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_L4_MABX_SIG', 'ShouldExport', true};
            {'Command', 'SUB_ECU_Transmission_CAL', 'ShouldExport', true};
            {'Command', 'SUB_ECU_Transmission_SIG', 'ShouldExport', true};
            {'Command', 'SUB_OPERATOR_CAL', 'ShouldExport', true};
            {'Command', 'SUB_OPERATOR_SIG', 'ShouldExport', true};
            {'Command', 'SUB_PLANT_Chassis_CAL', 'ShouldExport', true};
            {'Command', 'load(''SUB_PLANT_Chassis_CAL.mat'')', 'ShouldExport', false};
            {'Command', 'SUB_PLANT_Chassis_SIG', 'ShouldExport', true};
            {'Command', 'SUB_PLANT_Engine_CAL', 'ShouldExport', true};
            {'Command', 'load(''SUB_PLANT_Engine_CAL.mat'')', 'ShouldExport', false};
            {'Command', 'SUB_PLANT_Engine_CAL_Level2', 'ShouldExport', false};
            {'Command', 'SUB_PLANT_Engine_SIG', 'ShouldExport', true};
            {'Command', ['load(''' SelectedFile{1} ''')'], 'ShouldExport', false};			
            {'Command', 'L4_SIM_CAL', 'ShouldExport', true};
            {'Command', 'L4_SIM_SIG', 'ShouldExport', true}];
        
    otherwise
        error([mfilename ':' thisfuncname ':UnsupportedVariant'], ['Unsupported variant ''' ARGS.Variant '''']);
end

workspacelist = cell(size(DataDictionaryList, 1), 1);
for ctr = 1:size(DataDictionaryList, 1)
    workspacelist{ctr, 1} = ptc_matlab_lib.parseargs(DataDictionaryList(ctr, :));
    if workspacelist{ctr, 1}.ShouldExport
        workspacelist{ctr, 1}.FilePath = which(workspacelist{ctr, 1}.Command);
    else
        workspacelist{ctr, 1}.FilePath = '';
    end
    ticid2 = tic;
    fwrite(1, [ptc_matlab_lib.isodatetime ' - ' mfilename ' - Running ' workspacelist{ctr, 1}.Command '...']);
    evalin('base', [workspacelist{ctr, 1}.Command ';']);
    workspacelist{ctr, 1}.workspacestruct = ptc_matlab_lib.workspacestruct('Workspace', 'base');
    fprintf(['done, took ' num2str(toc(ticid2)) ' seconds\n']);
end
for ctr = length(workspacelist):-1:2
    workspacelist{ctr}.workspacestruct = ptc_matlab_lib.structdiff('StructA', workspacelist{ctr}.workspacestruct, 'StructB', workspacelist{ctr-1}.workspacestruct);
end
if nargout >= 1
    varargout{1} = workspacelist;
end

%% GLB_SWVERSION_CPV
try
    thisValue = cast(['L4_PACCAR_r' num2str(ptc_matlab_lib.svn_get_current_revision('Path', ROOT)) '_r' num2str(ptc_matlab_lib.svn_get_current_revision('Path', fullfile(ROOT, '+ptc_matlab_lib'))) '_' ARGS.Variant], 'uint8');
    disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Setting GLB_SWVERSION_CPV.Value to ''' thisValue '''']);
catch
    thisValue = cast(['L4_PACCAR_rSVNREV_' ARGS.Variant], 'uint8');
    disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Setting GLB_SWVERSION_CPV.Value to ''' thisValue '''']);
end

%% GLB_SWVERSION_CPV
GLB_SWVERSION_CPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ptc_matlab_lib.pad_to_length('InputVector', thisValue, 'FinalLength', 100, 'PadValue', uint8('_'), 'PadDirection', 'right'), ...
    'Description', 'Software Version Number', ...
    'Unit', 'ASCII', ...
    'CoderInfo.StorageClass', 'Custom', ...
    'CoderInfo.CustomStorageClass', 'Const');

%% GLB_SWVERSION_CPV_
GLB_SWVERSION_CPV_ = ptc_matlab_lib.PTC_MBDS_Signal('Description', 'Software Version Number', ...
    'DataType', 'uint8', ...
    'Dimensions', 100, ...
    'DimensionsMode', 'Fixed', ...
    'InitialValue', 'zeros(100, 1, ''uint8'')', ...
    'Unit', 'ASCII');

assignin('base', 'GLB_SWVERSION_CPV', GLB_SWVERSION_CPV.copy);
assignin('base', 'GLB_SWVERSION_CPV_', GLB_SWVERSION_CPV_.copy);

%Set MATLAB environment variable containing paths to remove
ptc_matlab_lib.setenv_matlab('PATHS_TO_REMOVE', paths_to_remove);

disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - done, took ' num2str(toc(ticid1)) ' seconds']);

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

