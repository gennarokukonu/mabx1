function varargout = uiedit_SimulinkSignal(varargin)
%UIEDIT_SIMULINKSIGNAL Edit Simulink.Signal object in a GUI interface
%   Syntax:
%   uiedit_SimulinkSignal: Creates a new Simulink.Signal object and
%   opens a GUI interface to edit it.
%
%   uiedit_SimulinkSignal('SignalObject', <SignalObject>): Opens a
%   GUI interface to edit SignalObject, which needs to be a
%   Simulink.Signal object. The passed argument can be a cell array of
%   Simulink.Signal objects, in which case a window opens to edit each
%   Simulink.Signal object one at a time.
%
%   Returns a cell array containing the edited Simulink.Signal
%   object(s), suspends execution until closed.
%
%   NOTE: As of 2011-09-19, custom storage classes are not supported.
%   NOTE: As of 2011-09-19, enum and bus data types are not supported.
%
%   See also: uiedit_SimulinkParameter, uiedit_NumericVariable

import('ptc_matlab_lib.*');

%MLOCK to lock the file in memory
mlock;

pairs = {'SignalObject', Simulink.Signal, ...
    'WindowStyle', 'modal', ...
    'ShouldEnableAlias', false, ...
    'MaxIdentifierLength', 31, ...
    'ShouldValidateIdentifierLength', true};
parseargs(varargin, pairs);

if ~iscell(SignalObject) %#ok<NODEF>
    SignalObject = {SignalObject};
end

updatedSignalObject = cell(size(SignalObject));
cancelled = false(size(SignalObject));
for ctr = 1:numel(SignalObject)
    [updatedSignalObject{ctr}, cancelled(ctr)] = uiedit_SimulinkSignal_helper('action', 'init', ...
        'SignalObject', SignalObject{ctr}, ...
        'WindowStyle', WindowStyle, ...
        'ShouldEnableAlias', ShouldEnableAlias, ...
        'MaxIdentifierLength', MaxIdentifierLength, ...
        'ShouldValidateIdentifierLength', ShouldValidateIdentifierLength);
end

varargout{1} = updatedSignalObject;
varargout{2} = cancelled;

if mislocked(mfilename)
    munlock(mfilename);
end

end

%% FUNCTION uiedit_SimulinkSignal_helper %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function varargout = uiedit_SimulinkSignal_helper(varargin)

import('ptc_matlab_lib.*');

if length(varargin) >= 2 && isscalar(varargin{1}) && ishghandle(varargin{1})
    %This is a GUI Callback
    SRC_HANDLE = varargin{1}; %#ok<NASGU>
    EVENT_DATA = varargin{2}; %#ok<NASGU>
    assert(length(varargin) >= 2);
    varargin = varargin(3:end);
else
    SRC_HANDLE = []; %#ok<NASGU>
    EVENT_DATA = struct([]); %#ok<NASGU>
end

pairs = {'action', ''};
parseargs(varargin, pairs);

persistent DELETE_THESE_HANDLES;
persistent FIGURE_HANDLE;
persistent SIGNAL_OBJECT;
persistent MAX_IDENTIFIER_LENGTH;
persistent CANCELLED;
persistent SHOULD_VALIDATE_IDENTIFIER_LENGTH;

