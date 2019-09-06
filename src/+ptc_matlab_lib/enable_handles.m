function varargout = enable_handles(varargin)
%ENABLE_HANDLES Enables disabled handles. Returns list of handles that got
%enabled.
%
%   enable_handles('HandleList', <[]>). Enables the list of handles
%   specified, returns the list of handles that got enabled.
%
%   See also: disable_handles

import('ptc_matlab_lib.*');

pairs = {'HandleList', [], ...
    'IncludeChildHandles', true};
ARGS = parseargs(varargin, pairs);

if ARGS.IncludeChildHandles
    HandleList = findobj(ARGS.HandleList, 'Enable', 'off');
else
    HandleList = findobj(ARGS.HandleList, 'flat', 'Enable', 'off');
end
set(HandleList, 'Enable', 'on'); drawnow;

varargout{1} = HandleList;

end