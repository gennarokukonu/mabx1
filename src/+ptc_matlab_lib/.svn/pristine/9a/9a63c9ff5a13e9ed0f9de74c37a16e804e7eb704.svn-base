function varargout = Quit(obj, varargin )
%QUIT

import('ptc_matlab_lib.parseargs');

pairs = {'save',0,...
         'delete',0};
ARGS=parseargs(varargin, pairs);

try
    obj.GoOffline;
    obj.PROJECT_INTERFACE.Quit(ARGS.save);
    if (ARGS.delete==1)
        obj.delete;
    end
    rvalue=1;
catch
    rvalue=0;
end

varargout{1}=rvalue;

end

