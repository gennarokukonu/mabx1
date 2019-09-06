function out = xlNum2Col(column_number)
%XLNUM2COL Converts Excel column number to column name
%   e.g. xlNum2Col(1) returns 'A'
%        xlNum2Col(2) returns 'B'
%        xlNum2Col(26) returns 'Z'
%        xlNum2Col(27) returns 'AA'
%        xlNum2Col(28) returns 'AB'
%        xlNum2Col(53) returns 'BA'
%
%   See also XLCOL2NUM

import('ptc_matlab_lib.*');

upper_limit = xlCol2Num('ZZZZZZZZZZZ');
if column_number > upper_limit
    error([mfilename ':' thisfuncname ':InputOutOfBounds'], 'Error: Input out of bounds');
end

column_number_vec = convert2basen(column_number, 26, 'ShouldValidate', false);
if any(column_number_vec >= 26) || any(column_number_vec < 0)
    error([mfilename ':' thisfuncname ':InputOutOfBounds'], 'Error: Input out of bounds');
end

ctr = 1;
subs_val = 26;
while any(column_number_vec(2:end) <= 0)
    index = find(column_number_vec<=0, 1, 'last');
    column_number_vec(index) = subs_val + column_number_vec(index);
    column_number_vec(index - 1) = column_number_vec(index - 1) - 1;    
    ctr = ctr + 1;
end

column_number_vec = rowvec(column_number_vec(column_number_vec >= 1));

column_name_split = cell(length(column_number_vec), 1);

for ctr = 1:length(column_number_vec)
    column_name_split{ctr} = char(column_number_vec(ctr) + 64);
end

out = strimplode(column_name_split, '');
% 
% if ~isequal(xlCol2Num(out), column_number)
%     error([mfilename ':' thisfuncname ':InputOutOfBounds'], 'Error: Input out of bounds');
% end

end