function out = create_drive_cycle(varargin)
%CREATE_DRIVE_CYCLE: Function to generate the drive cycle items from the
%exported CAN trace (exported to a MAT file). It should set up the MAT file
%as a data dictionary for the L4 SIM model

import('ptc_matlab_lib.*');
pairs = {'InputMATFilePath', '', ...
    'OutputMATFilePath', '', ...
    'ShouldResample', true, ...
    'SampleRate_seconds', 0.1};
ARGS = parseargs(varargin, pairs);

%% Step 1: Load MAT File
if ~exist(ARGS.InputMATFilePath, 'file')
    [filename, pathname] = uigetfile({'*.mat'; 'MAT File (*.mat)'}, 'Select MAT File exported from CANalyzer');
    if isequal(filename, 0) || isequal(pathname, 0)
        %Cancel was pressed
        out = struct([]);
        return;
    end
    ARGS.InputMATFilePath = fullfile(pathname, filename);
end
MATFILE = load(ARGS.InputMATFilePath);
MATFILE = orderfields(MATFILE);

%% Step 2: Convert all entries to timeseries objects
fields = fieldnames(MATFILE);
for thisField = fields(:).'
    MATFILE.(thisField{1}) = timeseries(MATFILE.(thisField{1})(:, 2), MATFILE.(thisField{1})(:, 1), 'Name', thisField{1});
    MATFILE.(thisField{1}).UserData.Description = '';
    MATFILE.(thisField{1}).TreatNaNasMissing = false;
end

%% Step 4: Add information about units
MATFILE.ACC1_2A__AdaptiveCruiseCtrlMode.DataInfo.Units = '1';
MATFILE.ACC1_2A__AdaptiveCruiseCtrlSetSpeed.DataInfo.Units = 'km/h';
MATFILE.CCSS_00__CruiseCtrlHighSetLimitSpeed.DataInfo.Units = 'km/h';
MATFILE.CCSS_00__CruiseCtrlLowSetLimitSpeed.DataInfo.Units = 'km/h';
MATFILE.CCSS_00__MaxVehicleSpeedLimit.DataInfo.Units = 'km/h';
MATFILE.CCVS1_00__BrakeSwitch.DataInfo.Units = '1';
MATFILE.CCVS1_00__ClutchSwitch.DataInfo.Units = '1';
MATFILE.CCVS1_00__CruiseCtrlSetSpeed.DataInfo.Units = 'km/h';
MATFILE.CCVS1_00__CruiseCtrlStates.DataInfo.Units = '1';
MATFILE.CCVS1_00__WheelBasedVehicleSpeed.DataInfo.Units = 'km/h';
MATFILE.CVW_0B__GrossCombinationVehicleWeight.DataInfo.Units = 'kg';
MATFILE.EC1_00__EngExRngRqdSpdCtrlRngUpperLimit.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngMomentOfInertia.DataInfo.Units = 'kg*m^2';
MATFILE.EC1_00__EngMxMmntaryOverrideSpeedPoint7.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngMxMomentaryOverrideTimeLimit.DataInfo.Units = 's';
MATFILE.EC1_00__EngPercentTorqueAtIdlePoint1.DataInfo.Units = '%';
MATFILE.EC1_00__EngPercentTorqueAtPoint2.DataInfo.Units = '%';
MATFILE.EC1_00__EngPercentTorqueAtPoint3.DataInfo.Units = '%';
MATFILE.EC1_00__EngPercentTorqueAtPoint4.DataInfo.Units = '%';
MATFILE.EC1_00__EngPercentTorqueAtPoint5.DataInfo.Units = '%';
MATFILE.EC1_00__EngReferenceTorque.DataInfo.Units = 'N*m';
MATFILE.EC1_00__EngRqdTorqueCtrlRangeLowerLimit.DataInfo.Units = '%';
MATFILE.EC1_00__EngRqdTorqueCtrlRangeUpperLimit.DataInfo.Units = '%';
MATFILE.EC1_00__EngRqedSpeedCtrlRangeLowerLimit.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngRqedSpeedCtrlRangeUpperLimit.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngSpeedAtHighIdlePoint6.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngSpeedAtIdlePoint1.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngSpeedAtPoint2.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngSpeedAtPoint3.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngSpeedAtPoint4.DataInfo.Units = 'rpm';
MATFILE.EC1_00__EngSpeedAtPoint5.DataInfo.Units = 'rpm';
MATFILE.EEC1_00__ActualEngPercentTorque.DataInfo.Units = '%';
MATFILE.EEC1_00__EngSpeed.DataInfo.Units = 'rpm';
MATFILE.EEC3_00__EstEngPrsticLossesPercentTorque.DataInfo.Units = '%';
MATFILE.EEC3_00__NominalFrictionPercentTorque.DataInfo.Units = '%';
MATFILE.ERC1_0F__ActualRetarderPercentTorque.DataInfo.Units = '%';
MATFILE.ET1_00__EngCoolantTemp.DataInfo.Units = 'degC';
MATFILE.ET1_00__EngFuelTemp1.DataInfo.Units = 'degC';
MATFILE.ET1_00__EngOilTemp1.DataInfo.Units = 'degC';
MATFILE.ETC1_00__TransDrivelineEngaged.DataInfo.Units = '1';
MATFILE.ETC2_00__TransActualGearRatio.DataInfo.Units = '1';
MATFILE.ETC7_03__TransMode1Indicator.DataInfo.Units = '1';
MATFILE.LFE1_00__EngAverageFuelEconomy.DataInfo.Units = 'km/L';
MATFILE.LFE1_00__EngFuelRate.DataInfo.Units = 'L/h';
MATFILE.LFE1_00__EngInstantaneousFuelEconomy.DataInfo.Units = 'km/L';
MATFILE.SSI2_03__PitchAngleExRange.DataInfo.Units = 'deg';
MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.DataInfo.Units = 'm';

