classdef ENUM_J1939_ACC_MODE_T < Simulink.IntEnumType
	enumeration
		OFF(0)
		SPEED_CONTROL_ACTIVE(1)
        DISTANCE_CONTROL_ACTIVE(2)
        OVERTAKE_MODE(3)
        HOLD_MODE(4)
        FINISH_MODE(5)
        ERROR(6)
        NOT_AVAILABLE(7)
	end
	methods (Static = true)
		function retVal = getDefaultValue()
			retVal = eval([mfilename '.OFF']);
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
			retVal = sprintf('Enumeration defining SPN1590: ACC1 Adaptive Cruise Control Mode');
		end
		function retVal = getMotoHawkEnumStruct()
			[enumerations, fields] = enumeration(mfilename);
			retVal = struct('name', fields(:), 'value', num2cell(double(enumerations)));
		end
	end
end