classdef ENUM_XPR_CONTROL_MODE_T < Simulink.IntEnumType
    enumeration
       NO_BRAKE_DEMAND(0)
       DRIVER_BRAKING_ONLY(1)
       ADDITIONAL_MODE(2)
       MAXIMUM_MODE(3)
       FAILSAFE_BRAKING_ACTIVE(13)
       ERROR(14)
       NOT_AVAILABLE(15)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration for XPR CONTROL MODE per Bendix Y292203';
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