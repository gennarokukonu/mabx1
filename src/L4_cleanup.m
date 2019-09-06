function L4_cleanup

%Base workspace cleanup
evalin('base', 'clear all;');
bdclose('all');

%Remove paths that were previously added
paths_to_remove = ptc_matlab_lib.getenv_matlab('PATHS_TO_REMOVE');
ptc_matlab_lib.rmenv_matlab('PATHS_TO_REMOVE');
for thisPath = ptc_matlab_lib.rowvec(paths_to_remove(end:-1:1))
    rmpath(thisPath{1});
end

clc;

end