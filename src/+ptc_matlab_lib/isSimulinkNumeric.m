function out = isSimulinkNumeric(in)

out = false;
try %#ok<TRYNC>
   if isa(ptc_matlab_lib.evalsafe(in), 'Simulink.NumericType')
      out = true;
   end
end

try %#ok<TRYNC>
   if isa(ptc_matlab_lib.evalsafe(['fixdt(''' in ''')']), 'Simulink.NumericType')
      out = true;
   end
end

end