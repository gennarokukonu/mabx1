%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Autogenerated by export_data_dictionary.m
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% PROPB_REAX_CHANNEL_APV
PROPB_REAX_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_RX_T.RX_CAN_6, ...
	'Description', 'Channel to receive PropB_REAX');

% %% CANR_PROPB_REAX_3_13_CHANNEL_APV
% CANR_PROPB_REAX_3_13_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_RX_T.RX_CAN_6, ...
% 	'Description', 'Channel to receive PropB_REAX_3_13');
% 
% %% CANR_PROPB_REAX_4_13_CHANNEL_APV
% CANR_PROPB_REAX_4_13_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_RX_T.RX_CAN_6, ...
% 	'Description', 'Channel to receive PropB_REAX_4_13');

%% CANR_PROPB_XPR_1_50_CHANNEL_APV
CANR_PROPB_XPR_1_50_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_RX_T.RX_CAN_3, ...
	'Description', 'Channel to receive PropB_XPR_1_50');

%% PROPB_REAX_1_E4_DESIRED_OPMODE_APV
PROPB_REAX_1_E4_DESIRED_OPMODE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE, ...
	'Description', 'Operating mode selection for PropB_REAX_1_E4');

%% PROPB_REAX_1_E4_DESIRED_POSITION_APV
PROPB_REAX_1_E4_DESIRED_POSITION_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0, ...
	'Description', 'Desired angle position for steering wheel', ...
	'Unit', 'deg', ...
	'Min', -10, ...
	'Max', 10);

%% CANT_PROPB_XPR_FC_CHANNEL_APV
CANT_PROPB_XPR_FC_CHANNEL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_CAN_TX_T.TX_CAN_3, ...
	'Description', 'Channel to receive PropB_XPR_FC');

%% PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_STEERING_POS_SIGNAL_SOURCE_T.ESTIMATION, ...
	'Description', 'Signal source for desired steering angle position in PropB_REAX_1');


%% STEER_OVERIDE_VAL_APV
% STEER_OVERIDE_VAL_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0, ...
% 	'Description', 'Manual speed target in km/h', ...
% 	'Unit', 'rad', ...
% 	'Min', -0.35, ...
% 	'Max', 0.35);


%% LONG_SPEED_SRC_SELECTOR_APV
LONG_SPEED_SRC_SELECTOR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_LONG_SPEED_DEMAND_SOURCE_T.RW_WAYPOINTS, ...
    'Description', 'Selector for longitudnal speed control source');

%% AUTONOMOUS_MODE_SELECTOR_APV
AUTONOMOUS_MODE_SELECTOR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_AUTONOMOUS_MODE_T.AUTO, ...
    'Description', 'Enable autonomous mode');

%% VSPD_TARGET_KPH_APV
VSPD_TARGET_KPH_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0, ...
    'Description', 'Manual speed target in km/h', ...
	'Unit', 'km/h', ...
	'Min', 0, ...
	'Max', 55);

%% STEER_SRC_SELECTOR_APV
STEER_SRC_SELECTOR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_LONG_SPEED_DEMAND_SOURCE_T.RW_WAYPOINTS, ...
    'Description', 'Selector for longitudnal speed control source');

%% DISTANCE_M
DISTANCE_M = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 200, ...
    'Description', 'Distance in meters to achive speed target', ...
	'Unit', 'm', ...
	'Min', 0, ...
	'Max', 1000);

%% Lateral_Control_P
Lateral_Control_P = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.3, ...
    'Description', 'Lateral controller proportional value (P)', ...
    'Min', 0, ...
	'Max', 100);

%% Lateral_Control_I
Lateral_Control_I = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.0, ...
    'Description', 'Lateral controller intergral value (I)', ...
    'Min', 0, ...
	'Max', 100);

%% Lateral_Control_D
Lateral_Control_D = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.25, ...
    'Description', 'Lateral Controller Devivative Value', ...
	'Min', 0, ...
	'Max', 100);

%% Yaw_Rate_FF_Gain
Yaw_Rate_FF_Gain  = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.15, ...
    'Description', 'Yaw rate feed forward gain', ...
    'Min', 0, ...
    'Max', 10);

%% Curvature_FF_Gain
Curvature_FF_Gain  = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 5.7, ...
    'Description', 'Curvature feed forward gain', ...
    'Min', 0, ...
    'Max', 10);

%% UndersteerCorection
UndersteerCorection  = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 1.5, ...
    'Description', 'The Haris Fudge Factor', ...
    'Min', 0, ...
    'Max', 2.5);

%% Lateral_Control_Error_Limit
Lateral_Control_Error_Limit  = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.1, ...
    'Description', 'Lateral Control Error Saturation Limit (rad)', ...
    'Min', 0, ...
    'Max', 1);

%% Lateral_Control_YawRate_Limit
Lateral_Control_YawRate_Limit  = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 1, ...
    'Description', 'Lateral Control Yaw Rate Saturation Limit (rad/s)', ...
    'Min', 0.1, ...
    'Max', 10);

%% Lateral_Control_Curvature_Limit
Lateral_Control_Curvature_Limit  = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.5, ...
    'Description', 'Lateral Control Curvature Saturation Limit (rad)', ...
    'Min', 0.1, ...
    'Max', 1);

%% Lateral_Control_Pole [Used by KW]
Lateral_Control_Pole = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.98,...
    'Description', 'Lateral Compensator Pole Value', ...
	'Min', 0, ...
	'Max', 1); 

%% Lateral_Control_Zero [Used by KW]
Lateral_Control_Zero = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.99,...
    'Description', 'Lateral Compensator Zero Value', ...
	'Min', 0, ...
	'Max', 1);

%% RATE_LIMITER_ENABLE_APV
RATE_LIMITER_ENABLE_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_SWITCH_T.ON, ...
    'Description', 'Ghost mode selector');

