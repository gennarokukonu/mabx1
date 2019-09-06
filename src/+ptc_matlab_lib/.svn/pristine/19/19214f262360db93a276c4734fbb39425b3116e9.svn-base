function varargout = get_vpdconfiguration_data(varargin)
%This function will extract the following information from a VPD
%configuration XML file
%   Chassis number
%   Engine number
%   VIN number
%   Component group numbers
%   Software part numbers
%   Production order number
%   Sales order number
%   Last changed timestamp
% UNDER DEVELOPMENT!!!

import('ptc_matlab_lib.*');
import('javax.xml.xpath.*');

pairs = {'XMLFileList', {}, ...
    'DefaultDirectory', 'C:\ProgramData\PACCAR Inc\DAVIE4\PSL\VPDConfigurationCache'};
ARGS = parseargs(varargin, pairs);

ARGS.XMLFileList = cellstr(ARGS.XMLFileList);

if ~exist(ARGS.DefaultDirectory, 'dir')
    ARGS.DefaultDirectory = pwd;
end

if isempty(ARGS.XMLFileList)
    filelist = uiselectfiles('DefaultDirectory', ARGS.DefaultDirectory, ...
        'Title', 'Select VPD Configuration XML Files', ...
        'FilterSpec', {'*.xml', 'XML Files (*.xml)'}, ...
        'OpenFileOnDoubleClick', true, ...
        'FigureParams', {'WindowStyle', 'modal'});
    if isequal(filelist, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.XMLFileList = filelist;
end

DOMnodes = cellfun(@xmlread, ARGS.XMLFileList, 'UniformOutput', false);

XPathExpressionList = {'/vpd:VPDConfiguration/vpd:VPDAttributes/vpd:ChassisNumber';
    '/vpd:VPDConfiguration/vpd:VPDAttributes/vpd:Engine/vpd:SerialNumber'};
ExpressionObjList = cell(numel(XPathExpressionList), 1);

vpd = VPDNamespaceContext;

factory = XPathFactory.newInstance;
xpath = factory.newXPath;
xpath.setNamespaceContext(vpd);

for ctr = 1:numel(XPathExpressionList)
    % Create an XPath expression.    
    ExpressionObjList{ctr} = xpath.compile(XPathExpressionList{ctr});
end

evaluationresults = cell(numel(DOMnodes), numel(ExpressionObjList));
for row = 1:numel(DOMnodes)
    for col = 1:numel(ExpressionObjList)
        evaluationresults{row, col} = ExpressionObjList{col}.evaluate(DOMnodes{row}, XPathConstants.STRING);
    end
end

disp(cellstr2expr('InputCellArray', evaluationresults));

end