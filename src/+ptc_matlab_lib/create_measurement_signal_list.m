function create_measurement_signal_list(varargin)

import('ptc_matlab_lib.*');

pairs = {'System', bdroot(gcs), ...
    'ShouldForceCompile', true, ...
    'ShowWaitbar', true, ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

pairs = {'OutputFilePath', fullfile(fileparts(which(bdroot(ARGS.System))), [bdroot(ARGS.System) '_SIG.m'])};
ARGS = structcopy(ARGS, parseargs(varargin, pairs));

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 9;
if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

%% Step 1: Error out if model is not loaded
if ~bdIsLoaded(bdroot(ARGS.System))
    error([mfilename ':' thisfuncname ':ModelNotLoaded'], ['The model ''' bdroot(ARGS.System) ''' has not been loaded.']);
end
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% Step 2: Save model and attempt model compilation.
%This step is required because we wouldn't want a data dictionary that is
%the direct result of a compilation failure. If compilation fails, we
%cannot proceed. Also, this step allows propagation of units for every
%port.
if ARGS.ShouldForceCompile
    save_system(bdroot(ARGS.System));
    try %#ok<TRYNC>
        feval(str2func(bdroot(ARGS.System)), [], [], [], 'term');
    end
    feval(str2func(bdroot(ARGS.System)), [], [], [], 'compile');
end
if ARGS.ShowWaitbar
    CURRENT_STEP = CURRENT_STEP + 1;
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%% THE REST SHOULD BE IN A TRY CATCH THAT TERMINATES COMPILATION IF AN ERROR IS ENCOUNTERED

try
    %% Step 3: Identify all lines that need to be logged
    %Only named signals whose 'DataLogging' property is set to true should be
    %logged. If potential duplicate signals are found, error out. Also,
    %identify names that are not valid MATLAB identifiers
    line_handles = unique(find_system(ARGS.System, 'LookUnderMasks', 'all', 'RegExp', 'on', 'FollowLinks', 'off', 'FindAll', 'on', 'Type', 'line', 'Name', '.+'));
    line_handles = line_handles(:);
    idx = get(line_handles, 'DataLogging');
    if ~iscell(idx)
        idx = {idx};
    end
    idx = cell2mat(idx);
    line_handles = line_handles(idx);
    %Isolate line handles for the same source port
    SrcPortHandles = get(line_handles, 'SrcPortHandle');
    if ~iscell(SrcPortHandles)
        SrcPortHandles = {SrcPortHandles};
    end
    SrcPortHandles = cell2mat(SrcPortHandles);
    SrcPortHandles(SrcPortHandles == -1) = [];
    SrcPortHandles = unique(SrcPortHandles);
    LINES.Handles = get(SrcPortHandles, 'line');
    if iscell(LINES.Handles)
        LINES.Handles = cell2mat(LINES.Handles);
    end
    LINES.SrcPortHandles = SrcPortHandles;
    LINES.Names = get(LINES.Handles, 'Name');
    if ~iscellstr(LINES.Names)
        LINES.Names = cellstr(LINES.Names);
    end
    LINES.Names = regexprep(LINES.Names, '(^<)|(>$)', '');
    if numel(unique(LINES.Names)) ~= numel(LINES.Names)
        line_names_unique = unique(LINES.Names);
        duplicates = line_names_unique(cellfun(@(X) nnz(strcmp(X, LINES.Names)) >= 2, line_names_unique));
        error([mfilename ':' thisfuncname ':DuplicateSignalsFound'], ['Duplicate signal names have been found: ' strimplode(duplicates, ', ')]);
    end
    idx = ~cellfun(@isvarname, LINES.Names);
    if any(idx)
        error([mfilename ':' thisfuncname ':InvalidIdentifiers'], ['Invalid identifiers have been found: ' strimplode(LINES.Names(idx), ', ')]);
    end
    if ARGS.ShowWaitbar
        CURRENT_STEP = CURRENT_STEP + 1;
        waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
    end
    
    %% Step 4: Obtain all relevant properties
    LINES.Descriptions = cellstr2(get(LINES.Handles, 'Description'));
    LINES.Units = cellstr2(get(LINES.SrcPortHandles, 'CompiledPortUnit'));
    if ARGS.ShowWaitbar
        CURRENT_STEP = CURRENT_STEP + 1;
        waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
    end
    
    %% Step 5: Terminate model
    try
        feval(str2func(bdroot(ARGS.System)), [], [], [], 'term');
    end
    if ARGS.ShowWaitbar
        CURRENT_STEP = CURRENT_STEP + 1;
        waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
    end
    
    %% Step 6: Set MustResolveToSignalObject property. This may require insertion of signal conversion blocks
    for ctr = 1:numel(LINES.Handles)
        try
            set(LINES.Handles(ctr), 'MustResolveToSignalObject', true);
        catch
            thisSrcPortHandle = get(LINES.Handles(ctr), 'SrcPortHandle');
            thisSrcPortHandle_Parent = get(thisSrcPortHandle, 'Parent');
            [thisSrcPortStr_Parent_Subsystem, thisSrcPortStr] = fileparts(thisSrcPortHandle_Parent);
            thisSrcPortStr = [thisSrcPortStr '/' num2str(get(thisSrcPortHandle, 'PortNumber'))]; %#ok<AGROW>
            thisSrcLineHandle = get(thisSrcPortHandle, 'Line');
            theseDstPortHandles = get(thisSrcLineHandle, 'DstPortHandle');
            %theseDstLineHandles = get(theseDstPortHandles, 'Line');
            theseDstPortTypes = cellstr(get(theseDstPortHandles, 'PortType'));
            theseDstPortTypes(strcmp('enable', theseDstPortTypes)) = {'Enable'};
            theseDstPortTypes(strcmp('trigger', theseDstPortTypes)) = {'Trigger'};
            theseDstPortTypes(strcmp('ifaction', theseDstPortTypes)) = {'Ifaction'};
            theseDstPortTypes(strcmp('state', theseDstPortTypes)) = {'State'};
            
            idx = strcmp('inport', theseDstPortTypes);
            theseDstPortTypes(idx) = cellstr(num2str(get(theseDstPortHandles(idx), 'PortNumber')));
            
            theseDstPortParents = cellstr(get(theseDstPortHandles, 'Parent'));
            [~, theseDstPortStr] = cellfun(@fileparts, theseDstPortParents, 'UniformOutput', false);
            theseDstPortStr = strcat(theseDstPortStr, '/', theseDstPortTypes);
            
            %Insert a signal conversion block into this line.
            thisSignalPoints = get(thisSrcLineHandle, 'Points');
            
            %Add the signal conversion block. Note that the block needs to be
            %positioned such that it lies on the signal itself, as well as
            %possible. This will be invaluable later on. We can use the line
            %divider formula
            point_of_consideration = [thisSignalPoints(1, 1) + 0.1*(thisSignalPoints(2, 1) - thisSignalPoints(1, 1)) ...
                thisSignalPoints(1, 2) + 0.1*(thisSignalPoints(2, 2) - thisSignalPoints(1, 2))];
            newpos = [point_of_consideration(1, 1)-2.5 point_of_consideration(1, 2)-2.5 ...
                point_of_consideration(1, 1)+2.5 point_of_consideration(1, 2)+2.5];
            
            block = add_block('PTC_MBDS_LIB/MBDS Standard Library/Signals & Systems/Signal Attributes/SignalConversion', ...
                [thisSrcPortStr_Parent_Subsystem '/SignalConversion'], ...
                'MakeNameUnique', 'on', ...
                'ShowName', 'off', ...
                'Position', newpos);
            block_name = get(block, 'Name');
            delete_line(thisSrcLineHandle); %This statement also deletes connected lines
            h1 = add_line(thisSrcPortStr_Parent_Subsystem, thisSrcPortStr, [block_name '/1']);
            for ctr2 = 1:numel(theseDstPortStr)
                h2 = add_line(thisSrcPortStr_Parent_Subsystem, [block_name '/1'], theseDstPortStr{ctr2}, 'autorouting', 'smart');
            end
            set(h1, 'DataLogging', false);
            set(h2, 'DataLogging', true, 'SignalNameFromLabel', LINES.Names{ctr}, 'MustResolveToSignalObject', true, 'Description', LINES.Descriptions{ctr});
        end
    end
    if ARGS.ShowWaitbar
        CURRENT_STEP = CURRENT_STEP + 1;
        waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
    end
    
    %% Step 7: Set up workspace structure containing data dictionary
    WORKSPACESTRUCT = struct;
    for ctr = 1:numel(LINES.Names)
        WORKSPACESTRUCT.(LINES.Names{ctr}) = ptc_matlab_lib.PTC_MBDS_Signal('Description', LINES.Descriptions{ctr}, ...
            'Unit', LINES.Units{ctr});
    end
    if ARGS.ShowWaitbar
        CURRENT_STEP = CURRENT_STEP + 1;
        waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
    end
    
    %% Step 8: Export data dictionary
    export_data_dictionary('WorkspaceStruct', WORKSPACESTRUCT, ...
        'ShowWaitbar', false, ...
        'OutputFilePath', ARGS.OutputFilePath);
    if ARGS.ShowWaitbar
        CURRENT_STEP = CURRENT_STEP + 1;
        waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
    end
    
    %% Step 9: Save model
    save_system(bdroot(ARGS.System));
    if ARGS.ShowWaitbar
        waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
        pause(1.0);
        delete(waitbar_hndl);
    end
catch ME
    try %#ok<TRYNC>
        feval(str2func(bdroot(ARGS.System)), [], [], [], 'term');
    end
    rethrow(ME);
end

end
