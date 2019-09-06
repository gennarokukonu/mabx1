function varargout = trcParseTrcFile(varargin)
%trcParseTrcFile: To read in all the content of a dSPACE trace file and
%convert it into a single matlab structure. This structure can be modified
%if necessary, and passed to trcWriteTrcFile to write to the trace file.
%
%   trcParseTrcFile('TrcFilePath', <''>, 'ShowWaitbar', <false>)
%
%   See also: trcWriteTrcFile

import('ptc_matlab_lib.*');

pairs = {'TrcFilePath', '', ...
    'ShowWaitbar', false};
ARGS = parseargs(varargin, pairs);

if isempty(ARGS.TrcFilePath)
    [filename, pathname] = uigetfile({'*.trc', 'TRC Files (*.trc)'; '*.*', 'All files (*.*)'});
    if isequal(filename, 0) || isequal(pathname, 0)
        varargout{1} = [];
        return;
    end
    ARGS.TrcFilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
    waitbar_hndl = waitbar(0, 'Please wait...', 'Pointer', 'watch');
end

%Reading the whole file
fid = fopen(ARGS.TrcFilePath, 'r');
fseek(fid, 0, 'bof');
C = textscan(fid, '%s', 'Delimiter', sprintf('\n'));
C = strtrim(C{1});
C = C(~cellfun(@isempty, C));
fclose(fid);

currentStruct = struct;
levelStack = {'currentStruct'};
prevLine = '';
ctr = 1;
while ctr <= length(C)
    thisLine = C{ctr};
    if ~isempty(thisLine) && strcmp(thisLine(1), '{')
        %This implies prevLine is not empty
        thisField = regexp(prevLine, 'group "(?<thisField>.+)"', 'names');
        if ~isempty(thisField)
            thisField = thisField.thisField;
        else
            thisField = prevLine;
        end
        levelStack{end+1, 1} = genvarname_custom(thisField);
        eval([strimplode(levelStack, '.') ' = struct;']);
        ctr = ctr + 1; thisLine = C{ctr};
        while ~strcmp(thisLine, '}')
            thisLine = strexplode(thisLine, ':');
            thisLine = {thisLine{1}, strimplode(thisLine(2:end), ':')};
            eval([strimplode(levelStack, '.') '.' genvarname_custom(thisLine{1}) ' = ''' formatstr(thisLine{2}, 'FormatSingleQuotes', true) ''';']);
            ctr = ctr + 1; thisLine = C{ctr};
        end
        eval([strimplode(levelStack, '.') '.ACTUAL_NAME = ''' regexprep(formatstr(thisField, 'FormatSingleQuotes', true), '\s+', '_') ''';']);
        if ~isequal(strfind(prevLine, 'group '), 1)
            eval([strimplode(levelStack, '.') '.IS_GROUP = false;']);
            levelStack = levelStack(1:end-1, 1);
        else
            eval([strimplode(levelStack, '.') '.IS_GROUP = true;']);
        end
    end
    if isequal(strfind(thisLine, 'endgroup'), 1)
        levelStack = levelStack(1:end-1, 1);
    end
    prevLine = thisLine;
    ctr = ctr + 1;
end

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, 'Please wait...');
    delete(waitbar_hndl);
end

varargout{1} = currentStruct;

end