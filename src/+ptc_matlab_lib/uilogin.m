function varargout = uilogin(varargin)

persistent GLOBALS;
import('ptc_matlab_lib.*');

% if ~mislocked(mfilename)
%     mlock;
% end

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

pairs = {'action', 'init'};
parseargs(varargin, pairs);

switch action
    case 'init'
        pairs = {'DefaultUser', '', ...
            'FigureParams', {}};
        ARGS = parseargs(varargin, pairs);
        GLOBALS.DEFAULT_USER = ARGS.DefaultUser;
        
        pairs = {['fig_' mfilename '_position'],      [0.30833     0.52286     0.23929     0.23905], ...
            'btnReset',      [0.62095     0.19522     0.25187     0.20319], ...
            'btnCancel',      [0.37157     0.19522     0.25187     0.20319], ...
            'btnOK',      [0.12219     0.19522     0.25187     0.20319], ...
            'listboxPasswordField',      [0.37157     0.48606     0.50125     0.11155], ...
            'editUsername',      [0.37157     0.68526     0.50125     0.11155], ...
            'textPassword',      [0.12219     0.48606     0.25187     0.11155], ...
            'textUsername',      [0.12219     0.68526     0.25187     0.11155]};
        posvars = parseargs(pairs);
        
        GLOBALS.FIGURE_HANDLE = dialog('MenuBar', 'none', ...
            'Name', mfilename, ...
            'Resize', 'off', ...
            'Units', 'normalized', ...
            'CreateFcn', {@movegui, 'center'}, ...
            'WindowStyle', 'normal', ...
            'Position', eval(['posvars.fig_' mfilename '_position']), ...
            'DeleteFcn', {str2func(thisfuncname), 'action', 'btnCancelCallback'}, ...
            'CloseRequestFcn', {str2func(thisfuncname), 'action', 'btnCancelCallback'});
        if ~isempty(ARGS.FigureParams)
            set(GLOBALS.FIGURE_HANDLE, ARGS.FigureParams{:});
        end
        GLOBALS.DELETE_THESE_HANDLES = GLOBALS.FIGURE_HANDLE;
        
        %textUsername
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'textUsername', ...
            'Position', posvars.textUsername, ...
            'Style', 'text', ...
            'String', 'Username:', ...
            'TooltipString', 'Username', ...
            'BackgroundColor', 'yellow', ...
            'FontWeight', 'bold', ...
            'FontSize', 12);
        
        %textPassword
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'textPassword', ...
            'Position', posvars.textPassword, ...
            'Style', 'text', ...
            'String', 'Password:', ...
            'TooltipString', 'Password', ...
            'BackgroundColor', 'yellow', ...
            'FontWeight', 'bold', ...
            'FontSize', 12);
        
        %editUsername
        handleUsername = uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'editUsername', ...
            'Position', posvars.editUsername, ...
            'Style', 'edit', ...
            'TooltipString', 'Username', ...
            'BackgroundColor', 'white', ...
            'String', ARGS.DefaultUser, ...
            'HorizontalAlignment', 'left', ...
            'FontName', editfont);
        
        %listboxPasswordField
        handlePassword = uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'listboxPasswordField', ...
            'Position', posvars.listboxPasswordField, ...
            'Style', 'listbox', ...
            'TooltipString', 'Password', ...
            'BackgroundColor', 'white', ...
            'HorizontalAlignment', 'left', ...
            'FontName', editfont, ...
            'String', {''}, ...
            'Value', 1, ...
            'Enable', 'on', ...
            'KeyPressFcn', {str2func(thisfuncname), 'action', 'listboxPasswordFieldKeyPressFcn'});
        setappdata(handlePassword, 'ActualPassword', '');
        
        %btnOK
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnOK', ...
            'Position', posvars.btnOK, ...
            'Style', 'pushbutton', ...
            'String', 'OK', ...
            'TooltipString', 'OK', ...
            'FontWeight', 'bold', ...
            'FontSize', 12, ...
            'Callback', {str2func(thisfuncname), 'action', 'btnOKCallback'});
        
        %btnCancel
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnCancel', ...
            'Position', posvars.btnCancel, ...
            'Style', 'pushbutton', ...
            'String', 'Cancel', ...
            'TooltipString', 'Cancel', ...
            'FontWeight', 'bold', ...
            'FontSize', 12, ...
            'Callback', {str2func(thisfuncname), 'action', 'btnCancelCallback'});
        
        %btnReset
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnReset', ...
            'Position', posvars.btnReset, ...
            'Style', 'pushbutton', ...
            'String', 'Reset', ...
            'TooltipString', 'Reset', ...
            'FontWeight', 'bold', ...
            'FontSize', 12, ...
            'Callback', {str2func(thisfuncname), 'action', 'btnResetCallback'});
        
        GLOBALS.CANCELLED = false;
        
        uiwait(GLOBALS.FIGURE_HANDLE);
        if GLOBALS.CANCELLED
            varargout{1} = 0;
            varargout{2} = 0;
        else
            varargout{1} = strtrim(char(get(handleUsername, 'String')));
            varargout{2} = strtrim(char(getappdata(handlePassword, 'ActualPassword')));
        end
        feval(thisfuncname, 'action', 'close');
        
        %% CASE listboxPasswordFieldKeyPressFcn
    case 'listboxPasswordFieldKeyPressFcn'
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        ActualPassword = getappdata(handles.listboxPasswordField, 'ActualPassword');
        if isfield(EVENT_DATA, 'Key') || isprop(EVENT_DATA, 'Key')
            switch EVENT_DATA.Key
                case 'backspace'
                    ActualPassword = ActualPassword(1:end-1);
                case 'delete'
                    ActualPassword = ActualPassword(2:end);
                case 'return'
                    feval(thisfuncname, 'action', 'btnOKCallback');
                    return;
                otherwise
                    if isfield(EVENT_DATA, 'Character') || isprop(EVENT_DATA, 'Character')
                        ActualPassword = [ActualPassword EVENT_DATA.Character];
                    end
            end
        end
        set(handles.listboxPasswordField, 'String', {repmat('*', 1, length(ActualPassword))});
        setappdata(handles.listboxPasswordField, 'ActualPassword', ActualPassword);
        
        %% CASE btnOKCallback
    case 'btnOKCallback'
        pairs = {'AllowEmptyCredentials', false};
        ARGS = parseargs(varargin, pairs);
        if ~ARGS.AllowEmptyCredentials
            handles = guihandles(GLOBALS.FIGURE_HANDLE);
            thisUsername = strtrim(char(get(handles.editUsername, 'String')));
            thisPassword = strtrim(char(getappdata(handles.listboxPasswordField, 'ActualPassword')));
            if isempty(thisUsername) || isempty(thisPassword)
                waitfor(errordlg('ERROR: A username and a password must be entered', 'ERROR', 'modal'));
                return;
            end
        end
        uiresume;
        
        %% CASE btnCancelCallback
    case 'btnCancelCallback'
        GLOBALS.CANCELLED = true;
        uiresume;
        
        %% CASE btnResetCallback
    case 'btnResetCallback'
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        set(handles.editUsername, 'String', GLOBALS.DEFAULT_USER);
        set(handles.listboxPasswordField, 'String', {''});
        setappdata(handles.listboxPasswordField, 'ActualPassword', '');
        
        %% CASE close
    case 'close'
        if mislocked(mfilename)
            munlock(mfilename);
        end
        if isfield(GLOBALS, 'DELETE_THESE_HANDLES')
            for ctr = 1:numel(GLOBALS.DELETE_THESE_HANDLES)
                try %#ok<TRYNC>
                    delete(GLOBALS.DELETE_THESE_HANDLES(ctr));
                end
            end
        end
        
    otherwise
        error([mfilename ':' thisfuncname ':UnknownAction'], ['Unknown action ' action]);
        
end