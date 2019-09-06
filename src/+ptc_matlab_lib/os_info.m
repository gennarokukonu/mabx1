function out = os_info(varargin)
%OS_INFO
%   Query: name, version, arch
pairs = {'Query', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

out = struct('name', char(java.lang.System.getProperty('os.name')), ...
   'version', ptc_matlab_lib.os_ver, ...
   'arch', char(java.lang.System.getProperty('os.arch')));

if ~isempty(ARGS.Query)
    out = out.(ARGS.Query);
end

end