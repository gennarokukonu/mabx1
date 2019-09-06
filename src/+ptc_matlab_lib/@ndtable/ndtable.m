classdef ndtable
    %CLASS ndtable: Class to represent N-dimensional lookup tables
    properties (SetAccess = protected)
        Axes;
        AxisLabels;
        AxisUnits;
        Value;
        ValueLabel;
        ValueUnit;
        Min;
        Max;
    end
    
    methods
        function obj = ndtable(varargin)
            import('ptc_matlab_lib.*');
            pairs = {'Axes', {}, ...
                'AxisLabels', {}, ...
                'AxisUnits', {}, ...
                'Value', [], ...
                'ValueLabel', '', ...
                'ValueUnit', '', ...
                'Min', -Inf, ...
                'Max', Inf};
            parseargs(varargin, pairs);
            
            if ~iscell(Axes)
                Axes = {Axes};
            end
            Axes = cellfun(@(X) X(:), Axes, 'UniformOutput', false); Axes = Axes(:);
            AxisLabels = cellstr(AxisLabels); AxisLabels = AxisLabels(:);
            AxisUnits = cellstr(AxisUnits); AxisUnits = AxisUnits(:);
            
            if numel(Axes) == 0
                assert(isequal(Value, []), [mfilename ':' thisfuncname ':InvalidValue']);
                assert(isempty(AxisLabels), [mfilename ':' thisfuncname ':InvalidAxisLabels']);
                assert(isempty(AxisUnits), [mfilename ':' thisfuncname ':InvalidAxisUnits']);
            elseif numel(Axes) == 1
                assert(isvector(Value) && isnumeric(Value), [mfilename ':' thisfuncname ':InvalidValue']);
                assert(numel(AxisLabels) == 1, [mfilename ':' thisfuncname ':InvalidAxisLabels']);
                assert(numel(AxisUnits) == 1, [mfilename ':' thisfuncname ':InvalidAxisUnits']);
                assert(all(diff(Axes{1}) > 0), [mfilename ':' thisfuncname ':AxesMustBeMonotonicallyIncreasing']);
                assert(all(imag(Axes{1}) == 0), [mfilename ':' thisfuncname ':AxesMustBeReal']);
            elseif numel(Axes) >= 2
                assert(ndims(Value) == numel(Axes) && ...
                    isequal(columnvec(size(Value)), cellfun(@numel, Axes(:))), ...
                    [mfilename ':' thisfuncname ':InvalidValue']);
                assert(numel(Axes) == numel(AxisLabels), [mfilename ':' thisfuncname ':InvalidAxisLabels']);
                assert(numel(Axes) == numel(AxisUnits), [mfilename ':' thisfuncname, ':InvalidAxisUnits']);
                cellfun(@(X) assert(all(diff(X) > 0), [mfilename ':' ptc_matlab_lib.thisfuncname ':AxesMustBeMonotonicallyIncreasing']), Axes);
                cellfun(@(X) assert(all(imag(X) == 0), [mfilename ':' ptc_matlab_lib.thisfuncname ':AxesMustBeReal']), Axes);
            end
            
            obj.Axes = Axes;
            obj.AxisLabels = AxisLabels;
            obj.AxisUnits = AxisUnits;
            obj.Value = limit('InMatrix', Value, 'UpperLimit', Max, 'LowerLimit', Min);
            obj.ValueLabel = ValueLabel;
            obj.ValueUnit = ValueUnit;
            obj.Max = Max;
            obj.Min = Min;
        end
        
        function obj = setprop(obj, varargin)
            import('ptc_matlab_lib.*');
            pairs = {'Axes', obj.Axes, ...
                'AxisLabels', obj.AxisLabels, ...
                'AxisUnits', obj.AxisUnits, ...
                'Value', obj.Value, ...
                'ValueLabel', obj.ValueLabel, ...
                'ValueUnit', obj.ValueUnit};
            parseargs(varargin, pairs);
            
            obj = ndtable('Axes', Axes, ...
                'AxisLabels', AxisLabels, ...
                'AxisUnits', AxisUnits, ...
                'Value', Value, ...
                'ValueLabel', ValueLabel, ...
                'ValueUnit', ValueUnit);
        end
    end
end