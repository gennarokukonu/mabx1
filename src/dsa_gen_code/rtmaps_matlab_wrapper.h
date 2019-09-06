/**
 ** Wrapper file to support some RTLib function under VEOS
 **/

#ifndef __RTMAPS_MATLAB_WRAPPER__
#define __RTMAPS_MATLAB_WRAPPER__

#include <stdio.h>
 
#define MAX_MSG_LEN     (200)

/*
 * ts_time_read() -> Reads a time stamp in seconds
 */
#define RTMAPS_TIME_READ(S)   ssGetT(S)


/*
 * Interrupt locking and restoring
 */
#define RTMAPS_INT_SAVE_AND_DISABLE(msr_state)
#define RTMAPS_INT_RESTORE(msr_state)


/*
 * Message outputs
 */
#define RTMAPS_INFO_PRINTF(errCode, ...)                    \
    do {                                                    \
        ssPrintf(__VA_ARGS__);                              \
    } while (0)

#define RTMAPS_WARNING_PRINTF(errCode, ...)                 \
    do {                                                    \
        ssPrintf(__VA_ARGS__);                              \
    } while (0)

#define RTMAPS_ERROR_PRINTF(errCode, ...)                   \
    do {                                                    \
        ssPrintf(__VA_ARGS__);                              \
    } while (0)

/*
 * End simulation
 */
#define RTMAPS_EXIT(err)                                                    \
    do {                                                                    \
        if (_ssGetErrorStatus(S) == NULL) {                                 \
            /* MATLAB only shows the last error message. So we only set */  \
            /* one if not already done */                                   \
            ssSetErrorStatus(S, "Application stopped.\n");                  \
        }                                                                   \
        return;                                                             \
    } while (0);

#endif /* __RTMAPS_MATLAB_WRAPPER__ */


