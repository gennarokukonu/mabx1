function BusOverride_Init(varargin)
% ptc_BusOverride_init: Initialization code for the "BusOverride" Simulink block. 
%     The goal of this block is to create overrides and probes for each signal on
%     a bus.  
%
%     Inputs:
%     NumLay = Number of layers in the Bus
%     Spare = Example
%
% Author: Jordan Mosher
% Date: 4/16/2014
% Updates: 
% 4/17/2014: Need to add the code below to the startup file.
%			 load_system('PTC_Lib_2014');

	pairs = {'NumLay', 1, ...
			 'Test2', ''};
	ARG = ptc_matlab_lib.parseargs(varargin, pairs);

	% Locate blocks within BusOverride
	pBusO = gcb; 
	hBusO = gcbh;

	% Determine the Number of Layers
	NumLay = str2double(ARG.NumLay);
	
	% Get the Input Signals
	InSig = get_param([pBusO '/BusSelector'], 'InputSignals');
	if (1 < NumLay)&&(NumLay < 10) 
		[d1,d2] = size(InSig);
		NewSig = InSig{1}{1};
		for ctr = 2:d1
			NewSig = [NewSig ',' InSig{ctr}{1}];
		end
	else
		[d1,d2] = size(InSig);
		NewSig = ptc_matlab_lib.strimplode(InSig, ',');
	end
		
	OldSig = get_param([pBusO '/BusSelector'], 'OutputSignals');
	%if ~isequal(OldSig,NewSig)
		% Determine Which Block to Add/Delete 
		if isequal(NumLay, 1)  
			BlockToAdd = 'PTC_Lib_2014/Signal Manipulation/Purp';
			Spacing = 50;
			BlockSize = 10;
		elseif (1 < NumLay)&&(NumLay < 10)
			BlockToAdd = 'PTC_Lib_2014/Bus Manipulation/BusOverride';
			Spacing = 150;
			BlockSize = 50;
		else
			BlockToAdd = 'PTC_Lib_2014/Signal Manipulation/Purp';
			Spacing = 51;
			BlockSize = 10;
		end
		
		% Remove the Library Link
		set_param(pBusO, 'LinkStatus', 'none');
	
		% Delete Old Lines		
		PortHandles = get_param([pBusO '/BusSelector'], 'PortHandles');
		LineHandles = get(PortHandles.Outport, 'Line');
		if iscell(LineHandles)
			LineHandles = cell2mat(LineHandles);
		end
		delete_line(LineHandles(ishandle(LineHandles(:))));
		
		PortHandles = get_param([pBusO '/BusCreator'], 'PortHandles');
		LineHandles = get(PortHandles.Inport, 'Line');
		if iscell(LineHandles)
			LineHandles = cell2mat(LineHandles);
		end
		delete_line(LineHandles(ishandle(LineHandles(:))));

		% Delete Old Blocks
		OldPurpBlocks = unique(find_system(gcb, 'FindAll', 'on', 'SearchDepth', 1, 'LookUnderMasks', 'all', 'PTC_BlockType', 'Purp'));
		OldBusBlocks = unique(find_system(gcb, 'FindAll', 'on', 'SearchDepth', 1, 'LookUnderMasks', 'all', 'PTC_BlockType', 'BusOverride'));
		OldBusBlocks = OldBusBlocks(2:end); %Remove the first Bus Block because it is the parent
		OldBlocks = vertcat(OldPurpBlocks, OldBusBlocks);
		for ctr = 1:numel(OldBlocks)
			BlockName = get(OldBlocks(ctr), 'Name');
			BlockPath = get(OldBlocks(ctr), 'Path');
			delete_block([BlockPath '/' BlockName]);        
		end

		% Update and Scale the BusSellector
		set_param([pBusO '/BusSelector'], 'OutputSignals', NewSig);
		set_param([pBusO '/BusSelector'], 'Position', [100 100 105 (100 + (d1 * Spacing))]);

		% Update and Scale the BusCreator
		set_param([pBusO '/BusCreator'], 'Inputs', num2str(d1));
		set_param([pBusO '/BusCreator'], 'Position', [600 100 605 (100 + (d1 * Spacing))]);

		% Add Blocks, Space them correctly and Connect them to the BusSellector and BusCreator
		for ctr = 1:d1
			add_block(BlockToAdd, [pBusO '/tempname' num2str(ctr)]);
			set_param([pBusO '/tempname' num2str(ctr)], 'Position', [350 (70 + (ctr * Spacing)) (350 + BlockSize) ((70 + BlockSize) + (ctr * Spacing))]);
			if (1 < NumLay)&&(NumLay < 10)
				set_param([pBusO '/tempname' num2str(ctr)], 'NumLay', num2str(NumLay - 1));
			end
			add_line(pBusO, ['tempname' num2str(ctr) '/1'], ['BusCreator/' num2str(ctr)]);
			add_line(pBusO, ['BusSelector/' num2str(ctr)], ['tempname' num2str(ctr) '/1']);
		end
		
		%Change Output Wire Name to the Input Wire Name
		inPortHande = get(hBusO, 'PortHandles');
		inWireName = get(inPortHande.Inport, 'Name');
		inWireName = strrep(inWireName,'<','');
		inWireName = strrep(inWireName,'>','');
		OutPortHandel = get_param(hBusO,'LineHandles');
		set_param(OutPortHandel.Outport,'Name',inWireName);
		set_param(hBusO, 'Name', inWireName);
		
		
	%else
		%NoChange = 1
	%end

end