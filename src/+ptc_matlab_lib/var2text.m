function varargout = var2text(varargin)

import('ptc_matlab_lib.*');
pairs = {'VariableName', '', ...
    'VariableValue', [], ...
    'NumericFormatString', '%99.14g'};
ARGS = parseargs(varargin, pairs);

NEWLINE = sprintf('\n');
TABCHAR = sprintf('\t');

num2strfunc = @(X) ptc_matlab_lib.num2expr('InputMatrix', X, ....
    'ShowNewLines', true, ...
    'FormatString', ARGS.NumericFormatString);

STR = '';

if iscellstr(ARGS.VariableValue) && ismatrix(ARGS.VariableValue)
    
    STR = [STR sprintf('%s = %s;', ARGS.VariableName, cellstr2expr('InputCellArray', ARGS.VariableValue))];
    
elseif (isnumeric(ARGS.VariableValue) || islogical(ARGS.VariableValue)) && ismatrix(ARGS.VariableValue) && ~isa(ARGS.VariableValue, 'Simulink.IntEnumType')
    
    thisClass = class(ARGS.VariableValue);
    if ~strcmp(thisClass, 'uint64') && ~strcmp(thisClass, 'int64') %#ok<STISA>
        STR = [STR sprintf('%s = cast(%s, ''%s'');', ARGS.VariableName, num2strfunc(ARGS.VariableValue), thisClass)];
    else
        STR = [STR sprintf('%s = cast(%s, ''%s'');', ARGS.VariableName, num2str(ARGS.VariableValue), thisClass)];
    end
    
