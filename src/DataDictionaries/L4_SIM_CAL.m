%% LONG_SPEED_SRC_SELECTOR_APV
LONG_SPEED_SRC_SELECTOR_APV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', ENUM_LONG_SPEED_DEMAND_SOURCE_T.GPS_PATH,...
    'Description', 'Selector for longitudnal speed control source');

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

%% Lateral_Control_Pole [Used by KW]
Lateral_Control_Pole = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.05,...
    'Description', 'Lateral Compensator Pole Value', ...
	'Min', 0, ...
	'Max', 1); 

%% Lateral_Control_Zero [Used by KW]
Lateral_Control_Zero = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 0.05,...
    'Description', 'Lateral Compensator Zero Value', ...
	'Min', 0, ...
	'Max', 1); 

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

%% Curvature_FF_Gain [Used by KW]
Curvature_FF_Gain = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 5.6,...
    'Description', 'Feed forward gain for path curvature', ...
	'Min', 3.5, ...
	'Max', 7.5);

%% Cf [Used by SIM]
Cf = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 120000.0,...
    'Description', 'Cf', ...
	'Unit', '', ...
	'Min', 0, ...
	'Max', 120000);

%% Cr [Used by SIM]
Cr = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 240000.0,...
    'Description', 'Cr', ...
	'Unit', '', ...
	'Min', 0, ...
	'Max', 240000);
	
%% Iz [Used by SIM]
Iz = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 10000.0,...
    'Description', 'Moment of Inertia about the Z axis', ...
	'Unit', 'kg-m^2', ...
	'Min', 0, ...
	'Max', 10000);

%% lf [Used by SIM]
lf = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 2.5,...
    'Description', 'lf', ...
	'Unit', '', ...
	'Min', 0, ...
	'Max', 100);

%% lr [Used by SIM]
lr = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 3.5,...
    'Description', 'lr', ...
	'Unit', '', ...
	'Min', 0, ...
	'Max', 100);

%% heading_0 [Used by SIM]
heading_0 = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 5.2,...
    'Description', 'heading_0', ...
	'Unit', '', ...
	'Min', 0, ...
	'Max', 100);

%% Vx_0 [Used by SIM]
Vx_0 = ptc_matlab_lib.PTC_MBDS_Parameter('Value', 1.0,...
    'Description', 'Vx_0', ...
	'Unit', 'm/s', ...
	'Min', 0, ...
	'Max', 100);

%% position_0 [Used by SIM]
position_0 = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0 0],...
    'Description', 'position_0', ...
	'Unit', 'm', ...
	'Min', 0, ...
	'Max', 100);