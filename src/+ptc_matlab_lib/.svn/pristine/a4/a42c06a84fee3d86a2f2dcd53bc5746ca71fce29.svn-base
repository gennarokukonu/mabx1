classdef PTC_MBDS_Signal < Simulink.Signal
    %PTC_MBDS_Signal Class inherited from Simulink.Signal
    %   SYNTAX:
    %   obj = ptc_matlab_lib.PTC_MBDS_Signal - Basic declaration of
    %   ptc_matlab_lib.PTC_MBDS_Signal object
    %
    %   obj = ptc_matlab_lib.PTC_MBDS_Signal(<Property1>, <Value1>,
    %   <Property2>, <Value2>
    %
    %   obj = ptc_matlab_lib.PTC_MBDS_Signal(<initialobj>, <Property1>,
    %   <Value1>, <Property2>, <Value2>)
    %
    %   Properties:
    %       - ASAP2_Identifier: If the identifier generated in the A2L file
    %       needs to be overridden for any reason, this is the field to
    %       assign it in ('' by default, results in no override)
    %       - ASAP2_BitMask: BitMask applied to stored integer to be
    %       exported to A2L file (intmax('uint32') by default)
    %       - ASAP2_BitShift: Bitshift applied to stored integer (negative
    %       for right shift, positive for left shift, int8(0) by default)
    %       - ASAP2_SignExtend: Sign extension flag, boolean
    %       - ASAP2_Precision: String defining ASAP2 precision ('1.5' by
    %       default)
    %       - ASAP2_Formula: Char representing function handle for
    %       conversion formula ('@(X)X' by default)
    %       - ASAP2_FormulaInv: Char representing function handle for
    %       conversion formula inverse ('@(X)X' by default)
    %       - UserData (Could be anything, recommendation is to use a
    %       scalar structure (struct([]) by default)
    %
    %       See Simulink.Signal documentation for the remaining
    %       properties
    %       - Value
    %       - Description
    %       - DataType
    %       - Min
    %       - Max
    %       - Unit (or DocUnits) (recommendation: only use units derived
    %       from the Simulink Unit Database)
    %       - Dimensions
    %       - DimensionsMode
    %       - Complexity
    %       - SampleTime
    %       - SamplingMode
    %       - InitialValue
    %       - CoderInfo.StorageClass ('ExportedGlobal' by default)
    %       - CoderInfo.CustomStorageClass
    %       - CoderInfo.TypeQualifier
    %       - CoderInfo.CustomAttributes.HeaderFile
    %       - CoderInfo.CustomAttributes.DefinitionFile
    %       - CoderInfo.CustomAttributes.Owner
    %       - CoderInfo.CustomAttributes.ConcurrentAccess
    %
    %   Author: Sundeep.Tuteja@PACCAR.com
    
    properties
        ASAP2_Formula;
        ASAP2_FormulaInv;
        ASAP2_Identifier;
        ASAP2_Precision;
        ASAP2_BitMask;
        ASAP2_BitShift;
        ASAP2_SignExtend;
        UserData;
    end
    
    methods
        function obj = PTC_MBDS_Signal(varargin)
            if nargin == 0
                obj.Complexity = 'real';
                obj.DimensionsMode = 'Fixed';
                obj.SamplingMode = 'Sample Based';
                obj.CoderInfo.StorageClass = 'ExportedGlobal';
                obj.ASAP2_Formula = '@(X)X';
                obj.ASAP2_FormulaInv = '@(X)X';
                obj.ASAP2_Identifier = '';
                obj.ASAP2_Precision = '1.5';
                obj.ASAP2_BitMask = intmax('uint32');
                obj.ASAP2_BitShift = int8(0);
                obj.ASAP2_SignExtend = false;
                obj.UserData = struct([]);
            elseif nargin >= 1
                if isa(varargin{1}, 'Simulink.Signal')
                    if isa(varargin{1}, 'ptc_matlab_lib.PTC_MBDS_Signal')
                        obj = varargin{1}.copy;
                    else
                        obj.CoderInfo = varargin{1}.CoderInfo.copy;
                        obj.Description = varargin{1}.Description;
                        obj.DataType = varargin{1}.DataType;
                        obj.Min = varargin{1}.Min;
                        obj.Max = varargin{1}.Max;
                        obj.DocUnits = varargin{1}.DocUnits;
                        obj.Dimensions = varargin{1}.Dimensions;
                        obj.DimensionsMode = varargin{1}.DimensionsMode;
                        obj.Complexity = varargin{1}.Complexity;
                        obj.SampleTime = varargin{1}.SampleTime;
                        obj.SamplingMode = varargin{1}.SamplingMode;
                        obj.InitialValue = varargin{1}.InitialValue;
                        
                        obj.ASAP2_Formula = '@(X)X';
                        obj.ASAP2_FormulaInv = '@(X)X';
                        obj.ASAP2_Identifier = '';
                        obj.ASAP2_Precision = '1.5';
                        obj.ASAP2_BitMask = intmax('uint32');
                        obj.ASAP2_BitShift = int8(0);
                        obj.ASAP2_SignExtend = false;
                        obj.UserData = struct([]);
                    end
                    varargin(1) = [];
                else
                    obj = ptc_matlab_lib.PTC_MBDS_Signal;
                end
                if mod(numel(varargin), 2) ~= 0 || (~isempty(varargin) && any(~cellfun(@ischar, varargin(1:2:end))))
                    error([mfilename ':' ptc_matlab_lib.thisfuncname ':InvalidPropertyValuePairs'], 'Invalid property/value pairs have been specified.');
                end
                if isprop(obj.CoderInfo.CustomAttributes, 'HeaderFile')
                    thisCoderInfo.CustomAttributes.HeaderFile = obj.CoderInfo.CustomAttributes.HeaderFile;
                else
                    thisCoderInfo.CustomAttributes.HeaderFile = '';
                end
                if isprop(obj.CoderInfo.CustomAttributes, 'DefinitionFile')
                    thisCoderInfo.CustomAttributes.DefinitionFile = obj.CoderInfo.CustomAttributes.DefinitionFile;
                else
                    thisCoderInfo.CustomAttributes.DefinitionFile = '';
                end
                if isprop(obj.CoderInfo.CustomAttributes, 'Owner')
                    thisCoderInfo.CustomAttributes.Owner = obj.CoderInfo.CustomAttributes.Owner;
                else
                    thisCoderInfo.CustomAttributes.Owner = '';
                end
                if isprop(obj.CoderInfo.CustomAttributes, 'ConcurrentAccess')
                    thisCoderInfo.CustomAttributes.ConcurrentAccess = obj.CoderInfo.CustomAttributes.ConcurrentAccess;
                else
                    thisCoderInfo.CustomAttributes.ConcurrentAccess = false;
                end
                if isprop(obj.CoderInfo, 'TypeQualifier')
                    thisCoderInfo.TypeQualifier = obj.CoderInfo.TypeQualifier;
                else
                    thisCoderInfo.TypeQualifier = '';
                end
                pairs = {'CoderInfo.StorageClass', obj.CoderInfo.StorageClass, ...
                    'CoderInfo.CustomStorageClass', obj.CoderInfo.CustomStorageClass, ...
                    'CoderInfo.CustomAttributes.HeaderFile', thisCoderInfo.CustomAttributes.HeaderFile, ...
                    'CoderInfo.CustomAttributes.DefinitionFile', thisCoderInfo.CustomAttributes.DefinitionFile, ...
                    'CoderInfo.CustomAttributes.Owner', thisCoderInfo.CustomAttributes.Owner, ...
                    'CoderInfo.CustomAttributes.ConcurrentAccess', thisCoderInfo.CustomAttributes.ConcurrentAccess, ...
                    'CoderInfo.TypeQualifier', thisCoderInfo.TypeQualifier, ...
                    'CoderInfo.Alias', obj.CoderInfo.Alias, ...
                    'CoderInfo.Alignment', obj.CoderInfo.Alignment, ...
                    'Description', obj.Description, ...
                    'DataType', obj.DataType, ...
                    'Min', obj.Min, ...
                    'Max', obj.Max, ...
                    'DocUnits', obj.DocUnits, ...
                    'Dimensions', obj.Dimensions, ...
                    'DimensionsMode', obj.DimensionsMode, ...
                    'Complexity', obj.Complexity, ...
                    'SampleTime', obj.SampleTime, ...
                    'SamplingMode', obj.SamplingMode, ...
                    'InitialValue', obj.InitialValue, ...
                    'ASAP2_Formula', obj.ASAP2_Formula, ...
                    'ASAP2_FormulaInv', obj.ASAP2_FormulaInv, ...
                    'ASAP2_Identifier', obj.ASAP2_Identifier, ...
                    'ASAP2_Precision', obj.ASAP2_Precision, ...
                    'ASAP2_BitMask', obj.ASAP2_BitMask, ...
                    'ASAP2_BitShift', obj.ASAP2_BitShift, ...
                    'ASAP2_SignExtend', obj.ASAP2_SignExtend, ...
                    'UserData', obj.UserData};
                varargin(1:2:end) = regexprep(varargin(1:2:end), '^\<Unit\>$', 'DocUnits');
                VALS = ptc_matlab_lib.parseargs(varargin, pairs);
                if ptc_matlab_lib.isIntEnumType(VALS.DataType)
                    VALS.DataType = ['Enum: ' strtrim(VALS.DataType)];
                end
                if ~isprop(obj, 'Unit') && isfield(VALS, 'Unit')
                    VALS = rmfield(VALS, 'Unit');
                end
                fields = ptc_matlab_lib.fieldnames_recursive('Struct', VALS);
                fields = setdiff(fields, {'CoderInfo'; 'CoderInfo.CustomAttributes'});
                %Reordering to prevent inconsistent fields, as objects
                %require setting items in a certain order
                fields_first_order = {'CoderInfo.StorageClass'; 'CoderInfo.CustomStorageClass'};
                fields = union(fields_first_order, fields, 'stable');
                for thisField = fields(:).'
                    try %#ok<TRYNC>
                        eval(['obj.' thisField{1} ' = VALS.' thisField{1} ';']);
                    end
                end
            end
            
            dtstr = regexprep(obj.DataType, '^(e|E)num:\s*', '');
            if strcmpi(dtstr, 'logical')
                dtstr = 'boolean';
            end            
            if ptc_matlab_lib.isIntEnumType(dtstr)
                obj.DataType = ['Enum: ' dtstr];
                obj.Min = [];
                obj.Max = [];
            else
                obj.DataType = dtstr;
                obj.Min = double(obj.Min);
                obj.Max = double(obj.Max);
            end            
            obj.ASAP2_SignExtend = logical(obj.ASAP2_SignExtend);
            obj.ASAP2_BitMask = uint32(obj.ASAP2_BitMask);
            obj.ASAP2_BitShift = int8(obj.ASAP2_BitShift);
        end
        
        function out = getSimulinkSignal(obj)
            out = Simulink.Signal;
            out.CoderInfo = obj.CoderInfo.copy;
            out.Description = obj.Description;
            out.DataType = obj.DataType;
            out.Min = obj.Min;
            out.Max = obj.Max;
            out.DocUnits = obj.DocUnits;
            out.Dimensions = obj.Dimensions;
            out.DimensionsMode = obj.DimensionsMode;
            out.Complexity = obj.Complexity;
            out.SampleTime = obj.SampleTime;
            out.SamplingMode = obj.SamplingMode;
            out.InitialValue = obj.InitialValue;
        end
        
        function setUserData(obj, varargin)
            if mod(numel(varargin), 2) ~= 0 || isempty(varargin) || any(~cellfun(@isvarname, varargin(1:2:end)))
                error([mfilename ':' ptc_matlab_lib.thisfuncname ':InvalidPropertyValuePairs'], 'Invalid property/value pairs have been specified.');
            end
            obj.UserData = ptc_matlab_lib.parseargs(varargin);
        end
        
        function out = getRaptorCalFormat(obj)
            try
                x = regexp(obj.ASAP2_Precision, '\.(?<DecimalPlaces>\d+)', 'once', 'names');
                if isnan(str2double(x.DecimalPlaces))
                    out = '-1';
                else
                    out = x.DecimalPlaces;
                end
            catch
                out = '-1';
            end
        end
    end
    
end

