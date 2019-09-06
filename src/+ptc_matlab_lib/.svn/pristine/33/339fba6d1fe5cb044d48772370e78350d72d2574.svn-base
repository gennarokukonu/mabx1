function varargout = get_pgd_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'PGDFilePath', '', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', cell(0, 1), ...
    'HashAlgorithm', 'SHA-512'};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.PGDFilePath, 'file')
    [filename, pathname] = uigetfile({'*.pgd', 'PGD File (*.pgd)'}, 'Select PGD file', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.PGDFilePath = fullfile(pathname, filename);
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

%Step 1: Read PGD File
fid = fopen(ARGS.PGDFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);
PGDStruct = struct('FilePath', ARGS.PGDFilePath, ...
    'Hash', hashfile('FilePath', ARGS.PGDFilePath, 'HashAlgorithm', ARGS.HashAlgorithm), ...
    'HashAlgorithm', ARGS.HashAlgorithm, ...
    'PGDDATA', struct('ComponentGroupNames', {cell(0, 1)}, 'ComponentGroupLabels', {cell(0, 1)}));
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%Step 2: Obtain component group information
file(cellfun(@isempty, strtrim(file))) = [];
ComponentGroups = regexp(file, '\[(?<ComponentGroupName>.+)\]', 'names');
idx = find(~cellfun(@isempty, ComponentGroups));
ComponentGroups = ComponentGroups(idx);
PGDStruct.PGDDATA.ComponentGroupNames = cell(numel(ComponentGroups), 1);
PGDStruct.PGDDATA.ComponentGroupLabels = cell(numel(ComponentGroups), 1);
for ctr = 1:numel(ComponentGroups)
    PGDStruct.PGDDATA.ComponentGroupNames{ctr} = ComponentGroups{ctr}.ComponentGroupName;
    thisData = cell(0, 1);
    if ctr == numel(ComponentGroups) && idx(ctr) < length(file)
        thisData = file(idx(ctr)+1:end);
    elseif ctr < numel(ComponentGroups)
        thisData = file(idx(ctr)+1:idx(ctr+1)-1);
    end
    if ~isempty(thisData)
        PGDStruct.PGDDATA.ComponentGroupLabels{ctr} = strtrim(thisData);
    else
        PGDStruct.PGDDATA.ComponentGroupLabels{ctr} = cell(0, 1);
    end
end
[PGDStruct.PGDDATA.ComponentGroupNames, ia] = sort(PGDStruct.PGDDATA.ComponentGroupNames);
PGDStruct.PGDDATA.ComponentGroupLabels = PGDStruct.PGDDATA.ComponentGroupLabels(ia);
if ARGS.ShowWaitbar
    waitbar_hndl = waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

varargout{1} = PGDStruct;

end