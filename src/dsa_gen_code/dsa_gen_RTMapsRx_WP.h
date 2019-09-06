#ifndef DSA_GEN_RTMapsRx_WP_H
#define DSA_GEN_RTMapsRx_WP_H

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
    int32_T SequenceWp;
    single StepTime_s;
    int32_T num_waypoints;
    int32_T Waypoints_x_mm[100];
    int32_T Waypoints_y_mm[100];
    int32_T Waypoints_v_mmps[100];
} RTMapsRx_WP;
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
    RTMapsRx_WP payload;
} RTMapsRx_WP_Wrapper;
#ifdef DSA_PACK_STRUCTURES
#pragma pack(pop)
#endif

#endif
