classdef ENUM_CAN_RX_T < Simulink.IntEnumType
    enumeration
        RX_DISABLED(0)
        RX_CAN_1(1)
        RX_CAN_2(2)
        RX_CAN_3(3)
		RX_CAN_4(4)
		RX_CAN_5(5)
		RX_CAN_6(6)		
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to select the CAN bus to receive a message on, for the microautobox';
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