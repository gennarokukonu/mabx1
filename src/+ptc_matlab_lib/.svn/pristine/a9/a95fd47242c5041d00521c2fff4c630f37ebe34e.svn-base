function varargout = realvalue2storedinteger(varargin)
% REALVALUE2STOREDINTEGER Convert a real number to a stored integer
% hexadecimal value.
%   This function converts a real number (or a real matrix) to a stored
%   integer hexadecimal value (or a cell array of values)
%
%   SYNTAX:
%   [Numeric, Hex] = REALVALUE2STOREDINTEGER('RealValue', [], ...
%                           'ScaleFactor', 1, ...
%                           'Offset', 0, ...
%                           'ByteOrder', 'MSB_FIRST', ...
%                           'BitMask', intmax('uint64'), ...
%                           'FORMULA_INV', @(X) X, ...
%                           'DataType', {})
%
%   'RealValue': Default value: []. Matrix of real values to be converted.
%   Can be a scalar as well.
%
%   'ScaleFactor': Default value: 1. Scale factor to be applied according
%   to the formula V = SQ + B where Q is the raw stored integer, S is the
%   scale factor, B is the offset, and V is the real value. This can be a
%   scalar, or a matrix with the same size as RealValue.
%
%   'Offset': Default value: 0. Offset to be applied according to the
%   formula V = SQ + B where Q is the raw stored integer, S is the scale
%   factor, B is the offset, and V is the real value. This can be a scalar,
%   or a matrix with the same size as RealValue.
%
%   'ByteOrder': Default value: 'MSB_FIRST'. Optionally can be set to
%   'MSB_LAST' for little endian systems.
%
%   'BitMask': Default value: intmax('uint64'). Always applied to the
%   stored integer value.
%
%   'FORMULA_INV': Default value: @(X) X. Function handle that applies a
%   non-linear formula to the stored integer
%
%   'DataType': Cell array of strings, with the same size as
%   RealValue, or a single string. This can be one of the following
%   'logical', 'boolean',
%   'UBYTE', 'uint8',
%   'SBYTE', 'int8',
%   'UWORD', 'uint16',
%   'SWORD', 'int16',
%   'ULONG', 'uint32',
%   'SLONG', 'int32',
%   'A_UINT64', 'uint64',
%   'A_INT64', 'int64',
%   'FLOAT32_IEEE', 'single',
%   'FLOAT64_IEEE', 'double'
%
%   RETURN VALUE:
%   Numeric - Numeric value of the raw stored integer. This could be a
%   matrix.
%
%   Hex - Hex value of the raw stored integer. This is a cell array of
%   strings.
%
%   See also: storedinteger2realvalue

import('ptc_matlab_lib.*');
pairs = {'RealValue', [], ...
    'ScaleFactor', 1, ...
    'Offset', 0, ...
    'DataType', cell(0, 1), ...
    'ByteOrder', 'MSB_FIRST', ...
    'BitMask', intmax('uint64'), ...
    'BitShift', int8(0), ... %%Positive implies shift left, negative implies shift right
    'SignExtend', false, ...
    'FORMULA_INV', '@(X)X'}; %Can be a char or a function_handle
ARGS = parseargs(varargin, pairs);

ARGS.RealValue = double(ARGS.RealValue);
if isscalar(ARGS.ScaleFactor)
    ARGS.ScaleFactor = ARGS.ScaleFactor * ones(size(ARGS.RealValue));
end
if isscalar(ARGS.Offset)
    ARGS.Offset = ARGS.Offset * ones(size(ARGS.RealValue));
end
ARGS.DataType = cellstr(ARGS.DataType);
if numel(ARGS.DataType) == 1
    ARGS.DataType = repmat(ARGS.DataType, size(ARGS.RealValue));
end
ARGS.ByteOrder = cellstr(ARGS.ByteOrder);
if numel(ARGS.ByteOrder) == 1
    ARGS.ByteOrder = repmat(ARGS.ByteOrder, size(ARGS.RealValue));
end
if ~iscell(ARGS.FORMULA_INV)
    ARGS.FORMULA_INV = {ARGS.FORMULA_INV};
end
if numel(ARGS.ByteOrder) == 1
    ARGS.ByteOrder = repmat(ARGS.ByteOrder, size(ARGS.RealValue));
end
if numel(ARGS.FORMULA_INV) == 1
    ARGS.FORMULA_INV = repmat(ARGS.FORMULA_INV, size(ARGS.RealValue));
