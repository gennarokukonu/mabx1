/*********************** dSPACE target specific file *************************

   Header file L4_MABX_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1401 7.10 (02-May-2018)
   Fri Dec  6 11:54:14 2019

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef RTI_HEADER_L4_MABX_trc_ptr_h_
#define RTI_HEADER_L4_MABX_trc_ptr_h_

/* Include the model header file. */
#include "L4_MABX.h"
#include "L4_MABX_private.h"
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/*
 *  Declare the global TRC pointers
 */
EXTERN_C volatile RTMapsRX *p_0_L4_MABX_RTMapsRX_0;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_1;
EXTERN_C volatile RTMapsTX *p_0_L4_MABX_RTMapsTX_2;
EXTERN_C volatile uint32_T *p_0_L4_MABX_uint32_T_3;
EXTERN_C volatile real32_T *p_0_L4_MABX_real32_T_4;
EXTERN_C volatile int32_T *p_0_L4_MABX_int32_T_5;
EXTERN_C volatile ENUM_XPR_FEEDBACK_T *p_0_L4_MABX_ENUM_XPR_FEEDBACK_T_6;
EXTERN_C volatile ENUM_XPR_ERROR_STATE_T *p_0_L4_MABX_ENUM_XPR_ERROR_STATE_T_7;
EXTERN_C volatile ENUM_XPR_CONTROL_MODE_T *p_0_L4_MABX_ENUM_XPR_CONTROL_MODE_T_8;
EXTERN_C volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_0_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_9;
EXTERN_C volatile ENUM_SWITCH_T *p_0_L4_MABX_ENUM_SWITCH_T_10;
EXTERN_C volatile ENUM_SIGNAL_HEALTH_T *p_0_L4_MABX_ENUM_SIGNAL_HEALTH_T_11;
EXTERN_C volatile ENUM_J1939_SWITCH_T *p_0_L4_MABX_ENUM_J1939_SWITCH_T_12;
EXTERN_C volatile ENUM_AUTO_CTRL_VEHICLE_STATE_T
  *p_0_L4_MABX_ENUM_AUTO_CTRL_VEHICLE_STATE_T_13;
EXTERN_C volatile ENUM_AUTO_CTRL_STATE_T *p_0_L4_MABX_ENUM_AUTO_CTRL_STATE_T_14;
EXTERN_C volatile uint16_T *p_0_L4_MABX_uint16_T_15;
EXTERN_C volatile int16_T *p_0_L4_MABX_int16_T_16;
EXTERN_C volatile uint8_T *p_0_L4_MABX_uint8_T_17;
EXTERN_C volatile int8_T *p_0_L4_MABX_int8_T_18;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_19;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_20;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_21;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_22;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_23;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_24;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_25;
EXTERN_C volatile ENUM_XBR_PRIORITY_T *p_0_L4_MABX_ENUM_XBR_PRIORITY_T_26;
EXTERN_C volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_0_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_27;
EXTERN_C volatile ENUM_XBR_EBI_MODE_T *p_0_L4_MABX_ENUM_XBR_EBI_MODE_T_28;
EXTERN_C volatile ENUM_XBR_CONTROL_MODE_T
  *p_0_L4_MABX_ENUM_XBR_CONTROL_MODE_T_29;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_30;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_31;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_32;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_33;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_34;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_35;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_36;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_37;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_38;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_39;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_40;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_41;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_42;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_43;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_44;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_45;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_46;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_47;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_48;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_49;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_50;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_51;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_52;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_53;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_54;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_55;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_56;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_57;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_58;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_59;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_60;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_61;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_62;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_63;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_64;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_65;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_66;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_67;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_68;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_69;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_70;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_71;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_72;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_73;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_74;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_75;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_76;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_77;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_78;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_79;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_80;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_81;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_82;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_83;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_84;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_85;
