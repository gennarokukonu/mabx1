function varargout = get_srec_label_info(varargin)

import('ptc_matlab_lib.*');
pairs = {'LabelName', cell(0, 1), ...
    'A2LDATA', struct([]), ...
    'SRECDATA', struct([]), ...
    'ShowWaitbar', true, ...
    'A2LTagFilter', {'Characteristics'; 'Axis_Pts'; 'Measurements'}, ...
    'WaitbarParams', {}, ...
    'AddressOffset', uint64(0), ...
    'FillerByteHex', 'FF'};
ARGS = parseargs(varargin, pairs);

if isempty(ARGS.A2LDATA)
    ARGS.A2LTagFilter = union(ARGS.A2LTagFilter, 'Mod_Common');
    A2LStruct = get_a2l_data('A2LTagFilter', ARGS.A2LTagFilter);
    if isequal(A2LStruct, 0)
        varargout{1} = [];
        return;
    end
    ARGS.A2LDATA = A2LStruct.A2LDATA;
end

if isempty(ARGS.SRECDATA)
    SRECStruct = get_srec_data;
    if isequal(SRECStruct, 0)
        varargout{1} = [];
        return;
    end
    ARGS.SRECDATA = SRECStruct.SRECDATA;
end

%Efficiency improvement
A2LDATA = ARGS.A2LDATA;
SRECDATA = ARGS.SRECDATA;
ARGS = rmfield(ARGS, {'A2LDATA'; 'SRECDATA'});

FIELDS_unique = setdiff(unique(cellstr(ARGS.A2LTagFilter)), 'Mod_Common');
FIELDS_unique = FIELDS_unique(isfield(A2LDATA, FIELDS_unique));
if isempty(FIELDS_unique)
    varargout{1} = [];
    return;
end

A2L.LabelNames = cellfun(@(X) A2LDATA.(X).LabelNames, FIELDS_unique, 'UniformOutput', false); A2L.LabelNames = cat(1, A2L.LabelNames{:});
ARGS.LabelName = cellstr(ARGS.LabelName);
%ARGS.LabelName MUST ALWAYS BE A COLUMN VECTOR
ARGS.LabelName = ARGS.LabelName(:);
if isempty(ARGS.LabelName)
    sorted_a2l_labels = sort(A2L.LabelNames);
    [selection, ok] = listdlg('ListString', sorted_a2l_labels, 'SelectionMode', 'multiple', 'PromptString', 'Select A2L Labels:');
    if ~ok
        %Cancel was pressed
        varargout{1} = [];
        return;
    end
    ARGS.LabelName = sorted_a2l_labels(selection);
elseif isequal(ARGS.LabelName, {'*'})
    ARGS.LabelName = sort(A2L.LabelNames);
end

FIELD = cell(numel(ARGS.LabelName), 1);
for ctr = 1:numel(FIELDS_unique)
    if isfield(A2LDATA, FIELDS_unique{ctr})
        FIELD(ismember(ARGS.LabelName, A2LDATA.(FIELDS_unique{ctr}).LabelNames)) = FIELDS_unique(ctr);
    end
end

LABEL = struct('LabelNames', {ARGS.LabelName}, ...
    'LabelDescriptions', {repmat({''}, numel(ARGS.LabelName), 1)}, ...
    'LabelTypes', {repmat({''}, numel(ARGS.LabelName), 1)}, ...
    'DataTypes', {repmat({''}, numel(ARGS.LabelName), 1)}, ...
    'IndexTypes', {repmat({''}, numel(ARGS.LabelName), 1)}, ...
    'Dimensions', {NaN(numel(ARGS.LabelName), 2)}, ...
    'Precisions', {repmat({''}, numel(ARGS.LabelName), 1)}, ...
    'Units', {repmat({''}, numel(ARGS.LabelName), 1)}, ...
    'Formula', {repmat({@(X) X}, numel(ARGS.LabelName), 1)}, ...
    'FormulaInv', {repmat({@(X) X}, numel(ARGS.LabelName), 1)}, ...
    'MinVals', {NaN(numel(ARGS.LabelName), 1)}, ...
    'MaxVals', {NaN(numel(ARGS.LabelName), 1)}, ...
    'Addresses', {intmax('uint64') * ones(numel(ARGS.LabelName), 1, 'uint64')}, ...
    'ScaleFactors', {NaN(numel(ARGS.LabelName), 1)}, ...
    'Offsets', {NaN(numel(ARGS.LabelName), 1)}, ...
    'StoredIntegers', {repmat({{[]}}, numel(ARGS.LabelName), 1)}, ...
    'RealWorldValues', {repmat({NaN}, numel(ARGS.LabelName), 1)}, ...
    'Enumerations', {cell(numel(ARGS.LabelName), 1)}, ...
    'EnumerationInfo', {cell(numel(ARGS.LabelName), 1)}, ...
    'RangeDefinitions', {cell(numel(ARGS.LabelName), 1)}, ...
    'AxisLabels', {repmat({cell(0, 1)}, numel(ARGS.LabelName), 1)}, ...
    'ByteOrders', {repmat({''}, numel(ARGS.LabelName), 1)}, ...
    'BitMasks', {intmax('uint64') * ones(numel(ARGS.LabelName), 1, 'uint64')}, ...
    'BitShifts', {NaN(numel(ARGS.LabelName), 1)}, ...
    'SignExtends', {false(numel(ARGS.LabelName), 1)});