%% Account for variable name signals
GPS_Latitude = fields{find(ismember(fields, {'PosRapidUpdate_10__Latitude_'; 'PosRapidUpdate_01__Latitude_'; 'PosRapidUpdate__Latitude_'}), 1)};
GPS_Longitude = fields{find(ismember(fields, {'PosRapidUpdate_10__Longitude_'; 'PosRapidUpdate_01__Longitude_'; 'PosRapidUpdate__Longitude_'}), 1)};
if ~isempty(GPS_Latitude) && isa(MATFILE.(GPS_Latitude), 'timeseries')
    MATFILE.GPS_Latitude = MATFILE.(GPS_Latitude);
    MATFILE.GPS_Latitude.Name = 'GPS_Latitude';
    MATFILE = rmfield(MATFILE, GPS_Latitude);
    MATFILE.GPS_Latitude.DataInfo.Units = 'deg';
end
if ~isempty(GPS_Longitude) && isa(MATFILE.(GPS_Longitude), 'timeseries')
    MATFILE.GPS_Longitude = MATFILE.(GPS_Longitude);
    MATFILE.GPS_Longitude.Name = 'GPS_Longitude';
    MATFILE = rmfield(MATFILE, GPS_Longitude);
    MATFILE.GPS_Longitude.DataInfo.Units = 'deg';
end

%% Step 3: Synchronize all time series objects, remove fields that are not timeseries objects
fields = fieldnames(MATFILE);
idx = cellfun(@(X) isa(MATFILE.(X), 'timeseries'), fields);
if any(~idx)
    MATFILE = rmfield(MATFILE, fields(~idx));
    fields = fieldnames(MATFILE);
end
tslist_cell = cellfun(@(X) MATFILE.(X), fields, 'UniformOutput', false);
[tslist_cell{:}] = synchronize_custom(tslist_cell, 'Union', 'interpmethod', 'zoh');
for ctr = 1:numel(tslist_cell)
    MATFILE.(tslist_cell{ctr}.Name) = tslist_cell{ctr};
end

%% Step 4: Adjust vectors to align only with meaningful values of vehicle distance
NaNIndices = isnan(MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Data);
if any(NaNIndices)
    MATFILE = structfun(@(X) delsample(X, 'Index', find(NaNIndices)), MATFILE, 'UniformOutput', false);
end
[~, idx] = unique(MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Data, 'first');
timevec = MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Time(idx);
distvec = MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Data(idx);
idx = MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Time < timevec(1) | MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Time > timevec(end);
if any(idx)
    MATFILE = structfun(@(X) delsample(X, 'Index', find(idx)), MATFILE, 'UniformOutput', false);
