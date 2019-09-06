classdef ENUM_PTC_MBDS_DTC_STATUS_T < Simulink.IntEnumType
    enumeration
        PASSED(0)
        FAILED(1)
        DISABLED(2)
        DETECTION_ONGOING(3)
        FAULTS_CLEARED(4)
    end
    methods (Static = true)
        function retVal = getDataScope()
            retVal = 'Exported';
        end
        function retVal = getHeaderFile()
            retVal = 'EnumTypes.h';
        end
        function retVal = getDescription()
            retVal = 'DTC Status Indicator';
        end
        function retVal = getDefaultValue()
            retVal = eval([mfilename '.DISABLED']);
        end
        function retVal = addClassNameToEnumNames()
            retVal = true;
        end
        function retVal = getMotoHawkEnumStruct()
            [enumerations, fields] = enumeration(mfilename);
            retVal = struct('name', fields(:), 'value', num2cell(double(enumerations)));
        end
        function retVal = getRaptorEnumStruct()
            [enumerations, fields] = enumeration(mfilename);
            retVal = struct('Name', fields(:), 'Value', num2cell(double(enumerations)));
        end
    end
end