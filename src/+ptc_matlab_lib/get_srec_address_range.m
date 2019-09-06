function varargout = get_srec_address_range(varargin)

import('ptc_matlab_lib.*');
pairs = {'SRECDATA', struct([]), ...
    'SREC_RECORD_TYPE', 'SREC_DATA_SEQUENCE', ... %Options: {'SREC_BLOCK_HEADER'; 'SREC_DATA_SEQUENCE'; 'SREC_RECORD_COUNT'; 'SREC_BLOCK_END'}
    'StartingAddressHex', '', ...
    'EndingAddressHex', '', ...
    'FillerByteHex', 'FF'};
ARGS = parseargs(varargin, pairs);

SRECDATA = ARGS.SRECDATA; ARGS = rmfield(ARGS, 'SRECDATA');

if ~isfield(SRECDATA, ARGS.SREC_RECORD_TYPE)
    error([mfilename ':' thisfuncname ':InvalidSRECRecordType'], 'Invalid SREC record type specification');
end

[~, indices] = sort(SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressList);
SRECDATA.(ARGS.SREC_RECORD_TYPE) = structfun(@(X) X(indices), SRECDATA.(ARGS.SREC_RECORD_TYPE), 'UniformOutput', false);

StartingAddress = hex2dec2(ARGS.StartingAddressHex);
if ~isempty(ARGS.EndingAddressHex)
    EndingAddress = hex2dec2(ARGS.EndingAddressHex);
else
    EndingAddress = max(SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressList(end) + length(SRECDATA.(ARGS.SREC_RECORD_TYPE).DataList{end})*0.5 - 1, StartingAddress);
end
assert(EndingAddress >= StartingAddress);

SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressRangeList = arrayfun(@(X, Y) [X, X + length(Y{1})*0.5 - 1], SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressList, SRECDATA.(ARGS.SREC_RECORD_TYPE).DataList, 'UniformOutput', false);

OutAddressList = (StartingAddress : EndingAddress).';
OutByteList = repmat(ARGS.FillerByteHex, numel(OutAddressList), 1);
for ctr = 1:numel(SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressRangeList)
    idx = (OutAddressList >= SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressRangeList{ctr}(1) & OutAddressList <= SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressRangeList{ctr}(2));
    if any(idx)
        Addresses = OutAddressList(idx) - SRECDATA.(ARGS.SREC_RECORD_TYPE).AddressRangeList{ctr}(1) + 1;
        indices = [2*Addresses-1 2*Addresses];
        indices = indices.'; indices = indices(:);
        thisData = SRECDATA.(ARGS.SREC_RECORD_TYPE).DataList{ctr}(indices);
        OutByteList(idx, :) = reshape(thisData, 2, []).';
    end
end

varargout{1} = OutByteList;

end