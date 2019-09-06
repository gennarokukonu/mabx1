function out = xlCol2Num(column_name)
%XLCOL2NUM Converts Excel column name to column number
%   e.g. xlCol2Num('A') returns 1
%        xlCol2Num('Z') returns 26
%        xlCol2Num('AA') returns 27
%        xlCol2Num('AB') returns 28
%        xlCol2Num('BA') returns 53
%
%   See also XLNUM2COL

import('ptc_matlab_lib.*');

if length(column_name) > length('ZZZZZZZZZZZ')
    error([mfilename ':' thisfuncname ':InputOutOfBounds'], 'Error: Input out of bounds. The highest column possible is ZZZZZZZZZZZ.');
end

column_name_split = strexplode(upper(column_name));
column_index_vec = cellfun(@(X) double(X) - 64, column_name_split);

out = convert2decimalnum(column_index_vec(:), 26, 'ShouldValidate', false);

end