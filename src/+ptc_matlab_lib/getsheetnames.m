function varargout = getsheetnames(varargin)
%GETSHEETNAMES Returns the sheet names of an Excel spreadsheet
%
%   SYNTAX
%   getsheetnames : When called without any arguments, the function
%   interactively asks the user to select an Excel spreadsheet.
%   
%   getsheetnames('ExcelFilePath', <ExcelFilePath>) : The user may specify
%   the ExcelFilePath as an argument.

import('ptc_matlab_lib.*');

pairs = {'ExcelFilePath', ''};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.ExcelFilePath, 'file')
    [filename, pathname] = uigetfile({'*.xls;*.xlsx;*.xlsm;*.xlsb;', 'Excel files'}, 'Choose Excel file', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        return;
    end
    ARGS.ExcelFilePath = fullfile(pathname, filename);
end

[~, sheetnames] = xlsfinfo(ARGS.ExcelFilePath);
varargout{1} = sheetnames(:);

end