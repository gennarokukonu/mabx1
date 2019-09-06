function varargout = visionGetSoftwareId(obj, varargin)
% visionGetSoftwareId(obj, varargin)
%
% Description: Function to get current software id being used
%
% Syntax: [error_code, SoftwareId] = visionGetSoftwareId(obj, 'DeviceName', <'PCM'>, ...
%   'NumOfElements', <14>, 'BaseItemName', <'Measurements.SW_Build_Id'>);
%
% Parameters:
%   DeviceName - Default value 'PCM'
%
%   NumOfElements - Number of elements that comprise the software id,
%   default 14
%
%   BaseItemName - Default 'Measurements.SW_Build_Id'
%
% Return value: Returns a vector containing two elements
%   error_code - Returns an error code. Zero means success
%
%   SoftwareId - Returns the software id

import('ptc_matlab_lib.*');

pairs = {'DeviceName', 'PCM', ...
    'NumOfElements', 14, ...
    'BaseItemName', {'Measurements.SW_Build_id'; 'Measurements.PCI_Sw_application_build_id'}};
parseargs(varargin, pairs);

ItemValueList = NaN(1, NumOfElements);

try
    found = false;
    for ctr = 1:numel(BaseItemName)
       thisFullDataItemName = [BaseItemName{ctr} '[0]'];
       [~, temp] = obj.visionGetVariable('DeviceName', DeviceName, 'FullDataItemName', thisFullDataItemName);
       if ~isempty(temp)
           found = true;
           BaseItemName = BaseItemName{ctr};
           break;
       end
    end
    if ~found
        error([mfilename ':' thisfuncname ':CouldNotFindSoftwareId'], 'Could not find software ID');
    end
    for ctr = 0:NumOfElements-1
        thisFullDataItemName = [BaseItemName '[' num2str(ctr) ']'];
        [~, temp] = obj.visionGetVariable('DeviceName', DeviceName, ...
            'FullDataItemName', thisFullDataItemName);
        ItemValueList(ctr+1) = temp.TargetValue;
    end
    
    SoftwareId = char((ItemValueList(:)).');
    error_code = obj.ERRORCODES.VISION_SUCCESS;
catch
    SoftwareId = '';
    error_code = obj.ERRORCODES.VISION_COULD_NOT_GET_SOFTWARE_ID;
end

varargout{1} = error_code;
varargout{2} = SoftwareId;

end
