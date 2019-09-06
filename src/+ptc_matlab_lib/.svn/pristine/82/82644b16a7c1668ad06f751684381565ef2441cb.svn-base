function write_pgd_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'PGDFilePath', '', ...
    'PGDDATA', '', ...
    'ShowWaitbar', true, ...
    'NewLine', sprintf('\r\n'), ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

while isempty(ARGS.PGDFilePath)
    [filename, pathname] = uiputfile({'*.pgd', 'PGD File (*.pgd)'}, 'Save PGD file as...', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.PGDFilePath = fullfile(pathname, filename);
    if ~check_write_permissions(fileparts(ARGS.PGDFilePath))
        waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the PGD file.', 'ERROR', 'modal'));
        ARGS.PGDFilePath = '';
    end
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

%Step 1: Process data
[ARGS.PGDDATA.ComponentGroupNames, ia] = sort(ARGS.PGDDATA.ComponentGroupNames);
ARGS.PGDDATA.ComponentGroupLabels = ARGS.PGDDATA.ComponentGroupLabels(ia);
STR = cell(numel(ARGS.PGDDATA.ComponentGroupNames), 1);
for componentgroupctr = 1:numel(ARGS.PGDDATA.ComponentGroupNames)
    thisComponentGroupName = ARGS.PGDDATA.ComponentGroupNames{componentgroupctr};
    theseComponentGroupLabels = sort(ARGS.PGDDATA.ComponentGroupLabels{componentgroupctr});
    STR{componentgroupctr} = ['[' thisComponentGroupName ']' ARGS.NewLine ...
        strjoin(theseComponentGroupLabels(:).', ARGS.NewLine)];
end
STR = [strjoin(STR(:).', [ARGS.NewLine ARGS.NewLine]) ARGS.NewLine];
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%Step 2: Write to file
fid = fopen(ARGS.PGDFilePath, 'w');
fwrite(fid, STR);
fclose(fid);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end