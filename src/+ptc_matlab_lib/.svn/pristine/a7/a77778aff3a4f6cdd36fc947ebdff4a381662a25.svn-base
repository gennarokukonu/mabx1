function varargout = ChangeEndianness(varargin)
%CHANGEENDIANNESS Function to convert between different endianness systems
%   This function converts a set of input raw hex values from one byte
%   ordering system to another.
%
%   SYNTAX:
%   OUT = ChangeEndianness('StoredIntegerHex', cell(0, 1), ...
%                          'DataType', cell(0, 1), ...
%                          'EndiannessIn', '', ...
%                          'EndiannessOut', '');
%
%   'StoredIntegerHex': Cell array of strings containing the hex
%   representation of the stored integer values
%
%   'DataType': Corresponding data type of each entry in StoredIntegerHex
%
%   'EndiannessIn': Input endianness (e.g. MSB_FIRST, MSB_LAST)
%
%   'EndiannessOut': Output endianness (e.g. MSB_LAST, MSB_FIRST)
%
%   RETURN VALUE:
%   OUT: Cell array of strings of converted stored integers

import('ptc_matlab_lib.*');

pairs = {'StoredIntegerHex', cell(0, 1), ...
    'DataType', cell(0, 1), ...
    'EndiannessIn', '', ...
    'EndiannessOut', ''};
ARGS = parseargs(varargin, pairs);

if ismember(ARGS.EndiannessIn, {'MSB_FIRST'; 'LSB_LAST'; 'BIG_ENDIAN'; 'MOTOROLA'})
    ARGS.EndiannessIn = 'MSB_FIRST';
elseif ismember(ARGS.EndiannessIn, {'MSB_LAST'; 'LSB_FIRST'; 'LITTLE_ENDIAN'; 'INTEL'})
    ARGS.EndiannessIn = 'MSB_LAST';
end
if ismember(ARGS.EndiannessOut, {'MSB_FIRST'; 'LSB_LAST'; 'BIG_ENDIAN'; 'MOTOROLA'})
    ARGS.EndiannessOut = 'MSB_FIRST';
elseif ismember(ARGS.EndiannessOut, {'MSB_LAST'; 'LSB_FIRST'; 'LITTLE_ENDIAN'; 'INTEL'})
    ARGS.EndiannessOut = 'MSB_LAST';
end

ischararray = ischar(ARGS.StoredIntegerHex);
ARGS.StoredIntegerHex = cellstr(ARGS.StoredIntegerHex);
OriginalDims = size(ARGS.StoredIntegerHex);
ARGS.DataType = cellstr(ARGS.DataType);
ARGS.StoredIntegerHex = ARGS.StoredIntegerHex(:);
ARGS.DataType = ARGS.DataType(:);

%Sundeep Tuteja, 2018-05-25: Added support for arbitrary bit lengths
BitLengths = get_num_bits(ARGS.DataType);
BitLengths(BitLengths <= 8) = 8;
BitLengths(BitLengths > 8 & BitLengths <=16) = 16;
BitLengths(BitLengths > 16 & BitLengths <= 32) = 32;
BitLengths(BitLengths > 32 & BitLengths <= 64) = 64;

%Sundeep Tuteja, 2017-04-08: Make sure that the initial number of
%characters is even
StrLengths = cellfun(@length, ARGS.StoredIntegerHex);
OddIndices = (mod(StrLengths, 2) == 1);
ARGS.StoredIntegerHex(OddIndices) = strcat('0', ARGS.StoredIntegerHex(OddIndices));

