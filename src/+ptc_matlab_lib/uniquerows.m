function out = uniquerows(cellstring)

if isempty(cellstring)
    out = cellstring;
    return;
end

x = sortrows(cellstring);
out = cell(size(x));

out(1, :) = x(1, :);
counter = 2;
for ctr = 2:size(x, 1)
    if ~isequal(x(ctr, :), x(ctr-1, :))
        out(counter, :) = x(ctr, :);
        counter = counter + 1;
    end
end

out(counter:end, :) = [];

end