/*
 * L4_MABX_private.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.848
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Thu Nov  7 14:50:03 2019
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_L4_MABX_private_h_
#define RTW_HEADER_L4_MABX_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "L4_MABX.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C1;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M1_C1[13];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C2;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M1_C2[13];

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M1_NUMMSG               8

extern can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M2_C1;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M2_C1[13];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M2_C2;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M2_C2[13];

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M2_NUMMSG               8

extern can_tp1_canMsg* can_type1_msg_M2[CANTP1_M2_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M3_C1;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M3_C1[13];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M3_C2;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M3_C2[13];

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M3_NUMMSG               10

extern can_tp1_canMsg* can_type1_msg_M3[CANTP1_M3_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* Declaration of user indices (CAN_Type1_M1) */
#define CANTP1_M1_C1_TX_XTD_0X18FF04FC 0
#define TX_C1_XTD_0X18FF04FC           0
#undef TX_C1_XTD_0X18FF04FC
#define CANTP1_M1_C1_TX_XTD_0X18F0018B 1
#define TX_C1_XTD_0X18F0018B           1
#undef TX_C1_XTD_0X18F0018B
#define CANTP1_M1_C1_TX_XTD_0XC010305  2
#define TX_C1_XTD_0XC010305            2
#undef TX_C1_XTD_0XC010305
#define CANTP1_M1_C1_TX_XTD_0X18ECFF05 3
#define TX_C1_XTD_0X18ECFF05           3
#undef TX_C1_XTD_0X18ECFF05
#define CANTP1_M1_C1_TX_XTD_0X18EBFF05 4
#define TX_C1_XTD_0X18EBFF05           4
#undef TX_C1_XTD_0X18EBFF05
#define CANTP1_M1_C1_Status            0
#define Status_C1                      0
#undef Status_C1
#define CANTP1_M1_C1_StuffErrors       1
#define StuffErrors_C1                 1
#undef StuffErrors_C1
#define CANTP1_M1_C1_FormatErrors      2
#define FormatErrors_C1                2
#undef FormatErrors_C1
#define CANTP1_M1_C1_AckErrors         3
#define AckErrors_C1                   3
#undef AckErrors_C1
#define CANTP1_M1_C1_Bit0Errors        4
#define Bit0Errors_C1                  4
#undef Bit0Errors_C1
#define CANTP1_M1_C1_Bit1Errors        5
#define Bit1Errors_C1                  5
#undef Bit1Errors_C1
#define CANTP1_M1_C1_CRCErrors         6
#define CRCErrors_C1                   6
#undef CRCErrors_C1
#define CANTP1_M1_C1_RXLost            7
#define RXLost_C1                      7
#undef RXLost_C1
#define CANTP1_M1_C1_DataLost          12
#define CANTP1_M1_C1_RXOK              8
#define RXOK_C1                        8
#undef RXOK_C1
#define CANTP1_M1_C1_TXOK              9
#define TXOK_C1                        9
#undef TXOK_C1
#define CANTP1_M1_C2_TX_XTD_0X18FEF100 5
#define TX_C2_XTD_0X18FEF100           5
#undef TX_C2_XTD_0X18FEF100
#define CANTP1_M1_C2_TX_XTD_0X18FFFAE4 6
#define TX_C2_XTD_0X18FFFAE4           6
#undef TX_C2_XTD_0X18FFFAE4
#define CANTP1_M1_C2_TX_XTD_0X18FFEFE4 7
#define TX_C2_XTD_0X18FFEFE4           7
#undef TX_C2_XTD_0X18FFEFE4
#define CANTP1_M1_C2_Status            0
#define Status_C2                      0
#undef Status_C2
#define CANTP1_M1_C2_StuffErrors       1
#define StuffErrors_C2                 1
#undef StuffErrors_C2
#define CANTP1_M1_C2_FormatErrors      2
#define FormatErrors_C2                2
#undef FormatErrors_C2
#define CANTP1_M1_C2_AckErrors         3
#define AckErrors_C2                   3
#undef AckErrors_C2
#define CANTP1_M1_C2_Bit0Errors        4
#define Bit0Errors_C2                  4
#undef Bit0Errors_C2
#define CANTP1_M1_C2_Bit1Errors        5
#define Bit1Errors_C2                  5
#undef Bit1Errors_C2
#define CANTP1_M1_C2_CRCErrors         6
#define CRCErrors_C2                   6
#undef CRCErrors_C2
#define CANTP1_M1_C2_RXLost            7
#define RXLost_C2                      7
#undef RXLost_C2
#define CANTP1_M1_C2_DataLost          12
#define CANTP1_M1_C2_RXOK              8
#define RXOK_C2                        8
#undef RXOK_C2
#define CANTP1_M1_C2_TXOK              9
#define TXOK_C2                        9
#undef TXOK_C2