StoredIntegerHexOut = ARGS.StoredIntegerHex;
if strcmp(ARGS.EndiannessIn, 'MSB_FIRST') && strcmp(ARGS.EndiannessOut, 'MSB_LAST') || ...
        strcmp(ARGS.EndiannessIn, 'MSB_LAST') && strcmp(ARGS.EndiannessOut, 'MSB_FIRST')
    BitLength16_idx = (BitLengths == 16);
    BitLength32_idx = (BitLengths == 32);
    BitLength64_idx = (BitLengths == 64);
    
    if any(BitLength16_idx)
        StoredIntegerHexIn = cellfun(@(X) X(end-3 : end), ARGS.StoredIntegerHex(BitLength16_idx), 'UniformOutput', false);
        switch ARGS.EndiannessIn
            case 'MSB_FIRST'
                for ctr = 1:numel(StoredIntegerHexIn)
                    StoredIntegerHexIn{ctr} = [repmat('00', 1, 2-0.5*length(StoredIntegerHexIn{ctr})) StoredIntegerHexIn{ctr}];
                end
            case 'MSB_LAST'
                for ctr = 1:numel(StoredIntegerHexIn)
                    StoredIntegerHexIn{ctr} = [StoredIntegerHexIn{ctr} repmat('00', 1, 2-0.5*length(StoredIntegerHexIn{ctr}))];
                end
        end
        ARGS.StoredIntegerHex(BitLength16_idx) = StoredIntegerHexIn;
        BitLength16_StoredIntegerHex = cell2mat(ARGS.StoredIntegerHex(BitLength16_idx));
        BitLength16_StoredIntegerHex = cellstr([BitLength16_StoredIntegerHex(:, [3 4]) BitLength16_StoredIntegerHex(:, [1 2])]);
        StoredIntegerHexOut(BitLength16_idx) = BitLength16_StoredIntegerHex;
    end
    
    if any(BitLength32_idx)
        StoredIntegerHexIn = cellfun(@(X) X(end-7:end), ARGS.StoredIntegerHex(BitLength32_idx), 'UniformOutput', false);
        switch ARGS.EndiannessIn
            case 'MSB_FIRST'
                for ctr = 1:numel(StoredIntegerHexIn)
                    StoredIntegerHexIn{ctr} = [repmat('00', 1, 4-0.5*length(StoredIntegerHexIn{ctr})) StoredIntegerHexIn{ctr}];
                end
            case 'MSB_LAST'
                for ctr = 1:numel(StoredIntegerHexIn)
                    StoredIntegerHexIn{ctr} = [StoredIntegerHexIn{ctr} repmat('00', 1, 4-0.5*length(StoredIntegerHexIn{ctr}))];
                end
        end
        ARGS.StoredIntegerHex(BitLength32_idx) = StoredIntegerHexIn;
        BitLength32_StoredIntegerHex = cell2mat(ARGS.StoredIntegerHex(BitLength32_idx));
        BitLength32_StoredIntegerHex = cellstr([BitLength32_StoredIntegerHex(:, [7 8]) BitLength32_StoredIntegerHex(:, [5 6]) BitLength32_StoredIntegerHex(:, [3 4]) BitLength32_StoredIntegerHex(:, [1 2])]);
        StoredIntegerHexOut(BitLength32_idx) = BitLength32_StoredIntegerHex;
    end
    
    if any(BitLength64_idx)
        StoredIntegerHexIn = cellfun(@(X) X(end-15 : end), ARGS.StoredIntegerHex(BitLength64_idx), 'UniformOutput', false);
        switch ARGS.EndiannessIn
            case 'MSB_FIRST'
                for ctr = 1:numel(StoredIntegerHexIn)
                    StoredIntegerHexIn{ctr} = [repmat('00', 1, 8-0.5*length(StoredIntegerHexIn{ctr})) StoredIntegerHexIn{ctr}];
                end
            case 'MSB_LAST'
                for ctr = 1:numel(StoredIntegerHexIn)
                    StoredIntegerHexIn{ctr} = [StoredIntegerHexIn{ctr} repmat('00', 1, 8-0.5*length(StoredIntegerHexIn{ctr}))];
                end
        end
        ARGS.StoredIntegerHex(BitLength64_idx) = StoredIntegerHexIn;
        BitLength64_StoredIntegerHex = cell2mat(ARGS.StoredIntegerHex(BitLength64_idx));
        BitLength64_StoredIntegerHex = cellstr([BitLength64_StoredIntegerHex(:, [15 16]) BitLength64_StoredIntegerHex(:, [13 14]) BitLength64_StoredIntegerHex(:, [11 12]) BitLength64_StoredIntegerHex(:, [9 10]) BitLength64_StoredIntegerHex(:, [7 8]) BitLength64_StoredIntegerHex(:, [5 6]) BitLength64_StoredIntegerHex(:, [3 4]) BitLength64_StoredIntegerHex(:, [1 2])]);
        StoredIntegerHexOut(BitLength64_idx) = BitLength64_StoredIntegerHex;
    end
elseif ~strcmp(ARGS.EndiannessIn, ARGS.EndiannessOut)
    error([mfilename ':' thisfuncname ':ConversionNotSupported'], ['The conversion from ' ARGS.EndiannessIn ' to ' ARGS.EndiannessOut ' is not supported.']);
end

StoredIntegerHexOut = reshape(StoredIntegerHexOut, OriginalDims);
if ischararray
    StoredIntegerHexOut = StoredIntegerHexOut{1};
end

varargout{1} = StoredIntegerHexOut;

end