function xlswriteFcn(fileName, headers, data)

% Revision History
%   5.01.[BA]2009.12.07 Fixed tempWidth to work with a number of columns
%                       that is a multiple of 26.
%   5.[CS]2009.10.26 Fixed tempHeight so that the last two data pts of the
%                   file are not cut off
%   4.[CS]2009.09.18 Fixed tempWidth so that last signal selected is not
%                    cut off
%   3.[BA]2009.06.11 Write multiple sheets for data size greater than 256
%                    columns x 65536 rows
%   2.[EO]2009.05.26 Comment out closing of excel
%   1.[CS]2009.05.20 Revision to include headers from structure data

%%% What XLSWRITE is doing under the hood, plus more

%% Insert (random or input) data --> UNCOMMENT ONE!

%     A = floor(256*rand(10,1)); %creates random data
A = data; % sets A to the input dataset

%% Get data size and determine how many sheets need to be written.
width = length(A(1,:));
height = length(A(:,1));

numHorizPages = ceil(width / 256);
numVertPages = ceil(height / 65535); % 65536 row limit - 1 row for header


%% OPEN EXCEL APPLICATION
h = actxserver('Excel.Application');
% Show OR hide the Excel window --> UNCOMMENT ONE!

set(h, 'Visible', 1); %show
% set(h, 'Visible', 0); %hide


% What attributes and operations are available for the handle "h"?  These
% are attributes and operations of the Excel object ... and are documented
% in the Excel Visual Basic Reference:
% (In Microsoft Office 2003 Excel)
% Help -> Microsoft Excel Help -> Table of Contents -> Microsoft Excel
% Visual Basic Reference


%% INSERT NEW WORKBOOK
W = h.Workbooks.Add;
j = 1; % Sheet counter.

for iHoriz = 1:numHorizPages
    % xMax is the upper columnt limit on the data range to write.
    if iHoriz < numHorizPages
        xMax = 256 * iHoriz;
    else
        xMax = width;
    end
    % xMin is the lower column limit on the data range to write.
    xMin = 1 + (256 * (iHoriz - 1));
    
    for iVert = 1:numVertPages
        % yMax is the upper row limit on the data range to write.
        if iVert < numVertPages
            yMax = 65535 * iVert;
        else
            yMax = height;
        end
        % yMin is the lower row limit on the data range to write.
        yMin = 1 + (65535 * (iVert - 1));
        
        Sheets = h.ActiveWorkBook.Sheets;

        % Add a new sheet (by default, a workbook contains
        % three worksheets - add a new one before [], after #3)
        Sheets.Add( [], Sheets.Item(3) );

        %% Rename sheet
        % Sheets with common columns share the letter in the name, while
        % sheets with common rows share the number that follows.
        nameLetter = char(64 + rem(iVert, 26));
        Sheets.Item(j).Name = [nameLetter int2str(iHoriz)];
 
        
        %% Make it "Active"
        Sheets.Item(j).Activate;
        Activesheet = h.Activesheet;

        % Calculate the end cell reference. 64 is added to get correct
        % position in ASCII TABLE.
        tempWidth = (xMax - xMin) + 1;
        if (floor(tempWidth/26) == 0)
            width1 = [];
            width2 = 64 + rem(tempWidth, 26); %get the second char
        else
            width1 = 64 + floor(tempWidth/26); %get the first char
            width2 = 64 + rem(tempWidth, 26); %get the second char
            % If the number of columns is a multiple of 26.
            if rem(tempWidth,26) == 0
               % Reduce the first column letter by one.
               if width1 == 65
                  width1 = [];
               else
                  width1 = width1 - 1;
               end
               % Make the second column letter Z;
               width2 = 90;
            end
        end

        % Build the end cell name starting with the column reference.
        endCell = strcat(char(width1), char(width2));
        % Append the row reference.
        tempHeight = (yMax - yMin) + 2;
        endCell = strcat(endCell, int2str(tempHeight));

        % Write the header.
        ActivesheetRange = get(Activesheet,'Range',strcat('A1:', endCell));
        set(ActivesheetRange, 'Value', headers(xMin:xMax));

        % Write the data.
        ActivesheetRange = get(Activesheet,'Range',strcat('A2:', endCell));
        set(ActivesheetRange, 'Value', A(yMin:yMax,xMin:xMax));

        %     %% Add a ChartObject (container for embedded charts)
        %     co = Activesheet.ChartObjects.Add(150,10,300,300); %(Left,Top,Width,Height)
        %     co.Chart.ChartType = 'xlLine';
        %     co.Chart.SeriesCollection.Add(ActivesheetRange);
        %
        %
        %     %% Chart Formatting
        %     % Legend off
        %     co.Chart.Legend.Delete;
        %     % White Background, Border off
        %     co.Chart.PlotArea.Interior.ColorIndex = 0;
        %     co.Chart.PlotArea.Border.LineStyle = 0;
        %     % Major Gridlines off (x-axis is 1, y-axis is 2)
        %     co.Chart.Axes(2).HasMajorGridlines = 0;
        %     % Tick Marks inside
        %     co.Chart.Axes(1).MajorTickMark = 'xlTickMarkInside';
        %     co.Chart.Axes(2).MajorTickmark = 'xlTickMarkInside';
        %     % x-axis label
        %     co.Chart.Axes(1).HasTitle = 1;
        %     co.Chart.Axes(1).AxisTitle.Text = 'x-axis';
        %     co.Chart.Axes(2).HasTitle = 2;
        %     co.Chart.Axes(2).AxisTitle.Text = 'y-axis';
        %     % Chart Title
        %     co.Chart.HasTitle = 1;
        %     co.Chart.ChartTitle.Text = ['Chart in s' int2str(j)];
        
        j = j + 1;
    end
end


%% SAVE WORKBOOK
% *Full path name should be used*
invoke( W, 'SaveAs', fileName );


%% CLEAN UP
% Terminate the server session to which the handle is atttached
%invoke( h, 'Quit' );
% Release all interfaces derived from the server
delete(h)