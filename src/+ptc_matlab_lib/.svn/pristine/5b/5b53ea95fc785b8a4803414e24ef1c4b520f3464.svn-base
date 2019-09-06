function out = get_num_bits(DataType)

DataType = cellstr(DataType);
out = NaN(size(DataType));

DataType(strcmp('ufix8', DataType)) = {'UBYTE'};
DataType(strcmp('ufix16', DataType)) = {'UWORD'};
DataType(strcmp('ufix32', DataType)) = {'ULONG'};
DataType(strcmp('sfix8', DataType)) = {'SBYTE'};
DataType(strcmp('sfix16', DataType)) = {'SWORD'};
DataType(strcmp('sfix32', DataType)) = {'SLONG'};

BitLengths = regexp(DataType, '[us]fix(?<BitLength>\d+)', 'once', 'names');
indices = ~cellfun(@isempty, BitLengths);
out(indices) = str2double(cellfun(@(X) X.BitLength, BitLengths(indices), 'UniformOutput', false));

out(ismember(DataType, {'logical'})) = 1;
out(ismember(DataType, {'UBYTE'; 'SBYTE'; 'uint8'; 'int8'})) = 8;
out(ismember(DataType, {'UWORD'; 'SWORD'; 'uint16'; 'int16'})) = 16;
out(ismember(DataType, {'ULONG'; 'SLONG'; 'FLOAT32_IEEE'; 'uint32'; 'int32'; 'single'})) = 32;
out(ismember(DataType, {'A_UINT64'; 'A_INT64'; 'FLOAT64_IEEE'; 'uint64'; 'int64'; 'double'})) = 64;

end