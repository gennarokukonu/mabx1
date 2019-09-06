classdef PTC_MBDS_KIBES_SymbolMap < handle
   %PTC_MBDS_KIBES_SymbolMap
   
   properties
      KIBES_Symbol_Names;
      KIBES_Names;
   end
   
   methods
      function obj = PTC_MBDS_KIBES_SymbolMap(varargin)
         if nargin == 0
            obj.KIBES_Symbol_Names = cell(0, 1);
            obj.KIBES_Names = cell(0, 1);
         elseif nargin == 1
            if isa(varargin{1}, 'ptc_matlab_lib.PTC_MBDS_KIBES_SymbolMap')
               obj = varargin{1};
            end
         else
            pairs = {'KIBES_Symbol_Names', cell(0, 1), ...
               'KIBES_Names', cell(0, 1)};
            ARGS = ptc_matlab_lib.parseargs(varargin, pairs);
            obj.KIBES_Symbol_Names = ARGS.KIBES_Symbol_Names(:);
            obj.KIBES_Names = ARGS.KIBES_Names(:);
         end
      end
      
      function set(obj, varargin)
         pairs = {'KIBES_Symbol_Names', cell(0, 1), ...
            'KIBES_Names', cell(0, 1)};
         ARGS = ptc_matlab_lib.parseargs(varargin, pairs);
         
         assert(iscellstr(ARGS.KIBES_Symbol_Names) && iscellstr(ARGS.KIBES_Names) && numel(ARGS.KIBES_Symbol_Names) == numel(ARGS.KIBES_Names), [mfilename ':' ptc_matlab_lib.thisfuncname ':InvalidInput'], 'Invalid inputs used. Only equal sized cell arrays of strings are valid');
         obj.KIBES_Symbol_Names = ARGS.KIBES_Symbol_Names(:);
         obj.KIBES_Names = ARGS.KIBES_Names(:);
      end
      
      function out = get_KIBES_Names(obj, input_KIBES_Symbol_Name)
         idx = strcmp(input_KIBES_Symbol_Name, obj.KIBES_Symbol_Names);
         if any(idx)
            out = obj.KIBES_Names(idx);
         else
            out = cell(0, 1);
         end
      end
      
      function out = get_KIBES_Symbol_Names(obj, input_KIBES_Name)
         idx = strcmp(input_KIBES_Name, obj.KIBES_Names);
         if any(idx)
            out = obj.KIBES_Symbol_Names(idx);
         else
            out = cell(0, 1);
         end
      end
      
      function out = copy(obj)
          out = ptc_matlab_lib.PTC_MBDS_KIBES_SymbolMap('KIBES_Symbol_Names', obj.KIBES_Symbol_Names, 'KIBES_Names', obj.KIBES_Names);
      end
   end
   
end

