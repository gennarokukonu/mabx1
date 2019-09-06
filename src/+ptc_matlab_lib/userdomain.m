function out = userdomain

if ispc
    out = getenv('USERDOMAIN');
else
    error([ptc_matlab_lib.mfilename ':' ptc_matlab_lib.thisfuncname ':UnsupportedOS'], 'Unsupported operating system.');
end

end