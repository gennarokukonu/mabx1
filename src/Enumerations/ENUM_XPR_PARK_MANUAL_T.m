classdef ENUM_XPR_PARK_MANUAL_T < Simulink.IntEnumType
    enumeration
       NO_OVERRIDE(0)
       APPLY_TRACTOR_PARK_BRAKE(1)
       APPLY_TRAILER_PARK_BRAKE(2)
       APPLY_BOTH_PARK_BRAKE(3)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to apply a park brake';
        end
        function retVal = addClassNameToEnumNames()
            retVal = true;
        end
        function retVal = getMotoHawkEnumStruct()
            [enumerations, fields] = enumeration(mfilename);
            retVal = struct('name', fields(:), 'value', num2cell(double(enumerations)));
        end
    end
end