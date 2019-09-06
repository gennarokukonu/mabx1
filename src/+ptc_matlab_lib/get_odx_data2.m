function varargout = get_odx_data2(varargin)

import('ptc_matlab_lib.*');
pairs = {'ODXFilePath', '', ...
    'ShowWaitbar', true, ...
    'HashAlgorithm', 'SHA-512'};
ARGS = parseargs(varargin, pairs);

if ~exist(ARGS.ODXFilePath, 'file')
    [filename, pathname] = uigetfile({'*.odx-d', 'ODX-D File (*.odx-d)'}, 'Select ODX File', pwd);
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        varargout{1} = 0;
        return;
    end
    ARGS.ODXFilePath = fullfile(pathname, filename);
end
ODX.FilePath = ARGS.ODXFilePath;
ODX.Hash = hashfile('FilePath', ARGS.ODXFilePath, 'HashAlgorithm', ARGS.HashAlgorithm);
ODX.HashAlgorithm = ARGS.HashAlgorithm;

%% Step 1: Read ODX file
ROOTNODE = xmlread(ARGS.ODXFilePath);

%Step 2: Obtain units information
unit_node = ROOTNODE.getElementsByTagName('DIAG-LAYER-CONTAINER').item(0).getElementsByTagName('BASE-VARIANTS').item(0).getElementsByTagName('BASE-VARIANT').item(0).getElementsByTagName('DIAG-DATA-DICTIONARY-SPEC').item(0).getElementsByTagName('UNIT-SPEC').item(0).getElementsByTagName('UNITS').item(0).getElementsByTagName('UNIT');
ODX.ODXDATA.Units.LabelNames = {'ID', 'SHORT-NAME', 'DISPLAY-NAME'};
ODX.ODXDATA.Units.Data = repmat({''}, unit_node.getLength(), numel(ODX.ODXDATA.Units.LabelNames));
ID_idx = find(ismember(ODX.ODXDATA.Units.LabelNames, {'ID'}), 1);
SHORT_NAME_idx = find(ismember(ODX.ODXDATA.Units.LabelNames, {'SHORT-NAME'}), 1);
DISPLAY_NAME_idx = find(ismember(ODX.ODXDATA.Units.LabelNames, {'DISPLAY-NAME'}), 1);
for ctr = 1:unit_node.getLength()
    ODX.ODXDATA.Units.Data{ctr, ID_idx} = char(unit_node.item(ctr-1).getAttribute('ID'));
    ODX.ODXDATA.Units.Data{ctr, SHORT_NAME_idx} = char(unit_node.item(ctr-1).getElementsByTagName('SHORT-NAME').item(0).getTextContent());
    ODX.ODXDATA.Units.Data{ctr, DISPLAY_NAME_idx} = char(unit_node.item(ctr-1).getElementsByTagName('DISPLAY-NAME').item(0).getTextContent());
end

