function out = getenv_matlab(varname)
%GETENV_MATLAB: Get MATLAB environment variable. The input can be a cell
%array of strings.
%
%   See also: clearenv_matlab, setenv_matlab, rmenv_matlab, isenv_matlab

ENV_VAR = 'tp797df2ec_d34b_4fb0_b679_ba253228f8a8';

if ~isappdata(0, ENV_VAR)
    setappdata(0, ENV_VAR, struct);
end

thisval = getappdata(0, ENV_VAR);
varname_cell = cellstr(varname);
isfield_indices = isfield(thisval, varname_cell);
out = cell(length(varname_cell), 1);
if any(isfield_indices)
    out(isfield_indices) = cellfun(@(X) thisval.(X), varname_cell, 'UniformOutput', false);
end

if length(out) == 1
    out = out{1};
end

if isempty(out)
    out = '';
end

end