function varargout = containerdatatype2(varargin)

import('ptc_matlab_lib.*');

pairs = {'MinVal', -Inf, ...
    'MaxVal', Inf, ...
    'OutputType', 'matlab'};
ARGS = parseargs(varargin, pairs);

possibles = {'logical', 'uint8', 'int8', 'uint16', 'int16', 'uint32', 'int32', 'single', 'double'};
out = 'double';
for ctr = 1:numel(possibles)
    if ARGS.MinVal >= getmindtval(possibles{ctr}) && ARGS.MaxVal <= getmaxdtval(possibles{ctr})
        out = possibles{ctr};
        break;
    end
end

if strcmp(ARGS.OutputType, 'a2l')
    switch out
        case {'logical', 'uint8'}
            out = 'UBYTE';
        case 'int8'
            out = 'SBYTE';
        case 'uint16'
            out = 'UWORD';
        case 'int16'
            out = 'SWORD';
        case 'uint32'
            out = 'ULONG';
        case 'int32'
            out = 'SLONG';
        case 'uint64'
            out = 'A_UINT64';
        case 'int64'
            out = 'A_INT64';
        case 'single'
            out = 'FLOAT32_IEEE';
        case 'double'
            out = 'FLOAT64_IEEE';
    end
elseif strcmp(ARGS.OutputType, 'dbc')
    switch out
        case {'logical', 'uint8', 'uint16', 'uint32', 'uint64'}
            out = 'UNSIGNED';
        case {'int8', 'int16', 'int32', 'int64'}
            out = 'SIGNED';
        case 'single'
            out = 'IEEE_FLOAT';
        case 'double'
            out = 'IEEE_DOUBLE';
    end
elseif strcmp(ARGS.OutputType, 'simulink')
    switch out
        case 'logical'
            out = 'boolean';
    end
end

varargout{1} = out;

end