%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Autogenerated by export_data_dictionary.m
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% TCM_ANTI_HUNT_TIME_ACTIVE
TCM_ANTI_HUNT_TIME_ACTIVE = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 1, ...
	'Description', 'Anti Hunt time active', ...
	'Unit', 's');

%% TCM_COAST_ACT_TRQ_LOW_THR_APV
TCM_COAST_ACT_TRQ_LOW_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 2, ...
	'Description', 'Coast activation torque lower threshold', ...
	'Unit', '%');

%% TCM_COAST_ACT_TRQ_UP_THR_APV
TCM_COAST_ACT_TRQ_UP_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 20, ...
	'Description', 'Coast activation torque upper threshold', ...
	'Unit', '%');

%% TCM_COAST_BRAKE_PED_POS_THR_APV
TCM_COAST_BRAKE_PED_POS_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0, ...
	'Description', 'Coast brake pedal position threshold [0-1]', ...
	'Unit', '1');

%% TCM_COAST_ENABLE_APV
TCM_COAST_ENABLE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', logical(1), ...
	'Description', 'Coast enable flag', ...
	'Unit', '1');

%% TCM_COAST_INHIBIT_EN_APV
TCM_COAST_INHIBIT_EN_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', logical(1), ...
	'Description', 'Coast inhibit', ...
	'Unit', '1');

%% TCM_COAST_MAX_VEH_ACCEL_THR_APV
TCM_COAST_MAX_VEH_ACCEL_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.5, ...
	'Description', 'Coast maximum vehicle acceleration threshold', ...
	'Unit', 'm/s^2');

%% TCM_COAST_MAX_VEH_SPD_OFFSET_THR_APV
TCM_COAST_MAX_VEH_SPD_OFFSET_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 6.4000000953674, ...
	'Description', 'Coast maximum vehicle speed offset threshold from cruise set speed', ...
	'Unit', 'km/h');

%% TCM_COAST_MIN_VEH_ACCEL_THR_APV
TCM_COAST_MIN_VEH_ACCEL_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', -0.5, ...
	'Description', 'Coast minimum vehicle acceleration threshold', ...
	'Unit', 'm/s^2');

%% TCM_COAST_MIN_VEH_SPD_OFFSET_THR_APV
TCM_COAST_MIN_VEH_SPD_OFFSET_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', -1.6000000238419, ...
	'Description', 'Coast minimum vehicle speed offset threshold from cruise set speed', ...
	'Unit', 'km/h');

%% TCM_COAST_PEDAL_LOW_THR_APV
TCM_COAST_PEDAL_LOW_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0, ...
	'Description', 'Coast pedal lower threshold', ...
	'Unit', '%');

%% TCM_COAST_PEDAL_UP_THR_APV
TCM_COAST_PEDAL_UP_THR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 40, ...
	'Description', 'Coast pedal upper threshold', ...
	'Unit', '%');

%% TCM_NCRS_SHIFT_DOWN_DATA_MPV
TCM_NCRS_SHIFT_DOWN_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [900, 900, 945, 1042.5, 1050;
 900, 900, 945, 1042.5, 1050;
 900, 900, 945, 1042.5, 1050;
 900, 900, 942.4384765625, 1034.3885498047, 1041.4616699219;
 900, 900, 930, 995, 1000;
 900, 900, 930, 995, 1000;
 900, 900, 930, 995, 1000;
 900, 900, 930, 995, 1000;
 900, 900, 930, 995, 1000;
 900, 900, 930, 995, 1000;
 900, 900, 930, 995, 1000;
 900, 900, 930, 995, 1000], ...
	'Description', 'Shift points non-cruise control - downshifts', ...
	'Unit', 'rpm', ...
	'Axis_Labels', {'TCM_NCRS_SHIFT_DOWN_THROTTLE_STEP_MPV'; 'TCM_NCRS_SHIFT_DOWN_GEARNUM_STEP_MPV'});

%% TCM_NCRS_SHIFT_DOWN_GEARNUM_STEP_MPV
TCM_NCRS_SHIFT_DOWN_GEARNUM_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], ...
	'Description', 'Shift points non-cruise control - downshifts - y axis (gear number)', ...
	'Unit', '1');

%% TCM_NCRS_SHIFT_DOWN_THROTTLE_STEP_MPV
TCM_NCRS_SHIFT_DOWN_THROTTLE_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 10, 50, 80, 100], ...
	'Description', 'Shift points non-cruise control - downshifts - x axis (throttle)', ...
	'Unit', '%');

%% TCM_NCRS_SHIFT_UP_DATA_MPV
TCM_NCRS_SHIFT_UP_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [2250, 1300, 1300, 1375, 1537.5, 1550;
 2250, 1300, 1300, 1375, 1537.5, 1550;
 2250, 1300, 1300, 1375, 1537.5, 1550;
 2250, 1300, 1300, 1375, 1537.5, 1550;
 2250, 1300, 1300, 1375, 1537.5, 1550;
 2250, 1300, 1300, 1373.9500732422, 1534.1751708984, 1546.5001220703;
 2250, 1300, 1300, 1366.7857666016, 1511.4880371094, 1522.6190185547;
 2250, 1300, 1300, 1362.1651611328, 1496.8564453125, 1507.2172851563;
 2250, 1282.8054199219, 1282.8054199219, 1347.9637451172, 1489.1402587891, 1500;
 2250, 1253.5350341797, 1253.5350341797, 1327.4744873047, 1487.6767578125, 1500;
 2250, 1250, 1250, 1310, 1440, 1450;
 2250, 1250, 1250, 1310, 1440, 1450], ...
	'Description', 'Shift points non-cruise control - upshifts', ...
	'Unit', 'rpm', ...
	'Axis_Labels', {'TCM_NCRS_SHIFT_UP_THROTTLE_STEP_MPV'; 'TCM_NCRS_SHIFT_UP_GEARNUM_STEP_MPV'});

