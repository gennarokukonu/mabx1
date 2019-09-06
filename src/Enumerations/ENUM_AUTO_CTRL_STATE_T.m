classdef ENUM_AUTO_CTRL_STATE_T < Simulink.IntEnumType
    enumeration
        NOT_AVAILABLE(0)
        INIT(1)
        OPERATOR_DISABLED(2)
        FAULT(3)
        SELF_TEST(4)
        AUTO_CTRL_ENABLED(5)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
             retVal = 'Enumeration of the Autonomous Vehicle Control Super State';
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