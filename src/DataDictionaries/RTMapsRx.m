function RTMapsRx() 
% RTMAPSRX initializes a set of bus objects in the MATLAB base workspace 

% Bus object: RTMapsRX 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'Heartbeat';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).SampleTime = -1;
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Heartbeat from RTMaps');

elems(2) = Simulink.BusElement;
elems(2).Name = 'RTMapsOk';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).SampleTime = -1;
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('RTMaps runing with no faults');

elems(3) = Simulink.BusElement;
elems(3).Name = 'SupervisorMode';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'uint8';
elems(3).SampleTime = -1;
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('0 = Manual\n1 = Initializing\n2 = Autonomous\n3 = Failure\n4 = Ready');

elems(4) = Simulink.BusElement;
elems(4).Name = 'CurrentAzimuth';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'double';
elems(4).SampleTime = -1;
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = sprintf('rad');
elems(4).Description = sprintf('Current vehicle azimuth');

elems(5) = Simulink.BusElement;
elems(5).Name = 'TargetAzimuth';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'double';
elems(5).SampleTime = -1;
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = sprintf('rad');
elems(5).Description = sprintf('Target azimuth to selected waypoint');

elems(6) = Simulink.BusElement;
elems(6).Name = 'CurrentVelocity';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'double';
elems(6).SampleTime = -1;
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = sprintf('m/s');
elems(6).Description = sprintf('Current velocity of vehicle');

elems(7) = Simulink.BusElement;
elems(7).Name = 'TargetVelocity';
elems(7).Dimensions = 1;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'double';
elems(7).SampleTime = -1;
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = sprintf('m/s');
elems(7).Description = sprintf('Target velocity of selected waypoint');

elems(8) = Simulink.BusElement;
elems(8).Name = 'Curvature';
elems(8).Dimensions = 1;
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'double';
elems(8).SampleTime = -1;
elems(8).Complexity = 'real';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = '';

elems(9) = Simulink.BusElement;
elems(9).Name = 'CrosstrackError';
elems(9).Dimensions = 1;
elems(9).DimensionsMode = 'Fixed';
elems(9).DataType = 'double';
elems(9).SampleTime = -1;
elems(9).Complexity = 'real';
elems(9).Min = [];
elems(9).Max = [];
elems(9).DocUnits = '';
elems(9).Description = '';

elems(10) = Simulink.BusElement;
elems(10).Name = 'GPS_X';
elems(10).Dimensions = 1;
elems(10).DimensionsMode = 'Fixed';
elems(10).DataType = 'double';
elems(10).SampleTime = -1;
elems(10).Complexity = 'real';
elems(10).Min = [];
elems(10).Max = [];
elems(10).DocUnits = '';
elems(10).Description = sprintf('GPS Position X');

elems(11) = Simulink.BusElement;
elems(11).Name = 'GPS_Y';
elems(11).Dimensions = 1;
elems(11).DimensionsMode = 'Fixed';
elems(11).DataType = 'double';
elems(11).SampleTime = -1;
elems(11).Complexity = 'real';
elems(11).Min = [];
elems(11).Max = [];
elems(11).DocUnits = '';
elems(11).Description = sprintf('GPS Position Y');

elems(12) = Simulink.BusElement;
elems(12).Name = 'GPS_Time';
elems(12).Dimensions = 1;
elems(12).DimensionsMode = 'Fixed';
elems(12).DataType = 'double';
elems(12).SampleTime = -1;
elems(12).Complexity = 'real';
elems(12).Min = [];
elems(12).Max = [];
elems(12).DocUnits = '';
elems(12).Description = '';

RTMapsRX = Simulink.Bus;
RTMapsRX.HeaderFile = 'dsa_gen_RTMapsRX.h';
RTMapsRX.Description = '';
RTMapsRX.DataScope = 'Imported';
RTMapsRX.Alignment = -1;
RTMapsRX.Elements = elems;
clear elems;
assignin('base','RTMapsRX', RTMapsRX);

