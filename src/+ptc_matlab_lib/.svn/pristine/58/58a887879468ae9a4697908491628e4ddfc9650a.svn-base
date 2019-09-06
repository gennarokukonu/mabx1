function out = existvar(varargin)
%EXISTVAR Check for the existence of a list of variables
%	existvar('Location', <'caller'>, 'Vars', {'var1', 'var2'})
%	existvar('Location', 'base', 'Vars', 'var1')
%	existvar('Location', <MAT File Path>, 'Vars', {'var1', 'var2'})
%
%   See also: exist, who

import('ptc_matlab_lib.*');

pairs = {'Location', 'caller', ...
    'Vars', {}};
parseargs(varargin, pairs);
Vars = cellstr(Vars); %#ok<NODEF>

if strcmp(Location, 'base')
    out = cellfun(@(X) evalin('base', ['exist(''' X ''', ''var'');']), Vars);
elseif strcmp(Location, 'caller')
    out = cellfun(@(X) evalin('caller', ['exist(''' X ''', ''var'');']), Vars);
elseif exist(Location, 'file')
    out = ~cellfun(@(X) isempty(who('-file', Location, X)), Vars);
end


end