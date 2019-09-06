function varargout = OpenExperimentFromBackup(obj, varargin)
%OPENEXPERIMENT: This function opens a ControlDeskNG experiment from an
%archived backup specified by the caller. If a backup is not specified the
%function will request an archive through the uigetfile() protocol. Any
%projects currently open will be closed.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%   SYNTAX:
%   OpenExperimentFromBackup(<Property>, <Value>, ...)
%   
%   'BackupFilePath', <string>: A string specifying the path to the
%                     directory containing the project backup.
%
%   'ArchiveName', <string>: A string specifying the name of the Archive.
%                  i.e. 'ProjectArchive'
%
%   'CDPFile', <string>: A string specifying the name of the CDP File.
%              i.e. 'ProjectName.CDP'

%   'ExperimentName', <string>: A string specifying the name of the CDP
%                     file of the experiment to open.
%                     i.e. 'HILExperiment'
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   Contact: Kyle Willis (kyle.willis@paccar.com)

import('ptc_matlab_lib.*');

pairs={'BackupFilePath','',...
       'ArchiveName','',...
       'CDPFile','',...
       'ExperimentName',''};
ARGS=parseargs(varargin, pairs);

% Close currently open projects, if any.
if ~isempty(obj.PROJECT_INTERFACE.ActiveProject)
    obj.PROJECT_INTERFACE.ActiveProject.Close(0);
end

ARGS.BackupFilePath = strtrim(ARGS.BackupFilePath);

if isempty(ARGS.BackupFilePath)
    foldername = uigetdir(pwd)
    if isequal(foldername, 0)
        %Cancel was pressed
        return;
    else
        ARGS.BackupFilePath = evaldir(fullfile(foldername));
    end    
end

archivedir=evaldir(fullfile(ARGS.BackupFilePath,ARGS.ArchiveName));
if isequal(exist(archivedir,'folder'),7)
   rmdir(archivedir,'s');
end
unzip(ARGS.ArchiveName,ARGS.BackupFilePath);

cdppath=fullfile(ARGS.BackupFilePath,ARGS.ArchiveName,ARGS.CDPFile);
obj.OpenExperiment('CDPFilePath',cdppath,...
                   'ExperimentName',ARGS.ExperimentName)

varargout{1}=1;

end

