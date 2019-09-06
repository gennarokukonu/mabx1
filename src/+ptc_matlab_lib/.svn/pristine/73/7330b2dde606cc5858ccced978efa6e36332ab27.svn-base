function varargout = trcParseTrcFile2(varargin)

import('ptc_matlab_lib.*');

pairs = {'TRCFilePath', '', ...
    'ShowWaitbar', true};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.TRCFilePath, 'file')
    [filename, pathname] = uigetfile({'*.trc', 'TRC Files (*.trc)'; '*', 'All files (*)'});
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = [];
        return;
    end
    ARGS.TRCFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '');
end

%Reading the whole file
fid = fopen(ARGS.TRCFilePath, 'r');
fseek(fid, 0, 'bof');
C = textscan(fid, '%s', 'Delimiter', sprintf('\n'));
fclose(fid);
C = strtrim(C{1});

%Remove empty lines
C = C(~cellfun(@isempty, C));

%Obtain starting and ending indices of functional groups
begin_indices = find(~cellfun(@isempty, regexp(C, '^\s*{')));
end_indices = find(~cellfun(@isempty, regexp(C, '^\s*}')));
indices = find((begin_indices(2:end) < end_indices(1:end-1)))+1;
begin_indices(indices) = [];
end_indices(indices-1) = [];
begin_indices = begin_indices - 1;
assert(all(end_indices > begin_indices));

ctr = 1;
while ctr <= length(C)
    [tf, loc] = ismember(ctr, begin_indices);
    if tf
        C{ctr} = conv2struct(C(begin_indices(loc):end_indices(loc)));
        C(ctr+1 : end_indices(loc)) = {''};
        ctr = end_indices(loc);
    end
    ctr = ctr + 1;
end

empty_indices = cellfun(@isempty, C);
empty_indices([false; ~empty_indices(1:end-1) & empty_indices(2:end)]) = false;
C(empty_indices) = [];
varargout{1} = C;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end

function out = conv2struct(cellarray)

import('ptc_matlab_lib.*');

begin_indices = find(~cellfun(@isempty, regexp(cellarray, '^{')));
end_indices = find(~cellfun(@isempty, regexp(cellarray, '^}')));
begin_indices = begin_indices - 1;

ctr = 3;
fields = cell(0, 1);
values = cell(0, 1);
while ctr <= length(cellarray) - 1
    expl = strexplode(cellarray{ctr}, ':');
    if numel(expl) == 2
        fields{end+1, 1} = expl{1}; %#ok<AGROW>
        values{end+1, 1} = expl{2}; %#ok<AGROW>
    elseif numel(expl) == 1
        [tf, loc] = ismember(ctr, begin_indices);
        assert(tf);
        fields{end+1, 1} = expl{1}; %#ok<AGROW>
        values{end+1, 1} = feval(str2func(thisfuncname), cellarray(begin_indices(loc):end_indices(end - loc + 1))); %#ok<AGROW>
        cellarray(ctr+1 : end_indices(loc)) = {''};
        ctr = end_indices(loc);
    end        
    ctr = ctr + 1;
end

out = struct('Name', cellarray{1}, 'Fields', {fields}, 'Values', {values});

end