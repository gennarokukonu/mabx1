function out = isprimitivesldt(in)

out = any(strcmp(in, {'boolean', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64', 'single', 'double', 'auto'})) || ptc_matlab_lib.isIntEnumType(regexprep(in, '^Enum:\s*', ''));

end