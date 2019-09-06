function varargout = get_dcm_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'DCMFilePath', '', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', {}};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.DCMFilePath, 'file')
    [filename, pathname] = uigetfile({'*.dcm', 'INCA DCM File (*.dcm)'}, 'Select DCM File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.DCMFilePath = fullfile(pathname, filename);
end
DCM.FILEPATH = ARGS.DCMFilePath;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Parsing DCM file, please wait...', 'Pointer', 'watch', ARGS.WaitbarParams{:});
end

%% Step 1: Read file
fid = fopen(ARGS.DCMFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
fclose(fid);
file = strtrim(file{1});
file = columnvec(file(~cellfun(@isempty, file)));

DCM.FORMAT = '';
DCM.HEADER = '';
STR = cell(numel(file), 1);

%% Step 2: Obtain header information
pattern1 = '\*\s*(?<Header>.+)';
temp1 = regexp(file, pattern1, 'once', 'names');
temp1 = temp1(~cellfun(@isempty, temp1));
if ~isempty(temp1)
    temp1 = cell2mat(temp1);
    [header_lines{1:numel(temp1)}] = deal(temp1.Header);
    DCM.HEADER = strimplode(header_lines, sprintf('\n'));
end

%% Step 3: Obtain format
pattern1 = '^KONSERVIERUNG_FORMAT\s+(?<Format>[^\s]*)';
temp1 = regexp(file, pattern1, 'once', 'names');
temp1 = temp1(~cellfun(@isempty, temp1));
if ~isempty(temp1)
    DCM.FORMAT = temp1{end}.Format;
end

%% Step 4: Obtain ending indicators
%Here, we are arbitrarily choosing the 'END' string as the ending indicator
END_INDICES = find(strcmp('END', file)); STR(END_INDICES) = {'END'};

%% Step 5: Obtain label names
pattern1 = '^(?<LabelType>\<FESTWERT\>)\s+(?<LabelName>[^\s]+)';
pattern2 = '^(?<LabelType>\<FESTWERTEBLOCK\>)\s+(?<LabelName>[^\s]+)';
pattern3 = '^(?<LabelType>\<KENNLINIE\>)\s+(?<LabelName>[^\s]+)';
pattern4 = '^(?<LabelType>\<KENNFELD\>)\s+(?<LabelName>[^\s]+)';
pattern5 = '^(?<LabelType>\<FESTKENNLINIE\>)\s+(?<LabelName>[^\s]+)';
pattern6 = '^(?<LabelType>\<FESTKENNFELD\>)\s+(?<LabelName>[^\s]+)';
pattern7 = '^(?<LabelType>\<GRUPPENKENNLINIE\>)\s+(?<LabelName>[^\s]+)';
pattern8 = '^(?<LabelType>\<GRUPPENKENNFELD\>)\s+(?<LabelName>[^\s]+)';
pattern9 = '^(?<LabelType>\<STUETZSTELLENVERTEILUNG\>)\s+(?<LabelName>[^\s]+)';
temp1 = regexp(file, pattern1, 'once', 'names');
temp2 = regexp(file, pattern2, 'once', 'names');
temp3 = regexp(file, pattern3, 'once', 'names');
temp4 = regexp(file, pattern4, 'once', 'names');
temp5 = regexp(file, pattern5, 'once', 'names');
temp6 = regexp(file, pattern6, 'once', 'names');
temp7 = regexp(file, pattern7, 'once', 'names');
temp8 = regexp(file, pattern8, 'once', 'names');
temp9 = regexp(file, pattern9, 'once', 'names');
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);
indices = ~cellfun(@isempty, temp2); STR(indices) = temp2(indices);
indices = ~cellfun(@isempty, temp3); STR(indices) = temp3(indices);
indices = ~cellfun(@isempty, temp4); STR(indices) = temp4(indices);
indices = ~cellfun(@isempty, temp5); STR(indices) = temp5(indices);
indices = ~cellfun(@isempty, temp6); STR(indices) = temp6(indices);
indices = ~cellfun(@isempty, temp7); STR(indices) = temp7(indices);
indices = ~cellfun(@isempty, temp8); STR(indices) = temp8(indices);
indices = ~cellfun(@isempty, temp9); STR(indices) = temp9(indices);

%% Step 6: Obtain label descriptions
pattern1 = '^LANGNAME\s+"(?<LabelDescription>.*)"';
temp1 = regexp(file, pattern1, 'once', 'names');
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);

