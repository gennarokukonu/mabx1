function varargout = getfixdtexpression(varargin)
%GETFIXDTEXPRESSION Returns the fixdt expression for an input data type
%string
%
%   getfixdtexpression('DataTypeString', 'uint16') returns
%   'fixdt(''uint16'')'
%
%   getfixdtexpression('DataTypeString', 'fixdt(''uint16'')') returns
%   'fixdt(''uint16'')'
%
%   getfixdtexpression('DataTypeString', 'auto') returns
%   'fixdt(''double'')'
%
%   See also: containerdatatype, getmindtval, getmaxdtval

import('ptc_matlab_lib.*');

pairs = {'DataTypeString', ''};
parseargs(varargin, pairs);

switch DataTypeString %#ok<NODEF>
    case 'UBYTE'
        DataTypeString = 'uint8';
    case 'SBYTE'
        DataTypeString = 'int8';
    case 'UWORD'
        DataTypeString = 'uint16';
    case 'SWORD'
        DataTypeString = 'int16';
    case 'ULONG'
        DataTypeString = 'uint32';
    case 'SLONG'
        DataTypeString = 'int32';
    case 'A_UINT64'
        DataTypeString = 'uint64';
    case 'A_INT64'
        DataTypeString = 'int64';
    case 'FLOAT32_IEEE'
        DataTypeString = 'single';
    case 'FLOAT64_IEEE'
        DataTypeString = 'double';
    case 'auto'
        DataTypeString = 'double';
    case 'logical'
        DataTypeString = 'boolean';
end

%Check to see if the data type string is already enclosed in 'fixdt(<STR>)'
if isempty(regexp(strtrim(DataTypeString), 'fixdt\s*\(.*', 'once'))
    RValue = ['fixdt(''' DataTypeString ''')'];
else
    RValue = DataTypeString;
end

RValueObj = [];
try
    RValueObj = evalsafe(RValue);
end
if isempty(RValueObj)
    RValue = '';
end

varargout{1} = RValue;

end