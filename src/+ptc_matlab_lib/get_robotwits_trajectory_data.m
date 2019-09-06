function varargout = get_robotwits_trajectory_data(varargin)

import('ptc_matlab_lib.*');
pairs = {'FilePath', '', ...
    'ShowWaitbar', true, ...
    'WaitbarParams', cell(0, 1), ...
    'HashAlgorithm', 'SHA-512'};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.FilePath, 'file')
    [filename, pathname] = uigetfile({'*.txt', 'RobotWits Trajectory File (*.txt)'}, 'Select RobotWits Trajectory File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.FilePath = fullfile(pathname, filename);
end
TRAJECTORY.FilePath = ARGS.FilePath;
TRAJECTORY.HashAlgorithm = ARGS.HashAlgorithm;
TRAJECTORY.Hash = hashfile('FilePath', TRAJECTORY.FilePath, 'HashAlgorithm', TRAJECTORY.HashAlgorithm);

if ARGS.ShowWaitbar
    ticid = tic;
    waitbar_hndl = waitbar(0, 'Parsing RobotWits Trajectory file, please wait...', 'Pointer', 'watch', 'CloseRequestFcn', '', ARGS.WaitbarParams{:});
end

NUMBER_OF_STEPS = 10;
CURRENT_STEP = 0;

%% Step 1: Read RobotWits Trajectory File
fid = fopen(ARGS.FilePath);
file = textscan(fid, '%s', 'Delimiter', '\n', 'Whitespace', '');
file = file{1};
fclose(fid);

%% Step 2: Commence processing
keyboard;

end