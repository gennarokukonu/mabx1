function update_trc_groups(varargin)
%update_trc_groups: Can be called from the PostCodeGenCommand of a Simulink
%model to incorporate logical groups inside the trace file just created.
%Also creates autogen_<ModelName)_parameterlist.py and
%autogen_<ModelName>_signallist.py containing the paths to parameters and
%signals extracted directly from the trc file just created by the build
%process.
%
%   See also: trcParseTrcFile, trcWriteTrcFile

import('ptc_matlab_lib.*');

tic;

pairs = {'Sys', bdroot(gcs), ...
    'BlockTypes', {'Constant', 'Gain', 'Lookup', 'Lookup2D'}, ...
    'PTC_BlockTypes', {'Override'}, ...
    'FunctionalUnitIdentifier', '__TREAT_AS_FUNCTIONAL_UNIT__', ...
    'ShowWaitbar', true};
parseargs(varargin, pairs);

if ShowWaitbar
    waitbar_hndl = waitbar(0, 'Please wait...', 'Name', 'Updating trc file', 'Pointer', 'watch');
end

if ~isempty(Sys)
    [filedir, filename] = fileparts(get_param(bdroot(Sys), 'FileName'));
    TrcFilePath = fullfile(filedir, [filename '.trc']);
    if ~exist(TrcFilePath, 'file')
        TrcFilePath = fullfile(fileparts(filedir), [filename '.trc']);
    end
end
if isempty(Sys) || ~exist(TrcFilePath, 'file')
    [filename, pathname] = uigetfile({'*.trc', 'TRC File'}, 'Choose TRC File', fileparts(pwd));
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        if ShowWaitbar
            delete(waitbar_hndl);
        end
        return;
    end
    TrcFilePath = fullfile(pathname, filename);
end
fid = fopen(TrcFilePath, 'r');
%Test to see if the file can be opened
if isequal(fid, -1)
    warning([mfilename ':' thisfuncname ':FileOpenFailed'], ['Could not open file ' filename '.trc, out of memory or permission denied.']);
    delete(waitbar_hndl);
    return;
else
    fclose(fid);
end
trcFileStruct = trcParseTrcFile('TrcFilePath', TrcFilePath);
if ShowWaitbar
    waitbar(0.25, waitbar_hndl);
end

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% STRUCT MODIFICATIONS GO HERE
FunctionalUnitSysNames = cellstr(find_system(Sys, ...
    'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', ...
    'LoadFullyIfNeeded', 'on', ...
    'RegExp', 'on', ...
    'AttributesFormatString', FunctionalUnitIdentifier));
tempstring = randstring(5);
FunctionalUnitSysNames = strrep(FunctionalUnitSysNames, '//', tempstring);
lenvec = cellfun(@(X) length(ptc_matlab_lib.strexplode(X, '/')), FunctionalUnitSysNames);
[lenvec, indices] = sort(lenvec(:), 1, 'descend');
FunctionalUnitSysNames = FunctionalUnitSysNames(indices);
FunctionalUnitSysNames = strrep(FunctionalUnitSysNames, tempstring, '//');

[dummy, indices_beginning] = unique(lenvec, 'first'); %#ok<ASGLU>
[dummy, indices_ending] = unique(lenvec, 'last'); %#ok<ASGLU>
clear('dummy');
for ctr = 1:length(indices_beginning)
    FunctionalUnitSysNames(indices_beginning(ctr):indices_ending(ctr)) = ...
        sort(FunctionalUnitSysNames(indices_beginning(ctr):indices_ending(ctr)));
end

