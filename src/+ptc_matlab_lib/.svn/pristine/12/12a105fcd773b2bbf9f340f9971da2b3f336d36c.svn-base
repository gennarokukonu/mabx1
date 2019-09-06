function out = partialstruct(in, fields)
%partialstruct: Returns a portion of a structure containing only specified
%fields

fields = cellstr(fields); fields = fields(:);

%Assert that the fields list is unique
if numel(fields) ~= numel(unique(fields))
    error([mfilename ':' thisfuncname ':FieldsMustBeUnique'], 'Fields must be unique');
end

fields = fields(isfield(in, fields));
if isempty(fields)
    out = struct;
    return;
end

oldfields = fieldnames(in);
oldfields = oldfields(:);
oldvals = struct2cell(in);
oldvals = oldvals(:);
handle_indices = find(cellfun(@(X) isa(X, 'handle'), oldvals));
for idx = handle_indices
    try %#ok<TRYNC>
        oldvals{idx(1)} = oldvals{idx(1)}.copy;
    end
end
[~, loc] = ismember(fields, oldfields);
out = cell2struct(oldvals(nonzeros(loc)), oldfields(nonzeros(loc)), 1);

end