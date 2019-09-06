function varargout = HighlightLine_wrapper(varargin)
%HIGHLIGHTLINE_WRAPPER: Obtained from
%http://www.mathworks.com/support/solutions/en/data/1-3VXJE9/?solution=1-3VXJE9
%
%   SYNTAX:
%   h = get_param(gcbh, 'porthandles');
%   op = h.Outport;
%   ln = get(op,'line')
%   HighlightLine_wrapper(ln,'source')
%   HighlightLine_wrapper(ln,'destination')
%   HighlightLine_wrapper(ln,'remove')

import('ptc_matlab_lib.*');

if nargout == 0
    HighlightLine(varargin{:});
else
    varargout = cell(1, nargout);
    [varargout{:}] = HighlightLine(varargin{:});
end

end