/**
 ** Wrapper file to support some RTLib function under VEOS
 **/

#ifndef __RTMAPS_VEOS_WRAPPER__
#define __RTMAPS_VEOS_WRAPPER__


#include <VEOS.h>

#define VEOS_INFO_MSG                       0x00
#define VEOS_WARNING_MSG                    0x01  /* Send a message to the simulator indicating a warning message */
#define VEOS_ERROR_MSG                      0x02  /* Send a message to the simulator indicating an error message */
#define VEOS_FATAL_ERROR_MSG                0xff  /* Send a message to the simulator announcing a critical error which will cause the simulation to end right after the current simulation step */
extern unsigned short VEOS_MsgApi_ShowMessageFormat(const short messageType, const char* format, ...);

/*
 * ts_time_read() -> Reads a time stamp in seconds
 */
#define RTMAPS_TIME_READ(S)  (g_VEOS_CurrentSimulationTime)

/*
 * Message outputs
 */
#define RTMAPS_INFO_PRINTF(errCode, ...)                    \
    do {                                                    \
        VEOS_MsgApi_ShowMessageFormat(VEOS_INFO_MSG, __VA_ARGS__);       \
    } while (0 MSVC_C4127_WORKAROUND)

#define RTMAPS_WARNING_PRINTF(errCode, ...)                 \
    do {                                                    \
        VEOS_MsgApi_ShowMessageFormat(VEOS_WARNING_MSG, __VA_ARGS__);    \
    } while (0 MSVC_C4127_WORKAROUND)

#define RTMAPS_ERROR_PRINTF(errCode, ...)                   \
    do {                                                    \
        VEOS_MsgApi_ShowMessageFormat(VEOS_ERROR_MSG, __VA_ARGS__);      \
    } while (0 MSVC_C4127_WORKAROUND)

/*
 * End simulation
 */
#define RTMAPS_EXIT(err)                                                    \
    do {                                                                    \
        VEOS_MsgApi_ShowMessageFormat(VEOS_FATAL_ERROR_MSG, "Application stopped.\n");   \
        return;                                                             \
    } while (0 MSVC_C4127_WORKAROUND);

#endif /* __RTMAPS_VEOS_WRAPPER__ */


