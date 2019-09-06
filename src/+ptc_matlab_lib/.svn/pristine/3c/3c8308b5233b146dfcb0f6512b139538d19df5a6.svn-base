function varargout = interpn_custom(varargin)
%INTERPN_CUSTOM: Version of interpn, but one that accepts unordered, flat
%input data.
%
%   Usage:
%   VALOUT = INTERPN_CUSTOM('ExcelFilePath', <Excel File Path>): Allows the
%   selection of independent data and dependent data from an Excel sheet.
%   Also allows the user to enter the input points interactively.
%
%   VALOUT = INTERPN_CUSTOM('IndependentData', <IndependentDataMatrix>,
%   'DependentData', <DependentDataVector>, 'InputPoints', <InputPoints>)
%
%   IndependentDataMatrix has the number of columns equal to the number of
%   dimensions.
%
%   DependentDataVector is always a column vector, having the number of
%   rows equal to the number of rows of IndependentDataMatrix
%
%   InputPoints has the number of columns equal to the number of
%   dimensions. The number of rows is variable.
%
%   {'InterpolationMethod', 'linear'}: If no interpolation method is
%   specified, the default is 'linear'
%
%   {'ExtrapVal', 'saturate'}: Default behavior for extrapolation
%
%   {'ExtrapVal', EXTRAPVAL}: Value of the dependent variable becomes
%   EXTRAPVAL for inputs out of range
%
%   See Also: interpn, interp2_custom, interp1

import('ptc_matlab_lib.*');

pairs = {'ExcelFilePath', '', ...
    'IndependentData', [], ...
    'DependentData', [], ...
    'InputPoints', [], ...
    'InterpolationMethod', 'linear', ...
    'ExtrapVal', 'saturate', ...
    'ShowWaitbar', false};
parseargs(varargin, pairs);


%Obtain IndependentData and DependentData if necessary
if isempty(IndependentData) || isempty(DependentData) %#ok<*NODEF>
    %Data not specified, so it has to be obtained from an Excel file.
    if isempty(ExcelFilePath)
        [filename, filedir] = uigetfile({'*.xls; *.xlsx; *.xlsb; *.xlsm', 'Microsoft Excel Spreadsheets (*.xls, *.xlsx, *.xlsb, *.xlsm)'}, ...
            'Select Excel File', pwd);
        if ischar(filename) && ischar(filedir)
            ExcelFilePath = fullfile(filedir, filename);
            clear('filename', 'filedir');
        else
            return;
        end
    end

    if isempty(IndependentData)
        waitfor(msgbox('Select independent data columns.'));
        IndependentData = xlsread(ExcelFilePath, -1);
    end

    if isempty(DependentData)
        waitfor(msgbox('Select dependent data columns.'));
        DependentData = xlsread(ExcelFilePath, -1);
    end
end

if rows(IndependentData) ~= rows(DependentData(:))
    error([mfilename ':' thisfuncname ':InvalidInputData'], 'The number of rows of IndependentData has to be equal to the number of elements of the vector DependentData');
end
if ~iscolumn(DependentData)
    error([mfilename ':' thisfuncname ':InvalidDependentData'], 'DependentData has to be a column vector');
end

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Obtain InputPoints if necessary
if isempty(InputPoints)
    prompt = cell(cols(IndependentData), 1);
    name = 'Enter input (independent) data points';
    for ctr = 1:length(prompt)
        prompt{ctr} = ['Enter the input independent data point(s) for dimension ' num2str(ctr) ':'];
    end

    InputPoints = cell(1, length(prompt));
    for ctr = 1:length(InputPoints)
        InputPoints{ctr} = [];
    end
    while hasemptyelements(InputPoints)
        answer = inputdlg(prompt, name);
        if isempty(answer)
            return;
        end
        answer = rowvec(answer);
        for ctr = 1:length(answer)
            InputPoints{ctr} = evalsafe(answer{ctr}(:));
        end
        if hasemptyelements(InputPoints)
            errordlg('Error: You must provide all necessary input points');
        end
    end
    InputPoints = cell2mat(InputPoints);
end


