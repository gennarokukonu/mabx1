function varargout = disable_handles(varargin)
%DISABLE_HANDLES Disable multiple handles.
%
%   DISABLE_HANDLES('HandleList', <HandleList>): Disables all handles
%   specified in HandleList if possible. Returns list of handles that got
%   disabled.
%
%   See also: enable_handles

import('ptc_matlab_lib.*');

pairs = {'HandleList', [], ...
    'IncludeChildHandles', true};
ARGS = parseargs(varargin, pairs);

if ARGS.IncludeChildHandles
    HandleList = findobj(ARGS.HandleList, 'Enable', 'on');
else
    HandleList = findobj(ARGS.HandleList, 'flat', 'Enable', 'on');
end
set(HandleList, 'Enable', 'off'); drawnow;

varargout{1} = HandleList(:);

end