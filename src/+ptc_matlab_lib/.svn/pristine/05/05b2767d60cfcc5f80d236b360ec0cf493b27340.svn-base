function varargout = KIBESParseXML(varargin)
%KIBESPARSEXML: Function to parse XML file exported from KIBES

import('ptc_matlab_lib.*');
pairs = {'FilePath', '', ...
   'ShouldProcessDevice_NVM', true, ...
   'HashAlgorithm', 'SHA-512', ...
   'ShowWaitbar', true};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.FilePath, 'file')
   [filename, pathname] = uigetfile({'*.xml', 'XML File (*.xml)'}, 'Select XML file exported from KIBES', mfiledir);
   if isequal(filename, 0) || isequal(pathname, 0)
      %Cancel was pressed
      varargout{1} = struct([]);
      return;
   end
   ARGS.FilePath = fullfile(pathname, filename);
end

if ARGS.ShowWaitbar
   ticid = tic;
   waitbar_hndl = waitbar(0, 'Parsing KIBES XML File...', 'WindowStyle', 'modal', 'Pointer', 'watch');
end

OUT = struct('Hash', hashfile('FilePath', ARGS.FilePath, 'HashAlgorithm', ARGS.HashAlgorithm), ...
   'HashAlgorithm', ARGS.HashAlgorithm, ...
   'HeaderInformation', [], ...
   'SYSTEM', []);
DOM_NODE = xmlread(ARGS.FilePath);
if ARGS.ShouldProcessDevice_NVM
   OUT.SYSTEM.NVM = [];
end

%Step 1: Get header information
DOM_kibesHeader = DOM_NODE.getElementsByTagName('kibes:Header').item(0);
OUT.HeaderInformation.title = char(DOM_kibesHeader.getElementsByTagName('dc:title').item(0).getTextContent());
OUT.HeaderInformation.subject = char(DOM_kibesHeader.getElementsByTagName('dc:subject').item(0).getTextContent());
OUT.HeaderInformation.creator = char(DOM_kibesHeader.getElementsByTagName('dc:creator').item(0).getTextContent());
OUT.HeaderInformation.description = char(DOM_kibesHeader.getElementsByTagName('dc:description').item(0).getTextContent());
OUT.HeaderInformation.created = char(DOM_kibesHeader.getElementsByTagName('dcterms:created').item(0).getTextContent());
OUT.HeaderInformation.SchemaVersion = char(DOM_kibesHeader.getElementsByTagName('kibes:SchemaVersion').item(0).getTextContent());
OUT.HeaderInformation.CustomVersion = char(DOM_kibesHeader.getElementsByTagName('kibes:CustomVersion').item(0).getTextContent());
OUT.HeaderInformation.CustomerCode = char(DOM_kibesHeader.getElementsByTagName('kibes:CustomerCode').item(0).getTextContent());

%Step 2: Get device information
OUT.SYSTEM.NVM.DIDList = cell(0, 1);
OUT.SYSTEM.NVM.SignalNameList = cell(0, 1);
OUT.SYSTEM.NVM.InitialValueList = cell(0, 1);
OUT.SYSTEM.NVM.DefaultValueList = cell(0, 1);
OUT.SYSTEM.NVM.IoNameList = cell(0, 1);

DOM_kibesDevice = DOM_NODE.getElementsByTagName('kibes:Device');
for ctr = 0:DOM_kibesDevice.getLength()-1
   thisDID = char(DOM_kibesDevice.item(ctr).getAttribute('did'));
   if ~isempty(thisDID)
      DOM_kibesGenericSignals = DOM_kibesDevice.item(ctr).getElementsByTagName('kibes:GenericSignals');
      if DOM_kibesGenericSignals.getLength() >= 1
         DOM_kibesGenericSignalNvm = DOM_kibesGenericSignals.item(0).getElementsByTagName('kibes:GenericSignalNvm');
         if DOM_kibesGenericSignalNvm.getLength() >= 1
            for ctr2 = 0:DOM_kibesGenericSignalNvm.getLength()-1
               if strcmp(char(DOM_kibesGenericSignalNvm.item(ctr2).getAttribute('create')), 'true')
                  thisSignalName = char(DOM_kibesGenericSignalNvm.item(ctr2).getAttribute('name'));
                  thisInitialValue = evalsafe(char(DOM_kibesGenericSignalNvm.item(ctr2).getAttribute('initialValue')));
				  thisDefaultValue = char(DOM_kibesGenericSignalNvm.item(ctr2).getElementsByTagName('kibes:DefaultValue').item(0).getTextContent());
                  thisIoName = char(DOM_kibesGenericSignalNvm.item(ctr2).getElementsByTagName('kibes:IoName').item(0).getTextContent());
                  
                  OUT.SYSTEM.NVM.DIDList{end+1, 1} = thisDID;
                  OUT.SYSTEM.NVM.SignalNameList{end+1, 1} = thisSignalName;
                  OUT.SYSTEM.NVM.InitialValueList{end+1, 1} = thisInitialValue;
                  OUT.SYSTEM.NVM.IoNameList{end+1, 1} = thisIoName;
				  OUT.SYSTEM.NVM.DefaultValueList{end+1, 1} = thisDefaultValue;
               end
            end
         end
      end
   end
end

varargout{1} = OUT;

if ARGS.ShowWaitbar
   waitbar(1, waitbar_hndl, ['Done, took ' num2str(toc(ticid)) ' seconds.']);
   pause(1.0);
   delete(waitbar_hndl);
end

end