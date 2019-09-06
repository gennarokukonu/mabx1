function varargout = pathcat(varargin)

import('ptc_matlab_lib.*');
pairs = {'Params', {}, ...
   'PathSeparator', filesep};
ARGS = parseargs(varargin, pairs);

ARGS.Params = cellstr2(ARGS.Params);
Params = regexprep(ARGS.Params, [regexptranslate('escape', ARGS.PathSeparator) '+$'], '');
varargout{1} = strimplode(Params, ARGS.PathSeparator);

end