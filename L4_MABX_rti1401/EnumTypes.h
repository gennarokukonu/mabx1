#ifndef RTW_HEADER_EnumTypes_h_
#define RTW_HEADER_EnumTypes_h_
#include "rtwtypes.h"

/* Enumeration to describe CAN bus status on the microautobox */
#ifndef enum_ENUM_CAN_STATUS_DIAG_T
#define enum_ENUM_CAN_STATUS_DIAG_T

enum ENUM_CAN_STATUS_DIAG_T
{
  ENUM_CAN_STATUS_DIAG_T_ACTIVE = 0,   /* Default value */
  ENUM_CAN_STATUS_DIAG_T_ERROR_WARN,
  ENUM_CAN_STATUS_DIAG_T_BUS_OFF
};

#endif                                 /*enum_ENUM_CAN_STATUS_DIAG_T*/

typedef enum ENUM_CAN_STATUS_DIAG_T ENUM_CAN_STATUS_DIAG_T;

/* Enumeration to select a the signal source for pedal position */
#ifndef enum_ENUM_PEDAL_POS_SIGNAL_SOURCE_T
#define enum_ENUM_PEDAL_POS_SIGNAL_SOURCE_T

enum ENUM_PEDAL_POS_SIGNAL_SOURCE_T
{
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T_DISABLED = 0,/* Default value */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T_CAN_EEC2_00,
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T_SW_EMULATION,
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T_CAN_EEC2_00_AND_SW_EMULATION
};

#endif                                 /*enum_ENUM_PEDAL_POS_SIGNAL_SOURCE_T*/

typedef enum ENUM_PEDAL_POS_SIGNAL_SOURCE_T ENUM_PEDAL_POS_SIGNAL_SOURCE_T;

/* Enumeration of the Supervisor Modes */
#ifndef enum_ENUM_AUTONOMOUS_MODE_T
#define enum_ENUM_AUTONOMOUS_MODE_T

enum ENUM_AUTONOMOUS_MODE_T
{
  ENUM_AUTONOMOUS_MODE_T_AUTO = 0,     /* Default value */
  ENUM_AUTONOMOUS_MODE_T_GHOST
};

#endif                                 /*enum_ENUM_AUTONOMOUS_MODE_T*/

typedef enum ENUM_AUTONOMOUS_MODE_T ENUM_AUTONOMOUS_MODE_T;

/* Enumeration defininga generic 2 bit J1939 switch */
#ifndef enum_ENUM_J1939_SWITCH_T
#define enum_ENUM_J1939_SWITCH_T

enum ENUM_J1939_SWITCH_T
{
  ENUM_J1939_SWITCH_T_OFF = 0,         /* Default value */
  ENUM_J1939_SWITCH_T_ON,
  ENUM_J1939_SWITCH_T_ERROR,
  ENUM_J1939_SWITCH_T_NOT_AVAILABLE
};

#endif                                 /*enum_ENUM_J1939_SWITCH_T*/

typedef enum ENUM_J1939_SWITCH_T ENUM_J1939_SWITCH_T;

/* Enumeration for XPR CONTROL MODE per Bendix Y292203 */
#ifndef enum_ENUM_XPR_CONTROL_MODE_T
#define enum_ENUM_XPR_CONTROL_MODE_T

enum ENUM_XPR_CONTROL_MODE_T
{
  ENUM_XPR_CONTROL_MODE_T_NO_BRAKE_DEMAND = 0,/* Default value */
  ENUM_XPR_CONTROL_MODE_T_DRIVER_BRAKING_ONLY,
  ENUM_XPR_CONTROL_MODE_T_ADDITIONAL_MODE,
  ENUM_XPR_CONTROL_MODE_T_MAXIMUM_MODE,
  ENUM_XPR_CONTROL_MODE_T_FAILSAFE_BRAKING_ACTIVE = 13,
  ENUM_XPR_CONTROL_MODE_T_ERROR,
  ENUM_XPR_CONTROL_MODE_T_NOT_AVAILABLE
};

#endif                                 /*enum_ENUM_XPR_CONTROL_MODE_T*/

typedef enum ENUM_XPR_CONTROL_MODE_T ENUM_XPR_CONTROL_MODE_T;