%% Step 7: Obtain label units
pattern1 = '^EINHEIT_W\s+"(?<LabelUnit>.*)"';
temp1 = regexp(file, pattern1, 'once', 'names');
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);

%% Step 8: Obtain X Axis units
pattern1 = '^EINHEIT_X\s+"(?<XAxisUnit>.*)"';
temp1 = regexp(file, pattern1, 'once', 'names');
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);

%% Step 9: Obtain Y Axis units
pattern1 = '^EINHEIT_Y\s+"(?<YAxisUnit>.*)"';
temp1 = regexp(file, pattern1, 'once', 'names');
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);

%% Step 10: Obtain values.
%Here, it should be assumed that instances of the WERT tag in the same
%section are to be concatenated. It will be treated as a column vector for
%now, even if it is a matrix
pattern1 = '^WERT\s+(?<Value>.+)';
temp1 = regexp(file, pattern1, 'once', 'names');
non_empty_indices = find(~cellfun(@isempty, temp1));
prev_end_index = 0; %i.e. Ending index not present initially
for ctr = 1:numel(END_INDICES)
    these_indices = non_empty_indices(non_empty_indices < END_INDICES(ctr) & non_empty_indices > prev_end_index);
    if ~isempty(these_indices)        
        structarray = cell2mat(temp1(these_indices));
        valuelist = cell(numel(structarray), 1);
        [valuelist{:}] = deal(structarray.Value);
        temp1{these_indices(1)}.Value = sscanf(strimplode(valuelist, ' '), '%f');
        temp1(these_indices(2:end)) = {[]};
    end
    prev_end_index = END_INDICES(ctr);
end
pattern2 = '^TEXT\s+"(?<Value>.+)"';
temp2 = regexp(file, pattern2, 'once', 'names');
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);
indices = ~cellfun(@isempty, temp2); STR(indices) = temp2(indices);

%% Step 11: Obtain X axis values
%Here, it should be assumed that instances of the ST/X tag in the same
%section are to be concatenated.
pattern1 = '^ST/X\s+(?<XAxisValue>.+)';
temp1 = regexp(file, pattern1, 'once', 'names');
non_empty_indices = find(~cellfun(@isempty, temp1));
prev_end_index = 0; %i.e. Ending index not present initially
for ctr = 1:numel(END_INDICES)
    these_indices = non_empty_indices(non_empty_indices < END_INDICES(ctr) & non_empty_indices > prev_end_index);
    if ~isempty(these_indices)        
        structarray = cell2mat(temp1(these_indices));
        valuelist = cell(numel(structarray), 1);
        [valuelist{:}] = deal(structarray.XAxisValue);
        temp1{these_indices(1)}.XAxisValue = sscanf(strimplode(valuelist, ' '), '%f');
        temp1(these_indices(2:end)) = {[]};
    end
    prev_end_index = END_INDICES(ctr);
end
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);

%% Step 12: Obtain Y axis values
%Here, it should be assumed that instances of the ST/Y tag in the same
%section are to be concatenated.
pattern1 = '^ST/Y\s+(?<YAxisValue>.+)';
temp1 = regexp(file, pattern1, 'once', 'names');
non_empty_indices = find(~cellfun(@isempty, temp1));
prev_end_index = 0; %i.e. Ending index not present initially
for ctr = 1:numel(END_INDICES)
    these_indices = non_empty_indices(non_empty_indices < END_INDICES(ctr) & non_empty_indices > prev_end_index);
    if ~isempty(these_indices)
        structarray = cell2mat(temp1(these_indices));
        valuelist = cell(numel(structarray), 1);
        [valuelist{:}] = deal(structarray.YAxisValue);
        temp1{these_indices(1)}.YAxisValue = sscanf(strimplode(valuelist, ' '), '%f');
        temp1(these_indices(2:end)) = {[]};
    end
    prev_end_index = END_INDICES(ctr);
