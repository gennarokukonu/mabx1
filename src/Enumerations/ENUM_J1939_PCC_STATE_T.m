classdef ENUM_J1939_PCC_STATE_T < Simulink.IntEnumType
	enumeration
		DISABLED(0)
		ENABLED(1)
        VEH_POS_NOT_AVAILABLE(2)
        MAP_POS_NOT_AVAILABLE(3)
        ROAD_GRADE_NOT_AVAILABLE(4)
        PRED_PATH_NOT_AVAIL(5)
        VEH_SPD_BELOW_THRESHOLD(6)
        INHIBITED_BY_DRIVER(7)
		SELF_TEST(8)
		ERROR(14)
		NOT_AVAILABLE(15)
	end
	methods (Static = true)
		function retVal = getDefaultValue()
			retVal = eval([mfilename '.DISABLED']);
		end
		function retVal = addClassNameToEnumNames()
			retVal = true;
		end
		function retVal = getHeaderFile()
			retVal = 'EnumTypes.h';
		end
		function retVal = getDataScope()
			retVal = 'Exported';
		end
		function retVal = getDescription()
			retVal = sprintf('Enumeration defining SPN7317: PCC1 Predictive Cruise Control State');
		end
		function retVal = getMotoHawkEnumStruct()
			[enumerations, fields] = enumeration(mfilename);
			retVal = struct('name', fields(:), 'value', num2cell(double(enumerations)));
		end
	end
end