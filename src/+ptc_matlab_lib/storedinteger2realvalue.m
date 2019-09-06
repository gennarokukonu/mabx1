function varargout = storedinteger2realvalue(varargin)
% STOREDINTEGER2REALVALUE Convert a stored integer hexadecimal value to a
% real number.
%   This function converts a stored integer hexadecimal value (or a cell
%   array of stored integer hexadecimal values) to the corresponding real
%   value (or matrix of values).
%
%   SYNTAX:
%   out = STOREDINTEGER2REALVALUE('StoredIntegerHex', {}, ...
%                           'ScaleFactor', 1, ...
%                           'Offset', 0, ...
%                           'ByteOrder', 'MSB_FIRST', ...
%                           'BitMask', intmax('uint64'), ...
%                           'FORMULA', @(X) X, ...
%                           'DataType', {})
%
%   'StoredIntegerHex': Default value: {}. Cell array of strings containing
%   the raw hexadecimal values. This can be a single string as well.
%
%   'ScaleFactor': Default value: 1. Scale factor to be applied according
%   to the formula V = SQ + B where Q is the raw stored integer, S is the
%   scale factor, B is the offset, and V is the real value. This can be a
%   scalar, or a matrix with the same size as StoredIntegerHex.
%
%   'Offset': Default value: 0. Offset to be applied according to the
%   formula V = SQ + B where Q is the raw stored integer, S is the scale
%   factor, B is the offset, and V is the real value. This can be a scalar,
%   or a matrix with the same size as StoredIntegerHex.
%
%   'ByteOrder': Default value: 'MSB_FIRST'. Optionally can be changed to
%   'MSB_LAST' for little endian systems.
%
%   'BitMask': Default value: intmax('uint64'). Always applied to the
%   stored integer value
%
%   'FORMULA': Default value: @(X) X. Function handle that applies a
%   non-linear formula to the stored integer.
%
%   'DataType': Cell array of strings, with the same size as
%   StoredIntegerHex, or a single string. This can be one of the following
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
%   out - Returns the real value, which could be a matrix of values
%
%   See also: realvalue2storedinteger

import('ptc_matlab_lib.*');
pairs = {'StoredIntegerHex', cell(0, 1), ...
    'ScaleFactor', 1, ...
    'Offset', 0, ...
    'BitShift', int8(0), ... %Positive implies shift left, negative implies shift right
    'SignExtend', false, ...
    'ByteOrder', 'MSB_FIRST', ...
    'DataType', cell(0, 1), ...
    'BitMask', intmax('uint64'), ...
    'FORMULA', '@(X)X'}; %Can be a char or a function_handle
ARGS = parseargs(varargin, pairs);

ARGS.StoredIntegerHex = cellstr(ARGS.StoredIntegerHex);
ARGS.ByteOrder = cellstr(ARGS.ByteOrder);
ARGS.DataType = cellstr(ARGS.DataType);
if isscalar(ARGS.ScaleFactor)
    ARGS.ScaleFactor = ARGS.ScaleFactor * ones(size(ARGS.StoredIntegerHex));
end
if isscalar(ARGS.Offset)
    ARGS.Offset = ARGS.Offset * ones(size(ARGS.StoredIntegerHex));
end
if numel(ARGS.ByteOrder) == 1
    ARGS.ByteOrder = repmat(ARGS.ByteOrder, size(ARGS.StoredIntegerHex));
end
if numel(ARGS.DataType) == 1
    ARGS.DataType = repmat(ARGS.DataType, size(ARGS.StoredIntegerHex));
end
if ~iscell(ARGS.FORMULA)
    ARGS.FORMULA = {ARGS.FORMULA};
end
if numel(ARGS.FORMULA) == 1
    ARGS.FORMULA = repmat(ARGS.FORMULA, size(ARGS.StoredIntegerHex));
end
if numel(ARGS.BitMask) == 1
    ARGS.BitMask = uint64(ARGS.BitMask) * ones(size(ARGS.StoredIntegerHex), 'uint64');
end
if numel(ARGS.BitShift) == 1
    ARGS.BitShift = int8(ARGS.BitShift) * ones(size(ARGS.StoredIntegerHex), 'int8');
