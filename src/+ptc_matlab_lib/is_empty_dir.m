function out = is_empty_dir(varargin)

pairs = {'Directory', pwd};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

out = exist(ARGS.Directory, 'dir') && isequal(strtrim(cellstr(ls(ARGS.Directory))), {'.'; '..'});

end