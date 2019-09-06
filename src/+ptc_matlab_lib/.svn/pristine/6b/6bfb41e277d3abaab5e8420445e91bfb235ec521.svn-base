classdef ati_vision_lib < handle

    properties (SetAccess=immutable)
        ERRORCODES;
        PROJECT_INTERFACE;
        STRATEGY_INTERFACE;
        RECORDER_INTERFACE;
        DEVICE_PCM;
    end
    
    methods
        function obj = ati_vision_lib            
            % ati_vision_lib: 
            %        
            % Description: Class definition for functions that connect to the ATI Vision 
            % COM interface. 
            %       
            % Syntax: obj = ati_vision_lib;
            %        
            % Parameters: None 
            %        
            % Return value: Object of class ati_vision_lib
            import('ptc_matlab_lib.*');
            obj.ERRORCODES = ATI_VISION_LIB_ERRORCODES;
            obj.PROJECT_INTERFACE = actxserver('Vision.ProjectInterface');
            obj.STRATEGY_INTERFACE = actxserver('Vision.StrategyFileInterface');            
            obj.DEVICE_PCM = obj.PROJECT_INTERFACE.FindDevice('PCM');
        end
        function delete(obj)
            % delete: 
            %        
            % Description: Destructor function for class ati_vision_lib.
            % This function closes the ATI Vision project interface.
            %       
            % Syntax: delete(obj);
            %        
            % Parameters: None 
            %        
            % Return value: None
            delete(obj.PROJECT_INTERFACE);
            delete(obj.STRATEGY_INTERFACE);
        end
    end

end