end
if numel(ARGS.BitMask) == 1
    ARGS.BitMask = uint64(ARGS.BitMask) * ones(size(ARGS.RealValue), 'uint64');
end
if numel(ARGS.BitShift) == 1
    ARGS.BitShift = int8(ARGS.BitShift) * ones(size(ARGS.RealValue), 'int8');
end
if numel(ARGS.SignExtend) == 1
    ARGS.SignExtend = ARGS.SignExtend .* true(size(ARGS.RealValue)); %Why does MATLAB R2016a insist on an elementwise operation here?
end

assert(isequal(size(ARGS.RealValue), size(ARGS.ScaleFactor), size(ARGS.Offset), size(ARGS.DataType), size(ARGS.ByteOrder), size(ARGS.FORMULA_INV), size(ARGS.BitMask), size(ARGS.BitShift), size(ARGS.SignExtend)));
varargout = cell(numel(nargout), 1);

dimensions = size(ARGS.RealValue);

ARGS.RealValue = double(ARGS.RealValue(:));
ARGS.ScaleFactor = double(ARGS.ScaleFactor(:));
ARGS.Offset = double(ARGS.Offset(:));
ARGS.DataType = ARGS.DataType(:);
ARGS.ByteOrder = ARGS.ByteOrder(:);
ARGS.FORMULA_INV = ARGS.FORMULA_INV(:);
ARGS.BitMask = ARGS.BitMask(:);
ARGS.BitShift = ARGS.BitShift(:);
ARGS.SignExtend = ARGS.SignExtend(:);

ARGS.DataType(strcmp('ufix1', ARGS.DataType)) = {'boolean'};
ARGS.DataType(strcmp('ufix8', ARGS.DataType)) = {'UBYTE'};
ARGS.DataType(strcmp('ufix16', ARGS.DataType)) = {'UWORD'};
ARGS.DataType(strcmp('ufix32', ARGS.DataType)) = {'ULONG'};
ARGS.DataType(strcmp('ufix64', ARGS.DataType)) = {'A_UINT64'};
ARGS.DataType(strcmp('sfix8', ARGS.DataType)) = {'SBYTE'};
ARGS.DataType(strcmp('sfix16', ARGS.DataType)) = {'SWORD'};
ARGS.DataType(strcmp('sfix32', ARGS.DataType)) = {'SLONG'};
ARGS.DataType(strcmp('sfix64', ARGS.DataType)) = {'A_INT64'};

MatlabDataTypes = ARGS.DataType;
MatlabDataTypes(strcmp('boolean', ARGS.DataType)) = {'logical'};
MatlabDataTypes(strcmp('SBYTE', ARGS.DataType)) = {'int8'};
MatlabDataTypes(strcmp('SWORD', ARGS.DataType)) = {'int16'};
MatlabDataTypes(strcmp('SLONG', ARGS.DataType)) = {'int32'};
MatlabDataTypes(strcmp('A_INT64', ARGS.DataType)) = {'int64'};
MatlabDataTypes(strcmp('UBYTE', ARGS.DataType)) = {'uint8'};
MatlabDataTypes(strcmp('UWORD', ARGS.DataType)) = {'uint16'};
MatlabDataTypes(strcmp('ULONG', ARGS.DataType)) = {'uint32'};
MatlabDataTypes(strcmp('A_UINT64', ARGS.DataType)) = {'uint64'};
MatlabDataTypes(strcmp('FLOAT32_IEEE', ARGS.DataType)) = {'single'};
MatlabDataTypes(strcmp('FLOAT64_IEEE', ARGS.DataType)) = {'double'};

FLOAT32_IEEE_indices = strcmp('single', MatlabDataTypes);
FLOAT64_IEEE_indices = strcmp('double', MatlabDataTypes);
UBYTE_indices = strcmp('uint8', MatlabDataTypes);
SBYTE_indices = strcmp('int8', MatlabDataTypes);
UWORD_indices = strcmp('uint16', MatlabDataTypes);
SWORD_indices = strcmp('int16', MatlabDataTypes);
ULONG_indices = strcmp('uint32', MatlabDataTypes);
SLONG_indices = strcmp('int32', MatlabDataTypes);
A_UINT64_indices = strcmp('uint64', MatlabDataTypes);
A_INT64_indices = strcmp('int64', MatlabDataTypes);
logical_indices = strcmp('logical', MatlabDataTypes);

