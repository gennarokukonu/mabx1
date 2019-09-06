function out = randomchunks(varargin)

import('ptc_matlab_lib.*');
pairs = {'InData', [], ...
    'NumOfChunks', []};
ARGS = parseargs(varargin, pairs);

ARGS.InData = ARGS.InData(:);

rng('shuffle');
indices = randperm(numel(ARGS.InData));
chunksizes = numel(ARGS.InData(:))/ARGS.NumOfChunks;

if ARGS.NumOfChunks >= 2
    chunksizes = [floor(chunksizes)*ones(ARGS.NumOfChunks - 1, 1); numel(ARGS.InData) - floor(chunksizes)*(ARGS.NumOfChunks-1)];
end
assert(sum(chunksizes) == numel(ARGS.InData));

out = cell(numel(chunksizes), 1);
startidx = 1;
for ctr = 1:numel(out)
    out{ctr} = ARGS.InData(indices(startidx:startidx + chunksizes(ctr) - 1));
    startidx = startidx + chunksizes(ctr);
end

end