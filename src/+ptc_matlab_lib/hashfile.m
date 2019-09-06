function varargout = hashfile(varargin)
%HashAlgorithm can be one of the following:
% MD2
% MD5
% SHA-1
% SHA-256
% SHA-384
% SHA-512

import('ptc_matlab_lib.*');

pairs = {'FilePath', '', ...
    'HashAlgorithm', '', ...
    'Salt', ''};
ARGS = parseargs(varargin, pairs);

ARGS.FilePath = strtrim(ARGS.FilePath);
if isempty(ARGS.FilePath)
    [filename, pathname] = uigetfile({'*.*', 'All files (*.*)'}, 'Select file', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = [];
        return;
    else
        ARGS.FilePath = fullfile(pathname, filename);
    end
end

%Use java file reader as a first preference. This construct is supported
%only by Java 7 and later. In situations where this construct fails, revert
%to the slower MATLAB fread function instead.
try
    varargout{1} = hash('Data', typecast(java.nio.file.Files.readAllBytes(java.io.File(ARGS.FilePath).toPath), 'uint8'), ...
        'HashAlgorithm', ARGS.HashAlgorithm, ...
        'Salt', ARGS.Salt);
catch %#ok<CTCH>
    fid = fopen(ARGS.FilePath, 'r');
    if fid == -1
        error([mfilename ':' thisfuncname ':CouldNotReadFile'], 'Could not read file.');
    end
    try
        varargout{1} = hash('Data', fread(fid), 'HashAlgorithm', ARGS.HashAlgorithm, 'Salt', ARGS.Salt);
    catch ME
        fclose(fid);
        rethrow(ME);
    end
    fclose(fid);
end

end