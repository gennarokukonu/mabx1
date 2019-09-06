function varargout = CloseProject(obj, varargin)
%CLOSEPROJECT: This function closes the current ControlDeskNG project. A
%call to this function can specify to backup this project before closing.
%If a backup is specified, the directory to save the archive can also be
%specified.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   SYNTAX:
%   CloseProject(<Property>, <Value>, ...)
%   
%   'Backup', <true>: Backup the project upon closing.
%             <false>(default): Do not backup the project.
%
%   'ArchivePath', <string>: A string specifying the path to the directory
%                  in which to save the archive.
%                  <''>(default): If a path to the backup directory is not
%                  specified then the project backup will be stored in the
%                  default location, 1 directory up from the location of
%                  the project CDP file.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   Contact: Kyle Willis (kyle.willis@paccar.com)

import('ptc_matlab_lib.parseargs');

pairs={'Backup','false',...
       'ArchivePath',''};
ARGS=parseargs(varargin, pairs);

% If Backup was specified, save and backup the project before closing.
if strcmp(ARGS.Backup,'true')
    % Save and Backup the project to the specified path.
    obj.PROJECT_INTERFACE.ActiveProject.Save();
    backuppath=ARGS.ArchivePath;
    if isempty(backuppath)
        % Backup to default directory, 1 folder up from CDP file,
        % overwriting previous backup if necessary.
        backuppath=fullfile(obj.PROJECT_INTERFACE.ActiveProject.DirectoryName,'..');
    end
    %Check backuppath for existing files with same name as project and
    %overwrite if necessary.
    projectArchiveName=[obj.PROJECT_INTERFACE.ActiveProject.Name,'.ZIP'];
    if exist(projectArchiveName,'file') 
        delete(projectArchiveName); 
    end
    
    % Backup project to backuppath
    obj.PROJECT_INTERFACE.ActiveProject.Backup(backuppath);
    
end

% Close the project
obj.PROJECT_INTERFACE.ActiveProject.Close(0)

varargout{1}=1;

end