end
if numel(ARGS.SignExtend) == 1
    ARGS.SignExtend = ARGS.SignExtend .* true(size(ARGS.StoredIntegerHex)); %Why does MATLAB R2016a insist on an elementwise operation here?
end

assert(isequal(size(ARGS.StoredIntegerHex), size(ARGS.ScaleFactor), size(ARGS.Offset), size(ARGS.ByteOrder), size(ARGS.DataType), size(ARGS.FORMULA), size(ARGS.BitMask), size(ARGS.BitShift), size(ARGS.SignExtend)));

dimensions = size(ARGS.StoredIntegerHex);
ARGS.StoredIntegerHex = ARGS.StoredIntegerHex(:);
ARGS.ByteOrder = ARGS.ByteOrder(:);
ARGS.ScaleFactor = double(ARGS.ScaleFactor(:));
ARGS.Offset = double(ARGS.Offset(:));
ARGS.DataType = ARGS.DataType(:);
ARGS.FORMULA = ARGS.FORMULA(:);
ARGS.BitMask = ARGS.BitMask(:);
ARGS.BitShift = ARGS.BitShift(:);
ARGS.SignExtend = ARGS.SignExtend(:);

%At this stage, all arguments are column vectors

ARGS.DataType(strcmp('ufix1', ARGS.DataType)) = {'boolean'};
ARGS.DataType(strcmp('ufix8', ARGS.DataType)) = {'UBYTE'};
ARGS.DataType(strcmp('ufix16', ARGS.DataType)) = {'UWORD'};
ARGS.DataType(strcmp('ufix32', ARGS.DataType)) = {'ULONG'};
ARGS.DataType(strcmp('sfix8', ARGS.DataType)) = {'SBYTE'};
ARGS.DataType(strcmp('sfix16', ARGS.DataType)) = {'SWORD'};
ARGS.DataType(strcmp('sfix32', ARGS.DataType)) = {'SLONG'};

FLOAT32_IEEE_indices = ismember(ARGS.DataType, {'FLOAT32_IEEE'; 'single'});
FLOAT64_IEEE_indices = ismember(ARGS.DataType, {'FLOAT64_IEEE'; 'double'});
UNSIGNED_indices = ismember(ARGS.DataType, {'UBYTE'; 'UWORD'; 'ULONG'; 'A_UINT64'; 'logical'; 'boolean'; 'uint8'; 'uint16'; 'uint32'; 'uint64'});
SIGNED_indices = ismember(ARGS.DataType, {'SBYTE'; 'SWORD'; 'SLONG'; 'A_INT64'; 'int8'; 'int16'; 'int32'; 'int64'});
BitLengthList = get_num_bits(ARGS.DataType);

UFIX_indices = ~cellfun(@isempty, regexp(ARGS.DataType, 'ufix\d+'));
SFIX_indices = ~cellfun(@isempty, regexp(ARGS.DataType, 'sfix\d+'));

MSB_LAST_indices = ismember(ARGS.ByteOrder, {'MSB_LAST'; 'LSB_FIRST'; 'LITTLE_ENDIAN'; 'INTEL'});

RealValue = NaN(size(ARGS.StoredIntegerHex));

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

if any(MSB_LAST_indices)
    ARGS.StoredIntegerHex(MSB_LAST_indices) = ChangeEndianness('StoredIntegerHex', ARGS.StoredIntegerHex(MSB_LAST_indices), ...
        'DataType', ARGS.DataType(MSB_LAST_indices), ...
        'EndiannessIn', 'MSB_LAST', ...
        'EndiannessOut', 'MSB_FIRST');
end

IdealBitMasks = uint64(2.^BitLengthList - 1);
ARGS.BitMask = bitand(uint64(ARGS.BitMask), IdealBitMasks, 'uint64');
StoredIntegerDecimal = hex2dec2(ARGS.StoredIntegerHex);
StoredIntegerDecimal = bitand(StoredIntegerDecimal, uint64(ARGS.BitMask), 'uint64');
idx = (ARGS.BitShift(:) ~= 0);
if any(idx)
    StoredIntegerDecimal(idx) = arrayfun(@(W, X, Y, Z) ptc_matlab_lib.bitshift2('InputStoredInteger', W, 'ShiftValue', X, 'AssumedType', Y{1}, 'SignExtend', Z), StoredIntegerDecimal(idx), ARGS.BitShift(idx), MatlabDataTypes(idx), ARGS.SignExtend(idx));
