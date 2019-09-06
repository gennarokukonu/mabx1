function write_par_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'PARFilePath', '', ...
    'PARDATA', struct([]), ...
    'ShowWaitbar', true, ...
    'NewLine', sprintf('\r\n'), ...
    'WaitbarParams', cell(0, 1), ...
    'LineLengthConstraint', 497};
ARGS = parseargs(varargin, pairs);

while isempty(ARGS.PARFilePath)
    [filename, pathname] = uiputfile({'*.par', 'PAR File (*.par)'}, 'Save PAR file as...', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.PARFilePath = fullfile(pathname, filename);
    if ~check_write_permissions(fileparts(ARGS.PARFilePath))
        waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the PAR file.', 'ERROR', 'modal'));
        ARGS.PARFilePath = '';
    end
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

%Step 1: Process data
STR = cell(numel(ARGS.PARDATA.LabelNames), 1);
for ctr = 1:numel(STR)
    
    thisMaxDataLength = ARGS.LineLengthConstraint - (length(ARGS.PARDATA.MetaData{ctr}) + length(ARGS.PARDATA.LabelNames{ctr}) + 8);
    thisNumRows = ceil(length(ARGS.PARDATA.Data{ctr})/thisMaxDataLength);
    
    thisSTR = cell(thisNumRows, 1);
    startidx = 1;
    for thisRowCtr = 1:numel(thisSTR)
        RowNumStr = pad_to_length('FinalLength', 4, 'PadValue', '0', 'PadDirection', 'left', 'InputVector', num2str(thisRowCtr));
        thisData = ARGS.PARDATA.Data{ctr}(startidx:min(startidx+thisMaxDataLength-1, end));
        thisNumBytesStr = pad_to_length('FinalLength', 4, 'PadValue', '0', 'PadDirection', 'left', 'InputVector', num2str(ceil(length(thisData)*0.5)));
        
        thisSTR{thisRowCtr} = [ARGS.PARDATA.MetaData{ctr} ...
            ARGS.PARDATA.LabelNames{ctr} ';' ...
            RowNumStr ...
            thisNumBytesStr ...
            thisData];
    end
    STR{ctr} = strjoin(thisSTR(:).', ARGS.NewLine);
end
STR = [strjoin(STR(:).', ARGS.NewLine) ARGS.NewLine];
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%Step 2: Write to file
fid = fopen(ARGS.PARFilePath, 'w');
fwrite(fid, STR);
fclose(fid);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end