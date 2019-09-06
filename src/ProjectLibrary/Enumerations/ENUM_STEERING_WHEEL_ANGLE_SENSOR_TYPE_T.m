classdef ENUM_STEERING_WHEEL_ANGLE_SENSOR_TYPE_T < Simulink.IntEnumType
	enumeration
		RELATIVE(0)
		ABSOLUTE(1)
        RESERVED(2)
        NOT_AVAILABLE(3)
	end
	methods (Static = true)
		function retVal = getDefaultValue()
			retVal = eval([mfilename '.NOT_AVAILABLE']);
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
			retVal = sprintf('Enumeration defining the steering wheel angle sensor type for SPN1812: Steering Wheel Angle Sensor Type');
		end
		function retVal = getMotoHawkEnumStruct()
			[enumerations, fields] = enumeration(mfilename);
			retVal = struct('name', fields(:), 'value', num2cell(double(enumerations)));
		end
	end
end