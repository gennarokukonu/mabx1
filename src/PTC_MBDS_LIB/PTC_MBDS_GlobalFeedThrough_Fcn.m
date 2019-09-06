function out = PTC_MBDS_GlobalFeedThrough_Fcn

try
   out = PTC_MBDS_ProjectOptions('Query', 'GlobalFeedThrough');
catch
   out = false;
end

end