/* define user accessible RX service message constant for XTD-Msg 485293824 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x1CECFF00 22

/* define user accessible RX service message constant for XTD-Msg 485228288 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x1CEBFF00 21

/* define user accessible RX service message constant for XTD-Msg 285110058 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x10FE6F2A 5

/* define user accessible RX service message constant for XTD-Msg 217067306 */
#define CANTP1_M1_C1_RXSRVC_XTD_0xCF02F2A 3

/* define user accessible RX service message constant for XTD-Msg 419343921 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FEAE31 12

/* define user accessible RX service message constant for XTD-Msg 419362048 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FEF500 16

/* define user accessible RX service message constant for XTD-Msg 418451505 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18F11031 9

/* define user accessible RX service message constant for XTD-Msg 218034432 */
#define CANTP1_M1_C1_RXSRVC_XTD_0xCFEF100 4

/* define user accessible RX service message constant for XTD-Msg 419361073 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FEF131 15

/* define user accessible RX service message constant for XTD-Msg 419328011 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FE700B 11

/* define user accessible RX service message constant for XTD-Msg 418382091 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18F0010B 6

/* define user accessible RX service message constant for XTD-Msg 419348235 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FEBF0B 13

/* define user accessible RX service message constant for XTD-Msg 217056256 */
#define CANTP1_M1_C1_RXSRVC_XTD_0xCF00400 1

/* define user accessible RX service message constant for XTD-Msg 419356416 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FEDF00 14

/* define user accessible RX service message constant for XTD-Msg 418383107 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18F00503 7

/* define user accessible RX service message constant for XTD-Msg 150892043 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x8FE6E0B 0

/* define user accessible RX service message constant for XTD-Msg 419426579 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FFF113 19

/* define user accessible RX service message constant for XTD-Msg 419428115 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FFF713 20

/* define user accessible RX service message constant for XTD-Msg 419387472 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FF5850 18

/* define user accessible RX service message constant for XTD-Msg 217065731 */
#define CANTP1_M1_C1_RXSRVC_XTD_0xCF02903 2

/* define user accessible RX service message constant for XTD-Msg 419319563 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FE4F0B 10

/* define user accessible RX service message constant for XTD-Msg 418384139 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18F0090B 8

/* define user accessible RX service message constant for XTD-Msg 419362563 */
#define CANTP1_M1_C1_RXSRVC_XTD_0x18FEF703 17

/* define needed RX service XTD_Msg array size for controller 1 on board 1 */
#define CANTP1_M1_C1_NUM_XTD_MSG       23

/* define user accessible RX service message constant for XTD-Msg 418382219 */
#define CANTP1_M1_C2_RXSRVC_XTD_0x18F0018B 1

/* define user accessible RX service message constant for XTD-Msg 217056000 */
#define CANTP1_M1_C2_RXSRVC_XTD_0xCF00300 0

/* define user accessible RX service message constant for XTD-Msg 419426323 */
#define CANTP1_M1_C2_RXSRVC_XTD_0x18FFF013 3

/* define user accessible RX service message constant for XTD-Msg 419426579 */
#define CANTP1_M1_C2_RXSRVC_XTD_0x18FFF113 4

/* define user accessible RX service message constant for XTD-Msg 419428115 */
#define CANTP1_M1_C2_RXSRVC_XTD_0x18FFF713 5

/* define user accessible RX service message constant for XTD-Msg 419387472 */
#define CANTP1_M1_C2_RXSRVC_XTD_0x18FF5850 2

/* define needed RX service XTD_Msg array size for controller 2 on board 1 */
#define CANTP1_M1_C2_NUM_XTD_MSG       6

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C1_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M1_C1_MCRCLT_STD;

