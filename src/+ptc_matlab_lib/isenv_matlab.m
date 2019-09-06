function out = isenv_matlab(varname)
%ISENV_MATLAB Check to see if an input string is a MATLAB environment
%variable. The input can be a cell array of strings.
%
%   See also: getenv_matlab, setenv_matlab, rmenv_matlab

ENV_VAR = 'tp797df2ec_d34b_4fb0_b679_ba253228f8a8';

if ~isappdata(0, ENV_VAR)
    setappdata(0, ENV_VAR, struct);
end

varname_cell = cellstr(varname);
thisval = getappdata(0, ENV_VAR);
out = isfield(thisval, varname_cell);

end