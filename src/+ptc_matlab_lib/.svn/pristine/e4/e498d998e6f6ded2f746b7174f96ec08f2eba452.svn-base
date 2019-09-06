function write_spp_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'SPPFilePath', '', ...
    'SPPDATA', '', ...
    'ShowWaitbar', true, ...
    'HeaderSectionPreferredOrder', {'VehicleSystemCode'; 'ChassisNumber'; 'SerialNumber'; 'SPPVersion_Parameter'; 'SPPRevision_Parameter'}, ... %Leave as cell(0, 1) to disable this feature.
    'SPPSectionPreferredOrder', {'{SPPVersion_Parameter}'; '{SPPRevision_Parameter}'}, ... %Leave as cell(0, 1) to disable this feature. Argument represents labels that should appear at the top.
    'NewLine', sprintf('\r\n'), ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

ARGS.HeaderSectionPreferredOrder = ARGS.HeaderSectionPreferredOrder(:);

while isempty(ARGS.SPPFilePath)
    [filename, pathname] = uiputfile({'*.spp', 'SPP File (*.spp)'; '*.tun', 'TUN File (*.tun)'}, 'Save SPP file as...', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.SPPFilePath = fullfile(pathname, filename);
    if ~check_write_permissions(fileparts(ARGS.SPPFilePath))
        waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the SPP file.', 'ERROR', 'modal'));
        ARGS.SPPFilePath = '';
    end
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

CURRENT_STEP = 0;
NUMBER_OF_STEPS = 2;

%Step 1: Process data
STR = cell(numel(ARGS.SPPDATA.SectionNames), 1);
SPPLabelsToEvaluate = regexp(ARGS.SPPSectionPreferredOrder, '{(?<GeneralLabelName>.+)}', 'once', 'names');
indices = ~cellfun(@isempty, SPPLabelsToEvaluate);
SPPLabelsToEvaluate(~indices) = [];
SPPLabelsToEvaluate = cellfun(@(X) X.GeneralLabelName, SPPLabelsToEvaluate, 'UniformOutput', false);
out = query_spp_data('SPPDATA', ARGS.SPPDATA, 'SectionName', 'General', 'LabelName', SPPLabelsToEvaluate);
indices = find(indices);
for ctr = 1:numel(out{1})
    if isequal(out{1}{ctr}, 0)
        ARGS.SPPSectionPreferredOrder{indices(ctr)} = '';
    else
        ARGS.SPPSectionPreferredOrder{indices(ctr)} = out{1}{ctr}{end}{1};
    end
end
for sectionctr = 1:numel(ARGS.SPPDATA.SectionNames)
    thisSectionName = ARGS.SPPDATA.SectionNames{sectionctr};
    ARGS.SPPDATA.SectionData{sectionctr}.LabelNames = ARGS.SPPDATA.SectionData{sectionctr}.LabelNames(:);
    [~, indices] = sort(ARGS.SPPDATA.SectionData{sectionctr}.LabelNames);
    ARGS.SPPDATA.SectionData{sectionctr} = structfun(@(X) X(indices, :), ARGS.SPPDATA.SectionData{sectionctr}, 'UniformOutput', false);
    if strcmp(thisSectionName, 'General') && ~isempty(ARGS.HeaderSectionPreferredOrder)
        [~, indices] = ismember(lower(ARGS.HeaderSectionPreferredOrder), lower(ARGS.SPPDATA.SectionData{sectionctr}.LabelNames));
        indices = [nonzeros(indices);
            find(~ismember(lower(ARGS.SPPDATA.SectionData{sectionctr}.LabelNames), lower(ARGS.HeaderSectionPreferredOrder)))];
        ARGS.SPPDATA.SectionData{sectionctr} = structfun(@(X) X(indices, :), ARGS.SPPDATA.SectionData{sectionctr}, 'UniformOutput', false);
    elseif strcmp(thisSectionName, 'SPP') && ~isempty(ARGS.SPPSectionPreferredOrder)
        [~, indices] = ismember(ARGS.SPPSectionPreferredOrder, ARGS.SPPDATA.SectionData{sectionctr}.LabelNames);
        indices = [nonzeros(indices);
            find(~ismember(ARGS.SPPDATA.SectionData{sectionctr}.LabelNames, ARGS.SPPSectionPreferredOrder))];
        ARGS.SPPDATA.SectionData{sectionctr} = structfun(@(X) X(indices, :), ARGS.SPPDATA.SectionData{sectionctr}, 'UniformOutput', false);
    end
    
    data = cell(numel(ARGS.SPPDATA.SectionData{sectionctr}.LabelNames), 1);
    for labelctr = 1:numel(ARGS.SPPDATA.SectionData{sectionctr}.LabelNames)
        thisLabelName = ARGS.SPPDATA.SectionData{sectionctr}.LabelNames{labelctr};
        thisData = ARGS.SPPDATA.SectionData{sectionctr}.Data{labelctr};
        if ischar(thisData)
            data{labelctr} = [thisLabelName '=' thisData];
        elseif iscellstr(thisData)
            data{labelctr} = [thisLabelName '=' strjoin(thisData(:).', ',')];
        end
    end
    
    STR{sectionctr} = ['[' thisSectionName ']' ARGS.NewLine ...
        strjoin(data(:).', ARGS.NewLine)];
end
STR = strjoin(STR(:).', [ARGS.NewLine ARGS.NewLine]);
if ~isempty(STR) && ~strcmp(STR(end - numel(ARGS.NewLine) + 1:end), ARGS.NewLine)
    STR = [STR ARGS.NewLine];
end
CURRENT_STEP = CURRENT_STEP + 1;
if ARGS.ShowWaitbar
    waitbar(min(CURRENT_STEP/NUMBER_OF_STEPS, 1), waitbar_hndl);
end

%Step 2: Write to file
fid = fopen(ARGS.SPPFilePath, 'w');
fwrite(fid, STR);
fclose(fid);
if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(1.0);
    delete(waitbar_hndl);
end

end