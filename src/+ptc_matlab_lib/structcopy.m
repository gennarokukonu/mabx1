function structA = structcopy(structA, structB)
%Copies the fields of structB into structA

if isempty(structB)
   return;
end

fields = fieldnames(structB);
handle_indices = structfun(@(X) isa(X, 'handle'), structB);
for ctr = ptc_matlab_lib.rowvec(find(handle_indices)) %#ok<FNDSB>
   try
      structA.(fields{ctr}) = structB.(fields{ctr}).copy;
   catch
      structA.(fields{ctr}) = structB.(fields{ctr});
   end
end
for ctr = ptc_matlab_lib.rowvec(find(~handle_indices)) %#ok<FNDSB>
   structA.(fields{ctr}) = structB.(fields{ctr});
end

end