function varargout = OpenExperiment(obj, varargin)
%OPENEXPERIMENT: This function closes the current ControlDeskNG project. A
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

pairs={'CDPFilePath','',...
       'ExperimentName',''};
ARGS=parseargs(varargin, pairs);

% Close currently open projects, if any
if ~isempty(obj.PROJECT_INTERFACE.ActiveProject)
    obj.PROJECT_INTERFACE.ActiveProject.Close(0);
end

ARGS.CDPFilePath = strtrim(ARGS.CDPFilePath);

if isempty(ARGS.CDPFilePath) || ~exist(ARGS.ExperimentName, 'file')
    [filename, pathname] = uigetfile({'*.CDP', 'CDP File'}, 'Choose CDP File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        return;
    else
        ARGS.CDPFilePath = evaldir(fullfile(pathname, filename));
    end    
end


obj.PROJECT_INTERFACE.OpenExperiment(ARGS.CDPFilePath, ARGS.ExperimentName);

varargout{1}=1;

end

