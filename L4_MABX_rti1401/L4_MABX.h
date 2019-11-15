/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.851
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Thu Nov 14 14:52:37 2019
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

/* Block signals for system '<S106>/Calculate_D_term' */
typedef struct {
  real_T MinMax1;                      /* '<S115>/MinMax1' */
  real_T Saturation;                   /* '<S115>/Saturation' */
  real_T Divide;                       /* '<S115>/Divide' */
  real_T Product2;                     /* '<S115>/Product2' */
  real_T Subtract1;                    /* '<S115>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S115>/Unit_Delay2' */
  real_T Product1;                     /* '<S115>/Product1' */
  real_T Add1;                         /* '<S115>/Add1' */
  real_T Divide_k;                     /* '<S110>/Divide' */
  real_T Xold;                         /* '<S116>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S116>/Init' */
  real_T Subtract;                     /* '<S110>/Subtract' */
  real_T Xnew;                         /* '<S116>/Reset' */
  uint8_T FixPtUnitDelay2;             /* '<S116>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S116>/FixPt Logical Operator' */
  boolean_T Unit_Delay1;               /* '<S115>/Unit_Delay1' */
  boolean_T LogicalOperator;           /* '<S115>/Logical Operator' */
  B_If_Then_Else_L4_MABX_T If_Then_Else;/* '<S115>/If_Then_Else' */
} B_Calculate_D_term_L4_MABX_T;

/* Block states (default storage) for system '<S106>/Calculate_D_term' */
typedef struct {
  real_T Unit_Delay2_DSTATE;           /* '<S115>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE;       /* '<S116>/FixPt Unit Delay1' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S116>/FixPt Unit Delay2' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S115>/Unit_Delay1' */
  boolean_T Calculate_D_term_MODE;     /* '<S106>/Calculate_D_term' */
} DW_Calculate_D_term_L4_MABX_T;

/* Block signals for system '<S120>/If_Then_Else3' */
typedef struct {
  boolean_T Switch;                    /* '<S128>/Switch' */
} B_If_Then_Else_L4_MABX_c_T;

/* Block signals for system '<S106>/Calculate_I_term' */
typedef struct {
  real_T Xold;                         /* '<S122>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S122>/Init' */
  real_T Product1;                     /* '<S118>/Product1' */
  real_T Add;                          /* '<S118>/Add' */
  real_T Unit_Delay;                   /* '<S111>/Unit_Delay' */
  real_T Product;                      /* '<S120>/Product' */
  real_T Subtract;                     /* '<S120>/Subtract' */
  real_T Subtract1;                    /* '<S120>/Subtract1' */
  real_T Xnew;                         /* '<S122>/Reset' */
  real_T Product_j;                    /* '<S119>/Product' */
  real_T Subtract_g;                   /* '<S119>/Subtract' */
  real_T Subtract1_k;                  /* '<S119>/Subtract1' */
  real_T Subtract2;                    /* '<S119>/Subtract2' */
  uint8_T FixPtUnitDelay2;             /* '<S122>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S122>/FixPt Logical Operator' */
  boolean_T Compare;                   /* '<S123>/Compare' */
  boolean_T Compare_n;                 /* '<S124>/Compare' */
  boolean_T RelationalOperator1;       /* '<S120>/Relational Operator1' */
  boolean_T RelationalOperator2;       /* '<S120>/Relational Operator2' */
  boolean_T LogicalOperator1;          /* '<S120>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S120>/Logical Operator2' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else3;/* '<S120>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S120>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S120>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S120>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else;/* '<S118>/If_Then_Else' */
} B_Calculate_I_term_L4_MABX_T;

/* Block states (default storage) for system '<S106>/Calculate_I_term' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S122>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE;            /* '<S111>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S122>/FixPt Unit Delay2' */
  boolean_T Calculate_I_term_MODE;     /* '<S106>/Calculate_I_term' */
} DW_Calculate_I_term_L4_MABX_T;

/* Block signals for system '<S98>/If_Then_Else' */
typedef struct {
  boolean_T Switch;                    /* '<S176>/Switch' */
} B_If_Then_Else_L4_MABX_m_T;

/* Block signals for system '<S177>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S179>/Switch' */
} B_If_Then_Else_L4_MABX_k_T;

/* Block signals for system '<S301>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S311>/Switch' */
} B_If_Then_Else_L4_MABX_mf_T;

/* Block signals for system '<S341>/If_Then_Else' */
typedef struct {
  real_T Vehicle_speed_target;         /* '<S343>/Switch' */
  real_T Vehicle_speed;                /* '<S343>/Switch' */
  real_T Distance_m;                   /* '<S343>/Switch' */
} B_If_Then_Else_L4_MABX_h_T;

/* Block signals for system '<S985>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S1009>/Switch' */
  real_T XBRUrgency;                   /* '<S1009>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S1009>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S1009>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1009>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S1009>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S1009>/Switch' */
} B_If_Then_Else_L4_MABX_b_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S394>/Decoder' */
  real_T SFunction1_o1;                /* '<S728>/S-Function1' */
  real_T SFunction1_o2;                /* '<S728>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S406>/Data Type Conversion2' */
  real_T Xold;                         /* '<S766>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S766>/Init' */
  real_T FixPtSum1;                    /* '<S762>/FixPt Sum1' */
  real_T FixPtSum1_i;                  /* '<S765>/FixPt Sum1' */
  real_T Gain;                         /* '<S406>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S406>/Data Type Conversion9' */
  real_T Xold_i;                       /* '<S758>/FixPt Unit Delay1' */
  real_T Init_c;                       /* '<S758>/Init' */
  real_T FixPtSum1_l;                  /* '<S754>/FixPt Sum1' */
  real_T FixPtSum1_m;                  /* '<S757>/FixPt Sum1' */
  real_T SFunction1_o1_p;              /* '<S729>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S729>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S406>/Data Type Conversion3' */
  real_T Xold_l;                       /* '<S782>/FixPt Unit Delay1' */
  real_T Init_n;                       /* '<S782>/Init' */
  real_T FixPtSum1_d;                  /* '<S778>/FixPt Sum1' */
  real_T FixPtSum1_o;                  /* '<S781>/FixPt Sum1' */
  real_T Gain1;                        /* '<S406>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S406>/Data Type Conversion1' */
  real_T Xold_p;                       /* '<S774>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S774>/Init' */
  real_T FixPtSum1_c;                  /* '<S770>/FixPt Sum1' */
  real_T FixPtSum1_p;                  /* '<S773>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S803>/MinMax1' */
  real_T Saturation;                   /* '<S803>/Saturation' */
  real_T Divide;                       /* '<S803>/Divide' */
  real_T Product2;                     /* '<S803>/Product2' */
  real_T Subtract1;                    /* '<S803>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S803>/Unit_Delay2' */
  real_T Product1;                     /* '<S803>/Product1' */
  real_T Add1;                         /* '<S803>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S736>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_n;                    /* '<S804>/MinMax1' */
  real_T Saturation_k;                 /* '<S804>/Saturation' */
  real_T Divide_o;                     /* '<S804>/Divide' */
  real_T Product2_e;                   /* '<S804>/Product2' */
  real_T Subtract1_c;                  /* '<S804>/Subtract1' */
  real_T Unit_Delay2_p;                /* '<S804>/Unit_Delay2' */
  real_T Product1_l;                   /* '<S804>/Product1' */
  real_T Add1_c;                       /* '<S804>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S736>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S738>/Subtract' */
  real_T Abs;                          /* '<S738>/Abs' */
  real_T Xold_p0;                      /* '<S802>/FixPt Unit Delay1' */
  real_T Init_l;                       /* '<S802>/Init' */
  real_T Xold_c;                       /* '<S801>/FixPt Unit Delay1' */
  real_T Init_m;                       /* '<S801>/Init' */
  real_T MinMax;                       /* '<S732>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S738>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S733>/Data Type Conversion2' */
  real_T Xold_o;                       /* '<S790>/FixPt Unit Delay1' */
  real_T Init_mj;                      /* '<S790>/Init' */
  real_T FixPtSum1_k;                  /* '<S786>/FixPt Sum1' */
  real_T FixPtSum1_f;                  /* '<S789>/FixPt Sum1' */
  real_T SFunction1;                   /* '<S722>/S-Function1' */
  real_T IgnitionKeySwitch_voltage;    /* '<S406>/KL15_Monitor' */
  real_T SPN524_TransSelectedGear;     /* '<S561>/Data Type Conversion1' */
  real_T SPN523_TransCurrentGear;      /* '<S561>/Data Type Conversion2' */
  real_T SPN526_TransActualGearRatio;  /* '<S561>/Data Type Conversion3' */
  real_T SPN514_NominalFrictionPercentTo;/* '<S559>/Data Type Conversion2' */
  real_T SPN2978_EstEngParasiticLossesPe;/* '<S559>/Data Type Conversion1' */
  real_T SPN1760_GrossCombinationVehicle;/* '<S502>/Data Type Conversion1' */
  real_T ACCDistanceAlertSignal;       /* '<S483>/Data Type Conversion12' */
  real_T ForwardCollisionWarning;      /* '<S483>/Data Type Conversion13' */
  real_T SPN544_EngineReferenceTorque; /* '<S522>/Data Type Conversion2' */
  real_T PitchAngleExRange;            /* '<S620>/Data Type Conversion1' */
  real_T PressureP1;                   /* '<S618>/Data Type Conversion7' */
  real_T PressureP4;                   /* '<S618>/Data Type Conversion6' */
  real_T PressureP21;                  /* '<S618>/Data Type Conversion11' */
  real_T PressureP22;                  /* '<S618>/Data Type Conversion12' */
  real_T PressureP42;                  /* '<S618>/Data Type Conversion13' */
  real_T Heartbeat;                    /* '<S389>/Heartbeat' */
  real_T Decoder_o3;                   /* '<S394>/Decoder' */
  real_T UnitDelay;                    /* '<S393>/Unit Delay' */
  real_T Count;                        /* '<S393>/Switch' */
  real_T Latitude_;                    /* '<S615>/Switch' */
  real_T Longitude_;                   /* '<S615>/Switch' */
  real_T SID;                          /* '<S499>/Switch' */
  real_T COGReference;                 /* '<S499>/Switch' */
  real_T CourseOverGround;             /* '<S499>/Switch' */
  real_T SpeedOverGround;              /* '<S499>/Switch' */
  real_T DataTypeConversion[8];        /* '<S1032>/Data Type Conversion' */
  real_T DataTypeConversion_n[8];      /* '<S1033>/Data Type Conversion' */
  real_T TmpRTBAtANDInport1;           /* '<S1048>/Flash' */
  real_T MinMax_d;                     /* '<S820>/MinMax' */
  real_T DataTypeConversion1;          /* '<S820>/Data Type Conversion1' */
  real_T Divide_k;                     /* '<S820>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S820>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1046>/1-D Lookup Table2' */
  real_T Gain1_e;                      /* '<S820>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S820>/Data Type Conversion6' */
  real_T MinMax1_b;                    /* '<S820>/MinMax1' */
  real_T DataTypeConversion2_k;        /* '<S820>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S820>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S820>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1046>/1-D Lookup Table3' */
  real_T Gain_h;                       /* '<S820>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S820>/Data Type Conversion10' */
  real_T SFunction1_o1_h;              /* '<S727>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S727>/S-Function1' */
  real_T ShiftControlDC;               /* '<S406>/ShifterControlDC' */
  real_T Flash;                        /* '<S1048>/Flash' */
  real_T HDOP_;                        /* '<S563>/Switch' */
  real_T DesSteeringAngle;             /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle2;           /* '<S3>/Unit_Delay' */
  real_T SPN1760_GrossCombinationVehic_a;/* '<S3>/Unit_Delay' */
  real_T ACCDistanceAlertSignal_d;     /* '<S3>/Unit_Delay' */
  real_T ForwardCollisionWarning_d;    /* '<S3>/Unit_Delay' */
  real_T SPN544_EngineReferenceTorque_i;/* '<S3>/Unit_Delay' */
  real_T ROPEngCtrlActive;             /* '<S3>/Unit_Delay' */
  real_T ROPBrakeCtrlActive;           /* '<S3>/Unit_Delay' */
  real_T YCEngCtrlActive;              /* '<S3>/Unit_Delay' */
  real_T YCBrakeCtrlActive;            /* '<S3>/Unit_Delay' */
  real_T SPN1807_SteeringWheelAngle;   /* '<S3>/Unit_Delay' */
  real_T SPN1808_YawRate;              /* '<S3>/Unit_Delay' */
  real_T DesSteeringAngleTerm;         /* '<S3>/Unit_Delay' */
  real_T SPN1810_LongitudinalAcceleratio;/* '<S3>/Unit_Delay' */
  real_T SteerWheelTurnCounter;        /* '<S3>/Unit_Delay' */
  real_T SteerWheelAngleSensorType;    /* '<S3>/Unit_Delay' */
  real_T LateralAcceleration;          /* '<S3>/Unit_Delay' */
  real_T BarometricPress;              /* '<S3>/Unit_Delay' */
  real_T AmbientAirTemp;               /* '<S3>/Unit_Delay' */
  real_T PitchAngleExRange_k;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstPosition;       /* '<S3>/Unit_Delay' */
  real_T DesSteeringDistTerm;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstAngle;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstNumPoints;      /* '<S3>/Unit_Delay' */
  real_T Latitude__h;                  /* '<S3>/Unit_Delay' */
  real_T Longitude__k;                 /* '<S3>/Unit_Delay' */
  real_T HDOP__h;                      /* '<S3>/Unit_Delay' */
  real_T PressureP1_k;                 /* '<S3>/Unit_Delay' */
  real_T PressureP4_n;                 /* '<S3>/Unit_Delay' */
  real_T PressureP21_b;                /* '<S3>/Unit_Delay' */
  real_T numLanePoints;                /* '<S3>/Unit_Delay' */
  real_T PressureP22_h;                /* '<S3>/Unit_Delay' */
  real_T PressureP42_o;                /* '<S3>/Unit_Delay' */
  real_T ReAX_ActualHandwheelPos_j;    /* '<S3>/Unit_Delay' */
  real_T ReAX_EchoedSteerWheelPos_b;   /* '<S3>/Unit_Delay' */
  real_T CurrentAzimuth_rad_d;         /* '<S3>/Unit_Delay' */
  real_T TargetAzimuth_rad_n;          /* '<S3>/Unit_Delay' */
  real_T CurrentVelocity_kph_d;        /* '<S3>/Unit_Delay' */
  real_T TargetVelocity_kph_h;         /* '<S3>/Unit_Delay' */
  real_T rawPositionError;             /* '<S3>/Unit_Delay' */
  real_T Curvature_d;                  /* '<S3>/Unit_Delay' */
  real_T CrosstrackError_b;            /* '<S3>/Unit_Delay' */
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
  real_T VSPD_TARGET_KPH_APV_i;        /* '<S3>/Unit_Delay' */
  real_T Vehicle_speed_target;         /* '<S3>/Unit_Delay' */
  real_T VSPD_HYST_KPH_APV;            /* '<S3>/Unit_Delay' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_APV;/* '<S3>/Unit_Delay' */
  real_T ACCEL_LIM_MS2_APV;            /* '<S3>/Unit_Delay' */
  real_T S;                            /* '<S3>/Unit_Delay' */
  real_T B;                            /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_Y;             /* '<S3>/Unit_Delay' */
  real_T X;                            /* '<S3>/Unit_Delay' */
  real_T Y;                            /* '<S3>/Unit_Delay' */
  real_T pathCurveOffset;              /* '<S3>/Unit_Delay' */
  real_T S_j;                          /* '<S3>/Unit_Delay' */
  real_T distanceSpdTarget;            /* '<S3>/Unit_Delay' */
  real_T state;                        /* '<S3>/Unit_Delay' */
  real_T lastWayPointIdx;              /* '<S3>/Unit_Delay' */
  real_T crossed;                      /* '<S3>/Unit_Delay' */
  real_T minimumDist;                  /* '<S3>/Unit_Delay' */
  real_T SrefOnthisPath;               /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_e;             /* '<S3>/Unit_Delay' */
  real_T StartDist;                    /* '<S3>/Unit_Delay' */
  real_T minDistIdx;                   /* '<S3>/Unit_Delay' */
  real_T pathS;                        /* '<S3>/Unit_Delay' */
  real_T pathLat;                      /* '<S3>/Unit_Delay' */
  real_T pathLong;                     /* '<S3>/Unit_Delay' */
  real_T pathSteeringAngle;            /* '<S3>/Unit_Delay' */
  real_T pathSpdLimit;                 /* '<S3>/Unit_Delay' */
  real_T distance;                     /* '<S3>/Unit_Delay' */
  real_T idx;                          /* '<S3>/Unit_Delay' */
  real_T wpidx;                        /* '<S3>/Unit_Delay' */
  real_T DeSteeringPID_Y2;             /* '<S3>/Unit_Delay' */
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
  real_T IgnitionKeySwitch_voltage_i;  /* '<S3>/Unit_Delay' */
  real_T BrakeSwitch_k;                /* '<S3>/Unit_Delay' */
  real_T Park_brake_switch;            /* '<S3>/Unit_Delay' */
  real_T CruiseCtrlEnableSwitch;       /* '<S3>/Unit_Delay' */
  real_T FrontAxleSpeed;               /* '<S3>/Unit_Delay' */
  real_T FrontAxleLeftWheelSpeed;      /* '<S3>/Unit_Delay' */
  real_T FrontAxleRightWheelSpeed;     /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle;            /* '<S3>/Unit_Delay' */
  real_T EBSBrakeSwitch;               /* '<S3>/Unit_Delay' */
  real_T SPN524_TransSelectedGear_j;   /* '<S3>/Unit_Delay' */
  real_T SPN523_TransCurrentGear_j;    /* '<S3>/Unit_Delay' */
  real_T SPN526_TransActualGearRatio_j;/* '<S3>/Unit_Delay' */
  real_T ActualEngPercentTorque;       /* '<S3>/Unit_Delay' */
  real_T ActlEngPrcntTrqueHighResolution;/* '<S3>/Unit_Delay' */
  real_T EngSpeed;                     /* '<S3>/Unit_Delay' */
  real_T DriversDemandEngPercentTorque;/* '<S3>/Unit_Delay' */
  real_T SPN514_NominalFrictionPercent_p;/* '<S3>/Unit_Delay' */
  real_T SPN2978_EstEngParasiticLosses_i;/* '<S3>/Unit_Delay' */
  real_T DataTypeConversion2_i;        /* '<S516>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S516>/Product' */
  real_T DataTypeConversion_h;         /* '<S408>/Data Type Conversion' */
  real_T DataTypeConversion_d;         /* '<S523>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S523>/Add' */
  real_T DataTypeConversion1_e;        /* '<S408>/Data Type Conversion1' */
  real_T DataTypeConversion2_p;        /* '<S520>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S520>/Product' */
  real_T DataTypeConversion10;         /* '<S408>/Data Type Conversion10' */
  real_T DataTypeConversion2_a;        /* '<S521>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S521>/Product' */
  real_T DataTypeConversion11;         /* '<S408>/Data Type Conversion11' */
  real_T DataTypeConversion2_l;        /* '<S524>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S524>/Product' */
  real_T DataTypeConversion13;         /* '<S408>/Data Type Conversion13' */
  real_T DataTypeConversion2_b;        /* '<S525>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S525>/Product' */
  real_T DataTypeConversion14;         /* '<S408>/Data Type Conversion14' */
  real_T DataTypeConversion2_g;        /* '<S526>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S526>/Product' */
  real_T DataTypeConversion15;         /* '<S408>/Data Type Conversion15' */
  real_T DataTypeConversion2_j;        /* '<S527>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S527>/Product' */
  real_T DataTypeConversion16;         /* '<S408>/Data Type Conversion16' */
  real_T DataTypeConversion_e;         /* '<S528>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S528>/Add' */
  real_T DataTypeConversion17;         /* '<S408>/Data Type Conversion17' */
  real_T DataTypeConversion_j;         /* '<S529>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S529>/Add' */
  real_T DataTypeConversion18;         /* '<S408>/Data Type Conversion18' */
  real_T DataTypeConversion2_ib;       /* '<S530>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S530>/Product' */
  real_T DataTypeConversion19;         /* '<S408>/Data Type Conversion19' */
  real_T DataTypeConversion2_az;       /* '<S538>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S538>/Product' */
  real_T DataTypeConversion2_e;        /* '<S408>/Data Type Conversion2' */
  real_T DataTypeConversion2_er;       /* '<S531>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S531>/Product' */
  real_T DataTypeConversion20;         /* '<S408>/Data Type Conversion20' */
  real_T DataTypeConversion_jh;        /* '<S539>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S539>/Add' */
  real_T DataTypeConversion3;          /* '<S408>/Data Type Conversion3' */
  real_T DataTypeConversion2_l2;       /* '<S540>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S540>/Product' */
  real_T DataTypeConversion4;          /* '<S408>/Data Type Conversion4' */
  real_T DataTypeConversion_jy;        /* '<S541>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S541>/Add' */
  real_T DataTypeConversion5;          /* '<S408>/Data Type Conversion5' */
  real_T DataTypeConversion2_ev;       /* '<S542>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S542>/Product' */
  real_T DataTypeConversion6;          /* '<S408>/Data Type Conversion6' */
  real_T DataTypeConversion_b;         /* '<S517>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S517>/Add' */
  real_T DataTypeConversion7;          /* '<S408>/Data Type Conversion7' */
  real_T DataTypeConversion2_kq;       /* '<S518>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S518>/Product' */
  real_T DataTypeConversion8;          /* '<S408>/Data Type Conversion8' */
  real_T DataTypeConversion_g;         /* '<S519>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S519>/Add' */
  real_T DataTypeConversion9;          /* '<S408>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S465>/Data Type Conversion9' */
  real_T RX_time_l;                    /* '<S411>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S465>/Data Type Conversion10' */
  real_T RX_delta_time_i;              /* '<S411>/Multiport_Switch' */
  real_T RX_time_c;                    /* '<S474>/Data Type Conversion9' */
  real_T RX_time_p;                    /* '<S412>/Multiport_Switch' */
  real_T RX_delta_time_p;              /* '<S474>/Data Type Conversion10' */
  real_T RX_delta_time_l;              /* '<S412>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S483>/Data Type Conversion1' */
  real_T RX_delta_time_e;              /* '<S483>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S483>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S483>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S483>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S483>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S483>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S483>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S483>/Data Type Conversion7' */
  real_T RX_time_f;                    /* '<S483>/Data Type Conversion9' */
  real_T RX_delta_time_o;              /* '<S485>/Data Type Conversion10' */
  real_T RX_time_d;                    /* '<S485>/Data Type Conversion9' */
  real_T RX_delta_time_p5;             /* '<S487>/Data Type Conversion10' */
  real_T RX_time_db;                   /* '<S487>/Data Type Conversion9' */
  real_T RX_delta_time_a;              /* '<S489>/Data Type Conversion10' */
  real_T RX_time_k;                    /* '<S489>/Data Type Conversion9' */
  real_T RX_delta_time_n;              /* '<S491>/Data Type Conversion10' */
  real_T RX_time_i;                    /* '<S491>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S493>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S493>/Data Type Conversion9' */
  real_T RX_delta_time_pd;             /* '<S495>/Data Type Conversion10' */
  real_T RX_time_dy;                   /* '<S495>/Data Type Conversion9' */
  real_T RX_delta_time_p5s;            /* '<S497>/Data Type Conversion10' */
  real_T RX_time_n;                    /* '<S497>/Data Type Conversion9' */
  real_T RX_time_m;                    /* '<S499>/Switch' */
  real_T RX_delta_time_j;              /* '<S499>/Switch' */
  real_T RX_delta_time_in;             /* '<S502>/Data Type Conversion10' */
  real_T RX_time_ns;                   /* '<S502>/Data Type Conversion9' */
  real_T RX_delta_time_oh;             /* '<S504>/Data Type Conversion10' */
  real_T RX_time_cj;                   /* '<S504>/Data Type Conversion9' */
  real_T RX_delta_time_or;             /* '<S506>/Data Type Conversion10' */
  real_T RX_time_mj;                   /* '<S506>/Data Type Conversion9' */
  real_T RX_delta_time_jx;             /* '<S508>/Data Type Conversion10' */
  real_T RX_time_e;                    /* '<S508>/Data Type Conversion9' */
  real_T RX_delta_time_b;              /* '<S555>/Data Type Conversion10' */
  real_T RX_time_h;                    /* '<S555>/Data Type Conversion9' */
  real_T RX_delta_time_pm;             /* '<S557>/Data Type Conversion10' */
  real_T RX_time_d2;                   /* '<S557>/Data Type Conversion9' */
  real_T RX_delta_time_n2;             /* '<S559>/Data Type Conversion10' */
  real_T RX_time_j;                    /* '<S559>/Data Type Conversion9' */
  real_T RX_delta_time_ox;             /* '<S561>/Data Type Conversion10' */
  real_T RX_time_nx;                   /* '<S561>/Data Type Conversion9' */
  real_T SID_m;                        /* '<S563>/Switch' */
  real_T SetMode;                      /* '<S563>/Switch' */
  real_T OpMode;                       /* '<S563>/Switch' */
  real_T VDOP;                         /* '<S563>/Switch' */
  real_T TDOP;                         /* '<S563>/Switch' */
  real_T RX_time_hs;                   /* '<S563>/Switch' */
  real_T RX_delta_time_lb;             /* '<S563>/Switch' */
  real_T RX_delta_time_n2k;            /* '<S566>/Data Type Conversion10' */
  real_T RX_time_ey;                   /* '<S566>/Data Type Conversion9' */
  real_T RX_time_cjz;                  /* '<S433>/Switch' */
  real_T RX_delta_time_py;             /* '<S433>/Switch' */
  real_T RX_time_l0;                   /* '<S600>/Data Type Conversion9' */
  real_T RX_time_a;                    /* '<S436>/Multiport_Switch' */
  real_T RX_delta_time_f;              /* '<S600>/Data Type Conversion10' */
  real_T RX_delta_time_k;              /* '<S436>/Multiport_Switch' */
  real_T RX_delta_time_pr;             /* '<S611>/Data Type Conversion1' */
  real_T RX_delta_time_bg;             /* '<S611>/Data Type Conversion10' */
  real_T RX_time_j3;                   /* '<S611>/Data Type Conversion3' */
  real_T RX_delta_time_d;              /* '<S611>/Data Type Conversion4' */
  real_T RX_time_kb;                   /* '<S611>/Data Type Conversion6' */
  real_T RX_time_e1;                   /* '<S611>/Data Type Conversion9' */
  real_T RX_time_eh;                   /* '<S615>/Switch' */
  real_T RX_delta_time_h;              /* '<S615>/Switch' */
  real_T XPR1ControlStatus;            /* '<S618>/Data Type Conversion1' */
  real_T RX_delta_time_m;              /* '<S618>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S618>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S618>/Data Type Conversion3' */
  real_T RX_time_ed;                   /* '<S618>/Data Type Conversion9' */
  real_T RX_delta_time_e4;             /* '<S620>/Data Type Conversion10' */
  real_T RX_time_hp;                   /* '<S620>/Data Type Conversion9' */
  real_T RX_delta_time_dq;             /* '<S622>/Data Type Conversion10' */
  real_T RX_time_n0;                   /* '<S622>/Data Type Conversion9' */
  real_T RX_delta_time_ny;             /* '<S624>/Data Type Conversion10' */
  real_T RX_time_h5;                   /* '<S624>/Data Type Conversion9' */
  real_T RX_delta_time_oc;             /* '<S626>/Data Type Conversion10' */
  real_T RX_time_av;                   /* '<S626>/Data Type Conversion9' */
  real_T RX_delta_time_pyq;            /* '<S628>/Data Type Conversion10' */
  real_T RX_time_kr;                   /* '<S628>/Data Type Conversion9' */
  real_T RX_delta_time_lo;             /* '<S630>/Data Type Conversion10' */
  real_T RX_time_kv;                   /* '<S630>/Data Type Conversion9' */
  real_T RX_delta_time_j0;             /* '<S632>/Data Type Conversion10' */
  real_T RX_time_g;                    /* '<S632>/Data Type Conversion9' */
  real_T RX_delta_time_ax;             /* '<S634>/Data Type Conversion10' */
  real_T RX_time_ei;                   /* '<S634>/Data Type Conversion9' */
  real_T PitchAngleExRange_c;          /* '<S636>/Data Type Conversion1' */
  real_T RX_delta_time_nt;             /* '<S636>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S636>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S636>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S636>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S636>/Data Type Conversion5' */
  real_T RX_time_k5;                   /* '<S636>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S405>/Constant2' */
  real_T DataTypeConversion4_g;        /* '<S658>/Data Type Conversion4' */
  real_T DataTypeConversion1_o;        /* '<S659>/Data Type Conversion1' */
  real_T DataTypeConversion1_f;        /* '<S660>/Data Type Conversion1' */
  real_T RX_time_h3;                   /* '<S573>/Data Type Conversion9' */
  real_T RX_time_ac;                   /* '<S574>/Data Type Conversion9' */
  real_T RX_time_o;                    /* '<S434>/Multiport_Switch' */
  real_T RX_delta_time_iy;             /* '<S573>/Data Type Conversion10' */
  real_T RX_delta_time_iz;             /* '<S574>/Data Type Conversion10' */
  real_T RX_delta_time_dd;             /* '<S434>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S670>/Data Type Conversion5' */
  real_T DataTypeConversion5_j;        /* '<S410>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S671>/Data Type Conversion9' */
  real_T DataTypeConversion6_m;        /* '<S410>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S672>/Data Type Conversion11' */
  real_T DataTypeConversion7_p;        /* '<S410>/Data Type Conversion7' */
  real_T RX_time_fg;                   /* '<S587>/Data Type Conversion9' */
  real_T RX_time_oa;                   /* '<S435>/Multiport_Switch' */
  real_T RX_delta_time_c;              /* '<S587>/Data Type Conversion10' */
  real_T RX_delta_time_ax1;            /* '<S435>/Multiport_Switch' */
  real_T ShiftControlFreq;             /* '<S406>/ShifterControlFreq' */
  real_T SFunction1_d;                 /* '<S720>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S406>/ShifterControlDC2' */
  real_T SFunction1_a;                 /* '<S721>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S406>/ShifterControlDC1' */
  real_T SFunction1_o1_k;              /* '<S1039>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S1039>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1039>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1039>/S-Function1' */
  real_T SFunction1_o1_a;              /* '<S1035>/S-Function1' */
  real_T SFunction1_o2_mv;             /* '<S1035>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S1035>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S1035>/S-Function1' */
  real_T SFunction1_o1_a5;             /* '<S1034>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S1034>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S1034>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S1034>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S829>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S829>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1024>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1024>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1024>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_e;     /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_b;     /* '<S1024>/Bus Selector' */
  real_T BrakeSwitch_d;                /* '<S1024>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1024>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1024>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1024>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1024>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1024>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1024>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1024>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1025>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1025>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1025>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1025>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1025>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1025>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1025>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1025>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1025>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1025>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1025>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1025>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1025>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1025>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1025>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1025>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1025>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1025>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1025>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1025>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1025>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1025>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1025>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1025>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1025>/Bus Selector' */
  real_T SFunction1_o1_f;              /* '<S1027>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S1027>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S1027>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S1027>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S1026>/S-Function1' */
  real_T SFunction1_o2_l2;             /* '<S1026>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S1026>/S-Function1' */
  real_T SFunction1_o4_dr;             /* '<S1026>/S-Function1' */
  real_T DataTypeConversion_m;         /* '<S1013>/Data Type Conversion' */
  real_T DataTypeConversion1_d;        /* '<S1013>/Data Type Conversion1' */
  real_T DataTypeConversion2_i4;       /* '<S1013>/Data Type Conversion2' */
  real_T SFunction1_o1_j;              /* '<S1015>/S-Function1' */
  real_T SFunction1_o2_ag;             /* '<S1015>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S1015>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S1015>/S-Function1' */
  real_T BrakingPID_Y_c;               /* '<S985>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S985>/Switch1' */
  real_T DataTypeConversion1_n;        /* '<S988>/Data Type Conversion1' */
  real_T DataTypeConversion2_bx;       /* '<S988>/Data Type Conversion2' */
  real_T DataTypeConversion3_e;        /* '<S988>/Data Type Conversion3' */
  real_T DataTypeConversion4_c;        /* '<S988>/Data Type Conversion4' */
  real_T DataTypeConversion5_g;        /* '<S988>/Data Type Conversion5' */
  real_T DataTypeConversion6_b;        /* '<S988>/Data Type Conversion6' */
  real_T DataTypeConversion7_k;        /* '<S988>/Data Type Conversion7' */
  real_T Saturation_e;                 /* '<S984>/Saturation' */
  real_T BrakingPID_Y_cn;              /* '<S984>/Bus Selector' */
  real_T Gain_l;                       /* '<S984>/Gain' */
  real_T Gain_e;                       /* '<S1001>/Gain' */
  real_T Gain1_m;                      /* '<S1001>/Gain1' */
  real_T DataTypeConversion1_m[8];     /* '<S982>/Data Type Conversion1' */
  real_T FrontAxleSpeed_e;             /* '<S998>/Bus Selector4' */
  real_T DataTypeConversion_g1;        /* '<S998>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_m; /* '<S998>/Bus Selector4' */
  real_T DataTypeConversion1_b;        /* '<S998>/Data Type Conversion1' */
  real_T SPN1808_YawRate_b;            /* '<S998>/Bus Selector4' */
  real_T DataTypeConversion2_io;       /* '<S998>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_g;/* '<S998>/Bus Selector4' */
  real_T DataTypeConversion3_a;        /* '<S998>/Data Type Conversion3' */
  real_T DataType;                     /* '<S997>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S983>/Shift_Arithmetic 4' */
  real_T DataType_e;                   /* '<S993>/DataType' */
  real_T DataType_f;                   /* '<S994>/DataType' */
  real_T DataType_g;                   /* '<S995>/DataType' */
  real_T DataType_fw;                  /* '<S996>/DataType' */
  real_T Shift_Arithmetic;             /* '<S983>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S983>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S983>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S983>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S985>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_f;     /* '<S985>/Divide1' */
  real_T SFunction1_o1_kp;             /* '<S999>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S999>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S999>/S-Function1' */
  real_T SFunction1_o4_c5;             /* '<S999>/S-Function1' */
  real_T SFunction1_o1_p4;             /* '<S991>/S-Function1' */
  real_T SFunction1_o2_js;             /* '<S991>/S-Function1' */
  real_T SFunction1_o3_ph;             /* '<S991>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S991>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S989>/S-Function1' */
  real_T SFunction1_o2_js3;            /* '<S989>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S989>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S989>/S-Function1' */
  real_T DataTypeConversion4_k;        /* '<S921>/Data Type Conversion4' */
  real_T DataType_h;                   /* '<S918>/DataType' */
  real_T Shift_Arithmetic2_i;          /* '<S910>/Shift_Arithmetic 2' */
  real_T DataType_d;                   /* '<S916>/DataType' */
  real_T DataType_m;                   /* '<S917>/DataType' */
  real_T DataType_k;                   /* '<S919>/DataType' */
  real_T DataType_c;                   /* '<S920>/DataType' */
  real_T Shift_Arithmetic_j;           /* '<S910>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_d;          /* '<S910>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_e;          /* '<S910>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_p;          /* '<S910>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_i;        /* '<S929>/Data Type Conversion1' */
  real_T DataTypeConversion2_kg;       /* '<S929>/Data Type Conversion2' */
  real_T DataTypeConversion3_l;        /* '<S929>/Data Type Conversion3' */
  real_T DataTypeConversion4_d;        /* '<S929>/Data Type Conversion4' */
  real_T DataTypeConversion5_o;        /* '<S929>/Data Type Conversion5' */
  real_T DataTypeConversion6_m2;       /* '<S929>/Data Type Conversion6' */
  real_T DataTypeConversion7_o;        /* '<S929>/Data Type Conversion7' */
  real_T DataTypeConversion8_b;        /* '<S929>/Data Type Conversion8' */
  real_T DataType_d2;                  /* '<S926>/DataType' */
  real_T Shift_Arithmetic2_c;          /* '<S911>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_bg;       /* '<S930>/Data Type Conversion1' */
  real_T DataTypeConversion2_jr;       /* '<S930>/Data Type Conversion2' */
  real_T DataTypeConversion3_n;        /* '<S930>/Data Type Conversion3' */
  real_T DataTypeConversion4_b;        /* '<S930>/Data Type Conversion4' */
  real_T DataTypeConversion5_k;        /* '<S930>/Data Type Conversion5' */
  real_T DataTypeConversion6_m1;       /* '<S930>/Data Type Conversion6' */
  real_T DataTypeConversion7_of;       /* '<S930>/Data Type Conversion7' */
  real_T DataTypeConversion8_o;        /* '<S930>/Data Type Conversion8' */
  real_T DataType_ed;                  /* '<S927>/DataType' */
  real_T Shift_Arithmetic3_k;          /* '<S911>/Shift_Arithmetic 3' */
  real_T DataType_eb;                  /* '<S924>/DataType' */
  real_T DataType_fx;                  /* '<S925>/DataType' */
  real_T DataType_gt;                  /* '<S928>/DataType' */
  real_T Shift_Arithmetic_b;           /* '<S911>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_m;          /* '<S911>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_b;          /* '<S911>/Shift_Arithmetic 4' */
  real_T Switch;                       /* '<S964>/Switch' */
  real_T Switch2;                      /* '<S974>/Switch2' */
  real_T DataType_g4;                  /* '<S974>/DataType' */
  real_T DataTypeConversion1_j[8];     /* '<S912>/Data Type Conversion1' */
  real_T DataType_hx;                  /* '<S941>/DataType' */
  real_T Shift_Arithmetic3_ek;         /* '<S913>/Shift_Arithmetic 3' */
  real_T DataType_c0;                  /* '<S938>/DataType' */
  real_T DataType_f0;                  /* '<S939>/DataType' */
  real_T DataType_j;                   /* '<S940>/DataType' */
  real_T DataType_b;                   /* '<S942>/DataType' */
  real_T Shift_Arithmetic_d;           /* '<S913>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_j;          /* '<S913>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_g;          /* '<S913>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_j;          /* '<S913>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S975>/Product' */
  real_T Switch1;                      /* '<S974>/Switch1' */
  real_T Multiport_Switch;             /* '<S964>/Multiport_Switch' */
  real_T SFunction1_o1_n;              /* '<S944>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S944>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S944>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S944>/S-Function1' */
  real_T SFunction1_o1_nx;             /* '<S936>/S-Function1' */
  real_T SFunction1_o2_a4;             /* '<S936>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S936>/S-Function1' */
  real_T SFunction1_o4_md;             /* '<S936>/S-Function1' */
  real_T SFunction1_o1_nv;             /* '<S935>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S935>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S935>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S935>/S-Function1' */
  real_T SFunction1_o1_ee;             /* '<S932>/S-Function1' */
  real_T SFunction1_o2_f1;             /* '<S932>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S932>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S932>/S-Function1' */
  real_T SFunction1_o1_pa;             /* '<S931>/S-Function1' */
  real_T SFunction1_o2_f0;             /* '<S931>/S-Function1' */
  real_T SFunction1_o3_b2;             /* '<S931>/S-Function1' */
  real_T SFunction1_o4_cz;             /* '<S931>/S-Function1' */
  real_T SFunction1_o1_km;             /* '<S922>/S-Function1' */
  real_T SFunction1_o2_oh;             /* '<S922>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S922>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S922>/S-Function1' */
  real_T DataTypeConversion1_k[8];     /* '<S851>/Data Type Conversion1' */
  real_T DataType_fc;                  /* '<S871>/DataType' */
  real_T Shift_Arithmetic2_h;          /* '<S851>/Shift_Arithmetic 2' */
  real_T DataType_a;                   /* '<S867>/DataType' */
  real_T DataType_f4;                  /* '<S872>/DataType' */
  real_T Shift_Arithmetic3_b;          /* '<S851>/Shift_Arithmetic 3' */
  real_T DataType_du;                  /* '<S873>/DataType' */
  real_T Shift_Arithmetic4_f;          /* '<S851>/Shift_Arithmetic 4' */
  real_T DataType_cr;                  /* '<S870>/DataType' */
  real_T Shift_Arithmetic_p;           /* '<S851>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_a;          /* '<S851>/Shift_Arithmetic 1' */
  real_T Latitude__l;                  /* '<S908>/Bus Selector' */
  real_T DataTypeConversion_c;         /* '<S908>/Data Type Conversion' */
  real_T Longitude__p;                 /* '<S908>/Bus Selector' */
  real_T DataTypeConversion1_jt;       /* '<S908>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_e;         /* '<S858>/Bus Selector' */
  real_T ParkingBrakeSwitch_j;         /* '<S858>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_i;      /* '<S858>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_b;  /* '<S858>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_ew;    /* '<S858>/Bus Selector' */
  real_T CruiseCtrlActive_i;           /* '<S858>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_b1;    /* '<S858>/Bus Selector' */
  real_T BrakeSwitch_dm;               /* '<S858>/Bus Selector' */
  real_T ClutchSwitch_f;               /* '<S858>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_p;        /* '<S858>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_o;      /* '<S858>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_f;     /* '<S858>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_p; /* '<S858>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_l;         /* '<S858>/Bus Selector' */
  real_T PTOGovernorState_o;           /* '<S858>/Bus Selector' */
  real_T CruiseCtrlStates_h;           /* '<S858>/Bus Selector' */
  real_T EngIdleIncrementSwitch_l;     /* '<S858>/Bus Selector' */
  real_T EngIdleDecrementSwitch_j;     /* '<S858>/Bus Selector' */
  real_T EngTestModeSwitch_b;          /* '<S858>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_c;  /* '<S858>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_eq;        /* '<S859>/Bus Selector' */
  real_T ParkingBrakeSwitch_j4;        /* '<S859>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_io;     /* '<S859>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_bj; /* '<S859>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_ewq;   /* '<S859>/Bus Selector' */
  real_T CruiseCtrlActive_iu;          /* '<S859>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_b1a;   /* '<S859>/Bus Selector' */
  real_T BrakeSwitch_dm1;              /* '<S859>/Bus Selector' */
  real_T ClutchSwitch_fu;              /* '<S859>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_pp;       /* '<S859>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_og;     /* '<S859>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_fr;    /* '<S859>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_pu;/* '<S859>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_lc;        /* '<S859>/Bus Selector' */
  real_T PTOGovernorState_oq;          /* '<S859>/Bus Selector' */
  real_T CruiseCtrlStates_hy;          /* '<S859>/Bus Selector' */
  real_T EngIdleIncrementSwitch_lv;    /* '<S859>/Bus Selector' */
  real_T EngIdleDecrementSwitch_jd;    /* '<S859>/Bus Selector' */
  real_T EngTestModeSwitch_b5;         /* '<S859>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_cc; /* '<S859>/Bus Selector' */
  real_T DataTypeConversion1_bk[8];    /* '<S850>/Data Type Conversion1' */
  real_T SID_f;                        /* '<S882>/Bus Selector' */
  real_T DataTypeConversion_jq;        /* '<S882>/Data Type Conversion' */
  real_T COGReference_h;               /* '<S882>/Bus Selector' */
  real_T DataTypeConversion1_dr;       /* '<S882>/Data Type Conversion1' */
  real_T CourseOverGround_g;           /* '<S882>/Bus Selector' */
  real_T DataTypeConversion2_gx;       /* '<S882>/Data Type Conversion2' */
  real_T SpeedOverGround_o;            /* '<S882>/Bus Selector' */
  real_T DataTypeConversion3_i;        /* '<S882>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S884>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S884>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S884>/Bus Selector' */
  real_T EBSBrakeSwitch_n;             /* '<S884>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S884>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S884>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S884>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S884>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S884>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S884>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S884>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S884>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S884>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S884>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S884>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S884>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S884>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S884>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S884>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S884>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S884>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S884>/Bus Selector' */
  real_T SFunction1_o1_c;              /* '<S909>/S-Function1' */
  real_T SFunction1_o2_dm;             /* '<S909>/S-Function1' */
  real_T SFunction1_o3_ao;             /* '<S909>/S-Function1' */
  real_T SFunction1_o4_n0;             /* '<S909>/S-Function1' */
  real_T Unit_Delay;                   /* '<S898>/Unit_Delay' */
  real_T FixPtSum1_dx;                 /* '<S906>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S907>/FixPt Switch' */
  real_T SFunction1_o1_m;              /* '<S885>/S-Function1' */
  real_T SFunction1_o2_ms;             /* '<S885>/S-Function1' */
  real_T SFunction1_o3_br;             /* '<S885>/S-Function1' */
  real_T SFunction1_o4_al;             /* '<S885>/S-Function1' */
  real_T SFunction1_o1_n0;             /* '<S883>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S883>/S-Function1' */
  real_T SFunction1_o3_na;             /* '<S883>/S-Function1' */
  real_T SFunction1_o4_d0;             /* '<S883>/S-Function1' */
  real_T SFunction1_o1_l;              /* '<S881>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S881>/S-Function1' */
  real_T SFunction1_o3_p4;             /* '<S881>/S-Function1' */
  real_T SFunction1_o4_mp;             /* '<S881>/S-Function1' */
  real_T SFunction1_o1_fz;             /* '<S880>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S880>/S-Function1' */
  real_T SFunction1_o3_ny;             /* '<S880>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S880>/S-Function1' */
  real_T SFunction1_o1_fk;             /* '<S865>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S865>/S-Function1' */
  real_T SFunction1_o3_ps;             /* '<S865>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S865>/S-Function1' */
  real_T SFunction1_o1_a4;             /* '<S864>/S-Function1' */
  real_T SFunction1_o2_mo;             /* '<S864>/S-Function1' */
  real_T SFunction1_o3_pd;             /* '<S864>/S-Function1' */
  real_T SFunction1_o4_mm;             /* '<S864>/S-Function1' */
  real_T SFunction1_o1_fc;             /* '<S861>/S-Function1' */
  real_T SFunction1_o2_nj;             /* '<S861>/S-Function1' */
  real_T SFunction1_o3_h1;             /* '<S861>/S-Function1' */
  real_T SFunction1_o4_gd;             /* '<S861>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S860>/S-Function1' */
  real_T SFunction1_o2_ls;             /* '<S860>/S-Function1' */
  real_T SFunction1_o3_ni;             /* '<S860>/S-Function1' */
  real_T SFunction1_o4_nk;             /* '<S860>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S839>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S839>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S839>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S839>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S839>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S839>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S839>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S839>/Bus Selector' */
  real_T DataType_a1;                  /* '<S836>/DataType' */
  real_T Shift_Arithmetic2_o;          /* '<S831>/Shift_Arithmetic 2' */
  real_T DataType_mm;                  /* '<S834>/DataType' */
  real_T DataType_ks;                  /* '<S835>/DataType' */
  real_T DataType_k0;                  /* '<S837>/DataType' */
  real_T DataType_e0;                  /* '<S838>/DataType' */
  real_T Shift_Arithmetic_g;           /* '<S831>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_n;          /* '<S831>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_o;          /* '<S831>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_jk;         /* '<S831>/Shift_Arithmetic 4' */
  real_T BarometricPress_m;            /* '<S847>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S847>/Bus Selector' */
  real_T AmbientAirTemp_j;             /* '<S847>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S847>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S847>/Bus Selector' */
  real_T DataType_jk;                  /* '<S844>/DataType' */
  real_T Shift_Arithmetic2_gi;         /* '<S832>/Shift_Arithmetic 2' */
  real_T DataType_hxz;                 /* '<S842>/DataType' */
  real_T DataType_em;                  /* '<S843>/DataType' */
  real_T DataType_jl;                  /* '<S845>/DataType' */
  real_T DataType_gu;                  /* '<S846>/DataType' */
  real_T Shift_Arithmetic_l;           /* '<S832>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_f;          /* '<S832>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_p;          /* '<S832>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_b0;         /* '<S832>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_a4v;            /* '<S848>/S-Function1' */
  real_T SFunction1_o2_iu;             /* '<S848>/S-Function1' */
  real_T SFunction1_o3_b0;             /* '<S848>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S848>/S-Function1' */
  real_T SFunction1_o1_hb;             /* '<S840>/S-Function1' */
  real_T SFunction1_o2_lh;             /* '<S840>/S-Function1' */
  real_T SFunction1_o3_of;             /* '<S840>/S-Function1' */
  real_T SFunction1_o4_hd;             /* '<S840>/S-Function1' */
  real_T Unit_Delay_p;                 /* '<S817>/Unit_Delay' */
  real_T Add;                          /* '<S817>/Add' */
  real_T Xold_g;                       /* '<S812>/FixPt Unit Delay1' */
  real_T Init_g;                       /* '<S812>/Init' */
  real_T Abs_m;                        /* '<S809>/Abs' */
  real_T Product1_i;                   /* '<S809>/Product1' */
  real_T Add1_e;                       /* '<S809>/Add1' */
  real_T MinMax2;                      /* '<S809>/MinMax2' */
  real_T Abs1;                         /* '<S809>/Abs1' */
  real_T Product2_m;                   /* '<S809>/Product2' */
  real_T Subtract1_i;                  /* '<S809>/Subtract1' */
  real_T MinMax1_l;                    /* '<S809>/MinMax1' */
  real_T Subtract_o;                   /* '<S737>/Subtract' */
  real_T Abs_c;                        /* '<S737>/Abs' */
  real_T timeStamp;                    /* '<S641>/timeStamp' */
  real_T Unit_Delay_d;                 /* '<S641>/Unit_Delay' */
  real_T SFunction1_o1_fp;             /* '<S637>/S-Function1' */
  real_T SFunction1_o2_p3;             /* '<S637>/S-Function1' */
  real_T SFunction1_o3_jg;             /* '<S637>/S-Function1' */
  real_T SFunction1_o4_md5;            /* '<S637>/S-Function1' */
  real_T SFunction1_o5;                /* '<S637>/S-Function1' */
  real_T SFunction1_o6;                /* '<S637>/S-Function1' */
  real_T SFunction1_o7;                /* '<S637>/S-Function1' */
  real_T SFunction1_o8;                /* '<S637>/S-Function1' */
  real_T SFunction1_o2_is;             /* '<S635>/S-Function1' */
  real_T SFunction1_o3_aa;             /* '<S635>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S635>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S635>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S635>/S-Function1' */
  real_T SFunction1_o9;                /* '<S635>/S-Function1' */
  real_T SFunction1_o1_lj;             /* '<S633>/S-Function1' */
  real_T SFunction1_o2_m1;             /* '<S633>/S-Function1' */
  real_T SFunction1_o3_jt;             /* '<S633>/S-Function1' */
  real_T SFunction1_o4_e4;             /* '<S633>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S633>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S633>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S633>/S-Function1' */
  real_T SFunction1_o8_e0;             /* '<S633>/S-Function1' */
  real_T SFunction1_o9_j;              /* '<S633>/S-Function1' */
  real_T SFunction1_o10;               /* '<S633>/S-Function1' */
  real_T SFunction1_o1_jv;             /* '<S631>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S631>/S-Function1' */
  real_T SFunction1_o3_il;             /* '<S631>/S-Function1' */
  real_T SFunction1_o4_mj;             /* '<S631>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S631>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S631>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S631>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S631>/S-Function1' */
  real_T SFunction1_o9_p;              /* '<S631>/S-Function1' */
  real_T SFunction1_o10_p;             /* '<S631>/S-Function1' */
  real_T SFunction1_o11;               /* '<S631>/S-Function1' */
  real_T SFunction1_o12;               /* '<S631>/S-Function1' */
  real_T SFunction1_o13;               /* '<S631>/S-Function1' */
  real_T SFunction1_o14;               /* '<S631>/S-Function1' */
  real_T SFunction1_o15;               /* '<S631>/S-Function1' */
  real_T SFunction1_o16;               /* '<S631>/S-Function1' */
  real_T SFunction1_o17;               /* '<S631>/S-Function1' */
  real_T SFunction1_o18;               /* '<S631>/S-Function1' */
  real_T SFunction1_o19;               /* '<S631>/S-Function1' */
  real_T SFunction1_o20;               /* '<S631>/S-Function1' */
  real_T SFunction1_o21;               /* '<S631>/S-Function1' */
  real_T SFunction1_o22;               /* '<S631>/S-Function1' */
  real_T SFunction1_o23;               /* '<S631>/S-Function1' */
  real_T SFunction1_o24;               /* '<S631>/S-Function1' */
  real_T SFunction1_o25;               /* '<S631>/S-Function1' */
  real_T SFunction1_o26;               /* '<S631>/S-Function1' */
  real_T SFunction1_o27;               /* '<S631>/S-Function1' */
  real_T SFunction1_o28;               /* '<S631>/S-Function1' */
  real_T SFunction1_o1_ll;             /* '<S629>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S629>/S-Function1' */
  real_T SFunction1_o3_at;             /* '<S629>/S-Function1' */
  real_T SFunction1_o4_ci;             /* '<S629>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S629>/S-Function1' */
  real_T SFunction1_o6_bb;             /* '<S629>/S-Function1' */
  real_T SFunction1_o7_d1;             /* '<S629>/S-Function1' */
  real_T SFunction1_o1_jy;             /* '<S627>/S-Function1' */
  real_T SFunction1_o2_dh;             /* '<S627>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S627>/S-Function1' */
  real_T SFunction1_o4_my;             /* '<S627>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S627>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S627>/S-Function1' */
  real_T SFunction1_o7_da;             /* '<S627>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S627>/S-Function1' */
  real_T SFunction1_o9_ji;             /* '<S627>/S-Function1' */
  real_T SFunction1_o1_nvq;            /* '<S625>/S-Function1' */
  real_T SFunction1_o2_md;             /* '<S625>/S-Function1' */
  real_T SFunction1_o3_jm;             /* '<S625>/S-Function1' */
  real_T SFunction1_o4_l3;             /* '<S625>/S-Function1' */
  real_T SFunction1_o5_n0;             /* '<S625>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S625>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S625>/S-Function1' */
  real_T SFunction1_o8_m;              /* '<S625>/S-Function1' */
  real_T SFunction1_o9_h;              /* '<S625>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S623>/S-Function1' */
  real_T SFunction1_o2_lj;             /* '<S623>/S-Function1' */
  real_T SFunction1_o3_nd;             /* '<S623>/S-Function1' */
  real_T SFunction1_o4_da;             /* '<S623>/S-Function1' */
  real_T SFunction1_o5_pn;             /* '<S623>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S623>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S623>/S-Function1' */
  real_T SFunction1_o8_h;              /* '<S623>/S-Function1' */
  real_T SFunction1_o9_i;              /* '<S623>/S-Function1' */
  real_T SFunction1_o1_gu;             /* '<S621>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S621>/S-Function1' */
  real_T SFunction1_o3_ln;             /* '<S621>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S621>/S-Function1' */
  real_T SFunction1_o5_nw;             /* '<S621>/S-Function1' */
  real_T SFunction1_o6_bl;             /* '<S621>/S-Function1' */
  real_T SFunction1_o7_dk;             /* '<S621>/S-Function1' */
  real_T SFunction1_o8_mq;             /* '<S621>/S-Function1' */
  real_T SFunction1_o9_n;              /* '<S621>/S-Function1' */
  real_T SFunction1_o10_i;             /* '<S621>/S-Function1' */
  real_T SFunction1_o1_bp;             /* '<S619>/S-Function1' */
  real_T SFunction1_o2_hq;             /* '<S619>/S-Function1' */
  real_T SFunction1_o3_kw;             /* '<S619>/S-Function1' */
  real_T SFunction1_o4_nf;             /* '<S619>/S-Function1' */
  real_T SFunction1_o5_pm;             /* '<S619>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S619>/S-Function1' */
  real_T SFunction1_o7_gy;             /* '<S619>/S-Function1' */
  real_T SFunction1_o8_b;              /* '<S619>/S-Function1' */
  real_T SFunction1_o9_b;              /* '<S619>/S-Function1' */
  real_T SFunction1_o10_n;             /* '<S619>/S-Function1' */
  real_T SFunction1_o11_k;             /* '<S619>/S-Function1' */
  real_T SFunction1_o12_e;             /* '<S619>/S-Function1' */
  real_T SFunction1_o13_c;             /* '<S619>/S-Function1' */
  real_T RX_time_d3;                   /* '<S615>/Data Type Conversion9' */
  real_T RX_time_px;                   /* '<S615>/Data Type Conversion2' */
  real_T RX_delta_time_o0;             /* '<S615>/Data Type Conversion10' */
  real_T RX_delta_time_ed;             /* '<S615>/Data Type Conversion1' */
  real_T SFunction1_o1_ag;             /* '<S617>/S-Function1' */
  real_T SFunction1_o2_am;             /* '<S617>/S-Function1' */
  real_T SFunction1_o3_ky;             /* '<S617>/S-Function1' */
  real_T SFunction1_o4_bs;             /* '<S617>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S617>/S-Function1' */
  real_T SFunction1_o1_er;             /* '<S616>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S616>/S-Function1' */
  real_T SFunction1_o3_cl;             /* '<S616>/S-Function1' */
  real_T SFunction1_o4_lk;             /* '<S616>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S616>/S-Function1' */
  real_T SFunction1_o1_gh;             /* '<S614>/S-Function1' */
  real_T SFunction1_o2_di;             /* '<S614>/S-Function1' */
  real_T SFunction1_o3_aq;             /* '<S614>/S-Function1' */
  real_T SFunction1_o4_d05;            /* '<S614>/S-Function1' */
  real_T SFunction1_o5_nr;             /* '<S614>/S-Function1' */
  real_T SFunction1_o6_kw;             /* '<S614>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S614>/S-Function1' */
  real_T SFunction1_o1_hf;             /* '<S613>/S-Function1' */
  real_T SFunction1_o2_fn;             /* '<S613>/S-Function1' */
  real_T SFunction1_o3_gs;             /* '<S613>/S-Function1' */
  real_T SFunction1_o4_dm;             /* '<S613>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S613>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S613>/S-Function1' */
  real_T SFunction1_o1_ia;             /* '<S612>/S-Function1' */
  real_T SFunction1_o2_njc;            /* '<S612>/S-Function1' */
  real_T SFunction1_o3_dc;             /* '<S612>/S-Function1' */
  real_T SFunction1_o4_pi;             /* '<S612>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S612>/S-Function1' */
  real_T SFunction1_o6_kr;             /* '<S612>/S-Function1' */
  real_T SFunction1_o1_gw;             /* '<S604>/S-Function1' */
  real_T SFunction1_o2_gt;             /* '<S604>/S-Function1' */
  real_T SFunction1_o3_k1;             /* '<S604>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S604>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S604>/S-Function1' */
  real_T SFunction1_o1_eb;             /* '<S603>/S-Function1' */
  real_T SFunction1_o2_in;             /* '<S603>/S-Function1' */
  real_T SFunction1_o3_g4;             /* '<S603>/S-Function1' */
  real_T SFunction1_o4_gl;             /* '<S603>/S-Function1' */
  real_T SFunction1_o5_fb;             /* '<S603>/S-Function1' */
  real_T SFunction1_o1_ax;             /* '<S602>/S-Function1' */
  real_T SFunction1_o2_c2;             /* '<S602>/S-Function1' */
  real_T SFunction1_o3_ai;             /* '<S602>/S-Function1' */
  real_T SFunction1_o4_be;             /* '<S602>/S-Function1' */
  real_T SFunction1_o5_oh;             /* '<S602>/S-Function1' */
  real_T RX_time_of;                   /* '<S598>/Data Type Conversion9' */
  real_T RX_time_dd;                   /* '<S599>/Data Type Conversion9' */
  real_T RX_delta_time_k0;             /* '<S598>/Data Type Conversion10' */
  real_T RX_delta_time_ey;             /* '<S599>/Data Type Conversion10' */
  real_T SFunction1_o1_d;              /* '<S591>/S-Function1' */
  real_T SFunction1_o2_es;             /* '<S591>/S-Function1' */
  real_T SFunction1_o3_a5;             /* '<S591>/S-Function1' */
  real_T SFunction1_o4_l5;             /* '<S591>/S-Function1' */
  real_T SFunction1_o5_g0;             /* '<S591>/S-Function1' */
  real_T SFunction1_o6_nx;             /* '<S591>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S591>/S-Function1' */
  real_T SFunction1_o8_pr;             /* '<S591>/S-Function1' */
  real_T SFunction1_o9_g;              /* '<S591>/S-Function1' */
  real_T SFunction1_o10_e;             /* '<S591>/S-Function1' */
  real_T SFunction1_o11_l;             /* '<S591>/S-Function1' */
  real_T SFunction1_o1_do;             /* '<S590>/S-Function1' */
  real_T SFunction1_o2_mos;            /* '<S590>/S-Function1' */
  real_T SFunction1_o3_ar;             /* '<S590>/S-Function1' */
  real_T SFunction1_o4_by;             /* '<S590>/S-Function1' */
  real_T SFunction1_o5_aq;             /* '<S590>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S590>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S590>/S-Function1' */
  real_T SFunction1_o8_n;              /* '<S590>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S590>/S-Function1' */
  real_T SFunction1_o10_m;             /* '<S590>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S590>/S-Function1' */
  real_T SFunction1_o1_b3;             /* '<S589>/S-Function1' */
  real_T SFunction1_o2_jk;             /* '<S589>/S-Function1' */
  real_T SFunction1_o3_kz;             /* '<S589>/S-Function1' */
  real_T SFunction1_o4_pe;             /* '<S589>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S589>/S-Function1' */
  real_T SFunction1_o6_nv;             /* '<S589>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S589>/S-Function1' */
  real_T SFunction1_o8_c;              /* '<S589>/S-Function1' */
  real_T SFunction1_o9_cs;             /* '<S589>/S-Function1' */
  real_T SFunction1_o10_k;             /* '<S589>/S-Function1' */
  real_T SFunction1_o11_i;             /* '<S589>/S-Function1' */
  real_T RX_time_nc;                   /* '<S585>/Data Type Conversion9' */
  real_T RX_time_kbw;                  /* '<S586>/Data Type Conversion9' */
  real_T RX_delta_time_dr;             /* '<S585>/Data Type Conversion10' */
  real_T RX_delta_time_dj;             /* '<S586>/Data Type Conversion10' */
  real_T SFunction1_o1_n0b;            /* '<S578>/S-Function1' */
  real_T SFunction1_o2_fl;             /* '<S578>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S578>/S-Function1' */
  real_T SFunction1_o4_js;             /* '<S578>/S-Function1' */
  real_T SFunction1_o5_om;             /* '<S578>/S-Function1' */
  real_T SFunction1_o6_nu;             /* '<S578>/S-Function1' */
  real_T SFunction1_o7_op;             /* '<S578>/S-Function1' */
  real_T SFunction1_o8_k;              /* '<S578>/S-Function1' */
  real_T SFunction1_o9_nz;             /* '<S578>/S-Function1' */
  real_T SFunction1_o10_mh;            /* '<S578>/S-Function1' */
  real_T SFunction1_o11_o;             /* '<S578>/S-Function1' */
  real_T SFunction1_o1_al;             /* '<S577>/S-Function1' */
  real_T SFunction1_o2_er;             /* '<S577>/S-Function1' */
  real_T SFunction1_o3_lk;             /* '<S577>/S-Function1' */
  real_T SFunction1_o4_k0;             /* '<S577>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S577>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S577>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S577>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S577>/S-Function1' */
  real_T SFunction1_o9_c5;             /* '<S577>/S-Function1' */
  real_T SFunction1_o10_ps;            /* '<S577>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S577>/S-Function1' */
  real_T SFunction1_o1_et;             /* '<S576>/S-Function1' */
  real_T SFunction1_o2_ps;             /* '<S576>/S-Function1' */
  real_T SFunction1_o3_lc;             /* '<S576>/S-Function1' */
  real_T SFunction1_o4_gw;             /* '<S576>/S-Function1' */
  real_T SFunction1_o5_ak;             /* '<S576>/S-Function1' */
  real_T SFunction1_o6_b4;             /* '<S576>/S-Function1' */
  real_T SFunction1_o7_ja;             /* '<S576>/S-Function1' */
  real_T SFunction1_o8_i;              /* '<S576>/S-Function1' */
  real_T SFunction1_o9_o;              /* '<S576>/S-Function1' */
  real_T SFunction1_o10_ns;            /* '<S576>/S-Function1' */
  real_T SFunction1_o11_lw;            /* '<S576>/S-Function1' */
  real_T RX_time_ht;                   /* '<S572>/Data Type Conversion9' */
  real_T RX_delta_time_fg;             /* '<S572>/Data Type Conversion10' */
  real_T RX_time_i3;                   /* '<S568>/Data Type Conversion9' */
  real_T RX_time_dz;                   /* '<S569>/Data Type Conversion9' */
  real_T RX_delta_time_g;              /* '<S568>/Data Type Conversion10' */
  real_T RX_delta_time_fu;             /* '<S569>/Data Type Conversion10' */
  real_T SFunction1_o1_l3;             /* '<S571>/S-Function1' */
  real_T SFunction1_o2_lr;             /* '<S571>/S-Function1' */
  real_T SFunction1_o3_gu;             /* '<S571>/S-Function1' */
  real_T SFunction1_o4_cj;             /* '<S571>/S-Function1' */
  real_T SFunction1_o5_ci;             /* '<S571>/S-Function1' */
  real_T SFunction1_o1_lz;             /* '<S570>/S-Function1' */
  real_T SFunction1_o2_ap;             /* '<S570>/S-Function1' */
  real_T SFunction1_o3_ac;             /* '<S570>/S-Function1' */
  real_T SFunction1_o4_kp;             /* '<S570>/S-Function1' */
  real_T SFunction1_o5_c5;             /* '<S570>/S-Function1' */
  real_T SFunction1_o1_l2;             /* '<S567>/S-Function1' */
  real_T SFunction1_o2_lt;             /* '<S567>/S-Function1' */
  real_T SFunction1_o3_jgw;            /* '<S567>/S-Function1' */
  real_T SFunction1_o4_a5;             /* '<S567>/S-Function1' */
  real_T SFunction1_o5_mu;             /* '<S567>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S567>/S-Function1' */
  real_T SFunction1_o7_gs;             /* '<S567>/S-Function1' */
  real_T RX_time_ho;                   /* '<S563>/Data Type Conversion9' */
  real_T RX_time_ack;                  /* '<S563>/Data Type Conversion2' */
  real_T RX_delta_time_cq;             /* '<S563>/Data Type Conversion10' */
  real_T RX_delta_time_pb;             /* '<S563>/Data Type Conversion1' */
  real_T SFunction1_o1_ly;             /* '<S565>/S-Function1' */
  real_T SFunction1_o2_hw;             /* '<S565>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S565>/S-Function1' */
  real_T SFunction1_o4_mq;             /* '<S565>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S565>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S565>/S-Function1' */
  real_T SFunction1_o7_os;             /* '<S565>/S-Function1' */
  real_T SFunction1_o8_ho;             /* '<S565>/S-Function1' */
  real_T SFunction1_o9_oe;             /* '<S565>/S-Function1' */
  real_T SFunction1_o1_nu;             /* '<S564>/S-Function1' */
  real_T SFunction1_o2_op;             /* '<S564>/S-Function1' */
  real_T SFunction1_o3_hd;             /* '<S564>/S-Function1' */
  real_T SFunction1_o4_ph;             /* '<S564>/S-Function1' */
  real_T SFunction1_o5_ia;             /* '<S564>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S564>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S564>/S-Function1' */
  real_T SFunction1_o8_or;             /* '<S564>/S-Function1' */
  real_T SFunction1_o9_m;              /* '<S564>/S-Function1' */
  real_T SFunction1_o1_ao;             /* '<S562>/S-Function1' */
  real_T SFunction1_o2_m5;             /* '<S562>/S-Function1' */
  real_T SFunction1_o3_km;             /* '<S562>/S-Function1' */
  real_T SFunction1_o4_mx;             /* '<S562>/S-Function1' */
  real_T SFunction1_o5_nv;             /* '<S562>/S-Function1' */
  real_T SFunction1_o6_cp;             /* '<S562>/S-Function1' */
  real_T SFunction1_o1_p1;             /* '<S560>/S-Function1' */
  real_T SFunction1_o2_ad;             /* '<S560>/S-Function1' */
  real_T SFunction1_o3_cv;             /* '<S560>/S-Function1' */
  real_T SFunction1_o4_o3;             /* '<S560>/S-Function1' */
  real_T SFunction1_o5_p1;             /* '<S560>/S-Function1' */
  real_T SFunction1_o1_kw;             /* '<S558>/S-Function1' */
  real_T SFunction1_o2_aq;             /* '<S558>/S-Function1' */
  real_T SFunction1_o3_oh;             /* '<S558>/S-Function1' */
  real_T SFunction1_o4_mpl;            /* '<S558>/S-Function1' */
  real_T SFunction1_o5_pa;             /* '<S558>/S-Function1' */
  real_T SFunction1_o6_fq;             /* '<S558>/S-Function1' */
  real_T SFunction1_o7_hx;             /* '<S558>/S-Function1' */
  real_T SFunction1_o8_j;              /* '<S558>/S-Function1' */
  real_T SFunction1_o9_hy;             /* '<S558>/S-Function1' */
  real_T SFunction1_o10_b;             /* '<S558>/S-Function1' */
  real_T SFunction1_o11_ku;            /* '<S558>/S-Function1' */
  real_T SFunction1_o12_d;             /* '<S558>/S-Function1' */
  real_T SFunction1_o13_d;             /* '<S558>/S-Function1' */
  real_T SFunction1_o14_j;             /* '<S558>/S-Function1' */
  real_T SFunction1_o15_k;             /* '<S558>/S-Function1' */
  real_T SFunction1_o16_g;             /* '<S558>/S-Function1' */
  real_T SFunction1_o17_j;             /* '<S558>/S-Function1' */
  real_T SFunction1_o1_nk;             /* '<S556>/S-Function1' */
  real_T SFunction1_o2_e4;             /* '<S556>/S-Function1' */
  real_T SFunction1_o3_db;             /* '<S556>/S-Function1' */
  real_T SFunction1_o4_mjz;            /* '<S556>/S-Function1' */
  real_T SFunction1_o5_f5;             /* '<S556>/S-Function1' */
  real_T SFunction1_o6_ce;             /* '<S556>/S-Function1' */
  real_T SFunction1_o7_d1u;            /* '<S556>/S-Function1' */
  real_T SFunction1_o8_bw;             /* '<S556>/S-Function1' */
  real_T SFunction1_o9_e;              /* '<S556>/S-Function1' */
  real_T SFunction1_o10_l;             /* '<S556>/S-Function1' */
  real_T SFunction1_o11_d;             /* '<S556>/S-Function1' */
  real_T timeStamp_c;                  /* '<S513>/timeStamp' */
  real_T Unit_Delay_a;                 /* '<S513>/Unit_Delay' */
  real_T SFunction1_o1_b4;             /* '<S509>/S-Function1' */
  real_T SFunction1_o2_g4;             /* '<S509>/S-Function1' */
  real_T SFunction1_o3_go;             /* '<S509>/S-Function1' */
  real_T SFunction1_o4_np;             /* '<S509>/S-Function1' */
  real_T SFunction1_o5_gf;             /* '<S509>/S-Function1' */
  real_T SFunction1_o6_bk;             /* '<S509>/S-Function1' */
  real_T SFunction1_o7_g3;             /* '<S509>/S-Function1' */
  real_T SFunction1_o8_k4;             /* '<S509>/S-Function1' */
  real_T SFunction1_o9_n1;             /* '<S509>/S-Function1' */
  real_T SFunction1_o10_lk;            /* '<S509>/S-Function1' */
  real_T SFunction1_o1_be;             /* '<S507>/S-Function1' */
  real_T SFunction1_o2_ky;             /* '<S507>/S-Function1' */
  real_T SFunction1_o3_mf;             /* '<S507>/S-Function1' */
  real_T SFunction1_o4_a3;             /* '<S507>/S-Function1' */
  real_T SFunction1_o5_dq;             /* '<S507>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S507>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S507>/S-Function1' */
  real_T SFunction1_o8_j2;             /* '<S507>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S507>/S-Function1' */
  real_T SFunction1_o10_n3;            /* '<S507>/S-Function1' */
  real_T SFunction1_o11_is;            /* '<S507>/S-Function1' */
  real_T SFunction1_o12_j;             /* '<S507>/S-Function1' */
  real_T SFunction1_o13_n;             /* '<S507>/S-Function1' */
  real_T SFunction1_o14_b;             /* '<S507>/S-Function1' */
  real_T SFunction1_o15_j;             /* '<S507>/S-Function1' */
  real_T SFunction1_o16_e;             /* '<S507>/S-Function1' */
  real_T SFunction1_o17_jw;            /* '<S507>/S-Function1' */
  real_T SFunction1_o18_c;             /* '<S507>/S-Function1' */
  real_T SFunction1_o19_k;             /* '<S507>/S-Function1' */
  real_T SFunction1_o20_m;             /* '<S507>/S-Function1' */
  real_T SFunction1_o21_b;             /* '<S507>/S-Function1' */
  real_T SFunction1_o22_i;             /* '<S507>/S-Function1' */
  real_T SFunction1_o23_i;             /* '<S507>/S-Function1' */
  real_T SFunction1_o24_f;             /* '<S507>/S-Function1' */
  real_T SFunction1_o25_c;             /* '<S507>/S-Function1' */
  real_T SFunction1_o1_ii;             /* '<S505>/S-Function1' */
  real_T SFunction1_o2_m4;             /* '<S505>/S-Function1' */
  real_T SFunction1_o3_bl;             /* '<S505>/S-Function1' */
  real_T SFunction1_o4_nq;             /* '<S505>/S-Function1' */
  real_T SFunction1_o5_nb;             /* '<S505>/S-Function1' */
  real_T SFunction1_o6_bkh;            /* '<S505>/S-Function1' */
  real_T SFunction1_o7_hy;             /* '<S505>/S-Function1' */
  real_T SFunction1_o8_bf;             /* '<S505>/S-Function1' */
  real_T SFunction1_o9_pb;             /* '<S505>/S-Function1' */
  real_T SFunction1_o10_f;             /* '<S505>/S-Function1' */
  real_T SFunction1_o11_b;             /* '<S505>/S-Function1' */
  real_T SFunction1_o12_o;             /* '<S505>/S-Function1' */
  real_T SFunction1_o13_dx;            /* '<S505>/S-Function1' */
  real_T SFunction1_o14_bz;            /* '<S505>/S-Function1' */
  real_T SFunction1_o15_b;             /* '<S505>/S-Function1' */
  real_T SFunction1_o16_d;             /* '<S505>/S-Function1' */
  real_T SFunction1_o17_l;             /* '<S505>/S-Function1' */
  real_T SFunction1_o18_a;             /* '<S505>/S-Function1' */
  real_T SFunction1_o19_m;             /* '<S505>/S-Function1' */
  real_T SFunction1_o20_j;             /* '<S505>/S-Function1' */
  real_T SFunction1_o21_d;             /* '<S505>/S-Function1' */
  real_T SFunction1_o22_m;             /* '<S505>/S-Function1' */
  real_T SFunction1_o23_e;             /* '<S505>/S-Function1' */
  real_T SFunction1_o24_b;             /* '<S505>/S-Function1' */
  real_T SFunction1_o25_h;             /* '<S505>/S-Function1' */
  real_T SFunction1_o1_ko;             /* '<S503>/S-Function1' */
  real_T SFunction1_o2_hqm;            /* '<S503>/S-Function1' */
  real_T SFunction1_o3_nr;             /* '<S503>/S-Function1' */
  real_T SFunction1_o4_l3f;            /* '<S503>/S-Function1' */
  real_T RX_time_ho2;                  /* '<S499>/Data Type Conversion9' */
  real_T RX_time_kbg;                  /* '<S499>/Data Type Conversion2' */
  real_T RX_delta_time_pu;             /* '<S499>/Data Type Conversion10' */
  real_T RX_delta_time_cl;             /* '<S499>/Data Type Conversion3' */
  real_T SFunction1_o1_o;              /* '<S501>/S-Function1' */
  real_T SFunction1_o2_dz;             /* '<S501>/S-Function1' */
  real_T SFunction1_o3_ga;             /* '<S501>/S-Function1' */
  real_T SFunction1_o4_hdy;            /* '<S501>/S-Function1' */
  real_T SFunction1_o5_cl;             /* '<S501>/S-Function1' */
  real_T SFunction1_o6_fm;             /* '<S501>/S-Function1' */
  real_T SFunction1_o7_aw;             /* '<S501>/S-Function1' */
  real_T SFunction1_o1_bs;             /* '<S500>/S-Function1' */
  real_T SFunction1_o2_kq;             /* '<S500>/S-Function1' */
  real_T SFunction1_o3_dd;             /* '<S500>/S-Function1' */
  real_T SFunction1_o4_ar;             /* '<S500>/S-Function1' */
  real_T SFunction1_o5_cw;             /* '<S500>/S-Function1' */
  real_T SFunction1_o6_kz;             /* '<S500>/S-Function1' */
  real_T SFunction1_o7_cz;             /* '<S500>/S-Function1' */
  real_T SFunction1_o1_nq;             /* '<S498>/S-Function1' */
  real_T SFunction1_o2_nb;             /* '<S498>/S-Function1' */
  real_T SFunction1_o3_l4;             /* '<S498>/S-Function1' */
  real_T SFunction1_o4_mw;             /* '<S498>/S-Function1' */
  real_T SFunction1_o5_mq;             /* '<S498>/S-Function1' */
  real_T SFunction1_o6_kru;            /* '<S498>/S-Function1' */
  real_T SFunction1_o7_pj;             /* '<S498>/S-Function1' */
  real_T SFunction1_o8_a;              /* '<S498>/S-Function1' */
  real_T SFunction1_o9_f;              /* '<S498>/S-Function1' */
  real_T SFunction1_o10_g;             /* '<S498>/S-Function1' */
  real_T SFunction1_o11_h;             /* '<S498>/S-Function1' */
  real_T SFunction1_o12_a;             /* '<S498>/S-Function1' */
  real_T SFunction1_o13_f;             /* '<S498>/S-Function1' */
  real_T SFunction1_o14_f;             /* '<S498>/S-Function1' */
  real_T SFunction1_o15_e;             /* '<S498>/S-Function1' */
  real_T SFunction1_o16_k;             /* '<S498>/S-Function1' */
  real_T SFunction1_o17_k;             /* '<S498>/S-Function1' */
  real_T SFunction1_o18_b;             /* '<S498>/S-Function1' */
  real_T SFunction1_o19_h;             /* '<S498>/S-Function1' */
  real_T SFunction1_o20_h;             /* '<S498>/S-Function1' */
  real_T SFunction1_o21_p;             /* '<S498>/S-Function1' */
  real_T SFunction1_o22_f;             /* '<S498>/S-Function1' */
  real_T SFunction1_o23_h;             /* '<S498>/S-Function1' */
  real_T SFunction1_o1_jg;             /* '<S496>/S-Function1' */
  real_T SFunction1_o2_jt;             /* '<S496>/S-Function1' */
  real_T SFunction1_o3_pm;             /* '<S496>/S-Function1' */
  real_T SFunction1_o4_o4;             /* '<S496>/S-Function1' */
  real_T SFunction1_o6_o2;             /* '<S496>/S-Function1' */
  real_T SFunction1_o7_eb;             /* '<S496>/S-Function1' */
  real_T SFunction1_o9_f2;             /* '<S496>/S-Function1' */
  real_T SFunction1_o10_fg;            /* '<S496>/S-Function1' */
  real_T SFunction1_o11_e;             /* '<S496>/S-Function1' */
  real_T SFunction1_o12_f;             /* '<S496>/S-Function1' */
  real_T SFunction1_o13_h;             /* '<S496>/S-Function1' */
  real_T SFunction1_o14_p;             /* '<S496>/S-Function1' */
  real_T SFunction1_o15_c;             /* '<S496>/S-Function1' */
  real_T SFunction1_o16_h;             /* '<S496>/S-Function1' */
  real_T SFunction1_o17_c;             /* '<S496>/S-Function1' */
  real_T SFunction1_o18_p;             /* '<S496>/S-Function1' */
  real_T SFunction1_o19_b;             /* '<S496>/S-Function1' */
  real_T SFunction1_o20_e;             /* '<S496>/S-Function1' */
  real_T SFunction1_o21_e;             /* '<S496>/S-Function1' */
  real_T SFunction1_o22_j;             /* '<S496>/S-Function1' */
  real_T SFunction1_o23_ha;            /* '<S496>/S-Function1' */
  real_T SFunction1_o1_gg;             /* '<S494>/S-Function1' */
  real_T SFunction1_o2_pe;             /* '<S494>/S-Function1' */
  real_T SFunction1_o3_l5;             /* '<S494>/S-Function1' */
  real_T SFunction1_o4_dt;             /* '<S494>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S494>/S-Function1' */
  real_T SFunction1_o6_fqz;            /* '<S494>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S494>/S-Function1' */
  real_T SFunction1_o8_mv;             /* '<S494>/S-Function1' */
  real_T SFunction1_o9_g3;             /* '<S494>/S-Function1' */
  real_T SFunction1_o10_h;             /* '<S494>/S-Function1' */
  real_T SFunction1_o11_lb;            /* '<S494>/S-Function1' */
  real_T SFunction1_o12_or;            /* '<S494>/S-Function1' */
  real_T SFunction1_o13_k;             /* '<S494>/S-Function1' */
  real_T SFunction1_o14_o;             /* '<S494>/S-Function1' */
  real_T SFunction1_o15_h;             /* '<S494>/S-Function1' */
  real_T SFunction1_o16_a;             /* '<S494>/S-Function1' */
  real_T SFunction1_o17_f;             /* '<S494>/S-Function1' */
  real_T SFunction1_o18_h;             /* '<S494>/S-Function1' */
  real_T SFunction1_o19_e;             /* '<S494>/S-Function1' */
  real_T SFunction1_o20_f;             /* '<S494>/S-Function1' */
  real_T SFunction1_o21_i;             /* '<S494>/S-Function1' */
  real_T SFunction1_o22_k;             /* '<S494>/S-Function1' */
  real_T SFunction1_o23_m;             /* '<S494>/S-Function1' */
  real_T SFunction1_o24_g;             /* '<S494>/S-Function1' */
  real_T SFunction1_o25_j;             /* '<S494>/S-Function1' */
  real_T SFunction1_o26_e;             /* '<S494>/S-Function1' */
  real_T SFunction1_o27_l;             /* '<S494>/S-Function1' */
  real_T SFunction1_o28_j;             /* '<S494>/S-Function1' */
  real_T SFunction1_o29;               /* '<S494>/S-Function1' */
  real_T SFunction1_o30;               /* '<S494>/S-Function1' */
  real_T SFunction1_o31;               /* '<S494>/S-Function1' */
  real_T SFunction1_o32;               /* '<S494>/S-Function1' */
  real_T SFunction1_o33;               /* '<S494>/S-Function1' */
  real_T SFunction1_o34;               /* '<S494>/S-Function1' */
  real_T SFunction1_o35;               /* '<S494>/S-Function1' */
  real_T SFunction1_o36;               /* '<S494>/S-Function1' */
  real_T SFunction1_o37;               /* '<S494>/S-Function1' */
  real_T SFunction1_o38;               /* '<S494>/S-Function1' */
  real_T SFunction1_o39;               /* '<S494>/S-Function1' */
  real_T SFunction1_o40;               /* '<S494>/S-Function1' */
  real_T SFunction1_o41;               /* '<S494>/S-Function1' */
  real_T SFunction1_o42;               /* '<S494>/S-Function1' */
  real_T SFunction1_o43;               /* '<S494>/S-Function1' */
  real_T SFunction1_o44;               /* '<S494>/S-Function1' */
  real_T SFunction1_o45;               /* '<S494>/S-Function1' */
  real_T SFunction1_o46;               /* '<S494>/S-Function1' */
  real_T SFunction1_o47;               /* '<S494>/S-Function1' */
  real_T SFunction1_o48;               /* '<S494>/S-Function1' */
  real_T SFunction1_o49;               /* '<S494>/S-Function1' */
  real_T SFunction1_o50;               /* '<S494>/S-Function1' */
  real_T SFunction1_o51;               /* '<S494>/S-Function1' */
  real_T SFunction1_o52;               /* '<S494>/S-Function1' */
  real_T SFunction1_o53;               /* '<S494>/S-Function1' */
  real_T SFunction1_o54;               /* '<S494>/S-Function1' */
  real_T SFunction1_o55;               /* '<S494>/S-Function1' */
  real_T SFunction1_o56;               /* '<S494>/S-Function1' */
  real_T SFunction1_o57;               /* '<S494>/S-Function1' */
  real_T SFunction1_o58;               /* '<S494>/S-Function1' */
  real_T SFunction1_o59;               /* '<S494>/S-Function1' */
  real_T SFunction1_o60;               /* '<S494>/S-Function1' */
  real_T SFunction1_o61;               /* '<S494>/S-Function1' */
  real_T SFunction1_o62;               /* '<S494>/S-Function1' */
  real_T SFunction1_o63;               /* '<S494>/S-Function1' */
  real_T SFunction1_o64;               /* '<S494>/S-Function1' */
  real_T SFunction1_o65;               /* '<S494>/S-Function1' */
  real_T SFunction1_o66;               /* '<S494>/S-Function1' */
  real_T SFunction1_o67;               /* '<S494>/S-Function1' */
  real_T SFunction1_o68;               /* '<S494>/S-Function1' */
  real_T SFunction1_o69;               /* '<S494>/S-Function1' */
  real_T SFunction1_o70;               /* '<S494>/S-Function1' */
  real_T SFunction1_o71;               /* '<S494>/S-Function1' */
  real_T SFunction1_o72;               /* '<S494>/S-Function1' */
  real_T SFunction1_o73;               /* '<S494>/S-Function1' */
  real_T SFunction1_o74;               /* '<S494>/S-Function1' */
  real_T SFunction1_o1_jyi;            /* '<S492>/S-Function1' */
  real_T SFunction1_o2_fz;             /* '<S492>/S-Function1' */
  real_T SFunction1_o3_ke;             /* '<S492>/S-Function1' */
  real_T SFunction1_o4_pp;             /* '<S492>/S-Function1' */
  real_T SFunction1_o5_nu;             /* '<S492>/S-Function1' */
  real_T SFunction1_o1_lk;             /* '<S490>/S-Function1' */
  real_T SFunction1_o2_mm;             /* '<S490>/S-Function1' */
  real_T SFunction1_o3_jv;             /* '<S490>/S-Function1' */
  real_T SFunction1_o4_nz;             /* '<S490>/S-Function1' */
  real_T SFunction1_o5_ev;             /* '<S490>/S-Function1' */
  real_T SFunction1_o6_cd;             /* '<S490>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S490>/S-Function1' */
  real_T SFunction1_o8_cp;             /* '<S490>/S-Function1' */
  real_T SFunction1_o1_pg;             /* '<S488>/S-Function1' */
  real_T SFunction1_o2_h3;             /* '<S488>/S-Function1' */
  real_T SFunction1_o3_cj;             /* '<S488>/S-Function1' */
  real_T SFunction1_o4_e2;             /* '<S488>/S-Function1' */
  real_T SFunction1_o5_a2;             /* '<S488>/S-Function1' */
  real_T SFunction1_o6_b4j;            /* '<S488>/S-Function1' */
  real_T SFunction1_o7_p1;             /* '<S488>/S-Function1' */
  real_T SFunction1_o8_m0;             /* '<S488>/S-Function1' */
  real_T SFunction1_o9_i5;             /* '<S488>/S-Function1' */
  real_T SFunction1_o10_c;             /* '<S488>/S-Function1' */
  real_T SFunction1_o11_nz;            /* '<S488>/S-Function1' */
  real_T SFunction1_o1_ks;             /* '<S486>/S-Function1' */
  real_T SFunction1_o2_mq;             /* '<S486>/S-Function1' */
  real_T SFunction1_o3_ip;             /* '<S486>/S-Function1' */
  real_T SFunction1_o4_l5m;            /* '<S486>/S-Function1' */
  real_T SFunction1_o5_ag;             /* '<S486>/S-Function1' */
  real_T SFunction1_o6_co;             /* '<S486>/S-Function1' */
  real_T SFunction1_o7_ns;             /* '<S486>/S-Function1' */
  real_T SFunction1_o8_f2;             /* '<S486>/S-Function1' */
  real_T SFunction1_o1_cy;             /* '<S484>/S-Function1' */
  real_T SFunction1_o2_pc;             /* '<S484>/S-Function1' */
  real_T SFunction1_o3_o0;             /* '<S484>/S-Function1' */
  real_T SFunction1_o4_ko;             /* '<S484>/S-Function1' */
  real_T SFunction1_o5_fl;             /* '<S484>/S-Function1' */
  real_T SFunction1_o6_mh;             /* '<S484>/S-Function1' */
  real_T SFunction1_o7_pk;             /* '<S484>/S-Function1' */
  real_T SFunction1_o8_hh;             /* '<S484>/S-Function1' */
  real_T SFunction1_o9_gn;             /* '<S484>/S-Function1' */
  real_T SFunction1_o10_kx;            /* '<S484>/S-Function1' */
  real_T SFunction1_o11_lb0;           /* '<S484>/S-Function1' */
  real_T SFunction1_o12_i;             /* '<S484>/S-Function1' */
  real_T SFunction1_o13_nz;            /* '<S484>/S-Function1' */
  real_T SFunction1_o1_da;             /* '<S476>/S-Function1' */
  real_T SFunction1_o2_ac;             /* '<S476>/S-Function1' */
  real_T SFunction1_o3_c1;             /* '<S476>/S-Function1' */
  real_T SFunction1_o4_cx;             /* '<S476>/S-Function1' */
  real_T SFunction1_o5_md;             /* '<S476>/S-Function1' */
  real_T SFunction1_o6_b3;             /* '<S476>/S-Function1' */
  real_T SFunction1_o7_c2;             /* '<S476>/S-Function1' */
  real_T SFunction1_o8_jm;             /* '<S476>/S-Function1' */
  real_T SFunction1_o9_bm;             /* '<S476>/S-Function1' */
  real_T SFunction1_o10_ii;            /* '<S476>/S-Function1' */
  real_T SFunction1_o11_f;             /* '<S476>/S-Function1' */
  real_T SFunction1_o1_ke;             /* '<S467>/S-Function1' */
  real_T SFunction1_o2_pb;             /* '<S467>/S-Function1' */
  real_T SFunction1_o3_g4x;            /* '<S467>/S-Function1' */
  real_T SFunction1_o4_ff;             /* '<S467>/S-Function1' */
  real_T SFunction1_o5_k1;             /* '<S467>/S-Function1' */
  real_T SFunction1_o6_eh;             /* '<S467>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S467>/S-Function1' */
  real_T SFunction1_o8_nq;             /* '<S467>/S-Function1' */
  real_T SFunction1_o9_d;              /* '<S467>/S-Function1' */
  real_T SFunction1_o10_f4;            /* '<S467>/S-Function1' */
  real_T SFunction1_o11_er;            /* '<S467>/S-Function1' */
  real_T Sum;                          /* '<S393>/Sum' */
  real_T for_logging;                  /* '<S388>/for_logging' */
  real_T for_logging1;                 /* '<S388>/for_logging1' */
  real_T ms_to_kmh;                    /* '<S388>/m//s_to_km//h' */
  real_T ms_to_kmh_2;                  /* '<S388>/m//s_to_km//h_2' */
  real_T for_logging2;                 /* '<S388>/for_logging2' */
  real_T for_logging3;                 /* '<S388>/for_logging3' */
  real_T for_logging4;                 /* '<S388>/for_logging4' */
  real_T for_logging5;                 /* '<S388>/for_logging5' */
  real_T for_logging6;                 /* '<S388>/for_logging6' */
  real_T HDOP__f;                      /* '<S386>/Bus Selector1' */
  real_T FrontAxleSpeed_d;             /* '<S386>/Bus Selector4' */
  real_T kph2mps;                      /* '<S386>/kph2mps' */
  real_T Product_c;                    /* '<S386>/Product' */
  real_T FrontAxleSpeed_dv;            /* '<S386>/Bus Selector4' */
  real_T kph2mps1;                     /* '<S386>/kph2mps1' */
  real_T Product1_h;                   /* '<S386>/Product1' */
  real_T UnitDelay1;                   /* '<S386>/Unit Delay1' */
  real_T InitialHeading;               /* '<S387>/InitialHeading' */
  real_T InitialPosition;              /* '<S387>/InitialPosition' */
  real_T InitialXPosition;             /* '<S387>/InitialXPosition' */
  real_T InitialYPosition;             /* '<S387>/InitialYPosition' */
  real_T FrontAxleSpeed_dvq;           /* '<S71>/Bus Selector' */
  real_T kph2ms;                       /* '<S71>/kph2ms' */
  real_T LongitudnalPosition;          /* '<S387>/LongitudnalPosition' */
  real_T TmpRTBAtVehHeadingInport1;    /* '<S387>/In2' */
  real_T TrigonometricFunction;        /* '<S387>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S387>/Trigonometric Function1' */
  real_T VehHeading;                   /* '<S387>/VehHeading' */
  real_T XPosition;                    /* '<S387>/XPosition' */
  real_T YPosition;                    /* '<S387>/YPosition' */
  real_T DataTypeConversion1_h;        /* '<S83>/Data Type Conversion1' */
  real_T uDLookupTable;                /* '<S83>/2-D Lookup Table' */
  real_T DataTypeConversion5_oo;       /* '<S77>/Data Type Conversion5' */
  real_T distanceSpdTarget_e;          /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_target_o;       /* '<S81>/Multiport Switch' */
  real_T VSPD_TARGET_KPH_APV_g;        /* '<S81>/Signal Conversion16' */
  real_T VSPD_HYST_KPH_APV_f;          /* '<S81>/Saturation9' */
  real_T Add_k;                        /* '<S103>/Add' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_AP_b;/* '<S81>/Saturation1' */
  real_T DataTypeConversion4_i;        /* '<S79>/Data Type Conversion4' */
  real_T ThrottlePID_Y_m;              /* '<S79>/Switch' */
  real_T MultiportSwitch;              /* '<S83>/Multiport Switch' */
  real_T DataTypeConversion1_n3;       /* '<S82>/Data Type Conversion1' */
  real_T uD_Lookup_Table;              /* '<S85>/2D_Lookup_Table' */
  real_T DataTypeConversion1_a;        /* '<S84>/Data Type Conversion1' */
  real_T Subtract_j;                   /* '<S84>/Subtract' */
  real_T Divide_h;                     /* '<S84>/Divide' */
  real_T Primary_brake_circuit_pressure_;/* '<S98>/Gain4' */
  real_T Secondary_brake_circuit_pressur;/* '<S98>/Gain5' */
  real_T Add_d;                        /* '<S99>/Add' */
  real_T Gain_g;                       /* '<S99>/Gain' */
  real_T Brake_pressure_target_kpa;    /* '<S99>/MinMax' */
  real_T Bendix_2C2_Primary_brake_circui;/* '<S98>/Gain1' */
  real_T Bendix_2C2_Secondary_brake_circ;/* '<S98>/Gain2' */
  real_T Add_n;                        /* '<S100>/Add' */
  real_T brake_system_avg_appl_pressure_;/* '<S100>/Gain' */
  real_T Primary_brake_circuit_pressur_n;/* '<S98>/Gain3' */
  real_T Divide2;                      /* '<S100>/Divide2' */
  real_T Gain5;                        /* '<S100>/Gain5' */
  real_T Brake_appl_percent;           /* '<S100>/Saturation3' */
  real_T Unit_Delay_k;                 /* '<S338>/Unit_Delay' */
  real_T MinMax_du;                    /* '<S338>/MinMax' */
  real_T Xold_h;                       /* '<S385>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S385>/Init' */
  real_T Abs_e;                        /* '<S381>/Abs' */
  real_T DigitalClock;                 /* '<S382>/Digital Clock' */
  real_T Unit_Delay_dv;                /* '<S382>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S382>/Subtract' */
  real_T Product1_hp;                  /* '<S381>/Product1' */
  real_T Add1_n;                       /* '<S381>/Add1' */
  real_T MinMax2_g;                    /* '<S381>/MinMax2' */
  real_T Abs1_h;                       /* '<S381>/Abs1' */
  real_T Product2_c;                   /* '<S381>/Product2' */
  real_T Subtract1_n;                  /* '<S381>/Subtract1' */
  real_T MinMax1_h;                    /* '<S381>/MinMax1' */
  real_T Unit_Delay_n;                 /* '<S336>/Unit_Delay' */
  real_T MinMax_n;                     /* '<S336>/MinMax' */
  real_T Xold_f;                       /* '<S374>/FixPt Unit Delay1' */
  real_T Init_b;                       /* '<S374>/Init' */
  real_T Abs_ez;                       /* '<S370>/Abs' */
  real_T DigitalClock_b;               /* '<S371>/Digital Clock' */
  real_T Unit_Delay_nx;                /* '<S371>/Unit_Delay' */
  real_T Subtract_i;                   /* '<S371>/Subtract' */
  real_T Product1_iy;                  /* '<S370>/Product1' */
  real_T Add1_b;                       /* '<S370>/Add1' */
  real_T MinMax2_k;                    /* '<S370>/MinMax2' */
  real_T Abs1_c;                       /* '<S370>/Abs1' */
  real_T Product2_n;                   /* '<S370>/Product2' */
  real_T Subtract1_h;                  /* '<S370>/Subtract1' */
  real_T MinMax1_j;                    /* '<S370>/MinMax1' */
  real_T pathSpdLimit_a;               /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_abs_max;        /* '<S81>/Multiport Switch' */
  real_T distance_o;                   /* '<S81>/Bus Selector' */
  real_T Distance_to_achieve_speed_targe;/* '<S81>/Multiport Switch' */
  real_T Uk1[2];                       /* '<S333>/Delay Input1' */
  real_T Saturation5;                  /* '<S335>/Saturation5' */
  real_T MinMax6;                      /* '<S335>/MinMax6' */
  real_T Gain1_ep;                     /* '<S335>/Gain1' */
  real_T VSPD_TARGET_KPH_APV_gu;       /* '<S335>/Saturation4' */
  real_T MinMax1_f;                    /* '<S335>/MinMax1' */
  real_T Gain2;                        /* '<S335>/Gain2' */
  real_T Saturation6;                  /* '<S335>/Saturation6' */
  real_T Acceleration_target_ms2;      /* '<S81>/Multiport Switch' */
  real_T Saturation7;                  /* '<S335>/Saturation7' */
  real_T Saturation1;                  /* '<S335>/Saturation1' */
  real_T Jerk_target_ms3;              /* '<S81>/Multiport Switch' */
  real_T Saturation2;                  /* '<S335>/Saturation2' */
  real_T Vehicle_speed_vector_kph[33]; /* '<S335>/Gain3' */
  real_T MinMax3;                      /* '<S347>/MinMax3' */
  real_T Unit_Delay_f;                 /* '<S351>/Unit_Delay' */
  real_T MinMax5;                      /* '<S347>/MinMax5' */
  real_T Subtract_a;                   /* '<S347>/Subtract' */
  real_T Abs_mp;                       /* '<S347>/Abs' */
  real_T MinMax4;                      /* '<S347>/MinMax4' */
  real_T MinMax6_j;                    /* '<S347>/MinMax6' */
  real_T Subtract1_ca;                 /* '<S347>/Subtract1' */
  real_T Abs1_h5;                      /* '<S347>/Abs1' */
  real_T MinMax8;                      /* '<S347>/MinMax8' */
  real_T MinMax7;                      /* '<S347>/MinMax7' */
  real_T MinMax10;                     /* '<S347>/MinMax10' */
  real_T MinMax9;                      /* '<S347>/MinMax9' */
  real_T Subtract2;                    /* '<S347>/Subtract2' */
  real_T Abs2;                         /* '<S347>/Abs2' */
  real_T Xold_pg;                      /* '<S362>/FixPt Unit Delay1' */
  real_T Init_hz;                      /* '<S362>/Init' */
  real_T Gain1_c;                      /* '<S348>/Gain1' */
  real_T DigitalClock_f;               /* '<S360>/Digital Clock' */
  real_T Unit_Delay_e;                 /* '<S360>/Unit_Delay' */
  real_T Subtract_b;                   /* '<S360>/Subtract' */
  real_T Product1_a;                   /* '<S357>/Product1' */
  real_T Add_h;                        /* '<S357>/Add' */
  real_T MinMax_a;                     /* '<S357>/MinMax' */
  real_T LookupTableDynamic;           /* '<S348>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S340>/Delay Input1' */
  real_T Xold_o5;                      /* '<S346>/FixPt Unit Delay1' */
  real_T Init_p;                       /* '<S346>/Init' */
  real_T Vehicle_speed_target_c;       /* '<S341>/Unit_Delay' */
  real_T Vehicle_speed;                /* '<S341>/Unit_Delay' */
  real_T Distance_m;                   /* '<S341>/Unit_Delay' */
  real_T err;                          /* '<S341>/Subtract' */
  real_T err_abs;                      /* '<S341>/Abs2' */
  real_T Gain2_k;                      /* '<S341>/Gain2' */
  real_T Saturation4;                  /* '<S341>/Saturation4' */
  real_T time_to_target_vspd_secs;     /* '<S341>/Divide2' */
  real_T DigitalClock_p;               /* '<S339>/Digital Clock' */
  real_T Unit_Delay_b;                 /* '<S339>/Unit_Delay' */
  real_T Subtract_g;                   /* '<S339>/Subtract' */
  real_T MinMax3_n;                    /* '<S341>/MinMax3' */
  real_T Saturation1_e;                /* '<S341>/Saturation1' */
  real_T Divide_e;                     /* '<S341>/Divide' */
  real_T Abs_ma;                       /* '<S342>/Abs' */
  real_T Product1_iv;                  /* '<S342>/Product1' */
  real_T Add1_bf;                      /* '<S342>/Add1' */
  real_T MinMax2_c;                    /* '<S342>/MinMax2' */
  real_T Abs1_f;                       /* '<S342>/Abs1' */
  real_T Product2_m1;                  /* '<S342>/Product2' */
  real_T Subtract1_h2;                 /* '<S342>/Subtract1' */
  real_T MinMax1_p;                    /* '<S342>/MinMax1' */
  real_T MinMax_o;                     /* '<S81>/MinMax' */
  real_T Vehicle_speed_target_n;       /* '<S81>/Saturation8' */
  real_T uD_Lookup_Table_l;            /* '<S194>/2D_Lookup_Table' */
  real_T Divide_f;                     /* '<S100>/Divide' */
  real_T Gain1_l;                      /* '<S100>/Gain1' */
  real_T Brake_appl_percent_to_achieve_d;/* '<S100>/Saturation1' */
  real_T ACCEL_LIM_MS2_APV_b;          /* '<S81>/Saturation2' */
  real_T uD_Lookup_Table_i;            /* '<S195>/2D_Lookup_Table' */
  real_T Divide1_f;                    /* '<S100>/Divide1' */
  real_T Gain2_e;                      /* '<S100>/Gain2' */
  real_T Brake_appl_percent_for_maximum_;/* '<S100>/Saturation2' */
  real_T DataTypeConversion2_l3;       /* '<S77>/Data Type Conversion2' */
  real_T uD_Lookup_Table_le;           /* '<S193>/2D_Lookup_Table' */
  real_T Decel_rate_calculated_ms2;    /* '<S100>/Saturation4' */
  real_T DataTypeConversion_p;         /* '<S101>/Data Type Conversion' */
  real_T DataTypeConversion1_k5;       /* '<S101>/Data Type Conversion1' */
  real_T Add_m;                        /* '<S101>/Add' */
  real_T Gain_j;                       /* '<S101>/Gain' */
  real_T MinMax1_i;                    /* '<S197>/MinMax1' */
  real_T Saturation_n;                 /* '<S197>/Saturation' */
  real_T Divide_a;                     /* '<S197>/Divide' */
  real_T Product2_o;                   /* '<S197>/Product2' */
  real_T Subtract1_e;                  /* '<S197>/Subtract1' */
  real_T Unit_Delay2_g;                /* '<S197>/Unit_Delay2' */
  real_T Product1_o;                   /* '<S197>/Product1' */
  real_T Add1_n1;                      /* '<S197>/Add1' */
  real_T TSamp;                        /* '<S196>/TSamp' */
  real_T Uk1_b;                        /* '<S196>/UD' */
  real_T Diff;                         /* '<S196>/Diff' */
  real_T BrakingPID_Y_percent;         /* '<S77>/MinMax' */
  real_T BrakingPID_Y_k;               /* '<S77>/Gain' */
  real_T CurveBasedSpeedSetpoint;      /* '<S79>/CurveBasedSpeedSetpoint' */
  real_T uDLookupTable1;               /* '<S80>/1-D Lookup Table1' */
  real_T MinMax1_pr;                   /* '<S318>/MinMax1' */
  real_T Saturation_ns;                /* '<S318>/Saturation' */
  real_T Divide_ox;                    /* '<S318>/Divide' */
  real_T Product2_b;                   /* '<S318>/Product2' */
  real_T Subtract1_ei;                 /* '<S318>/Subtract1' */
  real_T Unit_Delay2_k;                /* '<S318>/Unit_Delay2' */
  real_T Product1_n;                   /* '<S318>/Product1' */
  real_T Add1_k;                       /* '<S318>/Add1' */
  real_T Abs_i;                        /* '<S275>/Abs' */
  real_T Add_p;                        /* '<S275>/Add' */
  real_T Switch_g;                     /* '<S275>/Switch' */
  real_T MinMax1_a;                    /* '<S319>/MinMax1' */
  real_T Saturation_ee;                /* '<S319>/Saturation' */
  real_T Divide_d;                     /* '<S319>/Divide' */
  real_T Product2_f;                   /* '<S319>/Product2' */
  real_T Subtract1_b;                  /* '<S319>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S319>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S319>/Product1' */
  real_T Add1_p;                       /* '<S319>/Add1' */
  real_T Sign;                         /* '<S275>/Sign' */
  real_T Product_cf;                   /* '<S275>/Product' */
  real_T MinMax1_e;                    /* '<S320>/MinMax1' */
  real_T Saturation_o;                 /* '<S320>/Saturation' */
  real_T Divide_j;                     /* '<S320>/Divide' */
  real_T Product2_nk;                  /* '<S320>/Product2' */
  real_T Subtract1_eh;                 /* '<S320>/Subtract1' */
  real_T Unit_Delay2_c;                /* '<S320>/Unit_Delay2' */
  real_T Product1_cc;                  /* '<S320>/Product1' */
  real_T Add1_f;                       /* '<S320>/Add1' */
  real_T Switch1_f;                    /* '<S275>/Switch1' */
  real_T correctedError;               /* '<S275>/corrected Error' */
  real_T Switch_h;                     /* '<S276>/Switch' */
  real_T Switch1_j;                    /* '<S276>/Switch1' */
  real_T SteerCtrlErrRaw;              /* '<S80>/sign' */
  real_T DataTypeConversion1_ev;       /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S279>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_k;         /* '<S80>/Data Type Conversion' */
  real_T SteeringControlPGainSpeedFactor;/* '<S80>/SteeringControlPGainSpeedFactor' */
  real_T SteerCtrlPgain;               /* '<S80>/Product1' */
  real_T Gain_c;                       /* '<S80>/Gain' */
  real_T Product_d;                    /* '<S289>/Product' */
  real_T Divide_ag;                    /* '<S289>/Divide' */
  real_T Product1_hr;                  /* '<S289>/Product1' */
  real_T UnitDelay_m;                  /* '<S288>/Unit Delay' */
  real_T Switch_o;                     /* '<S288>/Switch' */
  real_T Sign1;                        /* '<S291>/Sign1' */
  real_T Switch1_jw;                   /* '<S291>/Switch1' */
  real_T UnitDelay_o;                  /* '<S289>/Unit Delay' */
  real_T Add_px;                       /* '<S289>/Add' */
  real_T Divide1_b;                    /* '<S289>/Divide1' */
  real_T UnitDelay1_e;                 /* '<S289>/Unit Delay1' */
  real_T Add3;                         /* '<S289>/Add3' */
  real_T Add1_m;                       /* '<S289>/Add1' */
  real_T Switch_p;                     /* '<S290>/Switch' */
  real_T Switch2_i;                    /* '<S290>/Switch2' */
  real_T previewSteeringAngle_b;       /* '<S80>/Bus Selector2' */
  real_T rad2deg1;                     /* '<S80>/rad2deg1' */
  real_T Add2;                         /* '<S80>/Add2' */
  real_T uDLookupTable_a;              /* '<S277>/1-D Lookup Table' */
  real_T AdjustedStanleyGain;          /* '<S277>/AdjustedStanleyGain' */
  real_T Step;                         /* '<S272>/Step' */
  real_T TmpRTBAtsignCurveOffsetInport1;/* '<S80>/From26' */
  real_T signCurveOffset;              /* '<S80>/signCurveOffset' */
  real_T Conversion_b;                 /* '<S284>/Conversion' */
  real_T mm2m;                         /* '<S80>/mm2m' */
  real_T Switch3;                      /* '<S80>/Switch3' */
  real_T sign3;                        /* '<S80>/sign3' */
  real_T crossTrackError;              /* '<S80>/crossTrackError' */
  real_T Product_p;                    /* '<S277>/Product' */
  real_T Saturation_a;                 /* '<S277>/Saturation' */
  real_T kph2mps_;                     /* '<S277>/kph2mps_' */
  real_T TrigonometricFunction_p;      /* '<S277>/Trigonometric Function' */
  real_T deg2rad1;                     /* '<S80>/deg2rad1' */
  real_T TmpRTBAtAdd2Inport2;          /* '<S277>/desPathHeading_rad' */
  real_T Add2_g;                       /* '<S277>/Add2' */
  real_T desHeadingWeight;             /* '<S277>/desHeadingWeight' */
  real_T Add1_h;                       /* '<S277>/Add1' */
  real_T DataTypeConversion_l;         /* '<S301>/Data Type Conversion' */
  real_T SaturationSpeedLookup;        /* '<S301>/Saturation Speed Lookup' */
  real_T sampletime;                   /* '<S312>/sample time' */
  real_T deltariselimit;               /* '<S312>/delta rise limit' */
  real_T sampletime_c;                 /* '<S299>/sample time' */
  real_T deltariselimit_c;             /* '<S299>/delta rise limit' */
  real_T Yk1;                          /* '<S299>/Delay Input2' */
  real_T UkYk1;                        /* '<S299>/Difference Inputs1' */
  real_T deltafalllimit;               /* '<S299>/delta fall limit' */
  real_T Switch_i;                     /* '<S308>/Switch' */
  real_T Switch2_f;                    /* '<S308>/Switch2' */
  real_T DifferenceInputs2;            /* '<S299>/Difference Inputs2' */
  real_T ProportionalGain;             /* '<S298>/Proportional Gain' */
  real_T Integrator;                   /* '<S298>/Integrator' */
  real_T DerivativeGain;               /* '<S298>/Derivative Gain' */
  real_T Filter;                       /* '<S298>/Filter' */
  real_T SumD;                         /* '<S298>/SumD' */
  real_T FilterCoefficient;            /* '<S298>/Filter Coefficient' */
  real_T Sum_c;                        /* '<S298>/Sum' */
  real_T Saturate;                     /* '<S298>/Saturate' */
  real_T Uk1_m;                        /* '<S302>/Delay Input' */
  real_T ZeroUk1;                      /* '<S302>/GainZero' */
  real_T Yk1_p;                        /* '<S302>/Delay Output' */
  real_T PoleYk1;                      /* '<S302>/GainPole' */
  real_T PoleYk1UkZeroUk1;             /* '<S302>/Sum' */
  real_T Downcast;                     /* '<S302>/Downcast' */
  real_T Subtract_c;                   /* '<S274>/Subtract' */
  real_T uDLookupTable_j;              /* '<S274>/1-D Lookup Table' */
  real_T deg2rad;                      /* '<S274>/deg2rad' */
  real_T invert;                       /* '<S274>/invert' */
  real_T PGain;                        /* '<S274>/PGain' */
  real_T sampletime_a;                 /* '<S300>/sample time' */
  real_T deltariselimit_o;             /* '<S300>/delta rise limit' */
  real_T RateFeedbackGain;             /* '<S274>/RateFeedbackGain' */
  real_T FeedforwardGain;              /* '<S274>/FeedforwardGain' */
  real_T UndersteerCorrection;         /* '<S274>/UndersteerCorrection' */
  real_T Sum2;                         /* '<S274>/Sum2' */
  real_T Yk1_o;                        /* '<S300>/Delay Input2' */
  real_T UkYk1_n;                      /* '<S300>/Difference Inputs1' */
  real_T deltafalllimit_o;             /* '<S300>/delta fall limit' */
  real_T Switch_e;                     /* '<S309>/Switch' */
  real_T Switch2_e;                    /* '<S309>/Switch2' */
  real_T DifferenceInputs2_a;          /* '<S300>/Difference Inputs2' */
  real_T Sum3;                         /* '<S274>/Sum3' */
  real_T DiscreteTimeIntegrator;       /* '<S292>/Discrete-Time Integrator' */
  real_T Sum4;                         /* '<S274>/Sum4' */
  real_T Yk1_pm;                       /* '<S312>/Delay Input2' */
  real_T UkYk1_f;                      /* '<S312>/Difference Inputs1' */
  real_T RateLimitLower;               /* '<S301>/Gain3' */
  real_T deltafalllimit_n;             /* '<S312>/delta fall limit' */
  real_T Switch_f;                     /* '<S314>/Switch' */
  real_T Switch2_fa;                   /* '<S314>/Switch2' */
  real_T DifferenceInputs2_m;          /* '<S312>/Difference Inputs2' */
  real_T Gain1_f;                      /* '<S301>/Gain1' */
  real_T Switch_hx;                    /* '<S313>/Switch' */
  real_T Switch2_k;                    /* '<S313>/Switch2' */
  real_T DataTypeConversion6_p;        /* '<S80>/Data Type Conversion6' */
  real_T rad2deg;                      /* '<S80>/rad2deg' */
  real_T MultiportSwitch1;             /* '<S80>/Multiport Switch1' */
  real_T uD_Lookup_Table_a;            /* '<S270>/1D_Lookup_Table' */
  real_T numLanePoints_j;              /* '<S80>/Data Type Conversion4' */
  real_T DiscreteTimeIntegrator_h;     /* '<S80>/Discrete-Time Integrator' */
  real_T Switch_k;                     /* '<S289>/Switch' */
  real_T Gain_o;                       /* '<S292>/Gain' */
  real_T IntegralGain;                 /* '<S298>/Integral Gain' */
  real_T Abs_ig;                       /* '<S301>/Abs' */
  real_T Abs1_ft;                      /* '<S301>/Abs1' */
  real_T Subtract_og;                  /* '<S301>/Subtract' */
  real_T Abs2_k;                       /* '<S301>/Abs2' */
  real_T RateCurvature;                /* '<S301>/Curvature Lookup Table' */
  real_T RateError;                    /* '<S301>/Error Lookup Table' */
  real_T Max;                          /* '<S301>/Max' */
  real_T RateSpeed;                    /* '<S301>/Speed Lookup Table' */
  real_T Min;                          /* '<S301>/Min' */
  real_T RateLimitUpper;               /* '<S301>/Limit Rate Limiter' */
  real_T Subtract_c1;                  /* '<S80>/Subtract' */
  real_T Switch1_p;                    /* '<S80>/Switch1' */
  real_T UnitDelay_p;                  /* '<S80>/Unit Delay' */
  real_T Switch2_i1;                   /* '<S80>/Switch2' */
  real_T Xnew;                         /* '<S362>/Reset' */
  real_T Xold_d;                       /* '<S364>/FixPt Unit Delay1' */
  real_T Init_o;                       /* '<S364>/Init' */
  real_T Xold_m;                       /* '<S365>/FixPt Unit Delay1' */
  real_T Init_lg;                      /* '<S365>/Init' */
  real_T MultiportSwitch_i;            /* '<S363>/Multiport Switch' */
  real_T DigitalClock_d;               /* '<S359>/Digital Clock' */
  real_T Unit_Delay_pa;                /* '<S359>/Unit_Delay' */
  real_T Subtract_k;                   /* '<S359>/Subtract' */
  real_T Product1_am;                  /* '<S358>/Product1' */
  real_T Add_db;                       /* '<S358>/Add' */
  real_T Xnew_f;                       /* '<S365>/Reset' */
  real_T Xnew_h;                       /* '<S364>/Reset' */
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
  real_T TimeVectorRaw[6];             /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T PositionVectorRaw[6];         /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityVectorRaw[6];         /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationVectorRaw[6];     /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T JerkVectorRaw[6];             /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T TimeVector[33];               /* '<S335>/TwentyPointVectorCalculation' */
  real_T PositionVector[33];           /* '<S335>/TwentyPointVectorCalculation' */
  real_T VelocityVector[33];           /* '<S335>/TwentyPointVectorCalculation' */
  real_T AccelerationVector[33];       /* '<S335>/TwentyPointVectorCalculation' */
  real_T JerkVector[33];               /* '<S335>/TwentyPointVectorCalculation' */
  real_T Add_py;                       /* '<S363>/Add' */
  real_T u_trapezoidal;                /* '<S363>/Gain' */
  real_T Xold_gn;                      /* '<S331>/FixPt Unit Delay1' */
  real_T Init_j;                       /* '<S331>/Init' */
  real_T Abs_a;                        /* '<S328>/Abs' */
  real_T Product1_i3;                  /* '<S328>/Product1' */
  real_T Add1_b0;                      /* '<S328>/Add1' */
  real_T MinMax2_l;                    /* '<S328>/MinMax2' */
  real_T Abs1_e;                       /* '<S328>/Abs1' */
  real_T Product2_k;                   /* '<S328>/Product2' */
  real_T Subtract1_g;                  /* '<S328>/Subtract1' */
  real_T MinMax1_k;                    /* '<S328>/MinMax1' */
  real_T Subtract_ij;                  /* '<S325>/Subtract' */
  real_T Abs_eu;                       /* '<S325>/Abs' */
  real_T Switch1_m;                    /* '<S288>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_o;        /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S80>/Data Type Conversion3' */
  real_T Product3;                     /* '<S80>/Product3' */
  real_T deg2rad_d;                    /* '<S80>/deg2rad' */
  real_T Product2_my;                  /* '<S80>/Product2' */
  real_T DataTypeConversion9_h;        /* '<S213>/Data Type Conversion9' */
  real_T DataTypeConversion1_iq;       /* '<S213>/Data Type Conversion1' */
  real_T Add_di;                       /* '<S213>/Add' */
  real_T DataTypeConversion2_id;       /* '<S213>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S213>/Data Type Conversion3' */
  real_T DataTypeConversion5_i;        /* '<S217>/Data Type Conversion5' */
  real_T Coeff_of_drag_Cd;             /* '<S224>/1-D Lookup Table' */
  real_T KPH_TO_MS;                    /* '<S224>/KPH_TO_M//S' */
  real_T MathFunction;                 /* '<S224>/Math Function' */
  real_T DataTypeConversion_i;         /* '<S217>/Data Type Conversion' */
  real_T KPA_TO_PA;                    /* '<S224>/KPA_TO_PA' */
  real_T DataTypeConversion4_bw;       /* '<S217>/Data Type Conversion4' */
  real_T Add_o;                        /* '<S224>/Add' */
  real_T Product_n;                    /* '<S224>/Product' */
  real_T Air_density_kgm3;             /* '<S224>/Divide' */
  real_T Aerodynamic_resistance_Ra;    /* '<S224>/Product1' */
  real_T DataTypeConversion6_f;        /* '<S217>/Data Type Conversion6' */
  real_T grade_angle_radians;          /* '<S225>/Divide' */
  real_T TrigonometricFunction_a;      /* '<S225>/Trigonometric Function' */
  real_T Gradient_resistance_Rg;       /* '<S225>/Product1' */
  real_T KPA_TO_MS;                    /* '<S228>/KPA_TO_M//S' */
  real_T Divide2_c;                    /* '<S228>/Divide2' */
  real_T MathFunction_l;               /* '<S228>/Math Function' */
  real_T Add_nj;                       /* '<S228>/Add' */
  real_T KPA_TO_BAR;                   /* '<S228>/KPA_TO_BAR' */
  real_T Divide_kj;                    /* '<S228>/Divide' */
  real_T Coeff_of_rolling_resistance_Cr;/* '<S228>/Add1' */
  real_T grade_angle_radians_a;        /* '<S226>/Divide1' */
  real_T TrigonometricFunction_e;      /* '<S226>/Trigonometric Function' */
  real_T Rolling_resistance_Rr;        /* '<S226>/Product2' */
  real_T TotalTractiveForce_N;         /* '<S222>/Add' */
  real_T Saturation_g;                 /* '<S217>/Saturation' */
  real_T DataTypeConversion1_be;       /* '<S217>/Data Type Conversion1' */
  real_T RoadLoadTorque_fract;         /* '<S217>/Divide' */
  real_T RoadLoadTorque_pct;           /* '<S217>/Gain' */
  real_T FeedForwardTorque_pct;        /* '<S213>/Add1' */
  real_T Subtract_f;                   /* '<S214>/Subtract' */
  real_T uD_Lookup_Table_am;           /* '<S235>/2D_Lookup_Table' */
  real_T uD_Lookup_Table_o;            /* '<S236>/2D_Lookup_Table' */
  real_T uD_Lookup_Table_h;            /* '<S237>/2D_Lookup_Table' */
  real_T Abs_igm;                      /* '<S238>/Abs' */
  real_T Abs1_a;                       /* '<S238>/Abs1' */
  real_T Xold_a;                       /* '<S266>/FixPt Unit Delay1' */
  real_T Init_pu;                      /* '<S266>/Init' */
  real_T Abs_n;                        /* '<S262>/Abs' */
  real_T Product1_g;                   /* '<S262>/Product1' */
  real_T Add1_g;                       /* '<S262>/Add1' */
  real_T MinMax2_n;                    /* '<S262>/MinMax2' */
  real_T Abs1_d;                       /* '<S262>/Abs1' */
  real_T Product2_bn;                  /* '<S262>/Product2' */
  real_T Subtract1_o;                  /* '<S262>/Subtract1' */
  real_T MinMax1_g;                    /* '<S262>/MinMax1' */
  real_T Subtract_jb;                  /* '<S239>/Subtract' */
  real_T MinMax1_d;                    /* '<S261>/MinMax1' */
  real_T Saturation_d;                 /* '<S261>/Saturation' */
  real_T Divide_n;                     /* '<S261>/Divide' */
  real_T Product2_l;                   /* '<S261>/Product2' */
  real_T Subtract1_k;                  /* '<S261>/Subtract1' */
  real_T Unit_Delay2_o;                /* '<S261>/Unit_Delay2' */
  real_T Product1_p;                   /* '<S261>/Product1' */
  real_T Add1_i;                       /* '<S261>/Add1' */
  real_T Product_i;                    /* '<S244>/Product' */
  real_T Unit_Delay_m;                 /* '<S216>/Unit_Delay' */
  real_T Add_ds;                       /* '<S240>/Add' */
  real_T PID_d_term_c;                 /* '<S206>/Generic_PID_Governor_3' */
  real_T PID_i_term_c;                 /* '<S206>/Generic_PID_Governor_3' */
  real_T road_load_tq;                 /* '<S217>/F_wheel_to_Tq_eng' */
  real_T TmpSignalConversionAtSFunctionI[4];/* '<S205>/Relay_control_state_machine' */
  real_T TmpSignalConversionAtSFunctio_k[4];/* '<S205>/Relay_control_state_machine' */
  real_T KPH_TO_MPH;                   /* '<S204>/KPH_TO_MPH' */
  real_T MinMax_dl;                    /* '<S204>/MinMax' */
  real_T Divide_p;                     /* '<S204>/Divide' */
  real_T MinMax1_nv;                   /* '<S204>/MinMax1' */
  real_T DataTypeConversion3_m;        /* '<S79>/Data Type Conversion3' */
  real_T ThrottlePID_Y_c;              /* '<S79>/Product' */
  real_T Unit_Delay_dl;                /* '<S178>/Unit_Delay' */
  real_T Xold_e;                       /* '<S192>/FixPt Unit Delay1' */
  real_T Init_br;                      /* '<S192>/Init' */
  real_T Abs_g;                        /* '<S188>/Abs' */
  real_T DigitalClock_e;               /* '<S189>/Digital Clock' */
  real_T Unit_Delay_nxw;               /* '<S189>/Unit_Delay' */
  real_T Subtract_aw;                  /* '<S189>/Subtract' */
  real_T Product1_nu;                  /* '<S188>/Product1' */
  real_T Add1_fn;                      /* '<S188>/Add1' */
  real_T MinMax2_gw;                   /* '<S188>/MinMax2' */
  real_T Abs1_k;                       /* '<S188>/Abs1' */
  real_T Product2_cb;                  /* '<S188>/Product2' */
  real_T Subtract1_kw;                 /* '<S188>/Subtract1' */
  real_T MinMax1_o;                    /* '<S188>/MinMax1' */
  real_T Unit_Delay_ak;                /* '<S177>/Unit_Delay' */
  real_T Xold_b;                       /* '<S185>/FixPt Unit Delay1' */
  real_T Init_k;                       /* '<S185>/Init' */
  real_T Abs_b;                        /* '<S181>/Abs' */
  real_T DigitalClock_c;               /* '<S182>/Digital Clock' */
  real_T Unit_Delay_ka;                /* '<S182>/Unit_Delay' */
  real_T Subtract_ko;                  /* '<S182>/Subtract' */
  real_T Product1_f;                   /* '<S181>/Product1' */
  real_T Add1_cj;                      /* '<S181>/Add1' */
  real_T MinMax2_c2;                   /* '<S181>/MinMax2' */
  real_T Abs1_ar;                      /* '<S181>/Abs1' */
  real_T Product2_c3;                  /* '<S181>/Product2' */
  real_T Subtract1_ev;                 /* '<S181>/Subtract1' */
  real_T MinMax1_jw;                   /* '<S181>/MinMax1' */
  real_T uD_Lookup_Table_f;            /* '<S141>/1D_Lookup_Table' */
  real_T uD_Lookup_Table_p;            /* '<S142>/1D_Lookup_Table' */
  real_T uD_Lookup_Table_o5;           /* '<S143>/1D_Lookup_Table' */
  real_T Abs_k;                        /* '<S144>/Abs' */
  real_T Abs1_eg;                      /* '<S144>/Abs1' */
  real_T DigitalClock_n;               /* '<S140>/Digital Clock' */
  real_T Unit_Delay_ko;                /* '<S140>/Unit_Delay' */
  real_T Subtract_ac;                  /* '<S140>/Subtract' */
  real_T Xold_cj;                      /* '<S172>/FixPt Unit Delay1' */
  real_T Init_cy;                      /* '<S172>/Init' */
  real_T Abs_o;                        /* '<S168>/Abs' */
  real_T Product1_hy;                  /* '<S168>/Product1' */
  real_T Add1_o;                       /* '<S168>/Add1' */
  real_T MinMax2_p;                    /* '<S168>/MinMax2' */
  real_T Abs1_g;                       /* '<S168>/Abs1' */
  real_T Product2_fh;                  /* '<S168>/Product2' */
  real_T Subtract1_f;                  /* '<S168>/Subtract1' */
  real_T MinMax1_hl;                   /* '<S168>/MinMax1' */
  real_T Subtract_jh;                  /* '<S145>/Subtract' */
  real_T MinMax1_jg;                   /* '<S167>/MinMax1' */
  real_T Saturation_m;                 /* '<S167>/Saturation' */
  real_T Divide_af;                    /* '<S167>/Divide' */
  real_T Product2_ce;                  /* '<S167>/Product2' */
  real_T Subtract1_cr;                 /* '<S167>/Subtract1' */
  real_T Unit_Delay2_a;                /* '<S167>/Unit_Delay2' */
  real_T Product1_ch;                  /* '<S167>/Product1' */
  real_T Add1_hl;                      /* '<S167>/Add1' */
  real_T Product_f;                    /* '<S150>/Product' */
  real_T Unit_Delay_fg;                /* '<S139>/Unit_Delay' */
  real_T Add_mh;                       /* '<S146>/Add' */
  real_T Add_my;                       /* '<S96>/Add' */
  real_T Gain_i;                       /* '<S96>/Gain' */
  real_T Abs_k4;                       /* '<S106>/Abs' */
  real_T Abs1_ap;                      /* '<S106>/Abs1' */
  real_T DigitalClock_j;               /* '<S105>/Digital Clock' */
  real_T Unit_Delay_j;                 /* '<S105>/Unit_Delay' */
  real_T Subtract_jr;                  /* '<S105>/Subtract' */
  real_T Xold_g3;                      /* '<S134>/FixPt Unit Delay1' */
  real_T Init_hw;                      /* '<S134>/Init' */
  real_T Abs_l;                        /* '<S130>/Abs' */
  real_T Product1_b;                   /* '<S130>/Product1' */
  real_T Add1_hu;                      /* '<S130>/Add1' */
  real_T MinMax2_b;                    /* '<S130>/MinMax2' */
  real_T Abs1_d1;                      /* '<S130>/Abs1' */
  real_T Product2_d;                   /* '<S130>/Product2' */
  real_T Subtract1_a;                  /* '<S130>/Subtract1' */
  real_T MinMax1_ps;                   /* '<S130>/MinMax1' */
  real_T Subtract_n;                   /* '<S107>/Subtract' */
  real_T MinMax1_h1;                   /* '<S129>/MinMax1' */
  real_T Saturation_p;                 /* '<S129>/Saturation' */
  real_T Divide_l;                     /* '<S129>/Divide' */
  real_T Product2_kj;                  /* '<S129>/Product2' */
  real_T Subtract1_p;                  /* '<S129>/Subtract1' */
  real_T Unit_Delay2_d;                /* '<S129>/Unit_Delay2' */
  real_T Product1_c3;                  /* '<S129>/Product1' */
  real_T Add1_i1;                      /* '<S129>/Add1' */
  real_T Product_iq;                   /* '<S112>/Product' */
  real_T Unit_Delay_ja;                /* '<S104>/Unit_Delay' */
  real_T Add_e;                        /* '<S108>/Add' */
  real_T MinMax_p;                     /* '<S83>/MinMax' */
  RTMapsTX BusCreator;                 /* '<S389>/Bus Creator' */
  uint32_T Encoder_o2;                 /* '<S397>/Encoder' */
  uint32_T TCPIP_Com_o1[3];            /* '<S391>/TCPIP_Com' */
  uint32_T TCPIP_Com_o2;               /* '<S391>/TCPIP_Com' */
  uint32_T DataTypeConversion_f;       /* '<S388>/Data Type Conversion' */
  uint32_T SFunction1_o1_kx;           /* '<S28>/S-Function1' */
  uint32_T SFunction1_o1_g3;           /* '<S20>/S-Function1' */
  uint32_T SFunction1_o1_ar;           /* '<S21>/S-Function1' */
  uint32_T SFunction1_o1_h4;           /* '<S18>/S-Function1' */
  uint32_T SFunction1_o1_ma;           /* '<S19>/S-Function1' */
  uint32_T SFunction1_o1_og;           /* '<S17>/S-Function1' */
  uint32_T Reshape[8];                 /* '<S1019>/Reshape' */
  uint32_T UnitDelay_a;                /* '<S1020>/Unit Delay' */
  uint32_T Switch1_pz;                 /* '<S1023>/Switch1' */
  uint32_T Selector;                   /* '<S1019>/Selector' */
  uint32_T DataTypeConversion_o;       /* '<S1011>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1016>/Operator' */
  uint32_T Operator_h;                 /* '<S1017>/Operator' */
  uint32_T Operator_c;                 /* '<S1018>/Operator' */
  uint32_T DataType_gs;                /* '<S1018>/DataType' */
  uint32_T Shift_Arithmetic1_g;        /* '<S1011>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1019>/Width' */
  uint32_T Switch1_h;                  /* '<S1022>/Switch1' */
  uint32_T Subtract_jrg;               /* '<S1020>/Subtract' */
  uint32_T UnitDelay_pj;               /* '<S1005>/Unit Delay' */
  uint32_T Switch1_jn;                 /* '<S1008>/Switch1' */
  uint32_T DataTypeConversion6_h;      /* '<S1000>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S1000>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_c;      /* '<S1000>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S1000>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_m;      /* '<S1000>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S1000>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_e;      /* '<S1000>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S1000>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_a;     /* '<S1000>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S1000>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_d;     /* '<S1000>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S1000>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_e;      /* '<S1001>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S1001>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S1001>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_c;        /* '<S1001>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S1001>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_k;        /* '<S1001>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S1001>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_g;        /* '<S1001>/Shift_Arithmetic 5' */
  uint32_T Width_d;                    /* '<S1004>/Width' */
  uint32_T Switch1_d;                  /* '<S1007>/Switch1' */
  uint32_T Subtract_e;                 /* '<S1005>/Subtract' */
  uint32_T DataTypeConversion2_n;      /* '<S946>/Data Type Conversion2' */
  uint32_T Operator_f;                 /* '<S951>/Operator' */
  uint32_T Operator_k;                 /* '<S952>/Operator' */
  uint32_T Operator_o;                 /* '<S953>/Operator' */
  uint32_T DataType_fl;                /* '<S953>/DataType' */
  uint32_T Shift_Arithmetic1_mb;       /* '<S946>/Shift_Arithmetic 1' */
  uint32_T Operator_j;                 /* '<S954>/Operator' */
  uint32_T DataType_hc;                /* '<S954>/DataType' */
  uint32_T Shift_Arithmetic2_im;       /* '<S946>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_g;                /* '<S977>/Unit Delay' */
  uint32_T Switch1_fr;                 /* '<S980>/Switch1' */
  uint32_T DataTypeConversion_jk;      /* '<S945>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_h;         /* '<S945>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_mb;     /* '<S945>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_b;        /* '<S945>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_bw;     /* '<S945>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_g0;       /* '<S945>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_f;      /* '<S945>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_i;        /* '<S945>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_j;      /* '<S945>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_o;        /* '<S945>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_d;      /* '<S945>/Data Type Conversion5' */
  uint32_T Operator_n;                 /* '<S950>/Operator' */
  uint32_T DataType_i;                 /* '<S950>/DataType' */
  uint32_T DataTypeConversion3_as;     /* '<S946>/Data Type Conversion3' */
  uint32_T Operator_g;                 /* '<S955>/Operator' */
  uint32_T Operator_m;                 /* '<S956>/Operator' */
  uint32_T Operator_cn;                /* '<S957>/Operator' */
  uint32_T DataType_gn;                /* '<S957>/DataType' */
  uint32_T Shift_Arithmetic4_a;        /* '<S946>/Shift_Arithmetic 4' */
  uint32_T Operator_l;                 /* '<S958>/Operator' */
  uint32_T DataType_hx0;               /* '<S958>/DataType' */
  uint32_T Shift_Arithmetic5_p;        /* '<S946>/Shift_Arithmetic 5' */
  uint32_T Width_p;                    /* '<S976>/Width' */
  uint32_T Switch1_e;                  /* '<S979>/Switch1' */
  uint32_T Subtract_na;                /* '<S977>/Subtract' */
  uint32_T DataTypeConversion_jj;      /* '<S895>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_bo;        /* '<S895>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_nm;     /* '<S895>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_h;        /* '<S895>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_f;      /* '<S895>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_m;        /* '<S895>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_d;      /* '<S895>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_p3;       /* '<S895>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_n;      /* '<S895>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_n;        /* '<S895>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_l;      /* '<S895>/Data Type Conversion5' */
  uint32_T Operator_e;                 /* '<S905>/Operator' */
  uint32_T DataType_js;                /* '<S905>/DataType' */
  uint32_T DataTypeConversion8_c;      /* '<S894>/Data Type Conversion8' */
  uint32_T Operator_mv;                /* '<S901>/Operator' */
  uint32_T Operator_gt;                /* '<S902>/Operator' */
  uint32_T Operator_nr;                /* '<S903>/Operator' */
  uint32_T DataType_eq;                /* '<S903>/DataType' */
  uint32_T Shift_Arithmetic4_c;        /* '<S894>/Shift_Arithmetic 4' */
  uint32_T Operator_i;                 /* '<S904>/Operator' */
  uint32_T DataType_ge;                /* '<S904>/DataType' */
  uint32_T Shift_Arithmetic5_k;        /* '<S894>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_a;       /* '<S717>/Data Type Conversion' */
  uint32_T DataTypeConversion1_hy;     /* '<S717>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_om;     /* '<S717>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S717>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S717>/Shift Arithmetic2' */
  uint32_T Operator_a;                 /* '<S719>/Operator' */
  uint32_T DataType_ja;                /* '<S719>/DataType' */
  uint32_T DataTypeConversion_mg;      /* '<S709>/Data Type Conversion' */
  uint32_T DataTypeConversion1_oz;     /* '<S709>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_nv;     /* '<S709>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_a;         /* '<S709>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_h;         /* '<S709>/Shift Arithmetic2' */
  uint32_T Operator_p;                 /* '<S711>/Operator' */
  uint32_T DataType_d4;                /* '<S711>/DataType' */
  uint32_T DataTypeConversion_of;      /* '<S703>/Data Type Conversion' */
  uint32_T DataTypeConversion1_l;      /* '<S703>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_ax;     /* '<S703>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_o;         /* '<S703>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_i;         /* '<S703>/Shift Arithmetic2' */
  uint32_T Operator_h1;                /* '<S704>/Operator' */
  uint32_T DataType_iy;                /* '<S704>/DataType' */
  uint32_T DataTypeConversion_ob;      /* '<S698>/Data Type Conversion' */
  uint32_T DataTypeConversion1_c;      /* '<S698>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_d;      /* '<S698>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_m;         /* '<S698>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_o;         /* '<S698>/Shift Arithmetic2' */
  uint32_T Operator_hk;                /* '<S699>/Operator' */
  uint32_T DataType_l;                 /* '<S699>/DataType' */
  uint32_T DataTypeConversion_li;      /* '<S691>/Data Type Conversion' */
  uint32_T DataTypeConversion1_fc;     /* '<S691>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_a4;     /* '<S691>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_j;         /* '<S691>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_b;         /* '<S691>/Shift Arithmetic2' */
  uint32_T Operator_l4;                /* '<S693>/Operator' */
  uint32_T DataType_ae;                /* '<S693>/DataType' */
  uint32_T UnitDelay_av;               /* '<S61>/Unit Delay' */
  uint32_T Switch1_ht;                 /* '<S64>/Switch1' */
  uint32_T Switch1_b;                  /* '<S63>/Switch1' */
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
  uint32_T Switch1_frj;                /* '<S45>/Switch1' */
  uint32_T Subtract_h;                 /* '<S43>/Subtract' */
  uint32_T UnitDelay_b;                /* '<S37>/Unit Delay' */
  uint32_T Switch1_i;                  /* '<S40>/Switch1' */
  uint32_T Switch1_hm;                 /* '<S39>/Switch1' */
  uint32_T Subtract_nc;                /* '<S37>/Subtract' */
  uint32_T UnitDelay_f;                /* '<S31>/Unit Delay' */
  uint32_T Switch1_o;                  /* '<S34>/Switch1' */
  uint32_T Switch1_a;                  /* '<S33>/Switch1' */
  uint32_T Subtract_ot;                /* '<S31>/Subtract' */
  real32_T PropB_REAX_3_HandwheelTorque;/* '<S658>/Product' */
  real32_T PropB_REAX_3_HandwheelVelocity;/* '<S659>/Product1' */
  real32_T PropB_REAX_3_PullCompensation;/* '<S660>/Product2' */
  real32_T Subtract_ia;                /* '<S641>/Subtract' */
  real32_T Subtract_d;                 /* '<S513>/Subtract' */
  real32_T DataTypeConversion2_lf;     /* '<S79>/Data Type Conversion2' */
  real32_T Divide_nn;                  /* '<S278>/Divide' */
  real32_T UnitDelay_fm;               /* '<S278>/Unit Delay' */
  real32_T Switch1_fi;                 /* '<S282>/Switch1' */
  real32_T Divide_d0;                  /* '<S283>/Divide' */
  real32_T UnitDelay_lj;               /* '<S283>/Unit Delay' */
  real32_T Switch1_pb;                 /* '<S287>/Switch1' */
  real32_T DataTypeConversion1_g;      /* '<S283>/Data Type Conversion1' */
  real32_T Switch1_aq;                 /* '<S285>/Switch1' */
  real32_T DataTypeConversion_mv;      /* '<S283>/Data Type Conversion' */
  real32_T Add3_p;                     /* '<S283>/Add3' */
  real32_T Product1_ce;                /* '<S283>/Product1' */
  real32_T Add_a;                      /* '<S283>/Add' */
  real32_T DataTypeConversion1_b1;     /* '<S278>/Data Type Conversion1' */
  real32_T Switch1_cw;                 /* '<S280>/Switch1' */
  real32_T DataTypeConversion_ps;      /* '<S278>/Data Type Conversion' */
  real32_T Add3_j;                     /* '<S278>/Add3' */
  real32_T Product1_n2;                /* '<S278>/Product1' */
  real32_T Add_f;                      /* '<S278>/Add' */
  int32_T Decoder_o2;                  /* '<S394>/Decoder' */
  int32_T Merge;                       /* '<S947>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S600>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_m;/* '<S436>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S600>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_g;/* '<S436>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_e;/* '<S598>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_j;/* '<S599>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_m;/* '<S598>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_b;/* '<S599>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S618>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_l;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S618>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_k;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S985>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lr; /* '<S98>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_lu;/* '<S98>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S733>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S733>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S203>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l5;/* '<S203>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_eg;      /* '<S522>/Data Type Conversion' */
  uint16_T DataTypeConversion1_hg;     /* '<S522>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S522>/Shift Arithmetic' */
  uint16_T Operator_gg;                /* '<S547>/Operator' */
  uint16_T DataType_cw;                /* '<S547>/DataType' */
  uint16_T DataTypeConversion_kr;      /* '<S516>/Data Type Conversion' */
  uint16_T DataTypeConversion1_d3;     /* '<S516>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_k;          /* '<S516>/Shift Arithmetic' */
  uint16_T Operator_b;                 /* '<S543>/Operator' */
  uint16_T DataType_dn;                /* '<S543>/DataType' */
  uint16_T DataTypeConversion_aq;      /* '<S520>/Data Type Conversion' */
  uint16_T DataTypeConversion1_j4;     /* '<S520>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_e;          /* '<S520>/Shift Arithmetic' */
  uint16_T Operator_hb;                /* '<S545>/Operator' */
  uint16_T DataType_la;                /* '<S545>/DataType' */
  uint16_T DataTypeConversion1_d33;    /* '<S521>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_o;      /* '<S521>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_a;          /* '<S521>/Shift Arithmetic' */
  uint16_T Operator_im;                /* '<S546>/Operator' */
  uint16_T DataType_az;                /* '<S546>/DataType' */
  uint16_T DataTypeConversion1_p;      /* '<S524>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_k;      /* '<S524>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_m;          /* '<S524>/Shift Arithmetic' */
  uint16_T Operator_pm;                /* '<S548>/Operator' */
  uint16_T DataType_ll;                /* '<S548>/DataType' */
  uint16_T DataTypeConversion1_np;     /* '<S530>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_g;      /* '<S530>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_ez;         /* '<S530>/Shift Arithmetic' */
  uint16_T Operator_kb;                /* '<S549>/Operator' */
  uint16_T DataType_o;                 /* '<S549>/DataType' */
  uint16_T DataTypeConversion_ps4;     /* '<S538>/Data Type Conversion' */
  uint16_T DataTypeConversion1_du;     /* '<S538>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_c;          /* '<S538>/Shift Arithmetic' */
  uint16_T Operator_pp;                /* '<S552>/Operator' */
  uint16_T DataType_n;                 /* '<S552>/DataType' */
  uint16_T DataTypeConversion1_id;     /* '<S531>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_c;      /* '<S531>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_b;          /* '<S531>/Shift Arithmetic' */
  uint16_T Operator_bs;                /* '<S550>/Operator' */
  uint16_T DataType_el;                /* '<S550>/DataType' */
  uint16_T DataTypeConversion_b5;      /* '<S532>/Data Type Conversion' */
  uint16_T DataTypeConversion1_fu;     /* '<S532>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_bk;         /* '<S532>/Shift Arithmetic' */
  uint16_T Operator_gu;                /* '<S551>/Operator' */
  uint16_T DataType_fo;                /* '<S551>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S532>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S408>/Data Type Conversion21' */
  uint16_T DataTypeConversion_m0;      /* '<S540>/Data Type Conversion' */
  uint16_T DataTypeConversion1_bq;     /* '<S540>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_h;          /* '<S540>/Shift Arithmetic' */
  uint16_T Operator_ge;                /* '<S553>/Operator' */
  uint16_T DataType_jld;               /* '<S553>/DataType' */
  uint16_T DataTypeConversion_hu;      /* '<S542>/Data Type Conversion' */
  uint16_T DataTypeConversion1_bks;    /* '<S542>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_ew;         /* '<S542>/Shift Arithmetic' */
  uint16_T Operator_ow;                /* '<S554>/Operator' */
  uint16_T DataType_jc;                /* '<S554>/DataType' */
  uint16_T DataTypeConversion_ir;      /* '<S518>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ok;     /* '<S518>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_g;          /* '<S518>/Shift Arithmetic' */
  uint16_T Operator_ea;                /* '<S544>/Operator' */
  uint16_T DataType_e00;               /* '<S544>/DataType' */
  uint16_T DataTypeConversion1_dd;     /* '<S658>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_l2q;    /* '<S658>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_dq;       /* '<S658>/Shift_Arithmetic 1' */
  uint16_T Operator_ol;                /* '<S663>/Operator' */
  uint16_T DataType_ow;                /* '<S663>/DataType' */
  uint16_T DataTypeConversion4_d3;     /* '<S659>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_e;      /* '<S659>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_j;        /* '<S659>/Shift_Arithmetic 2' */
  uint16_T Operator_ak;                /* '<S664>/Operator' */
  uint16_T DataType_cn;                /* '<S664>/DataType' */
  uint16_T DataTypeConversion7_m;      /* '<S660>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_d;      /* '<S660>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_a;        /* '<S660>/Shift_Arithmetic 3' */
  uint16_T Operator_ih;                /* '<S665>/Operator' */
  uint16_T DataType_gq;                /* '<S665>/DataType' */
  uint16_T DataTypeConversion6_k;      /* '<S671>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_op;     /* '<S671>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_ma;       /* '<S671>/Shift_Arithmetic 2' */
  uint16_T Operator_b2;                /* '<S676>/Operator' */
  uint16_T DataType_cq;                /* '<S676>/DataType' */
  uint16_T DataType_l3;                /* '<S1017>/DataType' */
  uint16_T Shift_Arithmetic_p5;        /* '<S1011>/Shift_Arithmetic ' */
  uint16_T DataType_mw;                /* '<S952>/DataType' */
  uint16_T Shift_Arithmetic_k;         /* '<S946>/Shift_Arithmetic ' */
  uint16_T DataType_gz;                /* '<S956>/DataType' */
  uint16_T Shift_Arithmetic3_py;       /* '<S946>/Shift_Arithmetic 3' */
  uint16_T DataType_a2;                /* '<S902>/DataType' */
  uint16_T Shift_Arithmetic3_pw;       /* '<S894>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_ga;     /* '<S855>/Data Type Conversion1' */
  uint16_T Operator_ml;                /* '<S886>/Operator' */
  uint16_T Operator_nl;                /* '<S887>/Operator' */
  uint16_T DataType_ha;                /* '<S887>/DataType' */
  uint16_T Shift_Arithmetic_kp;        /* '<S855>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_kp;      /* '<S714>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ag;     /* '<S714>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_k;         /* '<S714>/Shift Arithmetic2' */
  uint16_T Operator_mu;                /* '<S718>/Operator' */
  uint16_T DataType_bl;                /* '<S718>/DataType' */
  uint16_T DataTypeConversion_ba;      /* '<S707>/Data Type Conversion' */
  uint16_T DataTypeConversion1_gt;     /* '<S707>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_l;         /* '<S707>/Shift Arithmetic2' */
  uint16_T Operator_b24;               /* '<S710>/Operator' */
  uint16_T DataType_p;                 /* '<S710>/DataType' */
  uint16_T DataTypeConversion_pa;      /* '<S689>/Data Type Conversion' */
  uint16_T DataTypeConversion1_aq;     /* '<S689>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_ba;        /* '<S689>/Shift Arithmetic2' */
  uint16_T Operator_am;                /* '<S692>/Operator' */
  uint16_T DataType_kv;                /* '<S692>/DataType' */
  int16_T DataTypeConversion3_ak;      /* '<S658>/Data Type Conversion3' */
  int16_T DataTypeConversion6_i;       /* '<S659>/Data Type Conversion6' */
  int16_T DataTypeConversion9_f;       /* '<S660>/Data Type Conversion9' */
  int16_T DataTypeConversion8_by;      /* '<S671>/Data Type Conversion8' */
  int16_T DataTypeConversion_da;       /* '<S855>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S766>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_k;           /* '<S758>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_c;           /* '<S782>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_a;           /* '<S774>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_cd;          /* '<S802>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_m;           /* '<S801>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_j;           /* '<S790>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_ja;       /* '<S465>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ba;      /* '<S465>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_oo;      /* '<S465>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_b;       /* '<S465>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_kt;      /* '<S465>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_b;       /* '<S465>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_hm;      /* '<S465>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_i;       /* '<S465>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S411>/Multiport_Switch' */
  uint8_T DataTypeConversion_ih[8];    /* '<S459>/Data Type Conversion' */
  uint8_T DataTypeConversion_he;       /* '<S474>/Data Type Conversion' */
  uint8_T DataTypeConversion1_fz;      /* '<S474>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_bd;      /* '<S474>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_l1;      /* '<S474>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_f;       /* '<S474>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_h;       /* '<S474>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_e;       /* '<S474>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h;       /* '<S474>/Data Type Conversion7' */
  uint8_T RawData_e[8];                /* '<S412>/Multiport_Switch' */
  uint8_T DataTypeConversion_nv[8];    /* '<S460>/Data Type Conversion' */
  uint8_T DataTypeConversion_b5q[39];  /* '<S511>/Data Type Conversion' */
  uint8_T DataTypeConversion_lt;       /* '<S639>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ou;      /* '<S639>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ao;      /* '<S639>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_co;      /* '<S639>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_kk;      /* '<S639>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_a;       /* '<S639>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_f4;      /* '<S639>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_d;       /* '<S639>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_o1;      /* '<S639>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_a;       /* '<S639>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_f;      /* '<S639>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_b;      /* '<S639>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S639>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_e;      /* '<S639>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_i;      /* '<S639>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_d;      /* '<S639>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_e;      /* '<S639>/Data Type Conversion16' */
  uint8_T Add_l;                       /* '<S639>/Add' */
  uint8_T DataTypeConversion15_c;      /* '<S618>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_fe;      /* '<S618>/Data Type Conversion4' */
  uint8_T MABX_Mode_f;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[22];              /* '<S397>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S391>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1028>/Vector Concatenate' */
  uint8_T UnitDelay1_p;                /* '<S829>/Unit Delay1' */
  uint8_T MultiportSwitch_j[8];        /* '<S829>/Multiport Switch' */
  uint8_T SupervisorMode_l;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S408>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S408>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S408>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S408>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S408>/Data Type Conversion26' */
  uint8_T DataTypeConversion_jf;       /* '<S600>/Data Type Conversion' */
  uint8_T DataTypeConversion1_mn;      /* '<S600>/Data Type Conversion1' */
  uint8_T Add1_cx;                     /* '<S639>/Add1' */
  uint8_T DataTypeConversion_cq;       /* '<S573>/Data Type Conversion' */
  uint8_T DataTypeConversion1_as;      /* '<S573>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_a2;      /* '<S573>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_pe;      /* '<S573>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_m;       /* '<S573>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_kp;      /* '<S573>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_n;       /* '<S573>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_j;       /* '<S573>/Data Type Conversion7' */
  uint8_T DataTypeConversion_ii;       /* '<S574>/Data Type Conversion' */
  uint8_T DataTypeConversion1_jq;      /* '<S574>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_c;       /* '<S574>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_f1;      /* '<S574>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_km;      /* '<S574>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_d2;      /* '<S574>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ix;      /* '<S574>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_n;       /* '<S574>/Data Type Conversion7' */
  uint8_T RawData_o[8];                /* '<S434>/Multiport_Switch' */
  uint8_T Operator_li;                 /* '<S662>/Operator' */
  uint8_T DataType_iq;                 /* '<S662>/DataType' */
  uint8_T Operator_oo;                 /* '<S661>/Operator' */
  uint8_T DataType_jy;                 /* '<S661>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S656>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_hf;       /* '<S587>/Data Type Conversion' */
  uint8_T DataTypeConversion1_bo;      /* '<S587>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_op;      /* '<S587>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_eo;      /* '<S587>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_my;      /* '<S587>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_hv;      /* '<S587>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_l;       /* '<S587>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_kn;      /* '<S587>/Data Type Conversion7' */
  uint8_T RawData_j[8];                /* '<S435>/Multiport_Switch' */
  uint8_T Operator_kz;                 /* '<S674>/Operator' */
  uint8_T DataType_mmn;                /* '<S674>/DataType' */
  uint8_T Shift_Arithmetic_h0;         /* '<S667>/Shift_Arithmetic ' */
  uint8_T Operator_pw;                 /* '<S673>/Operator' */
  uint8_T Operator_je;                 /* '<S675>/Operator' */
  uint8_T DataType_bq;                 /* '<S675>/DataType' */
  uint8_T Shift_Arithmetic1_gv;        /* '<S667>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S668>/SignalConversion' */
  uint8_T DataTypeConversion3_es;      /* '<S410>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S669>/SignalConversion' */
  uint8_T DataTypeConversion4_jn;      /* '<S410>/Data Type Conversion4' */
  uint8_T State;                       /* '<S829>/Chart' */
  uint8_T TPDT_count;                  /* '<S829>/Chart' */
  uint8_T VectorConcatenate_k[8];      /* '<S1030>/Vector Concatenate' */
  uint8_T VectorConcatenate_f[8];      /* '<S1031>/Vector Concatenate' */
  uint8_T DataType_og;                 /* '<S1016>/DataType' */
  uint8_T DataTypeConversion3_a3;      /* '<S1011>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_am;      /* '<S1011>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_nvl;     /* '<S1011>/Data Type Conversion2' */
  uint8_T DataTypeConversion_fb;       /* '<S981>/Data Type Conversion' */
  uint8_T Operator_em;                 /* '<S986>/Operator' */
  uint8_T DataType_lp;                 /* '<S986>/DataType' */
  uint8_T DataTypeConversion2_e5;      /* '<S1001>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ci;      /* '<S1001>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S1001>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_nn;      /* '<S1001>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S1001>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_kx;         /* '<S1001>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_i;      /* '<S1001>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_nh;      /* '<S1001>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_i;         /* '<S1001>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_l;      /* '<S1001>/Data Type Conversion11' */
  uint8_T Reshape_b[16];               /* '<S1004>/Reshape' */
  uint8_T Selector_o;                  /* '<S1004>/Selector' */
  uint8_T DataTypeConversion10_o;      /* '<S1001>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S1001>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_bv;      /* '<S1001>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_a;       /* '<S1001>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_m;       /* '<S1001>/Data Type Conversion9' */
  uint8_T Add2_e;                      /* '<S1001>/Add2' */
  uint8_T Shift_Arithmetic6_j;         /* '<S1001>/Shift_Arithmetic 6' */
  uint8_T Add3_k;                      /* '<S1001>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S1001>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_e;         /* '<S1001>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S1001>/Bitwise Operator7' */
  uint8_T DataTypeConversion_lv;       /* '<S983>/Data Type Conversion' */
  uint8_T Operator_n0;                 /* '<S997>/Operator' */
  uint8_T Operator_d;                  /* '<S992>/Operator' */
  uint8_T DataType_b3;                 /* '<S992>/DataType' */
  uint8_T Operator_nn;                 /* '<S993>/Operator' */
  uint8_T Operator_l4o;                /* '<S994>/Operator' */
  uint8_T Operator_ca;                 /* '<S995>/Operator' */
  uint8_T Operator_mn;                 /* '<S996>/Operator' */
  uint8_T DataTypeConversion_nh;       /* '<S910>/Data Type Conversion' */
  uint8_T Operator_ad;                 /* '<S918>/Operator' */
  uint8_T Operator_gv;                 /* '<S915>/Operator' */
  uint8_T DataType_hd;                 /* '<S915>/DataType' */
  uint8_T Operator_la;                 /* '<S916>/Operator' */
  uint8_T Operator_mp;                 /* '<S917>/Operator' */
  uint8_T Operator_cw;                 /* '<S919>/Operator' */
  uint8_T Operator_ep;                 /* '<S920>/Operator' */
  uint8_T DataTypeConversion_mr;       /* '<S911>/Data Type Conversion' */
  uint8_T Operator_bd;                 /* '<S926>/Operator' */
  uint8_T Operator_nw;                 /* '<S927>/Operator' */
  uint8_T Operator_el;                 /* '<S923>/Operator' */
  uint8_T DataType_li;                 /* '<S923>/DataType' */
  uint8_T Operator_o0;                 /* '<S924>/Operator' */
  uint8_T Operator_fp;                 /* '<S925>/Operator' */
  uint8_T Operator_bc;                 /* '<S928>/Operator' */
  uint8_T DataTypeConversion_oa;       /* '<S914>/Data Type Conversion' */
  uint8_T Switch_a;                    /* '<S948>/Switch' */
  uint8_T DataTypeConversion_lx;       /* '<S946>/Data Type Conversion' */
  uint8_T DataType_iu;                 /* '<S951>/DataType' */
  uint8_T DataTypeConversion4_ce;      /* '<S946>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_hq;      /* '<S946>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_o;       /* '<S946>/Data Type Conversion6' */
  uint8_T Reshape_bq[16];              /* '<S976>/Reshape' */
  uint8_T Selector_n;                  /* '<S976>/Selector' */
  uint8_T DataTypeConversion1_lj;      /* '<S946>/Data Type Conversion1' */
  uint8_T Operator_n2;                 /* '<S959>/Operator' */
  uint8_T DataType_kk;                 /* '<S959>/DataType' */
  uint8_T DataType_os;                 /* '<S955>/DataType' */
  uint8_T DataTypeConversion8_ci;      /* '<S946>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_o;       /* '<S946>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_c;      /* '<S946>/Data Type Conversion10' */
  uint8_T Add_lw;                      /* '<S946>/Add' */
  uint8_T Shift_Arithmetic6_l;         /* '<S946>/Shift_Arithmetic 6' */
  uint8_T Add1_go;                     /* '<S946>/Add1' */
  uint8_T Operator_bt;                 /* '<S960>/Operator' */
  uint8_T DataType_ka;                 /* '<S960>/DataType' */
  uint8_T Shift_Arithmetic7_c;         /* '<S946>/Shift_Arithmetic 7' */
  uint8_T Operator_gk;                 /* '<S961>/Operator' */
  uint8_T DataType_hi;                 /* '<S961>/DataType' */
  uint8_T DataTypeConversion_nm;       /* '<S913>/Data Type Conversion' */
  uint8_T Operator_oc;                 /* '<S941>/Operator' */
  uint8_T Operator_es;                 /* '<S937>/Operator' */
  uint8_T DataType_m0;                 /* '<S937>/DataType' */
  uint8_T Operator_jv;                 /* '<S938>/Operator' */
  uint8_T Operator_cy;                 /* '<S939>/Operator' */
  uint8_T Operator_l0;                 /* '<S940>/Operator' */
  uint8_T Operator_ij;                 /* '<S942>/Operator' */
  uint8_T DataTypeConversion_jkb;      /* '<S856>/Data Type Conversion' */
  uint8_T Operator_kh;                 /* '<S888>/Operator' */
  uint8_T DataType_c5;                 /* '<S888>/DataType' */
  uint8_T DataTypeConversion2_k2;      /* '<S856>/Data Type Conversion2' */
  uint8_T Operator_o0i;                /* '<S890>/Operator' */
  uint8_T DataType_hz;                 /* '<S890>/DataType' */
  uint8_T Shift_Arithmetic_f;          /* '<S856>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_mh;      /* '<S856>/Data Type Conversion4' */
  uint8_T Operator_kd;                 /* '<S891>/Operator' */
  uint8_T DataType_f3;                 /* '<S891>/DataType' */
  uint8_T Shift_Arithmetic1_mv;        /* '<S856>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_n;       /* '<S856>/Data Type Conversion5' */
  uint8_T Operator_dq;                 /* '<S889>/Operator' */
  uint8_T DataType_iz;                 /* '<S889>/DataType' */
  uint8_T Shift_Arithmetic2_j1;        /* '<S856>/Shift_Arithmetic 2' */
  uint8_T Operator_dh;                 /* '<S896>/Operator' */
  uint8_T DataType_lk;                 /* '<S896>/DataType' */
  uint8_T DataTypeConversion1_nv;      /* '<S856>/Data Type Conversion1' */
  uint8_T Operator_ku;                 /* '<S892>/Operator' */
  uint8_T DataType_ap;                 /* '<S892>/DataType' */
  uint8_T DataType_duu;                /* '<S901>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S894>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S894>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S894>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_n;      /* '<S894>/Data Type Conversion13' */
  uint8_T Operator_fq;                 /* '<S900>/Operator' */
  uint8_T DataType_fj;                 /* '<S900>/DataType' */
  uint8_T Checksum;                    /* '<S894>/Add' */
  uint8_T Shift_Arithmetic7_m;         /* '<S894>/Shift_Arithmetic 7' */
  uint8_T Add1_l;                      /* '<S894>/Add1' */
  uint8_T Operator_ma;                 /* '<S899>/Operator' */
  uint8_T DataType_l2;                 /* '<S899>/DataType' */
  uint8_T DataTypeConversion3_aq;      /* '<S856>/Data Type Conversion3' */
  uint8_T Operator_ijd;                /* '<S893>/Operator' */
  uint8_T DataType_oy;                 /* '<S893>/DataType' */
  uint8_T Shift_Arithmetic3_f;         /* '<S856>/Shift_Arithmetic 3' */
  uint8_T Operator_in;                 /* '<S897>/Operator' */
  uint8_T DataType_px;                 /* '<S897>/DataType' */
  uint8_T DataTypeConversion_b1;       /* '<S851>/Data Type Conversion' */
  uint8_T Operator_h2;                 /* '<S866>/Operator' */
  uint8_T DataType_lj;                 /* '<S866>/DataType' */
  uint8_T Operator_hi;                 /* '<S871>/Operator' */
  uint8_T Operator_cwd;                /* '<S867>/Operator' */
  uint8_T Operator_ba;                 /* '<S872>/Operator' */
  uint8_T Operator_hr;                 /* '<S873>/Operator' */
  uint8_T Operator_n5;                 /* '<S870>/Operator' */
  uint8_T DataType_cn1;                /* '<S886>/DataType' */
  uint8_T DataTypeConversion2_h;       /* '<S855>/Data Type Conversion2' */
  uint8_T DataTypeConversion_ng;       /* '<S831>/Data Type Conversion' */
  uint8_T Operator_my;                 /* '<S836>/Operator' */
  uint8_T Operator_o5;                 /* '<S833>/Operator' */
  uint8_T DataType_ky;                 /* '<S833>/DataType' */
  uint8_T Operator_m2;                 /* '<S834>/Operator' */
  uint8_T Operator_ak2;                /* '<S835>/Operator' */
  uint8_T Operator_gvl;                /* '<S837>/Operator' */
  uint8_T Operator_fz;                 /* '<S838>/Operator' */
  uint8_T DataTypeConversion_bk;       /* '<S832>/Data Type Conversion' */
  uint8_T Operator_ll;                 /* '<S844>/Operator' */
  uint8_T Operator_cj;                 /* '<S841>/Operator' */
  uint8_T DataType_hp;                 /* '<S841>/DataType' */
  uint8_T Operator_ae;                 /* '<S842>/Operator' */
  uint8_T Operator_oh;                 /* '<S843>/Operator' */
  uint8_T Operator_ar;                 /* '<S845>/Operator' */
  uint8_T Operator_ou;                 /* '<S846>/Operator' */
  uint8_T FixPtUnitDelay2_e;           /* '<S812>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S713>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S715>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S716>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_n;       /* '<S706>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S708>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_p;       /* '<S701>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S702>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_k;       /* '<S695>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S696>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S697>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_o;       /* '<S688>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S690>/Signal Conversion' */
  uint8_T UnitDelay_h[17];             /* '<S638>/Unit Delay' */
  uint8_T Data[17];                    /* '<S638>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S641>/Inport' */
  uint8_T DataTypeConversion_o5;       /* '<S598>/Data Type Conversion' */
  uint8_T DataTypeConversion_oy;       /* '<S599>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ik;      /* '<S598>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_d0;      /* '<S599>/Data Type Conversion1' */
  uint8_T DataTypeConversion_df;       /* '<S585>/Data Type Conversion' */
  uint8_T DataTypeConversion1_fe;      /* '<S585>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_bh;      /* '<S585>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_hf;      /* '<S585>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_bd;      /* '<S585>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_nl;      /* '<S585>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_il;      /* '<S585>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_l;       /* '<S585>/Data Type Conversion7' */
  uint8_T DataTypeConversion_lrr;      /* '<S586>/Data Type Conversion' */
  uint8_T DataTypeConversion1_kg;      /* '<S586>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_fu;      /* '<S586>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_lk;      /* '<S586>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_o;       /* '<S586>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ie;      /* '<S586>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ni;      /* '<S586>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ct;      /* '<S586>/Data Type Conversion7' */
  uint8_T DataTypeConversion_gu;       /* '<S572>/Data Type Conversion' */
  uint8_T DataTypeConversion1_n4;      /* '<S572>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ha;      /* '<S572>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_gd;      /* '<S572>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_i3;      /* '<S572>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_c;       /* '<S572>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_bp;      /* '<S572>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_pn;      /* '<S572>/Data Type Conversion7' */
  uint8_T UnitDelay_c[39];             /* '<S510>/Unit Delay' */
  uint8_T Data_a[39];                  /* '<S510>/serialize_tpdt' */
  uint8_T Inport_c[39];                /* '<S513>/Inport' */
  uint8_T DataTypeConversion1_ba4;     /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_p;       /* '<S203>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew;      /* '<S98>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S98>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b;           /* '<S385>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S374>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_o;           /* '<S362>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S362>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_n;           /* '<S346>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion1_f1;      /* '<S79>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_e3;      /* '<S80>/Data Type Conversion5' */
  uint8_T FixPtUnitDelay2_ji;          /* '<S364>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_i;      /* '<S364>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_mz;          /* '<S365>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_b;      /* '<S365>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_h;           /* '<S331>/FixPt Unit Delay2' */
  uint8_T stateChange;                 /* '<S276>/Chart' */
  uint8_T FixPtUnitDelay2_at;          /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_g;           /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_d;           /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_mf;          /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_op;          /* '<S134>/FixPt Unit Delay2' */
  int8_T DataTypeConversion4_go;       /* '<S670>/Data Type Conversion4' */
  int8_T DataTypeConversion10_m;       /* '<S672>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S388>/for_logging7' */
  boolean_T SFunction1_i;              /* '<S724>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S406>/EStopSwActive' */
  boolean_T SFunction1_e;              /* '<S723>/S-Function1' */
  boolean_T Operator_di;               /* '<S813>/Operator' */
  boolean_T DataType_eh;               /* '<S813>/DataType' */
  boolean_T LogicalOperator;           /* '<S731>/Logical Operator' */
  boolean_T SFunction1_g;              /* '<S726>/S-Function1' */
  boolean_T Operator_ad1;              /* '<S814>/Operator' */
  boolean_T DataType_hv;               /* '<S814>/DataType' */
  boolean_T AND2;                      /* '<S731>/AND2' */
  boolean_T min_relop;                 /* '<S761>/min_relop' */
  boolean_T max_relop;                 /* '<S761>/max_relop' */
  boolean_T conjunction;               /* '<S761>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S763>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S763>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S749>/Relational Operator9' */
  boolean_T min_relop_d;               /* '<S753>/min_relop' */
  boolean_T max_relop_i;               /* '<S753>/max_relop' */
  boolean_T conjunction_j;             /* '<S753>/conjunction' */
  boolean_T RelationalOperator1_h;     /* '<S755>/Relational Operator1' */
  boolean_T RelationalOperator_d;      /* '<S755>/Relational Operator' */
  boolean_T F_Fault_Soft_l;            /* '<S748>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S733>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S749>/Relational Operator8' */
  boolean_T F_Fault_Hard_a;            /* '<S748>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S733>/Logical Operator1' */
  boolean_T Compare;                   /* '<S744>/Compare' */
  boolean_T min_relop_dd;              /* '<S777>/min_relop' */
  boolean_T max_relop_e;               /* '<S777>/max_relop' */
  boolean_T conjunction_p;             /* '<S777>/conjunction' */
  boolean_T RelationalOperator1_b;     /* '<S779>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S779>/Relational Operator' */
  boolean_T F_Fault_Soft_f;            /* '<S751>/Relational Operator9' */
  boolean_T min_relop_g;               /* '<S769>/min_relop' */
  boolean_T max_relop_d;               /* '<S769>/max_relop' */
  boolean_T conjunction_k;             /* '<S769>/conjunction' */
  boolean_T RelationalOperator1_be;    /* '<S771>/Relational Operator1' */
  boolean_T RelationalOperator_l;      /* '<S771>/Relational Operator' */
  boolean_T F_Fault_Soft_d;            /* '<S750>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S733>/Logical Operator4' */
  boolean_T F_Fault_Hard_k;            /* '<S751>/Relational Operator8' */
  boolean_T F_Fault_Hard_i;            /* '<S750>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S733>/Logical Operator3' */
  boolean_T Compare_i;                 /* '<S745>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S733>/Logical Operator5' */
  boolean_T Unit_Delay_ez;             /* '<S736>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S803>/Unit_Delay1' */
  boolean_T LogicalOperator_n;         /* '<S803>/Logical Operator' */
  boolean_T Unit_Delay1_c;             /* '<S736>/Unit_Delay1' */
  boolean_T Unit_Delay1_b;             /* '<S804>/Unit_Delay1' */
  boolean_T LogicalOperator_o;         /* '<S804>/Logical Operator' */
  boolean_T Compare_c;                 /* '<S740>/Compare' */
  boolean_T Compare_g;                 /* '<S796>/Compare' */
  boolean_T LogicalOperator7;          /* '<S734>/Logical Operator7' */
  boolean_T Compare_m;                 /* '<S795>/Compare' */
  boolean_T LogicalOperator8;          /* '<S734>/Logical Operator8' */
  boolean_T Compare_d;                 /* '<S794>/Compare' */
  boolean_T LogicalOperator5;          /* '<S734>/Logical Operator5' */
  boolean_T Compare_b;                 /* '<S793>/Compare' */
  boolean_T LogicalOperator6;          /* '<S734>/Logical Operator6' */
  boolean_T Compare_f;                 /* '<S739>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S738>/Relational Operator' */
  boolean_T min_relop_e;               /* '<S785>/min_relop' */
  boolean_T max_relop_j;               /* '<S785>/max_relop' */
  boolean_T conjunction_kf;            /* '<S785>/conjunction' */
  boolean_T RelationalOperator1_e;     /* '<S787>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S787>/Relational Operator' */
  boolean_T F_Fault_Hard_g;            /* '<S752>/Relational Operator8' */
  boolean_T LogicalOperator6_a;        /* '<S730>/Logical Operator6' */
  boolean_T Operator_g3;               /* '<S468>/Operator' */
  boolean_T Operator_cg;               /* '<S685>/Operator' */
  boolean_T Operator_pwr;              /* '<S477>/Operator' */
  boolean_T RX_status;                 /* '<S474>/Data Type Conversion8' */
  boolean_T RX_status_c;               /* '<S412>/Multiport_Switch' */
  boolean_T Operator_f5;               /* '<S512>/Operator' */
  boolean_T LogicalOperator_m;         /* '<S426>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S639>/Unit_Delay3' */
  boolean_T Operator_mi;               /* '<S640>/Operator' */
  boolean_T LogicalOperator_j;         /* '<S449>/Logical Operator' */
  boolean_T RelationalOperator1_bq[17];/* '<S639>/Relational Operator1' */
  boolean_T Compare_o;                 /* '<S643>/Compare' */
  boolean_T LogicalOperator_a;         /* '<S639>/Logical Operator' */
  boolean_T Unit_Delay_aa;             /* '<S639>/Unit_Delay' */
  boolean_T LogicalOperator3_k;        /* '<S645>/Logical Operator3' */
  boolean_T Unit_Delay_c;              /* '<S645>/Unit_Delay' */
  boolean_T LogicalOperator_f;         /* '<S645>/Logical Operator' */
  boolean_T LogicalOperator1_h;        /* '<S645>/Logical Operator1' */
  boolean_T Operator_cwf;              /* '<S650>/Operator' */
  boolean_T Operator_bg;               /* '<S649>/Operator' */
  boolean_T Operator_ki;               /* '<S651>/Operator' */
  boolean_T Operator_jr;               /* '<S652>/Operator' */
  boolean_T Operator_it;               /* '<S653>/Operator' */
  boolean_T Operator_ir;               /* '<S654>/Operator' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S456>/OR' */
  boolean_T Enable;                    /* '<S3>/Enable' */
  boolean_T Heartbeat_l;               /* '<S389>/Cast To Boolean' */
  boolean_T EStop_a;                   /* '<S3>/Unit_Delay' */
  boolean_T EnableSW;                  /* '<S3>/Unit_Delay' */
  boolean_T EngagePB_j;                /* '<S3>/Unit_Delay' */
  boolean_T AutonomousEnabled_k;       /* '<S3>/Unit_Delay' */
  boolean_T Compare_a;                 /* '<S396>/Compare' */
  boolean_T Uk1_i;                     /* '<S395>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S395>/FixPt Relational Operator' */
  boolean_T RX_status_p;               /* '<S499>/Data Type Conversion8' */
  boolean_T RX_status_b;               /* '<S628>/Data Type Conversion8' */
  boolean_T Operator_oe;               /* '<S1038>/Operator' */
  boolean_T DataType_gzp;              /* '<S1038>/DataType' */
  boolean_T UnitDelay2;                /* '<S829>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S829>/Unit Delay3' */
  boolean_T Operator_j5;               /* '<S1057>/Operator' */
  boolean_T AND;                       /* '<S1048>/AND' */
  boolean_T OR;                        /* '<S1048>/OR' */
  boolean_T Operator_i0;               /* '<S1056>/Operator' */
  boolean_T LogicalOperator_e;         /* '<S1046>/Logical Operator' */
  boolean_T RelationalOperator_b;      /* '<S1047>/Relational Operator' */
  boolean_T RelationalOperator1_o;     /* '<S1047>/Relational Operator1' */
  boolean_T LogicalOperator_h;         /* '<S1047>/Logical Operator' */
  boolean_T Compare_a2;                /* '<S1053>/Compare' */
  boolean_T Compare_bu;                /* '<S1054>/Compare' */
  boolean_T LogicalOperator1_p;        /* '<S1047>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1047>/Logical Operator2' */
  boolean_T LogicalOperator_b;         /* '<S820>/Logical Operator' */
  boolean_T RX_status_i;               /* '<S563>/Data Type Conversion8' */
  boolean_T F_Truck1571_VIN_Match;     /* '<S3>/Unit_Delay' */
  boolean_T F_Truck166_VIN_Match;      /* '<S3>/Unit_Delay' */
  boolean_T RTMapsOk_m;                /* '<S3>/Unit_Delay' */
  boolean_T APTC_arb_pedal_low_idl_sw; /* '<S3>/Unit_Delay' */
  boolean_T signal1;                   /* '<S3>/Unit_Delay' */
  boolean_T PID_hold_i_term_f;         /* '<S3>/Unit_Delay' */
  boolean_T F_Ignition_relay_command;  /* '<S3>/Unit_Delay' */
  boolean_T F_Inverter_relay_command;  /* '<S3>/Unit_Delay' */
  boolean_T F_MABX_relay_command;      /* '<S3>/Unit_Delay' */
  boolean_T F_Sensor_relay_command;    /* '<S3>/Unit_Delay' */
  boolean_T BrakingControlActive;      /* '<S3>/Unit_Delay' */
  boolean_T F_Hold_brakes_at_zero;     /* '<S3>/Unit_Delay' */
  boolean_T AutonomousOutputEnabled_d; /* '<S3>/Unit_Delay' */
  boolean_T RX_status_g;               /* '<S465>/Data Type Conversion8' */
  boolean_T RX_status_d;               /* '<S411>/Multiport_Switch' */
  boolean_T Operator_cad;              /* '<S469>/Operator' */
  boolean_T Operator_gkj;              /* '<S470>/Operator' */
  boolean_T Operator_kv;               /* '<S471>/Operator' */
  boolean_T Operator_lld;              /* '<S472>/Operator' */
  boolean_T Operator_j3;               /* '<S473>/Operator' */
  boolean_T Operator_nh;               /* '<S478>/Operator' */
  boolean_T Operator_lp;               /* '<S479>/Operator' */
  boolean_T Operator_jy;               /* '<S480>/Operator' */
  boolean_T Operator_lm;               /* '<S481>/Operator' */
  boolean_T Operator_ik;               /* '<S482>/Operator' */
  boolean_T RX_status_n;               /* '<S483>/Data Type Conversion8' */
  boolean_T RX_status_j;               /* '<S485>/Data Type Conversion8' */
  boolean_T RX_status_g4;              /* '<S487>/Data Type Conversion8' */
  boolean_T RX_status_a;               /* '<S489>/Data Type Conversion8' */
  boolean_T RX_status_m;               /* '<S491>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S493>/Data Type Conversion8' */
  boolean_T RX_status_np;              /* '<S495>/Data Type Conversion8' */
  boolean_T RX_status_f;               /* '<S497>/Data Type Conversion8' */
  boolean_T RX_status_pm;              /* '<S499>/Switch' */
  boolean_T RX_status_fy;              /* '<S502>/Data Type Conversion8' */
  boolean_T RX_status_nc;              /* '<S504>/Data Type Conversion8' */
  boolean_T RX_status_o;               /* '<S506>/Data Type Conversion8' */
  boolean_T RX_status_j4;              /* '<S508>/Data Type Conversion8' */
  boolean_T RX_status_mj;              /* '<S555>/Data Type Conversion8' */
  boolean_T RX_status_bu;              /* '<S557>/Data Type Conversion8' */
  boolean_T RX_status_mu;              /* '<S559>/Data Type Conversion8' */
  boolean_T RX_status_k;               /* '<S561>/Data Type Conversion8' */
  boolean_T RX_status_n3;              /* '<S563>/Switch' */
  boolean_T RX_status_pe;              /* '<S566>/Data Type Conversion8' */
  boolean_T RX_status_ft;              /* '<S433>/Switch' */
  boolean_T Operator_ic;               /* '<S605>/Operator' */
  boolean_T Operator_hb3;              /* '<S606>/Operator' */
  boolean_T Operator_ha;               /* '<S607>/Operator' */
  boolean_T RX_status_f0;              /* '<S600>/Data Type Conversion8' */
  boolean_T RX_status_jx;              /* '<S436>/Multiport_Switch' */
  boolean_T Operator_fj;               /* '<S608>/Operator' */
  boolean_T Operator_om;               /* '<S609>/Operator' */
  boolean_T Operator_oev;              /* '<S610>/Operator' */
  boolean_T RX_status_ok;              /* '<S611>/Data Type Conversion2' */
  boolean_T RX_status_im;              /* '<S611>/Data Type Conversion5' */
  boolean_T RX_status_gk;              /* '<S611>/Data Type Conversion8' */
  boolean_T RX_status_fh;              /* '<S615>/Switch' */
  boolean_T RX_status_kq;              /* '<S618>/Data Type Conversion8' */
  boolean_T RX_status_dn;              /* '<S620>/Data Type Conversion8' */
  boolean_T RX_status_fs;              /* '<S622>/Data Type Conversion8' */
  boolean_T RX_status_g5;              /* '<S624>/Data Type Conversion8' */
  boolean_T RX_status_je;              /* '<S626>/Data Type Conversion8' */
  boolean_T RX_status_fhg;             /* '<S630>/Data Type Conversion8' */
  boolean_T RX_status_dz;              /* '<S632>/Data Type Conversion8' */
  boolean_T RX_status_gd;              /* '<S634>/Data Type Conversion8' */
  boolean_T RX_status_fd;              /* '<S636>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S639>/Relational Operator2' */
  boolean_T Compare_h;                 /* '<S644>/Compare' */
  boolean_T Unit_Delay2_e;             /* '<S639>/Unit_Delay2' */
  boolean_T LogicalOperator1_n;        /* '<S639>/Logical Operator1' */
  boolean_T LogicalOperator2_p;        /* '<S645>/Logical Operator2' */
  boolean_T Unit_Delay1_f;             /* '<S639>/Unit_Delay1' */
  boolean_T LogicalOperator3_j;        /* '<S646>/Logical Operator3' */
  boolean_T Unit_Delay_ba;             /* '<S646>/Unit_Delay' */
  boolean_T LogicalOperator_k;         /* '<S646>/Logical Operator' */
  boolean_T LogicalOperator1_pd;       /* '<S646>/Logical Operator1' */
  boolean_T LogicalOperator2_l;        /* '<S646>/Logical Operator2' */
  boolean_T Operator_fx;               /* '<S683>/Operator' */
  boolean_T Operator_cjo;              /* '<S686>/Operator' */
  boolean_T Operator_cf;               /* '<S684>/Operator' */
  boolean_T Operator_mb;               /* '<S682>/Operator' */
  boolean_T Operator_er;               /* '<S579>/Operator' */
  boolean_T Operator_ce;               /* '<S580>/Operator' */
  boolean_T Operator_oz;               /* '<S584>/Operator' */
  boolean_T RX_status_bd;              /* '<S573>/Data Type Conversion8' */
  boolean_T RX_status_l;               /* '<S574>/Data Type Conversion8' */
  boolean_T RX_status_fo;              /* '<S434>/Multiport_Switch' */
  boolean_T Operator_mz;               /* '<S581>/Operator' */
  boolean_T Operator_jb;               /* '<S582>/Operator' */
  boolean_T Operator_ph;               /* '<S583>/Operator' */
  boolean_T Operator_ps;               /* '<S592>/Operator' */
  boolean_T Operator_mj;               /* '<S593>/Operator' */
  boolean_T Operator_emw;              /* '<S597>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S667>/Data Type Conversion' */
  boolean_T DataTypeConversion_ip;     /* '<S410>/Data Type Conversion' */
  boolean_T DataType_kg;               /* '<S673>/DataType' */
  boolean_T DataTypeConversion1_gs;    /* '<S410>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S667>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_ht;    /* '<S410>/Data Type Conversion2' */
  boolean_T RX_status_fq;              /* '<S587>/Data Type Conversion8' */
  boolean_T RX_status_l1;              /* '<S435>/Multiport_Switch' */
  boolean_T Operator_lu;               /* '<S594>/Operator' */
  boolean_T Operator_iy;               /* '<S595>/Operator' */
  boolean_T Operator_e4;               /* '<S596>/Operator' */
  boolean_T SFunction1_o;              /* '<S725>/S-Function1' */
  boolean_T StartPBActive;             /* '<S406>/StartPBActive' */
  boolean_T F_Fault_Soft_h;            /* '<S752>/Relational Operator9' */
  boolean_T Operator_eu;               /* '<S22>/Operator' */
  boolean_T Operator_ms;               /* '<S26>/Operator' */
  boolean_T Operator_fv;               /* '<S27>/Operator' */
  boolean_T Operator_bsh;              /* '<S24>/Operator' */
  boolean_T Operator_bw;               /* '<S25>/Operator' */
  boolean_T Operator_eb;               /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S829>/Chart' */
  boolean_T enTPCM;                    /* '<S829>/Chart' */
  boolean_T DataTypeConversion6_c;     /* '<S1010>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S1014>/u2' */
  boolean_T Operator_lj;               /* '<S1014>/Operator' */
  boolean_T DataType_bx;               /* '<S1014>/DataType' */
  boolean_T Unit_Delay_bk;             /* '<S1019>/Unit_Delay' */
  boolean_T Operator_gq;               /* '<S1021>/Operator' */
  boolean_T AutonomousOutputEnabled_n; /* '<S985>/Bus Selector2' */
  boolean_T BrakingControlActive_f;    /* '<S985>/Bus Selector2' */
  boolean_T Unit_Delay_jjz;            /* '<S981>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S981>/OperatorEnable' */
  boolean_T LogicalOperator8_l;        /* '<S981>/Logical Operator8' */
  boolean_T LogicalOperator7_l;        /* '<S981>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S981>/OperatorEnable' */
  boolean_T LogicalOperator1_e;        /* '<S981>/Logical Operator1' */
  boolean_T DataTypeConversion2_nd;    /* '<S981>/Data Type Conversion2' */
  boolean_T LogicalOperator_hu;        /* '<S981>/Logical Operator' */
  boolean_T Compare_fh;                /* '<S987>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S981>/OperatorEnable' */
  boolean_T Unit_Delay_o;              /* '<S1004>/Unit_Delay' */
  boolean_T DataTypeConversion7_do;    /* '<S983>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_h3;    /* '<S983>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_ab;    /* '<S983>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_nl;    /* '<S983>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_kd;    /* '<S983>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_ne;    /* '<S983>/Data Type Conversion6' */
  boolean_T Operator_gi;               /* '<S1006>/Operator' */
  boolean_T DataTypeConversion5_pm;    /* '<S910>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_pv;    /* '<S910>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_fn;    /* '<S910>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_p;     /* '<S910>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_fs;    /* '<S910>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_c5;    /* '<S910>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_cv;    /* '<S911>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_fe;    /* '<S911>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_os;    /* '<S911>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_ep;    /* '<S911>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_h;     /* '<S911>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_e0;    /* '<S911>/Data Type Conversion7' */
  boolean_T Operator_j5v;              /* '<S965>/Operator' */
  boolean_T Operator_MX;               /* '<S974>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S974>/Operator_MN' */
  boolean_T Operator_ae1;              /* '<S966>/Operator' */
  boolean_T Operator_ks;               /* '<S967>/Operator' */
  boolean_T Operator_be;               /* '<S968>/Operator' */
  boolean_T Operator_kp;               /* '<S969>/Operator' */
  boolean_T Operator_fc;               /* '<S970>/Operator' */
  boolean_T Unit_Delay_oz;             /* '<S976>/Unit_Delay' */
  boolean_T DataTypeConversion6_d;     /* '<S913>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_ed;    /* '<S913>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_hi;    /* '<S913>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_fa;    /* '<S913>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_ob;    /* '<S913>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_g;     /* '<S913>/Data Type Conversion7' */
  boolean_T LogicalOperator1_d;        /* '<S974>/Logical Operator1' */
  boolean_T LogicalOperator_d;         /* '<S974>/Logical Operator' */
  boolean_T Operator_fpz;              /* '<S978>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S856>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S874>/u1' */
  boolean_T DataTypeConversion2_gt;    /* '<S851>/Data Type Conversion2' */
  boolean_T Operator_beq;              /* '<S874>/Operator' */
  boolean_T DataType_lc;               /* '<S874>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_e; /* '<S877>/u1' */
  boolean_T DataTypeConversion5_dq;    /* '<S851>/Data Type Conversion5' */
  boolean_T Operator_db;               /* '<S877>/Operator' */
  boolean_T DataType_i1;               /* '<S877>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_a; /* '<S868>/u1' */
  boolean_T DataTypeConversion6_df;    /* '<S851>/Data Type Conversion6' */
  boolean_T Operator_ith;              /* '<S868>/Operator' */
  boolean_T DataType_dl;               /* '<S868>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_k; /* '<S869>/u1' */
  boolean_T DataTypeConversion7_j2;    /* '<S851>/Data Type Conversion7' */
  boolean_T Operator_lb;               /* '<S869>/Operator' */
  boolean_T DataType_jyg;              /* '<S869>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_j; /* '<S875>/u1' */
  boolean_T DataTypeConversion3_gi;    /* '<S851>/Data Type Conversion3' */
  boolean_T Operator_cyb;              /* '<S875>/Operator' */
  boolean_T DataType_a5;               /* '<S875>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_kk;/* '<S876>/u1' */
  boolean_T DataTypeConversion4_l;     /* '<S851>/Data Type Conversion4' */
  boolean_T Operator_j3p;              /* '<S876>/Operator' */
  boolean_T DataType_hvm;              /* '<S876>/DataType' */
  boolean_T DataTypeConversion2_of;    /* '<S857>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S862>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_g;/* '<S863>/Enable' */
  boolean_T DataTypeConversion2_hu;    /* '<S852>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_ao0;   /* '<S853>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_gt;    /* '<S831>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_dr;    /* '<S831>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_at;    /* '<S831>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_e;     /* '<S831>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_kw;    /* '<S831>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_b;     /* '<S831>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_jz;    /* '<S832>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_ot;    /* '<S832>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_ld;    /* '<S832>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_le;    /* '<S832>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_ou;    /* '<S832>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_e2;    /* '<S832>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S815>/Chart' */
  boolean_T Unit_Delay_h;              /* '<S808>/Unit_Delay' */
  boolean_T LogicalOperator1_l;        /* '<S808>/Logical Operator1' */
  boolean_T LogicalOperator_c;         /* '<S808>/Logical Operator' */
  boolean_T Unit_Delay_h3;             /* '<S809>/Unit_Delay' */
  boolean_T LogicalOperator1_hn;       /* '<S809>/Logical Operator1' */
  boolean_T RelationalOperator1_p;     /* '<S737>/Relational Operator1' */
  boolean_T LogicalOperator3_f;        /* '<S807>/Logical Operator3' */
  boolean_T Unit_Delay_dl1;            /* '<S807>/Unit_Delay' */
  boolean_T LogicalOperator1_hc;       /* '<S807>/Logical Operator1' */
  boolean_T LogicalOperator_bf;        /* '<S807>/Logical Operator' */
  boolean_T LogicalOperator2_b;        /* '<S807>/Logical Operator2' */
  boolean_T min_relop_n;               /* '<S810>/min_relop' */
  boolean_T RX_status_gy;              /* '<S638>/serialize_tpdt' */
  boolean_T RX_status_ih;              /* '<S615>/Data Type Conversion8' */
  boolean_T RX_status_pey;             /* '<S615>/Data Type Conversion3' */
  boolean_T RX_status_ii;              /* '<S598>/Data Type Conversion8' */
  boolean_T RX_status_pj;              /* '<S599>/Data Type Conversion8' */
  boolean_T RX_status_dj;              /* '<S585>/Data Type Conversion8' */
  boolean_T RX_status_h;               /* '<S586>/Data Type Conversion8' */
  boolean_T RX_status_f4;              /* '<S572>/Data Type Conversion8' */
  boolean_T RX_status_jr;              /* '<S568>/Data Type Conversion8' */
  boolean_T RX_status_nw;              /* '<S569>/Data Type Conversion8' */
  boolean_T RX_status_ov;              /* '<S563>/Data Type Conversion3' */
  boolean_T RX_status_iz;              /* '<S510>/serialize_tpdt' */
  boolean_T RX_status_nr;              /* '<S499>/Data Type Conversion1' */
  boolean_T CheckHDOP;                 /* '<S386>/CheckHDOP' */
  boolean_T Operator_ns;               /* '<S95>/Operator' */
  boolean_T AND_l;                     /* '<S76>/AND' */
  boolean_T LogicalOperator_dy;        /* '<S83>/Logical Operator' */
  boolean_T f_vspd_geq_than_target_plus_hys;/* '<S103>/Relational Operator' */
  boolean_T f_target_is_stop_thresh;   /* '<S103>/Relational Operator1' */
  boolean_T Compare_e;                 /* '<S199>/Compare' */
  boolean_T RelationalOperator2_p;     /* '<S103>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S103>/Relational Operator3' */
  boolean_T f_vspd_leq_than_hyst_and_target;/* '<S103>/Logical Operator' */
  boolean_T LogicalOperator1_m;        /* '<S103>/Logical Operator1' */
  boolean_T DataTypeConversion4_d5;    /* '<S77>/Data Type Conversion4' */
  boolean_T F_Brake_control_active;    /* '<S103>/Logical Operator2' */
  boolean_T Compare_e5;                /* '<S209>/Compare' */
  boolean_T LogicalOperator2_n;        /* '<S203>/Logical Operator2' */
  boolean_T Compare_ih;                /* '<S207>/Compare' */
  boolean_T Compare_ex;                /* '<S208>/Compare' */
  boolean_T BrakingActive2;            /* '<S203>/BrakingActive2' */
  boolean_T f_brake_sw_off;            /* '<S203>/BrakingActive1' */
  boolean_T Compare_ay;                /* '<S210>/Compare' */
  boolean_T Compare_os;                /* '<S211>/Compare' */
  boolean_T f_brk_gov_inactive;        /* '<S203>/Logical Operator1' */
  boolean_T LogicalOperator_ke;        /* '<S203>/Logical Operator' */
  boolean_T LogicalOperator_j2;        /* '<S82>/Logical Operator' */
  boolean_T APTC_arb_pedal_low_idl_sw_o;/* '<S75>/Relational Operator' */
  boolean_T RelationalOperator1_i;     /* '<S89>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S89>/Relational Operator' */
  boolean_T RelationalOperator1_a;     /* '<S90>/Relational Operator1' */
  boolean_T RelationalOperator_n1;     /* '<S90>/Relational Operator' */
  boolean_T RelationalOperator3_c[2];  /* '<S98>/Relational Operator3' */
  boolean_T LogicalOperator4_o;        /* '<S98>/Logical Operator4' */
  boolean_T RelationalOperator4[2];    /* '<S98>/Relational Operator4' */
  boolean_T F_Service_brake_pressure_applie;/* '<S98>/Logical Operator3' */
  boolean_T RelationalOperator6[2];    /* '<S98>/Relational Operator6' */
  boolean_T F_Brake_sw_CAN;            /* '<S98>/Logical Operator' */
  boolean_T LogicalOperator5_n;        /* '<S98>/Logical Operator5' */
  boolean_T F_Vehicle_stopped;         /* '<S102>/Relational Operator1' */
  boolean_T Compare_g4;                /* '<S200>/Compare' */
  boolean_T RelationalOperator4_l;     /* '<S103>/Relational Operator4' */
  boolean_T F_Hold_brakes_at_zero_d;   /* '<S103>/Logical Operator3' */
  boolean_T Compare_ey;                /* '<S378>/Compare' */
  boolean_T Compare_j;                 /* '<S375>/Compare' */
  boolean_T Compare_hc;                /* '<S376>/Compare' */
  boolean_T Compare_bp;                /* '<S377>/Compare' */
  boolean_T LogicalOperator2_f;        /* '<S338>/Logical Operator2' */
  boolean_T Unit_Delay_ot;             /* '<S380>/Unit_Delay' */
  boolean_T LogicalOperator1_j;        /* '<S380>/Logical Operator1' */
  boolean_T LogicalOperator_fl;        /* '<S380>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S381>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S381>/Logical Operator1' */
  boolean_T Compare_d3;                /* '<S366>/Compare' */
  boolean_T Compare_dv;                /* '<S367>/Compare' */
  boolean_T LogicalOperator1_g;        /* '<S336>/Logical Operator1' */
  boolean_T Unit_Delay_hz;             /* '<S369>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S369>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S369>/Logical Operator' */
  boolean_T Unit_Delay_c4;             /* '<S370>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S370>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S332>/Compare' */
  boolean_T FixPtRelationalOperator_d[2];/* '<S333>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_n[33];             /* '<S352>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S347>/Logical Operator' */
  boolean_T RelationalOperator_f;      /* '<S347>/Relational Operator' */
  boolean_T LogicalOperator3_o;        /* '<S353>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S353>/Unit_Delay' */
  boolean_T LogicalOperator_ob;        /* '<S353>/Logical Operator' */
  boolean_T LogicalOperator1_ph;       /* '<S353>/Logical Operator1' */
  boolean_T f_vspd_min_delta_greater_than_t;/* '<S347>/Logical Operator2' */
  boolean_T RelationalOperator1_g;     /* '<S347>/Relational Operator1' */
  boolean_T f_vspd_max_delta_greater_than_t;/* '<S347>/Logical Operator1' */
  boolean_T f_accel_rate_greater_than_thres;/* '<S347>/Relational Operator2' */
  boolean_T f_decel_rate_greater_than_thres;/* '<S347>/Relational Operator3' */
  boolean_T f_jerk_rate_greater_than_thresh;/* '<S347>/Relational Operator4' */
  boolean_T f_jerk_rate_greater_than_thre_n;/* '<S347>/Relational Operator5' */
  boolean_T RelationalOperator6_i;     /* '<S347>/Relational Operator6' */
  boolean_T f_distance_max_delta_greater_th;/* '<S347>/Logical Operator3' */
  boolean_T F_Inhibit_sigmoid_vector_shapin;/* '<S347>/Logical Operator4' */
  boolean_T LogicalOperator_nd;        /* '<S81>/Logical Operator' */
  boolean_T LogicalOperator2_ft;       /* '<S81>/Logical Operator2' */
  boolean_T RelationalOperator3_k;     /* '<S348>/Relational Operator3' */
  boolean_T RelationalOperator1_hj;    /* '<S348>/Relational Operator1' */
  boolean_T LogicalOperator_da;        /* '<S348>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S348>/Relational Operator2' */
  boolean_T F_set_max_distance_accumulated;/* '<S348>/Logical Operator2' */
  boolean_T RelationalOperator_lj;     /* '<S348>/Relational Operator' */
  boolean_T FixPtRelationalOperator_p[2];/* '<S340>/FixPt Relational Operator' */
  boolean_T LogicalOperator_g;         /* '<S334>/Logical Operator' */
  boolean_T Unit_Delay_l;              /* '<S342>/Unit_Delay' */
  boolean_T LogicalOperator1_lp;       /* '<S342>/Logical Operator1' */
  boolean_T F_Driver_braking;          /* '<S98>/Relational Operator2' */
  boolean_T F_Operator_brake_appl;     /* '<S98>/Logical Operator2' */
  boolean_T RelationalOperator5[2];    /* '<S98>/Relational Operator5' */
  boolean_T F_Bendix_2C2_service_brake_pres;/* '<S98>/Logical Operator6' */
  boolean_T F_Bendix_2C2_braking;      /* '<S98>/Relational Operator' */
  boolean_T F_ADAS_brake_appl;         /* '<S98>/Logical Operator7' */
  boolean_T F_ADAS_brake_error;        /* '<S98>/Relational Operator1' */
  boolean_T Unit_Delay_dy;             /* '<S101>/Unit_Delay' */
  boolean_T Unit_Delay1_k;             /* '<S197>/Unit_Delay1' */
  boolean_T LogicalOperator_fc;        /* '<S197>/Logical Operator' */
  boolean_T DataTypeConversion_de;     /* '<S79>/Data Type Conversion' */
  boolean_T RelationalOperator1_c;     /* '<S205>/Relational Operator1' */
  boolean_T RelationalOperator3_g;     /* '<S205>/Relational Operator3' */
  boolean_T RelationalOperator2_f;     /* '<S205>/Relational Operator2' */
  boolean_T RelationalOperator4_o;     /* '<S205>/Relational Operator4' */
  boolean_T F_Ignition_sw_off_conditions_me;/* '<S205>/Logical Operator' */
  boolean_T F_Ignition_sw_on;          /* '<S205>/Relational Operator' */
  boolean_T DataTypeConversion_l1;     /* '<S276>/Data Type Conversion' */
  boolean_T Unit_Delay1_j;             /* '<S318>/Unit_Delay1' */
  boolean_T LogicalOperator_kh;        /* '<S318>/Logical Operator' */
  boolean_T highRateOfChange;          /* '<S275>/highRateOfChange' */
  boolean_T closeToEdge;               /* '<S275>/closeToEdge' */
  boolean_T JumpNearEdge;              /* '<S275>/JumpNearEdge' */
  boolean_T Uk1_k2;                    /* '<S317>/Delay Input1' */
  boolean_T FixPtRelationalOperator_i; /* '<S317>/FixPt Relational Operator' */
  boolean_T DataTypeConversion_dz;     /* '<S275>/Data Type Conversion' */
  boolean_T Unit_Delay1_fe;            /* '<S319>/Unit_Delay1' */
  boolean_T LogicalOperator_a3;        /* '<S319>/Logical Operator' */
  boolean_T Unit_Delay1_d;             /* '<S320>/Unit_Delay1' */
  boolean_T LogicalOperator_nz;        /* '<S320>/Logical Operator' */
  boolean_T RelationalOperator_l5;     /* '<S276>/Relational Operator' */
  boolean_T RelationalOperator_dl;     /* '<S288>/Relational Operator' */
  boolean_T RelationalOperator5_f;     /* '<S291>/Relational Operator5' */
  boolean_T RelationalOperator4_la;    /* '<S291>/Relational Operator4' */
  boolean_T RelationalOperator2_o;     /* '<S291>/Relational Operator2' */
  boolean_T LogicalOperator1_ji;       /* '<S291>/Logical Operator1' */
  boolean_T RelationalOperator1_ie;    /* '<S291>/Relational Operator1' */
  boolean_T RelationalOperator3_p;     /* '<S291>/Relational Operator3' */
  boolean_T LogicalOperator2_o;        /* '<S291>/Logical Operator2' */
  boolean_T LogicalOperator_bs;        /* '<S291>/Logical Operator' */
  boolean_T LogicalOperator3_oi;       /* '<S291>/Logical Operator3' */
  boolean_T LowerRelop1;               /* '<S290>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S290>/UpperRelop' */
  boolean_T DataTypeConversion_dn;     /* '<S272>/Data Type Conversion' */
  boolean_T LowerRelop1_h;             /* '<S308>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S308>/UpperRelop' */
  boolean_T RelationalOperator1_ps;    /* '<S295>/Relational Operator1' */
  boolean_T RelationalOperator_hy;     /* '<S295>/Relational Operator' */
  boolean_T RelationalOperator1_f;     /* '<S303>/Relational Operator1' */
  boolean_T RelationalOperator_l4;     /* '<S303>/Relational Operator' */
  boolean_T RelationalOperator1_gr;    /* '<S293>/Relational Operator1' */
  boolean_T RelationalOperator_o;      /* '<S293>/Relational Operator' */
  boolean_T LowerRelop1_o;             /* '<S309>/LowerRelop1' */
  boolean_T UpperRelop_o;              /* '<S309>/UpperRelop' */
  boolean_T LowerRelop1_l;             /* '<S314>/LowerRelop1' */
  boolean_T UpperRelop_k;              /* '<S314>/UpperRelop' */
  boolean_T LowerRelop1_e;             /* '<S313>/LowerRelop1' */
  boolean_T UpperRelop_fl;             /* '<S313>/UpperRelop' */
  boolean_T LowerTest;                 /* '<S281>/Lower Test' */
  boolean_T UpperTest;                 /* '<S281>/Upper Test' */
  boolean_T AND_p;                     /* '<S281>/AND' */
  boolean_T LowerTest_l;               /* '<S286>/Lower Test' */
  boolean_T UpperTest_e;               /* '<S286>/Upper Test' */
  boolean_T AND_j;                     /* '<S286>/AND' */
  boolean_T RelationalOperator_oq;     /* '<S80>/Relational Operator' */
  boolean_T min_relop_k;               /* '<S344>/min_relop' */
  boolean_T LogicalOperator2_g;        /* '<S353>/Logical Operator2' */
  boolean_T min_relop_c;               /* '<S372>/min_relop' */
  boolean_T min_relop_f;               /* '<S383>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S327>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S327>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S327>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S328>/Unit_Delay' */
  boolean_T LogicalOperator1_hp;       /* '<S328>/Logical Operator1' */
  boolean_T RelationalOperator1_et;    /* '<S325>/Relational Operator1' */
  boolean_T LogicalOperator3_a;        /* '<S326>/Logical Operator3' */
  boolean_T Unit_Delay_i;              /* '<S326>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S326>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S326>/Logical Operator' */
  boolean_T LogicalOperator2_j;        /* '<S326>/Logical Operator2' */
  boolean_T min_relop_dc;              /* '<S329>/min_relop' */
  boolean_T RelationalOperator1_m;     /* '<S288>/Relational Operator1' */
  boolean_T RelationalOperator1_n;     /* '<S218>/Relational Operator1' */
  boolean_T RelationalOperator_d3;     /* '<S218>/Relational Operator' */
  boolean_T RelationalOperator1_ch;    /* '<S219>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S219>/Relational Operator' */
  boolean_T RelationalOperator1_l;     /* '<S220>/Relational Operator1' */
  boolean_T RelationalOperator_fd;     /* '<S220>/Relational Operator' */
  boolean_T Unit_Delay1_m;             /* '<S214>/Unit_Delay1' */
  boolean_T f_gpid_reset;              /* '<S214>/Logical Operator' */
  boolean_T RelationalOperator_fl;     /* '<S214>/Relational Operator' */
  boolean_T Unit_Delay_d5;             /* '<S214>/Unit_Delay' */
  boolean_T RelationalOperator1_d;     /* '<S214>/Relational Operator1' */
  boolean_T Unit_Delay_i0;             /* '<S241>/Unit_Delay' */
  boolean_T LogicalOperator1_o;        /* '<S241>/Logical Operator1' */
  boolean_T Unit_Delay1_dw;            /* '<S261>/Unit_Delay1' */
  boolean_T LogicalOperator_at;        /* '<S261>/Logical Operator' */
  boolean_T Unit_Delay_ne;             /* '<S262>/Unit_Delay' */
  boolean_T LogicalOperator1_k;        /* '<S262>/Logical Operator1' */
  boolean_T Compare_go;                /* '<S246>/Compare' */
  boolean_T RelationalOperator_a;      /* '<S206>/Relational Operator' */
  boolean_T Compare_p;                 /* '<S245>/Compare' */
  boolean_T min_relop_cb;              /* '<S264>/min_relop' */
  boolean_T RelationalOperator1_j;     /* '<S267>/Relational Operator1' */
  boolean_T RelationalOperator_p;      /* '<S267>/Relational Operator' */
  boolean_T PID_hold_i_term_f_b;       /* '<S206>/Generic_PID_Governor_3' */
  boolean_T F_Ignition_relay_command_i;/* '<S205>/Relay_control_state_machine' */
  boolean_T F_Inverter_relay_command_p;/* '<S205>/Relay_control_state_machine' */
  boolean_T F_MABX_relay_command_n;    /* '<S205>/Relay_control_state_machine' */
  boolean_T F_Sensor_relay_command_k;  /* '<S205>/Relay_control_state_machine' */
  boolean_T F_Shift_interlock_conditions_me;/* '<S178>/Logical Operator2' */
  boolean_T Unit_Delay_nz;             /* '<S188>/Unit_Delay' */
  boolean_T LogicalOperator1_kv;       /* '<S188>/Logical Operator1' */
  boolean_T min_relop_gf;              /* '<S190>/min_relop' */
  boolean_T F_Brake_hold_conditions_met;/* '<S177>/Logical Operator2' */
  boolean_T Unit_Delay_h0;             /* '<S181>/Unit_Delay' */
  boolean_T LogicalOperator1_ou;       /* '<S181>/Logical Operator1' */
  boolean_T min_relop_i;               /* '<S183>/min_relop' */
  boolean_T Unit_Delay_m1;             /* '<S147>/Unit_Delay' */
  boolean_T LogicalOperator1_pf;       /* '<S147>/Logical Operator1' */
  boolean_T Unit_Delay1_jk;            /* '<S167>/Unit_Delay1' */
  boolean_T LogicalOperator_l;         /* '<S167>/Logical Operator' */
  boolean_T Unit_Delay_li;             /* '<S168>/Unit_Delay' */
  boolean_T LogicalOperator1_oy;       /* '<S168>/Logical Operator1' */
  boolean_T Compare_ni;                /* '<S152>/Compare' */
  boolean_T Compare_dl;                /* '<S151>/Compare' */
  boolean_T min_relop_a;               /* '<S170>/min_relop' */
  boolean_T RelationalOperator1_k;     /* '<S173>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S173>/Relational Operator' */
  boolean_T Unit_Delay_nm;             /* '<S109>/Unit_Delay' */
  boolean_T LogicalOperator1_ax;       /* '<S109>/Logical Operator1' */
  boolean_T Unit_Delay1_i;             /* '<S129>/Unit_Delay1' */
  boolean_T LogicalOperator_mu;        /* '<S129>/Logical Operator' */
  boolean_T Unit_Delay_nl;             /* '<S130>/Unit_Delay' */
  boolean_T LogicalOperator1_mk;       /* '<S130>/Logical Operator1' */
  boolean_T Compare_aa;                /* '<S114>/Compare' */
  boolean_T Compare_jrp;               /* '<S113>/Compare' */
  boolean_T min_relop_p;               /* '<S132>/min_relop' */
  boolean_T RelationalOperator1_gi;    /* '<S135>/Relational Operator1' */
  boolean_T RelationalOperator_ba;     /* '<S135>/Relational Operator' */
  boolean_T Reshape_j[2];              /* '<S60>/Reshape' */
  boolean_T Unit_Delay_mw;             /* '<S60>/Unit_Delay' */
  boolean_T Selector_h;                /* '<S60>/Selector' */
  boolean_T Operator_bgt;              /* '<S62>/Operator' */
  boolean_T Reshape_a[2];              /* '<S54>/Reshape' */
  boolean_T Unit_Delay_p1;             /* '<S54>/Unit_Delay' */
  boolean_T Selector_p;                /* '<S54>/Selector' */
  boolean_T Operator_ho;               /* '<S56>/Operator' */
  boolean_T Reshape_n[2];              /* '<S48>/Reshape' */
  boolean_T Unit_Delay_fl;             /* '<S48>/Unit_Delay' */
  boolean_T Selector_i;                /* '<S48>/Selector' */
  boolean_T Operator_oua;              /* '<S50>/Operator' */
  boolean_T Reshape_i[2];              /* '<S42>/Reshape' */
  boolean_T Unit_Delay_m0;             /* '<S42>/Unit_Delay' */
  boolean_T Selector_g;                /* '<S42>/Selector' */
  boolean_T Operator_dhn;              /* '<S44>/Operator' */
  boolean_T Reshape_a5[2];             /* '<S36>/Reshape' */
  boolean_T Unit_Delay_g;              /* '<S36>/Unit_Delay' */
  boolean_T Selector_b;                /* '<S36>/Selector' */
  boolean_T Operator_bsv;              /* '<S38>/Operator' */
  boolean_T Reshape_g[2];              /* '<S30>/Reshape' */
  boolean_T Unit_Delay_h4;             /* '<S30>/Unit_Delay' */
  boolean_T Selector_d;                /* '<S30>/Selector' */
  boolean_T Operator_f5e;              /* '<S32>/Operator' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_a;/* '<S1047>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1046>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1046>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_f;/* '<S1046>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_j;/* '<S1046>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_b_T If_Then_Else_f2;/* '<S985>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_ls;/* '<S984>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_hq;/* '<S809>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_d1;/* '<S804>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_j;/* '<S803>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_m;/* '<S734>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_b;/* '<S734>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_p;/* '<S734>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S734>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_o;/* '<S752>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_m;/* '<S787>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S787>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_i;/* '<S751>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_bm;/* '<S779>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b;/* '<S779>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_g;/* '<S750>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_f;/* '<S771>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_h3;/* '<S771>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_b;/* '<S749>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S763>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_h;/* '<S763>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S748>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_b;/* '<S755>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_d;/* '<S755>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S732>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S732>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m;/* '<S732>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S456>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S381>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S338>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S370>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S336>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S357>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_jh;/* '<S348>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S351>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S342>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S341>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S328>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S320>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S319>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b3;/* '<S318>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S303>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m0;/* '<S303>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_mf_T If_Then_Else_co;/* '<S301>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_mv;/* '<S274>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m1;/* '<S274>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_km;/* '<S295>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S295>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S293>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pe;/* '<S293>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h3;/* '<S267>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pi;/* '<S267>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_cp;/* '<S262>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S261>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S238>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S238>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_as;/* '<S213>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_dz;/* '<S220>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_br;/* '<S220>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_kg;/* '<S219>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bo;/* '<S219>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h;/* '<S218>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ct;/* '<S218>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nr;/* '<S222>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_g;/* '<S197>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_e;/* '<S188>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_o5;/* '<S178>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_il;/* '<S178>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nz;/* '<S181>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_mf;/* '<S177>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gj;/* '<S177>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_m_T If_Then_Else_l;/* '<S98>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_g;/* '<S173>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fo;/* '<S173>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iy;/* '<S168>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bc;/* '<S167>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S144>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S144>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_bq;/* '<S135>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n;/* '<S135>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bg;/* '<S130>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ly;/* '<S129>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S106>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S106>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_pf;/* '<S90>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iz;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_o;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S766>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_h;     /* '<S758>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_m;     /* '<S782>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S774>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S803>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S804>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_n;     /* '<S802>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_mv;    /* '<S801>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S790>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S393>/Unit Delay' */
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
  real_T Unit_Delay_118_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_119_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_12_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_120_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_121_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_122_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_123_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_124_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_127_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_128_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_129_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_13_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_130_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_131_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_132_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_133_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_136_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_137_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_138_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_139_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_14_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_140_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_141_DSTATE;        /* '<S3>/Unit_Delay' */
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
  real_T Unit_Delay_48_DSTATE;         /* '<S3>/Unit_Delay' */
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
  real_T Unit_Delay_8_DSTATE;          /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_82_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_83_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_84_DSTATE;         /* '<S3>/Unit_Delay' */
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
  real_T Unit_Delay_DSTATE;            /* '<S898>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_k;          /* '<S817>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_c;     /* '<S812>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_m;          /* '<S641>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_p;          /* '<S513>/Unit_Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S386>/Unit Delay1' */
  real_T LongitudnalPosition_DSTATE;   /* '<S387>/LongitudnalPosition' */
  real_T VehHeading_DSTATE;            /* '<S387>/VehHeading' */
  real_T XPosition_DSTATE;             /* '<S387>/XPosition' */
  real_T YPosition_DSTATE;             /* '<S387>/YPosition' */
  real_T Unit_Delay_DSTATE_e;          /* '<S338>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hj;    /* '<S385>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_mj;         /* '<S382>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_g;          /* '<S336>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hq;    /* '<S374>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_b;          /* '<S371>/Unit_Delay' */
  real_T DelayInput1_DSTATE[2];        /* '<S333>/Delay Input1' */
  real_T Unit_Delay_DSTATE_bw;         /* '<S351>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S362>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_ps;         /* '<S360>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S340>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S346>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S341>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S341>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S341>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S339>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S197>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S196>/UD' */
  real_T Unit_Delay2_DSTATE_dv;        /* '<S318>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S319>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_p;         /* '<S320>/Unit_Delay2' */
  real_T UnitDelay_DSTATE_m;           /* '<S288>/Unit Delay' */
  real_T UnitDelay_DSTATE_m0;          /* '<S289>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S289>/Unit Delay1' */
  real_T DelayInput2_DSTATE;           /* '<S299>/Delay Input2' */
  real_T Integrator_DSTATE;            /* '<S298>/Integrator' */
  real_T Filter_DSTATE;                /* '<S298>/Filter' */
  real_T DelayInput_DSTATE;            /* '<S302>/Delay Input' */
  real_T DelayOutput_DSTATE;           /* '<S302>/Delay Output' */
  real_T DelayInput2_DSTATE_a;         /* '<S300>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S292>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE_l;         /* '<S312>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S80>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_e;           /* '<S80>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S364>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g0;    /* '<S365>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S359>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S331>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a;     /* '<S266>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_m;         /* '<S261>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_fz;         /* '<S216>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_o;          /* '<S178>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_d;     /* '<S192>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_om;         /* '<S189>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_c;          /* '<S177>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_b;     /* '<S185>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_oj;         /* '<S182>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_eu;         /* '<S140>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g2;    /* '<S172>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_c;         /* '<S167>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_h;          /* '<S139>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_d;          /* '<S105>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g1;    /* '<S134>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_dy;        /* '<S129>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_i;          /* '<S104>/Unit_Delay' */
  volatile real_T RateTransition_Buffer0;/* '<S407>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S407>/Rate Transition' */
  real_T TmpRTBAtANDInport1_Buffer0;   /* synthesized block */
  real_T Subtract_DWORK1;              /* '<S641>/Subtract' */
  real_T TmpRTBAtSignalConversion1Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion3Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion2Inport;/* synthesized block */
  real_T TmpRTBAtrad2deg1Inport1_Buffer0;/* synthesized block */
  real_T TmpRTBAtsignCurveOffsetInport1_;/* synthesized block */
  real_T TmpRTBAtAdd2Inport2_Buffer0;  /* synthesized block */
  real_T PrevY;                        /* '<S301>/Limit Rate Limiter' */
  real_T TimeFinal;                    /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityInitialLimited;       /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityFinalLimited;         /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationInitialLimited;   /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationFinalLimited;     /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk56;                       /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk12;                       /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T a;                            /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T b;                            /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T c;                            /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Acceleration34;               /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* '<S205>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV; /* '<S205>/Relay_control_state_machine' */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* '<S205>/Relay_control_state_machine' */
  real_T MABX_RELAY_ON_DELAY_SECS_APV; /* '<S205>/Relay_control_state_machine' */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T IGN_RELAY_ON_DELAY_SECS_APV;  /* '<S205>/Relay_control_state_machine' */
  void *dsa_tcpip_setup_PWORK;         /* '<S390>/dsa_tcpip_setup' */
  void *TCPIP_Com_PWORK;               /* '<S391>/TCPIP_Com' */
  void* Assertion_slioAccessor;        /* '<S753>/Assertion' */
  void* Assertion_slioAccessor_m;      /* '<S761>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S769>/Assertion' */
  void* Assertion_slioAccessor_h;      /* '<S777>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S785>/Assertion' */
  void* Assertion_slioAccessor_j;      /* '<S810>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S278>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S283>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S344>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S372>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S383>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S329>/Assertion' */
  void* Assertion_slioAccessor_eg;     /* '<S264>/Assertion' */
  void* Assertion_slioAccessor_dy;     /* '<S190>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S183>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S170>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S132>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S278>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S283>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_mt;        /* '<S1020>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_o;         /* '<S1005>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_a;         /* '<S977>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j;         /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_125_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_126_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S389>/Heartbeat' */
  int32_T clockTickCounter_l;          /* '<S1048>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S639>/Add' */
  uint32_T Subtract_DWORK1_p;          /* '<S1020>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S1001>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S205>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S390>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S450>/S-Function1' */
  int_T SFunction1_IWORK_n[2];         /* '<S451>/S-Function1' */
  int_T SFunction1_IWORK_k[2];         /* '<S452>/S-Function1' */
  int_T SFunction1_IWORK_f[2];         /* '<S453>/S-Function1' */
  int_T SFunction1_IWORK_h[2];         /* '<S454>/S-Function1' */
  int_T SFunction1_IWORK_p[2];         /* '<S455>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S399>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S766>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_k;    /* '<S758>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_kj;   /* '<S782>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S774>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_kq;   /* '<S802>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S801>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_e;    /* '<S790>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_o;         /* '<S829>/Unit Delay1' */
  uint8_T Unit_Delay_135_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S812>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_g[17];      /* '<S638>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_g0[39];     /* '<S510>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_aq;   /* '<S385>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ip;   /* '<S374>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S362>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S346>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S364>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S365>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S331>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S134>/FixPt Unit Delay2' */
  boolean_T Unit_Delay_DSTATE_cq;      /* '<S736>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S803>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_n;      /* '<S736>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_c;      /* '<S804>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S639>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_df;      /* '<S639>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_n;       /* '<S645>/Unit_Delay' */
  boolean_T Unit_Delay_79_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S395>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S829>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S829>/Unit Delay3' */
  boolean_T Unit_Delay_116_DSTATE;     /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_117_DSTATE;     /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_134_DSTATE;     /* '<S3>/Unit_Delay' */
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
  boolean_T Unit_Delay2_DSTATE_eg;     /* '<S639>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_b;      /* '<S639>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_b0;      /* '<S646>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_a;       /* '<S1019>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_do2;     /* '<S981>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_j4;      /* '<S1004>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_bz;      /* '<S976>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_aa;      /* '<S808>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_kw;      /* '<S809>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ex;      /* '<S807>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S380>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S381>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S369>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S370>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ko;      /* '<S353>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l;       /* '<S342>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eu4;     /* '<S101>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_d;      /* '<S197>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_db;     /* '<S318>/Unit_Delay1' */
  boolean_T DelayInput1_DSTATE_f0;     /* '<S317>/Delay Input1' */
  boolean_T Unit_Delay1_DSTATE_a;      /* '<S319>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p;      /* '<S320>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_bd;      /* '<S327>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jt;      /* '<S328>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ll;      /* '<S326>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_p1;     /* '<S214>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_lq;      /* '<S214>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_be;      /* '<S241>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_h;      /* '<S261>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_fi;      /* '<S262>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ae;      /* '<S188>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_or;      /* '<S181>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_nw;      /* '<S147>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_f;      /* '<S167>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_g4;      /* '<S168>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_omj;     /* '<S109>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_bb;     /* '<S129>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_h4;      /* '<S130>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l5;      /* '<S60>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_i5;      /* '<S54>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mq;      /* '<S48>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_h41;     /* '<S42>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_je;      /* '<S36>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_f1;      /* '<S30>/Unit_Delay' */
  volatile int8_T RateTransition_write_buf;/* '<S407>/Rate Transition' */
  volatile int8_T RateTransition_read_buf;/* '<S407>/Rate Transition' */
  volatile int8_T RateTransition_last_buf_wr;/* '<S407>/Rate Transition' */
  int8_T LongitudnalPosition_PrevResetSt;/* '<S387>/LongitudnalPosition' */
  int8_T VehHeading_PrevResetState;    /* '<S387>/VehHeading' */
  int8_T XPosition_PrevResetState;     /* '<S387>/XPosition' */
  int8_T YPosition_PrevResetState;     /* '<S387>/YPosition' */
  int8_T Integrator_PrevResetState;    /* '<S298>/Integrator' */
  int8_T Filter_PrevResetState;        /* '<S298>/Filter' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S292>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_e;/* '<S80>/Discrete-Time Integrator' */
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S829>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S829>/Chart' */
  uint8_T temporalCounter_i1_n;        /* '<S829>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S815>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S815>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S733>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S733>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S733>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S733>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S733>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_o;       /* '<S733>/Health State Machine PWM Sensor 1' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S292>/Discrete-Time Integrator' */
  uint8_T is_active_c12_SUB_L4_Task_10ms_;/* '<S276>/Chart' */
  uint8_T is_c12_SUB_L4_Task_10ms_SUB_STE;/* '<S276>/Chart' */
  uint8_T is_active_c6_SUB_L4_Task_10ms_S;/* '<S205>/Relay_control_state_machine' */
  uint8_T is_c6_SUB_L4_Task_10ms_SUB_STAT;/* '<S205>/Relay_control_state_machine' */
  uint8_T is_POWER_UP_ROUTINE;         /* '<S205>/Relay_control_state_machine' */
  uint8_T is_POWER_DOWN_ROUTINE;       /* '<S205>/Relay_control_state_machine' */
  uint8_T is_active_c19_SUB_L4_Task_10ms_;/* '<S79>/Chart' */
  uint8_T is_c19_SUB_L4_Task_10ms_SUB_STA;/* '<S79>/Chart' */
  boolean_T AlternateMethod;           /* '<S335>/VehicleSpeedSetpointDynamicCalculation' */
  boolean_T Slew_at_event_MODE;        /* '<S730>/Slew_at_event' */
  boolean_T Slew_at_event_MODE_d;      /* '<S276>/Slew_at_event' */
  boolean_T Throttle_controller_gov_MODE;/* '<S79>/Throttle_controller_gov' */
  boolean_T Engine_speed_target_MODE;  /* '<S79>/Engine_speed_target' */
  boolean_T Determine_shift_interlock_brake;/* '<S99>/Determine_shift_interlock_brake_pressure_target' */
  boolean_T Determine_brake_hold_pressure_t;/* '<S99>/Determine_brake_hold_pressure_target' */
  boolean_T Bendix_2C2_vehicle_speed_feedba;/* '<S77>/Bendix_2C2_vehicle_speed_feedback_pressure_controller' */
  boolean_T Bendix_2C2_brake_application_pr;/* '<S77>/Bendix_2C2_brake_application_pressure_feedback_controller' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S238>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S238>/Calculate_D_term' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S144>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S144>/Calculate_D_term' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S106>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S106>/Calculate_D_term' */
} DW_L4_MABX_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1033>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_o;/* '<S1032>/CAN_TYPE1_TX_M1_C1' */
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

/* Parameters for system: '<S106>/Calculate_D_term' */
struct P_Calculate_D_term_L4_MABX_T_ {
  real_T GPID_d_term_Y0;               /* Expression: 0
                                        * Referenced by: '<S110>/GPID_d_term'
                                        */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S115>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.0001
                                        * Referenced by: '<S115>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S115>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S115>/Unit_Delay2'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S116>/FixPt Unit Delay1'
                                          */
  boolean_T Unit_Delay1_InitialCondition;/* Expression: true
                                          * Referenced by: '<S115>/Unit_Delay1'
                                          */
  boolean_T Constant_Value;            /* Expression: false
                                        * Referenced by: '<S115>/Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S116>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value;         /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S116>/FixPt Constant'
                                        */
};

/* Parameters for system: '<S106>/Calculate_I_term' */
struct P_Calculate_I_term_L4_MABX_T_ {
  real_T GPID_i_sum_error_init_Y0;     /* Expression: 0
                                        * Referenced by: '<S119>/GPID_i_sum_error_init'
                                        */
  real_T GPID_i_term_Y0;               /* Expression: 0
                                        * Referenced by: '<S111>/GPID_i_term'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S122>/FixPt Unit Delay1'
                                          */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S120>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S111>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S123>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S124>/Constant'
                                        */
  boolean_T F_GPID_hold_i_term_Y0;     /* Expression: false
                                        * Referenced by: '<S111>/F_GPID_hold_i_term'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S122>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value;         /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S122>/FixPt Constant'
                                        */
};

/* Parameters for system: '<S947>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S962>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1061>/Constant'
                                        */
  real_T TransferFcnLeadorLag_ICPrevInpu;/* Mask Parameter: TransferFcnLeadorLag_ICPrevInpu
                                          * Referenced by: '<S302>/Delay Input'
                                          */
  real_T TransferFcnLeadorLag_ICPrevOutp;/* Mask Parameter: TransferFcnLeadorLag_ICPrevOutp
                                          * Referenced by: '<S302>/Delay Output'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S196>/UD'
                                          */
  real_T PIDController_LowerSaturationLi;/* Mask Parameter: PIDController_LowerSaturationLi
                                          * Referenced by: '<S298>/Saturate'
                                          */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S298>/Filter Coefficient'
                                        */
  real_T WrapToZero1_Threshold;        /* Mask Parameter: WrapToZero1_Threshold
                                        * Referenced by: '<S907>/FixPt Switch'
                                        */
  real_T PIDController_UpperSaturationLi;/* Mask Parameter: PIDController_UpperSaturationLi
                                          * Referenced by: '<S298>/Saturate'
                                          */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S114>/Constant'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S113>/Constant'
                                        */
  real_T CompareToConstant1_const_m;   /* Mask Parameter: CompareToConstant1_const_m
                                        * Referenced by: '<S152>/Constant'
                                        */
  real_T CompareToConstant_const_c;    /* Mask Parameter: CompareToConstant_const_c
                                        * Referenced by: '<S151>/Constant'
                                        */
  real_T CompareToConstant1_const_i;   /* Mask Parameter: CompareToConstant1_const_i
                                        * Referenced by: '<S246>/Constant'
                                        */
  real_T CompareToConstant_const_d;    /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S245>/Constant'
                                        */
  real_T CompareToConstant9_const;     /* Mask Parameter: CompareToConstant9_const
                                        * Referenced by: '<S378>/Constant'
                                        */
  real_T CompareToConstant10_const;    /* Mask Parameter: CompareToConstant10_const
                                        * Referenced by: '<S375>/Constant'
                                        */
  real_T CompareToConstant11_const;    /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S376>/Constant'
                                        */
  real_T CompareToConstant12_const;    /* Mask Parameter: CompareToConstant12_const
                                        * Referenced by: '<S377>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S366>/Constant'
                                        */
  real_T CompareToConstant8_const;     /* Mask Parameter: CompareToConstant8_const
                                        * Referenced by: '<S367>/Constant'
                                        */
  real_T CompareToConstant_const_g;    /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S310>/Constant'
                                        */
  real_T CheckStaticLowerBound_min;    /* Mask Parameter: CheckStaticLowerBound_min
                                        * Referenced by: '<S132>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_d;  /* Mask Parameter: CheckStaticLowerBound_min_d
                                        * Referenced by: '<S170>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_i;  /* Mask Parameter: CheckStaticLowerBound_min_i
                                        * Referenced by: '<S183>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_f;  /* Mask Parameter: CheckStaticLowerBound_min_f
                                        * Referenced by: '<S190>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_b;  /* Mask Parameter: CheckStaticLowerBound_min_b
                                        * Referenced by: '<S264>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_n;  /* Mask Parameter: CheckStaticLowerBound_min_n
                                        * Referenced by: '<S329>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_o;  /* Mask Parameter: CheckStaticLowerBound_min_o
                                        * Referenced by: '<S344>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_h;  /* Mask Parameter: CheckStaticLowerBound_min_h
                                        * Referenced by: '<S372>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_nz; /* Mask Parameter: CheckStaticLowerBound_min_nz
                                        * Referenced by: '<S383>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_g;  /* Mask Parameter: CheckStaticLowerBound_min_g
                                        * Referenced by: '<S810>/min_val'
                                        */
  real_T DetectChange1_vinit;          /* Mask Parameter: DetectChange1_vinit
                                        * Referenced by: '<S333>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_n;        /* Mask Parameter: DetectChange1_vinit_n
                                        * Referenced by: '<S340>/Delay Input1'
                                        */
  ENUM_J1939_SWITCH_T CompareToConstant2_const;/* Mask Parameter: CompareToConstant2_const
                                                * Referenced by: '<S209>/Constant'
                                                */
  ENUM_J1939_SWITCH_T CompareToConstant_const_e;/* Mask Parameter: CompareToConstant_const_e
                                                 * Referenced by: '<S207>/Constant'
                                                 */
  ENUM_J1939_SWITCH_T CompareToConstant1_const_j;/* Mask Parameter: CompareToConstant1_const_j
                                                  * Referenced by: '<S208>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant_const_p;/* Mask Parameter: CompareToConstant_const_p
                                                  * Referenced by: '<S744>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_c;/* Mask Parameter: CompareToConstant2_const_c
                                                   * Referenced by: '<S745>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_e;/* Mask Parameter: CompareToConstant3_const_e
                                                   * Referenced by: '<S740>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S796>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S795>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_c;/* Mask Parameter: CompareToConstant3_const_c
                                                   * Referenced by: '<S794>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_mm;/* Mask Parameter: CompareToConstant1_const_mm
                                                    * Referenced by: '<S793>/Constant'
                                                    */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_e;/* Mask Parameter: CompareToConstant1_const_e
                                                   * Referenced by: '<S739>/Constant'
                                                   */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_o;/* Mask Parameter: CompareToConstant_const_o
                                                            * Referenced by: '<S987>/Constant'
                                                            */
  real32_T IntervalTest_lowlimit;      /* Mask Parameter: IntervalTest_lowlimit
                                        * Referenced by: '<S281>/Lower Limit'
                                        */
  real32_T IntervalTest_lowlimit_k;    /* Mask Parameter: IntervalTest_lowlimit_k
                                        * Referenced by: '<S286>/Lower Limit'
                                        */
  real32_T IntervalTest_uplimit;       /* Mask Parameter: IntervalTest_uplimit
                                        * Referenced by: '<S281>/Upper Limit'
                                        */
  real32_T IntervalTest_uplimit_e;     /* Mask Parameter: IntervalTest_uplimit_e
                                        * Referenced by: '<S286>/Upper Limit'
                                        */
  uint32_T Repeating_Sequence_Stair_OutVal[8];/* Mask Parameter: Repeating_Sequence_Stair_OutVal
                                               * Referenced by: '<S1019>/Constant'
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
  boolean_T DetectChange_vinit;        /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S317>/Delay Input1'
                                        */
  boolean_T DetectRisePositive1_vinit; /* Mask Parameter: DetectRisePositive1_vinit
                                        * Referenced by: '<S395>/Delay Input1'
                                        */
  uint8_T Operator_BitMask;            /* Mask Parameter: Operator_BitMask
                                        * Referenced by: '<S836>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S833>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S834>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S835>/Operator'
                                        */
  uint8_T Operator_BitMask_jr;         /* Mask Parameter: Operator_BitMask_jr
                                        * Referenced by: '<S837>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S838>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S844>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S841>/Operator'
                                        */
  uint8_T Operator_BitMask_il;         /* Mask Parameter: Operator_BitMask_il
                                        * Referenced by: '<S842>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S843>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S845>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S846>/Operator'
                                        */
  uint8_T Operator_BitMask_aa;         /* Mask Parameter: Operator_BitMask_aa
                                        * Referenced by: '<S888>/Operator'
                                        */
  uint8_T Operator_BitMask_m1;         /* Mask Parameter: Operator_BitMask_m1
                                        * Referenced by: '<S890>/Operator'
                                        */
  uint8_T Operator_BitMask_ml;         /* Mask Parameter: Operator_BitMask_ml
                                        * Referenced by: '<S891>/Operator'
                                        */
  uint8_T Operator_BitMask_fi;         /* Mask Parameter: Operator_BitMask_fi
                                        * Referenced by: '<S889>/Operator'
                                        */
  uint8_T Operator_BitMask_fc;         /* Mask Parameter: Operator_BitMask_fc
                                        * Referenced by: '<S892>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S893>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S866>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S871>/Operator'
                                        */
  uint8_T Operator_BitMask_e4;         /* Mask Parameter: Operator_BitMask_e4
                                        * Referenced by: '<S867>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S872>/Operator'
                                        */
  uint8_T Operator_BitMask_gd;         /* Mask Parameter: Operator_BitMask_gd
                                        * Referenced by: '<S873>/Operator'
                                        */
  uint8_T Operator_BitMask_n;          /* Mask Parameter: Operator_BitMask_n
                                        * Referenced by: '<S870>/Operator'
                                        */
  uint8_T Operator_BitMask_ej;         /* Mask Parameter: Operator_BitMask_ej
                                        * Referenced by: '<S918>/Operator'
                                        */
  uint8_T Operator_BitMask_oh;         /* Mask Parameter: Operator_BitMask_oh
                                        * Referenced by: '<S915>/Operator'
                                        */
  uint8_T Operator_BitMask_bc;         /* Mask Parameter: Operator_BitMask_bc
                                        * Referenced by: '<S916>/Operator'
                                        */
  uint8_T Operator_BitMask_h1;         /* Mask Parameter: Operator_BitMask_h1
                                        * Referenced by: '<S917>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S919>/Operator'
                                        */
  uint8_T Operator_BitMask_ex;         /* Mask Parameter: Operator_BitMask_ex
                                        * Referenced by: '<S920>/Operator'
                                        */
  uint8_T Operator_BitMask_et;         /* Mask Parameter: Operator_BitMask_et
                                        * Referenced by: '<S926>/Operator'
                                        */
  uint8_T Operator_BitMask_aw;         /* Mask Parameter: Operator_BitMask_aw
                                        * Referenced by: '<S927>/Operator'
                                        */
  uint8_T Operator_BitMask_ap;         /* Mask Parameter: Operator_BitMask_ap
                                        * Referenced by: '<S923>/Operator'
                                        */
  uint8_T Operator_BitMask_g5;         /* Mask Parameter: Operator_BitMask_g5
                                        * Referenced by: '<S924>/Operator'
                                        */
  uint8_T Operator_BitMask_eq;         /* Mask Parameter: Operator_BitMask_eq
                                        * Referenced by: '<S925>/Operator'
                                        */
  uint8_T Operator_BitMask_ch;         /* Mask Parameter: Operator_BitMask_ch
                                        * Referenced by: '<S928>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S941>/Operator'
                                        */
  uint8_T Operator_BitMask_ge;         /* Mask Parameter: Operator_BitMask_ge
                                        * Referenced by: '<S937>/Operator'
                                        */
  uint8_T Operator_BitMask_bo;         /* Mask Parameter: Operator_BitMask_bo
                                        * Referenced by: '<S938>/Operator'
                                        */
  uint8_T Operator_BitMask_oz;         /* Mask Parameter: Operator_BitMask_oz
                                        * Referenced by: '<S939>/Operator'
                                        */
  uint8_T Operator_BitMask_da;         /* Mask Parameter: Operator_BitMask_da
                                        * Referenced by: '<S940>/Operator'
                                        */
  uint8_T Operator_BitMask_bk;         /* Mask Parameter: Operator_BitMask_bk
                                        * Referenced by: '<S942>/Operator'
                                        */
  uint8_T Operator_BitMask_es;         /* Mask Parameter: Operator_BitMask_es
                                        * Referenced by: '<S986>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_du;         /* Mask Parameter: Operator_BitMask_du
                                        * Referenced by: '<S997>/Operator'
                                        */
  uint8_T Operator_BitMask_lw;         /* Mask Parameter: Operator_BitMask_lw
                                        * Referenced by: '<S992>/Operator'
                                        */
  uint8_T Operator_BitMask_ds;         /* Mask Parameter: Operator_BitMask_ds
                                        * Referenced by: '<S993>/Operator'
                                        */
  uint8_T Operator_BitMask_el;         /* Mask Parameter: Operator_BitMask_el
                                        * Referenced by: '<S994>/Operator'
                                        */
  uint8_T Operator_BitMask_ia;         /* Mask Parameter: Operator_BitMask_ia
                                        * Referenced by: '<S995>/Operator'
                                        */
  uint8_T Operator_BitMask_eo;         /* Mask Parameter: Operator_BitMask_eo
                                        * Referenced by: '<S996>/Operator'
                                        */
  uint8_T Operator_BitMask_ck;         /* Mask Parameter: Operator_BitMask_ck
                                        * Referenced by: '<S813>/Operator'
                                        */
  uint8_T Operator_BitMask_km;         /* Mask Parameter: Operator_BitMask_km
                                        * Referenced by: '<S814>/Operator'
                                        */
  uint8_T Operator_BitMask_jz;         /* Mask Parameter: Operator_BitMask_jz
                                        * Referenced by: '<S662>/Operator'
                                        */
  uint8_T Operator_BitMask_a0;         /* Mask Parameter: Operator_BitMask_a0
                                        * Referenced by: '<S661>/Operator'
                                        */
  uint8_T Operator_BitMask_c4;         /* Mask Parameter: Operator_BitMask_c4
                                        * Referenced by: '<S674>/Operator'
                                        */
  uint8_T Operator_BitMask_kq;         /* Mask Parameter: Operator_BitMask_kq
                                        * Referenced by: '<S673>/Operator'
                                        */
  uint8_T Operator_BitMask_o2;         /* Mask Parameter: Operator_BitMask_o2
                                        * Referenced by: '<S675>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_OutV_b[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_b
                                               * Referenced by: '<S976>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_Out_bx[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_bx
                                               * Referenced by: '<S1004>/Constant'
                                               */
  real_T PID_output_Y0;                /* Expression: 0
                                        * Referenced by: '<S96>/PID_output'
                                        */
  real_T BRK_PRESS_DEM_AW_HYSTERESIS_APV;/* Expression: 7
                                          * Referenced by: '<S96>/BRK_PRESS_DEM_AW_HYSTERESIS_APV'
                                          */
  real_T BRK_PRESS_DEM_KD_APV_Value;   /* Expression: 0
                                        * Referenced by: '<S96>/BRK_PRESS_DEM_KD_APV'
                                        */
  real_T BRK_PRESS_DEM_KI_APV_Value;   /* Expression: 0.1
                                        * Referenced by: '<S96>/BRK_PRESS_DEM_KI_APV'
                                        */
  real_T BRK_PRESS_DEM_KP_APV_Value;   /* Expression: 0.05
                                        * Referenced by: '<S96>/BRK_PRESS_DEM_KP_APV'
                                        */
  real_T BRK_PRESS_DEM_T_FILT_CTRL_ERROR;/* Expression: 0.025
                                          * Referenced by: '<S96>/BRK_PRESS_DEM_T_FILT_CTRL_ERROR_APV'
                                          */
  real_T BRK_PRESS_DEM_T_FILT_D_APV_Valu;/* Expression: 0.025
                                          * Referenced by: '<S96>/BRK_PRESS_DEM_T_FILT_D_APV'
                                          */
  real_T CPV_Value;                    /* Expression: 0
                                        * Referenced by: '<S96>/CPV'
                                        */
  real_T CPV3_Value;                   /* Expression: 0
                                        * Referenced by: '<S96>/CPV3'
                                        */
  real_T CPV4_Value;                   /* Expression: 5000
                                        * Referenced by: '<S96>/CPV4'
                                        */
  real_T CPV5_Value;                   /* Expression: 5000
                                        * Referenced by: '<S96>/CPV5'
                                        */
  real_T CPV6_Value;                   /* Expression: 100
                                        * Referenced by: '<S96>/CPV6'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S96>/Gain'
                                        */
  real_T Unit_Delay_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S105>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S134>/FixPt Unit Delay1'
                                          */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S129>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.0001
                                        * Referenced by: '<S129>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S129>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S129>/Unit_Delay2'
                                        */
  real_T Unit_Delay_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S104>/Unit_Delay'
                                        */
  real_T PID_output_Y0_p;              /* Expression: 0
                                        * Referenced by: '<S97>/PID_output'
                                        */
  real_T BRK_DECEL_DEM_AW_HYSTERESIS_APV;/* Expression: 12
                                          * Referenced by: '<S97>/BRK_DECEL_DEM_AW_HYSTERESIS_APV'
                                          */
  real_T BRK_DECEL_DEM_SLEW_DEC_APV_Valu;/* Expression: 20
                                          * Referenced by: '<S97>/BRK_DECEL_DEM_SLEW_DEC_APV'
                                          */
  real_T BRK_DECEL_DEM_SLEW_INC_APV_Valu;/* Expression: 20
                                          * Referenced by: '<S97>/BRK_DECEL_DEM_SLEW_INC_APV'
                                          */
  real_T BRK_DECEL_DEM_T_FILT_CTRL_ERROR;/* Expression: 0.025
                                          * Referenced by: '<S97>/BRK_DECEL_DEM_T_FILT_CTRL_ERROR_APV'
                                          */
  real_T BRK_DECEL_DEM_T_FILT_D_APV_Valu;/* Expression: 0.4
                                          * Referenced by: '<S97>/BRK_DECEL_DEM_T_FILT_D_APV'
                                          */
  real_T CPV_Value_i;                  /* Expression: 0
                                        * Referenced by: '<S97>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_f;/* Expression: 0
                                        * Referenced by: '<S140>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_b;/* Expression: 0.0
                                          * Referenced by: '<S172>/FixPt Unit Delay1'
                                          */
  real_T Saturation_UpperSat_o;        /* Expression: Inf
                                        * Referenced by: '<S167>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0.0001
                                        * Referenced by: '<S167>/Saturation'
                                        */
  real_T Constant1_Value_o;            /* Expression: 1
                                        * Referenced by: '<S167>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_b;/* Expression: 0
                                         * Referenced by: '<S167>/Unit_Delay2'
                                         */
  real_T Unit_Delay_InitialCondition_h;/* Expression: 0
                                        * Referenced by: '<S139>/Unit_Delay'
                                        */
  real_T Brake_hold_brake_press_target_k;/* Expression: 0
                                          * Referenced by: '<S177>/Brake_hold_brake_press_target_kpa'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_INC_APV;/* Expression: 30
                                          * Referenced by: '<S177>/BRAKE_PRESS_TARGET_S LEW_INC_APV'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_DEC_APV;/* Expression: 5000
                                          * Referenced by: '<S177>/BRAKE_PRESS_TARGET_SLEW_DEC_APV'
                                          */
  real_T CPV_Value_k;                  /* Expression: 865
                                        * Referenced by: '<S177>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_d;/* Expression: 0
                                        * Referenced by: '<S177>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_p;/* Expression: 0.0
                                          * Referenced by: '<S185>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_k;/* Expression: 0
                                        * Referenced by: '<S182>/Unit_Delay'
                                        */
  real_T Shift_interlock_brake_press_tar;/* Expression: 0
                                          * Referenced by: '<S178>/Shift_interlock_brake_press_target_kpa'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_DEC_A_b;/* Expression: 5000
                                          * Referenced by: '<S178>/BRAKE_PRESS_TARGET_SLEW_DEC_APV'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_INC_A_g;/* Expression: 30
                                          * Referenced by: '<S178>/BRAKE_PRESS_TARGET_SLEW_INC_APV'
                                          */
  real_T CPV_Value_l;                  /* Expression: 865
                                        * Referenced by: '<S178>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_l;/* Expression: 0
                                        * Referenced by: '<S178>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_j;/* Expression: 0.0
                                          * Referenced by: '<S192>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_ha;/* Expression: 0
                                         * Referenced by: '<S189>/Unit_Delay'
                                         */
  real_T Constant2_Value;              /* Expression: 0.01
                                        * Referenced by: '<S79>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S79>/Constant3'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S204>/Out1'
                                        */
  real_T CONVERSION_CONSTANT_CPV_Value;/* Expression: 63360/(pi*60)
                                        * Referenced by: '<S204>/CONVERSION_CONSTANT_CPV'
                                        */
  real_T Constant1_Value_f;            /* Expression: 3000
                                        * Referenced by: '<S204>/Constant1'
                                        */
  real_T Constant2_Value_m;            /* Expression: 0.01
                                        * Referenced by: '<S204>/Constant2'
                                        */
  real_T KPH_TO_MPH_Gain;              /* Expression: 0.6213712
                                        * Referenced by: '<S204>/KPH_TO_MPH'
                                        */
  real_T REAR_AXLE_RATIO_VALUE_APV_Value;/* Expression: 2.64
                                          * Referenced by: '<S204>/REAR_AXLE_RATIO_VALUE_APV'
                                          */
  real_T TIRE_DIAM_INCHES_APV_Value;   /* Expression: 39.9
                                        * Referenced by: '<S204>/TIRE_DIAM_INCHES_APV'
                                        */
  real_T PID_output_Y0_c;              /* Expression: 0
                                        * Referenced by: '<S206>/PID_output'
                                        */
  real_T PID_output_unlim_Y0;          /* Expression: 0
                                        * Referenced by: '<S206>/PID_output_unlim'
                                        */
  real_T PID_control_error_Y0;         /* Expression: 0
                                        * Referenced by: '<S206>/PID_control_error'
                                        */
  real_T PID_p_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S206>/PID_p_term'
                                        */
  real_T PID_i_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S206>/PID_i_term'
                                        */
  real_T PID_d_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S206>/PID_d_term'
                                        */
  real_T Constant1_Value_c;            /* Expression: 100
                                        * Referenced by: '<S213>/Constant1'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S213>/Constant3'
                                        */
  real_T Constant2_Value_b;            /* Expression: 100
                                        * Referenced by: '<S213>/Constant2'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S213>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 100
                                        * Referenced by: '<S213>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S213>/Constant6'
                                        */
  real_T uDLookupTable_tableData[3];   /* Expression: [0 0.5779 0.5779]
                                        * Referenced by: '<S224>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[3];    /* Expression: [0 1 200]
                                        * Referenced by: '<S224>/1-D Lookup Table'
                                        */
  real_T Veh_Frontal_Area_m2_Value;    /* Expression: 10.382
                                        * Referenced by: '<S217>/Veh_Frontal_Area_m^2'
                                        */
  real_T KPH_TO_MS_Gain;               /* Expression: 0.2777778
                                        * Referenced by: '<S224>/KPH_TO_M//S'
                                        */
  real_T KPA_TO_PA_Gain;               /* Expression: 1000
                                        * Referenced by: '<S224>/KPA_TO_PA'
                                        */
  real_T Constant_Value;               /* Expression: 273.15
                                        * Referenced by: '<S224>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 287.058
                                        * Referenced by: '<S224>/Constant1'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0.5
                                        * Referenced by: '<S224>/Constant2'
                                        */
  real_T Constant2_Value_bc;           /* Expression: pi
                                        * Referenced by: '<S225>/Constant2'
                                        */
  real_T Constant3_Value_n;            /* Expression: 180
                                        * Referenced by: '<S225>/Constant3'
                                        */
  real_T Constant1_Value_a;            /* Expression: 9.807
                                        * Referenced by: '<S225>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 0.005
                                        * Referenced by: '<S228>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0.01
                                        * Referenced by: '<S228>/Constant1'
                                        */
  real_T Constant2_Value_bq;           /* Expression: 0.0095
                                        * Referenced by: '<S228>/Constant2'
                                        */
  real_T KPA_TO_MS_Gain;               /* Expression: 0.27778
                                        * Referenced by: '<S228>/KPA_TO_M//S'
                                        */
  real_T Constant6_Value_g;            /* Expression: 100
                                        * Referenced by: '<S228>/Constant6'
                                        */
  real_T TIRE1_tire_pressure_Value;    /* Expression: 689.4757
                                        * Referenced by: '<S217>/TIRE1_tire_pressure'
                                        */
  real_T Truck166_tire_pressure_Value; /* Expression: 689.4757
                                        * Referenced by: '<S222>/Truck166_tire_pressure'
                                        */
  real_T KPA_TO_BAR_Gain;              /* Expression: 0.01
                                        * Referenced by: '<S228>/KPA_TO_BAR'
                                        */
  real_T Constant4_Value_o;            /* Expression: pi
                                        * Referenced by: '<S226>/Constant4'
                                        */
  real_T Constant5_Value_p;            /* Expression: 180
                                        * Referenced by: '<S226>/Constant5'
                                        */
  real_T Constant3_Value_p;            /* Expression: 9.807
                                        * Referenced by: '<S226>/Constant3'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S222>/Constant'
                                        */
  real_T R_wheel_m_Value;              /* Expression: 0.5
                                        * Referenced by: '<S217>/R_wheel_m'
                                        */
  real_T N_rar_Value;                  /* Expression: 3.25
                                        * Referenced by: '<S217>/N_rar'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 20
                                        * Referenced by: '<S217>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0.1
                                        * Referenced by: '<S217>/Saturation'
                                        */
  real_T eta_Value;                    /* Expression: 0.98
                                        * Referenced by: '<S217>/eta'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 100
                                        * Referenced by: '<S217>/Gain'
                                        */
  real_T ZeroRoadLoadCPV_Value;        /* Expression: 0
                                        * Referenced by: '<S213>/ZeroRoadLoadCPV'
                                        */
  real_T TqDemDt_Value;                /* Expression: 0.01
                                        * Referenced by: '<S206>/TqDemDt'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_o;/* Expression: 0.0
                                          * Referenced by: '<S266>/FixPt Unit Delay1'
                                          */
  real_T TqDemSlewInc_Value;           /* Expression: 3
                                        * Referenced by: '<S206>/TqDemSlewInc'
                                        */
  real_T TqDemSlewDec_Value;           /* Expression: 20
                                        * Referenced by: '<S206>/TqDemSlewDec'
                                        */
  real_T TqDemTFildCtrlErrorSecs_Value;/* Expression: 1
                                        * Referenced by: '<S206>/TqDemTFildCtrlErrorSecs'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: Inf
                                        * Referenced by: '<S261>/Saturation'
                                        */
  real_T Saturation_LowerSat_g5;       /* Expression: 0.0001
                                        * Referenced by: '<S261>/Saturation'
                                        */
  real_T Constant1_Value_ci;           /* Expression: 1
                                        * Referenced by: '<S261>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_j;/* Expression: 0
                                         * Referenced by: '<S261>/Unit_Delay2'
                                         */
  real_T TqDemTFildTSecs_Value;        /* Expression: 0.029
                                        * Referenced by: '<S206>/TqDemTFildTSecs'
                                        */
  real_T TqDemAwHyst_Value;            /* Expression: 7
                                        * Referenced by: '<S206>/TqDemAwHyst'
                                        */
  real_T Unit_Delay_InitialCondition_kg;/* Expression: 0
                                         * Referenced by: '<S216>/Unit_Delay'
                                         */
  real_T TqDemLimMax_Value;            /* Expression: 60
                                        * Referenced by: '<S206>/TqDemLimMax'
                                        */
  real_T TqDemLimMin_Value;            /* Expression: 0
                                        * Referenced by: '<S206>/TqDemLimMin'
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
                                        * Referenced by: '<S288>/Constant'
                                        */
  real_T Constant2_Value_hu;           /* Expression: -1
                                        * Referenced by: '<S288>/Constant2'
                                        */
  real_T Constant3_Value_pw;           /* Expression: 1
                                        * Referenced by: '<S288>/Constant3'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S273>/Constant9'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S291>/Constant'
                                        */
  real_T zero1_Value;                  /* Expression: 0
                                        * Referenced by: '<S275>/zero1'
                                        */
  real_T correction_Value;             /* Expression: 0.5
                                        * Referenced by: '<S275>/correction'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S276>/Constant1'
                                        */
  real_T Out_Y0;                       /* Computed Parameter: Out_Y0
                                        * Referenced by: '<S325>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_f;/* Expression: 0.0
                                          * Referenced by: '<S331>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_ah;           /* Expression: 1
                                        * Referenced by: '<S325>/Constant1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 0.5
                                        * Referenced by: '<S363>/Gain'
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
                                        * Referenced by: '<S199>/Constant'
                                        */
  real_T Constant_Value_il;            /* Expression: 0
                                        * Referenced by: '<S210>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S211>/Constant'
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
                                        * Referenced by: '<S98>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S98>/Gain5'
                                        */
  real_T BRAKE_APPL_THRESHOLD_KPA_APV_Va;/* Expression: 16
                                          * Referenced by: '<S98>/BRAKE_APPL_THRESHOLD_KPA_APV'
                                          */
  real_T SPN904_ZERO_SPD_CPV_Value;    /* Expression: 0
                                        * Referenced by: '<S102>/SPN904_ZERO_SPD_CPV'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 0.5
                                        * Referenced by: '<S99>/Gain'
                                        */
  real_T Constant_Value_ol;            /* Expression: 0
                                        * Referenced by: '<S200>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S98>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S98>/Gain2'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 0.5
                                        * Referenced by: '<S100>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S98>/Gain3'
                                        */
  real_T Gain5_Gain_l;                 /* Expression: 100
                                        * Referenced by: '<S100>/Gain5'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S100>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S100>/Saturation3'
                                        */
  real_T Unit_Delay_InitialCondition_i;/* Expression: 0
                                        * Referenced by: '<S338>/Unit_Delay'
                                        */
  real_T STABILITY_ACTIVE_VSPD_TARGET_AP;/* Expression: 0
                                          * Referenced by: '<S338>/STABILITY_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_n;            /* Expression: 255
                                        * Referenced by: '<S338>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_l;/* Expression: 0.0
                                          * Referenced by: '<S385>/FixPt Unit Delay1'
                                          */
  real_T STABILITY_CTRL_SLEW_INC_APV_Val;/* Expression: 3
                                          * Referenced by: '<S338>/STABILITY_CTRL_SLEW_INC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_hae;/* Expression: 0
                                          * Referenced by: '<S382>/Unit_Delay'
                                          */
  real_T STABILITY_CTRL_SLEW_DEC_APV_Val;/* Expression: 5
                                          * Referenced by: '<S338>/STABILITY_CTRL_SLEW_DEC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_fb;/* Expression: 0
                                         * Referenced by: '<S336>/Unit_Delay'
                                         */
  real_T FCW_ACTIVE_VSPD_TARGET_APV_Valu;/* Expression: 0
                                          * Referenced by: '<S336>/FCW_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_b;            /* Expression: 255
                                        * Referenced by: '<S336>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_d;/* Expression: 0.0
                                          * Referenced by: '<S374>/FixPt Unit Delay1'
                                          */
  real_T FCW_CTRL_SLEW_INC_APV_Value;  /* Expression: 1
                                        * Referenced by: '<S336>/FCW_CTRL_SLEW_INC_APV'
                                        */
  real_T Unit_Delay_InitialCondition_c;/* Expression: 0
                                        * Referenced by: '<S371>/Unit_Delay'
                                        */
  real_T FCW_CTRL_SLEW_DEC_APV_Value;  /* Expression: 5000
                                        * Referenced by: '<S336>/FCW_CTRL_SLEW_DEC_APV'
                                        */
  real_T TmpRTBAtSignalConversion3Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S332>/Constant'
                                        */
  real_T TmpRTBAtSignalConversion2Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation5_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S335>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S335>/Saturation5'
                                        */
  real_T MIN_VSPD_SIGMOID_INITIAL_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S335>/MIN_VSPD_SIGMOID_INITIAL_KPH_APV'
                                          */
  real_T Gain1_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S335>/Gain1'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S335>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S335>/Saturation4'
                                        */
  real_T MIN_VSPD_SIGMOID_FINAL_KPH_APV_;/* Expression: 0
                                          * Referenced by: '<S335>/MIN_VSPD_SIGMOID_FINAL_KPH_APV'
                                          */
  real_T Gain2_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S335>/Gain2'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S335>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S335>/Saturation6'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S335>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S335>/Saturation7'
                                        */
  real_T VEH_JERK_INITIAL_APV_Value;   /* Expression: 0.4
                                        * Referenced by: '<S81>/VEH_JERK_INITIAL_APV'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S335>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: 0.001
                                        * Referenced by: '<S335>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S335>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0.001
                                        * Referenced by: '<S335>/Saturation2'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: 3.6
                                        * Referenced by: '<S335>/Gain3'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S352>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition_e;/* Expression: 0
                                        * Referenced by: '<S351>/Unit_Delay'
                                        */
  real_T MIN_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S347>/MIN_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T MAX_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S347>/MAX_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T ACCEL_RATE_ABS_MAX_THRESHOLD_MS;/* Expression: 5
                                          * Referenced by: '<S347>/ACCEL_RATE_ABS_MAX_THRESHOLD_MS2_APV'
                                          */
  real_T ACCEL_RATE_ABS_MIN_THRESHOLD_MS;/* Expression: -5
                                          * Referenced by: '<S347>/ACCEL_RATE_ABS_MIN_THRESHOLD_MS2_APV'
                                          */
  real_T JERK_RATE_ABS_MAX_THRESHOLD_MS3;/* Expression: 5
                                          * Referenced by: '<S347>/JERK_RATE_ABS_MAX_THRESHOLD_MS3_APV'
                                          */
  real_T JERK_RATE_ABS_MIN_THRESHOLD_MS3;/* Expression: -5
                                          * Referenced by: '<S347>/JERK_RATE_ABS_MIN_THRESHOLD_MS3_APV'
                                          */
  real_T MAX_DISTANCE_DELTA_THRESHOLD_M_;/* Expression: 0.5
                                          * Referenced by: '<S347>/MAX_DISTANCE_DELTA_THRESHOLD_M_APV'
                                          */
  real_T CPV1_Value_i;                 /* Expression: 0.1
                                        * Referenced by: '<S348>/CPV1'
                                        */
  real_T CPV_Value_h;                  /* Expression: 0
                                        * Referenced by: '<S357>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_h;/* Expression: 0.0
                                          * Referenced by: '<S362>/FixPt Unit Delay1'
                                          */
  real_T CPV1_Value_e;                 /* Expression: 1
                                        * Referenced by: '<S356>/CPV1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S348>/Gain1'
                                        */
  real_T Unit_Delay_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S360>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_m;/* Expression: 0.0
                                          * Referenced by: '<S346>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_1_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S341>/Unit_Delay'
                                        */
  real_T Unit_Delay_2_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S341>/Unit_Delay'
                                        */
  real_T Unit_Delay_3_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S341>/Unit_Delay'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 1/3.6
                                        * Referenced by: '<S341>/Gain2'
                                        */
  real_T Saturation4_UpperSat_a;       /* Expression: 255
                                        * Referenced by: '<S341>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_e;       /* Expression: 0.001
                                        * Referenced by: '<S341>/Saturation4'
                                        */
  real_T Unit_Delay_InitialCondition_e2;/* Expression: 0
                                         * Referenced by: '<S339>/Unit_Delay'
                                         */
  real_T Saturation1_UpperSat_j;       /* Expression: Inf
                                        * Referenced by: '<S341>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0.001
                                        * Referenced by: '<S341>/Saturation1'
                                        */
  real_T Saturation8_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S81>/Saturation8'
                                        */
  real_T Saturation8_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S81>/Saturation8'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 100
                                        * Referenced by: '<S100>/Gain1'
                                        */
  real_T Saturation1_UpperSat_l;       /* Expression: 100
                                        * Referenced by: '<S100>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: 0
                                        * Referenced by: '<S100>/Saturation1'
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
                                        * Referenced by: '<S100>/Gain2'
                                        */
  real_T Saturation2_UpperSat_b;       /* Expression: 100
                                        * Referenced by: '<S100>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_o;       /* Expression: 0
                                        * Referenced by: '<S100>/Saturation2'
                                        */
  real_T BENDIX_2C2_BRAKE_APPL_THRESHOLD;/* Expression: 16
                                          * Referenced by: '<S98>/BENDIX_2C2_BRAKE_APPL_THRESHOLD_KPA_APV'
                                          */
  real_T Saturation4_UpperSat_f;       /* Expression: 0
                                        * Referenced by: '<S100>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_a;       /* Expression: -15.687
                                        * Referenced by: '<S100>/Saturation4'
                                        */
  real_T Constant10_Value;             /* Expression: 0.01
                                        * Referenced by: '<S101>/Constant10'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 0.5
                                        * Referenced by: '<S101>/Gain'
                                        */
  real_T VSPD_CAN_HRW_0B_FILT_T_APV_Valu;/* Expression: 0.2
                                          * Referenced by: '<S101>/VSPD_CAN_HRW_0B_FILT_T_APV'
                                          */
  real_T Saturation_UpperSat_l;        /* Expression: Inf
                                        * Referenced by: '<S197>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 0.0001
                                        * Referenced by: '<S197>/Saturation'
                                        */
  real_T Constant1_Value_od;           /* Expression: 1
                                        * Referenced by: '<S197>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_a;/* Expression: 0
                                         * Referenced by: '<S197>/Unit_Delay2'
                                         */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S196>/TSamp'
                                        */
  real_T Gain_Gain_no;                 /* Expression: 0.01
                                        * Referenced by: '<S77>/Gain'
                                        */
  real_T CPV1_Value_n;                 /* Expression: 0
                                        * Referenced by: '<S205>/CPV1'
                                        */
  real_T CPV2_Value_h;                 /* Expression: 0
                                        * Referenced by: '<S205>/CPV2'
                                        */
  real_T CPV3_Value_n;                 /* Expression: 0
                                        * Referenced by: '<S205>/CPV3'
                                        */
  real_T CPV5_Value_g;                 /* Expression: 1
                                        * Referenced by: '<S205>/CPV5'
                                        */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV_Va;/* Expression: 0.2
                                          * Referenced by: '<S205>/IGN_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T IGN_RELAY_ON_DELAY_SECS_APV_Val;/* Expression: 0.2
                                          * Referenced by: '<S205>/IGN_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T IGN_SW_VOLTAGE_THRESHOLD_APV_Va;/* Expression: 6
                                          * Referenced by: '<S205>/IGN_SW_VOLTAGE_THRESHOLD_APV'
                                          */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* Expression: 0
                                          * Referenced by: '<S205>/INVERTER_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* Expression: 0
                                          * Referenced by: '<S205>/INVERTER_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV_V;/* Expression: 0
                                          * Referenced by: '<S205>/MABX_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T MABX_RELAY_ON_DELAY_SECS_APV_Va;/* Expression: 0
                                          * Referenced by: '<S205>/MABX_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV_;/* Expression: 0
                                          * Referenced by: '<S205>/SENSOR_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* Expression: 0
                                          * Referenced by: '<S205>/SENSOR_RELAY_OFF_DELAY_SECS_APV'
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
                                        * Referenced by: '<S273>/Constant19'
                                        */
  real_T IV_Value;                     /* Expression: 0
                                        * Referenced by: '<S278>/IV'
                                        */
  real_T Constant1_Value_i;            /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S271>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.1
                                        * Referenced by: '<S271>/Constant'
                                        */
  real_T timeConstant1_Value;          /* Expression: .01
                                        * Referenced by: '<S275>/timeConstant1'
                                        */
  real_T timeConstant_Value;           /* Expression: 1.0
                                        * Referenced by: '<S275>/timeConstant'
                                        */
  real_T Saturation_UpperSat_o1;       /* Expression: Inf
                                        * Referenced by: '<S318>/Saturation'
                                        */
  real_T Saturation_LowerSat_p2;       /* Expression: 0.0001
                                        * Referenced by: '<S318>/Saturation'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S318>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S318>/Unit_Delay2'
                                         */
  real_T rateOfChangeThreshold_Value;  /* Expression: 5.75
                                        * Referenced by: '<S275>/rateOfChangeThreshold'
                                        */
  real_T closeToLaneEdgeThreshold_Value;/* Expression: 4.0
                                         * Referenced by: '<S275>/closeToLaneEdgeThreshold'
                                         */
  real_T zero2_Value;                  /* Expression: 0
                                        * Referenced by: '<S275>/zero2'
                                        */
  real_T timeConstant3_Value;          /* Expression: .01
                                        * Referenced by: '<S275>/timeConstant3'
                                        */
  real_T timeConstant2_Value;          /* Expression: 3
                                        * Referenced by: '<S275>/timeConstant2'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: Inf
                                        * Referenced by: '<S319>/Saturation'
                                        */
  real_T Saturation_LowerSat_ph;       /* Expression: 0.0001
                                        * Referenced by: '<S319>/Saturation'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S319>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ji;/* Expression: 0
                                          * Referenced by: '<S319>/Unit_Delay2'
                                          */
  real_T timeConstant5_Value;          /* Expression: .01
                                        * Referenced by: '<S275>/timeConstant5'
                                        */
  real_T timeConstant4_Value;          /* Expression: .5
                                        * Referenced by: '<S275>/timeConstant4'
                                        */
  real_T Saturation_UpperSat_ok;       /* Expression: Inf
                                        * Referenced by: '<S320>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0.0001
                                        * Referenced by: '<S320>/Saturation'
                                        */
  real_T Constant1_Value_oi;           /* Expression: 1
                                        * Referenced by: '<S320>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ap;/* Expression: 0
                                          * Referenced by: '<S320>/Unit_Delay2'
                                          */
  real_T Constant3_Value_j;            /* Expression: 2
                                        * Referenced by: '<S276>/Constant3'
                                        */
  real_T Constant4_Value_bq;           /* Expression: -2
                                        * Referenced by: '<S276>/Constant4'
                                        */
  real_T Constant2_Value_p;            /* Expression: .01
                                        * Referenced by: '<S276>/Constant2'
                                        */
  real_T enable_Value;                 /* Expression: 1
                                        * Referenced by: '<S276>/enable'
                                        */
  real_T enableSlew_Value;             /* Expression: 1
                                        * Referenced by: '<S276>/enableSlew'
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
                                        * Referenced by: '<S273>/Constant21'
                                        */
  real_T SteeringControlIntGain_Value; /* Expression: 20
                                        * Referenced by: '<S273>/SteeringControlIntGain'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S288>/Unit Delay'
                                        */
  real_T Constant20_Value;             /* Expression: -240
                                        * Referenced by: '<S273>/Constant20'
                                        */
  real_T Constant5_Value_o;            /* Expression: 2
                                        * Referenced by: '<S291>/Constant5'
                                        */
  real_T Constant4_Value_j;            /* Expression: -1
                                        * Referenced by: '<S291>/Constant4'
                                        */
  real_T Constant2_Value_g;            /* Expression: -1
                                        * Referenced by: '<S291>/Constant2'
                                        */
  real_T Constant1_Value_ly;           /* Expression: 1
                                        * Referenced by: '<S291>/Constant1'
                                        */
  real_T Constant3_Value_g;            /* Expression: 1
                                        * Referenced by: '<S291>/Constant3'
                                        */
  real_T UnitDelay_InitialCondition_g; /* Expression: 0
                                        * Referenced by: '<S289>/Unit Delay'
                                        */
  real_T SteeringControlDGain_Value;   /* Expression: .01
                                        * Referenced by: '<S273>/SteeringControlDGain'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S289>/Unit Delay1'
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
                                        * Referenced by: '<S277>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_k[9];  /* Expression: [0 5 10 15 25 35 45 55 65]
                                        * Referenced by: '<S277>/1-D Lookup Table'
                                        */
  real_T stanleySteeringControlGain_Valu;/* Expression: double(350)
                                          * Referenced by: '<S277>/stanleySteeringControlGain'
                                          */
  real_T IV_Value_o;                   /* Expression: 0
                                        * Referenced by: '<S283>/IV'
                                        */
  real_T Step_Time;                    /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S272>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 1
                                        * Referenced by: '<S272>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 0
                                        * Referenced by: '<S272>/Step'
                                        */
  real_T Constant1_Value_iy;           /* Expression: 0.01
                                        * Referenced by: '<S272>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: 2.0
                                        * Referenced by: '<S272>/Constant'
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
                                        * Referenced by: '<S277>/Saturation'
                                        */
  real_T Saturation_LowerSat_bq;       /* Expression: 7.5
                                        * Referenced by: '<S277>/Saturation'
                                        */
  real_T kph2mps_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S277>/kph2mps_'
                                        */
  real_T deg2rad1_Gain;                /* Expression: pi/180
                                        * Referenced by: '<S80>/deg2rad1'
                                        */
  real_T TmpRTBAtAdd2Inport2_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T desHeadingWeight_Gain;        /* Expression: 0
                                        * Referenced by: '<S277>/desHeadingWeight'
                                        */
  real_T SaturationSpeedLookup_tableData[6];/* Expression: [1,0.9,0.8,0.5,0.2,0.01]
                                             * Referenced by: '<S301>/Saturation Speed Lookup'
                                             */
  real_T SaturationSpeedLookup_bp01Data[6];/* Expression: [10,20,30,50,70,100]
                                            * Referenced by: '<S301>/Saturation Speed Lookup'
                                            */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S312>/sample time'
                                        */
  real_T sampletime_WtEt_j;            /* Computed Parameter: sampletime_WtEt_j
                                        * Referenced by: '<S299>/sample time'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S299>/Delay Input2'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S274>/Zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S298>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S298>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S298>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S298>/Filter'
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
                                        * Referenced by: '<S274>/1-D Lookup Table'
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
                                        * Referenced by: '<S274>/1-D Lookup Table'
                                        */
  real_T deg2rad_Gain_l;               /* Expression: pi/180
                                        * Referenced by: '<S274>/deg2rad'
                                        */
  real_T invert_Gain;                  /* Expression: -1
                                        * Referenced by: '<S274>/invert'
                                        */
  real_T sampletime_WtEt_p;            /* Computed Parameter: sampletime_WtEt_p
                                        * Referenced by: '<S300>/sample time'
                                        */
  real_T DelayInput2_InitialCondition_m;/* Expression: 0
                                         * Referenced by: '<S300>/Delay Input2'
                                         */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S292>/Discrete-Time Integrator'
                                         */
  real_T DelayInput2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S312>/Delay Input2'
                                         */
  real_T Gain3_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S301>/Gain3'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S301>/Gain1'
                                        */
  real_T rad2deg_Gain;                 /* Expression: 180/pi
                                        * Referenced by: '<S80>/rad2deg'
                                        */
  real_T sign1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S80>/sign1'
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
  real_T Gain_Gain_p;                  /* Expression: -1
                                        * Referenced by: '<S292>/Gain'
                                        */
  real_T CurvatureLookupTable_tableData[5];/* Expression: [0.0001,0.001,0.1,0.2,1]
                                            * Referenced by: '<S301>/Curvature Lookup Table'
                                            */
  real_T CurvatureLookupTable_bp01Data[5];/* Expression: [0.00001,0.0001,0.1,0.2,0.5]
                                           * Referenced by: '<S301>/Curvature Lookup Table'
                                           */
  real_T ErrorLookupTable_tableData[5];/* Expression: [0.01,0.05,0.1,0.2,1]
                                        * Referenced by: '<S301>/Error Lookup Table'
                                        */
  real_T ErrorLookupTable_bp01Data[5]; /* Expression: [0.001,0.01,0.1,0.5,1]
                                        * Referenced by: '<S301>/Error Lookup Table'
                                        */
  real_T SpeedLookupTable_tableData[6];/* Expression: [1,0.6,0.3,0.1,0.05,0.01]
                                        * Referenced by: '<S301>/Speed Lookup Table'
                                        */
  real_T SpeedLookupTable_bp01Data[6]; /* Expression: [10,20,30,50,70,100]
                                        * Referenced by: '<S301>/Speed Lookup Table'
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
  real_T sign2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S80>/sign2'
                                        */
  real_T UnitDelay_InitialCondition_g1;/* Expression: 0
                                        * Referenced by: '<S80>/Unit Delay'
                                        */
  real_T CPV_Value_g;                  /* Expression: 1
                                        * Referenced by: '<S356>/CPV'
                                        */
  real_T CPV2_Value_p;                 /* Expression: 1
                                        * Referenced by: '<S356>/CPV2'
                                        */
  real_T CPV_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S358>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dl;/* Expression: 0.0
                                          * Referenced by: '<S364>/FixPt Unit Delay1'
                                          */
  real_T Integrator_method_Value;      /* Expression: 1
                                        * Referenced by: '<S363>/Integrator_method'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ol;/* Expression: 0.0
                                          * Referenced by: '<S365>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_b;/* Expression: 0
                                        * Referenced by: '<S359>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant'
                                        */
  real_T MaximumGoodHDOP_Value;        /* Expression: 2.5
                                        * Referenced by: '<S386>/MaximumGoodHDOP'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S386>/Constant1'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S386>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant18'
                                        */
  real_T Constant19_Value_m;           /* Expression: 0
                                        * Referenced by: '<S386>/Constant19'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S386>/Constant2'
                                        */
  real_T Constant20_Value_i;           /* Expression: 0
                                        * Referenced by: '<S386>/Constant20'
                                        */
  real_T Constant21_Value_g;           /* Expression: 0
                                        * Referenced by: '<S386>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S386>/Constant25'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S386>/Constant3'
                                        */
  real_T Constant4_Value_m;            /* Expression: 0
                                        * Referenced by: '<S386>/Constant4'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S386>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S386>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S386>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S386>/Constant8'
                                        */
  real_T Constant9_Value_m;            /* Expression: 0
                                        * Referenced by: '<S386>/Constant9'
                                        */
  real_T kph2mps_Gain_l;               /* Expression: 1/3.6
                                        * Referenced by: '<S386>/kph2mps'
                                        */
  real_T lookAheadTime_Value;          /* Expression: 2
                                        * Referenced by: '<S386>/lookAheadTime'
                                        */
  real_T kph2mps1_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S386>/kph2mps1'
                                        */
  real_T lookAheadTime1_Value;         /* Expression: 15
                                        * Referenced by: '<S386>/lookAheadTime1'
                                        */
  real_T UnitDelay1_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S386>/Unit Delay1'
                                        */
  real_T InitialHeading_Value;         /* Expression: 0
                                        * Referenced by: '<S387>/InitialHeading'
                                        */
  real_T InitialPosition_Value;        /* Expression: 0
                                        * Referenced by: '<S387>/InitialPosition'
                                        */
  real_T InitialXPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S387>/InitialXPosition'
                                        */
  real_T InitialYPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S387>/InitialYPosition'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 1000/3600
                                        * Referenced by: '<S71>/kph2ms'
                                        */
  real_T LongitudnalPosition_gainval;  /* Computed Parameter: LongitudnalPosition_gainval
                                        * Referenced by: '<S387>/LongitudnalPosition'
                                        */
  real_T reset_Value;                  /* Expression: 0
                                        * Referenced by: '<S387>/reset'
                                        */
  real_T VehHeading_gainval;           /* Computed Parameter: VehHeading_gainval
                                        * Referenced by: '<S387>/VehHeading'
                                        */
  real_T XPosition_gainval;            /* Computed Parameter: XPosition_gainval
                                        * Referenced by: '<S387>/XPosition'
                                        */
  real_T YPosition_gainval;            /* Computed Parameter: YPosition_gainval
                                        * Referenced by: '<S387>/YPosition'
                                        */
  real_T for_logging6_Gain;            /* Expression: 1
                                        * Referenced by: '<S388>/for_logging6'
                                        */
  real_T for_logging5_Gain;            /* Expression: 1
                                        * Referenced by: '<S388>/for_logging5'
                                        */
  real_T for_logging4_Gain;            /* Expression: 1
                                        * Referenced by: '<S388>/for_logging4'
                                        */
  real_T for_logging3_Gain;            /* Expression: 1
                                        * Referenced by: '<S388>/for_logging3'
                                        */
  real_T for_logging2_Gain;            /* Expression: 1
                                        * Referenced by: '<S388>/for_logging2'
                                        */
  real_T ms_to_kmh_2_Gain;             /* Expression: 3.6
                                        * Referenced by: '<S388>/m//s_to_km//h_2'
                                        */
  real_T ms_to_kmh_Gain;               /* Expression: 3.6
                                        * Referenced by: '<S388>/m//s_to_km//h'
                                        */
  real_T for_logging1_Gain;            /* Expression: 1
                                        * Referenced by: '<S388>/for_logging1'
                                        */
  real_T for_logging_Gain;             /* Expression: 1
                                        * Referenced by: '<S388>/for_logging'
                                        */
  real_T Constant_Value_hp;            /* Expression: 1
                                        * Referenced by: '<S393>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S393>/Constant1'
                                        */
  real_T byte1_Y0;                     /* Computed Parameter: byte1_Y0
                                        * Referenced by: '<S467>/byte1'
                                        */
  real_T byte2_Y0;                     /* Computed Parameter: byte2_Y0
                                        * Referenced by: '<S467>/byte2'
                                        */
  real_T byte3_Y0;                     /* Computed Parameter: byte3_Y0
                                        * Referenced by: '<S467>/byte3'
                                        */
  real_T byte4_Y0;                     /* Computed Parameter: byte4_Y0
                                        * Referenced by: '<S467>/byte4'
                                        */
  real_T byte5_Y0;                     /* Computed Parameter: byte5_Y0
                                        * Referenced by: '<S467>/byte5'
                                        */
  real_T byte6_Y0;                     /* Computed Parameter: byte6_Y0
                                        * Referenced by: '<S467>/byte6'
                                        */
  real_T byte7_Y0;                     /* Computed Parameter: byte7_Y0
                                        * Referenced by: '<S467>/byte7'
                                        */
  real_T byte8_Y0;                     /* Computed Parameter: byte8_Y0
                                        * Referenced by: '<S467>/byte8'
                                        */
  real_T RXstatus_Y0;                  /* Computed Parameter: RXstatus_Y0
                                        * Referenced by: '<S467>/RX status'
                                        */
  real_T RXtime_Y0;                    /* Computed Parameter: RXtime_Y0
                                        * Referenced by: '<S467>/RX time'
                                        */
  real_T RXdeltatime_Y0;               /* Computed Parameter: RXdeltatime_Y0
                                        * Referenced by: '<S467>/RX delta time'
                                        */
  real_T byte1_Y0_e;                   /* Computed Parameter: byte1_Y0_e
                                        * Referenced by: '<S476>/byte1'
                                        */
  real_T byte2_Y0_o;                   /* Computed Parameter: byte2_Y0_o
                                        * Referenced by: '<S476>/byte2'
                                        */
  real_T byte3_Y0_m;                   /* Computed Parameter: byte3_Y0_m
                                        * Referenced by: '<S476>/byte3'
                                        */
  real_T byte4_Y0_k;                   /* Computed Parameter: byte4_Y0_k
                                        * Referenced by: '<S476>/byte4'
                                        */
  real_T byte5_Y0_p;                   /* Computed Parameter: byte5_Y0_p
                                        * Referenced by: '<S476>/byte5'
                                        */
  real_T byte6_Y0_m;                   /* Computed Parameter: byte6_Y0_m
                                        * Referenced by: '<S476>/byte6'
                                        */
  real_T byte7_Y0_a;                   /* Computed Parameter: byte7_Y0_a
                                        * Referenced by: '<S476>/byte7'
                                        */
  real_T byte8_Y0_d;                   /* Computed Parameter: byte8_Y0_d
                                        * Referenced by: '<S476>/byte8'
                                        */
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S476>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S476>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
                                        * Referenced by: '<S476>/RX delta time'
                                        */
  real_T SpeedOfForwardVehicle_Y0;     /* Computed Parameter: SpeedOfForwardVehicle_Y0
                                        * Referenced by: '<S484>/SpeedOfForwardVehicle'
                                        */
  real_T DistanceToForwardVehicle_Y0;  /* Computed Parameter: DistanceToForwardVehicle_Y0
                                        * Referenced by: '<S484>/DistanceToForwardVehicle'
                                        */
  real_T AdaptiveCruiseCtrlSetSpeed_Y0;/* Computed Parameter: AdaptiveCruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S484>/AdaptiveCruiseCtrlSetSpeed'
                                        */
  real_T AdaptiveCruiseCtrlMode_Y0;    /* Computed Parameter: AdaptiveCruiseCtrlMode_Y0
                                        * Referenced by: '<S484>/AdaptiveCruiseCtrlMode'
                                        */
  real_T AdptveCruiseCtrlSetDistanceMode;/* Computed Parameter: AdptveCruiseCtrlSetDistanceMode
                                          * Referenced by: '<S484>/AdptveCruiseCtrlSetDistanceMode'
                                          */
  real_T RoadCurvature_Y0;             /* Computed Parameter: RoadCurvature_Y0
                                        * Referenced by: '<S484>/RoadCurvature'
                                        */
  real_T ACCTargetDetected_Y0;         /* Computed Parameter: ACCTargetDetected_Y0
                                        * Referenced by: '<S484>/ACCTargetDetected'
                                        */
  real_T ACCSystemShutoffWarning_Y0;   /* Computed Parameter: ACCSystemShutoffWarning_Y0
                                        * Referenced by: '<S484>/ACCSystemShutoffWarning'
                                        */
  real_T ACCDistanceAlertSignal_Y0;    /* Computed Parameter: ACCDistanceAlertSignal_Y0
                                        * Referenced by: '<S484>/ACCDistanceAlertSignal'
                                        */
  real_T ForwardCollisionWarning_Y0;   /* Computed Parameter: ForwardCollisionWarning_Y0
                                        * Referenced by: '<S484>/ForwardCollisionWarning'
                                        */
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S484>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S484>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S484>/RX delta time'
                                        */
  real_T AdvEmergencyBrkSysState_Y0;   /* Computed Parameter: AdvEmergencyBrkSysState_Y0
                                        * Referenced by: '<S486>/AdvEmergencyBrkSysState'
                                        */
  real_T CollisionWarningLevel_Y0;     /* Computed Parameter: CollisionWarningLevel_Y0
                                        * Referenced by: '<S486>/CollisionWarningLevel'
                                        */
  real_T RelObjctDetForAdvEmergBrakingSy;/* Computed Parameter: RelObjctDetForAdvEmergBrakingSy
                                          * Referenced by: '<S486>/RelObjctDetForAdvEmergBrakingSys'
                                          */
  real_T BendOffProbabOfRelevantObject_Y;/* Computed Parameter: BendOffProbabOfRelevantObject_Y
                                          * Referenced by: '<S486>/BendOffProbabOfRelevantObject'
                                          */
  real_T TimeToCollisionWithRelevantObj_;/* Computed Parameter: TimeToCollisionWithRelevantObj_
                                          * Referenced by: '<S486>/TimeToCollisionWithRelevantObj'
                                          */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S486>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S486>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
                                        * Referenced by: '<S486>/RX delta time'
                                        */
  real_T PneumaticSupplyPress_Y0;      /* Computed Parameter: PneumaticSupplyPress_Y0
                                        * Referenced by: '<S488>/PneumaticSupplyPress'
                                        */
  real_T ParkingAnd_orTrailerAirPress_Y0;/* Computed Parameter: ParkingAnd_orTrailerAirPress_Y0
                                          * Referenced by: '<S488>/ParkingAnd_orTrailerAirPress'
                                          */
  real_T ServiceBrakeCircuit1AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit1AirPress_Y0
                                          * Referenced by: '<S488>/ServiceBrakeCircuit1AirPress'
                                          */
  real_T ServiceBrakeCircuit2AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit2AirPress_Y0
                                          * Referenced by: '<S488>/ServiceBrakeCircuit2AirPress'
                                          */
  real_T AuxEquipmentSupplyPress_Y0;   /* Computed Parameter: AuxEquipmentSupplyPress_Y0
                                        * Referenced by: '<S488>/AuxEquipmentSupplyPress'
                                        */
  real_T AirSuspensionSupplyPress_Y0;  /* Computed Parameter: AirSuspensionSupplyPress_Y0
                                        * Referenced by: '<S488>/AirSuspensionSupplyPress'
                                        */
  real_T AirCompressorStatus_Y0;       /* Computed Parameter: AirCompressorStatus_Y0
                                        * Referenced by: '<S488>/AirCompressorStatus'
                                        */
  real_T PowertrainCircuitAirSupplyPress;/* Computed Parameter: PowertrainCircuitAirSupplyPress
                                          * Referenced by: '<S488>/PowertrainCircuitAirSupplyPress'
                                          */
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S488>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S488>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
                                        * Referenced by: '<S488>/RX delta time'
                                        */
  real_T BarometricPress_Y0;           /* Computed Parameter: BarometricPress_Y0
                                        * Referenced by: '<S490>/BarometricPress'
                                        */
  real_T CabInteriorTemp_Y0;           /* Computed Parameter: CabInteriorTemp_Y0
                                        * Referenced by: '<S490>/CabInteriorTemp'
                                        */
  real_T AmbientAirTemp_Y0;            /* Computed Parameter: AmbientAirTemp_Y0
                                        * Referenced by: '<S490>/AmbientAirTemp'
                                        */
  real_T EngAirIntakeTemp_Y0;          /* Computed Parameter: EngAirIntakeTemp_Y0
                                        * Referenced by: '<S490>/EngAirIntakeTemp'
                                        */
  real_T RoadSurfaceTemp_Y0;           /* Computed Parameter: RoadSurfaceTemp_Y0
                                        * Referenced by: '<S490>/RoadSurfaceTemp'
                                        */
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S490>/RX status'
                                        */
  real_T RXtime_Y0_g;                  /* Computed Parameter: RXtime_Y0_g
                                        * Referenced by: '<S490>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S490>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S492>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S492>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_nc;               /* Computed Parameter: RXstatus_Y0_nc
                                        * Referenced by: '<S492>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S492>/RX time'
                                        */
  real_T RXdeltatime_Y0_m;             /* Computed Parameter: RXdeltatime_Y0_m
                                        * Referenced by: '<S492>/RX delta time'
                                        */
  real_T tr0_track_selection_status_Y0;/* Computed Parameter: tr0_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr0_track_selection_status'
                                        */
  real_T tr0_corrected_lateral_distance_;/* Computed Parameter: tr0_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr0_corrected_lateral_distance'
                                          */
  real_T tr1_track_selection_status_Y0;/* Computed Parameter: tr1_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr1_track_selection_status'
                                        */
  real_T tr1_corrected_lateral_distance_;/* Computed Parameter: tr1_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr1_corrected_lateral_distance'
                                          */
  real_T tr2_track_selection_status_Y0;/* Computed Parameter: tr2_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr2_track_selection_status'
                                        */
  real_T tr2_corrected_lateral_distance_;/* Computed Parameter: tr2_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr2_corrected_lateral_distance'
                                          */
  real_T tr3_track_selection_status_Y0;/* Computed Parameter: tr3_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr3_track_selection_status'
                                        */
  real_T tr3_corrected_lateral_distance_;/* Computed Parameter: tr3_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr3_corrected_lateral_distance'
                                          */
  real_T tr4_track_selection_status_Y0;/* Computed Parameter: tr4_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr4_track_selection_status'
                                        */
  real_T tr4_corrected_lateral_distance_;/* Computed Parameter: tr4_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr4_corrected_lateral_distance'
                                          */
  real_T tr5_track_selection_status_Y0;/* Computed Parameter: tr5_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr5_track_selection_status'
                                        */
  real_T tr5_corrected_lateral_distance_;/* Computed Parameter: tr5_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr5_corrected_lateral_distance'
                                          */
  real_T tr6_track_selection_status_Y0;/* Computed Parameter: tr6_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr6_track_selection_status'
                                        */
  real_T tr6_corrected_lateral_distance_;/* Computed Parameter: tr6_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr6_corrected_lateral_distance'
                                          */
  real_T tr7_track_selection_status_Y0;/* Computed Parameter: tr7_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr7_track_selection_status'
                                        */
  real_T tr7_corrected_lateral_distance_;/* Computed Parameter: tr7_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr7_corrected_lateral_distance'
                                          */
  real_T tr8_track_selection_status_Y0;/* Computed Parameter: tr8_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr8_track_selection_status'
                                        */
  real_T tr8_corrected_lateral_distance_;/* Computed Parameter: tr8_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr8_corrected_lateral_distance'
                                          */
  real_T tr9_track_selection_status_Y0;/* Computed Parameter: tr9_track_selection_status_Y0
                                        * Referenced by: '<S494>/tr9_track_selection_status'
                                        */
  real_T tr9_corrected_lateral_distance_;/* Computed Parameter: tr9_corrected_lateral_distance_
                                          * Referenced by: '<S494>/tr9_corrected_lateral_distance'
                                          */
  real_T tr0_lateral_position_Y0;      /* Computed Parameter: tr0_lateral_position_Y0
                                        * Referenced by: '<S494>/tr0_lateral_position'
                                        */
  real_T tr1_lateral_position_Y0;      /* Computed Parameter: tr1_lateral_position_Y0
                                        * Referenced by: '<S494>/tr1_lateral_position'
                                        */
  real_T tr2_lateral_position_Y0;      /* Computed Parameter: tr2_lateral_position_Y0
                                        * Referenced by: '<S494>/tr2_lateral_position'
                                        */
  real_T tr3_lateral_position_Y0;      /* Computed Parameter: tr3_lateral_position_Y0
                                        * Referenced by: '<S494>/tr3_lateral_position'
                                        */
  real_T tr4_lateral_position_Y0;      /* Computed Parameter: tr4_lateral_position_Y0
                                        * Referenced by: '<S494>/tr4_lateral_position'
                                        */
  real_T tr5_lateral_position_Y0;      /* Computed Parameter: tr5_lateral_position_Y0
                                        * Referenced by: '<S494>/tr5_lateral_position'
                                        */
  real_T tr6_lateral_position_Y0;      /* Computed Parameter: tr6_lateral_position_Y0
                                        * Referenced by: '<S494>/tr6_lateral_position'
                                        */
  real_T tr7_lateral_position_Y0;      /* Computed Parameter: tr7_lateral_position_Y0
                                        * Referenced by: '<S494>/tr7_lateral_position'
                                        */
  real_T tr8_lateral_position_Y0;      /* Computed Parameter: tr8_lateral_position_Y0
                                        * Referenced by: '<S494>/tr8_lateral_position'
                                        */
  real_T tr9_lateral_position_Y0;      /* Computed Parameter: tr9_lateral_position_Y0
                                        * Referenced by: '<S494>/tr9_lateral_position'
                                        */
  real_T tr0_range_Y0;                 /* Computed Parameter: tr0_range_Y0
                                        * Referenced by: '<S494>/tr0_range'
                                        */
  real_T tr1_range_Y0;                 /* Computed Parameter: tr1_range_Y0
                                        * Referenced by: '<S494>/tr1_range'
                                        */
  real_T tr2_range_Y0;                 /* Computed Parameter: tr2_range_Y0
                                        * Referenced by: '<S494>/tr2_range'
                                        */
  real_T tr3_range_Y0;                 /* Computed Parameter: tr3_range_Y0
                                        * Referenced by: '<S494>/tr3_range'
                                        */
  real_T tr4_range_Y0;                 /* Computed Parameter: tr4_range_Y0
                                        * Referenced by: '<S494>/tr4_range'
                                        */
  real_T tr5_range_Y0;                 /* Computed Parameter: tr5_range_Y0
                                        * Referenced by: '<S494>/tr5_range'
                                        */
  real_T tr6_range_Y0;                 /* Computed Parameter: tr6_range_Y0
                                        * Referenced by: '<S494>/tr6_range'
                                        */
  real_T tr7_range_Y0;                 /* Computed Parameter: tr7_range_Y0
                                        * Referenced by: '<S494>/tr7_range'
                                        */
  real_T tr8_range_Y0;                 /* Computed Parameter: tr8_range_Y0
                                        * Referenced by: '<S494>/tr8_range'
                                        */
  real_T tr9_range_Y0;                 /* Computed Parameter: tr9_range_Y0
                                        * Referenced by: '<S494>/tr9_range'
                                        */
  real_T tr0_radar_confidence_Y0;      /* Computed Parameter: tr0_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr0_radar_confidence'
                                        */
  real_T tr1_radar_confidence_Y0;      /* Computed Parameter: tr1_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr1_radar_confidence'
                                        */
  real_T tr2_radar_confidence_Y0;      /* Computed Parameter: tr2_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr2_radar_confidence'
                                        */
  real_T tr3_radar_confidence_Y0;      /* Computed Parameter: tr3_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr3_radar_confidence'
                                        */
  real_T tr4_radar_confidence_Y0;      /* Computed Parameter: tr4_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr4_radar_confidence'
                                        */
  real_T tr5_radar_confidence_Y0;      /* Computed Parameter: tr5_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr5_radar_confidence'
                                        */
  real_T tr6_radar_confidence_Y0;      /* Computed Parameter: tr6_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr6_radar_confidence'
                                        */
  real_T tr7_radar_confidence_Y0;      /* Computed Parameter: tr7_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr7_radar_confidence'
                                        */
  real_T tr8_radar_confidence_Y0;      /* Computed Parameter: tr8_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr8_radar_confidence'
                                        */
  real_T tr9_radar_confidence_Y0;      /* Computed Parameter: tr9_radar_confidence_Y0
                                        * Referenced by: '<S494>/tr9_radar_confidence'
                                        */
  real_T tr0_relative_velocitiy_Y0;    /* Computed Parameter: tr0_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr0_relative_velocitiy'
                                        */
  real_T tr0_acceleration_over_ground_Y0;/* Computed Parameter: tr0_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr0_acceleration_over_ground'
                                          */
  real_T tr1_relative_velocitiy_Y0;    /* Computed Parameter: tr1_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr1_relative_velocitiy'
                                        */
  real_T tr1_acceleration_over_ground_Y0;/* Computed Parameter: tr1_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr1_acceleration_over_ground'
                                          */
  real_T tr2_relative_velocitiy_Y0;    /* Computed Parameter: tr2_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr2_relative_velocitiy'
                                        */
  real_T tr2_acceleration_over_ground_Y0;/* Computed Parameter: tr2_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr2_acceleration_over_ground'
                                          */
  real_T tr3_relative_velocitiy_Y0;    /* Computed Parameter: tr3_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr3_relative_velocitiy'
                                        */
  real_T tr3_acceleration_over_ground_Y0;/* Computed Parameter: tr3_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr3_acceleration_over_ground'
                                          */
  real_T tr4_relative_velocitiy_Y0;    /* Computed Parameter: tr4_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr4_relative_velocitiy'
                                        */
  real_T tr4_acceleration_over_ground_Y0;/* Computed Parameter: tr4_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr4_acceleration_over_ground'
                                          */
  real_T tr5_relative_velocitiy_Y0;    /* Computed Parameter: tr5_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr5_relative_velocitiy'
                                        */
  real_T tr5_acceleration_over_ground_Y0;/* Computed Parameter: tr5_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr5_acceleration_over_ground'
                                          */
  real_T tr6_relative_velocitiy_Y0;    /* Computed Parameter: tr6_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr6_relative_velocitiy'
                                        */
  real_T tr6_acceleration_over_ground_Y0;/* Computed Parameter: tr6_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr6_acceleration_over_ground'
                                          */
  real_T tr7_relative_velocitiy_Y0;    /* Computed Parameter: tr7_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr7_relative_velocitiy'
                                        */
  real_T tr7_acceleration_over_ground_Y0;/* Computed Parameter: tr7_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr7_acceleration_over_ground'
                                          */
  real_T tr8_relative_velocitiy_Y0;    /* Computed Parameter: tr8_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr8_relative_velocitiy'
                                        */
  real_T tr8_acceleration_over_ground_Y0;/* Computed Parameter: tr8_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr8_acceleration_over_ground'
                                          */
  real_T tr9_relative_velocitiy_Y0;    /* Computed Parameter: tr9_relative_velocitiy_Y0
                                        * Referenced by: '<S494>/tr9_relative_velocitiy'
                                        */
  real_T tr9_acceleration_over_ground_Y0;/* Computed Parameter: tr9_acceleration_over_ground_Y0
                                          * Referenced by: '<S494>/tr9_acceleration_over_ground'
                                          */
  real_T track_multiplexor_Y0;         /* Computed Parameter: track_multiplexor_Y0
                                        * Referenced by: '<S494>/track_multiplexor'
                                        */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S494>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S494>/RX time'
                                        */
  real_T RXdeltatime_Y0_e;             /* Computed Parameter: RXdeltatime_Y0_e
                                        * Referenced by: '<S494>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0;        /* Computed Parameter: TwoSpeedAxleSwitch_Y0
                                        * Referenced by: '<S496>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0;        /* Computed Parameter: ParkingBrakeSwitch_Y0
                                        * Referenced by: '<S496>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0;     /* Computed Parameter: CruiseCtrlPauseSwitch_Y0
                                        * Referenced by: '<S496>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0; /* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0
                                        * Referenced by: '<S496>/ParkBrakeReleaseInhibitRq'
                                        */
  real_T WheelBasedVehicleSpeed_Y0;    /* Computed Parameter: WheelBasedVehicleSpeed_Y0
                                        * Referenced by: '<S496>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0;          /* Computed Parameter: CruiseCtrlActive_Y0
                                        * Referenced by: '<S496>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0;    /* Computed Parameter: CruiseCtrlEnableSwitch_Y0
                                        * Referenced by: '<S496>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0;               /* Computed Parameter: BrakeSwitch_Y0
                                        * Referenced by: '<S496>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0;              /* Computed Parameter: ClutchSwitch_Y0
                                        * Referenced by: '<S496>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0;       /* Computed Parameter: CruiseCtrlSetSwitch_Y0
                                        * Referenced by: '<S496>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0;     /* Computed Parameter: CruiseCtrlCoastSwitch_Y0
                                        * Referenced by: '<S496>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0;    /* Computed Parameter: CruiseCtrlResumeSwitch_Y0
                                        * Referenced by: '<S496>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0
                                        * Referenced by: '<S496>/CruiseCtrlAccelerateSwitch'
                                        */
  real_T CruiseCtrlSetSpeed_Y0;        /* Computed Parameter: CruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S496>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0;          /* Computed Parameter: PTOGovernorState_Y0
                                        * Referenced by: '<S496>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0;          /* Computed Parameter: CruiseCtrlStates_Y0
                                        * Referenced by: '<S496>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0;    /* Computed Parameter: EngIdleIncrementSwitch_Y0
                                        * Referenced by: '<S496>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0;    /* Computed Parameter: EngIdleDecrementSwitch_Y0
                                        * Referenced by: '<S496>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0;         /* Computed Parameter: EngTestModeSwitch_Y0
                                        * Referenced by: '<S496>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0; /* Computed Parameter: EngShutdownOverrideSwitch_Y0
                                        * Referenced by: '<S496>/EngShutdownOverrideSwitch'
                                        */
  real_T RXstatus_Y0_n1;               /* Computed Parameter: RXstatus_Y0_n1
                                        * Referenced by: '<S496>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S496>/RX time'
                                        */
  real_T RXdeltatime_Y0_f;             /* Computed Parameter: RXdeltatime_Y0_f
                                        * Referenced by: '<S496>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_l;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_l
                                        * Referenced by: '<S498>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_g;      /* Computed Parameter: ParkingBrakeSwitch_Y0_g
                                        * Referenced by: '<S498>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_m;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_m
                                        * Referenced by: '<S498>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_f;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_f
                                         * Referenced by: '<S498>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_m;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_m
                                        * Referenced by: '<S498>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_o;        /* Computed Parameter: CruiseCtrlActive_Y0_o
                                        * Referenced by: '<S498>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_p;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_p
                                        * Referenced by: '<S498>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_a;             /* Computed Parameter: BrakeSwitch_Y0_a
                                        * Referenced by: '<S498>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_b;            /* Computed Parameter: ClutchSwitch_Y0_b
                                        * Referenced by: '<S498>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_b;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_b
                                        * Referenced by: '<S498>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_e;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_e
                                        * Referenced by: '<S498>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_p;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_p
                                        * Referenced by: '<S498>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_k;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_k
                                          * Referenced by: '<S498>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_m;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_m
                                        * Referenced by: '<S498>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_d;        /* Computed Parameter: PTOGovernorState_Y0_d
                                        * Referenced by: '<S498>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_b;        /* Computed Parameter: CruiseCtrlStates_Y0_b
                                        * Referenced by: '<S498>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_i;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_i
                                        * Referenced by: '<S498>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_i;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_i
                                        * Referenced by: '<S498>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_g;       /* Computed Parameter: EngTestModeSwitch_Y0_g
                                        * Referenced by: '<S498>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_d;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_d
                                         * Referenced by: '<S498>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_p;                /* Computed Parameter: RXstatus_Y0_p
                                        * Referenced by: '<S498>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S498>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
                                        * Referenced by: '<S498>/RX delta time'
                                        */
  real_T SID_Y0;                       /* Computed Parameter: SID_Y0
                                        * Referenced by: '<S500>/SID'
                                        */
  real_T COGReference_Y0;              /* Computed Parameter: COGReference_Y0
                                        * Referenced by: '<S500>/COGReference'
                                        */
  real_T CourseOverGround_Y0;          /* Computed Parameter: CourseOverGround_Y0
                                        * Referenced by: '<S500>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0;           /* Computed Parameter: SpeedOverGround_Y0
                                        * Referenced by: '<S500>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_le;               /* Computed Parameter: RXstatus_Y0_le
                                        * Referenced by: '<S500>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S500>/RX time'
                                        */
  real_T RXdeltatime_Y0_ji;            /* Computed Parameter: RXdeltatime_Y0_ji
                                        * Referenced by: '<S500>/RX delta time'
                                        */
  real_T SID_Y0_l;                     /* Computed Parameter: SID_Y0_l
                                        * Referenced by: '<S501>/SID'
                                        */
  real_T COGReference_Y0_k;            /* Computed Parameter: COGReference_Y0_k
                                        * Referenced by: '<S501>/COGReference'
                                        */
  real_T CourseOverGround_Y0_n;        /* Computed Parameter: CourseOverGround_Y0_n
                                        * Referenced by: '<S501>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_c;         /* Computed Parameter: SpeedOverGround_Y0_c
                                        * Referenced by: '<S501>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_pi;               /* Computed Parameter: RXstatus_Y0_pi
                                        * Referenced by: '<S501>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S501>/RX time'
                                        */
  real_T RXdeltatime_Y0_b;             /* Computed Parameter: RXdeltatime_Y0_b
                                        * Referenced by: '<S501>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S503>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_au;               /* Computed Parameter: RXstatus_Y0_au
                                        * Referenced by: '<S503>/RX status'
                                        */
  real_T RXtime_Y0_mx;                 /* Computed Parameter: RXtime_Y0_mx
                                        * Referenced by: '<S503>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S503>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0;          /* Computed Parameter: ASREngCtrlActive_Y0
                                        * Referenced by: '<S505>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0;        /* Computed Parameter: ASRBrakeCtrlActive_Y0
                                        * Referenced by: '<S505>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0;     /* Computed Parameter: AntiLockBrakingActive_Y0
                                        * Referenced by: '<S505>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0;            /* Computed Parameter: EBSBrakeSwitch_Y0
                                        * Referenced by: '<S505>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0;             /* Computed Parameter: BrakePedalPos_Y0
                                        * Referenced by: '<S505>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0;          /* Computed Parameter: ABSOffroadSwitch_Y0
                                        * Referenced by: '<S505>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0;          /* Computed Parameter: ASROffroadSwitch_Y0
                                        * Referenced by: '<S505>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0;       /* Computed Parameter: ASRHillHolderSwitch_Y0
                                        * Referenced by: '<S505>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0
                                        * Referenced by: '<S505>/TractionCtrlOverrideSwitch'
                                        */
  real_T AccelInterlockSwitch_Y0;      /* Computed Parameter: AccelInterlockSwitch_Y0
                                        * Referenced by: '<S505>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0;           /* Computed Parameter: EngDerateSwitch_Y0
                                        * Referenced by: '<S505>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0;      /* Computed Parameter: EngAuxShutdownSwitch_Y0
                                        * Referenced by: '<S505>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0;   /* Computed Parameter: RemoteAccelEnableSwitch_Y0
                                        * Referenced by: '<S505>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0;      /* Computed Parameter: EngRetarderSelection_Y0
                                        * Referenced by: '<S505>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0;       /* Computed Parameter: ABSFullyOperational_Y0
                                        * Referenced by: '<S505>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0;       /* Computed Parameter: EBSRedWarningSignal_Y0
                                        * Referenced by: '<S505>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0; /* Computed Parameter: ABS_EBSAmberWarningSignal_Y0
                                        * Referenced by: '<S505>/ABS_EBSAmberWarningSignal'
                                        */
  real_T ATC_ASRInformationSignal_Y0;  /* Computed Parameter: ATC_ASRInformationSignal_Y0
                                        * Referenced by: '<S505>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCntrl
                                          * Referenced by: '<S505>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0;           /* Computed Parameter: HaltBrakeSwitch_Y0
                                        * Referenced by: '<S505>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0;          /* Computed Parameter: TrailerABSStatus_Y0
                                        * Referenced by: '<S505>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSignal;/* Computed Parameter: TrctrMntdTrilerABSWarningSignal
                                          * Referenced by: '<S505>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_j;                /* Computed Parameter: RXstatus_Y0_j
                                        * Referenced by: '<S505>/RX status'
                                        */
  real_T RXtime_Y0_gu;                 /* Computed Parameter: RXtime_Y0_gu
                                        * Referenced by: '<S505>/RX time'
                                        */
  real_T RXdeltatime_Y0_gb;            /* Computed Parameter: RXdeltatime_Y0_gb
                                        * Referenced by: '<S505>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_i;        /* Computed Parameter: ASREngCtrlActive_Y0_i
                                        * Referenced by: '<S507>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_a;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_a
                                        * Referenced by: '<S507>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_c;   /* Computed Parameter: AntiLockBrakingActive_Y0_c
                                        * Referenced by: '<S507>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_n;          /* Computed Parameter: EBSBrakeSwitch_Y0_n
                                        * Referenced by: '<S507>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_k;           /* Computed Parameter: BrakePedalPos_Y0_k
                                        * Referenced by: '<S507>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_p;        /* Computed Parameter: ABSOffroadSwitch_Y0_p
                                        * Referenced by: '<S507>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_f;        /* Computed Parameter: ASROffroadSwitch_Y0_f
                                        * Referenced by: '<S507>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_b;     /* Computed Parameter: ASRHillHolderSwitch_Y0_b
                                        * Referenced by: '<S507>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_g;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_g
                                          * Referenced by: '<S507>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_n;    /* Computed Parameter: AccelInterlockSwitch_Y0_n
                                        * Referenced by: '<S507>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_a;         /* Computed Parameter: EngDerateSwitch_Y0_a
                                        * Referenced by: '<S507>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_i;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_i
                                        * Referenced by: '<S507>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_c; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_c
                                        * Referenced by: '<S507>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_g;    /* Computed Parameter: EngRetarderSelection_Y0_g
                                        * Referenced by: '<S507>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_g;     /* Computed Parameter: ABSFullyOperational_Y0_g
                                        * Referenced by: '<S507>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_g;     /* Computed Parameter: EBSRedWarningSignal_Y0_g
                                        * Referenced by: '<S507>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_h;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_h
                                         * Referenced by: '<S507>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_h;/* Computed Parameter: ATC_ASRInformationSignal_Y0_h
                                        * Referenced by: '<S507>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_j;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_j
                                          * Referenced by: '<S507>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_k;         /* Computed Parameter: HaltBrakeSwitch_Y0_k
                                        * Referenced by: '<S507>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_e;        /* Computed Parameter: TrailerABSStatus_Y0_e
                                        * Referenced by: '<S507>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_m;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_m
                                          * Referenced by: '<S507>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_ax;               /* Computed Parameter: RXstatus_Y0_ax
                                        * Referenced by: '<S507>/RX status'
                                        */
  real_T RXtime_Y0_i;                  /* Computed Parameter: RXtime_Y0_i
                                        * Referenced by: '<S507>/RX time'
                                        */
  real_T RXdeltatime_Y0_m4;            /* Computed Parameter: RXdeltatime_Y0_m4
                                        * Referenced by: '<S507>/RX delta time'
                                        */
  real_T FrontAxleSpeed_Y0;            /* Computed Parameter: FrontAxleSpeed_Y0
                                        * Referenced by: '<S509>/FrontAxleSpeed'
                                        */
  real_T RelativeSpeedFrontAxleLeftWheel;/* Computed Parameter: RelativeSpeedFrontAxleLeftWheel
                                          * Referenced by: '<S509>/RelativeSpeedFrontAxleLeftWheel'
                                          */
  real_T RlativeSpeedFrontAxleRightWheel;/* Computed Parameter: RlativeSpeedFrontAxleRightWheel
                                          * Referenced by: '<S509>/RlativeSpeedFrontAxleRightWheel'
                                          */
  real_T RelativeSpeedRearAxle1LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle1LeftWheel
                                          * Referenced by: '<S509>/RelativeSpeedRearAxle1LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle1RightWheel;/* Computed Parameter: RlativeSpeedRearAxle1RightWheel
                                          * Referenced by: '<S509>/RlativeSpeedRearAxle1RightWheel'
                                          */
  real_T RelativeSpeedRearAxle2LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle2LeftWheel
                                          * Referenced by: '<S509>/RelativeSpeedRearAxle2LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle2RightWheel;/* Computed Parameter: RlativeSpeedRearAxle2RightWheel
                                          * Referenced by: '<S509>/RlativeSpeedRearAxle2RightWheel'
                                          */
  real_T RXstatus_Y0_l2;               /* Computed Parameter: RXstatus_Y0_l2
                                        * Referenced by: '<S509>/RX status'
                                        */
  real_T RXtime_Y0_e4;                 /* Computed Parameter: RXtime_Y0_e4
                                        * Referenced by: '<S509>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
                                        * Referenced by: '<S509>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S513>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_ke;/* Expression: 0
                                         * Referenced by: '<S513>/Unit_Delay'
                                         */
  real_T EngTorqueMode_Y0;             /* Computed Parameter: EngTorqueMode_Y0
                                        * Referenced by: '<S556>/EngTorqueMode'
                                        */
  real_T ActlEngPrcntTrqueHighResolution;/* Computed Parameter: ActlEngPrcntTrqueHighResolution
                                          * Referenced by: '<S556>/ActlEngPrcntTrqueHighResolution'
                                          */
  real_T DriversDemandEngPercentTorque_Y;/* Computed Parameter: DriversDemandEngPercentTorque_Y
                                          * Referenced by: '<S556>/DriversDemandEngPercentTorque'
                                          */
  real_T ActualEngPercentTorque_Y0;    /* Computed Parameter: ActualEngPercentTorque_Y0
                                        * Referenced by: '<S556>/ActualEngPercentTorque'
                                        */
  real_T EngSpeed_Y0;                  /* Computed Parameter: EngSpeed_Y0
                                        * Referenced by: '<S556>/EngSpeed'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrEngCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrEngCntrl
                                          * Referenced by: '<S556>/SrcAddrssOfCtrllngDvcFrEngCntrl'
                                          */
  real_T EngStarterMode_Y0;            /* Computed Parameter: EngStarterMode_Y0
                                        * Referenced by: '<S556>/EngStarterMode'
                                        */
  real_T EngDemandPercentTorque_Y0;    /* Computed Parameter: EngDemandPercentTorque_Y0
                                        * Referenced by: '<S556>/EngDemandPercentTorque'
                                        */
  real_T RXstatus_Y0_c;                /* Computed Parameter: RXstatus_Y0_c
                                        * Referenced by: '<S556>/RX status'
                                        */
  real_T RXtime_Y0_mb;                 /* Computed Parameter: RXtime_Y0_mb
                                        * Referenced by: '<S556>/RX time'
                                        */
  real_T RXdeltatime_Y0_m5;            /* Computed Parameter: RXdeltatime_Y0_m5
                                        * Referenced by: '<S556>/RX delta time'
                                        */
  real_T SPN558_AccelPed1LowIdlSwitch_Y0;/* Computed Parameter: SPN558_AccelPed1LowIdlSwitch_Y0
                                          * Referenced by: '<S558>/SPN558_AccelPed1LowIdlSwitch'
                                          */
  real_T SPN559_AccelPedKickdownSw_Y0; /* Computed Parameter: SPN559_AccelPedKickdownSw_Y0
                                        * Referenced by: '<S558>/SPN559_AccelPedKickdownSw'
                                        */
  real_T SPN1437_RoadSpeedLimitStatus_Y0;/* Computed Parameter: SPN1437_RoadSpeedLimitStatus_Y0
                                          * Referenced by: '<S558>/SPN1437_RoadSpeedLimitStatus'
                                          */
  real_T SPN2970_AccelPed2LowIdlSwitch_Y;/* Computed Parameter: SPN2970_AccelPed2LowIdlSwitch_Y
                                          * Referenced by: '<S558>/SPN2970_AccelPed2LowIdlSwitch'
                                          */
  real_T SPN91_AccelPedPos1_Y0;        /* Computed Parameter: SPN91_AccelPedPos1_Y0
                                        * Referenced by: '<S558>/SPN91_AccelPedPos1'
                                        */
  real_T SPN92_EngPercLoadAtCurrSpd_Y0;/* Computed Parameter: SPN92_EngPercLoadAtCurrSpd_Y0
                                        * Referenced by: '<S558>/SPN92_EngPercLoadAtCurrSpd'
                                        */
  real_T SPN974_RemAccelPedalPosition_Y0;/* Computed Parameter: SPN974_RemAccelPedalPosition_Y0
                                          * Referenced by: '<S558>/SPN974_RemAccelPedalPosition'
                                          */
  real_T SPN29_AccelPedPos2_Y0;        /* Computed Parameter: SPN29_AccelPedPos2_Y0
                                        * Referenced by: '<S558>/SPN29_AccelPedPos2'
                                        */
  real_T SPN2979_VehAccelRateLimStatus_Y;/* Computed Parameter: SPN2979_VehAccelRateLimStatus_Y
                                          * Referenced by: '<S558>/SPN2979_VehAccelRateLimStatus'
                                          */
  real_T SPN5021_MomEngMaxPwrEnFdbk_Y0;/* Computed Parameter: SPN5021_MomEngMaxPwrEnFdbk_Y0
                                        * Referenced by: '<S558>/SPN5021_MomEngMaxPwrEnFdbk'
                                        */
  real_T SPN5399_DPFThermMgmtActive_Y0;/* Computed Parameter: SPN5399_DPFThermMgmtActive_Y0
                                        * Referenced by: '<S558>/SPN5399_DPFThermMgmtActive'
                                        */
  real_T SPN5400_SCRThermMgmtActive_Y0;/* Computed Parameter: SPN5400_SCRThermMgmtActive_Y0
                                        * Referenced by: '<S558>/SPN5400_SCRThermMgmtActive'
                                        */
  real_T SPN3357_ActMaxAvailEngPercTrq_Y;/* Computed Parameter: SPN3357_ActMaxAvailEngPercTrq_Y
                                          * Referenced by: '<S558>/SPN3357_ActMaxAvailEngPercTrq'
                                          */
  real_T SPN5398_EstPumpingPercentTorque;/* Computed Parameter: SPN5398_EstPumpingPercentTorque
                                          * Referenced by: '<S558>/SPN5398_EstPumpingPercentTorque'
                                          */
  real_T RXstatus_Y0_g5;               /* Computed Parameter: RXstatus_Y0_g5
                                        * Referenced by: '<S558>/RX status'
                                        */
  real_T RXtime_Y0_n0;                 /* Computed Parameter: RXtime_Y0_n0
                                        * Referenced by: '<S558>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
                                        * Referenced by: '<S558>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S560>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S560>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_g3;               /* Computed Parameter: RXstatus_Y0_g3
                                        * Referenced by: '<S560>/RX status'
                                        */
  real_T RXtime_Y0_nn;                 /* Computed Parameter: RXtime_Y0_nn
                                        * Referenced by: '<S560>/RX time'
                                        */
  real_T RXdeltatime_Y0_c3;            /* Computed Parameter: RXdeltatime_Y0_c3
                                        * Referenced by: '<S560>/RX delta time'
                                        */
  real_T SPN524_TransSelectedGear_Y0;  /* Computed Parameter: SPN524_TransSelectedGear_Y0
                                        * Referenced by: '<S562>/SPN524_TransSelectedGear'
                                        */
  real_T SPN526_TransActualGearRatio_Y0;/* Computed Parameter: SPN526_TransActualGearRatio_Y0
                                         * Referenced by: '<S562>/SPN526_TransActualGearRatio'
                                         */
  real_T SPN523_TransCurrentGear_Y0;   /* Computed Parameter: SPN523_TransCurrentGear_Y0
                                        * Referenced by: '<S562>/SPN523_TransCurrentGear'
                                        */
  real_T RXstatus_Y0_pk;               /* Computed Parameter: RXstatus_Y0_pk
                                        * Referenced by: '<S562>/RX status'
                                        */
  real_T RXtime_Y0_gy;                 /* Computed Parameter: RXtime_Y0_gy
                                        * Referenced by: '<S562>/RX time'
                                        */
  real_T RXdeltatime_Y0_c3z;           /* Computed Parameter: RXdeltatime_Y0_c3z
                                        * Referenced by: '<S562>/RX delta time'
                                        */
  real_T SID_Y0_i;                     /* Computed Parameter: SID_Y0_i
                                        * Referenced by: '<S564>/SID'
                                        */
  real_T SetMode_Y0;                   /* Computed Parameter: SetMode_Y0
                                        * Referenced by: '<S564>/SetMode'
                                        */
  real_T OpMode_Y0;                    /* Computed Parameter: OpMode_Y0
                                        * Referenced by: '<S564>/OpMode'
                                        */
  real_T HDOP_Y0;                      /* Computed Parameter: HDOP_Y0
                                        * Referenced by: '<S564>/HDOP_'
                                        */
  real_T VDOP_Y0;                      /* Computed Parameter: VDOP_Y0
                                        * Referenced by: '<S564>/VDOP'
                                        */
  real_T TDOP_Y0;                      /* Computed Parameter: TDOP_Y0
                                        * Referenced by: '<S564>/TDOP'
                                        */
  real_T RXstatus_Y0_ak;               /* Computed Parameter: RXstatus_Y0_ak
                                        * Referenced by: '<S564>/RX status'
                                        */
  real_T RXtime_Y0_bn;                 /* Computed Parameter: RXtime_Y0_bn
                                        * Referenced by: '<S564>/RX time'
                                        */
  real_T RXdeltatime_Y0_dh;            /* Computed Parameter: RXdeltatime_Y0_dh
                                        * Referenced by: '<S564>/RX delta time'
                                        */
  real_T SID_Y0_d;                     /* Computed Parameter: SID_Y0_d
                                        * Referenced by: '<S565>/SID'
                                        */
  real_T SetMode_Y0_b;                 /* Computed Parameter: SetMode_Y0_b
                                        * Referenced by: '<S565>/SetMode'
                                        */
  real_T OpMode_Y0_e;                  /* Computed Parameter: OpMode_Y0_e
                                        * Referenced by: '<S565>/OpMode'
                                        */
  real_T HDOP_Y0_k;                    /* Computed Parameter: HDOP_Y0_k
                                        * Referenced by: '<S565>/HDOP_'
                                        */
  real_T VDOP_Y0_h;                    /* Computed Parameter: VDOP_Y0_h
                                        * Referenced by: '<S565>/VDOP'
                                        */
  real_T TDOP_Y0_b;                    /* Computed Parameter: TDOP_Y0_b
                                        * Referenced by: '<S565>/TDOP'
                                        */
  real_T RXstatus_Y0_dj;               /* Computed Parameter: RXstatus_Y0_dj
                                        * Referenced by: '<S565>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S565>/RX time'
                                        */
  real_T RXdeltatime_Y0_gc;            /* Computed Parameter: RXdeltatime_Y0_gc
                                        * Referenced by: '<S565>/RX delta time'
                                        */
  real_T FrontAxleLeftWheelSpeed_Y0;   /* Computed Parameter: FrontAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S567>/FrontAxleLeftWheelSpeed'
                                        */
  real_T FrontAxleRightWheelSpeed_Y0;  /* Computed Parameter: FrontAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S567>/FrontAxleRightWheelSpeed'
                                        */
  real_T RearAxleLeftWheelSpeed_Y0;    /* Computed Parameter: RearAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S567>/RearAxleLeftWheelSpeed'
                                        */
  real_T RearAxleRightWheelSpeed_Y0;   /* Computed Parameter: RearAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S567>/RearAxleRightWheelSpeed'
                                        */
  real_T RXstatus_Y0_f;                /* Computed Parameter: RXstatus_Y0_f
                                        * Referenced by: '<S567>/RX status'
                                        */
  real_T RXtime_Y0_a4;                 /* Computed Parameter: RXtime_Y0_a4
                                        * Referenced by: '<S567>/RX time'
                                        */
  real_T RXdeltatime_Y0_kz;            /* Computed Parameter: RXdeltatime_Y0_kz
                                        * Referenced by: '<S567>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S570>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S570>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_om;               /* Computed Parameter: RXstatus_Y0_om
                                        * Referenced by: '<S570>/RX status'
                                        */
  real_T RXtime_Y0_b4;                 /* Computed Parameter: RXtime_Y0_b4
                                        * Referenced by: '<S570>/RX time'
                                        */
  real_T RXdeltatime_Y0_ec;            /* Computed Parameter: RXdeltatime_Y0_ec
                                        * Referenced by: '<S570>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_i;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_i
                                          * Referenced by: '<S571>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__f;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__f
                                          * Referenced by: '<S571>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_k;                /* Computed Parameter: RXstatus_Y0_k
                                        * Referenced by: '<S571>/RX status'
                                        */
  real_T RXtime_Y0_gt;                 /* Computed Parameter: RXtime_Y0_gt
                                        * Referenced by: '<S571>/RX time'
                                        */
  real_T RXdeltatime_Y0_mw;            /* Computed Parameter: RXdeltatime_Y0_mw
                                        * Referenced by: '<S571>/RX delta time'
                                        */
  real_T byte1_Y0_i;                   /* Computed Parameter: byte1_Y0_i
                                        * Referenced by: '<S576>/byte1'
                                        */
  real_T byte2_Y0_g;                   /* Computed Parameter: byte2_Y0_g
                                        * Referenced by: '<S576>/byte2'
                                        */
  real_T byte3_Y0_e;                   /* Computed Parameter: byte3_Y0_e
                                        * Referenced by: '<S576>/byte3'
                                        */
  real_T byte4_Y0_c;                   /* Computed Parameter: byte4_Y0_c
                                        * Referenced by: '<S576>/byte4'
                                        */
  real_T byte5_Y0_e;                   /* Computed Parameter: byte5_Y0_e
                                        * Referenced by: '<S576>/byte5'
                                        */
  real_T byte6_Y0_h;                   /* Computed Parameter: byte6_Y0_h
                                        * Referenced by: '<S576>/byte6'
                                        */
  real_T byte7_Y0_a1;                  /* Computed Parameter: byte7_Y0_a1
                                        * Referenced by: '<S576>/byte7'
                                        */
  real_T byte8_Y0_l;                   /* Computed Parameter: byte8_Y0_l
                                        * Referenced by: '<S576>/byte8'
                                        */
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S576>/RX status'
                                        */
  real_T RXtime_Y0_bl;                 /* Computed Parameter: RXtime_Y0_bl
                                        * Referenced by: '<S576>/RX time'
                                        */
  real_T RXdeltatime_Y0_mv;            /* Computed Parameter: RXdeltatime_Y0_mv
                                        * Referenced by: '<S576>/RX delta time'
                                        */
  real_T byte1_Y0_f;                   /* Computed Parameter: byte1_Y0_f
                                        * Referenced by: '<S577>/byte1'
                                        */
  real_T byte2_Y0_p;                   /* Computed Parameter: byte2_Y0_p
                                        * Referenced by: '<S577>/byte2'
                                        */
  real_T byte3_Y0_d;                   /* Computed Parameter: byte3_Y0_d
                                        * Referenced by: '<S577>/byte3'
                                        */
  real_T byte4_Y0_p;                   /* Computed Parameter: byte4_Y0_p
                                        * Referenced by: '<S577>/byte4'
                                        */
  real_T byte5_Y0_o;                   /* Computed Parameter: byte5_Y0_o
                                        * Referenced by: '<S577>/byte5'
                                        */
  real_T byte6_Y0_d;                   /* Computed Parameter: byte6_Y0_d
                                        * Referenced by: '<S577>/byte6'
                                        */
  real_T byte7_Y0_b;                   /* Computed Parameter: byte7_Y0_b
                                        * Referenced by: '<S577>/byte7'
                                        */
  real_T byte8_Y0_f;                   /* Computed Parameter: byte8_Y0_f
                                        * Referenced by: '<S577>/byte8'
                                        */
  real_T RXstatus_Y0_dw;               /* Computed Parameter: RXstatus_Y0_dw
                                        * Referenced by: '<S577>/RX status'
                                        */
  real_T RXtime_Y0_bb;                 /* Computed Parameter: RXtime_Y0_bb
                                        * Referenced by: '<S577>/RX time'
                                        */
  real_T RXdeltatime_Y0_lq;            /* Computed Parameter: RXdeltatime_Y0_lq
                                        * Referenced by: '<S577>/RX delta time'
                                        */
  real_T byte1_Y0_k;                   /* Computed Parameter: byte1_Y0_k
                                        * Referenced by: '<S578>/byte1'
                                        */
  real_T byte2_Y0_b;                   /* Computed Parameter: byte2_Y0_b
                                        * Referenced by: '<S578>/byte2'
                                        */
  real_T byte3_Y0_p;                   /* Computed Parameter: byte3_Y0_p
                                        * Referenced by: '<S578>/byte3'
                                        */
  real_T byte4_Y0_b;                   /* Computed Parameter: byte4_Y0_b
                                        * Referenced by: '<S578>/byte4'
                                        */
  real_T byte5_Y0_n;                   /* Computed Parameter: byte5_Y0_n
                                        * Referenced by: '<S578>/byte5'
                                        */
  real_T byte6_Y0_a;                   /* Computed Parameter: byte6_Y0_a
                                        * Referenced by: '<S578>/byte6'
                                        */
  real_T byte7_Y0_d;                   /* Computed Parameter: byte7_Y0_d
                                        * Referenced by: '<S578>/byte7'
                                        */
  real_T byte8_Y0_i;                   /* Computed Parameter: byte8_Y0_i
                                        * Referenced by: '<S578>/byte8'
                                        */
  real_T RXstatus_Y0_fj;               /* Computed Parameter: RXstatus_Y0_fj
                                        * Referenced by: '<S578>/RX status'
                                        */
  real_T RXtime_Y0_bx;                 /* Computed Parameter: RXtime_Y0_bx
                                        * Referenced by: '<S578>/RX time'
                                        */
  real_T RXdeltatime_Y0_ep;            /* Computed Parameter: RXdeltatime_Y0_ep
                                        * Referenced by: '<S578>/RX delta time'
                                        */
  real_T byte1_Y0_m;                   /* Computed Parameter: byte1_Y0_m
                                        * Referenced by: '<S589>/byte1'
                                        */
  real_T byte2_Y0_bq;                  /* Computed Parameter: byte2_Y0_bq
                                        * Referenced by: '<S589>/byte2'
                                        */
  real_T byte3_Y0_m1;                  /* Computed Parameter: byte3_Y0_m1
                                        * Referenced by: '<S589>/byte3'
                                        */
  real_T byte4_Y0_o;                   /* Computed Parameter: byte4_Y0_o
                                        * Referenced by: '<S589>/byte4'
                                        */
  real_T byte5_Y0_a;                   /* Computed Parameter: byte5_Y0_a
                                        * Referenced by: '<S589>/byte5'
                                        */
  real_T byte6_Y0_p;                   /* Computed Parameter: byte6_Y0_p
                                        * Referenced by: '<S589>/byte6'
                                        */
  real_T byte7_Y0_k;                   /* Computed Parameter: byte7_Y0_k
                                        * Referenced by: '<S589>/byte7'
                                        */
  real_T byte8_Y0_lm;                  /* Computed Parameter: byte8_Y0_lm
                                        * Referenced by: '<S589>/byte8'
                                        */
  real_T RXstatus_Y0_kt;               /* Computed Parameter: RXstatus_Y0_kt
                                        * Referenced by: '<S589>/RX status'
                                        */
  real_T RXtime_Y0_ad;                 /* Computed Parameter: RXtime_Y0_ad
                                        * Referenced by: '<S589>/RX time'
                                        */
  real_T RXdeltatime_Y0_mr;            /* Computed Parameter: RXdeltatime_Y0_mr
                                        * Referenced by: '<S589>/RX delta time'
                                        */
  real_T byte1_Y0_l;                   /* Computed Parameter: byte1_Y0_l
                                        * Referenced by: '<S590>/byte1'
                                        */
  real_T byte2_Y0_k;                   /* Computed Parameter: byte2_Y0_k
                                        * Referenced by: '<S590>/byte2'
                                        */
  real_T byte3_Y0_i;                   /* Computed Parameter: byte3_Y0_i
                                        * Referenced by: '<S590>/byte3'
                                        */
  real_T byte4_Y0_ku;                  /* Computed Parameter: byte4_Y0_ku
                                        * Referenced by: '<S590>/byte4'
                                        */
  real_T byte5_Y0_h;                   /* Computed Parameter: byte5_Y0_h
                                        * Referenced by: '<S590>/byte5'
                                        */
  real_T byte6_Y0_b;                   /* Computed Parameter: byte6_Y0_b
                                        * Referenced by: '<S590>/byte6'
                                        */
  real_T byte7_Y0_ku;                  /* Computed Parameter: byte7_Y0_ku
                                        * Referenced by: '<S590>/byte7'
                                        */
  real_T byte8_Y0_c;                   /* Computed Parameter: byte8_Y0_c
                                        * Referenced by: '<S590>/byte8'
                                        */
  real_T RXstatus_Y0_c1;               /* Computed Parameter: RXstatus_Y0_c1
                                        * Referenced by: '<S590>/RX status'
                                        */
  real_T RXtime_Y0_ap;                 /* Computed Parameter: RXtime_Y0_ap
                                        * Referenced by: '<S590>/RX time'
                                        */
  real_T RXdeltatime_Y0_gq;            /* Computed Parameter: RXdeltatime_Y0_gq
                                        * Referenced by: '<S590>/RX delta time'
                                        */
  real_T byte1_Y0_io;                  /* Computed Parameter: byte1_Y0_io
                                        * Referenced by: '<S591>/byte1'
                                        */
  real_T byte2_Y0_a;                   /* Computed Parameter: byte2_Y0_a
                                        * Referenced by: '<S591>/byte2'
                                        */
  real_T byte3_Y0_f;                   /* Computed Parameter: byte3_Y0_f
                                        * Referenced by: '<S591>/byte3'
                                        */
  real_T byte4_Y0_i;                   /* Computed Parameter: byte4_Y0_i
                                        * Referenced by: '<S591>/byte4'
                                        */
  real_T byte5_Y0_e3;                  /* Computed Parameter: byte5_Y0_e3
                                        * Referenced by: '<S591>/byte5'
                                        */
  real_T byte6_Y0_g;                   /* Computed Parameter: byte6_Y0_g
                                        * Referenced by: '<S591>/byte6'
                                        */
  real_T byte7_Y0_n;                   /* Computed Parameter: byte7_Y0_n
                                        * Referenced by: '<S591>/byte7'
                                        */
  real_T byte8_Y0_g;                   /* Computed Parameter: byte8_Y0_g
                                        * Referenced by: '<S591>/byte8'
                                        */
  real_T RXstatus_Y0_i;                /* Computed Parameter: RXstatus_Y0_i
                                        * Referenced by: '<S591>/RX status'
                                        */
  real_T RXtime_Y0_mr;                 /* Computed Parameter: RXtime_Y0_mr
                                        * Referenced by: '<S591>/RX time'
                                        */
  real_T RXdeltatime_Y0_j1;            /* Computed Parameter: RXdeltatime_Y0_j1
                                        * Referenced by: '<S591>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S602>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S602>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_o3;               /* Computed Parameter: RXstatus_Y0_o3
                                        * Referenced by: '<S602>/RX status'
                                        */
  real_T RXtime_Y0_bs;                 /* Computed Parameter: RXtime_Y0_bs
                                        * Referenced by: '<S602>/RX time'
                                        */
  real_T RXdeltatime_Y0_ml;            /* Computed Parameter: RXdeltatime_Y0_ml
                                        * Referenced by: '<S602>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_k;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_k
                                          * Referenced by: '<S603>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_i;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_i
                                          * Referenced by: '<S603>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_b;                /* Computed Parameter: RXstatus_Y0_b
                                        * Referenced by: '<S603>/RX status'
                                        */
  real_T RXtime_Y0_kx;                 /* Computed Parameter: RXtime_Y0_kx
                                        * Referenced by: '<S603>/RX time'
                                        */
  real_T RXdeltatime_Y0_jp;            /* Computed Parameter: RXdeltatime_Y0_jp
                                        * Referenced by: '<S603>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_p;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_p
                                          * Referenced by: '<S604>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_e;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_e
                                          * Referenced by: '<S604>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S604>/RX status'
                                        */
  real_T RXtime_Y0_ix;                 /* Computed Parameter: RXtime_Y0_ix
                                        * Referenced by: '<S604>/RX time'
                                        */
  real_T RXdeltatime_Y0_bk;            /* Computed Parameter: RXdeltatime_Y0_bk
                                        * Referenced by: '<S604>/RX delta time'
                                        */
  real_T PX2_LaneEdgeLeftAngle_Y0;     /* Computed Parameter: PX2_LaneEdgeLeftAngle_Y0
                                        * Referenced by: '<S612>/PX2_LaneEdgeLeftAngle'
                                        */
  real_T PX2_LaneEdgeLeftNumPoints_Y0; /* Computed Parameter: PX2_LaneEdgeLeftNumPoints_Y0
                                        * Referenced by: '<S612>/PX2_LaneEdgeLeftNumPoints'
                                        */
  real_T PX2_LaneEdgeLeftPosition_Y0;  /* Computed Parameter: PX2_LaneEdgeLeftPosition_Y0
                                        * Referenced by: '<S612>/PX2_LaneEdgeLeftPosition'
                                        */
  real_T RXstatus_Y0_oz;               /* Computed Parameter: RXstatus_Y0_oz
                                        * Referenced by: '<S612>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S612>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
                                        * Referenced by: '<S612>/RX delta time'
                                        */
  real_T PX2_LaneEdgeRightAngle_Y0;    /* Computed Parameter: PX2_LaneEdgeRightAngle_Y0
                                        * Referenced by: '<S613>/PX2_LaneEdgeRightAngle'
                                        */
  real_T PX2_LaneEdgeRightNumPoints_Y0;/* Computed Parameter: PX2_LaneEdgeRightNumPoints_Y0
                                        * Referenced by: '<S613>/PX2_LaneEdgeRightNumPoints'
                                        */
  real_T PX2_LaneEdgeRightPosition_Y0; /* Computed Parameter: PX2_LaneEdgeRightPosition_Y0
                                        * Referenced by: '<S613>/PX2_LaneEdgeRightPosition'
                                        */
  real_T RXstatus_Y0_b1;               /* Computed Parameter: RXstatus_Y0_b1
                                        * Referenced by: '<S613>/RX status'
                                        */
  real_T RXtime_Y0_es;                 /* Computed Parameter: RXtime_Y0_es
                                        * Referenced by: '<S613>/RX time'
                                        */
  real_T RXdeltatime_Y0_fw;            /* Computed Parameter: RXdeltatime_Y0_fw
                                        * Referenced by: '<S613>/RX delta time'
                                        */
  real_T PX2_LanePosEstAngle_Y0;       /* Computed Parameter: PX2_LanePosEstAngle_Y0
                                        * Referenced by: '<S614>/PX2_LanePosEstAngle'
                                        */
  real_T PX2_LanePosEstNumPoints_Y0;   /* Computed Parameter: PX2_LanePosEstNumPoints_Y0
                                        * Referenced by: '<S614>/PX2_LanePosEstNumPoints'
                                        */
  real_T PX2_LanePosEstPosition_Y0;    /* Computed Parameter: PX2_LanePosEstPosition_Y0
                                        * Referenced by: '<S614>/PX2_LanePosEstPosition'
                                        */
  real_T PX2_LanePosEstNumLanes_Y0;    /* Computed Parameter: PX2_LanePosEstNumLanes_Y0
                                        * Referenced by: '<S614>/PX2_LanePosEstNumLanes'
                                        */
  real_T RXstatus_Y0_mv;               /* Computed Parameter: RXstatus_Y0_mv
                                        * Referenced by: '<S614>/RX status'
                                        */
  real_T RXtime_Y0_iu;                 /* Computed Parameter: RXtime_Y0_iu
                                        * Referenced by: '<S614>/RX time'
                                        */
  real_T RXdeltatime_Y0_ls;            /* Computed Parameter: RXdeltatime_Y0_ls
                                        * Referenced by: '<S614>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S616>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S616>/Longitude_'
                                        */
  real_T RXstatus_Y0_lu;               /* Computed Parameter: RXstatus_Y0_lu
                                        * Referenced by: '<S616>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S616>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
                                        * Referenced by: '<S616>/RX delta time'
                                        */
  real_T Latitude_Y0_b;                /* Computed Parameter: Latitude_Y0_b
                                        * Referenced by: '<S617>/Latitude_'
                                        */
  real_T Longitude_Y0_n;               /* Computed Parameter: Longitude_Y0_n
                                        * Referenced by: '<S617>/Longitude_'
                                        */
  real_T RXstatus_Y0_ci;               /* Computed Parameter: RXstatus_Y0_ci
                                        * Referenced by: '<S617>/RX status'
                                        */
  real_T RXtime_Y0_er;                 /* Computed Parameter: RXtime_Y0_er
                                        * Referenced by: '<S617>/RX time'
                                        */
  real_T RXdeltatime_Y0_mo;            /* Computed Parameter: RXdeltatime_Y0_mo
                                        * Referenced by: '<S617>/RX delta time'
                                        */
  real_T PressureP4_Y0;                /* Computed Parameter: PressureP4_Y0
                                        * Referenced by: '<S619>/PressureP4'
                                        */
  real_T PressureP1_Y0;                /* Computed Parameter: PressureP1_Y0
                                        * Referenced by: '<S619>/PressureP1'
                                        */
  real_T PressureP21_Y0;               /* Computed Parameter: PressureP21_Y0
                                        * Referenced by: '<S619>/PressureP21'
                                        */
  real_T PressureP22_Y0;               /* Computed Parameter: PressureP22_Y0
                                        * Referenced by: '<S619>/PressureP22'
                                        */
  real_T PressureP42_Y0;               /* Computed Parameter: PressureP42_Y0
                                        * Referenced by: '<S619>/PressureP42'
                                        */
  real_T XPR1ControlStatus_Y0;         /* Computed Parameter: XPR1ControlStatus_Y0
                                        * Referenced by: '<S619>/XPR1ControlStatus'
                                        */
  real_T XPR2ControlStatus_Y0;         /* Computed Parameter: XPR2ControlStatus_Y0
                                        * Referenced by: '<S619>/XPR2ControlStatus'
                                        */
  real_T XPR3ControlStatus_Y0;         /* Computed Parameter: XPR3ControlStatus_Y0
                                        * Referenced by: '<S619>/XPR3ControlStatus'
                                        */
  real_T XPRErrorState_Y0;             /* Computed Parameter: XPRErrorState_Y0
                                        * Referenced by: '<S619>/XPRErrorState'
                                        */
  real_T XPRControlMode_Y0;            /* Computed Parameter: XPRControlMode_Y0
                                        * Referenced by: '<S619>/XPRControlMode'
                                        */
  real_T RXstatus_Y0_b2;               /* Computed Parameter: RXstatus_Y0_b2
                                        * Referenced by: '<S619>/RX status'
                                        */
  real_T RXtime_Y0_gl;                 /* Computed Parameter: RXtime_Y0_gl
                                        * Referenced by: '<S619>/RX time'
                                        */
  real_T RXdeltatime_Y0_fa;            /* Computed Parameter: RXdeltatime_Y0_fa
                                        * Referenced by: '<S619>/RX delta time'
                                        */
  real_T PitchAngleExRange_Y0;         /* Computed Parameter: PitchAngleExRange_Y0
                                        * Referenced by: '<S621>/PitchAngleExRange'
                                        */
  real_T RollAngleExRange_Y0;          /* Computed Parameter: RollAngleExRange_Y0
                                        * Referenced by: '<S621>/RollAngleExRange'
                                        */
  real_T PitchAngleExRangeCompensation_Y;/* Computed Parameter: PitchAngleExRangeCompensation_Y
                                          * Referenced by: '<S621>/PitchAngleExRangeCompensation'
                                          */
  real_T PitchAngleExRangeFigureOfMerit_;/* Computed Parameter: PitchAngleExRangeFigureOfMerit_
                                          * Referenced by: '<S621>/PitchAngleExRangeFigureOfMerit'
                                          */
  real_T RollAngleExRangeCompensation_Y0;/* Computed Parameter: RollAngleExRangeCompensation_Y0
                                          * Referenced by: '<S621>/RollAngleExRangeCompensation'
                                          */
  real_T RollAngleExRangeFigureOfMerit_Y;/* Computed Parameter: RollAngleExRangeFigureOfMerit_Y
                                          * Referenced by: '<S621>/RollAngleExRangeFigureOfMerit'
                                          */
  real_T RllAndPtchExRngMsurementLatency;/* Computed Parameter: RllAndPtchExRngMsurementLatency
                                          * Referenced by: '<S621>/RllAndPtchExRngMsurementLatency'
                                          */
  real_T RXstatus_Y0_n0;               /* Computed Parameter: RXstatus_Y0_n0
                                        * Referenced by: '<S621>/RX status'
                                        */
  real_T RXtime_Y0_pn;                 /* Computed Parameter: RXtime_Y0_pn
                                        * Referenced by: '<S621>/RX time'
                                        */
  real_T RXdeltatime_Y0_mb;            /* Computed Parameter: RXdeltatime_Y0_mb
                                        * Referenced by: '<S621>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0;        /* Computed Parameter: PX2_MapLaneNearPos_Y0
                                        * Referenced by: '<S623>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0;         /* Computed Parameter: PX2_MapLaneMidPos_Y0
                                        * Referenced by: '<S623>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0;         /* Computed Parameter: PX2_MapLaneFarPos_Y0
                                        * Referenced by: '<S623>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0;   /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0
                                        * Referenced by: '<S623>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0
                                        * Referenced by: '<S623>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0
                                        * Referenced by: '<S623>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_d5;               /* Computed Parameter: RXstatus_Y0_d5
                                        * Referenced by: '<S623>/RX status'
                                        */
  real_T RXtime_Y0_lp;                 /* Computed Parameter: RXtime_Y0_lp
                                        * Referenced by: '<S623>/RX time'
                                        */
  real_T RXdeltatime_Y0_kr;            /* Computed Parameter: RXdeltatime_Y0_kr
                                        * Referenced by: '<S623>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_j;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_j
                                        * Referenced by: '<S625>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_f;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_f
                                        * Referenced by: '<S625>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_h;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_h
                                        * Referenced by: '<S625>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_m; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_m
                                        * Referenced by: '<S625>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_j;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_j
                                        * Referenced by: '<S625>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_n;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_n
                                        * Referenced by: '<S625>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_gr;               /* Computed Parameter: RXstatus_Y0_gr
                                        * Referenced by: '<S625>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S625>/RX time'
                                        */
  real_T RXdeltatime_Y0_nm;            /* Computed Parameter: RXdeltatime_Y0_nm
                                        * Referenced by: '<S625>/RX delta time'
                                        */
  real_T PX2_EgoLaneNearPosErr_Y0;     /* Computed Parameter: PX2_EgoLaneNearPosErr_Y0
                                        * Referenced by: '<S627>/PX2_EgoLaneNearPosErr'
                                        */
  real_T PX2_EgoLaneMidPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneMidPosErr_Y0
                                        * Referenced by: '<S627>/PX2_EgoLaneMidPosErr'
                                        */
  real_T PX2_EgoLaneFarPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneFarPosErr_Y0
                                        * Referenced by: '<S627>/PX2_EgoLaneFarPosErr'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_b; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_b
                                        * Referenced by: '<S627>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_b;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_b
                                        * Referenced by: '<S627>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_c;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_c
                                        * Referenced by: '<S627>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_is;               /* Computed Parameter: RXstatus_Y0_is
                                        * Referenced by: '<S627>/RX status'
                                        */
  real_T RXtime_Y0_op;                 /* Computed Parameter: RXtime_Y0_op
                                        * Referenced by: '<S627>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
                                        * Referenced by: '<S627>/RX delta time'
                                        */
  real_T SID_Y0_j;                     /* Computed Parameter: SID_Y0_j
                                        * Referenced by: '<S629>/SID'
                                        */
  real_T Source_Y0;                    /* Computed Parameter: Source_Y0
                                        * Referenced by: '<S629>/Source'
                                        */
  real_T Date_Y0;                      /* Computed Parameter: Date_Y0
                                        * Referenced by: '<S629>/Date'
                                        */
  real_T Time_Y0;                      /* Computed Parameter: Time_Y0
                                        * Referenced by: '<S629>/Time'
                                        */
  real_T RXstatus_Y0_mf;               /* Computed Parameter: RXstatus_Y0_mf
                                        * Referenced by: '<S629>/RX status'
                                        */
  real_T RXtime_Y0_gls;                /* Computed Parameter: RXtime_Y0_gls
                                        * Referenced by: '<S629>/RX time'
                                        */
  real_T RXdeltatime_Y0_hz;            /* Computed Parameter: RXdeltatime_Y0_hz
                                        * Referenced by: '<S629>/RX delta time'
                                        */
  real_T SPN681_TransGearShiftInhibitReq;/* Computed Parameter: SPN681_TransGearShiftInhibitReq
                                          * Referenced by: '<S631>/SPN681_TransGearShiftInhibitReq'
                                          */
  real_T SPN682_TransTrqConvLockupDisReq;/* Computed Parameter: SPN682_TransTrqConvLockupDisReq
                                          * Referenced by: '<S631>/SPN682_TransTrqConvLockupDisReq'
                                          */
  real_T SPN683_DisengageDrivelineReq_Y0;/* Computed Parameter: SPN683_DisengageDrivelineReq_Y0
                                          * Referenced by: '<S631>/SPN683_DisengageDrivelineReq'
                                          */
  real_T SPN4242_TransRevGearShiftInhibR;/* Computed Parameter: SPN4242_TransRevGearShiftInhibR
                                          * Referenced by: '<S631>/SPN4242_TransRevGearShiftInhibRq'
                                          */
  real_T SPN684_RequestedPercClutchSlip_;/* Computed Parameter: SPN684_RequestedPercClutchSlip_
                                          * Referenced by: '<S631>/SPN684_RequestedPercClutchSlip'
                                          */
  real_T SPN525_TransRequestedGear_Y0; /* Computed Parameter: SPN525_TransRequestedGear_Y0
                                        * Referenced by: '<S631>/SPN525_TransRequestedGear'
                                        */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* Computed Parameter: SPN685_DisengageDiffLockRqFrAx1
                                          * Referenced by: '<S631>/SPN685_DisengageDiffLockRqFrAx1'
                                          */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* Computed Parameter: SPN686_DisengageDiffLockRqFrAx2
                                          * Referenced by: '<S631>/SPN686_DisengageDiffLockRqFrAx2'
                                          */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* Computed Parameter: SPN687_DisengageDiffLockRqRrAx1
                                          * Referenced by: '<S631>/SPN687_DisengageDiffLockRqRrAx1'
                                          */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* Computed Parameter: SPN688_DisengageDiffLockRqRrAx2
                                          * Referenced by: '<S631>/SPN688_DisengageDiffLockRqRrAx2'
                                          */
  real_T SPN689_DisengageDiffLockRqC_Y0;/* Computed Parameter: SPN689_DisengageDiffLockRqC_Y0
                                         * Referenced by: '<S631>/SPN689_DisengageDiffLockRqC'
                                         */
  real_T SPN690_DisengageDiffLockRqCF_Y0;/* Computed Parameter: SPN690_DisengageDiffLockRqCF_Y0
                                          * Referenced by: '<S631>/SPN690_DisengageDiffLockRqCF'
                                          */
  real_T SPN691_DisengageDiffLockRqCR_Y0;/* Computed Parameter: SPN691_DisengageDiffLockRqCR_Y0
                                          * Referenced by: '<S631>/SPN691_DisengageDiffLockRqCR'
                                          */
  real_T SPN5762_TransLoadRedInhibitRq_Y;/* Computed Parameter: SPN5762_TransLoadRedInhibitRq_Y
                                          * Referenced by: '<S631>/SPN5762_TransLoadRedInhibitRq'
                                          */
  real_T SPN1852_TransmissionMode1_Y0; /* Computed Parameter: SPN1852_TransmissionMode1_Y0
                                        * Referenced by: '<S631>/SPN1852_TransmissionMode1'
                                        */
  real_T SPN1853_TransmissionMode2_Y0; /* Computed Parameter: SPN1853_TransmissionMode2_Y0
                                        * Referenced by: '<S631>/SPN1853_TransmissionMode2'
                                        */
  real_T SPN1854_TransmissionMode3_Y0; /* Computed Parameter: SPN1854_TransmissionMode3_Y0
                                        * Referenced by: '<S631>/SPN1854_TransmissionMode3'
                                        */
  real_T SPN1855_TransmissionMode4_Y0; /* Computed Parameter: SPN1855_TransmissionMode4_Y0
                                        * Referenced by: '<S631>/SPN1855_TransmissionMode4'
                                        */
  real_T SPN7695_TransAutoNeutralRequest;/* Computed Parameter: SPN7695_TransAutoNeutralRequest
                                          * Referenced by: '<S631>/SPN7695_TransAutoNeutralRequest'
                                          */
  real_T SPN4255_TransRequestedLaunchGea;/* Computed Parameter: SPN4255_TransRequestedLaunchGea
                                          * Referenced by: '<S631>/SPN4255_TransRequestedLaunchGear'
                                          */
  real_T SPN2985_TransShiftSelDispModeSw;/* Computed Parameter: SPN2985_TransShiftSelDispModeSw
                                          * Referenced by: '<S631>/SPN2985_TransShiftSelDispModeSw'
                                          */
  real_T SPN4246_TransmissionMode5_Y0; /* Computed Parameter: SPN4246_TransmissionMode5_Y0
                                        * Referenced by: '<S631>/SPN4246_TransmissionMode5'
                                        */
  real_T SPN4247_TransmissionMode6_Y0; /* Computed Parameter: SPN4247_TransmissionMode6_Y0
                                        * Referenced by: '<S631>/SPN4247_TransmissionMode6'
                                        */
  real_T SPN4248_TransmissionMode7_Y0; /* Computed Parameter: SPN4248_TransmissionMode7_Y0
                                        * Referenced by: '<S631>/SPN4248_TransmissionMode7'
                                        */
  real_T SPN4249_TransmissionMode8_Y0; /* Computed Parameter: SPN4249_TransmissionMode8_Y0
                                        * Referenced by: '<S631>/SPN4249_TransmissionMode8'
                                        */
  real_T RXstatus_Y0_ne;               /* Computed Parameter: RXstatus_Y0_ne
                                        * Referenced by: '<S631>/RX status'
                                        */
  real_T RXtime_Y0_mk;                 /* Computed Parameter: RXtime_Y0_mk
                                        * Referenced by: '<S631>/RX time'
                                        */
  real_T RXdeltatime_Y0_fg;            /* Computed Parameter: RXdeltatime_Y0_fg
                                        * Referenced by: '<S631>/RX delta time'
                                        */
  real_T VDCInformationSignal_Y0;      /* Computed Parameter: VDCInformationSignal_Y0
                                        * Referenced by: '<S633>/VDCInformationSignal'
                                        */
  real_T VDCFullyOperational_Y0;       /* Computed Parameter: VDCFullyOperational_Y0
                                        * Referenced by: '<S633>/VDCFullyOperational'
                                        */
  real_T VDCBrakeLightRq_Y0;           /* Computed Parameter: VDCBrakeLightRq_Y0
                                        * Referenced by: '<S633>/VDCBrakeLightRq'
                                        */
  real_T ROPEngCtrlActive_Y0;          /* Computed Parameter: ROPEngCtrlActive_Y0
                                        * Referenced by: '<S633>/ROPEngCtrlActive'
                                        */
  real_T ROPBrakeCtrlActive_Y0;        /* Computed Parameter: ROPBrakeCtrlActive_Y0
                                        * Referenced by: '<S633>/ROPBrakeCtrlActive'
                                        */
  real_T YCEngCtrlActive_Y0;           /* Computed Parameter: YCEngCtrlActive_Y0
                                        * Referenced by: '<S633>/YCEngCtrlActive'
                                        */
  real_T YCBrakeCtrlActive_Y0;         /* Computed Parameter: YCBrakeCtrlActive_Y0
                                        * Referenced by: '<S633>/YCBrakeCtrlActive'
                                        */
  real_T RXstatus_Y0_lf;               /* Computed Parameter: RXstatus_Y0_lf
                                        * Referenced by: '<S633>/RX status'
                                        */
  real_T RXtime_Y0_hs;                 /* Computed Parameter: RXtime_Y0_hs
                                        * Referenced by: '<S633>/RX time'
                                        */
  real_T RXdeltatime_Y0_oc;            /* Computed Parameter: RXdeltatime_Y0_oc
                                        * Referenced by: '<S633>/RX delta time'
                                        */
  real_T SteerWheelAngle_Y0;           /* Computed Parameter: SteerWheelAngle_Y0
                                        * Referenced by: '<S635>/SteerWheelAngle'
                                        */
  real_T SteerWheelTurnCounter_Y0;     /* Computed Parameter: SteerWheelTurnCounter_Y0
                                        * Referenced by: '<S635>/SteerWheelTurnCounter'
                                        */
  real_T SteerWheelAngleSensorType_Y0; /* Computed Parameter: SteerWheelAngleSensorType_Y0
                                        * Referenced by: '<S635>/SteerWheelAngleSensorType'
                                        */
  real_T YawRate_Y0;                   /* Computed Parameter: YawRate_Y0
                                        * Referenced by: '<S635>/YawRate'
                                        */
  real_T LateralAcceleration_Y0;       /* Computed Parameter: LateralAcceleration_Y0
                                        * Referenced by: '<S635>/LateralAcceleration'
                                        */
  real_T LongitudinalAcceleration_Y0;  /* Computed Parameter: LongitudinalAcceleration_Y0
                                        * Referenced by: '<S635>/LongitudinalAcceleration'
                                        */
  real_T RXstatus_Y0_fc;               /* Computed Parameter: RXstatus_Y0_fc
                                        * Referenced by: '<S635>/RX status'
                                        */
  real_T RXtime_Y0_opx;                /* Computed Parameter: RXtime_Y0_opx
                                        * Referenced by: '<S635>/RX time'
                                        */
  real_T RXdeltatime_Y0_ol;            /* Computed Parameter: RXdeltatime_Y0_ol
                                        * Referenced by: '<S635>/RX delta time'
                                        */
  real_T NetBatteryCurrent_Y0;         /* Computed Parameter: NetBatteryCurrent_Y0
                                        * Referenced by: '<S637>/NetBatteryCurrent'
                                        */
  real_T AltCurrent_Y0;                /* Computed Parameter: AltCurrent_Y0
                                        * Referenced by: '<S637>/AltCurrent'
                                        */
  real_T ChargingSystemPotential_Y0;   /* Computed Parameter: ChargingSystemPotential_Y0
                                        * Referenced by: '<S637>/ChargingSystemPotential'
                                        */
  real_T BatteryPotential_PowerInput1_Y0;/* Computed Parameter: BatteryPotential_PowerInput1_Y0
                                          * Referenced by: '<S637>/BatteryPotential_PowerInput1'
                                          */
  real_T KeyswitchBatteryPotential_Y0; /* Computed Parameter: KeyswitchBatteryPotential_Y0
                                        * Referenced by: '<S637>/KeyswitchBatteryPotential'
                                        */
  real_T RXstatus_Y0_lv;               /* Computed Parameter: RXstatus_Y0_lv
                                        * Referenced by: '<S637>/RX status'
                                        */
  real_T RXtime_Y0_jp;                 /* Computed Parameter: RXtime_Y0_jp
                                        * Referenced by: '<S637>/RX time'
                                        */
  real_T RXdeltatime_Y0_ac;            /* Computed Parameter: RXdeltatime_Y0_ac
                                        * Referenced by: '<S637>/RX delta time'
                                        */
  real_T RX_time_Y0_n;                 /* Computed Parameter: RX_time_Y0_n
                                        * Referenced by: '<S641>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_fh;/* Expression: 0
                                         * Referenced by: '<S641>/Unit_Delay'
                                         */
  real_T Out_Y0_i;                     /* Computed Parameter: Out_Y0_i
                                        * Referenced by: '<S677>/Out'
                                        */
  real_T Out_Y0_j;                     /* Computed Parameter: Out_Y0_j
                                        * Referenced by: '<S678>/Out'
                                        */
  real_T Out_Y0_jh;                    /* Computed Parameter: Out_Y0_jh
                                        * Referenced by: '<S679>/Out'
                                        */
  real_T Out_Y0_il;                    /* Computed Parameter: Out_Y0_il
                                        * Referenced by: '<S680>/Out'
                                        */
  real_T Out_Y0_ja;                    /* Computed Parameter: Out_Y0_ja
                                        * Referenced by: '<S681>/Out'
                                        */
  real_T Out_Y0_b;                     /* Computed Parameter: Out_Y0_b
                                        * Referenced by: '<S737>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_g;/* Expression: 0.0
                                          * Referenced by: '<S812>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_lx;           /* Expression: 1
                                        * Referenced by: '<S737>/Constant1'
                                        */
  real_T Out1_Y0_d;                    /* Computed Parameter: Out1_Y0_d
                                        * Referenced by: '<S817>/Out1'
                                        */
  real_T Constant1_Value_ea;           /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S817>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_a;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S817>/Unit_Delay'
                                        */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S840>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S840>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S840>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S840>/TX delay time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S848>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S848>/TX time'
                                        */
  real_T TXdeltatime_Y0_d;             /* Computed Parameter: TXdeltatime_Y0_d
                                        * Referenced by: '<S848>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S848>/TX delay time'
                                        */
  real_T TXstatus_Y0_ow;               /* Computed Parameter: TXstatus_Y0_ow
                                        * Referenced by: '<S860>/TX status'
                                        */
  real_T TXtime_Y0_o;                  /* Computed Parameter: TXtime_Y0_o
                                        * Referenced by: '<S860>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S860>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_f;             /* Computed Parameter: TXdelaytime_Y0_f
                                        * Referenced by: '<S860>/TX delay time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S861>/TX status'
                                        */
  real_T TXtime_Y0_k;                  /* Computed Parameter: TXtime_Y0_k
                                        * Referenced by: '<S861>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S861>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d;             /* Computed Parameter: TXdelaytime_Y0_d
                                        * Referenced by: '<S861>/TX delay time'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S864>/TX status'
                                        */
  real_T TXtime_Y0_b;                  /* Computed Parameter: TXtime_Y0_b
                                        * Referenced by: '<S864>/TX time'
                                        */
  real_T TXdeltatime_Y0_i;             /* Computed Parameter: TXdeltatime_Y0_i
                                        * Referenced by: '<S864>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_fr;            /* Computed Parameter: TXdelaytime_Y0_fr
                                        * Referenced by: '<S864>/TX delay time'
                                        */
  real_T TXstatus_Y0_n;                /* Computed Parameter: TXstatus_Y0_n
                                        * Referenced by: '<S865>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S865>/TX time'
                                        */
  real_T TXdeltatime_Y0_m;             /* Computed Parameter: TXdeltatime_Y0_m
                                        * Referenced by: '<S865>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S865>/TX delay time'
                                        */
  real_T TXstatus_Y0_a;                /* Computed Parameter: TXstatus_Y0_a
                                        * Referenced by: '<S880>/TX status'
                                        */
  real_T TXtime_Y0_j;                  /* Computed Parameter: TXtime_Y0_j
                                        * Referenced by: '<S880>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S880>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_c;             /* Computed Parameter: TXdelaytime_Y0_c
                                        * Referenced by: '<S880>/TX delay time'
                                        */
  real_T TXstatus_Y0_p;                /* Computed Parameter: TXstatus_Y0_p
                                        * Referenced by: '<S881>/TX status'
                                        */
  real_T TXtime_Y0_i;                  /* Computed Parameter: TXtime_Y0_i
                                        * Referenced by: '<S881>/TX time'
                                        */
  real_T TXdeltatime_Y0_j;             /* Computed Parameter: TXdeltatime_Y0_j
                                        * Referenced by: '<S881>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_b;             /* Computed Parameter: TXdelaytime_Y0_b
                                        * Referenced by: '<S881>/TX delay time'
                                        */
  real_T TXstatus_Y0_ay;               /* Computed Parameter: TXstatus_Y0_ay
                                        * Referenced by: '<S883>/TX status'
                                        */
  real_T TXtime_Y0_p;                  /* Computed Parameter: TXtime_Y0_p
                                        * Referenced by: '<S883>/TX time'
                                        */
  real_T TXdeltatime_Y0_n0;            /* Computed Parameter: TXdeltatime_Y0_n0
                                        * Referenced by: '<S883>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_bd;            /* Computed Parameter: TXdelaytime_Y0_bd
                                        * Referenced by: '<S883>/TX delay time'
                                        */
  real_T TXstatus_Y0_d;                /* Computed Parameter: TXstatus_Y0_d
                                        * Referenced by: '<S885>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S885>/TX time'
                                        */
  real_T TXdeltatime_Y0_p;             /* Computed Parameter: TXdeltatime_Y0_p
                                        * Referenced by: '<S885>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S885>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S898>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S906>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_m;/* Expression: 0
                                        * Referenced by: '<S898>/Unit_Delay'
                                        */
  real_T Constant_Value_g1;            /* Expression: 0
                                        * Referenced by: '<S907>/Constant'
                                        */
  real_T TXstatus_Y0_pq;               /* Computed Parameter: TXstatus_Y0_pq
                                        * Referenced by: '<S909>/TX status'
                                        */
  real_T TXtime_Y0_jr;                 /* Computed Parameter: TXtime_Y0_jr
                                        * Referenced by: '<S909>/TX time'
                                        */
  real_T TXdeltatime_Y0_jt;            /* Computed Parameter: TXdeltatime_Y0_jt
                                        * Referenced by: '<S909>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_of;            /* Computed Parameter: TXdelaytime_Y0_of
                                        * Referenced by: '<S909>/TX delay time'
                                        */
  real_T Constant_Value_of;            /* Expression: 0
                                        * Referenced by: '<S862>/Constant'
                                        */
  real_T Constant1_Value_oh;           /* Expression: 1
                                        * Referenced by: '<S862>/Constant1'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S863>/Constant'
                                        */
  real_T Constant1_Value_el;           /* Expression: 1
                                        * Referenced by: '<S863>/Constant1'
                                        */
  real_T Constant_Value_a5;            /* Expression: 0
                                        * Referenced by: '<S882>/Constant'
                                        */
  real_T Constant1_Value_er;           /* Expression: 1
                                        * Referenced by: '<S882>/Constant1'
                                        */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S922>/TX status'
                                        */
  real_T TXtime_Y0_gr;                 /* Computed Parameter: TXtime_Y0_gr
                                        * Referenced by: '<S922>/TX time'
                                        */
  real_T TXdeltatime_Y0_n3;            /* Computed Parameter: TXdeltatime_Y0_n3
                                        * Referenced by: '<S922>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_bdx;           /* Computed Parameter: TXdelaytime_Y0_bdx
                                        * Referenced by: '<S922>/TX delay time'
                                        */
  real_T TXstatus_Y0_np;               /* Computed Parameter: TXstatus_Y0_np
                                        * Referenced by: '<S931>/TX status'
                                        */
  real_T TXtime_Y0_fh;                 /* Computed Parameter: TXtime_Y0_fh
                                        * Referenced by: '<S931>/TX time'
                                        */
  real_T TXdeltatime_Y0_gh;            /* Computed Parameter: TXdeltatime_Y0_gh
                                        * Referenced by: '<S931>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_dt;            /* Computed Parameter: TXdelaytime_Y0_dt
                                        * Referenced by: '<S931>/TX delay time'
                                        */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S932>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S932>/TX time'
                                        */
  real_T TXdeltatime_Y0_iy;            /* Computed Parameter: TXdeltatime_Y0_iy
                                        * Referenced by: '<S932>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_jt;            /* Computed Parameter: TXdelaytime_Y0_jt
                                        * Referenced by: '<S932>/TX delay time'
                                        */
  real_T TXstatus_Y0_j1;               /* Computed Parameter: TXstatus_Y0_j1
                                        * Referenced by: '<S935>/TX status'
                                        */
  real_T TXtime_Y0_c;                  /* Computed Parameter: TXtime_Y0_c
                                        * Referenced by: '<S935>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S935>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_pp;            /* Computed Parameter: TXdelaytime_Y0_pp
                                        * Referenced by: '<S935>/TX delay time'
                                        */
  real_T TXstatus_Y0_jw;               /* Computed Parameter: TXstatus_Y0_jw
                                        * Referenced by: '<S936>/TX status'
                                        */
  real_T TXtime_Y0_bw;                 /* Computed Parameter: TXtime_Y0_bw
                                        * Referenced by: '<S936>/TX time'
                                        */
  real_T TXdeltatime_Y0_bx;            /* Computed Parameter: TXdeltatime_Y0_bx
                                        * Referenced by: '<S936>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_bl;            /* Computed Parameter: TXdelaytime_Y0_bl
                                        * Referenced by: '<S936>/TX delay time'
                                        */
  real_T TXstatus_Y0_f;                /* Computed Parameter: TXstatus_Y0_f
                                        * Referenced by: '<S944>/TX status'
                                        */
  real_T TXtime_Y0_ch;                 /* Computed Parameter: TXtime_Y0_ch
                                        * Referenced by: '<S944>/TX time'
                                        */
  real_T TXdeltatime_Y0_b5;            /* Computed Parameter: TXdeltatime_Y0_b5
                                        * Referenced by: '<S944>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ps;            /* Computed Parameter: TXdelaytime_Y0_ps
                                        * Referenced by: '<S944>/TX delay time'
                                        */
  real_T zero_Value_g;                 /* Expression: 0
                                        * Referenced by: '<S964>/zero'
                                        */
  real_T Constant_Value_b;             /* Expression: 8192/360
                                        * Referenced by: '<S975>/Constant'
                                        */
  real_T Constant_Value_b2;            /* Expression: 0
                                        * Referenced by: '<S933>/Constant'
                                        */
  real_T Constant1_Value_am;           /* Expression: 1
                                        * Referenced by: '<S933>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S974>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S974>/MN'
                                        */
  real_T Constant_Value_if;            /* Expression: 0
                                        * Referenced by: '<S934>/Constant'
                                        */
  real_T Constant1_Value_k;            /* Expression: 1
                                        * Referenced by: '<S934>/Constant1'
                                        */
  real_T TXstatus_Y0_l;                /* Computed Parameter: TXstatus_Y0_l
                                        * Referenced by: '<S989>/TX status'
                                        */
  real_T TXtime_Y0_bm;                 /* Computed Parameter: TXtime_Y0_bm
                                        * Referenced by: '<S989>/TX time'
                                        */
  real_T TXdeltatime_Y0_mg;            /* Computed Parameter: TXdeltatime_Y0_mg
                                        * Referenced by: '<S989>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_bz;            /* Computed Parameter: TXdelaytime_Y0_bz
                                        * Referenced by: '<S989>/TX delay time'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S991>/TX status'
                                        */
  real_T TXtime_Y0_ky;                 /* Computed Parameter: TXtime_Y0_ky
                                        * Referenced by: '<S991>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S991>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S991>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S999>/TX status'
                                        */
  real_T TXtime_Y0_lq;                 /* Computed Parameter: TXtime_Y0_lq
                                        * Referenced by: '<S999>/TX time'
                                        */
  real_T TXdeltatime_Y0_o5;            /* Computed Parameter: TXdeltatime_Y0_o5
                                        * Referenced by: '<S999>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_dg;            /* Computed Parameter: TXdelaytime_Y0_dg
                                        * Referenced by: '<S999>/TX delay time'
                                        */
  real_T Constant4_Value_g;            /* Expression: 0
                                        * Referenced by: '<S985>/Constant4'
                                        */
  real_T Constant2_Value_k;            /* Expression: -15.687
                                        * Referenced by: '<S985>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S985>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S985>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S985>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S985>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S985>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S825>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S984>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1
                                        * Referenced by: '<S984>/Saturation'
                                        */
  real_T Saturation_LowerSat_gf;       /* Expression: 0
                                        * Referenced by: '<S984>/Saturation'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 100
                                        * Referenced by: '<S984>/Gain'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.4^-1
                                        * Referenced by: '<S1001>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S984>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S984>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S984>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_h;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1001>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S985>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S985>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_jk;               /* Computed Parameter: TXstatus_Y0_jk
                                        * Referenced by: '<S1015>/TX status'
                                        */
  real_T TXtime_Y0_ny;                 /* Computed Parameter: TXtime_Y0_ny
                                        * Referenced by: '<S1015>/TX time'
                                        */
  real_T TXdeltatime_Y0_l;             /* Computed Parameter: TXdeltatime_Y0_l
                                        * Referenced by: '<S1015>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S1015>/TX delay time'
                                        */
  real_T TXstatus_Y0_bv;               /* Computed Parameter: TXstatus_Y0_bv
                                        * Referenced by: '<S1026>/TX status'
                                        */
  real_T TXtime_Y0_d;                  /* Computed Parameter: TXtime_Y0_d
                                        * Referenced by: '<S1026>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S1026>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_lz;            /* Computed Parameter: TXdelaytime_Y0_lz
                                        * Referenced by: '<S1026>/TX delay time'
                                        */
  real_T TXstatus_Y0_nc;               /* Computed Parameter: TXstatus_Y0_nc
                                        * Referenced by: '<S1027>/TX status'
                                        */
  real_T TXtime_Y0_ki;                 /* Computed Parameter: TXtime_Y0_ki
                                        * Referenced by: '<S1027>/TX time'
                                        */
  real_T TXdeltatime_Y0_j3;            /* Computed Parameter: TXdeltatime_Y0_j3
                                        * Referenced by: '<S1027>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ff;            /* Computed Parameter: TXdelaytime_Y0_ff
                                        * Referenced by: '<S1027>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S828>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_i0;               /* Computed Parameter: TXstatus_Y0_i0
                                        * Referenced by: '<S1034>/TX status'
                                        */
  real_T TXtime_Y0_d4;                 /* Computed Parameter: TXtime_Y0_d4
                                        * Referenced by: '<S1034>/TX time'
                                        */
  real_T TXdeltatime_Y0_ga;            /* Computed Parameter: TXdeltatime_Y0_ga
                                        * Referenced by: '<S1034>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_m;             /* Computed Parameter: TXdelaytime_Y0_m
                                        * Referenced by: '<S1034>/TX delay time'
                                        */
  real_T TXstatus_Y0_lm;               /* Computed Parameter: TXstatus_Y0_lm
                                        * Referenced by: '<S1035>/TX status'
                                        */
  real_T TXtime_Y0_h;                  /* Computed Parameter: TXtime_Y0_h
                                        * Referenced by: '<S1035>/TX time'
                                        */
  real_T TXdeltatime_Y0_f;             /* Computed Parameter: TXdeltatime_Y0_f
                                        * Referenced by: '<S1035>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_br;            /* Computed Parameter: TXdelaytime_Y0_br
                                        * Referenced by: '<S1035>/TX delay time'
                                        */
  real_T TXstatus_Y0_ml;               /* Computed Parameter: TXstatus_Y0_ml
                                        * Referenced by: '<S1039>/TX status'
                                        */
  real_T TXtime_Y0_p0;                 /* Computed Parameter: TXtime_Y0_p0
                                        * Referenced by: '<S1039>/TX time'
                                        */
  real_T TXdeltatime_Y0_nc;            /* Computed Parameter: TXdeltatime_Y0_nc
                                        * Referenced by: '<S1039>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_cy;            /* Computed Parameter: TXdelaytime_Y0_cy
                                        * Referenced by: '<S1039>/TX delay time'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S733>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S733>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S733>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_fc;/* Expression: 0.0
                                          * Referenced by: '<S766>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_i;        /* Expression: 1
                                        * Referenced by: '<S762>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_f;        /* Expression: 1
                                        * Referenced by: '<S765>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S733>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S733>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 100
                                        * Referenced by: '<S406>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S733>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S733>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ds;/* Expression: 0.0
                                          * Referenced by: '<S758>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_h;        /* Expression: 1
                                        * Referenced by: '<S754>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_p;        /* Expression: 1
                                        * Referenced by: '<S757>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S733>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S733>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S733>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S733>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_i;/* Expression: 0.0
                                          * Referenced by: '<S782>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_n;        /* Expression: 1
                                        * Referenced by: '<S778>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_e;        /* Expression: 1
                                        * Referenced by: '<S781>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S733>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S733>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_ku;                /* Expression: 100
                                        * Referenced by: '<S406>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S733>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S733>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_n;/* Expression: 0.0
                                          * Referenced by: '<S774>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_n0;       /* Expression: 1
                                        * Referenced by: '<S770>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_m;        /* Expression: 1
                                        * Referenced by: '<S773>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S733>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S733>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S733>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S736>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S736>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_g;        /* Expression: Inf
                                        * Referenced by: '<S803>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0.0001
                                        * Referenced by: '<S803>/Saturation'
                                        */
  real_T Constant1_Value_h;            /* Expression: 1
                                        * Referenced by: '<S803>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_m;/* Expression: 0
                                         * Referenced by: '<S803>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S736>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S736>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S736>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S736>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_ov;       /* Expression: Inf
                                        * Referenced by: '<S804>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: 0.0001
                                        * Referenced by: '<S804>/Saturation'
                                        */
  real_T Constant1_Value_kc;           /* Expression: 1
                                        * Referenced by: '<S804>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_n;/* Expression: 0
                                         * Referenced by: '<S804>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S736>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S736>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S730>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_pf;/* Expression: 0.0
                                          * Referenced by: '<S802>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_jz;/* Expression: 0.0
                                          * Referenced by: '<S801>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S738>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S738>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S733>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S733>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_nj;/* Expression: 0.0
                                          * Referenced by: '<S790>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_ey;       /* Expression: 1
                                        * Referenced by: '<S786>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_hg;       /* Expression: 1
                                        * Referenced by: '<S789>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_i;/* Expression: 25
                                          * Referenced by: '<S730>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_h;/* Expression: 25
                                          * Referenced by: '<S730>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S730>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S406>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S407>/Rate Transition'
                                          */
  real_T Constant_Value_bq;            /* Expression: 1
                                        * Referenced by: '<S440>/Constant'
                                        */
  real_T Constant_Value_pf;            /* Expression: 1
                                        * Referenced by: '<S439>/Constant'
                                        */
  real_T dsa_tcpip_setup_P1_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P1_Size
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P1;           /* Expression: boardType
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P2_Size
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2;           /* Expression: boardNo
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P3_Size
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3;           /* Expression: channelNo
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P4_Size
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4;           /* Expression: localIpNum
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P5_Size
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5;           /* Expression: localSnMask
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P6_Size
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6;           /* Expression: localGateway
                                        * Referenced by: '<S390>/dsa_tcpip_setup'
                                        */
  real_T Heartbeat_Amp;                /* Expression: 1
                                        * Referenced by: '<S389>/Heartbeat'
                                        */
  real_T Heartbeat_Period;             /* Expression: 10
                                        * Referenced by: '<S389>/Heartbeat'
                                        */
  real_T Heartbeat_Duty;               /* Expression: 5
                                        * Referenced by: '<S389>/Heartbeat'
                                        */
  real_T Heartbeat_PhaseDelay;         /* Expression: 0
                                        * Referenced by: '<S389>/Heartbeat'
                                        */
  real_T TCPIP_Com_P1_Size[2];         /* Computed Parameter: TCPIP_Com_P1_Size
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P1;                 /* Expression: localPort
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2_Size[2];         /* Computed Parameter: TCPIP_Com_P2_Size
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2;                 /* Expression: remotePort
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3_Size[2];         /* Computed Parameter: TCPIP_Com_P3_Size
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3;                 /* Expression: remoteAddr
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4_Size[2];         /* Computed Parameter: TCPIP_Com_P4_Size
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4;                 /* Expression: outputSize
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5_Size[2];         /* Computed Parameter: TCPIP_Com_P5_Size
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5;                 /* Expression: inputSize
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6_Size[2];         /* Computed Parameter: TCPIP_Com_P6_Size
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6;                 /* Expression: legacyMode
                                        * Referenced by: '<S391>/TCPIP_Com'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S393>/Unit Delay'
                                        */
  real_T Switch1_Threshold;            /* Expression: 100
                                        * Referenced by: '<S393>/Switch1'
                                        */
  real_T NoData_Value;                 /* Expression: 0
                                        * Referenced by: '<S388>/No Data'
                                        */
  real_T Constant_Value_k1;            /* Expression: 0
                                        * Referenced by: '<S438>/Constant'
                                        */
  real_T Constant_Value_ne;            /* Expression: 1
                                        * Referenced by: '<S421>/Constant'
                                        */
  real_T Constant_Value_d4;            /* Expression: 1
                                        * Referenced by: '<S444>/Constant'
                                        */
  real_T Constant_Value_gs;            /* Expression: 0
                                        * Referenced by: '<S1037>/Constant'
                                        */
  real_T Constant1_Value_kx;           /* Expression: 1
                                        * Referenced by: '<S1037>/Constant1'
                                        */
  real_T TmpRTBAtANDInport1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_df;           /* Expression: 1
                                        * Referenced by: '<S820>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1046>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_c;            /* Expression: 0.001
                                        * Referenced by: '<S820>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1046>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1046>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 0.01
                                        * Referenced by: '<S820>/Gain1'
                                        */
  real_T Constant1_Value_nr;           /* Expression: 1
                                        * Referenced by: '<S820>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1046>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_d;            /* Expression: 0.001
                                        * Referenced by: '<S820>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1046>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1046>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_fx;                 /* Expression: 0.01
                                        * Referenced by: '<S820>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S406>/ShifterControlDC'
                                        */
  real_T Constant_Value_fl;            /* Expression: .4
                                        * Referenced by: '<S1047>/Constant'
                                        */
  real_T Constant1_Value_gd;           /* Expression: 0.5
                                        * Referenced by: '<S1047>/Constant1'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S1053>/Constant'
                                        */
  real_T Constant_Value_pa;            /* Expression: 0
                                        * Referenced by: '<S1054>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1048>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1048>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1048>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1048>/Flash'
                                        */
  real_T Constant_Value_dz;            /* Expression: 0
                                        * Referenced by: '<S431>/Constant'
                                        */
  real_T Unit_Delay_1_InitialCondition_p;/* Expression: 0
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
  real_T Unit_Delay_118_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_119_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_12_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_120_InitialCondition;/* Expression: 0
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
  real_T Unit_Delay_127_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_128_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_129_InitialCondition;/* Expression: 0
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
  real_T Unit_Delay_136_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_137_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_138_InitialCondition;/* Expression: 0
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
  real_T Unit_Delay_2_InitialCondition_p;/* Expression: 0
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
  real_T Unit_Delay_3_InitialCondition_p;/* Expression: 0
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
  real_T Unit_Delay_48_InitialCondition;/* Expression: 0
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
  real_T Unit_Delay_8_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S3>/Unit_Delay'
                                        */
  real_T Unit_Delay_82_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_83_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_84_InitialCondition;/* Expression: 0
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
  real_T Constant_Value_gsy;           /* Expression: 0.125
                                        * Referenced by: '<S516>/Constant'
                                        */
  real_T Constant_Value_fn;            /* Expression: -125
                                        * Referenced by: '<S523>/Constant'
                                        */
  real_T Constant_Value_lm;            /* Expression: 0.125
                                        * Referenced by: '<S520>/Constant'
                                        */
  real_T Constant_Value_md;            /* Expression: 1/1280
                                        * Referenced by: '<S521>/Constant'
                                        */
  real_T Constant_Value_od;            /* Expression: 0.125
                                        * Referenced by: '<S524>/Constant'
                                        */
  real_T Constant_Value_e1;            /* Expression: 0.1
                                        * Referenced by: '<S525>/Constant'
                                        */
  real_T Constant_Value_c;             /* Expression: 10
                                        * Referenced by: '<S526>/Constant'
                                        */
  real_T Constant_Value_fj;            /* Expression: 10
                                        * Referenced by: '<S527>/Constant'
                                        */
  real_T Constant_Value_mk;            /* Expression: -125
                                        * Referenced by: '<S528>/Constant'
                                        */
  real_T Constant_Value_nw;            /* Expression: -125
                                        * Referenced by: '<S529>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0.125
                                        * Referenced by: '<S530>/Constant'
                                        */
  real_T Constant_Value_on;            /* Expression: 0.125
                                        * Referenced by: '<S538>/Constant'
                                        */
  real_T Constant_Value_gj;            /* Expression: 0.004
                                        * Referenced by: '<S531>/Constant'
                                        */
  real_T Constant_Value_nec;           /* Expression: -125
                                        * Referenced by: '<S539>/Constant'
                                        */
  real_T Constant_Value_cl;            /* Expression: 0.125
                                        * Referenced by: '<S540>/Constant'
                                        */
  real_T Constant_Value_j3;            /* Expression: -125
                                        * Referenced by: '<S541>/Constant'
                                        */
  real_T Constant_Value_oj;            /* Expression: 0.125
                                        * Referenced by: '<S542>/Constant'
                                        */
  real_T Constant_Value_nb;            /* Expression: -125
                                        * Referenced by: '<S517>/Constant'
                                        */
  real_T Constant_Value_ah;            /* Expression: 0.125
                                        * Referenced by: '<S518>/Constant'
                                        */
  real_T Constant_Value_dn;            /* Expression: -125
                                        * Referenced by: '<S519>/Constant'
                                        */
  real_T Constant_Value_bi;            /* Expression: 1
                                        * Referenced by: '<S417>/Constant'
                                        */
  real_T Constant_Value_ke;            /* Expression: 1
                                        * Referenced by: '<S448>/Constant'
                                        */
  real_T Constant2_Value_d;            /* Expression: 1
                                        * Referenced by: '<S405>/Constant2'
                                        */
  real_T Constant_Value_f5;            /* Expression: 1/1024
                                        * Referenced by: '<S658>/Constant'
                                        */
  real_T Constant1_Value_lg;           /* Expression: 1/1024
                                        * Referenced by: '<S659>/Constant1'
                                        */
  real_T Constant2_Value_l;            /* Expression: 360/8192
                                        * Referenced by: '<S660>/Constant2'
                                        */
  real_T ShifterControlFreq_Gain;      /* Expression: 1
                                        * Referenced by: '<S406>/ShifterControlFreq'
                                        */
  real_T ShifterControlDC2_Gain;       /* Expression: 1
                                        * Referenced by: '<S406>/ShifterControlDC2'
                                        */
  real_T ShifterControlDC1_Gain;       /* Expression: 1
                                        * Referenced by: '<S406>/ShifterControlDC1'
                                        */
  ENUM_CAN_RX_T Constant_Value_dj;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S411>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_bz;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S466>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_hg;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S412>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_p3;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S475>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_px;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S648>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant_Value_lw;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S648>/Constant'
                                        */
  ENUM_CAN_RX_T Constant2_Value_lg;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S648>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_la;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S648>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_nc;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S648>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_m;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S648>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_av;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S466>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_lgn;   /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S466>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S466>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S466>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S466>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_fh;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S475>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_o;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S475>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_m;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S475>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S475>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S475>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_df;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S601>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_hg;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S601>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_li;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S601>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_nm;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S601>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_ky;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S601>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_n;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S601>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_ed;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S575>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_b;     /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S575>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S575>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_an;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S575>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_ms;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S575>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_gt;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S575>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant_Value_i4;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S588>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_ob;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S588>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S588>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S588>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_mj;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S588>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_p;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S588>/Constant4'
                                        */
  ENUM_CAN_STATUS_DIAG_T Constant_Value_cq;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant'
                                            */
  ENUM_CAN_STATUS_DIAG_T Constant4_Value_np;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant4'
                                             */
  ENUM_CAN_STATUS_DIAG_T Constant5_Value_mf;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant5'
                                             */
  ENUM_CAN_STATUS_DIAG_T Constant1_Value_c0;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant1'
                                             */
  ENUM_CAN_STATUS_DIAG_T Constant3_Value_h;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant3'
                                            */
  ENUM_CAN_STATUS_DIAG_T Constant2_Value_j;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant2'
                                            */
  ENUM_CAN_TX_T Constant2_Value_dq;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S822>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_d;     /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S822>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S823>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S824>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S824>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S824>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S825>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_eu;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S947>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_fq;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S947>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_oz;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                 * Referenced by: '<S947>/Constant2'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_mk;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                 * Referenced by: '<S947>/Constant3'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_l;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                * Referenced by: '<S947>/Constant4'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_f;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                * Referenced by: '<S947>/Constant5'
                                                */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S98>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S98>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S985>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S985>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S985>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_a;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S985>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_i;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S985>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_i;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S985>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_b;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S985>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_hz;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                      * Referenced by: '<S985>/Constant10'
                                                      */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S985>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S985>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S985>/XBRPriority'
                                         */
  ENUM_XPR_CONTROL_MODE_T CPV_Value_e; /* Expression: ENUM_XPR_CONTROL_MODE_T.MAXIMUM_MODE
                                        * Referenced by: '<S98>/CPV'
                                        */
  ENUM_XPR_CONTROL_MODE_T CPV2_Value_hm;/* Expression: ENUM_XPR_CONTROL_MODE_T.DRIVER_BRAKING_ONLY
                                         * Referenced by: '<S98>/CPV2'
                                         */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_125_InitialCondition;/* Computed Parameter: Unit_Delay_125_InitialCondition
                                                           * Referenced by: '<S3>/Unit_Delay'
                                                           */
  ENUM_XPR_ERROR_STATE_T CPV1_Value_i5;/* Expression: ENUM_XPR_ERROR_STATE_T.XPR_OK
                                        * Referenced by: '<S98>/CPV1'
                                        */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_126_InitialCondition;/* Computed Parameter: Unit_Delay_126_InitialCondition
                                                          * Referenced by: '<S3>/Unit_Delay'
                                                          */
  ENUM_XPR_INHIBIT_PARK_MANUAL_T PROPB_XPR_INHIBIT_PARK_MANUAL_A;/* Expression: ENUM_XPR_INHIBIT_PARK_MANUAL_T.NO_OVERRIDE
                                                                  * Referenced by: '<S823>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S823>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S823>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S823>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S947>/Merge'
                                        */
  real32_T UnitDelay_InitialCondition_c;/* Computed Parameter: UnitDelay_InitialCondition_c
                                         * Referenced by: '<S278>/Unit Delay'
                                         */
  real32_T UnitDelay_InitialCondition_e;/* Computed Parameter: UnitDelay_InitialCondition_e
                                         * Referenced by: '<S283>/Unit Delay'
                                         */
  real32_T RX_delta_time_Y0;           /* Computed Parameter: RX_delta_time_Y0
                                        * Referenced by: '<S513>/RX_delta_time'
                                        */
  real32_T RX_delta_time_Y0_a;         /* Computed Parameter: RX_delta_time_Y0_a
                                        * Referenced by: '<S641>/RX_delta_time'
                                        */
  uint32_T Constant_Value_jc;          /* Computed Parameter: Constant_Value_jc
                                        * Referenced by: '<S31>/Constant'
                                        */
  uint32_T IV_Value_m;                 /* Computed Parameter: IV_Value_m
                                        * Referenced by: '<S31>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_n;/* Computed Parameter: UnitDelay_InitialCondition_n
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
  uint32_T UnitDelay_InitialCondition_i;/* Computed Parameter: UnitDelay_InitialCondition_i
                                         * Referenced by: '<S61>/Unit Delay'
                                         */
  uint32_T uD_Lookup_Table_maxIndex[2];/* Computed Parameter: uD_Lookup_Table_maxIndex
                                        * Referenced by: '<S235>/2D_Lookup_Table'
                                        */
  uint32_T uD_Lookup_Table_maxIndex_p[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_p
                                          * Referenced by: '<S236>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_a[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_a
                                          * Referenced by: '<S237>/2D_Lookup_Table'
                                          */
  uint32_T uDLookupTable_maxIndex[2];  /* Computed Parameter: uDLookupTable_maxIndex
                                        * Referenced by: '<S83>/2-D Lookup Table'
                                        */
  uint32_T uD_Lookup_Table_maxIndex_h[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_h
                                          * Referenced by: '<S85>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_e[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_e
                                          * Referenced by: '<S194>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_n[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_n
                                          * Referenced by: '<S195>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_m[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_m
                                          * Referenced by: '<S193>/2D_Lookup_Table'
                                          */
  uint32_T Operator_BitMask_no;        /* Expression: BitMask
                                        * Referenced by: '<S901>/Operator'
                                        */
  uint32_T Operator_BitMask_ac;        /* Expression: BitMask
                                        * Referenced by: '<S902>/Operator'
                                        */
  uint32_T Operator_BitMask_mh;        /* Expression: BitMask
                                        * Referenced by: '<S903>/Operator'
                                        */
  uint32_T Operator_BitMask_kv;        /* Expression: BitMask
                                        * Referenced by: '<S904>/Operator'
                                        */
  uint32_T Constant_Value_mr;          /* Computed Parameter: Constant_Value_mr
                                        * Referenced by: '<S977>/Constant'
                                        */
  uint32_T Operator_BitMask_pf;        /* Expression: BitMask
                                        * Referenced by: '<S951>/Operator'
                                        */
  uint32_T Operator_BitMask_js;        /* Expression: BitMask
                                        * Referenced by: '<S952>/Operator'
                                        */
  uint32_T Operator_BitMask_ih;        /* Expression: BitMask
                                        * Referenced by: '<S953>/Operator'
                                        */
  uint32_T Operator_BitMask_h2;        /* Expression: BitMask
                                        * Referenced by: '<S954>/Operator'
                                        */
  uint32_T IV_Value_bv;                /* Computed Parameter: IV_Value_bv
                                        * Referenced by: '<S977>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_l3;/* Computed Parameter: UnitDelay_InitialCondition_l3
                                          * Referenced by: '<S977>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_l2;        /* Expression: BitMask
                                        * Referenced by: '<S955>/Operator'
                                        */
  uint32_T Operator_BitMask_e4d;       /* Expression: BitMask
                                        * Referenced by: '<S956>/Operator'
                                        */
  uint32_T Operator_BitMask_im;        /* Expression: BitMask
                                        * Referenced by: '<S957>/Operator'
                                        */
  uint32_T Operator_BitMask_on;        /* Expression: BitMask
                                        * Referenced by: '<S958>/Operator'
                                        */
  uint32_T Constant_Value_jr;          /* Computed Parameter: Constant_Value_jr
                                        * Referenced by: '<S1005>/Constant'
                                        */
  uint32_T IV_Value_ek;                /* Computed Parameter: IV_Value_ek
                                        * Referenced by: '<S1005>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_k;/* Computed Parameter: UnitDelay_InitialCondition_k
                                         * Referenced by: '<S1005>/Unit Delay'
                                         */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_nj;          /* Computed Parameter: Constant_Value_nj
                                        * Referenced by: '<S1020>/Constant'
                                        */
  uint32_T IV_Value_f;                 /* Computed Parameter: IV_Value_f
                                        * Referenced by: '<S1020>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_k0;/* Computed Parameter: UnitDelay_InitialCondition_k0
                                          * Referenced by: '<S1020>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_fs;        /* Expression: BitMask
                                        * Referenced by: '<S1016>/Operator'
                                        */
  uint32_T Operator_BitMask_fo;        /* Expression: BitMask
                                        * Referenced by: '<S1017>/Operator'
                                        */
  uint32_T Operator_BitMask_dh;        /* Expression: BitMask
                                        * Referenced by: '<S1018>/Operator'
                                        */
  uint32_T Constant2_Value_f;          /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S426>/Constant2'
                                        */
  uint32_T Constant2_Value_cf;         /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S449>/Constant2'
                                        */
  int16_T Constant_Value_fi;           /* Expression: int16(512)
                                        * Referenced by: '<S854>/Constant'
                                        */
  uint16_T Operator_BitMask_fr;        /* Expression: BitMask
                                        * Referenced by: '<S886>/Operator'
                                        */
  uint16_T Operator_BitMask_d0;        /* Expression: BitMask
                                        * Referenced by: '<S887>/Operator'
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
  boolean_T Unit_Delay_InitialCondition_mw;/* Computed Parameter: Unit_Delay_InitialCondition_mw
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
  boolean_T Unit_Delay_InitialCondition_o;/* Computed Parameter: Unit_Delay_InitialCondition_o
                                           * Referenced by: '<S54>/Unit_Delay'
                                           */
  boolean_T E_Value_c;                 /* Expression: true
                                        * Referenced by: '<S61>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_le;/* Computed Parameter: Unit_Delay_InitialCondition_le
                                            * Referenced by: '<S60>/Unit_Delay'
                                            */
  boolean_T BRK_PRESS_DEM_AW_COND_INT_APV_V;/* Expression: true
                                             * Referenced by: '<S96>/BRK_PRESS_DEM_AW_COND_INT_APV'
                                             */
  boolean_T CPV1_Value_g;              /* Expression: false
                                        * Referenced by: '<S96>/CPV1'
                                        */
  boolean_T CPV2_Value_m;              /* Expression: false
                                        * Referenced by: '<S96>/CPV2'
                                        */
  boolean_T Unit_Delay_InitialCondition_lt;/* Expression: true
                                            * Referenced by: '<S109>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition;/* Expression: true
                                          * Referenced by: '<S129>/Unit_Delay1'
                                          */
  boolean_T Unit_Delay_InitialCondition_og;/* Expression: true
                                            * Referenced by: '<S130>/Unit_Delay'
                                            */
  boolean_T Constant_Value_olo;        /* Expression: false
                                        * Referenced by: '<S129>/Constant'
                                        */
  boolean_T Constant_Value_hi;         /* Expression: false
                                        * Referenced by: '<S130>/Constant'
                                        */
  boolean_T Constant_Value_lo;         /* Expression: false
                                        * Referenced by: '<S109>/Constant'
                                        */
  boolean_T BRK_DECEL_DEM_AW_COND_INT_APV_V;/* Expression: true
                                             * Referenced by: '<S97>/BRK_DECEL_DEM_AW_COND_INT_APV'
                                             */
  boolean_T CPV1_Value_no;             /* Expression: false
                                        * Referenced by: '<S97>/CPV1'
                                        */
  boolean_T CPV2_Value_a;              /* Expression: false
                                        * Referenced by: '<S97>/CPV2'
                                        */
  boolean_T Unit_Delay_InitialCondition_jb;/* Expression: true
                                            * Referenced by: '<S147>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_p;/* Expression: true
                                            * Referenced by: '<S167>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_lq;/* Expression: true
                                            * Referenced by: '<S168>/Unit_Delay'
                                            */
  boolean_T Constant_Value_bd;         /* Expression: false
                                        * Referenced by: '<S167>/Constant'
                                        */
  boolean_T Constant_Value_m2;         /* Expression: false
                                        * Referenced by: '<S168>/Constant'
                                        */
  boolean_T Constant_Value_j5;         /* Expression: false
                                        * Referenced by: '<S147>/Constant'
                                        */
  boolean_T F_Brake_hold_conditions_met_Y0;/* Expression: false
                                            * Referenced by: '<S177>/F_Brake_hold_conditions_met'
                                            */
  boolean_T CPV1_Value_p;              /* Expression: false
                                        * Referenced by: '<S177>/CPV1'
                                        */
  boolean_T Unit_Delay_InitialCondition_fy;/* Expression: true
                                            * Referenced by: '<S181>/Unit_Delay'
                                            */
  boolean_T Constant_Value_m3;         /* Expression: false
                                        * Referenced by: '<S181>/Constant'
                                        */
  boolean_T F_Shift_interlock_conditions_me;/* Expression: false
                                             * Referenced by: '<S178>/F_Shift_interlock_conditions_met'
                                             */
  boolean_T CPV1_Value_pl;             /* Expression: false
                                        * Referenced by: '<S178>/CPV1'
                                        */
  boolean_T Unit_Delay_InitialCondition_cl;/* Expression: true
                                            * Referenced by: '<S188>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ii;         /* Expression: false
                                        * Referenced by: '<S188>/Constant'
                                        */
  boolean_T PID_hold_i_term_f_Y0;      /* Expression: false
                                        * Referenced by: '<S206>/PID_hold_i_term_f'
                                        */
  boolean_T UseFeedForwardRoadLoad_Value;/* Expression: false
                                          * Referenced by: '<S213>/UseFeedForwardRoadLoad'
                                          */
  boolean_T Constant1_Value_g1;        /* Expression: false
                                        * Referenced by: '<S214>/Constant1'
                                        */
  boolean_T Constant3_Value_lp;        /* Expression: false
                                        * Referenced by: '<S214>/Constant3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_o;/* Expression: true
                                            * Referenced by: '<S214>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_b2;/* Computed Parameter: Unit_Delay_InitialCondition_b2
                                            * Referenced by: '<S214>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_lj;/* Expression: true
                                            * Referenced by: '<S241>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_a;/* Expression: true
                                            * Referenced by: '<S261>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_bm;/* Expression: true
                                            * Referenced by: '<S262>/Unit_Delay'
                                            */
  boolean_T GpidAwCondIntegration_Value;/* Expression: true
                                         * Referenced by: '<S206>/GpidAwCondIntegration'
                                         */
  boolean_T Constant_Value_ot;         /* Expression: false
                                        * Referenced by: '<S261>/Constant'
                                        */
  boolean_T Constant_Value_h0;         /* Expression: false
                                        * Referenced by: '<S262>/Constant'
                                        */
  boolean_T Constant_Value_ck;         /* Expression: false
                                        * Referenced by: '<S241>/Constant'
                                        */
  boolean_T E_Value_j;                 /* Expression: true
                                        * Referenced by: '<S278>/E'
                                        */
  boolean_T E_Value_ct;                /* Expression: true
                                        * Referenced by: '<S283>/E'
                                        */
  boolean_T F_Out_slewing_Y0;          /* Expression: false
                                        * Referenced by: '<S325>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ls;/* Expression: true
                                            * Referenced by: '<S327>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_i0;/* Expression: true
                                            * Referenced by: '<S328>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ld;/* Expression: false
                                            * Referenced by: '<S326>/Unit_Delay'
                                            */
  boolean_T Constant_Value_hgm;        /* Expression: false
                                        * Referenced by: '<S328>/Constant'
                                        */
  boolean_T APTC_PEDAL_POSITION_OVR_APV_Val;/* Expression: false
                                             * Referenced by: '<S83>/APTC_PEDAL_POSITION_OVR_APV'
                                             */
  boolean_T Unit_Delay_InitialCondition_b1;/* Expression: true
                                            * Referenced by: '<S380>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_g;/* Expression: true
                                           * Referenced by: '<S381>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_aw;/* Expression: true
                                            * Referenced by: '<S369>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gt;/* Expression: true
                                            * Referenced by: '<S370>/Unit_Delay'
                                            */
  boolean_T CPV_Value_a;               /* Expression: false
                                        * Referenced by: '<S347>/CPV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ml;/* Expression: false
                                            * Referenced by: '<S353>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ag;/* Expression: true
                                            * Referenced by: '<S342>/Unit_Delay'
                                            */
  boolean_T Constant7_Value_j;         /* Expression: false
                                        * Referenced by: '<S101>/Constant7'
                                        */
  boolean_T Unit_Delay_InitialCondition_ip;/* Expression: true
                                            * Referenced by: '<S101>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_f;/* Expression: true
                                            * Referenced by: '<S197>/Unit_Delay1'
                                            */
  boolean_T Constant_Value_jf;         /* Expression: false
                                        * Referenced by: '<S197>/Constant'
                                        */
  boolean_T Constant_Value_cp;         /* Expression: false
                                        * Referenced by: '<S79>/Constant'
                                        */
  boolean_T Constant_Value_jg4;        /* Expression: false
                                        * Referenced by: '<S202>/Constant'
                                        */
  boolean_T R_Value;                   /* Expression: false
                                        * Referenced by: '<S278>/R'
                                        */
  boolean_T zero_Value_gl;             /* Expression: boolean(0)
                                        * Referenced by: '<S275>/zero'
                                        */
  boolean_T Unit_Delay1_InitialCondition_m;/* Expression: true
                                            * Referenced by: '<S318>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ps;/* Expression: true
                                             * Referenced by: '<S319>/Unit_Delay1'
                                             */
  boolean_T zero3_Value;               /* Expression: boolean(0)
                                        * Referenced by: '<S275>/zero3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_j;/* Expression: true
                                            * Referenced by: '<S320>/Unit_Delay1'
                                            */
  boolean_T Constant8_Value_l;         /* Expression: boolean(0)
                                        * Referenced by: '<S273>/Constant8'
                                        */
  boolean_T Constant_Value_hx;         /* Expression: false
                                        * Referenced by: '<S318>/Constant'
                                        */
  boolean_T Constant_Value_bh;         /* Expression: false
                                        * Referenced by: '<S319>/Constant'
                                        */
  boolean_T Constant_Value_hxo;        /* Expression: false
                                        * Referenced by: '<S320>/Constant'
                                        */
  boolean_T Constant_Value_pu;         /* Expression: false
                                        * Referenced by: '<S342>/Constant'
                                        */
  boolean_T Constant_Value_am;         /* Expression: false
                                        * Referenced by: '<S370>/Constant'
                                        */
  boolean_T Constant_Value_c1;         /* Expression: false
                                        * Referenced by: '<S381>/Constant'
                                        */
  boolean_T Constant3_Value_a;         /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S393>/Constant3'
                                        */
  boolean_T Constant2_Value_cw;        /* Computed Parameter: Constant2_Value_cw
                                        * Referenced by: '<S393>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S510>/RX_status'
                                        */
  boolean_T RX_status_Y0_m;            /* Computed Parameter: RX_status_Y0_m
                                        * Referenced by: '<S638>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_g;        /* Expression: false
                                        * Referenced by: '<S737>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_a4;/* Expression: true
                                            * Referenced by: '<S808>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gte;/* Expression: true
                                             * Referenced by: '<S809>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_InitialCondition_pz;/* Expression: false
                                            * Referenced by: '<S807>/Unit_Delay'
                                            */
  boolean_T Constant_Value_k3;         /* Expression: false
                                        * Referenced by: '<S809>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S731>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S895>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S895>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S823>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S849>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S823>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S823>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_mr;                /* Expression: true
                                        * Referenced by: '<S977>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_dm;/* Computed Parameter: Unit_Delay_InitialCondition_dm
                                            * Referenced by: '<S976>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_p;  /* Expression: boolean(0)
                                        * Referenced by: '<S945>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_c;          /* Expression: boolean(0)
                                        * Referenced by: '<S945>/DataPage'
                                        */
  boolean_T E_Value_e;                 /* Expression: true
                                        * Referenced by: '<S1005>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S985>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_o5;/* Expression: false
                                            * Referenced by: '<S981>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S984>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_j3;/* Computed Parameter: Unit_Delay_InitialCondition_j3
                                            * Referenced by: '<S1004>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_a;  /* Expression: boolean(0)
                                        * Referenced by: '<S1000>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_d;          /* Expression: boolean(0)
                                        * Referenced by: '<S1000>/DataPage'
                                        */
  boolean_T CPV_Value_et;              /* Expression: true
                                        * Referenced by: '<S984>/CPV'
                                        */
  boolean_T E_Value_p;                 /* Expression: true
                                        * Referenced by: '<S1020>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S1010>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_pzo;/* Computed Parameter: Unit_Delay_InitialCondition_pzo
                                             * Referenced by: '<S1019>/Unit_Delay'
                                             */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1025>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_ml;         /* Expression: boolean(1)
                                        * Referenced by: '<S415>/Constant'
                                        */
  boolean_T Constant_Value_br;         /* Expression: boolean(1)
                                        * Referenced by: '<S416>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_ht;/* Expression: true
                                            * Referenced by: '<S736>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_mx;/* Expression: true
                                             * Referenced by: '<S803>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_pt;/* Expression: true
                                             * Referenced by: '<S736>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_e;/* Expression: true
                                            * Referenced by: '<S804>/Unit_Delay1'
                                            */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S730>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_dr;         /* Expression: boolean(1)
                                        * Referenced by: '<S420>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S425>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S432>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_e4;        /* Expression: boolean(1)
                                        * Referenced by: '<S424>/Constant1'
                                        */
  boolean_T Enable_RX_ETC2_03_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S430>/Enable_RX_ETC2_03'
                                        */
  boolean_T Enable_RX_EEC1_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S427>/Enable_RX_EEC1_00'
                                        */
  boolean_T Enable_RX_EEC3_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S429>/Enable_RX_EEC3_00'
                                        */
  boolean_T Constant_Value_jk;         /* Expression: boolean(1)
                                        * Referenced by: '<S422>/Constant'
                                        */
  boolean_T Constant_Value_lv;         /* Expression: boolean(1)
                                        * Referenced by: '<S413>/Constant'
                                        */
  boolean_T Constant_Value_c0;         /* Expression: boolean(1)
                                        * Referenced by: '<S446>/Constant'
                                        */
  boolean_T Constant_Value_fe;         /* Expression: boolean(1)
                                        * Referenced by: '<S447>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S639>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_jh;/* Expression: true
                                            * Referenced by: '<S639>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gp;/* Expression: false
                                            * Referenced by: '<S645>/Unit_Delay'
                                            */
  boolean_T Constant_Value_gm;         /* Expression: boolean(0)
                                        * Referenced by: '<S437>/Constant'
                                        */
  boolean_T Enable_Value;              /* Computed Parameter: Enable_Value
                                        * Referenced by: '<S3>/Enable'
                                        */
  boolean_T Unit_Delay_79_InitialCondition;/* Computed Parameter: Unit_Delay_79_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_80_InitialCondition;/* Computed Parameter: Unit_Delay_80_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_81_InitialCondition;/* Computed Parameter: Unit_Delay_81_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_45_InitialCondition;/* Computed Parameter: Unit_Delay_45_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ilu;        /* Computed Parameter: Constant_Value_ilu
                                        * Referenced by: '<S396>/Constant'
                                        */
  boolean_T useGPSSA00_Value;          /* Expression: boolean(1)
                                        * Referenced by: '<S456>/useGPSSA00'
                                        */
  boolean_T useGPSSA0_Value;           /* Expression: boolean(0)
                                        * Referenced by: '<S456>/useGPSSA0'
                                        */
  boolean_T Constant_Value_mb;         /* Expression: boolean(1)
                                        * Referenced by: '<S419>/Constant'
                                        */
  boolean_T Constant_Value_pl;         /* Expression: boolean(1)
                                        * Referenced by: '<S445>/Constant'
                                        */
  boolean_T Constant_Value_h2;         /* Computed Parameter: Constant_Value_h2
                                        * Referenced by: '<S1036>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S829>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S829>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1047>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_ky;        /* Expression: false
                                        * Referenced by: '<S1047>/Constant2'
                                        */
  boolean_T Unit_Delay_116_InitialCondition;/* Computed Parameter: Unit_Delay_116_InitialCondition
                                             * Referenced by: '<S3>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_117_InitialCondition;/* Computed Parameter: Unit_Delay_117_InitialCondition
                                             * Referenced by: '<S3>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_134_InitialCondition;/* Computed Parameter: Unit_Delay_134_InitialCondition
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
  boolean_T Constant_Value_ha;         /* Expression: boolean(1)
                                        * Referenced by: '<S414>/Constant'
                                        */
  boolean_T Constant_Value_po;         /* Expression: boolean(0)
                                        * Referenced by: '<S418>/Constant'
                                        */
  boolean_T Constant1_Value_mu;        /* Expression: boolean(1)
                                        * Referenced by: '<S423>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S428>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S441>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_n;/* Expression: boolean(0)
                                             * Referenced by: '<S442>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_nep;        /* Expression: boolean(0)
                                        * Referenced by: '<S443>/Constant'
                                        */
  boolean_T Constant_Value_px;         /* Expression: false
                                        * Referenced by: '<S639>/Constant'
                                        */
  boolean_T Constant1_Value_nz;        /* Expression: false
                                        * Referenced by: '<S639>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_ao;/* Expression: true
                                             * Referenced by: '<S639>/Unit_Delay2'
                                             */
  boolean_T Unit_Delay1_InitialCondition_h;/* Expression: true
                                            * Referenced by: '<S639>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_ma;/* Expression: false
                                            * Referenced by: '<S646>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ni;         /* Expression: false
                                        * Referenced by: '<S736>/Constant'
                                        */
  boolean_T Constant_Value_li;         /* Expression: false
                                        * Referenced by: '<S803>/Constant'
                                        */
  boolean_T Constant1_Value_ft;        /* Expression: false
                                        * Referenced by: '<S736>/Constant1'
                                        */
  boolean_T Constant_Value_ko;         /* Expression: false
                                        * Referenced by: '<S804>/Constant'
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
  int8_T GhostMode1_Value;             /* Computed Parameter: GhostMode1_Value
                                        * Referenced by: '<S76>/GhostMode1'
                                        */
  int8_T GhostMode_Value;              /* Computed Parameter: GhostMode_Value
                                        * Referenced by: '<S76>/GhostMode'
                                        */
  uint8_T for_logging7_Gain;           /* Computed Parameter: for_logging7_Gain
                                        * Referenced by: '<S388>/for_logging7'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S134>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_fl;      /* Computed Parameter: FixPtConstant_Value_fl
                                        * Referenced by: '<S134>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_p;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_p
                                           * Referenced by: '<S172>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_j;       /* Computed Parameter: FixPtConstant_Value_j
                                        * Referenced by: '<S172>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_e;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_e
                                           * Referenced by: '<S185>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_a;       /* Computed Parameter: FixPtConstant_Value_a
                                        * Referenced by: '<S185>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_f;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_f
                                           * Referenced by: '<S192>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_k;       /* Computed Parameter: FixPtConstant_Value_k
                                        * Referenced by: '<S192>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_a;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_a
                                           * Referenced by: '<S266>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_jk;      /* Computed Parameter: FixPtConstant_Value_jk
                                        * Referenced by: '<S266>/FixPt Constant'
                                        */
  uint8_T SteeringControlSRC_Value;    /* Expression: uint8(3)
                                        * Referenced by: '<S80>/SteeringControlSRC'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_c;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_c
                                           * Referenced by: '<S331>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_np;      /* Computed Parameter: FixPtConstant_Value_np
                                        * Referenced by: '<S331>/FixPt Constant'
                                        */
  uint8_T Supervisor_Autonomous_Mode_Valu;/* Computed Parameter: Supervisor_Autonomous_Mode_Valu
                                           * Referenced by: '<S76>/Supervisor_Autonomous_Mode'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_f5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_f5
                                           * Referenced by: '<S385>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_po;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_po
                                           * Referenced by: '<S374>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_i;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                           * Referenced by: '<S362>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ck;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ck
                                           * Referenced by: '<S346>/FixPt Unit Delay2'
                                           */
  uint8_T Constant_Value_mg;           /* Expression: uint8(3)
                                        * Referenced by: '<S276>/Constant'
                                        */
  uint8_T Constant1_Value_ls;          /* Expression: uint8(5)
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint8_T FixPtConstant_Value_az;      /* Computed Parameter: FixPtConstant_Value_az
                                        * Referenced by: '<S346>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_g;       /* Computed Parameter: FixPtConstant_Value_g
                                        * Referenced by: '<S362>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_g;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_g
                                           * Referenced by: '<S364>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pz;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pz
                                           * Referenced by: '<S365>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_el;      /* Computed Parameter: FixPtConstant_Value_el
                                        * Referenced by: '<S365>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_p2;      /* Computed Parameter: FixPtConstant_Value_p2
                                        * Referenced by: '<S364>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_d;       /* Computed Parameter: FixPtConstant_Value_d
                                        * Referenced by: '<S374>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jx;      /* Computed Parameter: FixPtConstant_Value_jx
                                        * Referenced by: '<S385>/FixPt Constant'
                                        */
  uint8_T Failure_Value_g;             /* Computed Parameter: Failure_Value_g
                                        * Referenced by: '<S388>/Failure'
                                        */
  uint8_T RawData_Y0;                  /* Computed Parameter: RawData_Y0
                                        * Referenced by: '<S513>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_e3[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                             * Referenced by: '<S510>/Unit Delay'
                                             */
  uint8_T RawData_Y0_c;                /* Computed Parameter: RawData_Y0_c
                                        * Referenced by: '<S641>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_nz[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                             * Referenced by: '<S638>/Unit Delay'
                                             */
  uint8_T FixPtUnitDelay2_InitialCondit_h;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_h
                                           * Referenced by: '<S812>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_b;       /* Computed Parameter: FixPtConstant_Value_b
                                        * Referenced by: '<S812>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_i;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S856>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S895>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S895>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S895>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S895>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_a1;         /* Expression: BitMask
                                        * Referenced by: '<S900>/Operator'
                                        */
  uint8_T Operator_BitMask_jzu;        /* Expression: BitMask
                                        * Referenced by: '<S899>/Operator'
                                        */
  uint8_T Constant_Value_ln;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S855>/Constant'
                                        */
  uint8_T Constant1_Value_ag;          /* Expression: uint8(0)
                                        * Referenced by: '<S948>/Constant1'
                                        */
  uint8_T Constant_Value_oy;           /* Expression: uint8(1)
                                        * Referenced by: '<S948>/Constant'
                                        */
  uint8_T Constant_Value_mkz;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S946>/Constant'
                                        */
  uint8_T Constant1_Value_pp;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S946>/Constant1'
                                        */
  uint8_T Operator_BitMask_pd;         /* Expression: BitMask
                                        * Referenced by: '<S959>/Operator'
                                        */
  uint8_T Priority_Value_l;            /* Expression: uint8(6)
                                        * Referenced by: '<S945>/Priority'
                                        */
  uint8_T PDUFormat_Value_m;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S945>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_o;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S945>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_g;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S945>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_ol;         /* Expression: BitMask
                                        * Referenced by: '<S960>/Operator'
                                        */
  uint8_T Constant2_Value_bm;          /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S1001>/Constant2'
                                        */
  uint8_T Constant3_Value_lf;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1001>/Constant3'
                                        */
  uint8_T Constant4_Value_dq;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1001>/Constant4'
                                        */
  uint8_T Constant_Value_b0;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1001>/Constant'
                                        */
  uint8_T Constant1_Value_nn;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1001>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_e;            /* Expression: uint8(3)
                                        * Referenced by: '<S1000>/Priority'
                                        */
  uint8_T PDUFormat_Value_i;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1000>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_b;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S1000>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_h;       /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S1000>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1001>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1031>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1031>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1031>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1031>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1031>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1031>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1031>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1031>/Byte1'
                                        */
  uint8_T Byte8_Value_l;               /* Expression: uint8('N')
                                        * Referenced by: '<S1030>/Byte8'
                                        */
  uint8_T Byte7_Value_i;               /* Expression: uint8('R')
                                        * Referenced by: '<S1030>/Byte7'
                                        */
  uint8_T Byte6_Value_f;               /* Expression: uint8('*')
                                        * Referenced by: '<S1030>/Byte6'
                                        */
  uint8_T Byte5_Value_k;               /* Expression: uint8('R')
                                        * Referenced by: '<S1030>/Byte5'
                                        */
  uint8_T Byte4_Value_f;               /* Expression: uint8('A')
                                        * Referenced by: '<S1030>/Byte4'
                                        */
  uint8_T Byte3_Value_i;               /* Expression: uint8('C')
                                        * Referenced by: '<S1030>/Byte3'
                                        */
  uint8_T Byte2_Value_d;               /* Expression: uint8('P')
                                        * Referenced by: '<S1030>/Byte2'
                                        */
  uint8_T Byte1_Value_l;               /* Computed Parameter: Byte1_Value_l
                                        * Referenced by: '<S1030>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondi_it;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_it
                                           * Referenced by: '<S766>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_n;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_n
                                           * Referenced by: '<S758>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_o;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_o
                                           * Referenced by: '<S782>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_k;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_k
                                           * Referenced by: '<S774>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_f2;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_f2
                                           * Referenced by: '<S802>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ab;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ab
                                           * Referenced by: '<S801>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_fl;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_fl
                                           * Referenced by: '<S790>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_ay;          /* Expression: uint8(32)
                                        * Referenced by: '<S459>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S639>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_eg;           /* Computed Parameter: Constant_Value_eg
                                        * Referenced by: '<S643>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Byte1_Value_m;               /* Computed Parameter: Byte1_Value_m
                                        * Referenced by: '<S1028>/Byte1'
                                        */
  uint8_T Byte2_Value_h;               /* Computed Parameter: Byte2_Value_h
                                        * Referenced by: '<S1028>/Byte2'
                                        */
  uint8_T Byte3_Value_k;               /* Computed Parameter: Byte3_Value_k
                                        * Referenced by: '<S1028>/Byte3'
                                        */
  uint8_T Byte4_Value_c;               /* Computed Parameter: Byte4_Value_c
                                        * Referenced by: '<S1028>/Byte4'
                                        */
  uint8_T Byte5_Value_c;               /* Computed Parameter: Byte5_Value_c
                                        * Referenced by: '<S1028>/Byte5'
                                        */
  uint8_T Byte6_Value_e;               /* Computed Parameter: Byte6_Value_e
                                        * Referenced by: '<S1028>/Byte6'
                                        */
  uint8_T Byte7_Value_d;               /* Computed Parameter: Byte7_Value_d
                                        * Referenced by: '<S1028>/Byte7'
                                        */
  uint8_T Byte8_Value_m;               /* Computed Parameter: Byte8_Value_m
                                        * Referenced by: '<S1028>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_c;/* Computed Parameter: UnitDelay1_InitialCondition_c
                                         * Referenced by: '<S829>/Unit Delay1'
                                         */
  uint8_T Constant1_Value_ig;          /* Computed Parameter: Constant1_Value_ig
                                        * Referenced by: '<S829>/Constant1'
                                        */
  uint8_T Constant2_Value_ab;          /* Computed Parameter: Constant2_Value_ab
                                        * Referenced by: '<S1048>/Constant2'
                                        */
  uint8_T Constant3_Value_lz;          /* Computed Parameter: Constant3_Value_lz
                                        * Referenced by: '<S1048>/Constant3'
                                        */
  uint8_T Unit_Delay_135_InitialCondition;/* Computed Parameter: Unit_Delay_135_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S639>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_iv;           /* Computed Parameter: Constant_Value_iv
                                        * Referenced by: '<S644>/Constant'
                                        */
  uint8_T Constant_Value_o4;           /* Expression: uint8(16)
                                        * Referenced by: '<S459>/Constant'
                                        */
  uint8_T Constant1_Value_ax;          /* Expression: uint8(17)
                                        * Referenced by: '<S459>/Constant1'
                                        */
  uint8_T Constant2_Value_ak;          /* Expression: uint8(19)
                                        * Referenced by: '<S459>/Constant2'
                                        */
  uint8_T Constant4_Value_kl;          /* Expression: uint8(255)
                                        * Referenced by: '<S459>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_bw;      /* Computed Parameter: FixPtConstant_Value_bw
                                        * Referenced by: '<S758>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_e5;      /* Computed Parameter: FixPtConstant_Value_e5
                                        * Referenced by: '<S766>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_pf;      /* Computed Parameter: FixPtConstant_Value_pf
                                        * Referenced by: '<S774>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_mw;      /* Computed Parameter: FixPtConstant_Value_mw
                                        * Referenced by: '<S782>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_f2;      /* Computed Parameter: FixPtConstant_Value_f2
                                        * Referenced by: '<S790>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jc;      /* Computed Parameter: FixPtConstant_Value_jc
                                        * Referenced by: '<S801>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_i0;      /* Computed Parameter: FixPtConstant_Value_i0
                                        * Referenced by: '<S802>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S947>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S947>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S947>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S947>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S947>/ALL_CTRL_DISABLED' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S238>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S238>/Calculate_D_term' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S144>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S144>/Calculate_D_term' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S106>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S106>/Calculate_D_term' */
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
      real_T const *UPtrs2[22];
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
extern real_T GLB_Absolute_Timestamp;  /* '<S407>/Rate Transition' */
extern real_T ReAX_ActualHandwheelPos; /* '<S433>/Switch' */
extern real_T EthernetLinkStatus;      /* '<S390>/dsa_tcpip_setup' */
extern real_T CurrentAzimuth_rad;      /* '<S388>/Switch' */
extern real_T TargetAzimuth_rad;       /* '<S388>/Switch1' */
extern real_T TargetVelocity_kph;      /* '<S388>/Switch3' */
extern real_T Curvature;               /* '<S388>/Switch4' */
extern real_T CurrentVelocity_kph;     /* '<S388>/Switch2' */
extern real_T CrosstrackError;         /* '<S388>/Switch5' */
extern real_T GPS_X;                   /* '<S388>/Switch6' */
extern real_T GPS_Y;                   /* '<S388>/Switch7' */
extern real_T GPS_Time;                /* '<S388>/Switch8' */
extern real_T ReAX_EchoedSteerWheelPos;/* '<S433>/Switch' */
extern real_T SteerWheelAngle;         /* '<S635>/S-Function1' */
extern real_T YawRate;                 /* '<S635>/S-Function1' */
extern real_T SPN1810_LongitudinalAcceleration;/* '<S635>/S-Function1' */
extern real_T WheelBasedVehicleSpeed;  /* '<S496>/S-Function1' */
extern real_T BrakeSwitch;             /* '<S496>/S-Function1' */
extern real_T Lateral_Control_Rate_Limit;/* '<S301>/Constant' */
extern real_T Lateral_Control_Output;  /* '<S274>/Sum1' */
extern real_T Lateral_Control_Rate_Limiter_Output;/* '<S301>/If_Then_Else' */
extern real_T SteerCommandDeg;         /* '<S80>/sign1' */
extern real_T DesiredSteeringAngle;    /* '<S80>/sign2' */
extern real_T Lateral_Control_Heading_Error;/* '<S274>/Error Calc' */
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
extern real32_T REAX_Handwheel_Torque; /* '<S409>/Data Type Conversion3' */
extern real32_T REAX_Handwheel_Velocity;/* '<S409>/Data Type Conversion4' */
extern real32_T REAX_Pull_Compensation;/* '<S409>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN1_Status;/* '<S1>/Data Type Conversion' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN5_Status;/* '<S1>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN6_Status;/* '<S1>/Data Type Conversion4' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN3_Status;/* '<S1>/Data Type Conversion3' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN4_Status;/* '<S1>/Data Type Conversion2' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN2_Status;/* '<S1>/Data Type Conversion1' */
extern uint8_T SupervisorMode;         /* '<S388>/Switch9' */
extern uint8_T REAX_Current_Mode;      /* '<S409>/Data Type Conversion' */
extern uint8_T REAX_Req_Mode;          /* '<S409>/Data Type Conversion1' */
extern uint8_T REAX_Status;            /* '<S409>/Data Type Conversion2' */
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1061>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S406>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S731>/Switch' */
extern boolean_T Heartbeat_Ok;         /* '<S393>/Switch1' */
extern boolean_T RTMapsOk;             /* '<S388>/AND' */
extern boolean_T EngagePB;             /* '<S406>/Logical Operator' */
extern boolean_T AutonomousEnabled;    /* '<S76>/Autonomous Mode Switch1' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T RateLimiterActive;    /* '<S310>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S735>/Switch' */

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
                                        * Referenced by: '<S143>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_KI_DATA_MPV[8];  /* Variable: BRK_DEM_KI_DATA_MPV
                                        * Referenced by: '<S142>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_KP_DATA_MPV[8];  /* Variable: BRK_DEM_KP_DATA_MPV
                                        * Referenced by: '<S141>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_MASS_STEP_MPV[8];/* Variable: BRK_DEM_MASS_STEP_MPV
                                        * Referenced by:
                                        *   '<S141>/1D_Lookup_Table'
                                        *   '<S142>/1D_Lookup_Table'
                                        *   '<S143>/1D_Lookup_Table'
                                        */
extern real_T BRK_GOV_FF_DECEL_RATE_DATA_MPV[32];/* Variable: BRK_GOV_FF_DECEL_RATE_DATA_MPV
                                                  * Referenced by: '<S193>/2D_Lookup_Table'
                                                  */
extern real_T BRK_GOV_FF_DECEL_RATE_STEP_MPV[16];/* Variable: BRK_GOV_FF_DECEL_RATE_STEP_MPV
                                                  * Referenced by:
                                                  *   '<S194>/2D_Lookup_Table'
                                                  *   '<S195>/2D_Lookup_Table'
                                                  */
extern real_T BRK_GOV_FF_MASS_STEP_MPV[2];/* Variable: BRK_GOV_FF_MASS_STEP_MPV
                                           * Referenced by:
                                           *   '<S193>/2D_Lookup_Table'
                                           *   '<S194>/2D_Lookup_Table'
                                           *   '<S195>/2D_Lookup_Table'
                                           */
extern real_T BRK_GOV_FF_PRESS_KPA_DATA_MPV[32];/* Variable: BRK_GOV_FF_PRESS_KPA_DATA_MPV
                                                 * Referenced by:
                                                 *   '<S194>/2D_Lookup_Table'
                                                 *   '<S195>/2D_Lookup_Table'
                                                 */
extern real_T BRK_GOV_FF_PRESS_KPA_STEP_MPV[16];/* Variable: BRK_GOV_FF_PRESS_KPA_STEP_MPV
                                                 * Referenced by: '<S193>/2D_Lookup_Table'
                                                 */
extern real_T Curvature_FF_Gain;       /* Variable: Curvature_FF_Gain
                                        * Referenced by: '<S274>/FeedforwardGain'
                                        */
extern real_T DISTANCE_M;              /* Variable: DISTANCE_M
                                        * Referenced by: '<S81>/DISTANCE_M'
                                        */
extern real_T Lateral_Control_Curvature_Limit;/* Variable: Lateral_Control_Curvature_Limit
                                               * Referenced by:
                                               *   '<S274>/Constant3'
                                               *   '<S274>/Constant5'
                                               */
extern real_T Lateral_Control_D;       /* Variable: Lateral_Control_D
                                        * Referenced by: '<S298>/Derivative Gain'
                                        */
extern real_T Lateral_Control_Error_Limit;/* Variable: Lateral_Control_Error_Limit
                                           * Referenced by:
                                           *   '<S274>/Constant'
                                           *   '<S274>/Constant1'
                                           */
extern real_T Lateral_Control_Error_Rate_Limit;/* Variable: Lateral_Control_Error_Rate_Limit
                                                * Referenced by:
                                                *   '<S274>/Constant10'
                                                *   '<S274>/Constant7'
                                                *   '<S274>/Constant8'
                                                *   '<S274>/Constant9'
                                                */
extern real_T Lateral_Control_I;       /* Variable: Lateral_Control_I
                                        * Referenced by: '<S298>/Integral Gain'
                                        */
extern real_T Lateral_Control_P;       /* Variable: Lateral_Control_P
                                        * Referenced by:
                                        *   '<S274>/PGain'
                                        *   '<S298>/Proportional Gain'
                                        */
extern real_T Lateral_Control_Pole;    /* Variable: Lateral_Control_Pole
                                        * Referenced by: '<S302>/GainPole'
                                        */
extern real_T Lateral_Control_Rate_Limit_APV;/* Variable: Lateral_Control_Rate_Limit_APV
                                              * Referenced by: '<S301>/Constant'
                                              */
extern real_T Lateral_Control_YawRate_Limit;/* Variable: Lateral_Control_YawRate_Limit
                                             * Referenced by:
                                             *   '<S274>/Constant2'
                                             *   '<S274>/Constant4'
                                             */
extern real_T Lateral_Control_Zero;    /* Variable: Lateral_Control_Zero
                                        * Referenced by: '<S302>/GainZero'
                                        */
extern real_T PROPB_REAX_1_E4_DESIRED_POSITION_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_POSITION_APV
                                                    * Referenced by: '<S964>/Constant7'
                                                    */
extern real_T REAX_OFFSET_APV;         /* Variable: REAX_OFFSET_APV
                                        * Referenced by:
                                        *   '<S80>/Constant'
                                        *   '<S274>/Constant6'
                                        */
extern real_T STEERCTRL_WHEEL_ANGLE_DATA_MPV[72];/* Variable: STEERCTRL_WHEEL_ANGLE_DATA_MPV
                                                  * Referenced by: '<S270>/1D_Lookup_Table'
                                                  */
extern real_T STEERCTRL_WHEEL_ANGLE_STEP_MPV[72];/* Variable: STEERCTRL_WHEEL_ANGLE_STEP_MPV
                                                  * Referenced by: '<S270>/1D_Lookup_Table'
                                                  */
extern real_T TQ_DEM_GEAR_RATIO_STEP_MPV[8];/* Variable: TQ_DEM_GEAR_RATIO_STEP_MPV
                                             * Referenced by:
                                             *   '<S235>/2D_Lookup_Table'
                                             *   '<S236>/2D_Lookup_Table'
                                             *   '<S237>/2D_Lookup_Table'
                                             */
extern real_T TQ_DEM_KD_DATA_MPV[64];  /* Variable: TQ_DEM_KD_DATA_MPV
                                        * Referenced by: '<S237>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_KI_DATA_MPV[64];  /* Variable: TQ_DEM_KI_DATA_MPV
                                        * Referenced by: '<S236>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_KP_DATA_MPV[64];  /* Variable: TQ_DEM_KP_DATA_MPV
                                        * Referenced by: '<S235>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_MASS_STEP_MPV[8]; /* Variable: TQ_DEM_MASS_STEP_MPV
                                        * Referenced by:
                                        *   '<S235>/2D_Lookup_Table'
                                        *   '<S236>/2D_Lookup_Table'
                                        *   '<S237>/2D_Lookup_Table'
                                        */
extern real_T UndersteerCorection;     /* Variable: UndersteerCorection
                                        * Referenced by: '<S274>/UndersteerCorrection'
                                        */
extern real_T VSPD_TARGET_KPH_APV;     /* Variable: VSPD_TARGET_KPH_APV
                                        * Referenced by: '<S81>/VSPD_TARGET_KPH_APV'
                                        */
extern real_T Yaw_Rate_FF_Gain;        /* Variable: Yaw_Rate_FF_Gain
                                        * Referenced by: '<S274>/RateFeedbackGain'
                                        */
extern ENUM_AUTONOMOUS_MODE_T AUTONOMOUS_MODE_SELECTOR_APV;/* Variable: AUTONOMOUS_MODE_SELECTOR_APV
                                                            * Referenced by: '<S76>/AUTONOMOUS_MODE_SELECTOR_APV'
                                                            */
extern ENUM_CAN_RX_T CANR_PROPB_XPR_1_50_CHANNEL_APV;/* Variable: CANR_PROPB_XPR_1_50_CHANNEL_APV
                                                      * Referenced by: '<S436>/Constant'
                                                      */
extern ENUM_CAN_RX_T PROPB_REAX_CHANNEL_APV;/* Variable: PROPB_REAX_CHANNEL_APV
                                             * Referenced by:
                                             *   '<S434>/Constant'
                                             *   '<S435>/Constant'
                                             *   '<S456>/Constant3'
                                             */
extern ENUM_LONG_SPEED_DEMAND_SOURCE_T LONG_SPEED_SRC_SELECTOR_APV;/* Variable: LONG_SPEED_SRC_SELECTOR_APV
                                                                    * Referenced by:
                                                                    *   '<S80>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    *   '<S81>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    */
extern ENUM_REAX_OPERATION_MODE_T PROPB_REAX_1_E4_DESIRED_OPMODE_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_OPMODE_APV
                                                                      * Referenced by: '<S947>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S964>/Constant1'
                                                                      */
extern ENUM_SWITCH_T RATE_LIMITER_ENABLE_APV;/* Variable: RATE_LIMITER_ENABLE_APV
                                              * Referenced by: '<S301>/RATE_LIMITER_ENABLE_APV'
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
 * '<S95>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/EQ'
 * '<S96>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller'
 * '<S97>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller'
 * '<S98>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_application_and_switch_states'
 * '<S99>'  : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target'
 * '<S100>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits'
 * '<S101>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate'
 * '<S102>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_stopped'
 * '<S103>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control'
 * '<S104>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3'
 * '<S105>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/dT'
 * '<S106>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S107>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error'
 * '<S108>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID'
 * '<S109>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Reset_governor'
 * '<S110>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S111>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S112>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S113>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S114>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S115>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S116>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S117>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S118>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S119>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S120>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S121>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S122>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S123>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S124>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S125>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S126>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S127>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S128>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S129>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S130>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S131>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S132>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S133>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S134>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S135>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S136>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S137>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S138>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem'
 * '<S139>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3'
 * '<S140>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/dT'
 * '<S141>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table'
 * '<S142>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table1'
 * '<S143>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table2'
 * '<S144>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S145>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error'
 * '<S146>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID'
 * '<S147>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Reset_governor'
 * '<S148>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S149>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S150>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S151>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S152>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S153>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S154>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S155>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S156>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S157>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S158>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S159>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S160>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S161>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S162>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S163>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S164>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S165>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S166>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S167>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S168>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S169>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S170>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S171>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S172>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S173>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S174>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S175>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S176>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_application_and_switch_states/If_Then_Else'
 * '<S177>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target'
 * '<S178>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target'
 * '<S179>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/If_Then_Else'
 * '<S180>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/If_Then_Else1'
 * '<S181>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset'
 * '<S182>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/dT'
 * '<S183>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/Check Static  Lower Bound'
 * '<S184>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/If_Then_Else'
 * '<S185>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/Unit Delay External IC'
 * '<S186>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/If_Then_Else'
 * '<S187>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/If_Then_Else1'
 * '<S188>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset'
 * '<S189>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/dT'
 * '<S190>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/Check Static  Lower Bound'
 * '<S191>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/If_Then_Else'
 * '<S192>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/Unit Delay External IC'
 * '<S193>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table'
 * '<S194>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table1'
 * '<S195>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table2'
 * '<S196>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/Discrete Derivative1'
 * '<S197>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/LPF_first_order'
 * '<S198>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/LPF_first_order/If_Then_Else'
 * '<S199>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control/Compare To Zero'
 * '<S200>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control/Compare To Zero1'
 * '<S201>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Chart'
 * '<S202>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/ESTOP_10ms'
 * '<S203>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller'
 * '<S204>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Engine_speed_target'
 * '<S205>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Relay_control'
 * '<S206>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov'
 * '<S207>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant'
 * '<S208>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant1'
 * '<S209>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant2'
 * '<S210>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Zero'
 * '<S211>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Zero1'
 * '<S212>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Relay_control/Relay_control_state_machine'
 * '<S213>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses'
 * '<S214>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_tq_dem_gov_reset'
 * '<S215>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem'
 * '<S216>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3'
 * '<S217>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque'
 * '<S218>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation'
 * '<S219>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1'
 * '<S220>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2'
 * '<S221>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/If_Then_Else'
 * '<S222>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce'
 * '<S223>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/F_wheel_to_Tq_eng'
 * '<S224>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine aerodynamic resistance'
 * '<S225>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine gradient resistance'
 * '<S226>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine rolling resistance'
 * '<S227>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/If_Then_Else'
 * '<S228>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine rolling resistance/Determine coefficient of rolling resistance'
 * '<S229>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation/If_Then_Else'
 * '<S230>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation/If_Then_Else1'
 * '<S231>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1/If_Then_Else'
 * '<S232>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1/If_Then_Else1'
 * '<S233>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2/If_Then_Else'
 * '<S234>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2/If_Then_Else1'
 * '<S235>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table'
 * '<S236>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table1'
 * '<S237>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table2'
 * '<S238>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S239>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error'
 * '<S240>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID'
 * '<S241>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Reset_governor'
 * '<S242>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S243>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S244>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S245>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S246>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S247>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S248>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S249>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S250>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S251>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S252>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S253>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S254>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S255>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S256>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S257>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S258>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S259>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S260>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S261>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S262>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S263>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S264>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S265>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S266>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S267>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S268>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S269>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S270>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/1D_Lookup_Table'
 * '<S271>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF'
 * '<S272>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1'
 * '<S273>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID'
 * '<S274>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController'
 * '<S275>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError'
 * '<S276>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew'
 * '<S277>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/stanley'
 * '<S278>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE'
 * '<S279>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Data Type Conversion Inherited'
 * '<S280>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Enable'
 * '<S281>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Interval Test'
 * '<S282>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Reset'
 * '<S283>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE'
 * '<S284>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Data Type Conversion Inherited'
 * '<S285>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Enable'
 * '<S286>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Interval Test'
 * '<S287>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Reset'
 * '<S288>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID'
 * '<S289>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID'
 * '<S290>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/Saturation Dynamic'
 * '<S291>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID/AntiWindup'
 * '<S292>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Bumpless Transfer'
 * '<S293>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation'
 * '<S294>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Calc'
 * '<S295>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation'
 * '<S296>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else'
 * '<S297>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else1'
 * '<S298>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/PID Controller'
 * '<S299>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic'
 * '<S300>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1'
 * '<S301>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation'
 * '<S302>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Transfer Fcn Lead or Lag'
 * '<S303>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation'
 * '<S304>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else'
 * '<S305>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else1'
 * '<S306>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else'
 * '<S307>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else1'
 * '<S308>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S309>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1/Saturation Dynamic'
 * '<S310>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Compare To Constant'
 * '<S311>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/If_Then_Else'
 * '<S312>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter'
 * '<S313>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Saturation'
 * '<S314>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter/Saturation Dynamic'
 * '<S315>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else'
 * '<S316>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else1'
 * '<S317>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/Detect Change'
 * '<S318>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order'
 * '<S319>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied'
 * '<S320>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1'
 * '<S321>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order/If_Then_Else'
 * '<S322>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied/If_Then_Else'
 * '<S323>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1/If_Then_Else'
 * '<S324>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Chart'
 * '<S325>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event'
 * '<S326>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/RS flip-flop'
 * '<S327>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Rising_edge'
 * '<S328>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset'
 * '<S329>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S330>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S331>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S332>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Compare To Zero'
 * '<S333>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Detect Change1'
 * '<S334>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile'
 * '<S335>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile'
 * '<S336>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit'
 * '<S337>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/If_Then_Else'
 * '<S338>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit'
 * '<S339>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/dT'
 * '<S340>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Detect Change1'
 * '<S341>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values'
 * '<S342>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset'
 * '<S343>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values/If_Then_Else'
 * '<S344>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Check Static  Lower Bound'
 * '<S345>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/If_Then_Else'
 * '<S346>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Unit Delay External IC'
 * '<S347>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile'
 * '<S348>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value'
 * '<S349>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/TwentyPointVectorCalculation'
 * '<S350>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/VehicleSpeedSetpointDynamicCalculation'
 * '<S351>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value'
 * '<S352>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Compare To Zero'
 * '<S353>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/SR flip-flop'
 * '<S354>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value/If_Then_Else'
 * '<S355>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/If_Then_Else'
 * '<S356>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators'
 * '<S357>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance'
 * '<S358>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator'
 * '<S359>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT'
 * '<S360>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT1'
 * '<S361>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/If_Then_Else'
 * '<S362>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/Unit Delay Resettable External IC1'
 * '<S363>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method'
 * '<S364>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Unit Delay Resettable External IC1'
 * '<S365>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method/Unit Delay Resettable External IC'
 * '<S366>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant3'
 * '<S367>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant8'
 * '<S368>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/If_Then_Else4'
 * '<S369>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Rising_edge'
 * '<S370>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset'
 * '<S371>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/dT'
 * '<S372>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S373>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/If_Then_Else'
 * '<S374>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S375>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant10'
 * '<S376>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant11'
 * '<S377>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant12'
 * '<S378>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant9'
 * '<S379>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/If_Then_Else4'
 * '<S380>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Rising_edge'
 * '<S381>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset'
 * '<S382>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/dT'
 * '<S383>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S384>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/If_Then_Else'
 * '<S385>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S386>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Mapping'
 * '<S387>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Odometry'
 * '<S388>' : 'L4_MABX/ETHERNET/Data RX'
 * '<S389>' : 'L4_MABX/ETHERNET/Data TX'
 * '<S390>' : 'L4_MABX/ETHERNET/TCPIP_Setup'
 * '<S391>' : 'L4_MABX/ETHERNET/UDPIP_Communication'
 * '<S392>' : 'L4_MABX/ETHERNET/Update_RTMaps_Interface'
 * '<S393>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check'
 * '<S394>' : 'L4_MABX/ETHERNET/Data RX/RTMapsDecode'
 * '<S395>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1'
 * '<S396>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1/Positive'
 * '<S397>' : 'L4_MABX/ETHERNET/Data TX/RTMapsEncode'
 * '<S398>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background'
 * '<S399>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background_Task'
 * '<S400>' : 'L4_MABX/ETHERNET/TCPIP_Setup/IRQ_Level_2_SW_INT'
 * '<S401>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task'
 * '<S402>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block'
 * '<S403>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task/Tcp Input Processing'
 * '<S404>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block/Common Hardware Interrupt Interface'
 * '<S405>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW'
 * '<S406>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL'
 * '<S407>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access'
 * '<S408>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_EC1'
 * '<S409>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_3'
 * '<S410>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_4'
 * '<S411>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00'
 * '<S412>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00'
 * '<S413>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A'
 * '<S414>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A'
 * '<S415>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31'
 * '<S416>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00'
 * '<S417>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31'
 * '<S418>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks'
 * '<S419>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00'
 * '<S420>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31'
 * '<S421>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01'
 * '<S422>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B'
 * '<S423>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B'
 * '<S424>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B'
 * '<S425>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B'
 * '<S426>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00'
 * '<S427>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00'
 * '<S428>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00'
 * '<S429>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00'
 * '<S430>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03'
 * '<S431>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00'
 * '<S432>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B'
 * '<S433>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13'
 * '<S434>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13'
 * '<S435>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13'
 * '<S436>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50'
 * '<S437>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2'
 * '<S438>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01'
 * '<S439>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30'
 * '<S440>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03'
 * '<S441>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2'
 * '<S442>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3'
 * '<S443>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5'
 * '<S444>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01'
 * '<S445>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05'
 * '<S446>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B'
 * '<S447>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B'
 * '<S448>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03'
 * '<S449>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00'
 * '<S450>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C1'
 * '<S451>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C2'
 * '<S452>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C1'
 * '<S453>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C2'
 * '<S454>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C1'
 * '<S455>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C2'
 * '<S456>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable'
 * '<S457>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3'
 * '<S458>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4'
 * '<S459>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM'
 * '<S460>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPDT'
 * '<S461>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses15'
 * '<S462>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses16'
 * '<S463>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses2'
 * '<S464>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses3'
 * '<S465>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1'
 * '<S466>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel'
 * '<S467>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S468>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ'
 * '<S469>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ1'
 * '<S470>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ2'
 * '<S471>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ3'
 * '<S472>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ4'
 * '<S473>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ5'
 * '<S474>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1'
 * '<S475>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel'
 * '<S476>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S477>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ'
 * '<S478>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ1'
 * '<S479>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ2'
 * '<S480>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ3'
 * '<S481>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ4'
 * '<S482>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ5'
 * '<S483>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1'
 * '<S484>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1/ACC1_2A_'
 * '<S485>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1'
 * '<S486>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1/AEBS1_A0'
 * '<S487>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1'
 * '<S488>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1/AIR1'
 * '<S489>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1'
 * '<S490>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1/AMB'
 * '<S491>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4'
 * '<S492>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4/B2'
 * '<S493>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1'
 * '<S494>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1/Tracks'
 * '<S495>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1'
 * '<S496>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1/CCVS1_00'
 * '<S497>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1'
 * '<S498>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1/CCVS1_31'
 * '<S499>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4'
 * '<S500>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_00'
 * '<S501>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_1'
 * '<S502>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1'
 * '<S503>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1/CVW_0B1'
 * '<S504>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1'
 * '<S505>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1/EBC1_0B'
 * '<S506>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1'
 * '<S507>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1/EBC1_0B'
 * '<S508>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1'
 * '<S509>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1/EBC2_0B1'
 * '<S510>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00'
 * '<S511>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1'
 * '<S512>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/EQ1'
 * '<S513>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/Decode'
 * '<S514>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/serialize_tpdt'
 * '<S515>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/MergeBuses'
 * '<S516>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1'
 * '<S517>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte11'
 * '<S518>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13'
 * '<S519>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte14'
 * '<S520>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16'
 * '<S521>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18'
 * '<S522>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20'
 * '<S523>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte2'
 * '<S524>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22'
 * '<S525>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte23'
 * '<S526>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte24'
 * '<S527>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte25'
 * '<S528>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte26'
 * '<S529>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte27'
 * '<S530>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29'
 * '<S531>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31'
 * '<S532>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33'
 * '<S533>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte34'
 * '<S534>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte35'
 * '<S535>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte36'
 * '<S536>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte37'
 * '<S537>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte38'
 * '<S538>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4'
 * '<S539>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte5'
 * '<S540>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7'
 * '<S541>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte8'
 * '<S542>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10'
 * '<S543>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1/OR'
 * '<S544>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13/OR'
 * '<S545>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16/OR'
 * '<S546>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18/OR'
 * '<S547>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20/OR'
 * '<S548>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22/OR'
 * '<S549>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29/OR'
 * '<S550>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31/OR'
 * '<S551>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33/OR'
 * '<S552>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4/OR'
 * '<S553>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7/OR'
 * '<S554>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10/OR'
 * '<S555>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1'
 * '<S556>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1/EEC1_001'
 * '<S557>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2'
 * '<S558>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2/EEC2_001'
 * '<S559>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1'
 * '<S560>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1/EEC3_001'
 * '<S561>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1'
 * '<S562>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1/ETC2_031'
 * '<S563>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4'
 * '<S564>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_011'
 * '<S565>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_1'
 * '<S566>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1'
 * '<S567>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1/HRW_0B'
 * '<S568>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2'
 * '<S569>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6'
 * '<S570>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2/PropB_REAX_2_13'
 * '<S571>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6/PropB_REAX_2_13'
 * '<S572>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1'
 * '<S573>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2'
 * '<S574>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6'
 * '<S575>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel'
 * '<S576>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S577>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S578>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6/CAN_TYPE1_RX_M3_C2'
 * '<S579>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ'
 * '<S580>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ1'
 * '<S581>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ2'
 * '<S582>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ3'
 * '<S583>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ4'
 * '<S584>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ5'
 * '<S585>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1'
 * '<S586>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2'
 * '<S587>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3'
 * '<S588>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel'
 * '<S589>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S590>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S591>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3/CAN_TYPE1_RX_M3_C2'
 * '<S592>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ'
 * '<S593>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ1'
 * '<S594>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ2'
 * '<S595>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ3'
 * '<S596>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ4'
 * '<S597>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ5'
 * '<S598>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1'
 * '<S599>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2'
 * '<S600>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3'
 * '<S601>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel'
 * '<S602>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S603>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S604>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3/CAN_TYPE1_RX_M2_C1'
 * '<S605>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ'
 * '<S606>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ1'
 * '<S607>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ2'
 * '<S608>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ3'
 * '<S609>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ4'
 * '<S610>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ5'
 * '<S611>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6'
 * '<S612>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeLeft'
 * '<S613>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeRight'
 * '<S614>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LanePosEst'
 * '<S615>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4'
 * '<S616>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_011'
 * '<S617>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_1'
 * '<S618>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3'
 * '<S619>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3/Bendix_Prop2C2_Status_30'
 * '<S620>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1'
 * '<S621>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1/SSI2_031'
 * '<S622>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6'
 * '<S623>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6/PX2_MapLaneEgoLeft'
 * '<S624>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6'
 * '<S625>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6/PX2_MapLaneEgoRight'
 * '<S626>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6'
 * '<S627>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6/PX2_EgoLanePos'
 * '<S628>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4'
 * '<S629>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4/SystemTime_01'
 * '<S630>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5'
 * '<S631>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5/TC1_03_05'
 * '<S632>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1'
 * '<S633>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1/VDC1_0B_'
 * '<S634>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1'
 * '<S635>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1/VDC2_0B1'
 * '<S636>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1'
 * '<S637>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1/VEP1'
 * '<S638>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00'
 * '<S639>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI'
 * '<S640>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/EQ1'
 * '<S641>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/Decode'
 * '<S642>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/serialize_tpdt'
 * '<S643>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero1'
 * '<S644>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero2'
 * '<S645>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop'
 * '<S646>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop1'
 * '<S647>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/If_Then_Else'
 * '<S648>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel'
 * '<S649>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ'
 * '<S650>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ1'
 * '<S651>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ2'
 * '<S652>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ3'
 * '<S653>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ4'
 * '<S654>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ5'
 * '<S655>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/MergeBuses'
 * '<S656>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1'
 * '<S657>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte2'
 * '<S658>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4'
 * '<S659>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6'
 * '<S660>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8'
 * '<S661>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND1'
 * '<S662>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND2'
 * '<S663>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4/OR'
 * '<S664>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6/OR1'
 * '<S665>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8/OR2'
 * '<S666>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/MergeBuses'
 * '<S667>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1'
 * '<S668>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte2'
 * '<S669>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte3'
 * '<S670>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte5'
 * '<S671>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7'
 * '<S672>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte8'
 * '<S673>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND'
 * '<S674>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND1'
 * '<S675>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND2'
 * '<S676>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7/OR'
 * '<S677>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM'
 * '<S678>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS'
 * '<S679>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort'
 * '<S680>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck'
 * '<S681>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS'
 * '<S682>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ'
 * '<S683>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ1'
 * '<S684>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ2'
 * '<S685>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ3'
 * '<S686>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ4'
 * '<S687>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/MergeBuses'
 * '<S688>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte1'
 * '<S689>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3'
 * '<S690>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte4'
 * '<S691>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8'
 * '<S692>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3/OR'
 * '<S693>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8/OR'
 * '<S694>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/MergeBuses'
 * '<S695>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte1'
 * '<S696>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte2'
 * '<S697>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte3'
 * '<S698>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8'
 * '<S699>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8/OR'
 * '<S700>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/MergeBuses'
 * '<S701>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte1'
 * '<S702>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte2'
 * '<S703>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8'
 * '<S704>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8/OR'
 * '<S705>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/MergeBuses'
 * '<S706>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte1'
 * '<S707>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3'
 * '<S708>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte4'
 * '<S709>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8'
 * '<S710>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3/OR'
 * '<S711>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8/OR'
 * '<S712>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/MergeBuses'
 * '<S713>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte1'
 * '<S714>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3'
 * '<S715>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte4'
 * '<S716>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte5'
 * '<S717>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8'
 * '<S718>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3/OR'
 * '<S719>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8/OR'
 * '<S720>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL1'
 * '<S721>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL2'
 * '<S722>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL3'
 * '<S723>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL1'
 * '<S724>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL2'
 * '<S725>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL3'
 * '<S726>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL4'
 * '<S727>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S728>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S729>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S730>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S731>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S804>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S805>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S806>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S807>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S808>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S809>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S810>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S811>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S812>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S813>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S814>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S815>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S816>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S817>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S818>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S819>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S820>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S821>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S822>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S823>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S824>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S825>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S826>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S827>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S828>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S829>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S830>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S831>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S832>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S833>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S834>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S835>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S836>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S837>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S838>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S839>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S840>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S841>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S842>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S843>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S844>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S845>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S846>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S847>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S848>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S849>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S850>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S851>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S852>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S853>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S854>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL3'
 * '<S1043>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL4'
 * '<S1044>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1045>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1046>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1047>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1048>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1049>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1050>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1051>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1052>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1053>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1054>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1055>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1056>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1057>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1058>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1059>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1060>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1061>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
