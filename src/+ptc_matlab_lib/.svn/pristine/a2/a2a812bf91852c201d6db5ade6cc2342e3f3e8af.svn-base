function out = normcdf_custom(X, mu, sigma)
%NORMCDF_CUSTOM: CDF of the normal distribution
%
%   SYNTAX:
%   OUT = NODMCDF_CUSTOM(X, MU, SIGMA)
%   
%   Default values: MU = 0; SIGMA = 1

if nargin==1
    mu = 0; sigma = 1;
end

out = 0.5 * (1 + erf((X-mu)/(sigma*sqrt(2))));

end