/* Enumeration for XPR ERROR STATE per Bendix Y292203 */
#ifndef enum_ENUM_XPR_ERROR_STATE_T
#define enum_ENUM_XPR_ERROR_STATE_T

enum ENUM_XPR_ERROR_STATE_T
{
  ENUM_XPR_ERROR_STATE_T_XPR_OK = 0,   /* Default value */
  ENUM_XPR_ERROR_STATE_T_XPR_MESSAGE_MISSING,
  ENUM_XPR_ERROR_STATE_T_XPR_ERROR,
  ENUM_XPR_ERROR_STATE_T_XPR_DISABLED
};

#endif                                 /*enum_ENUM_XPR_ERROR_STATE_T*/

typedef enum ENUM_XPR_ERROR_STATE_T ENUM_XPR_ERROR_STATE_T;

/* Enumeration defininga generic 2 bit J1939 switch */
#ifndef enum_ENUM_SWITCH_T
#define enum_ENUM_SWITCH_T

enum ENUM_SWITCH_T
{
  ENUM_SWITCH_T_OFF = 0,               /* Default value */
  ENUM_SWITCH_T_ON,
  ENUM_SWITCH_T_ERROR,
  ENUM_SWITCH_T_NOT_AVAILABLE
};

#endif                                 /*enum_ENUM_SWITCH_T*/

typedef enum ENUM_SWITCH_T ENUM_SWITCH_T;

/* Enumeration of the Autonomous Vehicle Control Super State */
#ifndef enum_ENUM_AUTO_CTRL_STATE_T
#define enum_ENUM_AUTO_CTRL_STATE_T

enum ENUM_AUTO_CTRL_STATE_T
{
  ENUM_AUTO_CTRL_STATE_T_NOT_AVAILABLE = 0,/* Default value */
  ENUM_AUTO_CTRL_STATE_T_INIT,
  ENUM_AUTO_CTRL_STATE_T_OPERATOR_DISABLED,
  ENUM_AUTO_CTRL_STATE_T_FAULT,
  ENUM_AUTO_CTRL_STATE_T_SELF_TEST,
  ENUM_AUTO_CTRL_STATE_T_AUTO_CTRL_ENABLED
};

#endif                                 /*enum_ENUM_AUTO_CTRL_STATE_T*/

typedef enum ENUM_AUTO_CTRL_STATE_T ENUM_AUTO_CTRL_STATE_T;

/* Enumeration of the Autonomous Vehicle Control Super State */
#ifndef enum_ENUM_AUTO_CTRL_VEHICLE_STATE_T
#define enum_ENUM_AUTO_CTRL_VEHICLE_STATE_T

enum ENUM_AUTO_CTRL_VEHICLE_STATE_T
{
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_NOT_AVAILABLE = 0,/* Default value */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_INIT,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_OPERATOR_DISABLED,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_FAULT,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_SELF_TEST,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_STOPPED_PARKED,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_STOPPED_NEUTRAL,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_STOPPED_DRIVE,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_INITIATE_LAUNCH,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_DRIVING_PEDAL_CONTROL,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_DRIVING_CRUISE_CONTROL,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_NORMAL_BRAKING,
  ENUM_AUTO_CTRL_VEHICLE_STATE_T_EMERGENCY_BRAKING
};

#endif                                 /*enum_ENUM_AUTO_CTRL_VEHICLE_STATE_T*/

typedef enum ENUM_AUTO_CTRL_VEHICLE_STATE_T ENUM_AUTO_CTRL_VEHICLE_STATE_T;

/* Enumeration to select a the signal source for longitudnal speed target */
#ifndef enum_ENUM_LAT_STEER_SOURCE_T
#define enum_ENUM_LAT_STEER_SOURCE_T

enum ENUM_LAT_STEER_SOURCE_T
{
  ENUM_LAT_STEER_SOURCE_T_GPS_PATH = 0,/* Default value */
  ENUM_LAT_STEER_SOURCE_T_OVERRIDE,
  ENUM_LAT_STEER_SOURCE_T_PIC_HARIS,
  ENUM_LAT_STEER_SOURCE_T_PIC_STANLEY,
  ENUM_LAT_STEER_SOURCE_T_PIC_SPEED_SELECT
};

#endif                                 /*enum_ENUM_LAT_STEER_SOURCE_T*/

