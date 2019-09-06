function varargout = replace_PTC_LUT_with_Simulink_LUT(varargin)

answer = questdlg('WARNING: This function will make irreversible changes to the current Simulink model. Are you sure you want to proceed?', ...
    'QUESTION', 'YES', 'NO', 'NO');
if strcmp(answer, 'NO')
    return;
end

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs)};
ARGS = parseargs(varargin, pairs);

waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch');

%Step 1: get PTC_LUT1D blocks
blocklist1 = unique(find_system(ARGS.Sys, 'FindAll', 'on', 'LookUnderMasks', 'all', 'PTC_BlockType', 'PTC_LUT1D'));
REPLACED_LIST = {};
NOT_REPLACED_LIST = {};
for ctr = 1:numel(blocklist1)
    param1 = get(blocklist1(ctr), 'Inputs');
    param2 = get(blocklist1(ctr), 'TableData');
    BlockName = get(blocklist1(ctr), 'Name');
    BlockPath = get(blocklist1(ctr), 'Path');
    try
        replaced_block = replace_block(ARGS.Sys, 'Name', BlockName, 'Parent', BlockPath, ['simulink/Lookup' sprintf('\n') 'Tables/1-D Lookup' sprintf('\n') 'Table'], 'noprompt');        
        if isempty(replaced_block)
            warning([mfilename ':' thisfuncname ':UnableToReplaceBlock'], ['Could not replace block <a href="' BlockPath '/' BlockName '">' BlockPath '/' BlockName '</a>']);
            NOT_REPLACED_LIST{end+1, 1} = [BlockPath '/' BlockName];
        else
            set_param(replaced_block{1}, 'Name', BlockName, 'BreakpointsForDimension1', param1, 'Table', param2);
            REPLACED_LIST{end+1, 1} = [BlockPath '/' BlockName];
        end
    catch ME
        showerror(ME);
        keyboard;        
    end
    waitbar(ctr/numel(blocklist1), waitbar_hndl, ['1-D Tables...' num2str(ctr) ' of ' num2str(numel(blocklist1)) ' completed']);
end

%Step 2: get PTC_LUT2D blocks
blocklist2 = unique(find_system(ARGS.Sys, 'FindAll', 'on', 'LookUnderMasks', 'all', 'PTC_BlockType', 'PTC_LUT2D'));
for ctr = 1:numel(blocklist2)
    param1 = get(blocklist2(ctr), 'RowValues');
    param2 = get(blocklist2(ctr), 'ColValues');
    param3 = get(blocklist2(ctr), 'TableData');
    BlockName = get(blocklist2(ctr), 'Name');
    BlockPath = get(blocklist2(ctr), 'Path');
    try
        replaced_block = replace_block(ARGS.Sys, 'Name', BlockName, 'Parent', BlockPath, ['simulink/Lookup' sprintf('\n') 'Tables/2-D Lookup' sprintf('\n') 'Table'], 'noprompt');
        if isempty(replaced_block)
            warning([mfilename ':' thisfuncname ':UnableToReplaceBlock'], ['Could not replace block <a href="' BlockPath '/' BlockName '">' BlockPath '/' BlockName '</a>']);
            NOT_REPLACED_LIST{end+1, 1} = [BlockPath '/' BlockName];
        else
            set_param(replaced_block{1}, 'Name', BlockName, 'BreakpointsForDimension1', param1, 'BreakpointsForDimension2', param2, 'Table', param3);
            REPLACED_LIST{end+1, 1} = [BlockPath '/' BlockName];
        end
    catch ME
        showerror(ME);
        keyboard;
    end
    waitbar(ctr/numel(blocklist2), waitbar_hndl, ['2-D Tables...' num2str(ctr) ' of ' num2str(numel(blocklist2)) ' completed']);
end

delete(waitbar_hndl);

varargout{1} = struct('REPLACED_LIST', {REPLACED_LIST}, 'NOT_REPLACED_LIST', {NOT_REPLACED_LIST});

end