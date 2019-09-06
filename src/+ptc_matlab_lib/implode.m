function out = implode(cellarray, separator)

cellarray2 = ptc_matlab_lib.push(cellarray(:), repmat({separator}, numel(cellarray)-1, 1), 2:2:2*numel(cellarray)-1);
out = [cellarray2{:}];

end