/***************************************************************************

   Source file L4_MABX_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.10 (02-May-2018)
   Wed Nov  6 11:22:45 2019

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "L4_MABX_trc_ptr.h"
#include "L4_MABX.h"
#include "L4_MABX_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile RTMapsRX *p_0_L4_MABX_RTMapsRX_0 = NULL;
volatile real_T *p_0_L4_MABX_real_T_1 = NULL;
volatile RTMapsTX *p_0_L4_MABX_RTMapsTX_2 = NULL;
volatile uint32_T *p_0_L4_MABX_uint32_T_3 = NULL;
volatile real32_T *p_0_L4_MABX_real32_T_4 = NULL;
volatile int32_T *p_0_L4_MABX_int32_T_5 = NULL;
volatile ENUM_XPR_FEEDBACK_T *p_0_L4_MABX_ENUM_XPR_FEEDBACK_T_6 = NULL;
volatile ENUM_XPR_ERROR_STATE_T *p_0_L4_MABX_ENUM_XPR_ERROR_STATE_T_7 = NULL;
volatile ENUM_XPR_CONTROL_MODE_T *p_0_L4_MABX_ENUM_XPR_CONTROL_MODE_T_8 = NULL;
volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_0_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_9 = NULL;
volatile ENUM_SWITCH_T *p_0_L4_MABX_ENUM_SWITCH_T_10 = NULL;
volatile ENUM_SIGNAL_HEALTH_T *p_0_L4_MABX_ENUM_SIGNAL_HEALTH_T_11 = NULL;
volatile ENUM_J1939_SWITCH_T *p_0_L4_MABX_ENUM_J1939_SWITCH_T_12 = NULL;
volatile ENUM_AUTO_CTRL_VEHICLE_STATE_T
  *p_0_L4_MABX_ENUM_AUTO_CTRL_VEHICLE_STATE_T_13 = NULL;
volatile ENUM_AUTO_CTRL_STATE_T *p_0_L4_MABX_ENUM_AUTO_CTRL_STATE_T_14 = NULL;
volatile uint16_T *p_0_L4_MABX_uint16_T_15 = NULL;
volatile int16_T *p_0_L4_MABX_int16_T_16 = NULL;
volatile uint8_T *p_0_L4_MABX_uint8_T_17 = NULL;
volatile int8_T *p_0_L4_MABX_int8_T_18 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_19 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_20 = NULL;
volatile real_T *p_0_L4_MABX_real_T_21 = NULL;
volatile real_T *p_0_L4_MABX_real_T_22 = NULL;
volatile real_T *p_0_L4_MABX_real_T_23 = NULL;
volatile real_T *p_0_L4_MABX_real_T_24 = NULL;
volatile real_T *p_0_L4_MABX_real_T_25 = NULL;
volatile ENUM_XBR_PRIORITY_T *p_0_L4_MABX_ENUM_XBR_PRIORITY_T_26 = NULL;
volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_0_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_27 = NULL;
volatile ENUM_XBR_EBI_MODE_T *p_0_L4_MABX_ENUM_XBR_EBI_MODE_T_28 = NULL;
volatile ENUM_XBR_CONTROL_MODE_T *p_0_L4_MABX_ENUM_XBR_CONTROL_MODE_T_29 = NULL;
volatile real_T *p_0_L4_MABX_real_T_30 = NULL;
volatile real_T *p_0_L4_MABX_real_T_31 = NULL;
volatile real_T *p_0_L4_MABX_real_T_32 = NULL;
volatile real_T *p_0_L4_MABX_real_T_33 = NULL;
volatile real_T *p_0_L4_MABX_real_T_34 = NULL;
volatile real_T *p_0_L4_MABX_real_T_35 = NULL;
volatile real_T *p_0_L4_MABX_real_T_36 = NULL;
volatile real_T *p_0_L4_MABX_real_T_37 = NULL;
volatile real_T *p_0_L4_MABX_real_T_38 = NULL;
volatile real_T *p_0_L4_MABX_real_T_39 = NULL;
volatile real_T *p_0_L4_MABX_real_T_40 = NULL;
volatile real_T *p_0_L4_MABX_real_T_41 = NULL;
volatile real_T *p_0_L4_MABX_real_T_42 = NULL;
volatile real_T *p_0_L4_MABX_real_T_43 = NULL;
volatile real_T *p_0_L4_MABX_real_T_44 = NULL;
volatile real_T *p_0_L4_MABX_real_T_45 = NULL;
volatile real_T *p_0_L4_MABX_real_T_46 = NULL;
volatile real_T *p_0_L4_MABX_real_T_47 = NULL;
volatile real_T *p_0_L4_MABX_real_T_48 = NULL;
volatile real_T *p_0_L4_MABX_real_T_49 = NULL;
volatile real_T *p_0_L4_MABX_real_T_50 = NULL;
volatile real_T *p_0_L4_MABX_real_T_51 = NULL;
volatile real_T *p_0_L4_MABX_real_T_52 = NULL;
volatile real_T *p_0_L4_MABX_real_T_53 = NULL;
volatile real_T *p_0_L4_MABX_real_T_54 = NULL;
volatile real_T *p_0_L4_MABX_real_T_55 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_56 = NULL;
volatile real_T *p_0_L4_MABX_real_T_57 = NULL;
volatile real_T *p_0_L4_MABX_real_T_58 = NULL;
volatile real_T *p_0_L4_MABX_real_T_59 = NULL;
volatile real_T *p_0_L4_MABX_real_T_60 = NULL;
volatile real_T *p_0_L4_MABX_real_T_61 = NULL;
volatile real_T *p_0_L4_MABX_real_T_62 = NULL;
volatile real_T *p_0_L4_MABX_real_T_63 = NULL;
volatile real_T *p_0_L4_MABX_real_T_64 = NULL;
volatile real_T *p_0_L4_MABX_real_T_65 = NULL;
volatile real_T *p_0_L4_MABX_real_T_66 = NULL;
volatile real_T *p_0_L4_MABX_real_T_67 = NULL;
volatile real_T *p_0_L4_MABX_real_T_68 = NULL;
volatile real_T *p_0_L4_MABX_real_T_69 = NULL;
volatile real_T *p_0_L4_MABX_real_T_70 = NULL;
volatile real_T *p_0_L4_MABX_real_T_71 = NULL;
volatile real_T *p_0_L4_MABX_real_T_72 = NULL;
volatile real_T *p_0_L4_MABX_real_T_73 = NULL;
volatile real_T *p_0_L4_MABX_real_T_74 = NULL;
volatile real_T *p_0_L4_MABX_real_T_75 = NULL;
volatile real_T *p_0_L4_MABX_real_T_76 = NULL;
volatile real_T *p_0_L4_MABX_real_T_77 = NULL;
volatile real_T *p_0_L4_MABX_real_T_78 = NULL;
volatile real_T *p_0_L4_MABX_real_T_79 = NULL;
volatile real_T *p_0_L4_MABX_real_T_80 = NULL;
volatile real_T *p_0_L4_MABX_real_T_81 = NULL;
volatile real_T *p_0_L4_MABX_real_T_82 = NULL;
volatile real_T *p_0_L4_MABX_real_T_83 = NULL;
volatile real_T *p_0_L4_MABX_real_T_84 = NULL;
volatile uint8_T *p_0_L4_MABX_uint8_T_85 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_86 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_87 = NULL;
volatile real_T *p_0_L4_MABX_real_T_88 = NULL;
volatile real_T *p_0_L4_MABX_real_T_89 = NULL;
volatile real_T *p_0_L4_MABX_real_T_90 = NULL;
volatile real_T *p_0_L4_MABX_real_T_91 = NULL;
volatile real_T *p_0_L4_MABX_real_T_92 = NULL;
volatile uint8_T *p_0_L4_MABX_uint8_T_93 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_94 = NULL;
volatile real_T *p_0_L4_MABX_real_T_95 = NULL;
volatile real_T *p_0_L4_MABX_real_T_96 = NULL;
volatile real_T *p_0_L4_MABX_real_T_97 = NULL;
volatile real_T *p_0_L4_MABX_real_T_98 = NULL;
volatile real_T *p_0_L4_MABX_real_T_99 = NULL;
volatile real_T *p_0_L4_MABX_real_T_100 = NULL;
volatile real_T *p_0_L4_MABX_real_T_101 = NULL;
volatile real_T *p_0_L4_MABX_real_T_102 = NULL;
volatile real_T *p_0_L4_MABX_real_T_103 = NULL;
volatile real_T *p_0_L4_MABX_real_T_104 = NULL;
volatile real_T *p_0_L4_MABX_real_T_105 = NULL;
volatile real_T *p_0_L4_MABX_real_T_106 = NULL;
volatile real_T *p_0_L4_MABX_real_T_107 = NULL;
volatile real_T *p_0_L4_MABX_real_T_108 = NULL;
volatile real_T *p_0_L4_MABX_real_T_109 = NULL;
volatile real_T *p_0_L4_MABX_real_T_110 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_111 = NULL;
volatile real_T *p_0_L4_MABX_real_T_112 = NULL;
volatile real_T *p_0_L4_MABX_real_T_113 = NULL;
volatile real_T *p_0_L4_MABX_real_T_114 = NULL;
volatile real_T *p_0_L4_MABX_real_T_115 = NULL;
volatile real_T *p_0_L4_MABX_real_T_116 = NULL;
volatile uint8_T *p_0_L4_MABX_uint8_T_117 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_118 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_119 = NULL;
volatile real_T *p_0_L4_MABX_real_T_120 = NULL;
volatile real_T *p_0_L4_MABX_real_T_121 = NULL;
volatile real_T *p_0_L4_MABX_real_T_122 = NULL;
volatile real_T *p_0_L4_MABX_real_T_123 = NULL;
volatile real_T *p_0_L4_MABX_real_T_124 = NULL;
volatile uint8_T *p_0_L4_MABX_uint8_T_125 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_126 = NULL;
volatile real_T *p_0_L4_MABX_real_T_127 = NULL;
volatile real_T *p_0_L4_MABX_real_T_128 = NULL;
volatile real_T *p_0_L4_MABX_real_T_129 = NULL;
volatile real_T *p_0_L4_MABX_real_T_130 = NULL;
volatile real_T *p_0_L4_MABX_real_T_131 = NULL;
volatile real_T *p_0_L4_MABX_real_T_132 = NULL;
volatile uint8_T *p_0_L4_MABX_uint8_T_133 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_134 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_135 = NULL;
volatile real_T *p_0_L4_MABX_real_T_136 = NULL;
volatile real_T *p_0_L4_MABX_real_T_137 = NULL;
volatile real_T *p_0_L4_MABX_real_T_138 = NULL;
volatile real_T *p_0_L4_MABX_real_T_139 = NULL;
volatile real_T *p_0_L4_MABX_real_T_140 = NULL;
volatile uint8_T *p_0_L4_MABX_uint8_T_141 = NULL;
volatile boolean_T *p_0_L4_MABX_boolean_T_142 = NULL;
volatile real_T *p_0_L4_MABX_real_T_143 = NULL;
volatile real_T *p_0_L4_MABX_real_T_144 = NULL;
volatile real_T *p_0_L4_MABX_real_T_145 = NULL;
volatile real_T *p_0_L4_MABX_real_T_146 = NULL;
volatile real_T *p_0_L4_MABX_real_T_147 = NULL;
volatile real_T *p_0_L4_MABX_real_T_148 = NULL;
volatile real_T *p_0_L4_MABX_real_T_149 = NULL;
volatile real_T *p_0_L4_MABX_real_T_150 = NULL;
volatile const uint32_T *p_1_L4_MABX_uint32_T_0 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_0 = NULL;
volatile real_T *p_2_L4_MABX_real_T_1 = NULL;
volatile ENUM_J1939_SWITCH_T *p_2_L4_MABX_ENUM_J1939_SWITCH_T_2 = NULL;
volatile ENUM_SIGNAL_HEALTH_T *p_2_L4_MABX_ENUM_SIGNAL_HEALTH_T_3 = NULL;
volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_2_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_4 = NULL;
volatile real32_T *p_2_L4_MABX_real32_T_5 = NULL;
volatile uint32_T *p_2_L4_MABX_uint32_T_6 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_7 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_8 = NULL;
volatile real_T *p_2_L4_MABX_real_T_9 = NULL;
volatile ENUM_CAN_RX_T *p_2_L4_MABX_ENUM_CAN_RX_T_10 = NULL;
volatile ENUM_CAN_STATUS_DIAG_T *p_2_L4_MABX_ENUM_CAN_STATUS_DIAG_T_11 = NULL;
volatile ENUM_CAN_TX_T *p_2_L4_MABX_ENUM_CAN_TX_T_12 = NULL;
volatile ENUM_J1939_SWITCH_T *p_2_L4_MABX_ENUM_J1939_SWITCH_T_13 = NULL;
volatile ENUM_PEDAL_POS_SIGNAL_SOURCE_T
  *p_2_L4_MABX_ENUM_PEDAL_POS_SIGNAL_SOURCE_T_14 = NULL;
volatile ENUM_REAX_OPERATION_MODE_T *p_2_L4_MABX_ENUM_REAX_OPERATION_MODE_T_15 =
  NULL;
volatile ENUM_SWITCH_T *p_2_L4_MABX_ENUM_SWITCH_T_16 = NULL;
volatile ENUM_XBR_CONTROL_MODE_T *p_2_L4_MABX_ENUM_XBR_CONTROL_MODE_T_17 = NULL;
volatile ENUM_XBR_EBI_MODE_T *p_2_L4_MABX_ENUM_XBR_EBI_MODE_T_18 = NULL;
volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_2_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_19 = NULL;
volatile ENUM_XBR_PRIORITY_T *p_2_L4_MABX_ENUM_XBR_PRIORITY_T_20 = NULL;
volatile ENUM_XPR_CONTROL_MODE_T *p_2_L4_MABX_ENUM_XPR_CONTROL_MODE_T_21 = NULL;
volatile ENUM_XPR_ERROR_STATE_T *p_2_L4_MABX_ENUM_XPR_ERROR_STATE_T_22 = NULL;
volatile ENUM_XPR_INHIBIT_PARK_MANUAL_T
  *p_2_L4_MABX_ENUM_XPR_INHIBIT_PARK_MANUAL_T_23 = NULL;
volatile ENUM_XPR_INHIBIT_UNPARK_MANUAL_T
  *p_2_L4_MABX_ENUM_XPR_INHIBIT_UNPARK_MANUAL_T_24 = NULL;
volatile ENUM_XPR_PARK_MANUAL_T *p_2_L4_MABX_ENUM_XPR_PARK_MANUAL_T_25 = NULL;
volatile ENUM_XPR_UNPARK_MANUAL_T *p_2_L4_MABX_ENUM_XPR_UNPARK_MANUAL_T_26 =
  NULL;
volatile int32_T *p_2_L4_MABX_int32_T_27 = NULL;
volatile real32_T *p_2_L4_MABX_real32_T_28 = NULL;
volatile uint32_T *p_2_L4_MABX_uint32_T_29 = NULL;
volatile int16_T *p_2_L4_MABX_int16_T_30 = NULL;
volatile uint16_T *p_2_L4_MABX_uint16_T_31 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_32 = NULL;
volatile int8_T *p_2_L4_MABX_int8_T_33 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_34 = NULL;
volatile int32_T *p_2_L4_MABX_int32_T_35 = NULL;
volatile int32_T *p_2_L4_MABX_int32_T_36 = NULL;
volatile int32_T *p_2_L4_MABX_int32_T_37 = NULL;
volatile int32_T *p_2_L4_MABX_int32_T_38 = NULL;
volatile int32_T *p_2_L4_MABX_int32_T_39 = NULL;
volatile real_T *p_2_L4_MABX_real_T_40 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_41 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_42 = NULL;
volatile real_T *p_2_L4_MABX_real_T_43 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_44 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_45 = NULL;
volatile real_T *p_2_L4_MABX_real_T_46 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_47 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_48 = NULL;
volatile real_T *p_2_L4_MABX_real_T_49 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_50 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_51 = NULL;
volatile real_T *p_2_L4_MABX_real_T_52 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_53 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_54 = NULL;
volatile real_T *p_2_L4_MABX_real_T_55 = NULL;
volatile boolean_T *p_2_L4_MABX_boolean_T_56 = NULL;
volatile uint8_T *p_2_L4_MABX_uint8_T_57 = NULL;
volatile real_T *p_3_L4_MABX_real_T_0 = NULL;
volatile real32_T *p_3_L4_MABX_real32_T_2 = NULL;
volatile uint32_T *p_3_L4_MABX_uint32_T_3 = NULL;
volatile ENUM_J1939_SWITCH_T *p_3_L4_MABX_ENUM_J1939_SWITCH_T_4 = NULL;
volatile ENUM_XPR_CONTROL_MODE_T *p_3_L4_MABX_ENUM_XPR_CONTROL_MODE_T_5 = NULL;
volatile ENUM_XPR_ERROR_STATE_T *p_3_L4_MABX_ENUM_XPR_ERROR_STATE_T_6 = NULL;
volatile int32_T *p_3_L4_MABX_int32_T_7 = NULL;
volatile uint32_T *p_3_L4_MABX_uint32_T_8 = NULL;
volatile int_T *p_3_L4_MABX_int_T_9 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_10 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_11 = NULL;
volatile int8_T *p_3_L4_MABX_int8_T_12 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_13 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_14 = NULL;
volatile real_T *p_3_L4_MABX_real_T_15 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_16 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_17 = NULL;
volatile real_T *p_3_L4_MABX_real_T_18 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_19 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_20 = NULL;
volatile real_T *p_3_L4_MABX_real_T_21 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_22 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_23 = NULL;
volatile real_T *p_3_L4_MABX_real_T_24 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_25 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_26 = NULL;
volatile real_T *p_3_L4_MABX_real_T_27 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_28 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_29 = NULL;
volatile real_T *p_3_L4_MABX_real_T_30 = NULL;
volatile uint8_T *p_3_L4_MABX_uint8_T_31 = NULL;
volatile boolean_T *p_3_L4_MABX_boolean_T_32 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_L4_MABX_RTMapsRX_0 = &L4_MABX_B.Decoder_o1;
  p_0_L4_MABX_real_T_1 = &L4_MABX_B.SFunction1_o1;
  p_0_L4_MABX_RTMapsTX_2 = &L4_MABX_B.BusCreator;
  p_0_L4_MABX_uint32_T_3 = &L4_MABX_B.Encoder_o2;
  p_0_L4_MABX_real32_T_4 = &L4_MABX_B.PropB_REAX_3_HandwheelTorque;
  p_0_L4_MABX_int32_T_5 = &L4_MABX_B.Decoder_o2;
  p_0_L4_MABX_ENUM_XPR_FEEDBACK_T_6 = &L4_MABX_B.EPBPCMInhibitStatusFeedback;
  p_0_L4_MABX_ENUM_XPR_ERROR_STATE_T_7 = &L4_MABX_B.XPRErrorState;
  p_0_L4_MABX_ENUM_XPR_CONTROL_MODE_T_8 = &L4_MABX_B.XPRControlMode;
  p_0_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_9 = &L4_MABX_B.XBRPassThroughActive;
  p_0_L4_MABX_ENUM_SWITCH_T_10 = &L4_MABX_B.DataTypeConversion_lr;
  p_0_L4_MABX_ENUM_SIGNAL_HEALTH_T_11 = &L4_MABX_B.Pedal_2_pwm_health_state;
  p_0_L4_MABX_ENUM_J1939_SWITCH_T_12 = &L4_MABX_B.BrkPedArbBrakeSwitch;
  p_0_L4_MABX_ENUM_AUTO_CTRL_VEHICLE_STATE_T_13 = &L4_MABX_B.VehCtrlState;
  p_0_L4_MABX_ENUM_AUTO_CTRL_STATE_T_14 = &L4_MABX_B.CtrlState;
  p_0_L4_MABX_uint16_T_15 = &L4_MABX_B.DataTypeConversion_p1;
  p_0_L4_MABX_int16_T_16 = &L4_MABX_B.DataTypeConversion3_jn;
  p_0_L4_MABX_uint8_T_17 = &L4_MABX_B.FixPtUnitDelay2;
  p_0_L4_MABX_int8_T_18 = &L4_MABX_B.DataTypeConversion4_og;
  p_0_L4_MABX_boolean_T_19 = &L4_MABX_B.SFunction1_o;
  p_0_L4_MABX_boolean_T_20 = &L4_MABX_B.If_Then_Else_f4.Switch;
  p_0_L4_MABX_real_T_21 = &L4_MABX_B.If_Then_Else5.Switch;
  p_0_L4_MABX_real_T_22 = &L4_MABX_B.If_Then_Else4.Switch;
  p_0_L4_MABX_real_T_23 = &L4_MABX_B.If_Then_Else2_e.Switch;
  p_0_L4_MABX_real_T_24 = &L4_MABX_B.If_Then_Else1_e.Switch;
  p_0_L4_MABX_real_T_25 = &L4_MABX_B.If_Then_Else_mo.XBRExternalAccelDemand;
  p_0_L4_MABX_ENUM_XBR_PRIORITY_T_26 = &L4_MABX_B.If_Then_Else_mo.XBRPriority;
  p_0_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_27 =
    &L4_MABX_B.If_Then_Else_mo.XBRPassThroughActive;
  p_0_L4_MABX_ENUM_XBR_EBI_MODE_T_28 =
    &L4_MABX_B.If_Then_Else_mo.XBREnduranceBrakeIntegrationMod;
  p_0_L4_MABX_ENUM_XBR_CONTROL_MODE_T_29 =
    &L4_MABX_B.If_Then_Else_mo.XBRControlMode;
  p_0_L4_MABX_real_T_30 = &L4_MABX_B.If_Then_Else1_lk.Switch;
  p_0_L4_MABX_real_T_31 = &L4_MABX_B.If_Then_Else_ee.Switch;
  p_0_L4_MABX_real_T_32 = &L4_MABX_B.If_Then_Else_n.Switch;
  p_0_L4_MABX_real_T_33 = &L4_MABX_B.If_Then_Else_h.Switch;
  p_0_L4_MABX_real_T_34 = &L4_MABX_B.If_Then_Else3_j3.Switch;
  p_0_L4_MABX_real_T_35 = &L4_MABX_B.If_Then_Else2_o.Switch;
  p_0_L4_MABX_real_T_36 = &L4_MABX_B.If_Then_Else1_g.Switch;
  p_0_L4_MABX_real_T_37 = &L4_MABX_B.If_Then_Else_g.Switch;
  p_0_L4_MABX_real_T_38 = &L4_MABX_B.If_Then_Else3_j.Switch;
  p_0_L4_MABX_real_T_39 = &L4_MABX_B.If_Then_Else1_o.Switch;
  p_0_L4_MABX_real_T_40 = &L4_MABX_B.If_Then_Else_k.Switch;
  p_0_L4_MABX_real_T_41 = &L4_MABX_B.If_Then_Else3_h.Switch;
  p_0_L4_MABX_real_T_42 = &L4_MABX_B.If_Then_Else1_fn.Switch;
  p_0_L4_MABX_real_T_43 = &L4_MABX_B.If_Then_Else_c.Switch;
  p_0_L4_MABX_real_T_44 = &L4_MABX_B.If_Then_Else3_c.Switch;
  p_0_L4_MABX_real_T_45 = &L4_MABX_B.If_Then_Else1_j.Switch;
  p_0_L4_MABX_real_T_46 = &L4_MABX_B.If_Then_Else_o.Switch;
  p_0_L4_MABX_real_T_47 = &L4_MABX_B.If_Then_Else3_d.Switch;
  p_0_L4_MABX_real_T_48 = &L4_MABX_B.If_Then_Else1_f.Switch;
  p_0_L4_MABX_real_T_49 = &L4_MABX_B.If_Then_Else_j.Switch;
  p_0_L4_MABX_real_T_50 = &L4_MABX_B.If_Then_Else3.Switch;
  p_0_L4_MABX_real_T_51 = &L4_MABX_B.If_Then_Else1_b.Switch;
  p_0_L4_MABX_real_T_52 = &L4_MABX_B.If_Then_Else_f.Switch;
  p_0_L4_MABX_real_T_53 = &L4_MABX_B.If_Then_Else2.Switch;
  p_0_L4_MABX_real_T_54 = &L4_MABX_B.If_Then_Else1.Switch;
  p_0_L4_MABX_real_T_55 = &L4_MABX_B.If_Then_Else_i.Switch;
  p_0_L4_MABX_boolean_T_56 = &L4_MABX_B.If_Then_Else.Switch;
  p_0_L4_MABX_real_T_57 = &L4_MABX_B.If_Then_Else_m4.Switch;
  p_0_L4_MABX_real_T_58 = &L4_MABX_B.If_Then_Else4_h.Switch;
  p_0_L4_MABX_real_T_59 = &L4_MABX_B.If_Then_Else_ji.Switch;
  p_0_L4_MABX_real_T_60 = &L4_MABX_B.If_Then_Else_bf.Switch;
  p_0_L4_MABX_real_T_61 = &L4_MABX_B.If_Then_Else4_e.Switch;
  p_0_L4_MABX_real_T_62 = &L4_MABX_B.If_Then_Else_gf.Switch;
  p_0_L4_MABX_real_T_63 = &L4_MABX_B.If_Then_Else_jh.Switch;
  p_0_L4_MABX_real_T_64 = &L4_MABX_B.If_Then_Else_og.Switch;
  p_0_L4_MABX_real_T_65 = &L4_MABX_B.If_Then_Else_pz.Switch;
  p_0_L4_MABX_real_T_66 = &L4_MABX_B.If_Then_Else_mm.Vehicle_speed_target;
  p_0_L4_MABX_real_T_67 = &L4_MABX_B.If_Then_Else_n3.Switch;
  p_0_L4_MABX_real_T_68 = &L4_MABX_B.If_Then_Else_lh.Switch;
  p_0_L4_MABX_real_T_69 = &L4_MABX_B.If_Then_Else_mk.Switch;
  p_0_L4_MABX_real_T_70 = &L4_MABX_B.If_Then_Else_b.Switch;
  p_0_L4_MABX_real_T_71 = &L4_MABX_B.If_Then_Else1_o0.Switch;
  p_0_L4_MABX_real_T_72 = &L4_MABX_B.If_Then_Else_m0.Switch;
  p_0_L4_MABX_real_T_73 = &L4_MABX_B.If_Then_Else_co.Switch;
  p_0_L4_MABX_real_T_74 = &L4_MABX_B.If_Then_Else1_m.Switch;
  p_0_L4_MABX_real_T_75 = &L4_MABX_B.If_Then_Else_m.Switch;
  p_0_L4_MABX_real_T_76 = &L4_MABX_B.If_Then_Else1_k.Switch;
  p_0_L4_MABX_real_T_77 = &L4_MABX_B.If_Then_Else_pn.Switch;
  p_0_L4_MABX_real_T_78 = &L4_MABX_B.If_Then_Else1_d.Switch;
  p_0_L4_MABX_real_T_79 = &L4_MABX_B.If_Then_Else_p.Switch;
  p_0_L4_MABX_real_T_80 = &L4_MABX_B.If_Then_Else1_h3.Switch;
  p_0_L4_MABX_real_T_81 = &L4_MABX_B.If_Then_Else_pi.Switch;
  p_0_L4_MABX_real_T_82 = &L4_MABX_B.If_Then_Else_cp.Switch;
  p_0_L4_MABX_real_T_83 = &L4_MABX_B.If_Then_Else_k2.Switch;
  p_0_L4_MABX_real_T_84 = &L4_MABX_B.Calculate_I_term_n.Xold;
  p_0_L4_MABX_uint8_T_85 = &L4_MABX_B.Calculate_I_term_n.FixPtUnitDelay2;
  p_0_L4_MABX_boolean_T_86 = &L4_MABX_B.Calculate_I_term_n.Compare;
  p_0_L4_MABX_boolean_T_87 = &L4_MABX_B.Calculate_I_term_n.If_Then_Else3.Switch;
  p_0_L4_MABX_real_T_88 = &L4_MABX_B.Calculate_I_term_n.If_Then_Else2.Switch;
  p_0_L4_MABX_real_T_89 = &L4_MABX_B.Calculate_I_term_n.If_Then_Else1.Switch;
  p_0_L4_MABX_real_T_90 = &L4_MABX_B.Calculate_I_term_n.If_Then_Else_c.Switch;
  p_0_L4_MABX_real_T_91 = &L4_MABX_B.Calculate_I_term_n.If_Then_Else.Switch;
  p_0_L4_MABX_real_T_92 = &L4_MABX_B.Calculate_D_term_h.MinMax1;
  p_0_L4_MABX_uint8_T_93 = &L4_MABX_B.Calculate_D_term_h.FixPtUnitDelay2;
  p_0_L4_MABX_boolean_T_94 = &L4_MABX_B.Calculate_D_term_h.Unit_Delay1;
  p_0_L4_MABX_real_T_95 = &L4_MABX_B.Calculate_D_term_h.If_Then_Else.Switch;
  p_0_L4_MABX_real_T_96 = &L4_MABX_B.If_Then_Else_a.Switch;
  p_0_L4_MABX_real_T_97 = &L4_MABX_B.If_Then_Else1_dz.Switch;
  p_0_L4_MABX_real_T_98 = &L4_MABX_B.If_Then_Else_br.Switch;
  p_0_L4_MABX_real_T_99 = &L4_MABX_B.If_Then_Else1_kg.Switch;
  p_0_L4_MABX_real_T_100 = &L4_MABX_B.If_Then_Else_bo.Switch;
  p_0_L4_MABX_real_T_101 = &L4_MABX_B.If_Then_Else1_h.Switch;
  p_0_L4_MABX_real_T_102 = &L4_MABX_B.If_Then_Else_ct.Switch;
  p_0_L4_MABX_real_T_103 = &L4_MABX_B.If_Then_Else_nr.Switch;
  p_0_L4_MABX_real_T_104 = &L4_MABX_B.If_Then_Else_ga.Switch;
  p_0_L4_MABX_real_T_105 = &L4_MABX_B.If_Then_Else_ep.Switch;
  p_0_L4_MABX_real_T_106 = &L4_MABX_B.If_Then_Else1_o5.Switch;
  p_0_L4_MABX_real_T_107 = &L4_MABX_B.If_Then_Else_il.Switch;
  p_0_L4_MABX_real_T_108 = &L4_MABX_B.If_Then_Else_nz.Switch;
  p_0_L4_MABX_real_T_109 = &L4_MABX_B.If_Then_Else1_mf.Switch;
  p_0_L4_MABX_real_T_110 = &L4_MABX_B.If_Then_Else_gj.Switch;
  p_0_L4_MABX_boolean_T_111 = &L4_MABX_B.If_Then_Else_l.Switch;
  p_0_L4_MABX_real_T_112 = &L4_MABX_B.If_Then_Else1_gx.Switch;
  p_0_L4_MABX_real_T_113 = &L4_MABX_B.If_Then_Else_fo.Switch;
  p_0_L4_MABX_real_T_114 = &L4_MABX_B.If_Then_Else_iy.Switch;
  p_0_L4_MABX_real_T_115 = &L4_MABX_B.If_Then_Else_bc.Switch;
  p_0_L4_MABX_real_T_116 = &L4_MABX_B.Calculate_I_term_e.Xold;
  p_0_L4_MABX_uint8_T_117 = &L4_MABX_B.Calculate_I_term_e.FixPtUnitDelay2;
  p_0_L4_MABX_boolean_T_118 = &L4_MABX_B.Calculate_I_term_e.Compare;
  p_0_L4_MABX_boolean_T_119 = &L4_MABX_B.Calculate_I_term_e.If_Then_Else3.Switch;
  p_0_L4_MABX_real_T_120 = &L4_MABX_B.Calculate_I_term_e.If_Then_Else2.Switch;
  p_0_L4_MABX_real_T_121 = &L4_MABX_B.Calculate_I_term_e.If_Then_Else1.Switch;
  p_0_L4_MABX_real_T_122 = &L4_MABX_B.Calculate_I_term_e.If_Then_Else_c.Switch;
  p_0_L4_MABX_real_T_123 = &L4_MABX_B.Calculate_I_term_e.If_Then_Else.Switch;
  p_0_L4_MABX_real_T_124 = &L4_MABX_B.Calculate_D_term_p.MinMax1;
  p_0_L4_MABX_uint8_T_125 = &L4_MABX_B.Calculate_D_term_p.FixPtUnitDelay2;
  p_0_L4_MABX_boolean_T_126 = &L4_MABX_B.Calculate_D_term_p.Unit_Delay1;
  p_0_L4_MABX_real_T_127 = &L4_MABX_B.Calculate_D_term_p.If_Then_Else.Switch;
  p_0_L4_MABX_real_T_128 = &L4_MABX_B.If_Then_Else1_bq.Switch;
  p_0_L4_MABX_real_T_129 = &L4_MABX_B.If_Then_Else_nj.Switch;
  p_0_L4_MABX_real_T_130 = &L4_MABX_B.If_Then_Else_bg.Switch;
  p_0_L4_MABX_real_T_131 = &L4_MABX_B.If_Then_Else_ly.Switch;
  p_0_L4_MABX_real_T_132 = &L4_MABX_B.Calculate_I_term.Xold;
  p_0_L4_MABX_uint8_T_133 = &L4_MABX_B.Calculate_I_term.FixPtUnitDelay2;
  p_0_L4_MABX_boolean_T_134 = &L4_MABX_B.Calculate_I_term.Compare;
  p_0_L4_MABX_boolean_T_135 = &L4_MABX_B.Calculate_I_term.If_Then_Else3.Switch;
  p_0_L4_MABX_real_T_136 = &L4_MABX_B.Calculate_I_term.If_Then_Else2.Switch;
  p_0_L4_MABX_real_T_137 = &L4_MABX_B.Calculate_I_term.If_Then_Else1.Switch;
  p_0_L4_MABX_real_T_138 = &L4_MABX_B.Calculate_I_term.If_Then_Else_c.Switch;
  p_0_L4_MABX_real_T_139 = &L4_MABX_B.Calculate_I_term.If_Then_Else.Switch;
  p_0_L4_MABX_real_T_140 = &L4_MABX_B.Calculate_D_term.MinMax1;
  p_0_L4_MABX_uint8_T_141 = &L4_MABX_B.Calculate_D_term.FixPtUnitDelay2;
  p_0_L4_MABX_boolean_T_142 = &L4_MABX_B.Calculate_D_term.Unit_Delay1;
  p_0_L4_MABX_real_T_143 = &L4_MABX_B.Calculate_D_term.If_Then_Else.Switch;
  p_0_L4_MABX_real_T_144 = &L4_MABX_B.If_Then_Else1_p.Switch;
  p_0_L4_MABX_real_T_145 = &L4_MABX_B.If_Then_Else_iz.Switch;
  p_0_L4_MABX_real_T_146 = &L4_MABX_B.If_Then_Else1_lo.Switch;
  p_0_L4_MABX_real_T_147 = &L4_MABX_B.If_Then_Else_ff.Switch;
  p_0_L4_MABX_real_T_148 = &L4_MABX_B.If_Then_Else1_l.Switch;
  p_0_L4_MABX_real_T_149 = &L4_MABX_B.If_Then_Else_oy.Switch;
  p_0_L4_MABX_real_T_150 = &L4_MABX_B.If_Then_Else_fh.Switch;
  p_1_L4_MABX_uint32_T_0 = &L4_MABX_ConstB.Width;
  p_2_L4_MABX_uint8_T_0 = &L4_MABX_P.GLB_SWVERSION_CPV[0];
  p_2_L4_MABX_real_T_1 = &L4_MABX_P.TransferFcnLeadorLag_ICPrevInpu;
  p_2_L4_MABX_ENUM_J1939_SWITCH_T_2 = &L4_MABX_P.CompareToConstant2_const;
  p_2_L4_MABX_ENUM_SIGNAL_HEALTH_T_3 = &L4_MABX_P.CompareToConstant_const_a;
  p_2_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_4 =
    &L4_MABX_P.CompareToConstant_const_m;
  p_2_L4_MABX_real32_T_5 = &L4_MABX_P.IntervalTest_lowlimit;
  p_2_L4_MABX_uint32_T_6 = &L4_MABX_P.Repeating_Sequence_Stair_OutVal[0];
  p_2_L4_MABX_boolean_T_7 = &L4_MABX_P.Repeating_Sequence_Stair_OutV_l[0];
  p_2_L4_MABX_uint8_T_8 = &L4_MABX_P.Operator_BitMask;
  p_2_L4_MABX_real_T_9 = &L4_MABX_P.PID_output_Y0;
  p_2_L4_MABX_ENUM_CAN_RX_T_10 = &L4_MABX_P.Constant_Value_oo;
  p_2_L4_MABX_ENUM_CAN_STATUS_DIAG_T_11 = &L4_MABX_P.Constant_Value_cq;
  p_2_L4_MABX_ENUM_CAN_TX_T_12 = &L4_MABX_P.Constant2_Value_k;
  p_2_L4_MABX_ENUM_J1939_SWITCH_T_13 = &L4_MABX_P.Unit_Delay_34_InitialCondition;
  p_2_L4_MABX_ENUM_PEDAL_POS_SIGNAL_SOURCE_T_14 =
    &L4_MABX_P.APTC_PEDAL_POS_SIG_SOURCE_APV_V;
  p_2_L4_MABX_ENUM_REAX_OPERATION_MODE_T_15 = &L4_MABX_P.Constant_Value_au;
  p_2_L4_MABX_ENUM_SWITCH_T_16 = &L4_MABX_P.CPV3_Value_p;
  p_2_L4_MABX_ENUM_XBR_CONTROL_MODE_T_17 = &L4_MABX_P.XBRControlModeOVR_Value;
  p_2_L4_MABX_ENUM_XBR_EBI_MODE_T_18 =
    &L4_MABX_P.XBREnduranceBrakeIntegrationMod;
  p_2_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_19 = &L4_MABX_P.Constant9_Value_h;
  p_2_L4_MABX_ENUM_XBR_PRIORITY_T_20 = &L4_MABX_P.XBRPriorityOVR_Value;
  p_2_L4_MABX_ENUM_XPR_CONTROL_MODE_T_21 = &L4_MABX_P.CPV_Value_e;
  p_2_L4_MABX_ENUM_XPR_ERROR_STATE_T_22 = &L4_MABX_P.CPV1_Value_i5;
  p_2_L4_MABX_ENUM_XPR_INHIBIT_PARK_MANUAL_T_23 =
    &L4_MABX_P.PROPB_XPR_INHIBIT_PARK_MANUAL_A;
  p_2_L4_MABX_ENUM_XPR_INHIBIT_UNPARK_MANUAL_T_24 =
    &L4_MABX_P.PROPB_XPR_INHIBIT_UNPARK_MANUAL;
  p_2_L4_MABX_ENUM_XPR_PARK_MANUAL_T_25 =
    &L4_MABX_P.PROPB_XPR_PARK_MANUAL_APV_Value;
  p_2_L4_MABX_ENUM_XPR_UNPARK_MANUAL_T_26 =
    &L4_MABX_P.PROPB_XPR_UNPARK_MANUAL_APV_Val;
  p_2_L4_MABX_int32_T_27 = &L4_MABX_P.Merge_InitialOutput;
  p_2_L4_MABX_real32_T_28 = &L4_MABX_P.UnitDelay_InitialCondition_c;
  p_2_L4_MABX_uint32_T_29 = &L4_MABX_P.Constant_Value_jc;
  p_2_L4_MABX_int16_T_30 = &L4_MABX_P.Constant_Value_cy;
  p_2_L4_MABX_uint16_T_31 = &L4_MABX_P.Operator_BitMask_l5;
  p_2_L4_MABX_boolean_T_32 = &L4_MABX_P.E_Value;
  p_2_L4_MABX_int8_T_33 = &L4_MABX_P.Failure_Value;
  p_2_L4_MABX_uint8_T_34 = &L4_MABX_P.for_logging7_Gain;
  p_2_L4_MABX_int32_T_35 = &L4_MABX_P.EXT_TRQ_CTRL_MODE_C.Constant_Value;
  p_2_L4_MABX_int32_T_36 = &L4_MABX_P.EXT_TRQ_CTRL_MODE_B.Constant_Value;
  p_2_L4_MABX_int32_T_37 = &L4_MABX_P.EXT_TRQ_CTRL_MODE_A.Constant_Value;
  p_2_L4_MABX_int32_T_38 = &L4_MABX_P.DEFAULT_TRQ_CTRL_MODE.Constant_Value;
  p_2_L4_MABX_int32_T_39 = &L4_MABX_P.ALL_CTRL_DISABLED.Constant_Value;
  p_2_L4_MABX_real_T_40 = &L4_MABX_P.Calculate_I_term_n.GPID_i_sum_error_init_Y0;
  p_2_L4_MABX_boolean_T_41 = &L4_MABX_P.Calculate_I_term_n.F_GPID_hold_i_term_Y0;
  p_2_L4_MABX_uint8_T_42 =
    &L4_MABX_P.Calculate_I_term_n.FixPtUnitDelay2_InitialConditio;
  p_2_L4_MABX_real_T_43 = &L4_MABX_P.Calculate_D_term_h.GPID_d_term_Y0;
  p_2_L4_MABX_boolean_T_44 =
    &L4_MABX_P.Calculate_D_term_h.Unit_Delay1_InitialCondition;
  p_2_L4_MABX_uint8_T_45 =
    &L4_MABX_P.Calculate_D_term_h.FixPtUnitDelay2_InitialConditio;
  p_2_L4_MABX_real_T_46 = &L4_MABX_P.Calculate_I_term_e.GPID_i_sum_error_init_Y0;
  p_2_L4_MABX_boolean_T_47 = &L4_MABX_P.Calculate_I_term_e.F_GPID_hold_i_term_Y0;
  p_2_L4_MABX_uint8_T_48 =
    &L4_MABX_P.Calculate_I_term_e.FixPtUnitDelay2_InitialConditio;
  p_2_L4_MABX_real_T_49 = &L4_MABX_P.Calculate_D_term_p.GPID_d_term_Y0;
  p_2_L4_MABX_boolean_T_50 =
    &L4_MABX_P.Calculate_D_term_p.Unit_Delay1_InitialCondition;
  p_2_L4_MABX_uint8_T_51 =
    &L4_MABX_P.Calculate_D_term_p.FixPtUnitDelay2_InitialConditio;
  p_2_L4_MABX_real_T_52 = &L4_MABX_P.Calculate_I_term.GPID_i_sum_error_init_Y0;
  p_2_L4_MABX_boolean_T_53 = &L4_MABX_P.Calculate_I_term.F_GPID_hold_i_term_Y0;
  p_2_L4_MABX_uint8_T_54 =
    &L4_MABX_P.Calculate_I_term.FixPtUnitDelay2_InitialConditio;
  p_2_L4_MABX_real_T_55 = &L4_MABX_P.Calculate_D_term.GPID_d_term_Y0;
  p_2_L4_MABX_boolean_T_56 =
    &L4_MABX_P.Calculate_D_term.Unit_Delay1_InitialCondition;
  p_2_L4_MABX_uint8_T_57 =
    &L4_MABX_P.Calculate_D_term.FixPtUnitDelay2_InitialConditio;
  p_3_L4_MABX_real_T_0 = &L4_MABX_DW.FixPtUnitDelay1_DSTATE;
  p_3_L4_MABX_real32_T_2 = &L4_MABX_DW.UnitDelay_DSTATE_d;
  p_3_L4_MABX_uint32_T_3 = &L4_MABX_DW.UnitDelay_DSTATE_n;
  p_3_L4_MABX_ENUM_J1939_SWITCH_T_4 = &L4_MABX_DW.Unit_Delay_34_DSTATE;
  p_3_L4_MABX_ENUM_XPR_CONTROL_MODE_T_5 = &L4_MABX_DW.Unit_Delay_125_DSTATE;
  p_3_L4_MABX_ENUM_XPR_ERROR_STATE_T_6 = &L4_MABX_DW.Unit_Delay_126_DSTATE;
  p_3_L4_MABX_int32_T_7 = &L4_MABX_DW.clockTickCounter;
  p_3_L4_MABX_uint32_T_8 = &L4_MABX_DW.Add_DWORK1;
  p_3_L4_MABX_int_T_9 = &L4_MABX_DW.dsa_tcpip_setup_IWORK;
  p_3_L4_MABX_uint8_T_10 = &L4_MABX_DW.FixPtUnitDelay2_DSTATE;
  p_3_L4_MABX_boolean_T_11 = &L4_MABX_DW.Unit_Delay_DSTATE_kp;
  p_3_L4_MABX_int8_T_12 = &L4_MABX_DW.RateTransition_write_buf;
  p_3_L4_MABX_uint8_T_13 = &L4_MABX_DW.is_active_c4_SUB_ECU_L4_MABX_HW;
  p_3_L4_MABX_boolean_T_14 = &L4_MABX_DW.AlternateMethod;
  p_3_L4_MABX_real_T_15 = &L4_MABX_DW.Calculate_I_term_n.FixPtUnitDelay1_DSTATE;
  p_3_L4_MABX_uint8_T_16 = &L4_MABX_DW.Calculate_I_term_n.FixPtUnitDelay2_DSTATE;
  p_3_L4_MABX_boolean_T_17 =
    &L4_MABX_DW.Calculate_I_term_n.Calculate_I_term_MODE;
  p_3_L4_MABX_real_T_18 = &L4_MABX_DW.Calculate_D_term_h.Unit_Delay2_DSTATE;
  p_3_L4_MABX_uint8_T_19 = &L4_MABX_DW.Calculate_D_term_h.FixPtUnitDelay2_DSTATE;
  p_3_L4_MABX_boolean_T_20 = &L4_MABX_DW.Calculate_D_term_h.Unit_Delay1_DSTATE;
  p_3_L4_MABX_real_T_21 = &L4_MABX_DW.Calculate_I_term_e.FixPtUnitDelay1_DSTATE;
  p_3_L4_MABX_uint8_T_22 = &L4_MABX_DW.Calculate_I_term_e.FixPtUnitDelay2_DSTATE;
  p_3_L4_MABX_boolean_T_23 =
    &L4_MABX_DW.Calculate_I_term_e.Calculate_I_term_MODE;
  p_3_L4_MABX_real_T_24 = &L4_MABX_DW.Calculate_D_term_p.Unit_Delay2_DSTATE;
  p_3_L4_MABX_uint8_T_25 = &L4_MABX_DW.Calculate_D_term_p.FixPtUnitDelay2_DSTATE;
  p_3_L4_MABX_boolean_T_26 = &L4_MABX_DW.Calculate_D_term_p.Unit_Delay1_DSTATE;
  p_3_L4_MABX_real_T_27 = &L4_MABX_DW.Calculate_I_term.FixPtUnitDelay1_DSTATE;
  p_3_L4_MABX_uint8_T_28 = &L4_MABX_DW.Calculate_I_term.FixPtUnitDelay2_DSTATE;
  p_3_L4_MABX_boolean_T_29 = &L4_MABX_DW.Calculate_I_term.Calculate_I_term_MODE;
  p_3_L4_MABX_real_T_30 = &L4_MABX_DW.Calculate_D_term.Unit_Delay2_DSTATE;
  p_3_L4_MABX_uint8_T_31 = &L4_MABX_DW.Calculate_D_term.FixPtUnitDelay2_DSTATE;
  p_3_L4_MABX_boolean_T_32 = &L4_MABX_DW.Calculate_D_term.Unit_Delay1_DSTATE;
}

void L4_MABX_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
