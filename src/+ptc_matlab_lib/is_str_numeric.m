function tf = is_str_numeric(in)

tf = ~isnan(str2double(in));

end