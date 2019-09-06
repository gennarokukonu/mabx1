function out = containerdatatype3(varargin)
%CONTAINERDATATYPE3: Inputs are minimum value, maximum value, desired
%resolution, outputs are optimal resolution, offset, and bit length.

import('ptc_matlab_lib.*');
pairs = {'Min', [], ...
    'Max', [], ...
    'Resolution', [], ...
    'ShouldPreferPowerOfTwo', true};
ARGS = parseargs(varargin, pairs);

if ARGS.ShouldPreferPowerOfTwo
    ARGS.Resolution = 2^floor(log2(ARGS.Resolution));
end

out.Offset = ARGS.Min;
found = false;
for bitlen = 1:64
    if bitlen >= 1 && bitlen <= 8
        thisDT = 'uint8';
    elseif bitlen <= 16
        thisDT = 'uint16';
    elseif bitlen <= 32
        thisDT = 'uint32';
    elseif bitlen <= 64
        thisDT = 'uint64';
    end
    thisMax = storedinteger2realvalue('StoredIntegerHex', dec2hex2(bin2dec2(repmat('1', 1, bitlen))), 'DataType', thisDT, 'ScaleFactor', ARGS.Resolution, 'Offset', out.Offset, 'ByteOrder', 'MSB_FIRST');
    if thisMax >= ARGS.Max
        found = true;
        break;
    end
end

if found
    out.BitLength = bitlen;
    out.ScaleFactor = ARGS.Resolution;
else
    out = struct([]);
end

end