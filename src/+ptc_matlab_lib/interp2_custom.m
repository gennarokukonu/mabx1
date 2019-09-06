function varargout = interp2_custom(varargin)
%INTERP2_CUSTOM: Custom implementation of interp2. The difference is that
%this version accepts unordered, linear data inputs. The only requirement
%imposed is that the data should be non-conflicting with itself.
%
%   SYNTAX:
%   Zout = interp2_custom('Xin', Xin, 'Yin', Yin, 'XData', XData, 'YData',
%   YData, 'ZData', ZData)
%
%   Zout = interp2_custom('Xin', Xin, 'Yin', Yin, 'MapData', MapData)
%
%   Zout = interp2_custom('Xin', Xin, 'Yin', Yin, 'ExcelFilePath',
%   ExcelFilePath)
%
%   Zout = interp2_custom
%
%   Zout = interp2_custom('Xin', Xin, 'Yin', Yin)
%
%   Zout = interp2_custom(...,  'InterpolationMethod', <default: 'linear'>)
%
%   Zout = interp2_custom(..., 'ExtrapVal', <default: 'saturate'>)
%
%   Xin and Yin must be vectors of the same size
%
%   See also: interpn_custom, interp2, interp1, interpn

import('ptc_matlab_lib.*');

pairs = {'Xin', [], ...
    'Yin', [], ...
    'XData', [], ...
    'YData', [], ...
    'ZData', [], ...
    'MapData', [], ...
    'InterpolationMethod', 'linear', ...
    'ExtrapVal', 'saturate', ...
    'ExcelFilePath', ''};
parseargs(varargin, pairs);

if isempty(Xin) || isempty(Yin) %#ok<NODEF>
    prompt = {'Enter Xin (Can be a MATLAB Expression)'; 'Enter Yin (Can be a MATLAB Expression)'};
    name = 'INPUTS';
    Xin = [];
    Yin = [];
    while isempty(Xin) || isempty(Yin)
        answer = inputdlg(prompt, name);
        if isempty(answer)
            return;
        end
        Xin = evalsafe(answer{1});
        Yin = evalsafe(answer{2});
        if isempty(Xin) || isempty(Yin)
            errordlg('Error: You must enter Xin and Yin');
        end
    end        
end

if isempty(MapData) && isempty(ExcelFilePath) %#ok<NODEF>
    if isempty(XData) || isempty(YData) || isempty(ZData) %#ok<NODEF>
        waitfor(msgbox('Select the map'));
        [filename, filedir] = uigetfile({'*.xls; *.xlsx; *.xlsb; *.xlsm', 'Microsoft Excel Spreadsheets (*.xls, *.xlsx, *.xlsb, *.xlsm)'}, 'Select Excel File', pwd);
        if ischar(filename) && ischar(filedir)
            ExcelFilePath = fullfile(filedir, filename);
        else
            return;
        end
        MapData = xlsread(ExcelFilePath, -1);
    end
elseif isempty(MapData) && ~isempty(ExcelFilePath)
    waitfor(msgbox('Select the map'));
    MapData = xlsread(ExcelFilePath, -1);
elseif ~isempty(MapData) && ~isempty(ExcelFilePath)
    error([mfilename ':' thisfuncname ':ConflictingInputs'], 'You cannot specify both MapData and ExcelFilePath');
end

if ~isempty(MapData)
    XData = NaN((size(MapData, 1)-1)*(size(MapData, 2)-1), 1);
    YData = NaN(size(XData));
    ZData = NaN(size(XData));
    ctr = 1;
    for col = 2:size(MapData, 2)
        for row = 2:size(MapData, 1)
            XData(ctr) = MapData(1, col);
            YData(ctr) = MapData(row, 1);
            ZData(ctr) = MapData(row, col);
            ctr = ctr + 1;
        end
    end
end

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Zout = NaN(length(Xin), 1);

