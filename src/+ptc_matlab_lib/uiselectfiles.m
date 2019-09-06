function varargout = uiselectfiles(varargin)

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
        pairs = {'DefaultDirectory', pwd, ...
            'Title', 'Select Files', ...
            'InitialFileList', cell(0, 1), ...
            'FilterSpec', {'*.*', 'All files (*.*)'}, ...
            'Maximized', false, ...
            'OpenFileOnDoubleClick', false, ...
            'OpenCommand', @(X) ptc_matlab_lib.edit_custom('FilePath', X), ...
            'FigureParams', {}};
        ARGS = parseargs(varargin, pairs);
        
        GLOBALS.DefaultDirectory = ARGS.DefaultDirectory;
        GLOBALS.FilterSpec = ARGS.FilterSpec;
        
        pairs = {['fig_' mfilename '_position'],      [0.30893        0.36     0.37262      0.4019], ...
            'btnCancel',      [0.51757    0.045131     0.16134    0.095012], ...
            'btnOK',      [0.35783    0.045131     0.16134    0.095012], ...
            'btnRemoveFiles',      [0.79233     0.64133     0.16134    0.052257], ...
            'btnAddFiles',      [0.79233     0.69359     0.16134    0.052257], ...
            'listboxFileList',     [0.041534      0.1639     0.73802      0.5867], ...
            'btnReset',      [0.66294      0.7601     0.11022    0.052257], ...
            'btnFilter',      [0.54952      0.7601     0.11022    0.052257], ...
            'editRegularExpressionFilter',     [0.041534     0.75772         0.5    0.057007], ...
            'textSelectFiles',     [0.038339     0.87648     0.92013    0.059382]};
        posvars = parseargs(pairs);
        
        GLOBALS.FIGURE_HANDLE = dialog('MenuBar', 'none', ...
            'Name', mfilename, ...
            'Resize', 'on', ...
            'Units', 'normalized', ...
            'CreateFcn', {@movegui, 'center'}, ...
            'WindowStyle', 'modal', ...
            'Position', eval(['posvars.fig_' mfilename '_position']), ...
            'DeleteFcn', {str2func(thisfuncname), 'action', 'btnCancelCallback'}, ...
            'CloseRequestFcn', {str2func(thisfuncname), 'action', 'btnCancelCallback'});
        if ~isempty(ARGS.FigureParams)
            set(GLOBALS.FIGURE_HANDLE, ARGS.FigureParams{:});
        end
        GLOBALS.DELETE_THESE_HANDLES = GLOBALS.FIGURE_HANDLE;
        
        %btnCancel
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnCancel', ...
            'Position', posvars.btnCancel, ...
            'Style', 'pushbutton', ...
            'String', 'CANCEL', ...
            'TooltipString', 'CANCEL', ...
            'FontWeight', 'bold', ...
            'FontSize', 12, ...
            'Callback', {str2func(thisfuncname), 'action', 'btnCancelCallback'});
        
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
        
        %btnRemoveFiles
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnRemoveFiles', ...
            'Position', posvars.btnRemoveFiles, ...
            'Style', 'pushbutton', ...
            'String', 'Remove', ...
            'TooltipString', 'Remove selected files', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnRemoveFilesCallback'});
        
        %btnAddFiles
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnAddFiles', ...
            'Position', posvars.btnAddFiles, ...
            'Style', 'pushbutton', ...
            'String', 'Add', ...
            'TooltipString', 'Add files', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnAddFilesCallback'});
        
        %listboxFileListContextMenu
        listboxFileListContextMenu = uicontextmenu('Parent', GLOBALS.FIGURE_HANDLE);
        uimenu(listboxFileListContextMenu, ...
            'Label', 'Copy selected file path(s) to clipboard', ...
            'Callback', {str2func(thisfuncname), 'action', 'listboxFileListContextMenu_CopySelectedFilePathsCallback'});
        
        %listboxFileList
        if isempty(ARGS.InitialFileList)
            InitialFileList_display = {''};
        else
            InitialFileList_display = ARGS.InitialFileList;
        end
        handle_listboxFileList = uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'listboxFileList', ...
            'Position', posvars.listboxFileList, ...
            'Style', 'listbox', ...
            'String', InitialFileList_display, ...
            'Value', 1, ...
            'TooltipString', 'File list', ...
            'Max', 2, ...
            'FontName', editfont, ...
            'BackgroundColor', 'white', ...
            'UIContextMenu', listboxFileListContextMenu, ...
            'Callback', {str2func(thisfuncname), 'action', 'listboxFileListCallback', 'OpenFileOnDoubleClick', ARGS.OpenFileOnDoubleClick, 'OpenCommand', ARGS.OpenCommand});
        setappdata(handle_listboxFileList, 'CompleteList', ARGS.InitialFileList);
        
        %btnReset
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnReset', ...
            'Position', posvars.btnReset, ...
            'Style', 'pushbutton', ...
            'String', 'Reset', ...
            'TooltipString', 'Reset filter', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnResetCallback'});
        
        %btnFilter
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'btnFilter', ...
            'Position', posvars.btnFilter, ...
            'Style', 'pushbutton', ...
            'String', 'Filter', ...
            'TooltipString', 'Regular expression filter', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnFilterCallback'});
        
        %editRegularExpressionFilter
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'editRegularExpressionFilter', ...
            'Position', posvars.editRegularExpressionFilter, ...
            'Style', 'edit', ...
            'TooltipString', 'Regular expression filter', ...
            'FontName', editfont, ...
            'HorizontalAlignment', 'center', ...
            'BackgroundColor', 'white', ...
            'KeyPressFcn', {str2func(thisfuncname), 'action', 'editRegularExpressionFilterKeyPressFcn'});
        
        %textSelectFiles
        uicontrol('Parent', GLOBALS.FIGURE_HANDLE, ...
            'Units', 'normalized', ...
            'Tag', 'textSelectFiles', ...
            'Position', posvars.textSelectFiles, ...
            'Style', 'text', ...
            'String', ARGS.Title, ...
            'TooltipString', ARGS.Title, ...
            'FontWeight', 'bold', ...
            'FontSize', 12, ...
            'BackgroundColor', 'yellow');
        
        GLOBALS.CANCELLED = false;
        
        if ARGS.Maximized
            maximize_figure(GLOBALS.FIGURE_HANDLE);
        end
        
        uiwait(GLOBALS.FIGURE_HANDLE);
        if GLOBALS.CANCELLED
            varargout{1} = 0;
        else
            varargout{1} = getappdata(handle_listboxFileList, 'CompleteList');
        end
        feval(thisfuncname, 'action', 'close');
        
        %% CASE listboxFileListContextMenu_CopySelectedFilePathsCallback
    case 'listboxFileListContextMenu_CopySelectedFilePathsCallback'
        handles_to_enable = disable_handles('HandleList', GLOBALS.FIGURE_HANDLE);
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        selected_string = getselectedstring(handles.listboxFileList);
        clipboard('copy', strimplode(selected_string{1}, sprintf('\r\n')));
        enable_handles('HandleList', handles_to_enable);
        
        %% CASE listboxFileListCallback
    case 'listboxFileListCallback'
        if strcmp(get(GLOBALS.FIGURE_HANDLE, 'SelectionType'), 'open')
            pairs = {'OpenFileOnDoubleClick', false, ...
                'OpenCommand', @(X) ptc_matlab_lib.edit_custom('FilePath', X)};
            ARGS = parseargs(varargin, pairs);
            
            if ARGS.OpenFileOnDoubleClick
                handles_to_enable = disable_handles('HandleList', GLOBALS.FIGURE_HANDLE);
                handles = guihandles(GLOBALS.FIGURE_HANDLE);
                str = getselectedstring(handles.listboxFileList);
                if exist(str{1}{1}, 'file')
                    feval(ARGS.OpenCommand, str{1}{1});
                end
                enable_handles('HandleList', handles_to_enable);
            end
        end
        
        %% CASE editRegularExpressionFilterKeyPressFcn
    case 'editRegularExpressionFilterKeyPressFcn'
        if (isfield(EVENT_DATA, 'Key') || isprop(EVENT_DATA, 'Key')) && strcmp(EVENT_DATA.Key, 'return')
            feval(thisfuncname, 'action', 'btnFilterCallback');
        end
        
        %% CASE btnOKCallback
    case 'btnOKCallback'
        handles_to_enable = disable_handles('HandleList', GLOBALS.FIGURE_HANDLE);
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        FileList = cellstr(getappdata(handles.listboxFileList, 'CompleteList'));
        if isempty(FileList)
            waitfor(errordlg('Please select at least one file', 'ERROR', 'modal'));
            enable_handles('HandleList', handles_to_enable);
            return;
        end
        enable_handles('HandleList', handles_to_enable);
        uiresume;
        
        %% CASE btnCancelCallback
    case 'btnCancelCallback'
        GLOBALS.CANCELLED = true;
        uiresume;
        
        %% CASE btnAddFilesCallback
    case 'btnAddFilesCallback'
        handles_to_enable = disable_handles('HandleList', GLOBALS.FIGURE_HANDLE);
        
        pairs = {'FilterSpec', GLOBALS.FilterSpec, ...
            'DefaultDirectory', GLOBALS.DefaultDirectory};
        ARGS = parseargs(varargin, pairs);
        
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        
        %Sundeep Tuteja, 2013-04-22: Adding a default directory seems to
        %cause a crash for some reason. In order to avoid this, the
        %directory is being changed temporarily.
        currdir = pwd; cd(ARGS.DefaultDirectory);
        %[filelist, pathname] = uigetfile(ARGS.FilterSpec, 'Select Files', ARGS.DefaultDirectory, 'MultiSelect', 'on');
        [filelist, pathname] = uigetfile(ARGS.FilterSpec, 'Select Files', 'MultiSelect', 'on');
        cd(currdir);
        if isequal(filelist, 0) || isequal(pathname, 0)
            %Cancel was pressed
            enable_handles('HandleList', handles_to_enable);
            return;
        end
        filelist = cellfun(@(X) fullfile(pathname, X), columnvec(cellstr(filelist)), 'UniformOutput', false);
        OriginalList = getappdata(handles.listboxFileList, 'CompleteList');
        setappdata(handles.listboxFileList, 'CompleteList', union(OriginalList, filelist));
        feval(thisfuncname, 'action', 'btnFilterCallback');
        
        enable_handles('HandleList', handles_to_enable);
        
        %% CASE btnRemoveFilesCallback
    case 'btnRemoveFilesCallback'
        handles_to_enable = disable_handles('HandleList', GLOBALS.FIGURE_HANDLE);
        
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        
        Value = get(handles.listboxFileList, 'Value');
        CurrentList = cellstr(get(handles.listboxFileList, 'String'));
        CompleteList = getappdata(handles.listboxFileList, 'CompleteList');
        NewList = CurrentList(setdiff(1:length(CurrentList), Value));
        if isempty(NewList)
            NewList = {''};
        end
        set(handles.listboxFileList, 'String', NewList, 'Value', 1);
        setappdata(handles.listboxFileList, 'CompleteList', setdiff(CompleteList, CurrentList(Value)));
        
        enable_handles('HandleList', handles_to_enable);
        
        %% CASE btnFilterCallback
    case 'btnFilterCallback'
        handles_to_enable = disable_handles('HandleList', GLOBALS.FIGURE_HANDLE);
        
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        pattern = strtrim(char(get(handles.editRegularExpressionFilter, 'String')));
        CompleteList = getappdata(handles.listboxFileList, 'CompleteList');
        if isempty(pattern)
            if isempty(CompleteList)
                set(handles.listboxFileList, 'String', {''}, 'Value', 1);
            else
                set(handles.listboxFileList, 'String', CompleteList, 'Value', 1);
            end
            enable_handles('HandleList', handles_to_enable);
            return;
        end
        
        result = regexpi(CompleteList, pattern);
        result = CompleteList(~cellfun(@isempty, result));
        if isempty(result)
            set(handles.listboxFileList, 'String', {''}, 'Value', 1);
        else
            set(handles.listboxFileList, 'String', result, 'Value', 1);
        end
        
        enable_handles('HandleList', handles_to_enable);
        
        %% CASE btnResetCallback
    case 'btnResetCallback'
        handles_to_enable = disable_handles('HandleList', GLOBALS.FIGURE_HANDLE);
        
        handles = guihandles(GLOBALS.FIGURE_HANDLE);
        
        set(handles.editRegularExpressionFilter, 'String', '');
        feval(thisfuncname, 'action', 'btnFilterCallback');
        
        enable_handles('HandleList', handles_to_enable);
        
        %% CASE close
    case 'close'
        if mislocked(mfilename)
            munlock(mfilename);
        end
        if isfield(GLOBALS, 'DELETE_THESE_HANDLES')
            for ctr = 1:numel(GLOBALS.DELETE_THESE_HANDLES)
                try
                    delete(GLOBALS.DELETE_THESE_HANDLES(ctr));
                end
            end
        end
        
    otherwise
        error([mfilename ':' thisfuncname ':UnknownAction'], ['Unknown action ' action]);
        
end