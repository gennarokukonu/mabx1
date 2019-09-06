function parent_list = get_parent_list(object)

parent_list = {};

if isnumeric(object)
    thisParent = get(object, 'Parent');
elseif ischar(object)
    thisParent = get_param(object, 'Parent');
end

while ~strcmp(thisParent, bdroot(thisParent))
    parent_list{end+1, 1} = thisParent; %#ok<AGROW>
    thisParent = get_param(thisParent, 'Parent');
end

end