function varargout = get_spp_label_info(varargin)

import('ptc_matlab_lib.*');
pairs = {'SPPDATA', struct([]), ...
    'A2LDATA', struct([]), ...
    'ShowWaitbar', true, ...
    'A2LTagFilter', {'Characteristics'; 'Axis_Pts'; 'Mod_Common'}, ...
    'WaitbarParams', cell(0, 1), ...
    'SPPSectionNameList', {'SPP'; 'SPP-EMS'}, ...
    'AddressOffset', 0};
ARGS = parseargs(varargin, pairs);

if isempty(ARGS.SPPDATA)
    SPPStruct = get_spp_data();
    if isequal(SPPStruct, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.SPPDATA = SPPStruct.SPPDATA;
end

if isempty(ARGS.A2LDATA)
    ARGS.A2LTagFilter = union(ARGS.A2LTagFilter, 'Mod_Common');
    A2LStruct = get_a2l_data('A2LTagFilter', ARGS.A2LTagFilter);
    if isequal(A2LStruct, 0)
        varargout{1} = 0;
        return;
    end
    ARGS.A2LDATA = A2LStruct.A2LDATA;
end

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...');
end

%Efficiency improvement
SPPDATA = ARGS.SPPDATA;
A2LDATA = ARGS.A2LDATA;
ARGS = rmfield(ARGS, {'SPPDATA'; 'A2LDATA'});

%Validation checks
[tf, loc] = ismember(ARGS.SPPSectionNameList, SPPDATA.SectionNames);
if none(tf)
    varargout{1} = struct([]);
    return;
end
SPPSECTION_IDX = loc(find(loc, 1));
SPP.LabelNames = SPPDATA.SectionData{SPPSECTION_IDX}.LabelNames;
SPP.StoredIntegersHex = SPPDATA.SectionData{SPPSECTION_IDX}.Data;

LABELS = struct('LabelNames', {SPP.LabelNames}, ...
    'LabelDescriptions', {repmat({''}, numel(SPP.LabelNames), 1)}, ...
    'LabelTypes', {repmat({''}, numel(SPP.LabelNames), 1)}, ...
    'DataTypes', {repmat({''}, numel(SPP.LabelNames), 1)}, ...
    'IndexTypes', {repmat({''}, numel(SPP.LabelNames), 1)}, ...
    'Dimensions', {NaN(numel(SPP.LabelNames), 2)}, ...
    'Precisions', {repmat({''}, numel(SPP.LabelNames), 1)}, ...
    'Units', {repmat({''}, numel(SPP.LabelNames), 1)}, ...
    'Formula', {repmat({@(X) X}, numel(SPP.LabelNames), 1)}, ...
    'FormulaInv', {repmat({@(X) X}, numel(SPP.LabelNames), 1)}, ...
    'MinVals', {NaN(numel(SPP.LabelNames), 1)}, ...
    'MaxVals', {NaN(numel(SPP.LabelNames), 1)}, ...
    'Addresses', {NaN(numel(SPP.LabelNames), 1)}, ...
    'ScaleFactors', {NaN(numel(SPP.LabelNames), 1)}, ...
    'Offsets', {NaN(numel(SPP.LabelNames), 1)}, ...
    'StoredIntegers', {repmat({{NaN(0, 1)}}, numel(SPP.LabelNames), 1)}, ...
    'RealWorldValues', {repmat({NaN}, numel(SPP.LabelNames), 1)}, ...
    'Enumerations', {cell(numel(SPP.LabelNames), 1)}, ...
    'EnumerationInfo', {cell(numel(SPP.LabelNames), 1)}, ...
    'RangeDefinitions', {cell(numel(SPP.LabelNames), 1)}, ...
    'AxisLabels', {repmat({cell(0, 1)}, numel(SPP.LabelNames), 1)}, ...
    'ByteOrders', {repmat({''}, numel(SPP.LabelNames), 1)}, ...
    'BitMasks', {intmax('uint64') * ones(numel(SPP.LabelNames), 1, 'uint64')}, ...
    'BitShifts', {NaN(numel(SPP.LabelNames), 1)}, ...
    'SignExtends', {false(numel(SPP.LabelNames), 1)});

A2L.LabelNames = [A2LDATA.Characteristics.LabelNames; A2LDATA.Axis_Pts.LabelNames];
A2L.LabelDescriptions = [A2LDATA.Characteristics.LabelDescriptions; A2LDATA.Axis_Pts.LabelDescriptions];
A2L.LabelTypes = [repmat({'Characteristics'}, numel(A2LDATA.Characteristics.LabelNames), 1); repmat({'Axis_Pts'}, numel(A2LDATA.Axis_Pts.LabelNames), 1)];
A2L.ECUAddresses = [A2LDATA.Characteristics.ECUAddresses; A2LDATA.Axis_Pts.ECUAddresses];
A2L.DataTypes = [A2LDATA.Characteristics.DataTypes; A2LDATA.Axis_Pts.DataTypes];
A2L.IndexTypes = [A2LDATA.Characteristics.IndexTypes; A2LDATA.Axis_Pts.IndexTypes];
A2L.Dimensions = [A2LDATA.Characteristics.Dimensions; A2LDATA.Axis_Pts.Dimensions];
A2L.Precisions = [A2LDATA.Characteristics.Precisions; A2LDATA.Axis_Pts.Precisions];
A2L.Units = [A2LDATA.Characteristics.Units; A2LDATA.Axis_Pts.Units];
A2L.Formula = [A2LDATA.Characteristics.Formula; A2LDATA.Axis_Pts.Formula];
A2L.Formula_Inv = [A2LDATA.Characteristics.Formula_Inv; A2LDATA.Axis_Pts.Formula_Inv];
A2L.MinValues = [A2LDATA.Characteristics.MinValues; A2LDATA.Axis_Pts.MinValues];
A2L.MaxValues = [A2LDATA.Characteristics.MaxValues; A2LDATA.Axis_Pts.MaxValues];
A2L.Coeffs = [A2LDATA.Characteristics.Coeffs; A2LDATA.Axis_Pts.Coeffs];
assert(none(A2L.Coeffs(:, 1)) && none(A2L.Coeffs(:, 4)) && none(A2L.Coeffs(:, 5)) && all(A2L.Coeffs(:, 2)) && all(A2L.Coeffs(:, 6)), ...
    [mfilename ':' thisfuncname ':InvalidConversionFactors'], 'Nonlinear scaling coefficients encountered');
A2L.Enumerations = [A2LDATA.Characteristics.Enumerations; A2LDATA.Axis_Pts.Enumerations];
A2L.EnumerationInfo = [A2LDATA.Characteristics.EnumerationInfo; A2LDATA.Axis_Pts.EnumerationInfo];
A2L.RangeDefinitions = [A2LDATA.Characteristics.RangeDefinitions; A2LDATA.Axis_Pts.RangeDefinitions];
A2L.ByteOrders = [A2LDATA.Characteristics.ByteOrders; A2LDATA.Axis_Pts.ByteOrders];
A2L.BitMasks = [A2LDATA.Characteristics.BitMasks; A2LDATA.Axis_Pts.BitMasks];
A2L.LeftShifts = [A2LDATA.Characteristics.LeftShifts; A2LDATA.Axis_Pts.LeftShifts];
A2L.RightShifts = [A2LDATA.Characteristics.RightShifts; A2LDATA.Axis_Pts.RightShifts];
A2L.SignExtends = [A2LDATA.Characteristics.SignExtends; A2LDATA.Axis_Pts.SignExtends];
A2L.AxisLabels = [A2LDATA.Characteristics.AxisLabels; repmat({cell(0, 1)}, numel(A2LDATA.Axis_Pts.LabelNames), 1)];

[tf, loc] = ismember(LABELS.LabelNames, A2L.LabelNames); loc = nonzeros(loc);
LABELS.LabelDescriptions(tf) = A2L.LabelDescriptions(loc);
LABELS.LabelTypes(tf) = A2L.LabelTypes(loc);
LABELS.DataTypes(tf) = A2L.DataTypes(loc);
LABELS.IndexTypes(tf) = A2L.IndexTypes(loc);
LABELS.Dimensions(tf, :) = A2L.Dimensions(loc, :);
LABELS.Precisions(tf) = A2L.Precisions(loc);
LABELS.Units(tf) = A2L.Units(loc);
LABELS.Formula(tf) = A2L.Formula(loc);
LABELS.FormulaInv(tf) = A2L.Formula_Inv(loc);
LABELS.MinVals(tf) = A2L.MinValues(loc);
LABELS.MaxVals(tf) = A2L.MaxValues(loc);
LABELS.Addresses(tf) = A2L.ECUAddresses(loc) + ARGS.AddressOffset;
LABELS.ScaleFactors(tf) = A2L.Coeffs(loc, 6) ./ A2L.Coeffs(loc, 2);
LABELS.Offsets(tf) = -A2L.Coeffs(loc, 3) ./ A2L.Coeffs(loc, 2);
LABELS.Enumerations(tf) = A2L.Enumerations(loc);
LABELS.EnumerationInfo(tf) = A2L.EnumerationInfo(loc);
LABELS.RangeDefinitions(tf) = A2L.RangeDefinitions(loc);
LABELS.AxisLabels(tf) = A2L.AxisLabels(loc);
LABELS.ByteOrders(tf) = A2L.ByteOrders(loc);
LABELS.BitMasks(tf) = A2L.BitMasks(loc);
LABELS.BitShifts(tf) = A2L.LeftShifts(loc) - A2L.RightShifts(loc);
LABELS.SignExtends(tf) = A2L.SignExtends(tf);

%Update SPP structure to have only valid information
SPP = structfun(@(X) X(tf), SPP, 'UniformOutput', false);

%Check to ensure that every label's dimensions match the dimensions
%specified in the A2L file
SPP.NumElements = cellfun(@numel, SPP.StoredIntegersHex);
valid_indices = (SPP.NumElements == prod(A2L.Dimensions(loc, :), 2));
SPP = structfun(@(X) X(valid_indices), SPP, 'UniformOutput', false);
[~, loc] = ismember(SPP.LabelNames, A2L.LabelNames);

%Check to ensure that the label's stored integer values conform to the
%datatypes specified in the A2L file
SPP.StoredIntegersMax = cellfun(@(X) max(hex2dec(X)), SPP.StoredIntegersHex);
temp = A2L.DataTypes(loc);
SPP.MaxDTVals_SI = NaN(numel(SPP.StoredIntegersMax), 1);
SPP.MaxDTVals_SI(ismember(temp, {'SBYTE'; 'UBYTE'})) = intmax('uint8');
SPP.MaxDTVals_SI(ismember(temp, {'SWORD'; 'UWORD'})) = intmax('uint16');
SPP.MaxDTVals_SI(ismember(temp, {'SLONG'; 'ULONG'; 'FLOAT32_IEEE'})) = intmax('uint32');
SPP.MaxDTVals_SI(ismember(temp, {'A_INT64'; 'A_UINT64'; 'FLOAT64_IEEE'})) = intmax('uint64');
valid_indices = (SPP.StoredIntegersMax <= SPP.MaxDTVals_SI);
%loc = find(ismember(A2L.LabelNames, SPP.LabelNames(valid_indices)));
SPP = structfun(@(X) X(valid_indices), SPP, 'UniformOutput', false);

[tf, loc] = ismember(LABELS.LabelNames, SPP.LabelNames); loc = nonzeros(loc);
LABELS.StoredIntegers(tf) = arrayfun(@(X, M, N) reshape(X{1}, M, N), SPP.StoredIntegersHex(loc), LABELS.Dimensions(tf, 1), LABELS.Dimensions(tf, 2), 'UniformOutput', false);

for ctr = rowvec(find(tf))
    LABELS.RealWorldValues{ctr} = storedinteger2realvalue('StoredIntegerHex', LABELS.StoredIntegers{ctr}, ...
        'DataType', LABELS.DataTypes{ctr}, ...
        'ScaleFactor', LABELS.ScaleFactors(ctr), ...
        'Offset', LABELS.Offsets(ctr), ...
        'ByteOrder', LABELS.ByteOrders{ctr}, ...
        'BitMask', LABELS.BitMasks(ctr), ...
        'BitShift', LABELS.BitShifts(ctr), ...
        'SignExtend', LABELS.SignExtends(ctr), ...
        'FORMULA', LABELS.Formula{ctr});
end

varargout{1} = LABELS;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(1.0);
    delete(waitbar_hndl);
end

end