function out = columnvec(matrix)
%COLUMNVEC Returns an input matrix as an equivalent column vector
%
%   SYNTAX:
%   OUT = COLUMNVEC(X): Returns all elements in X as a column vector. X may be a
%   numeric matrix or a cell array, or a string.
%
%   See also: rowvec, isrow, iscolumn

out = matrix(:);

end