%If only one dimension is given, we perform 1D interpolation
if cols(IndependentData)==1
    matrix = sortrows([IndependentData DependentData]);
    if isequal(ExtrapVal, 'saturate')
        thisExtrapVal = NaN;
        for ctr = 1:length(InputPoints)
            InputPoints(ctr) = min(max(matrix(:, 1)), InputPoints(ctr)); %#ok<*AGROW>
            InputPoints(ctr) = max(min(matrix(:, 1)), InputPoints(ctr));
        end
    else
        thisExtrapVal = ExtrapVal;
    end
    varargout{1} = interp1(matrix(:, 1), matrix(:, 2), InputPoints, InterpolationMethod, thisExtrapVal);
    return;
end

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%Now we have all input data necessary to begin the process

%Input validation assertion. If this assertion fails, it means that the
%input was malformed.
assert(rows(IndependentData) == rows(DependentData) && cols(InputPoints) == cols(IndependentData) && iscolumn(DependentData));

if isequal(ExtrapVal, 'saturate')
    thisExtrapVal = NaN;
    for rowctr = 1:rows(InputPoints)
        for colctr = 1:cols(InputPoints)
            InputPoints(rowctr, colctr) = min(max(IndependentData(:, colctr)), InputPoints(rowctr, colctr));
            InputPoints(rowctr, colctr) = max(min(IndependentData(:, colctr)), InputPoints(rowctr, colctr));
        end
    end
else
    thisExtrapVal = ExtrapVal;
end

%Methodology: We obtain the two closest points for every input, finally use
%MATLAB's built in interpn function to perform the interpolation
ValOut = NaN(rows(InputPoints), 1);

if ShowWaitbar
    waitbar_hndl = waitbar(0, 'Please wait...', 'CloseRequestFcn', '', 'Pointer', 'watch');
end

rows_InputPoints = rows(InputPoints);