typedef enum ENUM_LAT_STEER_SOURCE_T ENUM_LAT_STEER_SOURCE_T;

/* Enumeration to select a the signal source for longitudnal speed target */
#ifndef enum_ENUM_LONG_SPEED_DEMAND_SOURCE_T
#define enum_ENUM_LONG_SPEED_DEMAND_SOURCE_T

enum ENUM_LONG_SPEED_DEMAND_SOURCE_T
{
  ENUM_LONG_SPEED_DEMAND_SOURCE_T_GPS_PATH = 0,/* Default value */
  ENUM_LONG_SPEED_DEMAND_SOURCE_T_OVERRIDE,
  ENUM_LONG_SPEED_DEMAND_SOURCE_T_WAYPOINTS
};

#endif                                 /*enum_ENUM_LONG_SPEED_DEMAND_SOURCE_T*/

typedef enum ENUM_LONG_SPEED_DEMAND_SOURCE_T ENUM_LONG_SPEED_DEMAND_SOURCE_T;

/* Enumeration to select the CAN bus to receive a message on, for the microautobox */
#ifndef enum_ENUM_CAN_RX_T
#define enum_ENUM_CAN_RX_T

enum ENUM_CAN_RX_T
{
  ENUM_CAN_RX_T_RX_DISABLED = 0,       /* Default value */
  ENUM_CAN_RX_T_RX_CAN_1,
  ENUM_CAN_RX_T_RX_CAN_2,
  ENUM_CAN_RX_T_RX_CAN_3,
  ENUM_CAN_RX_T_RX_CAN_4,
  ENUM_CAN_RX_T_RX_CAN_5,
  ENUM_CAN_RX_T_RX_CAN_6
};

#endif                                 /*enum_ENUM_CAN_RX_T*/

typedef enum ENUM_CAN_RX_T ENUM_CAN_RX_T;

/* Enumeration to describe Bendix PropB XPR feedback values */
#ifndef enum_ENUM_XPR_FEEDBACK_T
#define enum_ENUM_XPR_FEEDBACK_T

enum ENUM_XPR_FEEDBACK_T
{
  ENUM_XPR_FEEDBACK_T_NOT_AVAILABLE = 0,/* Default value */
  ENUM_XPR_FEEDBACK_T_AVAILABLE_IDLE,
  ENUM_XPR_FEEDBACK_T_APPLIED,
  ENUM_XPR_FEEDBACK_T_ERROR
};

#endif                                 /*enum_ENUM_XPR_FEEDBACK_T*/

typedef enum ENUM_XPR_FEEDBACK_T ENUM_XPR_FEEDBACK_T;

/* Enumeration to describe signal health values */
#ifndef enum_ENUM_SIGNAL_HEALTH_T
#define enum_ENUM_SIGNAL_HEALTH_T

enum ENUM_SIGNAL_HEALTH_T
{
  ENUM_SIGNAL_HEALTH_T_FAULT_INACTIVE = 0,/* Default value */
  ENUM_SIGNAL_HEALTH_T_FAULT_PENDING,
  ENUM_SIGNAL_HEALTH_T_FAULT_ACTIVE,
  ENUM_SIGNAL_HEALTH_T_FAULT_NOT_AVAILABLE = 255
};

#endif                                 /*enum_ENUM_SIGNAL_HEALTH_T*/

typedef enum ENUM_SIGNAL_HEALTH_T ENUM_SIGNAL_HEALTH_T;

/* Enumeration to select the CAN bus to transmit a message on, for the microautobox */
#ifndef enum_ENUM_CAN_TX_T
#define enum_ENUM_CAN_TX_T

