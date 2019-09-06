function out = has_param(sys, param)
%HAS_PARAM Check to see if a system has a specified parameter (or
%parameters).
%
%   has_param(sys, 'param1'): Checks to see if system sys has
%   parameter param1 that can be accessed using get_param.
%
%   See also: get_param, set_param

try
    get_param(sys, param);
    out = true;
catch %#ok<CTCH>
    out = false;
end

end