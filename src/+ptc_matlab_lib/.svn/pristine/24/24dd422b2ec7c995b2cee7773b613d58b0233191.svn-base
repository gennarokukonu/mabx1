function alwaysontop(hndl, val)
%ALWAYSONTOP Function to set a figure's 'always on top' property.
%
%   SYNTAX:
%   alwaysontop(hndl, true): Sets the figure's 'always on top' property to
%   true. 
%
%   alwaysontop(hndl, false): Sets the figure's 'always on top' property to
%   false.

if ~verLessThan('matlab', '8.4')
    return;
end

import('ptc_matlab_lib.*');

s = warning('query', 'MATLAB:HandleGraphics:ObsoletedProperty:JavaFrame');

try
    warning('off', 'MATLAB:HandleGraphics:ObsoletedProperty:JavaFrame');
    drawnow;
    jFrame = get(hndl, 'JavaFrame');
    javaMethod('setAlwaysOnTop', jFrame.fHG1Client.getWindow, val);
    warning(s.state, 'MATLAB:HandleGraphics:ObsoletedProperty:JavaFrame');
catch ME
    showerror(ME);
    warning(s.state, 'MATLAB:HandleGraphics:ObsoletedProperty:JavaFrame');
end

end
