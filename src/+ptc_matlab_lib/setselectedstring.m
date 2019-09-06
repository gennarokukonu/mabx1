function out = setselectedstring(hndl, str)
%SETSELECTEDSTRING Sets the selected string (or strings) for a listbox
%or popup menu, or a set of listboxes and popup menus.

import('ptc_matlab_lib.*');

if ~all(ismember(get(hndl(:), 'Style'), {'listbox', 'popupmenu'}))
    error([mfilename ':' thisfuncname ':InvalidStyle'], 'Only listboxes and popup menus are supported.');
end

cellarray = get(hndl(:), 'String');
if isscalar(hndl)
    cellarray = {cellarray};
end
valuelist = cellfun(@(X, Y) find(strcmp(X, Y), 1), cellstr(str), cellarray, 'UniformOutput', false);
if any(cellfun(@isempty, valuelist))
    error([mfilename ':' thisfuncname ':CouldNotFindString']);
end
set(hndl, {'Value'}, valuelist);

end