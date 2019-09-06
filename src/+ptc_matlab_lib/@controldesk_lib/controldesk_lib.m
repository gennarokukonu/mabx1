classdef controldesk_lib < handle

    properties (SetAccess=immutable)
        PROJECT_INTERFACE;
    end
    
    methods
        function obj = controldesk_lib            
            % controldesk_lib: 
            %        
            % Description: Class definition for functions that connect to
            % the ControlDeskNG COM interface. 
            %       
            % Syntax: obj = controldesk_lib;
            %        
            % Parameters: None 
            %        
            % Return value: Object of class controldesk_lib
            import('ptc_matlab_lib.*');
            obj.PROJECT_INTERFACE = actxserver('ControlDeskNG.Application');
        end
        function delete(obj)
            % delete: 
            %        
            % Description: Destructor function for class controldesk_lib.
            % This function closes the ControlDeskNG project interface.
            %       
            % Syntax: delete(obj);
            %        
            % Parameters: None 
            %        
            % Return value: None
            delete(obj.PROJECT_INTERFACE);
        end
    end

end