classdef ENUM_REAX_OPERATION_MODE_T < Simulink.IntEnumType
    enumeration
        DEFAULT_TRQ_CTRL_MODE(0)
        POSITION_CTRL_MODE(1)
        EXT_TRQ_CTRL_MODE_A(2)
        ALL_CTRL_DISABLED(3)
        EXT_TRQ_CTRL_MODE_B(4)
        EXT_TRQ_CTRL_MODE_C(5)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to represent the operating mode of the TRW REAX Steering Wheel';
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