%% Step 3: Obtain information about each DATA-OBJECT-PROP that contains compu
%methods
data_object_props_node = ROOTNODE.getElementsByTagName('DIAG-LAYER-CONTAINER').item(0).getElementsByTagName('BASE-VARIANTS').item(0).getElementsByTagName('BASE-VARIANT').item(0).getElementsByTagName('DIAG-DATA-DICTIONARY-SPEC').item(0).getElementsByTagName('DATA-OBJECT-PROPS').item(0).getElementsByTagName('DATA-OBJECT-PROP');
ODX.ODXDATA.DataObjectProps.LabelNames = {'ID', 'SHORT-NAME', 'LONG-NAME', 'COEFFS', 'ENUMERATIONS', 'UNIT'};
ODX.ODXDATA.DataObjectProps.Data = repmat({''}, data_object_props_node.getLength(), numel(ODX.ODXDATA.DataObjectProps.LabelNames));
ID_idx = find(ismember(ODX.ODXDATA.DataObjectProps.LabelNames, {'ID'}), 1);
SHORT_NAME_idx = find(ismember(ODX.ODXDATA.DataObjectProps.LabelNames, {'SHORT-NAME'}), 1);
LONG_NAME_idx = find(ismember(ODX.ODXDATA.DataObjectProps.LabelNames, {'LONG-NAME'}), 1);
COEFFS_idx = find(ismember(ODX.ODXDATA.DataObjectProps.LabelNames, {'COEFFS'}), 1);
ENUMERATIONS_idx = find(ismember(ODX.ODXDATA.DataObjectProps.LabelNames, {'ENUMERATIONS'}), 1);
UNIT_idx = find(ismember(ODX.ODXDATA.DataObjectProps.LabelNames, {'UNIT'}), 1);
for ctr = 1:data_object_props_node.getLength()
    CompuMethodNode = data_object_props_node.item(ctr-1).getElementsByTagName('COMPU-METHOD').item(0);
    if ~isempty(CompuMethodNode)
        ODX.ODXDATA.DataObjectProps.Data{ctr, ID_idx} = char(data_object_props_node.item(ctr-1).getAttribute('ID'));
        ODX.ODXDATA.DataObjectProps.Data{ctr, SHORT_NAME_idx} = char(data_object_props_node.item(ctr-1).getElementsByTagName('SHORT-NAME').item(0).getTextContent());
        ODX.ODXDATA.DataObjectProps.Data{ctr, LONG_NAME_idx} = char(data_object_props_node.item(ctr-1).getElementsByTagName('LONG-NAME').item(0).getTextContent());
        
        CompuMethodCategory = char(CompuMethodNode.getElementsByTagName('CATEGORY').item(0).getTextContent());
        switch CompuMethodCategory
            case 'IDENTICAL'
                ODX.ODXDATA.DataObjectProps.Data{ctr, COEFFS_idx} = [0 1 0 0 0 1];
            case 'LINEAR'
                CompuScaleNode = CompuMethodNode.getElementsByTagName('COMPU-INTERNAL-TO-PHYS').item(0).getElementsByTagName('COMPU-SCALES').item(0).getElementsByTagName('COMPU-SCALE');
                CompuRationalCoeffsNode = CompuScaleNode.item(0).getElementsByTagName('COMPU-RATIONAL-COEFFS').item(0);
                V_num_node = CompuRationalCoeffsNode.getElementsByTagName('COMPU-NUMERATOR');
                V_den_node = CompuRationalCoeffsNode.getElementsByTagName('COMPU-DENOMINATOR');
                if V_num_node.getLength() == 0
                    VN0 = 0; VN1 = 1;
                else
                    VN0 = str2double(char(V_num_node.item(0).getElementsByTagName('V').item(0).getTextContent()));
                    VN1 = str2double(char(V_num_node.item(0).getElementsByTagName('V').item(1).getTextContent()));
                end
                if V_den_node.getLength() == 0
                    VD0 = 1;
                else
                    VD0 = str2double(char(V_den_node.item(0).getElementsByTagName('V').item(0).getTextContent()));
                end
                ODX.ODXDATA.DataObjectProps.Data{ctr, COEFFS_idx} = [0 VD0 -VN0 0 0 VN1];
            case 'SCALE-LINEAR'
                CompuScaleNode = CompuMethodNode.getElementsByTagName('COMPU-INTERNAL-TO-PHYS').item(0).getElementsByTagName('COMPU-SCALES').item(0).getElementsByTagName('COMPU-SCALE');
                VN0_prev = 0; VN1_prev = 1; VD0_prev = 1;
                for ctr2 = 1:CompuScaleNode.getLength()
                    CompuRationalCoeffsNode = CompuScaleNode.item(ctr2-1).getElementsByTagName('COMPU-RATIONAL-COEFFS').item(0);
                    V_num_node = CompuRationalCoeffsNode.getElementsByTagName('COMPU-NUMERATOR');
                    V_den_node = CompuRationalCoeffsNode.getElementsByTagName('COMPU-DENOMINATOR');
                    if V_num_node.getLength() == 0
                        VN0 = 0; VN1 = 1;
                    else
                        VN0 = str2double(char(V_num_node.item(0).getElementsByTagName('V').item(0).getTextContent()));
                        VN1 = str2double(char(V_num_node.item(0).getElementsByTagName('V').item(1).getTextContent()));
                    end
                    if V_den_node.getLength() == 0
                        VD0 = 1;
                    else
                        VD0 = str2double(char(V_den_node.item(0).getElementsByTagName('V').item(0).getTextContent()));
                    end
                    assert(~(ctr2 > 1 && ((VN0 ~= VN0_prev) || (VN1 ~= VN1_prev) || (VD0 ~= VD0_prev))), 'PiecewiseLinearNotSupported', 'Piecewise linear conversions are not supported');
                end
                ODX.ODXDATA.DataObjectProps.Data{ctr, COEFFS_idx} = [0 VD0 -VN0 0 0 VN1];
            case 'RAT-FUNC'
                CompuScaleNode = CompuMethodNode.getElementsByTagName('COMPU-INTERNAL-TO-PHYS').item(0).getElementsByTagName('COMPU-SCALES').item(0).getElementsByTagName('COMPU-SCALE');
                CompuRationalCoeffsNode = CompuScaleNode.item(0).getElementsByTagName('COMPU-RATIONAL-COEFFS').item(0);
                V_num_node = CompuRationalCoeffsNode.getElementsByTagName('COMPU-NUMERATOR').item(0).getElementsByTagName('V');
                V_den_node = CompuRationalCoeffsNode.getElementsByTagName('COMPU-DENOMINATOR').item(0).getElementsByTagName('V');
                VNlist = NaN(V_num_node.getLength(), 1);
                VDlist = NaN(V_den_node.getLength(), 1);
                for ctr2 = 1:numel(VNlist)
                    VNlist(ctr2) = str2double(char(V_num_node.item(ctr2-1).getTextContent()));
                end
                for ctr2 = 1:numel(VDlist)
                    VDlist(ctr2) = str2double(char(V_den_node.item(ctr2-1).getTextContent()));
                end
                assert(all(VNlist(3:end) == 0), [mfilename ':' thisfuncname ':NonLinearNotSupported'], 'Nonlinear conversions are not supported');
                assert(all(VDlist(2:end) == 0), [mfilename ':' thisfuncname ':NonLinearNotSupported'], 'Nonlinear conversions are not supported');
                VN0 = str2double(char(V_num_node.item(0).getTextContent()));
                VN1 = str2double(char(V_num_node.item(1).getTextContent()));
                VD0 = str2double(char(V_den_node.item(0).getTextContent()));
                ODX.ODXDATA.DataObjectProps.Data{ctr, COEFFS_idx} = [0 VD0 -VN0 0 0 VN1];
            case 'TEXTTABLE'
                CompuScaleNode = CompuMethodNode.getElementsByTagName('COMPU-INTERNAL-TO-PHYS').item(0).getElementsByTagName('COMPU-SCALES').item(0).getElementsByTagName('COMPU-SCALE');
                Enumeration = struct('Min', {NaN(CompuScaleNode.getLength(), 1)}, 'Max', {NaN(CompuScaleNode.getLength(), 1)}, 'Text', {repmat({''}, CompuScaleNode.getLength(), 1)});
                for ctr2 = 1:CompuScaleNode.getLength()
                    LowerLimitNode = CompuScaleNode.item(ctr2-1).getElementsByTagName('LOWER-LIMIT');
                    UpperLimitNode = CompuScaleNode.item(ctr2-1).getElementsByTagName('UPPER-LIMIT');
                    assert(LowerLimitNode.getLength() ~= 0 || UpperLimitNode.getLength() ~= 0, [mfilename ':' thisfuncname ':EmptyValue'], 'Required value not specified for TEXTTABLE category');
                    if LowerLimitNode.getLength() > 0 && UpperLimitNode.getLength() == 0
                        LowerLimit = str2double(char(LowerLimitNode.item(0).getTextContent()));
                        UpperLimit = LowerLimit;
                    elseif UpperLimitNode.getLength() > 0 && LowerLimitNode.getLength() == 0
                        UpperLimit = str2double(char(UpperLimitNode.item(0).getTextContent()));
                        LowerLimit = UpperLimit;
                    else
                        LowerLimit = str2double(char(LowerLimitNode.item(0).getTextContent()));
                        UpperLimit = str2double(char(UpperLimitNode.item(0).getTextContent()));
                    end
                    assert(UpperLimit >= LowerLimit, [mfilename ':' thisfuncname ':InconsistentTextTableLimits'], 'Inconsistent TEXTTABLE limits specified');
                    VTText = char(CompuScaleNode.item(ctr2-1).getElementsByTagName('COMPU-CONST').item(0).getElementsByTagName('VT').item(0).getTextContent());
                    Enumeration.Min(ctr2) = LowerLimit;
                    Enumeration.Max(ctr2) = UpperLimit;
                    Enumeration.Text{ctr2} = VTText;
                end
                ODX.ODXDATA.DataObjectProps.Data{ctr, COEFFS_idx} = [0 1 0 0 0 1];
                ODX.ODXDATA.DataObjectProps.Data{ctr, ENUMERATIONS_idx} = Enumeration;
            otherwise
                ODX.ODXDATA.DataObjectProps.Data{ctr, COEFFS_idx} = [0 1 0 0 0 1];
        end
        
        thisUnit = '';
        UNITRefIDNode = data_object_props_node.item(ctr-1).getElementsByTagName('UNIT-REF');
        if UNITRefIDNode.getLength() ~= 0
            UNITRefID = char(UNITRefIDNode.item(0).getAttribute('ID-REF'));
            Units_ID_idx = find(ismember(ODX.ODXDATA.Units.LabelNames, {'ID'}), 1);
            Units_SHORT_NAME_idx = find(ismember(ODX.ODXDATA.Units.LabelNames, {'SHORT-NAME'}), 1);
            [idx, loc] = ismember(UNITRefID, ODX.ODXDATA.Units.Data(:, Units_ID_idx));
            if any(idx)
                loc = loc(find(loc, 1));
                thisUnit = ODX.ODXDATA.Units.Data{loc, Units_SHORT_NAME_idx};
            end
        end
        ODX.ODXDATA.DataObjectProps.Data{ctr, UNIT_idx} = thisUnit;
    end
