function out = c_sum(elements, dimension, assumedtype)
%C_SUM: Function to add integers like C would, with wrapping
%   c_sum(elements, assumedtype)
%   elements: MXN matrix, addition takes place across columns if
%   dimension=2, or rows if dimension=1
%   assumedtype: int8, uint8, int16, uint16, int32, uint32, int64, uint64
%   Correct working is not guaranteed for uint64.

switch assumedtype
    case {'int8', 'uint8'}
        NumBits = 8;
        unsigned_assumedtype = 'uint8';
    case {'int16', 'uint16'}
        NumBits = 16;
        unsigned_assumedtype = 'uint16';
    case {'int32', 'uint32'}
        NumBits = 32;
        unsigned_assumedtype = 'uint32';
    case {'int64', 'uint64'}
        NumBits = 64;
        unsigned_assumedtype = 'uint64';
end

out = sum(double(elements), dimension);
outbin = ptc_matlab_lib.dec2bin2(out, NumBits);
out = cast(ptc_matlab_lib.bin2dec2(outbin(:, end-NumBits+1:end)), unsigned_assumedtype);
out = reshape(typecast(out(:), assumedtype), size(out));

end