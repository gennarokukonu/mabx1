function out = is32
%IS32 Returns true if the system is a 32bit system
%
%   See also: is64, computer

out = ismember(computer('arch'), {'win32', 'glnx86', 'maci', 'win64', 'glnxa64', 'maci64'});

end