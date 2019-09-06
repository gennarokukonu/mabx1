function varargout = showerror(varargin)
%SHOWERROR: Displays error details
%   SHOWERROR When called by itself, it displays the details of the last
%   error occurred.
%
%   SHOWERROR(ME): ME is a MATLAB Exception Object. It displays the details
%   of exception object ME.
%
%   See also: lasterror, lasterr, lastwarn, error, warning.

import('ptc_matlab_lib.*');

if nargin==0
    ME = lasterror; %#ok<*LERR>
elseif nargin==1
    ME = varargin{1};
    varargin = {};
elseif nargin >= 2
    ME = varargin{1};
    varargin = varargin(2:end);
end

pairs = {'ShouldDisplay', true};
ARGS = parseargs(varargin, pairs);

strout = cell(2+numel(ME.stack), 1);
strout{1} = sprintf(' * Identifier: %s', ME.identifier);
strout{2} = sprintf(' * Message: %s', ME.message);
for ctr = 1:numel(ME.stack)
    strout{ctr+2} = sprintf(' * Line %i, File %s, Function %s', ME.stack(ctr).line, ME.stack(ctr).file, ME.stack(ctr).name);
end

if ARGS.ShouldDisplay
    format_string = formatstr(strout, 'FormatBackslashes', true);
    format_string = ['\n' strimplode(format_string, '\n') '\n'];
    fprintf(2, format_string);
end

varargout{1} = strout;

end
