function out = bin2dec2(varargin)
%BIN2DEC2: Function to convert binary to decimal, works correctly even
%when the input is greater than 2^52, as long as it is less than or equal
%to intmax('uint64'). Same syntax as bin2dec

import('ptc_matlab_lib.*');
in = varargin{1};
if ischar(in)
    in = cellstr(in);
end
assert(iscellstr(in), [mfilename ':' thisfuncname ':NotCellStr'], 'ERROR: Input argument needs to be a char array or a cell array of string');

binvalset = cellstr(dec2bin((0:15).', 4));
hexvalset = cellstr(dec2hex((0:15).', 1));
MAP = containers.Map(binvalset, hexvalset);

in = regexprep(in, '\s+', '');
in = regexprep(in, '^0+', '');
lengthvals = cellfun(@length, in);
if any(lengthvals > 64)
    error([mfilename ':' thisfuncname ':InputOutOfRange'], 'Input out of range. Maximum limit is intmax(''uint64'')');
end
in(lengthvals == 0) = {'0000'};
lengthvals(lengthvals == 0) = length('0000');
in = arrayfun(@(X, Y) [repmat('0', 1, 4*ceil(X/4) - X) Y{1}], lengthvals, in, 'UniformOutput', false);
in = cellfun(@(X) cellstr(reshape(X, 4, []).'), in, 'UniformOutput', false);
in = cellfun(@(Y) cellfun(@(X) MAP(X), Y), in, 'UniformOutput', false);
in = cellfun(@(X) X(:).', in, 'UniformOutput', false);

out = ptc_matlab_lib.hex2dec2(in);

end