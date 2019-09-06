function out = cumand(varargin)

out = logical(cumprod(varargin{:}));

end