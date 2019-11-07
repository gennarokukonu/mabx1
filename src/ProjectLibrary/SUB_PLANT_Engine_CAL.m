%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Autogenerated by export_data_dictionary.m
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% PLANT_ENGINE_INDICATED_TORQUE_DATA_MPV
PLANT_ENGINE_INDICATED_TORQUE_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [1293, 1296, 1835, 2350, 2356, 2364, 2374, 2255, 2205, 2073, 1996, 1883, 1351, 868, 595, 589], ...
	'Description', 'Engine indicated torque data', ...
	'Unit', 'N*m', ...
	'Axis_Labels', {'PLANT_ENGINE_INDICATED_TORQUE_STEP_MPV'});

%% PLANT_ENGINE_INDICATED_TORQUE_STEP_MPV
PLANT_ENGINE_INDICATED_TORQUE_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [450, 550, 850, 900, 1000, 1125, 1250, 1365, 1400, 1500, 1600, 1675, 1800, 1950, 2050, 2150], ...
	'Description', 'Engine indicated torque axis (engine speed)', ...
	'Unit', 'rpm');

%% PLANT_RETARDER_TORQUE_DATA_MPV
PLANT_RETARDER_TORQUE_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [200, 200, 300, 500, 600, 743, 1146, 1476, 1576, 1701, 1779, 1772, 1764, 1726, 1677, 1599], ...
	'Description', 'Engine retarder torque data', ...
	'Unit', 'N*m', ...
	'Axis_Labels', {'PLANT_RETARDER_TORQUE_STEP_MPV'});

%% PLANT_RETARDER_TORQUE_STEP_MPV
PLANT_RETARDER_TORQUE_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [550, 650, 700, 800, 850, 900, 1000, 1100, 1200, 1365, 1600, 1675, 1800, 1950, 2050, 2150], ...
	'Description', 'Engine retarder torque axis (engine speed)', ...
	'Unit', 'rpm');

%% PLANT_ENGINE_FRICTION_TORQUE_DATA_MPV
PLANT_ENGINE_FRICTION_TORQUE_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 114, 127, 139, 154, 170, 188, 207, 222], ...
	'Description', 'Engine friction torque data', ...
	'Unit', 'N*m', ...
	'Axis_Labels', {'PLANT_ENGINE_FRICTION_TORQUE_STEP_MPV'});

%% PLANT_ENGINE_FRICTION_TORQUE_STEP_MPV
PLANT_ENGINE_FRICTION_TORQUE_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 650, 950, 1150, 1350, 1550, 1750, 1950, 2100], ...
	'Description', 'Engine friction torque data step (engine speed)', ...
	'Unit', 'rpm');

%% PLANT_ENGINE_IDLE_GOV_GAINS_INTGL_MPV
PLANT_ENGINE_IDLE_GOV_GAINS_INTGL_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0.017500000074506, 0.017500000074506, 0.017500000074506, 0.017500000074506;
 0.014999999664724, 0.014999999664724, 0.014999999664724, 0.014999999664724;
 0.01799999922514, 0.01799999922514, 0.01799999922514, 0.01799999922514;
 0.027499999850988, 0.027499999850988, 0.027499999850988, 0.027499999850988;
 0.031500000506639, 0.031500000506639, 0.031500000506639, 0.031500000506639;
 0.041999999433756, 0.041999999433756, 0.041999999433756, 0.041999999433756;
 0.052000001072884, 0.052000001072884, 0.052000001072884, 0.052000001072884;
 0.10999999940395, 0.10999999940395, 0.10999999940395, 0.10999999940395;
 0.125, 0.125, 0.125, 0.125], ...
	'Description', 'Idle governor I gains', ...
	'Unit', '1/s', ...
	'Axis_Labels', {'PLANT_ENGINE_IDLE_GOV_GAINS_X_MPV'; 'PLANT_ENGINE_IDLE_GOV_GAINS_Y_MPV'});

