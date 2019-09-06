function ptc_average_init()
% ptc_Avg_init 
%
%     Inputs: NA
%
% Author: Nicholaus Wright
% Date: 7/31/2014
% Updates: Jordan Mohser(7/31/14): Code clean up 

% Get handles
pAvg = gcb;
hAvg = gcbh;
hSel = find_system(hAvg,'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'Bus_Selector');
hAdd = find_system(hAvg,'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'Add_Block');
hCon = find_system(hAvg,'LookUnderMasks', 'all','FollowLinks', 'on', 'Name', 'Constant');

% Get number of inputs from Bus_Creator
nData = get(hSel, 'InputSignals');
if (isempty(nData)==1) || (isempty(nData))
   warning('No inputs to Bus Selector.');
   return
end
nInputs = length(nData);
set_param(hCon, 'Value', num2str(nInputs));

% Generate Output String for Bus Selector
BusSelOutPorts = '';
for i = 1:nInputs
    if i == 1
       BusSelOutPorts = strcat('signal',num2str(i),',');
    elseif (i > 1) && (i < nInputs)
        BusSelOutPorts = strcat(BusSelOutPorts,'signal',num2str(i),',');
    else 
        BusSelOutPorts = strcat(BusSelOutPorts,'signal',num2str(i));
    end
end

% Generate input string for Add block
AddInPorts = '';
for i = 1:nInputs
    if (i == 1)
       AddInPorts = '+';
    else
        AddInPorts = strcat(AddInPorts,'+');
    end
end

% Delete Old Lines		
PortHandles = get_param([pAvg '/Bus_Selector'], 'PortHandles');
LineHandles = get(PortHandles.Outport, 'Line');
if iscell(LineHandles)
    LineHandles = cell2mat(LineHandles);
end
delete_line(LineHandles(ishandle(LineHandles(:))));

% set outputs of Bus_Selector
set_param(hSel,'OutputSignals', BusSelOutPorts);

% set inputs of Add_Block
set_param(hAdd, 'Inputs', AddInPorts);

% Add new lines in variable areas
for i = 1:nInputs
     add_line(hAvg,strcat('Bus_Selector/',num2str(i)),strcat('Add_Block/',num2str(i)))
end 

end


























