function varargout = get_spp_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'SPPFilePath', '', ...
    'ShowWaitbar', true, ...
    'HeaderSectionPreferredOrder', {'VehicleSystemCode'; 'ChassisNumber'; 'SerialNumber'; 'SPPVersion_Parameter'; 'SPPRevision_Parameter'}, ... %Leave as cell(0, 1) to disable this feature.
    'SPPSectionPreferredOrder', {'{SPPVersion_Parameter}'; '{SPPRevision_Parameter}'}, ... %Leave as cell(0, 1) to disable this feature. Argument represents labels that should appear at the top.
    'WaitbarParams', cell(0, 1), ...
    'HashAlgorithm', 'SHA-512'};
ARGS = parseargs(varargin, pairs);

ARGS.HeaderSectionPreferredOrder = ARGS.HeaderSectionPreferredOrder(:);
ARGS.SPPSectionPreferredOrder = ARGS.SPPSectionPreferredOrder(:);

if ~exist(ARGS.SPPFilePath, 'file')
    [filename, pathname] = uigetfile({'*.spp;*.tun', 'SPP File (*.spp, *.tun)'}, 'Select SPP file', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.SPPFilePath = fullfile(pathname, filename);
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', 'WindowStyle', 'modal', ARGS.WaitbarParams{:});
end

%Step 1: Read SPP File
fid = fopen(ARGS.SPPFilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);
SPPStruct = struct('FilePath', ARGS.SPPFilePath, ...
    'Hash', hashfile('FilePath', ARGS.SPPFilePath, 'HashAlgorithm', ARGS.HashAlgorithm), ...
    'HashAlgorithm', ARGS.HashAlgorithm, ...
    'RawContent', {file}, ...
    'SPPDATA', struct('SectionNames', {cell(0, 1)}, 'SectionData', {cell(0, 1)}));
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%Step 2: Obtain section information
file(cellfun(@isempty, strtrim(file))) = [];
Sections = regexp(file, '\[(?<SectionName>.+)\]', 'names');
idx = find(~cellfun(@isempty, Sections));
Sections = Sections(idx);
SPPStruct.SPPDATA.SectionNames = cell(numel(Sections), 1);
SPPStruct.SPPDATA.SectionData = cell(numel(Sections), 1);
for ctr = 1:numel(Sections)
    SPPStruct.SPPDATA.SectionNames{ctr} = Sections{ctr}.SectionName;
    thisData = cell(0, 1);
    if ctr == numel(Sections) && idx(ctr) < length(file)
        thisData = file(idx(ctr)+1:end);
    elseif ctr < numel(Sections)
        thisData = file(idx(ctr)+1:idx(ctr+1)-1);
    end
    thisData = cellfun(@(X) ptc_matlab_lib.strexplode(X, '='), thisData, 'UniformOutput', false);
    thisData = cat(1, thisData{:});
    if ~isempty(thisData)
        SPPStruct.SPPDATA.SectionData{ctr}.LabelNames = strtrim(thisData(1:2:end));
        SPPStruct.SPPDATA.SectionData{ctr}.Data = cellfun(@(X) ptc_matlab_lib.strexplode(X, ','), thisData(2:2:end), 'UniformOutput', false);
    else
        SPPStruct.SPPDATA.SectionData{ctr}.LabelNames = cell(0, 1);
        SPPStruct.SPPDATA.SectionData{ctr}.Data = cell(0, 1);
    end
end

%Rearranging labels
SPPLabelsToEvaluate = regexp(ARGS.SPPSectionPreferredOrder, '{(?<GeneralLabelName>.+)}', 'once', 'names');
indices = ~cellfun(@isempty, SPPLabelsToEvaluate);
SPPLabelsToEvaluate(~indices) = [];
SPPLabelsToEvaluate = cellfun(@(X) X.GeneralLabelName, SPPLabelsToEvaluate, 'UniformOutput', false);
out = query_spp_data('SPPDATA', SPPStruct.SPPDATA, 'SectionName', 'General', 'LabelName', SPPLabelsToEvaluate);
indices = find(indices);
for ctr = 1:numel(out{1})
    if isequal(out{1}{ctr}, 0)
        ARGS.SPPSectionPreferredOrder{indices(ctr)} = '';
    else
        ARGS.SPPSectionPreferredOrder{indices(ctr)} = out{1}{ctr}{end}{1};
    end
end
for ctr = 1:numel(SPPStruct.SPPDATA.SectionNames)
    [~, indices] = sort(SPPStruct.SPPDATA.SectionData{ctr}.LabelNames);
    SPPStruct.SPPDATA.SectionData{ctr} = structfun(@(X) X(indices, :), SPPStruct.SPPDATA.SectionData{ctr}, 'UniformOutput', false);
    if strcmp(SPPStruct.SPPDATA.SectionNames{ctr}, 'General') && ~isempty(ARGS.HeaderSectionPreferredOrder)
        [~, indices] = ismember(lower(ARGS.HeaderSectionPreferredOrder), lower(SPPStruct.SPPDATA.SectionData{ctr}.LabelNames));
        indices = [nonzeros(indices);
            find(~ismember(lower(SPPStruct.SPPDATA.SectionData{ctr}.LabelNames), lower(ARGS.HeaderSectionPreferredOrder)))];
        SPPStruct.SPPDATA.SectionData{ctr} = structfun(@(X) X(indices, :), SPPStruct.SPPDATA.SectionData{ctr}, 'UniformOutput', false);
    elseif strcmp(SPPStruct.SPPDATA.SectionNames{ctr}, 'SPP') && ~isempty(ARGS.SPPSectionPreferredOrder)
        [~, indices] = ismember(ARGS.SPPSectionPreferredOrder, SPPStruct.SPPDATA.SectionData{ctr}.LabelNames);
        indices = [nonzeros(indices);
            find(~ismember(SPPStruct.SPPDATA.SectionData{ctr}.LabelNames, ARGS.SPPSectionPreferredOrder))];
        SPPStruct.SPPDATA.SectionData{ctr} = structfun(@(X) X(indices, :), SPPStruct.SPPDATA.SectionData{ctr}, 'UniformOutput', false);
    end
end

if ARGS.ShowWaitbar
    waitbar_hndl = waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

varargout{1} = SPPStruct;

end