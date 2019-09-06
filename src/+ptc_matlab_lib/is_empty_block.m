function varargout = is_empty_block(varargin)

import('ptc_matlab_lib.*');

pairs = {'BlockPath', gcb};
parseargs(varargin, pairs);

%If the block is an empty block, it will have only an In1 and Out1 port in
%it, and the input port will be directly connected to the output port by a
%single line. This is being done to identify dSPACE blocks: Their
%convention is to use these blocks to be able to rename signals.
varargout{1} = true;

%Check 1: If the block is not a subsystem, return false
if ~strcmp(get_param(BlockPath, 'BlockType'), 'SubSystem')
    varargout{1} = false;
    return;
end

%Check 2: If the block contains more or less than two blocks, return false
BlockList_nextlevel = cellstr(find_system(BlockPath, ...
    'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', ...
    'LoadFullyIfNeeded', 'on'));
BlockList_nextlevel = setdiff(BlockList_nextlevel, BlockPath);
if length(BlockList_nextlevel) ~= 2
    varargout{1} = false;
    return;
end

%Check 3: If the two blocks in the lower level are not input and output
%ports, return false.
BlockType1 = get_param(BlockList_nextlevel{1}, 'BlockType');
BlockType2 = get_param(BlockList_nextlevel{2}, 'BlockType');
if ~ismember(BlockType1, {'Inport', 'Outport'}) || ~ismember(BlockType2, {'Inport', 'Outport'})
    varargout{1} = false;
    return;
end

%Check 4: If the line at the input port does not have the destination block as the
%output block, return false
inport_block = find_system(BlockPath, ...
    'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', ...
    'LoadFullyIfNeeded', 'on', ...
    'BlockType', 'Inport');
outport_block = setdiff(BlockList_nextlevel, inport_block);
linehandle = get_param(inport_block, 'LineHandles');
dstblockhandle = get(linehandle.Outport, 'DstBlockHandle');
dstblockfullpath = [get(dstblockhandle, 'Path') '/' get(dstblockhandle, 'Name')];
if ~strcmp(dstblockfullpath, outport_block)
    varargout{1} = false;
    return;
end

end