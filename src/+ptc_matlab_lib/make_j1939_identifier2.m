function varargout = make_j1939_identifier2(varargin)

pairs = {'Priority', [], ...
    'EDP', 0, ...
    'DP', 0, ...
    'PF', [], ...
    'PS', [], ...
    'SourceAddress', [], ...
    'ShouldAddIDEBit', false};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

if ARGS.ShouldAddIDEBit
    out = '1';
else
    out = '0';
end
out = [out '00' dec2bin(ARGS.Priority, 3) dec2bin(ARGS.EDP, 1) dec2bin(ARGS.DP, 1) dec2bin(ARGS.PF, 8) dec2bin(ARGS.PS, 8) dec2bin(ARGS.SourceAddress, 8)];

varargout{1} = bin2dec(out);

end