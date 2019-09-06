/**************************************************************************
*
* FILE:
*   dsa_gen_rx_RTMapsDecode.c
*
* DESCRIPTION:
*   Generated RX SFunction source for RTMapsDecode
*
**************************************************************************/

/*-----------------------------------------------------------------------*/
/* INCLUDES                                                              */
/*-----------------------------------------------------------------------*/
#include "rtmaps_functions.h"
#include "dsa_gen_rx_RTMapsDecode.h"
#include "dsa_byteorder_macros.h"

/*-----------------------------------------------------------------------*/
/* DEFINES                                                               */
/*-----------------------------------------------------------------------*/
#define DSA_STRUCTURE_SIZE                  (75)
#define DSA_BUS_SIZE                        (DSA_STRUCTURE_SIZE + DSA_HEADER_PAYLOAD_OFFSET)

/*-----------------------------------------------------------------------*/
/* VARIABLES                                                             */
/*-----------------------------------------------------------------------*/
static       uint8_T  counter             = 0;
static const int32_T hashcode = 550683566;

/*-----------------------------------------------------------------------*/
/* FUNCTIONS                                                             */
/*-----------------------------------------------------------------------*/

/*-----------------------------------------------------------------------
 * Function:  CheckProtocolHeader
 * --------------------
 * Converts a uint8_T array into a RTMapsRX* object.
 *
 *  in:         Incoming array
 *
 *  timeOutput: Current simulation time
 *
 *-----------------------------------------------------------------------*/
static void CheckProtocolHeader(uint8_T* in, double* timeOutput)
{
    int32_T  crc;
    uint8_T  receivedCounter;
    uint64_T timestamp;

    /* Retrieve CRC from the incoming message */
    crc = SWAPL_MOTOROLA (*((int32_T*) (in + DSA_HEADER_CHECKSUM_OFFSET)));
    if(crc != hashcode)
    {
        RTMAPS_ERROR_PRINTF(0, "Received Hashcode %i does not match expected Hashcode %i. Do you use the same XML file in Simulink and RTMaps?\n", crc, hashcode);
    }

    /* Retrieve Counter from the incoming message */
    receivedCounter = *(in + DSA_HEADER_COUNTER_OFFSET);
    if(receivedCounter != counter)
    {
        RTMAPS_WARNING_PRINTF(0, "Received counter %i does not match the expected counter %i. A packet may have disappeared.\n", receivedCounter, counter);
    }

    /* Set the counter to the next expected counter value */
    counter = receivedCounter + 1;

    /* Retrieve timestamp from the incoming message */
#ifdef PLATFORM_IS_BIG_ENDIAN
    ((uint32_T*) &timestamp)[0] = SWAPL_MOTOROLA(*((uint32_T*) (in + DSA_HEADER_TIMESTAMP_OFFSET + 4)));
    ((uint32_T*) &timestamp)[1] = SWAPL_MOTOROLA(*((uint32_T*) (in + DSA_HEADER_TIMESTAMP_OFFSET)));
#else
    timestamp = *((uint64_T*) (in + DSA_HEADER_TIMESTAMP_OFFSET));
#endif

    *timeOutput = timestamp * 1.0e-6;
}

/*-----------------------------------------------------------------------
 * Function:  Init_Rx_RTMapsDecode()
 * --------------------
 * Initializes variables
 *-----------------------------------------------------------------------*/
void Init_Rx_RTMapsDecode()
{
    counter = 0;
}

/*-----------------------------------------------------------------------
 * Function:  Update_Rx_RTMapsDecode
 * --------------------
 * Converts a uint8_T array into a RTMapsRX* object.
 *
 *  in:     Incoming array
 *
 *  size:   Number of bytes within the incoming array
 *
 *  result: Converted RTMapsRX*
 *
 *  counterOutput: Outgoing counter
 *
 *  timeOutput: Outgoing time
 *
 *-----------------------------------------------------------------------*/
void Update_Rx_RTMapsDecode(uint8_T* in, uint32_T size, uint32_T messageReceived, RTMapsRX* result, int32_T* counterOutput, double* timeOutput)
{
    if(messageReceived != 0)
    {
        uint8_T* pos;

        /* The size of the received data packet has to be equal to the target BusSize + ProtocolSize */
        if(size != DSA_BUS_SIZE) {
            RTMAPS_ERROR_PRINTF(0, "Number of received bytes %u do not match the expected byte size %u. Resize the buffers in your model.", size, DSA_BUS_SIZE);
            *timeOutput = 0.0;
            *counterOutput = 0;
            return;
        }

        CheckProtocolHeader(in, timeOutput);

        /* Skip header information */
        pos = (uint8_T*) (in + DSA_HEADER_PAYLOAD_OFFSET);

        /* Gather elements from received packet and insert them into the output struct */
        result->Heartbeat = *(pos);
        pos += 1;

        result->RTMapsOk = *(pos);
        pos += 1;

        result->SupervisorMode = *(pos);
        pos += 1;

        DSA_COPY_TOFROM_LE_64( &(result->CurrentAzimuth), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->TargetAzimuth), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->CurrentVelocity), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->TargetVelocity), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->Curvature), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->CrosstrackError), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->GPS_X), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->GPS_Y), pos);
        pos += 8;

        DSA_COPY_TOFROM_LE_64( &(result->GPS_Time), pos);
        pos += 8;


    }

    *counterOutput = counter;
}
