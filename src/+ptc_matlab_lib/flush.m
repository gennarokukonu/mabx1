function flush(varargin)
%FLUSH

import('ptc_matlab_lib.*');

if ~isdeployed
    ROOT_DIR = fileparts(evaldir(fullfile(mfilename('fullpath'), '..')));
else
    ROOT_DIR = pwd;
end

CURRENT_DIR = pwd;

cd(ROOT_DIR);

%% Close all figures
hndls_to_delete = get(0, 'Children');
for ctr = 1:length(hndls_to_delete)
    try %#ok<TRYNC>
        delete(hndls_to_delete(ctr));
    end
end
hndls_to_delete = findobj(findall(0));
for ctr = 1:length(hndls_to_delete)
    try %#ok<TRYNC>
        delete(hndls_to_delete(ctr));
    end
end

%% Close all open timer objects
delete(timerfindall);

%% Close all existing open serial objects
objlist = instrfind;
for ctr = 1:length(objlist)
    try
        fclose(objlist(ctr));
    catch
    end
    try
        delete(objlist(ctr));
    catch
    end
end

if ~isdeployed
    paths_to_remove = getenv_matlab('ENV_VAR_PATHS_TO_REMOVE');
    s = warning('query', 'MATLAB:rmpath:DirNotFound');
    warning('off', 'MATLAB:rmpath:DirNotFound');
    for ctr = 1:length(paths_to_remove)
        try
            rmpath(paths_to_remove{ctr});
        catch ME
            warning(s.state, 'MATLAB:rmpath:DirNotFound');
            rethrow(ME);
        end
    end
    warning(s.state, 'MATLAB:rmpath:DirNotFound');
    
    java_paths_to_remove = getenv_matlab('ENV_VAR_JAVA_PATHS_TO_REMOVE');
    s1 = warning('query', 'MATLAB:GENERAL:JAVARMPATH:NotFoundInPath');
    s2 = warning('query', 'MATLAB:rmpath:DirNotFound');
    warning('off', 'MATLAB:GENERAL:JAVARMPATH:NotFoundInPath');
    warning('off', 'MATLAB:rmpath:DirNotFound');
    for ctr = 1:length(java_paths_to_remove)
        try
            rmpath(java_paths_to_remove{ctr});
        catch ME
            warning(s1.state, 'MATLAB:GENERAL:JAVARMPATH:NotFoundInPath');
            warning(s2.state, 'MATLAB:rmpath:DirNotFound');
            rethrow(ME);
        end
    end
    warning(s1.state, 'MATLAB:GENERAL:JAVARMPATH:NotFoundInPath');
    warning(s2.state, 'MATLAB:rmpath:DirNotFound');
end

%% Clear all custom environment variables
clearenv_matlab;

%%
if exist(CURRENT_DIR, 'dir')
    cd(CURRENT_DIR);
end

%Some more cleanup operations
try %#ok<TRYNC>
    evalin('base', 'bdclose(''all'');');
end
evalin('base', 'close(''all'');');
evalin('base', 'clear(''functions'');');
evalin('base', 'clear(''all'');');

end