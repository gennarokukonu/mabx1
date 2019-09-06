function varargout = set_param_breaklink(object, varargin)
%set_param_breaklink: If the object is inside a resolved library link, it
%will break all library links recursively.

import('ptc_matlab_lib.*');

varargout{1} = break_parent_links(object);

set_param(object, varargin{:});

end