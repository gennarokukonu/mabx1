function InitializeRTMapsInterface
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
    if strcmp(gcs,'rtmapslib')==0
        try
            dsa_RTMapsManager.Update();
        catch
            disp('an error occured in dsa_RTMapsManager.Update, trying to continue')
        end
    end
end

