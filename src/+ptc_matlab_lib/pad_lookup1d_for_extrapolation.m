function out = pad_lookup1d_for_extrapolation(tabledata)
%PAD_LOOKUP1D_FOR_EXTRAPOLATION Pads the x and y fields of input argument
%structure such that an extrapolation operation results in the same
%behavior as interpolation-use end values. This function was written to be
%compatible with dSPACE ASM tables, so that an interpolation-use end values
%result could be achieved without having to modify the corresponding ASM
%blocks, which tend to use the interpolation-extrapolation option in their
%lookup tables.

% tabledata.x --> axis values, tabledata.v --> table values

assert(numel(tabledata.x) == numel(tabledata.v));

out = tabledata;
out.x = tabledata.x(:);
out.v = tabledata.v(:);
[out.x, indices] = sort(out.x(:));
out.v = out.v(indices);

out.x = [out.x(1)-10; out.x; out.x(end)+10]; %10 is an arbitrary magic number
out.v = [out.v(1); out.v; out.v(end)];
     
end