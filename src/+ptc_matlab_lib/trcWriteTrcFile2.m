function trcWriteTrcFile2(varargin)

import('ptc_matlab_lib.*');
pairs = {'TrcParsedCell', cell(0, 1), ...
    'OutputTRCFilePath', '', ...
    'ShowWaitbar', true};
ARGS = parseargs(varargin, pairs);

if isempty(ARGS.OutputTRCFilePath)
    [filename, pathname] = uiputfile({'*.trc', 'TRC File (*.trc)'});
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    end
    ARGS.OutputTRCFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '');
end

ctr = 1;
TrcSerialized = ARGS.TrcParsedCell;
while ctr <= length(TrcSerialized)
    if isstruct(TrcSerialized{ctr})
        textcell = conv2text(TrcSerialized{ctr});
        TrcSerialized = [TrcSerialized(1:ctr-1);
            textcell;
            TrcSerialized(ctr+1:end)];
        ctr = ctr + numel(textcell) - 1;
    end
    ctr = ctr + 1;
end

ctr = 1;
tabcounter = 0;
TABCHAR = sprintf('\t');
TrcSerialized_Numel = numel(TrcSerialized);
TrcSerialized_Trimmed = strtrim(TrcSerialized);
len_group = length('group');
len_endgroup = length('endgroup');
while ctr <= TrcSerialized_Numel
    if strncmp(TrcSerialized_Trimmed{ctr}, 'group ', len_group)
        start = ctr;
        stop = find(strncmp(TrcSerialized_Trimmed(start:end), '}', 1), 1, 'first') + start - 1;
        if tabcounter >= 1
            TrcSerialized(start:stop) = cellfun(@(X) [repmat(TABCHAR, 1, tabcounter) X], TrcSerialized(start:stop), 'UniformOutput', false);
        end
        ctr = stop + 1;
        tabcounter = tabcounter + 1;
        continue;
    end
    if strncmp(TrcSerialized_Trimmed{ctr}, 'endgroup', len_endgroup)
        tabcounter = tabcounter - 1;
        if tabcounter >= 1
            TrcSerialized{ctr} = [repmat(TABCHAR, 1, tabcounter) TrcSerialized{ctr}];
        end
        ctr = ctr + 1;
        continue;
    end
    if tabcounter >= 1
        TrcSerialized{ctr} = [repmat(TABCHAR, 1, tabcounter) TrcSerialized{ctr}];
    end
    ctr = ctr + 1;
end

fid = fopen(ARGS.OutputTRCFilePath, 'w');
fwrite(fid, strimplode(TrcSerialized, sprintf('\r\n')));
fclose(fid);

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end

function out = conv2text(structval)

persistent DEPTH;
import('ptc_matlab_lib.*');

if isempty(DEPTH)
    DEPTH = 0;
end
DEPTH = DEPTH + 1;

out = cell(0, 1);
TABCHAR = ' ';
out{end+1, 1} = [repmat(TABCHAR, 1, DEPTH-1), structval.Name];
out{end+1, 1} = [repmat(TABCHAR, 1, DEPTH-1) '{'];
for ctr = 1:numel(structval.Fields)
    if ischar(structval.Values{ctr})
        out{end+1, 1} = [repmat(TABCHAR, 1, DEPTH) structval.Fields{ctr} ':' structval.Values{ctr}]; %#ok<AGROW>
    else
        textcell = feval(str2func(thisfuncname), structval.Values{ctr});
        out(end+1:end+numel(textcell), 1) = textcell;
    end
end
out{end+1, 1} = [repmat(TABCHAR, 1, DEPTH-1) '}'];

DEPTH = DEPTH - 1;

end