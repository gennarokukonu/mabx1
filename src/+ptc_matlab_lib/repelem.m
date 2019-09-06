function out = repelem(matrix, varargin)
%REPELEM2: Function repelem (built-in from R2015a onwards), backported.
%This works only for 2 dimensions.

if exist('repelem', 'builtin')
    out = builtin('repelem', matrix, varargin{:});
else
    cellarray = cell(size(matrix));
    for ctr = 1:numel(matrix)
        cellarray{ctr} = repmat(matrix(ctr), varargin{:});
    end

    out = cell(size(cellarray, 1), 1);
    for rowctr = 1:size(cellarray, 1)
        thisRow = cellarray(rowctr, :);
        out{rowctr, 1} = cat(2, thisRow{:});
    end
    out = cat(1, out{:});
end

end