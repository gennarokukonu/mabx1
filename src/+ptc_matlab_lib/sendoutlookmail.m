function varargout = sendoutlookmail(varargin)
%sendoutlookmail: Send email using the local installation of MS Outlook

import('ptc_matlab_lib.*');

if ~ispc
    error([mfilename ':' thisfuncname ':OSNotSupported'], ['ERROR: The architecture ' computer('arch') ' is not supported']);
end

pairs = {'To', '', ...
    'CC', '', ...
    'BCC', '', ...
    'Subject', '', ...
    'Body', '', ...
    'Attachments', {}, ...
    'Importance', 'normal', ...
    'ShouldPromptUser', true};
ARGS = parseargs(varargin, pairs);

ARGS.Attachments = cellstr(ARGS.Attachments);

switch lower(ARGS.Importance)
    case 'normal'
        ARGS.Importance = 'olImportanceNormal';
    case 'high'
        ARGS.Importance = 'olImportanceHigh';
    case 'low'
        ARGS.Importance = 'olImportanceLow';
    otherwise
        error([mfilename ':' thisfuncname ':InvalidImportance']);
end

%Check to ensure that Outlook is registered to handle mailto links.
result = winqueryreg('HKEY_CLASSES_ROOT', 'mailto\shell\open\command');
result = regexp(result, '\s*"(?<filepath>[^"]*)"', 'once', 'names');
[~, filename, fileext] = fileparts(result.filepath);
if ~pathcmp([filename fileext], 'OUTLOOK.EXE')
    error([mfilename ':' thisfuncname ':OutlookNotDefaultEmailClient']);
end 

try
    %Outlook must be registered as the default email client
    web('mailto:');
    pause(0.5);
    h = actxserver('outlook.Application');
catch ME
    waitfor(msgbox_editable('MessageString', showerror(ME), ...
        'WindowStyle', 'modal', ...
        'Color', 'red'));
    return;
end

try
    h.ActiveWindow.CurrentItem.To = ARGS.To;
    h.ActiveWindow.CurrentItem.CC = ARGS.CC;
    h.ActiveWindow.CurrentItem.BCC = ARGS.BCC;
    h.ActiveWindow.CurrentItem.Subject = ARGS.Subject;
    h.ActiveWindow.CurrentItem.BodyFormat = 'olFormatHTML';
    h.ActiveWindow.CurrentItem.HTMLBody = ARGS.Body;
    h.ActiveWindow.CurrentItem.Importance = ARGS.Importance;
    
    for ctr = 1:numel(ARGS.Attachments)
        h.ActiveWindow.CurrentItem.Attachments.Add(ARGS.Attachments{ctr});
    end
    
    if ARGS.ShouldPromptUser
        h.ActiveWindow.CurrentItem.Display;
    else
        h.ActiveWindow.CurrentItem.Send;
    end
    h.release;
catch ME
    h.release;
    rethrow(ME);
end

end