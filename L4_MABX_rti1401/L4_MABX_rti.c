/*********************** dSPACE target specific file *************************

   Include file L4_MABX_rti.c:

   Definition of functions and variables for the system I/O and for
   the hardware and software interrupts used.

   RTI1401 7.10 (02-May-2018)
   Wed Aug 28 10:31:29 2019

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#if !(defined(__RTI_SIMENGINE__) || defined(RTIMP_FRAME))
# error This file may be included only by the RTI(-MP) simulation engine.
#endif

/* Include the model header file. */
#include "L4_MABX.h"
#include "L4_MABX_private.h"

/* Defines for block output and parameter structure existence */
#define RTI_rtB_STRUCTURE_EXISTS       1
#define RTI_rtP_STRUCTURE_EXISTS       1
#define RTB_STRUCTURE_NAME             L4_MABX_B
#define RTP_STRUCTURE_NAME             L4_MABX_P

/* dSPACE generated includes for header files */
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <rtican_ds1401.h>
#include <rtican_tools1.h>
#include <rtiethxcp.h>
#ifndef dsRtmGetNumSampleTimes
# define dsRtmGetNumSampleTimes(rtm)   13
#endif

#ifndef dsRtmGetTPtr
# define dsRtmGetTPtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef dsRtmSetTaskTime
# define dsRtmSetTaskTime(rtm, sti, val) (dsRtmGetTPtr((rtm))[sti] = (val))
#endif

/****** Definitions: task functions for timer tasks *********************/

