function varargout = synchronize_custom(tslist_cell, varargin)
%SYNCHRONIZE_CUSTOM Synchronize multiple timeseries objects
%   SYNTAX:
%   [ts1, ts2, ts3] = synchronize_custom({ts1, ts2, ts3}, ...)
%
%   Takes the same arguments as MATLAB's synchronize function, except for
%   the timeseries objects
%
%   Example:
%   ts1 = timeseries(sin(0:0.5:10), 0:0.5:10);
%   ts2 = timeseries(sin(0:0.3:10), 0:0.3:10);
%   ts3 = timeseries(sin(2:0.1:8), 2:0.1:8);
%   [ts1, ts2, ts3] = synchronize_custom({ts1, ts2, ts3}, 'Union');
%
%   See also: timeseries/synchronize

tslist_cell = tslist_cell(:);

if isa(tslist_cell, 'timeseries')
    tslist_cell = {tslist_cell};
end

if length(tslist_cell) == 1
    tslist_cell = {tslist_cell{1}; tslist_cell{1}};
end

x = cellfun(@(X) X.Time(:), tslist_cell, 'UniformOutput', false);
while ~isequal(x{:})
    for syncctr = 2:length(tslist_cell)
        [tslist_cell{1}, tslist_cell{syncctr}] = synchronize(tslist_cell{1}, tslist_cell{syncctr}, varargin{:});
    end
    x = cellfun(@(X) X.Time(:), tslist_cell, 'UniformOutput', false);
end

varargout = tslist_cell;
varargout = varargout(1:nargout);

end