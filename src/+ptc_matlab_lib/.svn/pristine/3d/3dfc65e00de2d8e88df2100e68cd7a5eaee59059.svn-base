function minval = getmindtval(dt)
%GETMINDTVAL Minimum value for input data type string. Always returns a
%double value
%
%   e.g. getmindtval('ufix6_S5.6_B123') returns 123.
%
%   e.g. getmindtval(fixdt('ufix6_S5.6_B123')) returns 123.
%
%   See also: getmaxdtval, containerdatatype

import('ptc_matlab_lib.*');

if ischar(dt)
    dt = regexprep(dt, '^(e|E)num: ', '');
end

if ischar(dt) || isa(dt, 'Simulink.NumericType')
    dt = {dt};
end

minval = NaN(numel(dt), 1);
char_indices = cellfun(@ischar, dt);
chardt = dt(char_indices);
chardt(strcmp('UBYTE', chardt)) = {'uint8'};
chardt(strcmp('SBYTE', chardt)) = {'int8'};
chardt(strcmp('UWORD', chardt)) = {'uint16'};
chardt(strcmp('SWORD', chardt)) = {'int16'};
chardt(strcmp('ULONG', chardt)) = {'uint32'};
chardt(strcmp('SLONG', chardt)) = {'int32'};
chardt(strcmp('A_UINT64', chardt)) = {'uint64'};
chardt(strcmp('A_INT64', chardt)) = {'int64'};
chardt(ismember(chardt, {'FLOAT32_IEEE'; 'IEEE_FLOAT'})) = {'single'};
chardt(ismember(chardt, {'FLOAT64_IEEE'; 'IEEE_DOUBLE'; 'auto'})) = {'double'};
dt(char_indices) = chardt;

boolean_data_types = {'boolean', 'logical'};
integer_data_types = {'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64'};
char_data_types = {'char'};
flt_data_types = {'single', 'double'};
invalid_data_types = {'sfix1'};

if any(ismember(dt(char_indices), invalid_data_types))
    error([mfilename ':' thisfuncname ':InvalidDataType'], 'Invalid data type');
end

indices1 = cellfun(@(X) ischar(X) && ismember(X, char_data_types), dt);
minval(indices1) = intmin_double('uint16');
indices2 = cellfun(@(X) ischar(X) && ismember(X, boolean_data_types), dt);
minval(indices2) = 0;
indices3 = cellfun(@(X) ischar(X) && ismember(X, integer_data_types), dt);
minval(indices3) = cellfun(@intmin_double, dt(indices3));
indices4 = cellfun(@(X) ischar(X) && ismember(X, flt_data_types), dt);
minval(indices4) = -cellfun(@(X) double(realmax(X)), dt(indices4));
indices5 = cellfun(@ptc_matlab_lib.isIntEnumType, dt);
minval(indices5) = double(cellfun(@(X) min(enumeration(X)), dt(indices5)));
minval(~(indices1 | indices2 | indices3 | indices4 | indices5)) = NaN;

if ~isdeployed
    for ctr = rowvec(find(~(indices1 | indices2 | indices3 | indices4 | indices5)))
        thisDT = dt{ctr};
        if ischar(thisDT) && isempty(regexp(strtrim(thisDT), 'fixdt\s*\(.+\)', 'once'))
            dtObject = fixdt(thisDT);
        elseif ischar(thisDT)
            dtObject = evalsafe(thisDT);
        else
            dtObject = thisDT;
        end
        if ismember(dtObject.DataTypeMode, {'Single', 'Double'})
            minval(ctr) = feval(thisfuncname, lower(dtObject.DataTypeMode));
        else
            wl = double(dtObject.WordLength);
            if strcmpi(dtObject.Signedness, 'Unsigned')
                min_stored_integer = 0;
            elseif strcmpi(dtObject.Signedness, 'Signed')
                min_stored_integer = -(2^(wl-1));
            end
            minval(ctr) = double(min_stored_integer) * double(dtObject.Slope) + double(dtObject.Bias);
        end
    end
end

end

function imin = intmin_double(varargin)
%INTMIN Smallest integer value.
%   X = INTMIN is the smallest value representable in an int32.
%   Any value that is smaller than INTMIN will saturate to INTMIN when
%   cast to int32.
%
%   INTMIN('int32') is the same as INTMIN with no arguments.
%
%   INTMIN(CLASSNAME) is the smallest value in the integer class CLASSNAME.
%   Valid values of CLASSNAME are 'int8', 'uint8', 'int16', 'uint16',
%   'int32', 'uint32', 'int64' and 'uint64'.
%
%   See also INTMAX, REALMIN.

%   Copyright 1984-2004 The MathWorks, Inc.

if (nargin == 0)
    imin = -2147483648;
elseif (nargin == 1)
    classname = varargin{1};
    if ischar(classname)
        switch (classname)
            case 'int8'
                imin = -128;
            case 'uint8'
                imin = 0;
            case 'int16'
                imin = -32768;
            case 'uint16'
                imin = 0;
            case 'int32'
                imin = -2147483648;
            case 'uint32'
                imin = 0;
            case 'int64'
                imin = -9223372036854775808;
            case 'uint64'
                imin = 0;
            otherwise
                error(message('MATLAB:intmin:invalidClassName'))
        end
    else
        error(message('MATLAB:intmin:inputMustBeString'))
    end
else % nargin > 1
    error(message('MATLAB:intmin:tooManyInputs'));
end

end