%Obtain parameter names and signal names
ParamNameList = cell(length(FunctionalUnitSysNames), 1);
SignalNameList = cell(length(FunctionalUnitSysNames), 1);
BlockParamList = cell(length(BlockTypes)+length(PTC_BlockTypes), 1); %#ok<USENS>
for ctr = 1:length(FunctionalUnitSysNames)
    ParamNameList{ctr} = cell(length(BlockParamList), 1);
    
    BlockHandles = cellfun(@(X) find_system(FunctionalUnitSysNames{ctr}, ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'FindAll', 'on', ...
        'BlockType', X), BlockTypes, 'UniformOutput', false);
    
    BlockHandles = [BlockHandles(:);
        cellfun(@(X) find_system(FunctionalUnitSysNames{ctr}, ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'FindAll', 'on', ...
        'PTC_BlockType', X), PTC_BlockTypes, 'UniformOutput', false)];
    
    SignalHandles = find_system(FunctionalUnitSysNames{ctr}, ...
        'LookUnderMasks', 'all', ...
        'FollowLinks', 'on', ...
        'LoadFullyIfNeeded', 'on', ...
        'FindAll', 'on', ...
        'RegExp', 'on', ...
        'Type', 'line', ...
        'Name', '^[^<]');
    
    ParamNameList{ctr} = {};
    for ctr2 = 1:length(BlockTypes)
        if ~isempty(BlockHandles{ctr2})
            switch BlockTypes{ctr2}
                case 'Constant'
                    BlockParamList{ctr2} = columnvec(cellstr(get(BlockHandles{ctr2}, 'Value')));
                case 'Gain'
                    BlockParamList{ctr2} = columnvec(cellstr(get(BlockHandles{ctr2}, 'Gain')));
                case 'Lookup'
                    BlockParamList{ctr2} = columnvec(cellstr(get(BlockHandles{ctr2}, {'InputValues', 'Table'})));
                case 'Lookup2D'
                    BlockParamList{ctr2} = columnvec(cellstr(get(BlockHandles{ctr2}, {'RowIndex', 'ColumnIndex', 'Table'})));
                otherwise
                    error([mfilename ':' thisfuncname ':UnknownBlockType'], ['The block type ' BlockTypes{ctr2} ' is not supported.']);
            end
        end
    end
    for ctr3 = ctr2+1:ctr2+length(PTC_BlockTypes)
        if ~isempty(BlockHandles{ctr3})
            switch PTC_BlockTypes{ctr3-ctr2}
                case 'Override'
                    BlockParamList{ctr3} = columnvec(cellstr(get(BlockHandles{ctr3}, {'ShouldOverride', 'OverrideValue'})));
                otherwise
                    error([mfilename ':' thisfuncname ':UnknownBlockType'], ['The block type ' BlockTypes{ctr3} ' is not supported.']);
            end
        end
    end
        
    ParamNameList{ctr} = cat(1, BlockParamList{:});
    
    if ~isempty(SignalHandles)
        SignalNameList{ctr} = unique(cellstr(get(SignalHandles, 'Name')));
    end
    
    logical_indices = isfield(trcFileStruct.Tunable_Parameters, ParamNameList{ctr});
    
    thisSysName = strrep(FunctionalUnitSysNames{ctr}, '//', tempstring);
    thisSysName = strexplode(thisSysName, '/');
    thisSysName = strrep(thisSysName, tempstring, '//');
    thisSysNameVar = cellfun(@ptc_matlab_lib.genvarname_custom, thisSysName, 'UniformOutput', false);
    thisSysNameVar = thisSysNameVar(2:end);
    thisGroupStr = strimplode(thisSysNameVar, '.');
    
    if any(logical_indices)
        ParamNameList{ctr} = unique(ParamNameList{ctr}(logical_indices));
        newstruct = partialstruct(trcFileStruct.Tunable_Parameters, ParamNameList{ctr}); %#ok<NASGU>
        trcFileStruct.Tunable_Parameters = rmfield(trcFileStruct.Tunable_Parameters, ParamNameList{ctr});
        levels = strexplode(thisGroupStr, '.');
        for ctr2 = 1:length(levels)
            thislevelstr = strimplode(levels(1:ctr2), '.');
            eval(['trcFileStruct.Tunable_Parameters.' thislevelstr '.flags = '' COLLAPSED'';']);
            eval(['trcFileStruct.Tunable_Parameters.' thislevelstr '.IS_GROUP = true;']);
            eval(['trcFileStruct.Tunable_Parameters.' thislevelstr '.ACTUAL_NAME = ''' regexprep(thisSysNameVar{ctr2}, '\s+', '_') ''';']);
        end
        oldstruct = eval(['trcFileStruct.Tunable_Parameters.' thisGroupStr ';']); %#ok<NASGU>
        eval(['trcFileStruct.Tunable_Parameters.' thisGroupStr ' = copyfields(newstruct, oldstruct);']);
    end
    
    logical_indices = isfield(trcFileStruct.Labels, SignalNameList{ctr});
    if any(logical_indices)
        SignalNameList{ctr} = unique(SignalNameList{ctr}(logical_indices));
        newstruct = partialstruct(trcFileStruct.Labels, SignalNameList{ctr}); %#ok<NASGU>
        trcFileStruct.Labels = rmfield(trcFileStruct.Labels, SignalNameList{ctr});
        levels = strexplode(thisGroupStr, '.');
        for ctr2 = 1:length(levels)
            thislevelstr = strimplode(levels(1:ctr2), '.');
            eval(['trcFileStruct.Labels.' thislevelstr '.flags = '' COLLAPSED'';']);
            eval(['trcFileStruct.Labels.' thislevelstr '.IS_GROUP = true;']);
            eval(['trcFileStruct.Labels.' thislevelstr '.ACTUAL_NAME = ''' regexprep(thisSysNameVar{ctr2}, '\s+', '_') ''';']);
        end
        oldstruct = eval(['trcFileStruct.Labels.' thisGroupStr ';']); %#ok<NASGU>
        eval(['trcFileStruct.Labels.' thisGroupStr ' = copyfields(newstruct, oldstruct);']);
    end
end

%Recursively order the fields of trcFileStruct alphabetically
trcFileStruct.Tunable_Parameters = orderfields_recursive(trcFileStruct.Tunable_Parameters);
trcFileStruct.Labels = orderfields_recursive(trcFileStruct.Labels);

if ShowWaitbar
    waitbar(0.5, waitbar_hndl);
end

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

trcWriteTrcFile('TrcFilePath', TrcFilePath, ...
    'trcFileStruct', trcFileStruct);

if ShowWaitbar
    waitbar(0.75, waitbar_hndl);
end

create_parameterlist_files('trcFileStruct', trcFileStruct.Tunable_Parameters, ...
    'TrcFilePath', TrcFilePath);
create_signallist_files('trcFileStruct', trcFileStruct.Labels, ...
    'TrcFilePath', TrcFilePath);

if ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc) ' seconds']);
    pause(0.5);
    delete(waitbar_hndl);
end

end

%% FUNCTION create_parameterlist_files %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function varargout = create_parameterlist_files(varargin)

import('ptc_matlab_lib.*');

pairs = {'trcFileStruct', struct([]), ...
    'TrcFilePath', '', ...
    'RootLevel', 'Tunable_Parameters', ...
    'TimeStamp', now};
parseargs(varargin, pairs);

formatfunc = @(X) ptc_matlab_lib.formatstr(X, 'FormatBackslashes', true, 'FormatPercentageSymbols', true);

[~, filename] = fileparts(TrcFilePath);
OutputFilePath = cell(2, 1);
OutputFilePath{1} = fullfile(fileparts(TrcFilePath), ['autogen_' filename '_parameterlist.py']);
OutputFilePath{2} = fullfile(fileparts(TrcFilePath), ['autogen_' filename '_parameterlist.m']);

%First, create python file
fid = fopen(OutputFilePath{1}, 'w');
fprintf(fid, '#File: %s\n', OutputFilePath{1});
fprintf(fid, '#Timestamp: %s\n', isodatetime('TimeStamp', TimeStamp));
fprintf(fid, '#Created by: %s.m\n', mfilename('fullpath'));
fprintf(fid, '#System Name: %s\n', hostname);
fprintf(fid, '#User Name: %s\n', username);
fprintf(fid, 'class parameterlist:\n');
fprintf(fid, '\tdef __init__(self):\n');

outcell = trcFileStruct2Cell(trcFileStruct, 'RootLevel', RootLevel);
fprintf(fid, ['\t\t' strimplode(formatfunc(outcell), '\n\t\t') '\n']);
fclose(fid);

fprintf([isodatetime ' - ' mfilename ' - Created file ' formatstr(OutputFilePath{1}, 'FormatBackslashes', true) '\n']);

%Next, create M file
fid = fopen(OutputFilePath{2}, 'w');
fprintf(fid, 'function varargout = %s(varargin)\n', ['autogen_' filename '_parameterlist']);
fprintf(fid, '%%File: %s\n', OutputFilePath{2});
fprintf(fid, '%%Timestamp: %s\n', isodatetime('TimeStamp', TimeStamp));
fprintf(fid, '%%Created by: %s.m\n\n', mfilename('fullpath'));
fprintf(fid, '%%System Name: %s\n', hostname);
fprintf(fid, '%%User Name: %s\n', username);

outcell = trcFileStruct2Cell(trcFileStruct, 'RootLevel', RootLevel);
fprintf(fid, [strimplode(formatfunc(outcell), '\n') '\n\n']);
fprintf(fid, 'varargout{1} = orderfields(self);\n\n');
fprintf(fid, 'end\n');

fclose(fid);

fprintf([isodatetime ' - ' mfilename ' - Created file ' formatstr(OutputFilePath{2}, 'FormatBackslashes', true) '\n']);

varargout{1} = OutputFilePath;

end

%% FUNCTION create_signallist_files %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function varargout = create_signallist_files(varargin)

import('ptc_matlab_lib.*');

pairs = {'trcFileStruct', struct([]), ...
    'TrcFilePath', '', ...
    'RootLevel', 'Labels', ...
    'TimeStamp', now};
parseargs(varargin, pairs);

formatfunc = @(X) ptc_matlab_lib.formatstr(X, 'FormatBackslashes', true, 'FormatPercentageSymbols', true);

[~, filename] = fileparts(TrcFilePath);
OutputFilePath = cell(2, 1);
OutputFilePath{1} = fullfile(fileparts(TrcFilePath), ['autogen_' filename '_signallist.py']);
OutputFilePath{2} = fullfile(fileparts(TrcFilePath), ['autogen_' filename '_signallist.m']);

%First, create python file
fid = fopen(OutputFilePath{1}, 'w');
fprintf(fid, '#File: %s\n', OutputFilePath{1});
fprintf(fid, '#Timestamp: %s\n', isodatetime('TimeStamp', TimeStamp));
fprintf(fid, '#Created by: %s.m\n', mfilename('fullpath'));
fprintf(fid, '#System Name: %s\n', hostname);
fprintf(fid, '#User Name: %s\n', username);
fprintf(fid, 'class signallist:\n');
fprintf(fid, '\tdef __init__(self):\n');

outcell = trcFileStruct2Cell(trcFileStruct, 'RootLevel', RootLevel);
fprintf(fid, ['\t\t' strimplode(formatfunc(outcell), '\n\t\t') '\n']);
fclose(fid);

fprintf([isodatetime ' - ' mfilename ' - Created file ' formatstr(OutputFilePath{1}, 'FormatBackslashes', true) '\n']);

%Next, create M file
fid = fopen(OutputFilePath{2}, 'w');
fprintf(fid, 'function varargout = %s(varargin)\n', ['autogen_' filename '_signallist']);
fprintf(fid, '%%File: %s\n', OutputFilePath{2});
fprintf(fid, '%%Timestamp: %s\n', isodatetime('TimeStamp', TimeStamp));
fprintf(fid, '%%Created by: %s.m\n\n', mfilename('fullpath'));
fprintf(fid, '%%System Name: %s\n', hostname);
fprintf(fid, '%%User Name: %s\n', username);

outcell = trcFileStruct2Cell(trcFileStruct, 'RootLevel', RootLevel);
fprintf(fid, [strimplode(formatfunc(outcell), '\n') '\n\n']);
fprintf(fid, 'varargout{1} = orderfields(self);\n\n');
fprintf(fid, 'end\n');

fclose(fid);

fprintf([isodatetime ' - ' mfilename ' - Created file ' formatstr(OutputFilePath{2}, 'FormatBackslashes', true) '\n']);

varargout{1} = OutputFilePath;

end

%% FUNCTION trcFileStruct2Cell %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function outcell = trcFileStruct2Cell(trcFileStruct, varargin)

import('ptc_matlab_lib.*');

pairs = {'outcell', cell(0, 1), ...
    'RootLevel', ''};
parseargs(varargin, pairs);

fields = fieldnames(trcFileStruct);
fields = fields(cellfun(@(X) isstruct(trcFileStruct.(X)), fields));

for ctr = 1:length(fields)
    if ~(trcFileStruct.(fields{ctr}).IS_GROUP)
        thisval = [RootLevel '/' trcFileStruct.(fields{ctr}).ACTUAL_NAME];
        outcell{end+1, 1} = ['self.' fields{ctr} ' = ''' thisval ''';']; %#ok<AGROW>
    else
        thisval = [RootLevel '/' trcFileStruct.(fields{ctr}).ACTUAL_NAME];
        outcell = feval(thisfuncname, trcFileStruct.(fields{ctr}), 'outcell', outcell, 'RootLevel', thisval);
    end
end

outcell = sort(outcell);

end

%% FUNCTION orderfields_recursive %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function outstruct = orderfields_recursive(instruct)

import('ptc_matlab_lib.*');

if isstruct(instruct) && isfield(instruct, 'IS_GROUP') && instruct.IS_GROUP
    outstruct = orderfields(instruct);
    fields = fieldnames(outstruct);
    groupfield_logical_indices = cellfun(@(X) isstruct(instruct.(X)) && isfield(instruct.(X), 'IS_GROUP') && instruct.(X).IS_GROUP, fields);
    if any(groupfield_logical_indices)
        groupfields = fields(groupfield_logical_indices);
        for ctr = 1:length(groupfields)
            outstruct.(groupfields{ctr}) = feval(thisfuncname, outstruct.(groupfields{ctr}));
        end
    end
end

end