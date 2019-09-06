function out = pad_lookup2d_for_extrapolation(tabledata)
%PAD_LOOKUP2D_FOR_EXTRAPOLATION Pads the x, y, and v fields of input argument
%structure such that an extrapolation operation results in the same
%behavior as interpolation-use end values. This function was written to be
%compatible with dSPACE ASM tables, so that an interpolation-use end values
%result could be achieved without having to modify the corresponding ASM
%blocks, which tend to use the interpolation-extrapolation option in their
%lookup tables.

% tabledata.x --> row values, tabledata.y --> column values
% tabledata.v --> matrix

assert(numel(tabledata.v) == numel(tabledata.x) * numel(tabledata.y));

out = tabledata;
out.x = tabledata.x(:);
out.y = tabledata.y(:);
out.v = reshape(tabledata.v, numel(tabledata.x), numel(tabledata.y));
[out.x, indices] = sort(out.x);
out.v = out.v(indices, :);

[out.y, indices] = sort(out.y);
out.v = out.v(:, indices);

out.x = [out.x(1)-10; out.x; out.x(end)+10]; %10 is an arbitrary magic number
out.y = [out.y(1)-10; out.y; out.y(end)+10]; %10 is an arbitrary magic number
out.v = [out.v(1, 1)      out.v(1, :)       out.v(1, end);
         out.v(:, 1)      out.v             out.v(:, end);
         out.v(end, 1)    out.v(end, :)     out.v(end, end)];

end