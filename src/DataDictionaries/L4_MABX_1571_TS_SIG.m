%% Lateral_Control_Heading_Error [Used by KW]
Lateral_Control_Heading_Error = ptc_matlab_lib.PTC_MBDS_Signal('Description', 'Lateral Control Heading Error', ...
    'Unit', 'rad');

%% Steering_PID_Output [Used by KW]
Steering_PID_Output = ptc_matlab_lib.PTC_MBDS_Signal('Description', 'Steering Controller PID Output', ...
    'Unit', 'rad');

%% SteerCommand [Used by KW]
SteerCommand = ptc_matlab_lib.PTC_MBDS_Signal('Description', 'Steer Command Output', ...
    'Unit', 'rad');

%% SteerCommandDeg [Used by KW]
SteerCommandDeg = ptc_matlab_lib.PTC_MBDS_Signal('Description', 'Steer Command Output Degrees [Sign inverted]', ...
    'Unit', 'deg');

%% DesiredSteeringAngle [Used by KW]
DesiredSteeringAngle = ptc_matlab_lib.PTC_MBDS_Signal('Description', 'Desired Steering Wheel Angle Output', ...
    'Unit', 'deg');