function DS = union_custom(varargin)
%UNION_CUSTOM: Implementation of MATLAB's built in 'union' function, but
%one which has the option of treating NaNs as equal. Works on arbitrary
%cell arrays, but this function is very slow for large datasets
%
%   union_custom('DataSets', {DataSet1, DataSet2}, 'TreatNaNsEqual', <false>): Can be set to true
%
%   See also: union

import('ptc_matlab_lib.*');

pairs = {'DataSets', {}, ...
    'TreatNaNsEqual', false};
ARGS = parseargs(varargin, pairs);

DataSets = cellfun(@(X) X(:), ARGS.DataSets, 'UniformOutput', false);
DataSets = DataSets(:);
combined_ds = cat(1, DataSets{:});

DS = unique_custom(combined_ds, 'TreatNaNsEqual', ARGS.TreatNaNsEqual);

end