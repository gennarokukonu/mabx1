function varargout = get_num_occurrences(varargin)

import('ptc_matlab_lib.*');
pairs = {'InputArray', cell(0, 1)};
ARGS = parseargs(varargin, pairs);

if ~iscellstr(ARGS.InputArray) && ~isnumeric(ARGS.InputArray)
    error([mfilename ':' thisfuncname() ':InvalidInputArray'], 'InputArray is invalid. Only cell arrays of strings and numeric arrays are permitted');
end

if iscellstr(ARGS.InputArray)
    [Element, loc] = unique(ARGS.InputArray);
    Frequency = cellfun(@(X) nnz(strcmp(X, ARGS.InputArray)), Element);
elseif isnumeric(ARGS.InputArray)
    [Element, loc, idx] = unique(ARGS.InputArray);
    Frequency = accumarray(idx, 1);
end

varargout = {struct('Element', {Element(:)}, 'Frequency', {Frequency(:)});
	loc};

end