function out = existblock(object)

out = true;
try
    if isnumeric(object)
        thisname = get(object, 'Name');
    elseif ischar(object)
        thisname = get_param(object, 'Name');
    end
catch
    out = false;
end

end