function write_dcm_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'DCMStruct', struct([]), ...
    'OutputFilePath', '', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', {}};
ARGS = parseargs(varargin, pairs);

STR = {};

if isempty(ARGS.OutputFilePath)
    [filename, pathname] = uiputfile({'*.dcm', 'INCA DCM File (*.dcm)'}, 'Save DCM File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.OutputFilePath = fullfile(pathname, filename);
end
while ~check_write_permissions(fileparts(ARGS.OutputFilePath))
    waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the DCM file.', 'ERROR', 'modal'));
    [filename, pathname] = uiputfile({'*.dcm', 'INCA DCM File (*.dcm)'}, 'Save DCM File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.OutputFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Saving DCM file, please wait...', 'Pointer', 'watch', ARGS.WaitbarParams{:});
end

%% Step 1: Write header
if ~isempty(ARGS.DCMStruct.HEADER)
    temp = strexplode(ARGS.DCMStruct.HEADER, sprintf('\n'));
    STR{end+1, 1} = strimplode(cellfun(@(X) ['* ' X], temp, 'UniformOutput', false), sprintf('\r\n'));
    STR{end+1, 1} = '';
end

%% Step 2: Write Format
if ~isempty(ARGS.DCMStruct.FORMAT)
    STR{end+1, 1} = ['KONSERVIERUNG_FORMAT ' ARGS.DCMStruct.FORMAT];
    STR{end+1, 1} = '';
end

%% Step 3: Write Labels
for ctr = 1:numel(ARGS.DCMStruct.DATA.LabelName)
    STR{end+1, 1} = [ARGS.DCMStruct.DATA.LabelType{ctr} ' ' ARGS.DCMStruct.DATA.LabelName{ctr}]; %#ok<*AGROW>
    if ~isempty(ARGS.DCMStruct.DATA.Value{ctr})
        ValueField = 'Value';
    elseif ~isempty(ARGS.DCMStruct.DATA.XAxisValue{ctr})
        ValueField = 'XAxisValue';
    elseif ~isempty(ARGS.DCMStruct.DATA.YAxisValue{ctr})
        ValueField = 'YAxisvalue';
    end
    if ~isscalar(ARGS.DCMStruct.DATA.(ValueField){ctr}) && ~isvector(ARGS.DCMStruct.DATA.(ValueField){ctr})
        STR{end, 1} = [STR{end, 1} ' ' num2str(size(ARGS.DCMStruct.DATA.(ValueField){ctr}, 2)) ' ' num2str(size(ARGS.DCMStruct.DATA.(ValueField){ctr}, 1))];
    elseif ~isscalar(ARGS.DCMStruct.DATA.(ValueField){ctr}) && isvector(ARGS.DCMStruct.DATA.(ValueField){ctr}) && isnumeric(ARGS.DCMStruct.DATA.(ValueField){ctr})
        STR{end, 1} = [STR{end, 1} ' ' num2str(length(ARGS.DCMStruct.DATA.(ValueField){ctr}))];
    end
    
    if ischar(ARGS.DCMStruct.DATA.LabelDescription{ctr})
        STR{end+1, 1} = [sprintf('\t') 'LANGNAME "' ARGS.DCMStruct.DATA.LabelDescription{ctr} '"'];
    end
    
    if ischar(ARGS.DCMStruct.DATA.XAxisUnit{ctr})
        STR{end+1, 1} = [sprintf('\t') 'EINHEIT_X "' ARGS.DCMStruct.DATA.XAxisUnit{ctr} '"'];
    end
    
    if ischar(ARGS.DCMStruct.DATA.YAxisUnit{ctr})
        STR{end+1, 1} = [sprintf('\t') 'EINHEIT_Y "' ARGS.DCMStruct.DATA.YAxisUnit{ctr} '"'];
    end
    
    if ischar(ARGS.DCMStruct.DATA.LabelUnit{ctr})
        STR{end+1, 1} = [sprintf('\t') 'EINHEIT_W "' ARGS.DCMStruct.DATA.LabelUnit{ctr} '"'];
    end
    
    if ~isempty(ARGS.DCMStruct.DATA.XAxisValue{ctr})
        STR{end+1, 1} = [sprintf('\t') 'ST/X ' num2str((ARGS.DCMStruct.DATA.XAxisValue{ctr}(:)).')];
    end
    
    if isempty(ARGS.DCMStruct.DATA.YAxisValue{ctr}) && ~isempty(ARGS.DCMStruct.DATA.Value{ctr}) && isnumeric(ARGS.DCMStruct.DATA.Value{ctr})
        STR{end+1, 1} = [sprintf('\t') 'WERT ' num2str((ARGS.DCMStruct.DATA.Value{ctr}(:)).')];
    elseif isempty(ARGS.DCMStruct.DATA.YAxisValue{ctr}) && ~isempty(ARGS.DCMStruct.DATA.Value{ctr}) && ischar(ARGS.DCMStruct.DATA.Value{ctr})
        STR{end+1, 1} = [sprintf('\t') 'TEXT "' ARGS.DCMStruct.DATA.Value{ctr} '"'];
    elseif ~isempty(ARGS.DCMStruct.DATA.YAxisValue{ctr}) && ~isempty(ARGS.DCMStruct.DATA.Value{ctr}) && isnumeric(ARGS.DCMStruct.DATA.Value{ctr})
        for ctr2 = 1:numel(ARGS.DCMStruct.DATA.YAxisValue{ctr})
            STR{end+1, 1} = [sprintf('\t') 'ST/Y ' num2str(ARGS.DCMStruct.DATA.YAxisValue{ctr}(ctr2))];
            STR{end+1, 1} = [sprintf('\t') 'WERT ' num2str(ARGS.DCMStruct.DATA.Value{ctr}(ctr2, :))];
        end
    elseif ~isempty(ARGS.DCMStruct.DATA.YAxisValue{ctr}) && isempty(ARGS.DCMStruct.DATA.Value{ctr})
        STR{end+1, 1} = [sprintf('\t') 'ST/Y ' num2str((ARGS.DCMStruct.DATA.YAxisValue{ctr}(:)).')];
    end    
    STR{end+1, 1} = 'END';
    STR{end+1, 1} = '';
end

fid = fopen(ARGS.OutputFilePath, 'w');
fwrite(fid, strimplode(STR, sprintf('\r\n')));
fclose(fid);

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

edit_custom('FilePath', ARGS.OutputFilePath);

end