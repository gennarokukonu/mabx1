function varargout = merge_srec_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'SRECDATAList', cell(0, 1), ...
    'ShowWaitbar', true, ...
    'AddressOffsetList', 0, ...
    'ShouldIgnoreBlockHeader', true, ...
    'WaitbarParams', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch', ARGS.WaitbarParams{:});
end

ARGS.SRECDATAList = ARGS.SRECDATAList(:);
ARGS.AddressOffsetList = uint64(ARGS.AddressOffsetList(:));
if isscalar(ARGS.AddressOffsetList)
    ARGS.AddressOffsetList = ARGS.AddressOffsetList * ones(size(ARGS.SRECDATAList), 'uint64');
end

SRECDATA = ARGS.SRECDATAList{1};
for ctr = 2:numel(ARGS.SRECDATAList)
    if isfield(SRECDATA, 'SREC_BLOCK_HEADER') && isfield(ARGS.SRECDATAList{ctr}, 'SREC_BLOCK_HEADER') && ~ARGS.ShouldIgnoreBlockHeader
        assert(isequal(SRECDATA.SREC_BLOCK_HEADER, ARGS.SRECDATAList{ctr}.SREC_BLOCK_HEADER));
    end
    if isfield(ARGS.SRECDATAList{ctr}, 'SREC_DATA_SEQUENCE')
        for ctr2 = 1:numel(ARGS.SRECDATAList{ctr}.SREC_DATA_SEQUENCE.AddressList)
            SRECDATA = set_srec_data('SRECDATA', SRECDATA, ...
                'Address', ARGS.SRECDATAList{ctr}.SREC_DATA_SEQUENCE.AddressList(ctr2), ...
                'DataHex', ARGS.SRECDATAList{ctr}.SREC_DATA_SEQUENCE.DataList{ctr2}, ...
                'AddressOffset', ARGS.AddressOffsetList(ctr));
        end
    end
end

if ARGS.ShouldIgnoreBlockHeader && isfield(SRECDATA, 'SREC_BLOCK_HEADER')
    SRECDATA = rmfield(SRECDATA, 'SREC_BLOCK_HEADER');
end

%SREC_RECORD_COUNT and SREC_BLOCK_END are no longer relevant
if isfield(SRECDATA, 'SREC_RECORD_COUNT')
    SRECDATA = rmfield(SRECDATA, 'SREC_RECORD_COUNT');
end
if isfield(SRECDATA, 'SREC_BLOCK_END')
    SRECDATA = rmfield(SRECDATA, 'SREC_BLOCK_END');
end

varargout{1} = SRECDATA;

if ARGS.ShowWaitbar
    waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
    pause(0.5);
    delete(waitbar_hndl);
end

end