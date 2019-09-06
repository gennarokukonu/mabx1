classdef ENUM_LONG_SPEED_DEMAND_SOURCE_T < Simulink.IntEnumType
    enumeration
       GPS_PATH(0)
       OVERRIDE(1)
       RW_WAYPOINTS(2)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'Enumeration to select a the signal source for longitudnal speed target';
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