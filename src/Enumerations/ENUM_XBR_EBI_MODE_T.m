classdef ENUM_XBR_EBI_MODE_T < Simulink.IntEnumType
    enumeration
       NO_EBI_ALLOWED(0)
       ONLY_ENDURANCE_BRAKES_ALLOWED(1)
       EBI_ALLOWED(2)
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
            retVal = 'Enumeration for XBR EBI MODE';
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