end
ARGS.StoredIntegerHex = strtrim(cellstr(dec2hex2(StoredIntegerDecimal)));

if ~iscellstr(ARGS.FORMULA)
    ARGS.FORMULA = cellfun(@char, ARGS.FORMULA, 'UniformOutput', false);
end
idx = ~strcmp('@(X)X', ARGS.FORMULA);
if any(idx)
    ARGS.FORMULA(idx) = cellfun(@str2func, ARGS.FORMULA(idx), 'UniformOutput', false);
    ARGS.StoredIntegerHex(idx) = cellstr2(dec2hex2(arrayfun(@(X, Y) feval(X{1}, Y), ARGS.FORMULA(idx), StoredIntegerDecimal(idx)), 16));
end

if any(FLOAT32_IEEE_indices)
    RealValue(FLOAT32_IEEE_indices) = hexsingle2num(ARGS.StoredIntegerHex(FLOAT32_IEEE_indices)) .* ARGS.ScaleFactor(FLOAT32_IEEE_indices) + ARGS.Offset(FLOAT32_IEEE_indices);
end

if any(FLOAT64_IEEE_indices)
    RealValue(FLOAT64_IEEE_indices) = hex2num(ARGS.StoredIntegerHex(FLOAT64_IEEE_indices)) .* ARGS.ScaleFactor(FLOAT64_IEEE_indices) + ARGS.Offset(FLOAT64_IEEE_indices);
end

for idx = find(UNSIGNED_indices(:).')
    RealValue(idx) = double(cast(StoredIntegerDecimal(idx), MatlabDataTypes{idx}));
end
RealValue(UNSIGNED_indices) = RealValue(UNSIGNED_indices) .* ARGS.ScaleFactor(UNSIGNED_indices) + ARGS.Offset(UNSIGNED_indices);

for idx = find(SIGNED_indices(:).')
    RealValue(idx) = double(typecast(cast(StoredIntegerDecimal(idx), ['u' MatlabDataTypes{idx}]), MatlabDataTypes{idx}));
end
RealValue(SIGNED_indices) = RealValue(SIGNED_indices) .* ARGS.ScaleFactor(SIGNED_indices) + ARGS.Offset(SIGNED_indices);

for idx = find(UFIX_indices(:).')
    thisStoredIntegerBinary = dec2bin2(StoredIntegerDecimal(idx), BitLengthList(idx));
    thisStoredIntegerBinary = thisStoredIntegerBinary(1:BitLengthList(idx));
    thisStoredIntegerDecimal = bin2dec2(thisStoredIntegerBinary(1:BitLengthList(idx)));
    RealValue(idx) = double(thisStoredIntegerDecimal);
end
RealValue(UFIX_indices) = RealValue(UFIX_indices) .* ARGS.ScaleFactor(UFIX_indices) + ARGS.Offset(UFIX_indices);

for idx = find(SFIX_indices(:).')
    thisStoredIntegerBinary = dec2bin2(StoredIntegerDecimal(idx), BitLengthList(idx));
    thisStoredIntegerBinary = thisStoredIntegerBinary(end-BitLengthList(idx)+1:end);
    thisStoredIntegerDecimal = bin2dec2(thisStoredIntegerBinary);
    if thisStoredIntegerBinary(1) == '1'
        %Sign bit set to 1: Obtain two's complement
        RealValue(idx) = double(thisStoredIntegerDecimal) - 2^double(BitLengthList(idx));
    else
        RealValue(idx) = double(thisStoredIntegerDecimal);
    end
end
RealValue(SFIX_indices) = RealValue(SFIX_indices) .* ARGS.ScaleFactor(SFIX_indices) + ARGS.Offset(SFIX_indices);

varargout{1} = reshape(RealValue, dimensions);

end