classdef ENUM_J1939_SWITCH_T < Simulink.IntEnumType
	enumeration
		OFF(0)
		ON(1)
        ERROR(2)
        NOT_AVAILABLE(3)
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
			retVal = sprintf('Enumeration defininga generic 2 bit J1939 switch');
		end
		function retVal = getMotoHawkEnumStruct()
			[enumerations, fields] = enumeration(mfilename);
			retVal = struct('name', fields(:), 'value', num2cell(double(enumerations)));
		end
	end
end