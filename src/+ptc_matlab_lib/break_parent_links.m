function varargout = break_parent_links(array)

if isnumeric(array)
    varargout{1} = arrayfun(@break_parent_links_helper, array, 'UniformOutput', false);
elseif iscellstr(array)
    varargout{1} = cellfun(@break_parent_links_helper, array, 'UniformOutput', false);
elseif ischar(array)
    array = cellstr(array);
    varargout{1} = cellfun(@break_parent_links_helper, array, 'UniformOutput', false);
end

end

function varargout = break_parent_links_helper(object)

import('ptc_matlab_lib.*');

BLOCKS_BROKEN_LINKS = [];

if isnumeric(object)
	thisParent = get(object, 'Parent');
    object_path = [thisParent '/' get(object, 'Name')];
elseif ischar(object)
    thisParent = get_param(object, 'Parent');
    object_path = object;
end

while ~strcmp(thisParent, bdroot(thisParent))
    if has_param(thisParent, 'LinkStatus') && strcmp(get_param(thisParent, 'LinkStatus'), 'resolved') && ~strcmp(thisParent, object_path)
        set_param(thisParent, 'LinkStatus', 'inactive');
        if strcmp(get_param(thisParent, 'LinkStatus'), 'inactive')
            BLOCKS_BROKEN_LINKS(end+1, 1) = get_param(thisParent, 'Handle'); %#ok<AGROW>
        end
    end
    thisParent = get_param(thisParent, 'Parent');
end

varargout{1} = BLOCKS_BROKEN_LINKS;

end