/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.898
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Thu Feb 27 17:58:03 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_L4_MABX_h_
#define RTW_HEADER_L4_MABX_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef L4_MABX_COMMON_INCLUDES_
# define L4_MABX_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <rtican_ds1401.h>
#include <rtican_tools1.h>
#include <rtiethxcp.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dsa_gen_tx_RTMapsEncode.h"
#include "dsa_gen_RTMapsTX.h"
#include "dsa_gen_rx_RTMapsDecode.h"
#include "dsa_gen_RTMapsRX.h"
#endif                                 /* L4_MABX_COMMON_INCLUDES_ */

#include "L4_MABX_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_assert.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_sfcn_helper.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmCounterLimit
# define rtmCounterLimit(rtm, idx)     ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals for system '<S82>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S86>/Switch' */
} B_If_Then_Else_L4_MABX_T;

/* Block signals for system '<S112>/Calculate_D_term' */
typedef struct {
  real_T MinMax1;                      /* '<S121>/MinMax1' */
  real_T Saturation;                   /* '<S121>/Saturation' */
  real_T Divide;                       /* '<S121>/Divide' */
  real_T Product2;                     /* '<S121>/Product2' */
  real_T Subtract1;                    /* '<S121>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S121>/Unit_Delay2' */
  real_T Product1;                     /* '<S121>/Product1' */
  real_T Add1;                         /* '<S121>/Add1' */
  real_T Divide_k;                     /* '<S116>/Divide' */
  real_T Xold;                         /* '<S122>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S122>/Init' */
  real_T Subtract;                     /* '<S116>/Subtract' */
  real_T Xnew;                         /* '<S122>/Reset' */
  uint8_T FixPtUnitDelay2;             /* '<S122>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S122>/FixPt Logical Operator' */
  boolean_T Unit_Delay1;               /* '<S121>/Unit_Delay1' */
  boolean_T LogicalOperator;           /* '<S121>/Logical Operator' */
  B_If_Then_Else_L4_MABX_T If_Then_Else;/* '<S121>/If_Then_Else' */
} B_Calculate_D_term_L4_MABX_T;

/* Block states (default storage) for system '<S112>/Calculate_D_term' */
typedef struct {
  real_T Unit_Delay2_DSTATE;           /* '<S121>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE;       /* '<S122>/FixPt Unit Delay1' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S122>/FixPt Unit Delay2' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S121>/Unit_Delay1' */
  boolean_T Calculate_D_term_MODE;     /* '<S112>/Calculate_D_term' */
} DW_Calculate_D_term_L4_MABX_T;

/* Block signals for system '<S126>/If_Then_Else3' */
typedef struct {
  boolean_T Switch;                    /* '<S134>/Switch' */
} B_If_Then_Else_L4_MABX_c_T;

/* Block signals for system '<S112>/Calculate_I_term' */
typedef struct {
  real_T Xold;                         /* '<S128>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S128>/Init' */
  real_T Product1;                     /* '<S124>/Product1' */
  real_T Add;                          /* '<S124>/Add' */
  real_T Unit_Delay;                   /* '<S117>/Unit_Delay' */
  real_T Product;                      /* '<S126>/Product' */
  real_T Subtract;                     /* '<S126>/Subtract' */
  real_T Subtract1;                    /* '<S126>/Subtract1' */
  real_T Xnew;                         /* '<S128>/Reset' */
  real_T Product_j;                    /* '<S125>/Product' */
  real_T Subtract_g;                   /* '<S125>/Subtract' */
  real_T Subtract1_k;                  /* '<S125>/Subtract1' */
  real_T Subtract2;                    /* '<S125>/Subtract2' */
  uint8_T FixPtUnitDelay2;             /* '<S128>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S128>/FixPt Logical Operator' */
  boolean_T Compare;                   /* '<S129>/Compare' */
  boolean_T Compare_n;                 /* '<S130>/Compare' */
  boolean_T RelationalOperator1;       /* '<S126>/Relational Operator1' */
  boolean_T RelationalOperator2;       /* '<S126>/Relational Operator2' */
  boolean_T LogicalOperator1;          /* '<S126>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S126>/Logical Operator2' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else3;/* '<S126>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S126>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S126>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S126>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else;/* '<S124>/If_Then_Else' */
} B_Calculate_I_term_L4_MABX_T;

/* Block states (default storage) for system '<S112>/Calculate_I_term' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S128>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE;            /* '<S117>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S128>/FixPt Unit Delay2' */
  boolean_T Calculate_I_term_MODE;     /* '<S112>/Calculate_I_term' */
} DW_Calculate_I_term_L4_MABX_T;

/* Block signals for system '<S104>/If_Then_Else' */
typedef struct {
  boolean_T Switch;                    /* '<S182>/Switch' */
} B_If_Then_Else_L4_MABX_m_T;

/* Block signals for system '<S183>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S185>/Switch' */
} B_If_Then_Else_L4_MABX_k_T;

/* Block signals for system '<S301>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S303>/Switch' */
} B_If_Then_Else_L4_MABX_n_T;

/* Block signals for system '<S356>/If_Then_Else' */
typedef struct {
  real_T Vehicle_speed_target;         /* '<S358>/Switch' */
  real_T Vehicle_speed;                /* '<S358>/Switch' */
  real_T Distance_m;                   /* '<S358>/Switch' */
} B_If_Then_Else_L4_MABX_h_T;

/* Block signals for system '<S1021>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S1045>/Switch' */
  real_T XBRUrgency;                   /* '<S1045>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S1045>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S1045>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1045>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S1045>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S1045>/Switch' */
} B_If_Then_Else_L4_MABX_p_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S410>/Decoder' */
  real_T UnitDelay;                    /* '<S763>/Unit Delay' */
  real_T UnitDelay_k;                  /* '<S762>/Unit Delay' */
  real_T Switch;                       /* '<S762>/Switch' */
  real_T Gain;                         /* '<S762>/Gain' */
  real_T Switch_j;                     /* '<S763>/Switch' */
  real_T Gain_e;                       /* '<S763>/Gain' */
  real_T SFunction1_o1;                /* '<S746>/S-Function1' */
  real_T SFunction1_o2;                /* '<S746>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S422>/Data Type Conversion2' */
  real_T Xold;                         /* '<S802>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S802>/Init' */
  real_T FixPtSum1;                    /* '<S798>/FixPt Sum1' */
  real_T FixPtSum1_m;                  /* '<S801>/FixPt Sum1' */
  real_T Gain_l;                       /* '<S422>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S422>/Data Type Conversion9' */
  real_T Xold_j;                       /* '<S794>/FixPt Unit Delay1' */
  real_T Init_f;                       /* '<S794>/Init' */
  real_T FixPtSum1_n;                  /* '<S790>/FixPt Sum1' */
  real_T FixPtSum1_o;                  /* '<S793>/FixPt Sum1' */
  real_T SFunction1_o1_k;              /* '<S747>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S747>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S422>/Data Type Conversion3' */
  real_T Xold_e;                       /* '<S818>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S818>/Init' */
  real_T FixPtSum1_a;                  /* '<S814>/FixPt Sum1' */
  real_T FixPtSum1_me;                 /* '<S817>/FixPt Sum1' */
  real_T Gain1;                        /* '<S422>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S422>/Data Type Conversion1' */
  real_T Xold_p;                       /* '<S810>/FixPt Unit Delay1' */
  real_T Init_j;                       /* '<S810>/Init' */
  real_T FixPtSum1_p;                  /* '<S806>/FixPt Sum1' */
  real_T FixPtSum1_h;                  /* '<S809>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S839>/MinMax1' */
  real_T Saturation;                   /* '<S839>/Saturation' */
  real_T Divide;                       /* '<S839>/Divide' */
  real_T Product2;                     /* '<S839>/Product2' */
  real_T Subtract1;                    /* '<S839>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S839>/Unit_Delay2' */
  real_T Product1;                     /* '<S839>/Product1' */
  real_T Add1;                         /* '<S839>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S772>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_a;                    /* '<S840>/MinMax1' */
  real_T Saturation_l;                 /* '<S840>/Saturation' */
  real_T Divide_c;                     /* '<S840>/Divide' */
  real_T Product2_e;                   /* '<S840>/Product2' */
  real_T Subtract1_f;                  /* '<S840>/Subtract1' */
  real_T Unit_Delay2_f;                /* '<S840>/Unit_Delay2' */
  real_T Product1_e;                   /* '<S840>/Product1' */
  real_T Add1_p;                       /* '<S840>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S772>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S774>/Subtract' */
  real_T Abs;                          /* '<S774>/Abs' */
  real_T Xold_pw;                      /* '<S838>/FixPt Unit Delay1' */
  real_T Init_g;                       /* '<S838>/Init' */
  real_T Xold_n;                       /* '<S837>/FixPt Unit Delay1' */
  real_T Init_p;                       /* '<S837>/Init' */
  real_T MinMax;                       /* '<S768>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S774>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S769>/Data Type Conversion2' */
  real_T Xold_n0;                      /* '<S826>/FixPt Unit Delay1' */
  real_T Init_e;                       /* '<S826>/Init' */
  real_T FixPtSum1_f;                  /* '<S822>/FixPt Sum1' */
  real_T FixPtSum1_l;                  /* '<S825>/FixPt Sum1' */
  real_T SFunction1;                   /* '<S738>/S-Function1' */
  real_T IgnitionKeySwitch_voltage;    /* '<S422>/KL15_Monitor' */
  real_T SPN524_TransSelectedGear;     /* '<S577>/Data Type Conversion1' */
  real_T SPN523_TransCurrentGear;      /* '<S577>/Data Type Conversion2' */
  real_T SPN526_TransActualGearRatio;  /* '<S577>/Data Type Conversion3' */
  real_T SPN514_NominalFrictionPercentTo;/* '<S575>/Data Type Conversion2' */
  real_T SPN2978_EstEngParasiticLossesPe;/* '<S575>/Data Type Conversion1' */
  real_T SPN1760_GrossCombinationVehicle;/* '<S518>/Data Type Conversion1' */
  real_T ACCDistanceAlertSignal;       /* '<S499>/Data Type Conversion12' */
  real_T ForwardCollisionWarning;      /* '<S499>/Data Type Conversion13' */
  real_T SPN544_EngineReferenceTorque; /* '<S538>/Data Type Conversion2' */
  real_T PitchAngleExRange;            /* '<S636>/Data Type Conversion1' */
  real_T PressureP1;                   /* '<S634>/Data Type Conversion7' */
  real_T PressureP4;                   /* '<S634>/Data Type Conversion6' */
  real_T PressureP21;                  /* '<S634>/Data Type Conversion11' */
  real_T PressureP22;                  /* '<S634>/Data Type Conversion12' */
  real_T PressureP42;                  /* '<S634>/Data Type Conversion13' */
  real_T Heartbeat;                    /* '<S404>/Heartbeat' */
  real_T Decoder_o3;                   /* '<S410>/Decoder' */
  real_T UnitDelay_f;                  /* '<S409>/Unit Delay' */
  real_T Count;                        /* '<S409>/Switch' */
  real_T Latitude_;                    /* '<S631>/Switch' */
  real_T Longitude_;                   /* '<S631>/Switch' */
  real_T SID;                          /* '<S515>/Switch' */
  real_T COGReference;                 /* '<S515>/Switch' */
  real_T CourseOverGround;             /* '<S515>/Switch' */
  real_T SpeedOverGround;              /* '<S515>/Switch' */
  real_T DataTypeConversion[8];        /* '<S1068>/Data Type Conversion' */
  real_T DataTypeConversion_d[8];      /* '<S1069>/Data Type Conversion' */
  real_T TmpRTBAtFlashOutport1;        /* '<S1083>/Flash' */
  real_T MinMax_n;                     /* '<S856>/MinMax' */
  real_T DataTypeConversion1;          /* '<S856>/Data Type Conversion1' */
  real_T Divide_l;                     /* '<S856>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S856>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1081>/1-D Lookup Table2' */
  real_T Gain1_a;                      /* '<S856>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S856>/Data Type Conversion6' */
  real_T MinMax1_j;                    /* '<S856>/MinMax1' */
  real_T DataTypeConversion2_f;        /* '<S856>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S856>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S856>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1081>/1-D Lookup Table3' */
  real_T Gain_h;                       /* '<S856>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S856>/Data Type Conversion10' */
  real_T SFunction1_o1_f;              /* '<S745>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S745>/S-Function1' */
  real_T ShiftControlDC;               /* '<S422>/ShifterControlDC' */
  real_T Flash;                        /* '<S1083>/Flash' */
  real_T HDOP_;                        /* '<S579>/Switch' */
  real_T DesSteeringAngle;             /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle2;           /* '<S3>/Unit_Delay' */
  real_T DriversDemandEngPercentTorque;/* '<S3>/Unit_Delay' */
  real_T SPN514_NominalFrictionPercent_g;/* '<S3>/Unit_Delay' */
  real_T SPN2978_EstEngParasiticLosses_m;/* '<S3>/Unit_Delay' */
  real_T SPN1760_GrossCombinationVehic_h;/* '<S3>/Unit_Delay' */
  real_T ACCDistanceAlertSignal_o;     /* '<S3>/Unit_Delay' */
  real_T ForwardCollisionWarning_c;    /* '<S3>/Unit_Delay' */
  real_T SPN544_EngineReferenceTorque_g;/* '<S3>/Unit_Delay' */
  real_T ROPEngCtrlActive;             /* '<S3>/Unit_Delay' */
  real_T ROPBrakeCtrlActive;           /* '<S3>/Unit_Delay' */
  real_T YCEngCtrlActive;              /* '<S3>/Unit_Delay' */
  real_T DesSteeringAngleTerm;         /* '<S3>/Unit_Delay' */
  real_T YCBrakeCtrlActive;            /* '<S3>/Unit_Delay' */
  real_T SPN1807_SteeringWheelAngle;   /* '<S3>/Unit_Delay' */
  real_T SPN1808_YawRate;              /* '<S3>/Unit_Delay' */
  real_T SPN1810_LongitudinalAcceleratio;/* '<S3>/Unit_Delay' */
  real_T SteerWheelTurnCounter;        /* '<S3>/Unit_Delay' */
  real_T SteerWheelAngleSensorType;    /* '<S3>/Unit_Delay' */
  real_T LateralAcceleration;          /* '<S3>/Unit_Delay' */
  real_T BarometricPress;              /* '<S3>/Unit_Delay' */
  real_T AmbientAirTemp;               /* '<S3>/Unit_Delay' */
  real_T DesSteeringDistTerm;          /* '<S3>/Unit_Delay' */
  real_T PitchAngleExRange_m;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstPosition;       /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstAngle;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstNumPoints;      /* '<S3>/Unit_Delay' */
  real_T Latitude__c;                  /* '<S3>/Unit_Delay' */
  real_T Longitude__m;                 /* '<S3>/Unit_Delay' */
  real_T HDOP__o;                      /* '<S3>/Unit_Delay' */
  real_T numLanePoints;                /* '<S3>/Unit_Delay' */
  real_T PressureP1_a;                 /* '<S3>/Unit_Delay' */
  real_T PressureP4_h;                 /* '<S3>/Unit_Delay' */
  real_T PressureP21_b;                /* '<S3>/Unit_Delay' */
  real_T PressureP22_e;                /* '<S3>/Unit_Delay' */
  real_T PressureP42_n;                /* '<S3>/Unit_Delay' */
  real_T ReAX_ActualHandwheelPos_p;    /* '<S3>/Unit_Delay' */
  real_T ReAX_EchoedSteerWheelPos_p;   /* '<S3>/Unit_Delay' */
  real_T CurrentAzimuth_rad_k;         /* '<S3>/Unit_Delay' */
  real_T rawPositionError;             /* '<S3>/Unit_Delay' */
  real_T TargetAzimuth_rad_i;          /* '<S3>/Unit_Delay' */
  real_T CurrentVelocity_kph_k;        /* '<S3>/Unit_Delay' */
  real_T TargetVelocity_kph_m;         /* '<S3>/Unit_Delay' */
  real_T Curvature_a;                  /* '<S3>/Unit_Delay' */
  real_T CrosstrackError_n;            /* '<S3>/Unit_Delay' */
  real_T slewedPosError;               /* '<S3>/Unit_Delay' */
  real_T previewSteeringAngle;         /* '<S3>/Unit_Delay' */
  real_T APTC_Pedal_torque_dem_value;  /* '<S3>/Unit_Delay' */
  real_T APTC_arb_pedal_position;      /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_Dterm;         /* '<S3>/Unit_Delay' */
  real_T PID_output;                   /* '<S3>/Unit_Delay' */
  real_T PID_output_unlim;             /* '<S3>/Unit_Delay' */
  real_T PID_control_error;            /* '<S3>/Unit_Delay' */
  real_T PID_p_term;                   /* '<S3>/Unit_Delay' */
  real_T PID_i_term;                   /* '<S3>/Unit_Delay' */
  real_T PID_d_term;                   /* '<S3>/Unit_Delay' */
  real_T ThrottlePID_Y;                /* '<S3>/Unit_Delay' */
  real_T EngineSpeedTarget_Y;          /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_Iterm;         /* '<S3>/Unit_Delay' */
  real_T Accel_rate_ms2;               /* '<S3>/Unit_Delay' */
  real_T BrakingPID_Y;                 /* '<S3>/Unit_Delay' */
  real_T BrakingPID_Y_Direct_Pressure; /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_Pterm;         /* '<S3>/Unit_Delay' */
  real_T VSPD_TARGET_KPH_APV_h;        /* '<S3>/Unit_Delay' */
  real_T Vehicle_speed_target;         /* '<S3>/Unit_Delay' */
  real_T VSPD_HYST_KPH_APV;            /* '<S3>/Unit_Delay' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_APV;/* '<S3>/Unit_Delay' */
  real_T ACCEL_LIM_MS2_APV;            /* '<S3>/Unit_Delay' */
  real_T S;                            /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_Y;             /* '<S3>/Unit_Delay' */
  real_T B;                            /* '<S3>/Unit_Delay' */
  real_T X;                            /* '<S3>/Unit_Delay' */
  real_T Y;                            /* '<S3>/Unit_Delay' */
  real_T pathCurveOffset;              /* '<S3>/Unit_Delay' */
  real_T S_b;                          /* '<S3>/Unit_Delay' */
  real_T distanceSpdTarget;            /* '<S3>/Unit_Delay' */
  real_T state;                        /* '<S3>/Unit_Delay' */
  real_T lastWayPointIdx;              /* '<S3>/Unit_Delay' */
  real_T crossed;                      /* '<S3>/Unit_Delay' */
  real_T minimumDist;                  /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_e;             /* '<S3>/Unit_Delay' */
  real_T SrefOnthisPath;               /* '<S3>/Unit_Delay' */
  real_T StartDist;                    /* '<S3>/Unit_Delay' */
  real_T minDistIdx;                   /* '<S3>/Unit_Delay' */
  real_T pathS;                        /* '<S3>/Unit_Delay' */
  real_T pathLat;                      /* '<S3>/Unit_Delay' */
  real_T pathLong;                     /* '<S3>/Unit_Delay' */
  real_T pathSteeringAngle;            /* '<S3>/Unit_Delay' */
  real_T pathSpdLimit;                 /* '<S3>/Unit_Delay' */
  real_T distance;                     /* '<S3>/Unit_Delay' */
  real_T idx;                          /* '<S3>/Unit_Delay' */
  real_T DeSteeringPID_Y2;             /* '<S3>/Unit_Delay' */
  real_T wpidx;                        /* '<S3>/Unit_Delay' */
  real_T pathOffset;                   /* '<S3>/Unit_Delay' */
  real_T sRefDistance;                 /* '<S3>/Unit_Delay' */
  real_T refDistance;                  /* '<S3>/Unit_Delay' */
  real_T wpIdx;                        /* '<S3>/Unit_Delay' */
  real_T previewSteeringAngle_l;       /* '<S3>/Unit_Delay' */
  real_T desHeading;                   /* '<S3>/Unit_Delay' */
  real_T actPreviewDist;               /* '<S3>/Unit_Delay' */
  real_T desPreviewDist;               /* '<S3>/Unit_Delay' */
  real_T mappingSearchCase;            /* '<S3>/Unit_Delay' */
  real_T CurvatureEst;                 /* '<S3>/Unit_Delay' */
  real_T PedalPWMPos;                  /* '<S3>/Unit_Delay' */
  real_T IgnitionKeySwitch_voltage_c;  /* '<S3>/Unit_Delay' */
  real_T BrakeSwitch_a;                /* '<S3>/Unit_Delay' */
  real_T Park_brake_switch;            /* '<S3>/Unit_Delay' */
  real_T CruiseCtrlEnableSwitch;       /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle;            /* '<S3>/Unit_Delay' */
  real_T FrontAxleSpeed;               /* '<S3>/Unit_Delay' */
  real_T FrontAxleLeftWheelSpeed;      /* '<S3>/Unit_Delay' */
  real_T FrontAxleRightWheelSpeed;     /* '<S3>/Unit_Delay' */
  real_T EBSBrakeSwitch;               /* '<S3>/Unit_Delay' */
  real_T SPN524_TransSelectedGear_m;   /* '<S3>/Unit_Delay' */
  real_T SPN523_TransCurrentGear_n;    /* '<S3>/Unit_Delay' */
  real_T SPN526_TransActualGearRatio_f;/* '<S3>/Unit_Delay' */
  real_T ActualEngPercentTorque;       /* '<S3>/Unit_Delay' */
  real_T ActlEngPrcntTrqueHighResolution;/* '<S3>/Unit_Delay' */
  real_T EngSpeed;                     /* '<S3>/Unit_Delay' */
  real_T DataTypeConversion2_b;        /* '<S532>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S532>/Product' */
  real_T DataTypeConversion_a;         /* '<S424>/Data Type Conversion' */
  real_T DataTypeConversion_c;         /* '<S539>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S539>/Add' */
  real_T DataTypeConversion1_f;        /* '<S424>/Data Type Conversion1' */
  real_T DataTypeConversion2_ft;       /* '<S536>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S536>/Product' */
  real_T DataTypeConversion10;         /* '<S424>/Data Type Conversion10' */
  real_T DataTypeConversion2_i;        /* '<S537>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S537>/Product' */
  real_T DataTypeConversion11;         /* '<S424>/Data Type Conversion11' */
  real_T DataTypeConversion2_a;        /* '<S540>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S540>/Product' */
  real_T DataTypeConversion13;         /* '<S424>/Data Type Conversion13' */
  real_T DataTypeConversion2_e;        /* '<S541>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S541>/Product' */
  real_T DataTypeConversion14;         /* '<S424>/Data Type Conversion14' */
  real_T DataTypeConversion2_g;        /* '<S542>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S542>/Product' */
  real_T DataTypeConversion15;         /* '<S424>/Data Type Conversion15' */
  real_T DataTypeConversion2_fj;       /* '<S543>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S543>/Product' */
  real_T DataTypeConversion16;         /* '<S424>/Data Type Conversion16' */
  real_T DataTypeConversion_n;         /* '<S544>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S544>/Add' */
  real_T DataTypeConversion17;         /* '<S424>/Data Type Conversion17' */
  real_T DataTypeConversion_i;         /* '<S545>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S545>/Add' */
  real_T DataTypeConversion18;         /* '<S424>/Data Type Conversion18' */
  real_T DataTypeConversion2_ae;       /* '<S546>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S546>/Product' */
  real_T DataTypeConversion19;         /* '<S424>/Data Type Conversion19' */
  real_T DataTypeConversion2_n;        /* '<S554>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S554>/Product' */
  real_T DataTypeConversion2_c;        /* '<S424>/Data Type Conversion2' */
  real_T DataTypeConversion2_h;        /* '<S547>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S547>/Product' */
  real_T DataTypeConversion20;         /* '<S424>/Data Type Conversion20' */
  real_T DataTypeConversion_b;         /* '<S555>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S555>/Add' */
  real_T DataTypeConversion3;          /* '<S424>/Data Type Conversion3' */
  real_T DataTypeConversion2_er;       /* '<S556>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S556>/Product' */
  real_T DataTypeConversion4;          /* '<S424>/Data Type Conversion4' */
  real_T DataTypeConversion_ce;        /* '<S557>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S557>/Add' */
  real_T DataTypeConversion5;          /* '<S424>/Data Type Conversion5' */
  real_T DataTypeConversion2_h3;       /* '<S558>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S558>/Product' */
  real_T DataTypeConversion6;          /* '<S424>/Data Type Conversion6' */
  real_T DataTypeConversion_j;         /* '<S533>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S533>/Add' */
  real_T DataTypeConversion7;          /* '<S424>/Data Type Conversion7' */
  real_T DataTypeConversion2_p;        /* '<S534>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S534>/Product' */
  real_T DataTypeConversion8;          /* '<S424>/Data Type Conversion8' */
  real_T DataTypeConversion_dt;        /* '<S535>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S535>/Add' */
  real_T DataTypeConversion9;          /* '<S424>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S481>/Data Type Conversion9' */
  real_T RX_time_p;                    /* '<S427>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S481>/Data Type Conversion10' */
  real_T RX_delta_time_c;              /* '<S427>/Multiport_Switch' */
  real_T RX_time_g;                    /* '<S490>/Data Type Conversion9' */
  real_T RX_time_l;                    /* '<S428>/Multiport_Switch' */
  real_T RX_delta_time_o;              /* '<S490>/Data Type Conversion10' */
  real_T RX_delta_time_j;              /* '<S428>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S499>/Data Type Conversion1' */
  real_T RX_delta_time_a;              /* '<S499>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S499>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S499>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S499>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S499>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S499>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S499>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S499>/Data Type Conversion7' */
  real_T RX_time_m;                    /* '<S499>/Data Type Conversion9' */
  real_T RX_delta_time_d;              /* '<S501>/Data Type Conversion10' */
  real_T RX_time_n;                    /* '<S501>/Data Type Conversion9' */
  real_T RX_delta_time_de;             /* '<S503>/Data Type Conversion10' */
  real_T RX_time_nm;                   /* '<S503>/Data Type Conversion9' */
  real_T RX_delta_time_k;              /* '<S505>/Data Type Conversion10' */
  real_T RX_time_i;                    /* '<S505>/Data Type Conversion9' */
  real_T RX_delta_time_jt;             /* '<S507>/Data Type Conversion10' */
  real_T RX_time_pq;                   /* '<S507>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S509>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S509>/Data Type Conversion9' */
  real_T RX_delta_time_i;              /* '<S511>/Data Type Conversion10' */
  real_T RX_time_nv;                   /* '<S511>/Data Type Conversion9' */
  real_T RX_delta_time_n;              /* '<S513>/Data Type Conversion10' */
  real_T RX_time_j;                    /* '<S513>/Data Type Conversion9' */
  real_T RX_time_a;                    /* '<S515>/Switch' */
  real_T RX_delta_time_cn;             /* '<S515>/Switch' */
  real_T RX_delta_time_kz;             /* '<S518>/Data Type Conversion10' */
  real_T RX_time_no;                   /* '<S518>/Data Type Conversion9' */
  real_T RX_delta_time_m;              /* '<S520>/Data Type Conversion10' */
  real_T RX_time_ih;                   /* '<S520>/Data Type Conversion9' */
  real_T RX_delta_time_nf;             /* '<S522>/Data Type Conversion10' */
  real_T RX_time_an;                   /* '<S522>/Data Type Conversion9' */
  real_T RX_delta_time_ja;             /* '<S524>/Data Type Conversion10' */
  real_T RX_time_c;                    /* '<S524>/Data Type Conversion9' */
  real_T RX_delta_time_ne;             /* '<S571>/Data Type Conversion10' */
  real_T RX_time_f;                    /* '<S571>/Data Type Conversion9' */
  real_T RX_delta_time_b;              /* '<S573>/Data Type Conversion10' */
  real_T RX_time_d;                    /* '<S573>/Data Type Conversion9' */
  real_T RX_delta_time_g;              /* '<S575>/Data Type Conversion10' */
  real_T RX_time_n0;                   /* '<S575>/Data Type Conversion9' */
  real_T RX_delta_time_kx;             /* '<S577>/Data Type Conversion10' */
  real_T RX_time_o;                    /* '<S577>/Data Type Conversion9' */
  real_T SID_p;                        /* '<S579>/Switch' */
  real_T SetMode;                      /* '<S579>/Switch' */
  real_T OpMode;                       /* '<S579>/Switch' */
  real_T VDOP;                         /* '<S579>/Switch' */
  real_T TDOP;                         /* '<S579>/Switch' */
  real_T RX_time_le;                   /* '<S579>/Switch' */
  real_T RX_delta_time_ms;             /* '<S579>/Switch' */
  real_T RX_delta_time_jj;             /* '<S582>/Data Type Conversion10' */
  real_T RX_time_h;                    /* '<S582>/Data Type Conversion9' */
  real_T RX_time_l4;                   /* '<S449>/Switch' */
  real_T RX_delta_time_n5;             /* '<S449>/Switch' */
  real_T RX_time_fr;                   /* '<S616>/Data Type Conversion9' */
  real_T RX_time_dy;                   /* '<S452>/Multiport_Switch' */
  real_T RX_delta_time_h;              /* '<S616>/Data Type Conversion10' */
  real_T RX_delta_time_at;             /* '<S452>/Multiport_Switch' */
  real_T RX_delta_time_o0;             /* '<S627>/Data Type Conversion1' */
  real_T RX_delta_time_i0;             /* '<S627>/Data Type Conversion10' */
  real_T RX_time_jb;                   /* '<S627>/Data Type Conversion3' */
  real_T RX_delta_time_hh;             /* '<S627>/Data Type Conversion4' */
  real_T RX_time_k;                    /* '<S627>/Data Type Conversion6' */
  real_T RX_time_n3;                   /* '<S627>/Data Type Conversion9' */
  real_T RX_time_dr;                   /* '<S631>/Switch' */
  real_T RX_delta_time_ia;             /* '<S631>/Switch' */
  real_T XPR1ControlStatus;            /* '<S634>/Data Type Conversion1' */
  real_T RX_delta_time_hs;             /* '<S634>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S634>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S634>/Data Type Conversion3' */
  real_T RX_time_gh;                   /* '<S634>/Data Type Conversion9' */
  real_T RX_delta_time_dq;             /* '<S636>/Data Type Conversion10' */
  real_T RX_time_e;                    /* '<S636>/Data Type Conversion9' */
  real_T RX_delta_time_iv;             /* '<S638>/Data Type Conversion10' */
  real_T RX_time_b;                    /* '<S638>/Data Type Conversion9' */
  real_T RX_delta_time_dr;             /* '<S640>/Data Type Conversion10' */
  real_T RX_time_fs;                   /* '<S640>/Data Type Conversion9' */
  real_T RX_delta_time_jag;            /* '<S642>/Data Type Conversion10' */
  real_T RX_time_ad;                   /* '<S642>/Data Type Conversion9' */
  real_T RX_delta_time_at4;            /* '<S644>/Data Type Conversion10' */
  real_T RX_time_eh;                   /* '<S644>/Data Type Conversion9' */
  real_T RX_delta_time_b2;             /* '<S646>/Data Type Conversion10' */
  real_T RX_time_jq;                   /* '<S646>/Data Type Conversion9' */
  real_T RX_delta_time_p;              /* '<S648>/Data Type Conversion10' */
  real_T RX_time_gg;                   /* '<S648>/Data Type Conversion9' */
  real_T RX_delta_time_cz;             /* '<S650>/Data Type Conversion10' */
  real_T RX_time_er;                   /* '<S650>/Data Type Conversion9' */
  real_T PitchAngleExRange_j;          /* '<S652>/Data Type Conversion1' */
  real_T RX_delta_time_l;              /* '<S652>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S652>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S652>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S652>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S652>/Data Type Conversion5' */
  real_T RX_time_pz;                   /* '<S652>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S421>/Constant2' */
  real_T DataTypeConversion4_a;        /* '<S674>/Data Type Conversion4' */
  real_T DataTypeConversion1_m;        /* '<S675>/Data Type Conversion1' */
  real_T DataTypeConversion1_e;        /* '<S676>/Data Type Conversion1' */
  real_T RX_time_dq;                   /* '<S589>/Data Type Conversion9' */
  real_T RX_time_it;                   /* '<S590>/Data Type Conversion9' */
  real_T RX_time_k3;                   /* '<S450>/Multiport_Switch' */
  real_T RX_delta_time_bc;             /* '<S589>/Data Type Conversion10' */
  real_T RX_delta_time_in;             /* '<S590>/Data Type Conversion10' */
  real_T RX_delta_time_ip;             /* '<S450>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S686>/Data Type Conversion5' */
  real_T DataTypeConversion5_m;        /* '<S426>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S687>/Data Type Conversion9' */
  real_T DataTypeConversion6_b;        /* '<S426>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S688>/Data Type Conversion11' */
  real_T DataTypeConversion7_l;        /* '<S426>/Data Type Conversion7' */
  real_T RX_time_c4;                   /* '<S603>/Data Type Conversion9' */
  real_T RX_time_pm;                   /* '<S451>/Multiport_Switch' */
  real_T RX_delta_time_hc;             /* '<S603>/Data Type Conversion10' */
  real_T RX_delta_time_bo;             /* '<S451>/Multiport_Switch' */
  real_T UnitDelay_c;                  /* '<S754>/Unit Delay' */
  real_T Switch_m;                     /* '<S754>/Switch' */
  real_T Gain_f;                       /* '<S754>/Gain' */
  real_T UnitDelay_m;                  /* '<S755>/Unit Delay' */
  real_T Switch_h;                     /* '<S755>/Switch' */
  real_T Gain_f1;                      /* '<S755>/Gain' */
  real_T ShiftControlFreq;             /* '<S422>/ShifterControlFreq' */
  real_T SFunction1_n;                 /* '<S736>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S422>/ShifterControlDC2' */
  real_T SFunction1_b;                 /* '<S737>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S422>/ShifterControlDC1' */
  real_T SFunction1_o1_l;              /* '<S1075>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S1075>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1075>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1075>/S-Function1' */
  real_T SFunction1_o1_j;              /* '<S1071>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S1071>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S1071>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S1071>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S1070>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S1070>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S1070>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S1070>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S865>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S865>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1060>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1060>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1060>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_p;     /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_n;     /* '<S1060>/Bus Selector' */
  real_T BrakeSwitch_n;                /* '<S1060>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1060>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1060>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1060>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1060>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1060>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1060>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1060>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1061>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1061>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1061>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1061>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1061>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1061>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1061>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1061>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1061>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1061>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1061>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1061>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1061>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1061>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1061>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1061>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1061>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1061>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1061>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1061>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1061>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1061>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1061>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1061>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1061>/Bus Selector' */
  real_T SFunction1_o1_a;              /* '<S1063>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S1063>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S1063>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S1063>/S-Function1' */
  real_T SFunction1_o1_kr;             /* '<S1062>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S1062>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S1062>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S1062>/S-Function1' */
  real_T DataTypeConversion_l;         /* '<S1049>/Data Type Conversion' */
  real_T DataTypeConversion1_h;        /* '<S1049>/Data Type Conversion1' */
  real_T DataTypeConversion2_bv;       /* '<S1049>/Data Type Conversion2' */
  real_T SFunction1_o1_p;              /* '<S1051>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S1051>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S1051>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S1051>/S-Function1' */
  real_T BrakingPID_Y_g;               /* '<S1021>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S1021>/Switch1' */
  real_T DataTypeConversion1_a;        /* '<S1024>/Data Type Conversion1' */
  real_T DataTypeConversion2_bk;       /* '<S1024>/Data Type Conversion2' */
  real_T DataTypeConversion3_n;        /* '<S1024>/Data Type Conversion3' */
  real_T DataTypeConversion4_i;        /* '<S1024>/Data Type Conversion4' */
  real_T DataTypeConversion5_g;        /* '<S1024>/Data Type Conversion5' */
  real_T DataTypeConversion6_p;        /* '<S1024>/Data Type Conversion6' */
  real_T DataTypeConversion7_li;       /* '<S1024>/Data Type Conversion7' */
  real_T Saturation_n;                 /* '<S1020>/Saturation' */
  real_T BrakingPID_Y_gc;              /* '<S1020>/Bus Selector' */
  real_T Gain_d;                       /* '<S1020>/Gain' */
  real_T Gain_b;                       /* '<S1037>/Gain' */
  real_T Gain1_p;                      /* '<S1037>/Gain1' */
  real_T DataTypeConversion1_o[8];     /* '<S1018>/Data Type Conversion1' */
  real_T FrontAxleSpeed_b;             /* '<S1034>/Bus Selector4' */
  real_T DataTypeConversion_lb;        /* '<S1034>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_g; /* '<S1034>/Bus Selector4' */
  real_T DataTypeConversion1_l;        /* '<S1034>/Data Type Conversion1' */
  real_T SPN1808_YawRate_i;            /* '<S1034>/Bus Selector4' */
  real_T DataTypeConversion2_k;        /* '<S1034>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_i;/* '<S1034>/Bus Selector4' */
  real_T DataTypeConversion3_j;        /* '<S1034>/Data Type Conversion3' */
  real_T DataType;                     /* '<S1033>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S1019>/Shift_Arithmetic 4' */
  real_T DataType_e;                   /* '<S1029>/DataType' */
  real_T DataType_i;                   /* '<S1030>/DataType' */
  real_T DataType_b;                   /* '<S1031>/DataType' */
  real_T DataType_l;                   /* '<S1032>/DataType' */
  real_T Shift_Arithmetic;             /* '<S1019>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S1019>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S1019>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S1019>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S1021>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_m;     /* '<S1021>/Divide1' */
  real_T SFunction1_o1_b;              /* '<S1035>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S1035>/S-Function1' */
  real_T SFunction1_o3_ed;             /* '<S1035>/S-Function1' */
  real_T SFunction1_o4_fk;             /* '<S1035>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S1027>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S1027>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S1027>/S-Function1' */
  real_T SFunction1_o4_fw;             /* '<S1027>/S-Function1' */
  real_T SFunction1_o1_jl;             /* '<S1025>/S-Function1' */
  real_T SFunction1_o2_ph;             /* '<S1025>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S1025>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S1025>/S-Function1' */
  real_T DataTypeConversion4_d;        /* '<S957>/Data Type Conversion4' */
  real_T DataType_ik;                  /* '<S954>/DataType' */
  real_T Shift_Arithmetic2_i;          /* '<S946>/Shift_Arithmetic 2' */
  real_T DataType_j;                   /* '<S952>/DataType' */
  real_T DataType_a;                   /* '<S953>/DataType' */
  real_T DataType_d;                   /* '<S955>/DataType' */
  real_T DataType_g;                   /* '<S956>/DataType' */
  real_T Shift_Arithmetic_m;           /* '<S946>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_o;          /* '<S946>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_d;          /* '<S946>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_k;          /* '<S946>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_me;       /* '<S965>/Data Type Conversion1' */
  real_T DataTypeConversion2_d;        /* '<S965>/Data Type Conversion2' */
  real_T DataTypeConversion3_jg;       /* '<S965>/Data Type Conversion3' */
  real_T DataTypeConversion4_j;        /* '<S965>/Data Type Conversion4' */
  real_T DataTypeConversion5_l;        /* '<S965>/Data Type Conversion5' */
  real_T DataTypeConversion6_c;        /* '<S965>/Data Type Conversion6' */
  real_T DataTypeConversion7_e;        /* '<S965>/Data Type Conversion7' */
  real_T DataTypeConversion8_a;        /* '<S965>/Data Type Conversion8' */
  real_T DataType_el;                  /* '<S962>/DataType' */
  real_T Shift_Arithmetic2_n;          /* '<S947>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_o1;       /* '<S966>/Data Type Conversion1' */
  real_T DataTypeConversion2_eq;       /* '<S966>/Data Type Conversion2' */
  real_T DataTypeConversion3_e;        /* '<S966>/Data Type Conversion3' */
  real_T DataTypeConversion4_g;        /* '<S966>/Data Type Conversion4' */
  real_T DataTypeConversion5_p;        /* '<S966>/Data Type Conversion5' */
  real_T DataTypeConversion6_h;        /* '<S966>/Data Type Conversion6' */
  real_T DataTypeConversion7_j;        /* '<S966>/Data Type Conversion7' */
  real_T DataTypeConversion8_h;        /* '<S966>/Data Type Conversion8' */
  real_T DataType_ix;                  /* '<S963>/DataType' */
  real_T Shift_Arithmetic3_e;          /* '<S947>/Shift_Arithmetic 3' */
  real_T DataType_e0;                  /* '<S960>/DataType' */
  real_T DataType_p;                   /* '<S961>/DataType' */
  real_T DataType_o;                   /* '<S964>/DataType' */
  real_T Shift_Arithmetic_f;           /* '<S947>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_g;          /* '<S947>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_o;          /* '<S947>/Shift_Arithmetic 4' */
  real_T Switch_i;                     /* '<S1000>/Switch' */
  real_T Switch2;                      /* '<S1010>/Switch2' */
  real_T DataType_gt;                  /* '<S1010>/DataType' */
  real_T DataTypeConversion1_j[8];     /* '<S948>/Data Type Conversion1' */
  real_T DataType_l0;                  /* '<S977>/DataType' */
  real_T Shift_Arithmetic3_f;          /* '<S949>/Shift_Arithmetic 3' */
  real_T DataType_f;                   /* '<S974>/DataType' */
  real_T DataType_oh;                  /* '<S975>/DataType' */
  real_T DataType_p3;                  /* '<S976>/DataType' */
  real_T DataType_m;                   /* '<S978>/DataType' */
  real_T Shift_Arithmetic_j;           /* '<S949>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_k;          /* '<S949>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_m;          /* '<S949>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_om;         /* '<S949>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S1011>/Product' */
  real_T Switch1;                      /* '<S1010>/Switch1' */
  real_T Multiport_Switch;             /* '<S1000>/Multiport_Switch' */
  real_T SFunction1_o1_l1;             /* '<S980>/S-Function1' */
  real_T SFunction1_o2_er;             /* '<S980>/S-Function1' */
  real_T SFunction1_o3_bp;             /* '<S980>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S980>/S-Function1' */
  real_T SFunction1_o1_m;              /* '<S972>/S-Function1' */
  real_T SFunction1_o2_gj;             /* '<S972>/S-Function1' */
  real_T SFunction1_o3_mj;             /* '<S972>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S972>/S-Function1' */
  real_T SFunction1_o1_oc;             /* '<S971>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S971>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S971>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S971>/S-Function1' */
  real_T SFunction1_o1_la;             /* '<S968>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S968>/S-Function1' */
  real_T SFunction1_o3_i1;             /* '<S968>/S-Function1' */
  real_T SFunction1_o4_mk;             /* '<S968>/S-Function1' */
  real_T SFunction1_o1_kl;             /* '<S967>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S967>/S-Function1' */
  real_T SFunction1_o3_bv;             /* '<S967>/S-Function1' */
  real_T SFunction1_o4_e5;             /* '<S967>/S-Function1' */
  real_T SFunction1_o1_h;              /* '<S958>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S958>/S-Function1' */
  real_T SFunction1_o3_br;             /* '<S958>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S958>/S-Function1' */
  real_T DataTypeConversion1_hv[8];    /* '<S887>/Data Type Conversion1' */
  real_T DataType_pm;                  /* '<S907>/DataType' */
  real_T Shift_Arithmetic2_f;          /* '<S887>/Shift_Arithmetic 2' */
  real_T DataType_e2;                  /* '<S903>/DataType' */
  real_T DataType_n;                   /* '<S908>/DataType' */
  real_T Shift_Arithmetic3_a;          /* '<S887>/Shift_Arithmetic 3' */
  real_T DataType_k;                   /* '<S909>/DataType' */
  real_T Shift_Arithmetic4_i;          /* '<S887>/Shift_Arithmetic 4' */
  real_T DataType_c;                   /* '<S906>/DataType' */
  real_T Shift_Arithmetic_c;           /* '<S887>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_j;          /* '<S887>/Shift_Arithmetic 1' */
  real_T Latitude__m;                  /* '<S944>/Bus Selector' */
  real_T DataTypeConversion_p;         /* '<S944>/Data Type Conversion' */
  real_T Longitude__a;                 /* '<S944>/Bus Selector' */
  real_T DataTypeConversion1_he;       /* '<S944>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_a;         /* '<S894>/Bus Selector' */
  real_T ParkingBrakeSwitch_m;         /* '<S894>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_e;      /* '<S894>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_n;  /* '<S894>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_pj;    /* '<S894>/Bus Selector' */
  real_T CruiseCtrlActive_i;           /* '<S894>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_n3;    /* '<S894>/Bus Selector' */
  real_T BrakeSwitch_n4;               /* '<S894>/Bus Selector' */
  real_T ClutchSwitch_l;               /* '<S894>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_h;        /* '<S894>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_c;      /* '<S894>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_b;     /* '<S894>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_c; /* '<S894>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_m;         /* '<S894>/Bus Selector' */
  real_T PTOGovernorState_c;           /* '<S894>/Bus Selector' */
  real_T CruiseCtrlStates_k;           /* '<S894>/Bus Selector' */
  real_T EngIdleIncrementSwitch_f;     /* '<S894>/Bus Selector' */
  real_T EngIdleDecrementSwitch_i;     /* '<S894>/Bus Selector' */
  real_T EngTestModeSwitch_d;          /* '<S894>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_p;  /* '<S894>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_ay;        /* '<S895>/Bus Selector' */
  real_T ParkingBrakeSwitch_md;        /* '<S895>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_eq;     /* '<S895>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_n0; /* '<S895>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_pjm;   /* '<S895>/Bus Selector' */
  real_T CruiseCtrlActive_iq;          /* '<S895>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_n3b;   /* '<S895>/Bus Selector' */
  real_T BrakeSwitch_n4h;              /* '<S895>/Bus Selector' */
  real_T ClutchSwitch_lp;              /* '<S895>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_hj;       /* '<S895>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_cs;     /* '<S895>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_b4;    /* '<S895>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_ci;/* '<S895>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_mm;        /* '<S895>/Bus Selector' */
  real_T PTOGovernorState_cv;          /* '<S895>/Bus Selector' */
  real_T CruiseCtrlStates_ks;          /* '<S895>/Bus Selector' */
  real_T EngIdleIncrementSwitch_f1;    /* '<S895>/Bus Selector' */
  real_T EngIdleDecrementSwitch_il;    /* '<S895>/Bus Selector' */
  real_T EngTestModeSwitch_d0;         /* '<S895>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_pi; /* '<S895>/Bus Selector' */
  real_T DataTypeConversion1_ff[8];    /* '<S886>/Data Type Conversion1' */
  real_T SID_i;                        /* '<S918>/Bus Selector' */
  real_T DataTypeConversion_j4;        /* '<S918>/Data Type Conversion' */
  real_T COGReference_f;               /* '<S918>/Bus Selector' */
  real_T DataTypeConversion1_f5;       /* '<S918>/Data Type Conversion1' */
  real_T CourseOverGround_f;           /* '<S918>/Bus Selector' */
  real_T DataTypeConversion2_m;        /* '<S918>/Data Type Conversion2' */
  real_T SpeedOverGround_b;            /* '<S918>/Bus Selector' */
  real_T DataTypeConversion3_jy;       /* '<S918>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S920>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S920>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S920>/Bus Selector' */
  real_T EBSBrakeSwitch_j;             /* '<S920>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S920>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S920>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S920>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S920>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S920>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S920>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S920>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S920>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S920>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S920>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S920>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S920>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S920>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S920>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S920>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S920>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S920>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S920>/Bus Selector' */
  real_T SFunction1_o1_lh;             /* '<S945>/S-Function1' */
  real_T SFunction1_o2_b0;             /* '<S945>/S-Function1' */
  real_T SFunction1_o3_bz;             /* '<S945>/S-Function1' */
  real_T SFunction1_o4_n3;             /* '<S945>/S-Function1' */
  real_T Unit_Delay;                   /* '<S934>/Unit_Delay' */
  real_T FixPtSum1_pc;                 /* '<S942>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S943>/FixPt Switch' */
  real_T SFunction1_o1_fc;             /* '<S921>/S-Function1' */
  real_T SFunction1_o2_km;             /* '<S921>/S-Function1' */
  real_T SFunction1_o3_bb;             /* '<S921>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S921>/S-Function1' */
  real_T SFunction1_o1_oy;             /* '<S919>/S-Function1' */
  real_T SFunction1_o2_jm;             /* '<S919>/S-Function1' */
  real_T SFunction1_o3_lx;             /* '<S919>/S-Function1' */
  real_T SFunction1_o4_fwb;            /* '<S919>/S-Function1' */
  real_T SFunction1_o1_fy;             /* '<S917>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S917>/S-Function1' */
  real_T SFunction1_o3_f0;             /* '<S917>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S917>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S916>/S-Function1' */
  real_T SFunction1_o2_du;             /* '<S916>/S-Function1' */
  real_T SFunction1_o3_b1;             /* '<S916>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S916>/S-Function1' */
  real_T SFunction1_o1_nz;             /* '<S901>/S-Function1' */
  real_T SFunction1_o2_ed;             /* '<S901>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S901>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S901>/S-Function1' */
  real_T SFunction1_o1_a3;             /* '<S900>/S-Function1' */
  real_T SFunction1_o2_ob;             /* '<S900>/S-Function1' */
  real_T SFunction1_o3_bj;             /* '<S900>/S-Function1' */
  real_T SFunction1_o4_kp;             /* '<S900>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S897>/S-Function1' */
  real_T SFunction1_o2_gv;             /* '<S897>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S897>/S-Function1' */
  real_T SFunction1_o4_fm;             /* '<S897>/S-Function1' */
  real_T SFunction1_o1_c;              /* '<S896>/S-Function1' */
  real_T SFunction1_o2_oc;             /* '<S896>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S896>/S-Function1' */
  real_T SFunction1_o4_hr;             /* '<S896>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S875>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S875>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S875>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S875>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S875>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S875>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S875>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S875>/Bus Selector' */
  real_T DataType_o5;                  /* '<S872>/DataType' */
  real_T Shift_Arithmetic2_a;          /* '<S867>/Shift_Arithmetic 2' */
  real_T DataType_eg;                  /* '<S870>/DataType' */
  real_T DataType_d5;                  /* '<S871>/DataType' */
  real_T DataType_mb;                  /* '<S873>/DataType' */
  real_T DataType_iw;                  /* '<S874>/DataType' */
  real_T Shift_Arithmetic_l;           /* '<S867>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_d;          /* '<S867>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_b;          /* '<S867>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_m;          /* '<S867>/Shift_Arithmetic 4' */
  real_T BarometricPress_p;            /* '<S883>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S883>/Bus Selector' */
  real_T AmbientAirTemp_a;             /* '<S883>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S883>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S883>/Bus Selector' */
  real_T DataType_ba;                  /* '<S880>/DataType' */
  real_T Shift_Arithmetic2_j;          /* '<S868>/Shift_Arithmetic 2' */
  real_T DataType_il;                  /* '<S878>/DataType' */
  real_T DataType_jc;                  /* '<S879>/DataType' */
  real_T DataType_gq;                  /* '<S881>/DataType' */
  real_T DataType_jn;                  /* '<S882>/DataType' */
  real_T Shift_Arithmetic_o;           /* '<S868>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_dz;         /* '<S868>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_an;         /* '<S868>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_n;          /* '<S868>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_lt;             /* '<S884>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S884>/S-Function1' */
  real_T SFunction1_o3_ea;             /* '<S884>/S-Function1' */
  real_T SFunction1_o4_d0;             /* '<S884>/S-Function1' */
  real_T SFunction1_o1_bs;             /* '<S876>/S-Function1' */
  real_T SFunction1_o2_ad;             /* '<S876>/S-Function1' */
  real_T SFunction1_o3_dz;             /* '<S876>/S-Function1' */
  real_T SFunction1_o4_hw;             /* '<S876>/S-Function1' */
  real_T Unit_Delay_k;                 /* '<S853>/Unit_Delay' */
  real_T Add;                          /* '<S853>/Add' */
  real_T Xold_d;                       /* '<S848>/FixPt Unit Delay1' */
  real_T Init_c;                       /* '<S848>/Init' */
  real_T Abs_k;                        /* '<S845>/Abs' */
  real_T Product1_m;                   /* '<S845>/Product1' */
  real_T Add1_h;                       /* '<S845>/Add1' */
  real_T MinMax2;                      /* '<S845>/MinMax2' */
  real_T Abs1;                         /* '<S845>/Abs1' */
  real_T Product2_d;                   /* '<S845>/Product2' */
  real_T Subtract1_p;                  /* '<S845>/Subtract1' */
  real_T MinMax1_e;                    /* '<S845>/MinMax1' */
  real_T Subtract_j;                   /* '<S773>/Subtract' */
  real_T Abs_i;                        /* '<S773>/Abs' */
  real_T Sum;                          /* '<S763>/Sum' */
  real_T Sum_f;                        /* '<S762>/Sum' */
  real_T Sum_g;                        /* '<S755>/Sum' */
  real_T Sum_b;                        /* '<S754>/Sum' */
  real_T timeStamp;                    /* '<S657>/timeStamp' */
  real_T Unit_Delay_m;                 /* '<S657>/Unit_Delay' */
  real_T SFunction1_o1_d;              /* '<S653>/S-Function1' */
  real_T SFunction1_o2_lz;             /* '<S653>/S-Function1' */
  real_T SFunction1_o3_j5;             /* '<S653>/S-Function1' */
  real_T SFunction1_o4_pz;             /* '<S653>/S-Function1' */
  real_T SFunction1_o5;                /* '<S653>/S-Function1' */
  real_T SFunction1_o6;                /* '<S653>/S-Function1' */
  real_T SFunction1_o7;                /* '<S653>/S-Function1' */
  real_T SFunction1_o8;                /* '<S653>/S-Function1' */
  real_T SFunction1_o2_gn;             /* '<S651>/S-Function1' */
  real_T SFunction1_o3_jk;             /* '<S651>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S651>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S651>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S651>/S-Function1' */
  real_T SFunction1_o9;                /* '<S651>/S-Function1' */
  real_T SFunction1_o1_n5;             /* '<S649>/S-Function1' */
  real_T SFunction1_o2_c5;             /* '<S649>/S-Function1' */
  real_T SFunction1_o3_e2;             /* '<S649>/S-Function1' */
  real_T SFunction1_o4_lj;             /* '<S649>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S649>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S649>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S649>/S-Function1' */
  real_T SFunction1_o8_m;              /* '<S649>/S-Function1' */
  real_T SFunction1_o9_m;              /* '<S649>/S-Function1' */
  real_T SFunction1_o10;               /* '<S649>/S-Function1' */
  real_T SFunction1_o1_iz;             /* '<S647>/S-Function1' */
  real_T SFunction1_o2_k5;             /* '<S647>/S-Function1' */
  real_T SFunction1_o3_edr;            /* '<S647>/S-Function1' */
  real_T SFunction1_o4_lb;             /* '<S647>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S647>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S647>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S647>/S-Function1' */
  real_T SFunction1_o8_l;              /* '<S647>/S-Function1' */
  real_T SFunction1_o9_j;              /* '<S647>/S-Function1' */
  real_T SFunction1_o10_h;             /* '<S647>/S-Function1' */
  real_T SFunction1_o11;               /* '<S647>/S-Function1' */
  real_T SFunction1_o12;               /* '<S647>/S-Function1' */
  real_T SFunction1_o13;               /* '<S647>/S-Function1' */
  real_T SFunction1_o14;               /* '<S647>/S-Function1' */
  real_T SFunction1_o15;               /* '<S647>/S-Function1' */
  real_T SFunction1_o16;               /* '<S647>/S-Function1' */
  real_T SFunction1_o17;               /* '<S647>/S-Function1' */
  real_T SFunction1_o18;               /* '<S647>/S-Function1' */
  real_T SFunction1_o19;               /* '<S647>/S-Function1' */
  real_T SFunction1_o20;               /* '<S647>/S-Function1' */
  real_T SFunction1_o21;               /* '<S647>/S-Function1' */
  real_T SFunction1_o22;               /* '<S647>/S-Function1' */
  real_T SFunction1_o23;               /* '<S647>/S-Function1' */
  real_T SFunction1_o24;               /* '<S647>/S-Function1' */
  real_T SFunction1_o25;               /* '<S647>/S-Function1' */
  real_T SFunction1_o26;               /* '<S647>/S-Function1' */
  real_T SFunction1_o27;               /* '<S647>/S-Function1' */
  real_T SFunction1_o28;               /* '<S647>/S-Function1' */
  real_T SFunction1_o1_os;             /* '<S645>/S-Function1' */
  real_T SFunction1_o2_ly;             /* '<S645>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S645>/S-Function1' */
  real_T SFunction1_o4_hf;             /* '<S645>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S645>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S645>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S645>/S-Function1' */
  real_T SFunction1_o1_kz;             /* '<S643>/S-Function1' */
  real_T SFunction1_o2_bb;             /* '<S643>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S643>/S-Function1' */
  real_T SFunction1_o4_gq;             /* '<S643>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S643>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S643>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S643>/S-Function1' */
  real_T SFunction1_o8_n;              /* '<S643>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S643>/S-Function1' */
  real_T SFunction1_o1_m5;             /* '<S641>/S-Function1' */
  real_T SFunction1_o2_dv;             /* '<S641>/S-Function1' */
  real_T SFunction1_o3_em;             /* '<S641>/S-Function1' */
  real_T SFunction1_o4_mn;             /* '<S641>/S-Function1' */
  real_T SFunction1_o5_gr;             /* '<S641>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S641>/S-Function1' */
  real_T SFunction1_o7_fg;             /* '<S641>/S-Function1' */
  real_T SFunction1_o8_a;              /* '<S641>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S641>/S-Function1' */
  real_T SFunction1_o1_ed;             /* '<S639>/S-Function1' */
  real_T SFunction1_o2_iv;             /* '<S639>/S-Function1' */
  real_T SFunction1_o3_df;             /* '<S639>/S-Function1' */
  real_T SFunction1_o4_ak;             /* '<S639>/S-Function1' */
  real_T SFunction1_o5_f1;             /* '<S639>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S639>/S-Function1' */
  real_T SFunction1_o7_c5;             /* '<S639>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S639>/S-Function1' */
  real_T SFunction1_o9_g;              /* '<S639>/S-Function1' */
  real_T SFunction1_o1_fk;             /* '<S637>/S-Function1' */
  real_T SFunction1_o2_pq;             /* '<S637>/S-Function1' */
  real_T SFunction1_o3_eq;             /* '<S637>/S-Function1' */
  real_T SFunction1_o4_be;             /* '<S637>/S-Function1' */
  real_T SFunction1_o5_fy;             /* '<S637>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S637>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S637>/S-Function1' */
  real_T SFunction1_o8_h;              /* '<S637>/S-Function1' */
  real_T SFunction1_o9_i;              /* '<S637>/S-Function1' */
  real_T SFunction1_o10_ha;            /* '<S637>/S-Function1' */
  real_T SFunction1_o1_ko;             /* '<S635>/S-Function1' */
  real_T SFunction1_o2_jn;             /* '<S635>/S-Function1' */
  real_T SFunction1_o3_hm;             /* '<S635>/S-Function1' */
  real_T SFunction1_o4_hk;             /* '<S635>/S-Function1' */
  real_T SFunction1_o5_fg;             /* '<S635>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S635>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S635>/S-Function1' */
  real_T SFunction1_o8_b;              /* '<S635>/S-Function1' */
  real_T SFunction1_o9_l;              /* '<S635>/S-Function1' */
  real_T SFunction1_o10_d;             /* '<S635>/S-Function1' */
  real_T SFunction1_o11_d;             /* '<S635>/S-Function1' */
  real_T SFunction1_o12_k;             /* '<S635>/S-Function1' */
  real_T SFunction1_o13_g;             /* '<S635>/S-Function1' */
  real_T RX_time_fi;                   /* '<S631>/Data Type Conversion9' */
  real_T RX_time_e5;                   /* '<S631>/Data Type Conversion2' */
  real_T RX_delta_time_e;              /* '<S631>/Data Type Conversion10' */
  real_T RX_delta_time_lo;             /* '<S631>/Data Type Conversion1' */
  real_T SFunction1_o1_ju;             /* '<S633>/S-Function1' */
  real_T SFunction1_o2_aq;             /* '<S633>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S633>/S-Function1' */
  real_T SFunction1_o4_ex;             /* '<S633>/S-Function1' */
  real_T SFunction1_o5_nb;             /* '<S633>/S-Function1' */
  real_T SFunction1_o1_bh;             /* '<S632>/S-Function1' */
  real_T SFunction1_o2_db;             /* '<S632>/S-Function1' */
  real_T SFunction1_o3_bt;             /* '<S632>/S-Function1' */
  real_T SFunction1_o4_ez;             /* '<S632>/S-Function1' */
  real_T SFunction1_o5_gx;             /* '<S632>/S-Function1' */
  real_T SFunction1_o1_oq;             /* '<S630>/S-Function1' */
  real_T SFunction1_o2_mr;             /* '<S630>/S-Function1' */
  real_T SFunction1_o3_ev;             /* '<S630>/S-Function1' */
  real_T SFunction1_o4_aw;             /* '<S630>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S630>/S-Function1' */
  real_T SFunction1_o6_kc;             /* '<S630>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S630>/S-Function1' */
  real_T SFunction1_o1_i2;             /* '<S629>/S-Function1' */
  real_T SFunction1_o2_dg;             /* '<S629>/S-Function1' */
  real_T SFunction1_o3_ad;             /* '<S629>/S-Function1' */
  real_T SFunction1_o4_dh;             /* '<S629>/S-Function1' */
  real_T SFunction1_o5_fm;             /* '<S629>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S629>/S-Function1' */
  real_T SFunction1_o1_mj;             /* '<S628>/S-Function1' */
  real_T SFunction1_o2_ls;             /* '<S628>/S-Function1' */
  real_T SFunction1_o3_c1;             /* '<S628>/S-Function1' */
  real_T SFunction1_o4_fz;             /* '<S628>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S628>/S-Function1' */
  real_T SFunction1_o6_l0;             /* '<S628>/S-Function1' */
  real_T SFunction1_o1_n0;             /* '<S620>/S-Function1' */
  real_T SFunction1_o2_fk;             /* '<S620>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S620>/S-Function1' */
  real_T SFunction1_o4_au;             /* '<S620>/S-Function1' */
  real_T SFunction1_o5_ne;             /* '<S620>/S-Function1' */
  real_T SFunction1_o1_lae;            /* '<S619>/S-Function1' */
  real_T SFunction1_o2_bh;             /* '<S619>/S-Function1' */
  real_T SFunction1_o3_gz;             /* '<S619>/S-Function1' */
  real_T SFunction1_o4_hf3;            /* '<S619>/S-Function1' */
  real_T SFunction1_o5_p5;             /* '<S619>/S-Function1' */
  real_T SFunction1_o1_nn;             /* '<S618>/S-Function1' */
  real_T SFunction1_o2_pn;             /* '<S618>/S-Function1' */
  real_T SFunction1_o3_jj;             /* '<S618>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S618>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S618>/S-Function1' */
  real_T RX_time_gc;                   /* '<S614>/Data Type Conversion9' */
  real_T RX_time_lu;                   /* '<S615>/Data Type Conversion9' */
  real_T RX_delta_time_drb;            /* '<S614>/Data Type Conversion10' */
  real_T RX_delta_time_bu;             /* '<S615>/Data Type Conversion10' */
  real_T SFunction1_o1_oz;             /* '<S607>/S-Function1' */
  real_T SFunction1_o2_hr;             /* '<S607>/S-Function1' */
  real_T SFunction1_o3_cc;             /* '<S607>/S-Function1' */
  real_T SFunction1_o4_ok;             /* '<S607>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S607>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S607>/S-Function1' */
  real_T SFunction1_o7_pe;             /* '<S607>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S607>/S-Function1' */
  real_T SFunction1_o9_h;              /* '<S607>/S-Function1' */
  real_T SFunction1_o10_c;             /* '<S607>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S607>/S-Function1' */
  real_T SFunction1_o1_dc;             /* '<S606>/S-Function1' */
  real_T SFunction1_o2_bu;             /* '<S606>/S-Function1' */
  real_T SFunction1_o3_mi;             /* '<S606>/S-Function1' */
  real_T SFunction1_o4_hm;             /* '<S606>/S-Function1' */
  real_T SFunction1_o5_bl;             /* '<S606>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S606>/S-Function1' */
  real_T SFunction1_o7_cl;             /* '<S606>/S-Function1' */
  real_T SFunction1_o8_d;              /* '<S606>/S-Function1' */
  real_T SFunction1_o9_o;              /* '<S606>/S-Function1' */
  real_T SFunction1_o10_p;             /* '<S606>/S-Function1' */
  real_T SFunction1_o11_g;             /* '<S606>/S-Function1' */
  real_T SFunction1_o1_nw;             /* '<S605>/S-Function1' */
  real_T SFunction1_o2_bx;             /* '<S605>/S-Function1' */
  real_T SFunction1_o3_hu;             /* '<S605>/S-Function1' */
  real_T SFunction1_o4_i2;             /* '<S605>/S-Function1' */
  real_T SFunction1_o5_mc;             /* '<S605>/S-Function1' */
  real_T SFunction1_o6_bm;             /* '<S605>/S-Function1' */
  real_T SFunction1_o7_p0;             /* '<S605>/S-Function1' */
  real_T SFunction1_o8_j;              /* '<S605>/S-Function1' */
  real_T SFunction1_o9_e;              /* '<S605>/S-Function1' */
  real_T SFunction1_o10_a;             /* '<S605>/S-Function1' */
  real_T SFunction1_o11_f;             /* '<S605>/S-Function1' */
  real_T RX_time_b2;                   /* '<S601>/Data Type Conversion9' */
  real_T RX_time_ic;                   /* '<S602>/Data Type Conversion9' */
  real_T RX_delta_time_f;              /* '<S601>/Data Type Conversion10' */
  real_T RX_delta_time_mv;             /* '<S602>/Data Type Conversion10' */
  real_T SFunction1_o1_ae;             /* '<S594>/S-Function1' */
  real_T SFunction1_o2_nt;             /* '<S594>/S-Function1' */
  real_T SFunction1_o3_ng;             /* '<S594>/S-Function1' */
  real_T SFunction1_o4_okw;            /* '<S594>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S594>/S-Function1' */
  real_T SFunction1_o6_nq;             /* '<S594>/S-Function1' */
  real_T SFunction1_o7_lb;             /* '<S594>/S-Function1' */
  real_T SFunction1_o8_bi;             /* '<S594>/S-Function1' */
  real_T SFunction1_o9_kq;             /* '<S594>/S-Function1' */
  real_T SFunction1_o10_f;             /* '<S594>/S-Function1' */
  real_T SFunction1_o11_o;             /* '<S594>/S-Function1' */
  real_T SFunction1_o1_np;             /* '<S593>/S-Function1' */
  real_T SFunction1_o2_bp;             /* '<S593>/S-Function1' */
  real_T SFunction1_o3_cq;             /* '<S593>/S-Function1' */
  real_T SFunction1_o4_ph;             /* '<S593>/S-Function1' */
  real_T SFunction1_o5_iy;             /* '<S593>/S-Function1' */
  real_T SFunction1_o6_g4;             /* '<S593>/S-Function1' */
  real_T SFunction1_o7_ea;             /* '<S593>/S-Function1' */
  real_T SFunction1_o8_c;              /* '<S593>/S-Function1' */
  real_T SFunction1_o9_jm;             /* '<S593>/S-Function1' */
  real_T SFunction1_o10_o;             /* '<S593>/S-Function1' */
  real_T SFunction1_o11_fl;            /* '<S593>/S-Function1' */
  real_T SFunction1_o1_f0;             /* '<S592>/S-Function1' */
  real_T SFunction1_o2_pl;             /* '<S592>/S-Function1' */
  real_T SFunction1_o3_pe;             /* '<S592>/S-Function1' */
  real_T SFunction1_o4_h2;             /* '<S592>/S-Function1' */
  real_T SFunction1_o5_m0;             /* '<S592>/S-Function1' */
  real_T SFunction1_o6_b1;             /* '<S592>/S-Function1' */
  real_T SFunction1_o7_al;             /* '<S592>/S-Function1' */
  real_T SFunction1_o8_ar;             /* '<S592>/S-Function1' */
  real_T SFunction1_o9_i4;             /* '<S592>/S-Function1' */
  real_T SFunction1_o10_hc;            /* '<S592>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S592>/S-Function1' */
  real_T RX_time_cx;                   /* '<S588>/Data Type Conversion9' */
  real_T RX_delta_time_pa;             /* '<S588>/Data Type Conversion10' */
  real_T RX_time_ob;                   /* '<S584>/Data Type Conversion9' */
  real_T RX_time_ks;                   /* '<S585>/Data Type Conversion9' */
  real_T RX_delta_time_a5;             /* '<S584>/Data Type Conversion10' */
  real_T RX_delta_time_iq;             /* '<S585>/Data Type Conversion10' */
  real_T SFunction1_o1_ph;             /* '<S587>/S-Function1' */
  real_T SFunction1_o2_g5;             /* '<S587>/S-Function1' */
  real_T SFunction1_o3_l1;             /* '<S587>/S-Function1' */
  real_T SFunction1_o4_k1;             /* '<S587>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S587>/S-Function1' */
  real_T SFunction1_o1_cs;             /* '<S586>/S-Function1' */
  real_T SFunction1_o2_jnu;            /* '<S586>/S-Function1' */
  real_T SFunction1_o3_pv;             /* '<S586>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S586>/S-Function1' */
  real_T SFunction1_o5_ni;             /* '<S586>/S-Function1' */
  real_T SFunction1_o1_au;             /* '<S583>/S-Function1' */
  real_T SFunction1_o2_hu;             /* '<S583>/S-Function1' */
  real_T SFunction1_o3_pw;             /* '<S583>/S-Function1' */
  real_T SFunction1_o4_auj;            /* '<S583>/S-Function1' */
  real_T SFunction1_o5_ij;             /* '<S583>/S-Function1' */
  real_T SFunction1_o6_kk;             /* '<S583>/S-Function1' */
  real_T SFunction1_o7_cp;             /* '<S583>/S-Function1' */
  real_T RX_time_ml;                   /* '<S579>/Data Type Conversion9' */
  real_T RX_time_d1;                   /* '<S579>/Data Type Conversion2' */
  real_T RX_delta_time_fl;             /* '<S579>/Data Type Conversion10' */
  real_T RX_delta_time_iw;             /* '<S579>/Data Type Conversion1' */
  real_T SFunction1_o1_lx;             /* '<S581>/S-Function1' */
  real_T SFunction1_o2_ad5;            /* '<S581>/S-Function1' */
  real_T SFunction1_o3_g5;             /* '<S581>/S-Function1' */
  real_T SFunction1_o4_iv;             /* '<S581>/S-Function1' */
  real_T SFunction1_o5_lw;             /* '<S581>/S-Function1' */
  real_T SFunction1_o6_nk;             /* '<S581>/S-Function1' */
  real_T SFunction1_o7_ev;             /* '<S581>/S-Function1' */
  real_T SFunction1_o8_lx;             /* '<S581>/S-Function1' */
  real_T SFunction1_o9_d;              /* '<S581>/S-Function1' */
  real_T SFunction1_o1_hs;             /* '<S580>/S-Function1' */
  real_T SFunction1_o2_d0;             /* '<S580>/S-Function1' */
  real_T SFunction1_o3_o4;             /* '<S580>/S-Function1' */
  real_T SFunction1_o4_j0;             /* '<S580>/S-Function1' */
  real_T SFunction1_o5_nf;             /* '<S580>/S-Function1' */
  real_T SFunction1_o6_g4y;            /* '<S580>/S-Function1' */
  real_T SFunction1_o7_l3;             /* '<S580>/S-Function1' */
  real_T SFunction1_o8_es;             /* '<S580>/S-Function1' */
  real_T SFunction1_o9_gd;             /* '<S580>/S-Function1' */
  real_T SFunction1_o1_nm;             /* '<S578>/S-Function1' */
  real_T SFunction1_o2_mp;             /* '<S578>/S-Function1' */
  real_T SFunction1_o3_cn;             /* '<S578>/S-Function1' */
  real_T SFunction1_o4_ly;             /* '<S578>/S-Function1' */
  real_T SFunction1_o5_e3;             /* '<S578>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S578>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S576>/S-Function1' */
  real_T SFunction1_o2_ky;             /* '<S576>/S-Function1' */
  real_T SFunction1_o3_fy;             /* '<S576>/S-Function1' */
  real_T SFunction1_o4_lo;             /* '<S576>/S-Function1' */
  real_T SFunction1_o5_jl;             /* '<S576>/S-Function1' */
  real_T SFunction1_o1_a0;             /* '<S574>/S-Function1' */
  real_T SFunction1_o2_m4;             /* '<S574>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S574>/S-Function1' */
  real_T SFunction1_o4_nu;             /* '<S574>/S-Function1' */
  real_T SFunction1_o5_e0;             /* '<S574>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S574>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S574>/S-Function1' */
  real_T SFunction1_o8_py;             /* '<S574>/S-Function1' */
  real_T SFunction1_o9_iy;             /* '<S574>/S-Function1' */
  real_T SFunction1_o10_m;             /* '<S574>/S-Function1' */
  real_T SFunction1_o11_c;             /* '<S574>/S-Function1' */
  real_T SFunction1_o12_i;             /* '<S574>/S-Function1' */
  real_T SFunction1_o13_gy;            /* '<S574>/S-Function1' */
  real_T SFunction1_o14_g;             /* '<S574>/S-Function1' */
  real_T SFunction1_o15_d;             /* '<S574>/S-Function1' */
  real_T SFunction1_o16_e;             /* '<S574>/S-Function1' */
  real_T SFunction1_o17_l;             /* '<S574>/S-Function1' */
  real_T SFunction1_o1_nr;             /* '<S572>/S-Function1' */
  real_T SFunction1_o2_dgu;            /* '<S572>/S-Function1' */
  real_T SFunction1_o3_ho;             /* '<S572>/S-Function1' */
  real_T SFunction1_o4_ki;             /* '<S572>/S-Function1' */
  real_T SFunction1_o5_nl;             /* '<S572>/S-Function1' */
  real_T SFunction1_o6_hc;             /* '<S572>/S-Function1' */
  real_T SFunction1_o7_ln;             /* '<S572>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S572>/S-Function1' */
  real_T SFunction1_o9_gn;             /* '<S572>/S-Function1' */
  real_T SFunction1_o10_b;             /* '<S572>/S-Function1' */
  real_T SFunction1_o11_b;             /* '<S572>/S-Function1' */
  real_T timeStamp_j;                  /* '<S529>/timeStamp' */
  real_T Unit_Delay_i;                 /* '<S529>/Unit_Delay' */
  real_T SFunction1_o1_gd;             /* '<S525>/S-Function1' */
  real_T SFunction1_o2_dl;             /* '<S525>/S-Function1' */
  real_T SFunction1_o3_hh;             /* '<S525>/S-Function1' */
  real_T SFunction1_o4_cs;             /* '<S525>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S525>/S-Function1' */
  real_T SFunction1_o6_la;             /* '<S525>/S-Function1' */
  real_T SFunction1_o7_lp;             /* '<S525>/S-Function1' */
  real_T SFunction1_o8_bo;             /* '<S525>/S-Function1' */
  real_T SFunction1_o9_a;              /* '<S525>/S-Function1' */
  real_T SFunction1_o10_pk;            /* '<S525>/S-Function1' */
  real_T SFunction1_o1_df;             /* '<S523>/S-Function1' */
  real_T SFunction1_o2_eb;             /* '<S523>/S-Function1' */
  real_T SFunction1_o3_kb;             /* '<S523>/S-Function1' */
  real_T SFunction1_o4_nj;             /* '<S523>/S-Function1' */
  real_T SFunction1_o5_k3;             /* '<S523>/S-Function1' */
  real_T SFunction1_o6_hu;             /* '<S523>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S523>/S-Function1' */
  real_T SFunction1_o8_lb;             /* '<S523>/S-Function1' */
  real_T SFunction1_o9_oz;             /* '<S523>/S-Function1' */
  real_T SFunction1_o10_dd;            /* '<S523>/S-Function1' */
  real_T SFunction1_o11_a2;            /* '<S523>/S-Function1' */
  real_T SFunction1_o12_c;             /* '<S523>/S-Function1' */
  real_T SFunction1_o13_o;             /* '<S523>/S-Function1' */
  real_T SFunction1_o14_l;             /* '<S523>/S-Function1' */
  real_T SFunction1_o15_a;             /* '<S523>/S-Function1' */
  real_T SFunction1_o16_ed;            /* '<S523>/S-Function1' */
  real_T SFunction1_o17_d;             /* '<S523>/S-Function1' */
  real_T SFunction1_o18_c;             /* '<S523>/S-Function1' */
  real_T SFunction1_o19_o;             /* '<S523>/S-Function1' */
  real_T SFunction1_o20_e;             /* '<S523>/S-Function1' */
  real_T SFunction1_o21_f;             /* '<S523>/S-Function1' */
  real_T SFunction1_o22_o;             /* '<S523>/S-Function1' */
  real_T SFunction1_o23_b;             /* '<S523>/S-Function1' */
  real_T SFunction1_o24_l;             /* '<S523>/S-Function1' */
  real_T SFunction1_o25_p;             /* '<S523>/S-Function1' */
  real_T SFunction1_o1_bq;             /* '<S521>/S-Function1' */
  real_T SFunction1_o2_pl3;            /* '<S521>/S-Function1' */
  real_T SFunction1_o3_bzd;            /* '<S521>/S-Function1' */
  real_T SFunction1_o4_cj;             /* '<S521>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S521>/S-Function1' */
  real_T SFunction1_o6_nt;             /* '<S521>/S-Function1' */
  real_T SFunction1_o7_lm;             /* '<S521>/S-Function1' */
  real_T SFunction1_o8_n5;             /* '<S521>/S-Function1' */
  real_T SFunction1_o9_dw;             /* '<S521>/S-Function1' */
  real_T SFunction1_o10_by;            /* '<S521>/S-Function1' */
  real_T SFunction1_o11_m;             /* '<S521>/S-Function1' */
  real_T SFunction1_o12_l;             /* '<S521>/S-Function1' */
  real_T SFunction1_o13_d;             /* '<S521>/S-Function1' */
  real_T SFunction1_o14_n;             /* '<S521>/S-Function1' */
  real_T SFunction1_o15_a0;            /* '<S521>/S-Function1' */
  real_T SFunction1_o16_k;             /* '<S521>/S-Function1' */
  real_T SFunction1_o17_j;             /* '<S521>/S-Function1' */
  real_T SFunction1_o18_d;             /* '<S521>/S-Function1' */
  real_T SFunction1_o19_k;             /* '<S521>/S-Function1' */
  real_T SFunction1_o20_h;             /* '<S521>/S-Function1' */
  real_T SFunction1_o21_l;             /* '<S521>/S-Function1' */
  real_T SFunction1_o22_i;             /* '<S521>/S-Function1' */
  real_T SFunction1_o23_n;             /* '<S521>/S-Function1' */
  real_T SFunction1_o24_o;             /* '<S521>/S-Function1' */
  real_T SFunction1_o25_m;             /* '<S521>/S-Function1' */
  real_T SFunction1_o1_kzx;            /* '<S519>/S-Function1' */
  real_T SFunction1_o2_bq;             /* '<S519>/S-Function1' */
  real_T SFunction1_o3_dd;             /* '<S519>/S-Function1' */
  real_T SFunction1_o4_ha;             /* '<S519>/S-Function1' */
  real_T RX_time_aa;                   /* '<S515>/Data Type Conversion9' */
  real_T RX_time_kx;                   /* '<S515>/Data Type Conversion2' */
  real_T RX_delta_time_hb;             /* '<S515>/Data Type Conversion10' */
  real_T RX_delta_time_ga;             /* '<S515>/Data Type Conversion3' */
  real_T SFunction1_o1_ar;             /* '<S517>/S-Function1' */
  real_T SFunction1_o2_p0;             /* '<S517>/S-Function1' */
  real_T SFunction1_o3_adq;            /* '<S517>/S-Function1' */
  real_T SFunction1_o4_gf;             /* '<S517>/S-Function1' */
  real_T SFunction1_o5_f1p;            /* '<S517>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S517>/S-Function1' */
  real_T SFunction1_o7_bu;             /* '<S517>/S-Function1' */
  real_T SFunction1_o1_nq;             /* '<S516>/S-Function1' */
  real_T SFunction1_o2_co;             /* '<S516>/S-Function1' */
  real_T SFunction1_o3_at;             /* '<S516>/S-Function1' */
  real_T SFunction1_o4_az;             /* '<S516>/S-Function1' */
  real_T SFunction1_o5_nx;             /* '<S516>/S-Function1' */
  real_T SFunction1_o6_ez;             /* '<S516>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S516>/S-Function1' */
  real_T SFunction1_o1_kp;             /* '<S514>/S-Function1' */
  real_T SFunction1_o2_bl;             /* '<S514>/S-Function1' */
  real_T SFunction1_o3_g2;             /* '<S514>/S-Function1' */
  real_T SFunction1_o4_bx;             /* '<S514>/S-Function1' */
  real_T SFunction1_o5_p1;             /* '<S514>/S-Function1' */
  real_T SFunction1_o6_pt;             /* '<S514>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S514>/S-Function1' */
  real_T SFunction1_o8_fp;             /* '<S514>/S-Function1' */
  real_T SFunction1_o9_gg;             /* '<S514>/S-Function1' */
  real_T SFunction1_o10_cf;            /* '<S514>/S-Function1' */
  real_T SFunction1_o11_dy;            /* '<S514>/S-Function1' */
  real_T SFunction1_o12_j;             /* '<S514>/S-Function1' */
  real_T SFunction1_o13_og;            /* '<S514>/S-Function1' */
  real_T SFunction1_o14_p;             /* '<S514>/S-Function1' */
  real_T SFunction1_o15_h;             /* '<S514>/S-Function1' */
  real_T SFunction1_o16_m;             /* '<S514>/S-Function1' */
  real_T SFunction1_o17_k;             /* '<S514>/S-Function1' */
  real_T SFunction1_o18_a;             /* '<S514>/S-Function1' */
  real_T SFunction1_o19_i;             /* '<S514>/S-Function1' */
  real_T SFunction1_o20_i;             /* '<S514>/S-Function1' */
  real_T SFunction1_o21_e;             /* '<S514>/S-Function1' */
  real_T SFunction1_o22_ih;            /* '<S514>/S-Function1' */
  real_T SFunction1_o23_i;             /* '<S514>/S-Function1' */
  real_T SFunction1_o1_g3;             /* '<S512>/S-Function1' */
  real_T SFunction1_o2_g4;             /* '<S512>/S-Function1' */
  real_T SFunction1_o3_ne;             /* '<S512>/S-Function1' */
  real_T SFunction1_o4_e3;             /* '<S512>/S-Function1' */
  real_T SFunction1_o6_oc;             /* '<S512>/S-Function1' */
  real_T SFunction1_o7_dk;             /* '<S512>/S-Function1' */
  real_T SFunction1_o9_p;              /* '<S512>/S-Function1' */
  real_T SFunction1_o10_or;            /* '<S512>/S-Function1' */
  real_T SFunction1_o11_ae;            /* '<S512>/S-Function1' */
  real_T SFunction1_o12_jy;            /* '<S512>/S-Function1' */
  real_T SFunction1_o13_ou;            /* '<S512>/S-Function1' */
  real_T SFunction1_o14_b;             /* '<S512>/S-Function1' */
  real_T SFunction1_o15_dd;            /* '<S512>/S-Function1' */
  real_T SFunction1_o16_g;             /* '<S512>/S-Function1' */
  real_T SFunction1_o17_n;             /* '<S512>/S-Function1' */
  real_T SFunction1_o18_g;             /* '<S512>/S-Function1' */
  real_T SFunction1_o19_a;             /* '<S512>/S-Function1' */
  real_T SFunction1_o20_ir;            /* '<S512>/S-Function1' */
  real_T SFunction1_o21_j;             /* '<S512>/S-Function1' */
  real_T SFunction1_o22_oy;            /* '<S512>/S-Function1' */
  real_T SFunction1_o23_o;             /* '<S512>/S-Function1' */
  real_T SFunction1_o1_ly;             /* '<S510>/S-Function1' */
  real_T SFunction1_o2_fl;             /* '<S510>/S-Function1' */
  real_T SFunction1_o3_os;             /* '<S510>/S-Function1' */
  real_T SFunction1_o4_dz;             /* '<S510>/S-Function1' */
  real_T SFunction1_o5_pr;             /* '<S510>/S-Function1' */
  real_T SFunction1_o6_hf;             /* '<S510>/S-Function1' */
  real_T SFunction1_o7_pz;             /* '<S510>/S-Function1' */
  real_T SFunction1_o8_g;              /* '<S510>/S-Function1' */
  real_T SFunction1_o9_g5;             /* '<S510>/S-Function1' */
  real_T SFunction1_o10_d5;            /* '<S510>/S-Function1' */
  real_T SFunction1_o11_by;            /* '<S510>/S-Function1' */
  real_T SFunction1_o12_b;             /* '<S510>/S-Function1' */
  real_T SFunction1_o13_g0;            /* '<S510>/S-Function1' */
  real_T SFunction1_o14_nc;            /* '<S510>/S-Function1' */
  real_T SFunction1_o15_ag;            /* '<S510>/S-Function1' */
  real_T SFunction1_o16_c;             /* '<S510>/S-Function1' */
  real_T SFunction1_o17_b;             /* '<S510>/S-Function1' */
  real_T SFunction1_o18_b;             /* '<S510>/S-Function1' */
  real_T SFunction1_o19_n;             /* '<S510>/S-Function1' */
  real_T SFunction1_o20_j;             /* '<S510>/S-Function1' */
  real_T SFunction1_o21_e5;            /* '<S510>/S-Function1' */
  real_T SFunction1_o22_f;             /* '<S510>/S-Function1' */
  real_T SFunction1_o23_e;             /* '<S510>/S-Function1' */
  real_T SFunction1_o24_g;             /* '<S510>/S-Function1' */
  real_T SFunction1_o25_b;             /* '<S510>/S-Function1' */
  real_T SFunction1_o26_l;             /* '<S510>/S-Function1' */
  real_T SFunction1_o27_h;             /* '<S510>/S-Function1' */
  real_T SFunction1_o28_f;             /* '<S510>/S-Function1' */
  real_T SFunction1_o29;               /* '<S510>/S-Function1' */
  real_T SFunction1_o30;               /* '<S510>/S-Function1' */
  real_T SFunction1_o31;               /* '<S510>/S-Function1' */
  real_T SFunction1_o32;               /* '<S510>/S-Function1' */
  real_T SFunction1_o33;               /* '<S510>/S-Function1' */
  real_T SFunction1_o34;               /* '<S510>/S-Function1' */
  real_T SFunction1_o35;               /* '<S510>/S-Function1' */
  real_T SFunction1_o36;               /* '<S510>/S-Function1' */
  real_T SFunction1_o37;               /* '<S510>/S-Function1' */
  real_T SFunction1_o38;               /* '<S510>/S-Function1' */
  real_T SFunction1_o39;               /* '<S510>/S-Function1' */
  real_T SFunction1_o40;               /* '<S510>/S-Function1' */
  real_T SFunction1_o41;               /* '<S510>/S-Function1' */
  real_T SFunction1_o42;               /* '<S510>/S-Function1' */
  real_T SFunction1_o43;               /* '<S510>/S-Function1' */
  real_T SFunction1_o44;               /* '<S510>/S-Function1' */
  real_T SFunction1_o45;               /* '<S510>/S-Function1' */
  real_T SFunction1_o46;               /* '<S510>/S-Function1' */
  real_T SFunction1_o47;               /* '<S510>/S-Function1' */
  real_T SFunction1_o48;               /* '<S510>/S-Function1' */
  real_T SFunction1_o49;               /* '<S510>/S-Function1' */
  real_T SFunction1_o50;               /* '<S510>/S-Function1' */
  real_T SFunction1_o51;               /* '<S510>/S-Function1' */
  real_T SFunction1_o52;               /* '<S510>/S-Function1' */
  real_T SFunction1_o53;               /* '<S510>/S-Function1' */
  real_T SFunction1_o54;               /* '<S510>/S-Function1' */
  real_T SFunction1_o55;               /* '<S510>/S-Function1' */
  real_T SFunction1_o56;               /* '<S510>/S-Function1' */
  real_T SFunction1_o57;               /* '<S510>/S-Function1' */
  real_T SFunction1_o58;               /* '<S510>/S-Function1' */
  real_T SFunction1_o59;               /* '<S510>/S-Function1' */
  real_T SFunction1_o60;               /* '<S510>/S-Function1' */
  real_T SFunction1_o61;               /* '<S510>/S-Function1' */
  real_T SFunction1_o62;               /* '<S510>/S-Function1' */
  real_T SFunction1_o63;               /* '<S510>/S-Function1' */
  real_T SFunction1_o64;               /* '<S510>/S-Function1' */
  real_T SFunction1_o65;               /* '<S510>/S-Function1' */
  real_T SFunction1_o66;               /* '<S510>/S-Function1' */
  real_T SFunction1_o67;               /* '<S510>/S-Function1' */
  real_T SFunction1_o68;               /* '<S510>/S-Function1' */
  real_T SFunction1_o69;               /* '<S510>/S-Function1' */
  real_T SFunction1_o70;               /* '<S510>/S-Function1' */
  real_T SFunction1_o71;               /* '<S510>/S-Function1' */
  real_T SFunction1_o72;               /* '<S510>/S-Function1' */
  real_T SFunction1_o73;               /* '<S510>/S-Function1' */
  real_T SFunction1_o74;               /* '<S510>/S-Function1' */
  real_T SFunction1_o1_pc;             /* '<S508>/S-Function1' */
  real_T SFunction1_o2_bz;             /* '<S508>/S-Function1' */
  real_T SFunction1_o3_o1;             /* '<S508>/S-Function1' */
  real_T SFunction1_o4_md;             /* '<S508>/S-Function1' */
  real_T SFunction1_o5_lj;             /* '<S508>/S-Function1' */
  real_T SFunction1_o1_a5;             /* '<S506>/S-Function1' */
  real_T SFunction1_o2_f2;             /* '<S506>/S-Function1' */
  real_T SFunction1_o3_fp;             /* '<S506>/S-Function1' */
  real_T SFunction1_o4_i0;             /* '<S506>/S-Function1' */
  real_T SFunction1_o5_gk;             /* '<S506>/S-Function1' */
  real_T SFunction1_o6_j0;             /* '<S506>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S506>/S-Function1' */
  real_T SFunction1_o8_i;              /* '<S506>/S-Function1' */
  real_T SFunction1_o1_fw;             /* '<S504>/S-Function1' */
  real_T SFunction1_o2_ey;             /* '<S504>/S-Function1' */
  real_T SFunction1_o3_j1;             /* '<S504>/S-Function1' */
  real_T SFunction1_o4_kv;             /* '<S504>/S-Function1' */
  real_T SFunction1_o5_ki;             /* '<S504>/S-Function1' */
  real_T SFunction1_o6_jl;             /* '<S504>/S-Function1' */
  real_T SFunction1_o7_hj;             /* '<S504>/S-Function1' */
  real_T SFunction1_o8_fg;             /* '<S504>/S-Function1' */
  real_T SFunction1_o9_kh;             /* '<S504>/S-Function1' */
  real_T SFunction1_o10_dt;            /* '<S504>/S-Function1' */
  real_T SFunction1_o11_a3;            /* '<S504>/S-Function1' */
  real_T SFunction1_o1_jc;             /* '<S502>/S-Function1' */
  real_T SFunction1_o2_pw;             /* '<S502>/S-Function1' */
  real_T SFunction1_o3_km;             /* '<S502>/S-Function1' */
  real_T SFunction1_o4_ke;             /* '<S502>/S-Function1' */
  real_T SFunction1_o5_pv;             /* '<S502>/S-Function1' */
  real_T SFunction1_o6_pv;             /* '<S502>/S-Function1' */
  real_T SFunction1_o7_jm;             /* '<S502>/S-Function1' */
  real_T SFunction1_o8_cl;             /* '<S502>/S-Function1' */
  real_T SFunction1_o1_de;             /* '<S500>/S-Function1' */
  real_T SFunction1_o2_d5;             /* '<S500>/S-Function1' */
  real_T SFunction1_o3_dg;             /* '<S500>/S-Function1' */
  real_T SFunction1_o4_bc;             /* '<S500>/S-Function1' */
  real_T SFunction1_o5_k4;             /* '<S500>/S-Function1' */
  real_T SFunction1_o6_j5;             /* '<S500>/S-Function1' */
  real_T SFunction1_o7_hh;             /* '<S500>/S-Function1' */
  real_T SFunction1_o8_oi;             /* '<S500>/S-Function1' */
  real_T SFunction1_o9_ih;             /* '<S500>/S-Function1' */
  real_T SFunction1_o10_py;            /* '<S500>/S-Function1' */
  real_T SFunction1_o11_mg;            /* '<S500>/S-Function1' */
  real_T SFunction1_o12_n;             /* '<S500>/S-Function1' */
  real_T SFunction1_o13_or;            /* '<S500>/S-Function1' */
  real_T SFunction1_o1_jh;             /* '<S492>/S-Function1' */
  real_T SFunction1_o2_e2;             /* '<S492>/S-Function1' */
  real_T SFunction1_o3_id;             /* '<S492>/S-Function1' */
  real_T SFunction1_o4_jm;             /* '<S492>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S492>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S492>/S-Function1' */
  real_T SFunction1_o7_dv;             /* '<S492>/S-Function1' */
  real_T SFunction1_o8_of;             /* '<S492>/S-Function1' */
  real_T SFunction1_o9_dt;             /* '<S492>/S-Function1' */
  real_T SFunction1_o10_hj;            /* '<S492>/S-Function1' */
  real_T SFunction1_o11_h;             /* '<S492>/S-Function1' */
  real_T SFunction1_o1_bv;             /* '<S483>/S-Function1' */
  real_T SFunction1_o2_kv;             /* '<S483>/S-Function1' */
  real_T SFunction1_o3_j2;             /* '<S483>/S-Function1' */
  real_T SFunction1_o4_fp;             /* '<S483>/S-Function1' */
  real_T SFunction1_o5_mi;             /* '<S483>/S-Function1' */
  real_T SFunction1_o6_kp;             /* '<S483>/S-Function1' */
  real_T SFunction1_o7_gb;             /* '<S483>/S-Function1' */
  real_T SFunction1_o8_ez;             /* '<S483>/S-Function1' */
  real_T SFunction1_o9_ad;             /* '<S483>/S-Function1' */
  real_T SFunction1_o10_n;             /* '<S483>/S-Function1' */
  real_T SFunction1_o11_p;             /* '<S483>/S-Function1' */
  real_T Sum_l;                        /* '<S409>/Sum' */
  real_T for_logging;                  /* '<S403>/for_logging' */
  real_T for_logging1;                 /* '<S403>/for_logging1' */
  real_T ms_to_kmh;                    /* '<S403>/m//s_to_km//h' */
  real_T ms_to_kmh_2;                  /* '<S403>/m//s_to_km//h_2' */
  real_T for_logging2;                 /* '<S403>/for_logging2' */
  real_T for_logging3;                 /* '<S403>/for_logging3' */
  real_T for_logging4;                 /* '<S403>/for_logging4' */
  real_T for_logging5;                 /* '<S403>/for_logging5' */
  real_T for_logging6;                 /* '<S403>/for_logging6' */
  real_T HDOP__f;                      /* '<S401>/Bus Selector1' */
  real_T FrontAxleSpeed_d;             /* '<S401>/Bus Selector4' */
  real_T kph2mps;                      /* '<S401>/kph2mps' */
  real_T Product_c;                    /* '<S401>/Product' */
  real_T FrontAxleSpeed_dv;            /* '<S401>/Bus Selector4' */
  real_T kph2mps1;                     /* '<S401>/kph2mps1' */
  real_T Product1_h;                   /* '<S401>/Product1' */
  real_T UnitDelay1;                   /* '<S401>/Unit Delay1' */
  real_T InitialHeading;               /* '<S402>/InitialHeading' */
  real_T InitialPosition;              /* '<S402>/InitialPosition' */
  real_T InitialXPosition;             /* '<S402>/InitialXPosition' */
  real_T InitialYPosition;             /* '<S402>/InitialYPosition' */
  real_T FrontAxleSpeed_dvq;           /* '<S71>/Bus Selector' */
  real_T kph2ms;                       /* '<S71>/kph2ms' */
  real_T LongitudnalPosition;          /* '<S402>/LongitudnalPosition' */
  real_T TmpRTBAtVehHeadingInport1;    /* '<S402>/In2' */
  real_T TrigonometricFunction;        /* '<S402>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S402>/Trigonometric Function1' */
  real_T VehHeading;                   /* '<S402>/VehHeading' */
  real_T XPosition;                    /* '<S402>/XPosition' */
  real_T YPosition;                    /* '<S402>/YPosition' */
  real_T UnitDelay1_f;                 /* '<S97>/Unit Delay1' */
  real_T Switch_a;                     /* '<S97>/Switch' */
  real_T Subtract_a;                   /* '<S96>/Subtract' */
  real_T DataTypeConversion1_ht;       /* '<S83>/Data Type Conversion1' */
  real_T uDLookupTable;                /* '<S83>/2-D Lookup Table' */
  real_T DataTypeConversion5_o;        /* '<S77>/Data Type Conversion5' */
  real_T distanceSpdTarget_e;          /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_target_o;       /* '<S81>/Multiport Switch' */
  real_T VSPD_TARGET_KPH_APV_g;        /* '<S81>/Signal Conversion16' */
  real_T VSPD_HYST_KPH_APV_f;          /* '<S81>/Saturation9' */
  real_T Add_k;                        /* '<S109>/Add' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_AP_b;/* '<S81>/Saturation1' */
  real_T DataTypeConversion4_ib;       /* '<S79>/Data Type Conversion4' */
  real_T ThrottlePID_Y_m;              /* '<S79>/Switch' */
  real_T MultiportSwitch;              /* '<S83>/Multiport Switch' */
  real_T DataTypeConversion1_n;        /* '<S82>/Data Type Conversion1' */
  real_T uD_Lookup_Table;              /* '<S85>/2D_Lookup_Table' */
  real_T DataTypeConversion1_av;       /* '<S84>/Data Type Conversion1' */
  real_T Subtract_j0;                  /* '<S84>/Subtract' */
  real_T Divide_h;                     /* '<S84>/Divide' */
  real_T Primary_brake_circuit_pressure_;/* '<S104>/Gain4' */
  real_T Secondary_brake_circuit_pressur;/* '<S104>/Gain5' */
  real_T Add_d;                        /* '<S105>/Add' */
  real_T Gain_g;                       /* '<S105>/Gain' */
  real_T Brake_pressure_target_kpa;    /* '<S105>/MinMax' */
  real_T Bendix_2C2_Primary_brake_circui;/* '<S104>/Gain1' */
  real_T Bendix_2C2_Secondary_brake_circ;/* '<S104>/Gain2' */
  real_T Add_n;                        /* '<S106>/Add' */
  real_T brake_system_avg_appl_pressure_;/* '<S106>/Gain' */
  real_T Primary_brake_circuit_pressur_n;/* '<S104>/Gain3' */
  real_T Divide2;                      /* '<S106>/Divide2' */
  real_T Gain5;                        /* '<S106>/Gain5' */
  real_T Brake_appl_percent;           /* '<S106>/Saturation3' */
  real_T Unit_Delay_k4;                /* '<S353>/Unit_Delay' */
  real_T MinMax_d;                     /* '<S353>/MinMax' */
  real_T Xold_h;                       /* '<S400>/FixPt Unit Delay1' */
  real_T Init_ip;                      /* '<S400>/Init' */
  real_T Abs_e;                        /* '<S396>/Abs' */
  real_T DigitalClock;                 /* '<S397>/Digital Clock' */
  real_T Unit_Delay_d;                 /* '<S397>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S397>/Subtract' */
  real_T Product1_hp;                  /* '<S396>/Product1' */
  real_T Add1_n;                       /* '<S396>/Add1' */
  real_T MinMax2_g;                    /* '<S396>/MinMax2' */
  real_T Abs1_h;                       /* '<S396>/Abs1' */
  real_T Product2_c;                   /* '<S396>/Product2' */
  real_T Subtract1_n;                  /* '<S396>/Subtract1' */
  real_T MinMax1_h;                    /* '<S396>/MinMax1' */
  real_T Unit_Delay_n;                 /* '<S351>/Unit_Delay' */
  real_T MinMax_nx;                    /* '<S351>/MinMax' */
  real_T Xold_f;                       /* '<S389>/FixPt Unit Delay1' */
  real_T Init_b;                       /* '<S389>/Init' */
  real_T Abs_ez;                       /* '<S385>/Abs' */
  real_T DigitalClock_b;               /* '<S386>/Digital Clock' */
  real_T Unit_Delay_nx;                /* '<S386>/Unit_Delay' */
  real_T Subtract_i;                   /* '<S386>/Subtract' */
  real_T Product1_i;                   /* '<S385>/Product1' */
  real_T Add1_b;                       /* '<S385>/Add1' */
  real_T MinMax2_k;                    /* '<S385>/MinMax2' */
  real_T Abs1_c;                       /* '<S385>/Abs1' */
  real_T Product2_n;                   /* '<S385>/Product2' */
  real_T Subtract1_h;                  /* '<S385>/Subtract1' */
  real_T MinMax1_jm;                   /* '<S385>/MinMax1' */
  real_T pathSpdLimit_a;               /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_abs_max;        /* '<S81>/Multiport Switch' */
  real_T distance_o;                   /* '<S81>/Bus Selector' */
  real_T Distance_to_achieve_speed_targe;/* '<S81>/Multiport Switch' */
  real_T Uk1[2];                       /* '<S348>/Delay Input1' */
  real_T Saturation5;                  /* '<S350>/Saturation5' */
  real_T MinMax6;                      /* '<S350>/MinMax6' */
  real_T Gain1_e;                      /* '<S350>/Gain1' */
  real_T VSPD_TARGET_KPH_APV_gu;       /* '<S350>/Saturation4' */
  real_T MinMax1_f;                    /* '<S350>/MinMax1' */
  real_T Gain2;                        /* '<S350>/Gain2' */
  real_T Saturation6;                  /* '<S350>/Saturation6' */
  real_T Acceleration_target_ms2;      /* '<S81>/Multiport Switch' */
  real_T Saturation7;                  /* '<S350>/Saturation7' */
  real_T Saturation1;                  /* '<S350>/Saturation1' */
  real_T Jerk_target_ms3;              /* '<S81>/Multiport Switch' */
  real_T Saturation2;                  /* '<S350>/Saturation2' */
  real_T Vehicle_speed_vector_kph[33]; /* '<S350>/Gain3' */
  real_T MinMax3;                      /* '<S362>/MinMax3' */
  real_T Unit_Delay_f;                 /* '<S366>/Unit_Delay' */
  real_T MinMax5;                      /* '<S362>/MinMax5' */
  real_T Subtract_al;                  /* '<S362>/Subtract' */
  real_T Abs_m;                        /* '<S362>/Abs' */
  real_T MinMax4;                      /* '<S362>/MinMax4' */
  real_T MinMax6_j;                    /* '<S362>/MinMax6' */
  real_T Subtract1_c;                  /* '<S362>/Subtract1' */
  real_T Abs1_h5;                      /* '<S362>/Abs1' */
  real_T MinMax8;                      /* '<S362>/MinMax8' */
  real_T MinMax7;                      /* '<S362>/MinMax7' */
  real_T MinMax10;                     /* '<S362>/MinMax10' */
  real_T MinMax9;                      /* '<S362>/MinMax9' */
  real_T Subtract2;                    /* '<S362>/Subtract2' */
  real_T Abs2;                         /* '<S362>/Abs2' */
  real_T Xold_pg;                      /* '<S377>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S377>/Init' */
  real_T Gain1_c;                      /* '<S363>/Gain1' */
  real_T DigitalClock_f;               /* '<S375>/Digital Clock' */
  real_T Unit_Delay_e;                 /* '<S375>/Unit_Delay' */
  real_T Subtract_b;                   /* '<S375>/Subtract' */
  real_T Product1_a;                   /* '<S372>/Product1' */
  real_T Add_h;                        /* '<S372>/Add' */
  real_T MinMax_a;                     /* '<S372>/MinMax' */
  real_T LookupTableDynamic;           /* '<S363>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S355>/Delay Input1' */
  real_T Xold_o;                       /* '<S361>/FixPt Unit Delay1' */
  real_T Init_pn;                      /* '<S361>/Init' */
  real_T Vehicle_speed_target_c;       /* '<S356>/Unit_Delay' */
  real_T Vehicle_speed;                /* '<S356>/Unit_Delay' */
  real_T Distance_m;                   /* '<S356>/Unit_Delay' */
  real_T err;                          /* '<S356>/Subtract' */
  real_T err_abs;                      /* '<S356>/Abs2' */
  real_T Gain2_k;                      /* '<S356>/Gain2' */
  real_T Saturation4;                  /* '<S356>/Saturation4' */
  real_T time_to_target_vspd_secs;     /* '<S356>/Divide2' */
  real_T DigitalClock_p;               /* '<S354>/Digital Clock' */
  real_T Unit_Delay_b;                 /* '<S354>/Unit_Delay' */
  real_T Subtract_g;                   /* '<S354>/Subtract' */
  real_T MinMax3_n;                    /* '<S356>/MinMax3' */
  real_T Saturation1_e;                /* '<S356>/Saturation1' */
  real_T Divide_e;                     /* '<S356>/Divide' */
  real_T Abs_ma;                       /* '<S357>/Abs' */
  real_T Product1_iv;                  /* '<S357>/Product1' */
  real_T Add1_bf;                      /* '<S357>/Add1' */
  real_T MinMax2_c;                    /* '<S357>/MinMax2' */
  real_T Abs1_f;                       /* '<S357>/Abs1' */
  real_T Product2_m;                   /* '<S357>/Product2' */
  real_T Subtract1_h2;                 /* '<S357>/Subtract1' */
  real_T MinMax1_p;                    /* '<S357>/MinMax1' */
  real_T MinMax_o;                     /* '<S81>/MinMax' */
  real_T Vehicle_speed_target_n;       /* '<S81>/Saturation8' */
  real_T uD_Lookup_Table_l;            /* '<S200>/2D_Lookup_Table' */
  real_T Divide_f;                     /* '<S106>/Divide' */
  real_T Gain1_l;                      /* '<S106>/Gain1' */
  real_T Brake_appl_percent_to_achieve_d;/* '<S106>/Saturation1' */
  real_T ACCEL_LIM_MS2_APV_b;          /* '<S81>/Saturation2' */
  real_T uD_Lookup_Table_i;            /* '<S201>/2D_Lookup_Table' */
  real_T Divide1_f;                    /* '<S106>/Divide1' */
  real_T Gain2_e;                      /* '<S106>/Gain2' */
  real_T Brake_appl_percent_for_maximum_;/* '<S106>/Saturation2' */
  real_T DataTypeConversion2_l;        /* '<S77>/Data Type Conversion2' */
  real_T uD_Lookup_Table_le;           /* '<S199>/2D_Lookup_Table' */
  real_T Decel_rate_calculated_ms2;    /* '<S106>/Saturation4' */
  real_T DataTypeConversion_pp;        /* '<S107>/Data Type Conversion' */
  real_T DataTypeConversion1_k;        /* '<S107>/Data Type Conversion1' */
  real_T Add_m;                        /* '<S107>/Add' */
  real_T Gain_j;                       /* '<S107>/Gain' */
  real_T MinMax1_i;                    /* '<S203>/MinMax1' */
  real_T Saturation_nc;                /* '<S203>/Saturation' */
  real_T Divide_a;                     /* '<S203>/Divide' */
  real_T Product2_o;                   /* '<S203>/Product2' */
  real_T Subtract1_e;                  /* '<S203>/Subtract1' */
  real_T Unit_Delay2_g;                /* '<S203>/Unit_Delay2' */
  real_T Product1_o;                   /* '<S203>/Product1' */
  real_T Add1_n1;                      /* '<S203>/Add1' */
  real_T TSamp;                        /* '<S202>/TSamp' */
  real_T Uk1_b;                        /* '<S202>/UD' */
  real_T Diff;                         /* '<S202>/Diff' */
  real_T BrakingPID_Y_percent;         /* '<S77>/MinMax' */
  real_T BrakingPID_Y_k;               /* '<S77>/Gain' */
  real_T CurveBasedSpeedSetpoint;      /* '<S79>/CurveBasedSpeedSetpoint' */
  real_T uDLookupTable1;               /* '<S80>/1-D Lookup Table1' */
  real_T MinMax1_pr;                   /* '<S333>/MinMax1' */
  real_T Saturation_ns;                /* '<S333>/Saturation' */
  real_T Divide_o;                     /* '<S333>/Divide' */
  real_T Product2_b;                   /* '<S333>/Product2' */
  real_T Subtract1_ei;                 /* '<S333>/Subtract1' */
  real_T Unit_Delay2_k;                /* '<S333>/Unit_Delay2' */
  real_T Product1_n;                   /* '<S333>/Product1' */
  real_T Add1_k;                       /* '<S333>/Add1' */
  real_T Abs_ij;                       /* '<S282>/Abs' */
  real_T Add_p;                        /* '<S282>/Add' */
  real_T Switch_g;                     /* '<S282>/Switch' */
  real_T MinMax1_au;                   /* '<S334>/MinMax1' */
  real_T Saturation_e;                 /* '<S334>/Saturation' */
  real_T Divide_d;                     /* '<S334>/Divide' */
  real_T Product2_f;                   /* '<S334>/Product2' */
  real_T Subtract1_b;                  /* '<S334>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S334>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S334>/Product1' */
  real_T Add1_pt;                      /* '<S334>/Add1' */
  real_T Sign;                         /* '<S282>/Sign' */
  real_T Product_cf;                   /* '<S282>/Product' */
  real_T MinMax1_e0;                   /* '<S335>/MinMax1' */
  real_T Saturation_o;                 /* '<S335>/Saturation' */
  real_T Divide_j;                     /* '<S335>/Divide' */
  real_T Product2_nk;                  /* '<S335>/Product2' */
  real_T Subtract1_eh;                 /* '<S335>/Subtract1' */
  real_T Unit_Delay2_c;                /* '<S335>/Unit_Delay2' */
  real_T Product1_cc;                  /* '<S335>/Product1' */
  real_T Add1_f;                       /* '<S335>/Add1' */
  real_T Switch1_f;                    /* '<S282>/Switch1' */
  real_T correctedError;               /* '<S282>/corrected Error' */
  real_T Switch_hq;                    /* '<S283>/Switch' */
  real_T Switch1_j;                    /* '<S283>/Switch1' */
  real_T SteerCtrlErrRaw;              /* '<S80>/sign' */
  real_T DataTypeConversion1_ev;       /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S286>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_k;         /* '<S80>/Data Type Conversion' */
  real_T SteeringControlPGainSpeedFactor;/* '<S80>/SteeringControlPGainSpeedFactor' */
  real_T SteerCtrlPgain;               /* '<S80>/Product1' */
  real_T Gain_c;                       /* '<S80>/Gain' */
  real_T Product_d;                    /* '<S296>/Product' */
  real_T Divide_ag;                    /* '<S296>/Divide' */
  real_T Product1_hr;                  /* '<S296>/Product1' */
  real_T UnitDelay_m5;                 /* '<S295>/Unit Delay' */
  real_T Switch_o;                     /* '<S295>/Switch' */
  real_T Sign1;                        /* '<S298>/Sign1' */
  real_T Switch1_jw;                   /* '<S298>/Switch1' */
  real_T UnitDelay_o;                  /* '<S296>/Unit Delay' */
  real_T Add_px;                       /* '<S296>/Add' */
  real_T Divide1_b;                    /* '<S296>/Divide1' */
  real_T UnitDelay1_e;                 /* '<S296>/Unit Delay1' */
  real_T Add3;                         /* '<S296>/Add3' */
  real_T Add1_m;                       /* '<S296>/Add1' */
  real_T Switch_p;                     /* '<S297>/Switch' */
  real_T Switch2_i;                    /* '<S297>/Switch2' */
  real_T previewSteeringAngle_b;       /* '<S80>/Bus Selector2' */
  real_T rad2deg1;                     /* '<S80>/rad2deg1' */
  real_T Add2;                         /* '<S80>/Add2' */
  real_T uDLookupTable_a;              /* '<S284>/1-D Lookup Table' */
  real_T AdjustedStanleyGain;          /* '<S284>/AdjustedStanleyGain' */
  real_T Step;                         /* '<S278>/Step' */
  real_T TmpRTBAtsignCurveOffsetInport1;/* '<S80>/From26' */
  real_T signCurveOffset;              /* '<S80>/signCurveOffset' */
  real_T Conversion_b;                 /* '<S291>/Conversion' */
  real_T mm2m;                         /* '<S80>/mm2m' */
  real_T Switch3;                      /* '<S80>/Switch3' */
  real_T sign3;                        /* '<S80>/sign3' */
  real_T crossTrackError;              /* '<S80>/crossTrackError' */
  real_T Product_p;                    /* '<S284>/Product' */
  real_T Saturation_a;                 /* '<S284>/Saturation' */
  real_T kph2mps_;                     /* '<S284>/kph2mps_' */
  real_T TrigonometricFunction_p;      /* '<S284>/Trigonometric Function' */
  real_T deg2rad1;                     /* '<S80>/deg2rad1' */
  real_T TmpRTBAtAdd2Inport2;          /* '<S284>/desPathHeading_rad' */
  real_T Add2_g;                       /* '<S284>/Add2' */
  real_T desHeadingWeight;             /* '<S284>/desHeadingWeight' */
  real_T Add1_hl;                      /* '<S284>/Add1' */
  real_T DataTypeConversion_l5;        /* '<S316>/Data Type Conversion' */
  real_T SaturationSpeedLookup;        /* '<S316>/Saturation Speed Lookup' */
  real_T sampletime;                   /* '<S327>/sample time' */
  real_T deltariselimit;               /* '<S327>/delta rise limit' */
  real_T sampletime_c;                 /* '<S314>/sample time' */
  real_T deltariselimit_c;             /* '<S314>/delta rise limit' */
  real_T Yk1;                          /* '<S314>/Delay Input2' */
  real_T UkYk1;                        /* '<S314>/Difference Inputs1' */
  real_T deltafalllimit;               /* '<S314>/delta fall limit' */
  real_T Switch_iv;                    /* '<S323>/Switch' */
  real_T Switch2_f;                    /* '<S323>/Switch2' */
  real_T DifferenceInputs2;            /* '<S314>/Difference Inputs2' */
  real_T ProportionalGain;             /* '<S313>/Proportional Gain' */
  real_T Integrator;                   /* '<S313>/Integrator' */
  real_T DerivativeGain;               /* '<S313>/Derivative Gain' */
  real_T Filter;                       /* '<S313>/Filter' */
  real_T SumD;                         /* '<S313>/SumD' */
  real_T FilterCoefficient;            /* '<S313>/Filter Coefficient' */
  real_T Sum_c;                        /* '<S313>/Sum' */
  real_T Saturate;                     /* '<S313>/Saturate' */
  real_T Uk1_m;                        /* '<S317>/Delay Input' */
  real_T ZeroUk1;                      /* '<S317>/GainZero' */
  real_T Yk1_p;                        /* '<S317>/Delay Output' */
  real_T PoleYk1;                      /* '<S317>/GainPole' */
  real_T PoleYk1UkZeroUk1;             /* '<S317>/Sum' */
  real_T Downcast;                     /* '<S317>/Downcast' */
  real_T Subtract_c;                   /* '<S281>/Subtract' */
  real_T uDLookupTable_j;              /* '<S281>/1-D Lookup Table' */
  real_T deg2rad;                      /* '<S281>/deg2rad' */
  real_T invert;                       /* '<S281>/invert' */
  real_T PGain;                        /* '<S281>/PGain' */
  real_T sampletime_a;                 /* '<S315>/sample time' */
  real_T deltariselimit_o;             /* '<S315>/delta rise limit' */
  real_T Sum_ly;                       /* '<S281>/Sum' */
  real_T RateFeedbackGain;             /* '<S281>/RateFeedbackGain' */
  real_T MultiportSwitch2;             /* '<S281>/Multiport Switch2' */
  real_T FeedforwardGain;              /* '<S281>/FeedforwardGain' */
  real_T Multiply;                     /* '<S281>/Multiply' */
  real_T Sum2;                         /* '<S281>/Sum2' */
  real_T Yk1_o;                        /* '<S315>/Delay Input2' */
  real_T UkYk1_n;                      /* '<S315>/Difference Inputs1' */
  real_T deltafalllimit_o;             /* '<S315>/delta fall limit' */
  real_T Switch_e;                     /* '<S324>/Switch' */
  real_T Switch2_e;                    /* '<S324>/Switch2' */
  real_T DifferenceInputs2_a;          /* '<S315>/Difference Inputs2' */
  real_T Sum3;                         /* '<S281>/Sum3' */
  real_T DiscreteTimeIntegrator;       /* '<S307>/Discrete-Time Integrator' */
  real_T Sum4;                         /* '<S281>/Sum4' */
  real_T Yk1_pm;                       /* '<S327>/Delay Input2' */
  real_T UkYk1_f;                      /* '<S327>/Difference Inputs1' */
  real_T RateLimitLower;               /* '<S316>/Gain3' */
  real_T deltafalllimit_n;             /* '<S327>/delta fall limit' */
  real_T Switch_f;                     /* '<S329>/Switch' */
  real_T Switch2_fa;                   /* '<S329>/Switch2' */
  real_T DifferenceInputs2_m;          /* '<S327>/Difference Inputs2' */
  real_T Gain1_f;                      /* '<S316>/Gain1' */
  real_T Switch_hx;                    /* '<S328>/Switch' */
  real_T Switch2_k;                    /* '<S328>/Switch2' */
  real_T DataTypeConversion_g;         /* '<S301>/Data Type Conversion' */
  real_T SpeedSaturation;              /* '<S280>/Speed Saturation' */
  real_T SaturationSpeedLookup_d;      /* '<S301>/Saturation Speed Lookup' */
  real_T sampletime_ca;                /* '<S304>/sample time' */
  real_T deltariselimit_cn;            /* '<S304>/delta rise limit' */
  real_T Lateral_Control_Heading_Error_k;/* '<S280>/Error Saturation' */
  real_T kmhtoms;                      /* '<S280>/km//h to m//s' */
  real_T Product_n;                    /* '<S280>/Product' */
  real_T Sum_d;                        /* '<S280>/Sum' */
  real_T TrigonometricFunction_l;      /* '<S280>/Trigonometric Function' */
  real_T Sum4_h;                       /* '<S280>/Sum4' */
  real_T Product3;                     /* '<S280>/Product3' */
  real_T Sum2_h;                       /* '<S280>/Sum2' */
  real_T Product1_iy;                  /* '<S280>/Product1' */
  real_T Subtract_e;                   /* '<S280>/Subtract' */
  real_T uDLookupTable_h;              /* '<S280>/1-D Lookup Table' */
  real_T deg2rad_o;                    /* '<S280>/deg2rad' */
  real_T invert_d;                     /* '<S280>/invert' */
  real_T Multiply_a;                   /* '<S280>/Multiply' */
  real_T Gain_gm;                      /* '<S280>/Gain' */
  real_T Sum3_j;                       /* '<S280>/Sum3' */
  real_T Product2_p;                   /* '<S280>/Product2' */
  real_T Gain2_l;                      /* '<S280>/Gain2' */
  real_T Multiply1;                    /* '<S280>/Multiply1' */
  real_T Yk1_b;                        /* '<S304>/Delay Input2' */
  real_T UkYk1_n2;                     /* '<S304>/Difference Inputs1' */
  real_T RateLimitLower_d;             /* '<S301>/Gain3' */
  real_T deltafalllimit_g;             /* '<S304>/delta fall limit' */
  real_T Switch_pt;                    /* '<S306>/Switch' */
  real_T Switch2_n;                    /* '<S306>/Switch2' */
  real_T DifferenceInputs2_f;          /* '<S304>/Difference Inputs2' */
  real_T Gain1_i;                      /* '<S301>/Gain1' */
  real_T Switch_i1;                    /* '<S305>/Switch' */
  real_T Switch2_g;                    /* '<S305>/Switch2' */
  real_T MultiportSwitch2_b;           /* '<S80>/Multiport Switch2' */
  real_T DataTypeConversion6_pa;       /* '<S80>/Data Type Conversion6' */
  real_T rad2deg;                      /* '<S80>/rad2deg' */
  real_T MultiportSwitch1;             /* '<S80>/Multiport Switch1' */
  real_T uD_Lookup_Table_a;            /* '<S276>/1D_Lookup_Table' */
  real_T numLanePoints_j;              /* '<S80>/Data Type Conversion4' */
  real_T DiscreteTimeIntegrator_h;     /* '<S80>/Discrete-Time Integrator' */
  real_T Switch_k;                     /* '<S296>/Switch' */
  real_T Subtract_gn;                  /* '<S301>/Subtract' */
  real_T Abs2_i;                       /* '<S301>/Abs2' */
  real_T Abs1_p;                       /* '<S301>/Abs1' */
  real_T RateError;                    /* '<S301>/Error Lookup Table' */
  real_T LimitRateLimiter;             /* '<S301>/Limit Rate Limiter' */
  real_T Gain_o;                       /* '<S307>/Gain' */
  real_T IntegralGain;                 /* '<S313>/Integral Gain' */
  real_T Abs_ig;                       /* '<S316>/Abs' */
  real_T Abs1_ft;                      /* '<S316>/Abs1' */
  real_T Subtract_o;                   /* '<S316>/Subtract' */
  real_T Abs2_k;                       /* '<S316>/Abs2' */
  real_T RateCurvature;                /* '<S316>/Curvature Lookup Table' */
  real_T RateError_o;                  /* '<S316>/Error Lookup Table' */
  real_T Max;                          /* '<S316>/Max' */
  real_T RateSpeed;                    /* '<S316>/Speed Lookup Table' */
  real_T Min;                          /* '<S316>/Min' */
  real_T RateLimitUpper;               /* '<S316>/Limit Rate Limiter' */
  real_T Subtract_c1;                  /* '<S80>/Subtract' */
  real_T Switch1_p;                    /* '<S80>/Switch1' */
  real_T UnitDelay_p;                  /* '<S80>/Unit Delay' */
  real_T Switch2_i1;                   /* '<S80>/Switch2' */
  real_T Xnew;                         /* '<S377>/Reset' */
  real_T Xold_dp;                      /* '<S379>/FixPt Unit Delay1' */
  real_T Init_o;                       /* '<S379>/Init' */
  real_T Xold_m;                       /* '<S380>/FixPt Unit Delay1' */
  real_T Init_l;                       /* '<S380>/Init' */
  real_T MultiportSwitch_i;            /* '<S378>/Multiport Switch' */
  real_T DigitalClock_d;               /* '<S374>/Digital Clock' */
  real_T Unit_Delay_p;                 /* '<S374>/Unit_Delay' */
  real_T Subtract_k;                   /* '<S374>/Subtract' */
  real_T Product1_am;                  /* '<S373>/Product1' */
  real_T Add_db;                       /* '<S373>/Add' */
  real_T Xnew_f;                       /* '<S380>/Reset' */
  real_T Xnew_h;                       /* '<S379>/Reset' */
  real_T Vehicle_speed_target_g;       /* '<S81>/Signal Conversion1' */
  real_T Vehicle_speed_target_o5;      /* '<S81>/Signal Conversion4' */
  real_T Vehicle_speed_target_k;       /* '<S81>/Signal Conversion9' */
  real_T Distance_to_achieve_speed_tar_f;/* '<S81>/Signal Conversion2' */
  real_T Distance_to_achieve_speed_tar_j;/* '<S81>/Signal Conversion7' */
  real_T Distance_to_achieve_speed_tar_m;/* '<S81>/Signal Conversion14' */
  real_T Vehicle_speed_abs_max_e;      /* '<S81>/Signal Conversion3' */
  real_T Vehicle_speed_abs_max_j;      /* '<S81>/Signal Conversion8' */
  real_T Vehicle_speed_abs_max_g;      /* '<S81>/Signal Conversion15' */
  real_T Acceleration_target_ms2_d;    /* '<S81>/Signal Conversion10' */
  real_T Acceleration_target_ms2_h;    /* '<S81>/Signal Conversion5' */
  real_T Acceleration_target_ms2_f;    /* '<S81>/Signal Conversion11' */
  real_T Jerk_target_ms3_g;            /* '<S81>/Signal Conversion13' */
  real_T Jerk_target_ms3_d;            /* '<S81>/Signal Conversion6' */
  real_T Jerk_target_ms3_l;            /* '<S81>/Signal Conversion12' */
  real_T TimeVectorRaw[6];             /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T PositionVectorRaw[6];         /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityVectorRaw[6];         /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationVectorRaw[6];     /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T JerkVectorRaw[6];             /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T TimeVector[33];               /* '<S350>/TwentyPointVectorCalculation' */
  real_T PositionVector[33];           /* '<S350>/TwentyPointVectorCalculation' */
  real_T VelocityVector[33];           /* '<S350>/TwentyPointVectorCalculation' */
  real_T AccelerationVector[33];       /* '<S350>/TwentyPointVectorCalculation' */
  real_T JerkVector[33];               /* '<S350>/TwentyPointVectorCalculation' */
  real_T Add_py;                       /* '<S378>/Add' */
  real_T u_trapezoidal;                /* '<S378>/Gain' */
  real_T Xold_g;                       /* '<S346>/FixPt Unit Delay1' */
  real_T Init_jw;                      /* '<S346>/Init' */
  real_T Abs_a;                        /* '<S343>/Abs' */
  real_T Product1_i3;                  /* '<S343>/Product1' */
  real_T Add1_b0;                      /* '<S343>/Add1' */
  real_T MinMax2_l;                    /* '<S343>/MinMax2' */
  real_T Abs1_e;                       /* '<S343>/Abs1' */
  real_T Product2_k;                   /* '<S343>/Product2' */
  real_T Subtract1_g;                  /* '<S343>/Subtract1' */
  real_T MinMax1_k;                    /* '<S343>/MinMax1' */
  real_T Subtract_ij;                  /* '<S340>/Subtract' */
  real_T Abs_eu;                       /* '<S340>/Abs' */
  real_T SpeedLookupTable;             /* '<S281>/Speed Lookup Table' */
  real_T RateSpeed_d;                  /* '<S301>/Speed Lookup Table' */
  real_T error;                        /* '<S280>/Error Calc' */
  real_T SpeedLookupTable1;            /* '<S280>/Speed Lookup Table1' */
  real_T SpeedLookupTable_a;           /* '<S280>/Speed Lookup Table' */
  real_T Switch1_m;                    /* '<S295>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_o;        /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S80>/Data Type Conversion3' */
  real_T Switch_ph;                    /* '<S80>/Switch' */
  real_T Product3_b;                   /* '<S80>/Product3' */
  real_T deg2rad_d;                    /* '<S80>/deg2rad' */
  real_T Product2_my;                  /* '<S80>/Product2' */
  real_T DataTypeConversion9_h;        /* '<S219>/Data Type Conversion9' */
  real_T DataTypeConversion1_i;        /* '<S219>/Data Type Conversion1' */
  real_T Add_di;                       /* '<S219>/Add' */
  real_T DataTypeConversion2_id;       /* '<S219>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S219>/Data Type Conversion3' */
  real_T DataTypeConversion5_i;        /* '<S223>/Data Type Conversion5' */
  real_T Coeff_of_drag_Cd;             /* '<S230>/1-D Lookup Table' */
  real_T KPH_TO_MS;                    /* '<S230>/KPH_TO_M//S' */
  real_T MathFunction;                 /* '<S230>/Math Function' */
  real_T DataTypeConversion_ik;        /* '<S223>/Data Type Conversion' */
  real_T KPA_TO_PA;                    /* '<S230>/KPA_TO_PA' */
  real_T DataTypeConversion4_b;        /* '<S223>/Data Type Conversion4' */
  real_T Add_o;                        /* '<S230>/Add' */
  real_T Product_nm;                   /* '<S230>/Product' */
  real_T Air_density_kgm3;             /* '<S230>/Divide' */
  real_T Aerodynamic_resistance_Ra;    /* '<S230>/Product1' */
  real_T DataTypeConversion6_f;        /* '<S223>/Data Type Conversion6' */
  real_T grade_angle_radians;          /* '<S231>/Divide' */
  real_T TrigonometricFunction_a;      /* '<S231>/Trigonometric Function' */
  real_T Gradient_resistance_Rg;       /* '<S231>/Product1' */
  real_T KPA_TO_MS;                    /* '<S234>/KPA_TO_M//S' */
  real_T Divide2_c;                    /* '<S234>/Divide2' */
  real_T MathFunction_l;               /* '<S234>/Math Function' */
  real_T Add_nj;                       /* '<S234>/Add' */
  real_T KPA_TO_BAR;                   /* '<S234>/KPA_TO_BAR' */
  real_T Divide_k;                     /* '<S234>/Divide' */
  real_T Coeff_of_rolling_resistance_Cr;/* '<S234>/Add1' */
  real_T grade_angle_radians_a;        /* '<S232>/Divide1' */
  real_T TrigonometricFunction_e;      /* '<S232>/Trigonometric Function' */
  real_T Rolling_resistance_Rr;        /* '<S232>/Product2' */
  real_T TotalTractiveForce_N;         /* '<S228>/Add' */
  real_T Saturation_g;                 /* '<S223>/Saturation' */
  real_T DataTypeConversion1_b;        /* '<S223>/Data Type Conversion1' */
  real_T RoadLoadTorque_fract;         /* '<S223>/Divide' */
  real_T RoadLoadTorque_pct;           /* '<S223>/Gain' */
  real_T FeedForwardTorque_pct;        /* '<S219>/Add1' */
  real_T Subtract_f;                   /* '<S220>/Subtract' */
  real_T uD_Lookup_Table_am;           /* '<S241>/2D_Lookup_Table' */
  real_T uD_Lookup_Table_o;            /* '<S242>/2D_Lookup_Table' */
  real_T uD_Lookup_Table_h;            /* '<S243>/2D_Lookup_Table' */
  real_T Abs_igm;                      /* '<S244>/Abs' */
  real_T Abs1_a;                       /* '<S244>/Abs1' */
  real_T Xold_a;                       /* '<S272>/FixPt Unit Delay1' */
  real_T Init_pu;                      /* '<S272>/Init' */
  real_T Abs_n;                        /* '<S268>/Abs' */
  real_T Product1_g;                   /* '<S268>/Product1' */
  real_T Add1_g;                       /* '<S268>/Add1' */
  real_T MinMax2_n;                    /* '<S268>/MinMax2' */
  real_T Abs1_d;                       /* '<S268>/Abs1' */
  real_T Product2_bn;                  /* '<S268>/Product2' */
  real_T Subtract1_o;                  /* '<S268>/Subtract1' */
  real_T MinMax1_g;                    /* '<S268>/MinMax1' */
  real_T Subtract_jb;                  /* '<S245>/Subtract' */
  real_T MinMax1_d;                    /* '<S267>/MinMax1' */
  real_T Saturation_d;                 /* '<S267>/Saturation' */
  real_T Divide_n;                     /* '<S267>/Divide' */
  real_T Product2_l;                   /* '<S267>/Product2' */
  real_T Subtract1_k;                  /* '<S267>/Subtract1' */
  real_T Unit_Delay2_o;                /* '<S267>/Unit_Delay2' */
  real_T Product1_p;                   /* '<S267>/Product1' */
  real_T Add1_i;                       /* '<S267>/Add1' */
  real_T Product_i;                    /* '<S250>/Product' */
  real_T Unit_Delay_m4;                /* '<S222>/Unit_Delay' */
  real_T Add_ds;                       /* '<S246>/Add' */
  real_T PID_d_term_c;                 /* '<S212>/Generic_PID_Governor_3' */
  real_T PID_i_term_c;                 /* '<S212>/Generic_PID_Governor_3' */
  real_T road_load_tq;                 /* '<S223>/F_wheel_to_Tq_eng' */
  real_T TmpSignalConversionAtSFunctionI[4];/* '<S211>/Relay_control_state_machine' */
  real_T TmpSignalConversionAtSFunctio_k[4];/* '<S211>/Relay_control_state_machine' */
  real_T KPH_TO_MPH;                   /* '<S210>/KPH_TO_MPH' */
  real_T MinMax_dl;                    /* '<S210>/MinMax' */
  real_T Divide_p;                     /* '<S210>/Divide' */
  real_T MinMax1_n;                    /* '<S210>/MinMax1' */
  real_T DataTypeConversion3_m;        /* '<S79>/Data Type Conversion3' */
  real_T ThrottlePID_Y_c;              /* '<S79>/Product' */
  real_T Unit_Delay_dl;                /* '<S184>/Unit_Delay' */
  real_T Xold_eq;                      /* '<S198>/FixPt Unit Delay1' */
  real_T Init_br;                      /* '<S198>/Init' */
  real_T Abs_g;                        /* '<S194>/Abs' */
  real_T DigitalClock_e;               /* '<S195>/Digital Clock' */
  real_T Unit_Delay_nxw;               /* '<S195>/Unit_Delay' */
  real_T Subtract_aw;                  /* '<S195>/Subtract' */
  real_T Product1_nu;                  /* '<S194>/Product1' */
  real_T Add1_fn;                      /* '<S194>/Add1' */
  real_T MinMax2_gw;                   /* '<S194>/MinMax2' */
  real_T Abs1_k;                       /* '<S194>/Abs1' */
  real_T Product2_cb;                  /* '<S194>/Product2' */
  real_T Subtract1_kw;                 /* '<S194>/Subtract1' */
  real_T MinMax1_o;                    /* '<S194>/MinMax1' */
  real_T Unit_Delay_a;                 /* '<S183>/Unit_Delay' */
  real_T Xold_b;                       /* '<S191>/FixPt Unit Delay1' */
  real_T Init_k;                       /* '<S191>/Init' */
  real_T Abs_b;                        /* '<S187>/Abs' */
  real_T DigitalClock_c;               /* '<S188>/Digital Clock' */
  real_T Unit_Delay_ka;                /* '<S188>/Unit_Delay' */
  real_T Subtract_ko;                  /* '<S188>/Subtract' */
  real_T Product1_f;                   /* '<S187>/Product1' */
  real_T Add1_c;                       /* '<S187>/Add1' */
  real_T MinMax2_c2;                   /* '<S187>/MinMax2' */
  real_T Abs1_ar;                      /* '<S187>/Abs1' */
  real_T Product2_c3;                  /* '<S187>/Product2' */
  real_T Subtract1_ev;                 /* '<S187>/Subtract1' */
  real_T MinMax1_jw;                   /* '<S187>/MinMax1' */
  real_T uD_Lookup_Table_f;            /* '<S147>/1D_Lookup_Table' */
  real_T uD_Lookup_Table_p;            /* '<S148>/1D_Lookup_Table' */
  real_T uD_Lookup_Table_o5;           /* '<S149>/1D_Lookup_Table' */
  real_T Abs_k1;                       /* '<S150>/Abs' */
  real_T Abs1_eg;                      /* '<S150>/Abs1' */
  real_T DigitalClock_n;               /* '<S146>/Digital Clock' */
  real_T Unit_Delay_ko;                /* '<S146>/Unit_Delay' */
  real_T Subtract_ac;                  /* '<S146>/Subtract' */
  real_T Xold_c;                       /* '<S178>/FixPt Unit Delay1' */
  real_T Init_cy;                      /* '<S178>/Init' */
  real_T Abs_o;                        /* '<S174>/Abs' */
  real_T Product1_hy;                  /* '<S174>/Product1' */
  real_T Add1_o;                       /* '<S174>/Add1' */
  real_T MinMax2_p;                    /* '<S174>/MinMax2' */
  real_T Abs1_g;                       /* '<S174>/Abs1' */
  real_T Product2_fh;                  /* '<S174>/Product2' */
  real_T Subtract1_fa;                 /* '<S174>/Subtract1' */
  real_T MinMax1_hl;                   /* '<S174>/MinMax1' */
  real_T Subtract_jh;                  /* '<S151>/Subtract' */
  real_T MinMax1_jg;                   /* '<S173>/MinMax1' */
  real_T Saturation_m;                 /* '<S173>/Saturation' */
  real_T Divide_af;                    /* '<S173>/Divide' */
  real_T Product2_ce;                  /* '<S173>/Product2' */
  real_T Subtract1_cr;                 /* '<S173>/Subtract1' */
  real_T Unit_Delay2_a;                /* '<S173>/Unit_Delay2' */
  real_T Product1_ch;                  /* '<S173>/Product1' */
  real_T Add1_hla;                     /* '<S173>/Add1' */
  real_T Product_f;                    /* '<S156>/Product' */
  real_T Unit_Delay_fg;                /* '<S145>/Unit_Delay' */
  real_T Add_mh;                       /* '<S152>/Add' */
  real_T Add_my;                       /* '<S102>/Add' */
  real_T Gain_i;                       /* '<S102>/Gain' */
  real_T Abs_k4;                       /* '<S112>/Abs' */
  real_T Abs1_ap;                      /* '<S112>/Abs1' */
  real_T DigitalClock_j;               /* '<S111>/Digital Clock' */
  real_T Unit_Delay_j;                 /* '<S111>/Unit_Delay' */
  real_T Subtract_jr;                  /* '<S111>/Subtract' */
  real_T Xold_g3;                      /* '<S140>/FixPt Unit Delay1' */
  real_T Init_hw;                      /* '<S140>/Init' */
  real_T Abs_l;                        /* '<S136>/Abs' */
  real_T Product1_b;                   /* '<S136>/Product1' */
  real_T Add1_hu;                      /* '<S136>/Add1' */
  real_T MinMax2_b;                    /* '<S136>/MinMax2' */
  real_T Abs1_d1;                      /* '<S136>/Abs1' */
  real_T Product2_dl;                  /* '<S136>/Product2' */
  real_T Subtract1_a;                  /* '<S136>/Subtract1' */
  real_T MinMax1_ps;                   /* '<S136>/MinMax1' */
  real_T Subtract_n;                   /* '<S113>/Subtract' */
  real_T MinMax1_h1;                   /* '<S135>/MinMax1' */
  real_T Saturation_p;                 /* '<S135>/Saturation' */
  real_T Divide_lm;                    /* '<S135>/Divide' */
  real_T Product2_kj;                  /* '<S135>/Product2' */
  real_T Subtract1_pm;                 /* '<S135>/Subtract1' */
  real_T Unit_Delay2_d;                /* '<S135>/Unit_Delay2' */
  real_T Product1_c3;                  /* '<S135>/Product1' */
  real_T Add1_i1;                      /* '<S135>/Add1' */
  real_T Product_iq;                   /* '<S118>/Product' */
  real_T Unit_Delay_ja;                /* '<S110>/Unit_Delay' */
  real_T Add_e;                        /* '<S114>/Add' */
  real_T Sum_gp;                       /* '<S97>/Sum' */
  real_T MinMax_p;                     /* '<S83>/MinMax' */
  RTMapsTX BusCreator;                 /* '<S404>/Bus Creator' */
  uint32_T Encoder_o2;                 /* '<S413>/Encoder' */
  uint32_T TCPIP_Com_o1[3];            /* '<S406>/TCPIP_Com' */
  uint32_T TCPIP_Com_o2;               /* '<S406>/TCPIP_Com' */
  uint32_T DataTypeConversion_aq;      /* '<S403>/Data Type Conversion' */
  uint32_T SFunction1_o1_kx;           /* '<S28>/S-Function1' */
  uint32_T SFunction1_o1_g3j;          /* '<S20>/S-Function1' */
  uint32_T SFunction1_o1_ar5;          /* '<S21>/S-Function1' */
  uint32_T SFunction1_o1_h4;           /* '<S18>/S-Function1' */
  uint32_T SFunction1_o1_ma;           /* '<S19>/S-Function1' */
  uint32_T SFunction1_o1_og;           /* '<S17>/S-Function1' */
  uint32_T Reshape[8];                 /* '<S1055>/Reshape' */
  uint32_T UnitDelay_i;                /* '<S1056>/Unit Delay' */
  uint32_T Switch1_p2;                 /* '<S1059>/Switch1' */
  uint32_T Selector;                   /* '<S1055>/Selector' */
  uint32_T DataTypeConversion_gb;      /* '<S1047>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1052>/Operator' */
  uint32_T Operator_b;                 /* '<S1053>/Operator' */
  uint32_T Operator_d;                 /* '<S1054>/Operator' */
  uint32_T DataType_mh;                /* '<S1054>/DataType' */
  uint32_T Shift_Arithmetic1_j3;       /* '<S1047>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1055>/Width' */
  uint32_T Switch1_md;                 /* '<S1058>/Switch1' */
  uint32_T Subtract_en;                /* '<S1056>/Subtract' */
  uint32_T UnitDelay_iw;               /* '<S1041>/Unit Delay' */
  uint32_T Switch1_pk;                 /* '<S1044>/Switch1' */
  uint32_T DataTypeConversion6_n;      /* '<S1036>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S1036>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_i;      /* '<S1036>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S1036>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_o;      /* '<S1036>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S1036>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_l;      /* '<S1036>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S1036>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_f;     /* '<S1036>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S1036>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_o;     /* '<S1036>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S1036>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_eu;     /* '<S1037>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S1037>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S1037>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_g;        /* '<S1037>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S1037>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_g;        /* '<S1037>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S1037>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_b;        /* '<S1037>/Shift_Arithmetic 5' */
  uint32_T Width_h;                    /* '<S1040>/Width' */
  uint32_T Switch1_e;                  /* '<S1043>/Switch1' */
  uint32_T Subtract_lm;                /* '<S1041>/Subtract' */
  uint32_T DataTypeConversion2_a5;     /* '<S982>/Data Type Conversion2' */
  uint32_T Operator_i;                 /* '<S987>/Operator' */
  uint32_T Operator_f;                 /* '<S988>/Operator' */
  uint32_T Operator_a;                 /* '<S989>/Operator' */
  uint32_T DataType_am;                /* '<S989>/DataType' */
  uint32_T Shift_Arithmetic1_n;        /* '<S982>/Shift_Arithmetic 1' */
  uint32_T Operator_e;                 /* '<S990>/Operator' */
  uint32_T DataType_h;                 /* '<S990>/DataType' */
  uint32_T Shift_Arithmetic2_ar;       /* '<S982>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_a;                /* '<S1013>/Unit Delay' */
  uint32_T Switch1_a;                  /* '<S1016>/Switch1' */
  uint32_T DataTypeConversion_h;       /* '<S981>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_a;         /* '<S981>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_ha;     /* '<S981>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_e;        /* '<S981>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_om;     /* '<S981>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_d;        /* '<S981>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_i;      /* '<S981>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_h;        /* '<S981>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_b5;     /* '<S981>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_nx;       /* '<S981>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_c;      /* '<S981>/Data Type Conversion5' */
  uint32_T Operator_l;                 /* '<S986>/Operator' */
  uint32_T DataType_jf;                /* '<S986>/DataType' */
  uint32_T DataTypeConversion3_mr;     /* '<S982>/Data Type Conversion3' */
  uint32_T Operator_n;                 /* '<S991>/Operator' */
  uint32_T Operator_ar;                /* '<S992>/Operator' */
  uint32_T Operator_db;                /* '<S993>/Operator' */
  uint32_T DataType_hs;                /* '<S993>/DataType' */
  uint32_T Shift_Arithmetic4_nb;       /* '<S982>/Shift_Arithmetic 4' */
  uint32_T Operator_h;                 /* '<S994>/Operator' */
  uint32_T DataType_kr;                /* '<S994>/DataType' */
  uint32_T Shift_Arithmetic5_i;        /* '<S982>/Shift_Arithmetic 5' */
  uint32_T Width_j;                    /* '<S1012>/Width' */
  uint32_T Switch1_b;                  /* '<S1015>/Switch1' */
  uint32_T Subtract_ou;                /* '<S1013>/Subtract' */
  uint32_T DataTypeConversion_c2;      /* '<S931>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_jv;        /* '<S931>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_hd;     /* '<S931>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_g2;       /* '<S931>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_g0;     /* '<S931>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_fh;       /* '<S931>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_a;      /* '<S931>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_ap;       /* '<S931>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_l;      /* '<S931>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_f;        /* '<S931>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_d;      /* '<S931>/Data Type Conversion5' */
  uint32_T Operator_bi;                /* '<S941>/Operator' */
  uint32_T DataType_jnf;               /* '<S941>/DataType' */
  uint32_T DataTypeConversion8_hh;     /* '<S930>/Data Type Conversion8' */
  uint32_T Operator_au;                /* '<S937>/Operator' */
  uint32_T Operator_p;                 /* '<S938>/Operator' */
  uint32_T Operator_k;                 /* '<S939>/Operator' */
  uint32_T DataType_hl;                /* '<S939>/DataType' */
  uint32_T Shift_Arithmetic4_a;        /* '<S930>/Shift_Arithmetic 4' */
  uint32_T Operator_o;                 /* '<S940>/Operator' */
  uint32_T DataType_bh;                /* '<S940>/DataType' */
  uint32_T Shift_Arithmetic5_d;        /* '<S930>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_p4;      /* '<S733>/Data Type Conversion' */
  uint32_T DataTypeConversion1_c;      /* '<S733>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_h1;     /* '<S733>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S733>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S733>/Shift Arithmetic2' */
  uint32_T Operator_nr;                /* '<S735>/Operator' */
  uint32_T DataType_ke;                /* '<S735>/DataType' */
  uint32_T DataTypeConversion_kt;      /* '<S725>/Data Type Conversion' */
  uint32_T DataTypeConversion1_oh;     /* '<S725>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_mi;     /* '<S725>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_f;         /* '<S725>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_g;         /* '<S725>/Shift Arithmetic2' */
  uint32_T Operator_e2;                /* '<S727>/Operator' */
  uint32_T DataType_m2;                /* '<S727>/DataType' */
  uint32_T DataTypeConversion_bl;      /* '<S719>/Data Type Conversion' */
  uint32_T DataTypeConversion1_fh;     /* '<S719>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_gp;     /* '<S719>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_fc;        /* '<S719>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_m;         /* '<S719>/Shift Arithmetic2' */
  uint32_T Operator_il;                /* '<S720>/Operator' */
  uint32_T DataType_pd;                /* '<S720>/DataType' */
  uint32_T DataTypeConversion_is;      /* '<S714>/Data Type Conversion' */
  uint32_T DataTypeConversion1_mi;     /* '<S714>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_pj;     /* '<S714>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_l;         /* '<S714>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_l;         /* '<S714>/Shift Arithmetic2' */
  uint32_T Operator_g;                 /* '<S715>/Operator' */
  uint32_T DataType_b1;                /* '<S715>/DataType' */
  uint32_T DataTypeConversion_e;       /* '<S707>/Data Type Conversion' */
  uint32_T DataTypeConversion1_fn;     /* '<S707>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_iv;     /* '<S707>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_b;         /* '<S707>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_f;         /* '<S707>/Shift Arithmetic2' */
  uint32_T Operator_j;                 /* '<S709>/Operator' */
  uint32_T DataType_jy;                /* '<S709>/DataType' */
  uint32_T UnitDelay_av;               /* '<S61>/Unit Delay' */
  uint32_T Switch1_h;                  /* '<S64>/Switch1' */
  uint32_T Switch1_bs;                 /* '<S63>/Switch1' */
  uint32_T Subtract_fc;                /* '<S61>/Subtract' */
  uint32_T UnitDelay_j;                /* '<S55>/Unit Delay' */
  uint32_T Switch1_k;                  /* '<S58>/Switch1' */
  uint32_T Switch1_l;                  /* '<S57>/Switch1' */
  uint32_T Subtract_m;                 /* '<S55>/Subtract' */
  uint32_T UnitDelay_l;                /* '<S49>/Unit Delay' */
  uint32_T Switch1_ex;                 /* '<S52>/Switch1' */
  uint32_T Switch1_c;                  /* '<S51>/Switch1' */
  uint32_T Subtract_f1;                /* '<S49>/Subtract' */
  uint32_T UnitDelay_d;                /* '<S43>/Unit Delay' */
  uint32_T Switch1_k4;                 /* '<S46>/Switch1' */
  uint32_T Switch1_fr;                 /* '<S45>/Switch1' */
  uint32_T Subtract_h;                 /* '<S43>/Subtract' */
  uint32_T UnitDelay_b;                /* '<S37>/Unit Delay' */
  uint32_T Switch1_i;                  /* '<S40>/Switch1' */
  uint32_T Switch1_hm;                 /* '<S39>/Switch1' */
  uint32_T Subtract_nc;                /* '<S37>/Subtract' */
  uint32_T UnitDelay_f4;               /* '<S31>/Unit Delay' */
  uint32_T Switch1_o;                  /* '<S34>/Switch1' */
  uint32_T Switch1_az;                 /* '<S33>/Switch1' */
  uint32_T Subtract_ot;                /* '<S31>/Subtract' */
  uint32_T Gain_co;                    /* '<S97>/Gain' */
  real32_T PropB_REAX_3_HandwheelTorque;/* '<S674>/Product' */
  real32_T PropB_REAX_3_HandwheelVelocity;/* '<S675>/Product1' */
  real32_T PropB_REAX_3_PullCompensation;/* '<S676>/Product2' */
  real32_T Subtract_j3;                /* '<S657>/Subtract' */
  real32_T Subtract_gi;                /* '<S529>/Subtract' */
  real32_T DataTypeConversion2_lf;     /* '<S79>/Data Type Conversion2' */
  real32_T Divide_nn;                  /* '<S285>/Divide' */
  real32_T UnitDelay_fm;               /* '<S285>/Unit Delay' */
  real32_T Switch1_fi;                 /* '<S289>/Switch1' */
  real32_T Divide_d0;                  /* '<S290>/Divide' */
  real32_T UnitDelay_lj;               /* '<S290>/Unit Delay' */
  real32_T Switch1_pb;                 /* '<S294>/Switch1' */
  real32_T DataTypeConversion1_g;      /* '<S290>/Data Type Conversion1' */
  real32_T Switch1_aq;                 /* '<S292>/Switch1' */
  real32_T DataTypeConversion_m;       /* '<S290>/Data Type Conversion' */
  real32_T Add3_p;                     /* '<S290>/Add3' */
  real32_T Product1_ce;                /* '<S290>/Product1' */
  real32_T Add_a;                      /* '<S290>/Add' */
  real32_T DataTypeConversion1_b1;     /* '<S285>/Data Type Conversion1' */
  real32_T Switch1_cw;                 /* '<S287>/Switch1' */
  real32_T DataTypeConversion_ps;      /* '<S285>/Data Type Conversion' */
  real32_T Add3_j;                     /* '<S285>/Add3' */
  real32_T Product1_n2;                /* '<S285>/Product1' */
  real32_T Add_f;                      /* '<S285>/Add' */
  int32_T Decoder_o2;                  /* '<S410>/Decoder' */
  int32_T Merge;                       /* '<S983>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S616>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_i;/* '<S452>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S616>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_j;/* '<S452>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_g;/* '<S614>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_k;/* '<S615>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_g;/* '<S614>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_h;/* '<S615>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S634>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_d;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S634>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_d;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1021>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lr; /* '<S104>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_lu;/* '<S104>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S769>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S769>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S209>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l;/* '<S209>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_gs;      /* '<S538>/Data Type Conversion' */
  uint16_T DataTypeConversion1_mo;     /* '<S538>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S538>/Shift Arithmetic' */
  uint16_T Operator_fd;                /* '<S563>/Operator' */
  uint16_T DataType_gs;                /* '<S563>/DataType' */
  uint16_T DataTypeConversion_ke;      /* '<S532>/Data Type Conversion' */
  uint16_T DataTypeConversion1_li;     /* '<S532>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_h;          /* '<S532>/Shift Arithmetic' */
  uint16_T Operator_b3;                /* '<S559>/Operator' */
  uint16_T DataType_eq;                /* '<S559>/DataType' */
  uint16_T DataTypeConversion_o;       /* '<S536>/Data Type Conversion' */
  uint16_T DataTypeConversion1_hdz;    /* '<S536>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_k;          /* '<S536>/Shift Arithmetic' */
  uint16_T Operator_lb;                /* '<S561>/Operator' */
  uint16_T DataType_ni;                /* '<S561>/DataType' */
  uint16_T DataTypeConversion1_hs;     /* '<S537>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_k;      /* '<S537>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_m;          /* '<S537>/Shift Arithmetic' */
  uint16_T Operator_c;                 /* '<S562>/Operator' */
  uint16_T DataType_ce;                /* '<S562>/DataType' */
  uint16_T DataTypeConversion1_bu;     /* '<S540>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_b;      /* '<S540>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_i;          /* '<S540>/Shift Arithmetic' */
  uint16_T Operator_ha;                /* '<S564>/Operator' */
  uint16_T DataType_bi;                /* '<S564>/DataType' */
  uint16_T DataTypeConversion1_iu;     /* '<S546>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_jk;     /* '<S546>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_g;          /* '<S546>/Shift Arithmetic' */
  uint16_T Operator_bt;                /* '<S565>/Operator' */
  uint16_T DataType_dv;                /* '<S565>/DataType' */
  uint16_T DataTypeConversion_ef;      /* '<S554>/Data Type Conversion' */
  uint16_T DataTypeConversion1_lg;     /* '<S554>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_hv;         /* '<S554>/Shift Arithmetic' */
  uint16_T Operator_nd;                /* '<S568>/Operator' */
  uint16_T DataType_ak;                /* '<S568>/DataType' */
  uint16_T DataTypeConversion1_gi;     /* '<S547>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_d;      /* '<S547>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_iu;         /* '<S547>/Shift Arithmetic' */
  uint16_T Operator_gs;                /* '<S566>/Operator' */
  uint16_T DataType_ec;                /* '<S566>/DataType' */
  uint16_T DataTypeConversion_pf;      /* '<S548>/Data Type Conversion' */
  uint16_T DataTypeConversion1_kq;     /* '<S548>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_n;          /* '<S548>/Shift Arithmetic' */
  uint16_T Operator_m;                 /* '<S567>/Operator' */
  uint16_T DataType_be;                /* '<S567>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S548>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S424>/Data Type Conversion21' */
  uint16_T DataTypeConversion_eg;      /* '<S556>/Data Type Conversion' */
  uint16_T DataTypeConversion1_hy;     /* '<S556>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_hk;         /* '<S556>/Shift Arithmetic' */
  uint16_T Operator_n1;                /* '<S569>/Operator' */
  uint16_T DataType_bd;                /* '<S569>/DataType' */
  uint16_T DataTypeConversion_kb;      /* '<S558>/Data Type Conversion' */
  uint16_T DataTypeConversion1_lr;     /* '<S558>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_j;          /* '<S558>/Shift Arithmetic' */
  uint16_T Operator_ky;                /* '<S570>/Operator' */
  uint16_T DataType_ax;                /* '<S570>/DataType' */
  uint16_T DataTypeConversion_ov;      /* '<S534>/Data Type Conversion' */
  uint16_T DataTypeConversion1_fe;     /* '<S534>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_j1;         /* '<S534>/Shift Arithmetic' */
  uint16_T Operator_hk;                /* '<S560>/Operator' */
  uint16_T DataType_fv;                /* '<S560>/DataType' */
  uint16_T DataTypeConversion1_p;      /* '<S674>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_a2;     /* '<S674>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_nf;       /* '<S674>/Shift_Arithmetic 1' */
  uint16_T Operator_ay;                /* '<S679>/Operator' */
  uint16_T DataType_jt;                /* '<S679>/DataType' */
  uint16_T DataTypeConversion4_i5;     /* '<S675>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_d3;     /* '<S675>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_c;        /* '<S675>/Shift_Arithmetic 2' */
  uint16_T Operator_iu;                /* '<S680>/Operator' */
  uint16_T DataType_bv;                /* '<S680>/DataType' */
  uint16_T DataTypeConversion7_g;      /* '<S676>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_f;      /* '<S676>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_fa;       /* '<S676>/Shift_Arithmetic 3' */
  uint16_T Operator_ae;                /* '<S681>/Operator' */
  uint16_T DataType_pp;                /* '<S681>/DataType' */
  uint16_T DataTypeConversion6_h0;     /* '<S687>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_c;      /* '<S687>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_p;        /* '<S687>/Shift_Arithmetic 2' */
  uint16_T Operator_if;                /* '<S692>/Operator' */
  uint16_T DataType_cz;                /* '<S692>/DataType' */
  uint16_T DataType_hj;                /* '<S1053>/DataType' */
  uint16_T Shift_Arithmetic_b;         /* '<S1047>/Shift_Arithmetic ' */
  uint16_T DataType_ac;                /* '<S988>/DataType' */
  uint16_T Shift_Arithmetic_fy;        /* '<S982>/Shift_Arithmetic ' */
  uint16_T DataType_ew;                /* '<S992>/DataType' */
  uint16_T Shift_Arithmetic3_eh;       /* '<S982>/Shift_Arithmetic 3' */
  uint16_T DataType_a2;                /* '<S938>/DataType' */
  uint16_T Shift_Arithmetic3_dh;       /* '<S930>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_cd;     /* '<S891>/Data Type Conversion1' */
  uint16_T Operator_e2q;               /* '<S922>/Operator' */
  uint16_T Operator_oc;                /* '<S923>/Operator' */
  uint16_T DataType_mv;                /* '<S923>/DataType' */
  uint16_T Shift_Arithmetic_o4;        /* '<S891>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_eu;      /* '<S730>/Data Type Conversion' */
  uint16_T DataTypeConversion1_jf;     /* '<S730>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_i;         /* '<S730>/Shift Arithmetic2' */
  uint16_T Operator_kf;                /* '<S734>/Operator' */
  uint16_T DataType_fn;                /* '<S734>/DataType' */
  uint16_T DataTypeConversion_f;       /* '<S723>/Data Type Conversion' */
  uint16_T DataTypeConversion1_nk;     /* '<S723>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_a;         /* '<S723>/Shift Arithmetic2' */
  uint16_T Operator_br;                /* '<S726>/Operator' */
  uint16_T DataType_ilc;               /* '<S726>/DataType' */
  uint16_T DataTypeConversion_dp;      /* '<S705>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ke;     /* '<S705>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_b;         /* '<S705>/Shift Arithmetic2' */
  uint16_T Operator_lbu;               /* '<S708>/Operator' */
  uint16_T DataType_h1;                /* '<S708>/DataType' */
  int16_T DataTypeConversion3_im;      /* '<S674>/Data Type Conversion3' */
  int16_T DataTypeConversion6_j;       /* '<S675>/Data Type Conversion6' */
  int16_T DataTypeConversion9_i;       /* '<S676>/Data Type Conversion9' */
  int16_T DataTypeConversion8_b;       /* '<S687>/Data Type Conversion8' */
  int16_T DataTypeConversion_dl;       /* '<S891>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S802>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_n;           /* '<S794>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_c;           /* '<S818>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_i;           /* '<S810>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_h;           /* '<S838>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_iq;          /* '<S837>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_nv;          /* '<S826>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_ab;       /* '<S481>/Data Type Conversion' */
  uint8_T DataTypeConversion1_i5;      /* '<S481>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ev;      /* '<S481>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_f;       /* '<S481>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_e;       /* '<S481>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_h;       /* '<S481>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_nf;      /* '<S481>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_f;       /* '<S481>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S427>/Multiport_Switch' */
  uint8_T DataTypeConversion_j2[8];    /* '<S475>/Data Type Conversion' */
  uint8_T DataTypeConversion_by;       /* '<S490>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ni;      /* '<S490>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ge;      /* '<S490>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_i4;      /* '<S490>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_dm;      /* '<S490>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_h3;      /* '<S490>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_nc;      /* '<S490>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_k;       /* '<S490>/Data Type Conversion7' */
  uint8_T RawData_i[8];                /* '<S428>/Multiport_Switch' */
  uint8_T DataTypeConversion_f0[8];    /* '<S476>/Data Type Conversion' */
  uint8_T DataTypeConversion_bq[39];   /* '<S527>/Data Type Conversion' */
  uint8_T DataTypeConversion_jo;       /* '<S655>/Data Type Conversion' */
  uint8_T DataTypeConversion1_aq;      /* '<S655>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_gd;      /* '<S655>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_g;       /* '<S655>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_g4;      /* '<S655>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_gv;      /* '<S655>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_e;       /* '<S655>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_m;       /* '<S655>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_aj;      /* '<S655>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_o;       /* '<S655>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_f5;     /* '<S655>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_a;      /* '<S655>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S655>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_k;      /* '<S655>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_h;      /* '<S655>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_o;      /* '<S655>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_o;      /* '<S655>/Data Type Conversion16' */
  uint8_T Add_au;                      /* '<S655>/Add' */
  uint8_T DataTypeConversion15_m;      /* '<S634>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_lm;      /* '<S634>/Data Type Conversion4' */
  uint8_T MABX_Mode_h;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[24];              /* '<S413>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S406>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1064>/Vector Concatenate' */
  uint8_T UnitDelay1_f4;               /* '<S865>/Unit Delay1' */
  uint8_T MultiportSwitch_l[8];        /* '<S865>/Multiport Switch' */
  uint8_T SupervisorMode_l;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S424>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S424>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S424>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S424>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S424>/Data Type Conversion26' */
  uint8_T DataTypeConversion_hv;       /* '<S616>/Data Type Conversion' */
  uint8_T DataTypeConversion1_m4;      /* '<S616>/Data Type Conversion1' */
  uint8_T Add1_gi;                     /* '<S655>/Add1' */
  uint8_T DataTypeConversion_h1;       /* '<S589>/Data Type Conversion' */
  uint8_T DataTypeConversion1_lj;      /* '<S589>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_j;       /* '<S589>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_gc;      /* '<S589>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_ec;      /* '<S589>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_b;       /* '<S589>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_g;       /* '<S589>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ic;      /* '<S589>/Data Type Conversion7' */
  uint8_T DataTypeConversion_ld;       /* '<S590>/Data Type Conversion' */
  uint8_T DataTypeConversion1_j1;      /* '<S590>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_el;      /* '<S590>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_em;      /* '<S590>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_iu;      /* '<S590>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_hq;      /* '<S590>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_d;       /* '<S590>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ed;      /* '<S590>/Data Type Conversion7' */
  uint8_T RawData_p[8];                /* '<S450>/Multiport_Switch' */
  uint8_T Operator_ea;                 /* '<S678>/Operator' */
  uint8_T DataType_bm;                 /* '<S678>/DataType' */
  uint8_T Operator_nj;                 /* '<S677>/Operator' */
  uint8_T DataType_bg;                 /* '<S677>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S672>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_ll;       /* '<S603>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ow;      /* '<S603>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_nq;      /* '<S603>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_dq;      /* '<S603>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_j2;      /* '<S603>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_gc;      /* '<S603>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_m;       /* '<S603>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_p;       /* '<S603>/Data Type Conversion7' */
  uint8_T RawData_m[8];                /* '<S451>/Multiport_Switch' */
  uint8_T Operator_fc;                 /* '<S690>/Operator' */
  uint8_T DataType_hz;                 /* '<S690>/DataType' */
  uint8_T Shift_Arithmetic_ck;         /* '<S683>/Shift_Arithmetic ' */
  uint8_T Operator_mc;                 /* '<S689>/Operator' */
  uint8_T Operator_nt;                 /* '<S691>/Operator' */
  uint8_T DataType_fo;                 /* '<S691>/DataType' */
  uint8_T Shift_Arithmetic1_gi;        /* '<S683>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S684>/SignalConversion' */
  uint8_T DataTypeConversion3_c;       /* '<S426>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S685>/SignalConversion' */
  uint8_T DataTypeConversion4_au;      /* '<S426>/Data Type Conversion4' */
  uint8_T State;                       /* '<S865>/Chart' */
  uint8_T TPDT_count;                  /* '<S865>/Chart' */
  uint8_T VectorConcatenate_p[8];      /* '<S1066>/Vector Concatenate' */
  uint8_T VectorConcatenate_n[8];      /* '<S1067>/Vector Concatenate' */
  uint8_T DataType_hg;                 /* '<S1052>/DataType' */
  uint8_T DataTypeConversion3_ga;      /* '<S1047>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_eu;      /* '<S1047>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_g5;      /* '<S1047>/Data Type Conversion2' */
  uint8_T DataTypeConversion_d0;       /* '<S1017>/Data Type Conversion' */
  uint8_T Operator_ny;                 /* '<S1022>/Operator' */
  uint8_T DataType_fq;                 /* '<S1022>/DataType' */
  uint8_T DataTypeConversion2_ki;      /* '<S1037>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_imv;     /* '<S1037>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S1037>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_m;       /* '<S1037>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S1037>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_ckw;        /* '<S1037>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_p;      /* '<S1037>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_dw;      /* '<S1037>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_c;         /* '<S1037>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_os;     /* '<S1037>/Data Type Conversion11' */
  uint8_T Reshape_i[16];               /* '<S1040>/Reshape' */
  uint8_T Selector_l;                  /* '<S1040>/Selector' */
  uint8_T DataTypeConversion10_a;      /* '<S1037>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S1037>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_gj;      /* '<S1037>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_i;       /* '<S1037>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_m;       /* '<S1037>/Data Type Conversion9' */
  uint8_T Add2_d;                      /* '<S1037>/Add2' */
  uint8_T Shift_Arithmetic6_m;         /* '<S1037>/Shift_Arithmetic 6' */
  uint8_T Add3_n;                      /* '<S1037>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S1037>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_k;         /* '<S1037>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S1037>/Bitwise Operator7' */
  uint8_T DataTypeConversion_p3;       /* '<S1019>/Data Type Conversion' */
  uint8_T Operator_pf;                 /* '<S1033>/Operator' */
  uint8_T Operator_b1;                 /* '<S1028>/Operator' */
  uint8_T DataType_jh;                 /* '<S1028>/DataType' */
  uint8_T Operator_du;                 /* '<S1029>/Operator' */
  uint8_T Operator_eal;                /* '<S1030>/Operator' */
  uint8_T Operator_mi;                 /* '<S1031>/Operator' */
  uint8_T Operator_lh;                 /* '<S1032>/Operator' */
  uint8_T DataTypeConversion_cs;       /* '<S946>/Data Type Conversion' */
  uint8_T Operator_n0;                 /* '<S954>/Operator' */
  uint8_T Operator_os;                 /* '<S951>/Operator' */
  uint8_T DataType_ko;                 /* '<S951>/DataType' */
  uint8_T Operator_dt;                 /* '<S952>/Operator' */
  uint8_T Operator_g5;                 /* '<S953>/Operator' */
  uint8_T Operator_ce;                 /* '<S955>/Operator' */
  uint8_T Operator_er;                 /* '<S956>/Operator' */
  uint8_T DataTypeConversion_jn;       /* '<S947>/Data Type Conversion' */
  uint8_T Operator_k1;                 /* '<S962>/Operator' */
  uint8_T Operator_bl;                 /* '<S963>/Operator' */
  uint8_T Operator_ku;                 /* '<S959>/Operator' */
  uint8_T DataType_cq;                 /* '<S959>/DataType' */
  uint8_T Operator_pu;                 /* '<S960>/Operator' */
  uint8_T Operator_pn;                 /* '<S961>/Operator' */
  uint8_T Operator_fu;                 /* '<S964>/Operator' */
  uint8_T DataTypeConversion_hh;       /* '<S950>/Data Type Conversion' */
  uint8_T Switch_jl;                   /* '<S984>/Switch' */
  uint8_T DataTypeConversion_e3;       /* '<S982>/Data Type Conversion' */
  uint8_T DataType_km;                 /* '<S987>/DataType' */
  uint8_T DataTypeConversion4_o;       /* '<S982>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_k;       /* '<S982>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_i;       /* '<S982>/Data Type Conversion6' */
  uint8_T Reshape_ik[16];              /* '<S1012>/Reshape' */
  uint8_T Selector_o;                  /* '<S1012>/Selector' */
  uint8_T DataTypeConversion1_gn;      /* '<S982>/Data Type Conversion1' */
  uint8_T Operator_k4;                 /* '<S995>/Operator' */
  uint8_T DataType_g4;                 /* '<S995>/DataType' */
  uint8_T DataType_ea;                 /* '<S991>/DataType' */
  uint8_T DataTypeConversion8_g;       /* '<S982>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_d;       /* '<S982>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_n;      /* '<S982>/Data Type Conversion10' */
  uint8_T Add_aut;                     /* '<S982>/Add' */
  uint8_T Shift_Arithmetic6_j;         /* '<S982>/Shift_Arithmetic 6' */
  uint8_T Add1_j;                      /* '<S982>/Add1' */
  uint8_T Operator_jn;                 /* '<S996>/Operator' */
  uint8_T DataType_e5;                 /* '<S996>/DataType' */
  uint8_T Shift_Arithmetic7_e;         /* '<S982>/Shift_Arithmetic 7' */
  uint8_T Operator_f2;                 /* '<S997>/Operator' */
  uint8_T DataType_ci;                 /* '<S997>/DataType' */
  uint8_T DataTypeConversion_ng;       /* '<S949>/Data Type Conversion' */
  uint8_T Operator_iq;                 /* '<S977>/Operator' */
  uint8_T Operator_ev;                 /* '<S973>/Operator' */
  uint8_T DataType_n1;                 /* '<S973>/DataType' */
  uint8_T Operator_ms;                 /* '<S974>/Operator' */
  uint8_T Operator_h1;                 /* '<S975>/Operator' */
  uint8_T Operator_iz;                 /* '<S976>/Operator' */
  uint8_T Operator_iy;                 /* '<S978>/Operator' */
  uint8_T DataTypeConversion_pk;       /* '<S892>/Data Type Conversion' */
  uint8_T Operator_nz;                 /* '<S924>/Operator' */
  uint8_T DataType_is;                 /* '<S924>/DataType' */
  uint8_T DataTypeConversion2_a2j;     /* '<S892>/Data Type Conversion2' */
  uint8_T Operator_f4;                 /* '<S926>/Operator' */
  uint8_T DataType_lm;                 /* '<S926>/DataType' */
  uint8_T Shift_Arithmetic_jl;         /* '<S892>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_k;       /* '<S892>/Data Type Conversion4' */
  uint8_T Operator_mst;                /* '<S927>/Operator' */
  uint8_T DataType_d3;                 /* '<S927>/DataType' */
  uint8_T Shift_Arithmetic1_k1;        /* '<S892>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_n;       /* '<S892>/Data Type Conversion5' */
  uint8_T Operator_mp;                 /* '<S925>/Operator' */
  uint8_T DataType_mr;                 /* '<S925>/DataType' */
  uint8_T Shift_Arithmetic2_jb;        /* '<S892>/Shift_Arithmetic 2' */
  uint8_T Operator_h5;                 /* '<S932>/Operator' */
  uint8_T DataType_ib;                 /* '<S932>/DataType' */
  uint8_T DataTypeConversion1_og;      /* '<S892>/Data Type Conversion1' */
  uint8_T Operator_m0;                 /* '<S928>/Operator' */
  uint8_T DataType_hu;                 /* '<S928>/DataType' */
  uint8_T DataType_mp;                 /* '<S937>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S930>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S930>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S930>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_b;      /* '<S930>/Data Type Conversion13' */
  uint8_T Operator_mpq;                /* '<S936>/Operator' */
  uint8_T DataType_dj;                 /* '<S936>/DataType' */
  uint8_T Checksum;                    /* '<S930>/Add' */
  uint8_T Shift_Arithmetic7_b;         /* '<S930>/Shift_Arithmetic 7' */
  uint8_T Add1_a;                      /* '<S930>/Add1' */
  uint8_T Operator_ml;                 /* '<S935>/Operator' */
  uint8_T DataType_kw;                 /* '<S935>/DataType' */
  uint8_T DataTypeConversion3_ay;      /* '<S892>/Data Type Conversion3' */
  uint8_T Operator_o1;                 /* '<S929>/Operator' */
  uint8_T DataType_he;                 /* '<S929>/DataType' */
  uint8_T Shift_Arithmetic3_hx;        /* '<S892>/Shift_Arithmetic 3' */
  uint8_T Operator_cq;                 /* '<S933>/Operator' */
  uint8_T DataType_ff;                 /* '<S933>/DataType' */
  uint8_T DataTypeConversion_ln;       /* '<S887>/Data Type Conversion' */
  uint8_T Operator_im;                 /* '<S902>/Operator' */
  uint8_T DataType_cp;                 /* '<S902>/DataType' */
  uint8_T Operator_jz;                 /* '<S907>/Operator' */
  uint8_T Operator_fn;                 /* '<S903>/Operator' */
  uint8_T Operator_bs;                 /* '<S908>/Operator' */
  uint8_T Operator_cu;                 /* '<S909>/Operator' */
  uint8_T Operator_l3;                 /* '<S906>/Operator' */
  uint8_T DataType_as;                 /* '<S922>/DataType' */
  uint8_T DataTypeConversion2_mp;      /* '<S891>/Data Type Conversion2' */
  uint8_T DataTypeConversion_kz;       /* '<S867>/Data Type Conversion' */
  uint8_T Operator_jo;                 /* '<S872>/Operator' */
  uint8_T Operator_ed;                 /* '<S869>/Operator' */
  uint8_T DataType_kt;                 /* '<S869>/DataType' */
  uint8_T Operator_g1;                 /* '<S870>/Operator' */
  uint8_T Operator_ka;                 /* '<S871>/Operator' */
  uint8_T Operator_hp;                 /* '<S873>/Operator' */
  uint8_T Operator_oo;                 /* '<S874>/Operator' */
  uint8_T DataTypeConversion_bk;       /* '<S868>/Data Type Conversion' */
  uint8_T Operator_pz;                 /* '<S880>/Operator' */
  uint8_T Operator_osm;                /* '<S877>/Operator' */
  uint8_T DataType_lb;                 /* '<S877>/DataType' */
  uint8_T Operator_he;                 /* '<S878>/Operator' */
  uint8_T Operator_nu;                 /* '<S879>/Operator' */
  uint8_T Operator_gl;                 /* '<S881>/Operator' */
  uint8_T Operator_kk;                 /* '<S882>/Operator' */
  uint8_T FixPtUnitDelay2_k;           /* '<S848>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S729>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S731>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S732>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_i;       /* '<S722>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S724>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_g;       /* '<S717>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S718>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_k;       /* '<S711>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S712>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S713>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_n;       /* '<S704>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S706>/Signal Conversion' */
  uint8_T UnitDelay_h[17];             /* '<S654>/Unit Delay' */
  uint8_T Data[17];                    /* '<S654>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S657>/Inport' */
  uint8_T DataTypeConversion_pd;       /* '<S614>/Data Type Conversion' */
  uint8_T DataTypeConversion_ai;       /* '<S615>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ci;      /* '<S614>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_hx;      /* '<S615>/Data Type Conversion1' */
  uint8_T DataTypeConversion_ar;       /* '<S601>/Data Type Conversion' */
  uint8_T DataTypeConversion1_jj;      /* '<S601>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_a2z;     /* '<S601>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_mn;      /* '<S601>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_dr;      /* '<S601>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_kq;      /* '<S601>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_fx;      /* '<S601>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_b;       /* '<S601>/Data Type Conversion7' */
  uint8_T DataTypeConversion_bo;       /* '<S602>/Data Type Conversion' */
  uint8_T DataTypeConversion1_d;       /* '<S602>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_fk;      /* '<S602>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_en;      /* '<S602>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_g2;      /* '<S602>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_e;       /* '<S602>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_da;      /* '<S602>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h;       /* '<S602>/Data Type Conversion7' */
  uint8_T DataTypeConversion_kt2;      /* '<S588>/Data Type Conversion' */
  uint8_T DataTypeConversion1_kf;      /* '<S588>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_mr;      /* '<S588>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_lq;      /* '<S588>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_le;      /* '<S588>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_dk;      /* '<S588>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_fl;      /* '<S588>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ix;      /* '<S588>/Data Type Conversion7' */
  uint8_T UnitDelay_bw[39];            /* '<S526>/Unit Delay' */
  uint8_T Data_d[39];                  /* '<S526>/serialize_tpdt' */
  uint8_T Inport_b[39];                /* '<S529>/Inport' */
  uint8_T DataTypeConversion1_ba;      /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_pw;      /* '<S209>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew;      /* '<S104>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S104>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b;           /* '<S400>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S389>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_o;           /* '<S377>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S377>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_nn;          /* '<S361>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion1_f1;      /* '<S79>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_e3;      /* '<S80>/Data Type Conversion5' */
  uint8_T FixPtUnitDelay2_j;           /* '<S379>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_i;      /* '<S379>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_m;           /* '<S380>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_b;      /* '<S380>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_h5;          /* '<S346>/FixPt Unit Delay2' */
  uint8_T stateChange;                 /* '<S283>/Chart' */
  uint8_T FixPtUnitDelay2_a;           /* '<S272>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_g;           /* '<S198>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_d;           /* '<S191>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_mf;          /* '<S178>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_op;          /* '<S140>/FixPt Unit Delay2' */
  int8_T DataTypeConversion4_mz;       /* '<S686>/Data Type Conversion4' */
  int8_T DataTypeConversion10_fy;      /* '<S688>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S403>/for_logging7' */
  boolean_T SFunction1_n3;             /* '<S740>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S422>/EStopSwActive' */
  boolean_T SFunction1_k;              /* '<S739>/S-Function1' */
  boolean_T Operator_ck;               /* '<S849>/Operator' */
  boolean_T DataType_pt;               /* '<S849>/DataType' */
  boolean_T LogicalOperator;           /* '<S751>/Logical Operator' */
  boolean_T SFunction1_j;              /* '<S741>/S-Function1' */
  boolean_T Operator_blr;              /* '<S850>/Operator' */
  boolean_T DataType_p0;               /* '<S850>/DataType' */
  boolean_T AND2;                      /* '<S751>/AND2' */
  boolean_T SFunction1_l;              /* '<S742>/S-Function1' */
  boolean_T StartPBActive;             /* '<S422>/StartPBActive' */
  boolean_T LogicalOperator_g;         /* '<S422>/Logical Operator' */
  boolean_T Compare;                   /* '<S765>/Compare' */
  boolean_T Uk1_p;                     /* '<S761>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S761>/FixPt Relational Operator' */
  boolean_T UnitDelay_b2;              /* '<S749>/Unit Delay' */
  boolean_T Compare_p;                 /* '<S764>/Compare' */
  boolean_T Uk1_e;                     /* '<S760>/Delay Input1' */
  boolean_T FixPtRelationalOperator_n; /* '<S760>/FixPt Relational Operator' */
  boolean_T UnitDelay1_c;              /* '<S762>/Unit Delay1' */
  boolean_T OR1;                       /* '<S762>/OR1' */
  boolean_T Compare_e;                 /* '<S766>/Compare' */
  boolean_T LessThanOrEqual;           /* '<S762>/LessThanOrEqual' */
  boolean_T AND;                       /* '<S762>/AND' */
  boolean_T NOT;                       /* '<S749>/NOT' */
  boolean_T AND_n;                     /* '<S749>/AND' */
  boolean_T UnitDelay1_l;              /* '<S763>/Unit Delay1' */
  boolean_T OR1_m;                     /* '<S763>/OR1' */
  boolean_T Compare_ex;                /* '<S767>/Compare' */
  boolean_T LessThanOrEqual_o;         /* '<S763>/LessThanOrEqual' */
  boolean_T AND_i;                     /* '<S763>/AND' */
  boolean_T SFunction1_p;              /* '<S744>/S-Function1' */
  boolean_T StartPBActive1;            /* '<S422>/StartPBActive1' */
  boolean_T min_relop;                 /* '<S797>/min_relop' */
  boolean_T max_relop;                 /* '<S797>/max_relop' */
  boolean_T conjunction;               /* '<S797>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S799>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S799>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S785>/Relational Operator9' */
  boolean_T min_relop_e;               /* '<S789>/min_relop' */
  boolean_T max_relop_c;               /* '<S789>/max_relop' */
  boolean_T conjunction_p;             /* '<S789>/conjunction' */
  boolean_T RelationalOperator1_l;     /* '<S791>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S791>/Relational Operator' */
  boolean_T F_Fault_Soft_c;            /* '<S784>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S769>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S785>/Relational Operator8' */
  boolean_T F_Fault_Hard_c;            /* '<S784>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S769>/Logical Operator1' */
  boolean_T Compare_n;                 /* '<S780>/Compare' */
  boolean_T min_relop_a;               /* '<S813>/min_relop' */
  boolean_T max_relop_j;               /* '<S813>/max_relop' */
  boolean_T conjunction_f;             /* '<S813>/conjunction' */
  boolean_T RelationalOperator1_c;     /* '<S815>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S815>/Relational Operator' */
  boolean_T F_Fault_Soft_i;            /* '<S787>/Relational Operator9' */
  boolean_T min_relop_o;               /* '<S805>/min_relop' */
  boolean_T max_relop_m;               /* '<S805>/max_relop' */
  boolean_T conjunction_d;             /* '<S805>/conjunction' */
  boolean_T RelationalOperator1_p;     /* '<S807>/Relational Operator1' */
  boolean_T RelationalOperator_l;      /* '<S807>/Relational Operator' */
  boolean_T F_Fault_Soft_e;            /* '<S786>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S769>/Logical Operator4' */
  boolean_T F_Fault_Hard_h;            /* '<S787>/Relational Operator8' */
  boolean_T F_Fault_Hard_p;            /* '<S786>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S769>/Logical Operator3' */
  boolean_T Compare_a;                 /* '<S781>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S769>/Logical Operator5' */
  boolean_T Unit_Delay_bl;             /* '<S772>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S839>/Unit_Delay1' */
  boolean_T LogicalOperator_i;         /* '<S839>/Logical Operator' */
  boolean_T Unit_Delay1_a;             /* '<S772>/Unit_Delay1' */
  boolean_T Unit_Delay1_d;             /* '<S840>/Unit_Delay1' */
  boolean_T LogicalOperator_p;         /* '<S840>/Logical Operator' */
  boolean_T Compare_f;                 /* '<S776>/Compare' */
  boolean_T Compare_ns;                /* '<S832>/Compare' */
  boolean_T LogicalOperator7;          /* '<S770>/Logical Operator7' */
  boolean_T Compare_o;                 /* '<S831>/Compare' */
  boolean_T LogicalOperator8;          /* '<S770>/Logical Operator8' */
  boolean_T Compare_h;                 /* '<S830>/Compare' */
  boolean_T LogicalOperator5;          /* '<S770>/Logical Operator5' */
  boolean_T Compare_m;                 /* '<S829>/Compare' */
  boolean_T LogicalOperator6;          /* '<S770>/Logical Operator6' */
  boolean_T Compare_hn;                /* '<S775>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S774>/Relational Operator' */
  boolean_T min_relop_c;               /* '<S821>/min_relop' */
  boolean_T max_relop_o;               /* '<S821>/max_relop' */
  boolean_T conjunction_h;             /* '<S821>/conjunction' */
  boolean_T RelationalOperator1_g;     /* '<S823>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S823>/Relational Operator' */
  boolean_T F_Fault_Hard_pe;           /* '<S788>/Relational Operator8' */
  boolean_T LogicalOperator6_o;        /* '<S750>/Logical Operator6' */
  boolean_T Operator_nq;               /* '<S484>/Operator' */
  boolean_T Operator_b4;               /* '<S701>/Operator' */
  boolean_T Operator_km;               /* '<S493>/Operator' */
  boolean_T RX_status;                 /* '<S490>/Data Type Conversion8' */
  boolean_T RX_status_a;               /* '<S428>/Multiport_Switch' */
  boolean_T Operator_no;               /* '<S528>/Operator' */
  boolean_T LogicalOperator_iz;        /* '<S442>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S655>/Unit_Delay3' */
  boolean_T Operator_h3;               /* '<S656>/Operator' */
  boolean_T LogicalOperator_im;        /* '<S465>/Logical Operator' */
  boolean_T RelationalOperator1_d[17]; /* '<S655>/Relational Operator1' */
  boolean_T Compare_i;                 /* '<S659>/Compare' */
  boolean_T LogicalOperator_o;         /* '<S655>/Logical Operator' */
  boolean_T Unit_Delay_mm;             /* '<S655>/Unit_Delay' */
  boolean_T LogicalOperator3_l;        /* '<S661>/Logical Operator3' */
  boolean_T Unit_Delay_iz;             /* '<S661>/Unit_Delay' */
  boolean_T LogicalOperator_b;         /* '<S661>/Logical Operator' */
  boolean_T LogicalOperator1_c;        /* '<S661>/Logical Operator1' */
  boolean_T Operator_nc;               /* '<S666>/Operator' */
  boolean_T Operator_cqv;              /* '<S665>/Operator' */
  boolean_T Operator_j2;               /* '<S667>/Operator' */
  boolean_T Operator_af;               /* '<S668>/Operator' */
  boolean_T Operator_ey;               /* '<S669>/Operator' */
  boolean_T Operator_j4;               /* '<S670>/Operator' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S472>/OR' */
  boolean_T Enable;                    /* '<S3>/Enable' */
  boolean_T EStop_j;                   /* '<S3>/Unit_Delay' */
  boolean_T EnableSW;                  /* '<S3>/Unit_Delay' */
  boolean_T EngageReq;                 /* '<S3>/Unit_Delay' */
  boolean_T LogPB;                     /* '<S3>/Unit_Delay' */
  boolean_T AutonomousEnabled;         /* '<S3>/Unit_Delay' */
  boolean_T BrakeSW_j;                 /* '<S3>/Unit_Delay' */
  boolean_T Compare_c;                 /* '<S412>/Compare' */
  boolean_T Uk1_f;                     /* '<S411>/Delay Input1' */
  boolean_T FixPtRelationalOperator_i; /* '<S411>/FixPt Relational Operator' */
  boolean_T Operator_m1;               /* '<S408>/Operator' */
  boolean_T SystemsOk;                 /* '<S403>/AND1' */
  boolean_T RX_status_e;               /* '<S515>/Data Type Conversion8' */
  boolean_T RX_status_g;               /* '<S644>/Data Type Conversion8' */
  boolean_T Operator_fh;               /* '<S1074>/Operator' */
  boolean_T DataType_kox;              /* '<S1074>/DataType' */
  boolean_T UnitDelay2;                /* '<S865>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S865>/Unit Delay3' */
  boolean_T Operator_cd;               /* '<S1091>/Operator' */
  boolean_T AND3;                      /* '<S1083>/AND3' */
  boolean_T NOT2;                      /* '<S1083>/NOT2' */
  boolean_T OR1_e;                     /* '<S1083>/OR1' */
  boolean_T NOT1;                      /* '<S1083>/NOT1' */
  boolean_T Operator_fz;               /* '<S1092>/Operator' */
  boolean_T NOT_o;                     /* '<S1083>/NOT' */
  boolean_T AND1;                      /* '<S1083>/AND1' */
  boolean_T AND_m;                     /* '<S1083>/AND' */
  boolean_T OR;                        /* '<S1083>/OR' */
  boolean_T AND2_d;                    /* '<S1083>/AND2' */
  boolean_T LogicalOperator_n;         /* '<S1081>/Logical Operator' */
  boolean_T RelationalOperator_d;      /* '<S1082>/Relational Operator' */
  boolean_T RelationalOperator1_o;     /* '<S1082>/Relational Operator1' */
  boolean_T LogicalOperator_e;         /* '<S1082>/Logical Operator' */
  boolean_T Compare_pu;                /* '<S1088>/Compare' */
  boolean_T Compare_j;                 /* '<S1089>/Compare' */
  boolean_T LogicalOperator1_p;        /* '<S1082>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1082>/Logical Operator2' */
  boolean_T LogicalOperator_bx;        /* '<S856>/Logical Operator' */
  boolean_T RX_status_h;               /* '<S579>/Data Type Conversion8' */
  boolean_T F_Truck1571_VIN_Match;     /* '<S3>/Unit_Delay' */
  boolean_T F_Truck166_VIN_Match;      /* '<S3>/Unit_Delay' */
  boolean_T SystemsOk_a;               /* '<S3>/Unit_Delay' */
  boolean_T APTC_arb_pedal_low_idl_sw; /* '<S3>/Unit_Delay' */
  boolean_T signal1;                   /* '<S3>/Unit_Delay' */
  boolean_T PID_hold_i_term_f;         /* '<S3>/Unit_Delay' */
  boolean_T F_Ignition_relay_command;  /* '<S3>/Unit_Delay' */
  boolean_T F_Inverter_relay_command;  /* '<S3>/Unit_Delay' */
  boolean_T F_MABX_relay_command;      /* '<S3>/Unit_Delay' */
  boolean_T F_Sensor_relay_command;    /* '<S3>/Unit_Delay' */
  boolean_T BrakingControlActive;      /* '<S3>/Unit_Delay' */
  boolean_T F_Hold_brakes_at_zero;     /* '<S3>/Unit_Delay' */
  boolean_T AutonomousOutputEnabled_n; /* '<S3>/Unit_Delay' */
  boolean_T EngagePB_g;                /* '<S3>/Unit_Delay' */
  boolean_T RX_status_p;               /* '<S481>/Data Type Conversion8' */
  boolean_T RX_status_gp;              /* '<S427>/Multiport_Switch' */
  boolean_T Operator_pa;               /* '<S485>/Operator' */
  boolean_T Operator_hf;               /* '<S486>/Operator' */
  boolean_T Operator_cuv;              /* '<S487>/Operator' */
  boolean_T Operator_ca;               /* '<S488>/Operator' */
  boolean_T Operator_k2;               /* '<S489>/Operator' */
  boolean_T Operator_dbr;              /* '<S494>/Operator' */
  boolean_T Operator_hfh;              /* '<S495>/Operator' */
  boolean_T Operator_my;               /* '<S496>/Operator' */
  boolean_T Operator_ayb;              /* '<S497>/Operator' */
  boolean_T Operator_aw;               /* '<S498>/Operator' */
  boolean_T RX_status_k;               /* '<S499>/Data Type Conversion8' */
  boolean_T RX_status_l;               /* '<S501>/Data Type Conversion8' */
  boolean_T RX_status_gx;              /* '<S503>/Data Type Conversion8' */
  boolean_T RX_status_c;               /* '<S505>/Data Type Conversion8' */
  boolean_T RX_status_h4;              /* '<S507>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S509>/Data Type Conversion8' */
  boolean_T RX_status_ln;              /* '<S511>/Data Type Conversion8' */
  boolean_T RX_status_ed;              /* '<S513>/Data Type Conversion8' */
  boolean_T RX_status_aq;              /* '<S515>/Switch' */
  boolean_T RX_status_d;               /* '<S518>/Data Type Conversion8' */
  boolean_T RX_status_b;               /* '<S520>/Data Type Conversion8' */
  boolean_T RX_status_g2;              /* '<S522>/Data Type Conversion8' */
  boolean_T RX_status_n;               /* '<S524>/Data Type Conversion8' */
  boolean_T RX_status_h5;              /* '<S571>/Data Type Conversion8' */
  boolean_T RX_status_nu;              /* '<S573>/Data Type Conversion8' */
  boolean_T RX_status_j;               /* '<S575>/Data Type Conversion8' */
  boolean_T RX_status_c4;              /* '<S577>/Data Type Conversion8' */
  boolean_T RX_status_kh;              /* '<S579>/Switch' */
  boolean_T RX_status_f;               /* '<S582>/Data Type Conversion8' */
  boolean_T RX_status_n4;              /* '<S449>/Switch' */
  boolean_T Operator_k5;               /* '<S621>/Operator' */
  boolean_T Operator_j1;               /* '<S622>/Operator' */
  boolean_T Operator_g3;               /* '<S623>/Operator' */
  boolean_T RX_status_m;               /* '<S616>/Data Type Conversion8' */
  boolean_T RX_status_dz;              /* '<S452>/Multiport_Switch' */
  boolean_T Operator_kv;               /* '<S624>/Operator' */
  boolean_T Operator_mb;               /* '<S625>/Operator' */
  boolean_T Operator_iz3;              /* '<S626>/Operator' */
  boolean_T RX_status_bx;              /* '<S627>/Data Type Conversion2' */
  boolean_T RX_status_p1;              /* '<S627>/Data Type Conversion5' */
  boolean_T RX_status_o;               /* '<S627>/Data Type Conversion8' */
  boolean_T RX_status_ji;              /* '<S631>/Switch' */
  boolean_T RX_status_jk;              /* '<S634>/Data Type Conversion8' */
  boolean_T RX_status_oh;              /* '<S636>/Data Type Conversion8' */
  boolean_T RX_status_av;              /* '<S638>/Data Type Conversion8' */
  boolean_T RX_status_kd;              /* '<S640>/Data Type Conversion8' */
  boolean_T RX_status_nv;              /* '<S642>/Data Type Conversion8' */
  boolean_T RX_status_ku;              /* '<S646>/Data Type Conversion8' */
  boolean_T RX_status_nk;              /* '<S648>/Data Type Conversion8' */
  boolean_T RX_status_e3;              /* '<S650>/Data Type Conversion8' */
  boolean_T RX_status_kl;              /* '<S652>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S655>/Relational Operator2' */
  boolean_T Compare_ho;                /* '<S660>/Compare' */
  boolean_T Unit_Delay2_aa;            /* '<S655>/Unit_Delay2' */
  boolean_T LogicalOperator1_k;        /* '<S655>/Logical Operator1' */
  boolean_T LogicalOperator2_j;        /* '<S661>/Logical Operator2' */
  boolean_T Unit_Delay1_p;             /* '<S655>/Unit_Delay1' */
  boolean_T LogicalOperator3_j;        /* '<S662>/Logical Operator3' */
  boolean_T Unit_Delay_nw;             /* '<S662>/Unit_Delay' */
  boolean_T LogicalOperator_id;        /* '<S662>/Logical Operator' */
  boolean_T LogicalOperator1_cl;       /* '<S662>/Logical Operator1' */
  boolean_T LogicalOperator2_a;        /* '<S662>/Logical Operator2' */
  boolean_T Operator_fb;               /* '<S699>/Operator' */
  boolean_T Operator_jd;               /* '<S702>/Operator' */
  boolean_T Operator_hh;               /* '<S700>/Operator' */
  boolean_T Operator_eu;               /* '<S698>/Operator' */
  boolean_T Operator_kmo;              /* '<S595>/Operator' */
  boolean_T Operator_ef;               /* '<S596>/Operator' */
  boolean_T Operator_fhg;              /* '<S600>/Operator' */
  boolean_T RX_status_i;               /* '<S589>/Data Type Conversion8' */
  boolean_T RX_status_bv;              /* '<S590>/Data Type Conversion8' */
  boolean_T RX_status_nd;              /* '<S450>/Multiport_Switch' */
  boolean_T Operator_pzw;              /* '<S597>/Operator' */
  boolean_T Operator_pt;               /* '<S598>/Operator' */
  boolean_T Operator_fo;               /* '<S599>/Operator' */
  boolean_T Operator_c2;               /* '<S608>/Operator' */
  boolean_T Operator_ad;               /* '<S609>/Operator' */
  boolean_T Operator_dp;               /* '<S613>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S683>/Data Type Conversion' */
  boolean_T DataTypeConversion_bi;     /* '<S426>/Data Type Conversion' */
  boolean_T DataType_pb;               /* '<S689>/DataType' */
  boolean_T DataTypeConversion1_c5;    /* '<S426>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S683>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_hs;    /* '<S426>/Data Type Conversion2' */
  boolean_T RX_status_g3;              /* '<S603>/Data Type Conversion8' */
  boolean_T RX_status_ni;              /* '<S451>/Multiport_Switch' */
  boolean_T Operator_ft;               /* '<S610>/Operator' */
  boolean_T Operator_f21;              /* '<S611>/Operator' */
  boolean_T Operator_ev0;              /* '<S612>/Operator' */
  boolean_T SFunction1_g;              /* '<S743>/S-Function1' */
  boolean_T LogPbActive;               /* '<S422>/LogPbActive' */
  boolean_T LogicalOperator2_l;        /* '<S422>/Logical Operator2' */
  boolean_T Compare_ai;                /* '<S757>/Compare' */
  boolean_T Uk1_kx;                    /* '<S753>/Delay Input1' */
  boolean_T FixPtRelationalOperator_f; /* '<S753>/FixPt Relational Operator' */
  boolean_T UnitDelay_os;              /* '<S748>/Unit Delay' */
  boolean_T Compare_b;                 /* '<S756>/Compare' */
  boolean_T Uk1_i;                     /* '<S752>/Delay Input1' */
  boolean_T FixPtRelationalOperator_no;/* '<S752>/FixPt Relational Operator' */
  boolean_T UnitDelay1_co;             /* '<S754>/Unit Delay1' */
  boolean_T OR1_mk;                    /* '<S754>/OR1' */
  boolean_T Compare_mn;                /* '<S758>/Compare' */
  boolean_T LessThanOrEqual_i;         /* '<S754>/LessThanOrEqual' */
  boolean_T AND_d;                     /* '<S754>/AND' */
  boolean_T NOT_k;                     /* '<S748>/NOT' */
  boolean_T AND_d2;                    /* '<S748>/AND' */
  boolean_T UnitDelay1_i;              /* '<S755>/Unit Delay1' */
  boolean_T OR1_k;                     /* '<S755>/OR1' */
  boolean_T Compare_bm;                /* '<S759>/Compare' */
  boolean_T LessThanOrEqual_j;         /* '<S755>/LessThanOrEqual' */
  boolean_T AND_j;                     /* '<S755>/AND' */
  boolean_T F_Fault_Soft_cn;           /* '<S788>/Relational Operator9' */
  boolean_T Operator_euc;              /* '<S22>/Operator' */
  boolean_T Operator_msz;              /* '<S26>/Operator' */
  boolean_T Operator_fv;               /* '<S27>/Operator' */
  boolean_T Operator_bsh;              /* '<S24>/Operator' */
  boolean_T Operator_bw;               /* '<S25>/Operator' */
  boolean_T Operator_eb;               /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S865>/Chart' */
  boolean_T enTPCM;                    /* '<S865>/Chart' */
  boolean_T DataTypeConversion6_k;     /* '<S1046>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S1050>/u2' */
  boolean_T Operator_fc3;              /* '<S1050>/Operator' */
  boolean_T DataType_mo;               /* '<S1050>/DataType' */
  boolean_T Unit_Delay_bi;             /* '<S1055>/Unit_Delay' */
  boolean_T Operator_ee;               /* '<S1057>/Operator' */
  boolean_T AutonomousOutputEnabled_h; /* '<S1021>/Bus Selector2' */
  boolean_T BrakingControlActive_b;    /* '<S1021>/Bus Selector2' */
  boolean_T Unit_Delay_g;              /* '<S1017>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S1017>/OperatorEnable' */
  boolean_T LogicalOperator8_i;        /* '<S1017>/Logical Operator8' */
  boolean_T LogicalOperator7_h;        /* '<S1017>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S1017>/OperatorEnable' */
  boolean_T LogicalOperator1_ct;       /* '<S1017>/Logical Operator1' */
  boolean_T DataTypeConversion2_lv;    /* '<S1017>/Data Type Conversion2' */
  boolean_T LogicalOperator_ga;        /* '<S1017>/Logical Operator' */
  boolean_T Compare_it;                /* '<S1023>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S1017>/OperatorEnable' */
  boolean_T Unit_Delay_iy;             /* '<S1040>/Unit_Delay' */
  boolean_T DataTypeConversion7_hf;    /* '<S1019>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_a3;    /* '<S1019>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_pb;    /* '<S1019>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_p;     /* '<S1019>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_pu;    /* '<S1019>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_bk;    /* '<S1019>/Data Type Conversion6' */
  boolean_T Operator_ao;               /* '<S1042>/Operator' */
  boolean_T DataTypeConversion5_a;     /* '<S946>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_bm;    /* '<S946>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_dv;    /* '<S946>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_l1;    /* '<S946>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_hi;    /* '<S946>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_ce;    /* '<S946>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_m1;    /* '<S947>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_gn;    /* '<S947>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_kq;    /* '<S947>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_d5;    /* '<S947>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_pe;    /* '<S947>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_hc;    /* '<S947>/Data Type Conversion7' */
  boolean_T Operator_l5;               /* '<S1001>/Operator' */
  boolean_T Operator_MX;               /* '<S1010>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S1010>/Operator_MN' */
  boolean_T Operator_ag;               /* '<S1002>/Operator' */
  boolean_T Operator_mlc;              /* '<S1003>/Operator' */
  boolean_T Operator_og;               /* '<S1004>/Operator' */
  boolean_T Operator_hj;               /* '<S1005>/Operator' */
  boolean_T Operator_pg;               /* '<S1006>/Operator' */
  boolean_T Unit_Delay_n1;             /* '<S1012>/Unit_Delay' */
  boolean_T DataTypeConversion6_ki;    /* '<S949>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_nr;    /* '<S949>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_f2;    /* '<S949>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_ox;    /* '<S949>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_me;    /* '<S949>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_ef;    /* '<S949>/Data Type Conversion7' */
  boolean_T LogicalOperator1_cr;       /* '<S1010>/Logical Operator1' */
  boolean_T LogicalOperator_i1;        /* '<S1010>/Logical Operator' */
  boolean_T Operator_k1o;              /* '<S1014>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S892>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S910>/u1' */
  boolean_T DataTypeConversion2_f1;    /* '<S887>/Data Type Conversion2' */
  boolean_T Operator_jh;               /* '<S910>/Operator' */
  boolean_T DataType_pk;               /* '<S910>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_c; /* '<S913>/u1' */
  boolean_T DataTypeConversion5_kt;    /* '<S887>/Data Type Conversion5' */
  boolean_T Operator_iqn;              /* '<S913>/Operator' */
  boolean_T DataType_pf;               /* '<S913>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_n; /* '<S904>/u1' */
  boolean_T DataTypeConversion6_py;    /* '<S887>/Data Type Conversion6' */
  boolean_T Operator_ary;              /* '<S904>/Operator' */
  boolean_T DataType_ewo;              /* '<S904>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_k; /* '<S905>/u1' */
  boolean_T DataTypeConversion7_mh;    /* '<S887>/Data Type Conversion7' */
  boolean_T Operator_jg;               /* '<S905>/Operator' */
  boolean_T DataType_elw;              /* '<S905>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_kn;/* '<S911>/u1' */
  boolean_T DataTypeConversion3_be;    /* '<S887>/Data Type Conversion3' */
  boolean_T Operator_cc;               /* '<S911>/Operator' */
  boolean_T DataType_h1s;              /* '<S911>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_cw;/* '<S912>/u1' */
  boolean_T DataTypeConversion4_d1;    /* '<S887>/Data Type Conversion4' */
  boolean_T Operator_btn;              /* '<S912>/Operator' */
  boolean_T DataType_gsm;              /* '<S912>/DataType' */
  boolean_T DataTypeConversion2_c4;    /* '<S893>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S898>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_k;/* '<S899>/Enable' */
  boolean_T DataTypeConversion2_k5;    /* '<S888>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_ow;    /* '<S889>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_op;    /* '<S867>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_gf;    /* '<S867>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_do;    /* '<S867>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_ma;    /* '<S867>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_gt;    /* '<S867>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_p2;    /* '<S867>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_pl;    /* '<S868>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_pt;    /* '<S868>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_np;    /* '<S868>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_ae;    /* '<S868>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_dh;    /* '<S868>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_c0;    /* '<S868>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S851>/Chart' */
  boolean_T Unit_Delay_fgg;            /* '<S844>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S844>/Logical Operator1' */
  boolean_T LogicalOperator_k;         /* '<S844>/Logical Operator' */
  boolean_T Unit_Delay_jr;             /* '<S845>/Unit_Delay' */
  boolean_T LogicalOperator1_l;        /* '<S845>/Logical Operator1' */
  boolean_T RelationalOperator1_g4;    /* '<S773>/Relational Operator1' */
  boolean_T LogicalOperator3_b;        /* '<S843>/Logical Operator3' */
  boolean_T Unit_Delay_h;              /* '<S843>/Unit_Delay' */
  boolean_T LogicalOperator1_g;        /* '<S843>/Logical Operator1' */
  boolean_T LogicalOperator_np;        /* '<S843>/Logical Operator' */
  boolean_T LogicalOperator2_i;        /* '<S843>/Logical Operator2' */
  boolean_T min_relop_b;               /* '<S846>/min_relop' */
  boolean_T RX_status_bk;              /* '<S654>/serialize_tpdt' */
  boolean_T RX_status_h0;              /* '<S631>/Data Type Conversion8' */
  boolean_T RX_status_mm;              /* '<S631>/Data Type Conversion3' */
  boolean_T RX_status_nm;              /* '<S614>/Data Type Conversion8' */
  boolean_T RX_status_on;              /* '<S615>/Data Type Conversion8' */
  boolean_T RX_status_b5;              /* '<S601>/Data Type Conversion8' */
  boolean_T RX_status_io;              /* '<S602>/Data Type Conversion8' */
  boolean_T RX_status_md;              /* '<S588>/Data Type Conversion8' */
  boolean_T RX_status_og;              /* '<S584>/Data Type Conversion8' */
  boolean_T RX_status_kul;             /* '<S585>/Data Type Conversion8' */
  boolean_T RX_status_gi;              /* '<S579>/Data Type Conversion3' */
  boolean_T RX_status_pz;              /* '<S526>/serialize_tpdt' */
  boolean_T RX_status_jm;              /* '<S515>/Data Type Conversion1' */
  boolean_T CheckHDOP;                 /* '<S401>/CheckHDOP' */
  boolean_T Unit_Delay_nh;             /* '<S76>/Unit_Delay' */
  boolean_T Compare_jp;                /* '<S100>/Compare' */
  boolean_T Uk1_d;                     /* '<S98>/Delay Input1' */
  boolean_T FixPtRelationalOperator_o; /* '<S98>/FixPt Relational Operator' */
  boolean_T UnitDelay_i3;              /* '<S97>/Unit Delay' */
  boolean_T OR_e;                      /* '<S97>/OR' */
  boolean_T Compare_fh;                /* '<S99>/Compare' */
  boolean_T LessThanOrEqual_g;         /* '<S97>/LessThanOrEqual' */
  boolean_T AND_f;                     /* '<S97>/AND' */
  boolean_T NOT1_h;                    /* '<S95>/NOT1' */
  boolean_T AND1_i;                    /* '<S76>/AND1' */
  boolean_T Compare_is;                /* '<S101>/Compare' */
  boolean_T AND_a;                     /* '<S96>/AND' */
  boolean_T OR_l;                      /* '<S76>/OR' */
  boolean_T AutonomousEnabled_d;       /* '<S76>/AND' */
  boolean_T LogicalOperator_d;         /* '<S83>/Logical Operator' */
  boolean_T f_vspd_geq_than_target_plus_hys;/* '<S109>/Relational Operator' */
  boolean_T f_target_is_stop_thresh;   /* '<S109>/Relational Operator1' */
  boolean_T Compare_eu;                /* '<S205>/Compare' */
  boolean_T RelationalOperator2_p;     /* '<S109>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S109>/Relational Operator3' */
  boolean_T f_vspd_leq_than_hyst_and_target;/* '<S109>/Logical Operator' */
  boolean_T LogicalOperator1_m;        /* '<S109>/Logical Operator1' */
  boolean_T DataTypeConversion4_d5;    /* '<S77>/Data Type Conversion4' */
  boolean_T F_Brake_control_active;    /* '<S109>/Logical Operator2' */
  boolean_T Compare_e5;                /* '<S215>/Compare' */
  boolean_T LogicalOperator2_n;        /* '<S209>/Logical Operator2' */
  boolean_T Compare_ih;                /* '<S213>/Compare' */
  boolean_T Compare_exd;               /* '<S214>/Compare' */
  boolean_T BrakingActive2;            /* '<S209>/BrakingActive2' */
  boolean_T f_brake_sw_off;            /* '<S209>/BrakingActive1' */
  boolean_T Compare_ay;                /* '<S216>/Compare' */
  boolean_T Compare_os;                /* '<S217>/Compare' */
  boolean_T f_brk_gov_inactive;        /* '<S209>/Logical Operator1' */
  boolean_T LogicalOperator_ke;        /* '<S209>/Logical Operator' */
  boolean_T LogicalOperator_j;         /* '<S82>/Logical Operator' */
  boolean_T APTC_arb_pedal_low_idl_sw_o;/* '<S75>/Relational Operator' */
  boolean_T RelationalOperator1_i;     /* '<S89>/Relational Operator1' */
  boolean_T RelationalOperator_ca;     /* '<S89>/Relational Operator' */
  boolean_T RelationalOperator1_a;     /* '<S90>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S90>/Relational Operator' */
  boolean_T RelationalOperator3_c[2];  /* '<S104>/Relational Operator3' */
  boolean_T LogicalOperator4_o;        /* '<S104>/Logical Operator4' */
  boolean_T RelationalOperator4[2];    /* '<S104>/Relational Operator4' */
  boolean_T F_Service_brake_pressure_applie;/* '<S104>/Logical Operator3' */
  boolean_T RelationalOperator6[2];    /* '<S104>/Relational Operator6' */
  boolean_T F_Brake_sw_CAN;            /* '<S104>/Logical Operator' */
  boolean_T LogicalOperator5_n;        /* '<S104>/Logical Operator5' */
  boolean_T F_Vehicle_stopped;         /* '<S108>/Relational Operator1' */
  boolean_T Compare_g;                 /* '<S206>/Compare' */
  boolean_T RelationalOperator4_l;     /* '<S109>/Relational Operator4' */
  boolean_T F_Hold_brakes_at_zero_d;   /* '<S109>/Logical Operator3' */
  boolean_T Compare_ey;                /* '<S393>/Compare' */
  boolean_T Compare_jb;                /* '<S390>/Compare' */
  boolean_T Compare_hc;                /* '<S391>/Compare' */
  boolean_T Compare_bp;                /* '<S392>/Compare' */
  boolean_T LogicalOperator2_f;        /* '<S353>/Logical Operator2' */
  boolean_T Unit_Delay_o;              /* '<S395>/Unit_Delay' */
  boolean_T LogicalOperator1_j;        /* '<S395>/Logical Operator1' */
  boolean_T LogicalOperator_f;         /* '<S395>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S396>/Unit_Delay' */
  boolean_T LogicalOperator1_ao;       /* '<S396>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S381>/Compare' */
  boolean_T Compare_dv;                /* '<S382>/Compare' */
  boolean_T LogicalOperator1_gm;       /* '<S351>/Logical Operator1' */
  boolean_T Unit_Delay_hz;             /* '<S384>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S384>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S384>/Logical Operator' */
  boolean_T Unit_Delay_c;              /* '<S385>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S385>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S347>/Compare' */
  boolean_T FixPtRelationalOperator_d[2];/* '<S348>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_nk[33];            /* '<S367>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S362>/Logical Operator' */
  boolean_T RelationalOperator_f;      /* '<S362>/Relational Operator' */
  boolean_T LogicalOperator3_o;        /* '<S368>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S368>/Unit_Delay' */
  boolean_T LogicalOperator_ob;        /* '<S368>/Logical Operator' */
  boolean_T LogicalOperator1_ph;       /* '<S368>/Logical Operator1' */
  boolean_T f_vspd_min_delta_greater_than_t;/* '<S362>/Logical Operator2' */
  boolean_T RelationalOperator1_g4j;   /* '<S362>/Relational Operator1' */
  boolean_T f_vspd_max_delta_greater_than_t;/* '<S362>/Logical Operator1' */
  boolean_T f_accel_rate_greater_than_thres;/* '<S362>/Relational Operator2' */
  boolean_T f_decel_rate_greater_than_thres;/* '<S362>/Relational Operator3' */
  boolean_T f_jerk_rate_greater_than_thresh;/* '<S362>/Relational Operator4' */
  boolean_T f_jerk_rate_greater_than_thre_n;/* '<S362>/Relational Operator5' */
  boolean_T RelationalOperator6_i;     /* '<S362>/Relational Operator6' */
  boolean_T f_distance_max_delta_greater_th;/* '<S362>/Logical Operator3' */
  boolean_T F_Inhibit_sigmoid_vector_shapin;/* '<S362>/Logical Operator4' */
  boolean_T LogicalOperator_nd;        /* '<S81>/Logical Operator' */
  boolean_T LogicalOperator2_ft;       /* '<S81>/Logical Operator2' */
  boolean_T RelationalOperator3_k;     /* '<S363>/Relational Operator3' */
  boolean_T RelationalOperator1_h;     /* '<S363>/Relational Operator1' */
  boolean_T LogicalOperator_da;        /* '<S363>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S363>/Relational Operator2' */
  boolean_T F_set_max_distance_accumulated;/* '<S363>/Logical Operator2' */
  boolean_T RelationalOperator_lj;     /* '<S363>/Relational Operator' */
  boolean_T FixPtRelationalOperator_p[2];/* '<S355>/FixPt Relational Operator' */
  boolean_T LogicalOperator_gb;        /* '<S349>/Logical Operator' */
  boolean_T Unit_Delay_l;              /* '<S357>/Unit_Delay' */
  boolean_T LogicalOperator1_lp;       /* '<S357>/Logical Operator1' */
  boolean_T F_Driver_braking;          /* '<S104>/Relational Operator2' */
  boolean_T F_Operator_brake_appl;     /* '<S104>/Logical Operator2' */
  boolean_T RelationalOperator5[2];    /* '<S104>/Relational Operator5' */
  boolean_T F_Bendix_2C2_service_brake_pres;/* '<S104>/Logical Operator6' */
  boolean_T F_Bendix_2C2_braking;      /* '<S104>/Relational Operator' */
  boolean_T F_ADAS_brake_appl;         /* '<S104>/Logical Operator7' */
  boolean_T F_ADAS_brake_error;        /* '<S104>/Relational Operator1' */
  boolean_T Unit_Delay_dy;             /* '<S107>/Unit_Delay' */
  boolean_T Unit_Delay1_k;             /* '<S203>/Unit_Delay1' */
  boolean_T LogicalOperator_fc;        /* '<S203>/Logical Operator' */
  boolean_T DataTypeConversion_de;     /* '<S79>/Data Type Conversion' */
  boolean_T RelationalOperator1_cn;    /* '<S211>/Relational Operator1' */
  boolean_T RelationalOperator3_g;     /* '<S211>/Relational Operator3' */
  boolean_T RelationalOperator2_f;     /* '<S211>/Relational Operator2' */
  boolean_T RelationalOperator4_o;     /* '<S211>/Relational Operator4' */
  boolean_T F_Ignition_sw_off_conditions_me;/* '<S211>/Logical Operator' */
  boolean_T F_Ignition_sw_on;          /* '<S211>/Relational Operator' */
  boolean_T DataTypeConversion_l1;     /* '<S283>/Data Type Conversion' */
  boolean_T Unit_Delay1_j;             /* '<S333>/Unit_Delay1' */
  boolean_T LogicalOperator_kh;        /* '<S333>/Logical Operator' */
  boolean_T highRateOfChange;          /* '<S282>/highRateOfChange' */
  boolean_T closeToEdge;               /* '<S282>/closeToEdge' */
  boolean_T JumpNearEdge;              /* '<S282>/JumpNearEdge' */
  boolean_T Uk1_k2;                    /* '<S332>/Delay Input1' */
  boolean_T FixPtRelationalOperator_iv;/* '<S332>/FixPt Relational Operator' */
  boolean_T DataTypeConversion_dz;     /* '<S282>/Data Type Conversion' */
  boolean_T Unit_Delay1_f;             /* '<S334>/Unit_Delay1' */
  boolean_T LogicalOperator_a;         /* '<S334>/Logical Operator' */
  boolean_T Unit_Delay1_de;            /* '<S335>/Unit_Delay1' */
  boolean_T LogicalOperator_nz;        /* '<S335>/Logical Operator' */
  boolean_T RelationalOperator_l5;     /* '<S283>/Relational Operator' */
  boolean_T RelationalOperator_dl;     /* '<S295>/Relational Operator' */
  boolean_T RelationalOperator5_f;     /* '<S298>/Relational Operator5' */
  boolean_T RelationalOperator4_la;    /* '<S298>/Relational Operator4' */
  boolean_T RelationalOperator2_o;     /* '<S298>/Relational Operator2' */
  boolean_T LogicalOperator1_ji;       /* '<S298>/Logical Operator1' */
  boolean_T RelationalOperator1_ie;    /* '<S298>/Relational Operator1' */
  boolean_T RelationalOperator3_p;     /* '<S298>/Relational Operator3' */
  boolean_T LogicalOperator2_o;        /* '<S298>/Logical Operator2' */
  boolean_T LogicalOperator_bs;        /* '<S298>/Logical Operator' */
  boolean_T LogicalOperator3_oi;       /* '<S298>/Logical Operator3' */
  boolean_T LowerRelop1;               /* '<S297>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S297>/UpperRelop' */
  boolean_T DataTypeConversion_dn;     /* '<S278>/Data Type Conversion' */
  boolean_T LowerRelop1_h;             /* '<S323>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S323>/UpperRelop' */
  boolean_T RelationalOperator1_ps;    /* '<S310>/Relational Operator1' */
  boolean_T RelationalOperator_hy;     /* '<S310>/Relational Operator' */
  boolean_T RelationalOperator1_f;     /* '<S318>/Relational Operator1' */
  boolean_T RelationalOperator_l4;     /* '<S318>/Relational Operator' */
  boolean_T RelationalOperator1_gr;    /* '<S308>/Relational Operator1' */
  boolean_T RelationalOperator_o;      /* '<S308>/Relational Operator' */
  boolean_T LowerRelop1_o;             /* '<S324>/LowerRelop1' */
  boolean_T UpperRelop_o;              /* '<S324>/UpperRelop' */
  boolean_T LowerRelop1_l;             /* '<S329>/LowerRelop1' */
  boolean_T UpperRelop_k;              /* '<S329>/UpperRelop' */
  boolean_T LowerRelop1_e;             /* '<S328>/LowerRelop1' */
  boolean_T UpperRelop_fl;             /* '<S328>/UpperRelop' */
  boolean_T LowerRelop1_g;             /* '<S306>/LowerRelop1' */
  boolean_T UpperRelop_a;              /* '<S306>/UpperRelop' */
  boolean_T LowerRelop1_o1;            /* '<S305>/LowerRelop1' */
  boolean_T UpperRelop_p;              /* '<S305>/UpperRelop' */
  boolean_T LowerTest;                 /* '<S288>/Lower Test' */
  boolean_T UpperTest;                 /* '<S288>/Upper Test' */
  boolean_T AND_p;                     /* '<S288>/AND' */
  boolean_T LowerTest_l;               /* '<S293>/Lower Test' */
  boolean_T UpperTest_e;               /* '<S293>/Upper Test' */
  boolean_T AND_jt;                    /* '<S293>/AND' */
  boolean_T RelationalOperator_oq;     /* '<S80>/Relational Operator' */
  boolean_T min_relop_k;               /* '<S359>/min_relop' */
  boolean_T LogicalOperator2_g;        /* '<S368>/Logical Operator2' */
  boolean_T min_relop_cb;              /* '<S387>/min_relop' */
  boolean_T min_relop_f;               /* '<S398>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S342>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S342>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S342>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S343>/Unit_Delay' */
  boolean_T LogicalOperator1_h;        /* '<S343>/Logical Operator1' */
  boolean_T RelationalOperator1_e;     /* '<S340>/Relational Operator1' */
  boolean_T LogicalOperator3_a;        /* '<S341>/Logical Operator3' */
  boolean_T Unit_Delay_ig;             /* '<S341>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S341>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S341>/Logical Operator' */
  boolean_T LogicalOperator2_jq;       /* '<S341>/Logical Operator2' */
  boolean_T min_relop_d;               /* '<S344>/min_relop' */
  boolean_T RelationalOperator1_m;     /* '<S295>/Relational Operator1' */
  boolean_T RelationalOperator1_n;     /* '<S224>/Relational Operator1' */
  boolean_T RelationalOperator_d3;     /* '<S224>/Relational Operator' */
  boolean_T RelationalOperator1_ch;    /* '<S225>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S225>/Relational Operator' */
  boolean_T RelationalOperator1_ln;    /* '<S226>/Relational Operator1' */
  boolean_T RelationalOperator_fd;     /* '<S226>/Relational Operator' */
  boolean_T Unit_Delay1_m;             /* '<S220>/Unit_Delay1' */
  boolean_T f_gpid_reset;              /* '<S220>/Logical Operator' */
  boolean_T RelationalOperator_fl;     /* '<S220>/Relational Operator' */
  boolean_T Unit_Delay_d5;             /* '<S220>/Unit_Delay' */
  boolean_T RelationalOperator1_d3;    /* '<S220>/Relational Operator1' */
  boolean_T Unit_Delay_i0;             /* '<S247>/Unit_Delay' */
  boolean_T LogicalOperator1_o;        /* '<S247>/Logical Operator1' */
  boolean_T Unit_Delay1_dw;            /* '<S267>/Unit_Delay1' */
  boolean_T LogicalOperator_at;        /* '<S267>/Logical Operator' */
  boolean_T Unit_Delay_ne;             /* '<S268>/Unit_Delay' */
  boolean_T LogicalOperator1_kz;       /* '<S268>/Logical Operator1' */
  boolean_T Compare_go;                /* '<S252>/Compare' */
  boolean_T RelationalOperator_a;      /* '<S212>/Relational Operator' */
  boolean_T Compare_pj;                /* '<S251>/Compare' */
  boolean_T min_relop_cbm;             /* '<S270>/min_relop' */
  boolean_T RelationalOperator1_j;     /* '<S273>/Relational Operator1' */
  boolean_T RelationalOperator_p;      /* '<S273>/Relational Operator' */
  boolean_T PID_hold_i_term_f_b;       /* '<S212>/Generic_PID_Governor_3' */
  boolean_T F_Ignition_relay_command_i;/* '<S211>/Relay_control_state_machine' */
  boolean_T F_Inverter_relay_command_p;/* '<S211>/Relay_control_state_machine' */
  boolean_T F_MABX_relay_command_n;    /* '<S211>/Relay_control_state_machine' */
  boolean_T F_Sensor_relay_command_k;  /* '<S211>/Relay_control_state_machine' */
  boolean_T F_Shift_interlock_conditions_me;/* '<S184>/Logical Operator2' */
  boolean_T Unit_Delay_nz;             /* '<S194>/Unit_Delay' */
  boolean_T LogicalOperator1_kv;       /* '<S194>/Logical Operator1' */
  boolean_T min_relop_g;               /* '<S196>/min_relop' */
  boolean_T F_Brake_hold_conditions_met;/* '<S183>/Logical Operator2' */
  boolean_T Unit_Delay_h0;             /* '<S187>/Unit_Delay' */
  boolean_T LogicalOperator1_ou;       /* '<S187>/Logical Operator1' */
  boolean_T min_relop_i;               /* '<S189>/min_relop' */
  boolean_T Unit_Delay_m1;             /* '<S153>/Unit_Delay' */
  boolean_T LogicalOperator1_pf;       /* '<S153>/Logical Operator1' */
  boolean_T Unit_Delay1_jk;            /* '<S173>/Unit_Delay1' */
  boolean_T LogicalOperator_l;         /* '<S173>/Logical Operator' */
  boolean_T Unit_Delay_li;             /* '<S174>/Unit_Delay' */
  boolean_T LogicalOperator1_oy;       /* '<S174>/Logical Operator1' */
  boolean_T Compare_ni;                /* '<S158>/Compare' */
  boolean_T Compare_dl;                /* '<S157>/Compare' */
  boolean_T min_relop_a5;              /* '<S176>/min_relop' */
  boolean_T RelationalOperator1_k;     /* '<S179>/Relational Operator1' */
  boolean_T RelationalOperator_m1;     /* '<S179>/Relational Operator' */
  boolean_T Unit_Delay_nm;             /* '<S115>/Unit_Delay' */
  boolean_T LogicalOperator1_ax;       /* '<S115>/Logical Operator1' */
  boolean_T Unit_Delay1_i;             /* '<S135>/Unit_Delay1' */
  boolean_T LogicalOperator_m;         /* '<S135>/Logical Operator' */
  boolean_T Unit_Delay_nl;             /* '<S136>/Unit_Delay' */
  boolean_T LogicalOperator1_mk;       /* '<S136>/Logical Operator1' */
  boolean_T Compare_aa;                /* '<S120>/Compare' */
  boolean_T Compare_jrp;               /* '<S119>/Compare' */
  boolean_T min_relop_p;               /* '<S138>/min_relop' */
  boolean_T RelationalOperator1_gi;    /* '<S141>/Relational Operator1' */
  boolean_T RelationalOperator_b;      /* '<S141>/Relational Operator' */
  boolean_T Reshape_j[2];              /* '<S60>/Reshape' */
  boolean_T Unit_Delay_mw;             /* '<S60>/Unit_Delay' */
  boolean_T Selector_h;                /* '<S60>/Selector' */
  boolean_T Operator_bg;               /* '<S62>/Operator' */
  boolean_T Reshape_a[2];              /* '<S54>/Reshape' */
  boolean_T Unit_Delay_p1;             /* '<S54>/Unit_Delay' */
  boolean_T Selector_p;                /* '<S54>/Selector' */
  boolean_T Operator_ho;               /* '<S56>/Operator' */
  boolean_T Reshape_n[2];              /* '<S48>/Reshape' */
  boolean_T Unit_Delay_fl;             /* '<S48>/Unit_Delay' */
  boolean_T Selector_i;                /* '<S48>/Selector' */
  boolean_T Operator_ou;               /* '<S50>/Operator' */
  boolean_T Reshape_iq[2];             /* '<S42>/Reshape' */
  boolean_T Unit_Delay_m0;             /* '<S42>/Unit_Delay' */
  boolean_T Selector_g;                /* '<S42>/Selector' */
  boolean_T Operator_dh;               /* '<S44>/Operator' */
  boolean_T Reshape_a5[2];             /* '<S36>/Reshape' */
  boolean_T Unit_Delay_g1;             /* '<S36>/Unit_Delay' */
  boolean_T Selector_b;                /* '<S36>/Selector' */
  boolean_T Operator_bsv;              /* '<S38>/Operator' */
  boolean_T Reshape_g[2];              /* '<S30>/Reshape' */
  boolean_T Unit_Delay_h4;             /* '<S30>/Unit_Delay' */
  boolean_T Selector_d;                /* '<S30>/Selector' */
  boolean_T Operator_f5;               /* '<S32>/Operator' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_e;/* '<S1082>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1081>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1081>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_m;/* '<S1081>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S1081>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_p_T If_Then_Else_b2;/* '<S1021>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_j;/* '<S1020>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_or;/* '<S845>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b;/* '<S840>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S839>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_c;/* '<S770>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_k;/* '<S770>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_c;/* '<S770>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_l;/* '<S770>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_fz;/* '<S788>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S823>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_j;/* '<S823>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_f;/* '<S787>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_br;/* '<S815>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S815>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_de;/* '<S786>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_g;/* '<S807>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S807>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_d;/* '<S785>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_b;/* '<S799>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_a;/* '<S799>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S784>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_p;/* '<S791>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_h;/* '<S791>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S768>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S768>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_o;/* '<S768>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S472>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S396>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S353>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S385>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S351>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S372>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_jh;/* '<S363>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S366>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S357>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S356>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S343>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S335>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S334>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b3;/* '<S333>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o0;/* '<S318>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m0;/* '<S318>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_n_T If_Then_Else_c;/* '<S316>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_m;/* '<S281>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m;/* '<S281>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S310>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S310>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S308>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pe;/* '<S308>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_n_T If_Then_Else_kz;/* '<S301>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_n;/* '<S280>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h3;/* '<S273>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pi;/* '<S273>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_cp;/* '<S268>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k2;/* '<S267>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S244>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S244>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_as;/* '<S219>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_dz;/* '<S226>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_br;/* '<S226>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_kg;/* '<S225>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bo;/* '<S225>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h;/* '<S224>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ct;/* '<S224>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nr;/* '<S228>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_g;/* '<S203>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ep;/* '<S194>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_o5;/* '<S184>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_il;/* '<S184>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nz;/* '<S187>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_mf;/* '<S183>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gj;/* '<S183>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_m_T If_Then_Else_la;/* '<S104>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_gx;/* '<S179>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fo;/* '<S179>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iy;/* '<S174>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bc;/* '<S173>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S150>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S150>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_bq;/* '<S141>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nj;/* '<S141>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bg;/* '<S136>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ly;/* '<S135>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S112>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S112>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_pf;/* '<S90>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iz;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lw;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_oy;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S763>/Unit Delay' */
  real_T UnitDelay_DSTATE_i;           /* '<S762>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE;       /* '<S802>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_d;     /* '<S794>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S818>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S810>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S839>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_g;         /* '<S840>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_n;     /* '<S838>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_j;     /* '<S837>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_e5;    /* '<S826>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_k;           /* '<S409>/Unit Delay' */
  real_T Unit_Delay_1_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_10_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_100_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_101_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_102_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_103_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_104_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_105_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_106_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_107_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_108_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_109_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_11_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_110_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_111_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_112_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_113_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_114_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_115_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_116_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_117_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_118_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_12_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_121_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_122_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_123_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_124_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_125_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_126_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_127_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_13_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_130_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_131_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_132_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_133_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_134_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_135_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_136_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_139_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_14_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_140_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_141_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_142_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_143_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_144_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_15_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_16_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_17_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_19_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_21_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_22_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_23_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_24_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_25_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_26_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_28_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_29_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_35_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_38_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_39_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_4_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_40_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_41_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_42_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_43_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_44_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_49_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_5_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_50_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_51_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_52_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_53_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_54_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_55_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_56_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_57_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_58_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_59_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_6_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_60_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_61_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_62_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_63_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_64_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_65_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_66_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_67_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_68_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_69_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_7_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_70_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_71_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_72_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_73_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_74_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_75_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_76_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_77_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_78_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_79_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_8_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_85_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_86_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_87_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_88_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_89_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_9_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_90_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_91_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_92_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_93_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_94_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_95_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_96_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_97_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_98_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_99_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T UnitDelay_DSTATE_j;           /* '<S754>/Unit Delay' */
  real_T UnitDelay_DSTATE_is;          /* '<S755>/Unit Delay' */
  real_T Unit_Delay_DSTATE;            /* '<S934>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_k;          /* '<S853>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S848>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_d;          /* '<S657>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_i;          /* '<S529>/Unit_Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S401>/Unit Delay1' */
  real_T LongitudnalPosition_DSTATE;   /* '<S402>/LongitudnalPosition' */
  real_T VehHeading_DSTATE;            /* '<S402>/VehHeading' */
  real_T XPosition_DSTATE;             /* '<S402>/XPosition' */
  real_T YPosition_DSTATE;             /* '<S402>/YPosition' */
  real_T UnitDelay1_DSTATE_m;          /* '<S97>/Unit Delay1' */
  real_T Unit_Delay_DSTATE_e;          /* '<S353>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_h;     /* '<S400>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_m;          /* '<S397>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_g;          /* '<S351>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hq;    /* '<S389>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_b;          /* '<S386>/Unit_Delay' */
  real_T DelayInput1_DSTATE[2];        /* '<S348>/Delay Input1' */
  real_T Unit_Delay_DSTATE_bw;         /* '<S366>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S377>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_p;          /* '<S375>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S355>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_ej;    /* '<S361>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S356>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S356>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S356>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S354>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S203>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S202>/UD' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S333>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S334>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_p;         /* '<S335>/Unit_Delay2' */
  real_T UnitDelay_DSTATE_m;           /* '<S295>/Unit Delay' */
  real_T UnitDelay_DSTATE_m0;          /* '<S296>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S296>/Unit Delay1' */
  real_T DelayInput2_DSTATE;           /* '<S314>/Delay Input2' */
  real_T Integrator_DSTATE;            /* '<S313>/Integrator' */
  real_T Filter_DSTATE;                /* '<S313>/Filter' */
  real_T DelayInput_DSTATE;            /* '<S317>/Delay Input' */
  real_T DelayOutput_DSTATE;           /* '<S317>/Delay Output' */
  real_T DelayInput2_DSTATE_a;         /* '<S315>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S307>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE_l;         /* '<S327>/Delay Input2' */
  real_T DelayInput2_DSTATE_o;         /* '<S304>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S80>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_e;           /* '<S80>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S379>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g0;    /* '<S380>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S374>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_ov;    /* '<S346>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a;     /* '<S272>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_m;         /* '<S267>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_fz;         /* '<S222>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_o;          /* '<S184>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_ds;    /* '<S198>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_om;         /* '<S195>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_c;          /* '<S183>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_b;     /* '<S191>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_oj;         /* '<S188>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_eu;         /* '<S146>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g2;    /* '<S178>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_c;         /* '<S173>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_h;          /* '<S145>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_dc;         /* '<S111>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g1;    /* '<S140>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_dy;        /* '<S135>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_i2;         /* '<S110>/Unit_Delay' */
  volatile real_T RateTransition_Buffer0;/* '<S423>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S423>/Rate Transition' */
  real_T TmpRTBAtFlashOutport1_Buffer0;/* synthesized block */
  real_T Subtract_DWORK1;              /* '<S657>/Subtract' */
  real_T TmpRTBAtSignalConversion1Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion3Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion2Inport;/* synthesized block */
  real_T TmpRTBAtrad2deg1Inport1_Buffer0;/* synthesized block */
  real_T TmpRTBAtsignCurveOffsetInport1_;/* synthesized block */
  real_T TmpRTBAtAdd2Inport2_Buffer0;  /* synthesized block */
  real_T PrevY;                        /* '<S301>/Limit Rate Limiter' */
  real_T PrevY_o;                      /* '<S316>/Limit Rate Limiter' */
  real_T TimeFinal;                    /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityInitialLimited;       /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityFinalLimited;         /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationInitialLimited;   /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationFinalLimited;     /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk56;                       /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk12;                       /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T a;                            /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T b;                            /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T c;                            /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Acceleration34;               /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* '<S211>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV;/* '<S211>/Relay_control_state_machine' */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV; /* '<S211>/Relay_control_state_machine' */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* '<S211>/Relay_control_state_machine' */
  real_T MABX_RELAY_ON_DELAY_SECS_APV; /* '<S211>/Relay_control_state_machine' */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV;/* '<S211>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* '<S211>/Relay_control_state_machine' */
  real_T IGN_RELAY_ON_DELAY_SECS_APV;  /* '<S211>/Relay_control_state_machine' */
  void *dsa_tcpip_setup_PWORK;         /* '<S405>/dsa_tcpip_setup' */
  void *TCPIP_Com_PWORK;               /* '<S406>/TCPIP_Com' */
  void* Assertion_slioAccessor;        /* '<S789>/Assertion' */
  void* Assertion_slioAccessor_i;      /* '<S797>/Assertion' */
  void* Assertion_slioAccessor_p;      /* '<S805>/Assertion' */
  void* Assertion_slioAccessor_px;     /* '<S813>/Assertion' */
  void* Assertion_slioAccessor_h;      /* '<S821>/Assertion' */
  void* Assertion_slioAccessor_f;      /* '<S846>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S285>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S290>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S359>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S387>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S398>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S344>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S270>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S196>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S189>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S176>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S138>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S285>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S290>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_a;         /* '<S1056>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_em;        /* '<S1041>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_c;         /* '<S1013>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j1;        /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_128_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_129_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S404>/Heartbeat' */
  int32_T clockTickCounter_k;          /* '<S1083>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S655>/Add' */
  uint32_T Subtract_DWORK1_k;          /* '<S1056>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S1037>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S211>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S405>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S466>/S-Function1' */
  int_T SFunction1_IWORK_l[2];         /* '<S467>/S-Function1' */
  int_T SFunction1_IWORK_lz[2];        /* '<S468>/S-Function1' */
  int_T SFunction1_IWORK_c[2];         /* '<S469>/S-Function1' */
  int_T SFunction1_IWORK_p[2];         /* '<S470>/S-Function1' */
  int_T SFunction1_IWORK_f[2];         /* '<S471>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S415>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S802>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_d;    /* '<S794>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S818>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S810>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_d1;   /* '<S838>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S837>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_k;    /* '<S826>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_mt;        /* '<S865>/Unit Delay1' */
  uint8_T Unit_Delay_138_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_b;    /* '<S848>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_o[17];      /* '<S654>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_b3[39];     /* '<S526>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_aq;   /* '<S400>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ip;   /* '<S389>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S377>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S361>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S379>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gx;   /* '<S380>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S346>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S272>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S198>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S191>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S178>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S140>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_i;      /* '<S761>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ix;       /* '<S749>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_i5;     /* '<S760>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_p;       /* '<S762>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_h;       /* '<S763>/Unit Delay1' */
  boolean_T Unit_Delay_DSTATE_pw;      /* '<S772>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S839>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_m;      /* '<S772>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p;      /* '<S840>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S655>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_h1;      /* '<S655>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_fr;      /* '<S661>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_48_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_83_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_84_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S411>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S865>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S865>/Unit Delay3' */
  boolean_T Unit_Delay_119_DSTATE;     /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_120_DSTATE;     /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_137_DSTATE;     /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_18_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_20_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_27_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_30_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_31_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_32_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_33_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_36_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_37_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_46_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_82_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay2_DSTATE_p1;     /* '<S655>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_d;      /* '<S655>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_iv;      /* '<S662>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S753>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_cq;       /* '<S748>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_c;      /* '<S752>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_n;       /* '<S754>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_pn;      /* '<S755>/Unit Delay1' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_a;       /* '<S1055>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_j5;      /* '<S1017>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_f3;      /* '<S1040>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mr;      /* '<S1012>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jr;      /* '<S844>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jz;      /* '<S845>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_hg;      /* '<S843>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_fv;      /* '<S76>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S98>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_b1;       /* '<S97>/Unit Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S395>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S396>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S384>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S385>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ko;      /* '<S368>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l;       /* '<S357>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eu4;     /* '<S107>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_di;     /* '<S203>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_db;     /* '<S333>/Unit_Delay1' */
  boolean_T DelayInput1_DSTATE_f0;     /* '<S332>/Delay Input1' */
  boolean_T Unit_Delay1_DSTATE_a;      /* '<S334>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p3;     /* '<S335>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_bd;      /* '<S342>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jt;      /* '<S343>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ll;      /* '<S341>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_p1;     /* '<S220>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_lq;      /* '<S220>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_be;      /* '<S247>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_h;      /* '<S267>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_fi;      /* '<S268>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ae;      /* '<S194>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_or;      /* '<S187>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_n;       /* '<S153>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_f;      /* '<S173>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_g4;      /* '<S174>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_omj;     /* '<S115>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_b;      /* '<S135>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_h4;      /* '<S136>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l5;      /* '<S60>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_i5;      /* '<S54>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mq;      /* '<S48>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_h41;     /* '<S42>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_je;      /* '<S36>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_f1;      /* '<S30>/Unit_Delay' */
  volatile int8_T RateTransition_write_buf;/* '<S423>/Rate Transition' */
  volatile int8_T RateTransition_read_buf;/* '<S423>/Rate Transition' */
  volatile int8_T RateTransition_last_buf_wr;/* '<S423>/Rate Transition' */
  int8_T LongitudnalPosition_PrevResetSt;/* '<S402>/LongitudnalPosition' */
  int8_T VehHeading_PrevResetState;    /* '<S402>/VehHeading' */
  int8_T XPosition_PrevResetState;     /* '<S402>/XPosition' */
  int8_T YPosition_PrevResetState;     /* '<S402>/YPosition' */
  int8_T Integrator_PrevResetState;    /* '<S313>/Integrator' */
  int8_T Filter_PrevResetState;        /* '<S313>/Filter' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S307>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_e;/* '<S80>/Discrete-Time Integrator' */
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S865>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S865>/Chart' */
  uint8_T temporalCounter_i1_m;        /* '<S865>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S851>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S851>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S769>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S769>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S769>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S769>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S769>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_b;       /* '<S769>/Health State Machine PWM Sensor 1' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S307>/Discrete-Time Integrator' */
  uint8_T is_active_c12_SUB_L4_Task_10ms_;/* '<S283>/Chart' */
  uint8_T is_c12_SUB_L4_Task_10ms_SUB_STE;/* '<S283>/Chart' */
  uint8_T is_active_c6_SUB_L4_Task_10ms_S;/* '<S211>/Relay_control_state_machine' */
  uint8_T is_c6_SUB_L4_Task_10ms_SUB_STAT;/* '<S211>/Relay_control_state_machine' */
  uint8_T is_POWER_UP_ROUTINE;         /* '<S211>/Relay_control_state_machine' */
  uint8_T is_POWER_DOWN_ROUTINE;       /* '<S211>/Relay_control_state_machine' */
  uint8_T is_active_c19_SUB_L4_Task_10ms_;/* '<S79>/Chart' */
  uint8_T is_c19_SUB_L4_Task_10ms_SUB_STA;/* '<S79>/Chart' */
  boolean_T AlternateMethod;           /* '<S350>/VehicleSpeedSetpointDynamicCalculation' */
  boolean_T Slew_at_event_MODE;        /* '<S750>/Slew_at_event' */
  boolean_T Slew_at_event_MODE_d;      /* '<S283>/Slew_at_event' */
  boolean_T Throttle_controller_gov_MODE;/* '<S79>/Throttle_controller_gov' */
  boolean_T Engine_speed_target_MODE;  /* '<S79>/Engine_speed_target' */
  boolean_T Determine_shift_interlock_brake;/* '<S105>/Determine_shift_interlock_brake_pressure_target' */
  boolean_T Determine_brake_hold_pressure_t;/* '<S105>/Determine_brake_hold_pressure_target' */
  boolean_T Bendix_2C2_vehicle_speed_feedba;/* '<S77>/Bendix_2C2_vehicle_speed_feedback_pressure_controller' */
  boolean_T Bendix_2C2_brake_application_pr;/* '<S77>/Bendix_2C2_brake_application_pressure_feedback_controller' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S244>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S244>/Calculate_D_term' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S150>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S150>/Calculate_D_term' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S112>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S112>/Calculate_D_term' */
} DW_L4_MABX_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1069>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_n;/* '<S1068>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_BOR_M3_C2_Trig_ZCE;/* '<S16>/CAN_TYPE1_BOR_M3_C2' */
  ZCSigState CAN_TYPE1_BOR_M3_C1_Trig_ZCE;/* '<S15>/CAN_TYPE1_BOR_M3_C1' */
  ZCSigState CAN_TYPE1_BOR_M2_C2_Trig_ZCE;/* '<S14>/CAN_TYPE1_BOR_M2_C2' */
  ZCSigState CAN_TYPE1_BOR_M2_C1_Trig_ZCE;/* '<S13>/CAN_TYPE1_BOR_M2_C1' */
  ZCSigState CAN_TYPE1_BOR_M1_C2_Trig_ZCE;/* '<S12>/CAN_TYPE1_BOR_M1_C2' */
  ZCSigState CAN_TYPE1_BOR_M1_C1_Trig_ZCE;/* '<S11>/CAN_TYPE1_BOR_M1_C1' */
} PrevZCX_L4_MABX_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint32_T Width;                /* '<S60>/Width' */
  const uint32_T Width_a;              /* '<S54>/Width' */
  const uint32_T Width_i;              /* '<S48>/Width' */
  const uint32_T Width_iw;             /* '<S42>/Width' */
  const uint32_T Width_g;              /* '<S36>/Width' */
  const uint32_T Width_p;              /* '<S30>/Width' */
} ConstB_L4_MABX_T;

/* Parameters for system: '<S112>/Calculate_D_term' */
struct P_Calculate_D_term_L4_MABX_T_ {
  real_T GPID_d_term_Y0;               /* Expression: 0
                                        * Referenced by: '<S116>/GPID_d_term'
                                        */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S121>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.0001
                                        * Referenced by: '<S121>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S121>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S121>/Unit_Delay2'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S122>/FixPt Unit Delay1'
                                          */
  boolean_T Unit_Delay1_InitialCondition;/* Expression: true
                                          * Referenced by: '<S121>/Unit_Delay1'
                                          */
  boolean_T Constant_Value;            /* Expression: false
                                        * Referenced by: '<S121>/Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S122>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value;         /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S122>/FixPt Constant'
                                        */
};

/* Parameters for system: '<S112>/Calculate_I_term' */
struct P_Calculate_I_term_L4_MABX_T_ {
  real_T GPID_i_sum_error_init_Y0;     /* Expression: 0
                                        * Referenced by: '<S125>/GPID_i_sum_error_init'
                                        */
  real_T GPID_i_term_Y0;               /* Expression: 0
                                        * Referenced by: '<S117>/GPID_i_term'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S128>/FixPt Unit Delay1'
                                          */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S126>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S117>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S129>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S130>/Constant'
                                        */
  boolean_T F_GPID_hold_i_term_Y0;     /* Expression: false
                                        * Referenced by: '<S117>/F_GPID_hold_i_term'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S128>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value;         /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S128>/FixPt Constant'
                                        */
};

/* Parameters for system: '<S983>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S998>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1096>/Constant'
                                        */
  real_T TransferFcnLeadorLag_ICPrevInpu;/* Mask Parameter: TransferFcnLeadorLag_ICPrevInpu
                                          * Referenced by: '<S317>/Delay Input'
                                          */
  real_T TransferFcnLeadorLag_ICPrevOutp;/* Mask Parameter: TransferFcnLeadorLag_ICPrevOutp
                                          * Referenced by: '<S317>/Delay Output'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S202>/UD'
                                          */
  real_T PIDController_LowerSaturationLi;/* Mask Parameter: PIDController_LowerSaturationLi
                                          * Referenced by: '<S313>/Saturate'
                                          */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S313>/Filter Coefficient'
                                        */
  real_T WrapToZero1_Threshold;        /* Mask Parameter: WrapToZero1_Threshold
                                        * Referenced by: '<S943>/FixPt Switch'
                                        */
  real_T PIDController_UpperSaturationLi;/* Mask Parameter: PIDController_UpperSaturationLi
                                          * Referenced by: '<S313>/Saturate'
                                          */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S120>/Constant'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S119>/Constant'
                                        */
  real_T CompareToConstant1_const_m;   /* Mask Parameter: CompareToConstant1_const_m
                                        * Referenced by: '<S158>/Constant'
                                        */
  real_T CompareToConstant_const_c;    /* Mask Parameter: CompareToConstant_const_c
                                        * Referenced by: '<S157>/Constant'
                                        */
  real_T CompareToConstant1_const_i;   /* Mask Parameter: CompareToConstant1_const_i
                                        * Referenced by: '<S252>/Constant'
                                        */
  real_T CompareToConstant_const_d;    /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S251>/Constant'
                                        */
  real_T CompareToConstant_const_a;    /* Mask Parameter: CompareToConstant_const_a
                                        * Referenced by: '<S101>/Constant'
                                        */
  real_T CompareToConstant9_const;     /* Mask Parameter: CompareToConstant9_const
                                        * Referenced by: '<S393>/Constant'
                                        */
  real_T CompareToConstant10_const;    /* Mask Parameter: CompareToConstant10_const
                                        * Referenced by: '<S390>/Constant'
                                        */
  real_T CompareToConstant11_const;    /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S391>/Constant'
                                        */
  real_T CompareToConstant12_const;    /* Mask Parameter: CompareToConstant12_const
                                        * Referenced by: '<S392>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S381>/Constant'
                                        */
  real_T CompareToConstant8_const;     /* Mask Parameter: CompareToConstant8_const
                                        * Referenced by: '<S382>/Constant'
                                        */
  real_T CompareToConstant_const_f;    /* Mask Parameter: CompareToConstant_const_f
                                        * Referenced by: '<S302>/Constant'
                                        */
  real_T CompareToConstant_const_g;    /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S325>/Constant'
                                        */
  real_T CheckStaticLowerBound_min;    /* Mask Parameter: CheckStaticLowerBound_min
                                        * Referenced by: '<S138>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_d;  /* Mask Parameter: CheckStaticLowerBound_min_d
                                        * Referenced by: '<S176>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_i;  /* Mask Parameter: CheckStaticLowerBound_min_i
                                        * Referenced by: '<S189>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_f;  /* Mask Parameter: CheckStaticLowerBound_min_f
                                        * Referenced by: '<S196>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_b;  /* Mask Parameter: CheckStaticLowerBound_min_b
                                        * Referenced by: '<S270>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_n;  /* Mask Parameter: CheckStaticLowerBound_min_n
                                        * Referenced by: '<S344>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_o;  /* Mask Parameter: CheckStaticLowerBound_min_o
                                        * Referenced by: '<S359>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_h;  /* Mask Parameter: CheckStaticLowerBound_min_h
                                        * Referenced by: '<S387>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_nz; /* Mask Parameter: CheckStaticLowerBound_min_nz
                                        * Referenced by: '<S398>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_a;  /* Mask Parameter: CheckStaticLowerBound_min_a
                                        * Referenced by: '<S846>/min_val'
                                        */
  real_T DetectChange1_vinit;          /* Mask Parameter: DetectChange1_vinit
                                        * Referenced by: '<S348>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_n;        /* Mask Parameter: DetectChange1_vinit_n
                                        * Referenced by: '<S355>/Delay Input1'
                                        */
  ENUM_J1939_SWITCH_T CompareToConstant2_const;/* Mask Parameter: CompareToConstant2_const
                                                * Referenced by: '<S215>/Constant'
                                                */
  ENUM_J1939_SWITCH_T CompareToConstant_const_e;/* Mask Parameter: CompareToConstant_const_e
                                                 * Referenced by: '<S213>/Constant'
                                                 */
  ENUM_J1939_SWITCH_T CompareToConstant1_const_j;/* Mask Parameter: CompareToConstant1_const_j
                                                  * Referenced by: '<S214>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant_const_g2;/* Mask Parameter: CompareToConstant_const_g2
                                                   * Referenced by: '<S780>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_d;/* Mask Parameter: CompareToConstant2_const_d
                                                   * Referenced by: '<S781>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_i;/* Mask Parameter: CompareToConstant3_const_i
                                                   * Referenced by: '<S776>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S832>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S831>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_d;/* Mask Parameter: CompareToConstant3_const_d
                                                   * Referenced by: '<S830>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_j2;/* Mask Parameter: CompareToConstant1_const_j2
                                                    * Referenced by: '<S829>/Constant'
                                                    */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_k;/* Mask Parameter: CompareToConstant1_const_k
                                                   * Referenced by: '<S775>/Constant'
                                                   */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_ee;/* Mask Parameter: CompareToConstant_const_ee
                                                             * Referenced by: '<S1023>/Constant'
                                                             */
  real32_T IntervalTest_lowlimit;      /* Mask Parameter: IntervalTest_lowlimit
                                        * Referenced by: '<S288>/Lower Limit'
                                        */
  real32_T IntervalTest_lowlimit_k;    /* Mask Parameter: IntervalTest_lowlimit_k
                                        * Referenced by: '<S293>/Lower Limit'
                                        */
  real32_T IntervalTest_uplimit;       /* Mask Parameter: IntervalTest_uplimit
                                        * Referenced by: '<S288>/Upper Limit'
                                        */
  real32_T IntervalTest_uplimit_e;     /* Mask Parameter: IntervalTest_uplimit_e
                                        * Referenced by: '<S293>/Upper Limit'
                                        */
  uint32_T Repeating_Sequence_Stair_OutVal[8];/* Mask Parameter: Repeating_Sequence_Stair_OutVal
                                               * Referenced by: '<S1055>/Constant'
                                               */
  boolean_T Repeating_Sequence_Stair_OutV_l[2];/* Mask Parameter: Repeating_Sequence_Stair_OutV_l
                                                * Referenced by: '<S30>/Constant'
                                                */
  boolean_T Repeating_Sequence_Stair_OutV_d[2];/* Mask Parameter: Repeating_Sequence_Stair_OutV_d
                                                * Referenced by: '<S36>/Constant'
                                                */
  boolean_T Repeating_Sequence_Stair_OutV_o[2];/* Mask Parameter: Repeating_Sequence_Stair_OutV_o
                                                * Referenced by: '<S42>/Constant'
                                                */
  boolean_T Repeating_Sequence_Stair_OutV_n[2];/* Mask Parameter: Repeating_Sequence_Stair_OutV_n
                                                * Referenced by: '<S48>/Constant'
                                                */
  boolean_T Repeating_Sequence_Stair_OutV_j[2];/* Mask Parameter: Repeating_Sequence_Stair_OutV_j
                                                * Referenced by: '<S54>/Constant'
                                                */
  boolean_T Repeating_Sequence_Stair_OutV_e[2];/* Mask Parameter: Repeating_Sequence_Stair_OutV_e
                                                * Referenced by: '<S60>/Constant'
                                                */
  boolean_T DetectFallNonpositive_vinit;/* Mask Parameter: DetectFallNonpositive_vinit
                                         * Referenced by: '<S98>/Delay Input1'
                                         */
  boolean_T DetectChange_vinit;        /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S332>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                        * Referenced by: '<S761>/Delay Input1'
                                        */
  boolean_T DetectFallNonpositive_vinit_m;/* Mask Parameter: DetectFallNonpositive_vinit_m
                                           * Referenced by: '<S760>/Delay Input1'
                                           */
  boolean_T DetectRisePositive1_vinit; /* Mask Parameter: DetectRisePositive1_vinit
                                        * Referenced by: '<S411>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_f;/* Mask Parameter: DetectRisePositive_vinit_f
                                        * Referenced by: '<S753>/Delay Input1'
                                        */
  boolean_T DetectFallNonpositive_vinit_n;/* Mask Parameter: DetectFallNonpositive_vinit_n
                                           * Referenced by: '<S752>/Delay Input1'
                                           */
  uint8_T Operator_BitMask;            /* Mask Parameter: Operator_BitMask
                                        * Referenced by: '<S872>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S869>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S870>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S871>/Operator'
                                        */
  uint8_T Operator_BitMask_dc;         /* Mask Parameter: Operator_BitMask_dc
                                        * Referenced by: '<S873>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S874>/Operator'
                                        */
  uint8_T Operator_BitMask_ou;         /* Mask Parameter: Operator_BitMask_ou
                                        * Referenced by: '<S880>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S877>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S878>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S879>/Operator'
                                        */
  uint8_T Operator_BitMask_og;         /* Mask Parameter: Operator_BitMask_og
                                        * Referenced by: '<S881>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S882>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S924>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S926>/Operator'
                                        */
  uint8_T Operator_BitMask_kv;         /* Mask Parameter: Operator_BitMask_kv
                                        * Referenced by: '<S927>/Operator'
                                        */
  uint8_T Operator_BitMask_lj;         /* Mask Parameter: Operator_BitMask_lj
                                        * Referenced by: '<S925>/Operator'
                                        */
  uint8_T Operator_BitMask_d2;         /* Mask Parameter: Operator_BitMask_d2
                                        * Referenced by: '<S928>/Operator'
                                        */
  uint8_T Operator_BitMask_er;         /* Mask Parameter: Operator_BitMask_er
                                        * Referenced by: '<S929>/Operator'
                                        */
  uint8_T Operator_BitMask_ci;         /* Mask Parameter: Operator_BitMask_ci
                                        * Referenced by: '<S902>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S907>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S903>/Operator'
                                        */
  uint8_T Operator_BitMask_gt;         /* Mask Parameter: Operator_BitMask_gt
                                        * Referenced by: '<S908>/Operator'
                                        */
  uint8_T Operator_BitMask_hb;         /* Mask Parameter: Operator_BitMask_hb
                                        * Referenced by: '<S909>/Operator'
                                        */
  uint8_T Operator_BitMask_pp;         /* Mask Parameter: Operator_BitMask_pp
                                        * Referenced by: '<S906>/Operator'
                                        */
  uint8_T Operator_BitMask_i5;         /* Mask Parameter: Operator_BitMask_i5
                                        * Referenced by: '<S954>/Operator'
                                        */
  uint8_T Operator_BitMask_co;         /* Mask Parameter: Operator_BitMask_co
                                        * Referenced by: '<S951>/Operator'
                                        */
  uint8_T Operator_BitMask_bi;         /* Mask Parameter: Operator_BitMask_bi
                                        * Referenced by: '<S952>/Operator'
                                        */
  uint8_T Operator_BitMask_dt;         /* Mask Parameter: Operator_BitMask_dt
                                        * Referenced by: '<S953>/Operator'
                                        */
  uint8_T Operator_BitMask_kk;         /* Mask Parameter: Operator_BitMask_kk
                                        * Referenced by: '<S955>/Operator'
                                        */
  uint8_T Operator_BitMask_od;         /* Mask Parameter: Operator_BitMask_od
                                        * Referenced by: '<S956>/Operator'
                                        */
  uint8_T Operator_BitMask_cr;         /* Mask Parameter: Operator_BitMask_cr
                                        * Referenced by: '<S962>/Operator'
                                        */
  uint8_T Operator_BitMask_kf;         /* Mask Parameter: Operator_BitMask_kf
                                        * Referenced by: '<S963>/Operator'
                                        */
  uint8_T Operator_BitMask_am;         /* Mask Parameter: Operator_BitMask_am
                                        * Referenced by: '<S959>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S960>/Operator'
                                        */
  uint8_T Operator_BitMask_b3;         /* Mask Parameter: Operator_BitMask_b3
                                        * Referenced by: '<S961>/Operator'
                                        */
  uint8_T Operator_BitMask_ld;         /* Mask Parameter: Operator_BitMask_ld
                                        * Referenced by: '<S964>/Operator'
                                        */
  uint8_T Operator_BitMask_hp;         /* Mask Parameter: Operator_BitMask_hp
                                        * Referenced by: '<S977>/Operator'
                                        */
  uint8_T Operator_BitMask_cl;         /* Mask Parameter: Operator_BitMask_cl
                                        * Referenced by: '<S973>/Operator'
                                        */
  uint8_T Operator_BitMask_ak;         /* Mask Parameter: Operator_BitMask_ak
                                        * Referenced by: '<S974>/Operator'
                                        */
  uint8_T Operator_BitMask_cz;         /* Mask Parameter: Operator_BitMask_cz
                                        * Referenced by: '<S975>/Operator'
                                        */
  uint8_T Operator_BitMask_c2;         /* Mask Parameter: Operator_BitMask_c2
                                        * Referenced by: '<S976>/Operator'
                                        */
  uint8_T Operator_BitMask_au;         /* Mask Parameter: Operator_BitMask_au
                                        * Referenced by: '<S978>/Operator'
                                        */
  uint8_T Operator_BitMask_go;         /* Mask Parameter: Operator_BitMask_go
                                        * Referenced by: '<S1022>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_ej;         /* Mask Parameter: Operator_BitMask_ej
                                        * Referenced by: '<S1033>/Operator'
                                        */
  uint8_T Operator_BitMask_iv;         /* Mask Parameter: Operator_BitMask_iv
                                        * Referenced by: '<S1028>/Operator'
                                        */
  uint8_T Operator_BitMask_a5;         /* Mask Parameter: Operator_BitMask_a5
                                        * Referenced by: '<S1029>/Operator'
                                        */
  uint8_T Operator_BitMask_cl0;        /* Mask Parameter: Operator_BitMask_cl0
                                        * Referenced by: '<S1030>/Operator'
                                        */
  uint8_T Operator_BitMask_bv;         /* Mask Parameter: Operator_BitMask_bv
                                        * Referenced by: '<S1031>/Operator'
                                        */
  uint8_T Operator_BitMask_jn;         /* Mask Parameter: Operator_BitMask_jn
                                        * Referenced by: '<S1032>/Operator'
                                        */
  uint8_T Operator_BitMask_p2;         /* Mask Parameter: Operator_BitMask_p2
                                        * Referenced by: '<S849>/Operator'
                                        */
  uint8_T Operator_BitMask_hk;         /* Mask Parameter: Operator_BitMask_hk
                                        * Referenced by: '<S850>/Operator'
                                        */
  uint8_T Operator_BitMask_lh;         /* Mask Parameter: Operator_BitMask_lh
                                        * Referenced by: '<S678>/Operator'
                                        */
  uint8_T Operator_BitMask_py;         /* Mask Parameter: Operator_BitMask_py
                                        * Referenced by: '<S677>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S690>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S689>/Operator'
                                        */
  uint8_T Operator_BitMask_i3;         /* Mask Parameter: Operator_BitMask_i3
                                        * Referenced by: '<S691>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_OutV_g[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_g
                                               * Referenced by: '<S1012>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_Out_lc[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_lc
                                               * Referenced by: '<S1040>/Constant'
                                               */
  real_T Constant0_Value;              /* Expression: 0
                                        * Referenced by: '<S97>/Constant0'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S97>/Constant1'
                                        */
  real_T PID_output_Y0;                /* Expression: 0
                                        * Referenced by: '<S102>/PID_output'
                                        */
  real_T BRK_PRESS_DEM_AW_HYSTERESIS_APV;/* Expression: 7
                                          * Referenced by: '<S102>/BRK_PRESS_DEM_AW_HYSTERESIS_APV'
                                          */
  real_T BRK_PRESS_DEM_KD_APV_Value;   /* Expression: 0
                                        * Referenced by: '<S102>/BRK_PRESS_DEM_KD_APV'
                                        */
  real_T BRK_PRESS_DEM_KI_APV_Value;   /* Expression: 0.1
                                        * Referenced by: '<S102>/BRK_PRESS_DEM_KI_APV'
                                        */
  real_T BRK_PRESS_DEM_KP_APV_Value;   /* Expression: 0.05
                                        * Referenced by: '<S102>/BRK_PRESS_DEM_KP_APV'
                                        */
  real_T BRK_PRESS_DEM_T_FILT_CTRL_ERROR;/* Expression: 0.025
                                          * Referenced by: '<S102>/BRK_PRESS_DEM_T_FILT_CTRL_ERROR_APV'
                                          */
  real_T BRK_PRESS_DEM_T_FILT_D_APV_Valu;/* Expression: 0.025
                                          * Referenced by: '<S102>/BRK_PRESS_DEM_T_FILT_D_APV'
                                          */
  real_T CPV_Value;                    /* Expression: 0
                                        * Referenced by: '<S102>/CPV'
                                        */
  real_T CPV3_Value;                   /* Expression: 0
                                        * Referenced by: '<S102>/CPV3'
                                        */
  real_T CPV4_Value;                   /* Expression: 5000
                                        * Referenced by: '<S102>/CPV4'
                                        */
  real_T CPV5_Value;                   /* Expression: 5000
                                        * Referenced by: '<S102>/CPV5'
                                        */
  real_T CPV6_Value;                   /* Expression: 100
                                        * Referenced by: '<S102>/CPV6'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S102>/Gain'
                                        */
  real_T Unit_Delay_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S111>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S140>/FixPt Unit Delay1'
                                          */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S135>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.0001
                                        * Referenced by: '<S135>/Saturation'
                                        */
  real_T Constant1_Value_f;            /* Expression: 1
                                        * Referenced by: '<S135>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S135>/Unit_Delay2'
                                        */
  real_T Unit_Delay_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S110>/Unit_Delay'
                                        */
  real_T PID_output_Y0_p;              /* Expression: 0
                                        * Referenced by: '<S103>/PID_output'
                                        */
  real_T BRK_DECEL_DEM_AW_HYSTERESIS_APV;/* Expression: 12
                                          * Referenced by: '<S103>/BRK_DECEL_DEM_AW_HYSTERESIS_APV'
                                          */
  real_T BRK_DECEL_DEM_SLEW_DEC_APV_Valu;/* Expression: 20
                                          * Referenced by: '<S103>/BRK_DECEL_DEM_SLEW_DEC_APV'
                                          */
  real_T BRK_DECEL_DEM_SLEW_INC_APV_Valu;/* Expression: 20
                                          * Referenced by: '<S103>/BRK_DECEL_DEM_SLEW_INC_APV'
                                          */
  real_T BRK_DECEL_DEM_T_FILT_CTRL_ERROR;/* Expression: 0.025
                                          * Referenced by: '<S103>/BRK_DECEL_DEM_T_FILT_CTRL_ERROR_APV'
                                          */
  real_T BRK_DECEL_DEM_T_FILT_D_APV_Valu;/* Expression: 0.4
                                          * Referenced by: '<S103>/BRK_DECEL_DEM_T_FILT_D_APV'
                                          */
  real_T CPV_Value_i;                  /* Expression: 0
                                        * Referenced by: '<S103>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_f;/* Expression: 0
                                        * Referenced by: '<S146>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_b;/* Expression: 0.0
                                          * Referenced by: '<S178>/FixPt Unit Delay1'
                                          */
  real_T Saturation_UpperSat_o;        /* Expression: Inf
                                        * Referenced by: '<S173>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0.0001
                                        * Referenced by: '<S173>/Saturation'
                                        */
  real_T Constant1_Value_o;            /* Expression: 1
                                        * Referenced by: '<S173>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_b;/* Expression: 0
                                         * Referenced by: '<S173>/Unit_Delay2'
                                         */
  real_T Unit_Delay_InitialCondition_h;/* Expression: 0
                                        * Referenced by: '<S145>/Unit_Delay'
                                        */
  real_T Brake_hold_brake_press_target_k;/* Expression: 0
                                          * Referenced by: '<S183>/Brake_hold_brake_press_target_kpa'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_INC_APV;/* Expression: 30
                                          * Referenced by: '<S183>/BRAKE_PRESS_TARGET_S LEW_INC_APV'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_DEC_APV;/* Expression: 5000
                                          * Referenced by: '<S183>/BRAKE_PRESS_TARGET_SLEW_DEC_APV'
                                          */
  real_T CPV_Value_k;                  /* Expression: 865
                                        * Referenced by: '<S183>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_d;/* Expression: 0
                                        * Referenced by: '<S183>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_p;/* Expression: 0.0
                                          * Referenced by: '<S191>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_k;/* Expression: 0
                                        * Referenced by: '<S188>/Unit_Delay'
                                        */
  real_T Shift_interlock_brake_press_tar;/* Expression: 0
                                          * Referenced by: '<S184>/Shift_interlock_brake_press_target_kpa'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_DEC_A_b;/* Expression: 5000
                                          * Referenced by: '<S184>/BRAKE_PRESS_TARGET_SLEW_DEC_APV'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_INC_A_g;/* Expression: 30
                                          * Referenced by: '<S184>/BRAKE_PRESS_TARGET_SLEW_INC_APV'
                                          */
  real_T CPV_Value_l;                  /* Expression: 865
                                        * Referenced by: '<S184>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_l;/* Expression: 0
                                        * Referenced by: '<S184>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_j;/* Expression: 0.0
                                          * Referenced by: '<S198>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_ha;/* Expression: 0
                                         * Referenced by: '<S195>/Unit_Delay'
                                         */
  real_T Constant2_Value;              /* Expression: 0.01
                                        * Referenced by: '<S79>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S79>/Constant3'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S210>/Out1'
                                        */
  real_T CONVERSION_CONSTANT_CPV_Value;/* Expression: 63360/(pi*60)
                                        * Referenced by: '<S210>/CONVERSION_CONSTANT_CPV'
                                        */
  real_T Constant1_Value_fx;           /* Expression: 3000
                                        * Referenced by: '<S210>/Constant1'
                                        */
  real_T Constant2_Value_m;            /* Expression: 0.01
                                        * Referenced by: '<S210>/Constant2'
                                        */
  real_T KPH_TO_MPH_Gain;              /* Expression: 0.6213712
                                        * Referenced by: '<S210>/KPH_TO_MPH'
                                        */
  real_T REAR_AXLE_RATIO_VALUE_APV_Value;/* Expression: 2.64
                                          * Referenced by: '<S210>/REAR_AXLE_RATIO_VALUE_APV'
                                          */
  real_T TIRE_DIAM_INCHES_APV_Value;   /* Expression: 39.9
                                        * Referenced by: '<S210>/TIRE_DIAM_INCHES_APV'
                                        */
  real_T PID_output_Y0_c;              /* Expression: 0
                                        * Referenced by: '<S212>/PID_output'
                                        */
  real_T PID_output_unlim_Y0;          /* Expression: 0
                                        * Referenced by: '<S212>/PID_output_unlim'
                                        */
  real_T PID_control_error_Y0;         /* Expression: 0
                                        * Referenced by: '<S212>/PID_control_error'
                                        */
  real_T PID_p_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S212>/PID_p_term'
                                        */
  real_T PID_i_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S212>/PID_i_term'
                                        */
  real_T PID_d_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S212>/PID_d_term'
                                        */
  real_T Constant1_Value_c;            /* Expression: 100
                                        * Referenced by: '<S219>/Constant1'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S219>/Constant3'
                                        */
  real_T Constant2_Value_b;            /* Expression: 100
                                        * Referenced by: '<S219>/Constant2'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S219>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 100
                                        * Referenced by: '<S219>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S219>/Constant6'
                                        */
  real_T uDLookupTable_tableData[3];   /* Expression: [0 0.5779 0.5779]
                                        * Referenced by: '<S230>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[3];    /* Expression: [0 1 200]
                                        * Referenced by: '<S230>/1-D Lookup Table'
                                        */
  real_T Veh_Frontal_Area_m2_Value;    /* Expression: 10.382
                                        * Referenced by: '<S223>/Veh_Frontal_Area_m^2'
                                        */
  real_T KPH_TO_MS_Gain;               /* Expression: 0.2777778
                                        * Referenced by: '<S230>/KPH_TO_M//S'
                                        */
  real_T KPA_TO_PA_Gain;               /* Expression: 1000
                                        * Referenced by: '<S230>/KPA_TO_PA'
                                        */
  real_T Constant_Value;               /* Expression: 273.15
                                        * Referenced by: '<S230>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 287.058
                                        * Referenced by: '<S230>/Constant1'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0.5
                                        * Referenced by: '<S230>/Constant2'
                                        */
  real_T Constant2_Value_bc;           /* Expression: pi
                                        * Referenced by: '<S231>/Constant2'
                                        */
  real_T Constant3_Value_n;            /* Expression: 180
                                        * Referenced by: '<S231>/Constant3'
                                        */
  real_T Constant1_Value_a;            /* Expression: 9.807
                                        * Referenced by: '<S231>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 0.005
                                        * Referenced by: '<S234>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0.01
                                        * Referenced by: '<S234>/Constant1'
                                        */
  real_T Constant2_Value_bq;           /* Expression: 0.0095
                                        * Referenced by: '<S234>/Constant2'
                                        */
  real_T KPA_TO_MS_Gain;               /* Expression: 0.27778
                                        * Referenced by: '<S234>/KPA_TO_M//S'
                                        */
  real_T Constant6_Value_g;            /* Expression: 100
                                        * Referenced by: '<S234>/Constant6'
                                        */
  real_T TIRE1_tire_pressure_Value;    /* Expression: 689.4757
                                        * Referenced by: '<S223>/TIRE1_tire_pressure'
                                        */
  real_T Truck166_tire_pressure_Value; /* Expression: 689.4757
                                        * Referenced by: '<S228>/Truck166_tire_pressure'
                                        */
  real_T KPA_TO_BAR_Gain;              /* Expression: 0.01
                                        * Referenced by: '<S234>/KPA_TO_BAR'
                                        */
  real_T Constant4_Value_o;            /* Expression: pi
                                        * Referenced by: '<S232>/Constant4'
                                        */
  real_T Constant5_Value_p;            /* Expression: 180
                                        * Referenced by: '<S232>/Constant5'
                                        */
  real_T Constant3_Value_p;            /* Expression: 9.807
                                        * Referenced by: '<S232>/Constant3'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S228>/Constant'
                                        */
  real_T R_wheel_m_Value;              /* Expression: 0.5
                                        * Referenced by: '<S223>/R_wheel_m'
                                        */
  real_T N_rar_Value;                  /* Expression: 3.25
                                        * Referenced by: '<S223>/N_rar'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 20
                                        * Referenced by: '<S223>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0.1
                                        * Referenced by: '<S223>/Saturation'
                                        */
  real_T eta_Value;                    /* Expression: 0.98
                                        * Referenced by: '<S223>/eta'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 100
                                        * Referenced by: '<S223>/Gain'
                                        */
  real_T ZeroRoadLoadCPV_Value;        /* Expression: 0
                                        * Referenced by: '<S219>/ZeroRoadLoadCPV'
                                        */
  real_T TqDemDt_Value;                /* Expression: 0.01
                                        * Referenced by: '<S212>/TqDemDt'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_o;/* Expression: 0.0
                                          * Referenced by: '<S272>/FixPt Unit Delay1'
                                          */
  real_T TqDemSlewInc_Value;           /* Expression: 3
                                        * Referenced by: '<S212>/TqDemSlewInc'
                                        */
  real_T TqDemSlewDec_Value;           /* Expression: 20
                                        * Referenced by: '<S212>/TqDemSlewDec'
                                        */
  real_T TqDemTFildCtrlErrorSecs_Value;/* Expression: 1
                                        * Referenced by: '<S212>/TqDemTFildCtrlErrorSecs'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: Inf
                                        * Referenced by: '<S267>/Saturation'
                                        */
  real_T Saturation_LowerSat_g5;       /* Expression: 0.0001
                                        * Referenced by: '<S267>/Saturation'
                                        */
  real_T Constant1_Value_ci;           /* Expression: 1
                                        * Referenced by: '<S267>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_j;/* Expression: 0
                                         * Referenced by: '<S267>/Unit_Delay2'
                                         */
  real_T TqDemTFildTSecs_Value;        /* Expression: 0.029
                                        * Referenced by: '<S212>/TqDemTFildTSecs'
                                        */
  real_T TqDemAwHyst_Value;            /* Expression: 7
                                        * Referenced by: '<S212>/TqDemAwHyst'
                                        */
  real_T Unit_Delay_InitialCondition_kg;/* Expression: 0
                                         * Referenced by: '<S222>/Unit_Delay'
                                         */
  real_T TqDemLimMax_Value;            /* Expression: 60
                                        * Referenced by: '<S212>/TqDemLimMax'
                                        */
  real_T TqDemLimMin_Value;            /* Expression: 0
                                        * Referenced by: '<S212>/TqDemLimMin'
                                        */
  real_T SteeringControlNewPGain1_Value;/* Expression: .1
                                         * Referenced by: '<S80>/SteeringControlNewPGain1'
                                         */
  real_T deg2rad_Gain;                 /* Expression: pi/180
                                        * Referenced by: '<S80>/deg2rad'
                                        */
  real_T Constant2_Value_n;            /* Expression: 0
                                        * Referenced by: '<S80>/Constant2'
                                        */
  real_T SteeringControlNewIGain1_Value;/* Expression: .001
                                         * Referenced by: '<S80>/SteeringControlNewIGain1'
                                         */
  real_T Switch_Threshold;             /* Expression: 45
                                        * Referenced by: '<S80>/Switch'
                                        */
  real_T SteeringOverrideVal1_Value;   /* Expression: 0
                                        * Referenced by: '<S80>/SteeringOverrideVal1'
                                        */
  real_T SteeringOverrideVal_Value;    /* Expression: 0
                                        * Referenced by: '<S80>/SteeringOverrideVal'
                                        */
  real_T rad2deg2_Gain;                /* Expression: 180/pi
                                        * Referenced by: '<S80>/rad2deg2'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S295>/Constant'
                                        */
  real_T Constant2_Value_hu;           /* Expression: -1
                                        * Referenced by: '<S295>/Constant2'
                                        */
  real_T Constant3_Value_pw;           /* Expression: 1
                                        * Referenced by: '<S295>/Constant3'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S279>/Constant9'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S298>/Constant'
                                        */
  real_T SpeedLookupTable_tableData[2];/* Expression: [0, 0.18]
                                        * Referenced by: '<S280>/Speed Lookup Table'
                                        */
  real_T SpeedLookupTable_bp01Data[2]; /* Expression: [11, 15]
                                        * Referenced by: '<S280>/Speed Lookup Table'
                                        */
  real_T SpeedLookupTable1_tableData[2];/* Expression: [0.55, 0.56]
                                         * Referenced by: '<S280>/Speed Lookup Table1'
                                         */
  real_T SpeedLookupTable1_bp01Data[2];/* Expression: [11, 15]
                                        * Referenced by: '<S280>/Speed Lookup Table1'
                                        */
  real_T SpeedLookupTable_tableData_c[3];/* Expression: [0.052, 0.05, 0.03]
                                          * Referenced by: '<S301>/Speed Lookup Table'
                                          */
  real_T SpeedLookupTable_bp01Data_f[3];/* Expression: [0, 25,60]
                                         * Referenced by: '<S301>/Speed Lookup Table'
                                         */
  real_T SpeedLookupTable_tableData_k[4];/* Expression: [0.5, 0.8, 1.2, 1.8]
                                          * Referenced by: '<S281>/Speed Lookup Table'
                                          */
  real_T SpeedLookupTable_bp01Data_i[4];/* Expression: [24, 40, 64, 72]
                                         * Referenced by: '<S281>/Speed Lookup Table'
                                         */
  real_T zero1_Value;                  /* Expression: 0
                                        * Referenced by: '<S282>/zero1'
                                        */
  real_T correction_Value;             /* Expression: 0.5
                                        * Referenced by: '<S282>/correction'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S283>/Constant1'
                                        */
  real_T Out_Y0;                       /* Computed Parameter: Out_Y0
                                        * Referenced by: '<S340>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_f;/* Expression: 0.0
                                          * Referenced by: '<S346>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_ah;           /* Expression: 1
                                        * Referenced by: '<S340>/Constant1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 0.5
                                        * Referenced by: '<S378>/Gain'
                                        */
  real_T CPV5_Value_n;                 /* Expression: 0.5
                                        * Referenced by: '<S81>/CPV5'
                                        */
  real_T VEH_JERK_TARGET_APV_Value;    /* Expression: 0.2
                                        * Referenced by: '<S81>/VEH_JERK_TARGET_APV'
                                        */
  real_T CPV4_Value_k;                 /* Expression: 0
                                        * Referenced by: '<S81>/CPV4'
                                        */
  real_T CPV2_Value;                   /* Expression: 0
                                        * Referenced by: '<S81>/CPV2'
                                        */
  real_T VEH_ACCEL_TARGET_APV_Value;   /* Expression: -0.5
                                        * Referenced by: '<S81>/VEH_ACCEL_TARGET_APV'
                                        */
  real_T CPV3_Value_l;                 /* Expression: 0
                                        * Referenced by: '<S81>/CPV3'
                                        */
  real_T CPV1_Value;                   /* Expression: 255
                                        * Referenced by: '<S81>/CPV1'
                                        */
  real_T VSPD_ABS_MAX_APV_Value;       /* Expression: 255
                                        * Referenced by: '<S81>/VSPD_ABS_MAX_APV'
                                        */
  real_T CPV_Value_ia;                 /* Expression: 0
                                        * Referenced by: '<S81>/CPV'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S97>/Unit Delay1'
                                        */
  real_T Constant_Value_hq;            /* Expression: 0
                                        * Referenced by: '<S99>/Constant'
                                        */
  real_T APTC_DESIRED_PEDAL_POSITION_APV;/* Expression: 0
                                          * Referenced by: '<S83>/APTC_DESIRED_PEDAL_POSITION_APV'
                                          */
  real_T APTC_DISABLED_PEDAL_POSITION_AP;/* Expression: 0
                                          * Referenced by: '<S83>/APTC_DISABLED_PEDAL_POSITION_APV'
                                          */
  real_T TmpRTBAtSignalConversion1Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T VSPD_HYST_KPH_APV_Value;      /* Expression: 1
                                        * Referenced by: '<S81>/VSPD_HYST_KPH_APV'
                                        */
  real_T Saturation9_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S81>/Saturation9'
                                        */
  real_T Saturation9_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S81>/Saturation9'
                                        */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_APV_;/* Expression: 2
                                          * Referenced by: '<S81>/VSPD_BRAKE_STOP_THRESH_KPH_APV'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S81>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S81>/Saturation1'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S205>/Constant'
                                        */
  real_T Constant_Value_il;            /* Expression: 0
                                        * Referenced by: '<S216>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S217>/Constant'
                                        */
  real_T APPTqPercentMax_Value;        /* Expression: 100
                                        * Referenced by: '<S84>/APPTqPercentMax'
                                        */
  real_T APPTqPercentMin_Value;        /* Expression: 0
                                        * Referenced by: '<S84>/APPTqPercentMin'
                                        */
  real_T Constant1_Value_fg;           /* Expression: 100
                                        * Referenced by: '<S84>/Constant1'
                                        */
  real_T EngRefTqLimHigh_Value;        /* Expression: 10000
                                        * Referenced by: '<S84>/EngRefTqLimHigh'
                                        */
  real_T EngRefTqLimLow_Value;         /* Expression: 1
                                        * Referenced by: '<S84>/EngRefTqLimLow'
                                        */
  real_T FrictionTrqAtRefTrqSpeed_Value;/* Expression: 210
                                         * Referenced by: '<S84>/FrictionTrqAtRefTrqSpeed'
                                         */
  real_T Gain4_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S104>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S104>/Gain5'
                                        */
  real_T BRAKE_APPL_THRESHOLD_KPA_APV_Va;/* Expression: 16
                                          * Referenced by: '<S104>/BRAKE_APPL_THRESHOLD_KPA_APV'
                                          */
  real_T SPN904_ZERO_SPD_CPV_Value;    /* Expression: 0
                                        * Referenced by: '<S108>/SPN904_ZERO_SPD_CPV'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 0.5
                                        * Referenced by: '<S105>/Gain'
                                        */
  real_T Constant_Value_ol;            /* Expression: 0
                                        * Referenced by: '<S206>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S104>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S104>/Gain2'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 0.5
                                        * Referenced by: '<S106>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S104>/Gain3'
                                        */
  real_T Gain5_Gain_l;                 /* Expression: 100
                                        * Referenced by: '<S106>/Gain5'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S106>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S106>/Saturation3'
                                        */
  real_T Unit_Delay_InitialCondition_i;/* Expression: 0
                                        * Referenced by: '<S353>/Unit_Delay'
                                        */
  real_T STABILITY_ACTIVE_VSPD_TARGET_AP;/* Expression: 0
                                          * Referenced by: '<S353>/STABILITY_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_n;            /* Expression: 255
                                        * Referenced by: '<S353>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_l;/* Expression: 0.0
                                          * Referenced by: '<S400>/FixPt Unit Delay1'
                                          */
  real_T STABILITY_CTRL_SLEW_INC_APV_Val;/* Expression: 3
                                          * Referenced by: '<S353>/STABILITY_CTRL_SLEW_INC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_hae;/* Expression: 0
                                          * Referenced by: '<S397>/Unit_Delay'
                                          */
  real_T STABILITY_CTRL_SLEW_DEC_APV_Val;/* Expression: 5
                                          * Referenced by: '<S353>/STABILITY_CTRL_SLEW_DEC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_fb;/* Expression: 0
                                         * Referenced by: '<S351>/Unit_Delay'
                                         */
  real_T FCW_ACTIVE_VSPD_TARGET_APV_Valu;/* Expression: 0
                                          * Referenced by: '<S351>/FCW_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_b;            /* Expression: 255
                                        * Referenced by: '<S351>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_d;/* Expression: 0.0
                                          * Referenced by: '<S389>/FixPt Unit Delay1'
                                          */
  real_T FCW_CTRL_SLEW_INC_APV_Value;  /* Expression: 1
                                        * Referenced by: '<S351>/FCW_CTRL_SLEW_INC_APV'
                                        */
  real_T Unit_Delay_InitialCondition_c;/* Expression: 0
                                        * Referenced by: '<S386>/Unit_Delay'
                                        */
  real_T FCW_CTRL_SLEW_DEC_APV_Value;  /* Expression: 5000
                                        * Referenced by: '<S351>/FCW_CTRL_SLEW_DEC_APV'
                                        */
  real_T TmpRTBAtSignalConversion3Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S347>/Constant'
                                        */
  real_T TmpRTBAtSignalConversion2Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation5_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S350>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S350>/Saturation5'
                                        */
  real_T MIN_VSPD_SIGMOID_INITIAL_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S350>/MIN_VSPD_SIGMOID_INITIAL_KPH_APV'
                                          */
  real_T Gain1_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S350>/Gain1'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S350>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S350>/Saturation4'
                                        */
  real_T MIN_VSPD_SIGMOID_FINAL_KPH_APV_;/* Expression: 0
                                          * Referenced by: '<S350>/MIN_VSPD_SIGMOID_FINAL_KPH_APV'
                                          */
  real_T Gain2_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S350>/Gain2'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S350>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S350>/Saturation6'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S350>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S350>/Saturation7'
                                        */
  real_T VEH_JERK_INITIAL_APV_Value;   /* Expression: 0.4
                                        * Referenced by: '<S81>/VEH_JERK_INITIAL_APV'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S350>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: 0.001
                                        * Referenced by: '<S350>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S350>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0.001
                                        * Referenced by: '<S350>/Saturation2'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: 3.6
                                        * Referenced by: '<S350>/Gain3'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S367>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition_e;/* Expression: 0
                                        * Referenced by: '<S366>/Unit_Delay'
                                        */
  real_T MIN_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S362>/MIN_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T MAX_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S362>/MAX_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T ACCEL_RATE_ABS_MAX_THRESHOLD_MS;/* Expression: 5
                                          * Referenced by: '<S362>/ACCEL_RATE_ABS_MAX_THRESHOLD_MS2_APV'
                                          */
  real_T ACCEL_RATE_ABS_MIN_THRESHOLD_MS;/* Expression: -5
                                          * Referenced by: '<S362>/ACCEL_RATE_ABS_MIN_THRESHOLD_MS2_APV'
                                          */
  real_T JERK_RATE_ABS_MAX_THRESHOLD_MS3;/* Expression: 5
                                          * Referenced by: '<S362>/JERK_RATE_ABS_MAX_THRESHOLD_MS3_APV'
                                          */
  real_T JERK_RATE_ABS_MIN_THRESHOLD_MS3;/* Expression: -5
                                          * Referenced by: '<S362>/JERK_RATE_ABS_MIN_THRESHOLD_MS3_APV'
                                          */
  real_T MAX_DISTANCE_DELTA_THRESHOLD_M_;/* Expression: 0.5
                                          * Referenced by: '<S362>/MAX_DISTANCE_DELTA_THRESHOLD_M_APV'
                                          */
  real_T CPV1_Value_i;                 /* Expression: 0.1
                                        * Referenced by: '<S363>/CPV1'
                                        */
  real_T CPV_Value_h;                  /* Expression: 0
                                        * Referenced by: '<S372>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_h;/* Expression: 0.0
                                          * Referenced by: '<S377>/FixPt Unit Delay1'
                                          */
  real_T CPV1_Value_e;                 /* Expression: 1
                                        * Referenced by: '<S371>/CPV1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S363>/Gain1'
                                        */
  real_T Unit_Delay_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S375>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_m;/* Expression: 0.0
                                          * Referenced by: '<S361>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_1_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S356>/Unit_Delay'
                                        */
  real_T Unit_Delay_2_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S356>/Unit_Delay'
                                        */
  real_T Unit_Delay_3_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S356>/Unit_Delay'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 1/3.6
                                        * Referenced by: '<S356>/Gain2'
                                        */
  real_T Saturation4_UpperSat_a;       /* Expression: 255
                                        * Referenced by: '<S356>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_e;       /* Expression: 0.001
                                        * Referenced by: '<S356>/Saturation4'
                                        */
  real_T Unit_Delay_InitialCondition_e2;/* Expression: 0
                                         * Referenced by: '<S354>/Unit_Delay'
                                         */
  real_T Saturation1_UpperSat_j;       /* Expression: Inf
                                        * Referenced by: '<S356>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0.001
                                        * Referenced by: '<S356>/Saturation1'
                                        */
  real_T Saturation8_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S81>/Saturation8'
                                        */
  real_T Saturation8_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S81>/Saturation8'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 100
                                        * Referenced by: '<S106>/Gain1'
                                        */
  real_T Saturation1_UpperSat_l;       /* Expression: 100
                                        * Referenced by: '<S106>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: 0
                                        * Referenced by: '<S106>/Saturation1'
                                        */
  real_T ACCEL_LIM_MS2_APV_Value;      /* Expression: -5
                                        * Referenced by: '<S81>/ACCEL_LIM_MS2_APV'
                                        */
  real_T Saturation2_UpperSat_a;       /* Expression: 15.562
                                        * Referenced by: '<S81>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_l;       /* Expression: -15.562
                                        * Referenced by: '<S81>/Saturation2'
                                        */
  real_T Gain2_Gain_b;                 /* Expression: 100
                                        * Referenced by: '<S106>/Gain2'
                                        */
  real_T Saturation2_UpperSat_b;       /* Expression: 100
                                        * Referenced by: '<S106>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_o;       /* Expression: 0
                                        * Referenced by: '<S106>/Saturation2'
                                        */
  real_T BENDIX_2C2_BRAKE_APPL_THRESHOLD;/* Expression: 16
                                          * Referenced by: '<S104>/BENDIX_2C2_BRAKE_APPL_THRESHOLD_KPA_APV'
                                          */
  real_T Saturation4_UpperSat_f;       /* Expression: 0
                                        * Referenced by: '<S106>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_a;       /* Expression: -15.687
                                        * Referenced by: '<S106>/Saturation4'
                                        */
  real_T Constant10_Value;             /* Expression: 0.01
                                        * Referenced by: '<S107>/Constant10'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 0.5
                                        * Referenced by: '<S107>/Gain'
                                        */
  real_T VSPD_CAN_HRW_0B_FILT_T_APV_Valu;/* Expression: 0.2
                                          * Referenced by: '<S107>/VSPD_CAN_HRW_0B_FILT_T_APV'
                                          */
  real_T Saturation_UpperSat_l;        /* Expression: Inf
                                        * Referenced by: '<S203>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 0.0001
                                        * Referenced by: '<S203>/Saturation'
                                        */
  real_T Constant1_Value_od;           /* Expression: 1
                                        * Referenced by: '<S203>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_a;/* Expression: 0
                                         * Referenced by: '<S203>/Unit_Delay2'
                                         */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S202>/TSamp'
                                        */
  real_T Gain_Gain_no;                 /* Expression: 0.01
                                        * Referenced by: '<S77>/Gain'
                                        */
  real_T CPV1_Value_n;                 /* Expression: 0
                                        * Referenced by: '<S211>/CPV1'
                                        */
  real_T CPV2_Value_h;                 /* Expression: 0
                                        * Referenced by: '<S211>/CPV2'
                                        */
  real_T CPV3_Value_n;                 /* Expression: 0
                                        * Referenced by: '<S211>/CPV3'
                                        */
  real_T CPV5_Value_g;                 /* Expression: 1
                                        * Referenced by: '<S211>/CPV5'
                                        */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV_Va;/* Expression: 0.2
                                          * Referenced by: '<S211>/IGN_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T IGN_RELAY_ON_DELAY_SECS_APV_Val;/* Expression: 0.2
                                          * Referenced by: '<S211>/IGN_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T IGN_SW_VOLTAGE_THRESHOLD_APV_Va;/* Expression: 6
                                          * Referenced by: '<S211>/IGN_SW_VOLTAGE_THRESHOLD_APV'
                                          */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* Expression: 0
                                          * Referenced by: '<S211>/INVERTER_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* Expression: 0
                                          * Referenced by: '<S211>/INVERTER_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV_V;/* Expression: 0
                                          * Referenced by: '<S211>/MABX_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T MABX_RELAY_ON_DELAY_SECS_APV_Va;/* Expression: 0
                                          * Referenced by: '<S211>/MABX_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV_;/* Expression: 0
                                          * Referenced by: '<S211>/SENSOR_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* Expression: 0
                                          * Referenced by: '<S211>/SENSOR_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S80>/zero'
                                        */
  real_T CurveBasedSpeedSetpoint_tableDa[5];/* Expression: [25 30 35 30 25]
                                             * Referenced by: '<S79>/CurveBasedSpeedSetpoint'
                                             */
  real_T CurveBasedSpeedSetpoint_bp01Dat[5];/* Expression: [-.25,-.1 0 .1 .25]
                                             * Referenced by: '<S79>/CurveBasedSpeedSetpoint'
                                             */
  real_T uDLookupTable1_tableData[17]; /* Expression: [-46
                                          -39.5
                                          -33.5
                                          -27
                                          -21.5
                                          -16
                                          -10
                                          -4.5
                                          0
                                          5.5
                                          11
                                          16
                                          21.5
                                          26
                                          31
                                          33
                                          33
                                          ]
                                        * Referenced by: '<S80>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[17];  /* Expression: [-800
                                          -700
                                          -600
                                          -500
                                          -400
                                          -300
                                          -200
                                          -100
                                          0
                                          100
                                          200
                                          300
                                          400
                                          500
                                          600
                                          700
                                          800
                                          ]
                                        * Referenced by: '<S80>/1-D Lookup Table1'
                                        */
  real_T Constant19_Value;             /* Expression: 240
                                        * Referenced by: '<S279>/Constant19'
                                        */
  real_T IV_Value;                     /* Expression: 0
                                        * Referenced by: '<S285>/IV'
                                        */
  real_T Constant1_Value_i;            /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S277>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.1
                                        * Referenced by: '<S277>/Constant'
                                        */
  real_T timeConstant1_Value;          /* Expression: .01
                                        * Referenced by: '<S282>/timeConstant1'
                                        */
  real_T timeConstant_Value;           /* Expression: 1.0
                                        * Referenced by: '<S282>/timeConstant'
                                        */
  real_T Saturation_UpperSat_o1;       /* Expression: Inf
                                        * Referenced by: '<S333>/Saturation'
                                        */
  real_T Saturation_LowerSat_p2;       /* Expression: 0.0001
                                        * Referenced by: '<S333>/Saturation'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S333>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S333>/Unit_Delay2'
                                         */
  real_T rateOfChangeThreshold_Value;  /* Expression: 5.75
                                        * Referenced by: '<S282>/rateOfChangeThreshold'
                                        */
  real_T closeToLaneEdgeThreshold_Value;/* Expression: 4.0
                                         * Referenced by: '<S282>/closeToLaneEdgeThreshold'
                                         */
  real_T zero2_Value;                  /* Expression: 0
                                        * Referenced by: '<S282>/zero2'
                                        */
  real_T timeConstant3_Value;          /* Expression: .01
                                        * Referenced by: '<S282>/timeConstant3'
                                        */
  real_T timeConstant2_Value;          /* Expression: 3
                                        * Referenced by: '<S282>/timeConstant2'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: Inf
                                        * Referenced by: '<S334>/Saturation'
                                        */
  real_T Saturation_LowerSat_ph;       /* Expression: 0.0001
                                        * Referenced by: '<S334>/Saturation'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S334>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ji;/* Expression: 0
                                          * Referenced by: '<S334>/Unit_Delay2'
                                          */
  real_T timeConstant5_Value;          /* Expression: .01
                                        * Referenced by: '<S282>/timeConstant5'
                                        */
  real_T timeConstant4_Value;          /* Expression: .5
                                        * Referenced by: '<S282>/timeConstant4'
                                        */
  real_T Saturation_UpperSat_ok;       /* Expression: Inf
                                        * Referenced by: '<S335>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0.0001
                                        * Referenced by: '<S335>/Saturation'
                                        */
  real_T Constant1_Value_oi;           /* Expression: 1
                                        * Referenced by: '<S335>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ap;/* Expression: 0
                                          * Referenced by: '<S335>/Unit_Delay2'
                                          */
  real_T Constant3_Value_j;            /* Expression: 2
                                        * Referenced by: '<S283>/Constant3'
                                        */
  real_T Constant4_Value_bq;           /* Expression: -2
                                        * Referenced by: '<S283>/Constant4'
                                        */
  real_T Constant2_Value_p;            /* Expression: .01
                                        * Referenced by: '<S283>/Constant2'
                                        */
  real_T enable_Value;                 /* Expression: 1
                                        * Referenced by: '<S283>/enable'
                                        */
  real_T enableSlew_Value;             /* Expression: 1
                                        * Referenced by: '<S283>/enableSlew'
                                        */
  real_T sign_Gain;                    /* Expression: -1
                                        * Referenced by: '<S80>/sign'
                                        */
  real_T SteeringControlPGainErrorBased_[10];/* Expression: [100 250 300 400 500 500 400 400 400 200]
                                              * Referenced by: '<S80>/SteeringControlPGainErrorBased'
                                              */
  real_T SteeringControlPGainErrorBase_n[10];/* Expression: [0 .005 .01 .02 .035 .05 .1 .2 .3 .5]
                                              * Referenced by: '<S80>/SteeringControlPGainErrorBased'
                                              */
  real_T SteeringControlPGainSpeedFactor[9];/* Expression: [.5 .5 .43 .38 .3 .2 .2 .2 .2]
                                             * Referenced by: '<S80>/SteeringControlPGainSpeedFactor'
                                             */
  real_T SteeringControlPGainSpeedFact_i[9];/* Expression: [10 20 30 40 50 60 70 80 90]
                                             * Referenced by: '<S80>/SteeringControlPGainSpeedFactor'
                                             */
  real_T Gain_Gain_m;                  /* Expression: -.2
                                        * Referenced by: '<S80>/Gain'
                                        */
  real_T Constant21_Value;             /* Expression: .01
                                        * Referenced by: '<S279>/Constant21'
                                        */
  real_T SteeringControlIntGain_Value; /* Expression: 20
                                        * Referenced by: '<S279>/SteeringControlIntGain'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S295>/Unit Delay'
                                        */
  real_T Constant20_Value;             /* Expression: -240
                                        * Referenced by: '<S279>/Constant20'
                                        */
  real_T Constant5_Value_o;            /* Expression: 2
                                        * Referenced by: '<S298>/Constant5'
                                        */
  real_T Constant4_Value_j;            /* Expression: -1
                                        * Referenced by: '<S298>/Constant4'
                                        */
  real_T Constant2_Value_g;            /* Expression: -1
                                        * Referenced by: '<S298>/Constant2'
                                        */
  real_T Constant1_Value_ly;           /* Expression: 1
                                        * Referenced by: '<S298>/Constant1'
                                        */
  real_T Constant3_Value_g;            /* Expression: 1
                                        * Referenced by: '<S298>/Constant3'
                                        */
  real_T UnitDelay_InitialCondition_g; /* Expression: 0
                                        * Referenced by: '<S296>/Unit Delay'
                                        */
  real_T SteeringControlDGain_Value;   /* Expression: .01
                                        * Referenced by: '<S279>/SteeringControlDGain'
                                        */
  real_T UnitDelay1_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S296>/Unit Delay1'
                                        */
  real_T TmpRTBAtrad2deg1Inport1_Initial;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T rad2deg1_Gain;                /* Expression: 180/pi
                                        * Referenced by: '<S80>/rad2deg1'
                                        */
  real_T steeringOffset_Value;         /* Expression: 0
                                        * Referenced by: '<S80>/steeringOffset'
                                        */
  real_T uDLookupTable_tableData_b[9]; /* Expression: [.1 .5 .9 1 1 1 .9 .8 .7]
                                        * Referenced by: '<S284>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_k[9];  /* Expression: [0 5 10 15 25 35 45 55 65]
                                        * Referenced by: '<S284>/1-D Lookup Table'
                                        */
  real_T stanleySteeringControlGain_Valu;/* Expression: double(350)
                                          * Referenced by: '<S284>/stanleySteeringControlGain'
                                          */
  real_T IV_Value_o;                   /* Expression: 0
                                        * Referenced by: '<S290>/IV'
                                        */
  real_T Step_Time;                    /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S278>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 1
                                        * Referenced by: '<S278>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 0
                                        * Referenced by: '<S278>/Step'
                                        */
  real_T Constant1_Value_iy;           /* Expression: 0.01
                                        * Referenced by: '<S278>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: 2.0
                                        * Referenced by: '<S278>/Constant'
                                        */
  real_T TmpRTBAtsignCurveOffsetInport1_;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T signCurveOffset_Gain;         /* Expression: -1/1000
                                        * Referenced by: '<S80>/signCurveOffset'
                                        */
  real_T usePIDyForStanley_Value;      /* Expression: 0
                                        * Referenced by: '<S80>/usePIDyForStanley'
                                        */
  real_T mm2m_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S80>/mm2m'
                                        */
  real_T sign3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S80>/sign3'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 255
                                        * Referenced by: '<S284>/Saturation'
                                        */
  real_T Saturation_LowerSat_bq;       /* Expression: 7.5
                                        * Referenced by: '<S284>/Saturation'
                                        */
  real_T kph2mps_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S284>/kph2mps_'
                                        */
  real_T deg2rad1_Gain;                /* Expression: pi/180
                                        * Referenced by: '<S80>/deg2rad1'
                                        */
  real_T TmpRTBAtAdd2Inport2_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T desHeadingWeight_Gain;        /* Expression: 0
                                        * Referenced by: '<S284>/desHeadingWeight'
                                        */
  real_T SaturationSpeedLookup_tableData[6];/* Expression: [1,0.9,0.8,0.5,0.2,0.01]
                                             * Referenced by: '<S316>/Saturation Speed Lookup'
                                             */
  real_T SaturationSpeedLookup_bp01Data[6];/* Expression: [10,20,30,50,70,100]
                                            * Referenced by: '<S316>/Saturation Speed Lookup'
                                            */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S327>/sample time'
                                        */
  real_T sampletime_WtEt_j;            /* Computed Parameter: sampletime_WtEt_j
                                        * Referenced by: '<S314>/sample time'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S314>/Delay Input2'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S281>/Zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S313>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S313>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S313>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S313>/Filter'
                                        */
  real_T uDLookupTable_tableData_d[72];/* Expression: [-46
                                          -44.5
                                          -43
                                          -42
                                          -40
                                          -39
                                          -37.5
                                          -36.5
                                          -35
                                          -34
                                          -33
                                          -31.5
                                          -30.5
                                          -29
                                          -28
                                          -26.5
                                          -25.5
                                          -24.5
                                          -23.5
                                          -22
                                          -21
                                          -20
                                          -19
                                          -17.5
                                          -16.5
                                          -15.5
                                          -14
                                          -13
                                          -12
                                          -11
                                          -10
                                          -8.5
                                          -7.5
                                          -6.5
                                          -5
                                          -4
                                          -3
                                          -2
                                          -1
                                          0
                                          1
                                          3
                                          4
                                          5
                                          6
                                          7
                                          8
                                          9
                                          10
                                          11
                                          12
                                          13
                                          14
                                          15
                                          16
                                          17
                                          18.5
                                          19.5
                                          20.5
                                          21.5
                                          23.5
                                          24.5
                                          25.5
                                          26.5
                                          27.5
                                          28.5
                                          29
                                          30
                                          31
                                          31.5
                                          32.5
                                          33]
                                        * Referenced by: '<S281>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_d[72]; /* Expression: [-800.0200195
                                          -780.0289917
                                          -760.0339966
                                          -740
                                          -720
                                          -700.0040283
                                          -680
                                          -660.0139771
                                          -640.0189819
                                          -620.0239868
                                          -600.0200195
                                          -580.0339966
                                          -560.0390015
                                          -540
                                          -520.0040283
                                          -500.0090027
                                          -480.0140076
                                          -460.0190125
                                          -440.0239868
                                          -420.019989
                                          -400.0339966
                                          -380.0390015
                                          -360
                                          -340.0039978
                                          -320.0090027
                                          -300.0140076
                                          -280.0190125
                                          -260.0239868
                                          -240.029007
                                          -220.0339966
                                          -200.0390015
                                          -180
                                          -160.0039978
                                          -140.0090027
                                          -120.0139999
                                          -100.0189972
                                          -80.02400208
                                          -60.02899933
                                          -40.0340004
                                          0.52700001
                                          29.96999931
                                          50.00899887
                                          69.95999908
                                          89.94999695
                                          109.9950027
                                          129.9900055
                                          149.9850006
                                          170.0240021
                                          189.9750061
                                          209.9700012
                                          229.9649963
                                          249.9600067
                                          270
                                          289.9949951
                                          309.9899902
                                          329.9849854
                                          349.980011
                                          369.9750061
                                          390.0140076
                                          410.0090027
                                          450
                                          470.0299988
                                          489.9899902
                                          509.9849854
                                          529.9799805
                                          549.9749756
                                          569.9699707
                                          589.9650269
                                          610.2199707
                                          630
                                          650.25
                                          670]
                                        * Referenced by: '<S281>/1-D Lookup Table'
                                        */
  real_T deg2rad_Gain_l;               /* Expression: pi/180
                                        * Referenced by: '<S281>/deg2rad'
                                        */
  real_T invert_Gain;                  /* Expression: -1
                                        * Referenced by: '<S281>/invert'
                                        */
  real_T sampletime_WtEt_p;            /* Computed Parameter: sampletime_WtEt_p
                                        * Referenced by: '<S315>/sample time'
                                        */
  real_T FeedforwardGain_Gain;         /* Expression: 5.7
                                        * Referenced by: '<S281>/FeedforwardGain'
                                        */
  real_T DelayInput2_InitialCondition_m;/* Expression: 0
                                         * Referenced by: '<S315>/Delay Input2'
                                         */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S307>/Discrete-Time Integrator'
                                         */
  real_T DelayInput2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S327>/Delay Input2'
                                         */
  real_T Gain3_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S316>/Gain3'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S316>/Gain1'
                                        */
  real_T SpeedSaturation_UpperSat;     /* Expression: 255
                                        * Referenced by: '<S280>/Speed Saturation'
                                        */
  real_T SpeedSaturation_LowerSat;     /* Expression: 7.5
                                        * Referenced by: '<S280>/Speed Saturation'
                                        */
  real_T SaturationSpeedLookup_tableDa_p[6];/* Expression: [1,0.9,0.8,0.5,0.2,0.01]
                                             * Referenced by: '<S301>/Saturation Speed Lookup'
                                             */
  real_T SaturationSpeedLookup_bp01Dat_h[6];/* Expression: [10,20,30,50,70,100]
                                             * Referenced by: '<S301>/Saturation Speed Lookup'
                                             */
  real_T sampletime_WtEt_e;            /* Computed Parameter: sampletime_WtEt_e
                                        * Referenced by: '<S304>/sample time'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S280>/km//h to m//s'
                                        */
  real_T uDLookupTable_tableData_k[72];/* Expression: [-46
                                          -44.5
                                          -43
                                          -42
                                          -40
                                          -39
                                          -37.5
                                          -36.5
                                          -35
                                          -34
                                          -33
                                          -31.5
                                          -30.5
                                          -29
                                          -28
                                          -26.5
                                          -25.5
                                          -24.5
                                          -23.5
                                          -22
                                          -21
                                          -20
                                          -19
                                          -17.5
                                          -16.5
                                          -15.5
                                          -14
                                          -13
                                          -12
                                          -11
                                          -10
                                          -8.5
                                          -7.5
                                          -6.5
                                          -5
                                          -4
                                          -3
                                          -2
                                          -1
                                          0
                                          1
                                          3
                                          4
                                          5
                                          6
                                          7
                                          8
                                          9
                                          10
                                          11
                                          12
                                          13
                                          14
                                          15
                                          16
                                          17
                                          18.5
                                          19.5
                                          20.5
                                          21.5
                                          23.5
                                          24.5
                                          25.5
                                          26.5
                                          27.5
                                          28.5
                                          29
                                          30
                                          31
                                          31.5
                                          32.5
                                          33]
                                        * Referenced by: '<S280>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_kh[72];/* Expression: [-800.0200195
                                          -780.0289917
                                          -760.0339966
                                          -740
                                          -720
                                          -700.0040283
                                          -680
                                          -660.0139771
                                          -640.0189819
                                          -620.0239868
                                          -600.0200195
                                          -580.0339966
                                          -560.0390015
                                          -540
                                          -520.0040283
                                          -500.0090027
                                          -480.0140076
                                          -460.0190125
                                          -440.0239868
                                          -420.019989
                                          -400.0339966
                                          -380.0390015
                                          -360
                                          -340.0039978
                                          -320.0090027
                                          -300.0140076
                                          -280.0190125
                                          -260.0239868
                                          -240.029007
                                          -220.0339966
                                          -200.0390015
                                          -180
                                          -160.0039978
                                          -140.0090027
                                          -120.0139999
                                          -100.0189972
                                          -80.02400208
                                          -60.02899933
                                          -40.0340004
                                          0.52700001
                                          29.96999931
                                          50.00899887
                                          69.95999908
                                          89.94999695
                                          109.9950027
                                          129.9900055
                                          149.9850006
                                          170.0240021
                                          189.9750061
                                          209.9700012
                                          229.9649963
                                          249.9600067
                                          270
                                          289.9949951
                                          309.9899902
                                          329.9849854
                                          349.980011
                                          369.9750061
                                          390.0140076
                                          410.0090027
                                          450
                                          470.0299988
                                          489.9899902
                                          509.9849854
                                          529.9799805
                                          549.9749756
                                          569.9699707
                                          589.9650269
                                          610.2199707
                                          630
                                          650.25
                                          670]
                                        * Referenced by: '<S280>/1-D Lookup Table'
                                        */
  real_T deg2rad_Gain_n;               /* Expression: pi/180
                                        * Referenced by: '<S280>/deg2rad'
                                        */
  real_T invert_Gain_a;                /* Expression: -1
                                        * Referenced by: '<S280>/invert'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.01
                                        * Referenced by: '<S280>/Gain'
                                        */
  real_T Gain2_Gain_c;                 /* Expression: 5.7
                                        * Referenced by: '<S280>/Gain2'
                                        */
  real_T DelayInput2_InitialCondition_b;/* Expression: 0
                                         * Referenced by: '<S304>/Delay Input2'
                                         */
  real_T Gain3_Gain_n;                 /* Expression: -1
                                        * Referenced by: '<S301>/Gain3'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: -1
                                        * Referenced by: '<S301>/Gain1'
                                        */
  real_T rad2deg_Gain;                 /* Expression: 180/pi
                                        * Referenced by: '<S80>/rad2deg'
                                        */
  real_T signflip_Gain;                /* Expression: -1
                                        * Referenced by: '<S80>/sign flip'
                                        */
  real_T ResetIntegrator_Value;        /* Expression: 0
                                        * Referenced by: '<S80>/ResetIntegrator'
                                        */
  real_T DiscreteTimeIntegrator_gainva_l;/* Computed Parameter: DiscreteTimeIntegrator_gainva_l
                                          * Referenced by: '<S80>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S80>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 1000
                                          * Referenced by: '<S80>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -1000
                                          * Referenced by: '<S80>/Discrete-Time Integrator'
                                          */
  real_T ErrorLookupTable_tableData[5];/* Expression: [0.01,0.05,0.1,0.2,1]
                                        * Referenced by: '<S301>/Error Lookup Table'
                                        */
  real_T ErrorLookupTable_bp01Data[5]; /* Expression: [0.001,0.01,0.1,0.5,1]
                                        * Referenced by: '<S301>/Error Lookup Table'
                                        */
  real_T LimitRateLimiter_RisingLim;   /* Computed Parameter: LimitRateLimiter_RisingLim
                                        * Referenced by: '<S301>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_FallingLim;  /* Computed Parameter: LimitRateLimiter_FallingLim
                                        * Referenced by: '<S301>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_IC;          /* Expression: 0
                                        * Referenced by: '<S301>/Limit Rate Limiter'
                                        */
  real_T Gain_Gain_p;                  /* Expression: -1
                                        * Referenced by: '<S307>/Gain'
                                        */
  real_T CurvatureLookupTable_tableData[5];/* Expression: [0.0001,0.001,0.1,0.2,1]
                                            * Referenced by: '<S316>/Curvature Lookup Table'
                                            */
  real_T CurvatureLookupTable_bp01Data[5];/* Expression: [0.00001,0.0001,0.1,0.2,0.5]
                                           * Referenced by: '<S316>/Curvature Lookup Table'
                                           */
  real_T ErrorLookupTable_tableData_e[5];/* Expression: [0.01,0.05,0.1,0.2,1]
                                          * Referenced by: '<S316>/Error Lookup Table'
                                          */
  real_T ErrorLookupTable_bp01Data_j[5];/* Expression: [0.001,0.01,0.1,0.5,1]
                                         * Referenced by: '<S316>/Error Lookup Table'
                                         */
  real_T SpeedLookupTable_tableData_co[6];/* Expression: [1,0.6,0.3,0.1,0.05,0.01]
                                           * Referenced by: '<S316>/Speed Lookup Table'
                                           */
  real_T SpeedLookupTable_bp01Data_a[6];/* Expression: [10,20,30,50,70,100]
                                         * Referenced by: '<S316>/Speed Lookup Table'
                                         */
  real_T LimitRateLimiter_RisingLim_d; /* Computed Parameter: LimitRateLimiter_RisingLim_d
                                        * Referenced by: '<S316>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_FallingLim_j;/* Computed Parameter: LimitRateLimiter_FallingLim_j
                                        * Referenced by: '<S316>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_IC_i;        /* Expression: 0
                                        * Referenced by: '<S316>/Limit Rate Limiter'
                                        */
  real_T sign2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S80>/sign2'
                                        */
  real_T UnitDelay_InitialCondition_g1;/* Expression: 0
                                        * Referenced by: '<S80>/Unit Delay'
                                        */
  real_T CPV_Value_g;                  /* Expression: 1
                                        * Referenced by: '<S371>/CPV'
                                        */
  real_T CPV2_Value_p;                 /* Expression: 1
                                        * Referenced by: '<S371>/CPV2'
                                        */
  real_T CPV_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S373>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dl;/* Expression: 0.0
                                          * Referenced by: '<S379>/FixPt Unit Delay1'
                                          */
  real_T Integrator_method_Value;      /* Expression: 1
                                        * Referenced by: '<S378>/Integrator_method'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ol;/* Expression: 0.0
                                          * Referenced by: '<S380>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_b;/* Expression: 0
                                        * Referenced by: '<S374>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant'
                                        */
  real_T MaximumGoodHDOP_Value;        /* Expression: 2.5
                                        * Referenced by: '<S401>/MaximumGoodHDOP'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S401>/Constant1'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S401>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant18'
                                        */
  real_T Constant19_Value_m;           /* Expression: 0
                                        * Referenced by: '<S401>/Constant19'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S401>/Constant2'
                                        */
  real_T Constant20_Value_i;           /* Expression: 0
                                        * Referenced by: '<S401>/Constant20'
                                        */
  real_T Constant21_Value_g;           /* Expression: 0
                                        * Referenced by: '<S401>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S401>/Constant25'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S401>/Constant3'
                                        */
  real_T Constant4_Value_m;            /* Expression: 0
                                        * Referenced by: '<S401>/Constant4'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S401>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S401>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S401>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S401>/Constant8'
                                        */
  real_T Constant9_Value_m;            /* Expression: 0
                                        * Referenced by: '<S401>/Constant9'
                                        */
  real_T kph2mps_Gain_l;               /* Expression: 1/3.6
                                        * Referenced by: '<S401>/kph2mps'
                                        */
  real_T lookAheadTime_Value;          /* Expression: 2
                                        * Referenced by: '<S401>/lookAheadTime'
                                        */
  real_T kph2mps1_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S401>/kph2mps1'
                                        */
  real_T lookAheadTime1_Value;         /* Expression: 15
                                        * Referenced by: '<S401>/lookAheadTime1'
                                        */
  real_T UnitDelay1_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S401>/Unit Delay1'
                                        */
  real_T InitialHeading_Value;         /* Expression: 0
                                        * Referenced by: '<S402>/InitialHeading'
                                        */
  real_T InitialPosition_Value;        /* Expression: 0
                                        * Referenced by: '<S402>/InitialPosition'
                                        */
  real_T InitialXPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S402>/InitialXPosition'
                                        */
  real_T InitialYPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S402>/InitialYPosition'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 1000/3600
                                        * Referenced by: '<S71>/kph2ms'
                                        */
  real_T LongitudnalPosition_gainval;  /* Computed Parameter: LongitudnalPosition_gainval
                                        * Referenced by: '<S402>/LongitudnalPosition'
                                        */
  real_T reset_Value;                  /* Expression: 0
                                        * Referenced by: '<S402>/reset'
                                        */
  real_T VehHeading_gainval;           /* Computed Parameter: VehHeading_gainval
                                        * Referenced by: '<S402>/VehHeading'
                                        */
  real_T XPosition_gainval;            /* Computed Parameter: XPosition_gainval
                                        * Referenced by: '<S402>/XPosition'
                                        */
  real_T YPosition_gainval;            /* Computed Parameter: YPosition_gainval
                                        * Referenced by: '<S402>/YPosition'
                                        */
  real_T for_logging6_Gain;            /* Expression: 1
                                        * Referenced by: '<S403>/for_logging6'
                                        */
  real_T for_logging5_Gain;            /* Expression: 1
                                        * Referenced by: '<S403>/for_logging5'
                                        */
  real_T for_logging4_Gain;            /* Expression: 1
                                        * Referenced by: '<S403>/for_logging4'
                                        */
  real_T for_logging3_Gain;            /* Expression: 1
                                        * Referenced by: '<S403>/for_logging3'
                                        */
  real_T for_logging2_Gain;            /* Expression: 1
                                        * Referenced by: '<S403>/for_logging2'
                                        */
  real_T ms_to_kmh_2_Gain;             /* Expression: 3.6
                                        * Referenced by: '<S403>/m//s_to_km//h_2'
                                        */
  real_T ms_to_kmh_Gain;               /* Expression: 3.6
                                        * Referenced by: '<S403>/m//s_to_km//h'
                                        */
  real_T for_logging1_Gain;            /* Expression: 1
                                        * Referenced by: '<S403>/for_logging1'
                                        */
  real_T for_logging_Gain;             /* Expression: 1
                                        * Referenced by: '<S403>/for_logging'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S409>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S409>/Constant1'
                                        */
  real_T byte1_Y0;                     /* Computed Parameter: byte1_Y0
                                        * Referenced by: '<S483>/byte1'
                                        */
  real_T byte2_Y0;                     /* Computed Parameter: byte2_Y0
                                        * Referenced by: '<S483>/byte2'
                                        */
  real_T byte3_Y0;                     /* Computed Parameter: byte3_Y0
                                        * Referenced by: '<S483>/byte3'
                                        */
  real_T byte4_Y0;                     /* Computed Parameter: byte4_Y0
                                        * Referenced by: '<S483>/byte4'
                                        */
  real_T byte5_Y0;                     /* Computed Parameter: byte5_Y0
                                        * Referenced by: '<S483>/byte5'
                                        */
  real_T byte6_Y0;                     /* Computed Parameter: byte6_Y0
                                        * Referenced by: '<S483>/byte6'
                                        */
  real_T byte7_Y0;                     /* Computed Parameter: byte7_Y0
                                        * Referenced by: '<S483>/byte7'
                                        */
  real_T byte8_Y0;                     /* Computed Parameter: byte8_Y0
                                        * Referenced by: '<S483>/byte8'
                                        */
  real_T RXstatus_Y0;                  /* Computed Parameter: RXstatus_Y0
                                        * Referenced by: '<S483>/RX status'
                                        */
  real_T RXtime_Y0;                    /* Computed Parameter: RXtime_Y0
                                        * Referenced by: '<S483>/RX time'
                                        */
  real_T RXdeltatime_Y0;               /* Computed Parameter: RXdeltatime_Y0
                                        * Referenced by: '<S483>/RX delta time'
                                        */
  real_T byte1_Y0_d;                   /* Computed Parameter: byte1_Y0_d
                                        * Referenced by: '<S492>/byte1'
                                        */
  real_T byte2_Y0_d;                   /* Computed Parameter: byte2_Y0_d
                                        * Referenced by: '<S492>/byte2'
                                        */
  real_T byte3_Y0_e;                   /* Computed Parameter: byte3_Y0_e
                                        * Referenced by: '<S492>/byte3'
                                        */
  real_T byte4_Y0_k;                   /* Computed Parameter: byte4_Y0_k
                                        * Referenced by: '<S492>/byte4'
                                        */
  real_T byte5_Y0_l;                   /* Computed Parameter: byte5_Y0_l
                                        * Referenced by: '<S492>/byte5'
                                        */
  real_T byte6_Y0_n;                   /* Computed Parameter: byte6_Y0_n
                                        * Referenced by: '<S492>/byte6'
                                        */
  real_T byte7_Y0_n;                   /* Computed Parameter: byte7_Y0_n
                                        * Referenced by: '<S492>/byte7'
                                        */
  real_T byte8_Y0_n;                   /* Computed Parameter: byte8_Y0_n
                                        * Referenced by: '<S492>/byte8'
                                        */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S492>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S492>/RX time'
                                        */
  real_T RXdeltatime_Y0_e;             /* Computed Parameter: RXdeltatime_Y0_e
                                        * Referenced by: '<S492>/RX delta time'
                                        */
  real_T SpeedOfForwardVehicle_Y0;     /* Computed Parameter: SpeedOfForwardVehicle_Y0
                                        * Referenced by: '<S500>/SpeedOfForwardVehicle'
                                        */
  real_T DistanceToForwardVehicle_Y0;  /* Computed Parameter: DistanceToForwardVehicle_Y0
                                        * Referenced by: '<S500>/DistanceToForwardVehicle'
                                        */
  real_T AdaptiveCruiseCtrlSetSpeed_Y0;/* Computed Parameter: AdaptiveCruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S500>/AdaptiveCruiseCtrlSetSpeed'
                                        */
  real_T AdaptiveCruiseCtrlMode_Y0;    /* Computed Parameter: AdaptiveCruiseCtrlMode_Y0
                                        * Referenced by: '<S500>/AdaptiveCruiseCtrlMode'
                                        */
  real_T AdptveCruiseCtrlSetDistanceMode;/* Computed Parameter: AdptveCruiseCtrlSetDistanceMode
                                          * Referenced by: '<S500>/AdptveCruiseCtrlSetDistanceMode'
                                          */
  real_T RoadCurvature_Y0;             /* Computed Parameter: RoadCurvature_Y0
                                        * Referenced by: '<S500>/RoadCurvature'
                                        */
  real_T ACCTargetDetected_Y0;         /* Computed Parameter: ACCTargetDetected_Y0
                                        * Referenced by: '<S500>/ACCTargetDetected'
                                        */
  real_T ACCSystemShutoffWarning_Y0;   /* Computed Parameter: ACCSystemShutoffWarning_Y0
                                        * Referenced by: '<S500>/ACCSystemShutoffWarning'
                                        */
  real_T ACCDistanceAlertSignal_Y0;    /* Computed Parameter: ACCDistanceAlertSignal_Y0
                                        * Referenced by: '<S500>/ACCDistanceAlertSignal'
                                        */
  real_T ForwardCollisionWarning_Y0;   /* Computed Parameter: ForwardCollisionWarning_Y0
                                        * Referenced by: '<S500>/ForwardCollisionWarning'
                                        */
  real_T RXstatus_Y0_k;                /* Computed Parameter: RXstatus_Y0_k
                                        * Referenced by: '<S500>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S500>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
                                        * Referenced by: '<S500>/RX delta time'
                                        */
  real_T AdvEmergencyBrkSysState_Y0;   /* Computed Parameter: AdvEmergencyBrkSysState_Y0
                                        * Referenced by: '<S502>/AdvEmergencyBrkSysState'
                                        */
  real_T CollisionWarningLevel_Y0;     /* Computed Parameter: CollisionWarningLevel_Y0
                                        * Referenced by: '<S502>/CollisionWarningLevel'
                                        */
  real_T RelObjctDetForAdvEmergBrakingSy;/* Computed Parameter: RelObjctDetForAdvEmergBrakingSy
                                          * Referenced by: '<S502>/RelObjctDetForAdvEmergBrakingSys'
                                          */
  real_T BendOffProbabOfRelevantObject_Y;/* Computed Parameter: BendOffProbabOfRelevantObject_Y
                                          * Referenced by: '<S502>/BendOffProbabOfRelevantObject'
                                          */
  real_T TimeToCollisionWithRelevantObj_;/* Computed Parameter: TimeToCollisionWithRelevantObj_
                                          * Referenced by: '<S502>/TimeToCollisionWithRelevantObj'
                                          */
  real_T RXstatus_Y0_i;                /* Computed Parameter: RXstatus_Y0_i
                                        * Referenced by: '<S502>/RX status'
                                        */
  real_T RXtime_Y0_n5;                 /* Computed Parameter: RXtime_Y0_n5
                                        * Referenced by: '<S502>/RX time'
                                        */
  real_T RXdeltatime_Y0_b;             /* Computed Parameter: RXdeltatime_Y0_b
                                        * Referenced by: '<S502>/RX delta time'
                                        */
  real_T PneumaticSupplyPress_Y0;      /* Computed Parameter: PneumaticSupplyPress_Y0
                                        * Referenced by: '<S504>/PneumaticSupplyPress'
                                        */
  real_T ParkingAnd_orTrailerAirPress_Y0;/* Computed Parameter: ParkingAnd_orTrailerAirPress_Y0
                                          * Referenced by: '<S504>/ParkingAnd_orTrailerAirPress'
                                          */
  real_T ServiceBrakeCircuit1AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit1AirPress_Y0
                                          * Referenced by: '<S504>/ServiceBrakeCircuit1AirPress'
                                          */
  real_T ServiceBrakeCircuit2AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit2AirPress_Y0
                                          * Referenced by: '<S504>/ServiceBrakeCircuit2AirPress'
                                          */
  real_T AuxEquipmentSupplyPress_Y0;   /* Computed Parameter: AuxEquipmentSupplyPress_Y0
                                        * Referenced by: '<S504>/AuxEquipmentSupplyPress'
                                        */
  real_T AirSuspensionSupplyPress_Y0;  /* Computed Parameter: AirSuspensionSupplyPress_Y0
                                        * Referenced by: '<S504>/AirSuspensionSupplyPress'
                                        */
  real_T AirCompressorStatus_Y0;       /* Computed Parameter: AirCompressorStatus_Y0
                                        * Referenced by: '<S504>/AirCompressorStatus'
                                        */
  real_T PowertrainCircuitAirSupplyPress;/* Computed Parameter: PowertrainCircuitAirSupplyPress
                                          * Referenced by: '<S504>/PowertrainCircuitAirSupplyPress'
                                          */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S504>/RX status'
                                        */
  real_T RXtime_Y0_n5b;                /* Computed Parameter: RXtime_Y0_n5b
                                        * Referenced by: '<S504>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
                                        * Referenced by: '<S504>/RX delta time'
                                        */
  real_T BarometricPress_Y0;           /* Computed Parameter: BarometricPress_Y0
                                        * Referenced by: '<S506>/BarometricPress'
                                        */
  real_T CabInteriorTemp_Y0;           /* Computed Parameter: CabInteriorTemp_Y0
                                        * Referenced by: '<S506>/CabInteriorTemp'
                                        */
  real_T AmbientAirTemp_Y0;            /* Computed Parameter: AmbientAirTemp_Y0
                                        * Referenced by: '<S506>/AmbientAirTemp'
                                        */
  real_T EngAirIntakeTemp_Y0;          /* Computed Parameter: EngAirIntakeTemp_Y0
                                        * Referenced by: '<S506>/EngAirIntakeTemp'
                                        */
  real_T RoadSurfaceTemp_Y0;           /* Computed Parameter: RoadSurfaceTemp_Y0
                                        * Referenced by: '<S506>/RoadSurfaceTemp'
                                        */
  real_T RXstatus_Y0_f;                /* Computed Parameter: RXstatus_Y0_f
                                        * Referenced by: '<S506>/RX status'
                                        */
  real_T RXtime_Y0_i;                  /* Computed Parameter: RXtime_Y0_i
                                        * Referenced by: '<S506>/RX time'
                                        */
  real_T RXdeltatime_Y0_ez;            /* Computed Parameter: RXdeltatime_Y0_ez
                                        * Referenced by: '<S506>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S508>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S508>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_b;                /* Computed Parameter: RXstatus_Y0_b
                                        * Referenced by: '<S508>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S508>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
                                        * Referenced by: '<S508>/RX delta time'
                                        */
  real_T tr0_track_selection_status_Y0;/* Computed Parameter: tr0_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr0_track_selection_status'
                                        */
  real_T tr0_corrected_lateral_distance_;/* Computed Parameter: tr0_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr0_corrected_lateral_distance'
                                          */
  real_T tr1_track_selection_status_Y0;/* Computed Parameter: tr1_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr1_track_selection_status'
                                        */
  real_T tr1_corrected_lateral_distance_;/* Computed Parameter: tr1_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr1_corrected_lateral_distance'
                                          */
  real_T tr2_track_selection_status_Y0;/* Computed Parameter: tr2_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr2_track_selection_status'
                                        */
  real_T tr2_corrected_lateral_distance_;/* Computed Parameter: tr2_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr2_corrected_lateral_distance'
                                          */
  real_T tr3_track_selection_status_Y0;/* Computed Parameter: tr3_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr3_track_selection_status'
                                        */
  real_T tr3_corrected_lateral_distance_;/* Computed Parameter: tr3_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr3_corrected_lateral_distance'
                                          */
  real_T tr4_track_selection_status_Y0;/* Computed Parameter: tr4_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr4_track_selection_status'
                                        */
  real_T tr4_corrected_lateral_distance_;/* Computed Parameter: tr4_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr4_corrected_lateral_distance'
                                          */
  real_T tr5_track_selection_status_Y0;/* Computed Parameter: tr5_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr5_track_selection_status'
                                        */
  real_T tr5_corrected_lateral_distance_;/* Computed Parameter: tr5_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr5_corrected_lateral_distance'
                                          */
  real_T tr6_track_selection_status_Y0;/* Computed Parameter: tr6_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr6_track_selection_status'
                                        */
  real_T tr6_corrected_lateral_distance_;/* Computed Parameter: tr6_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr6_corrected_lateral_distance'
                                          */
  real_T tr7_track_selection_status_Y0;/* Computed Parameter: tr7_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr7_track_selection_status'
                                        */
  real_T tr7_corrected_lateral_distance_;/* Computed Parameter: tr7_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr7_corrected_lateral_distance'
                                          */
  real_T tr8_track_selection_status_Y0;/* Computed Parameter: tr8_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr8_track_selection_status'
                                        */
  real_T tr8_corrected_lateral_distance_;/* Computed Parameter: tr8_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr8_corrected_lateral_distance'
                                          */
  real_T tr9_track_selection_status_Y0;/* Computed Parameter: tr9_track_selection_status_Y0
                                        * Referenced by: '<S510>/tr9_track_selection_status'
                                        */
  real_T tr9_corrected_lateral_distance_;/* Computed Parameter: tr9_corrected_lateral_distance_
                                          * Referenced by: '<S510>/tr9_corrected_lateral_distance'
                                          */
  real_T tr0_lateral_position_Y0;      /* Computed Parameter: tr0_lateral_position_Y0
                                        * Referenced by: '<S510>/tr0_lateral_position'
                                        */
  real_T tr1_lateral_position_Y0;      /* Computed Parameter: tr1_lateral_position_Y0
                                        * Referenced by: '<S510>/tr1_lateral_position'
                                        */
  real_T tr2_lateral_position_Y0;      /* Computed Parameter: tr2_lateral_position_Y0
                                        * Referenced by: '<S510>/tr2_lateral_position'
                                        */
  real_T tr3_lateral_position_Y0;      /* Computed Parameter: tr3_lateral_position_Y0
                                        * Referenced by: '<S510>/tr3_lateral_position'
                                        */
  real_T tr4_lateral_position_Y0;      /* Computed Parameter: tr4_lateral_position_Y0
                                        * Referenced by: '<S510>/tr4_lateral_position'
                                        */
  real_T tr5_lateral_position_Y0;      /* Computed Parameter: tr5_lateral_position_Y0
                                        * Referenced by: '<S510>/tr5_lateral_position'
                                        */
  real_T tr6_lateral_position_Y0;      /* Computed Parameter: tr6_lateral_position_Y0
                                        * Referenced by: '<S510>/tr6_lateral_position'
                                        */
  real_T tr7_lateral_position_Y0;      /* Computed Parameter: tr7_lateral_position_Y0
                                        * Referenced by: '<S510>/tr7_lateral_position'
                                        */
  real_T tr8_lateral_position_Y0;      /* Computed Parameter: tr8_lateral_position_Y0
                                        * Referenced by: '<S510>/tr8_lateral_position'
                                        */
  real_T tr9_lateral_position_Y0;      /* Computed Parameter: tr9_lateral_position_Y0
                                        * Referenced by: '<S510>/tr9_lateral_position'
                                        */
  real_T tr0_range_Y0;                 /* Computed Parameter: tr0_range_Y0
                                        * Referenced by: '<S510>/tr0_range'
                                        */
  real_T tr1_range_Y0;                 /* Computed Parameter: tr1_range_Y0
                                        * Referenced by: '<S510>/tr1_range'
                                        */
  real_T tr2_range_Y0;                 /* Computed Parameter: tr2_range_Y0
                                        * Referenced by: '<S510>/tr2_range'
                                        */
  real_T tr3_range_Y0;                 /* Computed Parameter: tr3_range_Y0
                                        * Referenced by: '<S510>/tr3_range'
                                        */
  real_T tr4_range_Y0;                 /* Computed Parameter: tr4_range_Y0
                                        * Referenced by: '<S510>/tr4_range'
                                        */
  real_T tr5_range_Y0;                 /* Computed Parameter: tr5_range_Y0
                                        * Referenced by: '<S510>/tr5_range'
                                        */
  real_T tr6_range_Y0;                 /* Computed Parameter: tr6_range_Y0
                                        * Referenced by: '<S510>/tr6_range'
                                        */
  real_T tr7_range_Y0;                 /* Computed Parameter: tr7_range_Y0
                                        * Referenced by: '<S510>/tr7_range'
                                        */
  real_T tr8_range_Y0;                 /* Computed Parameter: tr8_range_Y0
                                        * Referenced by: '<S510>/tr8_range'
                                        */
  real_T tr9_range_Y0;                 /* Computed Parameter: tr9_range_Y0
                                        * Referenced by: '<S510>/tr9_range'
                                        */
  real_T tr0_radar_confidence_Y0;      /* Computed Parameter: tr0_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr0_radar_confidence'
                                        */
  real_T tr1_radar_confidence_Y0;      /* Computed Parameter: tr1_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr1_radar_confidence'
                                        */
  real_T tr2_radar_confidence_Y0;      /* Computed Parameter: tr2_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr2_radar_confidence'
                                        */
  real_T tr3_radar_confidence_Y0;      /* Computed Parameter: tr3_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr3_radar_confidence'
                                        */
  real_T tr4_radar_confidence_Y0;      /* Computed Parameter: tr4_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr4_radar_confidence'
                                        */
  real_T tr5_radar_confidence_Y0;      /* Computed Parameter: tr5_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr5_radar_confidence'
                                        */
  real_T tr6_radar_confidence_Y0;      /* Computed Parameter: tr6_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr6_radar_confidence'
                                        */
  real_T tr7_radar_confidence_Y0;      /* Computed Parameter: tr7_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr7_radar_confidence'
                                        */
  real_T tr8_radar_confidence_Y0;      /* Computed Parameter: tr8_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr8_radar_confidence'
                                        */
  real_T tr9_radar_confidence_Y0;      /* Computed Parameter: tr9_radar_confidence_Y0
                                        * Referenced by: '<S510>/tr9_radar_confidence'
                                        */
  real_T tr0_relative_velocitiy_Y0;    /* Computed Parameter: tr0_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr0_relative_velocitiy'
                                        */
  real_T tr0_acceleration_over_ground_Y0;/* Computed Parameter: tr0_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr0_acceleration_over_ground'
                                          */
  real_T tr1_relative_velocitiy_Y0;    /* Computed Parameter: tr1_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr1_relative_velocitiy'
                                        */
  real_T tr1_acceleration_over_ground_Y0;/* Computed Parameter: tr1_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr1_acceleration_over_ground'
                                          */
  real_T tr2_relative_velocitiy_Y0;    /* Computed Parameter: tr2_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr2_relative_velocitiy'
                                        */
  real_T tr2_acceleration_over_ground_Y0;/* Computed Parameter: tr2_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr2_acceleration_over_ground'
                                          */
  real_T tr3_relative_velocitiy_Y0;    /* Computed Parameter: tr3_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr3_relative_velocitiy'
                                        */
  real_T tr3_acceleration_over_ground_Y0;/* Computed Parameter: tr3_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr3_acceleration_over_ground'
                                          */
  real_T tr4_relative_velocitiy_Y0;    /* Computed Parameter: tr4_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr4_relative_velocitiy'
                                        */
  real_T tr4_acceleration_over_ground_Y0;/* Computed Parameter: tr4_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr4_acceleration_over_ground'
                                          */
  real_T tr5_relative_velocitiy_Y0;    /* Computed Parameter: tr5_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr5_relative_velocitiy'
                                        */
  real_T tr5_acceleration_over_ground_Y0;/* Computed Parameter: tr5_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr5_acceleration_over_ground'
                                          */
  real_T tr6_relative_velocitiy_Y0;    /* Computed Parameter: tr6_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr6_relative_velocitiy'
                                        */
  real_T tr6_acceleration_over_ground_Y0;/* Computed Parameter: tr6_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr6_acceleration_over_ground'
                                          */
  real_T tr7_relative_velocitiy_Y0;    /* Computed Parameter: tr7_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr7_relative_velocitiy'
                                        */
  real_T tr7_acceleration_over_ground_Y0;/* Computed Parameter: tr7_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr7_acceleration_over_ground'
                                          */
  real_T tr8_relative_velocitiy_Y0;    /* Computed Parameter: tr8_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr8_relative_velocitiy'
                                        */
  real_T tr8_acceleration_over_ground_Y0;/* Computed Parameter: tr8_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr8_acceleration_over_ground'
                                          */
  real_T tr9_relative_velocitiy_Y0;    /* Computed Parameter: tr9_relative_velocitiy_Y0
                                        * Referenced by: '<S510>/tr9_relative_velocitiy'
                                        */
  real_T tr9_acceleration_over_ground_Y0;/* Computed Parameter: tr9_acceleration_over_ground_Y0
                                          * Referenced by: '<S510>/tr9_acceleration_over_ground'
                                          */
  real_T track_multiplexor_Y0;         /* Computed Parameter: track_multiplexor_Y0
                                        * Referenced by: '<S510>/track_multiplexor'
                                        */
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S510>/RX status'
                                        */
  real_T RXtime_Y0_ft;                 /* Computed Parameter: RXtime_Y0_ft
                                        * Referenced by: '<S510>/RX time'
                                        */
  real_T RXdeltatime_Y0_ew;            /* Computed Parameter: RXdeltatime_Y0_ew
                                        * Referenced by: '<S510>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0;        /* Computed Parameter: TwoSpeedAxleSwitch_Y0
                                        * Referenced by: '<S512>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0;        /* Computed Parameter: ParkingBrakeSwitch_Y0
                                        * Referenced by: '<S512>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0;     /* Computed Parameter: CruiseCtrlPauseSwitch_Y0
                                        * Referenced by: '<S512>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0; /* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0
                                        * Referenced by: '<S512>/ParkBrakeReleaseInhibitRq'
                                        */
  real_T WheelBasedVehicleSpeed_Y0;    /* Computed Parameter: WheelBasedVehicleSpeed_Y0
                                        * Referenced by: '<S512>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0;          /* Computed Parameter: CruiseCtrlActive_Y0
                                        * Referenced by: '<S512>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0;    /* Computed Parameter: CruiseCtrlEnableSwitch_Y0
                                        * Referenced by: '<S512>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0;               /* Computed Parameter: BrakeSwitch_Y0
                                        * Referenced by: '<S512>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0;              /* Computed Parameter: ClutchSwitch_Y0
                                        * Referenced by: '<S512>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0;       /* Computed Parameter: CruiseCtrlSetSwitch_Y0
                                        * Referenced by: '<S512>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0;     /* Computed Parameter: CruiseCtrlCoastSwitch_Y0
                                        * Referenced by: '<S512>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0;    /* Computed Parameter: CruiseCtrlResumeSwitch_Y0
                                        * Referenced by: '<S512>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0
                                        * Referenced by: '<S512>/CruiseCtrlAccelerateSwitch'
                                        */
  real_T CruiseCtrlSetSpeed_Y0;        /* Computed Parameter: CruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S512>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0;          /* Computed Parameter: PTOGovernorState_Y0
                                        * Referenced by: '<S512>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0;          /* Computed Parameter: CruiseCtrlStates_Y0
                                        * Referenced by: '<S512>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0;    /* Computed Parameter: EngIdleIncrementSwitch_Y0
                                        * Referenced by: '<S512>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0;    /* Computed Parameter: EngIdleDecrementSwitch_Y0
                                        * Referenced by: '<S512>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0;         /* Computed Parameter: EngTestModeSwitch_Y0
                                        * Referenced by: '<S512>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0; /* Computed Parameter: EngShutdownOverrideSwitch_Y0
                                        * Referenced by: '<S512>/EngShutdownOverrideSwitch'
                                        */
  real_T RXstatus_Y0_p;                /* Computed Parameter: RXstatus_Y0_p
                                        * Referenced by: '<S512>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S512>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S512>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_a;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_a
                                        * Referenced by: '<S514>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_e;      /* Computed Parameter: ParkingBrakeSwitch_Y0_e
                                        * Referenced by: '<S514>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_e;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_e
                                        * Referenced by: '<S514>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_n;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_n
                                         * Referenced by: '<S514>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_i;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_i
                                        * Referenced by: '<S514>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_j;        /* Computed Parameter: CruiseCtrlActive_Y0_j
                                        * Referenced by: '<S514>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_c;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_c
                                        * Referenced by: '<S514>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_a;             /* Computed Parameter: BrakeSwitch_Y0_a
                                        * Referenced by: '<S514>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_n;            /* Computed Parameter: ClutchSwitch_Y0_n
                                        * Referenced by: '<S514>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_k;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_k
                                        * Referenced by: '<S514>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_c;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_c
                                        * Referenced by: '<S514>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_n;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_n
                                        * Referenced by: '<S514>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_e;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_e
                                          * Referenced by: '<S514>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_n;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_n
                                        * Referenced by: '<S514>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_i;        /* Computed Parameter: PTOGovernorState_Y0_i
                                        * Referenced by: '<S514>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_k;        /* Computed Parameter: CruiseCtrlStates_Y0_k
                                        * Referenced by: '<S514>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_i;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_i
                                        * Referenced by: '<S514>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_i;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_i
                                        * Referenced by: '<S514>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_m;       /* Computed Parameter: EngTestModeSwitch_Y0_m
                                        * Referenced by: '<S514>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_b;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_b
                                         * Referenced by: '<S514>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_e;                /* Computed Parameter: RXstatus_Y0_e
                                        * Referenced by: '<S514>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S514>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
                                        * Referenced by: '<S514>/RX delta time'
                                        */
  real_T SID_Y0;                       /* Computed Parameter: SID_Y0
                                        * Referenced by: '<S516>/SID'
                                        */
  real_T COGReference_Y0;              /* Computed Parameter: COGReference_Y0
                                        * Referenced by: '<S516>/COGReference'
                                        */
  real_T CourseOverGround_Y0;          /* Computed Parameter: CourseOverGround_Y0
                                        * Referenced by: '<S516>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0;           /* Computed Parameter: SpeedOverGround_Y0
                                        * Referenced by: '<S516>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S516>/RX status'
                                        */
  real_T RXtime_Y0_ic;                 /* Computed Parameter: RXtime_Y0_ic
                                        * Referenced by: '<S516>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
                                        * Referenced by: '<S516>/RX delta time'
                                        */
  real_T SID_Y0_j;                     /* Computed Parameter: SID_Y0_j
                                        * Referenced by: '<S517>/SID'
                                        */
  real_T COGReference_Y0_p;            /* Computed Parameter: COGReference_Y0_p
                                        * Referenced by: '<S517>/COGReference'
                                        */
  real_T CourseOverGround_Y0_j;        /* Computed Parameter: CourseOverGround_Y0_j
                                        * Referenced by: '<S517>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_a;         /* Computed Parameter: SpeedOverGround_Y0_a
                                        * Referenced by: '<S517>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_od;               /* Computed Parameter: RXstatus_Y0_od
                                        * Referenced by: '<S517>/RX status'
                                        */
  real_T RXtime_Y0_ld;                 /* Computed Parameter: RXtime_Y0_ld
                                        * Referenced by: '<S517>/RX time'
                                        */
  real_T RXdeltatime_Y0_n1;            /* Computed Parameter: RXdeltatime_Y0_n1
                                        * Referenced by: '<S517>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S519>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_ge;               /* Computed Parameter: RXstatus_Y0_ge
                                        * Referenced by: '<S519>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S519>/RX time'
                                        */
  real_T RXdeltatime_Y0_d1;            /* Computed Parameter: RXdeltatime_Y0_d1
                                        * Referenced by: '<S519>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0;          /* Computed Parameter: ASREngCtrlActive_Y0
                                        * Referenced by: '<S521>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0;        /* Computed Parameter: ASRBrakeCtrlActive_Y0
                                        * Referenced by: '<S521>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0;     /* Computed Parameter: AntiLockBrakingActive_Y0
                                        * Referenced by: '<S521>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0;            /* Computed Parameter: EBSBrakeSwitch_Y0
                                        * Referenced by: '<S521>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0;             /* Computed Parameter: BrakePedalPos_Y0
                                        * Referenced by: '<S521>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0;          /* Computed Parameter: ABSOffroadSwitch_Y0
                                        * Referenced by: '<S521>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0;          /* Computed Parameter: ASROffroadSwitch_Y0
                                        * Referenced by: '<S521>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0;       /* Computed Parameter: ASRHillHolderSwitch_Y0
                                        * Referenced by: '<S521>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0
                                        * Referenced by: '<S521>/TractionCtrlOverrideSwitch'
                                        */
  real_T AccelInterlockSwitch_Y0;      /* Computed Parameter: AccelInterlockSwitch_Y0
                                        * Referenced by: '<S521>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0;           /* Computed Parameter: EngDerateSwitch_Y0
                                        * Referenced by: '<S521>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0;      /* Computed Parameter: EngAuxShutdownSwitch_Y0
                                        * Referenced by: '<S521>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0;   /* Computed Parameter: RemoteAccelEnableSwitch_Y0
                                        * Referenced by: '<S521>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0;      /* Computed Parameter: EngRetarderSelection_Y0
                                        * Referenced by: '<S521>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0;       /* Computed Parameter: ABSFullyOperational_Y0
                                        * Referenced by: '<S521>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0;       /* Computed Parameter: EBSRedWarningSignal_Y0
                                        * Referenced by: '<S521>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0; /* Computed Parameter: ABS_EBSAmberWarningSignal_Y0
                                        * Referenced by: '<S521>/ABS_EBSAmberWarningSignal'
                                        */
  real_T ATC_ASRInformationSignal_Y0;  /* Computed Parameter: ATC_ASRInformationSignal_Y0
                                        * Referenced by: '<S521>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCntrl
                                          * Referenced by: '<S521>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0;           /* Computed Parameter: HaltBrakeSwitch_Y0
                                        * Referenced by: '<S521>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0;          /* Computed Parameter: TrailerABSStatus_Y0
                                        * Referenced by: '<S521>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSignal;/* Computed Parameter: TrctrMntdTrilerABSWarningSignal
                                          * Referenced by: '<S521>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_i2;               /* Computed Parameter: RXstatus_Y0_i2
                                        * Referenced by: '<S521>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S521>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
                                        * Referenced by: '<S521>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_c;        /* Computed Parameter: ASREngCtrlActive_Y0_c
                                        * Referenced by: '<S523>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_p;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_p
                                        * Referenced by: '<S523>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_m;   /* Computed Parameter: AntiLockBrakingActive_Y0_m
                                        * Referenced by: '<S523>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_p;          /* Computed Parameter: EBSBrakeSwitch_Y0_p
                                        * Referenced by: '<S523>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_j;           /* Computed Parameter: BrakePedalPos_Y0_j
                                        * Referenced by: '<S523>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_d;        /* Computed Parameter: ABSOffroadSwitch_Y0_d
                                        * Referenced by: '<S523>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_c;        /* Computed Parameter: ASROffroadSwitch_Y0_c
                                        * Referenced by: '<S523>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_h;     /* Computed Parameter: ASRHillHolderSwitch_Y0_h
                                        * Referenced by: '<S523>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_c;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_c
                                          * Referenced by: '<S523>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_h;    /* Computed Parameter: AccelInterlockSwitch_Y0_h
                                        * Referenced by: '<S523>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_m;         /* Computed Parameter: EngDerateSwitch_Y0_m
                                        * Referenced by: '<S523>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_l;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_l
                                        * Referenced by: '<S523>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_g; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_g
                                        * Referenced by: '<S523>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_b;    /* Computed Parameter: EngRetarderSelection_Y0_b
                                        * Referenced by: '<S523>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_o;     /* Computed Parameter: ABSFullyOperational_Y0_o
                                        * Referenced by: '<S523>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_i;     /* Computed Parameter: EBSRedWarningSignal_Y0_i
                                        * Referenced by: '<S523>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_p;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_p
                                         * Referenced by: '<S523>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_h;/* Computed Parameter: ATC_ASRInformationSignal_Y0_h
                                        * Referenced by: '<S523>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_i;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_i
                                          * Referenced by: '<S523>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_e;         /* Computed Parameter: HaltBrakeSwitch_Y0_e
                                        * Referenced by: '<S523>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_l;        /* Computed Parameter: TrailerABSStatus_Y0_l
                                        * Referenced by: '<S523>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_f;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_f
                                          * Referenced by: '<S523>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_ei;               /* Computed Parameter: RXstatus_Y0_ei
                                        * Referenced by: '<S523>/RX status'
                                        */
  real_T RXtime_Y0_de;                 /* Computed Parameter: RXtime_Y0_de
                                        * Referenced by: '<S523>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
                                        * Referenced by: '<S523>/RX delta time'
                                        */
  real_T FrontAxleSpeed_Y0;            /* Computed Parameter: FrontAxleSpeed_Y0
                                        * Referenced by: '<S525>/FrontAxleSpeed'
                                        */
  real_T RelativeSpeedFrontAxleLeftWheel;/* Computed Parameter: RelativeSpeedFrontAxleLeftWheel
                                          * Referenced by: '<S525>/RelativeSpeedFrontAxleLeftWheel'
                                          */
  real_T RlativeSpeedFrontAxleRightWheel;/* Computed Parameter: RlativeSpeedFrontAxleRightWheel
                                          * Referenced by: '<S525>/RlativeSpeedFrontAxleRightWheel'
                                          */
  real_T RelativeSpeedRearAxle1LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle1LeftWheel
                                          * Referenced by: '<S525>/RelativeSpeedRearAxle1LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle1RightWheel;/* Computed Parameter: RlativeSpeedRearAxle1RightWheel
                                          * Referenced by: '<S525>/RlativeSpeedRearAxle1RightWheel'
                                          */
  real_T RelativeSpeedRearAxle2LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle2LeftWheel
                                          * Referenced by: '<S525>/RelativeSpeedRearAxle2LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle2RightWheel;/* Computed Parameter: RlativeSpeedRearAxle2RightWheel
                                          * Referenced by: '<S525>/RlativeSpeedRearAxle2RightWheel'
                                          */
  real_T RXstatus_Y0_k0;               /* Computed Parameter: RXstatus_Y0_k0
                                        * Referenced by: '<S525>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S525>/RX time'
                                        */
  real_T RXdeltatime_Y0_kr;            /* Computed Parameter: RXdeltatime_Y0_kr
                                        * Referenced by: '<S525>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S529>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_o;/* Expression: 0
                                        * Referenced by: '<S529>/Unit_Delay'
                                        */
  real_T EngTorqueMode_Y0;             /* Computed Parameter: EngTorqueMode_Y0
                                        * Referenced by: '<S572>/EngTorqueMode'
                                        */
  real_T ActlEngPrcntTrqueHighResolution;/* Computed Parameter: ActlEngPrcntTrqueHighResolution
                                          * Referenced by: '<S572>/ActlEngPrcntTrqueHighResolution'
                                          */
  real_T DriversDemandEngPercentTorque_Y;/* Computed Parameter: DriversDemandEngPercentTorque_Y
                                          * Referenced by: '<S572>/DriversDemandEngPercentTorque'
                                          */
  real_T ActualEngPercentTorque_Y0;    /* Computed Parameter: ActualEngPercentTorque_Y0
                                        * Referenced by: '<S572>/ActualEngPercentTorque'
                                        */
  real_T EngSpeed_Y0;                  /* Computed Parameter: EngSpeed_Y0
                                        * Referenced by: '<S572>/EngSpeed'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrEngCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrEngCntrl
                                          * Referenced by: '<S572>/SrcAddrssOfCtrllngDvcFrEngCntrl'
                                          */
  real_T EngStarterMode_Y0;            /* Computed Parameter: EngStarterMode_Y0
                                        * Referenced by: '<S572>/EngStarterMode'
                                        */
  real_T EngDemandPercentTorque_Y0;    /* Computed Parameter: EngDemandPercentTorque_Y0
                                        * Referenced by: '<S572>/EngDemandPercentTorque'
                                        */
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S572>/RX status'
                                        */
  real_T RXtime_Y0_lm;                 /* Computed Parameter: RXtime_Y0_lm
                                        * Referenced by: '<S572>/RX time'
                                        */
  real_T RXdeltatime_Y0_ky;            /* Computed Parameter: RXdeltatime_Y0_ky
                                        * Referenced by: '<S572>/RX delta time'
                                        */
  real_T SPN558_AccelPed1LowIdlSwitch_Y0;/* Computed Parameter: SPN558_AccelPed1LowIdlSwitch_Y0
                                          * Referenced by: '<S574>/SPN558_AccelPed1LowIdlSwitch'
                                          */
  real_T SPN559_AccelPedKickdownSw_Y0; /* Computed Parameter: SPN559_AccelPedKickdownSw_Y0
                                        * Referenced by: '<S574>/SPN559_AccelPedKickdownSw'
                                        */
  real_T SPN1437_RoadSpeedLimitStatus_Y0;/* Computed Parameter: SPN1437_RoadSpeedLimitStatus_Y0
                                          * Referenced by: '<S574>/SPN1437_RoadSpeedLimitStatus'
                                          */
  real_T SPN2970_AccelPed2LowIdlSwitch_Y;/* Computed Parameter: SPN2970_AccelPed2LowIdlSwitch_Y
                                          * Referenced by: '<S574>/SPN2970_AccelPed2LowIdlSwitch'
                                          */
  real_T SPN91_AccelPedPos1_Y0;        /* Computed Parameter: SPN91_AccelPedPos1_Y0
                                        * Referenced by: '<S574>/SPN91_AccelPedPos1'
                                        */
  real_T SPN92_EngPercLoadAtCurrSpd_Y0;/* Computed Parameter: SPN92_EngPercLoadAtCurrSpd_Y0
                                        * Referenced by: '<S574>/SPN92_EngPercLoadAtCurrSpd'
                                        */
  real_T SPN974_RemAccelPedalPosition_Y0;/* Computed Parameter: SPN974_RemAccelPedalPosition_Y0
                                          * Referenced by: '<S574>/SPN974_RemAccelPedalPosition'
                                          */
  real_T SPN29_AccelPedPos2_Y0;        /* Computed Parameter: SPN29_AccelPedPos2_Y0
                                        * Referenced by: '<S574>/SPN29_AccelPedPos2'
                                        */
  real_T SPN2979_VehAccelRateLimStatus_Y;/* Computed Parameter: SPN2979_VehAccelRateLimStatus_Y
                                          * Referenced by: '<S574>/SPN2979_VehAccelRateLimStatus'
                                          */
  real_T SPN5021_MomEngMaxPwrEnFdbk_Y0;/* Computed Parameter: SPN5021_MomEngMaxPwrEnFdbk_Y0
                                        * Referenced by: '<S574>/SPN5021_MomEngMaxPwrEnFdbk'
                                        */
  real_T SPN5399_DPFThermMgmtActive_Y0;/* Computed Parameter: SPN5399_DPFThermMgmtActive_Y0
                                        * Referenced by: '<S574>/SPN5399_DPFThermMgmtActive'
                                        */
  real_T SPN5400_SCRThermMgmtActive_Y0;/* Computed Parameter: SPN5400_SCRThermMgmtActive_Y0
                                        * Referenced by: '<S574>/SPN5400_SCRThermMgmtActive'
                                        */
  real_T SPN3357_ActMaxAvailEngPercTrq_Y;/* Computed Parameter: SPN3357_ActMaxAvailEngPercTrq_Y
                                          * Referenced by: '<S574>/SPN3357_ActMaxAvailEngPercTrq'
                                          */
  real_T SPN5398_EstPumpingPercentTorque;/* Computed Parameter: SPN5398_EstPumpingPercentTorque
                                          * Referenced by: '<S574>/SPN5398_EstPumpingPercentTorque'
                                          */
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S574>/RX status'
                                        */
  real_T RXtime_Y0_al;                 /* Computed Parameter: RXtime_Y0_al
                                        * Referenced by: '<S574>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S574>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S576>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S576>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_n5;               /* Computed Parameter: RXstatus_Y0_n5
                                        * Referenced by: '<S576>/RX status'
                                        */
  real_T RXtime_Y0_l3;                 /* Computed Parameter: RXtime_Y0_l3
                                        * Referenced by: '<S576>/RX time'
                                        */
  real_T RXdeltatime_Y0_e3;            /* Computed Parameter: RXdeltatime_Y0_e3
                                        * Referenced by: '<S576>/RX delta time'
                                        */
  real_T SPN524_TransSelectedGear_Y0;  /* Computed Parameter: SPN524_TransSelectedGear_Y0
                                        * Referenced by: '<S578>/SPN524_TransSelectedGear'
                                        */
  real_T SPN526_TransActualGearRatio_Y0;/* Computed Parameter: SPN526_TransActualGearRatio_Y0
                                         * Referenced by: '<S578>/SPN526_TransActualGearRatio'
                                         */
  real_T SPN523_TransCurrentGear_Y0;   /* Computed Parameter: SPN523_TransCurrentGear_Y0
                                        * Referenced by: '<S578>/SPN523_TransCurrentGear'
                                        */
  real_T RXstatus_Y0_me;               /* Computed Parameter: RXstatus_Y0_me
                                        * Referenced by: '<S578>/RX status'
                                        */
  real_T RXtime_Y0_h2;                 /* Computed Parameter: RXtime_Y0_h2
                                        * Referenced by: '<S578>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
                                        * Referenced by: '<S578>/RX delta time'
                                        */
  real_T SID_Y0_l;                     /* Computed Parameter: SID_Y0_l
                                        * Referenced by: '<S580>/SID'
                                        */
  real_T SetMode_Y0;                   /* Computed Parameter: SetMode_Y0
                                        * Referenced by: '<S580>/SetMode'
                                        */
  real_T OpMode_Y0;                    /* Computed Parameter: OpMode_Y0
                                        * Referenced by: '<S580>/OpMode'
                                        */
  real_T HDOP_Y0;                      /* Computed Parameter: HDOP_Y0
                                        * Referenced by: '<S580>/HDOP_'
                                        */
  real_T VDOP_Y0;                      /* Computed Parameter: VDOP_Y0
                                        * Referenced by: '<S580>/VDOP'
                                        */
  real_T TDOP_Y0;                      /* Computed Parameter: TDOP_Y0
                                        * Referenced by: '<S580>/TDOP'
                                        */
  real_T RXstatus_Y0_j;                /* Computed Parameter: RXstatus_Y0_j
                                        * Referenced by: '<S580>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S580>/RX time'
                                        */
  real_T RXdeltatime_Y0_f;             /* Computed Parameter: RXdeltatime_Y0_f
                                        * Referenced by: '<S580>/RX delta time'
                                        */
  real_T SID_Y0_k;                     /* Computed Parameter: SID_Y0_k
                                        * Referenced by: '<S581>/SID'
                                        */
  real_T SetMode_Y0_l;                 /* Computed Parameter: SetMode_Y0_l
                                        * Referenced by: '<S581>/SetMode'
                                        */
  real_T OpMode_Y0_e;                  /* Computed Parameter: OpMode_Y0_e
                                        * Referenced by: '<S581>/OpMode'
                                        */
  real_T HDOP_Y0_a;                    /* Computed Parameter: HDOP_Y0_a
                                        * Referenced by: '<S581>/HDOP_'
                                        */
  real_T VDOP_Y0_d;                    /* Computed Parameter: VDOP_Y0_d
                                        * Referenced by: '<S581>/VDOP'
                                        */
  real_T TDOP_Y0_e;                    /* Computed Parameter: TDOP_Y0_e
                                        * Referenced by: '<S581>/TDOP'
                                        */
  real_T RXstatus_Y0_lq;               /* Computed Parameter: RXstatus_Y0_lq
                                        * Referenced by: '<S581>/RX status'
                                        */
  real_T RXtime_Y0_g;                  /* Computed Parameter: RXtime_Y0_g
                                        * Referenced by: '<S581>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
                                        * Referenced by: '<S581>/RX delta time'
                                        */
  real_T FrontAxleLeftWheelSpeed_Y0;   /* Computed Parameter: FrontAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S583>/FrontAxleLeftWheelSpeed'
                                        */
  real_T FrontAxleRightWheelSpeed_Y0;  /* Computed Parameter: FrontAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S583>/FrontAxleRightWheelSpeed'
                                        */
  real_T RearAxleLeftWheelSpeed_Y0;    /* Computed Parameter: RearAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S583>/RearAxleLeftWheelSpeed'
                                        */
  real_T RearAxleRightWheelSpeed_Y0;   /* Computed Parameter: RearAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S583>/RearAxleRightWheelSpeed'
                                        */
  real_T RXstatus_Y0_ef;               /* Computed Parameter: RXstatus_Y0_ef
                                        * Referenced by: '<S583>/RX status'
                                        */
  real_T RXtime_Y0_m0;                 /* Computed Parameter: RXtime_Y0_m0
                                        * Referenced by: '<S583>/RX time'
                                        */
  real_T RXdeltatime_Y0_ph;            /* Computed Parameter: RXdeltatime_Y0_ph
                                        * Referenced by: '<S583>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S586>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S586>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_g1;               /* Computed Parameter: RXstatus_Y0_g1
                                        * Referenced by: '<S586>/RX status'
                                        */
  real_T RXtime_Y0_iz;                 /* Computed Parameter: RXtime_Y0_iz
                                        * Referenced by: '<S586>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S586>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_c;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_c
                                          * Referenced by: '<S587>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__c;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__c
                                          * Referenced by: '<S587>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_il;               /* Computed Parameter: RXstatus_Y0_il
                                        * Referenced by: '<S587>/RX status'
                                        */
  real_T RXtime_Y0_hu;                 /* Computed Parameter: RXtime_Y0_hu
                                        * Referenced by: '<S587>/RX time'
                                        */
  real_T RXdeltatime_Y0_lw;            /* Computed Parameter: RXdeltatime_Y0_lw
                                        * Referenced by: '<S587>/RX delta time'
                                        */
  real_T byte1_Y0_g;                   /* Computed Parameter: byte1_Y0_g
                                        * Referenced by: '<S592>/byte1'
                                        */
  real_T byte2_Y0_n;                   /* Computed Parameter: byte2_Y0_n
                                        * Referenced by: '<S592>/byte2'
                                        */
  real_T byte3_Y0_m;                   /* Computed Parameter: byte3_Y0_m
                                        * Referenced by: '<S592>/byte3'
                                        */
  real_T byte4_Y0_l;                   /* Computed Parameter: byte4_Y0_l
                                        * Referenced by: '<S592>/byte4'
                                        */
  real_T byte5_Y0_c;                   /* Computed Parameter: byte5_Y0_c
                                        * Referenced by: '<S592>/byte5'
                                        */
  real_T byte6_Y0_m;                   /* Computed Parameter: byte6_Y0_m
                                        * Referenced by: '<S592>/byte6'
                                        */
  real_T byte7_Y0_i;                   /* Computed Parameter: byte7_Y0_i
                                        * Referenced by: '<S592>/byte7'
                                        */
  real_T byte8_Y0_m;                   /* Computed Parameter: byte8_Y0_m
                                        * Referenced by: '<S592>/byte8'
                                        */
  real_T RXstatus_Y0_fg;               /* Computed Parameter: RXstatus_Y0_fg
                                        * Referenced by: '<S592>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S592>/RX time'
                                        */
  real_T RXdeltatime_Y0_pn;            /* Computed Parameter: RXdeltatime_Y0_pn
                                        * Referenced by: '<S592>/RX delta time'
                                        */
  real_T byte1_Y0_j;                   /* Computed Parameter: byte1_Y0_j
                                        * Referenced by: '<S593>/byte1'
                                        */
  real_T byte2_Y0_m;                   /* Computed Parameter: byte2_Y0_m
                                        * Referenced by: '<S593>/byte2'
                                        */
  real_T byte3_Y0_f;                   /* Computed Parameter: byte3_Y0_f
                                        * Referenced by: '<S593>/byte3'
                                        */
  real_T byte4_Y0_e;                   /* Computed Parameter: byte4_Y0_e
                                        * Referenced by: '<S593>/byte4'
                                        */
  real_T byte5_Y0_f;                   /* Computed Parameter: byte5_Y0_f
                                        * Referenced by: '<S593>/byte5'
                                        */
  real_T byte6_Y0_my;                  /* Computed Parameter: byte6_Y0_my
                                        * Referenced by: '<S593>/byte6'
                                        */
  real_T byte7_Y0_l;                   /* Computed Parameter: byte7_Y0_l
                                        * Referenced by: '<S593>/byte7'
                                        */
  real_T byte8_Y0_d;                   /* Computed Parameter: byte8_Y0_d
                                        * Referenced by: '<S593>/byte8'
                                        */
  real_T RXstatus_Y0_go;               /* Computed Parameter: RXstatus_Y0_go
                                        * Referenced by: '<S593>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S593>/RX time'
                                        */
  real_T RXdeltatime_Y0_am;            /* Computed Parameter: RXdeltatime_Y0_am
                                        * Referenced by: '<S593>/RX delta time'
                                        */
  real_T byte1_Y0_l;                   /* Computed Parameter: byte1_Y0_l
                                        * Referenced by: '<S594>/byte1'
                                        */
  real_T byte2_Y0_o;                   /* Computed Parameter: byte2_Y0_o
                                        * Referenced by: '<S594>/byte2'
                                        */
  real_T byte3_Y0_b;                   /* Computed Parameter: byte3_Y0_b
                                        * Referenced by: '<S594>/byte3'
                                        */
  real_T byte4_Y0_f;                   /* Computed Parameter: byte4_Y0_f
                                        * Referenced by: '<S594>/byte4'
                                        */
  real_T byte5_Y0_g;                   /* Computed Parameter: byte5_Y0_g
                                        * Referenced by: '<S594>/byte5'
                                        */
  real_T byte6_Y0_e;                   /* Computed Parameter: byte6_Y0_e
                                        * Referenced by: '<S594>/byte6'
                                        */
  real_T byte7_Y0_i0;                  /* Computed Parameter: byte7_Y0_i0
                                        * Referenced by: '<S594>/byte7'
                                        */
  real_T byte8_Y0_h;                   /* Computed Parameter: byte8_Y0_h
                                        * Referenced by: '<S594>/byte8'
                                        */
  real_T RXstatus_Y0_pk;               /* Computed Parameter: RXstatus_Y0_pk
                                        * Referenced by: '<S594>/RX status'
                                        */
  real_T RXtime_Y0_cl;                 /* Computed Parameter: RXtime_Y0_cl
                                        * Referenced by: '<S594>/RX time'
                                        */
  real_T RXdeltatime_Y0_oj;            /* Computed Parameter: RXdeltatime_Y0_oj
                                        * Referenced by: '<S594>/RX delta time'
                                        */
  real_T byte1_Y0_k;                   /* Computed Parameter: byte1_Y0_k
                                        * Referenced by: '<S605>/byte1'
                                        */
  real_T byte2_Y0_b;                   /* Computed Parameter: byte2_Y0_b
                                        * Referenced by: '<S605>/byte2'
                                        */
  real_T byte3_Y0_c;                   /* Computed Parameter: byte3_Y0_c
                                        * Referenced by: '<S605>/byte3'
                                        */
  real_T byte4_Y0_kh;                  /* Computed Parameter: byte4_Y0_kh
                                        * Referenced by: '<S605>/byte4'
                                        */
  real_T byte5_Y0_fc;                  /* Computed Parameter: byte5_Y0_fc
                                        * Referenced by: '<S605>/byte5'
                                        */
  real_T byte6_Y0_f;                   /* Computed Parameter: byte6_Y0_f
                                        * Referenced by: '<S605>/byte6'
                                        */
  real_T byte7_Y0_l0;                  /* Computed Parameter: byte7_Y0_l0
                                        * Referenced by: '<S605>/byte7'
                                        */
  real_T byte8_Y0_g;                   /* Computed Parameter: byte8_Y0_g
                                        * Referenced by: '<S605>/byte8'
                                        */
  real_T RXstatus_Y0_pz;               /* Computed Parameter: RXstatus_Y0_pz
                                        * Referenced by: '<S605>/RX status'
                                        */
  real_T RXtime_Y0_lz;                 /* Computed Parameter: RXtime_Y0_lz
                                        * Referenced by: '<S605>/RX time'
                                        */
  real_T RXdeltatime_Y0_hu;            /* Computed Parameter: RXdeltatime_Y0_hu
                                        * Referenced by: '<S605>/RX delta time'
                                        */
  real_T byte1_Y0_o;                   /* Computed Parameter: byte1_Y0_o
                                        * Referenced by: '<S606>/byte1'
                                        */
  real_T byte2_Y0_p;                   /* Computed Parameter: byte2_Y0_p
                                        * Referenced by: '<S606>/byte2'
                                        */
  real_T byte3_Y0_i;                   /* Computed Parameter: byte3_Y0_i
                                        * Referenced by: '<S606>/byte3'
                                        */
  real_T byte4_Y0_m;                   /* Computed Parameter: byte4_Y0_m
                                        * Referenced by: '<S606>/byte4'
                                        */
  real_T byte5_Y0_cn;                  /* Computed Parameter: byte5_Y0_cn
                                        * Referenced by: '<S606>/byte5'
                                        */
  real_T byte6_Y0_j;                   /* Computed Parameter: byte6_Y0_j
                                        * Referenced by: '<S606>/byte6'
                                        */
  real_T byte7_Y0_j;                   /* Computed Parameter: byte7_Y0_j
                                        * Referenced by: '<S606>/byte7'
                                        */
  real_T byte8_Y0_ho;                  /* Computed Parameter: byte8_Y0_ho
                                        * Referenced by: '<S606>/byte8'
                                        */
  real_T RXstatus_Y0_ku;               /* Computed Parameter: RXstatus_Y0_ku
                                        * Referenced by: '<S606>/RX status'
                                        */
  real_T RXtime_Y0_dj;                 /* Computed Parameter: RXtime_Y0_dj
                                        * Referenced by: '<S606>/RX time'
                                        */
  real_T RXdeltatime_Y0_jj;            /* Computed Parameter: RXdeltatime_Y0_jj
                                        * Referenced by: '<S606>/RX delta time'
                                        */
  real_T byte1_Y0_f;                   /* Computed Parameter: byte1_Y0_f
                                        * Referenced by: '<S607>/byte1'
                                        */
  real_T byte2_Y0_f;                   /* Computed Parameter: byte2_Y0_f
                                        * Referenced by: '<S607>/byte2'
                                        */
  real_T byte3_Y0_l;                   /* Computed Parameter: byte3_Y0_l
                                        * Referenced by: '<S607>/byte3'
                                        */
  real_T byte4_Y0_a;                   /* Computed Parameter: byte4_Y0_a
                                        * Referenced by: '<S607>/byte4'
                                        */
  real_T byte5_Y0_a;                   /* Computed Parameter: byte5_Y0_a
                                        * Referenced by: '<S607>/byte5'
                                        */
  real_T byte6_Y0_o;                   /* Computed Parameter: byte6_Y0_o
                                        * Referenced by: '<S607>/byte6'
                                        */
  real_T byte7_Y0_p;                   /* Computed Parameter: byte7_Y0_p
                                        * Referenced by: '<S607>/byte7'
                                        */
  real_T byte8_Y0_n2;                  /* Computed Parameter: byte8_Y0_n2
                                        * Referenced by: '<S607>/byte8'
                                        */
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S607>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S607>/RX time'
                                        */
  real_T RXdeltatime_Y0_o0;            /* Computed Parameter: RXdeltatime_Y0_o0
                                        * Referenced by: '<S607>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S618>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S618>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_e0;               /* Computed Parameter: RXstatus_Y0_e0
                                        * Referenced by: '<S618>/RX status'
                                        */
  real_T RXtime_Y0_d5;                 /* Computed Parameter: RXtime_Y0_d5
                                        * Referenced by: '<S618>/RX time'
                                        */
  real_T RXdeltatime_Y0_ee;            /* Computed Parameter: RXdeltatime_Y0_ee
                                        * Referenced by: '<S618>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_e;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_e
                                          * Referenced by: '<S619>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_g;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_g
                                          * Referenced by: '<S619>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S619>/RX status'
                                        */
  real_T RXtime_Y0_cf;                 /* Computed Parameter: RXtime_Y0_cf
                                        * Referenced by: '<S619>/RX time'
                                        */
  real_T RXdeltatime_Y0_oy;            /* Computed Parameter: RXdeltatime_Y0_oy
                                        * Referenced by: '<S619>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_a;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_a
                                          * Referenced by: '<S620>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_k;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_k
                                          * Referenced by: '<S620>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_ll;               /* Computed Parameter: RXstatus_Y0_ll
                                        * Referenced by: '<S620>/RX status'
                                        */
  real_T RXtime_Y0_in;                 /* Computed Parameter: RXtime_Y0_in
                                        * Referenced by: '<S620>/RX time'
                                        */
  real_T RXdeltatime_Y0_jk;            /* Computed Parameter: RXdeltatime_Y0_jk
                                        * Referenced by: '<S620>/RX delta time'
                                        */
  real_T PX2_LaneEdgeLeftAngle_Y0;     /* Computed Parameter: PX2_LaneEdgeLeftAngle_Y0
                                        * Referenced by: '<S628>/PX2_LaneEdgeLeftAngle'
                                        */
  real_T PX2_LaneEdgeLeftNumPoints_Y0; /* Computed Parameter: PX2_LaneEdgeLeftNumPoints_Y0
                                        * Referenced by: '<S628>/PX2_LaneEdgeLeftNumPoints'
                                        */
  real_T PX2_LaneEdgeLeftPosition_Y0;  /* Computed Parameter: PX2_LaneEdgeLeftPosition_Y0
                                        * Referenced by: '<S628>/PX2_LaneEdgeLeftPosition'
                                        */
  real_T RXstatus_Y0_nm;               /* Computed Parameter: RXstatus_Y0_nm
                                        * Referenced by: '<S628>/RX status'
                                        */
  real_T RXtime_Y0_g1;                 /* Computed Parameter: RXtime_Y0_g1
                                        * Referenced by: '<S628>/RX time'
                                        */
  real_T RXdeltatime_Y0_go;            /* Computed Parameter: RXdeltatime_Y0_go
                                        * Referenced by: '<S628>/RX delta time'
                                        */
  real_T PX2_LaneEdgeRightAngle_Y0;    /* Computed Parameter: PX2_LaneEdgeRightAngle_Y0
                                        * Referenced by: '<S629>/PX2_LaneEdgeRightAngle'
                                        */
  real_T PX2_LaneEdgeRightNumPoints_Y0;/* Computed Parameter: PX2_LaneEdgeRightNumPoints_Y0
                                        * Referenced by: '<S629>/PX2_LaneEdgeRightNumPoints'
                                        */
  real_T PX2_LaneEdgeRightPosition_Y0; /* Computed Parameter: PX2_LaneEdgeRightPosition_Y0
                                        * Referenced by: '<S629>/PX2_LaneEdgeRightPosition'
                                        */
  real_T RXstatus_Y0_ir;               /* Computed Parameter: RXstatus_Y0_ir
                                        * Referenced by: '<S629>/RX status'
                                        */
  real_T RXtime_Y0_g10;                /* Computed Parameter: RXtime_Y0_g10
                                        * Referenced by: '<S629>/RX time'
                                        */
  real_T RXdeltatime_Y0_o3;            /* Computed Parameter: RXdeltatime_Y0_o3
                                        * Referenced by: '<S629>/RX delta time'
                                        */
  real_T PX2_LanePosEstAngle_Y0;       /* Computed Parameter: PX2_LanePosEstAngle_Y0
                                        * Referenced by: '<S630>/PX2_LanePosEstAngle'
                                        */
  real_T PX2_LanePosEstNumPoints_Y0;   /* Computed Parameter: PX2_LanePosEstNumPoints_Y0
                                        * Referenced by: '<S630>/PX2_LanePosEstNumPoints'
                                        */
  real_T PX2_LanePosEstPosition_Y0;    /* Computed Parameter: PX2_LanePosEstPosition_Y0
                                        * Referenced by: '<S630>/PX2_LanePosEstPosition'
                                        */
  real_T PX2_LanePosEstNumLanes_Y0;    /* Computed Parameter: PX2_LanePosEstNumLanes_Y0
                                        * Referenced by: '<S630>/PX2_LanePosEstNumLanes'
                                        */
  real_T RXstatus_Y0_pt;               /* Computed Parameter: RXstatus_Y0_pt
                                        * Referenced by: '<S630>/RX status'
                                        */
  real_T RXtime_Y0_pg;                 /* Computed Parameter: RXtime_Y0_pg
                                        * Referenced by: '<S630>/RX time'
                                        */
  real_T RXdeltatime_Y0_huf;           /* Computed Parameter: RXdeltatime_Y0_huf
                                        * Referenced by: '<S630>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S632>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S632>/Longitude_'
                                        */
  real_T RXstatus_Y0_db;               /* Computed Parameter: RXstatus_Y0_db
                                        * Referenced by: '<S632>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S632>/RX time'
                                        */
  real_T RXdeltatime_Y0_h2;            /* Computed Parameter: RXdeltatime_Y0_h2
                                        * Referenced by: '<S632>/RX delta time'
                                        */
  real_T Latitude_Y0_e;                /* Computed Parameter: Latitude_Y0_e
                                        * Referenced by: '<S633>/Latitude_'
                                        */
  real_T Longitude_Y0_f;               /* Computed Parameter: Longitude_Y0_f
                                        * Referenced by: '<S633>/Longitude_'
                                        */
  real_T RXstatus_Y0_m5;               /* Computed Parameter: RXstatus_Y0_m5
                                        * Referenced by: '<S633>/RX status'
                                        */
  real_T RXtime_Y0_c4;                 /* Computed Parameter: RXtime_Y0_c4
                                        * Referenced by: '<S633>/RX time'
                                        */
  real_T RXdeltatime_Y0_fd;            /* Computed Parameter: RXdeltatime_Y0_fd
                                        * Referenced by: '<S633>/RX delta time'
                                        */
  real_T PressureP4_Y0;                /* Computed Parameter: PressureP4_Y0
                                        * Referenced by: '<S635>/PressureP4'
                                        */
  real_T PressureP1_Y0;                /* Computed Parameter: PressureP1_Y0
                                        * Referenced by: '<S635>/PressureP1'
                                        */
  real_T PressureP21_Y0;               /* Computed Parameter: PressureP21_Y0
                                        * Referenced by: '<S635>/PressureP21'
                                        */
  real_T PressureP22_Y0;               /* Computed Parameter: PressureP22_Y0
                                        * Referenced by: '<S635>/PressureP22'
                                        */
  real_T PressureP42_Y0;               /* Computed Parameter: PressureP42_Y0
                                        * Referenced by: '<S635>/PressureP42'
                                        */
  real_T XPR1ControlStatus_Y0;         /* Computed Parameter: XPR1ControlStatus_Y0
                                        * Referenced by: '<S635>/XPR1ControlStatus'
                                        */
  real_T XPR2ControlStatus_Y0;         /* Computed Parameter: XPR2ControlStatus_Y0
                                        * Referenced by: '<S635>/XPR2ControlStatus'
                                        */
  real_T XPR3ControlStatus_Y0;         /* Computed Parameter: XPR3ControlStatus_Y0
                                        * Referenced by: '<S635>/XPR3ControlStatus'
                                        */
  real_T XPRErrorState_Y0;             /* Computed Parameter: XPRErrorState_Y0
                                        * Referenced by: '<S635>/XPRErrorState'
                                        */
  real_T XPRControlMode_Y0;            /* Computed Parameter: XPRControlMode_Y0
                                        * Referenced by: '<S635>/XPRControlMode'
                                        */
  real_T RXstatus_Y0_f1;               /* Computed Parameter: RXstatus_Y0_f1
                                        * Referenced by: '<S635>/RX status'
                                        */
  real_T RXtime_Y0_hc;                 /* Computed Parameter: RXtime_Y0_hc
                                        * Referenced by: '<S635>/RX time'
                                        */
  real_T RXdeltatime_Y0_cy;            /* Computed Parameter: RXdeltatime_Y0_cy
                                        * Referenced by: '<S635>/RX delta time'
                                        */
  real_T PitchAngleExRange_Y0;         /* Computed Parameter: PitchAngleExRange_Y0
                                        * Referenced by: '<S637>/PitchAngleExRange'
                                        */
  real_T RollAngleExRange_Y0;          /* Computed Parameter: RollAngleExRange_Y0
                                        * Referenced by: '<S637>/RollAngleExRange'
                                        */
  real_T PitchAngleExRangeCompensation_Y;/* Computed Parameter: PitchAngleExRangeCompensation_Y
                                          * Referenced by: '<S637>/PitchAngleExRangeCompensation'
                                          */
  real_T PitchAngleExRangeFigureOfMerit_;/* Computed Parameter: PitchAngleExRangeFigureOfMerit_
                                          * Referenced by: '<S637>/PitchAngleExRangeFigureOfMerit'
                                          */
  real_T RollAngleExRangeCompensation_Y0;/* Computed Parameter: RollAngleExRangeCompensation_Y0
                                          * Referenced by: '<S637>/RollAngleExRangeCompensation'
                                          */
  real_T RollAngleExRangeFigureOfMerit_Y;/* Computed Parameter: RollAngleExRangeFigureOfMerit_Y
                                          * Referenced by: '<S637>/RollAngleExRangeFigureOfMerit'
                                          */
  real_T RllAndPtchExRngMsurementLatency;/* Computed Parameter: RllAndPtchExRngMsurementLatency
                                          * Referenced by: '<S637>/RllAndPtchExRngMsurementLatency'
                                          */
  real_T RXstatus_Y0_gi;               /* Computed Parameter: RXstatus_Y0_gi
                                        * Referenced by: '<S637>/RX status'
                                        */
  real_T RXtime_Y0_ba;                 /* Computed Parameter: RXtime_Y0_ba
                                        * Referenced by: '<S637>/RX time'
                                        */
  real_T RXdeltatime_Y0_jh;            /* Computed Parameter: RXdeltatime_Y0_jh
                                        * Referenced by: '<S637>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0;        /* Computed Parameter: PX2_MapLaneNearPos_Y0
                                        * Referenced by: '<S639>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0;         /* Computed Parameter: PX2_MapLaneMidPos_Y0
                                        * Referenced by: '<S639>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0;         /* Computed Parameter: PX2_MapLaneFarPos_Y0
                                        * Referenced by: '<S639>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0;   /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0
                                        * Referenced by: '<S639>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0
                                        * Referenced by: '<S639>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0
                                        * Referenced by: '<S639>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_a5;               /* Computed Parameter: RXstatus_Y0_a5
                                        * Referenced by: '<S639>/RX status'
                                        */
  real_T RXtime_Y0_bt;                 /* Computed Parameter: RXtime_Y0_bt
                                        * Referenced by: '<S639>/RX time'
                                        */
  real_T RXdeltatime_Y0_br;            /* Computed Parameter: RXdeltatime_Y0_br
                                        * Referenced by: '<S639>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_k;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_k
                                        * Referenced by: '<S641>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_i;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_i
                                        * Referenced by: '<S641>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_d;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_d
                                        * Referenced by: '<S641>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_o; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_o
                                        * Referenced by: '<S641>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_a;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_a
                                        * Referenced by: '<S641>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_m;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_m
                                        * Referenced by: '<S641>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_i2t;              /* Computed Parameter: RXstatus_Y0_i2t
                                        * Referenced by: '<S641>/RX status'
                                        */
  real_T RXtime_Y0_ew;                 /* Computed Parameter: RXtime_Y0_ew
                                        * Referenced by: '<S641>/RX time'
                                        */
  real_T RXdeltatime_Y0_ei;            /* Computed Parameter: RXdeltatime_Y0_ei
                                        * Referenced by: '<S641>/RX delta time'
                                        */
  real_T PX2_EgoLaneNearPosErr_Y0;     /* Computed Parameter: PX2_EgoLaneNearPosErr_Y0
                                        * Referenced by: '<S643>/PX2_EgoLaneNearPosErr'
                                        */
  real_T PX2_EgoLaneMidPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneMidPosErr_Y0
                                        * Referenced by: '<S643>/PX2_EgoLaneMidPosErr'
                                        */
  real_T PX2_EgoLaneFarPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneFarPosErr_Y0
                                        * Referenced by: '<S643>/PX2_EgoLaneFarPosErr'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_e; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_e
                                        * Referenced by: '<S643>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_p;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_p
                                        * Referenced by: '<S643>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_c;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_c
                                        * Referenced by: '<S643>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_jn;               /* Computed Parameter: RXstatus_Y0_jn
                                        * Referenced by: '<S643>/RX status'
                                        */
  real_T RXtime_Y0_hp;                 /* Computed Parameter: RXtime_Y0_hp
                                        * Referenced by: '<S643>/RX time'
                                        */
  real_T RXdeltatime_Y0_au;            /* Computed Parameter: RXdeltatime_Y0_au
                                        * Referenced by: '<S643>/RX delta time'
                                        */
  real_T SID_Y0_b;                     /* Computed Parameter: SID_Y0_b
                                        * Referenced by: '<S645>/SID'
                                        */
  real_T Source_Y0;                    /* Computed Parameter: Source_Y0
                                        * Referenced by: '<S645>/Source'
                                        */
  real_T Date_Y0;                      /* Computed Parameter: Date_Y0
                                        * Referenced by: '<S645>/Date'
                                        */
  real_T Time_Y0;                      /* Computed Parameter: Time_Y0
                                        * Referenced by: '<S645>/Time'
                                        */
  real_T RXstatus_Y0_e2;               /* Computed Parameter: RXstatus_Y0_e2
                                        * Referenced by: '<S645>/RX status'
                                        */
  real_T RXtime_Y0_dm;                 /* Computed Parameter: RXtime_Y0_dm
                                        * Referenced by: '<S645>/RX time'
                                        */
  real_T RXdeltatime_Y0_fb;            /* Computed Parameter: RXdeltatime_Y0_fb
                                        * Referenced by: '<S645>/RX delta time'
                                        */
  real_T SPN681_TransGearShiftInhibitReq;/* Computed Parameter: SPN681_TransGearShiftInhibitReq
                                          * Referenced by: '<S647>/SPN681_TransGearShiftInhibitReq'
                                          */
  real_T SPN682_TransTrqConvLockupDisReq;/* Computed Parameter: SPN682_TransTrqConvLockupDisReq
                                          * Referenced by: '<S647>/SPN682_TransTrqConvLockupDisReq'
                                          */
  real_T SPN683_DisengageDrivelineReq_Y0;/* Computed Parameter: SPN683_DisengageDrivelineReq_Y0
                                          * Referenced by: '<S647>/SPN683_DisengageDrivelineReq'
                                          */
  real_T SPN4242_TransRevGearShiftInhibR;/* Computed Parameter: SPN4242_TransRevGearShiftInhibR
                                          * Referenced by: '<S647>/SPN4242_TransRevGearShiftInhibRq'
                                          */
  real_T SPN684_RequestedPercClutchSlip_;/* Computed Parameter: SPN684_RequestedPercClutchSlip_
                                          * Referenced by: '<S647>/SPN684_RequestedPercClutchSlip'
                                          */
  real_T SPN525_TransRequestedGear_Y0; /* Computed Parameter: SPN525_TransRequestedGear_Y0
                                        * Referenced by: '<S647>/SPN525_TransRequestedGear'
                                        */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* Computed Parameter: SPN685_DisengageDiffLockRqFrAx1
                                          * Referenced by: '<S647>/SPN685_DisengageDiffLockRqFrAx1'
                                          */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* Computed Parameter: SPN686_DisengageDiffLockRqFrAx2
                                          * Referenced by: '<S647>/SPN686_DisengageDiffLockRqFrAx2'
                                          */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* Computed Parameter: SPN687_DisengageDiffLockRqRrAx1
                                          * Referenced by: '<S647>/SPN687_DisengageDiffLockRqRrAx1'
                                          */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* Computed Parameter: SPN688_DisengageDiffLockRqRrAx2
                                          * Referenced by: '<S647>/SPN688_DisengageDiffLockRqRrAx2'
                                          */
  real_T SPN689_DisengageDiffLockRqC_Y0;/* Computed Parameter: SPN689_DisengageDiffLockRqC_Y0
                                         * Referenced by: '<S647>/SPN689_DisengageDiffLockRqC'
                                         */
  real_T SPN690_DisengageDiffLockRqCF_Y0;/* Computed Parameter: SPN690_DisengageDiffLockRqCF_Y0
                                          * Referenced by: '<S647>/SPN690_DisengageDiffLockRqCF'
                                          */
  real_T SPN691_DisengageDiffLockRqCR_Y0;/* Computed Parameter: SPN691_DisengageDiffLockRqCR_Y0
                                          * Referenced by: '<S647>/SPN691_DisengageDiffLockRqCR'
                                          */
  real_T SPN5762_TransLoadRedInhibitRq_Y;/* Computed Parameter: SPN5762_TransLoadRedInhibitRq_Y
                                          * Referenced by: '<S647>/SPN5762_TransLoadRedInhibitRq'
                                          */
  real_T SPN1852_TransmissionMode1_Y0; /* Computed Parameter: SPN1852_TransmissionMode1_Y0
                                        * Referenced by: '<S647>/SPN1852_TransmissionMode1'
                                        */
  real_T SPN1853_TransmissionMode2_Y0; /* Computed Parameter: SPN1853_TransmissionMode2_Y0
                                        * Referenced by: '<S647>/SPN1853_TransmissionMode2'
                                        */
  real_T SPN1854_TransmissionMode3_Y0; /* Computed Parameter: SPN1854_TransmissionMode3_Y0
                                        * Referenced by: '<S647>/SPN1854_TransmissionMode3'
                                        */
  real_T SPN1855_TransmissionMode4_Y0; /* Computed Parameter: SPN1855_TransmissionMode4_Y0
                                        * Referenced by: '<S647>/SPN1855_TransmissionMode4'
                                        */
  real_T SPN7695_TransAutoNeutralRequest;/* Computed Parameter: SPN7695_TransAutoNeutralRequest
                                          * Referenced by: '<S647>/SPN7695_TransAutoNeutralRequest'
                                          */
  real_T SPN4255_TransRequestedLaunchGea;/* Computed Parameter: SPN4255_TransRequestedLaunchGea
                                          * Referenced by: '<S647>/SPN4255_TransRequestedLaunchGear'
                                          */
  real_T SPN2985_TransShiftSelDispModeSw;/* Computed Parameter: SPN2985_TransShiftSelDispModeSw
                                          * Referenced by: '<S647>/SPN2985_TransShiftSelDispModeSw'
                                          */
  real_T SPN4246_TransmissionMode5_Y0; /* Computed Parameter: SPN4246_TransmissionMode5_Y0
                                        * Referenced by: '<S647>/SPN4246_TransmissionMode5'
                                        */
  real_T SPN4247_TransmissionMode6_Y0; /* Computed Parameter: SPN4247_TransmissionMode6_Y0
                                        * Referenced by: '<S647>/SPN4247_TransmissionMode6'
                                        */
  real_T SPN4248_TransmissionMode7_Y0; /* Computed Parameter: SPN4248_TransmissionMode7_Y0
                                        * Referenced by: '<S647>/SPN4248_TransmissionMode7'
                                        */
  real_T SPN4249_TransmissionMode8_Y0; /* Computed Parameter: SPN4249_TransmissionMode8_Y0
                                        * Referenced by: '<S647>/SPN4249_TransmissionMode8'
                                        */
  real_T RXstatus_Y0_n5k;              /* Computed Parameter: RXstatus_Y0_n5k
                                        * Referenced by: '<S647>/RX status'
                                        */
  real_T RXtime_Y0_pt;                 /* Computed Parameter: RXtime_Y0_pt
                                        * Referenced by: '<S647>/RX time'
                                        */
  real_T RXdeltatime_Y0_kp;            /* Computed Parameter: RXdeltatime_Y0_kp
                                        * Referenced by: '<S647>/RX delta time'
                                        */
  real_T VDCInformationSignal_Y0;      /* Computed Parameter: VDCInformationSignal_Y0
                                        * Referenced by: '<S649>/VDCInformationSignal'
                                        */
  real_T VDCFullyOperational_Y0;       /* Computed Parameter: VDCFullyOperational_Y0
                                        * Referenced by: '<S649>/VDCFullyOperational'
                                        */
  real_T VDCBrakeLightRq_Y0;           /* Computed Parameter: VDCBrakeLightRq_Y0
                                        * Referenced by: '<S649>/VDCBrakeLightRq'
                                        */
  real_T ROPEngCtrlActive_Y0;          /* Computed Parameter: ROPEngCtrlActive_Y0
                                        * Referenced by: '<S649>/ROPEngCtrlActive'
                                        */
  real_T ROPBrakeCtrlActive_Y0;        /* Computed Parameter: ROPBrakeCtrlActive_Y0
                                        * Referenced by: '<S649>/ROPBrakeCtrlActive'
                                        */
  real_T YCEngCtrlActive_Y0;           /* Computed Parameter: YCEngCtrlActive_Y0
                                        * Referenced by: '<S649>/YCEngCtrlActive'
                                        */
  real_T YCBrakeCtrlActive_Y0;         /* Computed Parameter: YCBrakeCtrlActive_Y0
                                        * Referenced by: '<S649>/YCBrakeCtrlActive'
                                        */
  real_T RXstatus_Y0_gk;               /* Computed Parameter: RXstatus_Y0_gk
                                        * Referenced by: '<S649>/RX status'
                                        */
  real_T RXtime_Y0_hl;                 /* Computed Parameter: RXtime_Y0_hl
                                        * Referenced by: '<S649>/RX time'
                                        */
  real_T RXdeltatime_Y0_ot;            /* Computed Parameter: RXdeltatime_Y0_ot
                                        * Referenced by: '<S649>/RX delta time'
                                        */
  real_T SteerWheelAngle_Y0;           /* Computed Parameter: SteerWheelAngle_Y0
                                        * Referenced by: '<S651>/SteerWheelAngle'
                                        */
  real_T SteerWheelTurnCounter_Y0;     /* Computed Parameter: SteerWheelTurnCounter_Y0
                                        * Referenced by: '<S651>/SteerWheelTurnCounter'
                                        */
  real_T SteerWheelAngleSensorType_Y0; /* Computed Parameter: SteerWheelAngleSensorType_Y0
                                        * Referenced by: '<S651>/SteerWheelAngleSensorType'
                                        */
  real_T YawRate_Y0;                   /* Computed Parameter: YawRate_Y0
                                        * Referenced by: '<S651>/YawRate'
                                        */
  real_T LateralAcceleration_Y0;       /* Computed Parameter: LateralAcceleration_Y0
                                        * Referenced by: '<S651>/LateralAcceleration'
                                        */
  real_T LongitudinalAcceleration_Y0;  /* Computed Parameter: LongitudinalAcceleration_Y0
                                        * Referenced by: '<S651>/LongitudinalAcceleration'
                                        */
  real_T RXstatus_Y0_k0m;              /* Computed Parameter: RXstatus_Y0_k0m
                                        * Referenced by: '<S651>/RX status'
                                        */
  real_T RXtime_Y0_jd;                 /* Computed Parameter: RXtime_Y0_jd
                                        * Referenced by: '<S651>/RX time'
                                        */
  real_T RXdeltatime_Y0_nx;            /* Computed Parameter: RXdeltatime_Y0_nx
                                        * Referenced by: '<S651>/RX delta time'
                                        */
  real_T NetBatteryCurrent_Y0;         /* Computed Parameter: NetBatteryCurrent_Y0
                                        * Referenced by: '<S653>/NetBatteryCurrent'
                                        */
  real_T AltCurrent_Y0;                /* Computed Parameter: AltCurrent_Y0
                                        * Referenced by: '<S653>/AltCurrent'
                                        */
  real_T ChargingSystemPotential_Y0;   /* Computed Parameter: ChargingSystemPotential_Y0
                                        * Referenced by: '<S653>/ChargingSystemPotential'
                                        */
  real_T BatteryPotential_PowerInput1_Y0;/* Computed Parameter: BatteryPotential_PowerInput1_Y0
                                          * Referenced by: '<S653>/BatteryPotential_PowerInput1'
                                          */
  real_T KeyswitchBatteryPotential_Y0; /* Computed Parameter: KeyswitchBatteryPotential_Y0
                                        * Referenced by: '<S653>/KeyswitchBatteryPotential'
                                        */
  real_T RXstatus_Y0_bs;               /* Computed Parameter: RXstatus_Y0_bs
                                        * Referenced by: '<S653>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S653>/RX time'
                                        */
  real_T RXdeltatime_Y0_ky5;           /* Computed Parameter: RXdeltatime_Y0_ky5
                                        * Referenced by: '<S653>/RX delta time'
                                        */
  real_T RX_time_Y0_n;                 /* Computed Parameter: RX_time_Y0_n
                                        * Referenced by: '<S657>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_a;/* Expression: 0
                                        * Referenced by: '<S657>/Unit_Delay'
                                        */
  real_T Out_Y0_f;                     /* Computed Parameter: Out_Y0_f
                                        * Referenced by: '<S693>/Out'
                                        */
  real_T Out_Y0_l;                     /* Computed Parameter: Out_Y0_l
                                        * Referenced by: '<S694>/Out'
                                        */
  real_T Out_Y0_a;                     /* Computed Parameter: Out_Y0_a
                                        * Referenced by: '<S695>/Out'
                                        */
  real_T Out_Y0_d;                     /* Computed Parameter: Out_Y0_d
                                        * Referenced by: '<S696>/Out'
                                        */
  real_T Out_Y0_k;                     /* Computed Parameter: Out_Y0_k
                                        * Referenced by: '<S697>/Out'
                                        */
  real_T Constant0_Value_n;            /* Expression: 0
                                        * Referenced by: '<S754>/Constant0'
                                        */
  real_T Constant1_Value_ma;           /* Expression: 1
                                        * Referenced by: '<S754>/Constant1'
                                        */
  real_T Constant0_Value_l;            /* Expression: 0
                                        * Referenced by: '<S755>/Constant0'
                                        */
  real_T Constant1_Value_eu;           /* Expression: 1
                                        * Referenced by: '<S755>/Constant1'
                                        */
  real_T Constant0_Value_e;            /* Expression: 0
                                        * Referenced by: '<S762>/Constant0'
                                        */
  real_T Constant1_Value_pw;           /* Expression: 1
                                        * Referenced by: '<S762>/Constant1'
                                        */
  real_T Constant0_Value_g;            /* Expression: 0
                                        * Referenced by: '<S763>/Constant0'
                                        */
  real_T Constant1_Value_o0;           /* Expression: 1
                                        * Referenced by: '<S763>/Constant1'
                                        */
  real_T Out_Y0_h;                     /* Computed Parameter: Out_Y0_h
                                        * Referenced by: '<S773>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_i;/* Expression: 0.0
                                          * Referenced by: '<S848>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S773>/Constant1'
                                        */
  real_T Out1_Y0_c;                    /* Computed Parameter: Out1_Y0_c
                                        * Referenced by: '<S853>/Out1'
                                        */
  real_T Constant1_Value_pc;           /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S853>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_n;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S853>/Unit_Delay'
                                        */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S876>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S876>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S876>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S876>/TX delay time'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S884>/TX status'
                                        */
  real_T TXtime_Y0_c;                  /* Computed Parameter: TXtime_Y0_c
                                        * Referenced by: '<S884>/TX time'
                                        */
  real_T TXdeltatime_Y0_i;             /* Computed Parameter: TXdeltatime_Y0_i
                                        * Referenced by: '<S884>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g;             /* Computed Parameter: TXdelaytime_Y0_g
                                        * Referenced by: '<S884>/TX delay time'
                                        */
  real_T TXstatus_Y0_a;                /* Computed Parameter: TXstatus_Y0_a
                                        * Referenced by: '<S896>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S896>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S896>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S896>/TX delay time'
                                        */
  real_T TXstatus_Y0_p;                /* Computed Parameter: TXstatus_Y0_p
                                        * Referenced by: '<S897>/TX status'
                                        */
  real_T TXtime_Y0_j;                  /* Computed Parameter: TXtime_Y0_j
                                        * Referenced by: '<S897>/TX time'
                                        */
  real_T TXdeltatime_Y0_f;             /* Computed Parameter: TXdeltatime_Y0_f
                                        * Referenced by: '<S897>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_e;             /* Computed Parameter: TXdelaytime_Y0_e
                                        * Referenced by: '<S897>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S900>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S900>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S900>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S900>/TX delay time'
                                        */
  real_T TXstatus_Y0_au;               /* Computed Parameter: TXstatus_Y0_au
                                        * Referenced by: '<S901>/TX status'
                                        */
  real_T TXtime_Y0_l2;                 /* Computed Parameter: TXtime_Y0_l2
                                        * Referenced by: '<S901>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S901>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_f;             /* Computed Parameter: TXdelaytime_Y0_f
                                        * Referenced by: '<S901>/TX delay time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S916>/TX status'
                                        */
  real_T TXtime_Y0_jw;                 /* Computed Parameter: TXtime_Y0_jw
                                        * Referenced by: '<S916>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S916>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S916>/TX delay time'
                                        */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S917>/TX status'
                                        */
  real_T TXtime_Y0_e;                  /* Computed Parameter: TXtime_Y0_e
                                        * Referenced by: '<S917>/TX time'
                                        */
  real_T TXdeltatime_Y0_nq;            /* Computed Parameter: TXdeltatime_Y0_nq
                                        * Referenced by: '<S917>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_gr;            /* Computed Parameter: TXdelaytime_Y0_gr
                                        * Referenced by: '<S917>/TX delay time'
                                        */
  real_T TXstatus_Y0_p3;               /* Computed Parameter: TXstatus_Y0_p3
                                        * Referenced by: '<S919>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S919>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S919>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g0;            /* Computed Parameter: TXdelaytime_Y0_g0
                                        * Referenced by: '<S919>/TX delay time'
                                        */
  real_T TXstatus_Y0_jr;               /* Computed Parameter: TXstatus_Y0_jr
                                        * Referenced by: '<S921>/TX status'
                                        */
  real_T TXtime_Y0_d;                  /* Computed Parameter: TXtime_Y0_d
                                        * Referenced by: '<S921>/TX time'
                                        */
  real_T TXdeltatime_Y0_c;             /* Computed Parameter: TXdeltatime_Y0_c
                                        * Referenced by: '<S921>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i;             /* Computed Parameter: TXdelaytime_Y0_i
                                        * Referenced by: '<S921>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S934>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S942>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_bv;/* Expression: 0
                                         * Referenced by: '<S934>/Unit_Delay'
                                         */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S943>/Constant'
                                        */
  real_T TXstatus_Y0_c1;               /* Computed Parameter: TXstatus_Y0_c1
                                        * Referenced by: '<S945>/TX status'
                                        */
  real_T TXtime_Y0_i;                  /* Computed Parameter: TXtime_Y0_i
                                        * Referenced by: '<S945>/TX time'
                                        */
  real_T TXdeltatime_Y0_m;             /* Computed Parameter: TXdeltatime_Y0_m
                                        * Referenced by: '<S945>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h;             /* Computed Parameter: TXdelaytime_Y0_h
                                        * Referenced by: '<S945>/TX delay time'
                                        */
  real_T Constant_Value_jq;            /* Expression: 0
                                        * Referenced by: '<S898>/Constant'
                                        */
  real_T Constant1_Value_cb;           /* Expression: 1
                                        * Referenced by: '<S898>/Constant1'
                                        */
  real_T Constant_Value_pk;            /* Expression: 0
                                        * Referenced by: '<S899>/Constant'
                                        */
  real_T Constant1_Value_no;           /* Expression: 1
                                        * Referenced by: '<S899>/Constant1'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S918>/Constant'
                                        */
  real_T Constant1_Value_cj;           /* Expression: 1
                                        * Referenced by: '<S918>/Constant1'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S958>/TX status'
                                        */
  real_T TXtime_Y0_m;                  /* Computed Parameter: TXtime_Y0_m
                                        * Referenced by: '<S958>/TX time'
                                        */
  real_T TXdeltatime_Y0_j;             /* Computed Parameter: TXdeltatime_Y0_j
                                        * Referenced by: '<S958>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ed;            /* Computed Parameter: TXdelaytime_Y0_ed
                                        * Referenced by: '<S958>/TX delay time'
                                        */
  real_T TXstatus_Y0_d;                /* Computed Parameter: TXstatus_Y0_d
                                        * Referenced by: '<S967>/TX status'
                                        */
  real_T TXtime_Y0_fw;                 /* Computed Parameter: TXtime_Y0_fw
                                        * Referenced by: '<S967>/TX time'
                                        */
  real_T TXdeltatime_Y0_p;             /* Computed Parameter: TXdeltatime_Y0_p
                                        * Referenced by: '<S967>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_c;             /* Computed Parameter: TXdelaytime_Y0_c
                                        * Referenced by: '<S967>/TX delay time'
                                        */
  real_T TXstatus_Y0_n;                /* Computed Parameter: TXstatus_Y0_n
                                        * Referenced by: '<S968>/TX status'
                                        */
  real_T TXtime_Y0_mj;                 /* Computed Parameter: TXtime_Y0_mj
                                        * Referenced by: '<S968>/TX time'
                                        */
  real_T TXdeltatime_Y0_iq;            /* Computed Parameter: TXdeltatime_Y0_iq
                                        * Referenced by: '<S968>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_a;             /* Computed Parameter: TXdelaytime_Y0_a
                                        * Referenced by: '<S968>/TX delay time'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S971>/TX status'
                                        */
  real_T TXtime_Y0_p;                  /* Computed Parameter: TXtime_Y0_p
                                        * Referenced by: '<S971>/TX time'
                                        */
  real_T TXdeltatime_Y0_e;             /* Computed Parameter: TXdeltatime_Y0_e
                                        * Referenced by: '<S971>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ks;            /* Computed Parameter: TXdelaytime_Y0_ks
                                        * Referenced by: '<S971>/TX delay time'
                                        */
  real_T TXstatus_Y0_eu;               /* Computed Parameter: TXstatus_Y0_eu
                                        * Referenced by: '<S972>/TX status'
                                        */
  real_T TXtime_Y0_k;                  /* Computed Parameter: TXtime_Y0_k
                                        * Referenced by: '<S972>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S972>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ho;            /* Computed Parameter: TXdelaytime_Y0_ho
                                        * Referenced by: '<S972>/TX delay time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S980>/TX status'
                                        */
  real_T TXtime_Y0_jm;                 /* Computed Parameter: TXtime_Y0_jm
                                        * Referenced by: '<S980>/TX time'
                                        */
  real_T TXdeltatime_Y0_g0;            /* Computed Parameter: TXdeltatime_Y0_g0
                                        * Referenced by: '<S980>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d;             /* Computed Parameter: TXdelaytime_Y0_d
                                        * Referenced by: '<S980>/TX delay time'
                                        */
  real_T zero_Value_h;                 /* Expression: 0
                                        * Referenced by: '<S1000>/zero'
                                        */
  real_T Constant_Value_g2;            /* Expression: 8192/360
                                        * Referenced by: '<S1011>/Constant'
                                        */
  real_T Constant_Value_f4;            /* Expression: 0
                                        * Referenced by: '<S969>/Constant'
                                        */
  real_T Constant1_Value_lp;           /* Expression: 1
                                        * Referenced by: '<S969>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S1010>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S1010>/MN'
                                        */
  real_T Constant_Value_em;            /* Expression: 0
                                        * Referenced by: '<S970>/Constant'
                                        */
  real_T Constant1_Value_ad;           /* Expression: 1
                                        * Referenced by: '<S970>/Constant1'
                                        */
  real_T TXstatus_Y0_av;               /* Computed Parameter: TXstatus_Y0_av
                                        * Referenced by: '<S1025>/TX status'
                                        */
  real_T TXtime_Y0_f4;                 /* Computed Parameter: TXtime_Y0_f4
                                        * Referenced by: '<S1025>/TX time'
                                        */
  real_T TXdeltatime_Y0_ct;            /* Computed Parameter: TXdeltatime_Y0_ct
                                        * Referenced by: '<S1025>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kk;            /* Computed Parameter: TXdelaytime_Y0_kk
                                        * Referenced by: '<S1025>/TX delay time'
                                        */
  real_T TXstatus_Y0_pq;               /* Computed Parameter: TXstatus_Y0_pq
                                        * Referenced by: '<S1027>/TX status'
                                        */
  real_T TXtime_Y0_fx;                 /* Computed Parameter: TXtime_Y0_fx
                                        * Referenced by: '<S1027>/TX time'
                                        */
  real_T TXdeltatime_Y0_gj;            /* Computed Parameter: TXdeltatime_Y0_gj
                                        * Referenced by: '<S1027>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S1027>/TX delay time'
                                        */
  real_T TXstatus_Y0_ag;               /* Computed Parameter: TXstatus_Y0_ag
                                        * Referenced by: '<S1035>/TX status'
                                        */
  real_T TXtime_Y0_fu;                 /* Computed Parameter: TXtime_Y0_fu
                                        * Referenced by: '<S1035>/TX time'
                                        */
  real_T TXdeltatime_Y0_nc;            /* Computed Parameter: TXdeltatime_Y0_nc
                                        * Referenced by: '<S1035>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_en;            /* Computed Parameter: TXdelaytime_Y0_en
                                        * Referenced by: '<S1035>/TX delay time'
                                        */
  real_T Constant4_Value_k;            /* Expression: 0
                                        * Referenced by: '<S1021>/Constant4'
                                        */
  real_T Constant2_Value_i;            /* Expression: -15.687
                                        * Referenced by: '<S1021>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S1021>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S1021>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S1021>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S1021>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S1021>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S861>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S1020>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_fc;       /* Expression: 1
                                        * Referenced by: '<S1020>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: 0
                                        * Referenced by: '<S1020>/Saturation'
                                        */
  real_T Gain_Gain_pd;                 /* Expression: 100
                                        * Referenced by: '<S1020>/Gain'
                                        */
  real_T Gain_Gain_gn;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1037>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S1020>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S1020>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S1020>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_d;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1037>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S1021>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S1021>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_h;                /* Computed Parameter: TXstatus_Y0_h
                                        * Referenced by: '<S1051>/TX status'
                                        */
  real_T TXtime_Y0_gk;                 /* Computed Parameter: TXtime_Y0_gk
                                        * Referenced by: '<S1051>/TX time'
                                        */
  real_T TXdeltatime_Y0_eb;            /* Computed Parameter: TXdeltatime_Y0_eb
                                        * Referenced by: '<S1051>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_b;             /* Computed Parameter: TXdelaytime_Y0_b
                                        * Referenced by: '<S1051>/TX delay time'
                                        */
  real_T TXstatus_Y0_l;                /* Computed Parameter: TXstatus_Y0_l
                                        * Referenced by: '<S1062>/TX status'
                                        */
  real_T TXtime_Y0_gj;                 /* Computed Parameter: TXtime_Y0_gj
                                        * Referenced by: '<S1062>/TX time'
                                        */
  real_T TXdeltatime_Y0_go;            /* Computed Parameter: TXdeltatime_Y0_go
                                        * Referenced by: '<S1062>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_et;            /* Computed Parameter: TXdelaytime_Y0_et
                                        * Referenced by: '<S1062>/TX delay time'
                                        */
  real_T TXstatus_Y0_k2;               /* Computed Parameter: TXstatus_Y0_k2
                                        * Referenced by: '<S1063>/TX status'
                                        */
  real_T TXtime_Y0_ce;                 /* Computed Parameter: TXtime_Y0_ce
                                        * Referenced by: '<S1063>/TX time'
                                        */
  real_T TXdeltatime_Y0_oa;            /* Computed Parameter: TXdeltatime_Y0_oa
                                        * Referenced by: '<S1063>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kz;            /* Computed Parameter: TXdelaytime_Y0_kz
                                        * Referenced by: '<S1063>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S864>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_ih;               /* Computed Parameter: TXstatus_Y0_ih
                                        * Referenced by: '<S1070>/TX status'
                                        */
  real_T TXtime_Y0_ix;                 /* Computed Parameter: TXtime_Y0_ix
                                        * Referenced by: '<S1070>/TX time'
                                        */
  real_T TXdeltatime_Y0_iw;            /* Computed Parameter: TXdeltatime_Y0_iw
                                        * Referenced by: '<S1070>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S1070>/TX delay time'
                                        */
  real_T TXstatus_Y0_eu3;              /* Computed Parameter: TXstatus_Y0_eu3
                                        * Referenced by: '<S1071>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S1071>/TX time'
                                        */
  real_T TXdeltatime_Y0_e1;            /* Computed Parameter: TXdeltatime_Y0_e1
                                        * Referenced by: '<S1071>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p1;            /* Computed Parameter: TXdelaytime_Y0_p1
                                        * Referenced by: '<S1071>/TX delay time'
                                        */
  real_T TXstatus_Y0_dc;               /* Computed Parameter: TXstatus_Y0_dc
                                        * Referenced by: '<S1075>/TX status'
                                        */
  real_T TXtime_Y0_mc;                 /* Computed Parameter: TXtime_Y0_mc
                                        * Referenced by: '<S1075>/TX time'
                                        */
  real_T TXdeltatime_Y0_ny;            /* Computed Parameter: TXdeltatime_Y0_ny
                                        * Referenced by: '<S1075>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_hu;            /* Computed Parameter: TXdelaytime_Y0_hu
                                        * Referenced by: '<S1075>/TX delay time'
                                        */
  real_T UnitDelay_InitialCondition_e; /* Expression: 0
                                        * Referenced by: '<S763>/Unit Delay'
                                        */
  real_T UnitDelay_InitialCondition_eu;/* Expression: 0
                                        * Referenced by: '<S762>/Unit Delay'
                                        */
  real_T Constant_Value_hg;            /* Expression: 0
                                        * Referenced by: '<S766>/Constant'
                                        */
  real_T Constant3_Value_ga;           /* Expression: 500
                                        * Referenced by: '<S422>/Constant3'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 0.1
                                        * Referenced by: '<S762>/Gain'
                                        */
  real_T Constant_Value_o4;            /* Expression: 0
                                        * Referenced by: '<S767>/Constant'
                                        */
  real_T Constant2_Value_m5;           /* Expression: 1000
                                        * Referenced by: '<S422>/Constant2'
                                        */
  real_T Gain_Gain_k4;                 /* Expression: 0.1
                                        * Referenced by: '<S763>/Gain'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S769>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S769>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S769>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_e;/* Expression: 0.0
                                          * Referenced by: '<S802>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_b;        /* Expression: 1
                                        * Referenced by: '<S798>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_o;        /* Expression: 1
                                        * Referenced by: '<S801>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S769>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S769>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_pu;                 /* Expression: 100
                                        * Referenced by: '<S422>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S769>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S769>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dv;/* Expression: 0.0
                                          * Referenced by: '<S794>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_j;        /* Expression: 1
                                        * Referenced by: '<S790>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_oo;       /* Expression: 1
                                        * Referenced by: '<S793>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S769>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S769>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S769>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S769>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_im;/* Expression: 0.0
                                          * Referenced by: '<S818>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_a;        /* Expression: 1
                                        * Referenced by: '<S814>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_n;        /* Expression: 1
                                        * Referenced by: '<S817>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S769>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S769>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_ps;                /* Expression: 100
                                        * Referenced by: '<S422>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S769>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S769>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_h5;/* Expression: 0.0
                                          * Referenced by: '<S810>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_k;        /* Expression: 1
                                        * Referenced by: '<S806>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_oj;       /* Expression: 1
                                        * Referenced by: '<S809>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S769>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S769>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S769>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S772>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S772>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_ld;       /* Expression: Inf
                                        * Referenced by: '<S839>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0.0001
                                        * Referenced by: '<S839>/Saturation'
                                        */
  real_T Constant1_Value_cw;           /* Expression: 1
                                        * Referenced by: '<S839>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_d;/* Expression: 0
                                         * Referenced by: '<S839>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S772>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S772>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S772>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S772>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_b;        /* Expression: Inf
                                        * Referenced by: '<S840>/Saturation'
                                        */
  real_T Saturation_LowerSat_bz;       /* Expression: 0.0001
                                        * Referenced by: '<S840>/Saturation'
                                        */
  real_T Constant1_Value_cju;          /* Expression: 1
                                        * Referenced by: '<S840>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_i;/* Expression: 0
                                         * Referenced by: '<S840>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S772>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S772>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S750>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCondit_c;/* Expression: 0.0
                                          * Referenced by: '<S838>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_fz;/* Expression: 0.0
                                          * Referenced by: '<S837>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S774>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S774>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S769>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S769>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_a;/* Expression: 0.0
                                          * Referenced by: '<S826>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_by;       /* Expression: 1
                                        * Referenced by: '<S822>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_oy;       /* Expression: 1
                                        * Referenced by: '<S825>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_k;/* Expression: 25
                                          * Referenced by: '<S750>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_b;/* Expression: 25
                                          * Referenced by: '<S750>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S750>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S422>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S423>/Rate Transition'
                                          */
  real_T Constant_Value_ov;            /* Expression: 1
                                        * Referenced by: '<S456>/Constant'
                                        */
  real_T Constant_Value_i3;            /* Expression: 1
                                        * Referenced by: '<S455>/Constant'
                                        */
  real_T dsa_tcpip_setup_P1_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P1_Size
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P1;           /* Expression: boardType
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P2_Size
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2;           /* Expression: boardNo
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P3_Size
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3;           /* Expression: channelNo
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P4_Size
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4;           /* Expression: localIpNum
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P5_Size
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5;           /* Expression: localSnMask
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P6_Size
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6;           /* Expression: localGateway
                                        * Referenced by: '<S405>/dsa_tcpip_setup'
                                        */
  real_T Heartbeat_Amp;                /* Expression: 1
                                        * Referenced by: '<S404>/Heartbeat'
                                        */
  real_T Heartbeat_Period;             /* Expression: 10
                                        * Referenced by: '<S404>/Heartbeat'
                                        */
  real_T Heartbeat_Duty;               /* Expression: 5
                                        * Referenced by: '<S404>/Heartbeat'
                                        */
  real_T Heartbeat_PhaseDelay;         /* Expression: 0
                                        * Referenced by: '<S404>/Heartbeat'
                                        */
  real_T TCPIP_Com_P1_Size[2];         /* Computed Parameter: TCPIP_Com_P1_Size
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P1;                 /* Expression: localPort
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2_Size[2];         /* Computed Parameter: TCPIP_Com_P2_Size
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2;                 /* Expression: remotePort
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3_Size[2];         /* Computed Parameter: TCPIP_Com_P3_Size
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3;                 /* Expression: remoteAddr
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4_Size[2];         /* Computed Parameter: TCPIP_Com_P4_Size
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4;                 /* Expression: outputSize
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5_Size[2];         /* Computed Parameter: TCPIP_Com_P5_Size
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5;                 /* Expression: inputSize
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6_Size[2];         /* Computed Parameter: TCPIP_Com_P6_Size
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6;                 /* Expression: legacyMode
                                        * Referenced by: '<S406>/TCPIP_Com'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S409>/Unit Delay'
                                        */
  real_T Switch1_Threshold;            /* Expression: 100
                                        * Referenced by: '<S409>/Switch1'
                                        */
  real_T NoData_Value;                 /* Expression: 0
                                        * Referenced by: '<S403>/No Data'
                                        */
  real_T Constant_Value_ba;            /* Expression: 0
                                        * Referenced by: '<S454>/Constant'
                                        */
  real_T Constant_Value_ky;            /* Expression: 1
                                        * Referenced by: '<S437>/Constant'
                                        */
  real_T Constant_Value_ix;            /* Expression: 1
                                        * Referenced by: '<S460>/Constant'
                                        */
  real_T Constant_Value_g1;            /* Expression: 0
                                        * Referenced by: '<S1073>/Constant'
                                        */
  real_T Constant1_Value_bv;           /* Expression: 1
                                        * Referenced by: '<S1073>/Constant1'
                                        */
  real_T TmpRTBAtFlashOutport1_InitialCo;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_c;            /* Expression: 1
                                        * Referenced by: '<S856>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1081>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_mi;           /* Expression: 0.001
                                        * Referenced by: '<S856>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1081>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1081>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_oe;                /* Expression: 0.01
                                        * Referenced by: '<S856>/Gain1'
                                        */
  real_T Constant1_Value_lv;           /* Expression: 1
                                        * Referenced by: '<S856>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1081>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_p;            /* Expression: 0.001
                                        * Referenced by: '<S856>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1081>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1081>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.01
                                        * Referenced by: '<S856>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S422>/ShifterControlDC'
                                        */
  real_T Constant_Value_lg;            /* Expression: .4
                                        * Referenced by: '<S1082>/Constant'
                                        */
  real_T Constant1_Value_g5;           /* Expression: 0.5
                                        * Referenced by: '<S1082>/Constant1'
                                        */
  real_T Constant_Value_af;            /* Expression: 0
                                        * Referenced by: '<S1088>/Constant'
                                        */
  real_T Constant_Value_j1;            /* Expression: 0
                                        * Referenced by: '<S1089>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1083>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1083>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1083>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1083>/Flash'
                                        */
  real_T Constant_Value_by;            /* Expression: 0
                                        * Referenced by: '<S447>/Constant'
                                        */
  real_T Unit_Delay_1_InitialCondition_f;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_10_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_100_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_101_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_102_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_103_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_104_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_105_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_106_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_107_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_108_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_109_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_11_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_110_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_111_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_112_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_113_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_114_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_115_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_116_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_117_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_118_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_12_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_121_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_122_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_123_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_124_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_125_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_126_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_127_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_13_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_130_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_131_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_132_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_133_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_134_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_135_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_136_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_139_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_14_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_140_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_141_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_142_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_143_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_144_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_15_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_16_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_17_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_19_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_2_InitialCondition_f;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_21_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_22_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_23_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_24_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_25_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_26_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_28_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_29_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_3_InitialCondition_f;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_35_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_38_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_39_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_4_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S3>/Unit_Delay'
                                        */
  real_T Unit_Delay_40_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_41_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_42_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_43_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_44_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_49_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_5_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S3>/Unit_Delay'
                                        */
  real_T Unit_Delay_50_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_51_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_52_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_53_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_54_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_55_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_56_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_57_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_58_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_59_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_6_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S3>/Unit_Delay'
                                        */
  real_T Unit_Delay_60_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_61_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_62_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_63_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_64_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_65_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_66_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_67_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_68_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_69_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_7_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S3>/Unit_Delay'
                                        */
  real_T Unit_Delay_70_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_71_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_72_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_73_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_74_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_75_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_76_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_77_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_78_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_79_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_8_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S3>/Unit_Delay'
                                        */
  real_T Unit_Delay_85_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_86_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_87_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_88_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_89_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_9_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S3>/Unit_Delay'
                                        */
  real_T Unit_Delay_90_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_91_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_92_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_93_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_94_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_95_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_96_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_97_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_98_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_99_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Constant_Value_g3;            /* Expression: 0.125
                                        * Referenced by: '<S532>/Constant'
                                        */
  real_T Constant_Value_ou;            /* Expression: -125
                                        * Referenced by: '<S539>/Constant'
                                        */
  real_T Constant_Value_pj;            /* Expression: 0.125
                                        * Referenced by: '<S536>/Constant'
                                        */
  real_T Constant_Value_lk;            /* Expression: 1/1280
                                        * Referenced by: '<S537>/Constant'
                                        */
  real_T Constant_Value_on;            /* Expression: 0.125
                                        * Referenced by: '<S540>/Constant'
                                        */
  real_T Constant_Value_gt;            /* Expression: 0.1
                                        * Referenced by: '<S541>/Constant'
                                        */
  real_T Constant_Value_n2;            /* Expression: 10
                                        * Referenced by: '<S542>/Constant'
                                        */
  real_T Constant_Value_ah;            /* Expression: 10
                                        * Referenced by: '<S543>/Constant'
                                        */
  real_T Constant_Value_jd;            /* Expression: -125
                                        * Referenced by: '<S544>/Constant'
                                        */
  real_T Constant_Value_is;            /* Expression: -125
                                        * Referenced by: '<S545>/Constant'
                                        */
  real_T Constant_Value_o5;            /* Expression: 0.125
                                        * Referenced by: '<S546>/Constant'
                                        */
  real_T Constant_Value_gx;            /* Expression: 0.125
                                        * Referenced by: '<S554>/Constant'
                                        */
  real_T Constant_Value_l1;            /* Expression: 0.004
                                        * Referenced by: '<S547>/Constant'
                                        */
  real_T Constant_Value_o4u;           /* Expression: -125
                                        * Referenced by: '<S555>/Constant'
                                        */
  real_T Constant_Value_pr;            /* Expression: 0.125
                                        * Referenced by: '<S556>/Constant'
                                        */
  real_T Constant_Value_gy;            /* Expression: -125
                                        * Referenced by: '<S557>/Constant'
                                        */
  real_T Constant_Value_nn;            /* Expression: 0.125
                                        * Referenced by: '<S558>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: -125
                                        * Referenced by: '<S533>/Constant'
                                        */
  real_T Constant_Value_ob;            /* Expression: 0.125
                                        * Referenced by: '<S534>/Constant'
                                        */
  real_T Constant_Value_pn;            /* Expression: -125
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Constant_Value_it;            /* Expression: 1
                                        * Referenced by: '<S433>/Constant'
                                        */
  real_T Constant_Value_jn;            /* Expression: 1
                                        * Referenced by: '<S464>/Constant'
                                        */
  real_T Constant2_Value_i1;           /* Expression: 1
                                        * Referenced by: '<S421>/Constant2'
                                        */
  real_T Constant_Value_f5;            /* Expression: 1/1024
                                        * Referenced by: '<S674>/Constant'
                                        */
  real_T Constant1_Value_fw;           /* Expression: 1/1024
                                        * Referenced by: '<S675>/Constant1'
                                        */
  real_T Constant2_Value_hh;           /* Expression: 360/8192
                                        * Referenced by: '<S676>/Constant2'
                                        */
  real_T Constant_Value_ey;            /* Expression: 1000
                                        * Referenced by: '<S422>/Constant'
                                        */
  real_T Constant1_Value_fq;           /* Expression: 2000
                                        * Referenced by: '<S422>/Constant1'
                                        */
  real_T UnitDelay_InitialCondition_i; /* Expression: 0
                                        * Referenced by: '<S754>/Unit Delay'
                                        */
  real_T Constant_Value_i4;            /* Expression: 0
                                        * Referenced by: '<S758>/Constant'
                                        */
  real_T Gain_Gain_f3;                 /* Expression: 0.1
                                        * Referenced by: '<S754>/Gain'
                                        */
  real_T UnitDelay_InitialCondition_n; /* Expression: 0
                                        * Referenced by: '<S755>/Unit Delay'
                                        */
  real_T Constant_Value_m4;            /* Expression: 0
                                        * Referenced by: '<S759>/Constant'
                                        */
  real_T Gain_Gain_ph;                 /* Expression: 0.1
                                        * Referenced by: '<S755>/Gain'
                                        */
  real_T ShifterControlFreq_Gain;      /* Expression: 1
                                        * Referenced by: '<S422>/ShifterControlFreq'
                                        */
  real_T ShifterControlDC2_Gain;       /* Expression: 1
                                        * Referenced by: '<S422>/ShifterControlDC2'
                                        */
  real_T ShifterControlDC1_Gain;       /* Expression: 1
                                        * Referenced by: '<S422>/ShifterControlDC1'
                                        */
  ENUM_CAN_RX_T Constant_Value_by3;    /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S427>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_jb;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S482>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_ek;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S428>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_pp;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S491>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_bk;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S664>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant_Value_prb;    /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S664>/Constant'
                                        */
  ENUM_CAN_RX_T Constant2_Value_bj;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S664>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_lj;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S664>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_j1;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S664>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_bs;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S664>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_bd;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S482>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_ar;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S482>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_d1;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S482>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S482>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S482>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_d;     /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S491>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_pr;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S491>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_o;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S491>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S491>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_pd;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S491>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_p0;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S617>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_j2;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S617>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_j;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S617>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S617>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_oe;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S617>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_g;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S617>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_b4;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S591>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_a3;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S591>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_n;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S591>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_o;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S591>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_lx;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S591>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S591>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant_Value_er;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S604>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_bi;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S604>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_o2;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S604>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_gx;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S604>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S604>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S604>/Constant4'
                                        */
  ENUM_CAN_STATUS_DIAG_T Constant_Value_c;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                           * Referenced by: '<S1>/Constant'
                                           */
  ENUM_CAN_STATUS_DIAG_T Constant4_Value_np;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant4'
                                             */
  ENUM_CAN_STATUS_DIAG_T Constant5_Value_m;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant5'
                                            */
  ENUM_CAN_STATUS_DIAG_T Constant1_Value_c0;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant1'
                                             */
  ENUM_CAN_STATUS_DIAG_T Constant3_Value_h;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant3'
                                            */
  ENUM_CAN_STATUS_DIAG_T Constant2_Value_j2;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant2'
                                             */
  ENUM_CAN_TX_T Constant2_Value_k;     /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S858>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_og;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S858>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S859>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S860>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S860>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S860>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S861>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_dc;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S983>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_f3;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S983>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_ky;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                 * Referenced by: '<S983>/Constant2'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_gn;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                 * Referenced by: '<S983>/Constant3'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_b5;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                 * Referenced by: '<S983>/Constant4'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_k;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                * Referenced by: '<S983>/Constant5'
                                                */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S104>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S104>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S1021>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S1021>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1021>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_f;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1021>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_f;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S1021>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_i;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S1021>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_g;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S1021>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_hg;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                      * Referenced by: '<S1021>/Constant10'
                                                      */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S1021>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S1021>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S1021>/XBRPriority'
                                         */
  ENUM_XPR_CONTROL_MODE_T CPV_Value_e; /* Expression: ENUM_XPR_CONTROL_MODE_T.MAXIMUM_MODE
                                        * Referenced by: '<S104>/CPV'
                                        */
  ENUM_XPR_CONTROL_MODE_T CPV2_Value_hm;/* Expression: ENUM_XPR_CONTROL_MODE_T.DRIVER_BRAKING_ONLY
                                         * Referenced by: '<S104>/CPV2'
                                         */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_128_InitialCondition;/* Computed Parameter: Unit_Delay_128_InitialCondition
                                                           * Referenced by: '<S3>/Unit_Delay'
                                                           */
  ENUM_XPR_ERROR_STATE_T CPV1_Value_i5;/* Expression: ENUM_XPR_ERROR_STATE_T.XPR_OK
                                        * Referenced by: '<S104>/CPV1'
                                        */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_129_InitialCondition;/* Computed Parameter: Unit_Delay_129_InitialCondition
                                                          * Referenced by: '<S3>/Unit_Delay'
                                                          */
  ENUM_XPR_INHIBIT_PARK_MANUAL_T PROPB_XPR_INHIBIT_PARK_MANUAL_A;/* Expression: ENUM_XPR_INHIBIT_PARK_MANUAL_T.NO_OVERRIDE
                                                                  * Referenced by: '<S859>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S859>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S859>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S859>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S983>/Merge'
                                        */
  real32_T UnitDelay_InitialCondition_c;/* Computed Parameter: UnitDelay_InitialCondition_c
                                         * Referenced by: '<S285>/Unit Delay'
                                         */
  real32_T UnitDelay_InitialCondition_eo;/* Computed Parameter: UnitDelay_InitialCondition_eo
                                          * Referenced by: '<S290>/Unit Delay'
                                          */
  real32_T RX_delta_time_Y0;           /* Computed Parameter: RX_delta_time_Y0
                                        * Referenced by: '<S529>/RX_delta_time'
                                        */
  real32_T RX_delta_time_Y0_n;         /* Computed Parameter: RX_delta_time_Y0_n
                                        * Referenced by: '<S657>/RX_delta_time'
                                        */
  uint32_T Constant_Value_jc;          /* Computed Parameter: Constant_Value_jc
                                        * Referenced by: '<S31>/Constant'
                                        */
  uint32_T IV_Value_m;                 /* Computed Parameter: IV_Value_m
                                        * Referenced by: '<S31>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_nq;/* Computed Parameter: UnitDelay_InitialCondition_nq
                                          * Referenced by: '<S31>/Unit Delay'
                                          */
  uint32_T Constant_Value_ae;          /* Computed Parameter: Constant_Value_ae
                                        * Referenced by: '<S37>/Constant'
                                        */
  uint32_T IV_Value_e;                 /* Computed Parameter: IV_Value_e
                                        * Referenced by: '<S37>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_m;/* Computed Parameter: UnitDelay_InitialCondition_m
                                         * Referenced by: '<S37>/Unit Delay'
                                         */
  uint32_T Constant_Value_h3;          /* Computed Parameter: Constant_Value_h3
                                        * Referenced by: '<S43>/Constant'
                                        */
  uint32_T IV_Value_b;                 /* Computed Parameter: IV_Value_b
                                        * Referenced by: '<S43>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_hk;/* Computed Parameter: UnitDelay_InitialCondition_hk
                                          * Referenced by: '<S43>/Unit Delay'
                                          */
  uint32_T Constant_Value_o0;          /* Computed Parameter: Constant_Value_o0
                                        * Referenced by: '<S49>/Constant'
                                        */
  uint32_T IV_Value_k;                 /* Computed Parameter: IV_Value_k
                                        * Referenced by: '<S49>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_l;/* Computed Parameter: UnitDelay_InitialCondition_l
                                         * Referenced by: '<S49>/Unit Delay'
                                         */
  uint32_T Constant_Value_jg;          /* Computed Parameter: Constant_Value_jg
                                        * Referenced by: '<S55>/Constant'
                                        */
  uint32_T IV_Value_h;                 /* Computed Parameter: IV_Value_h
                                        * Referenced by: '<S55>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_p;/* Computed Parameter: UnitDelay_InitialCondition_p
                                         * Referenced by: '<S55>/Unit Delay'
                                         */
  uint32_T Constant_Value_iu;          /* Computed Parameter: Constant_Value_iu
                                        * Referenced by: '<S61>/Constant'
                                        */
  uint32_T IV_Value_ey;                /* Computed Parameter: IV_Value_ey
                                        * Referenced by: '<S61>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_iv;/* Computed Parameter: UnitDelay_InitialCondition_iv
                                          * Referenced by: '<S61>/Unit Delay'
                                          */
  uint32_T uD_Lookup_Table_maxIndex[2];/* Computed Parameter: uD_Lookup_Table_maxIndex
                                        * Referenced by: '<S241>/2D_Lookup_Table'
                                        */
  uint32_T uD_Lookup_Table_maxIndex_p[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_p
                                          * Referenced by: '<S242>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_a[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_a
                                          * Referenced by: '<S243>/2D_Lookup_Table'
                                          */
  uint32_T uDLookupTable_maxIndex[2];  /* Computed Parameter: uDLookupTable_maxIndex
                                        * Referenced by: '<S83>/2-D Lookup Table'
                                        */
  uint32_T uD_Lookup_Table_maxIndex_h[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_h
                                          * Referenced by: '<S85>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_e[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_e
                                          * Referenced by: '<S200>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_n[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_n
                                          * Referenced by: '<S201>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_m[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_m
                                          * Referenced by: '<S199>/2D_Lookup_Table'
                                          */
  uint32_T Operator_BitMask_ix;        /* Expression: BitMask
                                        * Referenced by: '<S937>/Operator'
                                        */
  uint32_T Operator_BitMask_l5;        /* Expression: BitMask
                                        * Referenced by: '<S938>/Operator'
                                        */
  uint32_T Operator_BitMask_ly;        /* Expression: BitMask
                                        * Referenced by: '<S939>/Operator'
                                        */
  uint32_T Operator_BitMask_kq;        /* Expression: BitMask
                                        * Referenced by: '<S940>/Operator'
                                        */
  uint32_T Constant_Value_oi;          /* Computed Parameter: Constant_Value_oi
                                        * Referenced by: '<S1013>/Constant'
                                        */
  uint32_T Operator_BitMask_if;        /* Expression: BitMask
                                        * Referenced by: '<S987>/Operator'
                                        */
  uint32_T Operator_BitMask_kh;        /* Expression: BitMask
                                        * Referenced by: '<S988>/Operator'
                                        */
  uint32_T Operator_BitMask_be;        /* Expression: BitMask
                                        * Referenced by: '<S989>/Operator'
                                        */
  uint32_T Operator_BitMask_ai;        /* Expression: BitMask
                                        * Referenced by: '<S990>/Operator'
                                        */
  uint32_T IV_Value_ms;                /* Computed Parameter: IV_Value_ms
                                        * Referenced by: '<S1013>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_le;/* Computed Parameter: UnitDelay_InitialCondition_le
                                          * Referenced by: '<S1013>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_kt;        /* Expression: BitMask
                                        * Referenced by: '<S991>/Operator'
                                        */
  uint32_T Operator_BitMask_en;        /* Expression: BitMask
                                        * Referenced by: '<S992>/Operator'
                                        */
  uint32_T Operator_BitMask_et;        /* Expression: BitMask
                                        * Referenced by: '<S993>/Operator'
                                        */
  uint32_T Operator_BitMask_it;        /* Expression: BitMask
                                        * Referenced by: '<S994>/Operator'
                                        */
  uint32_T Constant_Value_hp;          /* Computed Parameter: Constant_Value_hp
                                        * Referenced by: '<S1041>/Constant'
                                        */
  uint32_T IV_Value_h3;                /* Computed Parameter: IV_Value_h3
                                        * Referenced by: '<S1041>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_b;/* Computed Parameter: UnitDelay_InitialCondition_b
                                         * Referenced by: '<S1041>/Unit Delay'
                                         */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_h4;          /* Computed Parameter: Constant_Value_h4
                                        * Referenced by: '<S1056>/Constant'
                                        */
  uint32_T IV_Value_i;                 /* Computed Parameter: IV_Value_i
                                        * Referenced by: '<S1056>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_j;/* Computed Parameter: UnitDelay_InitialCondition_j
                                         * Referenced by: '<S1056>/Unit Delay'
                                         */
  uint32_T Operator_BitMask_ge;        /* Expression: BitMask
                                        * Referenced by: '<S1052>/Operator'
                                        */
  uint32_T Operator_BitMask_eq;        /* Expression: BitMask
                                        * Referenced by: '<S1053>/Operator'
                                        */
  uint32_T Operator_BitMask_ms;        /* Expression: BitMask
                                        * Referenced by: '<S1054>/Operator'
                                        */
  uint32_T Constant2_Value_ih;         /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S442>/Constant2'
                                        */
  uint32_T Constant2_Value_ok;         /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S465>/Constant2'
                                        */
  int16_T Constant_Value_jk;           /* Expression: int16(512)
                                        * Referenced by: '<S890>/Constant'
                                        */
  uint16_T Gain_Gain_b;                /* Computed Parameter: Gain_Gain_b
                                        * Referenced by: '<S97>/Gain'
                                        */
  uint16_T u000msDelay_Value;          /* Computed Parameter: u000msDelay_Value
                                        * Referenced by: '<S95>/2000ms Delay'
                                        */
  uint16_T Operator_BitMask_dx;        /* Expression: BitMask
                                        * Referenced by: '<S922>/Operator'
                                        */
  uint16_T Operator_BitMask_jf;        /* Expression: BitMask
                                        * Referenced by: '<S923>/Operator'
                                        */
  boolean_T E_Value;                   /* Expression: true
                                        * Referenced by: '<S31>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_e3;/* Computed Parameter: Unit_Delay_InitialCondition_e3
                                            * Referenced by: '<S30>/Unit_Delay'
                                            */
  boolean_T E_Value_l;                 /* Expression: true
                                        * Referenced by: '<S37>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_in;/* Computed Parameter: Unit_Delay_InitialCondition_in
                                            * Referenced by: '<S36>/Unit_Delay'
                                            */
  boolean_T E_Value_d;                 /* Expression: true
                                        * Referenced by: '<S43>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_m;/* Computed Parameter: Unit_Delay_InitialCondition_m
                                           * Referenced by: '<S42>/Unit_Delay'
                                           */
  boolean_T E_Value_m;                 /* Expression: true
                                        * Referenced by: '<S49>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_bo;/* Computed Parameter: Unit_Delay_InitialCondition_bo
                                            * Referenced by: '<S48>/Unit_Delay'
                                            */
  boolean_T E_Value_db;                /* Expression: true
                                        * Referenced by: '<S55>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_ot;/* Computed Parameter: Unit_Delay_InitialCondition_ot
                                            * Referenced by: '<S54>/Unit_Delay'
                                            */
  boolean_T E_Value_c;                 /* Expression: true
                                        * Referenced by: '<S61>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_le;/* Computed Parameter: Unit_Delay_InitialCondition_le
                                            * Referenced by: '<S60>/Unit_Delay'
                                            */
  boolean_T BRK_PRESS_DEM_AW_COND_INT_APV_V;/* Expression: true
                                             * Referenced by: '<S102>/BRK_PRESS_DEM_AW_COND_INT_APV'
                                             */
  boolean_T CPV1_Value_g;              /* Expression: false
                                        * Referenced by: '<S102>/CPV1'
                                        */
  boolean_T CPV2_Value_m;              /* Expression: false
                                        * Referenced by: '<S102>/CPV2'
                                        */
  boolean_T Unit_Delay_InitialCondition_lt;/* Expression: true
                                            * Referenced by: '<S115>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition;/* Expression: true
                                          * Referenced by: '<S135>/Unit_Delay1'
                                          */
  boolean_T Unit_Delay_InitialCondition_og;/* Expression: true
                                            * Referenced by: '<S136>/Unit_Delay'
                                            */
  boolean_T Constant_Value_olo;        /* Expression: false
                                        * Referenced by: '<S135>/Constant'
                                        */
  boolean_T Constant_Value_hi;         /* Expression: false
                                        * Referenced by: '<S136>/Constant'
                                        */
  boolean_T Constant_Value_lo;         /* Expression: false
                                        * Referenced by: '<S115>/Constant'
                                        */
  boolean_T BRK_DECEL_DEM_AW_COND_INT_APV_V;/* Expression: true
                                             * Referenced by: '<S103>/BRK_DECEL_DEM_AW_COND_INT_APV'
                                             */
  boolean_T CPV1_Value_no;             /* Expression: false
                                        * Referenced by: '<S103>/CPV1'
                                        */
  boolean_T CPV2_Value_a;              /* Expression: false
                                        * Referenced by: '<S103>/CPV2'
                                        */
  boolean_T Unit_Delay_InitialCondition_jb;/* Expression: true
                                            * Referenced by: '<S153>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_p;/* Expression: true
                                            * Referenced by: '<S173>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_lq;/* Expression: true
                                            * Referenced by: '<S174>/Unit_Delay'
                                            */
  boolean_T Constant_Value_bd;         /* Expression: false
                                        * Referenced by: '<S173>/Constant'
                                        */
  boolean_T Constant_Value_m2;         /* Expression: false
                                        * Referenced by: '<S174>/Constant'
                                        */
  boolean_T Constant_Value_j5;         /* Expression: false
                                        * Referenced by: '<S153>/Constant'
                                        */
  boolean_T F_Brake_hold_conditions_met_Y0;/* Expression: false
                                            * Referenced by: '<S183>/F_Brake_hold_conditions_met'
                                            */
  boolean_T CPV1_Value_p;              /* Expression: false
                                        * Referenced by: '<S183>/CPV1'
                                        */
  boolean_T Unit_Delay_InitialCondition_fy;/* Expression: true
                                            * Referenced by: '<S187>/Unit_Delay'
                                            */
  boolean_T Constant_Value_m3;         /* Expression: false
                                        * Referenced by: '<S187>/Constant'
                                        */
  boolean_T F_Shift_interlock_conditions_me;/* Expression: false
                                             * Referenced by: '<S184>/F_Shift_interlock_conditions_met'
                                             */
  boolean_T CPV1_Value_pl;             /* Expression: false
                                        * Referenced by: '<S184>/CPV1'
                                        */
  boolean_T Unit_Delay_InitialCondition_cl;/* Expression: true
                                            * Referenced by: '<S194>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ii;         /* Expression: false
                                        * Referenced by: '<S194>/Constant'
                                        */
  boolean_T PID_hold_i_term_f_Y0;      /* Expression: false
                                        * Referenced by: '<S212>/PID_hold_i_term_f'
                                        */
  boolean_T UseFeedForwardRoadLoad_Value;/* Expression: false
                                          * Referenced by: '<S219>/UseFeedForwardRoadLoad'
                                          */
  boolean_T Constant1_Value_g1;        /* Expression: false
                                        * Referenced by: '<S220>/Constant1'
                                        */
  boolean_T Constant3_Value_lp;        /* Expression: false
                                        * Referenced by: '<S220>/Constant3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_o;/* Expression: true
                                            * Referenced by: '<S220>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_b2;/* Computed Parameter: Unit_Delay_InitialCondition_b2
                                            * Referenced by: '<S220>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_lj;/* Expression: true
                                            * Referenced by: '<S247>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_a;/* Expression: true
                                            * Referenced by: '<S267>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_bm;/* Expression: true
                                            * Referenced by: '<S268>/Unit_Delay'
                                            */
  boolean_T GpidAwCondIntegration_Value;/* Expression: true
                                         * Referenced by: '<S212>/GpidAwCondIntegration'
                                         */
  boolean_T Constant_Value_ot;         /* Expression: false
                                        * Referenced by: '<S267>/Constant'
                                        */
  boolean_T Constant_Value_h0;         /* Expression: false
                                        * Referenced by: '<S268>/Constant'
                                        */
  boolean_T Constant_Value_ck;         /* Expression: false
                                        * Referenced by: '<S247>/Constant'
                                        */
  boolean_T E_Value_j;                 /* Expression: true
                                        * Referenced by: '<S285>/E'
                                        */
  boolean_T E_Value_ct;                /* Expression: true
                                        * Referenced by: '<S290>/E'
                                        */
  boolean_T F_Out_slewing_Y0;          /* Expression: false
                                        * Referenced by: '<S340>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ls;/* Expression: true
                                            * Referenced by: '<S342>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_i0;/* Expression: true
                                            * Referenced by: '<S343>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ld;/* Expression: false
                                            * Referenced by: '<S341>/Unit_Delay'
                                            */
  boolean_T Constant_Value_hgm;        /* Expression: false
                                        * Referenced by: '<S343>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_jn;/* Computed Parameter: Unit_Delay_InitialCondition_jn
                                            * Referenced by: '<S76>/Unit_Delay'
                                            */
  boolean_T Constant_Value_io;         /* Computed Parameter: Constant_Value_io
                                        * Referenced by: '<S100>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_br;/* Computed Parameter: UnitDelay_InitialCondition_br
                                           * Referenced by: '<S97>/Unit Delay'
                                           */
  boolean_T APTC_PEDAL_POSITION_OVR_APV_Val;/* Expression: false
                                             * Referenced by: '<S83>/APTC_PEDAL_POSITION_OVR_APV'
                                             */
  boolean_T Unit_Delay_InitialCondition_b1;/* Expression: true
                                            * Referenced by: '<S395>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_g;/* Expression: true
                                           * Referenced by: '<S396>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_aw;/* Expression: true
                                            * Referenced by: '<S384>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gt;/* Expression: true
                                            * Referenced by: '<S385>/Unit_Delay'
                                            */
  boolean_T CPV_Value_a;               /* Expression: false
                                        * Referenced by: '<S362>/CPV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ml;/* Expression: false
                                            * Referenced by: '<S368>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ag;/* Expression: true
                                            * Referenced by: '<S357>/Unit_Delay'
                                            */
  boolean_T Constant7_Value_j;         /* Expression: false
                                        * Referenced by: '<S107>/Constant7'
                                        */
  boolean_T Unit_Delay_InitialCondition_ip;/* Expression: true
                                            * Referenced by: '<S107>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_f;/* Expression: true
                                            * Referenced by: '<S203>/Unit_Delay1'
                                            */
  boolean_T Constant_Value_jf;         /* Expression: false
                                        * Referenced by: '<S203>/Constant'
                                        */
  boolean_T Constant_Value_cp;         /* Expression: false
                                        * Referenced by: '<S79>/Constant'
                                        */
  boolean_T Constant_Value_jg4;        /* Expression: false
                                        * Referenced by: '<S208>/Constant'
                                        */
  boolean_T R_Value;                   /* Expression: false
                                        * Referenced by: '<S285>/R'
                                        */
  boolean_T zero_Value_g;              /* Expression: boolean(0)
                                        * Referenced by: '<S282>/zero'
                                        */
  boolean_T Unit_Delay1_InitialCondition_m;/* Expression: true
                                            * Referenced by: '<S333>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ps;/* Expression: true
                                             * Referenced by: '<S334>/Unit_Delay1'
                                             */
  boolean_T zero3_Value;               /* Expression: boolean(0)
                                        * Referenced by: '<S282>/zero3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_j;/* Expression: true
                                            * Referenced by: '<S335>/Unit_Delay1'
                                            */
  boolean_T Constant8_Value_l;         /* Expression: boolean(0)
                                        * Referenced by: '<S279>/Constant8'
                                        */
  boolean_T Constant_Value_hx;         /* Expression: false
                                        * Referenced by: '<S333>/Constant'
                                        */
  boolean_T Constant_Value_bh;         /* Expression: false
                                        * Referenced by: '<S334>/Constant'
                                        */
  boolean_T Constant_Value_hxo;        /* Expression: false
                                        * Referenced by: '<S335>/Constant'
                                        */
  boolean_T Constant_Value_pu;         /* Expression: false
                                        * Referenced by: '<S357>/Constant'
                                        */
  boolean_T Constant_Value_am;         /* Expression: false
                                        * Referenced by: '<S385>/Constant'
                                        */
  boolean_T Constant_Value_c1;         /* Expression: false
                                        * Referenced by: '<S396>/Constant'
                                        */
  boolean_T Constant3_Value_f;         /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S409>/Constant3'
                                        */
  boolean_T Constant2_Value_e;         /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S409>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S526>/RX_status'
                                        */
  boolean_T RX_status_Y0_e;            /* Computed Parameter: RX_status_Y0_e
                                        * Referenced by: '<S654>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_a;        /* Expression: false
                                        * Referenced by: '<S773>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_e2j;/* Expression: true
                                             * Referenced by: '<S844>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_InitialCondition_g1;/* Expression: true
                                            * Referenced by: '<S845>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_nk;/* Expression: false
                                            * Referenced by: '<S843>/Unit_Delay'
                                            */
  boolean_T Constant_Value_b5;         /* Expression: false
                                        * Referenced by: '<S845>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S751>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S931>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S931>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S859>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S885>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S859>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S859>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_a;                 /* Expression: true
                                        * Referenced by: '<S1013>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_mj;/* Computed Parameter: Unit_Delay_InitialCondition_mj
                                            * Referenced by: '<S1012>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_n;  /* Expression: boolean(0)
                                        * Referenced by: '<S981>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_p;          /* Expression: boolean(0)
                                        * Referenced by: '<S981>/DataPage'
                                        */
  boolean_T E_Value_mg;                /* Expression: true
                                        * Referenced by: '<S1041>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S1021>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_dp;/* Expression: false
                                            * Referenced by: '<S1017>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S1020>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ir;/* Computed Parameter: Unit_Delay_InitialCondition_ir
                                            * Referenced by: '<S1040>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_m;  /* Expression: boolean(0)
                                        * Referenced by: '<S1036>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_a;          /* Expression: boolean(0)
                                        * Referenced by: '<S1036>/DataPage'
                                        */
  boolean_T CPV_Value_lq;              /* Expression: true
                                        * Referenced by: '<S1020>/CPV'
                                        */
  boolean_T E_Value_g;                 /* Expression: true
                                        * Referenced by: '<S1056>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S1046>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_ew;/* Computed Parameter: Unit_Delay_InitialCondition_ew
                                            * Referenced by: '<S1055>/Unit_Delay'
                                            */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1061>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_b0;         /* Expression: boolean(1)
                                        * Referenced by: '<S431>/Constant'
                                        */
  boolean_T Constant_Value_bu;         /* Expression: boolean(1)
                                        * Referenced by: '<S432>/Constant'
                                        */
  boolean_T Constant_Value_ju;         /* Computed Parameter: Constant_Value_ju
                                        * Referenced by: '<S765>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_bf;/* Computed Parameter: UnitDelay_InitialCondition_bf
                                           * Referenced by: '<S749>/Unit Delay'
                                           */
  boolean_T Constant_Value_h3i;        /* Computed Parameter: Constant_Value_h3i
                                        * Referenced by: '<S764>/Constant'
                                        */
  boolean_T UnitDelay1_InitialCondition_pw;/* Computed Parameter: UnitDelay1_InitialCondition_pw
                                            * Referenced by: '<S762>/Unit Delay1'
                                            */
  boolean_T UnitDelay1_InitialCondition_g;/* Computed Parameter: UnitDelay1_InitialCondition_g
                                           * Referenced by: '<S763>/Unit Delay1'
                                           */
  boolean_T Unit_Delay_InitialCondition_ax;/* Expression: true
                                            * Referenced by: '<S772>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_i;/* Expression: true
                                            * Referenced by: '<S839>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_k;/* Expression: true
                                            * Referenced by: '<S772>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_n;/* Expression: true
                                            * Referenced by: '<S840>/Unit_Delay1'
                                            */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S750>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_ab;         /* Expression: boolean(1)
                                        * Referenced by: '<S436>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S441>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S448>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_nw;        /* Expression: boolean(1)
                                        * Referenced by: '<S440>/Constant1'
                                        */
  boolean_T Enable_RX_ETC2_03_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S446>/Enable_RX_ETC2_03'
                                        */
  boolean_T Enable_RX_EEC1_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S443>/Enable_RX_EEC1_00'
                                        */
  boolean_T Enable_RX_EEC3_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S445>/Enable_RX_EEC3_00'
                                        */
  boolean_T Constant_Value_gk;         /* Expression: boolean(1)
                                        * Referenced by: '<S438>/Constant'
                                        */
  boolean_T Constant_Value_ch;         /* Expression: boolean(1)
                                        * Referenced by: '<S429>/Constant'
                                        */
  boolean_T Constant_Value_amj;        /* Expression: boolean(1)
                                        * Referenced by: '<S462>/Constant'
                                        */
  boolean_T Constant_Value_fl;         /* Expression: boolean(1)
                                        * Referenced by: '<S463>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S655>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_ic;/* Expression: true
                                            * Referenced by: '<S655>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_oh;/* Expression: false
                                            * Referenced by: '<S661>/Unit_Delay'
                                            */
  boolean_T Constant_Value_kr;         /* Expression: boolean(0)
                                        * Referenced by: '<S453>/Constant'
                                        */
  boolean_T Enable_Value;              /* Computed Parameter: Enable_Value
                                        * Referenced by: '<S3>/Enable'
                                        */
  boolean_T Unit_Delay_80_InitialCondition;/* Computed Parameter: Unit_Delay_80_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_81_InitialCondition;/* Computed Parameter: Unit_Delay_81_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_48_InitialCondition;/* Computed Parameter: Unit_Delay_48_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_83_InitialCondition;/* Computed Parameter: Unit_Delay_83_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_45_InitialCondition;/* Computed Parameter: Unit_Delay_45_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_84_InitialCondition;/* Computed Parameter: Unit_Delay_84_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ap;         /* Computed Parameter: Constant_Value_ap
                                        * Referenced by: '<S412>/Constant'
                                        */
  boolean_T useGPSSA00_Value;          /* Expression: boolean(1)
                                        * Referenced by: '<S472>/useGPSSA00'
                                        */
  boolean_T useGPSSA0_Value;           /* Expression: boolean(0)
                                        * Referenced by: '<S472>/useGPSSA0'
                                        */
  boolean_T Constant_Value_d2;         /* Expression: boolean(1)
                                        * Referenced by: '<S435>/Constant'
                                        */
  boolean_T Constant_Value_cu;         /* Expression: boolean(1)
                                        * Referenced by: '<S461>/Constant'
                                        */
  boolean_T Constant_Value_cr;         /* Computed Parameter: Constant_Value_cr
                                        * Referenced by: '<S1072>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S865>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S865>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1082>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_f;         /* Expression: false
                                        * Referenced by: '<S1082>/Constant2'
                                        */
  boolean_T Unit_Delay_119_InitialCondition;/* Computed Parameter: Unit_Delay_119_InitialCondition
                                             * Referenced by: '<S3>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_120_InitialCondition;/* Computed Parameter: Unit_Delay_120_InitialCondition
                                             * Referenced by: '<S3>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_137_InitialCondition;/* Computed Parameter: Unit_Delay_137_InitialCondition
                                             * Referenced by: '<S3>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_18_InitialCondition;/* Computed Parameter: Unit_Delay_18_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_20_InitialCondition;/* Computed Parameter: Unit_Delay_20_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_27_InitialCondition;/* Computed Parameter: Unit_Delay_27_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_30_InitialCondition;/* Computed Parameter: Unit_Delay_30_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_31_InitialCondition;/* Computed Parameter: Unit_Delay_31_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_32_InitialCondition;/* Computed Parameter: Unit_Delay_32_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_33_InitialCondition;/* Computed Parameter: Unit_Delay_33_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_36_InitialCondition;/* Computed Parameter: Unit_Delay_36_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_37_InitialCondition;/* Computed Parameter: Unit_Delay_37_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_46_InitialCondition;/* Computed Parameter: Unit_Delay_46_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_82_InitialCondition;/* Computed Parameter: Unit_Delay_82_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Constant_Value_nd;         /* Expression: boolean(1)
                                        * Referenced by: '<S430>/Constant'
                                        */
  boolean_T Constant_Value_a0;         /* Expression: boolean(0)
                                        * Referenced by: '<S434>/Constant'
                                        */
  boolean_T Constant1_Value_nx;        /* Expression: boolean(1)
                                        * Referenced by: '<S439>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S444>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S457>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_a;/* Expression: boolean(0)
                                             * Referenced by: '<S458>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_ij;         /* Expression: boolean(0)
                                        * Referenced by: '<S459>/Constant'
                                        */
  boolean_T Constant_Value_fw;         /* Expression: false
                                        * Referenced by: '<S655>/Constant'
                                        */
  boolean_T Constant1_Value_h;         /* Expression: false
                                        * Referenced by: '<S655>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_m;/* Expression: true
                                            * Referenced by: '<S655>/Unit_Delay2'
                                            */
  boolean_T Unit_Delay1_InitialCondition_e;/* Expression: true
                                            * Referenced by: '<S655>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_ki;/* Expression: false
                                            * Referenced by: '<S662>/Unit_Delay'
                                            */
  boolean_T Constant_Value_lq;         /* Computed Parameter: Constant_Value_lq
                                        * Referenced by: '<S757>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_gz;/* Computed Parameter: UnitDelay_InitialCondition_gz
                                           * Referenced by: '<S748>/Unit Delay'
                                           */
  boolean_T Constant_Value_eyi;        /* Computed Parameter: Constant_Value_eyi
                                        * Referenced by: '<S756>/Constant'
                                        */
  boolean_T UnitDelay1_InitialCondition_pa;/* Computed Parameter: UnitDelay1_InitialCondition_pa
                                            * Referenced by: '<S754>/Unit Delay1'
                                            */
  boolean_T UnitDelay1_InitialCondition_c;/* Computed Parameter: UnitDelay1_InitialCondition_c
                                           * Referenced by: '<S755>/Unit Delay1'
                                           */
  boolean_T Constant_Value_la;         /* Expression: false
                                        * Referenced by: '<S772>/Constant'
                                        */
  boolean_T Constant_Value_e4;         /* Expression: false
                                        * Referenced by: '<S839>/Constant'
                                        */
  boolean_T Constant1_Value_pd;        /* Expression: false
                                        * Referenced by: '<S772>/Constant1'
                                        */
  boolean_T Constant_Value_ah1;        /* Expression: false
                                        * Referenced by: '<S840>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_jp;/* Expression: true
                                            * Referenced by: '<S10>/Unit_Delay'
                                            */
  boolean_T Constant_Value_g5;         /* Expression: false
                                        * Referenced by: '<S10>/Constant'
                                        */
  int8_T Failure_Value;                /* Computed Parameter: Failure_Value
                                        * Referenced by: '<S76>/Failure'
                                        */
  int8_T Running_Value;                /* Computed Parameter: Running_Value
                                        * Referenced by: '<S76>/Running'
                                        */
  int8_T GhostMode_Value;              /* Computed Parameter: GhostMode_Value
                                        * Referenced by: '<S76>/GhostMode'
                                        */
  uint8_T for_logging7_Gain;           /* Computed Parameter: for_logging7_Gain
                                        * Referenced by: '<S403>/for_logging7'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S140>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_f;       /* Computed Parameter: FixPtConstant_Value_f
                                        * Referenced by: '<S140>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_p;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_p
                                           * Referenced by: '<S178>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_j1;      /* Computed Parameter: FixPtConstant_Value_j1
                                        * Referenced by: '<S178>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_e;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_e
                                           * Referenced by: '<S191>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_aw;      /* Computed Parameter: FixPtConstant_Value_aw
                                        * Referenced by: '<S191>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_f;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_f
                                           * Referenced by: '<S198>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_kr;      /* Computed Parameter: FixPtConstant_Value_kr
                                        * Referenced by: '<S198>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_a;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_a
                                           * Referenced by: '<S272>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_jk;      /* Computed Parameter: FixPtConstant_Value_jk
                                        * Referenced by: '<S272>/FixPt Constant'
                                        */
  uint8_T SteeringControlSRC_Value;    /* Expression: uint8(3)
                                        * Referenced by: '<S80>/SteeringControlSRC'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_c;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_c
                                           * Referenced by: '<S346>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_np;      /* Computed Parameter: FixPtConstant_Value_np
                                        * Referenced by: '<S346>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondi_f5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_f5
                                           * Referenced by: '<S400>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_po;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_po
                                           * Referenced by: '<S389>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_i;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                           * Referenced by: '<S377>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ck;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ck
                                           * Referenced by: '<S361>/FixPt Unit Delay2'
                                           */
  uint8_T Constant_Value_mg;           /* Expression: uint8(3)
                                        * Referenced by: '<S283>/Constant'
                                        */
  uint8_T Constant1_Value_ls;          /* Expression: uint8(5)
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint8_T FixPtConstant_Value_az;      /* Computed Parameter: FixPtConstant_Value_az
                                        * Referenced by: '<S361>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_g;       /* Computed Parameter: FixPtConstant_Value_g
                                        * Referenced by: '<S377>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_g;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_g
                                           * Referenced by: '<S379>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pz;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pz
                                           * Referenced by: '<S380>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_e;       /* Computed Parameter: FixPtConstant_Value_e
                                        * Referenced by: '<S380>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_p;       /* Computed Parameter: FixPtConstant_Value_p
                                        * Referenced by: '<S379>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_d;       /* Computed Parameter: FixPtConstant_Value_d
                                        * Referenced by: '<S389>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jx;      /* Computed Parameter: FixPtConstant_Value_jx
                                        * Referenced by: '<S400>/FixPt Constant'
                                        */
  uint8_T Failure_Value_k;             /* Computed Parameter: Failure_Value_k
                                        * Referenced by: '<S403>/Failure'
                                        */
  uint8_T RawData_Y0;                  /* Computed Parameter: RawData_Y0
                                        * Referenced by: '<S529>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_j2[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                             * Referenced by: '<S526>/Unit Delay'
                                             */
  uint8_T RawData_Y0_e;                /* Computed Parameter: RawData_Y0_e
                                        * Referenced by: '<S657>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_nl[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                             * Referenced by: '<S654>/Unit Delay'
                                             */
  uint8_T FixPtUnitDelay2_InitialCondi_a4;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_a4
                                           * Referenced by: '<S848>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_ga;      /* Computed Parameter: FixPtConstant_Value_ga
                                        * Referenced by: '<S848>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_b;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S892>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S931>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S931>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S931>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S931>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_cq;         /* Expression: BitMask
                                        * Referenced by: '<S936>/Operator'
                                        */
  uint8_T Operator_BitMask_fo;         /* Expression: BitMask
                                        * Referenced by: '<S935>/Operator'
                                        */
  uint8_T Constant_Value_fh;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S891>/Constant'
                                        */
  uint8_T Constant1_Value_ei;          /* Expression: uint8(0)
                                        * Referenced by: '<S984>/Constant1'
                                        */
  uint8_T Constant_Value_hq2;          /* Expression: uint8(1)
                                        * Referenced by: '<S984>/Constant'
                                        */
  uint8_T Constant_Value_dx;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S982>/Constant'
                                        */
  uint8_T Constant1_Value_ef;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S982>/Constant1'
                                        */
  uint8_T Operator_BitMask_de;         /* Expression: BitMask
                                        * Referenced by: '<S995>/Operator'
                                        */
  uint8_T Priority_Value_l;            /* Expression: uint8(6)
                                        * Referenced by: '<S981>/Priority'
                                        */
  uint8_T PDUFormat_Value_b;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S981>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_j;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S981>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_p;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S981>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_po;         /* Expression: BitMask
                                        * Referenced by: '<S996>/Operator'
                                        */
  uint8_T Constant2_Value_al;          /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S1037>/Constant2'
                                        */
  uint8_T Constant3_Value_a;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1037>/Constant3'
                                        */
  uint8_T Constant4_Value_c3;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1037>/Constant4'
                                        */
  uint8_T Constant_Value_ls;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1037>/Constant'
                                        */
  uint8_T Constant1_Value_k;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1037>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_e;            /* Expression: uint8(3)
                                        * Referenced by: '<S1036>/Priority'
                                        */
  uint8_T PDUFormat_Value_m;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1036>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_f;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S1036>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_d;       /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S1036>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1037>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1067>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1067>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1067>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1067>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1067>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1067>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1067>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1067>/Byte1'
                                        */
  uint8_T Byte8_Value_a;               /* Expression: uint8('N')
                                        * Referenced by: '<S1066>/Byte8'
                                        */
  uint8_T Byte7_Value_o;               /* Expression: uint8('R')
                                        * Referenced by: '<S1066>/Byte7'
                                        */
  uint8_T Byte6_Value_n;               /* Expression: uint8('*')
                                        * Referenced by: '<S1066>/Byte6'
                                        */
  uint8_T Byte5_Value_n;               /* Expression: uint8('R')
                                        * Referenced by: '<S1066>/Byte5'
                                        */
  uint8_T Byte4_Value_g;               /* Expression: uint8('A')
                                        * Referenced by: '<S1066>/Byte4'
                                        */
  uint8_T Byte3_Value_a;               /* Expression: uint8('C')
                                        * Referenced by: '<S1066>/Byte3'
                                        */
  uint8_T Byte2_Value_i;               /* Expression: uint8('P')
                                        * Referenced by: '<S1066>/Byte2'
                                        */
  uint8_T Byte1_Value_h;               /* Computed Parameter: Byte1_Value_h
                                        * Referenced by: '<S1066>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_o;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_o
                                           * Referenced by: '<S802>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_i5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_i5
                                           * Referenced by: '<S794>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_l;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_l
                                           * Referenced by: '<S818>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_k;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_k
                                           * Referenced by: '<S810>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_n;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_n
                                           * Referenced by: '<S838>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pj;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pj
                                           * Referenced by: '<S837>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_b;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_b
                                           * Referenced by: '<S826>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_e0;          /* Expression: uint8(32)
                                        * Referenced by: '<S475>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S655>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_p04;          /* Computed Parameter: Constant_Value_p04
                                        * Referenced by: '<S659>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Supervisor_Autonomous_Mode_Valu;/* Computed Parameter: Supervisor_Autonomous_Mode_Valu
                                           * Referenced by: '<S403>/Supervisor_Autonomous_Mode'
                                           */
  uint8_T Byte1_Value_g;               /* Computed Parameter: Byte1_Value_g
                                        * Referenced by: '<S1064>/Byte1'
                                        */
  uint8_T Byte2_Value_h;               /* Computed Parameter: Byte2_Value_h
                                        * Referenced by: '<S1064>/Byte2'
                                        */
  uint8_T Byte3_Value_b;               /* Computed Parameter: Byte3_Value_b
                                        * Referenced by: '<S1064>/Byte3'
                                        */
  uint8_T Byte4_Value_a;               /* Computed Parameter: Byte4_Value_a
                                        * Referenced by: '<S1064>/Byte4'
                                        */
  uint8_T Byte5_Value_m;               /* Computed Parameter: Byte5_Value_m
                                        * Referenced by: '<S1064>/Byte5'
                                        */
  uint8_T Byte6_Value_b;               /* Computed Parameter: Byte6_Value_b
                                        * Referenced by: '<S1064>/Byte6'
                                        */
  uint8_T Byte7_Value_e;               /* Computed Parameter: Byte7_Value_e
                                        * Referenced by: '<S1064>/Byte7'
                                        */
  uint8_T Byte8_Value_av;              /* Computed Parameter: Byte8_Value_av
                                        * Referenced by: '<S1064>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_jy;/* Computed Parameter: UnitDelay1_InitialCondition_jy
                                          * Referenced by: '<S865>/Unit Delay1'
                                          */
  uint8_T Constant1_Value_jf;          /* Computed Parameter: Constant1_Value_jf
                                        * Referenced by: '<S865>/Constant1'
                                        */
  uint8_T ManualReady_Value;           /* Computed Parameter: ManualReady_Value
                                        * Referenced by: '<S1083>/Manual Ready'
                                        */
  uint8_T Constant2_Value_mw;          /* Computed Parameter: Constant2_Value_mw
                                        * Referenced by: '<S1083>/Constant2'
                                        */
  uint8_T Unit_Delay_138_InitialCondition;/* Computed Parameter: Unit_Delay_138_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S655>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_ln;           /* Computed Parameter: Constant_Value_ln
                                        * Referenced by: '<S660>/Constant'
                                        */
  uint8_T Constant_Value_hv;           /* Expression: uint8(16)
                                        * Referenced by: '<S475>/Constant'
                                        */
  uint8_T Constant1_Value_dt;          /* Expression: uint8(17)
                                        * Referenced by: '<S475>/Constant1'
                                        */
  uint8_T Constant2_Value_j5;          /* Expression: uint8(19)
                                        * Referenced by: '<S475>/Constant2'
                                        */
  uint8_T Constant4_Value_cy;          /* Expression: uint8(255)
                                        * Referenced by: '<S475>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_l;       /* Computed Parameter: FixPtConstant_Value_l
                                        * Referenced by: '<S794>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_nv;      /* Computed Parameter: FixPtConstant_Value_nv
                                        * Referenced by: '<S802>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_kl;      /* Computed Parameter: FixPtConstant_Value_kl
                                        * Referenced by: '<S810>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_od;      /* Computed Parameter: FixPtConstant_Value_od
                                        * Referenced by: '<S818>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_c;       /* Computed Parameter: FixPtConstant_Value_c
                                        * Referenced by: '<S826>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_na;      /* Computed Parameter: FixPtConstant_Value_na
                                        * Referenced by: '<S837>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_l1;      /* Computed Parameter: FixPtConstant_Value_l1
                                        * Referenced by: '<S838>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S983>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S983>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S983>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S983>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S983>/ALL_CTRL_DISABLED' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S244>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S244>/Calculate_D_term' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S150>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S150>/Calculate_D_term' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S112>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S112>/Calculate_D_term' */
};

/* Real-time Model Data Structure */
struct tag_RTM_L4_MABX_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[13];
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      int_T callSysOutputs[1];
      void *callSysArgs1[1];
      int_T callSysArgs2[1];
      SysOutputFcn callSysFcns[4];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[24];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick9;
    uint32_T clockTickH9;
    time_T stepSize9;
    uint32_T clockTick10;
    uint32_T clockTickH10;
    time_T stepSize10;
    uint32_T clockTick11;
    uint32_T clockTickH11;
    time_T stepSize11;
    struct {
      uint16_T TID[9];
      uint16_T cLimit[9];
    } TaskCounters;

    struct {
      uint16_T TID0_1;
      uint16_T TID0_2;
      uint16_T TID0_3;
      uint16_T TID0_6;
      uint16_T TID0_7;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[9];
    time_T offsetTimesArray[9];
    int_T sampleTimeTaskIDArray[9];
    int_T sampleHitArray[9];
    int_T perTaskSampleHitsArray[81];
    time_T tArray[13];
  } Timing;
};

/* Block parameters (default storage) */
extern P_L4_MABX_T L4_MABX_P;

/* Block signals (default storage) */
extern B_L4_MABX_T L4_MABX_B;

/* Block states (default storage) */
extern DW_L4_MABX_T L4_MABX_DW;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCX_L4_MABX_T L4_MABX_PrevZCX;
extern const ConstB_L4_MABX_T L4_MABX_ConstB;/* constant block i/o */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T GLB_Absolute_Timestamp;  /* '<S423>/Rate Transition' */
extern real_T ReAX_ActualHandwheelPos; /* '<S449>/Switch' */
extern real_T EthernetLinkStatus;      /* '<S405>/dsa_tcpip_setup' */
extern real_T CurrentAzimuth_rad;      /* '<S403>/Switch' */
extern real_T TargetAzimuth_rad;       /* '<S403>/Switch1' */
extern real_T TargetVelocity_kph;      /* '<S403>/Switch3' */
extern real_T Curvature;               /* '<S403>/Switch4' */
extern real_T CrosstrackError;         /* '<S403>/Switch5' */
extern real_T CurrentVelocity_kph;     /* '<S403>/Switch2' */
extern real_T GPS_X;                   /* '<S403>/Switch6' */
extern real_T GPS_Y;                   /* '<S403>/Switch7' */
extern real_T GPS_Time;                /* '<S403>/Switch8' */
extern real_T ReAX_EchoedSteerWheelPos;/* '<S449>/Switch' */
extern real_T SteerWheelAngle;         /* '<S651>/S-Function1' */
extern real_T YawRate;                 /* '<S651>/S-Function1' */
extern real_T SPN1810_LongitudinalAcceleration;/* '<S651>/S-Function1' */
extern real_T WheelBasedVehicleSpeed;  /* '<S512>/S-Function1' */
extern real_T BrakeSwitch;             /* '<S512>/S-Function1' */
extern real_T Lateral_Control_Rate_Limit;/* '<S316>/Constant' */
extern real_T Lateral_Control_Output;  /* '<S281>/Sum1' */
extern real_T Lateral_Control_Rate_Limiter_Output;/* '<S316>/If_Then_Else' */
extern real_T Stanley_Rate_Limit;      /* '<S301>/Multiport Switch2' */
extern real_T Stanley_Set_Gain;        /* '<S280>/Multiport Switch1' */
extern real_T Understeer_Correction_Output;/* '<S280>/Multiport Switch2' */
extern real_T Stanley_Output;          /* '<S280>/Sum1' */
extern real_T Stanley_Rate_Limiter_Output;/* '<S301>/If_Then_Else' */
extern real_T SteerCommandDeg;         /* '<S80>/sign flip' */
extern real_T DesiredSteeringAngle;    /* '<S80>/sign2' */
extern real_T Lateral_Control_Heading_Error;/* '<S281>/Error Calc' */
extern uint32_T DIAG_CAN1_Count_Stuff_Errors;/* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_Format_Errors;/* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_Ack_Errors;/* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_Bit0_Errors;/* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_Bit1_Errors;/* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_CRC_Errors;/* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_RX_Lost;/* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_RX_OK; /* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN1_Count_TX_OK; /* '<S28>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_Stuff_Errors;/* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_Format_Errors;/* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_Ack_Errors;/* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_Bit0_Errors;/* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_Bit1_Errors;/* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_CRC_Errors;/* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_RX_Lost;/* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_RX_OK; /* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN5_Count_TX_OK; /* '<S20>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_Stuff_Errors;/* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_Format_Errors;/* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_Ack_Errors;/* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_Bit0_Errors;/* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_Bit1_Errors;/* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_CRC_Errors;/* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_RX_Lost;/* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_RX_OK; /* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN6_Count_TX_OK; /* '<S21>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_Stuff_Errors;/* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_Format_Errors;/* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_Ack_Errors;/* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_Bit0_Errors;/* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_Bit1_Errors;/* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_CRC_Errors;/* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_RX_Lost;/* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_RX_OK; /* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN3_Count_TX_OK; /* '<S18>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_Stuff_Errors;/* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_Format_Errors;/* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_Ack_Errors;/* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_Bit0_Errors;/* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_Bit1_Errors;/* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_CRC_Errors;/* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_RX_Lost;/* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_RX_OK; /* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN4_Count_TX_OK; /* '<S19>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_Stuff_Errors;/* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_Format_Errors;/* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_Ack_Errors;/* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_Bit0_Errors;/* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_Bit1_Errors;/* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_CRC_Errors;/* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_RX_Lost;/* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_RX_OK; /* '<S17>/S-Function1' */
extern uint32_T DIAG_CAN2_Count_TX_OK; /* '<S17>/S-Function1' */
extern real32_T REAX_Handwheel_Torque; /* '<S425>/Data Type Conversion3' */
extern real32_T REAX_Handwheel_Velocity;/* '<S425>/Data Type Conversion4' */
extern real32_T REAX_Pull_Compensation;/* '<S425>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN1_Status;/* '<S1>/Data Type Conversion' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN5_Status;/* '<S1>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN6_Status;/* '<S1>/Data Type Conversion4' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN3_Status;/* '<S1>/Data Type Conversion3' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN4_Status;/* '<S1>/Data Type Conversion2' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN2_Status;/* '<S1>/Data Type Conversion1' */
extern uint8_T SupervisorMode;         /* '<S403>/Switch9' */
extern uint8_T REAX_Current_Mode;      /* '<S425>/Data Type Conversion' */
extern uint8_T REAX_Req_Mode;          /* '<S425>/Data Type Conversion1' */
extern uint8_T REAX_Status;            /* '<S425>/Data Type Conversion2' */
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1096>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S422>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S751>/Switch' */
extern boolean_T EngagePB;             /* '<S749>/AND2' */
extern boolean_T BrakeSW;              /* '<S422>/Logical Operator3' */
extern boolean_T MABX_Heartbeat;       /* '<S404>/Cast To Boolean' */
extern boolean_T Heartbeat_Ok;         /* '<S409>/Switch1' */
extern boolean_T RTMapsOk;             /* '<S403>/AND' */
extern boolean_T LogEventPB;           /* '<S748>/AND2' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T Stanley_Limiter_Active;/* '<S302>/Compare' */
extern boolean_T RateLimiterActive;    /* '<S325>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S771>/Switch' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T APTC_PEDAL_LOW_IDLE_SW_THR_APV;/* Variable: APTC_PEDAL_LOW_IDLE_SW_THR_APV
                                              * Referenced by: '<S75>/Constant'
                                              */
extern real_T APTC_TRQ_PED_INV_MAP_PED_POS_MPV[1328];/* Variable: APTC_TRQ_PED_INV_MAP_PED_POS_MPV
                                                      * Referenced by: '<S85>/2D_Lookup_Table'
                                                      */
extern real_T APTC_TRQ_PED_INV_MAP_TRQ_STEPS[83];/* Variable: APTC_TRQ_PED_INV_MAP_TRQ_STEPS
                                                  * Referenced by: '<S85>/2D_Lookup_Table'
                                                  */
extern real_T APTC_TRQ_PED_TRQ_DATA_MPV[128];/* Variable: APTC_TRQ_PED_TRQ_DATA_MPV
                                              * Referenced by: '<S83>/2-D Lookup Table'
                                              */
extern real_T APTC_TRQ_PED_TRQ_ESPD_STEP_MPV[16];/* Variable: APTC_TRQ_PED_TRQ_ESPD_STEP_MPV
                                                  * Referenced by:
                                                  *   '<S83>/2-D Lookup Table'
                                                  *   '<S85>/2D_Lookup_Table'
                                                  */
extern real_T APTC_TRQ_PED_TRQ_POS_STEP_MPV[8];/* Variable: APTC_TRQ_PED_TRQ_POS_STEP_MPV
                                                * Referenced by: '<S83>/2-D Lookup Table'
                                                */
extern real_T BRK_DEM_KD_DATA_MPV[8];  /* Variable: BRK_DEM_KD_DATA_MPV
                                        * Referenced by: '<S149>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_KI_DATA_MPV[8];  /* Variable: BRK_DEM_KI_DATA_MPV
                                        * Referenced by: '<S148>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_KP_DATA_MPV[8];  /* Variable: BRK_DEM_KP_DATA_MPV
                                        * Referenced by: '<S147>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_MASS_STEP_MPV[8];/* Variable: BRK_DEM_MASS_STEP_MPV
                                        * Referenced by:
                                        *   '<S147>/1D_Lookup_Table'
                                        *   '<S148>/1D_Lookup_Table'
                                        *   '<S149>/1D_Lookup_Table'
                                        */
extern real_T BRK_GOV_FF_DECEL_RATE_DATA_MPV[32];/* Variable: BRK_GOV_FF_DECEL_RATE_DATA_MPV
                                                  * Referenced by: '<S199>/2D_Lookup_Table'
                                                  */
extern real_T BRK_GOV_FF_DECEL_RATE_STEP_MPV[16];/* Variable: BRK_GOV_FF_DECEL_RATE_STEP_MPV
                                                  * Referenced by:
                                                  *   '<S200>/2D_Lookup_Table'
                                                  *   '<S201>/2D_Lookup_Table'
                                                  */
extern real_T BRK_GOV_FF_MASS_STEP_MPV[2];/* Variable: BRK_GOV_FF_MASS_STEP_MPV
                                           * Referenced by:
                                           *   '<S199>/2D_Lookup_Table'
                                           *   '<S200>/2D_Lookup_Table'
                                           *   '<S201>/2D_Lookup_Table'
                                           */
extern real_T BRK_GOV_FF_PRESS_KPA_DATA_MPV[32];/* Variable: BRK_GOV_FF_PRESS_KPA_DATA_MPV
                                                 * Referenced by:
                                                 *   '<S200>/2D_Lookup_Table'
                                                 *   '<S201>/2D_Lookup_Table'
                                                 */
extern real_T BRK_GOV_FF_PRESS_KPA_STEP_MPV[16];/* Variable: BRK_GOV_FF_PRESS_KPA_STEP_MPV
                                                 * Referenced by: '<S199>/2D_Lookup_Table'
                                                 */
extern real_T DISTANCE_M;              /* Variable: DISTANCE_M
                                        * Referenced by: '<S81>/DISTANCE_M'
                                        */
extern real_T Lateral_Control_Curvature_Limit;/* Variable: Lateral_Control_Curvature_Limit
                                               * Referenced by:
                                               *   '<S281>/Constant3'
                                               *   '<S281>/Constant5'
                                               */
extern real_T Lateral_Control_D;       /* Variable: Lateral_Control_D
                                        * Referenced by: '<S313>/Derivative Gain'
                                        */
extern real_T Lateral_Control_Error_Limit;/* Variable: Lateral_Control_Error_Limit
                                           * Referenced by:
                                           *   '<S280>/Error Saturation'
                                           *   '<S281>/Constant'
                                           *   '<S281>/Constant1'
                                           */
extern real_T Lateral_Control_Error_Rate_Limit;/* Variable: Lateral_Control_Error_Rate_Limit
                                                * Referenced by:
                                                *   '<S281>/Constant10'
                                                *   '<S281>/Constant7'
                                                *   '<S281>/Constant8'
                                                *   '<S281>/Constant9'
                                                */
extern real_T Lateral_Control_I;       /* Variable: Lateral_Control_I
                                        * Referenced by: '<S313>/Integral Gain'
                                        */
extern real_T Lateral_Control_P;       /* Variable: Lateral_Control_P
                                        * Referenced by:
                                        *   '<S281>/PGain'
                                        *   '<S313>/Proportional Gain'
                                        */
extern real_T Lateral_Control_Pole;    /* Variable: Lateral_Control_Pole
                                        * Referenced by: '<S317>/GainPole'
                                        */
extern real_T Lateral_Control_Rate_Limit_APV;/* Variable: Lateral_Control_Rate_Limit_APV
                                              * Referenced by:
                                              *   '<S301>/Constant'
                                              *   '<S316>/Constant'
                                              */
extern real_T Lateral_Control_YawRate_Limit;/* Variable: Lateral_Control_YawRate_Limit
                                             * Referenced by:
                                             *   '<S281>/Constant2'
                                             *   '<S281>/Constant4'
                                             */
extern real_T Lateral_Control_Zero;    /* Variable: Lateral_Control_Zero
                                        * Referenced by: '<S317>/GainZero'
                                        */
extern real_T PROPB_REAX_1_E4_DESIRED_POSITION_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_POSITION_APV
                                                    * Referenced by: '<S1000>/Constant7'
                                                    */
extern real_T REAX_OFFSET_APV;         /* Variable: REAX_OFFSET_APV
                                        * Referenced by:
                                        *   '<S80>/Constant'
                                        *   '<S280>/ReAX Offset'
                                        *   '<S281>/Constant6'
                                        */
extern real_T STANLEY_GAIN_APV;        /* Variable: STANLEY_GAIN_APV
                                        * Referenced by: '<S280>/Stanley Gain K'
                                        */
extern real_T STANLEY_GAIN_KDSTEER_APV;/* Variable: STANLEY_GAIN_KDSTEER_APV
                                        * Referenced by: '<S280>/Stanley Gain Kdsteer'
                                        */
extern real_T STANLEY_GAIN_KDYAW_APV;  /* Variable: STANLEY_GAIN_KDYAW_APV
                                        * Referenced by: '<S280>/Stanley Gain Kdyaw'
                                        */
extern real_T STANLEY_GAIN_KSOFT_APV;  /* Variable: STANLEY_GAIN_KSOFT_APV
                                        * Referenced by: '<S280>/Stanley Gain Ksoft'
                                        */
extern real_T STEERCTRL_WHEEL_ANGLE_DATA_MPV[72];/* Variable: STEERCTRL_WHEEL_ANGLE_DATA_MPV
                                                  * Referenced by: '<S276>/1D_Lookup_Table'
                                                  */
extern real_T STEERCTRL_WHEEL_ANGLE_STEP_MPV[72];/* Variable: STEERCTRL_WHEEL_ANGLE_STEP_MPV
                                                  * Referenced by: '<S276>/1D_Lookup_Table'
                                                  */
extern real_T TQ_DEM_GEAR_RATIO_STEP_MPV[8];/* Variable: TQ_DEM_GEAR_RATIO_STEP_MPV
                                             * Referenced by:
                                             *   '<S241>/2D_Lookup_Table'
                                             *   '<S242>/2D_Lookup_Table'
                                             *   '<S243>/2D_Lookup_Table'
                                             */
extern real_T TQ_DEM_KD_DATA_MPV[64];  /* Variable: TQ_DEM_KD_DATA_MPV
                                        * Referenced by: '<S243>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_KI_DATA_MPV[64];  /* Variable: TQ_DEM_KI_DATA_MPV
                                        * Referenced by: '<S242>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_KP_DATA_MPV[64];  /* Variable: TQ_DEM_KP_DATA_MPV
                                        * Referenced by: '<S241>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_MASS_STEP_MPV[8]; /* Variable: TQ_DEM_MASS_STEP_MPV
                                        * Referenced by:
                                        *   '<S241>/2D_Lookup_Table'
                                        *   '<S242>/2D_Lookup_Table'
                                        *   '<S243>/2D_Lookup_Table'
                                        */
extern real_T UndersteerCorection;     /* Variable: UndersteerCorection
                                        * Referenced by:
                                        *   '<S280>/Understeer Corection'
                                        *   '<S281>/Understeer Corection'
                                        */
extern real_T VSPD_TARGET_KPH_APV;     /* Variable: VSPD_TARGET_KPH_APV
                                        * Referenced by: '<S81>/VSPD_TARGET_KPH_APV'
                                        */
extern real_T YAW_RATE_OFFSET_APV;     /* Variable: YAW_RATE_OFFSET_APV
                                        * Referenced by:
                                        *   '<S280>/YAW_RATE_OFFSET_APV'
                                        *   '<S281>/YAW_RATE_OFFSET_APV'
                                        */
extern real_T Yaw_Rate_FF_Gain;        /* Variable: Yaw_Rate_FF_Gain
                                        * Referenced by: '<S281>/RateFeedbackGain'
                                        */
extern ENUM_AUTONOMOUS_MODE_T AUTONOMOUS_MODE_SELECTOR_APV;/* Variable: AUTONOMOUS_MODE_SELECTOR_APV
                                                            * Referenced by: '<S76>/AUTONOMOUS_MODE_SELECTOR_APV'
                                                            */
extern ENUM_CAN_RX_T CANR_PROPB_XPR_1_50_CHANNEL_APV;/* Variable: CANR_PROPB_XPR_1_50_CHANNEL_APV
                                                      * Referenced by: '<S452>/Constant'
                                                      */
extern ENUM_CAN_RX_T PROPB_REAX_CHANNEL_APV;/* Variable: PROPB_REAX_CHANNEL_APV
                                             * Referenced by:
                                             *   '<S450>/Constant'
                                             *   '<S451>/Constant'
                                             *   '<S472>/Constant3'
                                             */
extern ENUM_LAT_STEER_SOURCE_T LAT_STEER_SRC_SELECTOR_APV;/* Variable: LAT_STEER_SRC_SELECTOR_APV
                                                           * Referenced by: '<S80>/LAT_STEER_SRC_SELECTOR_APV'
                                                           */
extern ENUM_LONG_SPEED_DEMAND_SOURCE_T LONG_SPEED_SRC_SELECTOR_APV;/* Variable: LONG_SPEED_SRC_SELECTOR_APV
                                                                    * Referenced by:
                                                                    *   '<S80>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    *   '<S81>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    */
extern ENUM_REAX_OPERATION_MODE_T PROPB_REAX_1_E4_DESIRED_OPMODE_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_OPMODE_APV
                                                                      * Referenced by: '<S983>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S1000>/Constant1'
                                                                      */
extern ENUM_SWITCH_T LATERAL_GAIN_SCHEDULE_APV;/* Variable: LATERAL_GAIN_SCHEDULE_APV
                                                * Referenced by:
                                                *   '<S280>/Use Gain Schedule'
                                                *   '<S280>/Use Gain Schedule1'
                                                *   '<S281>/Use Gain Schedule'
                                                *   '<S301>/Use Gain Schedule'
                                                */
extern ENUM_SWITCH_T RATE_LIMITER_ENABLE_APV;/* Variable: RATE_LIMITER_ENABLE_APV
                                              * Referenced by:
                                              *   '<S301>/RATE_LIMITER_ENABLE_APV'
                                              *   '<S316>/RATE_LIMITER_ENABLE_APV'
                                              */

/* Model entry point functions */
extern void L4_MABX_initialize(void);
extern void L4_MABX_output(int_T tid);
extern void L4_MABX_update(int_T tid);
extern void L4_MABX_terminate(void);

/* Real-time Model object */
extern RT_MODEL_L4_MABX_T *const L4_MABX_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'L4_MABX'
 * '<S1>'   : 'L4_MABX/BUS_DIAGNOSTICS'
 * '<S2>'   : 'L4_MABX/Controller'
 * '<S3>'   : 'L4_MABX/ETHERNET'
 * '<S4>'   : 'L4_MABX/FeedThrough'
 * '<S5>'   : 'L4_MABX/INPUTS_PIC_KW'
 * '<S6>'   : 'L4_MABX/OUTPUTS_PIC_KW'
 * '<S7>'   : 'L4_MABX/RTI Data'
 * '<S8>'   : 'L4_MABX/RTIEthXCP Data Capture'
 * '<S9>'   : 'L4_MABX/RTIEthXCP Setup'
 * '<S10>'  : 'L4_MABX/VersionInformation'
 * '<S11>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_1'
 * '<S12>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_2'
 * '<S13>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_3'
 * '<S14>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_4'
 * '<S15>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_5'
 * '<S16>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_6'
 * '<S17>'  : 'L4_MABX/BUS_DIAGNOSTICS/CAN_TYPE1_STATUS_M1_C2'
 * '<S18>'  : 'L4_MABX/BUS_DIAGNOSTICS/CAN_TYPE1_STATUS_M2_C1'
 * '<S19>'  : 'L4_MABX/BUS_DIAGNOSTICS/CAN_TYPE1_STATUS_M2_C2'
 * '<S20>'  : 'L4_MABX/BUS_DIAGNOSTICS/CAN_TYPE1_STATUS_M3_C1'
 * '<S21>'  : 'L4_MABX/BUS_DIAGNOSTICS/CAN_TYPE1_STATUS_M3_C2'
 * '<S22>'  : 'L4_MABX/BUS_DIAGNOSTICS/EQ'
 * '<S23>'  : 'L4_MABX/BUS_DIAGNOSTICS/EQ1'
 * '<S24>'  : 'L4_MABX/BUS_DIAGNOSTICS/EQ2'
 * '<S25>'  : 'L4_MABX/BUS_DIAGNOSTICS/EQ3'
 * '<S26>'  : 'L4_MABX/BUS_DIAGNOSTICS/EQ4'
 * '<S27>'  : 'L4_MABX/BUS_DIAGNOSTICS/EQ5'
 * '<S28>'  : 'L4_MABX/BUS_DIAGNOSTICS/_CAN_TYPE1_STATUS_M1_C1'
 * '<S29>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_1/CAN_TYPE1_BOR_M1_C1'
 * '<S30>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_1/Repeating_Sequence_Stair'
 * '<S31>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_1/Repeating_Sequence_Stair/Counter_RE'
 * '<S32>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_1/Repeating_Sequence_Stair/EQ'
 * '<S33>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_1/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S34>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_1/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S35>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_2/CAN_TYPE1_BOR_M1_C2'
 * '<S36>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_2/Repeating_Sequence_Stair'
 * '<S37>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_2/Repeating_Sequence_Stair/Counter_RE'
 * '<S38>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_2/Repeating_Sequence_Stair/EQ'
 * '<S39>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_2/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S40>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_2/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S41>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_3/CAN_TYPE1_BOR_M2_C1'
 * '<S42>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_3/Repeating_Sequence_Stair'
 * '<S43>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_3/Repeating_Sequence_Stair/Counter_RE'
 * '<S44>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_3/Repeating_Sequence_Stair/EQ'
 * '<S45>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_3/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S46>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_3/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S47>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_4/CAN_TYPE1_BOR_M2_C2'
 * '<S48>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_4/Repeating_Sequence_Stair'
 * '<S49>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_4/Repeating_Sequence_Stair/Counter_RE'
 * '<S50>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_4/Repeating_Sequence_Stair/EQ'
 * '<S51>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_4/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S52>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_4/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S53>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_5/CAN_TYPE1_BOR_M3_C1'
 * '<S54>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_5/Repeating_Sequence_Stair'
 * '<S55>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_5/Repeating_Sequence_Stair/Counter_RE'
 * '<S56>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_5/Repeating_Sequence_Stair/EQ'
 * '<S57>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_5/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S58>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_5/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S59>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_6/CAN_TYPE1_BOR_M3_C2'
 * '<S60>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_6/Repeating_Sequence_Stair'
 * '<S61>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_6/Repeating_Sequence_Stair/Counter_RE'
 * '<S62>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_6/Repeating_Sequence_Stair/EQ'
 * '<S63>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_6/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S64>'  : 'L4_MABX/BUS_DIAGNOSTICS/BUS_OFF_RECOVERY_6/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S65>'  : 'L4_MABX/Controller/L4_Controller'
 * '<S66>'  : 'L4_MABX/Controller/L4_Controller/BusInterface'
 * '<S67>'  : 'L4_MABX/Controller/L4_Controller/Task_10000ms'
 * '<S68>'  : 'L4_MABX/Controller/L4_Controller/Task_1000ms'
 * '<S69>'  : 'L4_MABX/Controller/L4_Controller/Task_100ms'
 * '<S70>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms'
 * '<S71>'  : 'L4_MABX/Controller/L4_Controller/Task_20ms'
 * '<S72>'  : 'L4_MABX/Controller/L4_Controller/Task_50ms'
 * '<S73>'  : 'L4_MABX/Controller/L4_Controller/Task_10000ms/FAULT_MANAGER_10000ms'
 * '<S74>'  : 'L4_MABX/Controller/L4_Controller/Task_1000ms/FAULT_MANAGER_1000ms'
 * '<S75>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms'
 * '<S76>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable'
 * '<S77>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms'
 * '<S78>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/FAULT_MANAGER_10ms'
 * '<S79>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms'
 * '<S80>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms'
 * '<S81>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target'
 * '<S82>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Determine desired pedal position by inverse pedal map'
 * '<S83>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Determine pedal signal source and torque value'
 * '<S84>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Saturate pedal torque output value'
 * '<S85>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Determine desired pedal position by inverse pedal map/2D_Lookup_Table'
 * '<S86>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Determine desired pedal position by inverse pedal map/If_Then_Else'
 * '<S87>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Determine pedal signal source and torque value/If_Then_Else'
 * '<S88>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Determine pedal signal source and torque value/If_Then_Else1'
 * '<S89>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Saturate pedal torque output value/Dynamic_saturation'
 * '<S90>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Saturate pedal torque output value/Dynamic_saturation1'
 * '<S91>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Saturate pedal torque output value/Dynamic_saturation/If_Then_Else'
 * '<S92>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Saturate pedal torque output value/Dynamic_saturation/If_Then_Else1'
 * '<S93>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Saturate pedal torque output value/Dynamic_saturation1/If_Then_Else'
 * '<S94>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/APTC_10ms/Saturate pedal torque output value/Dynamic_saturation1/If_Then_Else1'
 * '<S95>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/RestartDelay'
 * '<S96>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/Speed Difference Check'
 * '<S97>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/RestartDelay/Delay'
 * '<S98>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/RestartDelay/Detect Fall Nonpositive'
 * '<S99>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/RestartDelay/Delay/Compare To Zero'
 * '<S100>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/RestartDelay/Detect Fall Nonpositive/Nonpositive'
 * '<S101>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/Speed Difference Check/Compare To Constant'
 * '<S102>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller'
 * '<S103>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller'
 * '<S104>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_application_and_switch_states'
 * '<S105>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target'
 * '<S106>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits'
 * '<S107>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate'
 * '<S108>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_stopped'
 * '<S109>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control'
 * '<S110>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3'
 * '<S111>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/dT'
 * '<S112>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S113>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error'
 * '<S114>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID'
 * '<S115>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Reset_governor'
 * '<S116>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S117>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S118>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S119>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S120>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S121>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S122>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S123>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S124>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S125>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S126>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S127>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S128>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S129>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S130>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S131>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S132>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S133>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S134>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S135>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S136>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S137>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S138>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S139>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S140>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S141>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S142>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S143>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S144>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem'
 * '<S145>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3'
 * '<S146>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/dT'
 * '<S147>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table'
 * '<S148>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table1'
 * '<S149>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table2'
 * '<S150>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S151>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error'
 * '<S152>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID'
 * '<S153>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Reset_governor'
 * '<S154>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S155>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S156>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S157>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S158>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S159>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S160>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S161>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S162>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S163>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S164>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S165>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S166>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S167>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S168>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S169>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S170>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S171>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S172>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S173>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S174>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S175>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S176>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S177>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S178>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S179>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S180>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S181>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S182>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_application_and_switch_states/If_Then_Else'
 * '<S183>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target'
 * '<S184>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target'
 * '<S185>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/If_Then_Else'
 * '<S186>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/If_Then_Else1'
 * '<S187>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset'
 * '<S188>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/dT'
 * '<S189>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/Check Static  Lower Bound'
 * '<S190>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/If_Then_Else'
 * '<S191>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/Unit Delay External IC'
 * '<S192>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/If_Then_Else'
 * '<S193>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/If_Then_Else1'
 * '<S194>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset'
 * '<S195>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/dT'
 * '<S196>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/Check Static  Lower Bound'
 * '<S197>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/If_Then_Else'
 * '<S198>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/Unit Delay External IC'
 * '<S199>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table'
 * '<S200>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table1'
 * '<S201>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table2'
 * '<S202>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/Discrete Derivative1'
 * '<S203>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/LPF_first_order'
 * '<S204>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/LPF_first_order/If_Then_Else'
 * '<S205>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control/Compare To Zero'
 * '<S206>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control/Compare To Zero1'
 * '<S207>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Chart'
 * '<S208>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/ESTOP_10ms'
 * '<S209>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller'
 * '<S210>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Engine_speed_target'
 * '<S211>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Relay_control'
 * '<S212>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov'
 * '<S213>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant'
 * '<S214>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant1'
 * '<S215>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant2'
 * '<S216>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Zero'
 * '<S217>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Zero1'
 * '<S218>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Relay_control/Relay_control_state_machine'
 * '<S219>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses'
 * '<S220>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_tq_dem_gov_reset'
 * '<S221>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem'
 * '<S222>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3'
 * '<S223>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque'
 * '<S224>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation'
 * '<S225>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1'
 * '<S226>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2'
 * '<S227>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/If_Then_Else'
 * '<S228>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce'
 * '<S229>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/F_wheel_to_Tq_eng'
 * '<S230>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine aerodynamic resistance'
 * '<S231>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine gradient resistance'
 * '<S232>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine rolling resistance'
 * '<S233>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/If_Then_Else'
 * '<S234>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine rolling resistance/Determine coefficient of rolling resistance'
 * '<S235>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation/If_Then_Else'
 * '<S236>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation/If_Then_Else1'
 * '<S237>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1/If_Then_Else'
 * '<S238>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1/If_Then_Else1'
 * '<S239>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2/If_Then_Else'
 * '<S240>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2/If_Then_Else1'
 * '<S241>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table'
 * '<S242>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table1'
 * '<S243>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table2'
 * '<S244>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S245>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error'
 * '<S246>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID'
 * '<S247>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Reset_governor'
 * '<S248>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S249>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S250>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S251>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S252>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S253>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S254>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S255>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S256>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S257>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S258>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S259>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S260>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S261>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S262>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S263>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S264>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S265>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S266>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S267>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S268>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S269>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S270>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S271>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S272>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S273>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S274>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S275>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S276>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/1D_Lookup_Table'
 * '<S277>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF'
 * '<S278>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1'
 * '<S279>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID'
 * '<S280>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController'
 * '<S281>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController'
 * '<S282>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError'
 * '<S283>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew'
 * '<S284>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/stanley'
 * '<S285>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE'
 * '<S286>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Data Type Conversion Inherited'
 * '<S287>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Enable'
 * '<S288>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Interval Test'
 * '<S289>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Reset'
 * '<S290>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE'
 * '<S291>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Data Type Conversion Inherited'
 * '<S292>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Enable'
 * '<S293>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Interval Test'
 * '<S294>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Reset'
 * '<S295>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID'
 * '<S296>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID'
 * '<S297>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/Saturation Dynamic'
 * '<S298>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID/AntiWindup'
 * '<S299>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Error Calc'
 * '<S300>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/If_Then_Else'
 * '<S301>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Rate Limiter with Saturation'
 * '<S302>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Rate Limiter with Saturation/Compare To Constant'
 * '<S303>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Rate Limiter with Saturation/If_Then_Else'
 * '<S304>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Rate Limiter with Saturation/Rate Limiter'
 * '<S305>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Rate Limiter with Saturation/Saturation'
 * '<S306>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Rate Limiter with Saturation/Rate Limiter/Saturation Dynamic'
 * '<S307>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Bumpless Transfer'
 * '<S308>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation'
 * '<S309>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Calc'
 * '<S310>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation'
 * '<S311>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else'
 * '<S312>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else1'
 * '<S313>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/PID Controller'
 * '<S314>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic'
 * '<S315>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1'
 * '<S316>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation'
 * '<S317>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Transfer Fcn Lead or Lag'
 * '<S318>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation'
 * '<S319>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else'
 * '<S320>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else1'
 * '<S321>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else'
 * '<S322>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else1'
 * '<S323>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S324>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1/Saturation Dynamic'
 * '<S325>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Compare To Constant'
 * '<S326>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/If_Then_Else'
 * '<S327>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter'
 * '<S328>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Saturation'
 * '<S329>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter/Saturation Dynamic'
 * '<S330>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else'
 * '<S331>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else1'
 * '<S332>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/Detect Change'
 * '<S333>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order'
 * '<S334>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied'
 * '<S335>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1'
 * '<S336>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order/If_Then_Else'
 * '<S337>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied/If_Then_Else'
 * '<S338>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1/If_Then_Else'
 * '<S339>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Chart'
 * '<S340>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event'
 * '<S341>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/RS flip-flop'
 * '<S342>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Rising_edge'
 * '<S343>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset'
 * '<S344>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S345>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S346>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S347>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Compare To Zero'
 * '<S348>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Detect Change1'
 * '<S349>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile'
 * '<S350>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile'
 * '<S351>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit'
 * '<S352>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/If_Then_Else'
 * '<S353>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit'
 * '<S354>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/dT'
 * '<S355>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Detect Change1'
 * '<S356>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values'
 * '<S357>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset'
 * '<S358>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values/If_Then_Else'
 * '<S359>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Check Static  Lower Bound'
 * '<S360>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/If_Then_Else'
 * '<S361>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Unit Delay External IC'
 * '<S362>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile'
 * '<S363>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value'
 * '<S364>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/TwentyPointVectorCalculation'
 * '<S365>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/VehicleSpeedSetpointDynamicCalculation'
 * '<S366>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value'
 * '<S367>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Compare To Zero'
 * '<S368>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/SR flip-flop'
 * '<S369>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value/If_Then_Else'
 * '<S370>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/If_Then_Else'
 * '<S371>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators'
 * '<S372>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance'
 * '<S373>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator'
 * '<S374>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT'
 * '<S375>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT1'
 * '<S376>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/If_Then_Else'
 * '<S377>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/Unit Delay Resettable External IC1'
 * '<S378>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method'
 * '<S379>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Unit Delay Resettable External IC1'
 * '<S380>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method/Unit Delay Resettable External IC'
 * '<S381>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant3'
 * '<S382>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant8'
 * '<S383>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/If_Then_Else4'
 * '<S384>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Rising_edge'
 * '<S385>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset'
 * '<S386>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/dT'
 * '<S387>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S388>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/If_Then_Else'
 * '<S389>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S390>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant10'
 * '<S391>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant11'
 * '<S392>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant12'
 * '<S393>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant9'
 * '<S394>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/If_Then_Else4'
 * '<S395>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Rising_edge'
 * '<S396>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset'
 * '<S397>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/dT'
 * '<S398>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S399>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/If_Then_Else'
 * '<S400>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S401>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Mapping'
 * '<S402>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Odometry'
 * '<S403>' : 'L4_MABX/ETHERNET/Data RX'
 * '<S404>' : 'L4_MABX/ETHERNET/Data TX'
 * '<S405>' : 'L4_MABX/ETHERNET/TCPIP_Setup'
 * '<S406>' : 'L4_MABX/ETHERNET/UDPIP_Communication'
 * '<S407>' : 'L4_MABX/ETHERNET/Update_RTMaps_Interface'
 * '<S408>' : 'L4_MABX/ETHERNET/Data RX/EQ'
 * '<S409>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check'
 * '<S410>' : 'L4_MABX/ETHERNET/Data RX/RTMapsDecode'
 * '<S411>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1'
 * '<S412>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1/Positive'
 * '<S413>' : 'L4_MABX/ETHERNET/Data TX/RTMapsEncode'
 * '<S414>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background'
 * '<S415>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background_Task'
 * '<S416>' : 'L4_MABX/ETHERNET/TCPIP_Setup/IRQ_Level_2_SW_INT'
 * '<S417>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task'
 * '<S418>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block'
 * '<S419>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task/Tcp Input Processing'
 * '<S420>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block/Common Hardware Interrupt Interface'
 * '<S421>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW'
 * '<S422>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL'
 * '<S423>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access'
 * '<S424>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_EC1'
 * '<S425>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_3'
 * '<S426>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_4'
 * '<S427>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00'
 * '<S428>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00'
 * '<S429>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A'
 * '<S430>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A'
 * '<S431>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31'
 * '<S432>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00'
 * '<S433>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31'
 * '<S434>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks'
 * '<S435>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00'
 * '<S436>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31'
 * '<S437>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01'
 * '<S438>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B'
 * '<S439>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B'
 * '<S440>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B'
 * '<S441>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B'
 * '<S442>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00'
 * '<S443>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00'
 * '<S444>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00'
 * '<S445>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00'
 * '<S446>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03'
 * '<S447>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00'
 * '<S448>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B'
 * '<S449>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13'
 * '<S450>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13'
 * '<S451>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13'
 * '<S452>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50'
 * '<S453>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2'
 * '<S454>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01'
 * '<S455>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30'
 * '<S456>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03'
 * '<S457>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2'
 * '<S458>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3'
 * '<S459>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5'
 * '<S460>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01'
 * '<S461>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05'
 * '<S462>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B'
 * '<S463>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B'
 * '<S464>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03'
 * '<S465>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00'
 * '<S466>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C1'
 * '<S467>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C2'
 * '<S468>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C1'
 * '<S469>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C2'
 * '<S470>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C1'
 * '<S471>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C2'
 * '<S472>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable'
 * '<S473>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3'
 * '<S474>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4'
 * '<S475>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM'
 * '<S476>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPDT'
 * '<S477>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses15'
 * '<S478>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses16'
 * '<S479>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses2'
 * '<S480>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses3'
 * '<S481>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1'
 * '<S482>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel'
 * '<S483>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S484>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ'
 * '<S485>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ1'
 * '<S486>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ2'
 * '<S487>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ3'
 * '<S488>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ4'
 * '<S489>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ5'
 * '<S490>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1'
 * '<S491>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel'
 * '<S492>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S493>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ'
 * '<S494>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ1'
 * '<S495>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ2'
 * '<S496>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ3'
 * '<S497>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ4'
 * '<S498>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ5'
 * '<S499>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1'
 * '<S500>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1/ACC1_2A_'
 * '<S501>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1'
 * '<S502>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1/AEBS1_A0'
 * '<S503>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1'
 * '<S504>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1/AIR1'
 * '<S505>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1'
 * '<S506>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1/AMB'
 * '<S507>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4'
 * '<S508>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4/B2'
 * '<S509>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1'
 * '<S510>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1/Tracks'
 * '<S511>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1'
 * '<S512>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1/CCVS1_00'
 * '<S513>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1'
 * '<S514>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1/CCVS1_31'
 * '<S515>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4'
 * '<S516>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_00'
 * '<S517>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_1'
 * '<S518>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1'
 * '<S519>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1/CVW_0B1'
 * '<S520>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1'
 * '<S521>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1/EBC1_0B'
 * '<S522>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1'
 * '<S523>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1/EBC1_0B'
 * '<S524>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1'
 * '<S525>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1/EBC2_0B1'
 * '<S526>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00'
 * '<S527>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1'
 * '<S528>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/EQ1'
 * '<S529>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/Decode'
 * '<S530>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/serialize_tpdt'
 * '<S531>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/MergeBuses'
 * '<S532>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1'
 * '<S533>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte11'
 * '<S534>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13'
 * '<S535>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte14'
 * '<S536>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16'
 * '<S537>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18'
 * '<S538>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20'
 * '<S539>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte2'
 * '<S540>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22'
 * '<S541>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte23'
 * '<S542>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte24'
 * '<S543>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte25'
 * '<S544>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte26'
 * '<S545>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte27'
 * '<S546>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29'
 * '<S547>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31'
 * '<S548>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33'
 * '<S549>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte34'
 * '<S550>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte35'
 * '<S551>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte36'
 * '<S552>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte37'
 * '<S553>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte38'
 * '<S554>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4'
 * '<S555>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte5'
 * '<S556>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7'
 * '<S557>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte8'
 * '<S558>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10'
 * '<S559>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1/OR'
 * '<S560>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13/OR'
 * '<S561>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16/OR'
 * '<S562>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18/OR'
 * '<S563>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20/OR'
 * '<S564>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22/OR'
 * '<S565>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29/OR'
 * '<S566>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31/OR'
 * '<S567>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33/OR'
 * '<S568>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4/OR'
 * '<S569>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7/OR'
 * '<S570>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10/OR'
 * '<S571>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1'
 * '<S572>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1/EEC1_001'
 * '<S573>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2'
 * '<S574>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2/EEC2_001'
 * '<S575>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1'
 * '<S576>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1/EEC3_001'
 * '<S577>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1'
 * '<S578>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1/ETC2_031'
 * '<S579>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4'
 * '<S580>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_011'
 * '<S581>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_1'
 * '<S582>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1'
 * '<S583>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1/HRW_0B'
 * '<S584>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2'
 * '<S585>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6'
 * '<S586>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2/PropB_REAX_2_13'
 * '<S587>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6/PropB_REAX_2_13'
 * '<S588>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1'
 * '<S589>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2'
 * '<S590>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6'
 * '<S591>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel'
 * '<S592>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S593>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S594>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6/CAN_TYPE1_RX_M3_C2'
 * '<S595>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ'
 * '<S596>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ1'
 * '<S597>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ2'
 * '<S598>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ3'
 * '<S599>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ4'
 * '<S600>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ5'
 * '<S601>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1'
 * '<S602>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2'
 * '<S603>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3'
 * '<S604>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel'
 * '<S605>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S606>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S607>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3/CAN_TYPE1_RX_M3_C2'
 * '<S608>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ'
 * '<S609>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ1'
 * '<S610>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ2'
 * '<S611>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ3'
 * '<S612>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ4'
 * '<S613>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ5'
 * '<S614>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1'
 * '<S615>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2'
 * '<S616>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3'
 * '<S617>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel'
 * '<S618>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S619>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S620>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3/CAN_TYPE1_RX_M2_C1'
 * '<S621>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ'
 * '<S622>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ1'
 * '<S623>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ2'
 * '<S624>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ3'
 * '<S625>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ4'
 * '<S626>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ5'
 * '<S627>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6'
 * '<S628>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeLeft'
 * '<S629>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeRight'
 * '<S630>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LanePosEst'
 * '<S631>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4'
 * '<S632>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_011'
 * '<S633>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_1'
 * '<S634>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3'
 * '<S635>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3/Bendix_Prop2C2_Status_30'
 * '<S636>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1'
 * '<S637>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1/SSI2_031'
 * '<S638>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6'
 * '<S639>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6/PX2_MapLaneEgoLeft'
 * '<S640>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6'
 * '<S641>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6/PX2_MapLaneEgoRight'
 * '<S642>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6'
 * '<S643>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6/PX2_EgoLanePos'
 * '<S644>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4'
 * '<S645>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4/SystemTime_01'
 * '<S646>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5'
 * '<S647>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5/TC1_03_05'
 * '<S648>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1'
 * '<S649>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1/VDC1_0B_'
 * '<S650>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1'
 * '<S651>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1/VDC2_0B1'
 * '<S652>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1'
 * '<S653>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1/VEP1'
 * '<S654>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00'
 * '<S655>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI'
 * '<S656>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/EQ1'
 * '<S657>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/Decode'
 * '<S658>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/serialize_tpdt'
 * '<S659>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero1'
 * '<S660>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero2'
 * '<S661>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop'
 * '<S662>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop1'
 * '<S663>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/If_Then_Else'
 * '<S664>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel'
 * '<S665>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ'
 * '<S666>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ1'
 * '<S667>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ2'
 * '<S668>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ3'
 * '<S669>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ4'
 * '<S670>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ5'
 * '<S671>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/MergeBuses'
 * '<S672>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1'
 * '<S673>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte2'
 * '<S674>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4'
 * '<S675>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6'
 * '<S676>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8'
 * '<S677>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND1'
 * '<S678>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND2'
 * '<S679>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4/OR'
 * '<S680>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6/OR1'
 * '<S681>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8/OR2'
 * '<S682>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/MergeBuses'
 * '<S683>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1'
 * '<S684>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte2'
 * '<S685>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte3'
 * '<S686>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte5'
 * '<S687>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7'
 * '<S688>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte8'
 * '<S689>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND'
 * '<S690>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND1'
 * '<S691>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND2'
 * '<S692>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7/OR'
 * '<S693>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM'
 * '<S694>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS'
 * '<S695>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort'
 * '<S696>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck'
 * '<S697>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS'
 * '<S698>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ'
 * '<S699>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ1'
 * '<S700>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ2'
 * '<S701>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ3'
 * '<S702>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ4'
 * '<S703>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/MergeBuses'
 * '<S704>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte1'
 * '<S705>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3'
 * '<S706>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte4'
 * '<S707>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8'
 * '<S708>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3/OR'
 * '<S709>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8/OR'
 * '<S710>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/MergeBuses'
 * '<S711>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte1'
 * '<S712>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte2'
 * '<S713>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte3'
 * '<S714>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8'
 * '<S715>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8/OR'
 * '<S716>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/MergeBuses'
 * '<S717>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte1'
 * '<S718>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte2'
 * '<S719>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8'
 * '<S720>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8/OR'
 * '<S721>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/MergeBuses'
 * '<S722>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte1'
 * '<S723>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3'
 * '<S724>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte4'
 * '<S725>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8'
 * '<S726>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3/OR'
 * '<S727>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8/OR'
 * '<S728>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/MergeBuses'
 * '<S729>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte1'
 * '<S730>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3'
 * '<S731>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte4'
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte5'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3/OR'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8/OR'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL1'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL2'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL3'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_1'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_3'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_4'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_5'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_6'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_7'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Nonpositive'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Nonpositive/Nonpositive'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive/Positive'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay/Compare To Zero'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay/Compare To Zero'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Fall Nonpositive'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Rise Positive'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Off Delay'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/On Delay'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Fall Nonpositive/Nonpositive'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Rise Positive/Positive'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Off Delay/Compare To Zero'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/On Delay/Compare To Zero'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S804>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S805>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S806>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S807>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S808>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S809>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S810>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S811>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S812>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S813>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S814>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S815>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S816>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S817>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S818>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S819>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S820>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S821>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S822>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S823>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S824>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S825>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S826>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S827>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S828>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S829>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S830>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S831>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S832>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S833>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S834>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S835>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S836>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S837>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S838>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S839>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S840>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S841>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S842>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S843>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S844>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S845>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S846>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S847>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S848>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S849>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S850>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S851>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S852>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S853>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S854>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1043>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1044>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1045>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S1046>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S1047>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S1048>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S1049>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S1050>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1051>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1052>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1053>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1054>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1055>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1056>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1057>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1058>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1059>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1060>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1061>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1062>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1063>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1064>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1065>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1066>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1067>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1068>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1069>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1070>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1071>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1072>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1073>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1074>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1075>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1076>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1077>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1078>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL6'
 * '<S1079>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1080>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1081>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1082>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1083>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1084>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1085>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1086>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1087>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1088>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1089>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1090>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1091>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1092>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1093>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1094>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1095>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1096>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
