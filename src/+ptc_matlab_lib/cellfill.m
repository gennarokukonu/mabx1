function [cellArray] = cellfill(m, n, filler)
%% Cellfill
%    [cellArray] = cellfill(m, n, filler)
%    [cellArray] = cellfill([m n], filler)
%    creates an [m x n] cell array and fills each 
%    element with the specified value 'filler'
%
% Revision History
%   2.[EO]2010.03.22 Updated documentation and allowed [m n] input method.
%                    Inproved argin checking.
%   1.[EO]2009.05.04 Initial revision

%% Script
if nargin < 2
    disp('ERROR: Not enought input arguments for function cellfill')
    cellArray = [];
    return
end

if numel(m) == 2 && nargin == 2
    filler = n;
    n = m(2);
    m = m(1);
elseif numel(m) ~= 1 || numel(n) ~= 1 || nargin < 3
    disp('ERROR: Input values to cellfill are not correct')
    cellArray = [];
    return
end

cellArray = cell(m, n);

for i = 1:(m*n)
    cellArray{i} = filler;
end