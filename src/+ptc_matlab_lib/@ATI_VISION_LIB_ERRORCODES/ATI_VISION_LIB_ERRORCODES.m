classdef ATI_VISION_LIB_ERRORCODES < handle
%ATI_VISION_LIB_ERRORCODES:
%
%Description: Listing of possible error codes for ati_vision_lib
%
%Syntax: obj = ATI_VISION_LIB_ERRORCODES;
%
%Parameters: None
%
%Return value: Object of class ATI_VISION_LIB_ERRORCODES

    properties (Constant)
        VISION_SUCCESS = 0;
        VISION_UNABLE_TO_LAUNCH = 1;
        VISION_ALREADY_OPEN = 2;
        VISION_COULD_NOT_OPEN_PROJECT = 3;
        VISION_PROJECT_COULD_NOT_GO_ONLINE = 4;
        VISION_PROJECT_COULD_NOT_GO_OFFLINE = 5;
        VISION_COULD_NOT_KILL = 6;
        VISION_COULD_NOT_GET_SOFTWARE_ID = 7;
        VISION_COULD_NOT_SET_VARIABLE = 8;
        VISION_COULD_NOT_GET_VARIABLE = 9;
        VISION_COULD_NOT_GET_RECORDER_FILE_INTERFACE = 10;
        VISION_COULD_NOT_EXPORT_REC_FILE_TO_MAT = 11;
        VISION_REC_FILE_EXPORT_CANCELLED = 12;
        VISION_COULD_NOT_OPEN_RECORDER_FILE = 13;
    end
end