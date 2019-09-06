function blkStruct = slblocks

ChoiceList = containers.Map({'RESAVE_AS_SLX'; 'GENERATE_IN_MEMORY'; 'SKIP'}, [0; 1; 2]);

% Provide MBDS specific libraries
Browser.Library = 'Project_Library';
Browser.Name = 'PACCAR Project Library';
Browser.Choice = ChoiceList('GENERATE_IN_MEMORY');
blkStruct.Browser = Browser;
