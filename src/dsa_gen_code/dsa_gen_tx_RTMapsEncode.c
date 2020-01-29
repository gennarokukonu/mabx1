/**************************************************************************
*
* FILE:
*   dsa_gen_tx_RTMapsEncode.c
*
* DESCRIPTION:
*   Generated SFunction source for RTMapsEncode
*
**************************************************************************/

/*-----------------------------------------------------------------------*/
/* INCLUDES                                                              */
/*-----------------------------------------------------------------------*/
#include "rtmaps_functions.h"
#include "dsa_gen_tx_RTMapsEncode.h"
#include "dsa_byteorder_macros.h"

/*-----------------------------------------------------------------------*/
/* DEFINES                                                               */
/*-----------------------------------------------------------------------*/
#if (defined _DS1401)
    #define DSA_USE_RTC       (0)
#else
    #define DSA_USE_RTC       0
#endif
#define DSA_STRUCTURE_SIZE    (8)
#define DSA_BUS_SIZE          (DSA_STRUCTURE_SIZE + DSA_HEADER_PAYLOAD_OFFSET)

/*-----------------------------------------------------------------------*/
/* VARIABLES                                                             */
/*-----------------------------------------------------------------------*/
static uint8_T counter = 0;
static const int32_T hashcode = 1691094422;
#if (DSA_USE_RTC == 1)
    // startup timestamp provided by the RTC
    static uint64_T timestamp_offset;
#endif

/*-----------------------------------------------------------------------*/
/* STATIC FUNCTIONS                                                      */
/*-----------------------------------------------------------------------*/
/*-----------------------------------------------------------------------
 * Function:  PrependHeaderInformation
 * --------------------
 * Adds protocol header data to the result buffer
 *-----------------------------------------------------------------------*/
static void PrependHeaderInformation(uint8_T* result)
{
    uint64_T timestamp;

// calculate timestamp in us
#if (defined _DS1401) && (DSA_USE_RTC == 1)
    timestamp = timestamp_offset + rtk_dsts_time_to_simtime_convert(ts_time_read())*1e6;
#elif (defined _DS1401) || (defined _DS1005) || (defined _DS1006) || (defined _DS1007) || (defined _DS1202)
    timestamp = rtk_dsts_time_to_simtime_convert(ts_time_read())*1e6;
#elif (defined DS_PLATFORM_SMARTHIL)
    timestamp = dsa_rtmaps_scalexio_simtime();
#elif (defined DS_PLATFORM_OFFSIM) || (defined VEOS_PLATFORM)
    timestamp = g_VEOS_CurrentSimulationTime * 1e6;
#endif

    // Copy hashcode and counter into the result array
    *((int32_T*)(result + DSA_HEADER_CHECKSUM_OFFSET)) = SWAPL_MOTOROLA(hashcode);
    *((uint8_T*)(result + DSA_HEADER_COUNTER_OFFSET))  = counter;

#ifdef PLATFORM_IS_BIG_ENDIAN
    // Copy and Swap 64bit timestamp
    ((uint32_T*)(result + DSA_HEADER_TIMESTAMP_OFFSET))[1] = SWAPL(((uint32_T*) &timestamp)[0]);
    ((uint32_T*)(result + DSA_HEADER_TIMESTAMP_OFFSET))[0] = SWAPL(((uint32_T*) &timestamp)[1]);
#else
    *((uint64_T*)(result + DSA_HEADER_TIMESTAMP_OFFSET)) = timestamp;
#endif

    // Increment the counter
    counter += 1;
}

/*-----------------------------------------------------------------------*/
/* CALLBACK FUNCTIONS                                                    */
/*-----------------------------------------------------------------------*/

/*-----------------------------------------------------------------------
 * Function:  Init_Tx_RTMapsEncode
 * --------------------
 * Initializes variables
 *-----------------------------------------------------------------------*/
void Init_Tx_RTMapsEncode()
{
    counter = 0;
#if (DSA_USE_RTC == 1)
    real_time_clock rtc;
    struct tm rtcTm;
    double current_time;

    current_time = rtk_dsts_time_to_simtime_convert(ts_time_read());
    ds1401_read_rtc(&rtc);
    /* calculate timestamp offset */
    rtcTm.tm_year = rtc.year + 100;
    rtcTm.tm_mon = rtc.month - 1;
    rtcTm.tm_mday = rtc.date;
    rtcTm.tm_hour = rtc.hour;
    rtcTm.tm_min = rtc.min;
    rtcTm.tm_sec = rtc.sec;

    timestamp_offset = (mktime(&rtcTm) + rtc.sec_100/100.0 - current_time)*1e6;
#endif
}

/*-----------------------------------------------------------------------
 * Function:  Update_Tx_RTMapsEncode
 * --------------------
 * Converts a RTMapsTX* into a uint8_T array.
 *
 *  in:     Incoming struct
 *
 *  result: Converted array
 *
 *  size:   Number of bytes within the converted array
 *-----------------------------------------------------------------------*/
void Update_Tx_RTMapsEncode(RTMapsTX* in, uint8_T* result, uint32_T* size)
{
    uint8_T* result_ptr = result + DSA_HEADER_PAYLOAD_OFFSET;
    /* Add Protocol Information to buffer */
    PrependHeaderInformation(result);

    /* Copy payload */
    *result_ptr = *((uint8_T*)&(in->Heartbeat));
    result_ptr += 1;

    *result_ptr = *((uint8_T*)&(in->EStop));
    result_ptr += 1;

    *result_ptr = *((uint8_T*)&(in->EnableSW));
    result_ptr += 1;

    *result_ptr = *((uint8_T*)&(in->EngageReq));
    result_ptr += 1;

    *result_ptr = *((uint8_T*)&(in->LogEventPB));
    result_ptr += 1;

    *result_ptr = *((uint8_T*)&(in->AutonomousEnabled));
    result_ptr += 1;

    *result_ptr = *((uint8_T*)&(in->MABX_Mode));
    result_ptr += 1;

    *result_ptr = *((uint8_T*)&(in->BrakeSW));
    result_ptr += 1;


    /* Set the buffer size to the total bus size */
    *size = DSA_BUS_SIZE;
}