logical_indices = cellfun(@isempty, FIELD(:));

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Fetching label information, please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

A2L.LabelDescriptions = cellfun(@(X) A2LDATA.(X).LabelDescriptions, FIELDS_unique, 'UniformOutput', false); A2L.LabelDescriptions = cat(1, A2L.LabelDescriptions{:});
A2L.DataTypes = cellfun(@(X) A2LDATA.(X).DataTypes, FIELDS_unique, 'UniformOutput', false); A2L.DataTypes = cat(1, A2L.DataTypes{:});
A2L.IndexTypes = cellfun(@(X) A2LDATA.(X).IndexTypes, FIELDS_unique, 'UniformOutput', false); A2L.IndexTypes = cat(1, A2L.IndexTypes{:});

A2L.Coeffs = cellfun(@(X) A2LDATA.(X).Coeffs, FIELDS_unique, 'UniformOutput', false); A2L.Coeffs = cat(1, A2L.Coeffs{:});
if ~(none(A2L.Coeffs(:, 1)) && none(A2L.Coeffs(:, 4)) && none(A2L.Coeffs(:, 5)) && all(A2L.Coeffs(:, 2)) && all(A2L.Coeffs(:, 6)))
    error([mfilename ':' thisfuncname ':InvalidConversionFactors'], 'Nonlinear scaling coefficients encountered.');
end

A2L.Dimensions = cellfun(@(X) A2LDATA.(X).Dimensions, FIELDS_unique, 'UniformOutput', false); A2L.Dimensions = cat(1, A2L.Dimensions{:});
A2L.Precisions = cellfun(@(X) A2LDATA.(X).Precisions, FIELDS_unique, 'UniformOutput', false); A2L.Precisions = cat(1, A2L.Precisions{:});
A2L.Units = cellfun(@(X) A2LDATA.(X).Units, FIELDS_unique, 'UniformOutput', false); A2L.Units = cat(1, A2L.Units{:});
A2L.Formula = cellfun(@(X) A2LDATA.(X).Formula, FIELDS_unique, 'UniformOutput', false); A2L.Formula = cat(1, A2L.Formula{:});
A2L.FormulaInv = cellfun(@(X) A2LDATA.(X).Formula_Inv, FIELDS_unique, 'UniformOutput', false); A2L.FormulaInv = cat(1, A2L.FormulaInv{:});
A2L.ECUAddresses = cellfun(@(X) A2LDATA.(X).ECUAddresses, FIELDS_unique, 'UniformOutput', false); A2L.ECUAddresses = cat(1, A2L.ECUAddresses{:});
A2L.ECUAddresses = A2L.ECUAddresses + ARGS.AddressOffset;
A2L.MinValues = cellfun(@(X) A2LDATA.(X).MinValues, FIELDS_unique, 'UniformOutput', false); A2L.MinValues = cat(1, A2L.MinValues{:});
A2L.MaxValues = cellfun(@(X) A2LDATA.(X).MaxValues, FIELDS_unique, 'UniformOutput', false); A2L.MaxValues = cat(1, A2L.MaxValues{:});
A2L.Enumerations = cellfun(@(X) A2LDATA.(X).Enumerations, FIELDS_unique, 'UniformOutput', false); A2L.Enumerations = cat(1, A2L.Enumerations{:});
A2L.EnumerationInfo = cellfun(@(X) A2LDATA.(X).EnumerationInfo, FIELDS_unique, 'UniformOutput', false); A2L.EnumerationInfo = cat(1, A2L.EnumerationInfo{:});
A2L.RangeDefinitions = cellfun(@(X) A2LDATA.(X).RangeDefinitions, FIELDS_unique, 'UniformOutput', false); A2L.RangeDefinitions = cat(1, A2L.RangeDefinitions{:});
A2L.ByteOrders = cellfun(@(X) A2LDATA.(X).ByteOrders, FIELDS_unique, 'UniformOutput', false); A2L.ByteOrders = cat(1, A2L.ByteOrders{:});
A2L.BitMasks = cellfun(@(X) A2LDATA.(X).BitMasks, FIELDS_unique, 'UniformOutput', false); A2L.BitMasks = cat(1, A2L.BitMasks{:});
A2L.LeftShifts = cellfun(@(X) A2LDATA.(X).LeftShifts, FIELDS_unique, 'UniformOutput', false); A2L.LeftShifts = cat(1, A2L.LeftShifts{:});
A2L.RightShifts = cellfun(@(X) A2LDATA.(X).RightShifts, FIELDS_unique, 'UniformOutput', false); A2L.RightShifts = cat(1, A2L.RightShifts{:});
A2L.SignExtends = cellfun(@(X) A2LDATA.(X).SignExtends, FIELDS_unique, 'UniformOutput', false); A2L.SignExtends = cat(1, A2L.SignExtends{:});
A2L.AxisLabels = repmat({cell(0, 1)}, numel(A2L.LabelDescriptions), 1);
if ismember('Characteristics', FIELDS_unique)
    [tf, loc] = ismember(A2LDATA.Characteristics.LabelNames, A2L.LabelNames);
    if any(tf)
        A2L.AxisLabels(nonzeros(loc)) = A2LDATA.Characteristics.AxisLabels(tf);
    end