%% PLANT_ENGINE_IDLE_GOV_GAINS_PROP_MPV
PLANT_ENGINE_IDLE_GOV_GAINS_PROP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0.25, 0.25, 0.25, 0.25;
 0.25, 0.25, 0.25, 0.25;
 0.2606999874115, 0.2606999874115, 0.2606999874115, 0.2606999874115;
 0.31999999284744, 0.31999999284744, 0.31999999284744, 0.30779999494553;
 0.34409999847412, 0.34409999847412, 0.34409999847412, 0.34409999847412;
 0.31270000338554, 0.31270000338554, 0.31270000338554, 0.31270000338554;
 0.30000001192093, 0.30000001192093, 0.30000001192093, 0.30000001192093;
 0.30000001192093, 0.30000001192093, 0.30000001192093, 0.30000001192093;
 0.25, 0.25, 0.25, 0.25], ...
	'Description', 'Idle governor P gains', ...
	'Unit', '1', ...
	'Axis_Labels', {'PLANT_ENGINE_IDLE_GOV_GAINS_X_MPV'; 'PLANT_ENGINE_IDLE_GOV_GAINS_Y_MPV'});

%% PLANT_ENGINE_IDLE_GOV_GAINS_X_MPV
PLANT_ENGINE_IDLE_GOV_GAINS_X_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [550, 650, 800, 1900], ...
	'Description', 'Idle governor gains x axis (engine speed)', ...
	'Unit', 'rpm');

%% PLANT_ENGINE_IDLE_GOV_GAINS_Y_MPV
PLANT_ENGINE_IDLE_GOV_GAINS_Y_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-100;
 -40;
 -20;
 -5;
 5;
 20;
 40;
 80;
 110], ...
	'Description', 'Idle governor gains y axis (vehicle speed)', ...
	'Unit', 'km/h');

%% PLANT_ENGINE_IDLE_SPEED_NORM_APV
PLANT_ENGINE_IDLE_SPEED_NORM_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 650, ...
	'Description', 'Normal engine idle speed', ...
	'Unit', 'rpm');

%% PLANT_ENGINE_REV_T90_TIMES_ESPD_STEP_MPV
PLANT_ENGINE_REV_T90_TIMES_ESPD_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [1109.1999511719, 1200.4000244141, 1301.6999511719, 1397.6999511719, 1501.6999511719, 1596.9000244141, 1700, 1804.6999511719, 1968.4000244141], ...
	'Description', 'Engine rev T90 times step (engine speed)', ...
	'Unit', 'rpm');

%% PLANT_ENGINE_REV_T90_TIMES_MPV
PLANT_ENGINE_REV_T90_TIMES_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [2.7464001178741, 3.3006999492645, 3.9368999004364, 3.7799999713898, 2.902899980545, 2.5571000576019, 2.076299905777, 1.6353000402451, 1.2867000102997], ...
	'Description', 'Engine rev T90 times', ...
	'Unit', 's', ...
	'Axis_Labels', {'PLANT_ENGINE_REV_T90_TIMES_ESPD_STEP_MPV'});

%% PLANT_ENGINE_T90_TIMES_ESPD_STEP_MPV
PLANT_ENGINE_T90_TIMES_ESPD_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [891.90002441406, 995.29998779297, 1098, 1194.8000488281, 1296.6999511719, 1394.9000244141, 1495.3000488281, 1591.5999755859], ...
	'Description', 'Engine T90 times step (engine speed)', ...
	'Unit', 'rpm');

%% PLANT_ENGINE_T90_TIMES_MPV
PLANT_ENGINE_T90_TIMES_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [2.5571000576019, 2.5541000366211, 2.3355000019073, 2.1066999435425, 1.8320000171661, 1.7560000419617, 1.7516000270844, 1.6802999973297], ...
	'Description', 'Engine T90 times', ...
	'Unit', 's', ...
	'Axis_Labels', {'PLANT_ENGINE_T90_TIMES_ESPD_STEP_MPV'});