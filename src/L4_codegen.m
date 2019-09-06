function L4_codegen(varargin)

% addded by CSB to help find error when writing data dictionary
dbstop if error

path(path, mfiledir);
ROOT = ptc_matlab_lib.evaldir(fullfile(mfiledir, '..'));
cd(ROOT);

build_config_list = {'Development'; 'Release'};
[selection, ok] = listdlg('ListString', build_config_list, ...
    'PromptString', 'Select build configuration', ...
    'SelectionMode', 'single');
if ~ok
    %Cancel was pressed
    return;
end
build_config = build_config_list{selection};

if strcmp(build_config, 'Release')
    %Check status of SVN repository
    if ~ptc_matlab_lib.svn_consistency_check('SVNROOT', ROOT, 'ShouldUpdate', true, 'ShowDialog', true)
        return;
    end
end

pairs = {'Variant', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

VARIANTLIST = {'MABX'};
VARIANTLIST = sort(VARIANTLIST);
if ~ismember(ARGS.Variant, VARIANTLIST)
    [selection, ok] = listdlg('ListString', VARIANTLIST, 'PromptString', 'Select variant', 'SelectionMode', 'single');
    if ~ok
        return;
    end
    ARGS.Variant = VARIANTLIST{selection};
end

%% Step 1: Run init
ticid = tic;
path(path, mfiledir);
disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Running L4_init...']);
switch ARGS.Variant
    case 'MABX'
        WORKSPACELIST = L4_init('Variant', ARGS.Variant);
end
disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Running L4_init done, took ' num2str(toc(ticid)) ' seconds']);

%% Step 2: Code generation
switch ARGS.Variant
    case 'MABX'
        [ModelName, ModelPath] = uigetfile({'*.mdl;*.slx', 'Simulink Models (*.mdl, *.slx)'}, 'Generate code for...', fullfile(mfiledir, 'L4_MABX.slx'));
        if isequal(ModelName, 0) || isequal(ModelPath, 0)
            %Cancel was pressed
            return;
        end
        CodeGenSuffix = '_rti1401';
        PlatformName = 'rti1401'; %#ok<NASGU>
end
[~, ModelName, ModelExt] = fileparts(fullfile(ModelPath, ModelName));
%Remove the _ert_rtw and slprj directories
if exist(fullfile(ROOT, [ModelName CodeGenSuffix]), 'dir')
    s = warning('off', 'MATLAB:RMDIR:RemovedFromPath');
    rmdir(fullfile(ROOT, [ModelName CodeGenSuffix]), 's');
    warning(s.state, s.identifier);
end
if exist(fullfile(ROOT, 'slprj'), 'dir')
    s = warning('off', 'MATLAB:RMDIR:RemovedFromPath');
    rmdir(fullfile(ROOT, 'slprj'), 's');
    warning(s.state, s.identifier);
end

%Plausbility checks
ticid = tic;
disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Performing plausibility checks...']);
load_system(ModelName);
%A plausibility check is needed to ensure that a release build does no
%contain broken links inside the model
if strcmp(build_config, 'Release')
    switch ARGS.Variant
        case 'MABX'
            rootlevel = ModelName;
    end
    inactive_links = find_system(rootlevel, 'FindAll', 'on', 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'RegExp', 'on', 'LinkStatus', '(\<inactive\>)|(\<unresolved\>)');
    if ~isempty(inactive_links)
        inactive_link_blocks = strcat(cellstr(get(inactive_links, 'Path')), '/', cellstr(get(inactive_links, 'Name')));
        waitfor(ptc_matlab_lib.msgbox_editable('MessageString', [{'ERROR: The following blocks have inactive or unresolved links in the model...'};
            {''};
            inactive_link_blocks(:)], ...
            'Color', 'red', 'WindowStyle', 'modal'));
        return;
    end
end
disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Performing plausbility checks done, took ' num2str(toc(ticid)) ' seconds']);

%Commence model build
%Commence model build
disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Commencing model build ' ModelName ModelExt]);
ticid = tic;
slbuild(ModelName);
disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Model build complete, took ' num2str(toc(ticid)) ' seconds']);

%After the model build is complete, recreate the data dictionary
for ctr = 1:numel(WORKSPACELIST)
    if WORKSPACELIST{ctr}.ShouldExport
        [~, thisFileName, thisFileExt] = fileparts(WORKSPACELIST{ctr}.FilePath);
        ptc_matlab_lib.export_data_dictionary('WorkspaceStruct', WORKSPACELIST{ctr}.workspacestruct, ...
            'OutputFilePath', WORKSPACELIST{ctr}.FilePath, ...
            'ShowWaitbar', true, ...
            'WaitbarParams', {'Name', ['Exporting ' thisFileName thisFileExt]});
    end
end

%Some housekeeping
switch ARGS.Variant
    case 'MABX'
        filelist = ptc_matlab_lib.dir_recursive(fullfile(ROOT, [ModelName CodeGenSuffix]));
        HTMLDir = fullfile(ROOT, [ModelName CodeGenSuffix], 'html');
        filelist(cellfun(@isdir, filelist)) = [];
        for ctr = 1:numel(filelist)
            [thisdir, ~, thisfileext] = fileparts(filelist{ctr});
            if ~ismember(thisfileext, {'.c'; '.h'}) && ...
                    ~strncmp(thisdir, HTMLDir, length(HTMLDir))
                delete(filelist{ctr});
            end
        end
        
        filelist = {fullfile(ROOT, [ModelName '.dsbuildinfo']);
            fullfile(ROOT, [ModelName '.map']);
            fullfile(ROOT, [ModelName '.a2l']);
            fullfile(ROOT, [ModelName '.epk']);
            fullfile(ROOT, [ModelName '.s19']);
            fullfile(ROOT, [ModelName '_usr.c']);
            fullfile(ROOT, [ModelName '_usr.mk']);
            fullfile(ROOT, [ModelName '.ppc']);
            fullfile(ROOT, [ModelName '.ppc.hex']);
            fullfile(ROOT, [ModelName '.ppc.srec']);
            fullfile(ROOT, [ModelName '.sdf']);
            fullfile(ROOT, [ModelName '.trc']);
            fullfile(ROOT, [ModelName '.trz']);
            fullfile(ROOT, [ModelName '.x86'])};
        for ctr = 1:numel(filelist)
            if exist(filelist{ctr}, 'file')
                [~, thisfilename, thisfileext] = fileparts(filelist{ctr});
                movefile(filelist{ctr}, fullfile(ROOT, [ModelName CodeGenSuffix], [thisfilename thisfileext]));
            end
        end
        
        %Cleanup
        if exist(fullfile(ROOT, 'slprj'), 'dir')
            rmdir(fullfile(ROOT, 'slprj'), 's');
        end
        if exist(fullfile(ROOT, [ModelName '.slxc']), 'file')
            delete(fullfile(ROOT, [ModelName '.slxc']));
        end
end

%Move [ModelName CodeGenSuffix] to build folder
ApplicationCodeDir = fullfile(ROOT, 'builds', [ModelName CodeGenSuffix]);
if exist(ApplicationCodeDir, 'dir')
    rmdir(ApplicationCodeDir, 's');
end
movefile(fullfile(ROOT, [ModelName CodeGenSuffix]), ApplicationCodeDir);
disp([ptc_matlab_lib.isodatetime ' - ' mfilename ' - Placed application code in ' ApplicationCodeDir]);

%% Step 3: Close model
close_system(ModelName, 0);

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