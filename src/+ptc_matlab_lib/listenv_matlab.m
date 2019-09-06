function out = listenv_matlab
%listenv_matlab: returns a structure containing all environment variables.
%
%   See also: getenv_matlab, setenv_matlab, isenv_matlab, clearenv_matlab,
%   rmenv_matlab

ENV_VAR = 'tp797df2ec_d34b_4fb0_b679_ba253228f8a8';

if ~isappdata(0, ENV_VAR)
    setappdata(0, ENV_VAR, struct);
end

out = getappdata(0, ENV_VAR);

end