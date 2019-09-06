function varargout = evalsafe(varargin)
% EVALSAFE Execute string with MATLAB expression, in a controlled
% environment. Particularly useful if the expression is coming from an
% input to a GUI interface.
%     EVALSAFE(s), where s is a string, causes MATLAB to execute
%     the string as an expression or statement in an empty workspace
%
%     [X,Y,Z,...] = EVALSAFE(s) returns output arguments from the
%     expression in string s, after executing s in an empty workspace
%
%     The input strings to EVALSAFE are often created by
%     concatenating substrings and variables inside square
%     brackets. For example:
%
%     Generate a sequence of matrices named M1 through M12:
%
%         for n = 1:12
%            evalSAFE(['M' num2str(n) ' = magic(n)'])
%         end
%
%     Run a selected M-file script.
%
%         D = {'odedemo'; 'sunspots'; 'fitdemo'};
%         n = input('Select a demo number: ');
%         evalSAFE(D{n})
%
%     EVALSAFE(s, {'Local1', Local1, 'Local2', Local2}) Specify
%     accessible local variables for the environment of evalsafe
%
%     EVALSAFE(s, {'Local1', Local1, 'Local2', Local2},
%     {'RefLocal1', RefLocal1, 'RefLocal2', RefLocal2}) Specify local and
%     reference local variables. Reference local variables can be modified
%     in the caller workspace.
%
%     EVALSAFE(s, {}, {}, {'Global1', Global1, 'Global2', Global2}) Specify
%     global variables, but no local variables or reference local variables
%
%   See also: eval, evalc, feval, evalin, assignin
%
%   NOTE: If workspace analysis of this function is needed for any reason,
%   the only internal variable is zzz_internal_Z5i5NgrI88. This variable
%   must be ignored from workspace analysis.

import('ptc_matlab_lib.*');

if verLessThan('matlab', '7.13')
    error(nargchk(1, 4, nargin, 'struct'));
else
    narginchk(1, 4);
end

varargin = pad_to_length('FinalLength', 4, ...
   'PadValue', {{}}, ...
   'InputVector', varargin, ...
   'PadDirection', 'right');

zzz_internal_Z5i5NgrI88.nargout          = nargout;     %variable nargout
zzz_internal_Z5i5NgrI88.expression       = varargin{1}; %Expression
zzz_internal_Z5i5NgrI88.locals           = varargin{2}(:); %Locals
zzz_internal_Z5i5NgrI88.reference_locals = varargin{3}(:); %Reference Locals
zzz_internal_Z5i5NgrI88.globals          = varargin{4}(:); %Globals
zzz_internal_Z5i5NgrI88.parseargs        = @ptc_matlab_lib.parseargs;  %function parseargs
zzz_internal_Z5i5NgrI88.isempty          = @isempty;    %function isempty
zzz_internal_Z5i5NgrI88.eval             = @eval;       %function eval
zzz_internal_Z5i5NgrI88.cell             = @cell;       %function cell
zzz_internal_Z5i5NgrI88.length           = @length;     %function length
zzz_internal_Z5i5NgrI88.assignin         = @assignin;   %function assignin
zzz_internal_Z5i5NgrI88.evalin           = @evalin;     %function evalin
zzz_internal_Z5i5NgrI88.exist            = @exist;      %function exist
zzz_internal_Z5i5NgrI88.ismember         = @ismember;   %function ismember
zzz_internal_Z5i5NgrI88.ctr              = [];
clear('varargin');

%Create an environment for the expression to be evaluated. Globals first,
%followed by reference locals, in turn followed by locals.
%Create global environment
if ~zzz_internal_Z5i5NgrI88.isempty(zzz_internal_Z5i5NgrI88.globals)
   zzz_internal_Z5i5NgrI88.ctr = 1;
   while zzz_internal_Z5i5NgrI88.ctr <= zzz_internal_Z5i5NgrI88.length(zzz_internal_Z5i5NgrI88.globals)
      if ~zzz_internal_Z5i5NgrI88.ismember(zzz_internal_Z5i5NgrI88.globals{zzz_internal_Z5i5NgrI88.ctr}, zzz_internal_Z5i5NgrI88.reference_locals(1:2:end)) && ...
            ~zzz_internal_Z5i5NgrI88.ismember(zzz_internal_Z5i5NgrI88.globals{zzz_internal_Z5i5NgrI88.ctr}, zzz_internal_Z5i5NgrI88.locals(1:2:end))
         zzz_internal_Z5i5NgrI88.eval(['global ' zzz_internal_Z5i5NgrI88.globals{zzz_internal_Z5i5NgrI88.ctr} ';']);
      end
      zzz_internal_Z5i5NgrI88.ctr = zzz_internal_Z5i5NgrI88.ctr + 2;
   end
   zzz_internal_Z5i5NgrI88.parseargs(zzz_internal_Z5i5NgrI88.globals);
end

%Populate reference locals
if ~zzz_internal_Z5i5NgrI88.isempty(zzz_internal_Z5i5NgrI88.reference_locals)
   zzz_internal_Z5i5NgrI88.parseargs(zzz_internal_Z5i5NgrI88.reference_locals);
end

%Populate local workspace
if ~zzz_internal_Z5i5NgrI88.isempty(zzz_internal_Z5i5NgrI88.locals)
   zzz_internal_Z5i5NgrI88.parseargs(zzz_internal_Z5i5NgrI88.locals);
end

if zzz_internal_Z5i5NgrI88.nargout == 0
   zzz_internal_Z5i5NgrI88.eval(zzz_internal_Z5i5NgrI88.expression);
else
   varargout = zzz_internal_Z5i5NgrI88.cell(1, zzz_internal_Z5i5NgrI88.nargout);
   [varargout{:}] = zzz_internal_Z5i5NgrI88.eval(zzz_internal_Z5i5NgrI88.expression);
end

%Assign reference locals in caller workspace
if ~zzz_internal_Z5i5NgrI88.isempty(zzz_internal_Z5i5NgrI88.reference_locals)
   zzz_internal_Z5i5NgrI88.ctr = 1;
   while zzz_internal_Z5i5NgrI88.ctr <= zzz_internal_Z5i5NgrI88.length(zzz_internal_Z5i5NgrI88.reference_locals)
      if ~zzz_internal_Z5i5NgrI88.ismember(zzz_internal_Z5i5NgrI88.reference_locals{zzz_internal_Z5i5NgrI88.ctr}, zzz_internal_Z5i5NgrI88.locals(1:2:end))
         if zzz_internal_Z5i5NgrI88.exist(zzz_internal_Z5i5NgrI88.reference_locals{zzz_internal_Z5i5NgrI88.ctr}, 'var')
            zzz_internal_Z5i5NgrI88.assignin('caller', ...
               zzz_internal_Z5i5NgrI88.reference_locals{zzz_internal_Z5i5NgrI88.ctr}, ...
               zzz_internal_Z5i5NgrI88.eval(zzz_internal_Z5i5NgrI88.reference_locals{zzz_internal_Z5i5NgrI88.ctr}));
         else
            zzz_internal_Z5i5NgrI88.evalin('caller', ['clear(''' zzz_internal_Z5i5NgrI88.reference_locals{ctr} ''');']);
         end
      end
      zzz_internal_Z5i5NgrI88.ctr = zzz_internal_Z5i5NgrI88.ctr + 2;
   end
end

end