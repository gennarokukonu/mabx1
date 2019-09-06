BRK_GOV_FF_DECEL_RATE_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0, 0;
 -0.39, -0.12;
 -1.76, -0.53;
 -3.13, -0.94;
 -4.5, -1.35;
 -5.87, -1.76;
 -7.24, -2.17;
 -8.61, -2.58;
 -9.98, -2.99;
 -11.35, -3.41;
 -12.72, -3.82;
 -14.09, -4.23;
 -15.46, -4.64;
 -16.83, -5.05;
 -18.2, -5.46;
 -19.57, -5.87], ...
 'Unit', 'm/s^2', ...
 'Description', 'Brake governor deceleration rate', ...
 'Axis_Labels', {'BRK_GOV_FF_MASS_STEP_MPV', 'BRK_GOV_FF_PRESS_KPA_STEP_MPV'});

BRK_GOV_FF_PRESS_KPA_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [0;
 69;
 138;
 207;
 276;
 345;
 414;
 483;
 552;
 621;
 689;
 758;
 827;
 896;
 965;
 1034], ...
 'Unit', 'kPa', ...
 'Description', 'Pressure axis (Y axis)');

BRK_GOV_FF_MASS_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [9035;
 36287], ...
 'Unit', 'kg', ...
 'Description', 'Mass axis (X axis)');

BRK_GOV_FF_PRESS_KPA_DATA_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [1034, 2585;
 965, 2413;
 896, 2240;
 827, 2068;
 758, 1895;
 689, 1723;
 621, 1553;
 552, 1380;
 483, 1208;
 414, 1035;
 345, 863;
 276, 690;
 207, 518;
 138, 345;
 69, 173;
 0, 0], ...
 'Unit', 'kPa', ...
 'Description', 'Brake governor pressure map', ...
 'Axis_Labels', {'BRK_GOV_FF_MASS_STEP_MPV', 'BRK_GOV_FF_DECEL_RATE_STEP_MPV'});

BRK_GOV_FF_DECEL_RATE_STEP_MPV = ptc_matlab_lib.PTC_MBDS_Parameter('Value', [-19.57;
 -18.2;
 -16.83;
 -15.46;
 -14.09;
 -12.72;
 -11.35;
 -9.98;
 -8.61;
 -7.24;
 -5.87;
 -4.5;
 -3.13;
 -1.76;
 -0.39;
 0], ...
 'Unit', 'm/s^2', ...
 'Description', 'Brake deceleration rate axis (Y axis)');