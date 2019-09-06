function outvec = push(invec, elements, indices)
%push: Insert elements into a vector (can be a cell array)
%
%   e.g. invec = [1,2,3]
%        elements = 5
%        indices = 3
%        push(invec, elements, indices) returns [1,2,5,3]

import('ptc_matlab_lib.*');

if nargin == 2
    indices = length(invec)+1:length(invec)+length(elements);
end

if isscalar(indices)
   indices = indices : indices + numel(elements) - 1;
end

if isempty(invec)
    assert(isequal((indices(:)).', 1:length(elements)));
    outvec = elements;
    return;
end

if isempty(elements)
    outvec = invec;
    return;
end

assert(isequal(unique(indices), sort(indices)));
assert(max(indices) <= length(invec)+length(indices));

if iscell(invec)
    outvec = cell(length(invec)+length(indices), 1);
elseif isstruct(invec)
    f = fieldnames(invec);
    c = cell(length(f), 1);
    outvec(length(invec)+length(indices)) = cell2struct(c(:), f(:), 1);
elseif isnumeric(invec)
    outvec = NaN(length(invec)+length(indices), 1);
elseif islogical(invec)
    outvec = true(length(invec)+length(indices), 1);
elseif ischar(invec)
    outvec = uint8(zeros(length(invec)+length(indices), 1));
else
    error([mfilename ':' thisfuncname ':InvalidDataType'], 'Invalid data type for invec');
end

if isscalar(elements)
    elements = repmat(elements, length(indices), 1);
end

outvec = outvec(:);
outvec(indices) = elements(:);
outvec(setdiff(1:length(outvec), indices)) = invec(:);

if iscolumn(invec)
    outvec = outvec(:);
else
    outvec = (outvec(:)).';
end

if ischar(invec)
    outvec = char(outvec);
end

end