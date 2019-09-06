function varargout = make_j1939_identifier(varargin)

pairs = {'Priority', 6, ...
    'ParameterGroupNumber', [], ...
    'DestinationAddress', hex2dec('FF'), ...
    'SourceAddress', []};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

if ARGS.ParameterGroupNumber >= hex2dec('F000')
    varargout{1} = ['000' dec2bin(ARGS.Priority, 3) dec2bin(ARGS.ParameterGroupNumber, 18) dec2bin(ARGS.SourceAddress, 8)];
elseif ARGS.ParameterGroupNumber < hex2dec('F000')
    PGN = dec2bin(ARGS.ParameterGroupNumber, 18);
    varargout{1} = ['000' dec2bin(ARGS.Priority, 3) PGN(1:10) dec2bin(ARGS.DestinationAddress, 8) dec2bin(ARGS.SourceAddress, 8)];
end

varargout{1} = dec2hex(bin2dec(varargout{1}));

end