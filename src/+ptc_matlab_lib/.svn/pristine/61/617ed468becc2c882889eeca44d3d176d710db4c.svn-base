function out = sl_get_datastore_read(varargin)

pairs = {'BlockPath', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

DataStoreName = get_param(ARGS.BlockPath, 'DataStoreName');
out = find_system(bdroot(gcs), 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'BlockType', 'DataStoreRead', 'DataStoreName', DataStoreName);

end