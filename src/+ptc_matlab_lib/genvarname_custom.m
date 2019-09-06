function str = genvarname_custom(str, varargin)
%GENVARNAME_CUSTOM(STR) Replaces all whitespace characters with an
%underscore, and all nonnumeric and nonalphabetic characters with a null
%string
%
%   See also: genvarname

import('ptc_matlab_lib.*');

pairs = {'MaxIdentifierLength', namelengthmax};
parseargs(varargin, pairs);

if MaxIdentifierLength < 3
    error([mfilename ':' thisfuncname ':MaxIdentifierLengthTooShort'], 'The value of MaxIdentifierLength specified is too low');
end

str = regexprep(strtrim(str), '\s+', '_');
str = regexprep(str, '[^_\w\d]', '');

%Limit length of identifiers to MaxIdentifierLength
str = cellstr(str);
for ctr = 1:length(str)
    thisstr = str{ctr};
    thisstr = thisstr(1:min(MaxIdentifierLength, length(thisstr)));
    counter = 1;
    origstr = thisstr;
    tf = ismember(thisstr, str(1:ctr-1));
    while tf
        addendum = ['_' num2str(counter)];
        thisstr = origstr;
        thisstr(MaxIdentifierLength - length(addendum) + 1:MaxIdentifierLength) = addendum;
        thisstr(thisstr == 0) = '';
        tf = ismember(thisstr, str(1:ctr-1));
        counter = counter + 1;
    end
    str{ctr} = thisstr;    
end

if length(str) == 1
    str = str{1};
end

str = genvarname(str);

end