end

%% Step 4: Obtain structure definitions
structures_node = ROOTNODE.getElementsByTagName('DIAG-LAYER-CONTAINER').item(0).getElementsByTagName('BASE-VARIANTS').item(0).getElementsByTagName('BASE-VARIANT').item(0).getElementsByTagName('DIAG-DATA-DICTIONARY-SPEC').item(0).getElementsByTagName('STRUCTURES').item(0).getElementsByTagName('STRUCTURE');
ODX.ODXDATA.Structures.LabelNames = {'ID', 'SHORT-NAME', 'LONG-NAME', 'BYTE-SIZE', 'PARAM_SHORT_NAMES', 'PARAM_LONG_NAMES', 'PARAM_BYTE_POSITIONS', 'PARAM_BIT_POSITIONS', 'PARAM_DOP_REF_IDS', 'PARAM_BIT_LENGTHS'};
ODX.ODXDATA.Structures.Data = cell(structures_node.getLength(), numel(ODX.ODXDATA.Structures.LabelNames));
ID_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'ID'}), 1);
SHORT_NAME_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'SHORT-NAME'}), 1);
LONG_NAME_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'LONG-NAME'}), 1);
BYTE_SIZE_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'BYTE-SIZE'}), 1);
PARAM_SHORT_NAMES_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'PARAM_SHORT_NAMES'}), 1);
PARAM_LONG_NAMES_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'PARAM_LONG_NAMES'}), 1);
PARAM_BYTE_POSITIONS_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'PARAM_BYTE_POSITIONS'}), 1);
PARAM_BIT_POSITIONS_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'PARAM_BIT_POSITIONS'}), 1);
PARAM_DOP_REF_IDS_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'PARAM_DOP_REF_IDS'}), 1);
PARAM_BIT_LENGTHS_idx = find(ismember(ODX.ODXDATA.Structures.LabelNames, {'PARAM_BIT_LENGTHS'}), 1);
for ctr = 1:structures_node.getLength()
    thisStructureNode = structures_node.item(ctr-1);
    if ~isempty(thisStructureNode)
        ODX.ODXDATA.Structures.Data{ctr, ID_idx} = char(thisStructureNode.getAttribute('ID'));
        ODX.ODXDATA.Structures.Data{ctr, SHORT_NAME_idx} = char(thisStructureNode.getElementsByTagName('SHORT-NAME').item(0).getTextContent());
        ODX.ODXDATA.Structures.Data{ctr, LONG_NAME_idx} = char(thisStructureNode.getElementsByTagName('LONG-NAME').item(0).getTextContent());
        thisByteSizeNode = thisStructureNode.getElementsByTagName('BYTE-SIZE').item(0);
        if ~isempty(thisByteSizeNode)
            ODX.ODXDATA.Structures.Data{ctr, BYTE_SIZE_idx} = char(thisStructureNode.getElementsByTagName('BYTE-SIZE').item(0).getTextContent());
        end
        
        params_node = thisStructureNode.getElementsByTagName('PARAMS').item(0).getElementsByTagName('PARAM');
        ODX.ODXDATA.Structures.Data{ctr, PARAM_SHORT_NAMES_idx} = repmat({''}, params_node.getLength(), 1);
        ODX.ODXDATA.Structures.Data{ctr, PARAM_LONG_NAMES_idx} = repmat({''}, params_node.getLength(), 1);
        ODX.ODXDATA.Structures.Data{ctr, PARAM_BYTE_POSITIONS_idx} = repmat({'0'}, params_node.getLength(), 1);
        ODX.ODXDATA.Structures.Data{ctr, PARAM_BIT_POSITIONS_idx} = repmat({'0'}, params_node.getLength(), 1);
        ODX.ODXDATA.Structures.Data{ctr, PARAM_DOP_REF_IDS_idx} = repmat({''}, params_node.getLength(), 1);
        for param_ctr = 1:params_node.getLength()
            thisParamNode = params_node.item(param_ctr-1);
            if ~isempty(thisParamNode)
                ODX.ODXDATA.Structures.Data{ctr, PARAM_SHORT_NAMES_idx}{param_ctr} = char(thisParamNode.getElementsByTagName('SHORT-NAME').item(0).getTextContent());
                ODX.ODXDATA.Structures.Data{ctr, PARAM_LONG_NAMES_idx}{param_ctr} = char(thisParamNode.getElementsByTagName('LONG-NAME').item(0).getTextContent());
                thisBytePositionNode = thisParamNode.getElementsByTagName('BYTE-POSITION').item(0);
                if ~isempty(thisBytePositionNode)
                    ODX.ODXDATA.Structures.Data{ctr, PARAM_BYTE_POSITIONS_idx}{param_ctr} = char(thisBytePositionNode.getTextContent());
                end
                thisBitPositionNode = thisParamNode.getElementsByTagName('BIT-POSITION').item(0);
                if ~isempty(thisBitPositionNode)
                    ODX.ODXDATA.Structures.Data{ctr, PARAM_BIT_POSITIONS_idx}{param_ctr} = char(thisBitPositionNode.getTextContent());
                end
                thisDOPREFNode = thisParamNode.getElementsByTagName('DOP-REF').item(0);
                if ~isempty(thisDOPREFNode)
                    ODX.ODXDATA.Structures.Data{ctr, PARAM_DOP_REF_IDS_idx}{param_ctr} = char(thisParamNode.getElementsByTagName('DOP-REF').item(0).getAttribute('ID-REF'));
                end
                thisBitLengthNode = thisParamNode.getElementsByTagName('BIT-LENGTH').item(0);
                if ~isempty(thisBitLengthNode)
                    ODX.ODXDATA.Structures.Data{ctr, PARAM_BIT_LENGTHS_idx}{param_ctr} = char(thisParamNode.getElementsByTagName('BIT-LENGTH').item(0).getTextContent());
                end
            end
        end
    end
end

ODX.ODXDATA = orderfields(ODX.ODXDATA);
varargout{1} = ODX;

end