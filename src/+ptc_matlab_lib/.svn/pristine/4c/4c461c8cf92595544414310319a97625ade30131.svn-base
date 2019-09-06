function out = getselectedstring(hndl)
%GETSELECTEDSTRING Returns the selected string (or strings) for a listbox
%or popup menu, or a set of listboxes and popup menus.

import('ptc_matlab_lib.*');

if ~all(ismember(get(hndl(:), 'Style'), {'listbox', 'popupmenu'}))
    error([mfilename ':' thisfuncname ':InvalidStyle'], 'Only listboxes and popup menus are supported.');
end

cellarray = get(hndl(:), {'String', 'Value'});
out = cellfun(@(X, Y) X(Y), cellarray(:, 1), cellarray(:, 2), 'UniformOutput', false);

end