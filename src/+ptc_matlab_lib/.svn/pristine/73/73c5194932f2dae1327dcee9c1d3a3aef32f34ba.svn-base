function [ parameterPath ] = parameterLookup(x, parameterName )
% PARAMETERLOOKUP returns the full trace file path to a specified
% parameter.
%    
% x is the output of ptc_matlab_lib.trcParseTrcFile2
%
% parameterName is a string containing the parameter or signal name

    parameterPath = '';
    i_xfields = strfind( x, parameterName);
    i_xfields = find(~cellfun(@isempty,i_xfields));
    length_parameterName = length(parameterName);
    
    for ix = 1:length(i_xfields)
        i_str = x{i_xfields(ix)};
        if(length(i_str)<length_parameterName)
            break;
        else
            end_of_i_str = i_str((length(i_str)-length_parameterName+1):length(i_str));
            if( strcmp(end_of_i_str, parameterName ))
                % temphack
                if isempty(parameterPath)
                %add to output
                    parameterPath = [ parameterPath; strrep(i_str, '.', '/')];
                end
            end
        end
    end

end