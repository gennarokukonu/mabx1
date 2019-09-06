function splashscreen(varargin)

import('ptc_matlab_lib.*');
pairs = {'FilePath', '', ...
    'TimeSeconds', 4};
ARGS = parseargs(varargin, pairs);

I = imread(ARGS.FilePath);

splashImage = im2java(I);
win = javax.swing.JWindow;
icon = javax.swing.ImageIcon(splashImage);
label = javax.swing.JLabel(icon);
win.getContentPane.add(label);
win.setAlwaysOnTop(true);
win.pack;

%% set the splash image to the center of the screen
screenSize = get(0, 'ScreenSize');
screenWidth = screenSize(3);
screenHeight = screenSize(4);

% get the actual splashImage size
imgHeight = size(I, 1);
imgWidth = size(I, 2);
win.setLocation(0.5*(screenWidth-imgWidth), 0.5*(screenHeight-imgHeight));

win.show % show the splash screen

SplashWindowEnvStr = ['SplashWindow_' randstring(5)];
setenv_matlab(SplashWindowEnvStr, win);

TimerObj = timer('StartDelay', ARGS.TimeSeconds, ...
    'ExecutionMode', 'singleShot', ...
    'Name', 'TimerObj', ...
    'TimerFcn', @(X, Y) closewindow('SplashWindowEnvStr', SplashWindowEnvStr));
start(TimerObj);

end

function closewindow(varargin)

import('ptc_matlab_lib.*');
pairs = {'SplashWindowEnvStr', ''};
ARGS = parseargs(varargin, pairs);

win = getenv_matlab(ARGS.SplashWindowEnvStr);
win.dispose;
rmenv_matlab(ARGS.SplashWindowEnvStr);

end