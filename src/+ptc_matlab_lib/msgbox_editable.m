function varargout = msgbox_editable(varargin)
%msgbox_editable: Message box with editable message
%   SYNTAX:
%   msgbox_editable('MessageString', <{}>)
%   msgbox_editable(..., 'Property1', Value1, 'Property2', Value2, ...)

import('ptc_matlab_lib.*');

if ~mislocked(mfilename)
    mlock;
end

if length(varargin) >= 2 && isscalar(varargin{1}) && ishghandle(varargin{1})
    %This is a GUI Callback
    SRC_HANDLE = varargin{1}; %#ok<NASGU>
    EVENT_DATA = varargin{2};
    assert(length(varargin) >= 2);
    varargin = varargin(3:end);
else
    SRC_HANDLE = []; %#ok<NASGU>
    EVENT_DATA = struct([]);
end

persistent FIGURE_HANDLE;
persistent DELETE_THESE_HANDLES;

pairs = {'action', 'init'};
parseargs(varargin, pairs);

switch action
    %% CASE init
    case 'init'
        pairs = {'MessageString', {}};
        ARGS = parseargs(varargin, pairs);
        ARGS.MessageString = cellstr(ARGS.MessageString);
        
        [~, action_index] = find(ismember(varargin(1:2:end), {'action', 'MessageString'}));
        action_index = 2*action_index - 1;
        varargin([action_index(:); action_index(:)+1]) = [];
        
        pairs = {['fig_' mfilename '_position'],  [0.38036     0.39143     0.596725     0.485725], ...
            'btnOK_position',      [0.46633    0.063725    0.069825     0.10784], ...
            'editMessageString_position',      [0.05985      0.2402     0.87531     0.61765]};
        parseargs(pairs);
        
        Units = 'normalized';
        EditWindowFontSize = 8.0;
        
        FIGURE_HANDLE = dialog('MenuBar', 'none', ...
            'Name', mfilename, ...
            'Resize', 'on', ...
            'Units', Units, ...
            'CreateFcn', {@movegui, 'center'}, ...
            'WindowStyle', 'normal', ...
            'Position', eval(['fig_' mfilename '_position']), ...
            'DeleteFcn', {str2func(thisfuncname), 'action', 'close'}, ...
            'CloseRequestFcn', {str2func(thisfuncname), 'action', 'close'});
        if ~isempty(varargin)
            set(FIGURE_HANDLE, varargin{:});
        end
        DELETE_THESE_HANDLES = FIGURE_HANDLE;
        
        %editMessageString
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Style', 'edit', ...
            'Enable', 'on', ...
            'Units', Units, ...
            'HorizontalAlignment', 'left', ...
            'Position', editMessageString_position, ...
            'String', ARGS.MessageString, ...
            'Tag', 'editMessageString', ...
            'Max', 999999999, ...
            'FontSize', EditWindowFontSize, ...
            'FontName', editfont, ...
            'KeyPressFcn', {str2func(thisfuncname), 'action', 'editMessageStringKeyPressFcn', 'MessageString', ARGS.MessageString}, ...
            'Callback', {str2func(thisfuncname), 'action', 'editMessageStringCallback', 'MessageString', ARGS.MessageString});
        
        %btnOK
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Style', 'pushbutton', ...
            'Units', Units, ...
            'Position', btnOK_position, ...
            'String', 'OK', ...
            'TooltipString', 'OK', ...
            'Tag', 'btnOK', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnOKCallback'});
        
        varargout{1} = FIGURE_HANDLE;
        
        %% CASE editMessageStringKeyPressFcn
    case 'editMessageStringKeyPressFcn'
        pairs = {'MessageString', ''};
        ARGS = parseargs(varargin, pairs);
        
        printable_chars = strexplode([char(33:126) char(161:255)]);
        printable_keys = {'space', 'backspace', 'return'};
        handles = guihandles(FIGURE_HANDLE);
        if (isfield(EVENT_DATA, 'Modifier') || isprop(EVENT_DATA, 'Modifier')) && ~isequal(EVENT_DATA.Modifier, {'control'}) && ...
                ((isfield(EVENT_DATA, 'Character') || isprop(EVENT_DATA, 'Character')) && ismember(EVENT_DATA.Character, printable_chars) || ...
                (isfield(EVENT_DATA, 'Key') || isprop(EVENT_DATA, 'Key')) && ismember(EVENT_DATA.Key, printable_keys))
            uicontrol(handles.btnOK);
            set(handles.editMessageString, 'String', ARGS.MessageString);
            uicontrol(handles.editMessageString);
        elseif (isfield(EVENT_DATA, 'Modifier') || isprop(EVENT_DATA, 'Modifier')) && isequal(EVENT_DATA.Modifier, {'control'}) && ...
                (isfield(EVENT_DATA, 'Key') || isprop(EVENT_DATA, 'Key')) && ismember(lower(EVENT_DATA.Key), {'x'; 'v'})
            uicontrol(handles.btnOK);
            set(handles.editMessageString, 'String', ARGS.MessageString);
            uicontrol(handles.editMessageString);
        elseif (isfield(EVENT_DATA, 'Key') || isprop(EVENT_DATA, 'Key')) && ~any(strcmpi(EVENT_DATA.Key, {'control', 'c'})) && ...
                ((isfield(EVENT_DATA, 'Character') || isprop(EVENT_DATA, 'Character')) && ismember(EVENT_DATA.Character, printable_chars) || ...
                (isfield(EVENT_DATA, 'Key') || isprop(EVENT_DATA, 'Key')) && ismember(EVENT_DATA.Key, printable_keys))
            uicontrol(handles.btnOK);
            set(handles.editMessageString, 'String', ARGS.MessageString);
            uicontrol(handles.editMessageString);
        end
        
        %% CASE editMessageStringCallback
    case 'editMessageStringCallback'
        pairs = {'MessageString', ''};
        ARGS = parseargs(varargin, pairs);
        handles = guihandles(FIGURE_HANDLE);
        uicontrol(handles.btnOK);
        set(handles.editMessageString, 'String', ARGS.MessageString);
        uicontrol(handles.editMessageString);
        
        %% CASE btnOKCallback
    case 'btnOKCallback'
        feval(thisfuncname, 'action', 'close');
        
        %% CASE close
    case 'close'
        if mislocked(mfilename)
            munlock(mfilename);
        end
        for ctr = 1:numel(DELETE_THESE_HANDLES)
            try %#ok<TRYNC>
                delete(DELETE_THESE_HANDLES(ctr));
            end
        end
        
    otherwise
        error([mfilename ':' thisfuncname ':UnknownAction'], ['Unknown action ' action]);
end

end