function out = dec2bin2(varargin)
%DEC2BIN2: Function to convert decimal to binary, works correctly even
%when the input is greater than FLINTMAX, as long as it is less than
%intmax('uint64'). Same syntax as dec2bin

in = varargin{1};

assert(all(in(:) >= 0), [mfilename ':' ptc_matlab_lib.thisfuncname ':NegativeInput'], 'ERROR: Input argument contains negative values');

out = dec2bin(typecast(uint64(in(:)), 'uint32'), 32);
out = [out(2:2:end, :) out(1:2:end, :)];

if nargin <= 1
   numchars = 1;
else
   numchars = varargin{2};
end
while size(out, 2) - numchars >= 1 && all(out(:, 1) == '0')
   out(:, 1) = [];
end
if size(out, 2) < numchars
   out = [repmat('0', size(out, 1), numchars - size(out, 2)) out];
end

end