for inputIndex = 1:length(Xin)
    
    %Step 1: Find the two closest XData values
    indices = find(XData>=Xin(inputIndex));
    minindex_greater = [];
    minval = Inf;
    for ctr = 1:length(indices)
        if abs(XData(indices(ctr)) - Xin(inputIndex)) < minval
            minval = abs(XData(indices(ctr)) - Xin(inputIndex));
            minindex_greater = indices(ctr);
        end
    end
    
    indices = find(XData<=Xin(inputIndex));
    minindex_lower = [];
    minval = Inf;
    for ctr = 1:length(indices)
        if abs(XData(indices(ctr)) - Xin(inputIndex)) < minval
            minval = abs(XData(indices(ctr)) - Xin(inputIndex));
            minindex_lower = indices(ctr);
        end
    end
    
    if isempty(minindex_lower) || isempty(minindex_greater)
        if isempty(minindex_lower) && ~isempty(minindex_greater) && isequal(ExtrapVal, 'saturate')
            minindex_lower = minindex_greater;
        elseif isempty(minindex_greater) && ~isempty(minindex_lower) && isequal(ExtrapVal, 'saturate')
            minindex_greater = minindex_lower;
        elseif isempty(minindex_greater) && isempty(minindex_lower)
            Zout(inputIndex) = NaN;
            continue;
        end
    end
    
    
    indicesX = [minindex_lower minindex_greater];
    minindex_lowerX = indicesX(1);
    minindex_greaterX = indicesX(2);
    
    %Step 2: Find all indices that have instances of these values
    indices1 = find(XData == XData(indicesX(1)));
    indices2 = find(XData == XData(indicesX(2)));
    indicesX = unique([indices1(:); indices2(:)]);
    
    %Step 3: Find the two closest YData values
    indices = find(YData>=Yin(inputIndex));
    minindex_greater = [];
    minval = Inf;
    for ctr = 1:length(indices)
        if abs(YData(indices(ctr)) - Yin(inputIndex)) < minval
            minval = abs(YData(indices(ctr)) - Yin(inputIndex));
            minindex_greater = indices(ctr);
        end
    end
    
    indices = find(YData<=Yin(inputIndex));
    minindex_lower = [];
    minval = Inf;
    for ctr = 1:length(indices)
        if abs(YData(indices(ctr)) - Yin(inputIndex)) < minval
            minval = abs(YData(indices(ctr)) - Yin(inputIndex));
            minindex_lower = indices(ctr);
        end
    end
    
    if isempty(minindex_lower) || isempty(minindex_greater)
        if isempty(minindex_lower) && ~isempty(minindex_greater) && isequal(ExtrapVal, 'saturate')
            minindex_lower = minindex_greater;
        elseif isempty(minindex_greater) && ~isempty(minindex_lower) && isequal(ExtrapVal, 'saturate')
            minindex_greater = minindex_lower;
        elseif isempty(minindex_greater) && isempty(minindex_lower)
            Zout(inputIndex) = NaN;
            continue;
        end
    end
    
    indicesY = [minindex_lower minindex_greater];
    minindex_lowerY = indicesY(1);
    minindex_greaterY = indicesY(2);
    
    %Step 4: Find all indices that have instances of these values
    indices1 = find(YData == YData(indicesY(1)));
    indices2 = find(YData == YData(indicesY(2)));
    indicesY = unique([indices1(:); indices2(:)]);
    
    
    %Step 5: Find indicesZ
    indicesZ = intersect(indicesX, indicesY);
    assert(~isempty(indicesZ));
    
    %Step 6: Set extrapolation mode
    if isequal(ExtrapVal, 'saturate')
        thisExtrapVal = NaN;
    else
        thisExtrapVal = ExtrapVal;
    end
    
    %Final step: Interpolation
    if length(indicesZ)==1
        Zout(inputIndex) = ZData(indicesZ);
    elseif length(indicesZ)==2
        if minindex_lowerX == minindex_greaterX
            YData_unique = unique(YData(indicesY));
            indicesZ = NaN(2, 1);
            indicesZ(1) = find(XData == XData(minindex_lowerX) & YData == YData_unique(1), 1);
            indicesZ(2) = find(XData == XData(minindex_lowerX) & YData == YData_unique(2), 1);
            Zout(inputIndex) = interp1(YData_unique, ZData(indicesZ), Yin(inputIndex), InterpolationMethod, thisExtrapVal);
        elseif minindex_lowerY == minindex_greaterY
            XData_unique = unique(XData(indicesX));
            indicesZ = NaN(2, 1);
            indicesZ(1) = find(YData == YData(minindex_lowerY) & XData == XData_unique(1), 1);
            indicesZ(2) = find(YData == YData(minindex_lowerY) & XData == XData_unique(2), 1);
            Zout(inputIndex) = interp1(XData_unique, ZData(indicesZ), Xin(inputIndex), InterpolationMethod, thisExtrapVal);
        end
    elseif length(indicesZ)==4
        XData_unique = unique(XData(indicesX));
        YData_unique = unique(YData(indicesY));
        indicesZ = NaN(4, 1);
        indicesZ(1) = find(XData == XData_unique(1) & YData == YData_unique(1), 1);
        indicesZ(2) = find(XData == XData_unique(1) & YData == YData_unique(2), 1);
        indicesZ(3) = find(XData == XData_unique(2) & YData == YData_unique(1), 1);
        indicesZ(4) = find(XData == XData_unique(2) & YData == YData_unique(2), 1);
        Zout(inputIndex) = interp2(XData_unique, YData_unique, reshape(ZData(indicesZ), 2, 2), Xin(inputIndex), Yin(inputIndex), InterpolationMethod, thisExtrapVal);
    end
    
end

varargout{1} = Zout;

end