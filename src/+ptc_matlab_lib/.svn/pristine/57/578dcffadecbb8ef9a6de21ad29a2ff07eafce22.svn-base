function mask = getmask(varargin)
%getmask: Function that takes a lower address limit, upper address limit,
%and optionally, a wordlength, and returns the appropriate mask value
%
%   SYNTAX:
%   mask = getmask('LowerLimit', <LowerLimit>, 'UpperLimit', <UpperLimit>)
%
%   mask = getmask('LowerLimit', <LowerLimit>, ...
%           'UpperLimit', <UpperLimit>, ...
%           'WordLength', <WordLength>)

import('ptc_matlab_lib.*');

pairs = {'LowerLimit', [], ...
    'UpperLimit', []};
parseargs(varargin, pairs);

LowerLimit_bin = convert2basen(LowerLimit, 2);
UpperLimit_bin = convert2basen(UpperLimit, 2);

pairs = {'WordLength', max(length(LowerLimit_bin), length(UpperLimit_bin))};
parseargs(varargin, pairs);

LowerLimit_bin = pad_to_length('FinalLength', WordLength, ...
    'InputVector', LowerLimit_bin, ...
    'PadValue', 0, ...
    'PadDirection', 'left');
UpperLimit_bin = pad_to_length('FinalLength', WordLength, ...
    'InputVector', UpperLimit_bin, ...
    'PadValue', 0, ...
    'PadDirection', 'left');

mask = not(xor(LowerLimit_bin, UpperLimit_bin));
mask = convert2decimalnum(mask, 2);

end