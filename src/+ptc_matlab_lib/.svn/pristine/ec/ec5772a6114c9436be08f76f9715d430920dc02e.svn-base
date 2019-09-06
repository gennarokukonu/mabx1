function x = hexsingle2num(s)
%HEXSINGLE2NUM Convert single precision IEEE hexadecimal string to number.
%   HEXSINGLE2NUM(S), where S is a 8 character string containing
%   a hexadecimal number, returns a double type number
%   equal to the IEEE single precision
%   floating point number it represents.  Fewer than 8
%   characters are padded on the left with zeros.
%
%   NaNs, infinities and denorms are handled correctly.  
%
%   Example:
%       hexsingle2num('40490fdb') returns Pi.
%       hexsingle2num('bf800000') returns -1.
%
%   See also HEX2NUM.

x = double(typecast(uint32(hex2dec(s)), 'single'));
x = reshape(x, size(cellstr(s)));

end
