classdef ENUM_TSC1_CONTROL_PURPOSE_T < Simulink.IntEnumType
    enumeration
        P1_ACCELERATOR_OPERATOR(0)
        P2_CRUISE_CONTROL(1)
        P3_PTO_GOVERNOR(2)
        P4_ROAD_SPEED_GOVERNOR(3)
        P5_ENGINE_PROTECTION(4)
        P32_TEMP_POWERTRAIN_CTRL(31)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to select desired control purpose in TSC1';
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