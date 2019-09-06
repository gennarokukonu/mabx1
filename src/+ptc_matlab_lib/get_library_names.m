function liblist = get_library_names(varargin)

import('ptc_matlab_lib.*');

pairs = {'Sys', bdroot(gcs)};
parseargs(varargin, pairs);

syslist = unique(find_system(Sys, ...
    'LookUnderMasks', 'all', ...
    'FollowLinks', 'on'));

thisstr = randstring(5);

liblist = cell(size(syslist));
for ctr = 1:numel(syslist)
    if has_param(syslist{ctr}, 'ReferenceBlock') && ~isempty(get_param(syslist{ctr}, 'ReferenceBlock'))
        liblist{ctr} = get_param(syslist{ctr}, 'ReferenceBlock');
        liblist{ctr} = strrep(liblist{ctr}, '//', thisstr);
        liblist{ctr} = strexplode(liblist{ctr}, '/');
        liblist{ctr} = strrep(liblist{ctr}{1}, thisstr, '//');
    elseif has_param(syslist{ctr}, 'AncestorBlock') && ~isempty(get_param(syslist{ctr}, 'AncestorBlock'))
        liblist{ctr} = get_param(syslist{ctr}, 'AncestorBlock');
        liblist{ctr} = strrep(liblist{ctr}, '//', thisstr);
        liblist{ctr} = strexplode(liblist{ctr}, '/');
        liblist{ctr} = strrep(liblist{ctr}{1}, thisstr, '//');
    end
end

liblist(cellfun(@isempty, liblist)) = [];
liblist = unique(liblist);

end