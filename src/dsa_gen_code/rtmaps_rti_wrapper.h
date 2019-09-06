/**
 ** Wrapper file to support some RTLib function under VEOS
 **/

#ifndef __RTMAPS_RTI_WRAPPER__
#define __RTMAPS_RTI_WRAPPER__

#include <time.h>

/*
 * ts_time_read() -> Reads a time stamp in seconds
 */
#define RTMAPS_TIME_READ(S)    ts_time_read()

/*
 * Message outputs
 */
#define RTMAPS_INFO_PRINTF(errCode, ...)                        \
    do {                                                        \
        msg_info_printf(MSG_SM_RTLIB, errCode, __VA_ARGS__);    \
    } while (0)

#define RTMAPS_WARNING_PRINTF(errCode, ...)                     \
    do {                                                        \
        msg_warning_printf(MSG_SM_RTLIB, errCode, __VA_ARGS__); \
    } while (0)

#define RTMAPS_ERROR_PRINTF(errCode, ...)                       \
    do {                                                        \
        msg_error_printf(MSG_SM_RTLIB, errCode, __VA_ARGS__);   \
    } while (0)

/*
 * End simulation
 */
#define RTMAPS_EXIT(err)                                        \
    do {                                                        \
        RTLIB_EXIT(1);                                          \
    } while (0);

#endif /* __RTMAPS_RTI_WRAPPER__ */