/* predefine pointer to CAN message object for XTD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C1_XTD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M1_C1_MCRCLT_XTD;

/* predefine needed user accessible RX service XTD_Msg array */
extern can_tp1_canMsg can_type1_M1_C1_XTD[CANTP1_M1_C1_NUM_XTD_MSG];

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C2_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M1_C2_MCRCLT_STD;

/* predefine pointer to CAN message object for XTD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C2_XTD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M1_C2_MCRCLT_XTD;

/* predefine needed user accessible RX service XTD_Msg array */
extern can_tp1_canMsg can_type1_M1_C2_XTD[CANTP1_M1_C2_NUM_XTD_MSG];

/* predefine variable for access to the loopback-queue */
extern can_tp1_canMsg* CANTP1_TX_M1_C2_MCRCLT_XTD_0X18FFFAE4;

/* predefine variable for access to looped back msg-data as pointer */
extern UInt32* CANTP1_PTR_M1_C2_XTD_0x18FFFAE4;

/* predefine variable for access to the loopback-queue */
extern can_tp1_canMsg* CANTP1_TX_M1_C2_MCRCLT_XTD_0X18FFEFE4;

/* predefine variable for access to looped back msg-data as pointer */
extern UInt32* CANTP1_PTR_M1_C2_XTD_0x18FFEFE4;

/* Declaration of user indices (CAN_Type1_M2) */
#define CANTP1_M2_C1_TX_XTD_0X18FF04FC 0
#define TX_C1_XTD_0X18FF04FC           0
#undef TX_C1_XTD_0X18FF04FC
#define CANTP1_M2_C1_TX_XTD_0XCFF01B3  1
#define TX_C1_XTD_0XCFF01B3            1
#undef TX_C1_XTD_0XCFF01B3
#define CANTP1_M2_C1_TX_XTD_0XCFF5665  2
#define TX_C1_XTD_0XCFF5665            2
#undef TX_C1_XTD_0XCFF5665
#define CANTP1_M2_C1_TX_XTD_0X18FEF1E3 3
#define TX_C1_XTD_0X18FEF1E3           3
#undef TX_C1_XTD_0X18FEF1E3
#define CANTP1_M2_C1_Status            0
#define Status_C1                      0
#undef Status_C1
#define CANTP1_M2_C1_StuffErrors       1
#define StuffErrors_C1                 1
#undef StuffErrors_C1
#define CANTP1_M2_C1_FormatErrors      2
#define FormatErrors_C1                2
#undef FormatErrors_C1
#define CANTP1_M2_C1_AckErrors         3
#define AckErrors_C1                   3
#undef AckErrors_C1
#define CANTP1_M2_C1_Bit0Errors        4
#define Bit0Errors_C1                  4
#undef Bit0Errors_C1
#define CANTP1_M2_C1_Bit1Errors        5
#define Bit1Errors_C1                  5
#undef Bit1Errors_C1
#define CANTP1_M2_C1_CRCErrors         6
#define CRCErrors_C1                   6
#undef CRCErrors_C1
#define CANTP1_M2_C1_RXLost            7
#define RXLost_C1                      7
#undef RXLost_C1
#define CANTP1_M2_C1_DataLost          12
#define CANTP1_M2_C1_RXOK              8
#define RXOK_C1                        8
#undef RXOK_C1
#define CANTP1_M2_C1_TXOK              9
#define TXOK_C1                        9
#undef TXOK_C1
#define CANTP1_M2_C2_TX_XTD_0X18FEAE31 4
#define TX_C2_XTD_0X18FEAE31           4
#undef TX_C2_XTD_0X18FEAE31
#define CANTP1_M2_C2_TX_XTD_0X18FEF500 5
#define TX_C2_XTD_0X18FEF500           5
#undef TX_C2_XTD_0X18FEF500
#define CANTP1_M2_C2_TX_XTD_0X18F02DE4 6
#define TX_C2_XTD_0X18F02DE4           6
#undef TX_C2_XTD_0X18F02DE4
#define CANTP1_M2_C2_TX_XTD_0XCF00400  7
#define TX_C2_XTD_0XCF00400            7
#undef TX_C2_XTD_0XCF00400
#define CANTP1_M2_C2_Status            0
#define Status_C2                      0
#undef Status_C2
#define CANTP1_M2_C2_StuffErrors       1
#define StuffErrors_C2                 1
#undef StuffErrors_C2
#define CANTP1_M2_C2_FormatErrors      2
#define FormatErrors_C2                2
#undef FormatErrors_C2
#define CANTP1_M2_C2_AckErrors         3
#define AckErrors_C2                   3
#undef AckErrors_C2
#define CANTP1_M2_C2_Bit0Errors        4
#define Bit0Errors_C2                  4
#undef Bit0Errors_C2
#define CANTP1_M2_C2_Bit1Errors        5
#define Bit1Errors_C2                  5
#undef Bit1Errors_C2
#define CANTP1_M2_C2_CRCErrors         6
#define CRCErrors_C2                   6
#undef CRCErrors_C2
#define CANTP1_M2_C2_RXLost            7
#define RXLost_C2                      7
#undef RXLost_C2
#define CANTP1_M2_C2_DataLost          12
#define CANTP1_M2_C2_RXOK              8
#define RXOK_C2                        8
#undef RXOK_C2
#define CANTP1_M2_C2_TXOK              9
#define TXOK_C2                        9
#undef TXOK_C2