end
MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Data = interp1(timevec, distvec, MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Time);

%% Step 5: Resample as needed. Note the use of zoh for discrete signals and linear interpolation for continuous signals
if ARGS.ShouldResample
    fields = fieldnames(MATFILE);
    discrete_channels = {'ACC1_2A__AdaptiveCruiseCtrlMode'; 'ETC1_00__TransDrivelineEngaged'; 'ETC7_03__TransMode1Indicator'};
    continuous_channels = setdiff(fields, discrete_channels);
    for thisField = discrete_channels(:).'
        if isfield(MATFILE, thisField{1})
            MATFILE.(thisField{1}) = resample(MATFILE.(thisField{1}), timevec(1):ARGS.SampleRate_seconds:timevec(end), 'zoh');
        end
    end
    for thisField = continuous_channels(:).'
        if isfield(MATFILE, thisField{1})
            MATFILE.(thisField{1}) = resample(MATFILE.(thisField{1}), timevec(1):ARGS.SampleRate_seconds:timevec(end), 'linear');
        end
    end
end

%% Step 5: Convert to PTC_MBDS_Parameter objects
out.CYCLE_TIME = ptc_matlab_lib.PTC_MBDS_Parameter('Value', MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Time - MATFILE.VDHR_31__HghRslutionTotalVehicleDistance.Time(1), ...
    'Description', 'Time vector', ...
    'Unit', 's');
for thisField = fields(:).'
    thisIdentifier = ['CYCLE_' thisField{1}];
    out.(thisIdentifier) = ptc_matlab_lib.PTC_MBDS_Parameter('Value', MATFILE.(thisField{1}).Data(:), ...
        'Description', MATFILE.(thisField{1}).UserData.Description, ...
        'Unit', MATFILE.(thisField{1}).DataInfo.Units);
end

%% Step 6: Sanity checks for distance vector and time vector
assert(none(diff(out.CYCLE_TIME.Value) <= 0));
assert(none(diff(out.CYCLE_VDHR_31__HghRslutionTotalVehicleDistance.Value) <= 0));
assert(none(isnan(out.CYCLE_VDHR_31__HghRslutionTotalVehicleDistance.Value)));

%% Step 7: Compute calculated channels
out.CYCLE_Vehicle_Distance = ptc_matlab_lib.PTC_MBDS_Parameter(out.CYCLE_VDHR_31__HghRslutionTotalVehicleDistance, ...
    'Value', out.CYCLE_VDHR_31__HghRslutionTotalVehicleDistance.Value - out.CYCLE_VDHR_31__HghRslutionTotalVehicleDistance.Value(1), ...
    'Description', 'Calculated cycle vehicle distance');

out.CYCLE_Net_Engine_Percent_Torque = ptc_matlab_lib.PTC_MBDS_Parameter(out.CYCLE_EEC1_00__ActualEngPercentTorque, ...
    'Value', out.CYCLE_EEC1_00__ActualEngPercentTorque.Value - out.CYCLE_EEC3_00__EstEngPrsticLossesPercentTorque.Value - out.CYCLE_EEC3_00__NominalFrictionPercentTorque.Value, ...
    'Description', 'Calculated net engine percent torque');

%% Step 8: Order fields
out = orderfields(out);

%% Step 9: Save MAT File
if isempty(ARGS.OutputMATFilePath)
    while isempty(ARGS.OutputMATFilePath)
        [filename, pathname] = uiputfile({'*.mat', 'MAT File (*.mat)'}, 'Save MAT File', fileparts(ARGS.InputMATFilePath));
        if isequal(filename, 0) || isequal(pathname, 0)
            %Cancel was pressed
            return;
        end
        ARGS.OutputMATFilePath = fullfile(pathname, filename);
        if ~check_write_permissions(fileparts(ARGS.OutputMATFilePath))
            waitfor(errordlg('ERROR: Insufficient permissions. Please choose a different location to save the MAT file.', 'ERROR', 'modal'));
            ARGS.OutputMATFilePath = '';
        end
    end
end
save(ARGS.OutputMATFilePath, '-struct', 'out', '-v7.3');

end