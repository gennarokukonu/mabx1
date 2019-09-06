function MaskInitFcn_MergeBuses
%This function is meant to be called only from the Mask Initialization
%section of the MergeBuses block.

ptc_matlab_lib.DialogCallback_MergeBuses_NumberOfInputs;

%Step 1: Validate inputs
%Make sure that all inputs to this block are buses. If not, do nothing
NumberOfInputs = eval(get_param(gcb, 'NumberOfInputs'));
InputBuses = cell(NumberOfInputs, 1);
for ctr = 1:NumberOfInputs
    InputBuses{ctr} = get_param([gcb '/BusSelector' num2str(ctr)], 'InputSignals');
    if isempty(InputBuses{ctr})
        return;
    end
    
    indices = cellfun(@iscell, InputBuses{ctr});
    InputBuses{ctr}(indices) = cellfun(@(X) X{1}, InputBuses{ctr}(indices), 'UniformOutput', false);
end

%Step 2: Break the library link
set_param(gcb, 'LinkStatus', 'none');

%Step 3: Delete existing lines connecting the bus selector blocks to the
%bus creator, if any.
for ctr = 1:NumberOfInputs
    thesePortHandles = get_param([gcb '/BusSelector' num2str(ctr)], 'PortHandles');
    theseLineHandles = get(thesePortHandles.Outport, 'Line');
    if iscell(theseLineHandles)
        theseLineHandles = cell2mat(theseLineHandles);
    end
    delete_line(theseLineHandles(ishandle(theseLineHandles)));
end

%Step 4: Adjust bus selector and bus creator parameters
for ctr = 1:NumberOfInputs
    set_param([gcb '/BusSelector' num2str(ctr)], 'OutputSignals', ptc_matlab_lib.strimplode(InputBuses{ctr}, ','));
end
set_param([gcb '/BusCreator'], 'Inputs', num2str(sum(cellfun(@numel, InputBuses))));

%Step 5: Add lines as necessary
PortNumbers = cell(NumberOfInputs, 1);
numel_sum = 0;
for ctr = 1:NumberOfInputs
    PortNumbers{ctr} = strtrim(cellstr(num2str((1:numel(InputBuses{ctr})).')));
    PortNumbersOut = strtrim(cellstr(num2str((numel_sum + 1 : numel_sum + numel(InputBuses{ctr})).')));
    cellfun(@(X, Y) add_line(gcb, ['BusSelector' num2str(ctr) '/' X], ['BusCreator/' Y]), PortNumbers{ctr}, PortNumbersOut);
    numel_sum = numel_sum + numel(InputBuses{ctr});
end

end