/* define user accessible RX service message constant for STD-Msg 1635 */
#define CANTP1_M2_C1_RXSRVC_STD_0x663  0

/* define user accessible RX service message constant for XTD-Msg 419387472 */
#define CANTP1_M2_C1_RXSRVC_XTD_0x18FF5850 1

/* define user accessible RX service message constant for XTD-Msg 419382064 */
#define CANTP1_M2_C1_RXSRVC_XTD_0x18FF4330 0

/* define needed RX service STD_Msg array size for controller 1 on board 2 */
#define CANTP1_M2_C1_NUM_STD_MSG       1

/* define needed RX service XTD_Msg array size for controller 1 on board 2 */
#define CANTP1_M2_C1_NUM_XTD_MSG       2

/* define user accessible RX service message constant for XTD-Msg 167248384 */
#define CANTP1_M2_C2_RXSRVC_XTD_0x9F80200 2

/* define user accessible RX service message constant for XTD-Msg 167248385 */
#define CANTP1_M2_C2_RXSRVC_XTD_0x9F80201 3

/* define user accessible RX service message constant for XTD-Msg 435815168 */
#define CANTP1_M2_C2_RXSRVC_XTD_0x19FA0300 5

/* define user accessible RX service message constant for XTD-Msg 435815169 */
#define CANTP1_M2_C2_RXSRVC_XTD_0x19FA0301 6

/* define user accessible RX service message constant for XTD-Msg 167248128 */
#define CANTP1_M2_C2_RXSRVC_XTD_0x9F80100 0

/* define user accessible RX service message constant for XTD-Msg 167248129 */
#define CANTP1_M2_C2_RXSRVC_XTD_0x9F80101 1

/* define user accessible RX service message constant for XTD-Msg 233836544 */
#define CANTP1_M2_C2_RXSRVC_XTD_0xDF01000 4

/* define needed RX service XTD_Msg array size for controller 2 on board 2 */
#define CANTP1_M2_C2_NUM_XTD_MSG       7

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C1_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M2_C1_MCRCLT_STD;

/* predefine pointer to CAN message object for XTD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C1_XTD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M2_C1_MCRCLT_XTD;

/* predefine needed user accessible RX service STD_Msg array */
extern can_tp1_canMsg can_type1_M2_C1_STD[CANTP1_M2_C1_NUM_STD_MSG];

/* predefine needed user accessible RX service XTD_Msg array */
extern can_tp1_canMsg can_type1_M2_C1_XTD[CANTP1_M2_C1_NUM_XTD_MSG];

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C2_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M2_C2_MCRCLT_STD;

/* predefine pointer to CAN message object for XTD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C2_XTD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M2_C2_MCRCLT_XTD;

/* predefine needed user accessible RX service XTD_Msg array */
extern can_tp1_canMsg can_type1_M2_C2_XTD[CANTP1_M2_C2_NUM_XTD_MSG];