/* Timer Task 1. (Base rate). */
static void rti_TIMERA(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  baseRateService(task);

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* Timer Task 2. (Sample rate). */
static void rti_TIMERA2(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/* Timer Task 3. (Sample rate). */
static void rti_TIMERA3(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/* Timer Task 4. (Sample rate). */
static void rti_TIMERA4(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/* Timer Task 5. (Sample rate). */
static void rti_TIMERA5(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/* Timer Task 6. (Sample rate). */
static void rti_TIMERA6(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/* Timer Task 7. (Sample rate). */
static void rti_TIMERA7(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/* Timer Task 8. (Sample rate). */
static void rti_TIMERA8(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/* Timer Task 9. (Sample rate). */
static void rti_TIMERA9(rtk_p_task_control_block task)
{
  /* Task code. */
  sampleRateService(task);
}

/****** Definitions: task functions for timer interrupts ****************/

/* Timer Interrupt: <S403>/Timer Interrupt */
static void rti_TIMERB(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  {
    /* S-Function (rti_commonblock): '<S803>/S-Function1' */
    L4_MABX_IncrementTimer();

    /* End of Outputs for S-Function (rti_commonblock): '<S803>/S-Function1' */

    /* RateTransition: '<S403>/Rate Transition' */
    switch (L4_MABX_DW.RateTransition_read_buf) {
     case 0:
      L4_MABX_DW.RateTransition_write_buf = 1;
      break;

     case 1:
      L4_MABX_DW.RateTransition_write_buf = 0;
      break;

     default:
      L4_MABX_DW.RateTransition_write_buf = (int8_T)
        (L4_MABX_DW.RateTransition_last_buf_wr == 0);
      break;
    }

    if (L4_MABX_DW.RateTransition_write_buf != 0) {
      L4_MABX_DW.RateTransition_Buffer1 = L4_MABX_B.Add;
    } else {
      L4_MABX_DW.RateTransition_Buffer0 = L4_MABX_B.Add;
    }

    L4_MABX_DW.RateTransition_last_buf_wr = L4_MABX_DW.RateTransition_write_buf;
    L4_MABX_DW.RateTransition_write_buf = -1;

    /* End of RateTransition: '<S403>/Rate Transition' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/****** Definitions: task functions for HW interrupts *******************/

/* HW Interrupt: <S398>/Common Hardware Interrupt Interface */
static void rti_BB_BYP_ETHT1M0I0S0(rtk_p_task_control_block task)
{
  /* Local variables for absolute time support */
  rtk_timestamp_type* absTaskTimePtr;
  double absTime = 0;

  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Update counters for absolute time support */
  absTime = ts_time_calculate(rtk_current_task_absolute_time_ptr_get());
  L4_MABX_M->Timing.clockTickH11 = (UInt32)(absTime);
  L4_MABX_M->Timing.clockTick11 = (UInt32)((absTime-(UInt32)(absTime))*
    4294967296.0);
  L4_MABX_M->Timing.t[11] = L4_MABX_M->Timing.clockTick11 *
    L4_MABX_M->Timing.stepSize11 + L4_MABX_M->Timing.clockTickH11 *
    L4_MABX_M->Timing.stepSize11 * 4294967296.0;

  /* Task code. */
  {
    /* S-Function (rti_commonblock): '<S400>/S-Function1' */
    L4_MABX_Interrupt_Task();

    /* End of Outputs for S-Function (rti_commonblock): '<S400>/S-Function1' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/****** Definitions: task functions for SW interrupts *******************/

/* SW Interrupt: <S397>/Tcp Input Processing */
static void rti_SWI1(rtk_p_task_control_block task)
{
  /* Local variables for absolute time support */
  rtk_timestamp_type* absTaskTimePtr;
  double absTime = 0;

  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Update counters for absolute time support */
  absTime = ts_time_calculate(rtk_current_task_absolute_time_ptr_get());
  L4_MABX_M->Timing.clockTickH10 = (UInt32)(absTime);
  L4_MABX_M->Timing.clockTick10 = (UInt32)((absTime-(UInt32)(absTime))*
    4294967296.0);
  L4_MABX_M->Timing.t[10] = L4_MABX_M->Timing.clockTick10 *
    L4_MABX_M->Timing.stepSize10 + L4_MABX_M->Timing.clockTickH10 *
    L4_MABX_M->Timing.stepSize10 * 4294967296.0;

  /* Task code. */
  {
    /* S-Function (rti_commonblock): '<S400>/S-Function1' */

    /* S-Function (dsa_tcpip_irq_l1_sfcn): '<S397>/dsa_tcpip_irq_l1_sfcn' */

    /* S-Function (rti_commonblock): '<S399>/S-Function1' */
    L4_MABX_IRQ_Level_2_SW_INT();

    /* End of Outputs for S-Function (rti_commonblock): '<S399>/S-Function1' */

    /* End of Outputs for S-Function (dsa_tcpip_irq_l1_sfcn): '<S397>/dsa_tcpip_irq_l1_sfcn' */

    /* End of Outputs for S-Function (rti_commonblock): '<S400>/S-Function1' */
  }

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* ===== Declarations of RTI blocks ======================================== */

/* dSPACE I/O Board DS1_RTICAN #1 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M1_C1;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M1_C1[13];

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M1_C2;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M1_C2[13];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C1_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M1_C1_MCRCLT_STD;

/* declare pointer to CAN message object for XTD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C1_XTD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M1_C1_MCRCLT_XTD;

/* declare needed user accessible RX service XTD_Msg array */
can_tp1_canMsg can_type1_M1_C1_XTD[CANTP1_M1_C1_NUM_XTD_MSG];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C2_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M1_C2_MCRCLT_STD;

/* declare pointer to CAN message object for XTD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C2_XTD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M1_C2_MCRCLT_XTD;

/* declare needed user accessible RX service XTD_Msg array */
can_tp1_canMsg can_type1_M1_C2_XTD[CANTP1_M1_C2_NUM_XTD_MSG];

/* declare variable for access to the loopback-queue */
can_tp1_canMsg* CANTP1_TX_M1_C2_MCRCLT_XTD_0X18FFFAE4;

/* declare and initial variable for access to looped back msg-data as pointer */
UInt32* CANTP1_PTR_M1_C2_XTD_0x18FFFAE4 = NULL;

/* declare variable for access to the loopback-queue */
can_tp1_canMsg* CANTP1_TX_M1_C2_MCRCLT_XTD_0X18FFEFE4;

/* declare and initial variable for access to looped back msg-data as pointer */
UInt32* CANTP1_PTR_M1_C2_XTD_0x18FFEFE4 = NULL;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* dSPACE I/O Board DS1_RTICAN #2 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M2_C1;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M2_C1[13];

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M2_C2;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M2_C2[13];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C1_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M2_C1_MCRCLT_STD;

/* declare pointer to CAN message object for XTD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C1_XTD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M2_C1_MCRCLT_XTD;

/* declare needed user accessible RX service STD_Msg array */
can_tp1_canMsg can_type1_M2_C1_STD[CANTP1_M2_C1_NUM_STD_MSG];

/* declare needed user accessible RX service XTD_Msg array */
can_tp1_canMsg can_type1_M2_C1_XTD[CANTP1_M2_C1_NUM_XTD_MSG];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C2_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M2_C2_MCRCLT_STD;

/* declare pointer to CAN message object for XTD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C2_XTD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M2_C2_MCRCLT_XTD;

/* declare needed user accessible RX service XTD_Msg array */
can_tp1_canMsg can_type1_M2_C2_XTD[CANTP1_M2_C2_NUM_XTD_MSG];

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M2[CANTP1_M2_NUMMSG];

/* dSPACE I/O Board DS1_RTICAN #3 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M3_C1;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M3_C1[13];

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M3_C2;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M3_C2[13];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C1_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M3_C1_MCRCLT_STD;

/* declare pointer to CAN message object for XTD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C1_XTD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M3_C1_MCRCLT_XTD;

/* declare needed user accessible RX service XTD_Msg array */
can_tp1_canMsg can_type1_M3_C1_XTD[CANTP1_M3_C1_NUM_XTD_MSG];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_XTD;

/* declare pointer to CAN message object for STD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C2_STD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M3_C2_MCRCLT_STD;

/* declare pointer to CAN message object for XTD-Msg */
can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C2_XTD;

/* declare needed identifiers for mcr-queue */
can_tp1_canMsg* CANTP1_RX_M3_C2_MCRCLT_XTD;

/* declare needed user accessible RX service STD_Msg array */
can_tp1_canMsg can_type1_M3_C2_STD[CANTP1_M3_C2_NUM_STD_MSG];

/* declare needed user accessible RX service XTD_Msg array */
can_tp1_canMsg can_type1_M3_C2_XTD[CANTP1_M3_C2_NUM_XTD_MSG];

/* declare variable for access to the loopback-queue */
can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_XTD_0X18FFFAE4;

/* declare and initial variable for access to looped back msg-data as pointer */
UInt32* CANTP1_PTR_M3_C2_XTD_0x18FFFAE4 = NULL;

/* declare variable for access to the loopback-queue */
can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_STD_0X7;

/* declare and initial variable for access to looped back msg-data as pointer */
UInt32* CANTP1_PTR_M3_C2_STD_0x7 = NULL;

/* declare variable for access to the loopback-queue */
can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_XTD_0X18FFEFE4;

/* declare and initial variable for access to looped back msg-data as pointer */
UInt32* CANTP1_PTR_M3_C2_XTD_0x18FFEFE4 = NULL;

/* declare variable for access to the loopback-queue */
can_tp1_canMsg* CANTP1_TX_M3_C2_MCRCLT_STD_0X5;

/* declare and initial variable for access to looped back msg-data as pointer */
UInt32* CANTP1_PTR_M3_C2_STD_0x5 = NULL;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M3[CANTP1_M3_NUMMSG];

/* dSPACE I/O Board RTICAN_GLOBAL #0 */

/* dSPACE I/O Board DS1401_RTIETHXCP #1 */
/* ...  variables for the RTIEthXCP support */
int service_instance_used = 0;

/* dSPACE Background Task Block: <S386>/Background */

/* ===== Definition of interface functions for simulation engine =========== */
#if GRTINTERFACE == 1
#ifdef MULTITASKING
# define dsIsSampleHit(RTM,sti)        rtmGetSampleHitPtr(RTM)[sti]
#else
# define dsIsSampleHit(RTM,sti)        rtmIsSampleHit(RTM,sti,0)
#endif

#else
#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

# define dsIsSampleHit(RTM,sti)        rtmStepTask(RTM, sti)
#endif

#undef __INLINE
#if defined(_INLINE)
# define __INLINE                      static inline
#else
# define __INLINE                      static
#endif

/*Define additional variables*/
static time_T dsTFinal = -1.0;

#define dsGetTFinal(rtm)               (dsTFinal)

static time_T dsStepSize = 0.01;

# define dsGetStepSize(rtm)            (dsStepSize)

static void rti_mdl_initialize_host_services(void)
{
  ts_timestamp_type ts = { 0, 0 };

  host_service(1, &ts);
  DsDaq_Init(0, 32, 1);
}

static void rti_mdl_initialize_io_boards(void)
{
  /* Registering of RTI products and modules at VCM */
  {
    vcm_module_register(VCM_MID_RTI1401, (void *) 0,
                        VCM_TXT_RTI1401, 7, 10, 0,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);

    {
      vcm_module_descriptor_type* msg_mod_ptr;
      msg_mod_ptr = vcm_module_register(VCM_MID_MATLAB, (void *) 0,
        VCM_TXT_MATLAB, 9, 4, 0,
        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_SIMULINK, msg_mod_ptr,
                          VCM_TXT_SIMULINK, 9, 1, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_RTW, msg_mod_ptr,
                          VCM_TXT_RTW, 8, 14, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW, msg_mod_ptr,
                          VCM_TXT_STATEFLOW, 9, 1, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW_CODER, msg_mod_ptr,
                          VCM_TXT_STATEFLOW_CODER, 8, 14, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
    }

    vcm_module_register(VCM_MID_RTICAN, (void *) 0,
                        VCM_TXT_RTICAN, 3, 4, 6,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
  }

  /* dSPACE I/O Board DS1401STDDIOT4 #1 */
  /* main init for DIO TP4 module 1 */
  dio_tp4_init(DIO_TP4_1_MODULE_ADDR);

  /* dSPACE I/O Board DS1401STDDIOT4 #1 Unit:BITINCH */
  dio_tp4_digin_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH3);
  dio_tp4_digin_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH1);
  dio_tp4_digin_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH4);
  dio_tp4_digin_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH5);

  /* dSPACE I/O Board DS1401STDDIOT4 #1 Unit:PWM2D */
  /* PWM measurement setup for channel 1 on port 2 */
  dio_tp4_pwm2d_init(DIO_TP4_1_MODULE_ADDR, 2, DIO_TP4_MASK_CH1,
                     DIO_TP4_TIMING_RANGE12, DIO_TP4_PWM2D);

  /* PWM measurement setup for channel 2 on port 2 */
  dio_tp4_pwm2d_init(DIO_TP4_1_MODULE_ADDR, 2, DIO_TP4_MASK_CH2,
                     DIO_TP4_TIMING_RANGE12, DIO_TP4_PWM2D);

  /* PWM measurement setup for channel 2 on port 1 */
  dio_tp4_pwm2d_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH2,
                     DIO_TP4_TIMING_RANGE7, DIO_TP4_PWM2D);

  /* dSPACE I/O Board DS1401STDDIOT4 #1 Unit:DIGOUT */
  /* setup digital output mode (supply rails) for channel 4 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH4, 1, 0);

  /* setup digital output mode (supply rails) for channel 2 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH2, 1, 0);

  /* setup digital output mode (supply rails) for channel 1 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH1, 1, 0);

  /* setup digital output mode (supply rails) for channel 3 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH3, 1, 0);

  /* PWM generation setup for channel 1 on port 2 */
  dio_tp4_pwm_init(DIO_TP4_1_MODULE_ADDR, 2, DIO_TP4_MASK_CH1, 1, 0,
                   DIO_TP4_TIMING_RANGE2, DIO_TP4_PWM);

  /* PWM generation setup for channel 2 on port 2 */
  dio_tp4_pwm_init(DIO_TP4_1_MODULE_ADDR, 2, DIO_TP4_MASK_CH2, 1, 0,
                   DIO_TP4_TIMING_RANGE2, DIO_TP4_PWM);

  /* dSPACE I/O Board DS1401STDADCT4 #1 */
  adc_tp4_init(ADC_TP4_1_MODULE_ADDR);

  /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC */
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH3,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_2,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH2,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_2,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH1,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_2,
                       ADC_TP4_TRIG_SW,
                       0.0);

  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[0].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M1_C1 = can_tp1_channel_init(can_tp1_address_table[0].
    module_addr, 0, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M1_C1,
    CAN_TP1_TERMINATION_OFF);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M1_C1_STD = can_tp1_msg_tx_register(can_type1_channel_M1_C1, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M1_C1_XTD = can_tp1_msg_tx_register(can_type1_channel_M1_C1, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M1_C1_STD = can_tp1_msg_rx_register(can_type1_channel_M1_C1,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C1_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C1_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M1_C1_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M1_C1_MCRCLT_STD );
  }

  /* ... Initialize XTD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M1_C1_XTD = can_tp1_msg_rx_register(can_type1_channel_M1_C1,
      1, 1, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C1_XTD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C1_XTD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M1_C1_XTD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M1_C1_MCRCLT_XTD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "PropB_XPR_FC" Id:419366140 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18FF04FC] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 4, 419366140, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "EBC1_TX" Id:418382219 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18F0018B] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 2, 418382219, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "TC1_03_05" Id:201392901 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0XC010305] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 0, 201392901, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "TX Message" Id:418184965 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18ECFF05] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 1, 418184965, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "TX Message" Id:418119429 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18EBFF05] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 1, 418119429, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M1_C1[CANTP1_M1_C1_Status] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M1_C1[CANTP1_M1_C1_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_AckErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_RXLost] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M1_C1[CANTP1_M1_C1_DataLost] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M1_C1[CANTP1_M1_C1_RXOK] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M1_C1[CANTP1_M1_C1_TXOK] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_TX_OK);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 250 kbit/s */
  can_type1_channel_M1_C2 = can_tp1_channel_init(can_tp1_address_table[0].
    module_addr, 1, (250 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M1_C2,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M1_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M1_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M1_C2_STD = can_tp1_msg_rx_register(can_type1_channel_M1_C2,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C2_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C2_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M1_C2_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M1_C2_MCRCLT_STD );
  }

  /* ... Initialize XTD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M1_C2_XTD = can_tp1_msg_rx_register(can_type1_channel_M1_C2,
      1, 1, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C2_XTD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M1_C2_XTD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M1_C2_XTD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M1_C2_MCRCLT_XTD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "CCVS1_00" Id:419361024 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FEF100] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 419361024, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "PropB_REAX_5_E4" Id:419429092 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFFAE4] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 419429092, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO) |
     CAN_TP1_TIMECOUNT_INFO | CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  {
    UInt32 TXQueueSize = 2;

    /* create a queue for loopback access */
    can_tp1_msg_set( can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFFAE4],
                    CAN_TP1_MSG_DSMCR_BUFFER, &TXQueueSize );

    /* register this message as client for loopback queue access	*/
    can_tp1_dsmcr_client_create( can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFFAE4],
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL,
      &CANTP1_TX_M1_C2_MCRCLT_XTD_0X18FFFAE4 );
  }

  /* dSPACE RTICAN TX Message Block: "PropB_REAX_1_E4" Id:419426276 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFEFE4] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 419426276, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO) |
     CAN_TP1_TIMECOUNT_INFO | CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  {
    UInt32 TXQueueSize = 2;

    /* create a queue for loopback access */
    can_tp1_msg_set( can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFEFE4],
                    CAN_TP1_MSG_DSMCR_BUFFER, &TXQueueSize );

    /* register this message as client for loopback queue access	*/
    can_tp1_dsmcr_client_create( can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFEFE4],
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL,
      &CANTP1_TX_M1_C2_MCRCLT_XTD_0X18FFEFE4 );
  }

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M1_C2[CANTP1_M1_C2_Status] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M1_C2[CANTP1_M1_C2_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_AckErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_RXLost] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M1_C2[CANTP1_M1_C2_DataLost] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M1_C2[CANTP1_M1_C2_RXOK] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M1_C2[CANTP1_M1_C2_TXOK] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_TX_OK);

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x1CECFF00].identifier = 485293824;/* 0x1CECFF00*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x1CEBFF00].identifier = 485228288;/* 0x1CEBFF00*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x10FE6F2A].identifier = 285110058;/* 0x10FE6F2A*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0xCF02F2A].identifier = 217067306;/* 0xCF02F2A*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FEAE31].identifier = 419343921;/* 0x18FEAE31*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FEF500].identifier = 419362048;/* 0x18FEF500*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18F11031].identifier = 418451505;/* 0x18F11031*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0xCFEF100].identifier = 218034432;/* 0xCFEF100*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FEF131].identifier = 419361073;/* 0x18FEF131*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FE700B].identifier = 419328011;/* 0x18FE700B*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18F0010B].identifier = 418382091;/* 0x18F0010B*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FEBF0B].identifier = 419348235;/* 0x18FEBF0B*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0xCF00400].identifier = 217056256;/* 0xCF00400*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FEDF00].identifier = 419356416;/* 0x18FEDF00*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18F00503].identifier = 418383107;/* 0x18F00503*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x8FE6E0B].identifier = 150892043;/* 0x8FE6E0B*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FFF113].identifier = 419426579;/* 0x18FFF113*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FFF713].identifier = 419428115;/* 0x18FFF713*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FF5850].identifier = 419387472;/* 0x18FF5850*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0xCF02903].identifier = 217065731;/* 0xCF02903*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FE4F0B].identifier = 419319563;/* 0x18FE4F0B*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18F0090B].identifier = 418384139;/* 0x18F0090B*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C1_XTD[CANTP1_M1_C1_RXSRVC_XTD_0x18FEF703].identifier = 419362563;/* 0x18FEF703*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C2_XTD[CANTP1_M1_C2_RXSRVC_XTD_0x18F0018B].identifier = 418382219;/* 0x18F0018B*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C2_XTD[CANTP1_M1_C2_RXSRVC_XTD_0xCF00300].identifier = 217056000;/* 0xCF00300*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C2_XTD[CANTP1_M1_C2_RXSRVC_XTD_0x18FFF013].identifier = 419426323;/* 0x18FFF013*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C2_XTD[CANTP1_M1_C2_RXSRVC_XTD_0x18FFF113].identifier = 419426579;/* 0x18FFF113*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C2_XTD[CANTP1_M1_C2_RXSRVC_XTD_0x18FFF713].identifier = 419428115;/* 0x18FFF713*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M1_C2_XTD[CANTP1_M1_C2_RXSRVC_XTD_0x18FF5850].identifier = 419387472;/* 0x18FF5850*/

  /* dSPACE RTICAN RX Message Block: "TPCM_FF_00" Id:485293824 */
  L4_MABX_B.SFunction1_o9_ph = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o10_kx = 0;     /* timestamp */
  L4_MABX_B.SFunction1_o11_jf = 0;     /* deltatime */

  /* dSPACE RTICAN RX Message Block: "TPDT_FF_00" Id:485228288 */
  L4_MABX_B.SFunction1_o9_j = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o10_b4 = 0;     /* timestamp */
  L4_MABX_B.SFunction1_o11_pn = 0;     /* deltatime */

  /* dSPACE RTICAN RX Message Block: "ACC1_2A" Id:285110058 */
  L4_MABX_B.SFunction1_o11_p = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o12_db = 0;     /* timestamp */
  L4_MABX_B.SFunction1_o13_k = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "AEBS1_A0" Id:217067306 */
  L4_MABX_B.SFunction1_o6_b = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o7_b = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o8_ll = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "AIR1" Id:419343921 */
  L4_MABX_B.SFunction1_o9_ni = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o10_ll = 0;     /* timestamp */
  L4_MABX_B.SFunction1_o11_o = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "AMB" Id:419362048 */
  L4_MABX_B.SFunction1_o6_nu = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o7_lg = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o8_fw = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "B2" Id:418451505 */
  L4_MABX_B.SFunction1_o3_br = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o4_m3 = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_hzp = 0;     /* deltatime */

  /* dSPACE RTICAN RX Message Block: "CCVS1_00" Id:218034432 */
  L4_MABX_B.SFunction1_o21_a = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o22_f = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o23_j = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "CCVS1_31" Id:419361073 */
  L4_MABX_B.SFunction1_o21_p = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o22_h = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o23_g = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "CVW_0B" Id:419328011 */
  L4_MABX_B.SFunction1_o2_dh = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o3_o5 = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o4_er = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "EBC1_0B" Id:418382091 */
  L4_MABX_B.SFunction1_o23_f = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o24_it = 0;     /* timestamp */
  L4_MABX_B.SFunction1_o25_a = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "EBC2_0B" Id:419348235 */
  L4_MABX_B.SFunction1_o8_l = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o9_p = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o10_p = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "EEC1_00" Id:217056256 */
  L4_MABX_B.SFunction1_o9_eh = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o10_bm = 0;     /* timestamp */
  L4_MABX_B.SFunction1_o11_ai = 0;     /* deltatime */

  /* dSPACE RTICAN RX Message Block: "EEC3_00" Id:419356416 */
  L4_MABX_B.SFunction1_o3_lh = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o4_im = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_fy = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "ETC2_03" Id:418383107 */
  L4_MABX_B.SFunction1_o4_lu = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o5_kr = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o6_p = 0;       /* deltatime */

  /* dSPACE RTICAN RX Message Block: "HRW_0B" Id:150892043 */
  L4_MABX_B.SFunction1_o5_hp = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o6_l4 = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o7_lc = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_REAX_3_13" Id:419426579 */
  L4_MABX_B.SFunction1_o9_bs = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o10_b = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o11_f = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_REAX_4_13" Id:419428115 */
  L4_MABX_B.SFunction1_o9_o = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o10_m = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o11_k = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_XPR_1" Id:419387472 */
  L4_MABX_B.SFunction1_o3_me = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o4_g5 = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_g = 0;       /* deltatime */

  /* dSPACE RTICAN RX Message Block: "SSI2_03" Id:217065731 */
  L4_MABX_B.SFunction1_o8_j = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o9_i = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o10_l = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "VDC1_0B" Id:419319563 */
  L4_MABX_B.SFunction1_o8_h = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o9_n = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o10 = 0;        /* deltatime */

  /* dSPACE RTICAN RX Message Block: "VDC2_0B" Id:418384139 */
  L4_MABX_B.SFunction1_o7_e = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o8_d = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o9 = 0;         /* deltatime */

  /* dSPACE RTICAN RX Message Block: "VEP1" Id:419362563 */
  L4_MABX_B.SFunction1_o6 = 0;         /* processed - flag */
  L4_MABX_B.SFunction1_o7 = 0;         /* timestamp */
  L4_MABX_B.SFunction1_o8 = 0;         /* deltatime */

  /* dSPACE RTICAN RX Message Block: "EBC1_0B" Id:418382219 */
  L4_MABX_B.SFunction1_o23_m = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o24_i = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o25_k = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "EEC2_00" Id:217056000 */
  L4_MABX_B.SFunction1_o15_i = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o16_p = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o17_p = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_REAX_2_13" Id:419426323 */
  L4_MABX_B.SFunction1_o3_oa = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o4_km = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_cm = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_REAX_3_13" Id:419426579 */
  L4_MABX_B.SFunction1_o9_c = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o10_er = 0;     /* timestamp */
  L4_MABX_B.SFunction1_o11_a = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_REAX_4_13" Id:419428115 */
  L4_MABX_B.SFunction1_o9_bu = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o10_e = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o11_n = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_XPR_1" Id:419387472 */
  L4_MABX_B.SFunction1_o3_l3 = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o4_hx = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_hc = 0;      /* deltatime */

  /* dSPACE I/O Board DS1_RTICAN #2 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[1].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M2_C1 = can_tp1_channel_init(can_tp1_address_table[1].
    module_addr, 0, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M2_C1,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M2_C1_STD = can_tp1_msg_tx_register(can_type1_channel_M2_C1, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M2_C1_XTD = can_tp1_msg_tx_register(can_type1_channel_M2_C1, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M2_C1_STD = can_tp1_msg_rx_register(can_type1_channel_M2_C1,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C1_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C1_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M2_C1_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M2_C1_MCRCLT_STD );
  }

  /* ... Initialize XTD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M2_C1_XTD = can_tp1_msg_rx_register(can_type1_channel_M2_C1,
      1, 1, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C1_XTD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C1_XTD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M2_C1_XTD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M2_C1_MCRCLT_XTD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "PropB_XPR_FC" Id:419366140 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0X18FF04FC] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 4, 419366140, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "PropB_XBR_B3" Id:218038707 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0XCFF01B3] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 2, 218038707, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "PropB_Bendix_2C2_XPR" Id:218060389 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0XCFF5665] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 2, 218060389, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "CCVS1_E3" Id:419361251 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0X18FEF1E3] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 3, 419361251, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M2_C1[CANTP1_M2_C1_Status] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M2_C1[CANTP1_M2_C1_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_AckErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_RXLost] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M2_C1[CANTP1_M2_C1_DataLost] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M2_C1[CANTP1_M2_C1_RXOK] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M2_C1[CANTP1_M2_C1_TXOK] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_TX_OK);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M2_C2 = can_tp1_channel_init(can_tp1_address_table[1].
    module_addr, 1, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M2_C2,
    CAN_TP1_TERMINATION_OFF);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M2_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M2_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M2_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M2_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M2_C2_STD = can_tp1_msg_rx_register(can_type1_channel_M2_C2,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C2_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C2_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M2_C2_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M2_C2_MCRCLT_STD );
  }

  /* ... Initialize XTD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M2_C2_XTD = can_tp1_msg_rx_register(can_type1_channel_M2_C2,
      1, 1, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C2_XTD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M2_C2_XTD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M2_C2_XTD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M2_C2_MCRCLT_XTD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "AIR1" Id:419343921 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0X18FEAE31] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C2, 3, 419343921, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "AMB" Id:419362048 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0X18FEF500] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C2, 4, 419362048, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ACCS" Id:418393572 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0X18F02DE4] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C2, 3, 418393572, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "EEC1_00" Id:217056256 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0XCF00400] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C2, 1, 217056256, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M2_C2[CANTP1_M2_C2_Status] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M2_C2[CANTP1_M2_C2_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M2_C2[CANTP1_M2_C2_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M2_C2[CANTP1_M2_C2_AckErrors] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M2_C2[CANTP1_M2_C2_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M2_C2[CANTP1_M2_C2_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M2_C2[CANTP1_M2_C2_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M2_C2[CANTP1_M2_C2_RXLost] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M2_C2[CANTP1_M2_C2_DataLost] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M2_C2[CANTP1_M2_C2_RXOK] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M2_C2[CANTP1_M2_C2_TXOK] = can_tp1_service_register
    (can_type1_channel_M2_C2,CAN_TP1_SERVICE_TX_OK);

  /* initializing user accessible RX service STD-Message array */
  can_type1_M2_C1_STD[CANTP1_M2_C1_RXSRVC_STD_0x663].identifier = 1635;/* 0x663*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C1_XTD[CANTP1_M2_C1_RXSRVC_XTD_0x18FF5850].identifier = 419387472;/* 0x18FF5850*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C1_XTD[CANTP1_M2_C1_RXSRVC_XTD_0x18FF4330].identifier = 419382064;/* 0x18FF4330*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C2_XTD[CANTP1_M2_C2_RXSRVC_XTD_0x9F80200].identifier = 167248384;/* 0x9F80200*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C2_XTD[CANTP1_M2_C2_RXSRVC_XTD_0x9F80201].identifier = 167248385;/* 0x9F80201*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C2_XTD[CANTP1_M2_C2_RXSRVC_XTD_0x19FA0300].identifier = 435815168;/* 0x19FA0300*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C2_XTD[CANTP1_M2_C2_RXSRVC_XTD_0x19FA0301].identifier = 435815169;/* 0x19FA0301*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C2_XTD[CANTP1_M2_C2_RXSRVC_XTD_0x9F80100].identifier = 167248128;/* 0x9F80100*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C2_XTD[CANTP1_M2_C2_RXSRVC_XTD_0x9F80101].identifier = 167248129;/* 0x9F80101*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M2_C2_XTD[CANTP1_M2_C2_RXSRVC_XTD_0xDF01000].identifier = 233836544;/* 0xDF01000*/

  /* dSPACE RTICAN RX Message Block: "Tracks" Id:1635 */
  L4_MABX_B.SFunction1_o72 = 0;        /* processed - flag */
  L4_MABX_B.SFunction1_o73 = 0;        /* timestamp */
  L4_MABX_B.SFunction1_o74 = 0;        /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_XPR_1" Id:419387472 */
  L4_MABX_B.SFunction1_o3_ff = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o4_ah = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_bs = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "Prop2C2_Status_30" Id:419382064 */
  L4_MABX_B.SFunction1_o11_l = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o12_h = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o13_l = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "COGSOGRapidUpdate_00" Id:167248384 */
  L4_MABX_B.SFunction1_o5_p0 = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o6_jb = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o7_k = 0;       /* deltatime */

  /* dSPACE RTICAN RX Message Block: "COGSOGRapidUpdate_00" Id:167248385 */
  L4_MABX_B.SFunction1_o5_i2 = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o6_pz = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o7_dq = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "GNSSDOPs_01" Id:435815168 */
  L4_MABX_B.SFunction1_o7_ob = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o8_h0 = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o9_nr = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "GNSSDOPs_01" Id:435815169 */
  L4_MABX_B.SFunction1_o7_eh = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o8_mx = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o9_ie = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PosRapidUpdate_01" Id:167248128 */
  L4_MABX_B.SFunction1_o3_e = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o4_mw = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_k = 0;       /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PosRapidUpdate_01" Id:167248129 */
  L4_MABX_B.SFunction1_o3_gm = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o4_hc = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_ib = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "SystemTime_01" Id:233836544 */
  L4_MABX_B.SFunction1_o5_f = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o6_h = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o7_li = 0;      /* deltatime */

  /* dSPACE I/O Board DS1_RTICAN #3 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[2].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M3_C1 = can_tp1_channel_init(can_tp1_address_table[2].
    module_addr, 0, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M3_C1,
    CAN_TP1_TERMINATION_OFF);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M3_C1_STD = can_tp1_msg_tx_register(can_type1_channel_M3_C1, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M3_C1_XTD = can_tp1_msg_tx_register(can_type1_channel_M3_C1, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M3_C1_STD = can_tp1_msg_rx_register(can_type1_channel_M3_C1,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C1_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C1_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M3_C1_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M3_C1_MCRCLT_STD );
  }

  /* ... Initialize XTD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M3_C1_XTD = can_tp1_msg_rx_register(can_type1_channel_M3_C1,
      1, 1, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C1_XTD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C1_XTD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M3_C1_XTD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M3_C1_MCRCLT_XTD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "EEC1_00" Id:217056256 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_XTD_0XCF00400] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 3, 217056256, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "VDC2_0B" Id:418384139 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_XTD_0X18F0090B] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 4, 418384139, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "RQST_13_E4" Id:417993700 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C1_TX_XTD_0X18EA13E4] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C1, 4, 417993700, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M3_C1[CANTP1_M3_C1_Status] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M3_C1[CANTP1_M3_C1_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M3_C1[CANTP1_M3_C1_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M3_C1[CANTP1_M3_C1_AckErrors] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M3_C1[CANTP1_M3_C1_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M3_C1[CANTP1_M3_C1_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M3_C1[CANTP1_M3_C1_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M3_C1[CANTP1_M3_C1_RXLost] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M3_C1[CANTP1_M3_C1_DataLost] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M3_C1[CANTP1_M3_C1_RXOK] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M3_C1[CANTP1_M3_C1_TXOK] = can_tp1_service_register
    (can_type1_channel_M3_C1,CAN_TP1_SERVICE_TX_OK);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M3_C2 = can_tp1_channel_init(can_tp1_address_table[2].
    module_addr, 1, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M3_C2,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M3_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M3_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M3_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M3_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* ... Initialize STD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M3_C2_STD = can_tp1_msg_rx_register(can_type1_channel_M3_C2,
      0, 1, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C2_STD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C2_STD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M3_C2_STD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M3_C2_MCRCLT_STD );
  }

  /* ... Initialize XTD RX message for RX Service support */
  {
    UInt32 mask = 0;
    UInt32 queueSize = 64;
    UInt32 msgId = 1;
    CANTP1_RX_SPMSG_M3_C2_XTD = can_tp1_msg_rx_register(can_type1_channel_M3_C2,
      1, 1, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DATA_INFO |
      CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT);

    /* set the queue depth */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C2_XTD,CAN_TP1_MSG_DSMCR_BUFFER,
                    &queueSize);

    /* set the mask to select which messages are received by service mode */
    can_tp1_msg_set(CANTP1_RX_SPMSG_M3_C2_XTD,CAN_TP1_MSG_MASK, &mask);

    /* create the r-buffer */
    can_tp1_dsmcr_client_create(CANTP1_RX_SPMSG_M3_C2_XTD,
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_RX_M3_C2_MCRCLT_XTD );
  }

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "CCVS1_00" Id:218034432 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0XCFEF100] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C2, 4, 218034432, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "PropB_REAX_5_E4" Id:419429092 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFFAE4] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C2, 5, 419429092, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO) |
     CAN_TP1_TIMECOUNT_INFO | CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  {
    UInt32 TXQueueSize = 2;

    /* create a queue for loopback access */
    can_tp1_msg_set( can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFFAE4],
                    CAN_TP1_MSG_DSMCR_BUFFER, &TXQueueSize );

    /* register this message as client for loopback queue access	*/
    can_tp1_dsmcr_client_create( can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFFAE4],
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL,
      &CANTP1_TX_M3_C2_MCRCLT_XTD_0X18FFFAE4 );
  }

  /* dSPACE RTICAN TX Message Block: "Std_COGSOGRapidUpdate_01" Id:7 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X7] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C2, 0, 7, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO) |
     CAN_TP1_TIMECOUNT_INFO | CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  {
    UInt32 TXQueueSize = 2;

    /* create a queue for loopback access */
    can_tp1_msg_set( can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X7],
                    CAN_TP1_MSG_DSMCR_BUFFER, &TXQueueSize );

    /* register this message as client for loopback queue access	*/
    can_tp1_dsmcr_client_create( can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X7],
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_TX_M3_C2_MCRCLT_STD_0X7 );
  }

  /* dSPACE RTICAN TX Message Block: "Std_PosRapidUpdate_01" Id:3 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X3] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C2, 0, 3, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "PropB_REAX_1_E4" Id:419426276 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFEFE4] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C2, 5, 419426276, CAN_TP1_EXT, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO) |
     CAN_TP1_TIMECOUNT_INFO | CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  {
    UInt32 TXQueueSize = 2;

    /* create a queue for loopback access */
    can_tp1_msg_set( can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFEFE4],
                    CAN_TP1_MSG_DSMCR_BUFFER, &TXQueueSize );

    /* register this message as client for loopback queue access	*/
    can_tp1_dsmcr_client_create( can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFEFE4],
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL,
      &CANTP1_TX_M3_C2_MCRCLT_XTD_0X18FFEFE4 );
  }

  /* dSPACE RTICAN TX Message Block: "Std_OdometryData" Id:10 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XA] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C2, 1, 10, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Std_SystemTime_01" Id:5 */
  /* ... Register message */
  can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X5] = can_tp1_msg_tx_register
    (can_type1_channel_M3_C2, 0, 5, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO) |
     CAN_TP1_TIMECOUNT_INFO | CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  {
    UInt32 TXQueueSize = 2;

    /* create a queue for loopback access */
    can_tp1_msg_set( can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X5],
                    CAN_TP1_MSG_DSMCR_BUFFER, &TXQueueSize );

    /* register this message as client for loopback queue access	*/
    can_tp1_dsmcr_client_create( can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X5],
      CAN_TP1_DSMCR_OVERRUN_OVERWRITE, NULL, &CANTP1_TX_M3_C2_MCRCLT_STD_0X5 );
  }

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M3_C2[CANTP1_M3_C2_Status] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M3_C2[CANTP1_M3_C2_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M3_C2[CANTP1_M3_C2_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M3_C2[CANTP1_M3_C2_AckErrors] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M3_C2[CANTP1_M3_C2_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M3_C2[CANTP1_M3_C2_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M3_C2[CANTP1_M3_C2_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M3_C2[CANTP1_M3_C2_RXLost] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M3_C2[CANTP1_M3_C2_DataLost] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M3_C2[CANTP1_M3_C2_RXOK] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M3_C2[CANTP1_M3_C2_TXOK] = can_tp1_service_register
    (can_type1_channel_M3_C2,CAN_TP1_SERVICE_TX_OK);

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M3_C1_XTD[CANTP1_M3_C1_RXSRVC_XTD_0xC010305].identifier = 201392901;/* 0xC010305*/

  /* initializing user accessible RX service STD-Message array */
  can_type1_M3_C2_STD[CANTP1_M3_C2_RXSRVC_STD_0x302].identifier = 770;/* 0x302*/

  /* initializing user accessible RX service STD-Message array */
  can_type1_M3_C2_STD[CANTP1_M3_C2_RXSRVC_STD_0x303].identifier = 771;/* 0x303*/

  /* initializing user accessible RX service STD-Message array */
  can_type1_M3_C2_STD[CANTP1_M3_C2_RXSRVC_STD_0x301].identifier = 769;/* 0x301*/

  /* initializing user accessible RX service STD-Message array */
  can_type1_M3_C2_STD[CANTP1_M3_C2_RXSRVC_STD_0x606].identifier = 1542;/* 0x606*/

  /* initializing user accessible RX service STD-Message array */
  can_type1_M3_C2_STD[CANTP1_M3_C2_RXSRVC_STD_0x605].identifier = 1541;/* 0x605*/

  /* initializing user accessible RX service STD-Message array */
  can_type1_M3_C2_STD[CANTP1_M3_C2_RXSRVC_STD_0x604].identifier = 1540;/* 0x604*/

  /* initializing user accessible RX service XTD-Message array */
  can_type1_M3_C2_XTD[CANTP1_M3_C2_RXSRVC_XTD_0x18FFF013].identifier = 419426323;/* 0x18FFF013*/

  /* dSPACE RTICAN RX Message Block: "TC1_03_05" Id:201392901 */
  L4_MABX_B.SFunction1_o26 = 0;        /* processed - flag */
  L4_MABX_B.SFunction1_o27 = 0;        /* timestamp */
  L4_MABX_B.SFunction1_o28 = 0;        /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PropB_REAX_2_13" Id:419426323 */
  L4_MABX_B.SFunction1_o3_a = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o4_gz = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o5_pk = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PX2_LaneEdgeLeft" Id:770 */
  L4_MABX_B.SFunction1_o4_n5 = 0;      /* processed - flag */
  L4_MABX_B.SFunction1_o5_h = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o6_av = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PX2_LaneEdgeRight" Id:771 */
  L4_MABX_B.SFunction1_o4_j = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o5_al = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o6_c = 0;       /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PX2_LanePosEst" Id:769 */
  L4_MABX_B.SFunction1_o5_j = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o6_eu = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o7_lv = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PX2_MapLaneEgoLeft" Id:1542 */
  L4_MABX_B.SFunction1_o7_d = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o8_f = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o9_k = 0;       /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PX2_MapLaneEgoRight" Id:1541 */
  L4_MABX_B.SFunction1_o7_a = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o8_i = 0;       /* timestamp */
  L4_MABX_B.SFunction1_o9_eu = 0;      /* deltatime */

  /* dSPACE RTICAN RX Message Block: "PX2_EgoLanePos" Id:1540 */
  L4_MABX_B.SFunction1_o7_m = 0;       /* processed - flag */
  L4_MABX_B.SFunction1_o8_c5 = 0;      /* timestamp */
  L4_MABX_B.SFunction1_o9_eo = 0;      /* deltatime */

  /* dSPACE I/O Board RTICAN_GLOBAL #0 */

  /* dSPACE I/O Board DS1401_RTIETHXCP #1 */
  /* set used service */
  service_instance_used = 0;

  /* XCP service init */
  DSXCP_init();
}

/* Function rti_mdl_slave_load() is empty */
#define rti_mdl_slave_load()

/* Function rti_mdl_rtk_initialize() is empty */
#define rti_mdl_rtk_initialize()

static void rti_mdl_initialize_io_units(void)
{
  /* dSPACE I/O Board DS1401STDDIOT4 #1 Unit:DIGOUT */
  /* re-adjust the supply rails for channel 4 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH4, 1, 0);

  /* write initialization value to digital output channel 4 on port 1 */
  dio_tp4_digout_write(DIO_TP4_1_MODULE_ADDR , 1, DIO_TP4_MASK_CH4, (UInt16) 0);

  /* re-adjust the supply rails for channel 2 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH2, 1, 0);

  /* write initialization value to digital output channel 2 on port 1 */
  dio_tp4_digout_write(DIO_TP4_1_MODULE_ADDR , 1, DIO_TP4_MASK_CH2, (UInt16) 0);

  /* re-adjust the supply rails for channel 1 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH1, 1, 0);

  /* write initialization value to digital output channel 1 on port 1 */
  dio_tp4_digout_write(DIO_TP4_1_MODULE_ADDR , 1, DIO_TP4_MASK_CH1, (UInt16) 0);

  /* re-adjust the supply rails for channel 3 on port 1 */
  dio_tp4_digout_init(DIO_TP4_1_MODULE_ADDR, 1, DIO_TP4_MASK_CH3, 1, 0);

  /* write initialization value to digital output channel 3 on port 1 */
  dio_tp4_digout_write(DIO_TP4_1_MODULE_ADDR , 1, DIO_TP4_MASK_CH3, (UInt16) 0);

  /* re-adjustment: PWM generation setup for channel 1 on port 2 */
  dio_tp4_pwm_init(DIO_TP4_1_MODULE_ADDR, 2, DIO_TP4_MASK_CH1, 1, 0,
                   DIO_TP4_TIMING_RANGE2, DIO_TP4_PWM);

  /* write initial values of PWM Period and DutyCycle for output channel 1 on port 2 */
  dio_tp4_pwm_update(DIO_TP4_1_MODULE_ADDR , 2, 1, (dsfloat) 0.005, (dsfloat)
                     0.1);

  /* re-adjustment: PWM generation setup for channel 2 on port 2 */
  dio_tp4_pwm_init(DIO_TP4_1_MODULE_ADDR, 2, DIO_TP4_MASK_CH2, 1, 0,
                   DIO_TP4_TIMING_RANGE2, DIO_TP4_PWM);

  /* write initial values of PWM Period and DutyCycle for output channel 2 on port 2 */
  dio_tp4_pwm_update(DIO_TP4_1_MODULE_ADDR , 2, 2, (dsfloat) 0.005, (dsfloat)
                     0.2);

  /* dSPACE I/O Board DS1401STDDIOT4 #1 Unit:DIGOUT Group:BITOUTCH */
  /* enable all digital output ports (no port wise Dis-Enabling supported) */
  /* called once per module for all dig output ports */
  dio_tp4_digout_mode_set(DIO_TP4_1_MODULE_ADDR, DIO_TP4_DIGOUT_ENABLE);

  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M1_C1, CAN_TP1_INT_ENABLE);

  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M1_C2, CAN_TP1_INT_ENABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(0);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[0].module_addr);

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M1_C1_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN XTD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M1_C1_XTD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18FF04FC])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18F0018B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0XC010305])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18ECFF05])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_XTD_0X18EBFF05])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M1_C2_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN XTD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M1_C2_XTD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FEF100])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      if (NULL != CANTP1_PTR_M1_C2_XTD_0x18FFFAE4) {
        UInt32 i;

        /* ... Set corresponding Loopback Msg-Data to zero */
        for (i=0;i<8;i++)
          CANTP1_PTR_M1_C2_XTD_0x18FFFAE4[i]= 0;
      }

      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFFAE4])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      if (NULL != CANTP1_PTR_M1_C2_XTD_0x18FFEFE4) {
        UInt32 i;

        /* ... Set corresponding Loopback Msg-Data to zero */
        for (i=0;i<8;i++)
          CANTP1_PTR_M1_C2_XTD_0x18FFEFE4[i]= 0;
      }

      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_XTD_0X18FFEFE4])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE I/O Board DS1_RTICAN #2 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M2_C1, CAN_TP1_INT_ENABLE);

  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M2_C2, CAN_TP1_INT_ENABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(1);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[1].module_addr);

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M2_C1_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN XTD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M2_C1_XTD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0X18FF04FC])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0XCFF01B3])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0XCFF5665])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_XTD_0X18FEF1E3])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M2_C2_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN XTD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M2_C2_XTD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0X18FEAE31])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0X18FEF500])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0X18F02DE4])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C2_TX_XTD_0XCF00400])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE I/O Board DS1_RTICAN #3 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M3_C1, CAN_TP1_INT_ENABLE);

  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M3_C2, CAN_TP1_INT_ENABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(2);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[2].module_addr);

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M3_C1_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN XTD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][1] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M3_C1_XTD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][3] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_XTD_0XCF00400])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][4] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_XTD_0X18F0090B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][4] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C1_TX_XTD_0X18EA13E4])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M3_C2_STD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE RTICAN XTD Srvc-Message Block */
  {
    static int numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][1] = can_tp1_msg_wakeup
              (CANTP1_RX_SPMSG_M3_C2_XTD))== DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][4] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0XCFEF100])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      if (NULL != CANTP1_PTR_M3_C2_XTD_0x18FFFAE4) {
        UInt32 i;

        /* ... Set corresponding Loopback Msg-Data to zero */
        for (i=0;i<8;i++)
          CANTP1_PTR_M3_C2_XTD_0x18FFFAE4[i]= 0;
      }

      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][5] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFFAE4])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      if (NULL != CANTP1_PTR_M3_C2_STD_0x7) {
        UInt32 i;

        /* ... Set corresponding Loopback Msg-Data to zero */
        for (i=0;i<8;i++)
          CANTP1_PTR_M3_C2_STD_0x7[i]= 0;
      }

      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X7])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X3])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      if (NULL != CANTP1_PTR_M3_C2_XTD_0x18FFEFE4) {
        UInt32 i;

        /* ... Set corresponding Loopback Msg-Data to zero */
        for (i=0;i<8;i++)
          CANTP1_PTR_M3_C2_XTD_0x18FFEFE4[i]= 0;
      }

      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][5] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_TX_XTD_0X18FFEFE4])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][1] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XA])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      if (NULL != CANTP1_PTR_M3_C2_STD_0x5) {
        UInt32 i;

        /* ... Set corresponding Loopback Msg-Data to zero */
        for (i=0;i<8;i++)
          CANTP1_PTR_M3_C2_STD_0x5[i]= 0;
      }

      /* ... Wake message up */
      while ((rtican_type1_tq_error[2][0] = can_tp1_msg_wakeup
              (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X5])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }
}

