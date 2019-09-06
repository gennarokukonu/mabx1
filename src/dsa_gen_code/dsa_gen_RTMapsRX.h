#ifndef DSA_GEN_RTMapsRX_H
#define DSA_GEN_RTMapsRX_H

/* ------------------------------------------ */
/* - Includes                               - */
/* ------------------------------------------ */
#include "rtmaps_functions.h"

/* ------------------------------------------ */
/* - Defines                                - */
/* ------------------------------------------ */
/* #define DSA_PACK_STRUCTURES */

/* ------------------------------------------ */
/* - Struct                                 - */
/* ------------------------------------------ */
#ifdef DSA_PACK_STRUCTURES
#pragma pack(push, 1)
#endif
typedef struct {
    boolean_T Heartbeat;
    boolean_T RTMapsOk;
    uint8_T SupervisorMode;
    double CurrentAzimuth;
    double TargetAzimuth;
    double CurrentVelocity;
    double TargetVelocity;
    double Curvature;
    double CrosstrackError;
    double GPS_X;
    double GPS_Y;
    double GPS_Time;
} RTMapsRX;
#ifdef DSA_PACK_STRUCTURES
#pragma pack(pop)
#endif

#ifdef DSA_PACK_STRUCTURES
#pragma pack(push, 1)
#endif
typedef struct {
    int32_T   crc;
    uint8_T   counter;
    uint8_T   padding1;
    uint16_T  padding2;
    uint64_T  timestamp;
    RTMapsRX payload;
} RTMapsRX_Wrapper;
#ifdef DSA_PACK_STRUCTURES
#pragma pack(pop)
#endif

#endif
