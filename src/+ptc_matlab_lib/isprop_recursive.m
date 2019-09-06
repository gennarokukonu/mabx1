function out = isprop_recursive(obj, propnames)
%ISPROP_RECURSIVE Similar to isprop, but looks into multiple levels of
%the object.
%
%   SYNTAX:
%
%   isprop_recursive(obj, property): returns true if 'property' is a property of
%   object obj.
%
%   Example:
%   s = Simulink.Parameter;
%   out = isprop_recursive(s, {'CoderInfo.StorageClass', 'CoderInfo'}) returns
%   [1 1].
%
%   Functionally, this function is identical to isfield_recursive

out = ptc_matlab_lib.isfield_recursive(obj, propnames);

end