function [data, newTime] = normalize(data, rate)
% normalize function: Takes ATI VISION *.mat data collected at one or
%                     multiple data rates and returns the data nomalized
%                     to one common data rate
%
% Revision History
%   1.[BW]20140401 Removed as subfunction and created for svn lib
%   2.[BW]20160422 Hold measurement values when newTime > or < measurement time 

    names = fieldnames(data);
    nSig = numel(names);
    nSig_1 = 1:nSig;
    
    for i = 1:nSig
        data.(names{i}).value = data.(names{i}).signals.values;
        % Start.Remove 'NaN' cells and non-distinct time
        test1 = diff(data.(names{i}).time) ~= 0; test1(end+1) = 1;
        testx = ~isnan(data.(names{i}).value) & ~isnan(data.(names{i}).time) & test1 ~= 0;
        data.(names{i}).value = data.(names{i}).value(testx);
        data.(names{i}).time = data.(names{i}).time(testx);
        if isempty(data.(names{i}).value) || isempty(data.(names{i}).time)
            data.(names{i}).value = 0; data.(names{i}).time = 0;
            disp(['WARNING: ' names(i) ' empty!'])
        end
        clear test test1
        % End.Remove 'NaN' cells
        temp1x(i) = max(data.(names{i}).time);
        temp2x(i) = min(data.(names{i}).time);
    end; clear i
    
    maxTime = max(temp1x); 
    minTime = min(temp2x);
    newTime = (minTime:rate:maxTime); 
    clear maxTime minTime

    for p = nSig_1
        if sum(rem(data.(names{p}).value,1)) == 0
        %if strcmp(names(p),'GEC_GSO_Dem_state') || strcmp(names(p),'TOESM_Emission_dem_state')
            data.(names{p}).newValue = ...
                (interp1(data.(names{p}).time,data.(names{p}).value,newTime,'nearest'))';
        else
            data.(names{p}).newValue = ...
                (interp1(data.(names{p}).time,data.(names{p}).value,newTime,'linear'))';
        end
        data.(names{p}).newTime = newTime';
        data.(names{p}).newValue(isnan(data.(names{p}).newValue)==1 & data.(names{p}).newTime<temp2x(p)==1) = ...
            data.(names{p}).newValue(sum(data.(names{p}).newTime <= temp2x(p))+1);
        data.(names{p}).newValue(isnan(data.(names{p}).newValue)==1 &  data.(names{p}).newTime>temp1x(p)==1) = ...
            data.(names{p}).newValue(length(newTime)-sum(data.(names{p}).newTime >= temp1x(p)));
    end

end

