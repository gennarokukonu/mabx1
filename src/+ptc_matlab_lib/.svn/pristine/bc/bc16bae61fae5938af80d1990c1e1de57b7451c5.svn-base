function varargout = ttest2_custom(varargin)
%TTEST2_CUSTOM: Student's T test
%   TTEST2_CUSTOM('DataSet', <DataSet Structure>, 'ConfidenceLevel',
%   <0.95>);
%   
%   DataSet needs to have the following fields:
%   - x1: Sample data set
%   - x2: Population data set

import('ptc_matlab_lib.*');

pairs = {'DataSet', [], ...
    'ConfidenceLevel', 0.95};
parseargs(varargin, pairs);

%Fields of the DataSet structure:
%1. x1
%2. x2

outset(length(DataSet)) = struct('x1', [], ...
    'x2', [], ...
    's1', [], ...
    's2', [], ...
    'n1', [], ...
    'n2', [], ...
    'x1bar', [], ...
    'x2bar', [], ...
    'method', [], ...
    'test_statistic', [], ...
    'degrees_of_freedom', [], ...
    'pvalue', [], ...
    'estimated_difference', [], ...
    'ConfidenceLevel', [], ...
    'CI_lower_limit', [], ...
    'CI_upper_limit', []);

%Looping over each data set
for DataSetIndex = 1:length(DataSet)
   
    x1 = DataSet(DataSetIndex).x1; %Sample
    x2 = DataSet(DataSetIndex).x2; %Population
    
    s1 = std(x1); %Sample
    s2 = std(x2); %Population
    n1 = length(x1); n2 = length(x2);
    
    %See
    %http://en.wikipedia.org/wiki/Student%27s_t-test#Unequal_sample_sizes.2C_unequal_variance
    test_statistic = (mean(x1) - mean(x2))/(sqrt(s1*s1/n1 + s2*s2/n2));
    
    
    %Calculation of degrees of freedom
    numerator = (s1*s1/n1 + s2*s2/n2)^2;
    denominator = ((s1*s1/n1)^2)/(n1-1) + ((s2*s2/n2)^2)/(n2-1);
    degrees_of_freedom = floor(numerator/denominator);
    
    pvalue = tpdf_custom(test_statistic, degrees_of_freedom);
   
    %Estimate of difference
    estimated_difference = mean(x1) - mean(x2);
    
    alpha = 1 - ConfidenceLevel;
    critical_value = tinv_custom(0.5*alpha, degrees_of_freedom);
    CI_lower_limit = (mean(x1) - mean(x2)) - critical_value*sqrt(s1*s1/n1 + s2*s2/n2);
    CI_upper_limit = (mean(x1) - mean(x2)) + critical_value*sqrt(s1*s1/n1 + s2*s2/n2);
    
    
    outset(DataSetIndex).x1 = DataSet(DataSetIndex).x1;
    outset(DataSetIndex).x2 = DataSet(DataSetIndex).x2;
    outset(DataSetIndex).s1 = s1;
    outset(DataSetIndex).s2 = s2;
    outset(DataSetIndex).n1 = n1;
    outset(DataSetIndex).n2 = n2;
    outset(DataSetIndex).x1bar = mean(x1);
    outset(DataSetIndex).x2bar = mean(x2);
    outset(DataSetIndex).method = 'Student''s t-test';
    outset(DataSetIndex).test_statistic = test_statistic;
    outset(DataSetIndex).degrees_of_freedom = degrees_of_freedom;
    outset(DataSetIndex).pvalue = pvalue;
    outset(DataSetIndex).estimated_difference = estimated_difference;
    outset(DataSetIndex).ConfidenceLevel = ConfidenceLevel;
    outset(DataSetIndex).CI_lower_limit = CI_lower_limit;
    outset(DataSetIndex).CI_upper_limit = CI_upper_limit;
    
end

%Finally, get the return value
varargout{1} = outset;

end


%% %%%%%%%%%%%%%%%%%%%%