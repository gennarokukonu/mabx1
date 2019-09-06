function varargout = cellstr2expr(varargin)

import('ptc_matlab_lib.*');
pairs = {'InputCellArray', {}, ...
    'ShowNewLines', true};
ARGS = parseargs(varargin, pairs);

if ~ismatrix(ARGS.InputCellArray)
    error([mfilename ':' thisfuncname ':DimensionsNotSupported'], 'This function does not support cell arrays with number of dimensions greater than 2.');
end
if ~iscellstr(ARGS.InputCellArray)
    error([mfilename ':' thisfuncname ':NotCellStr'], 'This function supports only a cell array of strings');
end
if isempty(ARGS.InputCellArray)
   dimcell = cell(ndims(ARGS.InputCellArray), 1);
   for ctr = 1:ndims(ARGS.InputCellArray)
      dimcell{ctr} = num2str(size(ARGS.InputCellArray, ctr));
   end
   varargout{1} = ['cell(' strimplode(dimcell, ', ') ')'];
   return;
end

Lines = arrayfun(@(X) ['''' ptc_matlab_lib.strimplode(ARGS.InputCellArray(X, :), ''', ''') ''''], ...
    1:size(ARGS.InputCellArray, 1), 'UniformOutput', false);

if ARGS.ShowNewLines
    Lines = ['{' strimplode(Lines, [';' sprintf('\n ')]) '}'];
else
    Lines = ['{' strimplode(Lines, '; ') '}'];
end

varargout{1} = Lines;

end