enum ENUM_CAN_TX_T
{
  ENUM_CAN_TX_T_TX_DISABLED = 0,       /* Default value */
  ENUM_CAN_TX_T_TX_CAN_1,
  ENUM_CAN_TX_T_TX_CAN_2,
  ENUM_CAN_TX_T_TX_CAN_1_2,
  ENUM_CAN_TX_T_TX_CAN_3,
  ENUM_CAN_TX_T_TX_CAN_1_3,
  ENUM_CAN_TX_T_TX_CAN_2_3,
  ENUM_CAN_TX_T_TX_CAN_1_2_3,
  ENUM_CAN_TX_T_TX_CAN_4,
  ENUM_CAN_TX_T_TX_CAN_1_4,
  ENUM_CAN_TX_T_TX_CAN_2_4,
  ENUM_CAN_TX_T_TX_CAN_1_2_4,
  ENUM_CAN_TX_T_TX_CAN_3_4,
  ENUM_CAN_TX_T_TX_CAN_1_3_4,
  ENUM_CAN_TX_T_TX_CAN_2_3_4,
  ENUM_CAN_TX_T_TX_CAN_1_2_3_4,
  ENUM_CAN_TX_T_TX_CAN_5,
  ENUM_CAN_TX_T_TX_CAN_1_5,
  ENUM_CAN_TX_T_TX_CAN_2_5,
  ENUM_CAN_TX_T_TX_CAN_1_2_5,
  ENUM_CAN_TX_T_TX_CAN_3_5,
  ENUM_CAN_TX_T_TX_CAN_1_3_5,
  ENUM_CAN_TX_T_TX_CAN_2_3_5,
  ENUM_CAN_TX_T_TX_CAN_1_2_3_5,
  ENUM_CAN_TX_T_TX_CAN_4_5,
  ENUM_CAN_TX_T_TX_CAN_1_4_5,
  ENUM_CAN_TX_T_TX_CAN_2_4_5,
  ENUM_CAN_TX_T_TX_CAN_1_2_4_5,
  ENUM_CAN_TX_T_TX_CAN_3_4_5,
  ENUM_CAN_TX_T_TX_CAN_1_3_4_5,
  ENUM_CAN_TX_T_TX_CAN_2_3_4_5,
  ENUM_CAN_TX_T_TX_CAN_1_2_3_4_5,
  ENUM_CAN_TX_T_TX_CAN_6,
  ENUM_CAN_TX_T_TX_CAN_1_6,
  ENUM_CAN_TX_T_TX_CAN_2_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_6,
  ENUM_CAN_TX_T_TX_CAN_3_6,
  ENUM_CAN_TX_T_TX_CAN_1_3_6,
  ENUM_CAN_TX_T_TX_CAN_2_3_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_3_6,
  ENUM_CAN_TX_T_TX_CAN_4_6,
  ENUM_CAN_TX_T_TX_CAN_1_4_6,
  ENUM_CAN_TX_T_TX_CAN_2_4_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_4_6,
  ENUM_CAN_TX_T_TX_CAN_3_4_6,
  ENUM_CAN_TX_T_TX_CAN_1_3_4_6,
  ENUM_CAN_TX_T_TX_CAN_2_3_4_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_3_4_6,
  ENUM_CAN_TX_T_TX_CAN_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_5_6,
  ENUM_CAN_TX_T_TX_CAN_2_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_5_6,
  ENUM_CAN_TX_T_TX_CAN_3_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_3_5_6,
  ENUM_CAN_TX_T_TX_CAN_2_3_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_3_5_6,
  ENUM_CAN_TX_T_TX_CAN_4_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_4_5_6,
  ENUM_CAN_TX_T_TX_CAN_2_4_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_4_5_6,
  ENUM_CAN_TX_T_TX_CAN_3_4_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_3_4_5_6,
  ENUM_CAN_TX_T_TX_CAN_2_3_4_5_6,
  ENUM_CAN_TX_T_TX_CAN_1_2_3_4_5_6
};

#endif                                 /*enum_ENUM_CAN_TX_T*/

typedef enum ENUM_CAN_TX_T ENUM_CAN_TX_T;

/* Enumeration to inhibit park command */
#ifndef enum_ENUM_XPR_INHIBIT_PARK_MANUAL_T
#define enum_ENUM_XPR_INHIBIT_PARK_MANUAL_T

enum ENUM_XPR_INHIBIT_PARK_MANUAL_T
{
  ENUM_XPR_INHIBIT_PARK_MANUAL_T_NO_OVERRIDE = 0,/* Default value */
  ENUM_XPR_INHIBIT_PARK_MANUAL_T_INHIBIT_TRACTOR_PARK_BRAKE_COMMAND,
  ENUM_XPR_INHIBIT_PARK_MANUAL_T_INHIBIT_TRAILER_PARK_BRAKE_COMMAND,
  ENUM_XPR_INHIBIT_PARK_MANUAL_T_INHIBIT_BOTH_PARK_BRAKE_COMMANDS
};

