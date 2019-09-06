function CreateHW_Interface(ListOfVariants, ThisVariant)
%% CreateHW_Interface
%Add the truck specific HW interface to the model before the build
%This is required since certain HW configurations can not be set via parameters, CAN bus baud rate for example
%The truck specfic interface sub-system is expected to have a common output
%across all varaints for compatiblity at the application level

% Source Library for HW interface
try
    open_system(['SUB_ECU_L4_MABX_HW_Interface_',ThisVariant]);
catch
    disp(' an error occured when opening SUB_ECU_L4_MABX_HW_Interface, will try and continue, this is a know issue whic seems to have no effect')
end
%Destination model for build
open_system('L4_MABX');
srcInputBlockStr=['SUB_ECU_L4_MABX_HW_Interface_',ThisVariant,'/INPUTS_',ThisVariant];
srcOutputBlockStr=['SUB_ECU_L4_MABX_HW_Interface_',ThisVariant,'/OUTPUTS_',ThisVariant];
modelName='L4_MABX';
dstInputBlockStr=[modelName,'/INPUTS_',ThisVariant];
dstOutputBlockStr=[modelName,'/OUTPUTS_',ThisVariant];
%result=removeExistingSubSystem(modelName,'INPUTS',ThisVariant);
%Remove any existing INPUT system from destination model
result=cellfun(@removeExistingSubSystem,ListOfVariants);

%Add specfied INPUT block variant
add_block(srcInputBlockStr,dstInputBlockStr,'Position',[85,-83,200,113]);
add_block(srcOutputBlockStr,dstOutputBlockStr,'Position',[630,-35,745,165]);
%Get handles to ports and any existing lines
%Port Handles
h_inputs=get_param(dstInputBlockStr,'PortHandles');
h_outputs=get_param(dstOutputBlockStr,'PortHandles');
h_controller=get_param('L4_MABX/Controller','PortHandles');
h_ethernet=get_param('L4_MABX/ETHERNET','PortHandles');
h_feedThrough=get_param('L4_MABX/FeedThrough','PortHandles');
h_busCreator=get_param('L4_MABX/Bus Creator','PortHandles');
%Line Handles
h_controllerLines=get_param('L4_MABX/Controller','LineHandles');
h_ethernetLines=get_param('L4_MABX/ETHERNET','LineHandles');
h_feedThroughLines=get_param('L4_MABX/FeedThrough','LineHandles');
h_busCreatorLines=get_param('L4_MABX/Bus Creator','LineHandles');


%Remove any existing lines before making new connections
if h_controllerLines.Inport(1)>1
    delete_line(h_controllerLines.Inport(1));
end
if h_ethernetLines.Outport(1)>1
    delete_line(h_ethernetLines.Outport(1));
end
if h_busCreatorLines.Inport(1)>1
    delete_line(h_busCreatorLines.Inport(1));
end
if h_feedThroughLines.Inport(1)>1
    delete_line(h_feedThroughLines.Inport(1));
end
if h_controllerLines.Outport(1)>1
    delete_line(h_controllerLines.Outport(1));
end
if h_busCreatorLines.Outport(1)>1
    delete_line(h_busCreatorLines.Outport(1));
end

%Connect new block
add_line('L4_MABX',h_inputs.Outport(1),h_controller.Inport(1),'autorouting','smart');
add_line('L4_MABX',h_inputs.Outport(1),h_busCreator.Inport(1),'autorouting','smart');
add_line('L4_MABX',h_inputs.Outport(1),h_feedThrough.Inport(1),'autorouting','smart');
add_line('L4_MABX',h_controller.Outport(1),h_outputs.Inport(1),'autorouting','smart');
add_line('L4_MABX',h_busCreator.Outport(1),h_outputs.Inport(2),'autorouting','smart');
add_line('L4_MABX',h_controller.Outport(1),h_ethernet.Inport(1),'autorouting','smart');
add_line('L4_MABX',h_ethernet.Outport(1),h_inputs.Inport(1),'autorouting','smart');


close_system(['SUB_ECU_L4_MABX_HW_Interface_',ThisVariant]);