/* Declaration of user indices (CAN_Type1_M3) */
#define CANTP1_M3_C1_TX_XTD_0XCF00400  0
#define TX_C1_XTD_0XCF00400            0
#undef TX_C1_XTD_0XCF00400
#define CANTP1_M3_C1_TX_XTD_0X18F0090B 1
#define TX_C1_XTD_0X18F0090B           1
#undef TX_C1_XTD_0X18F0090B
#define CANTP1_M3_C1_TX_XTD_0X18EA13E4 2
#define TX_C1_XTD_0X18EA13E4           2
#undef TX_C1_XTD_0X18EA13E4
#define CANTP1_M3_C1_Status            0
#define Status_C1                      0
#undef Status_C1
#define CANTP1_M3_C1_StuffErrors       1
#define StuffErrors_C1                 1
#undef StuffErrors_C1
#define CANTP1_M3_C1_FormatErrors      2
#define FormatErrors_C1                2
#undef FormatErrors_C1
#define CANTP1_M3_C1_AckErrors         3
#define AckErrors_C1                   3
#undef AckErrors_C1
#define CANTP1_M3_C1_Bit0Errors        4
#define Bit0Errors_C1                  4
#undef Bit0Errors_C1
#define CANTP1_M3_C1_Bit1Errors        5
#define Bit1Errors_C1                  5
#undef Bit1Errors_C1
#define CANTP1_M3_C1_CRCErrors         6
#define CRCErrors_C1                   6
#undef CRCErrors_C1
#define CANTP1_M3_C1_RXLost            7
#define RXLost_C1                      7
#undef RXLost_C1
#define CANTP1_M3_C1_DataLost          12
#define CANTP1_M3_C1_RXOK              8
#define RXOK_C1                        8
#undef RXOK_C1
#define CANTP1_M3_C1_TXOK              9
#define TXOK_C1                        9
#undef TXOK_C1
#define CANTP1_M3_C2_TX_XTD_0XCFEF100  3
#define TX_C2_XTD_0XCFEF100            3
#undef TX_C2_XTD_0XCFEF100
#define CANTP1_M3_C2_TX_XTD_0X18FFFAE4 4
#define TX_C2_XTD_0X18FFFAE4           4
#undef TX_C2_XTD_0X18FFFAE4
#define CANTP1_M3_C2_TX_STD_0X7        5
#define TX_C2_STD_0X7                  5
#undef TX_C2_STD_0X7
#define CANTP1_M3_C2_TX_STD_0X3        6
#define TX_C2_STD_0X3                  6
#undef TX_C2_STD_0X3
#define CANTP1_M3_C2_TX_XTD_0X18FFEFE4 7
#define TX_C2_XTD_0X18FFEFE4           7
#undef TX_C2_XTD_0X18FFEFE4
#define CANTP1_M3_C2_TX_STD_0XA        8
#define TX_C2_STD_0XA                  8
#undef TX_C2_STD_0XA
#define CANTP1_M3_C2_TX_STD_0X5        9
#define TX_C2_STD_0X5                  9
#undef TX_C2_STD_0X5
#define CANTP1_M3_C2_Status            0
#define Status_C2                      0
#undef Status_C2
#define CANTP1_M3_C2_StuffErrors       1
#define StuffErrors_C2                 1
#undef StuffErrors_C2
#define CANTP1_M3_C2_FormatErrors      2
#define FormatErrors_C2                2
#undef FormatErrors_C2
#define CANTP1_M3_C2_AckErrors         3
#define AckErrors_C2                   3
#undef AckErrors_C2
#define CANTP1_M3_C2_Bit0Errors        4
#define Bit0Errors_C2                  4
#undef Bit0Errors_C2
#define CANTP1_M3_C2_Bit1Errors        5
#define Bit1Errors_C2                  5
#undef Bit1Errors_C2
#define CANTP1_M3_C2_CRCErrors         6
#define CRCErrors_C2                   6
#undef CRCErrors_C2
#define CANTP1_M3_C2_RXLost            7
#define RXLost_C2                      7
#undef RXLost_C2
#define CANTP1_M3_C2_DataLost          12
#define CANTP1_M3_C2_RXOK              8
#define RXOK_C2                        8
#undef RXOK_C2
#define CANTP1_M3_C2_TXOK              9
#define TXOK_C2                        9
#undef TXOK_C2