elseif ischar(ARGS.VariableValue)
    
    try
        thisVariableValue = strrep(ARGS.VariableValue, '''', '''''');
        evalsafe(sprintf('%s = ''%s'';', ARGS.VariableName, thisVariableValue));
        STR = [STR sprintf('%s = ''%s'';', ARGS.VariableName, thisVariableValue)];
    catch
        thisVariableValue = strrep(ARGS.VariableValue, '%', '%%');
        thisVariableValue = strrep(thisVariableValue, '\', '\\');
        thisVariableValue = strrep(thisVariableValue, NEWLINE, '\n');
        thisVariableValue = strrep(thisVariableValue, sprintf('\r'), '\r');
        thisVariableValue = strrep(thisVariableValue, sprintf('\f'), '\f');
        thisVariableValue = strrep(thisVariableValue, sprintf('\t'), '\t');
        STR = [STR sprintf('%s = sprintf(''%s'');', ARGS.VariableName, thisVariableValue)];
    end
    
elseif iscell(ARGS.VariableValue) && ~isequal(size(ARGS.VariableValue), [1 1])
    
    dims = size(ARGS.VariableValue);
    thisCellStr = cell(numel(ARGS.VariableValue)+2, 1);
    thisCellStr{1, 1} = [ARGS.VariableName ' = cell(' num2str(numel(ARGS.VariableValue)) ', 1);'];
    for ctr = 1:numel(ARGS.VariableValue)
        thisCellStr{ctr+1, 1} = feval(thisfuncname, 'VariableName', [ARGS.VariableName '{' num2str(ctr) '}'], ...
            'VariableValue', ARGS.VariableValue{ctr});
    end
    thisCellStr{ctr+2, 1} = [ARGS.VariableName ' = reshape(' ARGS.VariableName ', ' num2expr('InputMatrix', dims) ');'];
    STR = [STR strimplode(thisCellStr, NEWLINE)];
    
elseif isequal(size(ARGS.VariableValue), [1 1]) || strcmp(class(ARGS.VariableValue), 'containers.Map') %#ok<STISA>
    
    if isa(ARGS.VariableValue, 'ptc_matlab_lib.PTC_MBDS_Parameter')
        
        TemplateObj = ptc_matlab_lib.PTC_MBDS_Parameter;
        TemplateObj.Value = ARGS.VariableValue.Value;
        TemplateObj_DataType = TemplateObj.DataType;
        TemplateObj = ptc_matlab_lib.PTC_MBDS_Parameter;
        
        if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
            [~, UserDataVarName] = fileparts(tempname);
            STR = [STR feval(thisfuncname, 'VariableName', UserDataVarName, 'VariableValue', ARGS.VariableValue.UserData) NEWLINE];
        end
        
        if isIntEnumType(regexprep(ARGS.VariableValue.DataType, '^(e|E)num:\s*', ''))
            thisClass = regexprep(ARGS.VariableValue.DataType, '^(e|E)num:\s*', '');
            thisValueStr = sprintf('%s.%s', thisClass, char(feval(thisClass, ARGS.VariableValue.Value)));
            ARGS.VariableValue.Min = [];
            ARGS.VariableValue.Max = [];
        else
            thisValueStr = num2strfunc(double(ARGS.VariableValue.Value));
            if isa(ARGS.VariableValue.Value, 'logical')
                BooleanStr = {'false'; 'true'};
                thisValueStr = BooleanStr{double(ARGS.VariableValue.Value)+1};
            elseif ~isa(ARGS.VariableValue.Value, 'double')
                thisValueStr = [class(ARGS.VariableValue.Value) '(' thisValueStr ')'];
            end
        end
        ARGLIST = cell(0, 2);
        if ~isequal(TemplateObj.Value, ARGS.VariableValue.Value)
            ARGLIST = [ARGLIST; {'Value', thisValueStr}];
        end
        try
            thisDescriptionStr = strrep(ARGS.VariableValue.Description, '''', '''''');
            evalsafe(['''' thisDescriptionStr ''';']);
            if ~strcmp(TemplateObj.Description, thisDescriptionStr)
                ARGLIST = [ARGLIST; {'Description', ['''' thisDescriptionStr '''']}];
            end
        catch
            thisDescriptionStr = strrep(ARGS.VariableValue.Description, '%', '%%');
            thisDescriptionStr = strrep(thisDescriptionStr, '\', '\\');
            thisDescriptionStr = strrep(thisDescriptionStr, NEWLINE, '\n');
            thisDescriptionStr = strrep(thisDescriptionStr, sprintf('\r'), '\r');
            thisDescriptionStr = strrep(thisDescriptionStr, sprintf('\f'), '\f');
            thisDescriptionStr = strrep(thisDescriptionStr, sprintf('\t'), '\t');
            ARGLIST = [ARGLIST; {'Description', ['sprintf(''' thisDescriptionStr ''')']}];
        end
        try
            thisUnitStr = strrep(ARGS.VariableValue.DocUnits, '''', '''''');
            evalsafe(['''' thisUnitStr ''';']);
            if ~strcmp(TemplateObj.DocUnits, thisUnitStr) %Using DocUnits for compatibility
                ARGLIST = [ARGLIST; {'Unit', ['''' thisUnitStr '''']}];
            end
        catch
            thisUnitStr = strrep(ARGS.VariableValue.DocUnits, '%', '%%');
            thisUnitStr = strrep(thisUnitStr, '\', '\\');
            thisUnitStr = strrep(thisUnitStr, NEWLINE, '\n');
            thisUnitStr = strrep(thisUnitStr, sprintf('\r'), '\r');
            thisUnitStr = strrep(thisUnitStr, sprintf('\f'), '\f');
            thisUnitStr = strrep(thisUnitStr, sprintf('\t'), '\t');
            ARGLIST = [ARGLIST; {'Unit', ['sprintf(''' thisUnitStr ''')']}];
        end
        
        if ~strcmp(TemplateObj_DataType, ARGS.VariableValue.DataType)
            ARGLIST = [ARGLIST; {'DataType', ['''' ARGS.VariableValue.DataType '''']}];
        end
        
        if ~isequal(TemplateObj.Min, ARGS.VariableValue.Min)
            ARGLIST = [ARGLIST; {'Min', num2strfunc(ARGS.VariableValue.Min)}];
        end
        
        if ~isequal(TemplateObj.Max, ARGS.VariableValue.Max)
            ARGLIST = [ARGLIST; {'Max', num2strfunc(ARGS.VariableValue.Max)}];
        end
        
        if ~isequal(TemplateObj.Axis_Labels, ARGS.VariableValue.Axis_Labels)
            ARGLIST = [ARGLIST; {'Axis_Labels', cellstr2expr('InputCellArray', cellstr(ARGS.VariableValue.Axis_Labels(:)), 'ShowNewLines', false)}];;
        end
        
        if ~isequal(TemplateObj.CoderInfo, ARGS.VariableValue.CoderInfo)
            if ~strcmp(TemplateObj.CoderInfo.StorageClass, ARGS.VariableValue.CoderInfo.StorageClass)
                ARGLIST = [ARGLIST; {'CoderInfo.StorageClass', ['''' ARGS.VariableValue.CoderInfo.StorageClass '''']}];
            end
            if ~strcmp(TemplateObj.CoderInfo.Alias, ARGS.VariableValue.CoderInfo.Alias)
                ARGLIST = [ARGLIST; {'CoderInfo.Alias', ['''' ARGS.VariableValue.CoderInfo.Alias '''']}];
            end
            if TemplateObj.CoderInfo.Alignment ~= ARGS.VariableValue.CoderInfo.Alignment
                ARGLIST = [ARGLIST; {'CoderInfo.Alignment', num2strfunc(ARGS.VariableValue.CoderInfo.Alignment)}];
            end
            if ~strcmp(TemplateObj.CoderInfo.CustomStorageClass, ARGS.VariableValue.CoderInfo.CustomStorageClass)
                ARGLIST = [ARGLIST; {'CoderInfo.CustomStorageClass', ['''' ARGS.VariableValue.CoderInfo.CustomStorageClass '''']}];
            end
            if ~isequal(TemplateObj.CoderInfo.CustomAttributes, ARGS.VariableValue.CoderInfo.CustomAttributes)
                TemplateObj2 = ptc_matlab_lib.PTC_MBDS_Parameter;
                TemplateObj2.CoderInfo.StorageClass = ARGS.VariableValue.CoderInfo.StorageClass;
                TemplateObj2.CoderInfo.CustomStorageClass = ARGS.VariableValue.CoderInfo.CustomStorageClass;
                if isprop(ARGS.VariableValue.CoderInfo.CustomAttributes, 'HeaderFile') && ~strcmp(TemplateObj2.CoderInfo.CustomAttributes.HeaderFile, ARGS.VariableValue.CoderInfo.CustomAttributes.HeaderFile)
                    ARGLIST = [ARGLIST; {'CoderInfo.CustomAttributes.HeaderFile', ['''' ARGS.VariableValue.CoderInfo.CustomAttributes.HeaderFile '''']}];
                end
                if isprop(ARGS.VariableValue.CoderInfo.CustomAttributes, 'DefinitionFile') && ~strcmp(TemplateObj2.CoderInfo.CustomAttributes.DefinitionFile, ARGS.VariableValue.CoderInfo.CustomAttributes.DefinitionFile)
                    ARGLIST = [ARGLIST; {'CoderInfo.CustomAttributes.DefinitionFile', ['''' ARGS.VariableValue.CoderInfo.CustomAttributes.DefinitionFile '''']}];
                end
                if isprop(ARGS.VariableValue.CoderInfo.CustomAttributes, 'Owner') && ~strcmp(TemplateObj2.CoderInfo.CustomAttributes.Owner, ARGS.VariableValue.CoderInfo.CustomAttributes.Owner)
                    ARGLIST = [ARGLIST; {'CoderInfo.CustomAttributes.Owner', ['''' ARGS.VariableValue.CoderInfo.CustomAttributes.Owner '''']}];
                end
                if isprop(ARGS.VariableValue.CoderInfo.CustomAttributes, 'ConcurrentAccess') && TemplateObj2.CoderInfo.CustomAttributes.ConcurrentAccess ~= ARGS.VariableValue.CoderInfo.CustomAttributes.ConcurrentAccess
                    ARGLIST = [ARGLIST; {'CoderInfo.CustomAttributes.ConcurrentAccess', ['''' ARGS.VariableValue.CoderInfo.CustomAttributes.ConcurrentAccess '''']}];
                end
            end
            if isprop(TemplateObj.CoderInfo, 'TypeQualifier') && ~strcmp(TemplateObj.CoderInfo.TypeQualifier, ARGS.VariableValue.CoderInfo.TypeQualifier)
                ARGLIST = [ARGLIST; {'CoderInfo.TypeQualifier', ['''' ARGS.VariableValue.CoderInfo.TypeQualifier '''']}];
            end
        end
        
        if ~strcmp(TemplateObj.ASAP2_Identifier, ARGS.VariableValue.ASAP2_Identifier)
            ARGLIST = [ARGLIST; {'ASAP2_Identifier', ['''' ARGS.VariableValue.ASAP2_Identifier '''']}];
        end
        
        if ~strcmp(TemplateObj.ASAP2_Precision, ARGS.VariableValue.ASAP2_Precision)
            ARGLIST = [ARGLIST; {'ASAP2_Precision', ['''' ARGS.VariableValue.ASAP2_Precision '''']}];
        end
        
        if TemplateObj.ASAP2_BitMask ~= ARGS.VariableValue.ASAP2_BitMask
            ARGLIST = [ARGLIST; {'ASAP2_BitMask', num2strfunc(ARGS.VariableValue.ASAP2_BitMask)}];
        end
        
        if TemplateObj.ASAP2_BitShift ~= ARGS.VariableValue.ASAP2_BitShift
            ARGLIST = [ARGLIST; {'ASAP2_BitShift', num2strfunc(ARGS.VariableValue.ASAP2_BitShift)}];
        end
        
        if TemplateObj.ASAP2_SignExtend ~= ARGS.VariableValue.ASAP2_SignExtend
            BooleanStr = {'false'; 'true'};
            ARGLIST = [ARGLIST; {'ASAP2_SignExtend', BooleanStr{double(ARGS.VariableValue.ASAP2_SignExtend)+1}}];
        end
        
        if ~strcmp(TemplateObj.ASAP2_Formula, ARGS.VariableValue.ASAP2_Formula)
            ARGLIST = [ARGLIST; {'ASAP2_Formula', ['''' ARGS.VariableValue.ASAP2_Formula '''']}];
        end
        
        if ~strcmp(TemplateObj.ASAP2_FormulaInv, ARGS.VariableValue.ASAP2_FormulaInv)
            ARGLIST = [ARGLIST; {'ASAP2_FormulaInv', ['''' ARGS.VariableValue.ASAP2_Formula '''']}];
        end
        
        if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
            ARGLIST = [ARGLIST; {'UserData', UserDataVarName}];
        end
        
        ARGLIST(:, 1) = strcat('''', ARGLIST(:, 1), '''');
        ARGLISTSTR = arrayfun(@(ROW) ptc_matlab_lib.strimplode(ARGLIST(ROW, :), ', '), 1:size(ARGLIST, 1), 'UniformOutput', false);
        ARGLISTSTR = strimplode(ARGLISTSTR, [', ...' NEWLINE TABCHAR]);
        
        STR = [STR sprintf('%s = ptc_matlab_lib.PTC_MBDS_Parameter(', ARGS.VariableName) ...
            ARGLISTSTR ');'];
        if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
            STR = [STR NEWLINE 'clear(''' UserDataVarName ''');'];
        end
        
    elseif isa(ARGS.VariableValue, 'ptc_matlab_lib.PTC_MBDS_Signal')
        
        TemplateObj = ptc_matlab_lib.PTC_MBDS_Signal;
        
        if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
            [~, UserDataVarName] = fileparts(tempname);
            STR = [STR feval(thisfuncname, 'VariableName', UserDataVarName, 'VariableValue', ARGS.VariableValue.UserData) NEWLINE];
        end
        
        if isIntEnumType(regexprep(ARGS.VariableValue.DataType, '^(e|E)num:\s*', ''))
            ARGS.VariableValue.Min = [];
            ARGS.VariableValue.Max = [];
        end
        
        ARGLIST = cell(0, 2);
        try
            thisDescriptionStr = strrep(ARGS.VariableValue.Description, '''', '''''');
            evalsafe(['''' thisDescriptionStr ''';']);
            if ~strcmp(TemplateObj.Description, thisDescriptionStr)
                ARGLIST = [ARGLIST; {'Description', ['''' thisDescriptionStr '''']}];
            end
        catch
            thisDescriptionStr = strrep(ARGS.VariableValue.Description, '%', '%%');
            thisDescriptionStr = strrep(thisDescriptionStr, '\', '\\');
            thisDescriptionStr = strrep(thisDescriptionStr, NEWLINE, '\n');
            thisDescriptionStr = strrep(thisDescriptionStr, sprintf('\r'), '\r');
            thisDescriptionStr = strrep(thisDescriptionStr, sprintf('\f'), '\f');
            thisDescriptionStr = strrep(thisDescriptionStr, sprintf('\t'), '\t');
            ARGLIST = {'Description', ['sprintf(''' thisDescriptionStr ''')']};
        end
        try
            thisUnitStr = strrep(ARGS.VariableValue.DocUnits, '''', '''''');
            evalsafe(['''' thisUnitStr ''';']);
            if ~strcmp(TemplateObj.DocUnits, thisUnitStr) %Using DocUnits for compatibility
                ARGLIST = [ARGLIST; {'Unit', ['''' thisUnitStr '''']}];
            end
        catch
            thisUnitStr = strrep(ARGS.VariableValue.DocUnits, '%', '%%');
            thisUnitStr = strrep(thisUnitStr, '\', '\\');
            thisUnitStr = strrep(thisUnitStr, NEWLINE, '\n');
            thisUnitStr = strrep(thisUnitStr, sprintf('\r'), '\r');
            thisUnitStr = strrep(thisUnitStr, sprintf('\f'), '\f');
            thisUnitStr = strrep(thisUnitStr, sprintf('\t'), '\t');
            ARGLIST = [ARGLIST; {'Unit', ['sprintf(''' thisUnitStr ''')']}];
        end
        
        if ~strcmp(TemplateObj.DataType, ARGS.VariableValue.DataType)
            ARGLIST = [ARGLIST; {'DataType', ['''' ARGS.VariableValue.DataType '''']}];
        end
        
        if ~isequal(TemplateObj.Min, ARGS.VariableValue.Min)
            ARGLIST = [ARGLIST; {'Min', num2strfunc(ARGS.VariableValue.Min)}];
        end
        
        if ~isequal(TemplateObj.Max, ARGS.VariableValue.Max)
            ARGLIST = [ARGLIST; {'Max', num2strfunc(ARGS.VariableValue.Max)}];
        end
        
        if ~strcmp(TemplateObj.InitialValue, ARGS.VariableValue.InitialValue)
            ARGLIST = [ARGLIST; {'InitialValue', ['''' ARGS.VariableValue.InitialValue '''']}];
        end
        
        if ~strcmp(TemplateObj.Complexity, ARGS.VariableValue.Complexity)
            ARGLIST = [ARGLIST; {'Complexity', ['''' ARGS.VariableValue.Complexity '''']}];
        end
        
        if any(TemplateObj.Dimensions(:) ~= ARGS.VariableValue.Dimensions(:))
            ARGLIST = [ARGLIST; {'Dimensions', num2strfunc(ARGS.VariableValue.Dimensions)}];
        end
        
        if ~strcmp(TemplateObj.DimensionsMode, ARGS.VariableValue.DimensionsMode)
            ARGLIST = [ARGLIST; {'DimensionsMode', ['''' ARGS.VariableValue.DimensionsMode '''']}];
        end
        
        if ~isequal(TemplateObj.SampleTime, ARGS.VariableValue.SampleTime)
            ARGLIST = [ARGLIST; {'SampleTime', num2strfunc(ARGS.VariableValue.SampleTime)}];
        end
        
        if ~strcmp(TemplateObj.SamplingMode, ARGS.VariableValue.SamplingMode)
            ARGLIST = [ARGLIST; {'SamplingMode', ['''' ARGS.VariableValue.SamplingMode '''']}];
        end
        
        if ~isequal(TemplateObj.CoderInfo, ARGS.VariableValue.CoderInfo)
            if ~strcmp(TemplateObj.CoderInfo.StorageClass, ARGS.VariableValue.CoderInfo.StorageClass)
                ARGLIST = [ARGLIST; {'CoderInfo.StorageClass', ['''' ARGS.VariableValue.CoderInfo.StorageClass '''']}];
            end
            if ~strcmp(TemplateObj.CoderInfo.Alias, ARGS.VariableValue.CoderInfo.Alias)
                ARGLIST = [ARGLIST; {'CoderInfo.Alias', ['''' ARGS.VariableValue.CoderInfo.Alias '''']}];
            end
            if TemplateObj.CoderInfo.Alignment ~= ARGS.VariableValue.CoderInfo.Alignment
                ARGLIST = [ARGLIST; {'CoderInfo.Alignment', num2strfunc(ARGS.VariableValue.CoderInfo.Alignment)}];
            end
            if ~strcmp(TemplateObj.CoderInfo.CustomStorageClass, ARGS.VariableValue.CoderInfo.CustomStorageClass)
                ARGLIST = [ARGLIST; {'CoderInfo.CustomStorageClass', ['''' ARGS.VariableValue.CoderInfo.CustomStorageClass '''']}];
            end
            if ~isequal(TemplateObj.CoderInfo.CustomAttributes, ARGS.VariableValue.CoderInfo.CustomAttributes)
                TemplateObj2 = ptc_matlab_lib.PTC_MBDS_Signal;
                TemplateObj2.CoderInfo.StorageClass = ARGS.VariableValue.CoderInfo.StorageClass;
                TemplateObj2.CoderInfo.CustomStorageClass = ARGS.VariableValue.CoderInfo.CustomStorageClass;
                if isprop(ARGS.VariableValue.CoderInfo.CustomAttributes, 'HeaderFile') && ~strcmp(TemplateObj2.CoderInfo.CustomAttributes.HeaderFile, ARGS.VariableValue.CoderInfo.CustomAttributes.HeaderFile)
                    ARGLIST = [ARGLIST; {'CoderInfo.CustomAttributes.HeaderFile', ['''' ARGS.VariableValue.CoderInfo.CustomAttributes.HeaderFile '''']}];
                end
                if isprop(ARGS.VariableValue.CoderInfo.CustomAttributes, 'DefinitionFile') && ~strcmp(TemplateObj2.CoderInfo.CustomAttributes.DefinitionFile, ARGS.VariableValue.CoderInfo.CustomAttributes.DefinitionFile)
                    ARGLIST = [ARGLIST; {'CoderInfo.CustomAttributes.DefinitionFile', ['''' ARGS.VariableValue.CoderInfo.CustomAttributes.DefinitionFile '''']}];
                end
                if isprop(ARGS.VariableValue.CoderInfo.CustomAttributes, 'Owner') && ~strcmp(TemplateObj2.CoderInfo.CustomAttributes.Owner, ARGS.VariableValue.CoderInfo.CustomAttributes.Owner)
                    ARGLIST = [ARGLIST; {'CoderInfo.CustomAttributes.DefinitionFile.Owner', ['''' ARGS.VariableValue.CoderInfo.CustomAttributes.Owner '''']}];
                end
            end
            if isprop(TemplateObj.CoderInfo, 'TypeQualifier') && ~strcmp(TemplateObj.CoderInfo.TypeQualifier, ARGS.VariableValue.CoderInfo.TypeQualifier)
                ARGLIST = [ARGLIST; {'CoderInfo.TypeQualifier', ['''' ARGS.VariableValue.CoderInfo.TypeQualifier '''']}];
            end
        end
        
        if ~strcmp(TemplateObj.ASAP2_Identifier, ARGS.VariableValue.ASAP2_Identifier)
            ARGLIST = [ARGLIST; {'ASAP2_Identifier', ['''' ARGS.VariableValue.ASAP2_Identifier '''']}];
        end
        
        if ~strcmp(TemplateObj.ASAP2_Precision, ARGS.VariableValue.ASAP2_Precision)
            ARGLIST = [ARGLIST; {'ASAP2_Precision', ['''' ARGS.VariableValue.ASAP2_Precision '''']}];
        end
        
        if TemplateObj.ASAP2_BitMask ~= ARGS.VariableValue.ASAP2_BitMask
            ARGLIST = [ARGLIST; {'ASAP2_BitMask', num2strfunc(ARGS.VariableValue.ASAP2_BitMask)}];
        end
        
        if TemplateObj.ASAP2_BitShift ~= ARGS.VariableValue.ASAP2_BitShift
            ARGLIST = [ARGLIST; {'ASAP2_BitShift', num2strfunc(ARGS.VariableValue.ASAP2_BitShift)}];
        end
        
        if TemplateObj.ASAP2_SignExtend ~= ARGS.VariableValue.ASAP2_SignExtend
            BooleanStr = {'false'; 'true'};
            ARGLIST = [ARGLIST; {'ASAP2_SignExtend', BooleanStr{double(ARGS.VariableValue.ASAP2_SignExtend)+1}}];
        end
        
        if ~strcmp(TemplateObj.ASAP2_Formula, ARGS.VariableValue.ASAP2_Formula)
            ARGLIST = [ARGLIST; {'ASAP2_Formula', ['''' ARGS.VariableValue.ASAP2_Formula '''']}];
        end
        
        if ~strcmp(TemplateObj.ASAP2_FormulaInv, ARGS.VariableValue.ASAP2_FormulaInv)
            ARGLIST = [ARGLIST; {'ASAP2_FormulaInv', ['''' ARGS.VariableValue.ASAP2_Formula '''']}];
        end
        
        if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
            ARGLIST = [ARGLIST; {'UserData', UserDataVarName}];
        end
        
        ARGLIST(:, 1) = strcat('''', ARGLIST(:, 1), '''');
        ARGLISTSTR = arrayfun(@(ROW) ptc_matlab_lib.strimplode(ARGLIST(ROW, :), ', '), 1:size(ARGLIST, 1), 'UniformOutput', false);
        ARGLISTSTR = strimplode(ARGLISTSTR, [', ...' NEWLINE TABCHAR]);
        
        STR = [STR sprintf('%s = ptc_matlab_lib.PTC_MBDS_Signal(', ARGS.VariableName) ...
            ARGLISTSTR ');'];
        if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
            STR = [STR NEWLINE 'clear(''' UserDataVarName ''');'];
        end
        
    elseif isa(ARGS.VariableValue, 'Simulink.Parameter')
        
        TemplateObj = Simulink.Parameter;
        
        STR = [STR sprintf('%s = %s;', ARGS.VariableName, class(ARGS.VariableValue))];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Description', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Description)];
        
        if strcmp(ARGS.VariableValue.DataType, 'boolean')
            thisVariableValue = cast(ARGS.VariableValue.Value, 'logical');
        elseif strcmp(ARGS.VariableValue.DataType, 'auto')
            thisVariableValue = cast(ARGS.VariableValue.Value, 'double');
        elseif ismember(ARGS.VariableValue.DataType, {'int8'; 'uint8'; 'int16'; 'uint16'; 'int32'; 'uint32'; 'int64'; 'uint64'; 'single'; 'double'; 'logical'})
            thisVariableValue = cast(ARGS.VariableValue.Value, ARGS.VariableValue.DataType);
        elseif ~isempty(regexp(ARGS.VariableValue.DataType, 'Enum:\s*(?<EnumeratedDataType>.*)', 'once'))
            thisType = regexp(ARGS.VariableValue.DataType, 'Enum:\s*(?<EnumeratedDataType>.*)', 'names');
            thisType = thisType.EnumeratedDataType;
            thisVariableValue = feval(str2func(thisType), ARGS.VariableValue.Value);
        end
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Value', ARGS.VariableName), 'VariableValue', thisVariableValue)];
        
        STR = [STR NEWLINE sprintf('%s.DataType = ''%s'';', ARGS.VariableName, ARGS.VariableValue.DataType)];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Min', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Min)];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Max', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Max)];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.DocUnits', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.DocUnits)];
        
        if ~isequal(TemplateObj.CoderInfo, ARGS.VariableValue.CoderInfo)
            STR = strtrim([STR feval(thisfuncname, 'VariableName', sprintf('%s.CoderInfo', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.CoderInfo)]);
        end
        
        if isa(ARGS.VariableValue, 'ptc_matlab_lib.PTC_MBDS_Parameter')
            
            TemplateObj = ptc_matlab_lib.PTC_MBDS_Parameter;
            
            if ~strcmp(TemplateObj.ASAP2_Identifier, ARGS.VariableValue.ASAP2_Identifier)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_Identifier', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_Identifier)];
            end
            
            if ~strcmp(TemplateObj.ASAP2_Precision, ARGS.VariableValue.ASAP2_Precision)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_Precision', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_Precision)];
            end
            
            if TemplateObj.ASAP2_BitMask ~= ARGS.VariableValue.ASAP2_BitMask
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_BitMask', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_BitMask)];
            end
            
            if TemplateObj.ASAP2_BitShift ~= ARGS.VariableValue.ASAP2_BitShift
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_BitShift', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_BitShift)];
            end
            
            if TemplateObj.ASAP2_SignExtend ~= ARGS.VariableValue.ASAP2_SignExtend
                BooleanStr = {'false'; 'true'};
                STR = [STR NEWLINE sprintf('%s.ASAP2_SignExtend = %s;', ARGS.VariableName, BooleanStr{double(ARGS.VariableValue.ASAP2_SignExtend)+1})];
            end
            
            STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Axis_Labels', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Axis_Labels)];
            
            if ~strcmp(TemplateObj.ASAP2_Formula, ARGS.VariableValue.ASAP2_Formula)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_Formula', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_Formula)];
            end
            
            if ~strcmp(TemplateObj.ASAP2_FormulaInv, ARGS.VariableValue.ASAP2_FormulaInv)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_FormulaInv', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_FormulaInv)];
            end
            
            if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.UserData', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.UserData)];
            end
            
        end
        
    elseif strcmp(class(ARGS.VariableValue), 'Simulink.CoderInfo') %#ok<STISA>
        
        TemplateObj = Simulink.Parameter;
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.StorageClass', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.StorageClass)];
        
        if ~strcmp(TemplateObj.CoderInfo.Alias, ARGS.VariableValue.Alias)
            STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Alias', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Alias)];
        end
        
        if TemplateObj.CoderInfo.Alignment ~= ARGS.VariableValue.Alignment
            STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Alignment', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Alignment)];
        end
        
        if ~strcmp(TemplateObj.CoderInfo.CustomStorageClass, ARGS.VariableValue.CustomStorageClass)
            STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.CustomStorageClass', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.CustomStorageClass)];
        end
        
        if isprop(TemplateObj.CoderInfo, 'TypeQualifier') && ~strcmp(TemplateObj.CoderInfo.TypeQualifier, ARGS.VariableValue.TypeQualifier)
            STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.TypeQualifier', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.TypeQualifier)];
        end
        
        fields = fieldnames(ARGS.VariableValue);
        fields(ismember(fields, {'StorageClass'; 'Alias'; 'Alignment'; 'CustomStorageClass'; 'TypeQualifier'})) = [];
        STRCELL = cell(numel(fields), 1);
        for ctr = 1:numel(fields)
            STRCELL{ctr} = feval(thisfuncname, 'VariableName', sprintf('%s.%s', ARGS.VariableName, fields{ctr}), 'VariableValue', ARGS.VariableValue.(fields{ctr}));
        end
        STR = strimplode([{STR}; STRCELL], NEWLINE);
        
    elseif strcmp(class(ARGS.VariableValue), 'Simulink.NumericType') %#ok<STISA>
        
        STR = [STR sprintf('%s = %s;', ARGS.VariableName, class(ARGS.VariableValue))];
        
        fields = fieldnames(ARGS.VariableValue);
        STRCELL = cell(numel(fields), 1);
        for ctr = 1:numel(fields)
            STRCELL{ctr} = feval(thisfuncname, 'VariableName', sprintf('%s.%s', ARGS.VariableName, fields{ctr}), 'VariableValue', ARGS.VariableValue.(fields{ctr}));
        end
        STR = strimplode([{STR}; STRCELL], NEWLINE);
        
    elseif isa(ARGS.VariableValue, 'Simulink.Signal')
        
        TemplateObj = Simulink.Signal;
        
        STR = [STR sprintf('%s = %s;', ARGS.VariableName, class(ARGS.VariableValue))];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Description', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Description)];
        
        STR = [STR NEWLINE sprintf('%s.DataType = ''%s'';', ARGS.VariableName, ARGS.VariableValue.DataType)];
        
        if ~strcmp(TemplateObj.Complexity, ARGS.VariableValue.Complexity)
            STR = [STR NEWLINE sprintf('%s.Complexity = ''%s'';', ARGS.VariableName, ARGS.VariableValue.Complexity)];
        end
        
        if any(TemplateObj.Dimensions(:) ~= ARGS.VariableValue.Dimensions(:))
            STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Dimensions', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Dimensions)];
        end
        
        if ~strcmp(TemplateObj.DimensionsMode, ARGS.VariableValue.DimensionsMode)
            STR = [STR NEWLINE sprintf('%s.DimensionsMode = ''%s'';', ARGS.VariableName, ARGS.VariableValue.DimensionsMode)];
        end
        
        if ~isequal(TemplateObj.SampleTime, ARGS.VariableValue.SampleTime)
            STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.SampleTime', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.SampleTime)];
        end
        
        if ~strcmp(TemplateObj.SamplingMode, ARGS.VariableValue.SamplingMode)
            STR = [STR NEWLINE sprintf('%s.SamplingMode = ''%s'';', ARGS.VariableName, ARGS.VariableValue.SamplingMode)];
        end
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Min', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Min)];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.Max', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.Max)];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.InitialValue', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.InitialValue)];
        
        STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.DocUnits', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.DocUnits)];
        
        if ~isequal(TemplateObj.CoderInfo, ARGS.VariableValue.CoderInfo)
            STR = strtrim([STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.CoderInfo', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.CoderInfo)]);
        end
        
        if isa(ARGS.VariableValue, 'ptc_matlab_lib.PTC_MBDS_Signal')
            
            TemplateObj = ptc_matlab_lib.PTC_MBDS_Signal;
            
            if ~strcmp(TemplateObj.ASAP2_Identifier, ARGS.VariableValue.ASAP2_Identifier)
                STR = [STR feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_Identifier', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_Identifier) NEWLINE];
            end
            
            if ~strcmp(TemplateObj.ASAP2_Precision, ARGS.VariableValue.ASAP2_Precision)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_Precision', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_Precision)];
            end
            
            if TemplateObj.ASAP2_BitMask ~= ARGS.VariableValue.ASAP2_BitMask
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_BitMask', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_BitMask)];
            end
            
            if TemplateObj.ASAP2_BitShift ~= ARGS.VariableValue.ASAP2_BitShift
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_BitShift', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_BitShift)];
            end
            
            if TemplateObj.ASAP2_SignExtend ~= ARGS.VariableValue.ASAP2_SignExtend
                BooleanStr = {'false'; 'true'};
                STR = [STR NEWLINE sprintf('%s.ASAP2_SignExtend = %s;', ARGS.VariableName, BooleanStr{double(ARGS.VariableValue.ASAP2_SignExtend)+1})];
            end
            
            if ~strcmp(TemplateObj.ASAP2_Formula, ARGS.VariableValue.ASAP2_Formula)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_Formula', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_Formula)];
            end
            
            if ~strcmp(TemplateObj.ASAP2_FormulaInv, ARGS.VariableValue.ASAP2_FormulaInv)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.ASAP2_FormulaInv', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.ASAP2_FormulaInv)];
            end
            
            if ~isequal(TemplateObj.UserData, ARGS.VariableValue.UserData)
                STR = [STR NEWLINE feval(thisfuncname, 'VariableName', sprintf('%s.UserData', ARGS.VariableName), 'VariableValue', ARGS.VariableValue.UserData)];
            end
            
        end
        
    elseif isa(ARGS.VariableValue, 'Simulink.IntEnumType')
        
        thisClass = class(ARGS.VariableValue);
        STR = [STR sprintf('%s = %s.%s; %% Numeric Value: %d', ARGS.VariableName, thisClass, char(ARGS.VariableValue), uint64(ARGS.VariableValue))];
        
    elseif strcmp(class(ARGS.VariableValue), 'containers.Map') %#ok<STISA>
        
        STR = [STR sprintf('%s = containers.Map(''KeyType'', ''%s'', ''ValueType'', ''%s'');\n', ARGS.VariableName, ARGS.VariableValue.KeyType, ARGS.VariableValue.ValueType)];
        thisKeyList = ARGS.VariableValue.keys;
        thisValueList = ARGS.VariableValue.values;
        EnumStr = cell(ARGS.VariableValue.Count, 1);
        for mapctr = 1 : ARGS.VariableValue.Count
            if isnumeric(thisKeyList{mapctr})
                thisVariableName = sprintf('%s(%s)', ARGS.VariableName, num2strfunc(thisKeyList{mapctr}));
            elseif ischar(thisKeyList{mapctr})
                thisVariableName = sprintf('%s(''%s'')', ARGS.VariableName, thisKeyList{mapctr});
            end
            EnumStr{mapctr, 1} = feval(thisfuncname, 'VariableName', thisVariableName, 'VariableValue', thisValueList{mapctr});
        end
        STR = [STR strimplode(EnumStr, NEWLINE)];
        
    elseif strcmp(class(ARGS.VariableValue), 'ptc_matlab_lib.PTC_MBDS_KIBES_SymbolMap') %#ok<STISA>
        
        var = ['x_' randstring(5)];
        STR = [STR sprintf('%s = %s;', var, cellstr2expr('InputCellArray', [ARGS.VariableValue.KIBES_Symbol_Names ARGS.VariableValue.KIBES_Names]))];
        STR = [STR sprintf('\n%s = ptc_matlab_lib.PTC_MBDS_KIBES_SymbolMap(''KIBES_Symbol_Names'', %s(:, 1), ''KIBES_Names'', %s(:, 2));', ARGS.VariableName, var, var)];
        STR = [STR sprintf('\nclear(''%s'');', var)];
        
    elseif strcmp(class(ARGS.VariableValue), 'datetime') %#ok<STISA>
        
        STR = [STR sprintf('%s = datetime;\n', ARGS.VariableName)];
        STR = [STR sprintf('%s.Format = ''%s'';\n', ARGS.VariableName, ARGS.VariableValue.Format)];
        STR = [STR sprintf('%s.TimeZone = ''%s'';\n', ARGS.VariableName, ARGS.VariableValue.TimeZone)];
        STR = [STR sprintf('%s.Year = %d;\n', ARGS.VariableName, ARGS.VariableValue.Year)];
        STR = [STR sprintf('%s.Month = %d;\n', ARGS.VariableName, ARGS.VariableValue.Month)];
        STR = [STR sprintf('%s.Day = %d;\n', ARGS.VariableName, ARGS.VariableValue.Day)];
        STR = [STR sprintf('%s.Hour = %d;\n', ARGS.VariableName, ARGS.VariableValue.Hour)];
        STR = [STR sprintf('%s.Minute = %d;\n', ARGS.VariableName, ARGS.VariableValue.Minute)];
        STR = [STR sprintf('%s.Second = %f;', ARGS.VariableName, ARGS.VariableValue.Second)];
        
    elseif strcmp(class(ARGS.VariableValue), 'function_handle') %#ok<STISA>
        
        funcstr = func2str(ARGS.VariableValue);
        if funcstr(1) ~= '@'
            funcstr = ['@' funcstr];
        end
        STR = [STR sprintf('%s = %s;', ARGS.VariableName, funcstr)];
        
    elseif isstruct(ARGS.VariableValue)
        
        fields = sort(fieldnames_recursive('Struct', ARGS.VariableValue, 'ShouldExcludeParentFields', true));
        
        %If all fields are numeric in nature, then order them by numeric
        %value instead of fieldname
        if isequal(sort(fields), sort(fieldnames(ARGS.VariableValue)))
            field_values = cell(numel(fields), 1);
            for ctr = 1:numel(fields)
                field_values{ctr} = eval(['ARGS.VariableValue.' fields{ctr} ';']);
            end
            if all(cellfun(@isscalar, field_values))
                field_values = cellfun(@double, field_values);
                [~, indices] = sort(field_values);
                fields = fields(indices);
            end
        end
        
        StructStr = cell(numel(fields), 1);
        for ctr = 1:numel(fields)
            try
                StructStr{ctr, 1} = feval(thisfuncname, 'VariableValue', eval(['ARGS.VariableValue.' fields{ctr}]), ...
                    'VariableName', [ARGS.VariableName '.' fields{ctr}]);
            catch ME
                showerror(ME);
                keyboard;
            end
        end
        STR = [STR strimplode(StructStr, NEWLINE)];
        
    else
        
        try
            STR = [STR feval(thisfuncname, 'VariableName', ARGS.VariableName, 'VariableValue', struct(ARGS.VariableValue))];
        catch ME
            showerror(ME);
            error([mfilename ':' thisfuncname ':InvalidDataType'], ['Invalid data type ' class(ARGS.VariableValue)]);
        end
        
    end
    
elseif isequal(size(ARGS.VariableValue), [0 0]) && isstruct(ARGS.VariableValue)
    
    STR = [STR sprintf('%s = struct([]);', ARGS.VariableName)];
    
else
    
    dims = size(ARGS.VariableValue);
    if prod(dims) ~= 0
        thisStr = cell(numel(ARGS.VariableValue)+1, 1);
        for ctr = 1:numel(ARGS.VariableValue)
            thisStr{ctr, 1} = feval(thisfuncname, 'VariableName', [ARGS.VariableName '(' num2str(ctr) ')'], ...
                'VariableValue', ARGS.VariableValue(ctr));
        end
        thisStr{ctr+1, 1} = [ARGS.VariableName ' = reshape(' ARGS.VariableName ', ' num2expr('InputMatrix', dims) ');'];
        STR = [STR strimplode(thisStr, NEWLINE)];
    elseif any(dims ~= 0)
        zero_index = find(dims == 0);
        assert(numel(zero_index) == 1 || all(dims == 0)); %Only one index should be a zero
        dims_temp = dims;
        dims_temp(zero_index) = 1;
        if ismember(class(ARGS.VariableValue), {'Simulink.Parameter'; 'mpt.Parameter'; 'Simulink.Signal'; 'mpt.Signal'})
            old_index_str = cell(numel(dims_temp), 1);
            new_index_str = cell(numel(dims_temp), 1);
            for ctr = 1:numel(dims_temp)
                old_index_str{ctr} = num2str(dims_temp(ctr));
                if ctr == zero_index
                    new_index_str{ctr} = '1';
                else
                    new_index_str{ctr} = ':';
                end
            end
            old_index_str = strimplode(old_index_str, ', ');
            new_index_str = strimplode(new_index_str, ', ');
            STR = [STR sprintf('%s(%s) = %s;\n', ARGS.VariableName, old_index_str, class(ARGS.VariableValue))];
            STR = [STR sprintf('%s(%s) = [];', ARGS.VariableName, new_index_str)];
        end
    end
    
end

varargout{1} = STR;

end