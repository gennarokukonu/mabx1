/***************************************************************************
*
* FILE:
*   rtmaps_functions.h
*
* DESCRIPTION:
*   RTLib functions for the RTMAPS interface
*
* USAGE:
*
* REMARKS:
*
*
* VERSIONINFO:
*   VERSION:      1.0.0
*   RELEASE DATE: ---
*   AUTHOR(S):    ChristianLi, CaiusC
*                 dSPACE GmbH, Giefersstrasse 26, 33102 Paderborn
*
*   Changes:
*
***************************************************************************/
#ifndef _RTMAPS_FUNCTIONS_H_
#define _RTMAPS_FUNCTIONS_H_

#include "rtmaps_types.h"

/* further includes depending on used platform */
#if (defined _DS1401) || (defined _DS1202) ||(defined _DS1005) || (defined _DS1006) || (defined _DS1007)
    #include <brtenv.h>
    #include <RTKernel.h>
    #include <rtmaps_rti_wrapper.h>
#elif (defined DS_PLATFORM_SMARTHIL)
    #include <dsa_SCALEXIO_qnx_includes.h>
    #include "dsa_RTMaps_Scalexio_SimTime.h"
    #include <rtmaps_rti_wrapper.h>
#elif (defined DS_PLATFORM_OFFSIM) || (defined VEOS_PLATFORM)
    #include <rtmaps_veos_wrapper.h>
#elif (defined MATLAB_MEX_FILE)
    #include "rtmaps_matlab_wrapper.h"
#elif (defined RTMAPS_PLATFORM)
#else
    #error rtmaps_functions.h: No supported platform defined (DS1005 / DS1006 / DS1007 / DS1202 / DS1401 / SCALEXIO / VEOS / MATLAB)
#endif

/*
 * special handling to reduce warnings in MSVC
 * This makes a while(0,0) from a while(0) to prevent warning C4127
 */
#if (defined VEOS_PLATFORM) && (defined __MSC__)
    #define MSVC_C4127_WORKAROUND    ,0
#else
    #define MSVC_C4127_WORKAROUND
#endif

/* define macro to change byte order on a motorola system */
#define SWAPL(value)    ((value & 0xFF000000) >> 24 | (value & 0x00FF0000) >> 8 | (value & 0x0000FF00) << 8 | (value & 0x000000FF) << 24)
#define SWAPW(value)    ((value & 0x0000FF00) >>  8 | (value & 0x000000FF) << 8)

#if defined(_DS1401) || defined(_DS1005) || defined(_DS1007) || defined(_DS1202)
    #define SWAPL_MOTOROLA(value)   SWAPL(value)
    #define SWAPW_MOTOROLA(value)   SWAPW(value)
    #define PLATFORM_IS_BIG_ENDIAN
#else
    #define SWAPL_MOTOROLA(value)   (value)
    #define SWAPW_MOTOROLA(value)   (value)
#endif

/* select platforms which support VCM entries */
#if defined(_DS1401) || defined(_DS1005) || defined (_DS1006) || defined (_DS1007)
    #define PLATFORM_HAS_VCM
#endif

/* suppress some warnings for unused variables on some platforms */
#define RTMAPS_POSSILBE_UNUSED(expr)  do { (void)(expr); } while (0 MSVC_C4127_WORKAROUND)

#endif /* _RTMAPS_FUNCTIONS_H_ */

