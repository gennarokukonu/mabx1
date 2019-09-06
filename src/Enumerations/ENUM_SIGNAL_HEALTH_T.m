classdef ENUM_SIGNAL_HEALTH_T < Simulink.IntEnumType
    enumeration
        FAULT_INACTIVE(0)
        FAULT_PENDING(1)
        FAULT_ACTIVE(2)
        FAULT_NOT_AVAILABLE(255)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to describe signal health values';
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