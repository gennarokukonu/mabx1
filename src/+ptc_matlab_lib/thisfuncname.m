function out = thisfuncname
%THISFUNCNAME: Returns the name of the current function
%
%   See also: mfilename, thiscallername

stack = dbstack;
try
    out = stack(2);
    out = out.name;
catch %#ok<CTCH>
    out = 0;
end

end