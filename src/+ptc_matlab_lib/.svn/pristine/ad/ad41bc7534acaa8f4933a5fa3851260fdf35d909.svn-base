function out = containerdatatype(dt)
%CONTAINERDATATYPE Returns the best container data type for dtstr.
%   This function returns the best container data type for dtstr. It is
%   useful when a container data type for a fixed point data type has to be
%   selected, but Simulink Fixed Point and the fixed point toolbox have not
%   been installed.
%
%   SYNTAX:
%   containerdatatype(dt)
%
%   e.g. containerdatatype('ufix6_S5.6_B123') returns 'uint16'
%
%   e.g. containerdatatype(fixdt('ufix6_S5.6_B123')) returns
%   fixdt('uint16')
%
%   See also: getmindtval, getmaxdtval

import('ptc_matlab_lib.*');

%Assuming a suitable built in container data type does not exist
out = [];

if ismember(dt, {'double', 'single', 'boolean', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32'})
    out = dt;
    return;
end

if ischar(dt) && isempty(regexp(dt, 'fixdt\s*(.*', 'once'))
    NumericTypeObj = fixdt(dt);
elseif ischar(dt)
    NumericTypeObj = evalsafe(dt);
elseif isa(dt, 'Simulink.NumericType')
    NumericTypeObj = dt;
end
mindtval = getmindtval(NumericTypeObj);
maxdtval = getmaxdtval(NumericTypeObj);
WordLengths = [1 8 16 32];
if is64
    WordLengths = [WordLengths 64];
end
issigned = (mindtval < 0);

for wlctr = 1:length(WordLengths)
    if wlctr == 1
        thisdt = 'boolean';
    elseif issigned
        thisdt = ['int' num2str(WordLengths(wlctr))];
    else
        thisdt = ['uint' num2str(WordLengths(wlctr))];
    end
        
    if mindtval >= getmindtval(thisdt) && maxdtval <= getmaxdtval(thisdt)
        if ischar(dt)
            out = thisdt;
        elseif isa(dt, 'Simulink.NumericType')
            out = fixdt(thisdt);
        end
        break;
    end
end

end