function varargout = capability_custom(varargin)
%CAPABILITY_CUSTOM: Capability analysis function equivalent to the built in
%CAPABILITY function that comes with the Statistics Toolbox. This function
%does not require additional toolboxes.
%
%   SYNTAX:
%   VARARGOUT = CAPABILITY_CUSTOM(VARARGIN)
%
%   e.g. DataSetCapability = capability_custom('DataSet', <DataSet
%   Structure>, 'd2', <1.128>)
%   The DataSet structure array must have the following fields:
%   - DataVector: Vector of data
%   - Target: Target value
%   - LowerSpecLimit
%   - UpperSpecLimit
%   The variable 'd2' has been set to 1.128. This value comes from the d2
%   table for a sample size of 2. 
%
%   The output DataSetCapability is a structure array having the following
%   fields:
%   - DataVector
%   - Target
%   - LowerSpecLimit
%   - UpperSpecLimit
%   - moving_range_average
%   - stdev_within
%   - stdev_overall
%   - Cp
%   - CpL
%   - CpU
%   - Cpk
%   - Pp
%   - PpL
%   - PpU
%   - Ppk
%   - Cpm
%   - observed_portion_less_than_lsl
%   - observed_portion_greater_than_usl
%   - observed_total
%   - within_portion_greater_than_usl
%   - within_portion_greater_than_usl
%   - within_total
%   - overall_portion_less_than_lsl
%   - overall_portion_greater_than_usl
%   - overall_total

import('ptc_matlab_lib.*');

DataSet(DataSetIndex).moving_range_average = moving_range_average; %#ok<*NODEF>
    DataSet(DataSetIndex).stdev_within = stdev_within;
    DataSet(DataSetIndex).stdev_overall = stdev_overall;
    DataSet(DataSetIndex).Cp = Cp;
    DataSet(DataSetIndex).CpL = CpL;
    DataSet(DataSetIndex).CpU = CpU;
    DataSet(DataSetIndex).Cpk = Cpk;
    DataSet(DataSetIndex).Pp = Pp;
    DataSet(DataSetIndex).PpL = PpL;
    DataSet(DataSetIndex).PpU = PpU;
    DataSet(DataSetIndex).Ppk = Ppk;
    DataSet(DataSetIndex).Cpm = Cpm;
    DataSet(DataSetIndex).observed_portion_less_than_lsl = observed_portion_less_than_lsl;
    DataSet(DataSetIndex).observed_portion_greater_than_usl = observed_portion_greater_than_usl;
    DataSet(DataSetIndex).observed_total = observed_total;
    DataSet(DataSetIndex).within_portion_less_than_lsl = within_portion_less_than_lsl;
    DataSet(DataSetIndex).within_portion_greater_than_usl = within_portion_greater_than_usl;
    DataSet(DataSetIndex).within_total = within_total;
    DataSet(DataSetIndex).overall_portion_less_than_lsl = overall_portion_less_than_lsl;
    DataSet(DataSetIndex).overall_portion_greater_than_usl = overall_portion_greater_than_usl;
    DataSet(DataSetIndex).overall_total = overall_total;


pairs = {'DataSet', [], ...
    'ExcelFilePath', '', ...
    'd2', 1.128}; %d2 taken from the d2 table
parseargs(varargin, pairs);

if isempty(ExcelFilePath) && isempty(DataSet)
    [filename, pathname] = uigetfile({'*.xls; *.xlsx; *.xlsb; *.xlsm', 'Microsoft Excel Spreadsheets (*.xls, *.xlsx, *.xlsb, *.xlsm)'}, 'Select Excel File');
    if ~ischar(filename) || ~ischar(pathname)
        %Cancel was pressed
        return;
    end
    ExcelFilePath = fullfile(pathname, filename);
end

if isempty(DataSet)
    [dummy, sheetnames] = xlsfinfo(ExcelFilePath); clear('dummy'); %#ok<*ASGLU>
    clear('DataSet');
    DataSet(length(sheetnames)) = struct('DataVector', [], ...
        'Target', [], ...
        'LowerSpecLimit', [], ...
        'UpperSpecLimit', []);
    for ctr = 1:length(sheetnames)
        waitfor(msgbox(['Select data vector for sheet ' sheetnames{ctr}]));
        DataSet(ctr).DataVector = xlsread(ExcelFilePath, -1);
        waitfor(msgbox(['Select target and spec limits for sheet ' sheetnames{ctr}]));
        numeric_data = xlsread(ExcelFilePath, -1);
        DataSet(ctr).Target = numeric_data(1, 1);
        DataSet(ctr).LowerSpecLimit = min(numeric_data);
        DataSet(ctr).UpperSpecLimit = max(numeric_data);
    end
end

