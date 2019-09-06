function out = check_write_permissions(directory)

[~, filename] = fileparts(tempname);
filepath = fullfile(directory, filename);
fid = fopen(filepath, 'w');
if fid ~= -1
    fclose(fid);
end
out = (fid ~= -1);
if exist(filepath, 'file')
    delete(filepath);
end

end