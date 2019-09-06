function rmenv_matlab(varname)
%rmenv_matlab: Remove MATLAB environment variables
%
%   See also: getenv_matlab, setenv_matlab, listenv_matlab, isenv_matlab,
%   clearenv_matlab

ENV_VAR = 'tp797df2ec_d34b_4fb0_b679_ba253228f8a8';

if isappdata(0, ENV_VAR)
    thisval = getappdata(0, ENV_VAR);
    if isfield(thisval, varname)    
        setappdata(0, ENV_VAR, rmfield(thisval, varname));
    end
    if isempty(fieldnames(thisval))
        rmappdata(0, ENV_VAR);
    end
end

end