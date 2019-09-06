function rmvar(varargin)
%RMVAR Clear variables from a specified MAT file
%
%   SYNTAX:
%   rmvar('SourceMATFile', <Source MAT File Path>, 'Vars', {'var1',
%   'var2'}, 'Obliterate', false)
%
%   See also: addvar

import('ptc_matlab_lib.*');

pairs = {'SourceMATFile', '', ...
    'Vars', {}, ...
    'Obliterate', false};
parseargs(varargin, pairs);

Vars = cellstr(Vars); %#ok<NODEF>

if Obliterate
    x = load(SourceMATFile);
    x = rmfield(x, Vars); %#ok<NASGU>
    save(SourceMATFile, '-struct', 'x', '-v7.3');
else
    Vals = repmat({[]}, 1, length(Vars));
    S = cell2struct(Vals(:), Vars(:), 1); %#ok<NASGU>
    save(SourceMATFile, '-struct', 'S', '-append', '-v7.3');
end

end