EXTERN_C volatile uint8_T *p_0_L4_MABX_uint8_T_86;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_87;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_88;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_89;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_90;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_91;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_92;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_93;
EXTERN_C volatile uint8_T *p_0_L4_MABX_uint8_T_94;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_95;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_96;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_97;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_98;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_99;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_100;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_101;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_102;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_103;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_104;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_105;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_106;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_107;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_108;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_109;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_110;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_111;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_112;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_113;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_114;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_115;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_116;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_117;
EXTERN_C volatile uint8_T *p_0_L4_MABX_uint8_T_118;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_119;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_120;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_121;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_122;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_123;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_124;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_125;
EXTERN_C volatile uint8_T *p_0_L4_MABX_uint8_T_126;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_127;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_128;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_129;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_130;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_131;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_132;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_133;
EXTERN_C volatile uint8_T *p_0_L4_MABX_uint8_T_134;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_135;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_136;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_137;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_138;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_139;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_140;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_141;
EXTERN_C volatile uint8_T *p_0_L4_MABX_uint8_T_142;
EXTERN_C volatile boolean_T *p_0_L4_MABX_boolean_T_143;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_144;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_145;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_146;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_147;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_148;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_149;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_150;
EXTERN_C volatile real_T *p_0_L4_MABX_real_T_151;
EXTERN_C volatile const uint32_T *p_1_L4_MABX_uint32_T_0;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_0;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_1;
EXTERN_C volatile ENUM_J1939_SWITCH_T *p_2_L4_MABX_ENUM_J1939_SWITCH_T_2;
EXTERN_C volatile ENUM_SIGNAL_HEALTH_T *p_2_L4_MABX_ENUM_SIGNAL_HEALTH_T_3;
EXTERN_C volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_2_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_4;
EXTERN_C volatile real32_T *p_2_L4_MABX_real32_T_5;
EXTERN_C volatile uint32_T *p_2_L4_MABX_uint32_T_6;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_7;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_8;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_9;
EXTERN_C volatile ENUM_CAN_RX_T *p_2_L4_MABX_ENUM_CAN_RX_T_10;
EXTERN_C volatile ENUM_CAN_STATUS_DIAG_T *p_2_L4_MABX_ENUM_CAN_STATUS_DIAG_T_11;
EXTERN_C volatile ENUM_CAN_TX_T *p_2_L4_MABX_ENUM_CAN_TX_T_12;
EXTERN_C volatile ENUM_J1939_SWITCH_T *p_2_L4_MABX_ENUM_J1939_SWITCH_T_13;
EXTERN_C volatile ENUM_PEDAL_POS_SIGNAL_SOURCE_T
  *p_2_L4_MABX_ENUM_PEDAL_POS_SIGNAL_SOURCE_T_14;
EXTERN_C volatile ENUM_REAX_OPERATION_MODE_T
  *p_2_L4_MABX_ENUM_REAX_OPERATION_MODE_T_15;
EXTERN_C volatile ENUM_SWITCH_T *p_2_L4_MABX_ENUM_SWITCH_T_16;
EXTERN_C volatile ENUM_XBR_CONTROL_MODE_T
  *p_2_L4_MABX_ENUM_XBR_CONTROL_MODE_T_17;
EXTERN_C volatile ENUM_XBR_EBI_MODE_T *p_2_L4_MABX_ENUM_XBR_EBI_MODE_T_18;
EXTERN_C volatile ENUM_XBR_PASS_THROUGH_ACTIVE_T
  *p_2_L4_MABX_ENUM_XBR_PASS_THROUGH_ACTIVE_T_19;
EXTERN_C volatile ENUM_XBR_PRIORITY_T *p_2_L4_MABX_ENUM_XBR_PRIORITY_T_20;
EXTERN_C volatile ENUM_XPR_CONTROL_MODE_T
  *p_2_L4_MABX_ENUM_XPR_CONTROL_MODE_T_21;
EXTERN_C volatile ENUM_XPR_ERROR_STATE_T *p_2_L4_MABX_ENUM_XPR_ERROR_STATE_T_22;
EXTERN_C volatile ENUM_XPR_INHIBIT_PARK_MANUAL_T
  *p_2_L4_MABX_ENUM_XPR_INHIBIT_PARK_MANUAL_T_23;