%Looping over every data set
for DataSetIndex = 1:length(DataSet)
    
    %Step 1: Extract input data
    DataVector = DataSet(DataSetIndex).DataVector;
    UpperSpecLimit = DataSet(DataSetIndex).UpperSpecLimit;
    LowerSpecLimit = DataSet(DataSetIndex).LowerSpecLimit;
    Target = DataSet(DataSetIndex).Target;
    
    %Step 2: Moving range average
    moving_range_average = mean(abs(diff(DataVector)));
    
    %Step 3: Moving range standard deviation, estimated using the formula
    %Rbar/d2
    stdev_within = moving_range_average/d2;
    
    %Step 4: Overall standard deviation
    stdev_overall = std(DataVector);
    
    %Step 5: Calculation of Cp = (USL - LSL)/(6*stdev_within)
    Cp = (UpperSpecLimit - LowerSpecLimit)/(6*stdev_within);
    
    %Step 6: Calculation of CpL = (Mean - LSL)/(3*stdev_within)
    CpL = (mean(DataVector) - LowerSpecLimit)/(3*stdev_within);
    
    %Step 7: Calculation of CpU = (USL - Mean)/(3*stdev_within)
    CpU = (UpperSpecLimit - mean(DataVector))/(3*stdev_within);
    
    %Step 8: Calculation of Cpk = min([CpU CpL])
    Cpk = min([CpU CpL]);
    
    %Step 9: Calculation of Pp = (USL - LSL)/(6*stdev_overall)
    Pp = (UpperSpecLimit - LowerSpecLimit)/(6*stdev_overall);
    
    %Step 10: Calculation of PpL = (Mean - LSL)/(3*stdev_overall)
    PpL = (mean(DataVector) - LowerSpecLimit)/(3*stdev_overall);
    
    %Step 11: Calculation of PpU = (USL - Mean)/(3*stdev_overall)
    PpU = (UpperSpecLimit - mean(DataVector))/(3*stdev_overall);
    
    %Step 12: Calculation of Ppk = min([PpL PpU])
    Ppk = min([PpL PpU]);
    
    %Step 13: Calculation of Cpm = Cp/sqrt(1 + ((mean -
    %target)^2)/stdev_within^2)
    Cpm = Cp/sqrt(1 + ((mean(DataVector) - Target)^2)/stdev_within^2);
    
    %Step 14: Obtain observed performance statistics
    observed_portion_less_than_lsl = length(find(DataVector < LowerSpecLimit))/length(DataVector);
    observed_portion_greater_than_usl = length(find(DataVector > UpperSpecLimit))/length(DataVector);
    observed_total = observed_portion_less_than_lsl + observed_portion_greater_than_usl;
    
    
    %Step 15: Obtain Exp. Within Performance
    X = (mean(DataVector) - LowerSpecLimit)/stdev_within;
    within_portion_less_than_lsl = 1 - normcdf_custom(X);
    X = (UpperSpecLimit - mean(DataVector))/stdev_within;
    within_portion_greater_than_usl = 1 - normcdf_custom(X);
    within_total = within_portion_less_than_lsl + within_portion_greater_than_usl;
    
    %Step 16: Obtain Exp. overall performance
    X = (mean(DataVector) - LowerSpecLimit)/stdev_overall;
    overall_portion_less_than_lsl = 1 - normcdf_custom(X);
    X = (UpperSpecLimit - mean(DataVector))/stdev_overall;
    overall_portion_greater_than_usl = 1 - normcdf_custom(X);
    overall_total = overall_portion_less_than_lsl + overall_portion_greater_than_usl;
    
    
    
    %Update structure element
    DataSet(DataSetIndex).moving_range_average = moving_range_average;
    DataSet(DataSetIndex).stdev_within = stdev_within;
    DataSet(DataSetIndex).stdev_overall = stdev_overall;
    DataSet(DataSetIndex).Cp = Cp;
    DataSet(DataSetIndex).CpL = CpL;
    DataSet(DataSetIndex).CpU = CpU;
    DataSet(DataSetIndex).Cpk = Cpk;
    DataSet(DataSetIndex).Pp = Pp;
    DataSet(DataSetIndex).PpL = PpL;
    DataSet(DataSetIndex).PpU = PpU;
    DataSet(DataSetIndex).Ppk = Ppk;
    DataSet(DataSetIndex).Cpm = Cpm;
    DataSet(DataSetIndex).observed_portion_less_than_lsl = observed_portion_less_than_lsl;
    DataSet(DataSetIndex).observed_portion_greater_than_usl = observed_portion_greater_than_usl;
    DataSet(DataSetIndex).observed_total = observed_total;
    DataSet(DataSetIndex).within_portion_less_than_lsl = within_portion_less_than_lsl;
    DataSet(DataSetIndex).within_portion_greater_than_usl = within_portion_greater_than_usl;
    DataSet(DataSetIndex).within_total = within_total;
    DataSet(DataSetIndex).overall_portion_less_than_lsl = overall_portion_less_than_lsl;
    DataSet(DataSetIndex).overall_portion_greater_than_usl = overall_portion_greater_than_usl;
    DataSet(DataSetIndex).overall_total = overall_total;
    
end

varargout{1} = DataSet;

end