/* define user accessible RX service message constant for XTD-Msg 201392901 */
#define CANTP1_M3_C1_RXSRVC_XTD_0xC010305 0

/* define needed RX service XTD_Msg array size for controller 1 on board 3 */
#define CANTP1_M3_C1_NUM_XTD_MSG       1

/* define user accessible RX service message constant for STD-Msg 770 */
#define CANTP1_M3_C2_RXSRVC_STD_0x302  1

/* define user accessible RX service message constant for STD-Msg 771 */
#define CANTP1_M3_C2_RXSRVC_STD_0x303  2

/* define user accessible RX service message constant for STD-Msg 769 */
#define CANTP1_M3_C2_RXSRVC_STD_0x301  0

/* define user accessible RX service message constant for STD-Msg 1542 */
#define CANTP1_M3_C2_RXSRVC_STD_0x606  5

/* define user accessible RX service message constant for STD-Msg 1541 */
#define CANTP1_M3_C2_RXSRVC_STD_0x605  4

/* define user accessible RX service message constant for STD-Msg 1540 */
#define CANTP1_M3_C2_RXSRVC_STD_0x604  3

/* define user accessible RX service message constant for XTD-Msg 419426323 */
#define CANTP1_M3_C2_RXSRVC_XTD_0x18FFF013 0

/* define user accessible RX service message constant for XTD-Msg 419426579 */
#define CANTP1_M3_C2_RXSRVC_XTD_0x18FFF113 1

/* define user accessible RX service message constant for XTD-Msg 419428115 */
#define CANTP1_M3_C2_RXSRVC_XTD_0x18FFF713 2

/* define needed RX service STD_Msg array size for controller 2 on board 3 */
#define CANTP1_M3_C2_NUM_STD_MSG       6

/* define needed RX service XTD_Msg array size for controller 2 on board 3 */
#define CANTP1_M3_C2_NUM_XTD_MSG       3

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C1_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M3_C1_MCRCLT_STD;

/* predefine pointer to CAN message object for XTD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C1_XTD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M3_C1_MCRCLT_XTD;

/* predefine needed user accessible RX service XTD_Msg array */
extern can_tp1_canMsg can_type1_M3_C1_XTD[CANTP1_M3_C1_NUM_XTD_MSG];

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C2_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M3_C2_MCRCLT_STD;

/* predefine pointer to CAN message object for XTD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C2_XTD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M3_C2_MCRCLT_XTD;

/* predefine needed user accessible RX service STD_Msg array */
extern can_tp1_canMsg can_type1_M3_C2_STD[CANTP1_M3_C2_NUM_STD_MSG];

/* predefine needed user accessible RX service XTD_Msg array */
extern can_tp1_canMsg can_type1_M3_C2_XTD[CANTP1_M3_C2_NUM_XTD_MSG];

/* predefine variable for access to the loopback-queue */
extern can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_XTD_0X18FFFAE4;

/* predefine variable for access to looped back msg-data as pointer */
extern UInt32* CANTP1_PTR_M3_C2_XTD_0x18FFFAE4;

/* predefine variable for access to the loopback-queue */
extern can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_STD_0X7;

/* predefine variable for access to looped back msg-data as pointer */
extern UInt32* CANTP1_PTR_M3_C2_STD_0x7;

/* predefine variable for access to the loopback-queue */
extern can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_XTD_0X18FFEFE4;

/* predefine variable for access to looped back msg-data as pointer */
extern UInt32* CANTP1_PTR_M3_C2_XTD_0x18FFEFE4;

/* predefine variable for access to the loopback-queue */
extern can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_STD_0X5;

/* predefine variable for access to looped back msg-data as pointer */
extern UInt32* CANTP1_PTR_M3_C2_STD_0x5;
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_powd_snf(real_T u0, real_T u1);
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi);
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi);
extern real_T look1_binlcapw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real_T look2_binlcapw(real_T u0, real_T u1, const real_T bp0[], const
  real_T bp1[], const real_T table[], const uint32_T maxIndex[], uint32_T stride);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void dsa_tcpip_bkg_sfcn(SimStruct *rts);
