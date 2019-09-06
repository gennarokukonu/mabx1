function out = pathcmp(path1, path2)
%PATHCMP Compare paths (case insensitive if ispc, else case sensitive)
%
%   See also: normcase, filecmp, strcmp, strcmpi

if ispc
    out = strcmpi(ptc_matlab_lib.evaldir(path1), ptc_matlab_lib.evaldir(path2));
else
    out = strcmp(ptc_matlab_lib.evaldir(path1), ptc_matlab_lib.evaldir(path2));
end

end