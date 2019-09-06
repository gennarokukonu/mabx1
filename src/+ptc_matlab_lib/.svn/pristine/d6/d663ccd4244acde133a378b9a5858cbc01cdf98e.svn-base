function varargout = get_system_sample_time(varargin)

import('ptc_matlab_lib.*');

pairs = {'System', gcs, ...
   'ShouldRound', true, ...
   'DecimalPlaces', 3};
ARGS = parseargs(varargin, pairs);

if ~strcmp(get_param(bdroot(ARGS.System), 'LibraryType'), 'None')
   %Return placeholder value; it really doesn't mean anything here
   varargout{1} = 0.001;
   return;
elseif ~strcmp(get_param(bdroot(ARGS.System), 'SolverType'), 'Fixed-step')
   error([mfilename ':' thisfuncname ':InvalidSolverType'], 'Invalid solver type. The solver type needs to be Fixed-step');
end

thisSystem = ARGS.System;
thisSampleTime = -1;
while thisSampleTime == -1 && ~strcmp(thisSystem, bdroot(ARGS.System))
   if has_param(thisSystem, 'SystemSampleTime')
      try
         thisSampleTime = Simulink.data.evalinGlobal(get_param(thisSystem, 'SystemSampleTime'));
      catch
         thisSampleTime = evalin('base', get_param(thisSystem, 'SystemSampleTime'));
      end
   else
      thisSystem = get_param(thisSystem, 'Parent');
      continue;
   end
   
   if thisSampleTime == -1
      thisSystem = get_param(thisSystem, 'Parent');
   end
end

if thisSampleTime == -1
   try
      thisSampleTime = Simulink.data.evalinGlobal(get_param(bdroot(ARGS.System), 'FixedStep'));
   catch
      thisSampleTime = evalin('base', get_param(bdroot(ARGS.System), 'FixedStep'));
   end
end
if isa(thisSampleTime, 'Simulink.Parameter')
   thisSampleTime = thisSampleTime.Value;
end
if ARGS.ShouldRound
   if verLessThan('matlab', '8.4')
      varargout{1} = round(double(thisSampleTime) * 10^ARGS.DecimalPlaces)/(10^ARGS.DecimalPlaces);
   else
      varargout{1} = round(double(thisSampleTime), ARGS.DecimalPlaces);
   end
else
   varargout{1} = double(thisSampleTime);
end

end