#endif                                 /*enum_ENUM_XPR_INHIBIT_PARK_MANUAL_T*/

typedef enum ENUM_XPR_INHIBIT_PARK_MANUAL_T ENUM_XPR_INHIBIT_PARK_MANUAL_T;

/* Enumeration to inhibit unpark command */
#ifndef enum_ENUM_XPR_INHIBIT_UNPARK_MANUAL_T
#define enum_ENUM_XPR_INHIBIT_UNPARK_MANUAL_T

enum ENUM_XPR_INHIBIT_UNPARK_MANUAL_T
{
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T_NO_OVERRIDE = 0,/* Default value */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T_INHIBIT_TRACTOR_UNPARK_BRAKE_COMMAND,
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T_INHIBIT_TRAILER_UNPARK_BRAKE_COMMAND,
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T_INHIBIT_BOTH_UNPARK_BRAKE_COMMANDS
};

#endif                                 /*enum_ENUM_XPR_INHIBIT_UNPARK_MANUAL_T*/

typedef enum ENUM_XPR_INHIBIT_UNPARK_MANUAL_T ENUM_XPR_INHIBIT_UNPARK_MANUAL_T;

/* Enumeration to apply a park brake */
#ifndef enum_ENUM_XPR_PARK_MANUAL_T
#define enum_ENUM_XPR_PARK_MANUAL_T

enum ENUM_XPR_PARK_MANUAL_T
{
  ENUM_XPR_PARK_MANUAL_T_NO_OVERRIDE = 0,/* Default value */
  ENUM_XPR_PARK_MANUAL_T_APPLY_TRACTOR_PARK_BRAKE,
  ENUM_XPR_PARK_MANUAL_T_APPLY_TRAILER_PARK_BRAKE,
  ENUM_XPR_PARK_MANUAL_T_APPLY_BOTH_PARK_BRAKE
};

#endif                                 /*enum_ENUM_XPR_PARK_MANUAL_T*/

typedef enum ENUM_XPR_PARK_MANUAL_T ENUM_XPR_PARK_MANUAL_T;

/* Enumeration to release park brake */
#ifndef enum_ENUM_XPR_UNPARK_MANUAL_T
#define enum_ENUM_XPR_UNPARK_MANUAL_T

enum ENUM_XPR_UNPARK_MANUAL_T
{
  ENUM_XPR_UNPARK_MANUAL_T_NO_OVERRIDE = 0,/* Default value */
  ENUM_XPR_UNPARK_MANUAL_T_RELEASE_TRACTOR_PARK_BRAKE,
  ENUM_XPR_UNPARK_MANUAL_T_RELEASE_TRAILER_PARK_BRAKE,
  ENUM_XPR_UNPARK_MANUAL_T_RELEASE_BOTH_PARK_BRAKE
};

#endif                                 /*enum_ENUM_XPR_UNPARK_MANUAL_T*/

typedef enum ENUM_XPR_UNPARK_MANUAL_T ENUM_XPR_UNPARK_MANUAL_T;

/* Enumeration to represent the operating mode of the TRW REAX Steering Wheel */
#ifndef enum_ENUM_REAX_OPERATION_MODE_T
#define enum_ENUM_REAX_OPERATION_MODE_T

enum ENUM_REAX_OPERATION_MODE_T
{
  ENUM_REAX_OPERATION_MODE_T_DEFAULT_TRQ_CTRL_MODE = 0,/* Default value */
  ENUM_REAX_OPERATION_MODE_T_POSITION_CTRL_MODE,
  ENUM_REAX_OPERATION_MODE_T_EXT_TRQ_CTRL_MODE_A,
  ENUM_REAX_OPERATION_MODE_T_ALL_CTRL_DISABLED,
  ENUM_REAX_OPERATION_MODE_T_EXT_TRQ_CTRL_MODE_B,
  ENUM_REAX_OPERATION_MODE_T_EXT_TRQ_CTRL_MODE_C
};

#endif                                 /*enum_ENUM_REAX_OPERATION_MODE_T*/

typedef enum ENUM_REAX_OPERATION_MODE_T ENUM_REAX_OPERATION_MODE_T;