extern void dsa_tcpip_irq_l2_sfcn(SimStruct *rts);
extern void dsa_tcpip_irq_l1_sfcn(SimStruct *rts);
extern void dsa_tcpip_setup_sfcn(SimStruct *rts);
extern void dsa_tcpip_udp_sfcn(SimStruct *rts);
extern void L4_MABX_If_Then_Else(boolean_T rtu_If, real_T rtu_Then, real_T
  rtu_Else, B_If_Then_Else_L4_MABX_T *localB);
extern void L4_MA_Calculate_D_term_Init(B_Calculate_D_term_L4_MABX_T *localB,
  DW_Calculate_D_term_L4_MABX_T *localDW, P_Calculate_D_term_L4_MABX_T *localP);
extern void L4_M_Calculate_D_term_Reset(DW_Calculate_D_term_L4_MABX_T *localDW,
  P_Calculate_D_term_L4_MABX_T *localP);
extern void L4_M_Calculate_D_term_Start(DW_Calculate_D_term_L4_MABX_T *localDW);
extern void L4_Calculate_D_term_Disable(B_Calculate_D_term_L4_MABX_T *localB,
  DW_Calculate_D_term_L4_MABX_T *localDW, P_Calculate_D_term_L4_MABX_T *localP);
extern void L4__Calculate_D_term_Update(B_Calculate_D_term_L4_MABX_T *localB,
  DW_Calculate_D_term_L4_MABX_T *localDW, P_Calculate_D_term_L4_MABX_T *localP);
extern void L4_MABX_Calculate_D_term(boolean_T rtu_Enable, real_T rtu_GPID_Kd,
  real_T rtu_GPID_dT, boolean_T rtu_F_GPID_reset_gov, real_T
  rtu_GPID_control_error, real_T rtu_GPID_T_filt_d, B_Calculate_D_term_L4_MABX_T
  *localB, DW_Calculate_D_term_L4_MABX_T *localDW, P_Calculate_D_term_L4_MABX_T *
  localP);
extern void L4_MABX_If_Then_Else3(boolean_T rtu_If, boolean_T rtu_Then,
  boolean_T rtu_Else, B_If_Then_Else_L4_MABX_c_T *localB);
extern void L4_MA_Calculate_I_term_Init(B_Calculate_I_term_L4_MABX_T *localB,
  DW_Calculate_I_term_L4_MABX_T *localDW, P_Calculate_I_term_L4_MABX_T *localP);
extern void L4_M_Calculate_I_term_Reset(DW_Calculate_I_term_L4_MABX_T *localDW,
  P_Calculate_I_term_L4_MABX_T *localP);
extern void L4_M_Calculate_I_term_Start(DW_Calculate_I_term_L4_MABX_T *localDW);
extern void L4_Calculate_I_term_Disable(B_Calculate_I_term_L4_MABX_T *localB,
  DW_Calculate_I_term_L4_MABX_T *localDW, P_Calculate_I_term_L4_MABX_T *localP);
extern void L4__Calculate_I_term_Update(B_Calculate_I_term_L4_MABX_T *localB,
  DW_Calculate_I_term_L4_MABX_T *localDW, P_Calculate_I_term_L4_MABX_T *localP);
extern void L4_MABX_Calculate_I_term(boolean_T rtu_Enable, real_T
  rtu_GPID_p_term, real_T rtu_GPID_Ki, real_T rtu_GPID_actual_system_output,
  real_T rtu_GPID_control_error, boolean_T rtu_F_GPID_reset_gov, real_T
  rtu_GPID_dT, real_T rtu_GPID_feed_forward, boolean_T
  rtu_F_GPID_aw_cond_integration, real_T rtu_GPID_aw_hysteresis, boolean_T
  rtu_F_GPID_aw_hold_i_term, real_T rtu_GPID_output_unlim_prev,
  B_Calculate_I_term_L4_MABX_T *localB, DW_Calculate_I_term_L4_MABX_T *localDW,
  P_Calculate_I_term_L4_MABX_T *localP);
extern void L4_MABX_If_Then_Else_l(boolean_T rtu_If, boolean_T rtu_Then,
  boolean_T rtu_Else, B_If_Then_Else_L4_MABX_m_T *localB);
extern void L4_MABX_If_Then_Else_g(boolean_T rtu_If, real_T rtu_Then, real_T
  rtu_Else, B_If_Then_Else_L4_MABX_k_T *localB);
