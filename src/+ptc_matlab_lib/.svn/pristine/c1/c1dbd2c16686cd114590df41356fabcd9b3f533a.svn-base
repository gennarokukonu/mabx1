function varargout = structdiff(varargin)

import('ptc_matlab_lib.*');
pairs = {'StructA', struct([]), ...
    'StructB', struct([])};
ARGS = parseargs(varargin, pairs);

fieldsA = fieldnames(ARGS.StructA);
s = warning('off', 'Simulink:Data:ChangeOfBehaviorForIsEqual');
indices = cellfun(@(X) ~isfield(ARGS.StructB, X) || ~isequal(ARGS.StructA.(X), ARGS.StructB.(X)), fieldsA);
warning(s.state, 'Simulink:Data:ChangeOfBehaviorForIsEqual');
varargout{1} = partialstruct(ARGS.StructA, fieldsA(indices));

end