function out = tpdf_custom(t, v)
%TPDF_CUSTOM: Probability density function of the t-distribution.
%   TPDF_CUSTOM(T, V): For V degrees of freedom and values T

term1 = (1 + (t^2)/v)^((-v-1)/2);
term2 = gamma((v+1)/2);
term3 = sqrt(v*pi);
term4 = gamma(v/2);

out = (term2/(term3*term4))*term1;

end