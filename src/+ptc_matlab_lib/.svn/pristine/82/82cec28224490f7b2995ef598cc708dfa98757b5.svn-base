function out = listAssemblies
% View assemblies currently visible to MATLAB

domain = System.AppDomain.CurrentDomain;
assemblies = domain.GetAssemblies;
out = cell(assemblies.Length, 1);
for ctr = 1:numel(out)
    asm = assemblies.Get(ctr - 1);
    out{ctr, 1} = char(asm.FullName);
end

end
