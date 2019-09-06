function varargout = renamefield(varargin)
%renamefield: Rename fields of a struct
%   renamefield('Struct', <struct([])>, ...
%       'OldField', <{}>, ...
%       'NewField', <{}>)

import('ptc_matlab_lib.*');

pairs = {'Struct', struct([]), ...
    'OldField', {}, ...
    'NewField', {}};
parseargs(varargin, pairs);

OldField = cellstr(OldField); %#ok<NODEF>
NewField = cellstr(NewField); %#ok<NODEF>
OldField = OldField(:);
NewField = NewField(:);

if length(OldField) == 1
    OldField = repmat(OldField, length(NewField), 1);
end
if length(NewField) == 1
    NewField = repmat(NewField, length(OldField), 1);
end

fields = fieldnames(Struct);
if any(ismember(NewField, fields))
    error([mfilename ':' thisfuncname ':FieldNamesAlreadyPresent'], 'One or more of the field names specified are already in use.');
end

%Replacement step
OldField_expr = cellfun(@(X) ['(\<' X '\>)'], OldField, 'UniformOutput', false);
fields = regexprep(fields, OldField_expr, NewField);
varargout{1} = cell2struct(struct2cell(Struct), fields, 1);

end