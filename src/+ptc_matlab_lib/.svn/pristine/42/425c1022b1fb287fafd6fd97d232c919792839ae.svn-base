function maxval = getmaxdtval(dt)
%GETMAXDTVAL Maximum value for input data type string. Always returns a
%double value
%
%   e.g. getmaxdtval('ufix6_S5.6_B123') returns 475.8.
%
%   e.g. getmaxdtval(fixdt('ufix6_S5.6_B123')) returns 475.8
%
%   See also: getmindtval, containerdatatype

import('ptc_matlab_lib.*');

if ischar(dt)
    dt = regexprep(dt, '^(e|E)num: ' , '');
end

if ischar(dt) || isa(dt, 'Simulink.NumericType')
    dt = {dt};
end

maxval = NaN(size(dt));
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
    error([mfilename ':' thisfuncname ':InvalidDataType']);
end

indices1 = cellfun(@(X) ischar(X) && ismember(X, char_data_types), dt);
maxval(indices1) = intmax_double('uint16');
indices2 = cellfun(@(X) ischar(X) && ismember(X, boolean_data_types), dt);
maxval(indices2) = 1;
indices3 = cellfun(@(X) ischar(X) && ismember(X, integer_data_types), dt);
maxval(indices3) = cellfun(@intmax_double, dt(indices3));
indices4 = cellfun(@(X) ischar(X) && ismember(X, flt_data_types), dt);
maxval(indices4) = cellfun(@(X) double(realmax(X)), dt(indices4));
indices5 = cellfun(@ptc_matlab_lib.isIntEnumType, dt);
maxval(indices5) = double(cellfun(@(X) max(enumeration(X)), dt(indices5)));
maxval(~(indices1 | indices2 | indices3 | indices4 | indices5)) = NaN;

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
            maxval(ctr) = feval(thisfuncname, lower(dtObject.DataTypeMode));
        else
            wl = double(dtObject.WordLength);
            if strcmpi(dtObject.Signedness, 'Unsigned')
                max_stored_integer = (2^wl) - 1;
            elseif strcmpi(dtObject.Signedness, 'Signed')
                max_stored_integer = (2^(wl-1)) - 1;
            end
            maxval(ctr) = double(max_stored_integer) * double(dtObject.Slope) + double(dtObject.Bias);
        end
    end
end

end

function imax = intmax_double(varargin)
%INTMAX Largest positive integer value.
%   X = INTMAX is the largest positive value representable in an int32.
%   Any value that is larger than INTMAX will saturate to INTMAX when
%   cast to int32.
%
%   INTMAX('int32') is the same as INTMAX with no arguments.
%
%   INTMAX(CLASSNAME) is the largest positive value in the integer class
%   CLASSNAME. Valid values of CLASSNAME are 'int8', 'uint8', 'int16',
%   'uint16', 'int32', 'uint32', 'int64' and 'uint64'.
%
%   See also INTMIN, REALMAX.

%   Copyright 1984-2009 The MathWorks, Inc.

if (nargin == 0)
    imax = 2147483647;
elseif (nargin == 1)
    classname = varargin{1};
    if ischar(classname)
        switch (classname)
            case 'int8'
                imax = 127;
            case 'uint8'
                imax = 255;
            case 'int16'
                imax = 32767;
            case 'uint16'
                imax = 65535;
            case 'int32'
                imax = 2147483647;
            case 'uint32'
                imax = 4294967295;
            case 'int64'
                imax = 9223372036854775807;
            case 'uint64'
                imax = 18446744073709551615;
            otherwise
                error(message('MATLAB:intmax:invalidClassName'))
        end
    else
        error(message('MATLAB:intmax:inputMustBeString'))
    end
else % nargin > 1
    error(message('MATLAB:intmax:tooManyInputs'));
end

end