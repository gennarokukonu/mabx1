function library_name_cell = get_parent_library_name(object)

import('ptc_matlab_lib.*');

parent_list = get_parent_list(object);
thisstr = randstring(5);
library_name_cell = {};
foundlink = false;
for parentctr = length(parent_list):-1:1
    if has_param(parent_list{parentctr}, 'LinkStatus')
        if strcmp(get_param(parent_list{parentctr}, 'LinkStatus'), 'resolved')
            library_name = get_param(parent_list{parentctr}, 'ReferenceBlock');
            library_name = strrep(library_name, '//', thisstr);
            library_name = strexplode(library_name, '/');
            library_name = strrep(library_name{1}, thisstr, '//');
            library_name_cell{end+1, 1} = library_name; %#ok<AGROW>
            foundlink = true;
        elseif strcmp(get_param(parent_list{parentctr}, 'LinkStatus'), 'inactive')
            library_name = get_param(parent_list{parentctr}, 'AncestorBlock');
            library_name = strrep(library_name, '//', thisstr);
            library_name = strexplode(library_name, '/');
            library_name = strrep(library_name{1}, thisstr, '//');
            library_name_cell{end+1, 1} = library_name; %#ok<AGROW>
            foundlink = true;
        end
    end
end

if ~foundlink
    library_name_cell = {};
end

end