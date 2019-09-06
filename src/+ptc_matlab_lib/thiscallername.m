function out = thiscallername
%THISCALLERNAME: Returns the name of the caller function
%
%   See also: mfilename, thisfuncname

stack = dbstack;
try
    out = stack(3);
    out = out.name;
catch %#ok<CTCH>
    out = 0;
end

end