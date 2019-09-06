function OutputStoredInteger = bitshift2(varargin)

import('ptc_matlab_lib.*');

pairs = {'InputStoredInteger', [], ...
    'ShiftValue', [], ...
    'AssumedType', 'uint64', ...
    'SignExtend', true};
ARGS = parseargs(varargin, pairs);

if numel(ARGS.ShiftValue) == 1
    ARGS.ShiftValue = ARGS.ShiftValue * ones(size(ARGS.InputStoredInteger), 'int8');
end
if ischar(ARGS.AssumedType)
    ARGS.AssumedType = cellstr(ARGS.AssumedType);
end
if numel(ARGS.AssumedType) == 1
    ARGS.AssumedType = repmat(ARGS.AssumedType, size(ARGS.InputStoredInteger));
end
if numel(ARGS.SignExtend) == 1
    ARGS.SignExtend = ARGS.SignExtend .* true(size(ARGS.InputStoredInteger));
end

ARGS.AssumedType(strcmp('ufix8', ARGS.AssumedType)) = {'uint8'};
ARGS.AssumedType(strcmp('sfix8', ARGS.AssumedType)) = {'int8'};
ARGS.AssumedType(strcmp('ufix16', ARGS.AssumedType)) = {'uint16'};
ARGS.AssumedType(strcmp('sfix16', ARGS.AssumedType)) = {'int16'};
ARGS.AssumedType(strcmp('ufix32', ARGS.AssumedType)) = {'uint32'};
ARGS.AssumedType(strcmp('sfix32', ARGS.AssumedType)) = {'int32'};
ARGS.AssumedType(strcmp('ufix64', ARGS.AssumedType)) = {'uint64'};
ARGS.AssumedType(strcmp('sfix64', ARGS.AssumedType)) = {'int64'};

ARGS.AssumedType(strcmp('UBYTE', ARGS.AssumedType)) = {'uint8'};
ARGS.AssumedType(strcmp('SBYTE', ARGS.AssumedType)) = {'int8'};
ARGS.AssumedType(strcmp('UWORD', ARGS.AssumedType)) = {'uint16'};
ARGS.AssumedType(strcmp('SWORD', ARGS.AssumedType)) = {'int16'};
ARGS.AssumedType(strcmp('ULONG', ARGS.AssumedType)) = {'uint32'};
ARGS.AssumedType(strcmp('SLONG', ARGS.AssumedType)) = {'int32'};
ARGS.AssumedType(strcmp('A_UINT64', ARGS.AssumedType)) = {'uint64'};
ARGS.AssumedType(strcmp('A_INT64', ARGS.AssumedType)) = {'int64'};

%For this function, floating point data types need to be treated like
%signed integers, as they possess a sign bit
ARGS.AssumedType(strcmp('FLOAT32_IEEE', ARGS.AssumedType)) = {'int32'};
ARGS.AssumedType(strcmp('single', ARGS.AssumedType)) = {'int32'};
ARGS.AssumedType(strcmp('FLOAT64_IEEE', ARGS.AssumedType)) = {'int64'};
ARGS.AssumedType(strcmp('double', ARGS.AssumedType)) = {'int64'};

UINT_indices = ismember(ARGS.AssumedType, {'uint8'; 'uint16'; 'uint32'; 'uint64'});
SINT_indices = ismember(ARGS.AssumedType, {'int8'; 'int16'; 'int32'; 'int64'});
UFIX_indices = ~cellfun(@isempty, regexp(ARGS.AssumedType, 'ufix\d+'));
SFIX_indices = ~cellfun(@isempty, regexp(ARGS.AssumedType, 'sfix\d+'));
BitLengthList = get_num_bits(ARGS.AssumedType);

ARGS.InputStoredInteger = bitand(uint64(ARGS.InputStoredInteger), uint64(2.^BitLengthList - 1), 'uint64');

OutputStoredInteger = zeros(size(ARGS.InputStoredInteger), 'uint64');

idx = UINT_indices(:) | ...
    (SINT_indices(:) & ~ARGS.SignExtend) | ...
    UFIX_indices(:) | ...
    (SFIX_indices(:) & ~ARGS.SignExtend);
if any(idx(:))
    OutputStoredInteger(idx) = uint64(arrayfun(@(X, Y) bitshift(X, Y, 'uint64'), ARGS.InputStoredInteger(idx), ARGS.ShiftValue(idx)));
end

%THIS IS WHERE THE COMPLICATED SITUATION STARTS
idx = (SINT_indices(:) | SFIX_indices(:)) & ARGS.SignExtend;
if any(idx(:))
    InputStoredIntegerBinary = arrayfun(@(X, Y) ptc_matlab_lib.dec2bin2(X, Y), ARGS.InputStoredInteger(idx), BitLengthList(idx), 'UniformOutput', false);
    FirstBits = cellfun(@(X) X(1), InputStoredIntegerBinary);
    shifted = uint64(arrayfun(@(X, Y) bitshift(X, Y, 'uint64'), ARGS.InputStoredInteger(idx), ARGS.ShiftValue(idx)));
    shifted_binary = arrayfun(@(X, Y) ptc_matlab_lib.dec2bin2(X, Y), shifted, BitLengthList(idx), 'UniformOutput', false);
    ShiftValueList = ARGS.ShiftValue(idx);
    for ctr = 1:numel(shifted_binary)
        if ShiftValueList(ctr) < 0
            shifted_binary{ctr}(1:-ShiftValueList(ctr)) = FirstBits(ctr);
        end
    end
    OutputStoredInteger(idx) = ptc_matlab_lib.bin2dec2(shifted_binary);
end

OutputStoredInteger = bitand(OutputStoredInteger, uint64(2.^BitLengthList - 1), 'uint64');
assert(isa(OutputStoredInteger, 'uint64'));

end