for ctr = 1:rows_InputPoints

    thisInputPointVec = InputPoints(ctr, :);

    %Looping over each dimension
    lower_indices_vec = cell(cols(IndependentData), 1);
    greater_indices_vec = cell(cols(IndependentData), 1);
    indices = 1:rows(IndependentData);

    ShouldContinue = false;

    for dim_ctr = 1:cols(IndependentData)

        thisDataColumn = IndependentData(:, dim_ctr);
        thisInputPoint = thisInputPointVec(dim_ctr);

        minval = Inf;
        minindex_lower = [];
        indices_lower = intersect(find(thisDataColumn<=thisInputPoint), indices);
        for row_ctr = 1:length(indices_lower)
            if abs(thisDataColumn(indices_lower(row_ctr)) - thisInputPoint) < minval
                minval = abs(thisDataColumn(indices_lower(row_ctr)) - thisInputPoint);
                minindex_lower = indices_lower(row_ctr);
            end
        end

        minval = Inf;
        minindex_greater = [];
        indices_greater = intersect(find(thisDataColumn>=thisInputPoint), indices);
        for row_ctr = 1:length(indices_greater)
            if abs(thisDataColumn(indices_greater(row_ctr)) - thisInputPoint) < minval
                minval = abs(thisDataColumn(indices_greater(row_ctr)) - thisInputPoint);
                minindex_greater = indices_greater(row_ctr);
            end
        end

        if isempty(minindex_lower) || isempty(minindex_greater)
            if isempty(minindex_lower) && ~isempty(minindex_greater) && isequal(ExtrapVal, 'saturate')
                minindex_lower = minindex_greater;
            elseif isempty(minindex_greater) && ~isempty(minindex_lower) && isequal(ExtrapVal, 'saturate')
                minindex_greater = minindex_lower;
            elseif isempty(minindex_greater) && isempty(minindex_lower)
                ValOut(ctr) = NaN;
                ShouldContinue = true;
                break;
            end
        end

        if dim_ctr >= 2
            indices_lower = intersect(find(thisDataColumn == thisDataColumn(minindex_lower)), lower_indices_vec{dim_ctr-1});
            indices_greater = intersect(find(thisDataColumn == thisDataColumn(minindex_greater)), greater_indices_vec{dim_ctr-1});
        else
            indices_lower = find(thisDataColumn == thisDataColumn(minindex_lower));
            indices_greater = find(thisDataColumn == thisDataColumn(minindex_greater));
        end

        indices = union(indices_lower, indices_greater);

        %Step 2: Find all relevant indices that have these values
        lower_indices_vec{dim_ctr} = intersect(find(thisDataColumn == thisDataColumn(minindex_lower)), indices);
        greater_indices_vec{dim_ctr} = intersect(find(thisDataColumn == thisDataColumn(minindex_greater)), indices);

    end

    if ShouldContinue
        continue;
    end

    %Now, extract the points necessary and run interpn
    indices = union(lower_indices_vec{end}, greater_indices_vec{end});
    assert(length(indices) <= 2);
    newIndependentData = IndependentData(indices, :);


    %Approach to combine elements of newIndependentData to include all
    %possible combinations. This is being done by treating the data as
    %binary symbols
    false_values = newIndependentData(1, :);
    if rows(newIndependentData) == 2
        true_values = newIndependentData(2, :);
    else
        true_values = false_values;
    end
    value_combinations = NaN(2^cols(newIndependentData), cols(newIndependentData));
    for value_combinations_ctr = 0:2^cols(newIndependentData)-1
        base2_val = convert2basen(value_combinations_ctr, 2);
        base2_val = pad_to_length('FinalLength', cols(newIndependentData), 'PadValue', 0, 'InputVector', base2_val, 'PadDirection', 'left');
        base2_val_symbolic = NaN(size(base2_val));
        for dim_ctr = 1:cols(newIndependentData)
            if base2_val(dim_ctr) == 0
                base2_val_symbolic(dim_ctr) = false_values(dim_ctr);
            else
                base2_val_symbolic(dim_ctr) = true_values(dim_ctr);
            end
        end
        value_combinations(value_combinations_ctr+1, :) = base2_val_symbolic;
    end

    %value_combinations = unique(value_combinations, 'rows');

    %Now, obtain all values of DependentData corresponding to the generated
    %value combinations.
    DependentDataIndices = NaN(rows(value_combinations), 1);
    for value_combinations_ctr = 1:rows(value_combinations)
        boolean_vector = (IndependentData(:, 1) == value_combinations(value_combinations_ctr, 1));
        for dim_ctr = 1:cols(value_combinations)
            boolean_vector = boolean_vector & IndependentData(:, dim_ctr) == value_combinations(value_combinations_ctr, dim_ctr);
        end
        assert(nnz(boolean_vector)==1);
        DependentDataIndices(value_combinations_ctr) = find(boolean_vector);
    end

    DependentData_dimensions = num2cell(2*ones(1, cols(value_combinations)));
    DependentData_reshaped = reshape(DependentData(DependentDataIndices), DependentData_dimensions{:});

    %To make sure interpn works correctly, we use eps to ensure that input
    %values are monotonic
    if rows(newIndependentData)==1
        newIndependentData = [newIndependentData; newIndependentData];
    end
    for newIndependentData_ctr = 1:cols(newIndependentData)
        if newIndependentData(1, newIndependentData_ctr) == newIndependentData(2, newIndependentData_ctr)
            %We need to estimate an appropriate epsilon
            eps_value = eps(100*newIndependentData(1, newIndependentData_ctr));
            newIndependentData(1, newIndependentData_ctr) = newIndependentData(1, newIndependentData_ctr) - eps_value;
            eps_value = eps(100*newIndependentData(2, newIndependentData_ctr));
            newIndependentData(2, newIndependentData_ctr) = newIndependentData(2, newIndependentData_ctr) + eps_value;
        end
    end

    %Finally, run the interpolation.
    newIndependentData_Cell = cell(1, cols(newIndependentData));
    for ctr2 = 1:length(newIndependentData_Cell)
        newIndependentData_Cell{ctr2} = columnvec(newIndependentData(:, ctr2));
    end
    thisInputPointVec_Cell = num2cell(thisInputPointVec);

    %Note: interp2(x,y,...) is the same as interpn(y,x,...). This concept
    %can be extended.
    newIndependentData_Cell = fliplr(newIndependentData_Cell);
    thisInputPointVec_Cell = fliplr(thisInputPointVec_Cell);

    ValOut(ctr) = interpn(newIndependentData_Cell{:}, DependentData_reshaped, thisInputPointVec_Cell{:}, InterpolationMethod, thisExtrapVal);

    if ShowWaitbar
        waitbar(ctr/rows_InputPoints, waitbar_hndl, ['Completed ' num2str(ctr) ' of ' num2str(rows_InputPoints)]);
    end
end

if ShowWaitbar
    delete(waitbar_hndl);
end


varargout{1} = ValOut;


end

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function out = hasemptyelements(InputCellArray)

out = false;

for ctr = 1:length(InputCellArray(:))
    if isempty(InputCellArray{ctr})
        out = true;
        break;
    end
end

end

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%