function varargout = cursorGetDBStruct(varargin)

import('ptc_matlab_lib.*');

pairs = {'CursorObject', cursor};
ARGS = parseargs(varargin, pairs);

column_names = strrep(columnnames(ARGS.CursorObject), '''', '');
column_names = strtrim(strexplode(column_names, ','));
if numel(column_names) ~= numel(unique(column_names))
    error([mfilename ':' thisfuncname ':DuplicateColumnNames'], 'Duplicate column names found.');
end

if isequal(ARGS.CursorObject.Data, {'No Data'})
    varargout{1} = struct([]);
else
    thisData = ARGS.CursorObject.Data;
    thisData = arrayfun(@(X) {thisData(:, X)}, 1:size(thisData, 2), 'UniformOutput', false);
    args = push(column_names, thisData, 2:2:numel(column_names)*2);
    varargout{1} = struct(args{:});
end

end