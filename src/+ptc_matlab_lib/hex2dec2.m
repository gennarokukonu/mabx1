function out = hex2dec2(in)
%HEX2DEC2: Function to convert hexadecimal to decimal, works correctly even
%when the input is greater than FLINTMAX, as long as it is less than
%intmax('uint64'). Same syntax as hex2dec

x = cellstr(in);
x = regexprep(x, '\s+', '');
x = regexprep(x, '^0+', '0');
x(cellfun(@isempty, x)) = [];

out = zeros(size(x), 'uint64');

lengths = cellfun(@length, x);
idx = (lengths <= 13); %As flintmax results in guaranteed accuracy for 13 nibbles
out(idx) = uint64(hex2dec(x(idx)));

if any(~idx(:))
    for xctr = ptc_matlab_lib.rowvec(find(~idx)) %#ok<FNDSB>
        bitpos = 0;
        for idx = numel(x{xctr}) : -1 : 1
            value = uint64(hex2dec(x{xctr}(idx)));
            value = bitshift(value, bitpos);
            out(xctr) = bitor(out(xctr), value);
            bitpos = bitpos + 4;
        end
    end
end

end