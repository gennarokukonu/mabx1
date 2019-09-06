#ifndef DSA_GEN_RTMapsTX_H
#define DSA_GEN_RTMapsTX_H

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
    boolean_T EStop;
    boolean_T EnableSW;
    boolean_T EngagePB;
    boolean_T AutonomousEnabled;
    uint8_T MABX_Mode;
} RTMapsTX;
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
    RTMapsTX payload;
} RTMapsTX_Wrapper;
#ifdef DSA_PACK_STRUCTURES
#pragma pack(pop)
#endif

#endif
