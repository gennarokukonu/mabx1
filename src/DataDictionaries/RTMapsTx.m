function RTMapsTx() 
% RTMAPSTX initializes a set of bus objects in the MATLAB base workspace 

% Bus object: RTMapsTX 
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
elems(1).Description = sprintf('MABX heartbeat');

elems(2) = Simulink.BusElement;
elems(2).Name = 'EStop';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).SampleTime = -1;
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('0 = E-stop active (pressed)\n1 = E-stop Ok (pulled out)');

elems(3) = Simulink.BusElement;
elems(3).Name = 'EnableSW';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'boolean';
elems(3).SampleTime = -1;
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Enable Autonomous Switch\n0 = OFF\n1 = ON');

elems(4) = Simulink.BusElement;
elems(4).Name = 'EngageReq';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'boolean';
elems(4).SampleTime = -1;
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Engage Request\n0 = OFF\n1 = ON');

elems(5) = Simulink.BusElement;
elems(5).Name = 'LogEventPB';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'boolean';
elems(5).SampleTime = -1;
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('Log Event Push Button\n0 = OFF\n1 = ON');

elems(6) = Simulink.BusElement;
elems(6).Name = 'AutonomousEnabled';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'boolean';
elems(6).SampleTime = -1;
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('Autonomous Mode is Enabled\n0 = False\n1 = True');

elems(7) = Simulink.BusElement;
elems(7).Name = 'MABX_Mode';
elems(7).Dimensions = 1;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'uint8';
elems(7).SampleTime = -1;
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = sprintf('Controller mode for feedback to Supervisor\n0 = No mode\n1 = Running Manual Mode\n2 = Autonomos Mode\n3 = Fault');

elems(8) = Simulink.BusElement;
elems(8).Name = 'BrakeSW';
elems(8).Dimensions = 1;
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'boolean';
elems(8).SampleTime = -1;
elems(8).Complexity = 'real';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = sprintf('Brake Pedal Switch\n0 = Not Pressed\n1 = Pressed');

RTMapsTX = Simulink.Bus;
RTMapsTX.HeaderFile = 'dsa_gen_RTMapsTX.h';
RTMapsTX.Description = '';
RTMapsTX.DataScope = 'Imported';
RTMapsTX.Alignment = -1;
RTMapsTX.Elements = elems;
clear elems;
assignin('base','RTMapsTX', RTMapsTX);

