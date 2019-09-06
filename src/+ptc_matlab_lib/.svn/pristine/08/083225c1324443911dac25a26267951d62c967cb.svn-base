function out = distance(vec1, vec2, varargin)
%DISTANCE: Distance between two vectors
%
%   SYNTAX:
%   distance(vec1, vec2, <property>, <value>, ...)
%
%   Optional property/value pairs:
%   'DistanceType', <'Euclidean'>

pairs = {'DistanceType', 'Euclidean', ...
    'Order', []};
ARGS = ptc_matlab_lib.parseargs(varargin, pairs);

switch ARGS.DistanceType
    case 'Euclidean'
        out = sqrt(sum((vec1(:) - vec2(:)).^2));
    case 'Chebyshev'
        out = max(abs(vec1(:) - vec2(:)));
    case 'Hamming'
        out = nnz(vec1(:) ~= vec2(:));
    case 'Mahalanobis'
        out = sqrt(sum(((vec1(:) - vec2(:)).^2)./var([vec1(:), vec2(:)], 0, 2)));
    case 'Manhattan'
        out = sum(abs(vec1(:) - vec2(:)));
    case 'Minkowski'
        out = (sum((abs(vec1(:) - vec2(:))).^(ARGS.Order))).^(1/ARGS.Order);
    case 'Canberra'
        out = sum(abs(vec1(:) - vec2(:))./(abs(vec1(:)) + abs(vec2(:))));
    case 'Kullback-Leibler'
        out = sum(vec1(:) .* log(vec1(:)./vec2(:)));
    otherwise
        error([mfilename ':' ptc_matlab_lib.thisfuncname ':UnsupportedDistanceType'], ['The distance type ''' ARGS.DistanceType ''' is not supported.']);
end

end