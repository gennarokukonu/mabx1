function [located_rows] = strfind_rows(cellArray, searchStr)
%% STRFIND_ROWS
% [located_rows] = strfind_rows(cellArray, searchStr)
% Simmilar to strmatch, but also returns row indexes for any row that
% contains the search string, not just rows starting with the search string.
%
% Revision History
%   2.01.[BA]2012.08.10 Changed call to strfndw to use package
%     ptc_matlab_lib.
%   2.[EO]2009.06.29 Revised to use the more generic strfndw if available
%   1.[EO]2009.06.22 Initial revision. Descriptions and history added.

try
    located_rows = ptc_matlab_lib.strfndw(cellArray, ['*' searchStr '*']);
catch
    offsets = strfind(cellArray, searchStr);
    h=[];
    for i=1:length(offsets)
        if ~isempty(offsets{i})
            h = [h; i];
        end
    end
    located_rows = h;
end