function DS = unique_custom(DataSet, varargin)
%UNIQUE_CUSTOM: Implementation of MATLAB's built in 'unique' function, but
%one which has the option of treating NaNs as equal. Works on arbitrary
%cell arrays, but this function is very slow for large datasets
%
%   unique_custom(DataSet, 'TreatNaNsEqual', <false>): Can be set to true
%
%   See also: unique

import('ptc_matlab_lib.*');

pairs = {'TreatNaNsEqual', false};
parseargs(varargin, pairs);

DS = DataSet(:);

ctr = 1;
while ctr <= length(DS)
    ctr2 = ctr + 1;
    while ctr2 <= length(DS)
        if TreatNaNsEqual && isequaln(DS(ctr), DS(ctr2)) || ~TreatNaNsEqual && isequal(DS(ctr), DS(ctr2))
            temp = DS(1:ctr2-1);
            if (ctr2+1) <= length(DS)
                DS = [temp; DS(ctr2+1:end)];
            else
                DS = temp;
            end
            ctr2 = ctr2 - 1;
        end
        ctr2 = ctr2 + 1;
    end
    ctr = ctr + 1;
end

if isrow(DataSet)
    DS = (DS(:)).';
end

end