%% TCM_NCRS_SHIFT_UP_GEARNUM_STEP_MPV
TCM_NCRS_SHIFT_UP_GEARNUM_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], ...
	'Description', 'Shift points non-cruise control - upshifts - y axis (gear number)', ...
	'Unit', '1');

%% TCM_NCRS_SHIFT_UP_THROTTLE_STEP_MPV
TCM_NCRS_SHIFT_UP_THROTTLE_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 5, 10, 50, 80, 100], ...
	'Description', 'Shift points non-cruise control - upshifts - x axis (throttle)', ...
	'Unit', '%');

%% TCM_NUMBER_OF_GEARS_APV
TCM_NUMBER_OF_GEARS_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 12, ...
	'Description', 'Transmission number of gears', ...
	'Unit', '1');

%% TCM_RET_DEM_DS_TARGET_SPD_APV
TCM_RET_DEM_DS_TARGET_SPD_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 1950, ...
	'Description', 'Target rpm when retarders are demanded', ...
	'Unit', 'rpm');

%% TCM_SHIFT_DELAY_APV
TCM_SHIFT_DELAY_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.94999998807907, ...
	'Description', 'Transmission shift delay', ...
	'Unit', 's');

%% TCM_SHIFT_DOWNGRADE_GEARNUM_STEP_MPV
TCM_SHIFT_DOWNGRADE_GEARNUM_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18], ...
	'Description', 'Transmission shift DOWNGRADE data y axis (gear number)', ...
	'Unit', '1');

%% TCM_SHIFT_DOWNGRADE_GRADEPERC_STEP_MPV
TCM_SHIFT_DOWNGRADE_GRADEPERC_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15], ...
	'Description', 'Transmission shift DOWNGRADE data x axis (grade percent)', ...
	'Unit', '%');

%% TCM_SHIFT_DOWNGRADE_OFFSET_DATA_MPV
TCM_SHIFT_DOWNGRADE_OFFSET_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 21, 103, 185, 268, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350], ...
	'Description', 'Transmission shift downgrade offset data', ...
	'Unit', 'rpm', ...
	'Axis_Labels', {'TCM_SHIFT_DOWNGRADE_GRADEPERC_STEP_MPV'; 'TCM_SHIFT_DOWNGRADE_GEARNUM_STEP_MPV'});

%% TCM_SHIFT_ENG_BRAKE_OFFSET_DATA_MPV
TCM_SHIFT_ENG_BRAKE_OFFSET_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100;
 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200;
 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300;
 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300], ...
	'Description', 'Transmission engine brake offsets', ...
	'Unit', 'rpm', ...
	'Axis_Labels', {'TCM_SHIFT_GEAR_NUMBER_MPV'; 'TCM_SHIFT_ENG_BRAKE_RETARDER_TRQ_MPV'});

%% TCM_SHIFT_ENG_BRAKE_RETARDER_TRQ_MPV
TCM_SHIFT_ENG_BRAKE_RETARDER_TRQ_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 30, 60, 90, 100], ...
	'Description', 'Transmission engine brake offsets y axis (retarder torque)', ...
	'Unit', '%');

%% TCM_SHIFT_GEAR_NUMBER_MPV
TCM_SHIFT_GEAR_NUMBER_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], ...
	'Description', 'Transmission engine brake offsets x axis (gear number)', ...
	'Unit', 'rpm');

%% TCM_SHIFT_UPGRADE_GEARNUM_STEP_MPV
TCM_SHIFT_UPGRADE_GEARNUM_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18], ...
	'Description', 'Transmission shift upgrade data y axis (gear number)', ...
	'Unit', '1');

%% TCM_SHIFT_UPGRADE_GRADEPERC_STEP_MPV
TCM_SHIFT_UPGRADE_GRADEPERC_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15], ...
	'Description', 'Transmission shift upgrade data x axis (grade percent)', ...
	'Unit', '%');

%% TCM_SHIFT_UPGRADE_OFFSET_DATA_MPV
TCM_SHIFT_UPGRADE_OFFSET_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350;
 0, 0, 0, 88, 175, 263, 350, 350, 350, 350, 350, 350, 350, 350, 350, 350], ...
	'Description', 'Transmission shift upgrade offset data', ...
	'Unit', 'rpm', ...
	'Axis_Labels', {'TCM_SHIFT_UPGRADE_GRADEPERC_STEP_MPV'; 'TCM_SHIFT_UPGRADE_GEARNUM_STEP_MPV'});

%% TCM_SKIPSHIFT_GEAR_THRESH_APV
TCM_SKIPSHIFT_GEAR_THRESH_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 7, ...
	'Description', 'Gear value upper threshold to skip shifts', ...
	'Unit', '1');

%% TCM_SKIPSHIFT_NUMBER_APV
TCM_SKIPSHIFT_NUMBER_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 2, ...
	'Description', 'Number of gears to skip while skipping shifts', ...
	'Unit', '1');

%% TCM_SKIPSHIFT_PED_THRESH_APV
TCM_SKIPSHIFT_PED_THRESH_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.30000001192093, ...
	'Description', 'Pedal value lower threshold to skip shifts', ...
	'Unit', '%');

%% TCM_TRQ_RAMP_RATE_APV
TCM_TRQ_RAMP_RATE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 121, ...
	'Description', 'Transmission torque ramp rate', ...
	'Unit', '%/s');