BitLengthList = get_num_bits(ARGS.DataType);
UFIX_indices = ~cellfun(@isempty, regexp(ARGS.DataType, 'ufix\d+'));
SFIX_indices = ~cellfun(@isempty, regexp(ARGS.DataType, 'sfix\d+'));

MSB_LAST_indices = ismember(ARGS.ByteOrder, {'MSB_LAST'; 'LSB_FIRST'; 'LITTLE_ENDIAN'; 'INTEL'});

if ~iscellstr(ARGS.FORMULA_INV)
    ARGS.FORMULA_INV = cellfun(@char, ARGS.FORMULA_INV, 'UniformOutput', false);
end
idx = ~strcmp('@(X)X', ARGS.FORMULA_INV);
if any(idx)
    ARGS.FORMULA_INV(idx) = cellfun(@str2func, ARGS.FORMULA_INV(idx), 'UniformOutput', false);
    ARGS.RealValue(idx) = arrayfun(@(X, Y) feval(X{1}, Y), ARGS.FORMULA_INV(idx), ARGS.RealValue(idx));
end

StoredValueNumericIntermediate = (ARGS.RealValue - ARGS.Offset) ./ (ARGS.ScaleFactor);

StoredValueNumeric = intmax('uint64')*ones(numel(ARGS.RealValue), 1, 'uint64');
if any(FLOAT32_IEEE_indices)
    StoredValueNumeric(FLOAT32_IEEE_indices) = hex2dec2(num2hex(single(StoredValueNumericIntermediate(FLOAT32_IEEE_indices))));
end
if any(FLOAT64_IEEE_indices)
    StoredValueNumeric(FLOAT64_IEEE_indices) = hex2dec2(num2hex(StoredValueNumericIntermediate(FLOAT64_IEEE_indices)));
end

if any(UBYTE_indices)
    StoredValueNumeric(UBYTE_indices) = double(uint8(StoredValueNumericIntermediate(UBYTE_indices)));
end
if any(UWORD_indices)
    StoredValueNumeric(UWORD_indices) = double(uint16(StoredValueNumericIntermediate(UWORD_indices)));
end
if any(ULONG_indices)
    StoredValueNumeric(ULONG_indices) = double(uint32(StoredValueNumericIntermediate(ULONG_indices)));
end
if any(A_UINT64_indices)
    StoredValueNumeric(A_UINT64_indices) = double(uint64(StoredValueNumericIntermediate(A_UINT64_indices)));
end
if any(logical_indices)
    StoredValueNumeric(logical_indices) = double(logical(StoredValueNumericIntermediate(logical_indices)));
end

if any(SBYTE_indices)
    StoredValueNumeric(SBYTE_indices) = double(typecast(int8(StoredValueNumericIntermediate(SBYTE_indices)), 'uint8'));
end
if any(SWORD_indices)
    StoredValueNumeric(SWORD_indices) = double(typecast(int16(StoredValueNumericIntermediate(SWORD_indices)), 'uint16'));
end
if any(SLONG_indices)
    StoredValueNumeric(SLONG_indices) = double(typecast(int32(StoredValueNumericIntermediate(SLONG_indices)), 'uint32'));
end
if any(A_INT64_indices)
    StoredValueNumeric(A_INT64_indices) = double(typecast(int64(StoredValueNumericIntermediate(A_INT64_indices)), 'uint64'));
end

if any(UFIX_indices)
    StoredValueNumeric(UFIX_indices) = min(max(StoredValueNumericIntermediate(UFIX_indices), 0), 2.^BitLengthList(UFIX_indices) - 1);
end
if any(SFIX_indices)
    x = zeros(size(StoredValueNumeric));
    x(SFIX_indices) = min(max(StoredValueNumericIntermediate(SFIX_indices), -2.^(BitLengthList(SFIX_indices) - 1)), 2.^(BitLengthList(SFIX_indices) - 1) - 1);
    indices = (x < 0) & SFIX_indices;
    x(indices) = x(indices) + 2.^BitLengthList(indices); %Two's complement inverse
    StoredValueNumeric(SFIX_indices) = x;
end

