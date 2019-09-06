function paths = normcase(paths)
%normcase: returns lower case paths if ispc.
%
%   See also: pathcmp

waschar = false;
if ischar(paths)
    waschar = true;
    paths = ptc_matlab_lib.cellstr2(paths);
end

if ispc
    paths = lower(paths);
end

if length(paths) == 1 && waschar
    paths = paths{1};
end

end