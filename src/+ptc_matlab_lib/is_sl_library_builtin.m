function out = is_sl_library_builtin(object)

import('ptc_matlab_lib.*');

if ishandle(object)
    FileName = get(object, 'FileName');
elseif ischar(object)
    try
        open_system(object);
        FileName = get_param(object, 'FileName');
    catch
        out = false;
        return;
    end
else
    error([mfilename ':' thisfuncname ':InvalidInput'], 'Invalid input. The input has to be a numeric handle or a string');
end

if ~isempty(strfind(normcase(FileName), [normcase(matlabroot) filesep]))
    out = true;
else
    out = false;
end

end