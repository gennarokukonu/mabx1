function revision = get_svn_revision(PathToCheck)

[~, result] = system(['svn info "' PathToCheck '@"']);
result = regexp(result, '\s*Revision:\s+(?<Revision>\d+)\s+', 'once', 'names');
if ~isempty(result)
    revision = str2double(result.Revision);
else
    revision = [];
end

end