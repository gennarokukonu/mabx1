function varargout = get_com_port_list(varargin)
%GET_COM_PORT_LIST: Returns a cell array containing the list of COM ports.

import('ptc_matlab_lib.*');

if ~ispc
    error([mfilename ':' thisfuncname ':NotWin'], 'This function can be used only on Windows.');
end

pairs = {'DEVCON_PATH', fullfile(mfiledir, ['+' computer('arch')], 'devcon.exe')};
parseargs(varargin, pairs);

[status, result] = system(['"' DEVCON_PATH '" listclass ports']); %#ok<ASGLU>
number_of_com_ports = length(regexp(result, 'COM\d+'));
com_port_list = cell(number_of_com_ports, 1);
ctr_portnum = 1;
ctr = 1;
while ctr <= number_of_com_ports
    if ~isempty(strfind(result, ['COM' num2str(ctr_portnum)]))
        com_port_list{ctr} = ['COM' num2str(ctr_portnum)];
        ctr = ctr + 1;
    end
    ctr_portnum = ctr_portnum + 1;
end

varargout{1} = com_port_list;

end