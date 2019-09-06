function out = isIntEnumType(in)

if ischar(in) || isscalar(in)
    incell = {in};
elseif iscell(in)
    incell = in;
end
out = true(size(incell));
assert(iscell(incell));
for ctr = 1:numel(incell)
    try
        x = enumeration(incell{ctr});
        if isempty(x)
            out(ctr) = false;
        end
    catch
        out(ctr) = false;
    end
end

end