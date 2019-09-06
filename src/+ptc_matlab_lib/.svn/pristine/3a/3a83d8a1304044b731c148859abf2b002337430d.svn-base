function varargout = parseargs(varargin) %#ok<STOUT>
%PARSEARGS Simplified argument parsing
%   PARSEARGS(ARGLIST): ARGLIST is a cell array having the format
%   <VarName>, <VarValue>, <VarName>, <VarValue>, ... Each variable name is
%   instantiated in the calling function's workspace, with the corresponding
%   value. <VarVal> can be anything.
%
%   PARSEARGS(ARGLIST, DEFAULT_PAIRS): If DEFAULT_PAIRS is specified, the
%   values instantiated will be the ones specified in DEFAULT_PAIRS if the
%   corresponding values have not been specified in ARGLIST (i.e. ARGLIST
%   contains override values). DEFAULT_PAIRS has the same format as
%   ARGLIST.
%
%   e.g.
%   pairs = {'variable1', 10, ...
%            'variable2', 20, ...
%            'variable3', 30};
%   arglist = {'variable2', 'pqr'};
%   parseargs(arglist, pairs);
%
%   This will result in the variables 'variable1' (value 10), 'variable2'
%   (value 'pqr'), and 'variable3' (value 30) being instantiated in the
%   current workspace.
%
%   PARSEARGS(ARGLIST, DEFAULT_PAIRS, 'base'): Same action
%   as PARSEARGS(ARGLIST, DEFAULT_PAIRS), except that the variables are
%   instantiated in the base workspace rather than the caller workspace
%
%   PARSEARGS(ARGLIST, 'base'): Same action as PARSEARGS(ARGLIST), except
%   that the variables are instantiated in the base workspace rather than
%   the caller workspace.
%
%   PARSEARGS(ARGLIST, DEFAULT_PAIRS, 'caller'): Same action as
%   PARSEARGS(ARGLIST, DEFAULT_PAIRS);
%
%   ARGS = PARSEARGS(ARGLIST, DEFAULT_PAIRS): Returns the arguments as a
%   structure
%
%   NOTE: 'caller' here refers to the caller of parseargs

import('ptc_matlab_lib.*');

varargin(cellfun(@isempty, varargin)) = [];
n_in = numel(varargin);
if n_in == 1
    varargin_pairs = varargin{1};
    pairs = varargin_pairs;
    DestWorkSpace = 'caller';
elseif n_in == 2
    varargin_pairs = varargin{1};
    if ischar(varargin{2}) && ismember(varargin{2}, {'base', 'caller'})
        pairs = varargin_pairs;
        DestWorkSpace = varargin{2};
    else
        pairs = varargin{2};
        DestWorkSpace = 'caller';
    end
elseif n_in == 3
    varargin_pairs = varargin{1};
    pairs = varargin{2};
    DestWorkSpace = varargin{3};
end

pairs = [columnvec(pairs(1:2:end)) columnvec(pairs(2:2:end))];

is_reserved_list = cellfun(@iskeyword, pairs(:, 1));
if any(is_reserved_list) && nargout == 0
    error([mfilename ':' thisfuncname ':ReservedWord'], ['''' pairs{find(is_reserved_list, 1), 1} ''' is a reserved word.']);
end

varargin_pairs = [columnvec(varargin_pairs(1:2:end)) columnvec(varargin_pairs(2:2:end))];
[override_indices, loc] = ismember(pairs(:, 1), varargin_pairs(:, 1));
pairs(override_indices, 2) = varargin_pairs(nonzeros(loc), 2);

if nargout == 0
    [~, varname] = fileparts(tempname);
    for ctr = 1:size(pairs, 1)
        assignin(DestWorkSpace, varname, pairs{ctr, 2});
        evalin(DestWorkSpace, [pairs{ctr, 1} ' = ' varname '; clear(''' varname ''');']);
    end
else
    for ctr = 1:size(pairs, 1)
        eval(['varargout{1}.' pairs{ctr, 1} ' = pairs{ctr, 2};']);
    end
end

end