BitShift_indices = (ARGS.BitShift ~= 0);
if any(BitShift_indices)
    StoredValueNumeric(BitShift_indices) = arrayfun(@(W, X, Y, Z) ptc_matlab_lib.bitshift2('InputStoredInteger', W, 'ShiftValue', X, 'AssumedType', Y{1}, 'SignExtend', Z), StoredValueNumeric(BitShift_indices), -ARGS.BitShift(BitShift_indices), MatlabDataTypes(BitShift_indices), ARGS.SignExtend(BitShift_indices));
end
StoredValueNumeric = bitand(StoredValueNumeric, uint64(ARGS.BitMask), 'uint64');

StoredValueHex = cell(size(StoredValueNumeric));

if any(FLOAT32_IEEE_indices)
    StoredValueHex(FLOAT32_IEEE_indices) = strtrim(cellstr(num2hex(single(StoredValueNumericIntermediate(FLOAT32_IEEE_indices)))));
end
if any(FLOAT64_IEEE_indices)
    StoredValueHex(FLOAT64_IEEE_indices) = strtrim(cellstr(num2hex(StoredValueNumericIntermediate(FLOAT64_IEEE_indices))));
end
if any(logical_indices)
    StoredValueHex(logical_indices) = cellstr(dec2hex2(StoredValueNumeric(logical_indices), 1));
end
if any(UBYTE_indices | BitLengthList <= 7)
    StoredValueHex(UBYTE_indices | BitLengthList <= 7) = cellstr(dec2hex2(StoredValueNumeric(UBYTE_indices | BitLengthList <= 7), 2));
end
if any(SBYTE_indices | BitLengthList <= 7)
    StoredValueHex(SBYTE_indices | BitLengthList <= 7) = cellstr(dec2hex2(StoredValueNumeric(SBYTE_indices | BitLengthList <= 7), 2));
end
if any(UWORD_indices | (BitLengthList >= 9 & BitLengthList <= 15))
    StoredValueHex(UWORD_indices | (BitLengthList >= 9 & BitLengthList <= 15)) = cellstr(dec2hex2(StoredValueNumeric(UWORD_indices | (BitLengthList >= 9 & BitLengthList <= 15)), 4));
end
if any(SWORD_indices | (BitLengthList >= 9 & BitLengthList <= 15))
    StoredValueHex(SWORD_indices | (BitLengthList >= 9 & BitLengthList <= 15)) = cellstr(dec2hex2(StoredValueNumeric(SWORD_indices | (BitLengthList >= 9 & BitLengthList <= 15)), 4));
end
if any(ULONG_indices | (BitLengthList >= 17 & BitLengthList <= 31))
    StoredValueHex(ULONG_indices | (BitLengthList >= 17 & BitLengthList <= 31)) = cellstr(dec2hex2(StoredValueNumeric(ULONG_indices | (BitLengthList >= 17 & BitLengthList <= 31)), 8));
end
if any(SLONG_indices | (BitLengthList >= 17 & BitLengthList <= 31))
    StoredValueHex(SLONG_indices | (BitLengthList >= 17 & BitLengthList <= 31)) = cellstr(dec2hex2(StoredValueNumeric(SLONG_indices | (BitLengthList >= 17 & BitLengthList <= 31)), 8));
end
if any(A_UINT64_indices | (BitLengthList >= 33 & BitLengthList <= 63))
    StoredValueHex(A_UINT64_indices | (BitLengthList >= 33 & BitLengthList <= 63)) = cellstr(dec2hex2(StoredValueNumeric(A_UINT64_indices | (BitLengthList >= 33 & BitLengthList <= 63)), 16));
end
if any(A_INT64_indices | (BitLengthList >= 33 & BitLengthList <= 63))
    StoredValueHex(A_INT64_indices | (BitLengthList >= 33 & BitLengthList <= 63)) = cellstr(dec2hex2(StoredValueNumeric(A_INT64_indices | (BitLengthList >= 33 & BitLengthList <= 63)), 16));
end

if any(MSB_LAST_indices)
    StoredValueHex(MSB_LAST_indices) = ChangeEndianness('StoredIntegerHex', StoredValueHex(MSB_LAST_indices), ...
        'DataType', ARGS.DataType(MSB_LAST_indices), ...
        'EndiannessIn', 'MSB_FIRST', ...
        'EndiannessOut', 'MSB_LAST');
end

if nargout >= 2
    varargout{2} = reshape(upper(StoredValueHex), dimensions);
end

StoredValueNumeric(MSB_LAST_indices) = hex2dec2(StoredValueHex(MSB_LAST_indices));

varargout{1} = reshape(StoredValueNumeric, dimensions);

end