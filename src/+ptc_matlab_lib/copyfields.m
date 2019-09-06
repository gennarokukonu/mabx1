function out = copyfields(src, dest)
%COPYFIELDS: Copy the fields of one structure into another and return the
%result
%
%   SYNTAX:
%   dest = copyfields(src, dest);
%
%   See also: rmfield, isfield, setfield

src_fields = fieldnames(src);
src_vals = struct2cell(src);
dest_fields = fieldnames(dest);
dest_vals = struct2cell(dest);

fields = [src_fields(:); dest_fields(:)];
vals = [src_vals(:); dest_vals(:)];
[fields, indices] = unique(fields, 'first');
vals = vals(indices);

out = cell2struct(vals(:), fields(:), 1);

end