/* Function rti_mdl_acknowledge_interrupts() is empty */
#define rti_mdl_acknowledge_interrupts()

/* Function rti_mdl_timetables_register() is empty */
#define rti_mdl_timetables_register()

/* Function rti_mdl_timesync_simstate() is empty */
#define rti_mdl_timesync_simstate()

/* Function rti_mdl_timesync_baserate() is empty */
#define rti_mdl_timesync_baserate()

static void rti_mdl_background(void)
{
  /* Local variables for absolute time support */
  rtk_timestamp_type absTaskTime;
  double absTime = 0;

  /* Get counter values for absolute time */
  ts_timestamp_read(&absTaskTime);
  absTime = ts_time_calculate(&absTaskTime);

  /* Update absolute time counters for block: <S386>/Background */
  L4_MABX_M->Timing.clockTickH9 = (UInt32)(absTime);
  L4_MABX_M->Timing.clockTick9 = (UInt32)((absTime-(UInt32)(absTime))*
    4294967296.0);
  L4_MABX_M->Timing.t[9] = L4_MABX_M->Timing.clockTick9 *
    L4_MABX_M->Timing.stepSize9 + L4_MABX_M->Timing.clockTickH9 *
    L4_MABX_M->Timing.stepSize9 * 4294967296.0;

  /* dSPACE Background Task Block: <S386>/Background */
  /* ... Execute for: RUN */
  if (simState == RUN) {
    {
      /* S-Function (rti_commonblock): '<S394>/S-Function1' */
      L4_MABX_Background_Task();

      /* End of Outputs for S-Function (rti_commonblock): '<S394>/S-Function1' */
    }
  }

  /* DsDaq background call */
  DsDaq_Background(0);

  /* dSPACE I/O Board DS1_RTICAN #1 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[0].module_addr, 0);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 1) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[0].module_addr);
  }

  /* dSPACE I/O Board DS1_RTICAN #2 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[1].module_addr, 1);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 2) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[1].module_addr);
  }

  /* dSPACE I/O Board DS1_RTICAN #3 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[2].module_addr, 2);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 3) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[2].module_addr);
  }

  /* dSPACE I/O Board DS1401_RTIETHXCP #1 */
  /* generate XCP service background call */
  DSXCP_background();
}

