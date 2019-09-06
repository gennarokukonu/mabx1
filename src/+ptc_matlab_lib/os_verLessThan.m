function isLessThan = os_verLessThan(ver)
%os_verLessThan(ver): Returns true if the operating system version is less
%than the string ver
%
%   e.g. os_verLessThan('6.0') would return true for Windows XP, if running on Windows

import('ptc_matlab_lib.*');

thisver = os_ver;
thisver = strexplode(thisver, '.');
thisver = str2double(thisver);

specver = ver;
specver = strexplode(specver, '.');
specver = str2double(specver);

if length(thisver) < length(specver)
    thisver = pad_to_length('FinalLength', length(specver), ...
        'InputVector', thisver, ...
        'PadValue', 0, ...
        'PadDirection', 'right');
elseif length(thisver) > length(specver)
    specver = pad_to_length('FinalLength', length(thisver), ...
        'InputVector', specver, ...
        'PadValue', 0, ...
        'PadDirection', 'right');
end
assert(length(thisver) == length(specver));

indices_less = (thisver(:) < specver(:));
indices_more = (thisver(:) > specver(:));

if any(indices_less) && any(indices_more)
    isLessThan = (find(indices_less, 1) < find(indices_more, 1));
elseif any(indices_less) && none(indices_more)
    isLessThan = true;
else
    isLessThan = false;
end

end