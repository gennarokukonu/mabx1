function varargout = slevalglobal(varargin)

pairs = {'Sys', bdroot(gcs), ...
    'Expression', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

if verLessThan('matlab', '8.5')
    try
        varargout = cell(nargout, 1);
        [varargout{:}] = evalin('base', ARGS.Expression);
    catch
        evalin('base', ARGS.Expression);
    end
else
    try
        varargout = cell(nargout, 1);
        [varargout{:}] = Simulink.data.evalinGlobal(ARGS.Sys, ARGS.Expression);
    catch
        Simulink.data.evalinGlobal(ARGS.Sys, ARGS.Expression);
    end
end

end