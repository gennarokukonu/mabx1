function out = filecmp(file1, file2)
%FILECMP: Function to compare the contents of two files, works with binary
%files as well as text files.
%   e.g. out = filecmp(file1, file2);
%
%   See also: visdiff

import('ptc_matlab_lib.*');

pairs = {'Strings_Indicating_Same', {'No differences found between these files', ...
    'The files are <b>identical</b>', ...
    'FC: no differences encountered'}};
ARGS = parseargs(pairs);

if ~exist(file1, 'file')
	error([mfilename ':' thisfuncname ':FileDoesNotExist'], ['File ' file1 ' does not exist']);
elseif ~exist(file2, 'file')
    error([mfilename ':' thisfuncname ':FileDoesNotExist'], ['File ' file2 ' does not exist']);
end

%It looks like the visdiff function is not
%supported by the MATLAB compiler. Hence, a different approach is needed if
%the application is running in deployed mode.
if verLessThan('matlab', '7.6') || isdeployed
    if ispc
        [status, result] = system(['fc "' file1 '" "' file2 '"']); clear('dummy'); %#ok<ASGLU>
        out = false;
        for ctr = 1:length(ARGS.Strings_Indicating_Same)
            if ~isempty(strfind(result, ARGS.Strings_Indicating_Same{ctr}))
                out = true;
                break;
            end
        end
    else
        error([mfilename ':' thisfuncname ':PlatformNotSupported'], ['Platform ' computer('arch') ' not supported']);
    end
else
    str = char(visdiff(file1, file2));
    out = false;
    for ctr = 1:length(ARGS.Strings_Indicating_Same)
        if ~isempty(strfind(str, ARGS.Strings_Indicating_Same{ctr}))
            out = true;
            break;
        end
    end
end


end