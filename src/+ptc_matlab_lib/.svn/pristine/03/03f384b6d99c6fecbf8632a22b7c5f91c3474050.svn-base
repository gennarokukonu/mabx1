function [out_X, out_Y] = invert_1d_lookup_table(in_X, in_Y)

in_X_adj = in_X(:);
in_Y_adj = in_Y(:);

assert(issorted(in_X_adj));
assert(numel(in_X_adj) == numel(in_Y_adj));

out_X = unique(in_Y_adj);
assert(numel(out_X) == numel(in_Y_adj));
out_Y = NaN(numel(out_X), 1);

for ctr = 1:numel(out_X)
    out_Y(ctr, 1) = in_X_adj(find(in_Y_adj == out_X(ctr), 1, 'last'));
end

end