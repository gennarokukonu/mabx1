function addvar(varargin)
%ADDVAR Add variables to a specified MAT file
%
%   SYNTAX:
%   addvar('DestinationMATFile', <DestinationMATFile>, 'Vars', {'var1',
%   'var2'}, 'Vals', {[], []})
%
%   See also: rmvar

import('ptc_matlab_lib.*');

pairs = {'DestinationMATFile', '', ...
    'Vars', {}, ...
    'Vals', {}};
parseargs(varargin, pairs);

Vars = cellstr(Vars); %#ok<NODEF>
Vars = (Vars(:)).';
Vals = (Vals(:)).'; %#ok<NODEF>

S = cell2struct(Vals, Vars, 2); %#ok<NASGU>
save(DestinationMATFile, '-struct', 'S', '-append', '-v7.3');

end