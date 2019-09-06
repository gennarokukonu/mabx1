function result=removeExistingSubSystem(variant)
    %open_system('L4_MABX');
    existingInputs=getSimulinkBlockHandle(['L4_MABX/INPUTS_',variant]);
    if (existingInputs>0)
        disp('Found existing INPUTS, deleting before adding specified Variant')
        delete_block(existingInputs)
        result=1;
    elseif existingInputs<0
        disp('Checked for existing INPUT system - non found - adding one')
        result=2;
    else
        disp('Error block path invalid, is the model open?');
        result=-1;
    end
    existingOutputs=getSimulinkBlockHandle(['L4_MABX/OUTPUTS_',variant]);
    if (existingInputs>0)
        disp('Found existing OUTPUTS, deleting before adding specified Variant')
        delete_block(existingOutputs)
        result=1;
    elseif existingInputs<0
        disp('Checked for existing OUTPUT system - non found - adding one')
        result=2;
    else
        disp('Error block path invalid, is the model open?');
        result=-1;
    end
    
    
    return
end