function out = strcat2(varargin)
%STRCAT2: strcat, but does not remove trailing whitespace characters.

args_in = varargin(:);
isOutputCellStr = any(cellfun(@iscellstr, args_in));

isScalar_Indices = false(numel(args_in), 1);
for ctr = 1:numel(args_in)
    args_in{ctr} = ptc_matlab_lib.cellstr2(args_in{ctr});
    isScalar_Indices(ctr) = (numel(args_in{ctr}) == 1);
end

if any(~isScalar_Indices)
    expand_size = size(args_in{find(~isScalar_Indices, 1, 'last')});
    for ctr = 1:numel(args_in)
        if isScalar_Indices(ctr)
            args_in{ctr} = repmat(args_in{ctr}, expand_size);
        end
    end
end

args_in = cat(2, args_in{:});

out = cell(size(args_in, 1), 1);
for ctr = 1:size(args_in, 1)
    thisRow = args_in(ctr, :);
    out{ctr} = cat(2, thisRow{:});
end

if ~isOutputCellStr
    out = char(out);
end

end