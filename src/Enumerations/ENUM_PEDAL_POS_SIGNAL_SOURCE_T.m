classdef ENUM_PEDAL_POS_SIGNAL_SOURCE_T < Simulink.IntEnumType
    enumeration
       DISABLED(0)
       CAN_EEC2_00(1)
       SW_EMULATION(2)
       CAN_EEC2_00_AND_SW_EMULATION(3)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to select a the signal source for pedal position';
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