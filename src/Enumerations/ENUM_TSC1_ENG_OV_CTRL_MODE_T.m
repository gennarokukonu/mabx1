classdef ENUM_TSC1_ENG_OV_CTRL_MODE_T < Simulink.IntEnumType
    enumeration
        OVERRIDE_DISABLED(0)
        SPEED_CONTROL(1)
        TORQUE_CONTROL(2)
        SPEED_TORQUE_LIMIT_CONTROL(3)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to select desired engine override control mode in TSC1';
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