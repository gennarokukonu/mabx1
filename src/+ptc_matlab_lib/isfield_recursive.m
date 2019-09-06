function out = isfield_recursive(s, fieldnames) %#ok<INUSL>
%ISFIELD_RECURSIVE Similar to isfield, but looks into multiple levels of
%the structure.
%
%   SYNTAX:
%
%   isfield_recursive(s, field): returns true if field is a field of
%   structure s.
%
%   Example:
%   s = struct('f1', struct('f11', 1, 'f12', 2), 'f2', 2);
%   out = isfield_recursive(s, {'f1.f11', 'f1.f12', 'f1', 'f2'}) returns
%   [1 1 1 1].

fieldnames = cellstr(fieldnames);
out = false(size(fieldnames));
for ctr = 1:numel(out)
    try
        eval(['s.' fieldnames{ctr} ';']);
        out(ctr) = true;
    catch
        out(ctr) = false;
    end
end

end