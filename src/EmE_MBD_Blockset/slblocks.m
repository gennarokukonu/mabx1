function blkStruct = slblocks

ChoiceList = containers.Map({'RESAVE_AS_SLX'; 'GENERATE_IN_MEMORY'; 'SKIP'}, [0; 1; 2]);
%SLBLOCKS Defines the block library for a specific Toolbox or Blockset.
%
% Name of the subsystem which will show up in the Simulink Blocksets
% and Toolboxes subsystem.
blkStruct.Name = ['PACCAR EmE MBD Blockset'];

% The function that will be called when
% the user double-clicks on this icon.
blkStruct.OpenFcn = 'EmE_MBD_Blockset';
blkStruct.MaskInitialization = '';

% blkStruct.MaskDisplay = 'image(imread(''vrblockicon.png''))';

% Define the library list for the Simulink Library browser.
% Return the name of the library model and its title
Browser.Library = 'EmE_MBD_Blockset';
Browser.Name = 'PACCAR EmE MBD Blockset';
Browser.IsFlat  = 0;% Is this library "flat" (i.e. no subsystems)?
Browser.Choice = ChoiceList('GENERATE_IN_MEMORY');
blkStruct.Browser = Browser;

% The argument to be set as the Mask Display for the subsystem.  You
% may comment this line out if no specific mask is desired.
% No display for now.
% blkStruct.MaskDisplay = 'disp(''Version 0.5'');';

% End of slblocks
%--------------------------------------------