%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Autogenerated by export_data_dictionary.m
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% CANR_PROPB_REAX_3_13_CHANNEL_APV
CANR_PROPB_REAX_3_13_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_RX_T.RX_CAN_1, ...
	'Description', 'Channel to receive PropB_REAX_3_13');

%% CANR_PROPB_REAX_4_13_CHANNEL_APV
CANR_PROPB_REAX_4_13_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_RX_T.RX_CAN_1, ...
	'Description', 'Channel to receive PropB_REAX_4_13');

%% CANR_PROPB_XPR_1_50_CHANNEL_APV
CANR_PROPB_XPR_1_50_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_RX_T.RX_CAN_1, ...
	'Description', 'Channel to receive PropB_XPR_1_50');

%% PROPB_REAX_1_E4_DESIRED_OPMODE_APV
PROPB_REAX_1_E4_DESIRED_OPMODE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE, ...
	'Description', 'Operating mode selection for PropB_REAX_1_E4');

%% PROPB_REAX_1_E4_DESIRED_POSITION_APV
PROPB_REAX_1_E4_DESIRED_POSITION_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0, ...
	'Description', 'Desired angle position for steering wheel', ...
	'Unit', 'deg', ...
	'Min', -1439.8681640625, ...
	'Max', 1439.8681640625);

%% PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_STEERING_POS_SIGNAL_SOURCE_T.ESTIMATION, ...
	'Description', 'Signal source for desired steering angle position in PropB_REAX_1');

%% TSC1_XXE_E4_CONTROL_PURPOSE_APV
TSC1_XXE_E4_CONTROL_PURPOSE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_TSC1_CONTROL_PURPOSE_T.P1_ACCELERATOR_OPERATOR, ...
	'Description', 'Control purpose selection for TSC1_XXE_E4');

%% TSC1_XXE_E4_ENGINE_OV_CTRL_MODE_APV
TSC1_XXE_E4_ENGINE_OV_CTRL_MODE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_TSC1_ENG_OV_CTRL_MODE_T.TORQUE_CONTROL, ...
	'Description', 'Engine override control mode selection for TSC1_XXE_E4');

%% LONG_SPEED_SRC_SELECTOR_APV
LONG_SPEED_SRC_SELECTOR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_LONG_SPEED_DEMAND_SOURCE_T.GPS_PATH,...
    'Description', 'Selector for longitudnal speed control source');

%% IGNITION_RELAY_OVERRIDE_APV
IGNITION_RELAY_OVERRIDE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_DIGITAL_OUTPUT_OVERRIDE_T.NOT_ACTIVE,...
    'Description', 'Override To Test Ignition Relay Control');

%% INVERTER_RELAY_OVERRIDE_APV
INVERTER_RELAY_OVERRIDE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_DIGITAL_OUTPUT_OVERRIDE_T.NOT_ACTIVE,...
    'Description', 'Override To Test Inverter Relay Control');

%% SENSOR_RELAY_OVERRIDE_APV
SENSOR_RELAY_OVERRIDE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_DIGITAL_OUTPUT_OVERRIDE_T.NOT_ACTIVE,...
    'Description', 'Override To Test Sensor Relay Control');

%% MABX_RELAY_OVERRIDE_APV
MABX_RELAY_OVERRIDE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_DIGITAL_OUTPUT_OVERRIDE_T.NOT_ACTIVE,...
    'Description', 'Override To Test MABX Relay Control');

%% VSPD_TARGET_KPH_APV [Used by KW]
VSPD_TARGET_KPH_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0,...
    'Description', 'Manual speed target in km/h', ...
	'Unit', 'km/h', ...
	'Min', 0, ...
	'Max', 150);

%% DISTANCE_M [Used by KW]
DISTANCE_M = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 200,...
    'Description', 'Distance in meters to achive speed target', ...
	'Unit', 'm', ...
	'Min', 0, ...
	'Max', 1000);

	%% Lateral_Control_P [Used by KW]
Lateral_Control_P = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 1.0,...
    'Description', 'Lateral controller proportional value (P)', ...
    'Min', 0, ...
	'Max', 100);

%% Lateral_Control_I [Used by KW]
Lateral_Control_I = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.25,...
    'Description', 'Lateral controller integral value (I)', ...
	'Min', 0, ...
	'Max', 100);

%% Lateral_Control_D [Used by KW]
Lateral_Control_D = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.05,...
    'Description', 'Lateral Controller Devivative Value', ...
	'Min', 0, ...
	'Max', 100);

%% Rate_Limiter_Rising_Slew [Used by KW]
Rate_Limiter_Rising_Slew = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.1,...
    'Description', 'Lateral Controller Rate Limiter Rising Slew', ...
	'Min', -100, ...
	'Max', 100);

%% Rate_Limiter_Falling_Slew [Used by KW]
Rate_Limiter_Falling_Slew = ptc_matlab_lib.PTC_MBDS_Parameter('Value', -0.1,...
    'Description', 'Lateral Controller Rate Limiter Falling Slew', ...
	'Min', -100, ...
	'Max', 100);	