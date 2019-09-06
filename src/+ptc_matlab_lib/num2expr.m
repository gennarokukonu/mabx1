function varargout = num2expr(varargin)

import('ptc_matlab_lib.*');
pairs = {'InputMatrix', [], ...
    'ShowNewLines', true, ...
    'FormatString', '%1.12g'};
ARGS = parseargs(varargin, pairs);

if ~ismatrix(ARGS.InputMatrix)
    error([mfilename ':' thisfuncname ':NonMatrixElementsNotSupported']);
end

ARGS.FormatString = [strtrim(ARGS.FormatString) ' '];

%Sundeep Tuteja, 2013-05-06: It is possible that the 'zero' in
%ARGS.InputMatrix is a +0 or a -0. Therefore, for consistency, it is being
%converted to a +0.
ARGS.InputMatrix(ARGS.InputMatrix == 0) = 0;

if isscalar(ARGS.InputMatrix)
    if isa(ARGS.InputMatrix, 'Simulink.IntEnumType')
        out = num2str(ARGS.InputMatrix);
    else
        out = num2str(ARGS.InputMatrix, ARGS.FormatString);
    end
    out = strrep(out, 'Infi', 'Inf*i');
else
    if isa(ARGS.InputMatrix, 'Simulink.IntEnumType')
        Lines = strtrim(cellstr(num2str(ARGS.InputMatrix)));
    else
        Lines = strtrim(cellstr(num2str(ARGS.InputMatrix, ARGS.FormatString)));
    end
    Lines = regexprep(Lines, '\s+', ', ');
    Lines = strrep(Lines, 'Infi', 'Inf*i');
    if ARGS.ShowNewLines
        out = ['[' strimplode(Lines, [';' sprintf('\n ')]) ']'];
    else
        out = ['[' strimplode(Lines, '; ') ']'];
    end
end

varargout{1} = out;

end