function out = dir_recursive(varargin)
%DIR_RECURSIVE: Recursive implementation of dir

import('ptc_matlab_lib.*');

if nargin==0
    BaseDirectory = pwd;
else
    BaseDirectory = varargin{1};
end

BaseDirectory = regexprep(BaseDirectory, [regexptranslate('escape', filesep) '+$'], '');
out = unique(dir_recursive_helper(BaseDirectory, filesep));

end

function out = dir_recursive_helper(BaseDirectory, separator)

out = dir(BaseDirectory);
out = struct2cell(out(:));
out = out(1, :);
out = setdiff(out(:), {'.'; '..'});

%Faster than out = cellfun(@(X) [BaseDirectory, separator, X], out(:), 'UniformOutput', false);
for ctr = 1:numel(out)
    out{ctr} = [BaseDirectory, separator, out{ctr}];
end

for ctr = 1:length(out)
    if exist(out{ctr}, 'dir')
        out = [out(:); feval(ptc_matlab_lib.thisfuncname, out{ctr}, separator)];
    end
end

end