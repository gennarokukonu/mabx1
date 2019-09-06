%MINIMIZE_FIGURE  Minimize a figure window
%
% Examples:
%   minimize_figure;
%   minimiz_figure(hFig)
%
% Minimizes the current or input figure. This function is platform
% independent.
%
%IN:
%   hFig - Handle of figure to minimize. Default: gcf.
%
%   See also: maximize_figure

function minimize_figure(hFig)

import('ptc_matlab_lib.*');

if nargin < 1
    hFig = gcf;
elseif nargin==1 && ~isfigure(hFig)
    error([mfilename ':' thisfuncname ':InvalidDataType'], 'Invalid data type');
end

drawnow; % Required to avoid Java errors
jFig = get(handle(hFig), 'JavaFrame'); 
jFig.setMinimized(true);

end