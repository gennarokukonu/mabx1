#ifndef DSA_GEN_RTMapsRx_Pos_H
#define DSA_GEN_RTMapsRx_Pos_H

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
    int32_T SequencePos;
    double Position_m[3];
    double Orientation_rad[4];
    double Heading_rad;
} RTMapsRx_Pos;
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
    RTMapsRx_Pos payload;
} RTMapsRx_Pos_Wrapper;
#ifdef DSA_PACK_STRUCTURES
#pragma pack(pop)
#endif

#endif
