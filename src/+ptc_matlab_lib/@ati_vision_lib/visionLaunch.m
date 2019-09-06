function varargout = visionLaunch(obj, varargin)
% visionLaunch(varargin):
%
% Description: Function to launch ATI Vision
%
% Syntax: error_code = visionLaunch;
%         error_code = visionLaunch('Force', true);
%
% Parameters:
%     Force - Default value, false. If specified as true, the
%     function kills any open instances of Vision.exe and attempts
%     to relaunch Vision.
%
% Return value: Returns an error code. Zero means success

import('ptc_matlab_lib.*');

pairs = {'Force', false, ...
    'VisionExecutablePath', {fullfile(getenv('PROGRAMFILES(X86)'), 'Accurate Technologies', 'VISION 3.8.3', 'Vision.exe')}};
ARGS = parseargs(varargin, pairs);

idx = cellfun(@(X) exist(X, 'file'), ARGS.VisionExecutablePath(:));
idx = find(idx, 1, 'last');
if isempty(idx)
	[filename, pathname] = uigetfile({'Vision.exe', 'Vision.exe'}, 'Select Vision Executable', getenv('PROGRAMFILES(X86)'));
	if isequal(filename, 0) || isequal(pathname, 0)
		%Cancel was pressed
		varargout{1} = obj.ERRORCODES.VISION_UNABLE_TO_LAUNCH;
		return;
	end
	ARGS.VisionExecutablePath = {fullfile(pathname, filename)}; idx = 1;
end

if ~ismember('Vision.exe', GetActiveProcesses)
    try
        winopen(ARGS.VisionExecutablePath{idx});
        if ismember('Vision.exe', GetActiveProcesses)
            rvalue = obj.ERRORCODES.VISION_SUCCESS;
        else
            rvalue = obj.ERRORCODES.VISION_UNABLE_TO_LAUNCH;
        end
    catch
        rvalue = obj.ERRORCODES.VISION_UNABLE_TO_LAUNCH;
    end
else
    if ARGS.Force
        system('taskkill /im Vision.exe /f');
        rvalue = obj.(thisfuncname);
    else
        rvalue = obj.ERRORCODES.VISION_ALREADY_OPEN;
    end
end

varargout{1} = rvalue;

end