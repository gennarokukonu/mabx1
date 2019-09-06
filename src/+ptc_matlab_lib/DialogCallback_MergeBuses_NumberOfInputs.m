function DialogCallback_MergeBuses_NumberOfInputs

%Disabling this warning, because it really should not be coming up.
%Disabling the warning had no effect.
s = warning('off', 'Simulink:Commands:InvSimulinkObjectName');
set(gcbh, 'LinkStatus', 'none');
warning(s.state, 'Simulink:Commands:InvSimulinkObjectName');

InportList = find_system(gcb, 'LookUnderMasks', 'all', 'FindAll', 'on', 'BlockType', 'Inport');
try
    DesiredNumberOfInputs = ptc_matlab_lib.evalsafe(get_param(gcb, 'NumberOfInputs'));
catch %#ok<CTCH>
    waitfor(errordlg('Could not evaluate parameter NumberOfInputs.', 'ERROR', 'modal'));
    return;
end
if ~isscalar(DesiredNumberOfInputs) || DesiredNumberOfInputs < 1
    waitfor(errordlg('NumberOfInputs needs to be a scalar with a value greater than or equal to 1.', 'ERROR', 'modal'));
    return;
end

%If desired number of inputs is the same as the actual number of inputs, do
%nothing
if DesiredNumberOfInputs == numel(InportList)
    return;
elseif DesiredNumberOfInputs > numel(InportList)
    %If the desired number of inputs is greater than the actual number of
    %inputs, add the required number of inports and bus selector blocks
    NumberOfInportsToAdd = DesiredNumberOfInputs - numel(InportList);
    NewInportNumber = numel(InportList) + 1;
    for ctr = 1:NumberOfInportsToAdd
        add_block('simulink/Sources/In1', [gcb '/InputBus' num2str(NewInportNumber)]);
        add_block(['simulink/Signal' sprintf('\n') 'Routing/Bus' sprintf('\n') 'Selector'], [gcb '/BusSelector' num2str(NewInportNumber)]);
        add_line(gcb, ['InputBus' num2str(NewInportNumber) '/1'], ['BusSelector' num2str(NewInportNumber) '/1']);
        NewInportNumber = NewInportNumber + 1;
    end
elseif DesiredNumberOfInputs < numel(InportList)
    %If the desired number of inputs is less than the actual number of
    %inputs, delete the required number of inports and bus selector blocks
    NumberOfInportsToDelete = numel(InportList) - DesiredNumberOfInputs;
    CurrentInportNumber = numel(InportList);
    for ctr = 1:NumberOfInportsToDelete
        PortHandles = get_param([gcb '/InputBus' num2str(CurrentInportNumber)], 'PortHandles');
        LineHandle = get(PortHandles.Outport, 'Line');
        delete_line(LineHandle(ishandle(LineHandle(:))));
        delete_block([gcb '/InputBus' num2str(CurrentInportNumber)]);
        PortHandles = get_param([gcb '/BusSelector' num2str(CurrentInportNumber)], 'PortHandles');
        LineHandle = get(PortHandles.Outport, 'Line');
        delete_line(LineHandle(ishandle(LineHandle(:))));
        delete_block([gcb '/BusSelector' num2str(CurrentInportNumber)]);
        CurrentInportNumber = CurrentInportNumber - 1;
    end
    
    %Step 4: Delete existing lines that are connected to the bus creator block
    thesePortHandles = get_param([gcb '/BusCreator'], 'PortHandles');
    theseLineHandles = get(thesePortHandles.Inport, 'Line');
    if iscell(theseLineHandles)
        theseLineHandles = cell2mat(theseLineHandles);
    end
    NewNumOfInputs = nnz(theseLineHandles ~= -1);
    set_param([gcb '/BusCreator'], 'Inputs', num2str(NewNumOfInputs));
    delete_line(theseLineHandles(ishandle(theseLineHandles)));
end

end