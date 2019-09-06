function setenv_matlab(varname, varval)
%setenv_matlab: Set a MATLAB environment variable, or multiple environment
%variables to the same value.
%
%   setenv_matlab(varname, varval): where varname can be a cell array of
%   strings.
%
%   See also: getenv_matlab, rmenv_matlab, listenv_matlab, clearenv_matlab

import('ptc_matlab_lib.*');

ENV_VAR = 'tp797df2ec_d34b_4fb0_b679_ba253228f8a8';

if ~isappdata(0, ENV_VAR)
    setappdata(0, ENV_VAR, struct);
end

thisval = getappdata(0, ENV_VAR);
varname_cell = cellstr(varname);
varval_cell = repmat({varval}, length(varname_cell), 1);
thisval = copyfields(cell2struct(varval_cell(:), varname_cell(:), 1), thisval);
setappdata(0, ENV_VAR, thisval);

end