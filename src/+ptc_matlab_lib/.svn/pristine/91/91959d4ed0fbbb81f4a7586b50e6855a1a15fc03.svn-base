function out = preferred_text_editor

preferred_text_editor_list = {fullfile(getenv('PROGRAMFILES'), 'Notepad++', 'notepad++.exe');
    fullfile(getenv('PROGRAMFILES(X86)'), 'Notepad++', 'notepad++.exe');
    fullfile(getenv('WINDIR'), 'SysWOW64', 'notepad.exe');
    fullfile(getenv('WINDIR'), 'notepad.exe');
    fullfile(getenv('WINDIR'), 'System32', 'notepad.exe')};

if ispc
   [status, result] = system('where notepad.exe');
   if ~status
      result = strtrim(result);
      result = ptc_matlab_lib.strexplode(result, sprintf('\n'));
      result(cellfun(@isempty, result)) = [];
      preferred_text_editor_list = [preferred_text_editor_list;
         result(:)];
   end
end

for ctr = 1:numel(preferred_text_editor_list)
   if exist(preferred_text_editor_list{ctr}, 'file')
      out = preferred_text_editor_list{ctr};
      break;
   end
end

end