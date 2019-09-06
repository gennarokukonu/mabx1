function varargout = find_parameterized_links(varargin)
%FIND_PARAMETERIZED_LINKS: Function to identify the handles of every
%parameterized link in the specified system.

import('ptc_matlab_lib.*');
pairs = {'System', gcs, ...
   'FollowLinks', 'on', ...
   'LookUnderMasks', 'all', ...
   'SearchDepth', Inf};
ARGS = parseargs(varargin, pairs);

%Step 1: Find all active library links
ActiveLibraryLinks = find_system(ARGS.System, ...
   'FollowLinks', ARGS.FollowLinks, ...
   'LookUnderMasks', ARGS.LookUnderMasks, ...
   'SearchDepth', ARGS.SearchDepth, ...
   'FindAll', 'on', ...
   'LinkStatus', 'resolved');

%Step 2: Find all configurable subsystems. The only way to identify these
%is by the non-empty BlockChoice parameter.
ConfigurableSubsystemBlocks = find_system(ARGS.System, ...
   'FollowLinks', ARGS.FollowLinks, ...
   'LookUnderMasks', ARGS.LookUnderMasks, ...
   'SearchDepth', ARGS.SearchDepth, ...
   'FindAll', 'on', ...
   'RegExp', 'on', ...
   'BlockType', 'SubSystem', ...
   'BlockChoice', '.+');

AllBlocks = union(ActiveLibraryLinks(:), ConfigurableSubsystemBlocks(:));

%Step 3: Find all blocks with the non-empty LinkData parameter. These
%correspond to parameterized links.
LinkData = get(AllBlocks, 'LinkData');
if ~iscell(LinkData)
   LinkData = {LinkData};
end
varargout{1} = AllBlocks(~cellfun(@isempty, LinkData));

end