/* Enumeration to select a the signal source for desired steering angle */
#ifndef enum_ENUM_STEERING_POS_SIGNAL_SOURCE_T
#define enum_ENUM_STEERING_POS_SIGNAL_SOURCE_T

enum ENUM_STEERING_POS_SIGNAL_SOURCE_T
{
  ENUM_STEERING_POS_SIGNAL_SOURCE_T_SW_EMULATION = 2,/* Default value */
  ENUM_STEERING_POS_SIGNAL_SOURCE_T_ESTIMATION
};

#endif                                 /*enum_ENUM_STEERING_POS_SIGNAL_SOURCE_T*/

typedef enum ENUM_STEERING_POS_SIGNAL_SOURCE_T ENUM_STEERING_POS_SIGNAL_SOURCE_T;

/* Enumeration for XBR Pass Through Active */
#ifndef enum_ENUM_XBR_PASS_THROUGH_ACTIVE_T
#define enum_ENUM_XBR_PASS_THROUGH_ACTIVE_T

enum ENUM_XBR_PASS_THROUGH_ACTIVE_T
{
  ENUM_XBR_PASS_THROUGH_ACTIVE_T_NOT_ACTIVE = 0,/* Default value */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T_ACTIVE,
  ENUM_XBR_PASS_THROUGH_ACTIVE_T_ERROR,
  ENUM_XBR_PASS_THROUGH_ACTIVE_T_NOT_AVAILABLE
};

#endif                                 /*enum_ENUM_XBR_PASS_THROUGH_ACTIVE_T*/

typedef enum ENUM_XBR_PASS_THROUGH_ACTIVE_T ENUM_XBR_PASS_THROUGH_ACTIVE_T;

/* Enumeration for XBR CONTROL MODE */
#ifndef enum_ENUM_XBR_CONTROL_MODE_T
#define enum_ENUM_XBR_CONTROL_MODE_T

enum ENUM_XBR_CONTROL_MODE_T
{
  ENUM_XBR_CONTROL_MODE_T_OVERRIDE_DISABLED = 0,/* Default value */
  ENUM_XBR_CONTROL_MODE_T_ACCEL_CTRL_WITH_ADDITION_MODE,
  ENUM_XBR_CONTROL_MODE_T_ACCEL_CTRL_WITH_MAX_MODE,
  ENUM_XBR_CONTROL_MODE_T_NOT_DEFINED
};

#endif                                 /*enum_ENUM_XBR_CONTROL_MODE_T*/

typedef enum ENUM_XBR_CONTROL_MODE_T ENUM_XBR_CONTROL_MODE_T;

/* Enumeration for XBR EBI MODE */
#ifndef enum_ENUM_XBR_EBI_MODE_T
#define enum_ENUM_XBR_EBI_MODE_T

enum ENUM_XBR_EBI_MODE_T
{
  ENUM_XBR_EBI_MODE_T_NO_EBI_ALLOWED = 0,/* Default value */
  ENUM_XBR_EBI_MODE_T_ONLY_ENDURANCE_BRAKES_ALLOWED,
  ENUM_XBR_EBI_MODE_T_EBI_ALLOWED,
  ENUM_XBR_EBI_MODE_T_NOT_DEFINED
};

#endif                                 /*enum_ENUM_XBR_EBI_MODE_T*/

typedef enum ENUM_XBR_EBI_MODE_T ENUM_XBR_EBI_MODE_T;

/* Enumeration for XBR Priority */
#ifndef enum_ENUM_XBR_PRIORITY_T
#define enum_ENUM_XBR_PRIORITY_T

enum ENUM_XBR_PRIORITY_T
{
  ENUM_XBR_PRIORITY_T_HIGHEST_PRIORITY = 0,/* Default value */
  ENUM_XBR_PRIORITY_T_HIGH_PRIORITY,
  ENUM_XBR_PRIORITY_T_MEDIUM_PRIORITY,
  ENUM_XBR_PRIORITY_T_LOW_PRIORITY
};

#endif                                 /*enum_ENUM_XBR_PRIORITY_T*/

typedef enum ENUM_XBR_PRIORITY_T ENUM_XBR_PRIORITY_T;

#endif                                 /* RTW_HEADER_EnumTypes_h_ */
