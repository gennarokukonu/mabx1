function edit_custom(varargin)

import('ptc_matlab_lib.*');
pairs = {'Editor', '', ...
   'FilePath', ''};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.FilePath, 'file')
   [filename, pathname] = uigetfile({'*', 'All files (*)'}, 'Select file', pwd);
   if isequal(filename, 0) || isequal(pathname, 0)
      %Cancel was pressed
      return;
   end
   ARGS.FilePath = fullfile(pathname, filename);
end

if strcmp(ARGS.Editor, 'matlab')
   if ~isdeployed
      edit(ARGS.FilePath);
   else
      ARGS.Editor = preferred_text_editor;
      system(['start "' ARGS.Editor '" "' ARGS.FilePath '"']);
   end
else
   ARGS.Editor = preferred_text_editor;
   [EditorFileDir, EditorFileName, EditorFileExt] = fileparts(ARGS.Editor);
   try
      cmdString = ['cd "' EditorFileDir '"&start ' EditorFileName EditorFileExt ' "' ARGS.FilePath '"'];
      status = system([cmdString '&exit&']);
      if status
         system(['notepad "' ARGS.FilePath '"&exit&']);
      end
   catch
      system(['notepad "' ARGS.FilePath '"&exit&']);
   end
end

end