end
indices = ~cellfun(@isempty, temp1); STR(indices) = temp1(indices);

STR = STR(~cellfun(@isempty, STR));

%Finally, extract LabelName, LabelDescription, LabelValue, LabelUnit,
%XAxisValue, XAxisUnit, YAxisValue, YAxisUnit
DCM.DATA = struct('LabelName', {cell(numel(END_INDICES), 1)}, ...
    'LabelType', {cell(numel(END_INDICES), 1)}, ...
    'LabelDescription', {cell(numel(END_INDICES), 1)}, ...
    'Value', {cell(numel(END_INDICES), 1)}, ...
    'LabelUnit', {cell(numel(END_INDICES), 1)}, ...
    'XAxisValue', {cell(numel(END_INDICES), 1)}, ...
    'XAxisUnit', {cell(numel(END_INDICES), 1)}, ...
    'YAxisValue', {cell(numel(END_INDICES), 1)}, ...
    'YAxisUnit', {cell(numel(END_INDICES), 1)});

currentLabelIndex = 0;
for ctr = 1:numel(STR)
    if isfield(STR{ctr}, 'LabelName')
        currentLabelIndex = currentLabelIndex + 1;
        DCM.DATA.LabelName{currentLabelIndex} = STR{ctr}.LabelName;
        DCM.DATA.LabelType{currentLabelIndex} = STR{ctr}.LabelType;
    end
    if isfield(STR{ctr}, 'LabelDescription')
        DCM.DATA.LabelDescription{currentLabelIndex} = STR{ctr}.LabelDescription;
    end
    if isfield(STR{ctr}, 'LabelUnit')
        DCM.DATA.LabelUnit{currentLabelIndex} = STR{ctr}.LabelUnit;
    end
    if isfield(STR{ctr}, 'XAxisValue')
        DCM.DATA.XAxisValue{currentLabelIndex} = STR{ctr}.XAxisValue;
    end
    if isfield(STR{ctr}, 'XAxisUnit')
        DCM.DATA.XAxisUnit{currentLabelIndex} = STR{ctr}.XAxisUnit;
    end
    if isfield(STR{ctr}, 'YAxisValue')
        DCM.DATA.YAxisValue{currentLabelIndex} = STR{ctr}.YAxisValue;
    end
    if isfield(STR{ctr}, 'YAxisUnit')
        DCM.DATA.YAxisUnit{currentLabelIndex} = STR{ctr}.YAxisUnit;
    end
    if isfield(STR{ctr}, 'Value')
        DCM.DATA.Value{currentLabelIndex} = STR{ctr}.Value;
        if ~isempty(DCM.DATA.XAxisValue{currentLabelIndex}) && ~isempty(DCM.DATA.YAxisValue{currentLabelIndex})
            DCM.DATA.Value{currentLabelIndex} = reshape(DCM.DATA.Value{currentLabelIndex}, numel(DCM.DATA.YAxisValue{currentLabelIndex}), numel(DCM.DATA.XAxisValue{currentLabelIndex}));
        elseif xor(isempty(DCM.DATA.YAxisValue{currentLabelIndex}), isempty(DCM.DATA.XAxisValue{currentLabelIndex}))
            DCM.DATA.Value{currentLabelIndex} = reshape(DCM.DATA.Value{currentLabelIndex}, max(numel(DCM.DATA.YAxisValue{currentLabelIndex}), numel(DCM.DATA.XAxisValue{currentLabelIndex})), 1);
        end
    end
end

varargout{1} = DCM;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end