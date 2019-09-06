function varargout = princomp_custom(varargin)
%PRINCOMP_CUSTOM: Returns the principal component of a data set X
%X is an N by P matrix, where N is the number of observations, and P is the
%number of variables

import('ptc_matlab_lib.*');

pairs = {'DataSet', [], ...
    'NumberOfComponents', 1};
parseargs(varargin, pairs);

%Step 1: Obtain X
X = DataSet; clear('DataSet');

%Step 2: Subtract the mean
Xbar = X;
for col = 1:cols(X)
    Xbar(:, col) = X(:, col) - mean(X(:, col));
end

%Step 3: Calculate the covariance matrix
covXbar = cov(Xbar);


%Step 4: Calculate the eigenvectors and eigenvalues of the covariance
%matrix
[eigenvectors, eigenvalues_diagonal_matrix] = eig(covXbar);
eigenvalues = diag(eigenvalues_diagonal_matrix);

%Step 5: Choosing components and forming the feature vector
[dummy, indices] = sort(eigenvalues, 1, 'descend'); clear('dummy'); %#ok<*ASGLU>
principal_components_ordered = eigenvectors(:, indices);

if isequal(NumberOfComponents, 'all') %#ok<*NODEF>
    NumberOfComponents = cols(principal_components_ordered);
end
principal_components = principal_components_ordered(:, 1:NumberOfComponents);

varargout{1} = principal_components;

%Mean adjusted data
varargout{2} = Xbar;

end