function ptc_purp_init(varargin)
% ptc_purp_init.m: Initialization code for the "purple" Simulink block. The goal of
%     this block is to combine a probe and override MotoHawk blocks while reducing
%     the amount of set-up required.  
%
%     pName = User Input Name
%     sName = SignalName
%     gName = MotoHawk Group Name
%     fName = Full Name = RCP_"gName"_"sName" (When Extended is checked)
%     pLine = Passive Line Naming 
%     dName = Display Name
%
% Author: Jordan Mosher
% Date: 3/27/2014
% Updates: 12/12/14: Storage unit is now sellectable
%                    Name must be entered as a string, to allow for evaluation                    

pairs = {'inName', '', ...
		 'aMG', '', ...
		 'eName', '', ...
		 'pName', '', ...
         'pLine', '', ...
		 'dTypeOut', '', ...
         'dTypeStore', '', ...
		 'MG', ''};
		 
ARG = ptc_matlab_lib.parseargs(varargin, pairs);

% Locate blocks within Purp
pPurp = gcb; 
hPurp = gcbh;
eCal = find_system(hPurp,'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'MotoCal_Manual');
vCal = find_system(hPurp,'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'MotoCal_OvrdVal');
storeDC = find_system(hPurp, 'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'StorageDataConversion');
outDC = find_system(hPurp, 'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'OutDataConversion');
ifBlk = find_system(hPurp, 'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'if_then_else');
motoPrb = find_system(hPurp,'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'MotoProbe');
workPrb = find_system(hPurp,'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'ToWorkspace');

%Find the name of the input wire
purpHandels = get(hPurp, 'PortHandles');
inWireName = get(purpHandels.Inport, 'Name');
inWireName = strrep(inWireName,'<','');
inWireName = strrep(inWireName,'>','');

% Determine the Signal Name
if strcmp(ARG.inName,'on')
	sName = inWireName;
	set_param(hPurp,'pName', ['''' sName '''']);
else
	sName = strrep(ARG.pName,'''',''); %Remove ';
end;



% Select MotoHawk Group
if strcmp(ARG.aMG, 'on')
	pathParts = strsect(pPurp);
	gName = pathParts{end - 1}; 
else
	gName = strrep(ARG.MG,'''',''); %Remove '
end;


% Extended Name
if strcmp(ARG.eName, 'on')
	fName = ['RCP_' gName '_' sName];
else
	fName = sName;
end;
fName = strrep(fName,' ','');


% Set Purp block name
%set_param(hPurp, 'Name', sName); Changing the name of the block sometimes results in errors
set_param(hPurp,'dName', fName);
set_param(pPurp,'MG', gName);

% Configure the MotoHawk blocks
set_param(eCal, 'nam', ['''' fName '_Manual'''], 'mototune_group', ['''' gName '''']);
set_param(vCal, 'nam', ['''' fName '_OvrdVal'''], 'val', '0', 'data_type', ARG.dTypeOut, 'mototune_group', ['''' gName '''']);
set_param(vCal, 'view_as', 'Number', 'enum_struct', '''{}''');

% Configure conversion blocks
set_param(outDC, 'OutDataTypeStr', ARG.dTypeOut);
set_param(storeDC, 'OutDataTypeStr', ARG.dTypeStore);

%Change output wire name
purpOutPort = get_param(hPurp,'LineHandles');
if strcmp(ARG.pLine,'on')
	set_param(purpOutPort.Outport,'Name',inWireName);
else
	set_param(purpOutPort.Outport,'Name',sName);
end;

% Configure probe
set_param(motoPrb, 'MaskSelfModifiable', 'on', 'nam', ['''' fName ''''], 'mototune_group', ['''' gName '''']); 
set_param(workPrb, 'VariableName', fName);

end