switch action
    case 'init'
        pairs = {'SignalObject', Simulink.Signal, ...
            'WindowStyle', 'modal', ...
            'ShouldEnableAlias', true, ...
            'MaxIdentifierLength', 31, ...
            'ShouldValidateIdentifierLength', true};
        parseargs(varargin, pairs);
        
        SIGNAL_OBJECT = SignalObject.copy; %#ok<NODEF>
        MAX_IDENTIFIER_LENGTH = MaxIdentifierLength;
        CANCELLED = false;
        SHOULD_VALIDATE_IDENTIFIER_LENGTH = ShouldValidateIdentifierLength;
        
        Units = 'characters';
        FontSize = 8.0;
        pairs = {['fig_' mfilename '_position'],  [127.6      17.23077          80.6      44.76923], ...
                               'btnAutoMax_position',      [70.4      24.5385          4.4      1.76923], ...
                   'btnAutoMin_position',      [70.4      26.6154          4.4      1.76923], ...
       'editDataTypeExpression_position',      [29.8      39.1538         45.6      1.76923], ...
       'textDataTypeExpression_position',       [3.8      39.1539         26.2      1.76923], ...
                'popupDataType_position',      [29.8      41.2308         45.6      1.76923], ...
                 'textDataType_position',       [3.8      41.2308         26.2      1.76923], ...
             'editInitialValue_position',      [29.8      22.4615         45.6      1.76923], ...
             'textInitialValue_position',       [3.8      22.4615         26.2      1.76923], ...
            'popupSamplingMode_position',      [29.8      28.7692         45.6      1.76923], ...
             'textSamplingMode_position',       [3.8      28.7692         26.2      1.76923], ...
               'editSampleTime_position',      [29.8      30.8462         45.6      1.76923], ...
               'textSampleTime_position',       [3.8      30.8462         26.2      1.76923], ...
          'popupDimensionsMode_position',      [29.8      32.9231         45.6      1.76923], ...
           'textDimensionsMode_position',       [3.8      32.9231         26.2      1.76923], ...
               'editDimensions_position',      [29.8           35         45.6      1.76923], ...
               'textDimensions_position',       [3.8           35         26.2      1.76923], ...
              'popupComplexity_position',      [29.8      37.0769         45.6      1.76923], ...
               'textComplexity_position',       [3.8      37.0769         26.2      1.76923], ...
                  'editMinimum_position',      [29.8      26.6154         40.2      1.76923], ...
                  'textMinimum_position',       [3.8      26.6154         26.2      1.76923], ...
                  'editMaximum_position',      [29.8      24.5385         40.2      1.76923], ...
                  'textMaximum_position',       [3.8      24.5385         26.2      1.76923], ...
            'editSelectedUnits_position',      [29.8      18.3077         45.6      1.76923], ...
            'textSelectedUnits_position',       [3.8      18.3077         26.2      1.76923], ...
                   'popupUnits_position',      [29.8      20.3846         45.6      1.76923], ...
                    'textUnits_position',       [3.8      20.3846         26.2      1.76923], ...
   'panelCodeGenerationOptions_position',       [3.8      11.3077         71.6      6.23077], ...
              'textDescription_position',       [3.8      9.07695         26.2      1.76923], ...
              'editDescription_position',       [3.8      3.38461           71      5.69231], ...
                     'btnApply_position',      [46.6            1         13.8      1.69231], ...
                    'btnCancel_position',        [33            1         13.8      1.69231], ...
                        'btnOK_position',      [19.4            1         13.8      1.69231], ...
                    'editAlias_position',      [25.8     0.692308           43      1.76923], ...
                    'textAlias_position',         [2     0.692308           24      1.76923], ...
            'popupStorageClass_position',      [25.8      2.69231           43      1.76923], ...
             'textStorageClass_position',         [2      2.69231           24      1.76923]};
        parseargs(pairs);
        
        %If the figure is already open, bring it to the front
        if isfigure(FIGURE_HANDLE)
            figure(FIGURE_HANDLE);
            return;
        end
        
        FIGURE_HANDLE = dialog('MenuBar', 'none', ...
            'Name', mfilename, ...
            'Resize', 'off', ...
            'Units', Units, ...
            'WindowStyle', WindowStyle, ...
            'CreateFcn', {@movegui, 'center'}, ...
            'Position', eval(['fig_' mfilename '_position']), ...
            'DeleteFcn', {str2func(thisfuncname), 'action', 'close'}, ...
            'CloseRequestFcn', {str2func(thisfuncname), 'action', 'btnCancelCallback'});
        
        DELETE_THESE_HANDLES = FIGURE_HANDLE;
        
        %btnOK
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'btnOK', ...
            'Position', btnOK_position, ...
            'Style', 'pushbutton', ...
            'String', 'OK', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnOKCallback'});
        
        %btnCancel
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'btnCancel', ...
            'Position', btnCancel_position, ...
            'Style', 'pushbutton', ...
            'String', 'Cancel', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnCancelCallback'});
        
        %btnApply
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'btnApply', ...
            'Position', btnApply_position, ...
            'Style', 'pushbutton', ...
            'String', 'Apply', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnApplyCallback'});
        
        %editDescription
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editDescription', ...
            'Position', editDescription_position, ...
            'Style', 'edit', ...
            'Max', 99999, ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'String', SIGNAL_OBJECT.Description);
        
        %textDescription
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textDescription', ...
            'Position', textDescription_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Description:');
        
        %panelCodeGenerationOptions
        panelCodeGenerationOptions_hndl = uipanel('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'panelCodeGenerationOptions', ...
            'Position', panelCodeGenerationOptions_position, ...
            'Title', 'Code generation options:');
        
        %textStorageClass
        uicontrol('Parent', panelCodeGenerationOptions_hndl, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textStorageClass', ...
            'Position', textStorageClass_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Storage class:');
        
        %popupStorageClass
        StorageClassOptions = {'Auto', 'SimulinkGlobal', 'ExportedGlobal', ...
            'ImportedExtern', 'ImportedExternPointer'};
        uicontrol('Parent', panelCodeGenerationOptions_hndl, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'popupStorageClass', ...
            'Position', popupStorageClass_position, ...
            'Style', 'popupmenu', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'HorizontalAlignment', 'left', ...
            'String', StorageClassOptions, ...
            'Value', find(strcmp(SIGNAL_OBJECT.RTWInfo.StorageClass, StorageClassOptions), 1));
        
        %textUnits
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textUnits', ...
            'Position', textUnits_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Units:');
        
        %popupUnits
        ActualUnitsList = unitslist;
        ActualUnitsList{strcmp('<empty>', ActualUnitsList)} = '';
        popupUnits_Value = find(strcmp(strtrim(SIGNAL_OBJECT.DocUnits), ActualUnitsList), 1);
        if isempty(popupUnits_Value)
            popupUnits_Value = find(strcmp('', ActualUnitsList), 1);
        end
        popupUnits_hndl = uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'popupUnits', ...
            'Position', popupUnits_position, ...
            'Style', 'popupmenu', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'HorizontalAlignment', 'left', ...
            'String', unitslist, ...
            'Value', popupUnits_Value, ...
            'Callback', {str2func(thisfuncname), 'action', 'popupUnitsCallback'});
        setappdata(popupUnits_hndl, 'popupUnits_ActualUnits', ActualUnitsList);
        
        %textSelectedUnits
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textSelectedUnits', ...
            'Position', textSelectedUnits_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Selected units:');
        
        %editSelectedUnits
        popupUnits_ActualUnits = getappdata(popupUnits_hndl, 'popupUnits_ActualUnits');
        editSelectedUnits_hndl = uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editSelectedUnits', ...
            'Position', editSelectedUnits_position, ...
            'Style', 'edit', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'HorizontalAlignment', 'left', ...
            'String', SIGNAL_OBJECT.DocUnits);
        if any(strcmp(strtrim(char(get(editSelectedUnits_hndl, 'String'))), popupUnits_ActualUnits))
            set(editSelectedUnits_hndl, 'Enable', 'off');
        end
        
        %textAlias
        uicontrol('Parent', panelCodeGenerationOptions_hndl, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textAlias', ...
            'Position', textAlias_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Alias:');
        
        %editAlias
        ShouldEnableAlias = isempty(strtrim(SIGNAL_OBJECT.RTWInfo.Alias));
        BooleanStr = {'off', 'on'};
        uicontrol('Parent', panelCodeGenerationOptions_hndl, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editAlias', ...
            'Position', editAlias_position, ...
            'Style', 'edit', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'Enable', BooleanStr{double(ShouldEnableAlias)+1}, ...
            'String', SIGNAL_OBJECT.RTWInfo.Alias);
        
        %textMaximum
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textMaximum', ...
            'Position', textMaximum_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Maximum:');
        
        %editMaximum
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editMaximum', ...
            'Position', editMaximum_position, ...
            'Style', 'edit', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'String', num2str_custom(SIGNAL_OBJECT.Max, '%1.12g'));
        
        %btnAutoMax
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'btnAutoMax', ...
            'Position', btnAutoMax_position, ...
            'Style', 'pushbutton', ...
            'String', '', ...
            'TooltipString', 'Maximum value based on the selected data type', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnAutoMaxCallback'});
        
        %textMinimum
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textMinimum', ...
            'Position', textMinimum_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Minimum:');
        
        %editMinimum
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editMinimum', ...
            'Position', editMinimum_position, ...
            'Style', 'edit', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'String', num2str_custom(SIGNAL_OBJECT.Min, '%1.12g'));
        
        %btnAutoMin
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'btnAutoMin', ...
            'Position', btnAutoMin_position, ...
            'Style', 'pushbutton', ...
            'String', '', ...
            'TooltipString', 'Minimum value based on the selected data type', ...
            'Callback', {str2func(thisfuncname), 'action', 'btnAutoMinCallback'});
        
        %textComplexity
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textComplexity', ...
            'Position', textComplexity_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Complexity:');
        
        %popupComplexity
        popupComplexity_options = {'auto', 'real', 'complex'};
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'popupComplexity', ...
            'Position', popupComplexity_position, ...
            'Style', 'popup', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'Enable', 'on', ...
            'String', popupComplexity_options, ...
            'Value', find(strcmp(SIGNAL_OBJECT.Complexity, popupComplexity_options), 1));
        
        %textDimensions
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textDimensions', ...
            'Position', textDimensions_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Dimensions:');
        
        %editDimensions
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editDimensions', ...
            'Position', editDimensions_position, ...
            'Style', 'edit', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'Enable', 'on', ...
            'String', num2str_custom(SIGNAL_OBJECT.Dimensions));
        
        %textDimensionsMode
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textDimensionsMode', ...
            'Position', textDimensionsMode_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Dimensions mode:');
        
        %popupDimensionsMode
        popupDimensionsMode_options = {'auto', 'Fixed', 'Variable'};
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'popupDimensionsMode', ...
            'Position', popupDimensionsMode_position, ...
            'Style', 'popup', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'Enable', 'on', ...
            'String', popupDimensionsMode_options, ...
            'Value', find(strcmp(SIGNAL_OBJECT.DimensionsMode, popupDimensionsMode_options), 1));
        
        %textSampleTime
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textSampleTime', ...
            'Position', textSampleTime_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Sample time:');
        
        %editSampleTime
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editSampleTime', ...
            'Position', editSampleTime_position, ...
            'Style', 'edit', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'Enable', 'on', ...
            'String', num2str_custom(SIGNAL_OBJECT.SampleTime));
        
        %textSamplingMode
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textSamplingMode', ...
            'Position', textSamplingMode_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Sampling mode:');
        
        %popupSamplingMode
        popupSamplingMode_options = {'auto', 'Sample based', 'Frame based'};
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'popupSamplingMode', ...
            'Position', popupSamplingMode_position, ...
            'Style', 'popup', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'Enable', 'on', ...
            'String', popupSamplingMode_options, ...
            'Value', find(strcmp(SIGNAL_OBJECT.SamplingMode, popupSamplingMode_options), 1));
        
        %textInitialValue
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textInitialValue', ...
            'Position', textInitialValue_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Initial Value:');
        
        %editInitialValue
        %This is a string
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editInitialValue', ...
            'Position', editInitialValue_position, ...
            'Style', 'edit', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont, ...
            'Enable', 'on', ...
            'String', SIGNAL_OBJECT.InitialValue);
        
        %textDataType
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textDataType', ...
            'Position', textDataType_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Data type:');
        
        %popupDataType
        popupDataType_Options = {'auto', 'double', 'single', 'int8', 'uint8', 'int16', ...
            'uint16', 'int32', 'uint32'};
        popupDataType_DataTypeExpressions = {'auto', 'fixdt(''double'')', 'fixdt(''single'')', ...
            'fixdt(''int8'')', 'fixdt(''uint8'')', ...
            'fixdt(''int16'')', 'fixdt(''uint16'')', 'fixdt(''int32'')', ...
            'fixdt(''uint32'')'};
        popupDataType_Options = [popupDataType_Options {'boolean', '<data type expression>'}];
        popupDataType_DataTypeExpressions = [popupDataType_DataTypeExpressions {'fixdt(''boolean'')', '<data type expression>'}];
        thisDataType = SIGNAL_OBJECT.DataType;
        thisValue = find(strcmp(thisDataType, popupDataType_Options), 1);
        if isempty(thisValue)
            thisValue = find(strcmp(thisDataType, popupDataType_DataTypeExpressions), 1);
        end
        if isempty(thisValue)
            thisValue = find(strcmp('<Data Type Expression>', popupDataType_Options), 1);
        end
        popupDataType_hndl = uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'popupDataType', ...
            'Position', popupDataType_position, ...
            'Style', 'popup', ...
            'FontName', editfont, ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'String', popupDataType_Options, ...
            'Value', thisValue, ...
            'Callback', {str2func(thisfuncname), 'action', 'popupDataTypeCallback'});
        setappdata(popupDataType_hndl, 'popupDataType_DataTypeExpressions', popupDataType_DataTypeExpressions);
        
        %textDataTypeExpression
        uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'textDataTypeExpression', ...
            'Position', textDataTypeExpression_position, ...
            'Style', 'text', ...
            'HorizontalAlignment', 'left', ...
            'String', 'Data type expression:');
        
        %editDataTypeExpression
        editDataTypeExpression_hndl = uicontrol('Parent', FIGURE_HANDLE, ...
            'Units', Units, ...
            'FontSize', FontSize, ...
            'Tag', 'editDataTypeExpression', ...
            'Position', editDataTypeExpression_position, ...
            'Style', 'edit', ...
            'HorizontalAlignment', 'left', ...
            'BackgroundColor', 'white', ...
            'FontName', editfont);
        if ~strcmp(popupDataType_Options{get(popupDataType_hndl, 'Value')}, '<data type expression>')
            set(editDataTypeExpression_hndl, 'Enable', 'off');
            editDataTypeExpression_String = popupDataType_DataTypeExpressions{get(popupDataType_hndl, 'Value')};
        else
            editDataTypeExpression_String = SIGNAL_OBJECT.DataType;
        end
        set(editDataTypeExpression_hndl, 'String', editDataTypeExpression_String);
        
        waitfor(FIGURE_HANDLE);
        varargout{1} = SIGNAL_OBJECT;
        varargout{2} = CANCELLED;
        clear(mfilename);
        
        %% CASE btnOKCallback
    case 'btnOKCallback'
        success = feval(thisfuncname, 'action', 'btnApplyCallback');
        if ~success
            return;
        end
        feval(thisfuncname, 'action', 'close');
        
        %% CASE btnCancelCallback
    case 'btnCancelCallback'
        SIGNAL_OBJECT = [];
        CANCELLED = true;
        feval(thisfuncname, 'action', 'close');
        
        %% CASE btnApplyCallback
    case 'btnApplyCallback'
        %Return true if successful, false if not.
        handles = guihandles(FIGURE_HANDLE);
        
        s = warning('query', 'Simulink:SL_UDDData_Inconsistent');
        warning('off', 'Simulink:SL_UDDData_Inconsistent');
        
        try
            MinVal = evalsafe(strtrim(char(get(handles.editMinimum, 'String'))));
            MaxVal = evalsafe(strtrim(char(get(handles.editMaximum, 'String'))));
            DataType = strtrim(char(get(handles.editDataTypeExpression, 'String')));
            if ~strcmp(DataType, 'auto') && ~isequal(MinVal, getmindtval('double'))
                MinVal = limit('InMatrix', MinVal, 'LowerLimit', getmindtval(DataType), 'UpperLimit', getmaxdtval(DataType));
            end
            if ~strcmp(DataType, 'auto') && ~isequal(MaxVal, getmaxdtval('double'))
                MaxVal = limit('InMatrix', MaxVal, 'LowerLimit', getmindtval(DataType), 'UpperLimit', getmaxdtval(DataType));
            end
            thisAlias = strtrim(char(get(handles.editAlias, 'String')));
            
            if MinVal > MaxVal
                waitfor(errordlg('Specified minimum value is greater than specified maximum value'));
                uicontrol(handles.editMinimum);
                varargout{1} = false;
                return;
            end
            
            if length(thisAlias) > MAX_IDENTIFIER_LENGTH && SHOULD_VALIDATE_IDENTIFIER_LENGTH;
                waitfor(errordlg(['The specified alias is longer than ' num2str(MAX_IDENTIFIER_LENGTH) ' characters.'], '', 'modal'));
                uicontrol(handles.editAlias);
                varargout{1} = false;
                return;
            end
            
            popupComplexity_String = get(handles.popupComplexity, 'String');
            Complexity = popupComplexity_String{get(handles.popupComplexity, 'Value')};
            
            Dimensions = evalsafe(strtrim(char(get(handles.editDimensions, 'String'))));
            
            popupDimensionsMode_String = get(handles.popupDimensionsMode, 'String');
            DimensionsMode = popupDimensionsMode_String{get(handles.popupDimensionsMode, 'Value')};
            
            SampleTime = evalsafe(strtrim(char(get(handles.editSampleTime, 'String'))));
            
            popupSamplingMode_String = get(handles.popupSamplingMode, 'String');
            SamplingMode = popupSamplingMode_String{get(handles.popupSamplingMode, 'Value')};
            
            %This has to be a string
            InitialValue = strtrim(char(get(handles.editInitialValue, 'String')));
            
            SignalObject = Simulink.Signal;
            SignalObject.DataType = DataType;
            SignalObject.Complexity = Complexity;
            SignalObject.Dimensions = Dimensions;
            SignalObject.DimensionsMode = DimensionsMode;
            SignalObject.SampleTime = SampleTime;
            SignalObject.SamplingMode = SamplingMode;
            SignalObject.Min = MinVal;
            SignalObject.Max = MaxVal;
            SignalObject.InitialValue = InitialValue;
            SignalObject.DocUnits = strtrim(char(get(handles.editSelectedUnits, 'String')));
            
            popupStorageClass_String = cellstr(get(handles.popupStorageClass, 'String'));
            popupStorageClass_Value = get(handles.popupStorageClass, 'Value');
            SignalObject.RTWInfo.StorageClass = popupStorageClass_String{popupStorageClass_Value};
            SignalObject.RTWInfo.Alias = thisAlias;
            SignalObject.Description = sprintf(strimplode(strtrim(cellstr(get(handles.editDescription, 'String'))), '\n'));
            
            set(handles.editDimensions, 'String', num2str_custom(SignalObject.Dimensions));
            popupComplexity_String = get(handles.popupComplexity, 'String');
            set(handles.popupComplexity, 'Value', find(strcmp(SignalObject.Complexity, popupComplexity_String), 1));
            set(handles.editMaximum, 'String', num2str_custom(SignalObject.Max, '%1.12g'));
            set(handles.editMinimum, 'String', num2str_custom(SignalObject.Min, '%1.12g'));
            
            SIGNAL_OBJECT = SignalObject;
            varargout{1} = true;
            drawnow;
        catch ME
            waitfor(errordlg('ERROR: One or more parameters specified are invalid', '', 'modal'));
            varargout{1} = false;
            warning(s.state, 'Simulink:SL_UDDData_Inconsistent');
        end
        
        warning(s.state, 'Simulink:SL_UDDData_Inconsistent');
        
        %% CASE popupUnitsCallback
    case 'popupUnitsCallback'
        handles = guihandles(FIGURE_HANDLE);
        popupUnits_ActualUnits = getappdata(handles.popupUnits, 'popupUnits_ActualUnits');
        popupUnits_Value = get(handles.popupUnits, 'Value');
        theseUnits = popupUnits_ActualUnits{popupUnits_Value};
        set(handles.editSelectedUnits, 'Enable', 'off', 'String', theseUnits);
        
        %% CASE popupDataTypeCallback
    case 'popupDataTypeCallback'
        handles = guihandles(FIGURE_HANDLE);
        popupDataType_DataTypeExpressions = getappdata(handles.popupDataType, ...
            'popupDataType_DataTypeExpressions');
        popupDataType_Value = get(handles.popupDataType, 'Value');
        this_popupDataType_DataTypeExpression = popupDataType_DataTypeExpressions{popupDataType_Value};
        
        if ~strcmp(this_popupDataType_DataTypeExpression, '<data type expression>')
            set(handles.editDataTypeExpression, 'String', this_popupDataType_DataTypeExpression);
            set(handles.editDataTypeExpression, 'Enable', 'off');
        else
            if ~strcmpi(SIGNAL_OBJECT.DataType, 'auto')
                set(handles.editDataTypeExpression, 'String', getfixdtexpression('DataTypeString', SIGNAL_OBJECT.DataType));
            else
                set(handles.editDataTypeExpression, 'String', 'auto');
            end
            set(handles.editDataTypeExpression, 'Enable', 'on');
        end
        
        %% CASE btnAutoMaxCallback
    case 'btnAutoMaxCallback'
        handles = guihandles(FIGURE_HANDLE);
        editDataTypeExpression_String = char(strtrim(get(handles.editDataTypeExpression, 'String')));
        try
            if strcmp(editDataTypeExpression_String, 'auto')
                thisMaxVal = getmaxdtval('double');
            else
                thisMaxVal = getmaxdtval(editDataTypeExpression_String);
            end
            set(handles.editMaximum, 'String', num2str_custom(thisMaxVal, '%1.12g'));
        end
        
        %% CASE btnAutoMinCallback
    case 'btnAutoMinCallback'
        handles = guihandles(FIGURE_HANDLE);
        editDataTypeExpression_String = char(strtrim(get(handles.editDataTypeExpression, 'String')));
        try
            if strcmp(editDataTypeExpression_String, 'auto')
                thisMinVal = getmindtval('double');
            else
                thisMinVal = getmindtval(editDataTypeExpression_String);
            end
            set(handles.editMinimum, 'String', num2str_custom(thisMinVal, '%1.12g'));
        end
        
        %% CASE close
    case 'close'
        for ctr = 1:numel(DELETE_THESE_HANDLES)
            try
                delete(DELETE_THESE_HANDLES(ctr));
            end
        end
end

end