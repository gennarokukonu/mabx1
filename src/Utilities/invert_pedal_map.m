function [out_X, out_Y, out_Z] = invert_pedal_map(in_X, in_Y, in_Z)
%INVERT_PEDAL_MAP

in_X = in_X(:);
in_Y = in_Y(:);
in_Z = reshape(in_Z, numel(in_Y), numel(in_X));

assert(issorted(in_X));
assert(issorted(in_Y));
assert(numel(in_Y) == size(in_Z, 1));
assert(numel(in_X) == size(in_Z, 2));

%% Step 1: Generate points database
arr = NaN(numel(in_Z), 3);
ctr = 1;
for row = 1:numel(in_Y)
    for col = 1:numel(in_X)
        arr(ctr, :) = [in_X(col), in_Y(row), in_Z(row, col)];
        ctr = ctr + 1;
    end
end

out_Y = unique(in_Z(:));
out_X = unique(in_X(:));
out_Z = NaN(numel(out_Y), numel(out_X));
for rowctr = 1:size(out_Z, 1)
    for colctr = 1:size(out_Z, 2)
        possibles = arr(arr(:, 3) == out_Y(rowctr) & arr(:, 1) == out_X(colctr), 2);
        if isempty(possibles)
            out_Z(rowctr, colctr) = NaN;
        else
            out_Z(rowctr, colctr) = max(possibles);
        end
    end
end

for col = 1:size(out_Z, 2)
    idx = ~isnan(out_Z(:, col));
    if nnz(idx) >= 2
        ax = out_Y(idx);
        out_Z(:, col) = ptc_matlab_lib.rowvec(interp1(ax(:), out_Z(idx, col), out_Y(:), 'linear', 'extrap'));
    end
end

%Saturate out_Z_adj
out_Z(out_Z > 100) = 100;
out_Z(out_Z < 0) = 0;
out_Z(isnan(out_Z)) = 100;

end