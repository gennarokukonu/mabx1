classdef ENUM_XPR_ERROR_STATE_T < Simulink.IntEnumType
    enumeration
       XPR_OK(0)
       XPR_MESSAGE_MISSING(1)
       XPR_ERROR(2)
       XPR_DISABLED(3)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration for XPR ERROR STATE per Bendix Y292203';
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