classdef ENUM_XBR_CONTROL_MODE_T < Simulink.IntEnumType
    enumeration
       OVERRIDE_DISABLED(0)
       ACCEL_CTRL_WITH_ADDITION_MODE(1)
       ACCEL_CTRL_WITH_MAX_MODE(2)
       NOT_DEFINED(3)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration for XBR CONTROL MODE';
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