end

[tf, loc] = ismember(ARGS.LabelName, A2L.LabelNames);
if any(tf)
    loc = nonzeros(loc);
    LABEL.LabelNames(tf) = A2L.LabelNames(loc);
    LABEL.LabelDescriptions(tf) = A2L.LabelDescriptions(loc);
    LABEL.LabelTypes(tf) = FIELD(~logical_indices);
    LABEL.DataTypes(tf) = A2L.DataTypes(loc);
    LABEL.IndexTypes(tf) = A2L.IndexTypes(loc);
    LABEL.Dimensions(tf, :) = A2L.Dimensions(loc, :);
    LABEL.Precisions(tf) = A2L.Precisions(loc, :);
    LABEL.Units(tf) = A2L.Units(loc, :);
    LABEL.Formula(tf) = A2L.Formula(loc, :);
    LABEL.FormulaInv(tf) = A2L.FormulaInv(loc, :);
    LABEL.MinVals(tf) = A2L.MinValues(loc);
    LABEL.MaxVals(tf) = A2L.MaxValues(loc);
    LABEL.Addresses(tf) = A2L.ECUAddresses(loc);
    LABEL.ScaleFactors(tf) = A2L.Coeffs(loc, 6) ./ A2L.Coeffs(loc, 2);
    LABEL.Offsets(tf) = -A2L.Coeffs(loc, 3) ./ A2L.Coeffs(loc, 2);
    LABEL.Enumerations(tf) = A2L.Enumerations(loc);
    LABEL.EnumerationInfo(tf) = A2L.EnumerationInfo(loc);
    LABEL.RangeDefinitions(tf) = A2L.RangeDefinitions(loc);
    LABEL.ByteOrders(tf) = A2L.ByteOrders(loc);
    LABEL.BitMasks(tf) = A2L.BitMasks(loc);
    LABEL.BitShifts(tf) = A2L.LeftShifts(loc) - A2L.RightShifts(loc);
    LABEL.SignExtends(tf) = A2L.SignExtends(loc);
    LABEL.AxisLabels(tf) = A2L.AxisLabels(loc);
    
    NumBits = NaN(numel(LABEL.LabelNames), 1);
    NumBits(ismember(LABEL.DataTypes, {'SBYTE', 'UBYTE'})) = 8;
    NumBits(ismember(LABEL.DataTypes, {'SWORD', 'UWORD'})) = 16;
    NumBits(ismember(LABEL.DataTypes, {'SLONG', 'ULONG', 'FLOAT32_IEEE'})) = 32;
    NumBits(ismember(LABEL.DataTypes, {'A_INT64', 'A_UINT64', 'FLOAT64_IEEE'})) = 64;
    
    NumBytes = round(NumBits/8);
    LABEL.StoredIntegers(tf) = arrayfun(@(W, X, Y) repmat({repmat(ARGS.FillerByteHex, 1, W)}, X, Y), NumBytes(tf), LABEL.Dimensions(tf, 1), LABEL.Dimensions(tf, 2), 'UniformOutput', false);
    
    Chunks = cell(numel(tf), 1);
    for idx = rowvec(find(tf))
        Chunks{idx} = repmat(ARGS.FillerByteHex, 1, prod(LABEL.Dimensions(idx, :), 2)*NumBytes(idx));
        RegionIdx = find(SRECDATA.SREC_DATA_SEQUENCE.AddressList <= LABEL.Addresses(idx), 1, 'last');
        if ~isempty(RegionIdx)
            Offset = LABEL.Addresses(idx) - SRECDATA.SREC_DATA_SEQUENCE.AddressList(RegionIdx);
            switch LABEL.IndexTypes{idx}
                case {'COLUMN_DIR', 'ROW_DIR', 'INDEX_INCR', 'INDEX_DECR'}
                    try %#ok<TRYNC>
                        Chunks{idx}(1:2*prod(LABEL.Dimensions(idx, :), 2)*NumBytes(idx)) = SRECDATA.SREC_DATA_SEQUENCE.DataList{RegionIdx}(2*Offset + 1 : 2*Offset + 2*prod(LABEL.Dimensions(idx, :), 2)*NumBytes(idx));
                    end
                    %{
                case 'INDEX_DECR'
                    try %#ok<TRYNC>
                        Chunks{idx}(1:2*prod(LABEL.Dimensions(idx, :), 2)*NumBytes(idx)) = SRECDATA.SREC_DATA_SEQUENCE.DataList{RegionIdx}(2*Offset + 1 - 2*prod(LABEL.Dimensions(idx, :), 2)*NumBytes(idx) : 2*Offset + 2);
                    end
                    %}
            end
            if prod(LABEL.Dimensions(idx, :) == 1)
                LABEL.StoredIntegers{idx} = Chunks(idx);
            else
                switch LABEL.IndexTypes{idx}
                    case {'COLUMN_DIR', 'INDEX_INCR'}
                        LABEL.StoredIntegers{idx} = cellstr(reshape(Chunks{idx}, 2*NumBytes(idx), []).');
                        LABEL.StoredIntegers{idx} = reshape(LABEL.StoredIntegers{idx}, LABEL.Dimensions(idx, :));
                    case {'ROW_DIR', 'INDEX_DECR'}
                        LABEL.StoredIntegers{idx} = cellstr(reshape(Chunks{idx}, 2*NumBytes(idx), []).');
                        LABEL.StoredIntegers{idx} = reshape(LABEL.StoredIntegers{idx}, fliplr(LABEL.Dimensions(idx, :))).';
                end
            end
        end
    end
    
    tempDimensions = LABEL.Dimensions(tf, :);
    tempDimensions(isnan(tempDimensions)) = 1;
    NumElements = prod(tempDimensions, 2);
    
    StoredIntegerList = cellfun(@(X) X(:), LABEL.StoredIntegers(tf), 'UniformOutput', false);
    ByteOrderList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.ByteOrders(tf), NumElements, 'UniformOutput', false);
    BitMaskList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.BitMasks(tf), NumElements, 'UniformOutput', false);
    BitShiftList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.BitShifts(tf), NumElements, 'UniformOutput', false);
    SignExtendList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.SignExtends(tf), NumElements, 'UniformOutput', false);
    ScaleFactorList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.ScaleFactors(tf), NumElements, 'UniformOutput', false);
    OffsetList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.Offsets(tf), NumElements, 'UniformOutput', false);
    DataTypeList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.DataTypes(tf), NumElements, 'UniformOutput', false);
    FormulaList = arrayfun(@(X, Y) repmat(X, Y, 1), LABEL.Formula(tf), NumElements, 'UniformOutput', false);
    StoredIntegerList = cat(1, StoredIntegerList{:});
    ByteOrderList = cat(1, ByteOrderList{:});
    BitMaskList = cat(1, BitMaskList{:});
    BitShiftList = cat(1, BitShiftList{:});
    SignExtendList = cat(1, SignExtendList{:});
    ScaleFactorList = cat(1, ScaleFactorList{:});
    OffsetList = cat(1, OffsetList{:});
    DataTypeList = cat(1, DataTypeList{:});
    FormulaList = cat(1, FormulaList{:});
    
    RealWorldValueList = NaN(size(StoredIntegerList));
    logical_indices = ~cellfun(@isempty, StoredIntegerList);
    RealWorldValueList(logical_indices) = storedinteger2realvalue('StoredIntegerHex', StoredIntegerList(logical_indices), ...
        'ScaleFactor', ScaleFactorList(logical_indices), ...
        'ByteOrder', ByteOrderList(logical_indices), ...
        'Offset', OffsetList(logical_indices), ...
        'DataType', DataTypeList(logical_indices), ...
        'BitMask', BitMaskList(logical_indices), ...
        'BitShift', BitShiftList(logical_indices), ...
        'SignExtend', SignExtendList(logical_indices), ...
        'FORMULA', FormulaList(logical_indices));
    
    LABEL.RealWorldValues(tf) = arrayfun(@(X, Y, M, N) reshape(RealWorldValueList(X:X+Y-1), M, N), ...
        cumsum([1; prod(tempDimensions(1:end-1, :), 2)]), prod(tempDimensions, 2), ...
        tempDimensions(:, 1), tempDimensions(:, 2), ...
        'UniformOutput', false);
end

varargout{1} = LABEL;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds']);
    pause(0.5);
    delete(waitbar_hndl);
end

end