EXTERN_C volatile ENUM_XPR_INHIBIT_UNPARK_MANUAL_T
  *p_2_L4_MABX_ENUM_XPR_INHIBIT_UNPARK_MANUAL_T_24;
EXTERN_C volatile ENUM_XPR_PARK_MANUAL_T *p_2_L4_MABX_ENUM_XPR_PARK_MANUAL_T_25;
EXTERN_C volatile ENUM_XPR_UNPARK_MANUAL_T
  *p_2_L4_MABX_ENUM_XPR_UNPARK_MANUAL_T_26;
EXTERN_C volatile int32_T *p_2_L4_MABX_int32_T_27;
EXTERN_C volatile real32_T *p_2_L4_MABX_real32_T_28;
EXTERN_C volatile uint32_T *p_2_L4_MABX_uint32_T_29;
EXTERN_C volatile int16_T *p_2_L4_MABX_int16_T_30;
EXTERN_C volatile uint16_T *p_2_L4_MABX_uint16_T_31;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_32;
EXTERN_C volatile int8_T *p_2_L4_MABX_int8_T_33;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_34;
EXTERN_C volatile int32_T *p_2_L4_MABX_int32_T_35;
EXTERN_C volatile int32_T *p_2_L4_MABX_int32_T_36;
EXTERN_C volatile int32_T *p_2_L4_MABX_int32_T_37;
EXTERN_C volatile int32_T *p_2_L4_MABX_int32_T_38;
EXTERN_C volatile int32_T *p_2_L4_MABX_int32_T_39;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_40;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_41;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_42;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_43;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_44;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_45;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_46;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_47;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_48;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_49;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_50;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_51;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_52;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_53;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_54;
EXTERN_C volatile real_T *p_2_L4_MABX_real_T_55;
EXTERN_C volatile boolean_T *p_2_L4_MABX_boolean_T_56;
EXTERN_C volatile uint8_T *p_2_L4_MABX_uint8_T_57;
EXTERN_C volatile real_T *p_3_L4_MABX_real_T_0;
EXTERN_C volatile real32_T *p_3_L4_MABX_real32_T_2;
EXTERN_C volatile uint32_T *p_3_L4_MABX_uint32_T_3;
EXTERN_C volatile ENUM_J1939_SWITCH_T *p_3_L4_MABX_ENUM_J1939_SWITCH_T_4;
EXTERN_C volatile ENUM_XPR_CONTROL_MODE_T *p_3_L4_MABX_ENUM_XPR_CONTROL_MODE_T_5;
EXTERN_C volatile ENUM_XPR_ERROR_STATE_T *p_3_L4_MABX_ENUM_XPR_ERROR_STATE_T_6;
EXTERN_C volatile int32_T *p_3_L4_MABX_int32_T_7;
EXTERN_C volatile uint32_T *p_3_L4_MABX_uint32_T_8;
EXTERN_C volatile int_T *p_3_L4_MABX_int_T_9;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_10;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_11;
EXTERN_C volatile int8_T *p_3_L4_MABX_int8_T_12;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_13;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_14;
EXTERN_C volatile real_T *p_3_L4_MABX_real_T_15;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_16;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_17;
EXTERN_C volatile real_T *p_3_L4_MABX_real_T_18;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_19;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_20;
EXTERN_C volatile real_T *p_3_L4_MABX_real_T_21;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_22;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_23;
EXTERN_C volatile real_T *p_3_L4_MABX_real_T_24;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_25;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_26;
EXTERN_C volatile real_T *p_3_L4_MABX_real_T_27;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_28;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_29;
EXTERN_C volatile real_T *p_3_L4_MABX_real_T_30;
EXTERN_C volatile uint8_T *p_3_L4_MABX_uint8_T_31;
EXTERN_C volatile boolean_T *p_3_L4_MABX_boolean_T_32;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void L4_MABX_rti_init_trc_pointers(void);

#endif                                 /* RTI_HEADER_L4_MABX_trc_ptr_h_ */
