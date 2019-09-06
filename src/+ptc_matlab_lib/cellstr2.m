function out = cellstr2(S)
%CELLSTR2: cellstr but without trailing whitespace removal, and much
%faster.

if iscellstr(S)
   out = S;
   return;
end

if ~ischar(S)
   error([mfilename ':' mfilename ':ArgumentNotCharArray'], 'Input must be a string.');
end

if ~ismatrix(S)
   error([mfilename ':' mfilename ':InvalidDimensions'], 'Only 2D matrices are supported.');
end

if isempty(S)
   out = {''};
   return;
end

out = cell(size(S, 1), 1);

for ctr = 1:numel(out)
   out{ctr, 1} = S(ctr, :);
end

end