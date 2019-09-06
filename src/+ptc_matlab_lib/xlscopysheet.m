function xlscopysheet(targetFile,newSheetName,sourceFile,sourceSheet,initFile)
%XLSCOPYSHEET Copies a worksheet from one Excel workbook to another.
%
%   XLSCOPYSHEET copies worksheet SOURCESHEET from workbook SOURCEFILE to
%   workbook TARGETFILE and renames it NEWSHEETNAME. If INITFILE is true,
%   TARGETFILE cannot be found, or TARGETFILE is not an Excel file a new
%   workbook with the name TARGETFILE will be created. Otherwise, the new
%   sheet will be inserted into the existing workbook after the last sheet.
%   If there is an existing worksheet in TARGETFILE with the name
%   NEWSHEETNAME it will be deleted and replaced with the copied sheet.
%
%   Example:
%       xlscopysheet('J:\output.xls','test','J:\template.xls','Sheet1',true)

% Revision History
%   0.02.[BA]2011.07.20 Adapted for different possible Excel file formats.
%   0.01.[BA]2009.09.24 Deletes sheets 1 - 3 for new files (initFile=true).
%   0.00.[BA]2009.09.21 Initial version of function

%% Validate targetFile & initFile.
if nargin < 4
   error('Too few inputs')
elseif nargin==4
   initFile = false;
end
if ~initFile
   if ~exist(targetFile,'file')
      initFile = true;
   else
      [typTarget descTarget] = xlsfinfo(targetFile);
      if ~strcmp(typTarget,'Microsoft Excel Spreadsheet')
         initFile = true;
      end
   end
end

%% Validate & get info about sourceFile.
if ~exist(sourceFile,'file')
   error('Source file does not exist');
end
[typSource descSource] = xlsfinfo(sourceFile);
if ~strcmp(typSource,'Microsoft Excel Spreadsheet')
   error('Source file is not an Excel file')
elseif ~strcmp(sourceSheet,descSource)
   error('Source file does not contain the specified sheet')
end
[~,~,ext]=fileparts(sourceFile);
if isempty(ext) % add default Excel extension;
   ext = '.xls';
end

%% Open workbooks in Excel.
Excel = actxserver('Excel.Application');
% set(Excel,'Visible',1);

if initFile
   % Open a new file for output.
   Targetworkbook = Excel.Workbooks.Add;
else
   % Open the target file.
   Targetworkbook = Excel.Workbooks.Open(targetFile);
end

% Get handle to last sheet of workbook.
Sheets = Excel.ActiveWorkBook.Sheets;
if initFile
   Targetsheet = Sheets.Item(3);
else
   Targetsheet = Sheets.Item(descTarget{end});
end

% Open the template file.
Excel.Workbooks.Open(sourceFile);
% Copy sheet to target file.
Sheets = Excel.ActiveWorkBook.Sheets;
Sheets.Item(sourceSheet).Copy([],Targetsheet);

%% Rename the newly copied sheet.
Excel.Application.DisplayAlerts = false;
Sheets = Excel.ActiveWorkBook.Sheets;
% Delete sheets 1 - 3 for new files.
if initFile
   Sheets.Item(3).Delete;
   Sheets.Item(2).Delete;
   Sheets.Item(1).Delete;

% Delete sheet of same name if it exists in old file.
else
   try
      Sheets.Item(newSheetName).Delete;
   end
end
% Rename the new sheet.
Sheets.Item(sourceSheet).Name = newSheetName;

%% Save new file.
if initFile
   switch ext
      case '.xls' %xlExcel8 or xlWorkbookNormal
         xlFormat = -4143;
      case '.xlsb' %xlExcel12
         xlFormat = 50;
      case '.xlsx' %xlOpenXMLWorkbook
         xlFormat = 51;
      case '.xlsm' %xlOpenXMLWorkbookMacroEnabled
         xlFormat = 52;
      otherwise
         xlFormat = -4143;
   end
   Targetworkbook.SaveAs(targetFile,xlFormat)
else
   Targetworkbook.Save;
end

%% Clean up.
Excel.Quit
delete(Excel)