#include <stdio.h>
#include <string.h>
#include <unistd.h>     /* sleep() */

#include <sys/mman.h>
#include <sched.h>
#include <dsmsg.h>
#include <dstypes.h>
#include <dsstd.h>
#include <sys/neutrino.h>
#include <inttypes.h>
#include <sys/syspage.h>

#include <pthread.h>

/* socket libraries */
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <ifaddrs.h>

#include <tmwtypes.h>
real64_T ts_time_read(void);

#define RTLIB_EXIT(x) return
// #define RTLIB_INT_SAVE_AND_DISABLE
// #define RTLIB_INT_RESTORE
