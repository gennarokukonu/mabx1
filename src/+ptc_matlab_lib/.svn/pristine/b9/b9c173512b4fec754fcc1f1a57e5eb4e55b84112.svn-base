%MAXIMIZE_FIGURE  Maximize a figure window to fill the entire screen
%
% Examples:
%   maximize_figure
%   maximize_figure(hFig)
%
% Maximizes the current or input figure so that it fills the whole of the
% screen that the figure is currently on. This function is platform
% independent.
%
%IN:
%   hFig - Handle of figure to maximize. Default: gcf.
%
%   See also: minimize_figure

function maximize_figure(hFig)

import('ptc_matlab_lib.*');

if nargin < 1
    hFig = gcf;
elseif nargin==1 && ~isfigure(hFig)
    error([mfilename ':' thisfuncname ':InvalidDataType'], 'Invalid data type');
elseif ~verLessThan('matlab', '8.4')
    % Does not work with R2014b
    return;
end

drawnow; % Required to avoid Java errors
jFig = get(handle(hFig), 'JavaFrame');
jFig.setMaximized(true);

end