function out = shufflerows(matrix)
%SHUFFLEROWS shuffles the rows of a matrix
%   SYNTAX: shuffled_matrix = shufflerows(matrix);
%
%   See Also: sortrows, shuffle

indices = randperm(rows(matrix)); %#ok<*NASGU>
evalstr = ['matrix(indices', repmat(', :', 1, ndims(matrix)-1), ');'];
out = eval(evalstr);

end