function out = PTC_MBDS_GlobalDisable_Fcn

try
   out = PTC_MBDS_ProjectOptions('Query', 'GlobalDisable');
catch
   out = false;
end

end