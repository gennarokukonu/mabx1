classdef ENUM_XPR_INHIBIT_UNPARK_MANUAL_T < Simulink.IntEnumType
    enumeration
       NO_OVERRIDE(0)
       INHIBIT_TRACTOR_UNPARK_BRAKE_COMMAND(1)
       INHIBIT_TRAILER_UNPARK_BRAKE_COMMAND(2)
       INHIBIT_BOTH_UNPARK_BRAKE_COMMANDS(3)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to inhibit unpark command';
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