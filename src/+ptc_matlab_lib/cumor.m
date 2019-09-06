function out = cumor(varargin)

out = logical(cumsum(varargin{:}));

end