function varargout = query_spp_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'SPPDATA', struct([]), ...
    'SectionName', cell(0, 1), ...
    'LabelName', cell(0, 1), ...
    'CaseSensitive', true};
ARGS = parseargs(varargin, pairs);

if ischar(ARGS.SectionName)
    ARGS.SectionName = cellstr2(ARGS.SectionName);
end
if ischar(ARGS.LabelName)
    ARGS.LabelName = {cellstr2(ARGS.LabelName)};
end
if iscellstr(ARGS.LabelName)
    ARGS.LabelName = {ARGS.LabelName};
end
ARGS.SectionName = ARGS.SectionName(:);
ARGS.LabelName = ARGS.LabelName(:);

assert(iscellstr(ARGS.SectionName));
assert(all(cellfun(@iscellstr, ARGS.LabelName)));
if numel(ARGS.SectionName) == 1
    ARGS.SectionName = repmat(ARGS.SectionName, numel(ARGS.LabelName), 1);
end
if numel(ARGS.LabelName) == 1
    ARGS.LabelName = repmat(ARGS.LabelName, numel(ARGS.LabelName), 1);
end

varargout{1} = cell(numel(ARGS.SectionName), 1);
for ctr = 1:numel(ARGS.SectionName)
    varargout{1}{ctr} = cell(numel(ARGS.LabelName{ctr}), 1);
    for ctr2 = 1:numel(varargout{1}{ctr})
        varargout{1}{ctr}{ctr2} = cell(0, 1);
    end
end

%ARGS.SPPDATA.SectionNames may have duplicates
if ~ARGS.CaseSensitive
    ARGS.SPPDATA.SectionNames = lower(ARGS.SPPDATA.SectionNames);
    for ctr = 1:numel(ARGS.SPPDATA.SectionData)
        ARGS.SPPDATA.SectionData{ctr}.LabelNames = lower(ARGS.SPPDATA.SectionData{ctr}.LabelNames);
    end
    ARGS.SectionName = lower(ARGS.SectionName);
    for ctr = 1:numel(ARGS.LabelName)
        ARGS.LabelName{ctr} = lower(ARGS.LabelName{ctr});
    end
end

for SectionCtr = 1:numel(ARGS.SectionName)
    thisSectionName = ARGS.SectionName{SectionCtr};
    SectionIdx = find(strcmp(thisSectionName, ARGS.SPPDATA.SectionNames));
    if isempty(SectionIdx)
        varargout{1}{SectionCtr} = 0;
    else
        FoundLabel = false;
        for SectionIdxCtr = 1:numel(SectionIdx)
            for LabelNameCtr = 1:numel(ARGS.LabelName{SectionCtr})
                thisLabelName = ARGS.LabelName{SectionCtr}{LabelNameCtr};
                LabelNameIdx = find(strcmp(thisLabelName, ARGS.SPPDATA.SectionData{SectionIdx(SectionIdxCtr)}.LabelNames));
                if isempty(LabelNameIdx) && ~FoundLabel
                    varargout{1}{SectionCtr}{LabelNameCtr} = 0;
                else
                    for LabelNameIdxCtr = 1:numel(LabelNameIdx)
                        if ~iscell(varargout{1}{SectionCtr}{LabelNameCtr})
                            varargout{1}{SectionCtr}{LabelNameCtr} = cell(0, 1);
                        end
                        varargout{1}{SectionCtr}{LabelNameCtr}{end+1, 1} = ARGS.SPPDATA.SectionData{SectionIdx(SectionIdxCtr)}.Data{LabelNameIdx(LabelNameIdxCtr)};
                    end
                    FoundLabel = true;
                end
            end
        end
    end
end

end