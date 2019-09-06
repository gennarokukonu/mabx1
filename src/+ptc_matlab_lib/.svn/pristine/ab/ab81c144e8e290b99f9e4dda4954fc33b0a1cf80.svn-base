function varargout = get_datatype_info(varargin)
%This function requires Simulink to be installed.

pairs = {'DataType', ''};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);
try
    varargout{1} = fixdt(ARGS.DataType);
catch %#ok<CTCH>
    varargout{1} = ptc_matlab_lib.evalsafe(ARGS.DataType);
end

end