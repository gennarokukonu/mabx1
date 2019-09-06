function out = strtrim2(in)
%strtrim2: Created in response to change in MATLAB R2016a, in which strtrim
%preserve non-breaking whitespace characters.

is_cell_str = false;
if iscellstr(in)
    is_cell_str = true;
end
in = cellstr(in);

out = deblank(in);

for ctr = 1:numel(out)
    start_idx = find(out{ctr}, 1, 'first');
    if ~isempty(start_idx)
        out{ctr} = out{ctr}(start_idx:end);
    end
end

out = regexprep(in, '(^\s*)|(\s*$)', '');

if ~is_cell_str
    out = out{1};
end

end