__INLINE void rti_mdl_sample_input(void)
{
  /* Calls for base sample time: [0.01, 0.0] */
  /* dSPACE I/O Board DS1401STDDIOT4 #1 Unit:BITINCH */
  {
    /* get digital signal state on channel 3 on port 1 */
    UInt16 inputValue = dio_tp4_digin_read(DIO_TP4_1_MODULE_ADDR, 1,
      DIO_TP4_MASK_CH3);
    L4_MABX_B.SFunction1_d = (boolean_T) (inputValue >> (3 - 1));
  }

  {
    /* get digital signal state on channel 1 on port 1 */
    UInt16 inputValue = dio_tp4_digin_read(DIO_TP4_1_MODULE_ADDR, 1,
      DIO_TP4_MASK_CH1);
    L4_MABX_B.SFunction1_o = (boolean_T) (inputValue >> (1 - 1));
  }

  {
    /* get digital signal state on channel 4 on port 1 */
    UInt16 inputValue = dio_tp4_digin_read(DIO_TP4_1_MODULE_ADDR, 1,
      DIO_TP4_MASK_CH4);
    L4_MABX_B.SFunction1_on = (boolean_T) (inputValue >> (4 - 1));
  }

  {
    /* get digital signal state on channel 5 on port 1 */
    UInt16 inputValue = dio_tp4_digin_read(DIO_TP4_1_MODULE_ADDR, 1,
      DIO_TP4_MASK_CH5);
    L4_MABX_B.SFunction1_d3 = (boolean_T) (inputValue >> (5 - 1));
  }

  /* dSPACE I/O Board DS1401STDDIOT4 #1 Unit:PWM2D */
  {
    /* get PWM data frequency and duty cycle from channel 1 on port 2 */
    dio_tp4_pwm2d_read (DIO_TP4_1_MODULE_ADDR, 2, 1, (real_T*)
                        &L4_MABX_B.SFunction1_o1, (real_T*)
                        &L4_MABX_B.SFunction1_o2);
  }

  {
    /* get PWM data frequency and duty cycle from channel 2 on port 2 */
    dio_tp4_pwm2d_read (DIO_TP4_1_MODULE_ADDR, 2, 2, (real_T*)
                        &L4_MABX_B.SFunction1_o1_e, (real_T*)
                        &L4_MABX_B.SFunction1_o2_c);
  }

  {
    /* get PWM data frequency and duty cycle from channel 2 on port 1 */
    dio_tp4_pwm2d_read (DIO_TP4_1_MODULE_ADDR, 1, 2, (real_T*)
                        &L4_MABX_B.SFunction1_o1_f, (real_T*)
                        &L4_MABX_B.SFunction1_o2_i);
  }

  /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC */

  /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
  adc_tp4_sw_trigger(ADC_TP4_1_MODULE_ADDR, ADC_TP4_CONV_START_3|
                     ADC_TP4_CONV_START_2|ADC_TP4_CONV_START_1);

  /* dSPACE I/O Board DS1_RTICAN #1 Unit:RX_SERVICE */
  /* RX Service for XTD CAN messages on controller 1 on Board DS1_B1 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M1_C1_XTD->module,
      CANTP1_RX_SPMSG_M1_C1_XTD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M1_C1_MCRCLT_XTD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M1_C1_MCRCLT_XTD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M1_C1_MCRCLT_XTD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M1_C1_MCRCLT_XTD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M1_C1_MCRCLT_XTD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M1_C1_XTD,
                            CANTP1_M1_C1_NUM_XTD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M1_C1_MCRCLT_XTD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M1_C1_MCRCLT_XTD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M1_C1_MCRCLT_XTD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M1_C1_MCRCLT_XTD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M1_C1_MCRCLT_XTD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M1_C1_MCRCLT_XTD->datalen;
      }
    }
  }

  /* RX Service for XTD CAN messages on controller 2 on Board DS1_B1 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M1_C2_XTD->module,
      CANTP1_RX_SPMSG_M1_C2_XTD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M1_C2_MCRCLT_XTD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M1_C2_MCRCLT_XTD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M1_C2_MCRCLT_XTD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M1_C2_MCRCLT_XTD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M1_C2_MCRCLT_XTD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M1_C2_XTD,
                            CANTP1_M1_C2_NUM_XTD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M1_C2_MCRCLT_XTD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M1_C2_MCRCLT_XTD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M1_C2_MCRCLT_XTD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M1_C2_MCRCLT_XTD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M1_C2_MCRCLT_XTD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M1_C2_MCRCLT_XTD->datalen;
      }
    }
  }

  /* dSPACE I/O Board DS1_RTICAN #2 Unit:RX_SERVICE */
  /* RX Service for STD CAN messages on controller 1 on Board DS1_B2 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M2_C1_STD->module,
      CANTP1_RX_SPMSG_M2_C1_STD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M2_C1_MCRCLT_STD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M2_C1_MCRCLT_STD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M2_C1_MCRCLT_STD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M2_C1_MCRCLT_STD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M2_C1_MCRCLT_STD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M2_C1_STD,
                            CANTP1_M2_C1_NUM_STD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M2_C1_MCRCLT_STD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M2_C1_MCRCLT_STD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M2_C1_MCRCLT_STD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M2_C1_MCRCLT_STD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M2_C1_MCRCLT_STD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M2_C1_MCRCLT_STD->datalen;
      }
    }
  }

  /* RX Service for XTD CAN messages on controller 1 on Board DS1_B2 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M2_C1_XTD->module,
      CANTP1_RX_SPMSG_M2_C1_XTD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M2_C1_MCRCLT_XTD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M2_C1_MCRCLT_XTD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M2_C1_MCRCLT_XTD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M2_C1_MCRCLT_XTD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M2_C1_MCRCLT_XTD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M2_C1_XTD,
                            CANTP1_M2_C1_NUM_XTD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M2_C1_MCRCLT_XTD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M2_C1_MCRCLT_XTD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M2_C1_MCRCLT_XTD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M2_C1_MCRCLT_XTD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M2_C1_MCRCLT_XTD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M2_C1_MCRCLT_XTD->datalen;
      }
    }
  }

  /* RX Service for XTD CAN messages on controller 2 on Board DS1_B2 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M2_C2_XTD->module,
      CANTP1_RX_SPMSG_M2_C2_XTD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M2_C2_MCRCLT_XTD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M2_C2_MCRCLT_XTD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M2_C2_MCRCLT_XTD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M2_C2_MCRCLT_XTD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M2_C2_MCRCLT_XTD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M2_C2_XTD,
                            CANTP1_M2_C2_NUM_XTD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M2_C2_MCRCLT_XTD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M2_C2_MCRCLT_XTD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M2_C2_MCRCLT_XTD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M2_C2_MCRCLT_XTD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M2_C2_MCRCLT_XTD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M2_C2_MCRCLT_XTD->datalen;
      }
    }
  }

  /* dSPACE I/O Board DS1_RTICAN #3 Unit:RX_SERVICE */
  /* RX Service for XTD CAN messages on controller 1 on Board DS1_B3 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M3_C1_XTD->module,
      CANTP1_RX_SPMSG_M3_C1_XTD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M3_C1_MCRCLT_XTD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M3_C1_MCRCLT_XTD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M3_C1_MCRCLT_XTD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M3_C1_MCRCLT_XTD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M3_C1_MCRCLT_XTD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M3_C1_XTD,
                            CANTP1_M3_C1_NUM_XTD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M3_C1_MCRCLT_XTD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M3_C1_MCRCLT_XTD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M3_C1_MCRCLT_XTD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M3_C1_MCRCLT_XTD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M3_C1_MCRCLT_XTD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M3_C1_MCRCLT_XTD->datalen;
      }
    }
  }

  /* RX Service for XTD CAN messages on controller 2 on Board DS1_B3 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M3_C2_XTD->module,
      CANTP1_RX_SPMSG_M3_C2_XTD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M3_C2_MCRCLT_XTD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M3_C2_MCRCLT_XTD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M3_C2_MCRCLT_XTD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M3_C2_MCRCLT_XTD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M3_C2_MCRCLT_XTD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M3_C2_XTD,
                            CANTP1_M3_C2_NUM_XTD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M3_C2_MCRCLT_XTD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M3_C2_MCRCLT_XTD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M3_C2_MCRCLT_XTD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M3_C2_MCRCLT_XTD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M3_C2_MCRCLT_XTD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M3_C2_MCRCLT_XTD->datalen;
      }
    }
  }

  /* RX Service for STD CAN messages on controller 2 on Board DS1_B3 */
  {
    can_tp1_canMsg* found_msg_p;
    can_tp1_canMsg search_msg;
    UInt32 errcode;
    can_tp1_msg_update_all( CANTP1_RX_SPMSG_M3_C2_STD->module,
      CANTP1_RX_SPMSG_M3_C2_STD->queue );
    while (1) {
      errcode = can_tp1_msg_read_from_dsmcr(CANTP1_RX_M3_C2_MCRCLT_STD);
      if (errcode >= CAN_TP1_NO_DATA) {
        break;
      }

      /* Convert timestamp after message read */
      CANTP1_RX_M3_C2_MCRCLT_STD->timestamp = rtk_dsts_time_to_simtime_convert
        (CANTP1_RX_M3_C2_MCRCLT_STD->timestamp);

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (CANTP1_RX_M3_C2_MCRCLT_STD->timestamp == 0.0) {
        continue;
      }

      search_msg.identifier = CANTP1_RX_M3_C2_MCRCLT_STD->identifier;
      found_msg_p = bsearch( &search_msg,
                            &can_type1_M3_C2_STD,
                            CANTP1_M3_C2_NUM_STD_MSG,
                            sizeof(can_tp1_canMsg), rtican1_search_function );
      if (found_msg_p != NULL) {
        int i;
        for (i = 0; i<CANTP1_RX_M3_C2_MCRCLT_STD->datalen;i++) {
          found_msg_p->data[i] = CANTP1_RX_M3_C2_MCRCLT_STD->data[i];
        }

        found_msg_p->timestamp = CANTP1_RX_M3_C2_MCRCLT_STD->timestamp;
        found_msg_p->deltatime = CANTP1_RX_M3_C2_MCRCLT_STD->deltatime;
        found_msg_p->delaytime = CANTP1_RX_M3_C2_MCRCLT_STD->delaytime;
        found_msg_p->datalen = CANTP1_RX_M3_C2_MCRCLT_STD->datalen;
      }
    }
  }
}

static void rti_mdl_daq_service()
{
  /* dSPACE Host Service */
  host_service(1, rtk_current_task_absolute_time_ptr_get());
  DsDaq_Service(0, 0, 1, (DsDaqSTimestampStruct *)
                rtk_current_task_absolute_time_ptr_get());
}

#undef __INLINE

/****** [EOF] ****************************************************************/