extern void L4_MABX_If_Then_Else_c(real_T rtu_If, real_T rtu_Then, real_T
  rtu_Else, B_If_Then_Else_L4_MABX_mf_T *localB);
extern void L4_MABX_If_Then_Else_m(boolean_T rtu_If, real_T rtu_Then, real_T
  rtu_Then_l, real_T rtu_Then_f, real_T rtu_Else, real_T rtu_Else_i, real_T
  rtu_Else_k, B_If_Then_Else_L4_MABX_h_T *localB);
extern void L4_MABX_If_Then_Else_n(boolean_T rtu_If, real_T rtu_Then, real_T
  rtu_Else);
extern void L4_MABX_ALL_CTRL_DISABLED(boolean_T rtu_Enable, int32_T *rty_Out1,
  P_ALL_CTRL_DISABLED_L4_MABX_T *localP);
extern void L4_MABX_If_Then_Else_a(boolean_T rtu_If, real_T rtu_Then,
  ENUM_XBR_EBI_MODE_T rtu_Then_i, ENUM_XBR_PRIORITY_T rtu_Then_c,
  ENUM_XBR_CONTROL_MODE_T rtu_Then_j, ENUM_XBR_PASS_THROUGH_ACTIVE_T rtu_Then_d,
  real_T rtu_Then_js, real_T rtu_Then_h, real_T rtu_Else, ENUM_XBR_EBI_MODE_T
  rtu_Else_m, ENUM_XBR_PRIORITY_T rtu_Else_i, ENUM_XBR_CONTROL_MODE_T rtu_Else_j,
  ENUM_XBR_PASS_THROUGH_ACTIVE_T rtu_Else_j3, real_T rtu_Else_f, real_T
  rtu_Else_c, B_If_Then_Else_L4_MABX_ke_T *localB);
extern void L4_MAB_Background_Task_Init(void);
extern void L4_MA_Background_Task_Reset(void);
extern void L4_MA_Background_Task_Start(void);
extern void L4_MABX_Background_Task(void);
extern void L4__IRQ_Level_2_SW_INT_Init(void);
extern void L4_IRQ_Level_2_SW_INT_Reset(void);
extern void L4_IRQ_Level_2_SW_INT_Start(void);
extern void L4_MABX_IRQ_Level_2_SW_INT(void);
extern void L4__TcpInputProcessing_Init(void);
extern void L4_TcpInputProcessing_Reset(void);
extern void L4_TcpInputProcessing_Start(void);
extern void L4_MABX_TcpInputProcessing(void);
extern void L4_MABX_Interrupt_Task_Init(void);
extern void L4_MAB_Interrupt_Task_Reset(void);
extern void L4_MAB_Interrupt_Task_Start(void);
extern void L4_MABX_Interrupt_Task(void);
extern void L4_MABX_IncrementTimer_Init(void);
extern void L4_MAB_IncrementTimer_Reset(void);
extern void L4_MABX_IncrementTimer(void);
extern void L4_MAB_Background_Task_Term(void);
extern void L4__IRQ_Level_2_SW_INT_Term(void);
extern void L4__TcpInputProcessing_Term(void);
extern void L4_MABX_Interrupt_Task_Term(void);
extern boolean_T L4_MABX_TcpInputProcessingFNI(RT_MODEL_L4_MABX_T *const
  L4_MABX_M, int_T controlPortIdx, int_T tid);
extern boolean_T L4_TcpInputProcessing_ResetFNI(RT_MODEL_L4_MABX_T *const
  L4_MABX_M, int_T controlPortIdx, int_T tid);
void L4_MABX_output0(void);
void L4_MABX_update0(void);
void L4_MABX_output1(void);
void L4_MABX_update1(void);
void L4_MABX_output2(void);
void L4_MABX_update2(void);
void L4_MABX_output3(void);
void L4_MABX_update3(void);
void L4_MABX_output4(void);
void L4_MABX_update4(void);
void L4_MABX_output5(void);
void L4_MABX_update5(void);
void L4_MABX_output6(void);
void L4_MABX_update6(void);
void L4_MABX_output7(void);
void L4_MABX_update7(void);
void L4_MABX_output8(void);
void L4_MABX_update8(void);

#endif                                 /* RTW_HEADER_L4_MABX_private_h_ */
