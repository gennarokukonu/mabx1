/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.879
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Thu Jan 23 10:37:49 2020
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

/* Block signals for system '<S304>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S314>/Switch' */
} B_If_Then_Else_L4_MABX_mf_T;

/* Block signals for system '<S344>/If_Then_Else' */
typedef struct {
  real_T Vehicle_speed_target;         /* '<S346>/Switch' */
  real_T Vehicle_speed;                /* '<S346>/Switch' */
  real_T Distance_m;                   /* '<S346>/Switch' */
} B_If_Then_Else_L4_MABX_h_T;

/* Block signals for system '<S1000>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S1024>/Switch' */
  real_T XBRUrgency;                   /* '<S1024>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S1024>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S1024>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1024>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S1024>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S1024>/Switch' */
} B_If_Then_Else_L4_MABX_j_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S397>/Decoder' */
  real_T SFunction1_o1;                /* '<S734>/S-Function1' */
  real_T SFunction1_o2;                /* '<S734>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S411>/Data Type Conversion2' */
  real_T Xold;                         /* '<S781>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S781>/Init' */
  real_T FixPtSum1;                    /* '<S777>/FixPt Sum1' */
  real_T FixPtSum1_l;                  /* '<S780>/FixPt Sum1' */
  real_T Gain;                         /* '<S411>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S411>/Data Type Conversion9' */
  real_T Xold_i;                       /* '<S773>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S773>/Init' */
  real_T FixPtSum1_n;                  /* '<S769>/FixPt Sum1' */
  real_T FixPtSum1_e;                  /* '<S772>/FixPt Sum1' */
  real_T SFunction1_o1_j;              /* '<S735>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S735>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S411>/Data Type Conversion3' */
  real_T Xold_j;                       /* '<S797>/FixPt Unit Delay1' */
  real_T Init_f;                       /* '<S797>/Init' */
  real_T FixPtSum1_c;                  /* '<S793>/FixPt Sum1' */
  real_T FixPtSum1_p;                  /* '<S796>/FixPt Sum1' */
  real_T Gain1;                        /* '<S411>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S411>/Data Type Conversion1' */
  real_T Xold_h;                       /* '<S789>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S789>/Init' */
  real_T FixPtSum1_g;                  /* '<S785>/FixPt Sum1' */
  real_T FixPtSum1_pf;                 /* '<S788>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S818>/MinMax1' */
  real_T Saturation;                   /* '<S818>/Saturation' */
  real_T Divide;                       /* '<S818>/Divide' */
  real_T Product2;                     /* '<S818>/Product2' */
  real_T Subtract1;                    /* '<S818>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S818>/Unit_Delay2' */
  real_T Product1;                     /* '<S818>/Product1' */
  real_T Add1;                         /* '<S818>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S751>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_m;                    /* '<S819>/MinMax1' */
  real_T Saturation_p;                 /* '<S819>/Saturation' */
  real_T Divide_h;                     /* '<S819>/Divide' */
  real_T Product2_b;                   /* '<S819>/Product2' */
  real_T Subtract1_h;                  /* '<S819>/Subtract1' */
  real_T Unit_Delay2_c;                /* '<S819>/Unit_Delay2' */
  real_T Product1_l;                   /* '<S819>/Product1' */
  real_T Add1_d;                       /* '<S819>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S751>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S753>/Subtract' */
  real_T Abs;                          /* '<S753>/Abs' */
  real_T Xold_o;                       /* '<S817>/FixPt Unit Delay1' */
  real_T Init_fq;                      /* '<S817>/Init' */
  real_T Xold_k;                       /* '<S816>/FixPt Unit Delay1' */
  real_T Init_n;                       /* '<S816>/Init' */
  real_T MinMax;                       /* '<S747>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S753>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S748>/Data Type Conversion2' */
  real_T Xold_m;                       /* '<S805>/FixPt Unit Delay1' */
  real_T Init_m;                       /* '<S805>/Init' */
  real_T FixPtSum1_b;                  /* '<S801>/FixPt Sum1' */
  real_T FixPtSum1_b2;                 /* '<S804>/FixPt Sum1' */
  real_T SFunction1;                   /* '<S727>/S-Function1' */
  real_T IgnitionKeySwitch_voltage;    /* '<S411>/KL15_Monitor' */
  real_T SPN524_TransSelectedGear;     /* '<S566>/Data Type Conversion1' */
  real_T SPN523_TransCurrentGear;      /* '<S566>/Data Type Conversion2' */
  real_T SPN526_TransActualGearRatio;  /* '<S566>/Data Type Conversion3' */
  real_T SPN514_NominalFrictionPercentTo;/* '<S564>/Data Type Conversion2' */
  real_T SPN2978_EstEngParasiticLossesPe;/* '<S564>/Data Type Conversion1' */
  real_T SPN1760_GrossCombinationVehicle;/* '<S507>/Data Type Conversion1' */
  real_T ACCDistanceAlertSignal;       /* '<S488>/Data Type Conversion12' */
  real_T ForwardCollisionWarning;      /* '<S488>/Data Type Conversion13' */
  real_T SPN544_EngineReferenceTorque; /* '<S527>/Data Type Conversion2' */
  real_T PitchAngleExRange;            /* '<S625>/Data Type Conversion1' */
  real_T PressureP1;                   /* '<S623>/Data Type Conversion7' */
  real_T PressureP4;                   /* '<S623>/Data Type Conversion6' */
  real_T PressureP21;                  /* '<S623>/Data Type Conversion11' */
  real_T PressureP22;                  /* '<S623>/Data Type Conversion12' */
  real_T PressureP42;                  /* '<S623>/Data Type Conversion13' */
  real_T Heartbeat;                    /* '<S392>/Heartbeat' */
  real_T TargetVelocity_kph_m;         /* '<S3>/Unit_Delay' */
  real_T CurrentVelocity_kph_k;        /* '<S3>/Unit_Delay' */
  real_T Subtract_e;                   /* '<S401>/Subtract' */
  real_T Decoder_o3;                   /* '<S397>/Decoder' */
  real_T UnitDelay;                    /* '<S396>/Unit Delay' */
  real_T Count;                        /* '<S396>/Switch' */
  real_T Latitude_;                    /* '<S620>/Switch' */
  real_T Longitude_;                   /* '<S620>/Switch' */
  real_T SID;                          /* '<S504>/Switch' */
  real_T COGReference;                 /* '<S504>/Switch' */
  real_T CourseOverGround;             /* '<S504>/Switch' */
  real_T SpeedOverGround;              /* '<S504>/Switch' */
  real_T DataTypeConversion[8];        /* '<S1047>/Data Type Conversion' */
  real_T DataTypeConversion_l[8];      /* '<S1048>/Data Type Conversion' */
  real_T TmpRTBAtANDInport1;           /* '<S1063>/Flash' */
  real_T MinMax_o;                     /* '<S835>/MinMax' */
  real_T DataTypeConversion1;          /* '<S835>/Data Type Conversion1' */
  real_T Divide_j;                     /* '<S835>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S835>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1061>/1-D Lookup Table2' */
  real_T Gain1_j;                      /* '<S835>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S835>/Data Type Conversion6' */
  real_T MinMax1_mi;                   /* '<S835>/MinMax1' */
  real_T DataTypeConversion2_f;        /* '<S835>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S835>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S835>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1061>/1-D Lookup Table3' */
  real_T Gain_e;                       /* '<S835>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S835>/Data Type Conversion10' */
  real_T SFunction1_o1_b;              /* '<S733>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S733>/S-Function1' */
  real_T ShiftControlDC;               /* '<S411>/ShifterControlDC' */
  real_T Flash;                        /* '<S1063>/Flash' */
  real_T HDOP_;                        /* '<S568>/Switch' */
  real_T DesSteeringAngle;             /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle2;           /* '<S3>/Unit_Delay' */
  real_T SPN2978_EstEngParasiticLosses_m;/* '<S3>/Unit_Delay' */
  real_T SPN1760_GrossCombinationVehic_h;/* '<S3>/Unit_Delay' */
  real_T ACCDistanceAlertSignal_o;     /* '<S3>/Unit_Delay' */
  real_T ForwardCollisionWarning_c;    /* '<S3>/Unit_Delay' */
  real_T SPN544_EngineReferenceTorque_g;/* '<S3>/Unit_Delay' */
  real_T ROPEngCtrlActive;             /* '<S3>/Unit_Delay' */
  real_T ROPBrakeCtrlActive;           /* '<S3>/Unit_Delay' */
  real_T YCEngCtrlActive;              /* '<S3>/Unit_Delay' */
  real_T YCBrakeCtrlActive;            /* '<S3>/Unit_Delay' */
  real_T SPN1807_SteeringWheelAngle;   /* '<S3>/Unit_Delay' */
  real_T DesSteeringAngleTerm;         /* '<S3>/Unit_Delay' */
  real_T SPN1808_YawRate;              /* '<S3>/Unit_Delay' */
  real_T SPN1810_LongitudinalAcceleratio;/* '<S3>/Unit_Delay' */
  real_T SteerWheelTurnCounter;        /* '<S3>/Unit_Delay' */
  real_T SteerWheelAngleSensorType;    /* '<S3>/Unit_Delay' */
  real_T LateralAcceleration;          /* '<S3>/Unit_Delay' */
  real_T BarometricPress;              /* '<S3>/Unit_Delay' */
  real_T AmbientAirTemp;               /* '<S3>/Unit_Delay' */
  real_T PitchAngleExRange_m;          /* '<S3>/Unit_Delay' */
  real_T DesSteeringDistTerm;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstPosition;       /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstAngle;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstNumPoints;      /* '<S3>/Unit_Delay' */
  real_T Latitude__c;                  /* '<S3>/Unit_Delay' */
  real_T Longitude__m;                 /* '<S3>/Unit_Delay' */
  real_T HDOP__o;                      /* '<S3>/Unit_Delay' */
  real_T PressureP1_a;                 /* '<S3>/Unit_Delay' */
  real_T PressureP4_h;                 /* '<S3>/Unit_Delay' */
  real_T numLanePoints;                /* '<S3>/Unit_Delay' */
  real_T PressureP21_b;                /* '<S3>/Unit_Delay' */
  real_T PressureP22_e;                /* '<S3>/Unit_Delay' */
  real_T PressureP42_n;                /* '<S3>/Unit_Delay' */
  real_T ReAX_ActualHandwheelPos_p;    /* '<S3>/Unit_Delay' */
  real_T ReAX_EchoedSteerWheelPos_p;   /* '<S3>/Unit_Delay' */
  real_T CurrentAzimuth_rad_k;         /* '<S3>/Unit_Delay' */
  real_T TargetAzimuth_rad_i;          /* '<S3>/Unit_Delay' */
  real_T rawPositionError;             /* '<S3>/Unit_Delay' */
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
  real_T B;                            /* '<S3>/Unit_Delay' */
  real_T DesSteeringPID_Y;             /* '<S3>/Unit_Delay' */
  real_T X;                            /* '<S3>/Unit_Delay' */
  real_T Y;                            /* '<S3>/Unit_Delay' */
  real_T pathCurveOffset;              /* '<S3>/Unit_Delay' */
  real_T S_b;                          /* '<S3>/Unit_Delay' */
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
  real_T IgnitionKeySwitch_voltage_c;  /* '<S3>/Unit_Delay' */
  real_T BrakeSwitch_a;                /* '<S3>/Unit_Delay' */
  real_T Park_brake_switch;            /* '<S3>/Unit_Delay' */
  real_T CruiseCtrlEnableSwitch;       /* '<S3>/Unit_Delay' */
  real_T FrontAxleSpeed;               /* '<S3>/Unit_Delay' */
  real_T FrontAxleLeftWheelSpeed;      /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle;            /* '<S3>/Unit_Delay' */
  real_T FrontAxleRightWheelSpeed;     /* '<S3>/Unit_Delay' */
  real_T EBSBrakeSwitch;               /* '<S3>/Unit_Delay' */
  real_T SPN524_TransSelectedGear_m;   /* '<S3>/Unit_Delay' */
  real_T SPN523_TransCurrentGear_n;    /* '<S3>/Unit_Delay' */
  real_T SPN526_TransActualGearRatio_f;/* '<S3>/Unit_Delay' */
  real_T ActualEngPercentTorque;       /* '<S3>/Unit_Delay' */
  real_T ActlEngPrcntTrqueHighResolution;/* '<S3>/Unit_Delay' */
  real_T EngSpeed;                     /* '<S3>/Unit_Delay' */
  real_T DriversDemandEngPercentTorque;/* '<S3>/Unit_Delay' */
  real_T SPN514_NominalFrictionPercent_g;/* '<S3>/Unit_Delay' */
  real_T DataTypeConversion2_o;        /* '<S521>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S521>/Product' */
  real_T DataTypeConversion_e;         /* '<S413>/Data Type Conversion' */
  real_T DataTypeConversion_a;         /* '<S528>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S528>/Add' */
  real_T DataTypeConversion1_l;        /* '<S413>/Data Type Conversion1' */
  real_T DataTypeConversion2_e;        /* '<S525>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S525>/Product' */
  real_T DataTypeConversion10;         /* '<S413>/Data Type Conversion10' */
  real_T DataTypeConversion2_ol;       /* '<S526>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S526>/Product' */
  real_T DataTypeConversion11;         /* '<S413>/Data Type Conversion11' */
  real_T DataTypeConversion2_fd;       /* '<S529>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S529>/Product' */
  real_T DataTypeConversion13;         /* '<S413>/Data Type Conversion13' */
  real_T DataTypeConversion2_fp;       /* '<S530>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S530>/Product' */
  real_T DataTypeConversion14;         /* '<S413>/Data Type Conversion14' */
  real_T DataTypeConversion2_g;        /* '<S531>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S531>/Product' */
  real_T DataTypeConversion15;         /* '<S413>/Data Type Conversion15' */
  real_T DataTypeConversion2_oc;       /* '<S532>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S532>/Product' */
  real_T DataTypeConversion16;         /* '<S413>/Data Type Conversion16' */
  real_T DataTypeConversion_i;         /* '<S533>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S533>/Add' */
  real_T DataTypeConversion17;         /* '<S413>/Data Type Conversion17' */
  real_T DataTypeConversion_n;         /* '<S534>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S534>/Add' */
  real_T DataTypeConversion18;         /* '<S413>/Data Type Conversion18' */
  real_T DataTypeConversion2_n;        /* '<S535>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S535>/Product' */
  real_T DataTypeConversion19;         /* '<S413>/Data Type Conversion19' */
  real_T DataTypeConversion2_ox;       /* '<S543>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S543>/Product' */
  real_T DataTypeConversion2_m;        /* '<S413>/Data Type Conversion2' */
  real_T DataTypeConversion2_p;        /* '<S536>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S536>/Product' */
  real_T DataTypeConversion20;         /* '<S413>/Data Type Conversion20' */
  real_T DataTypeConversion_if;        /* '<S544>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S544>/Add' */
  real_T DataTypeConversion3;          /* '<S413>/Data Type Conversion3' */
  real_T DataTypeConversion2_pg;       /* '<S545>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S545>/Product' */
  real_T DataTypeConversion4;          /* '<S413>/Data Type Conversion4' */
  real_T DataTypeConversion_l0;        /* '<S546>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S546>/Add' */
  real_T DataTypeConversion5;          /* '<S413>/Data Type Conversion5' */
  real_T DataTypeConversion2_b;        /* '<S547>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S547>/Product' */
  real_T DataTypeConversion6;          /* '<S413>/Data Type Conversion6' */
  real_T DataTypeConversion_b;         /* '<S522>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S522>/Add' */
  real_T DataTypeConversion7;          /* '<S413>/Data Type Conversion7' */
  real_T DataTypeConversion2_ob;       /* '<S523>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S523>/Product' */
  real_T DataTypeConversion8;          /* '<S413>/Data Type Conversion8' */
  real_T DataTypeConversion_h;         /* '<S524>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S524>/Add' */
  real_T DataTypeConversion9;          /* '<S413>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S470>/Data Type Conversion9' */
  real_T RX_time_b;                    /* '<S416>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S470>/Data Type Conversion10' */
  real_T RX_delta_time_j;              /* '<S416>/Multiport_Switch' */
  real_T RX_time_b4;                   /* '<S479>/Data Type Conversion9' */
  real_T RX_time_d;                    /* '<S417>/Multiport_Switch' */
  real_T RX_delta_time_a;              /* '<S479>/Data Type Conversion10' */
  real_T RX_delta_time_b;              /* '<S417>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S488>/Data Type Conversion1' */
  real_T RX_delta_time_o;              /* '<S488>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S488>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S488>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S488>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S488>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S488>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S488>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S488>/Data Type Conversion7' */
  real_T RX_time_d3;                   /* '<S488>/Data Type Conversion9' */
  real_T RX_delta_time_n;              /* '<S490>/Data Type Conversion10' */
  real_T RX_time_o;                    /* '<S490>/Data Type Conversion9' */
  real_T RX_delta_time_h;              /* '<S492>/Data Type Conversion10' */
  real_T RX_time_i;                    /* '<S492>/Data Type Conversion9' */
  real_T RX_delta_time_m;              /* '<S494>/Data Type Conversion10' */
  real_T RX_time_bq;                   /* '<S494>/Data Type Conversion9' */
  real_T RX_delta_time_e;              /* '<S496>/Data Type Conversion10' */
  real_T RX_time_a;                    /* '<S496>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S498>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S498>/Data Type Conversion9' */
  real_T RX_delta_time_f;              /* '<S500>/Data Type Conversion10' */
  real_T RX_time_f;                    /* '<S500>/Data Type Conversion9' */
  real_T RX_delta_time_nw;             /* '<S502>/Data Type Conversion10' */
  real_T RX_time_j;                    /* '<S502>/Data Type Conversion9' */
  real_T RX_time_k;                    /* '<S504>/Switch' */
  real_T RX_delta_time_m1;             /* '<S504>/Switch' */
  real_T RX_delta_time_bj;             /* '<S507>/Data Type Conversion10' */
  real_T RX_time_m;                    /* '<S507>/Data Type Conversion9' */
  real_T RX_delta_time_i;              /* '<S509>/Data Type Conversion10' */
  real_T RX_time_l;                    /* '<S509>/Data Type Conversion9' */
  real_T RX_delta_time_b1;             /* '<S511>/Data Type Conversion10' */
  real_T RX_time_lm;                   /* '<S511>/Data Type Conversion9' */
  real_T RX_delta_time_eu;             /* '<S513>/Data Type Conversion10' */
  real_T RX_time_d1;                   /* '<S513>/Data Type Conversion9' */
  real_T RX_delta_time_i4;             /* '<S560>/Data Type Conversion10' */
  real_T RX_time_c;                    /* '<S560>/Data Type Conversion9' */
  real_T RX_delta_time_j5;             /* '<S562>/Data Type Conversion10' */
  real_T RX_time_ah;                   /* '<S562>/Data Type Conversion9' */
  real_T RX_delta_time_g;              /* '<S564>/Data Type Conversion10' */
  real_T RX_time_e;                    /* '<S564>/Data Type Conversion9' */
  real_T RX_delta_time_fp;             /* '<S566>/Data Type Conversion10' */
  real_T RX_time_h;                    /* '<S566>/Data Type Conversion9' */
  real_T SID_e;                        /* '<S568>/Switch' */
  real_T SetMode;                      /* '<S568>/Switch' */
  real_T OpMode;                       /* '<S568>/Switch' */
  real_T VDOP;                         /* '<S568>/Switch' */
  real_T TDOP;                         /* '<S568>/Switch' */
  real_T RX_time_m2;                   /* '<S568>/Switch' */
  real_T RX_delta_time_d;              /* '<S568>/Switch' */
  real_T RX_delta_time_hw;             /* '<S571>/Data Type Conversion10' */
  real_T RX_time_jy;                   /* '<S571>/Data Type Conversion9' */
  real_T RX_time_f4;                   /* '<S438>/Switch' */
  real_T RX_delta_time_l;              /* '<S438>/Switch' */
  real_T RX_time_ap;                   /* '<S605>/Data Type Conversion9' */
  real_T RX_time_p;                    /* '<S441>/Multiport_Switch' */
  real_T RX_delta_time_bp;             /* '<S605>/Data Type Conversion10' */
  real_T RX_delta_time_hs;             /* '<S441>/Multiport_Switch' */
  real_T RX_delta_time_eq;             /* '<S616>/Data Type Conversion1' */
  real_T RX_delta_time_ea;             /* '<S616>/Data Type Conversion10' */
  real_T RX_time_bn;                   /* '<S616>/Data Type Conversion3' */
  real_T RX_delta_time_lv;             /* '<S616>/Data Type Conversion4' */
  real_T RX_time_ca;                   /* '<S616>/Data Type Conversion6' */
  real_T RX_time_iz;                   /* '<S616>/Data Type Conversion9' */
  real_T RX_time_p2;                   /* '<S620>/Switch' */
  real_T RX_delta_time_og;             /* '<S620>/Switch' */
  real_T XPR1ControlStatus;            /* '<S623>/Data Type Conversion1' */
  real_T RX_delta_time_ic;             /* '<S623>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S623>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S623>/Data Type Conversion3' */
  real_T RX_time_fl;                   /* '<S623>/Data Type Conversion9' */
  real_T RX_delta_time_ip;             /* '<S625>/Data Type Conversion10' */
  real_T RX_time_jn;                   /* '<S625>/Data Type Conversion9' */
  real_T RX_delta_time_bh;             /* '<S627>/Data Type Conversion10' */
  real_T RX_time_kx;                   /* '<S627>/Data Type Conversion9' */
  real_T RX_delta_time_jz;             /* '<S629>/Data Type Conversion10' */
  real_T RX_time_ku;                   /* '<S629>/Data Type Conversion9' */
  real_T RX_delta_time_nt;             /* '<S631>/Data Type Conversion10' */
  real_T RX_time_k5;                   /* '<S631>/Data Type Conversion9' */
  real_T RX_delta_time_g2;             /* '<S633>/Data Type Conversion10' */
  real_T RX_time_b2;                   /* '<S633>/Data Type Conversion9' */
  real_T RX_delta_time_ew;             /* '<S635>/Data Type Conversion10' */
  real_T RX_time_d4;                   /* '<S635>/Data Type Conversion9' */
  real_T RX_delta_time_n3;             /* '<S637>/Data Type Conversion10' */
  real_T RX_time_j2;                   /* '<S637>/Data Type Conversion9' */
  real_T RX_delta_time_j4;             /* '<S639>/Data Type Conversion10' */
  real_T RX_time_ct;                   /* '<S639>/Data Type Conversion9' */
  real_T PitchAngleExRange_b;          /* '<S641>/Data Type Conversion1' */
  real_T RX_delta_time_j4j;            /* '<S641>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S641>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S641>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S641>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S641>/Data Type Conversion5' */
  real_T RX_time_pj;                   /* '<S641>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S410>/Constant2' */
  real_T DataTypeConversion4_d;        /* '<S663>/Data Type Conversion4' */
  real_T DataTypeConversion1_a;        /* '<S664>/Data Type Conversion1' */
  real_T DataTypeConversion1_m;        /* '<S665>/Data Type Conversion1' */
  real_T RX_time_e3;                   /* '<S578>/Data Type Conversion9' */
  real_T RX_time_ky;                   /* '<S579>/Data Type Conversion9' */
  real_T RX_time_p1;                   /* '<S439>/Multiport_Switch' */
  real_T RX_delta_time_k;              /* '<S578>/Data Type Conversion10' */
  real_T RX_delta_time_my;             /* '<S579>/Data Type Conversion10' */
  real_T RX_delta_time_fg;             /* '<S439>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S675>/Data Type Conversion5' */
  real_T DataTypeConversion5_g;        /* '<S415>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S676>/Data Type Conversion9' */
  real_T DataTypeConversion6_a;        /* '<S415>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S677>/Data Type Conversion11' */
  real_T DataTypeConversion7_d;        /* '<S415>/Data Type Conversion7' */
  real_T RX_time_bw;                   /* '<S592>/Data Type Conversion9' */
  real_T RX_time_of;                   /* '<S440>/Multiport_Switch' */
  real_T RX_delta_time_ku;             /* '<S592>/Data Type Conversion10' */
  real_T RX_delta_time_it;             /* '<S440>/Multiport_Switch' */
  real_T UnitDelay1;                   /* '<S741>/Unit Delay1' */
  real_T Subtract_ex;                  /* '<S736>/Subtract' */
  real_T Switch;                       /* '<S741>/Switch' */
  real_T Gain_b;                       /* '<S741>/Gain' */
  real_T UnitDelay1_c;                 /* '<S742>/Unit Delay1' */
  real_T Switch_o;                     /* '<S742>/Switch' */
  real_T Gain_n;                       /* '<S742>/Gain' */
  real_T ShiftControlFreq;             /* '<S411>/ShifterControlFreq' */
  real_T SFunction1_h;                 /* '<S725>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S411>/ShifterControlDC2' */
  real_T SFunction1_b;                 /* '<S726>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S411>/ShifterControlDC1' */
  real_T SFunction1_o1_d;              /* '<S1054>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S1054>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1054>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1054>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S1050>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S1050>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S1050>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S1050>/S-Function1' */
  real_T SFunction1_o1_k;              /* '<S1049>/S-Function1' */
  real_T SFunction1_o2_e0;             /* '<S1049>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S1049>/S-Function1' */
  real_T SFunction1_o4_kc;             /* '<S1049>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S844>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S844>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1039>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1039>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1039>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_i;     /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_e;     /* '<S1039>/Bus Selector' */
  real_T BrakeSwitch_j;                /* '<S1039>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1039>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1039>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1039>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1039>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1039>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1039>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1039>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1040>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1040>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1040>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1040>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1040>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1040>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1040>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1040>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1040>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1040>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1040>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1040>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1040>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1040>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1040>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1040>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1040>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1040>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1040>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1040>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1040>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1040>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1040>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1040>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1040>/Bus Selector' */
  real_T SFunction1_o1_f;              /* '<S1042>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S1042>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S1042>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S1042>/S-Function1' */
  real_T SFunction1_o1_dg;             /* '<S1041>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S1041>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S1041>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S1041>/S-Function1' */
  real_T DataTypeConversion_o;         /* '<S1028>/Data Type Conversion' */
  real_T DataTypeConversion1_m3;       /* '<S1028>/Data Type Conversion1' */
  real_T DataTypeConversion2_mn;       /* '<S1028>/Data Type Conversion2' */
  real_T SFunction1_o1_h;              /* '<S1030>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S1030>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S1030>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S1030>/S-Function1' */
  real_T BrakingPID_Y_g;               /* '<S1000>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S1000>/Switch1' */
  real_T DataTypeConversion1_i;        /* '<S1003>/Data Type Conversion1' */
  real_T DataTypeConversion2_px;       /* '<S1003>/Data Type Conversion2' */
  real_T DataTypeConversion3_o;        /* '<S1003>/Data Type Conversion3' */
  real_T DataTypeConversion4_l;        /* '<S1003>/Data Type Conversion4' */
  real_T DataTypeConversion5_o;        /* '<S1003>/Data Type Conversion5' */
  real_T DataTypeConversion6_m;        /* '<S1003>/Data Type Conversion6' */
  real_T DataTypeConversion7_f;        /* '<S1003>/Data Type Conversion7' */
  real_T Saturation_l;                 /* '<S999>/Saturation' */
  real_T BrakingPID_Y_gl;              /* '<S999>/Bus Selector' */
  real_T Gain_eg;                      /* '<S999>/Gain' */
  real_T Gain_bs;                      /* '<S1016>/Gain' */
  real_T Gain1_d;                      /* '<S1016>/Gain1' */
  real_T DataTypeConversion1_n[8];     /* '<S997>/Data Type Conversion1' */
  real_T FrontAxleSpeed_o;             /* '<S1013>/Bus Selector4' */
  real_T DataTypeConversion_p;         /* '<S1013>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_n; /* '<S1013>/Bus Selector4' */
  real_T DataTypeConversion1_im;       /* '<S1013>/Data Type Conversion1' */
  real_T SPN1808_YawRate_l;            /* '<S1013>/Bus Selector4' */
  real_T DataTypeConversion2_nx;       /* '<S1013>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_j;/* '<S1013>/Bus Selector4' */
  real_T DataTypeConversion3_p;        /* '<S1013>/Data Type Conversion3' */
  real_T DataType;                     /* '<S1012>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S998>/Shift_Arithmetic 4' */
  real_T DataType_c;                   /* '<S1008>/DataType' */
  real_T DataType_h;                   /* '<S1009>/DataType' */
  real_T DataType_a;                   /* '<S1010>/DataType' */
  real_T DataType_j;                   /* '<S1011>/DataType' */
  real_T Shift_Arithmetic;             /* '<S998>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S998>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S998>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S998>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S1000>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_f;     /* '<S1000>/Divide1' */
  real_T SFunction1_o1_kr;             /* '<S1014>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S1014>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S1014>/S-Function1' */
  real_T SFunction1_o4_pf;             /* '<S1014>/S-Function1' */
  real_T SFunction1_o1_m;              /* '<S1006>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S1006>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S1006>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S1006>/S-Function1' */
  real_T SFunction1_o1_dy;             /* '<S1004>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S1004>/S-Function1' */
  real_T SFunction1_o3_oy;             /* '<S1004>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S1004>/S-Function1' */
  real_T DataTypeConversion4_i;        /* '<S936>/Data Type Conversion4' */
  real_T DataType_k;                   /* '<S933>/DataType' */
  real_T Shift_Arithmetic2_f;          /* '<S925>/Shift_Arithmetic 2' */
  real_T DataType_d;                   /* '<S931>/DataType' */
  real_T DataType_p;                   /* '<S932>/DataType' */
  real_T DataType_hl;                  /* '<S934>/DataType' */
  real_T DataType_ab;                  /* '<S935>/DataType' */
  real_T Shift_Arithmetic_g;           /* '<S925>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_d;          /* '<S925>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_p;          /* '<S925>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_n;          /* '<S925>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_nt;       /* '<S944>/Data Type Conversion1' */
  real_T DataTypeConversion2_h;        /* '<S944>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S944>/Data Type Conversion3' */
  real_T DataTypeConversion4_g;        /* '<S944>/Data Type Conversion4' */
  real_T DataTypeConversion5_m;        /* '<S944>/Data Type Conversion5' */
  real_T DataTypeConversion6_o;        /* '<S944>/Data Type Conversion6' */
  real_T DataTypeConversion7_i;        /* '<S944>/Data Type Conversion7' */
  real_T DataTypeConversion8_a;        /* '<S944>/Data Type Conversion8' */
  real_T DataType_de;                  /* '<S941>/DataType' */
  real_T Shift_Arithmetic2_g;          /* '<S926>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_f;        /* '<S945>/Data Type Conversion1' */
  real_T DataTypeConversion2_a;        /* '<S945>/Data Type Conversion2' */
  real_T DataTypeConversion3_i;        /* '<S945>/Data Type Conversion3' */
  real_T DataTypeConversion4_n;        /* '<S945>/Data Type Conversion4' */
  real_T DataTypeConversion5_j;        /* '<S945>/Data Type Conversion5' */
  real_T DataTypeConversion6_as;       /* '<S945>/Data Type Conversion6' */
  real_T DataTypeConversion7_g;        /* '<S945>/Data Type Conversion7' */
  real_T DataTypeConversion8_h;        /* '<S945>/Data Type Conversion8' */
  real_T DataType_p1;                  /* '<S942>/DataType' */
  real_T Shift_Arithmetic3_i;          /* '<S926>/Shift_Arithmetic 3' */
  real_T DataType_kc;                  /* '<S939>/DataType' */
  real_T DataType_g;                   /* '<S940>/DataType' */
  real_T DataType_gs;                  /* '<S943>/DataType' */
  real_T Shift_Arithmetic_k;           /* '<S926>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_i;          /* '<S926>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_p;          /* '<S926>/Shift_Arithmetic 4' */
  real_T Switch_i;                     /* '<S979>/Switch' */
  real_T Switch2;                      /* '<S989>/Switch2' */
  real_T DataType_e;                   /* '<S989>/DataType' */
  real_T DataTypeConversion1_p[8];     /* '<S927>/Data Type Conversion1' */
  real_T DataType_o;                   /* '<S956>/DataType' */
  real_T Shift_Arithmetic3_b;          /* '<S928>/Shift_Arithmetic 3' */
  real_T DataType_b;                   /* '<S953>/DataType' */
  real_T DataType_l;                   /* '<S954>/DataType' */
  real_T DataType_n;                   /* '<S955>/DataType' */
  real_T DataType_c1;                  /* '<S957>/DataType' */
  real_T Shift_Arithmetic_f;           /* '<S928>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_e;          /* '<S928>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_h;          /* '<S928>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_l;          /* '<S928>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S990>/Product' */
  real_T Switch1;                      /* '<S989>/Switch1' */
  real_T Multiport_Switch;             /* '<S979>/Multiport_Switch' */
  real_T SFunction1_o1_mr;             /* '<S959>/S-Function1' */
  real_T SFunction1_o2_lz;             /* '<S959>/S-Function1' */
  real_T SFunction1_o3_pt;             /* '<S959>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S959>/S-Function1' */
  real_T SFunction1_o1_dr;             /* '<S951>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S951>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S951>/S-Function1' */
  real_T SFunction1_o4_a0;             /* '<S951>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S950>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S950>/S-Function1' */
  real_T SFunction1_o3_pb;             /* '<S950>/S-Function1' */
  real_T SFunction1_o4_lk;             /* '<S950>/S-Function1' */
  real_T SFunction1_o1_c;              /* '<S947>/S-Function1' */
  real_T SFunction1_o2_nx;             /* '<S947>/S-Function1' */
  real_T SFunction1_o3_iv;             /* '<S947>/S-Function1' */
  real_T SFunction1_o4_p3;             /* '<S947>/S-Function1' */
  real_T SFunction1_o1_fn;             /* '<S946>/S-Function1' */
  real_T SFunction1_o2_f5;             /* '<S946>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S946>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S946>/S-Function1' */
  real_T SFunction1_o1_hi;             /* '<S937>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S937>/S-Function1' */
  real_T SFunction1_o3_js;             /* '<S937>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S937>/S-Function1' */
  real_T DataTypeConversion1_d[8];     /* '<S866>/Data Type Conversion1' */
  real_T DataType_g4;                  /* '<S886>/DataType' */
  real_T Shift_Arithmetic2_e;          /* '<S866>/Shift_Arithmetic 2' */
  real_T DataType_g1;                  /* '<S882>/DataType' */
  real_T DataType_j5;                  /* '<S887>/DataType' */
  real_T Shift_Arithmetic3_k;          /* '<S866>/Shift_Arithmetic 3' */
  real_T DataType_ho;                  /* '<S888>/DataType' */
  real_T Shift_Arithmetic4_c;          /* '<S866>/Shift_Arithmetic 4' */
  real_T DataType_px;                  /* '<S885>/DataType' */
  real_T Shift_Arithmetic_p;           /* '<S866>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_n;          /* '<S866>/Shift_Arithmetic 1' */
  real_T Latitude__b;                  /* '<S923>/Bus Selector' */
  real_T DataTypeConversion_f;         /* '<S923>/Data Type Conversion' */
  real_T Longitude__d;                 /* '<S923>/Bus Selector' */
  real_T DataTypeConversion1_c;        /* '<S923>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_h;         /* '<S873>/Bus Selector' */
  real_T ParkingBrakeSwitch_j;         /* '<S873>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_j;      /* '<S873>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_g;  /* '<S873>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_id;    /* '<S873>/Bus Selector' */
  real_T CruiseCtrlActive_l;           /* '<S873>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_er;    /* '<S873>/Bus Selector' */
  real_T BrakeSwitch_jm;               /* '<S873>/Bus Selector' */
  real_T ClutchSwitch_i;               /* '<S873>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_c;        /* '<S873>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_m;      /* '<S873>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_b;     /* '<S873>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_p; /* '<S873>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_e;         /* '<S873>/Bus Selector' */
  real_T PTOGovernorState_d;           /* '<S873>/Bus Selector' */
  real_T CruiseCtrlStates_c;           /* '<S873>/Bus Selector' */
  real_T EngIdleIncrementSwitch_o;     /* '<S873>/Bus Selector' */
  real_T EngIdleDecrementSwitch_i;     /* '<S873>/Bus Selector' */
  real_T EngTestModeSwitch_m;          /* '<S873>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_g;  /* '<S873>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_hx;        /* '<S874>/Bus Selector' */
  real_T ParkingBrakeSwitch_ji;        /* '<S874>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_ji;     /* '<S874>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_gm; /* '<S874>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_idf;   /* '<S874>/Bus Selector' */
  real_T CruiseCtrlActive_lv;          /* '<S874>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_ere;   /* '<S874>/Bus Selector' */
  real_T BrakeSwitch_jmh;              /* '<S874>/Bus Selector' */
  real_T ClutchSwitch_iz;              /* '<S874>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_c5;       /* '<S874>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_ma;     /* '<S874>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_bk;    /* '<S874>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_pz;/* '<S874>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_ex;        /* '<S874>/Bus Selector' */
  real_T PTOGovernorState_dy;          /* '<S874>/Bus Selector' */
  real_T CruiseCtrlStates_c1;          /* '<S874>/Bus Selector' */
  real_T EngIdleIncrementSwitch_on;    /* '<S874>/Bus Selector' */
  real_T EngIdleDecrementSwitch_ib;    /* '<S874>/Bus Selector' */
  real_T EngTestModeSwitch_m1;         /* '<S874>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_g5; /* '<S874>/Bus Selector' */
  real_T DataTypeConversion1_j[8];     /* '<S865>/Data Type Conversion1' */
  real_T SID_c;                        /* '<S897>/Bus Selector' */
  real_T DataTypeConversion_fz;        /* '<S897>/Data Type Conversion' */
  real_T COGReference_c;               /* '<S897>/Bus Selector' */
  real_T DataTypeConversion1_h;        /* '<S897>/Data Type Conversion1' */
  real_T CourseOverGround_p;           /* '<S897>/Bus Selector' */
  real_T DataTypeConversion2_k;        /* '<S897>/Data Type Conversion2' */
  real_T SpeedOverGround_j;            /* '<S897>/Bus Selector' */
  real_T DataTypeConversion3_f;        /* '<S897>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S899>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S899>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S899>/Bus Selector' */
  real_T EBSBrakeSwitch_e;             /* '<S899>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S899>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S899>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S899>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S899>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S899>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S899>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S899>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S899>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S899>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S899>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S899>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S899>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S899>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S899>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S899>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S899>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S899>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S899>/Bus Selector' */
  real_T SFunction1_o1_fh;             /* '<S924>/S-Function1' */
  real_T SFunction1_o2_gp;             /* '<S924>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S924>/S-Function1' */
  real_T SFunction1_o4_hp;             /* '<S924>/S-Function1' */
  real_T Unit_Delay;                   /* '<S913>/Unit_Delay' */
  real_T FixPtSum1_i;                  /* '<S921>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S922>/FixPt Switch' */
  real_T SFunction1_o1_ga;             /* '<S900>/S-Function1' */
  real_T SFunction1_o2_bp;             /* '<S900>/S-Function1' */
  real_T SFunction1_o3_gn;             /* '<S900>/S-Function1' */
  real_T SFunction1_o4_dg;             /* '<S900>/S-Function1' */
  real_T SFunction1_o1_hs;             /* '<S898>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S898>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S898>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S898>/S-Function1' */
  real_T SFunction1_o1_a;              /* '<S896>/S-Function1' */
  real_T SFunction1_o2_g3;             /* '<S896>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S896>/S-Function1' */
  real_T SFunction1_o4_lc;             /* '<S896>/S-Function1' */
  real_T SFunction1_o1_ge;             /* '<S895>/S-Function1' */
  real_T SFunction1_o2_nn;             /* '<S895>/S-Function1' */
  real_T SFunction1_o3_o0;             /* '<S895>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S895>/S-Function1' */
  real_T SFunction1_o1_cu;             /* '<S880>/S-Function1' */
  real_T SFunction1_o2_hn;             /* '<S880>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S880>/S-Function1' */
  real_T SFunction1_o4_lw;             /* '<S880>/S-Function1' */
  real_T SFunction1_o1_iz;             /* '<S879>/S-Function1' */
  real_T SFunction1_o2_kw;             /* '<S879>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S879>/S-Function1' */
  real_T SFunction1_o4_li;             /* '<S879>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S876>/S-Function1' */
  real_T SFunction1_o2_lt;             /* '<S876>/S-Function1' */
  real_T SFunction1_o3_lt;             /* '<S876>/S-Function1' */
  real_T SFunction1_o4_d1;             /* '<S876>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S875>/S-Function1' */
  real_T SFunction1_o2_pl;             /* '<S875>/S-Function1' */
  real_T SFunction1_o3_eq;             /* '<S875>/S-Function1' */
  real_T SFunction1_o4_du;             /* '<S875>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S854>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S854>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S854>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S854>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S854>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S854>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S854>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S854>/Bus Selector' */
  real_T DataType_ak;                  /* '<S851>/DataType' */
  real_T Shift_Arithmetic2_n;          /* '<S846>/Shift_Arithmetic 2' */
  real_T DataType_lr;                  /* '<S849>/DataType' */
  real_T DataType_b5;                  /* '<S850>/DataType' */
  real_T DataType_n0;                  /* '<S852>/DataType' */
  real_T DataType_ha;                  /* '<S853>/DataType' */
  real_T Shift_Arithmetic_a;           /* '<S846>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_ia;         /* '<S846>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_l;          /* '<S846>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_h;          /* '<S846>/Shift_Arithmetic 4' */
  real_T BarometricPress_k;            /* '<S862>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S862>/Bus Selector' */
  real_T AmbientAirTemp_a;             /* '<S862>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S862>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S862>/Bus Selector' */
  real_T DataType_f;                   /* '<S859>/DataType' */
  real_T Shift_Arithmetic2_l;          /* '<S847>/Shift_Arithmetic 2' */
  real_T DataType_a3;                  /* '<S857>/DataType' */
  real_T DataType_gu;                  /* '<S858>/DataType' */
  real_T DataType_gz;                  /* '<S860>/DataType' */
  real_T DataType_av;                  /* '<S861>/DataType' */
  real_T Shift_Arithmetic_p2;          /* '<S847>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_ic;         /* '<S847>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_o;          /* '<S847>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_e;          /* '<S847>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_bv;             /* '<S863>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S863>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S863>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S863>/S-Function1' */
  real_T SFunction1_o1_cut;            /* '<S855>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S855>/S-Function1' */
  real_T SFunction1_o3_nj;             /* '<S855>/S-Function1' */
  real_T SFunction1_o4_ed;             /* '<S855>/S-Function1' */
  real_T Unit_Delay_p;                 /* '<S832>/Unit_Delay' */
  real_T Add;                          /* '<S832>/Add' */
  real_T Xold_n;                       /* '<S827>/FixPt Unit Delay1' */
  real_T Init_o;                       /* '<S827>/Init' */
  real_T Abs_e;                        /* '<S824>/Abs' */
  real_T Product1_n;                   /* '<S824>/Product1' */
  real_T Add1_p;                       /* '<S824>/Add1' */
  real_T MinMax2;                      /* '<S824>/MinMax2' */
  real_T Abs1;                         /* '<S824>/Abs1' */
  real_T Product2_l;                   /* '<S824>/Product2' */
  real_T Subtract1_c;                  /* '<S824>/Subtract1' */
  real_T MinMax1_c;                    /* '<S824>/MinMax1' */
  real_T Subtract_o;                   /* '<S752>/Subtract' */
  real_T Abs_c;                        /* '<S752>/Abs' */
  real_T Sum;                          /* '<S742>/Sum' */
  real_T Sum_p;                        /* '<S741>/Sum' */
  real_T timeStamp;                    /* '<S646>/timeStamp' */
  real_T Unit_Delay_o;                 /* '<S646>/Unit_Delay' */
  real_T SFunction1_o1_dm;             /* '<S642>/S-Function1' */
  real_T SFunction1_o2_m1;             /* '<S642>/S-Function1' */
  real_T SFunction1_o3_az;             /* '<S642>/S-Function1' */
  real_T SFunction1_o4_la;             /* '<S642>/S-Function1' */
  real_T SFunction1_o5;                /* '<S642>/S-Function1' */
  real_T SFunction1_o6;                /* '<S642>/S-Function1' */
  real_T SFunction1_o7;                /* '<S642>/S-Function1' */
  real_T SFunction1_o8;                /* '<S642>/S-Function1' */
  real_T SFunction1_o2_m3;             /* '<S640>/S-Function1' */
  real_T SFunction1_o3_f1;             /* '<S640>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S640>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S640>/S-Function1' */
  real_T SFunction1_o8_l;              /* '<S640>/S-Function1' */
  real_T SFunction1_o9;                /* '<S640>/S-Function1' */
  real_T SFunction1_o1_gt;             /* '<S638>/S-Function1' */
  real_T SFunction1_o2_al;             /* '<S638>/S-Function1' */
  real_T SFunction1_o3_ir;             /* '<S638>/S-Function1' */
  real_T SFunction1_o4_lb;             /* '<S638>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S638>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S638>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S638>/S-Function1' */
  real_T SFunction1_o8_i;              /* '<S638>/S-Function1' */
  real_T SFunction1_o9_i;              /* '<S638>/S-Function1' */
  real_T SFunction1_o10;               /* '<S638>/S-Function1' */
  real_T SFunction1_o1_cr;             /* '<S636>/S-Function1' */
  real_T SFunction1_o2_ir;             /* '<S636>/S-Function1' */
  real_T SFunction1_o3_b4;             /* '<S636>/S-Function1' */
  real_T SFunction1_o4_on;             /* '<S636>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S636>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S636>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S636>/S-Function1' */
  real_T SFunction1_o8_g;              /* '<S636>/S-Function1' */
  real_T SFunction1_o9_l;              /* '<S636>/S-Function1' */
  real_T SFunction1_o10_d;             /* '<S636>/S-Function1' */
  real_T SFunction1_o11;               /* '<S636>/S-Function1' */
  real_T SFunction1_o12;               /* '<S636>/S-Function1' */
  real_T SFunction1_o13;               /* '<S636>/S-Function1' */
  real_T SFunction1_o14;               /* '<S636>/S-Function1' */
  real_T SFunction1_o15;               /* '<S636>/S-Function1' */
  real_T SFunction1_o16;               /* '<S636>/S-Function1' */
  real_T SFunction1_o17;               /* '<S636>/S-Function1' */
  real_T SFunction1_o18;               /* '<S636>/S-Function1' */
  real_T SFunction1_o19;               /* '<S636>/S-Function1' */
  real_T SFunction1_o20;               /* '<S636>/S-Function1' */
  real_T SFunction1_o21;               /* '<S636>/S-Function1' */
  real_T SFunction1_o22;               /* '<S636>/S-Function1' */
  real_T SFunction1_o23;               /* '<S636>/S-Function1' */
  real_T SFunction1_o24;               /* '<S636>/S-Function1' */
  real_T SFunction1_o25;               /* '<S636>/S-Function1' */
  real_T SFunction1_o26;               /* '<S636>/S-Function1' */
  real_T SFunction1_o27;               /* '<S636>/S-Function1' */
  real_T SFunction1_o28;               /* '<S636>/S-Function1' */
  real_T SFunction1_o1_bc;             /* '<S634>/S-Function1' */
  real_T SFunction1_o2_oc;             /* '<S634>/S-Function1' */
  real_T SFunction1_o3_gr;             /* '<S634>/S-Function1' */
  real_T SFunction1_o4_og;             /* '<S634>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S634>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S634>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S634>/S-Function1' */
  real_T SFunction1_o1_gw;             /* '<S632>/S-Function1' */
  real_T SFunction1_o2_ju;             /* '<S632>/S-Function1' */
  real_T SFunction1_o3_gn3;            /* '<S632>/S-Function1' */
  real_T SFunction1_o4_h0;             /* '<S632>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S632>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S632>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S632>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S632>/S-Function1' */
  real_T SFunction1_o9_a;              /* '<S632>/S-Function1' */
  real_T SFunction1_o1_mm;             /* '<S630>/S-Function1' */
  real_T SFunction1_o2_dx;             /* '<S630>/S-Function1' */
  real_T SFunction1_o3_dx;             /* '<S630>/S-Function1' */
  real_T SFunction1_o4_ns;             /* '<S630>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S630>/S-Function1' */
  real_T SFunction1_o6_om;             /* '<S630>/S-Function1' */
  real_T SFunction1_o7_df;             /* '<S630>/S-Function1' */
  real_T SFunction1_o8_n;              /* '<S630>/S-Function1' */
  real_T SFunction1_o9_b;              /* '<S630>/S-Function1' */
  real_T SFunction1_o1_fnx;            /* '<S628>/S-Function1' */
  real_T SFunction1_o2_ld;             /* '<S628>/S-Function1' */
  real_T SFunction1_o3_md;             /* '<S628>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S628>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S628>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S628>/S-Function1' */
  real_T SFunction1_o7_im;             /* '<S628>/S-Function1' */
  real_T SFunction1_o8_b;              /* '<S628>/S-Function1' */
  real_T SFunction1_o9_am;             /* '<S628>/S-Function1' */
  real_T SFunction1_o1_g5;             /* '<S626>/S-Function1' */
  real_T SFunction1_o2_im;             /* '<S626>/S-Function1' */
  real_T SFunction1_o3_dn;             /* '<S626>/S-Function1' */
  real_T SFunction1_o4_nb;             /* '<S626>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S626>/S-Function1' */
  real_T SFunction1_o6_fb;             /* '<S626>/S-Function1' */
  real_T SFunction1_o7_nl;             /* '<S626>/S-Function1' */
  real_T SFunction1_o8_nr;             /* '<S626>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S626>/S-Function1' */
  real_T SFunction1_o10_k;             /* '<S626>/S-Function1' */
  real_T SFunction1_o1_ja;             /* '<S624>/S-Function1' */
  real_T SFunction1_o2_dq;             /* '<S624>/S-Function1' */
  real_T SFunction1_o3_ha;             /* '<S624>/S-Function1' */
  real_T SFunction1_o4_ond;            /* '<S624>/S-Function1' */
  real_T SFunction1_o5_cy;             /* '<S624>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S624>/S-Function1' */
  real_T SFunction1_o7_ds;             /* '<S624>/S-Function1' */
  real_T SFunction1_o8_bh;             /* '<S624>/S-Function1' */
  real_T SFunction1_o9_h;              /* '<S624>/S-Function1' */
  real_T SFunction1_o10_o;             /* '<S624>/S-Function1' */
  real_T SFunction1_o11_g;             /* '<S624>/S-Function1' */
  real_T SFunction1_o12_o;             /* '<S624>/S-Function1' */
  real_T SFunction1_o13_d;             /* '<S624>/S-Function1' */
  real_T RX_time_ab;                   /* '<S620>/Data Type Conversion9' */
  real_T RX_time_a4;                   /* '<S620>/Data Type Conversion2' */
  real_T RX_delta_time_d4;             /* '<S620>/Data Type Conversion10' */
  real_T RX_delta_time_lj;             /* '<S620>/Data Type Conversion1' */
  real_T SFunction1_o1_b5;             /* '<S622>/S-Function1' */
  real_T SFunction1_o2_bs;             /* '<S622>/S-Function1' */
  real_T SFunction1_o3_aw;             /* '<S622>/S-Function1' */
  real_T SFunction1_o4_e1;             /* '<S622>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S622>/S-Function1' */
  real_T SFunction1_o1_ged;            /* '<S621>/S-Function1' */
  real_T SFunction1_o2_n5;             /* '<S621>/S-Function1' */
  real_T SFunction1_o3_ol;             /* '<S621>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S621>/S-Function1' */
  real_T SFunction1_o5_go;             /* '<S621>/S-Function1' */
  real_T SFunction1_o1_cd;             /* '<S619>/S-Function1' */
  real_T SFunction1_o2_fl;             /* '<S619>/S-Function1' */
  real_T SFunction1_o3_hs;             /* '<S619>/S-Function1' */
  real_T SFunction1_o4_cp;             /* '<S619>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S619>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S619>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S619>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S618>/S-Function1' */
  real_T SFunction1_o2_f4;             /* '<S618>/S-Function1' */
  real_T SFunction1_o3_hx;             /* '<S618>/S-Function1' */
  real_T SFunction1_o4_oj;             /* '<S618>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S618>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S618>/S-Function1' */
  real_T SFunction1_o1_cdy;            /* '<S617>/S-Function1' */
  real_T SFunction1_o2_ma;             /* '<S617>/S-Function1' */
  real_T SFunction1_o3_hr;             /* '<S617>/S-Function1' */
  real_T SFunction1_o4_aw;             /* '<S617>/S-Function1' */
  real_T SFunction1_o5_hs;             /* '<S617>/S-Function1' */
  real_T SFunction1_o6_fp;             /* '<S617>/S-Function1' */
  real_T SFunction1_o1_be;             /* '<S609>/S-Function1' */
  real_T SFunction1_o2_gi;             /* '<S609>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S609>/S-Function1' */
  real_T SFunction1_o4_dp;             /* '<S609>/S-Function1' */
  real_T SFunction1_o5_ku;             /* '<S609>/S-Function1' */
  real_T SFunction1_o1_cf;             /* '<S608>/S-Function1' */
  real_T SFunction1_o2_f3;             /* '<S608>/S-Function1' */
  real_T SFunction1_o3_g1;             /* '<S608>/S-Function1' */
  real_T SFunction1_o4_ae;             /* '<S608>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S608>/S-Function1' */
  real_T SFunction1_o1_kt;             /* '<S607>/S-Function1' */
  real_T SFunction1_o2_k1;             /* '<S607>/S-Function1' */
  real_T SFunction1_o3_or;             /* '<S607>/S-Function1' */
  real_T SFunction1_o4_dd;             /* '<S607>/S-Function1' */
  real_T SFunction1_o5_lp;             /* '<S607>/S-Function1' */
  real_T RX_time_pw;                   /* '<S603>/Data Type Conversion9' */
  real_T RX_time_i1;                   /* '<S604>/Data Type Conversion9' */
  real_T RX_delta_time_p;              /* '<S603>/Data Type Conversion10' */
  real_T RX_delta_time_dd;             /* '<S604>/Data Type Conversion10' */
  real_T SFunction1_o1_kc;             /* '<S596>/S-Function1' */
  real_T SFunction1_o2_kr;             /* '<S596>/S-Function1' */
  real_T SFunction1_o3_ef;             /* '<S596>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S596>/S-Function1' */
  real_T SFunction1_o5_ls;             /* '<S596>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S596>/S-Function1' */
  real_T SFunction1_o7_nv;             /* '<S596>/S-Function1' */
  real_T SFunction1_o8_h;              /* '<S596>/S-Function1' */
  real_T SFunction1_o9_f;              /* '<S596>/S-Function1' */
  real_T SFunction1_o10_m;             /* '<S596>/S-Function1' */
  real_T SFunction1_o11_f;             /* '<S596>/S-Function1' */
  real_T SFunction1_o1_l;              /* '<S595>/S-Function1' */
  real_T SFunction1_o2_hp;             /* '<S595>/S-Function1' */
  real_T SFunction1_o3_lr;             /* '<S595>/S-Function1' */
  real_T SFunction1_o4_ho;             /* '<S595>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S595>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S595>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S595>/S-Function1' */
  real_T SFunction1_o8_hy;             /* '<S595>/S-Function1' */
  real_T SFunction1_o9_j;              /* '<S595>/S-Function1' */
  real_T SFunction1_o10_p;             /* '<S595>/S-Function1' */
  real_T SFunction1_o11_d;             /* '<S595>/S-Function1' */
  real_T SFunction1_o1_b3;             /* '<S594>/S-Function1' */
  real_T SFunction1_o2_k3;             /* '<S594>/S-Function1' */
  real_T SFunction1_o3_ez;             /* '<S594>/S-Function1' */
  real_T SFunction1_o4_l5;             /* '<S594>/S-Function1' */
  real_T SFunction1_o5_id;             /* '<S594>/S-Function1' */
  real_T SFunction1_o6_fb0;            /* '<S594>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S594>/S-Function1' */
  real_T SFunction1_o8_hk;             /* '<S594>/S-Function1' */
  real_T SFunction1_o9_n;              /* '<S594>/S-Function1' */
  real_T SFunction1_o10_c;             /* '<S594>/S-Function1' */
  real_T SFunction1_o11_e;             /* '<S594>/S-Function1' */
  real_T RX_time_j4;                   /* '<S590>/Data Type Conversion9' */
  real_T RX_time_dj;                   /* '<S591>/Data Type Conversion9' */
  real_T RX_delta_time_an;             /* '<S590>/Data Type Conversion10' */
  real_T RX_delta_time_nq;             /* '<S591>/Data Type Conversion10' */
  real_T SFunction1_o1_dh;             /* '<S583>/S-Function1' */
  real_T SFunction1_o2_cj;             /* '<S583>/S-Function1' */
  real_T SFunction1_o3_mk;             /* '<S583>/S-Function1' */
  real_T SFunction1_o4_gj;             /* '<S583>/S-Function1' */
  real_T SFunction1_o5_ha;             /* '<S583>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S583>/S-Function1' */
  real_T SFunction1_o7_pc;             /* '<S583>/S-Function1' */
  real_T SFunction1_o8_j;              /* '<S583>/S-Function1' */
  real_T SFunction1_o9_hy;             /* '<S583>/S-Function1' */
  real_T SFunction1_o10_n;             /* '<S583>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S583>/S-Function1' */
  real_T SFunction1_o1_df;             /* '<S582>/S-Function1' */
  real_T SFunction1_o2_bg;             /* '<S582>/S-Function1' */
  real_T SFunction1_o3_py;             /* '<S582>/S-Function1' */
  real_T SFunction1_o4_hw;             /* '<S582>/S-Function1' */
  real_T SFunction1_o5_bl;             /* '<S582>/S-Function1' */
  real_T SFunction1_o6_fv;             /* '<S582>/S-Function1' */
  real_T SFunction1_o7_hr;             /* '<S582>/S-Function1' */
  real_T SFunction1_o8_ll;             /* '<S582>/S-Function1' */
  real_T SFunction1_o9_bh;             /* '<S582>/S-Function1' */
  real_T SFunction1_o10_j;             /* '<S582>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S582>/S-Function1' */
  real_T SFunction1_o1_ff;             /* '<S581>/S-Function1' */
  real_T SFunction1_o2_hs;             /* '<S581>/S-Function1' */
  real_T SFunction1_o3_iu;             /* '<S581>/S-Function1' */
  real_T SFunction1_o4_hk;             /* '<S581>/S-Function1' */
  real_T SFunction1_o5_dj;             /* '<S581>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S581>/S-Function1' */
  real_T SFunction1_o7_hj;             /* '<S581>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S581>/S-Function1' */
  real_T SFunction1_o9_bp;             /* '<S581>/S-Function1' */
  real_T SFunction1_o10_dd;            /* '<S581>/S-Function1' */
  real_T SFunction1_o11_gh;            /* '<S581>/S-Function1' */
  real_T RX_time_g;                    /* '<S577>/Data Type Conversion9' */
  real_T RX_delta_time_er;             /* '<S577>/Data Type Conversion10' */
  real_T RX_time_b0;                   /* '<S573>/Data Type Conversion9' */
  real_T RX_time_py;                   /* '<S574>/Data Type Conversion9' */
  real_T RX_delta_time_bn;             /* '<S573>/Data Type Conversion10' */
  real_T RX_delta_time_jb;             /* '<S574>/Data Type Conversion10' */
  real_T SFunction1_o1_dd;             /* '<S576>/S-Function1' */
  real_T SFunction1_o2_nw;             /* '<S576>/S-Function1' */
  real_T SFunction1_o3_cb;             /* '<S576>/S-Function1' */
  real_T SFunction1_o4_ei;             /* '<S576>/S-Function1' */
  real_T SFunction1_o5_dl;             /* '<S576>/S-Function1' */
  real_T SFunction1_o1_ml;             /* '<S575>/S-Function1' */
  real_T SFunction1_o2_gpw;            /* '<S575>/S-Function1' */
  real_T SFunction1_o3_ds;             /* '<S575>/S-Function1' */
  real_T SFunction1_o4_cn;             /* '<S575>/S-Function1' */
  real_T SFunction1_o5_ju;             /* '<S575>/S-Function1' */
  real_T SFunction1_o1_fb;             /* '<S572>/S-Function1' */
  real_T SFunction1_o2_fs;             /* '<S572>/S-Function1' */
  real_T SFunction1_o3_pm;             /* '<S572>/S-Function1' */
  real_T SFunction1_o4_od;             /* '<S572>/S-Function1' */
  real_T SFunction1_o5_lx;             /* '<S572>/S-Function1' */
  real_T SFunction1_o6_om3;            /* '<S572>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S572>/S-Function1' */
  real_T RX_time_im;                   /* '<S568>/Data Type Conversion9' */
  real_T RX_time_bt;                   /* '<S568>/Data Type Conversion2' */
  real_T RX_delta_time_dy;             /* '<S568>/Data Type Conversion10' */
  real_T RX_delta_time_c;              /* '<S568>/Data Type Conversion1' */
  real_T SFunction1_o1_h1;             /* '<S570>/S-Function1' */
  real_T SFunction1_o2_eu;             /* '<S570>/S-Function1' */
  real_T SFunction1_o3_fe;             /* '<S570>/S-Function1' */
  real_T SFunction1_o4_mh;             /* '<S570>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S570>/S-Function1' */
  real_T SFunction1_o6_gg;             /* '<S570>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S570>/S-Function1' */
  real_T SFunction1_o8_ik;             /* '<S570>/S-Function1' */
  real_T SFunction1_o9_hf;             /* '<S570>/S-Function1' */
  real_T SFunction1_o1_mz;             /* '<S569>/S-Function1' */
  real_T SFunction1_o2_gm;             /* '<S569>/S-Function1' */
  real_T SFunction1_o3_ht;             /* '<S569>/S-Function1' */
  real_T SFunction1_o4_lr;             /* '<S569>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S569>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S569>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S569>/S-Function1' */
  real_T SFunction1_o8_k;              /* '<S569>/S-Function1' */
  real_T SFunction1_o9_lf;             /* '<S569>/S-Function1' */
  real_T SFunction1_o1_pz;             /* '<S567>/S-Function1' */
  real_T SFunction1_o2_or;             /* '<S567>/S-Function1' */
  real_T SFunction1_o3_e0;             /* '<S567>/S-Function1' */
  real_T SFunction1_o4_m2;             /* '<S567>/S-Function1' */
  real_T SFunction1_o5_ks;             /* '<S567>/S-Function1' */
  real_T SFunction1_o6_dg;             /* '<S567>/S-Function1' */
  real_T SFunction1_o1_kg;             /* '<S565>/S-Function1' */
  real_T SFunction1_o2_g2;             /* '<S565>/S-Function1' */
  real_T SFunction1_o3_ex;             /* '<S565>/S-Function1' */
  real_T SFunction1_o4_mu;             /* '<S565>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S565>/S-Function1' */
  real_T SFunction1_o1_n1;             /* '<S563>/S-Function1' */
  real_T SFunction1_o2_lq;             /* '<S563>/S-Function1' */
  real_T SFunction1_o3_is;             /* '<S563>/S-Function1' */
  real_T SFunction1_o4_mo;             /* '<S563>/S-Function1' */
  real_T SFunction1_o5_nq;             /* '<S563>/S-Function1' */
  real_T SFunction1_o6_oma;            /* '<S563>/S-Function1' */
  real_T SFunction1_o7_ll;             /* '<S563>/S-Function1' */
  real_T SFunction1_o8_hh;             /* '<S563>/S-Function1' */
  real_T SFunction1_o9_lu;             /* '<S563>/S-Function1' */
  real_T SFunction1_o10_h;             /* '<S563>/S-Function1' */
  real_T SFunction1_o11_i;             /* '<S563>/S-Function1' */
  real_T SFunction1_o12_a;             /* '<S563>/S-Function1' */
  real_T SFunction1_o13_c;             /* '<S563>/S-Function1' */
  real_T SFunction1_o14_j;             /* '<S563>/S-Function1' */
  real_T SFunction1_o15_b;             /* '<S563>/S-Function1' */
  real_T SFunction1_o16_b;             /* '<S563>/S-Function1' */
  real_T SFunction1_o17_g;             /* '<S563>/S-Function1' */
  real_T SFunction1_o1_k4;             /* '<S561>/S-Function1' */
  real_T SFunction1_o2_mk;             /* '<S561>/S-Function1' */
  real_T SFunction1_o3_gns;            /* '<S561>/S-Function1' */
  real_T SFunction1_o4_kr;             /* '<S561>/S-Function1' */
  real_T SFunction1_o5_j3;             /* '<S561>/S-Function1' */
  real_T SFunction1_o6_gn;             /* '<S561>/S-Function1' */
  real_T SFunction1_o7_cb;             /* '<S561>/S-Function1' */
  real_T SFunction1_o8_a;              /* '<S561>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S561>/S-Function1' */
  real_T SFunction1_o10_e;             /* '<S561>/S-Function1' */
  real_T SFunction1_o11_n1;            /* '<S561>/S-Function1' */
  real_T timeStamp_f;                  /* '<S518>/timeStamp' */
  real_T Unit_Delay_e;                 /* '<S518>/Unit_Delay' */
  real_T SFunction1_o1_m1;             /* '<S514>/S-Function1' */
  real_T SFunction1_o2_fi;             /* '<S514>/S-Function1' */
  real_T SFunction1_o3_ja;             /* '<S514>/S-Function1' */
  real_T SFunction1_o4_mc;             /* '<S514>/S-Function1' */
  real_T SFunction1_o5_i5;             /* '<S514>/S-Function1' */
  real_T SFunction1_o6_b5;             /* '<S514>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S514>/S-Function1' */
  real_T SFunction1_o8_nv;             /* '<S514>/S-Function1' */
  real_T SFunction1_o9_a2;             /* '<S514>/S-Function1' */
  real_T SFunction1_o10_a;             /* '<S514>/S-Function1' */
  real_T SFunction1_o1_no;             /* '<S512>/S-Function1' */
  real_T SFunction1_o2_gg;             /* '<S512>/S-Function1' */
  real_T SFunction1_o3_pd;             /* '<S512>/S-Function1' */
  real_T SFunction1_o4_edl;            /* '<S512>/S-Function1' */
  real_T SFunction1_o5_ma;             /* '<S512>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S512>/S-Function1' */
  real_T SFunction1_o7_e3;             /* '<S512>/S-Function1' */
  real_T SFunction1_o8_ff;             /* '<S512>/S-Function1' */
  real_T SFunction1_o9_cr;             /* '<S512>/S-Function1' */
  real_T SFunction1_o10_pe;            /* '<S512>/S-Function1' */
  real_T SFunction1_o11_p;             /* '<S512>/S-Function1' */
  real_T SFunction1_o12_k;             /* '<S512>/S-Function1' */
  real_T SFunction1_o13_cs;            /* '<S512>/S-Function1' */
  real_T SFunction1_o14_e;             /* '<S512>/S-Function1' */
  real_T SFunction1_o15_o;             /* '<S512>/S-Function1' */
  real_T SFunction1_o16_g;             /* '<S512>/S-Function1' */
  real_T SFunction1_o17_m;             /* '<S512>/S-Function1' */
  real_T SFunction1_o18_f;             /* '<S512>/S-Function1' */
  real_T SFunction1_o19_i;             /* '<S512>/S-Function1' */
  real_T SFunction1_o20_d;             /* '<S512>/S-Function1' */
  real_T SFunction1_o21_b;             /* '<S512>/S-Function1' */
  real_T SFunction1_o22_l;             /* '<S512>/S-Function1' */
  real_T SFunction1_o23_n;             /* '<S512>/S-Function1' */
  real_T SFunction1_o24_p;             /* '<S512>/S-Function1' */
  real_T SFunction1_o25_c;             /* '<S512>/S-Function1' */
  real_T SFunction1_o1_kk;             /* '<S510>/S-Function1' */
  real_T SFunction1_o2_ev;             /* '<S510>/S-Function1' */
  real_T SFunction1_o3_htk;            /* '<S510>/S-Function1' */
  real_T SFunction1_o4_nw;             /* '<S510>/S-Function1' */
  real_T SFunction1_o5_pj;             /* '<S510>/S-Function1' */
  real_T SFunction1_o6_j4;             /* '<S510>/S-Function1' */
  real_T SFunction1_o7_p0;             /* '<S510>/S-Function1' */
  real_T SFunction1_o8_jv;             /* '<S510>/S-Function1' */
  real_T SFunction1_o9_lq;             /* '<S510>/S-Function1' */
  real_T SFunction1_o10_ar;            /* '<S510>/S-Function1' */
  real_T SFunction1_o11_ic;            /* '<S510>/S-Function1' */
  real_T SFunction1_o12_h;             /* '<S510>/S-Function1' */
  real_T SFunction1_o13_o;             /* '<S510>/S-Function1' */
  real_T SFunction1_o14_es;            /* '<S510>/S-Function1' */
  real_T SFunction1_o15_f;             /* '<S510>/S-Function1' */
  real_T SFunction1_o16_c;             /* '<S510>/S-Function1' */
  real_T SFunction1_o17_h;             /* '<S510>/S-Function1' */
  real_T SFunction1_o18_l;             /* '<S510>/S-Function1' */
  real_T SFunction1_o19_c;             /* '<S510>/S-Function1' */
  real_T SFunction1_o20_o;             /* '<S510>/S-Function1' */
  real_T SFunction1_o21_g;             /* '<S510>/S-Function1' */
  real_T SFunction1_o22_n;             /* '<S510>/S-Function1' */
  real_T SFunction1_o23_j;             /* '<S510>/S-Function1' */
  real_T SFunction1_o24_b;             /* '<S510>/S-Function1' */
  real_T SFunction1_o25_cl;            /* '<S510>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S508>/S-Function1' */
  real_T SFunction1_o2_hd;             /* '<S508>/S-Function1' */
  real_T SFunction1_o3_ac;             /* '<S508>/S-Function1' */
  real_T SFunction1_o4_ev;             /* '<S508>/S-Function1' */
  real_T RX_time_oq;                   /* '<S504>/Data Type Conversion9' */
  real_T RX_time_hv;                   /* '<S504>/Data Type Conversion2' */
  real_T RX_delta_time_ln;             /* '<S504>/Data Type Conversion10' */
  real_T RX_delta_time_fj;             /* '<S504>/Data Type Conversion3' */
  real_T SFunction1_o1_j4;             /* '<S506>/S-Function1' */
  real_T SFunction1_o2_mv;             /* '<S506>/S-Function1' */
  real_T SFunction1_o3_cp;             /* '<S506>/S-Function1' */
  real_T SFunction1_o4_cw;             /* '<S506>/S-Function1' */
  real_T SFunction1_o5_juk;            /* '<S506>/S-Function1' */
  real_T SFunction1_o6_fvx;            /* '<S506>/S-Function1' */
  real_T SFunction1_o7_jc;             /* '<S506>/S-Function1' */
  real_T SFunction1_o1_o2;             /* '<S505>/S-Function1' */
  real_T SFunction1_o2_l4;             /* '<S505>/S-Function1' */
  real_T SFunction1_o3_cd;             /* '<S505>/S-Function1' */
  real_T SFunction1_o4_g4;             /* '<S505>/S-Function1' */
  real_T SFunction1_o5_ns;             /* '<S505>/S-Function1' */
  real_T SFunction1_o6_kl;             /* '<S505>/S-Function1' */
  real_T SFunction1_o7_ct;             /* '<S505>/S-Function1' */
  real_T SFunction1_o1_hh;             /* '<S503>/S-Function1' */
  real_T SFunction1_o2_mkm;            /* '<S503>/S-Function1' */
  real_T SFunction1_o3_o5;             /* '<S503>/S-Function1' */
  real_T SFunction1_o4_k0;             /* '<S503>/S-Function1' */
  real_T SFunction1_o5_hg;             /* '<S503>/S-Function1' */
  real_T SFunction1_o6_hl;             /* '<S503>/S-Function1' */
  real_T SFunction1_o7_l0;             /* '<S503>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S503>/S-Function1' */
  real_T SFunction1_o9_f0;             /* '<S503>/S-Function1' */
  real_T SFunction1_o10_f;             /* '<S503>/S-Function1' */
  real_T SFunction1_o11_j;             /* '<S503>/S-Function1' */
  real_T SFunction1_o12_of;            /* '<S503>/S-Function1' */
  real_T SFunction1_o13_i;             /* '<S503>/S-Function1' */
  real_T SFunction1_o14_b;             /* '<S503>/S-Function1' */
  real_T SFunction1_o15_c;             /* '<S503>/S-Function1' */
  real_T SFunction1_o16_a;             /* '<S503>/S-Function1' */
  real_T SFunction1_o17_hh;            /* '<S503>/S-Function1' */
  real_T SFunction1_o18_b;             /* '<S503>/S-Function1' */
  real_T SFunction1_o19_m;             /* '<S503>/S-Function1' */
  real_T SFunction1_o20_c;             /* '<S503>/S-Function1' */
  real_T SFunction1_o21_m;             /* '<S503>/S-Function1' */
  real_T SFunction1_o22_lf;            /* '<S503>/S-Function1' */
  real_T SFunction1_o23_o;             /* '<S503>/S-Function1' */
  real_T SFunction1_o1_jau;            /* '<S501>/S-Function1' */
  real_T SFunction1_o2_ka;             /* '<S501>/S-Function1' */
  real_T SFunction1_o3_ei;             /* '<S501>/S-Function1' */
  real_T SFunction1_o4_it;             /* '<S501>/S-Function1' */
  real_T SFunction1_o6_mz;             /* '<S501>/S-Function1' */
  real_T SFunction1_o7_iy;             /* '<S501>/S-Function1' */
  real_T SFunction1_o9_m;              /* '<S501>/S-Function1' */
  real_T SFunction1_o10_mc;            /* '<S501>/S-Function1' */
  real_T SFunction1_o11_e2;            /* '<S501>/S-Function1' */
  real_T SFunction1_o12_l;             /* '<S501>/S-Function1' */
  real_T SFunction1_o13_ow;            /* '<S501>/S-Function1' */
  real_T SFunction1_o14_h;             /* '<S501>/S-Function1' */
  real_T SFunction1_o15_g;             /* '<S501>/S-Function1' */
  real_T SFunction1_o16_bx;            /* '<S501>/S-Function1' */
  real_T SFunction1_o17_d;             /* '<S501>/S-Function1' */
  real_T SFunction1_o18_a;             /* '<S501>/S-Function1' */
  real_T SFunction1_o19_p;             /* '<S501>/S-Function1' */
  real_T SFunction1_o20_a;             /* '<S501>/S-Function1' */
  real_T SFunction1_o21_bo;            /* '<S501>/S-Function1' */
  real_T SFunction1_o22_nv;            /* '<S501>/S-Function1' */
  real_T SFunction1_o23_d;             /* '<S501>/S-Function1' */
  real_T SFunction1_o1_gr;             /* '<S499>/S-Function1' */
  real_T SFunction1_o2_je;             /* '<S499>/S-Function1' */
  real_T SFunction1_o3_dd;             /* '<S499>/S-Function1' */
  real_T SFunction1_o4_ew;             /* '<S499>/S-Function1' */
  real_T SFunction1_o5_ba;             /* '<S499>/S-Function1' */
  real_T SFunction1_o6_di;             /* '<S499>/S-Function1' */
  real_T SFunction1_o7_k3;             /* '<S499>/S-Function1' */
  real_T SFunction1_o8_nl;             /* '<S499>/S-Function1' */
  real_T SFunction1_o9_ix;             /* '<S499>/S-Function1' */
  real_T SFunction1_o10_g;             /* '<S499>/S-Function1' */
  real_T SFunction1_o11_jp;            /* '<S499>/S-Function1' */
  real_T SFunction1_o12_f;             /* '<S499>/S-Function1' */
  real_T SFunction1_o13_ch;            /* '<S499>/S-Function1' */
  real_T SFunction1_o14_c;             /* '<S499>/S-Function1' */
  real_T SFunction1_o15_k;             /* '<S499>/S-Function1' */
  real_T SFunction1_o16_p;             /* '<S499>/S-Function1' */
  real_T SFunction1_o17_gz;            /* '<S499>/S-Function1' */
  real_T SFunction1_o18_o;             /* '<S499>/S-Function1' */
  real_T SFunction1_o19_h;             /* '<S499>/S-Function1' */
  real_T SFunction1_o20_cm;            /* '<S499>/S-Function1' */
  real_T SFunction1_o21_mr;            /* '<S499>/S-Function1' */
  real_T SFunction1_o22_lc;            /* '<S499>/S-Function1' */
  real_T SFunction1_o23_b;             /* '<S499>/S-Function1' */
  real_T SFunction1_o24_e;             /* '<S499>/S-Function1' */
  real_T SFunction1_o25_g;             /* '<S499>/S-Function1' */
  real_T SFunction1_o26_m;             /* '<S499>/S-Function1' */
  real_T SFunction1_o27_c;             /* '<S499>/S-Function1' */
  real_T SFunction1_o28_k;             /* '<S499>/S-Function1' */
  real_T SFunction1_o29;               /* '<S499>/S-Function1' */
  real_T SFunction1_o30;               /* '<S499>/S-Function1' */
  real_T SFunction1_o31;               /* '<S499>/S-Function1' */
  real_T SFunction1_o32;               /* '<S499>/S-Function1' */
  real_T SFunction1_o33;               /* '<S499>/S-Function1' */
  real_T SFunction1_o34;               /* '<S499>/S-Function1' */
  real_T SFunction1_o35;               /* '<S499>/S-Function1' */
  real_T SFunction1_o36;               /* '<S499>/S-Function1' */
  real_T SFunction1_o37;               /* '<S499>/S-Function1' */
  real_T SFunction1_o38;               /* '<S499>/S-Function1' */
  real_T SFunction1_o39;               /* '<S499>/S-Function1' */
  real_T SFunction1_o40;               /* '<S499>/S-Function1' */
  real_T SFunction1_o41;               /* '<S499>/S-Function1' */
  real_T SFunction1_o42;               /* '<S499>/S-Function1' */
  real_T SFunction1_o43;               /* '<S499>/S-Function1' */
  real_T SFunction1_o44;               /* '<S499>/S-Function1' */
  real_T SFunction1_o45;               /* '<S499>/S-Function1' */
  real_T SFunction1_o46;               /* '<S499>/S-Function1' */
  real_T SFunction1_o47;               /* '<S499>/S-Function1' */
  real_T SFunction1_o48;               /* '<S499>/S-Function1' */
  real_T SFunction1_o49;               /* '<S499>/S-Function1' */
  real_T SFunction1_o50;               /* '<S499>/S-Function1' */
  real_T SFunction1_o51;               /* '<S499>/S-Function1' */
  real_T SFunction1_o52;               /* '<S499>/S-Function1' */
  real_T SFunction1_o53;               /* '<S499>/S-Function1' */
  real_T SFunction1_o54;               /* '<S499>/S-Function1' */
  real_T SFunction1_o55;               /* '<S499>/S-Function1' */
  real_T SFunction1_o56;               /* '<S499>/S-Function1' */
  real_T SFunction1_o57;               /* '<S499>/S-Function1' */
  real_T SFunction1_o58;               /* '<S499>/S-Function1' */
  real_T SFunction1_o59;               /* '<S499>/S-Function1' */
  real_T SFunction1_o60;               /* '<S499>/S-Function1' */
  real_T SFunction1_o61;               /* '<S499>/S-Function1' */
  real_T SFunction1_o62;               /* '<S499>/S-Function1' */
  real_T SFunction1_o63;               /* '<S499>/S-Function1' */
  real_T SFunction1_o64;               /* '<S499>/S-Function1' */
  real_T SFunction1_o65;               /* '<S499>/S-Function1' */
  real_T SFunction1_o66;               /* '<S499>/S-Function1' */
  real_T SFunction1_o67;               /* '<S499>/S-Function1' */
  real_T SFunction1_o68;               /* '<S499>/S-Function1' */
  real_T SFunction1_o69;               /* '<S499>/S-Function1' */
  real_T SFunction1_o70;               /* '<S499>/S-Function1' */
  real_T SFunction1_o71;               /* '<S499>/S-Function1' */
  real_T SFunction1_o72;               /* '<S499>/S-Function1' */
  real_T SFunction1_o73;               /* '<S499>/S-Function1' */
  real_T SFunction1_o74;               /* '<S499>/S-Function1' */
  real_T SFunction1_o1_a2;             /* '<S497>/S-Function1' */
  real_T SFunction1_o2_nk;             /* '<S497>/S-Function1' */
  real_T SFunction1_o3_ot;             /* '<S497>/S-Function1' */
  real_T SFunction1_o4_el;             /* '<S497>/S-Function1' */
  real_T SFunction1_o5_bc;             /* '<S497>/S-Function1' */
  real_T SFunction1_o1_lz;             /* '<S495>/S-Function1' */
  real_T SFunction1_o2_bz;             /* '<S495>/S-Function1' */
  real_T SFunction1_o3_awg;            /* '<S495>/S-Function1' */
  real_T SFunction1_o4_na;             /* '<S495>/S-Function1' */
  real_T SFunction1_o5_dm;             /* '<S495>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S495>/S-Function1' */
  real_T SFunction1_o7_nvh;            /* '<S495>/S-Function1' */
  real_T SFunction1_o8_au;             /* '<S495>/S-Function1' */
  real_T SFunction1_o1_lq;             /* '<S493>/S-Function1' */
  real_T SFunction1_o2_jn;             /* '<S493>/S-Function1' */
  real_T SFunction1_o3_bu;             /* '<S493>/S-Function1' */
  real_T SFunction1_o4_kcx;            /* '<S493>/S-Function1' */
  real_T SFunction1_o5_os;             /* '<S493>/S-Function1' */
  real_T SFunction1_o6_je;             /* '<S493>/S-Function1' */
  real_T SFunction1_o7_ie;             /* '<S493>/S-Function1' */
  real_T SFunction1_o8_kv;             /* '<S493>/S-Function1' */
  real_T SFunction1_o9_kp;             /* '<S493>/S-Function1' */
  real_T SFunction1_o10_ju;            /* '<S493>/S-Function1' */
  real_T SFunction1_o11_j2;            /* '<S493>/S-Function1' */
  real_T SFunction1_o1_io;             /* '<S491>/S-Function1' */
  real_T SFunction1_o2_m1m;            /* '<S491>/S-Function1' */
  real_T SFunction1_o3_gnd;            /* '<S491>/S-Function1' */
  real_T SFunction1_o4_di;             /* '<S491>/S-Function1' */
  real_T SFunction1_o5_em;             /* '<S491>/S-Function1' */
  real_T SFunction1_o6_em;             /* '<S491>/S-Function1' */
  real_T SFunction1_o7_ie4;            /* '<S491>/S-Function1' */
  real_T SFunction1_o8_bp;             /* '<S491>/S-Function1' */
  real_T SFunction1_o1_lt;             /* '<S489>/S-Function1' */
  real_T SFunction1_o2_c2;             /* '<S489>/S-Function1' */
  real_T SFunction1_o3_nw;             /* '<S489>/S-Function1' */
  real_T SFunction1_o4_moy;            /* '<S489>/S-Function1' */
  real_T SFunction1_o5_es;             /* '<S489>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S489>/S-Function1' */
  real_T SFunction1_o7_i1;             /* '<S489>/S-Function1' */
  real_T SFunction1_o8_bw;             /* '<S489>/S-Function1' */
  real_T SFunction1_o9_d;              /* '<S489>/S-Function1' */
  real_T SFunction1_o10_h3;            /* '<S489>/S-Function1' */
  real_T SFunction1_o11_fw;            /* '<S489>/S-Function1' */
  real_T SFunction1_o12_m;             /* '<S489>/S-Function1' */
  real_T SFunction1_o13_cn;            /* '<S489>/S-Function1' */
  real_T SFunction1_o1_pg;             /* '<S481>/S-Function1' */
  real_T SFunction1_o2_i4;             /* '<S481>/S-Function1' */
  real_T SFunction1_o3_of;             /* '<S481>/S-Function1' */
  real_T SFunction1_o4_oo;             /* '<S481>/S-Function1' */
  real_T SFunction1_o5_h3;             /* '<S481>/S-Function1' */
  real_T SFunction1_o6_lf;             /* '<S481>/S-Function1' */
  real_T SFunction1_o7_mf;             /* '<S481>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S481>/S-Function1' */
  real_T SFunction1_o9_o;              /* '<S481>/S-Function1' */
  real_T SFunction1_o10_ji;            /* '<S481>/S-Function1' */
  real_T SFunction1_o11_jx;            /* '<S481>/S-Function1' */
  real_T SFunction1_o1_h5;             /* '<S472>/S-Function1' */
  real_T SFunction1_o2_oo;             /* '<S472>/S-Function1' */
  real_T SFunction1_o3_d0;             /* '<S472>/S-Function1' */
  real_T SFunction1_o4_h2;             /* '<S472>/S-Function1' */
  real_T SFunction1_o5_bn;             /* '<S472>/S-Function1' */
  real_T SFunction1_o6_fvt;            /* '<S472>/S-Function1' */
  real_T SFunction1_o7_nc;             /* '<S472>/S-Function1' */
  real_T SFunction1_o8_fv;             /* '<S472>/S-Function1' */
  real_T SFunction1_o9_bw;             /* '<S472>/S-Function1' */
  real_T SFunction1_o10_p4;            /* '<S472>/S-Function1' */
  real_T SFunction1_o11_do;            /* '<S472>/S-Function1' */
  real_T Sum_l;                        /* '<S396>/Sum' */
  real_T for_logging;                  /* '<S391>/for_logging' */
  real_T for_logging1;                 /* '<S391>/for_logging1' */
  real_T ms_to_kmh;                    /* '<S391>/m//s_to_km//h' */
  real_T ms_to_kmh_2;                  /* '<S391>/m//s_to_km//h_2' */
  real_T for_logging2;                 /* '<S391>/for_logging2' */
  real_T for_logging3;                 /* '<S391>/for_logging3' */
  real_T for_logging4;                 /* '<S391>/for_logging4' */
  real_T for_logging5;                 /* '<S391>/for_logging5' */
  real_T for_logging6;                 /* '<S391>/for_logging6' */
  real_T HDOP__f;                      /* '<S389>/Bus Selector1' */
  real_T FrontAxleSpeed_d;             /* '<S389>/Bus Selector4' */
  real_T kph2mps;                      /* '<S389>/kph2mps' */
  real_T Product_c;                    /* '<S389>/Product' */
  real_T FrontAxleSpeed_dv;            /* '<S389>/Bus Selector4' */
  real_T kph2mps1;                     /* '<S389>/kph2mps1' */
  real_T Product1_h;                   /* '<S389>/Product1' */
  real_T UnitDelay1_o;                 /* '<S389>/Unit Delay1' */
  real_T InitialHeading;               /* '<S390>/InitialHeading' */
  real_T InitialPosition;              /* '<S390>/InitialPosition' */
  real_T InitialXPosition;             /* '<S390>/InitialXPosition' */
  real_T InitialYPosition;             /* '<S390>/InitialYPosition' */
  real_T FrontAxleSpeed_dvq;           /* '<S71>/Bus Selector' */
  real_T kph2ms;                       /* '<S71>/kph2ms' */
  real_T LongitudnalPosition;          /* '<S390>/LongitudnalPosition' */
  real_T TmpRTBAtVehHeadingInport1;    /* '<S390>/In2' */
  real_T TrigonometricFunction;        /* '<S390>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S390>/Trigonometric Function1' */
  real_T VehHeading;                   /* '<S390>/VehHeading' */
  real_T XPosition;                    /* '<S390>/XPosition' */
  real_T YPosition;                    /* '<S390>/YPosition' */
  real_T DataTypeConversion1_ht;       /* '<S83>/Data Type Conversion1' */
  real_T uDLookupTable;                /* '<S83>/2-D Lookup Table' */
  real_T DataTypeConversion5_oo;       /* '<S77>/Data Type Conversion5' */
  real_T distanceSpdTarget_e;          /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_target_o;       /* '<S81>/Multiport Switch' */
  real_T VSPD_TARGET_KPH_APV_g;        /* '<S81>/Signal Conversion16' */
  real_T VSPD_HYST_KPH_APV_f;          /* '<S81>/Saturation9' */
  real_T Add_k;                        /* '<S103>/Add' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_AP_b;/* '<S81>/Saturation1' */
  real_T DataTypeConversion4_ib;       /* '<S79>/Data Type Conversion4' */
  real_T ThrottlePID_Y_m;              /* '<S79>/Switch' */
  real_T MultiportSwitch;              /* '<S83>/Multiport Switch' */
  real_T DataTypeConversion1_n3;       /* '<S82>/Data Type Conversion1' */
  real_T uD_Lookup_Table;              /* '<S85>/2D_Lookup_Table' */
  real_T DataTypeConversion1_av;       /* '<S84>/Data Type Conversion1' */
  real_T Subtract_j;                   /* '<S84>/Subtract' */
  real_T Divide_hl;                    /* '<S84>/Divide' */
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
  real_T Unit_Delay_k;                 /* '<S341>/Unit_Delay' */
  real_T MinMax_d;                     /* '<S341>/MinMax' */
  real_T Xold_hq;                      /* '<S388>/FixPt Unit Delay1' */
  real_T Init_ip;                      /* '<S388>/Init' */
  real_T Abs_ec;                       /* '<S384>/Abs' */
  real_T DigitalClock;                 /* '<S385>/Digital Clock' */
  real_T Unit_Delay_d;                 /* '<S385>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S385>/Subtract' */
  real_T Product1_hp;                  /* '<S384>/Product1' */
  real_T Add1_n;                       /* '<S384>/Add1' */
  real_T MinMax2_g;                    /* '<S384>/MinMax2' */
  real_T Abs1_h;                       /* '<S384>/Abs1' */
  real_T Product2_c;                   /* '<S384>/Product2' */
  real_T Subtract1_n;                  /* '<S384>/Subtract1' */
  real_T MinMax1_h;                    /* '<S384>/MinMax1' */
  real_T Unit_Delay_n;                 /* '<S339>/Unit_Delay' */
  real_T MinMax_n;                     /* '<S339>/MinMax' */
  real_T Xold_f;                       /* '<S377>/FixPt Unit Delay1' */
  real_T Init_b;                       /* '<S377>/Init' */
  real_T Abs_ez;                       /* '<S373>/Abs' */
  real_T DigitalClock_b;               /* '<S374>/Digital Clock' */
  real_T Unit_Delay_nx;                /* '<S374>/Unit_Delay' */
  real_T Subtract_i;                   /* '<S374>/Subtract' */
  real_T Product1_i;                   /* '<S373>/Product1' */
  real_T Add1_b;                       /* '<S373>/Add1' */
  real_T MinMax2_k;                    /* '<S373>/MinMax2' */
  real_T Abs1_c;                       /* '<S373>/Abs1' */
  real_T Product2_n;                   /* '<S373>/Product2' */
  real_T Subtract1_ht;                 /* '<S373>/Subtract1' */
  real_T MinMax1_j;                    /* '<S373>/MinMax1' */
  real_T pathSpdLimit_a;               /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_abs_max;        /* '<S81>/Multiport Switch' */
  real_T distance_o;                   /* '<S81>/Bus Selector' */
  real_T Distance_to_achieve_speed_targe;/* '<S81>/Multiport Switch' */
  real_T Uk1[2];                       /* '<S336>/Delay Input1' */
  real_T Saturation5;                  /* '<S338>/Saturation5' */
  real_T MinMax6;                      /* '<S338>/MinMax6' */
  real_T Gain1_e;                      /* '<S338>/Gain1' */
  real_T VSPD_TARGET_KPH_APV_gu;       /* '<S338>/Saturation4' */
  real_T MinMax1_f;                    /* '<S338>/MinMax1' */
  real_T Gain2;                        /* '<S338>/Gain2' */
  real_T Saturation6;                  /* '<S338>/Saturation6' */
  real_T Acceleration_target_ms2;      /* '<S81>/Multiport Switch' */
  real_T Saturation7;                  /* '<S338>/Saturation7' */
  real_T Saturation1;                  /* '<S338>/Saturation1' */
  real_T Jerk_target_ms3;              /* '<S81>/Multiport Switch' */
  real_T Saturation2;                  /* '<S338>/Saturation2' */
  real_T Vehicle_speed_vector_kph[33]; /* '<S338>/Gain3' */
  real_T MinMax3;                      /* '<S350>/MinMax3' */
  real_T Unit_Delay_f;                 /* '<S354>/Unit_Delay' */
  real_T MinMax5;                      /* '<S350>/MinMax5' */
  real_T Subtract_a;                   /* '<S350>/Subtract' */
  real_T Abs_m;                        /* '<S350>/Abs' */
  real_T MinMax4;                      /* '<S350>/MinMax4' */
  real_T MinMax6_j;                    /* '<S350>/MinMax6' */
  real_T Subtract1_ca;                 /* '<S350>/Subtract1' */
  real_T Abs1_h5;                      /* '<S350>/Abs1' */
  real_T MinMax8;                      /* '<S350>/MinMax8' */
  real_T MinMax7;                      /* '<S350>/MinMax7' */
  real_T MinMax10;                     /* '<S350>/MinMax10' */
  real_T MinMax9;                      /* '<S350>/MinMax9' */
  real_T Subtract2;                    /* '<S350>/Subtract2' */
  real_T Abs2;                         /* '<S350>/Abs2' */
  real_T Xold_p;                       /* '<S365>/FixPt Unit Delay1' */
  real_T Init_hz;                      /* '<S365>/Init' */
  real_T Gain1_c;                      /* '<S351>/Gain1' */
  real_T DigitalClock_f;               /* '<S363>/Digital Clock' */
  real_T Unit_Delay_ew;                /* '<S363>/Unit_Delay' */
  real_T Subtract_b;                   /* '<S363>/Subtract' */
  real_T Product1_a;                   /* '<S360>/Product1' */
  real_T Add_h;                        /* '<S360>/Add' */
  real_T MinMax_a;                     /* '<S360>/MinMax' */
  real_T LookupTableDynamic;           /* '<S351>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S343>/Delay Input1' */
  real_T Xold_o5;                      /* '<S349>/FixPt Unit Delay1' */
  real_T Init_p;                       /* '<S349>/Init' */
  real_T Vehicle_speed_target_c;       /* '<S344>/Unit_Delay' */
  real_T Vehicle_speed;                /* '<S344>/Unit_Delay' */
  real_T Distance_m;                   /* '<S344>/Unit_Delay' */
  real_T err;                          /* '<S344>/Subtract' */
  real_T err_abs;                      /* '<S344>/Abs2' */
  real_T Gain2_k;                      /* '<S344>/Gain2' */
  real_T Saturation4;                  /* '<S344>/Saturation4' */
  real_T time_to_target_vspd_secs;     /* '<S344>/Divide2' */
  real_T DigitalClock_p;               /* '<S342>/Digital Clock' */
  real_T Unit_Delay_b;                 /* '<S342>/Unit_Delay' */
  real_T Subtract_g;                   /* '<S342>/Subtract' */
  real_T MinMax3_n;                    /* '<S344>/MinMax3' */
  real_T Saturation1_e;                /* '<S344>/Saturation1' */
  real_T Divide_e;                     /* '<S344>/Divide' */
  real_T Abs_ma;                       /* '<S345>/Abs' */
  real_T Product1_iv;                  /* '<S345>/Product1' */
  real_T Add1_bf;                      /* '<S345>/Add1' */
  real_T MinMax2_c;                    /* '<S345>/MinMax2' */
  real_T Abs1_f;                       /* '<S345>/Abs1' */
  real_T Product2_m;                   /* '<S345>/Product2' */
  real_T Subtract1_h2;                 /* '<S345>/Subtract1' */
  real_T MinMax1_p;                    /* '<S345>/MinMax1' */
  real_T MinMax_ob;                    /* '<S81>/MinMax' */
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
  real_T DataTypeConversion2_l;        /* '<S77>/Data Type Conversion2' */
  real_T uD_Lookup_Table_le;           /* '<S193>/2D_Lookup_Table' */
  real_T Decel_rate_calculated_ms2;    /* '<S100>/Saturation4' */
  real_T DataTypeConversion_pp;        /* '<S101>/Data Type Conversion' */
  real_T DataTypeConversion1_k;        /* '<S101>/Data Type Conversion1' */
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
  real_T MinMax1_pr;                   /* '<S321>/MinMax1' */
  real_T Saturation_ns;                /* '<S321>/Saturation' */
  real_T Divide_o;                     /* '<S321>/Divide' */
  real_T Product2_bu;                  /* '<S321>/Product2' */
  real_T Subtract1_ei;                 /* '<S321>/Subtract1' */
  real_T Unit_Delay2_k;                /* '<S321>/Unit_Delay2' */
  real_T Product1_ns;                  /* '<S321>/Product1' */
  real_T Add1_k;                       /* '<S321>/Add1' */
  real_T Abs_i;                        /* '<S276>/Abs' */
  real_T Add_p;                        /* '<S276>/Add' */
  real_T Switch_g;                     /* '<S276>/Switch' */
  real_T MinMax1_a;                    /* '<S322>/MinMax1' */
  real_T Saturation_e;                 /* '<S322>/Saturation' */
  real_T Divide_d;                     /* '<S322>/Divide' */
  real_T Product2_f;                   /* '<S322>/Product2' */
  real_T Subtract1_b;                  /* '<S322>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S322>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S322>/Product1' */
  real_T Add1_pt;                      /* '<S322>/Add1' */
  real_T Sign;                         /* '<S276>/Sign' */
  real_T Product_cf;                   /* '<S276>/Product' */
  real_T MinMax1_e;                    /* '<S323>/MinMax1' */
  real_T Saturation_o;                 /* '<S323>/Saturation' */
  real_T Divide_jr;                    /* '<S323>/Divide' */
  real_T Product2_nk;                  /* '<S323>/Product2' */
  real_T Subtract1_eh;                 /* '<S323>/Subtract1' */
  real_T Unit_Delay2_c4;               /* '<S323>/Unit_Delay2' */
  real_T Product1_cc;                  /* '<S323>/Product1' */
  real_T Add1_f;                       /* '<S323>/Add1' */
  real_T Switch1_f;                    /* '<S276>/Switch1' */
  real_T correctedError;               /* '<S276>/corrected Error' */
  real_T Switch_h;                     /* '<S277>/Switch' */
  real_T Switch1_j;                    /* '<S277>/Switch1' */
  real_T SteerCtrlErrRaw;              /* '<S80>/sign' */
  real_T DataTypeConversion1_e;        /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S280>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_k;         /* '<S80>/Data Type Conversion' */
  real_T SteeringControlPGainSpeedFactor;/* '<S80>/SteeringControlPGainSpeedFactor' */
  real_T SteerCtrlPgain;               /* '<S80>/Product1' */
  real_T Gain_c;                       /* '<S80>/Gain' */
  real_T Product_d;                    /* '<S290>/Product' */
  real_T Divide_ag;                    /* '<S290>/Divide' */
  real_T Product1_hr;                  /* '<S290>/Product1' */
  real_T UnitDelay_m;                  /* '<S289>/Unit Delay' */
  real_T Switch_ov;                    /* '<S289>/Switch' */
  real_T Sign1;                        /* '<S292>/Sign1' */
  real_T Switch1_jw;                   /* '<S292>/Switch1' */
  real_T UnitDelay_o;                  /* '<S290>/Unit Delay' */
  real_T Add_px;                       /* '<S290>/Add' */
  real_T Divide1_b;                    /* '<S290>/Divide1' */
  real_T UnitDelay1_e;                 /* '<S290>/Unit Delay1' */
  real_T Add3;                         /* '<S290>/Add3' */
  real_T Add1_m;                       /* '<S290>/Add1' */
  real_T Switch_p;                     /* '<S291>/Switch' */
  real_T Switch2_i;                    /* '<S291>/Switch2' */
  real_T previewSteeringAngle_b;       /* '<S80>/Bus Selector2' */
  real_T rad2deg1;                     /* '<S80>/rad2deg1' */
  real_T Add2;                         /* '<S80>/Add2' */
  real_T uDLookupTable_a;              /* '<S278>/1-D Lookup Table' */
  real_T AdjustedStanleyGain;          /* '<S278>/AdjustedStanleyGain' */
  real_T Step;                         /* '<S272>/Step' */
  real_T TmpRTBAtsignCurveOffsetInport1;/* '<S80>/From26' */
  real_T signCurveOffset;              /* '<S80>/signCurveOffset' */
  real_T Conversion_b;                 /* '<S285>/Conversion' */
  real_T mm2m;                         /* '<S80>/mm2m' */
  real_T Switch3;                      /* '<S80>/Switch3' */
  real_T sign3;                        /* '<S80>/sign3' */
  real_T crossTrackError;              /* '<S80>/crossTrackError' */
  real_T Product_p;                    /* '<S278>/Product' */
  real_T Saturation_a;                 /* '<S278>/Saturation' */
  real_T kph2mps_;                     /* '<S278>/kph2mps_' */
  real_T TrigonometricFunction_p;      /* '<S278>/Trigonometric Function' */
  real_T deg2rad1;                     /* '<S80>/deg2rad1' */
  real_T TmpRTBAtAdd2Inport2;          /* '<S278>/desPathHeading_rad' */
  real_T Add2_g;                       /* '<S278>/Add2' */
  real_T desHeadingWeight;             /* '<S278>/desHeadingWeight' */
  real_T Add1_h;                       /* '<S278>/Add1' */
  real_T DataTypeConversion_l5;        /* '<S304>/Data Type Conversion' */
  real_T SaturationSpeedLookup;        /* '<S304>/Saturation Speed Lookup' */
  real_T sampletime;                   /* '<S315>/sample time' */
  real_T deltariselimit;               /* '<S315>/delta rise limit' */
  real_T sampletime_c;                 /* '<S302>/sample time' */
  real_T deltariselimit_c;             /* '<S302>/delta rise limit' */
  real_T Yk1;                          /* '<S302>/Delay Input2' */
  real_T UkYk1;                        /* '<S302>/Difference Inputs1' */
  real_T deltafalllimit;               /* '<S302>/delta fall limit' */
  real_T Switch_iv;                    /* '<S311>/Switch' */
  real_T Switch2_f;                    /* '<S311>/Switch2' */
  real_T DifferenceInputs2;            /* '<S302>/Difference Inputs2' */
  real_T ProportionalGain;             /* '<S301>/Proportional Gain' */
  real_T Integrator;                   /* '<S301>/Integrator' */
  real_T DerivativeGain;               /* '<S301>/Derivative Gain' */
  real_T Filter;                       /* '<S301>/Filter' */
  real_T SumD;                         /* '<S301>/SumD' */
  real_T FilterCoefficient;            /* '<S301>/Filter Coefficient' */
  real_T Sum_c;                        /* '<S301>/Sum' */
  real_T Saturate;                     /* '<S301>/Saturate' */
  real_T Uk1_m;                        /* '<S305>/Delay Input' */
  real_T ZeroUk1;                      /* '<S305>/GainZero' */
  real_T Yk1_p;                        /* '<S305>/Delay Output' */
  real_T PoleYk1;                      /* '<S305>/GainPole' */
  real_T PoleYk1UkZeroUk1;             /* '<S305>/Sum' */
  real_T Downcast;                     /* '<S305>/Downcast' */
  real_T Subtract_c;                   /* '<S275>/Subtract' */
  real_T uDLookupTable_j;              /* '<S275>/1-D Lookup Table' */
  real_T deg2rad;                      /* '<S275>/deg2rad' */
  real_T invert;                       /* '<S275>/invert' */
  real_T PGain;                        /* '<S275>/PGain' */
  real_T sampletime_a;                 /* '<S303>/sample time' */
  real_T deltariselimit_o;             /* '<S303>/delta rise limit' */
  real_T Sum_ly;                       /* '<S275>/Sum' */
  real_T RateFeedbackGain;             /* '<S275>/RateFeedbackGain' */
  real_T FeedforwardGain;              /* '<S275>/FeedforwardGain' */
  real_T UndersteerCorrection;         /* '<S275>/UndersteerCorrection' */
  real_T Sum2;                         /* '<S275>/Sum2' */
  real_T Yk1_o;                        /* '<S303>/Delay Input2' */
  real_T UkYk1_n;                      /* '<S303>/Difference Inputs1' */
  real_T deltafalllimit_o;             /* '<S303>/delta fall limit' */
  real_T Switch_e;                     /* '<S312>/Switch' */
  real_T Switch2_e;                    /* '<S312>/Switch2' */
  real_T DifferenceInputs2_a;          /* '<S303>/Difference Inputs2' */
  real_T Sum3;                         /* '<S275>/Sum3' */
  real_T DiscreteTimeIntegrator;       /* '<S295>/Discrete-Time Integrator' */
  real_T Sum4;                         /* '<S275>/Sum4' */
  real_T Yk1_pm;                       /* '<S315>/Delay Input2' */
  real_T UkYk1_f;                      /* '<S315>/Difference Inputs1' */
  real_T RateLimitLower;               /* '<S304>/Gain3' */
  real_T deltafalllimit_n;             /* '<S315>/delta fall limit' */
  real_T Switch_f;                     /* '<S317>/Switch' */
  real_T Switch2_fa;                   /* '<S317>/Switch2' */
  real_T DifferenceInputs2_m;          /* '<S315>/Difference Inputs2' */
  real_T Gain1_f;                      /* '<S304>/Gain1' */
  real_T Switch_hx;                    /* '<S316>/Switch' */
  real_T Switch2_k;                    /* '<S316>/Switch2' */
  real_T MultiportSwitch2;             /* '<S80>/Multiport Switch2' */
  real_T DataTypeConversion6_p;        /* '<S80>/Data Type Conversion6' */
  real_T rad2deg;                      /* '<S80>/rad2deg' */
  real_T MultiportSwitch1;             /* '<S80>/Multiport Switch1' */
  real_T uD_Lookup_Table_a;            /* '<S270>/1D_Lookup_Table' */
  real_T numLanePoints_j;              /* '<S80>/Data Type Conversion4' */
  real_T DiscreteTimeIntegrator_h;     /* '<S80>/Discrete-Time Integrator' */
  real_T Switch_k;                     /* '<S290>/Switch' */
  real_T Gain_o;                       /* '<S295>/Gain' */
  real_T IntegralGain;                 /* '<S301>/Integral Gain' */
  real_T Abs_ig;                       /* '<S304>/Abs' */
  real_T Abs1_ft;                      /* '<S304>/Abs1' */
  real_T Subtract_og;                  /* '<S304>/Subtract' */
  real_T Abs2_k;                       /* '<S304>/Abs2' */
  real_T RateCurvature;                /* '<S304>/Curvature Lookup Table' */
  real_T RateError;                    /* '<S304>/Error Lookup Table' */
  real_T Max;                          /* '<S304>/Max' */
  real_T RateSpeed;                    /* '<S304>/Speed Lookup Table' */
  real_T Min;                          /* '<S304>/Min' */
  real_T RateLimitUpper;               /* '<S304>/Limit Rate Limiter' */
  real_T Subtract_c1;                  /* '<S80>/Subtract' */
  real_T Switch1_p;                    /* '<S80>/Switch1' */
  real_T UnitDelay_p;                  /* '<S80>/Unit Delay' */
  real_T Switch2_i1;                   /* '<S80>/Switch2' */
  real_T Xnew;                         /* '<S365>/Reset' */
  real_T Xold_d;                       /* '<S367>/FixPt Unit Delay1' */
  real_T Init_oa;                      /* '<S367>/Init' */
  real_T Xold_mg;                      /* '<S368>/FixPt Unit Delay1' */
  real_T Init_l;                       /* '<S368>/Init' */
  real_T MultiportSwitch_i;            /* '<S366>/Multiport Switch' */
  real_T DigitalClock_d;               /* '<S362>/Digital Clock' */
  real_T Unit_Delay_pa;                /* '<S362>/Unit_Delay' */
  real_T Subtract_k;                   /* '<S362>/Subtract' */
  real_T Product1_am;                  /* '<S361>/Product1' */
  real_T Add_db;                       /* '<S361>/Add' */
  real_T Xnew_f;                       /* '<S368>/Reset' */
  real_T Xnew_h;                       /* '<S367>/Reset' */
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
  real_T TimeVectorRaw[6];             /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T PositionVectorRaw[6];         /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityVectorRaw[6];         /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationVectorRaw[6];     /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T JerkVectorRaw[6];             /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T TimeVector[33];               /* '<S338>/TwentyPointVectorCalculation' */
  real_T PositionVector[33];           /* '<S338>/TwentyPointVectorCalculation' */
  real_T VelocityVector[33];           /* '<S338>/TwentyPointVectorCalculation' */
  real_T AccelerationVector[33];       /* '<S338>/TwentyPointVectorCalculation' */
  real_T JerkVector[33];               /* '<S338>/TwentyPointVectorCalculation' */
  real_T Add_py;                       /* '<S366>/Add' */
  real_T u_trapezoidal;                /* '<S366>/Gain' */
  real_T Xold_g;                       /* '<S334>/FixPt Unit Delay1' */
  real_T Init_j;                       /* '<S334>/Init' */
  real_T Abs_a;                        /* '<S331>/Abs' */
  real_T Product1_i3;                  /* '<S331>/Product1' */
  real_T Add1_b0;                      /* '<S331>/Add1' */
  real_T MinMax2_l;                    /* '<S331>/MinMax2' */
  real_T Abs1_e;                       /* '<S331>/Abs1' */
  real_T Product2_k;                   /* '<S331>/Product2' */
  real_T Subtract1_g;                  /* '<S331>/Subtract1' */
  real_T MinMax1_k;                    /* '<S331>/MinMax1' */
  real_T Subtract_ij;                  /* '<S328>/Subtract' */
  real_T Abs_eu;                       /* '<S328>/Abs' */
  real_T error;                        /* '<S274>/Error Calc' */
  real_T Switch1_m;                    /* '<S289>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_ox1;      /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_pl;       /* '<S80>/Data Type Conversion3' */
  real_T SpeedSaturation;              /* '<S274>/Speed Saturation' */
  real_T kmhtoms;                      /* '<S274>/km//h to m//s' */
  real_T Product_n;                    /* '<S274>/Product' */
  real_T TrigonometricFunction_l;      /* '<S274>/Trigonometric Function' */
  real_T ErrorSaturation;              /* '<S274>/Error Saturation' */
  real_T Sum1;                         /* '<S274>/Sum1' */
  real_T Subtract_ej;                  /* '<S274>/Subtract' */
  real_T uDLookupTable_h;              /* '<S274>/1-D Lookup Table' */
  real_T deg2rad_o;                    /* '<S274>/deg2rad' */
  real_T invert_d;                     /* '<S274>/invert' */
  real_T Product3;                     /* '<S80>/Product3' */
  real_T deg2rad_d;                    /* '<S80>/deg2rad' */
  real_T Product2_my;                  /* '<S80>/Product2' */
  real_T DataTypeConversion9_h;        /* '<S213>/Data Type Conversion9' */
  real_T DataTypeConversion1_iq;       /* '<S213>/Data Type Conversion1' */
  real_T Add_di;                       /* '<S213>/Add' */
  real_T DataTypeConversion2_i;        /* '<S213>/Data Type Conversion2' */
  real_T DataTypeConversion3_he;       /* '<S213>/Data Type Conversion3' */
  real_T DataTypeConversion5_i;        /* '<S217>/Data Type Conversion5' */
  real_T Coeff_of_drag_Cd;             /* '<S224>/1-D Lookup Table' */
  real_T KPH_TO_MS;                    /* '<S224>/KPH_TO_M//S' */
  real_T MathFunction;                 /* '<S224>/Math Function' */
  real_T DataTypeConversion_ik;        /* '<S217>/Data Type Conversion' */
  real_T KPA_TO_PA;                    /* '<S224>/KPA_TO_PA' */
  real_T DataTypeConversion4_b;        /* '<S217>/Data Type Conversion4' */
  real_T Add_o;                        /* '<S224>/Add' */
  real_T Product_nm;                   /* '<S224>/Product' */
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
  real_T Divide_k;                     /* '<S228>/Divide' */
  real_T Coeff_of_rolling_resistance_Cr;/* '<S228>/Add1' */
  real_T grade_angle_radians_a;        /* '<S226>/Divide1' */
  real_T TrigonometricFunction_e;      /* '<S226>/Trigonometric Function' */
  real_T Rolling_resistance_Rr;        /* '<S226>/Product2' */
  real_T TotalTractiveForce_N;         /* '<S222>/Add' */
  real_T Saturation_g;                 /* '<S217>/Saturation' */
  real_T DataTypeConversion1_b;        /* '<S217>/Data Type Conversion1' */
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
  real_T Product2_lv;                  /* '<S261>/Product2' */
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
  real_T MinMax1_n;                    /* '<S204>/MinMax1' */
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
  real_T Unit_Delay_a;                 /* '<S177>/Unit_Delay' */
  real_T Xold_b;                       /* '<S185>/FixPt Unit Delay1' */
  real_T Init_k;                       /* '<S185>/Init' */
  real_T Abs_b;                        /* '<S181>/Abs' */
  real_T DigitalClock_c;               /* '<S182>/Digital Clock' */
  real_T Unit_Delay_ka;                /* '<S182>/Unit_Delay' */
  real_T Subtract_ko;                  /* '<S182>/Subtract' */
  real_T Product1_f;                   /* '<S181>/Product1' */
  real_T Add1_c;                       /* '<S181>/Add1' */
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
  real_T Xold_c;                       /* '<S172>/FixPt Unit Delay1' */
  real_T Init_c;                       /* '<S172>/Init' */
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
  real_T Saturation_pu;                /* '<S129>/Saturation' */
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
  RTMapsTX BusCreator;                 /* '<S392>/Bus Creator' */
  uint32_T Encoder_o2;                 /* '<S400>/Encoder' */
  uint32_T TCPIP_Com_o1[3];            /* '<S394>/TCPIP_Com' */
  uint32_T TCPIP_Com_o2;               /* '<S394>/TCPIP_Com' */
  uint32_T DataTypeConversion_aq;      /* '<S391>/Data Type Conversion' */
  uint32_T SFunction1_o1_kx;           /* '<S28>/S-Function1' */
  uint32_T SFunction1_o1_g3;           /* '<S20>/S-Function1' */
  uint32_T SFunction1_o1_ar;           /* '<S21>/S-Function1' */
  uint32_T SFunction1_o1_h4;           /* '<S18>/S-Function1' */
  uint32_T SFunction1_o1_ma;           /* '<S19>/S-Function1' */
  uint32_T SFunction1_o1_og;           /* '<S17>/S-Function1' */
  uint32_T Reshape[8];                 /* '<S1034>/Reshape' */
  uint32_T UnitDelay_j;                /* '<S1035>/Unit Delay' */
  uint32_T Switch1_n;                  /* '<S1038>/Switch1' */
  uint32_T Selector;                   /* '<S1034>/Selector' */
  uint32_T DataTypeConversion_j;       /* '<S1026>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1031>/Operator' */
  uint32_T Operator_p;                 /* '<S1032>/Operator' */
  uint32_T Operator_d;                 /* '<S1033>/Operator' */
  uint32_T DataType_dj;                /* '<S1033>/DataType' */
  uint32_T Shift_Arithmetic1_j;        /* '<S1026>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1034>/Width' */
  uint32_T Switch1_fl;                 /* '<S1037>/Switch1' */
  uint32_T Subtract_o3;                /* '<S1035>/Subtract' */
  uint32_T UnitDelay_ot;               /* '<S1020>/Unit Delay' */
  uint32_T Switch1_nt;                 /* '<S1023>/Switch1' */
  uint32_T DataTypeConversion6_i;      /* '<S1015>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S1015>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_b;      /* '<S1015>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S1015>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_j;      /* '<S1015>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S1015>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_k;      /* '<S1015>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S1015>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_a;     /* '<S1015>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S1015>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_n;     /* '<S1015>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S1015>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_p;      /* '<S1016>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S1016>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S1016>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_ko;       /* '<S1016>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S1016>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_d;        /* '<S1016>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S1016>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_d;        /* '<S1016>/Shift_Arithmetic 5' */
  uint32_T Width_f;                    /* '<S1019>/Width' */
  uint32_T Switch1_i;                  /* '<S1022>/Switch1' */
  uint32_T Subtract_ijj;               /* '<S1020>/Subtract' */
  uint32_T DataTypeConversion2_hl;     /* '<S961>/Data Type Conversion2' */
  uint32_T Operator_b;                 /* '<S966>/Operator' */
  uint32_T Operator_bf;                /* '<S967>/Operator' */
  uint32_T Operator_dc;                /* '<S968>/Operator' */
  uint32_T DataType_i;                 /* '<S968>/DataType' */
  uint32_T Shift_Arithmetic1_it;       /* '<S961>/Shift_Arithmetic 1' */
  uint32_T Operator_pz;                /* '<S969>/Operator' */
  uint32_T DataType_bg;                /* '<S969>/DataType' */
  uint32_T Shift_Arithmetic2_o;        /* '<S961>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_g;                /* '<S992>/Unit Delay' */
  uint32_T Switch1_c;                  /* '<S995>/Switch1' */
  uint32_T DataTypeConversion_g;       /* '<S960>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_kb;        /* '<S960>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_jx;     /* '<S960>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_np;       /* '<S960>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_j;      /* '<S960>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_f1;       /* '<S960>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_d;      /* '<S960>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_e;        /* '<S960>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_f;      /* '<S960>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_ev;       /* '<S960>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_om;     /* '<S960>/Data Type Conversion5' */
  uint32_T Operator_c;                 /* '<S965>/Operator' */
  uint32_T DataType_bv;                /* '<S965>/DataType' */
  uint32_T DataTypeConversion3_b;      /* '<S961>/Data Type Conversion3' */
  uint32_T Operator_f;                 /* '<S970>/Operator' */
  uint32_T Operator_bn;                /* '<S971>/Operator' */
  uint32_T Operator_dk;                /* '<S972>/Operator' */
  uint32_T DataType_jt;                /* '<S972>/DataType' */
  uint32_T Shift_Arithmetic4_k;        /* '<S961>/Shift_Arithmetic 4' */
  uint32_T Operator_j;                 /* '<S973>/Operator' */
  uint32_T DataType_iu;                /* '<S973>/DataType' */
  uint32_T Shift_Arithmetic5_f;        /* '<S961>/Shift_Arithmetic 5' */
  uint32_T Width_p;                    /* '<S991>/Width' */
  uint32_T Switch1_id;                 /* '<S994>/Switch1' */
  uint32_T Subtract_oi;                /* '<S992>/Subtract' */
  uint32_T DataTypeConversion_d;       /* '<S910>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_l;         /* '<S910>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_jr;     /* '<S910>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_l;        /* '<S910>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_et;     /* '<S910>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_fy;       /* '<S910>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_g;      /* '<S910>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_m;        /* '<S910>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_h;      /* '<S910>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_o;        /* '<S910>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_js;     /* '<S910>/Data Type Conversion5' */
  uint32_T Operator_l;                 /* '<S920>/Operator' */
  uint32_T DataType_ia;                /* '<S920>/DataType' */
  uint32_T DataTypeConversion8_p;      /* '<S909>/Data Type Conversion8' */
  uint32_T Operator_cg;                /* '<S916>/Operator' */
  uint32_T Operator_m;                 /* '<S917>/Operator' */
  uint32_T Operator_p3;                /* '<S918>/Operator' */
  uint32_T DataType_im;                /* '<S918>/DataType' */
  uint32_T Shift_Arithmetic4_k4;       /* '<S909>/Shift_Arithmetic 4' */
  uint32_T Operator_p3v;               /* '<S919>/Operator' */
  uint32_T DataType_ce;                /* '<S919>/DataType' */
  uint32_T Shift_Arithmetic5_j;        /* '<S909>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_hs;      /* '<S722>/Data Type Conversion' */
  uint32_T DataTypeConversion1_nb;     /* '<S722>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_h5;     /* '<S722>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S722>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S722>/Shift Arithmetic2' */
  uint32_T Operator_l2;                /* '<S724>/Operator' */
  uint32_T DataType_akh;               /* '<S724>/DataType' */
  uint32_T DataTypeConversion_av;      /* '<S714>/Data Type Conversion' */
  uint32_T DataTypeConversion1_d2;     /* '<S714>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_pi;     /* '<S714>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_d;         /* '<S714>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_m;         /* '<S714>/Shift Arithmetic2' */
  uint32_T Operator_i;                 /* '<S716>/Operator' */
  uint32_T DataType_nq;                /* '<S716>/DataType' */
  uint32_T DataTypeConversion_i5;      /* '<S708>/Data Type Conversion' */
  uint32_T DataTypeConversion1_dc;     /* '<S708>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_ec;     /* '<S708>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_j;         /* '<S708>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_d;         /* '<S708>/Shift Arithmetic2' */
  uint32_T Operator_m5;                /* '<S709>/Operator' */
  uint32_T DataType_i0;                /* '<S709>/DataType' */
  uint32_T DataTypeConversion_dg;      /* '<S703>/Data Type Conversion' */
  uint32_T DataTypeConversion1_o;      /* '<S703>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_p2;     /* '<S703>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_jl;        /* '<S703>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_f;         /* '<S703>/Shift Arithmetic2' */
  uint32_T Operator_k;                 /* '<S704>/Operator' */
  uint32_T DataType_iw;                /* '<S704>/DataType' */
  uint32_T DataTypeConversion_e0;      /* '<S696>/Data Type Conversion' */
  uint32_T DataTypeConversion1_jy;     /* '<S696>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_nt;     /* '<S696>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_l;         /* '<S696>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_b;         /* '<S696>/Shift Arithmetic2' */
  uint32_T Operator_o;                 /* '<S698>/Operator' */
  uint32_T DataType_f2;                /* '<S698>/DataType' */
  uint32_T UnitDelay_a;                /* '<S61>/Unit Delay' */
  uint32_T Switch1_h;                  /* '<S64>/Switch1' */
  uint32_T Switch1_b;                  /* '<S63>/Switch1' */
  uint32_T Subtract_fc;                /* '<S61>/Subtract' */
  uint32_T UnitDelay_j5;               /* '<S55>/Unit Delay' */
  uint32_T Switch1_k;                  /* '<S58>/Switch1' */
  uint32_T Switch1_l;                  /* '<S57>/Switch1' */
  uint32_T Subtract_m;                 /* '<S55>/Subtract' */
  uint32_T UnitDelay_l;                /* '<S49>/Unit Delay' */
  uint32_T Switch1_e;                  /* '<S52>/Switch1' */
  uint32_T Switch1_c4;                 /* '<S51>/Switch1' */
  uint32_T Subtract_f1;                /* '<S49>/Subtract' */
  uint32_T UnitDelay_d;                /* '<S43>/Unit Delay' */
  uint32_T Switch1_k4;                 /* '<S46>/Switch1' */
  uint32_T Switch1_fr;                 /* '<S45>/Switch1' */
  uint32_T Subtract_h;                 /* '<S43>/Subtract' */
  uint32_T UnitDelay_b;                /* '<S37>/Unit Delay' */
  uint32_T Switch1_iy;                 /* '<S40>/Switch1' */
  uint32_T Switch1_hm;                 /* '<S39>/Switch1' */
  uint32_T Subtract_nc;                /* '<S37>/Subtract' */
  uint32_T UnitDelay_f;                /* '<S31>/Unit Delay' */
  uint32_T Switch1_o;                  /* '<S34>/Switch1' */
  uint32_T Switch1_a;                  /* '<S33>/Switch1' */
  uint32_T Subtract_ot;                /* '<S31>/Subtract' */
  real32_T PropB_REAX_3_HandwheelTorque;/* '<S663>/Product' */
  real32_T PropB_REAX_3_HandwheelVelocity;/* '<S664>/Product1' */
  real32_T PropB_REAX_3_PullCompensation;/* '<S665>/Product2' */
  real32_T Subtract_p;                 /* '<S646>/Subtract' */
  real32_T Subtract_ls;                /* '<S518>/Subtract' */
  real32_T DataTypeConversion2_lf;     /* '<S79>/Data Type Conversion2' */
  real32_T Divide_nn;                  /* '<S279>/Divide' */
  real32_T UnitDelay_fm;               /* '<S279>/Unit Delay' */
  real32_T Switch1_fi;                 /* '<S283>/Switch1' */
  real32_T Divide_d0;                  /* '<S284>/Divide' */
  real32_T UnitDelay_lj;               /* '<S284>/Unit Delay' */
  real32_T Switch1_pb;                 /* '<S288>/Switch1' */
  real32_T DataTypeConversion1_g;      /* '<S284>/Data Type Conversion1' */
  real32_T Switch1_aq;                 /* '<S286>/Switch1' */
  real32_T DataTypeConversion_m;       /* '<S284>/Data Type Conversion' */
  real32_T Add3_p;                     /* '<S284>/Add3' */
  real32_T Product1_ce;                /* '<S284>/Product1' */
  real32_T Add_a;                      /* '<S284>/Add' */
  real32_T DataTypeConversion1_b1;     /* '<S279>/Data Type Conversion1' */
  real32_T Switch1_cw;                 /* '<S281>/Switch1' */
  real32_T DataTypeConversion_ps;      /* '<S279>/Data Type Conversion' */
  real32_T Add3_j;                     /* '<S279>/Add3' */
  real32_T Product1_n2;                /* '<S279>/Product1' */
  real32_T Add_f;                      /* '<S279>/Add' */
  int32_T Decoder_o2;                  /* '<S397>/Decoder' */
  int32_T Merge;                       /* '<S962>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S605>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_e;/* '<S441>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S605>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_m;/* '<S441>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_p;/* '<S603>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_c;/* '<S604>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_b;/* '<S603>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_a;/* '<S604>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S623>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_d;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S623>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_d;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1000>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lr; /* '<S98>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_lu;/* '<S98>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S748>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S748>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S203>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l;/* '<S203>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_jz;      /* '<S527>/Data Type Conversion' */
  uint16_T DataTypeConversion1_b3;     /* '<S527>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S527>/Shift Arithmetic' */
  uint16_T Operator_ku;                /* '<S552>/Operator' */
  uint16_T DataType_kz;                /* '<S552>/DataType' */
  uint16_T DataTypeConversion_pn;      /* '<S521>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ex;     /* '<S521>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_k;          /* '<S521>/Shift Arithmetic' */
  uint16_T Operator_a;                 /* '<S548>/Operator' */
  uint16_T DataType_kp;                /* '<S548>/DataType' */
  uint16_T DataTypeConversion_ow;      /* '<S525>/Data Type Conversion' */
  uint16_T DataTypeConversion1_be;     /* '<S525>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_f;          /* '<S525>/Shift Arithmetic' */
  uint16_T Operator_ll;                /* '<S550>/Operator' */
  uint16_T DataType_as;                /* '<S550>/DataType' */
  uint16_T DataTypeConversion1_ntl;    /* '<S526>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_k;      /* '<S526>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_i;          /* '<S526>/Shift Arithmetic' */
  uint16_T Operator_jb;                /* '<S551>/Operator' */
  uint16_T DataType_l5;                /* '<S551>/DataType' */
  uint16_T DataTypeConversion1_pu;     /* '<S529>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_j;      /* '<S529>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_h;          /* '<S529>/Shift Arithmetic' */
  uint16_T Operator_g;                 /* '<S553>/Operator' */
  uint16_T DataType_pr;                /* '<S553>/DataType' */
  uint16_T DataTypeConversion1_it;     /* '<S535>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_kz;     /* '<S535>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_b;          /* '<S535>/Shift Arithmetic' */
  uint16_T Operator_kf;                /* '<S554>/Operator' */
  uint16_T DataType_pi;                /* '<S554>/DataType' */
  uint16_T DataTypeConversion_g4;      /* '<S543>/Data Type Conversion' */
  uint16_T DataTypeConversion1_en;     /* '<S543>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_it;         /* '<S543>/Shift Arithmetic' */
  uint16_T Operator_ii;                /* '<S557>/Operator' */
  uint16_T DataType_or;                /* '<S557>/DataType' */
  uint16_T DataTypeConversion1_ff;     /* '<S536>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_du;     /* '<S536>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_g;          /* '<S536>/Shift Arithmetic' */
  uint16_T Operator_ok;                /* '<S555>/Operator' */
  uint16_T DataType_cv;                /* '<S555>/DataType' */
  uint16_T DataTypeConversion_mv;      /* '<S537>/Data Type Conversion' */
  uint16_T DataTypeConversion1_mx;     /* '<S537>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_n;          /* '<S537>/Shift Arithmetic' */
  uint16_T Operator_l1;                /* '<S556>/Operator' */
  uint16_T DataType_f1;                /* '<S556>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S537>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S413>/Data Type Conversion21' */
  uint16_T DataTypeConversion_lq;      /* '<S545>/Data Type Conversion' */
  uint16_T DataTypeConversion1_hs;     /* '<S545>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_l;          /* '<S545>/Shift Arithmetic' */
  uint16_T Operator_bx;                /* '<S558>/Operator' */
  uint16_T DataType_iz;                /* '<S558>/DataType' */
  uint16_T DataTypeConversion_oi;      /* '<S547>/Data Type Conversion' */
  uint16_T DataTypeConversion1_fc;     /* '<S547>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_d;          /* '<S547>/Shift Arithmetic' */
  uint16_T Operator_n;                 /* '<S559>/Operator' */
  uint16_T DataType_pu;                /* '<S559>/DataType' */
  uint16_T DataTypeConversion_fa;      /* '<S523>/Data Type Conversion' */
  uint16_T DataTypeConversion1_b2;     /* '<S523>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_p;          /* '<S523>/Shift Arithmetic' */
  uint16_T Operator_ce;                /* '<S549>/Operator' */
  uint16_T DataType_ib;                /* '<S549>/DataType' */
  uint16_T DataTypeConversion1_ku;     /* '<S663>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_pu;     /* '<S663>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_j2;       /* '<S663>/Shift_Arithmetic 1' */
  uint16_T Operator_gn;                /* '<S668>/Operator' */
  uint16_T DataType_ee;                /* '<S668>/DataType' */
  uint16_T DataTypeConversion4_ix;     /* '<S664>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_b;      /* '<S664>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_p;        /* '<S664>/Shift_Arithmetic 2' */
  uint16_T Operator_e;                 /* '<S669>/Operator' */
  uint16_T DataType_ik;                /* '<S669>/DataType' */
  uint16_T DataTypeConversion7_i3;     /* '<S665>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_l;      /* '<S665>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_oc;       /* '<S665>/Shift_Arithmetic 3' */
  uint16_T Operator_ng;                /* '<S670>/Operator' */
  uint16_T DataType_pt;                /* '<S670>/DataType' */
  uint16_T DataTypeConversion6_j;      /* '<S676>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_j;      /* '<S676>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_ef;       /* '<S676>/Shift_Arithmetic 2' */
  uint16_T Operator_gb;                /* '<S681>/Operator' */
  uint16_T DataType_gb;                /* '<S681>/DataType' */
  uint16_T DataType_m;                 /* '<S1032>/DataType' */
  uint16_T Shift_Arithmetic_h;         /* '<S1026>/Shift_Arithmetic ' */
  uint16_T DataType_lf;                /* '<S967>/DataType' */
  uint16_T Shift_Arithmetic_b;         /* '<S961>/Shift_Arithmetic ' */
  uint16_T DataType_pf;                /* '<S971>/DataType' */
  uint16_T Shift_Arithmetic3_n;        /* '<S961>/Shift_Arithmetic 3' */
  uint16_T DataType_h2;                /* '<S917>/DataType' */
  uint16_T Shift_Arithmetic3_me;       /* '<S909>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_od;     /* '<S870>/Data Type Conversion1' */
  uint16_T Operator_m1;                /* '<S901>/Operator' */
  uint16_T Operator_pj;                /* '<S902>/Operator' */
  uint16_T DataType_mw;                /* '<S902>/DataType' */
  uint16_T Shift_Arithmetic_d;         /* '<S870>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_c;       /* '<S719>/Data Type Conversion' */
  uint16_T DataTypeConversion1_bn;     /* '<S719>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_n;         /* '<S719>/Shift Arithmetic2' */
  uint16_T Operator_kr;                /* '<S723>/Operator' */
  uint16_T DataType_lo;                /* '<S723>/DataType' */
  uint16_T DataTypeConversion_kj;      /* '<S712>/Data Type Conversion' */
  uint16_T DataTypeConversion1_nk;     /* '<S712>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_h;         /* '<S712>/Shift Arithmetic2' */
  uint16_T Operator_lk;                /* '<S715>/Operator' */
  uint16_T DataType_mm;                /* '<S715>/DataType' */
  uint16_T DataTypeConversion_kg;      /* '<S694>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ds;     /* '<S694>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_o;         /* '<S694>/Shift Arithmetic2' */
  uint16_T Operator_ip;                /* '<S697>/Operator' */
  uint16_T DataType_hq;                /* '<S697>/DataType' */
  int16_T DataTypeConversion3_dk;      /* '<S663>/Data Type Conversion3' */
  int16_T DataTypeConversion6_b;       /* '<S664>/Data Type Conversion6' */
  int16_T DataTypeConversion9_d;       /* '<S665>/Data Type Conversion9' */
  int16_T DataTypeConversion8_m;       /* '<S676>/Data Type Conversion8' */
  int16_T DataTypeConversion_nd;       /* '<S870>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S781>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_o;           /* '<S773>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_l;           /* '<S797>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_h;           /* '<S789>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_hd;          /* '<S817>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_a;           /* '<S816>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_ok;          /* '<S805>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_mt;       /* '<S470>/Data Type Conversion' */
  uint8_T DataTypeConversion1_d5;      /* '<S470>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_fq;      /* '<S470>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_b2;      /* '<S470>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_e;       /* '<S470>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ic;      /* '<S470>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ar;      /* '<S470>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_e;       /* '<S470>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S416>/Multiport_Switch' */
  uint8_T DataTypeConversion_o0[8];    /* '<S464>/Data Type Conversion' */
  uint8_T DataTypeConversion_ge;       /* '<S479>/Data Type Conversion' */
  uint8_T DataTypeConversion1_hs1;     /* '<S479>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_pm;      /* '<S479>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_hl;      /* '<S479>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_lb;      /* '<S479>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_e;       /* '<S479>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_m2;      /* '<S479>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_fh;      /* '<S479>/Data Type Conversion7' */
  uint8_T RawData_m[8];                /* '<S417>/Multiport_Switch' */
  uint8_T DataTypeConversion_dm[8];    /* '<S465>/Data Type Conversion' */
  uint8_T DataTypeConversion_at[39];   /* '<S516>/Data Type Conversion' */
  uint8_T DataTypeConversion_ae;       /* '<S644>/Data Type Conversion' */
  uint8_T DataTypeConversion1_l1;      /* '<S644>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_eci;     /* '<S644>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_is;      /* '<S644>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_m;       /* '<S644>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_c;       /* '<S644>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_h;       /* '<S644>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_dl;      /* '<S644>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_o;       /* '<S644>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_kt;      /* '<S644>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_ap;     /* '<S644>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_o;      /* '<S644>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S644>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_n;      /* '<S644>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_g;      /* '<S644>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_b;      /* '<S644>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_a;      /* '<S644>/Data Type Conversion16' */
  uint8_T Add_ni;                      /* '<S644>/Add' */
  uint8_T DataTypeConversion15_o;      /* '<S623>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_es;      /* '<S623>/Data Type Conversion4' */
  uint8_T MABX_Mode_h;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[23];              /* '<S400>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S394>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1043>/Vector Concatenate' */
  uint8_T UnitDelay1_d;                /* '<S844>/Unit Delay1' */
  uint8_T MultiportSwitch_fm[8];       /* '<S844>/Multiport Switch' */
  uint8_T SupervisorMode_l;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S413>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S413>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S413>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S413>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S413>/Data Type Conversion26' */
  uint8_T DataTypeConversion_dt;       /* '<S605>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ij;      /* '<S605>/Data Type Conversion1' */
  uint8_T Add1_ma;                     /* '<S644>/Add1' */
  uint8_T DataTypeConversion_pnh;      /* '<S578>/Data Type Conversion' */
  uint8_T DataTypeConversion1_g3;      /* '<S578>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_d;       /* '<S578>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_n;       /* '<S578>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_iu;      /* '<S578>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_d;       /* '<S578>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ic;      /* '<S578>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_c;       /* '<S578>/Data Type Conversion7' */
  uint8_T DataTypeConversion_bk;       /* '<S579>/Data Type Conversion' */
  uint8_T DataTypeConversion1_i5;      /* '<S579>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_b5;      /* '<S579>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_k0;      /* '<S579>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_k;       /* '<S579>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_cp;      /* '<S579>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_op;      /* '<S579>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_l;       /* '<S579>/Data Type Conversion7' */
  uint8_T RawData_a[8];                /* '<S439>/Multiport_Switch' */
  uint8_T Operator_ay;                 /* '<S667>/Operator' */
  uint8_T DataType_jh;                 /* '<S667>/DataType' */
  uint8_T Operator_bq;                 /* '<S666>/Operator' */
  uint8_T DataType_ms;                 /* '<S666>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S661>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_i3;       /* '<S592>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ak;      /* '<S592>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_lc;      /* '<S592>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_m1;      /* '<S592>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_a;       /* '<S592>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_i2;      /* '<S592>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ax;      /* '<S592>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_b0;      /* '<S592>/Data Type Conversion7' */
  uint8_T RawData_e[8];                /* '<S440>/Multiport_Switch' */
  uint8_T Operator_gng;                /* '<S679>/Operator' */
  uint8_T DataType_fb;                 /* '<S679>/DataType' */
  uint8_T Shift_Arithmetic_j;          /* '<S672>/Shift_Arithmetic ' */
  uint8_T Operator_co;                 /* '<S678>/Operator' */
  uint8_T Operator_df;                 /* '<S680>/Operator' */
  uint8_T DataType_bq;                 /* '<S680>/DataType' */
  uint8_T Shift_Arithmetic1_m;         /* '<S672>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S673>/SignalConversion' */
  uint8_T DataTypeConversion3_hp;      /* '<S415>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S674>/SignalConversion' */
  uint8_T DataTypeConversion4_ak;      /* '<S415>/Data Type Conversion4' */
  uint8_T State;                       /* '<S844>/Chart' */
  uint8_T TPDT_count;                  /* '<S844>/Chart' */
  uint8_T VectorConcatenate_m[8];      /* '<S1045>/Vector Concatenate' */
  uint8_T VectorConcatenate_k[8];      /* '<S1046>/Vector Concatenate' */
  uint8_T DataType_mp;                 /* '<S1031>/DataType' */
  uint8_T DataTypeConversion3_e;       /* '<S1026>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_f3;      /* '<S1026>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_iw;      /* '<S1026>/Data Type Conversion2' */
  uint8_T DataTypeConversion_fs;       /* '<S996>/Data Type Conversion' */
  uint8_T Operator_op;                 /* '<S1001>/Operator' */
  uint8_T DataType_dp;                 /* '<S1001>/DataType' */
  uint8_T DataTypeConversion2_oa;      /* '<S1016>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_k4;      /* '<S1016>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S1016>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_b5;      /* '<S1016>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S1016>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_au;         /* '<S1016>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_b;      /* '<S1016>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_g;       /* '<S1016>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_c;         /* '<S1016>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_j;      /* '<S1016>/Data Type Conversion11' */
  uint8_T Reshape_p[16];               /* '<S1019>/Reshape' */
  uint8_T Selector_k;                  /* '<S1019>/Selector' */
  uint8_T DataTypeConversion10_c;      /* '<S1016>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S1016>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_jj;      /* '<S1016>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_b;       /* '<S1016>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_a;       /* '<S1016>/Data Type Conversion9' */
  uint8_T Add2_f;                      /* '<S1016>/Add2' */
  uint8_T Shift_Arithmetic6_e;         /* '<S1016>/Shift_Arithmetic 6' */
  uint8_T Add3_c;                      /* '<S1016>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S1016>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_g;         /* '<S1016>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S1016>/Bitwise Operator7' */
  uint8_T DataTypeConversion_le;       /* '<S998>/Data Type Conversion' */
  uint8_T Operator_ky;                 /* '<S1012>/Operator' */
  uint8_T Operator_km;                 /* '<S1007>/Operator' */
  uint8_T DataType_cx;                 /* '<S1007>/DataType' */
  uint8_T Operator_pt;                 /* '<S1008>/Operator' */
  uint8_T Operator_da;                 /* '<S1009>/Operator' */
  uint8_T Operator_ik;                 /* '<S1010>/Operator' */
  uint8_T Operator_af;                 /* '<S1011>/Operator' */
  uint8_T DataTypeConversion_mo;       /* '<S925>/Data Type Conversion' */
  uint8_T Operator_me;                 /* '<S933>/Operator' */
  uint8_T Operator_my;                 /* '<S930>/Operator' */
  uint8_T DataType_lo1;                /* '<S930>/DataType' */
  uint8_T Operator_cq;                 /* '<S931>/Operator' */
  uint8_T Operator_la;                 /* '<S932>/Operator' */
  uint8_T Operator_i5;                 /* '<S934>/Operator' */
  uint8_T Operator_mt;                 /* '<S935>/Operator' */
  uint8_T DataTypeConversion_gn;       /* '<S926>/Data Type Conversion' */
  uint8_T Operator_dd;                 /* '<S941>/Operator' */
  uint8_T Operator_pr;                 /* '<S942>/Operator' */
  uint8_T Operator_ao;                 /* '<S938>/Operator' */
  uint8_T DataType_o0;                 /* '<S938>/DataType' */
  uint8_T Operator_pz3;                /* '<S939>/Operator' */
  uint8_T Operator_gv;                 /* '<S940>/Operator' */
  uint8_T Operator_jf;                 /* '<S943>/Operator' */
  uint8_T DataTypeConversion_au;       /* '<S929>/Data Type Conversion' */
  uint8_T Switch_fz;                   /* '<S963>/Switch' */
  uint8_T DataTypeConversion_f2;       /* '<S961>/Data Type Conversion' */
  uint8_T DataType_ju;                 /* '<S966>/DataType' */
  uint8_T DataTypeConversion4_e4;      /* '<S961>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_f;       /* '<S961>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_iz;      /* '<S961>/Data Type Conversion6' */
  uint8_T Reshape_d[16];               /* '<S991>/Reshape' */
  uint8_T Selector_d;                  /* '<S991>/Selector' */
  uint8_T DataTypeConversion1_ki;      /* '<S961>/Data Type Conversion1' */
  uint8_T Operator_l2b;                /* '<S974>/Operator' */
  uint8_T DataType_er;                 /* '<S974>/DataType' */
  uint8_T DataType_og;                 /* '<S970>/DataType' */
  uint8_T DataTypeConversion8_k;       /* '<S961>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_hp;      /* '<S961>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_h;      /* '<S961>/Data Type Conversion10' */
  uint8_T Add_i;                       /* '<S961>/Add' */
  uint8_T Shift_Arithmetic6_j;         /* '<S961>/Shift_Arithmetic 6' */
  uint8_T Add1_ir;                     /* '<S961>/Add1' */
  uint8_T Operator_jq;                 /* '<S975>/Operator' */
  uint8_T DataType_nu;                 /* '<S975>/DataType' */
  uint8_T Shift_Arithmetic7_c;         /* '<S961>/Shift_Arithmetic 7' */
  uint8_T Operator_ci;                 /* '<S976>/Operator' */
  uint8_T DataType_hz;                 /* '<S976>/DataType' */
  uint8_T DataTypeConversion_mo0;      /* '<S928>/Data Type Conversion' */
  uint8_T Operator_lv;                 /* '<S956>/Operator' */
  uint8_T Operator_h;                  /* '<S952>/Operator' */
  uint8_T DataType_hm;                 /* '<S952>/DataType' */
  uint8_T Operator_cw;                 /* '<S953>/Operator' */
  uint8_T Operator_ir;                 /* '<S954>/Operator' */
  uint8_T Operator_ee;                 /* '<S955>/Operator' */
  uint8_T Operator_eq;                 /* '<S957>/Operator' */
  uint8_T DataTypeConversion_e3;       /* '<S871>/Data Type Conversion' */
  uint8_T Operator_fc;                 /* '<S903>/Operator' */
  uint8_T DataType_fh;                 /* '<S903>/DataType' */
  uint8_T DataTypeConversion2_mu;      /* '<S871>/Data Type Conversion2' */
  uint8_T Operator_dfv;                /* '<S905>/Operator' */
  uint8_T DataType_izk;                /* '<S905>/DataType' */
  uint8_T Shift_Arithmetic_e;          /* '<S871>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_gg;      /* '<S871>/Data Type Conversion4' */
  uint8_T Operator_mh;                 /* '<S906>/Operator' */
  uint8_T DataType_on;                 /* '<S906>/DataType' */
  uint8_T Shift_Arithmetic1_mp;        /* '<S871>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_fy;      /* '<S871>/Data Type Conversion5' */
  uint8_T Operator_kj;                 /* '<S904>/Operator' */
  uint8_T DataType_ne;                 /* '<S904>/DataType' */
  uint8_T Shift_Arithmetic2_pc;        /* '<S871>/Shift_Arithmetic 2' */
  uint8_T Operator_gl;                 /* '<S911>/Operator' */
  uint8_T DataType_kk;                 /* '<S911>/DataType' */
  uint8_T DataTypeConversion1_hp;      /* '<S871>/Data Type Conversion1' */
  uint8_T Operator_c3;                 /* '<S907>/Operator' */
  uint8_T DataType_ge;                 /* '<S907>/DataType' */
  uint8_T DataType_i2;                 /* '<S916>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S909>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S909>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S909>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_p;      /* '<S909>/Data Type Conversion13' */
  uint8_T Operator_lay;                /* '<S915>/Operator' */
  uint8_T DataType_ow;                 /* '<S915>/DataType' */
  uint8_T Checksum;                    /* '<S909>/Add' */
  uint8_T Shift_Arithmetic7_p;         /* '<S909>/Shift_Arithmetic 7' */
  uint8_T Add1_j;                      /* '<S909>/Add1' */
  uint8_T Operator_iy;                 /* '<S914>/Operator' */
  uint8_T DataType_k2;                 /* '<S914>/DataType' */
  uint8_T DataTypeConversion3_b1;      /* '<S871>/Data Type Conversion3' */
  uint8_T Operator_ox;                 /* '<S908>/Operator' */
  uint8_T DataType_be;                 /* '<S908>/DataType' */
  uint8_T Shift_Arithmetic3_m3;        /* '<S871>/Shift_Arithmetic 3' */
  uint8_T Operator_ou;                 /* '<S912>/Operator' */
  uint8_T DataType_gk;                 /* '<S912>/DataType' */
  uint8_T DataTypeConversion_ga;       /* '<S866>/Data Type Conversion' */
  uint8_T Operator_nf;                 /* '<S881>/Operator' */
  uint8_T DataType_af;                 /* '<S881>/DataType' */
  uint8_T Operator_nl;                 /* '<S886>/Operator' */
  uint8_T Operator_hr;                 /* '<S882>/Operator' */
  uint8_T Operator_no;                 /* '<S887>/Operator' */
  uint8_T Operator_f3;                 /* '<S888>/Operator' */
  uint8_T Operator_jj;                 /* '<S885>/Operator' */
  uint8_T DataType_oc;                 /* '<S901>/DataType' */
  uint8_T DataTypeConversion2_i0;      /* '<S870>/Data Type Conversion2' */
  uint8_T DataTypeConversion_pd;       /* '<S846>/Data Type Conversion' */
  uint8_T Operator_kv;                 /* '<S851>/Operator' */
  uint8_T Operator_ma;                 /* '<S848>/Operator' */
  uint8_T DataType_hzh;                /* '<S848>/DataType' */
  uint8_T Operator_cq5;                /* '<S849>/Operator' */
  uint8_T Operator_ko;                 /* '<S850>/Operator' */
  uint8_T Operator_cv;                 /* '<S852>/Operator' */
  uint8_T Operator_lc;                 /* '<S853>/Operator' */
  uint8_T DataTypeConversion_mb;       /* '<S847>/Data Type Conversion' */
  uint8_T Operator_cgi;                /* '<S859>/Operator' */
  uint8_T Operator_b2;                 /* '<S856>/Operator' */
  uint8_T DataType_jq;                 /* '<S856>/DataType' */
  uint8_T Operator_h2;                 /* '<S857>/Operator' */
  uint8_T Operator_f4;                 /* '<S858>/Operator' */
  uint8_T Operator_pi;                 /* '<S860>/Operator' */
  uint8_T Operator_dn;                 /* '<S861>/Operator' */
  uint8_T FixPtUnitDelay2_b;           /* '<S827>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S718>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S720>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S721>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_d;       /* '<S711>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S713>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_da;      /* '<S706>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S707>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_c;       /* '<S700>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S701>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S702>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_k;       /* '<S693>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S695>/Signal Conversion' */
  uint8_T UnitDelay_j0[17];            /* '<S643>/Unit Delay' */
  uint8_T Data[17];                    /* '<S643>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S646>/Inport' */
  uint8_T DataTypeConversion_ev;       /* '<S603>/Data Type Conversion' */
  uint8_T DataTypeConversion_my;       /* '<S604>/Data Type Conversion' */
  uint8_T DataTypeConversion1_cs;      /* '<S603>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_jb;      /* '<S604>/Data Type Conversion1' */
  uint8_T DataTypeConversion_k1;       /* '<S590>/Data Type Conversion' */
  uint8_T DataTypeConversion1_pi;      /* '<S590>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ot;      /* '<S590>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_hc;      /* '<S590>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_c;       /* '<S590>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_n;       /* '<S590>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ij;      /* '<S590>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_fv;      /* '<S590>/Data Type Conversion7' */
  uint8_T DataTypeConversion_j1;       /* '<S591>/Data Type Conversion' */
  uint8_T DataTypeConversion1_h1;      /* '<S591>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ph;      /* '<S591>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_jh;      /* '<S591>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_cy;      /* '<S591>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_h;       /* '<S591>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_n;       /* '<S591>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_dz;      /* '<S591>/Data Type Conversion7' */
  uint8_T DataTypeConversion_om;       /* '<S577>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ka;      /* '<S577>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_b2;      /* '<S577>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_o2;      /* '<S577>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_mv;      /* '<S577>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_dk;      /* '<S577>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_hz;      /* '<S577>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_k;       /* '<S577>/Data Type Conversion7' */
  uint8_T UnitDelay_i[39];             /* '<S515>/Unit Delay' */
  uint8_T Data_l[39];                  /* '<S515>/serialize_tpdt' */
  uint8_T Inport_p[39];                /* '<S518>/Inport' */
  uint8_T DataTypeConversion1_ba;      /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_p;       /* '<S203>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew;      /* '<S98>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S98>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b2;          /* '<S388>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S377>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_oi;          /* '<S365>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S365>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_n;           /* '<S349>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion1_f1;      /* '<S79>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_e3;      /* '<S80>/Data Type Conversion5' */
  uint8_T FixPtUnitDelay2_j;           /* '<S367>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_i;      /* '<S367>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_m;           /* '<S368>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_b;      /* '<S368>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_h5;          /* '<S334>/FixPt Unit Delay2' */
  uint8_T stateChange;                 /* '<S277>/Chart' */
  uint8_T FixPtUnitDelay2_at;          /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_g;           /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_d;           /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_mf;          /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_op;          /* '<S134>/FixPt Unit Delay2' */
  int8_T DataTypeConversion4_j;        /* '<S675>/Data Type Conversion4' */
  int8_T DataTypeConversion10_j;       /* '<S677>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S391>/for_logging7' */
  boolean_T SFunction1_g;              /* '<S729>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S411>/EStopSwActive' */
  boolean_T SFunction1_k;              /* '<S728>/S-Function1' */
  boolean_T Operator_lz;               /* '<S828>/Operator' */
  boolean_T DataType_p2;               /* '<S828>/DataType' */
  boolean_T LogicalOperator;           /* '<S738>/Logical Operator' */
  boolean_T SFunction1_f;              /* '<S731>/S-Function1' */
  boolean_T Operator_mo;               /* '<S829>/Operator' */
  boolean_T DataType_ft;               /* '<S829>/DataType' */
  boolean_T AND2;                      /* '<S738>/AND2' */
  boolean_T min_relop;                 /* '<S776>/min_relop' */
  boolean_T max_relop;                 /* '<S776>/max_relop' */
  boolean_T conjunction;               /* '<S776>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S778>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S778>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S764>/Relational Operator9' */
  boolean_T min_relop_j;               /* '<S768>/min_relop' */
  boolean_T max_relop_o;               /* '<S768>/max_relop' */
  boolean_T conjunction_a;             /* '<S768>/conjunction' */
  boolean_T RelationalOperator1_n;     /* '<S770>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S770>/Relational Operator' */
  boolean_T F_Fault_Soft_a;            /* '<S763>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S748>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S764>/Relational Operator8' */
  boolean_T F_Fault_Hard_m;            /* '<S763>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S748>/Logical Operator1' */
  boolean_T Compare;                   /* '<S759>/Compare' */
  boolean_T min_relop_f;               /* '<S792>/min_relop' */
  boolean_T max_relop_n;               /* '<S792>/max_relop' */
  boolean_T conjunction_b;             /* '<S792>/conjunction' */
  boolean_T RelationalOperator1_m;     /* '<S794>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S794>/Relational Operator' */
  boolean_T F_Fault_Soft_d;            /* '<S766>/Relational Operator9' */
  boolean_T min_relop_l;               /* '<S784>/min_relop' */
  boolean_T max_relop_n2;              /* '<S784>/max_relop' */
  boolean_T conjunction_f;             /* '<S784>/conjunction' */
  boolean_T RelationalOperator1_h;     /* '<S786>/Relational Operator1' */
  boolean_T RelationalOperator_f;      /* '<S786>/Relational Operator' */
  boolean_T F_Fault_Soft_aw;           /* '<S765>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S748>/Logical Operator4' */
  boolean_T F_Fault_Hard_l;            /* '<S766>/Relational Operator8' */
  boolean_T F_Fault_Hard_c;            /* '<S765>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S748>/Logical Operator3' */
  boolean_T Compare_m;                 /* '<S760>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S748>/Logical Operator5' */
  boolean_T Unit_Delay_bw;             /* '<S751>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S818>/Unit_Delay1' */
  boolean_T LogicalOperator_j;         /* '<S818>/Logical Operator' */
  boolean_T Unit_Delay1_o;             /* '<S751>/Unit_Delay1' */
  boolean_T Unit_Delay1_j;             /* '<S819>/Unit_Delay1' */
  boolean_T LogicalOperator_e;         /* '<S819>/Logical Operator' */
  boolean_T Compare_b;                 /* '<S755>/Compare' */
  boolean_T Compare_n;                 /* '<S811>/Compare' */
  boolean_T LogicalOperator7;          /* '<S749>/Logical Operator7' */
  boolean_T Compare_o;                 /* '<S810>/Compare' */
  boolean_T LogicalOperator8;          /* '<S749>/Logical Operator8' */
  boolean_T Compare_p;                 /* '<S809>/Compare' */
  boolean_T LogicalOperator5;          /* '<S749>/Logical Operator5' */
  boolean_T Compare_a;                 /* '<S808>/Compare' */
  boolean_T LogicalOperator6;          /* '<S749>/Logical Operator6' */
  boolean_T Compare_i;                 /* '<S754>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S753>/Relational Operator' */
  boolean_T min_relop_c;               /* '<S800>/min_relop' */
  boolean_T max_relop_c;               /* '<S800>/max_relop' */
  boolean_T conjunction_m;             /* '<S800>/conjunction' */
  boolean_T RelationalOperator1_p;     /* '<S802>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S802>/Relational Operator' */
  boolean_T F_Fault_Hard_g;            /* '<S767>/Relational Operator8' */
  boolean_T LogicalOperator6_p;        /* '<S737>/Logical Operator6' */
  boolean_T Operator_fo;               /* '<S473>/Operator' */
  boolean_T Operator_fct;              /* '<S690>/Operator' */
  boolean_T Operator_bl;               /* '<S482>/Operator' */
  boolean_T RX_status;                 /* '<S479>/Data Type Conversion8' */
  boolean_T RX_status_h;               /* '<S417>/Multiport_Switch' */
  boolean_T Operator_kc;               /* '<S517>/Operator' */
  boolean_T LogicalOperator_k;         /* '<S431>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S644>/Unit_Delay3' */
  boolean_T Operator_l0;               /* '<S645>/Operator' */
  boolean_T LogicalOperator_o;         /* '<S454>/Logical Operator' */
  boolean_T RelationalOperator1_ns[17];/* '<S644>/Relational Operator1' */
  boolean_T Compare_il;                /* '<S648>/Compare' */
  boolean_T LogicalOperator_l;         /* '<S644>/Logical Operator' */
  boolean_T Unit_Delay_ku;             /* '<S644>/Unit_Delay' */
  boolean_T LogicalOperator3_h;        /* '<S650>/Logical Operator3' */
  boolean_T Unit_Delay_m2;             /* '<S650>/Unit_Delay' */
  boolean_T LogicalOperator_b;         /* '<S650>/Logical Operator' */
  boolean_T LogicalOperator1_h;        /* '<S650>/Logical Operator1' */
  boolean_T Operator_iv;               /* '<S655>/Operator' */
  boolean_T Operator_bu;               /* '<S654>/Operator' */
  boolean_T Operator_mc;               /* '<S656>/Operator' */
  boolean_T Operator_en;               /* '<S657>/Operator' */
  boolean_T Operator_il;               /* '<S658>/Operator' */
  boolean_T Operator_et;               /* '<S659>/Operator' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S461>/OR' */
  boolean_T Enable;                    /* '<S3>/Enable' */
  boolean_T EStop_j;                   /* '<S3>/Unit_Delay' */
  boolean_T EnableSW;                  /* '<S3>/Unit_Delay' */
  boolean_T EngagePB_g;                /* '<S3>/Unit_Delay' */
  boolean_T Compare_f;                 /* '<S402>/Compare' */
  boolean_T LogPB;                     /* '<S3>/Unit_Delay' */
  boolean_T AutonomousEnabled_a;       /* '<S3>/Unit_Delay' */
  boolean_T Compare_c;                 /* '<S399>/Compare' */
  boolean_T Uk1_f;                     /* '<S398>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S398>/FixPt Relational Operator' */
  boolean_T RX_status_i;               /* '<S504>/Data Type Conversion8' */
  boolean_T RX_status_d;               /* '<S633>/Data Type Conversion8' */
  boolean_T Operator_d3;               /* '<S1053>/Operator' */
  boolean_T DataType_ham;              /* '<S1053>/DataType' */
  boolean_T UnitDelay2;                /* '<S844>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S844>/Unit Delay3' */
  boolean_T Operator_n1;               /* '<S1072>/Operator' */
  boolean_T AND;                       /* '<S1063>/AND' */
  boolean_T OR;                        /* '<S1063>/OR' */
  boolean_T Operator_fp;               /* '<S1071>/Operator' */
  boolean_T LogicalOperator_ju;        /* '<S1061>/Logical Operator' */
  boolean_T RelationalOperator_g;      /* '<S1062>/Relational Operator' */
  boolean_T RelationalOperator1_d;     /* '<S1062>/Relational Operator1' */
  boolean_T LogicalOperator_c;         /* '<S1062>/Logical Operator' */
  boolean_T Compare_k;                 /* '<S1068>/Compare' */
  boolean_T Compare_g;                 /* '<S1069>/Compare' */
  boolean_T LogicalOperator1_m;        /* '<S1062>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1062>/Logical Operator2' */
  boolean_T LogicalOperator_h;         /* '<S835>/Logical Operator' */
  boolean_T RX_status_k;               /* '<S568>/Data Type Conversion8' */
  boolean_T F_Truck1571_VIN_Match;     /* '<S3>/Unit_Delay' */
  boolean_T F_Truck166_VIN_Match;      /* '<S3>/Unit_Delay' */
  boolean_T RTMapsOk_p;                /* '<S3>/Unit_Delay' */
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
  boolean_T RX_status_b;               /* '<S470>/Data Type Conversion8' */
  boolean_T RX_status_c;               /* '<S416>/Multiport_Switch' */
  boolean_T Operator_mf;               /* '<S474>/Operator' */
  boolean_T Operator_h2r;              /* '<S475>/Operator' */
  boolean_T Operator_dz;               /* '<S476>/Operator' */
  boolean_T Operator_gq;               /* '<S477>/Operator' */
  boolean_T Operator_b5;               /* '<S478>/Operator' */
  boolean_T Operator_kz;               /* '<S483>/Operator' */
  boolean_T Operator_m0;               /* '<S484>/Operator' */
  boolean_T Operator_go;               /* '<S485>/Operator' */
  boolean_T Operator_oh;               /* '<S486>/Operator' */
  boolean_T Operator_d2;               /* '<S487>/Operator' */
  boolean_T RX_status_cn;              /* '<S488>/Data Type Conversion8' */
  boolean_T RX_status_l;               /* '<S490>/Data Type Conversion8' */
  boolean_T RX_status_db;              /* '<S492>/Data Type Conversion8' */
  boolean_T RX_status_lb;              /* '<S494>/Data Type Conversion8' */
  boolean_T RX_status_k3;              /* '<S496>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S498>/Data Type Conversion8' */
  boolean_T RX_status_n;               /* '<S500>/Data Type Conversion8' */
  boolean_T RX_status_nq;              /* '<S502>/Data Type Conversion8' */
  boolean_T RX_status_o;               /* '<S504>/Switch' */
  boolean_T RX_status_g;               /* '<S507>/Data Type Conversion8' */
  boolean_T RX_status_gj;              /* '<S509>/Data Type Conversion8' */
  boolean_T RX_status_a;               /* '<S511>/Data Type Conversion8' */
  boolean_T RX_status_ad;              /* '<S513>/Data Type Conversion8' */
  boolean_T RX_status_aq;              /* '<S560>/Data Type Conversion8' */
  boolean_T RX_status_g5;              /* '<S562>/Data Type Conversion8' */
  boolean_T RX_status_af;              /* '<S564>/Data Type Conversion8' */
  boolean_T RX_status_g0;              /* '<S566>/Data Type Conversion8' */
  boolean_T RX_status_f;               /* '<S568>/Switch' */
  boolean_T RX_status_e;               /* '<S571>/Data Type Conversion8' */
  boolean_T RX_status_ko;              /* '<S438>/Switch' */
  boolean_T Operator_al;               /* '<S610>/Operator' */
  boolean_T Operator_hp;               /* '<S611>/Operator' */
  boolean_T Operator_lg;               /* '<S612>/Operator' */
  boolean_T RX_status_gz;              /* '<S605>/Data Type Conversion8' */
  boolean_T RX_status_bv;              /* '<S441>/Multiport_Switch' */
  boolean_T Operator_pd;               /* '<S613>/Operator' */
  boolean_T Operator_n4;               /* '<S614>/Operator' */
  boolean_T Operator_ax;               /* '<S615>/Operator' */
  boolean_T RX_status_p;               /* '<S616>/Data Type Conversion2' */
  boolean_T RX_status_d5;              /* '<S616>/Data Type Conversion5' */
  boolean_T RX_status_ir;              /* '<S616>/Data Type Conversion8' */
  boolean_T RX_status_dp;              /* '<S620>/Switch' */
  boolean_T RX_status_h1;              /* '<S623>/Data Type Conversion8' */
  boolean_T RX_status_he;              /* '<S625>/Data Type Conversion8' */
  boolean_T RX_status_n3;              /* '<S627>/Data Type Conversion8' */
  boolean_T RX_status_km;              /* '<S629>/Data Type Conversion8' */
  boolean_T RX_status_li;              /* '<S631>/Data Type Conversion8' */
  boolean_T RX_status_ab;              /* '<S635>/Data Type Conversion8' */
  boolean_T RX_status_oz;              /* '<S637>/Data Type Conversion8' */
  boolean_T RX_status_dn;              /* '<S639>/Data Type Conversion8' */
  boolean_T RX_status_c0;              /* '<S641>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S644>/Relational Operator2' */
  boolean_T Compare_gp;                /* '<S649>/Compare' */
  boolean_T Unit_Delay2_i;             /* '<S644>/Unit_Delay2' */
  boolean_T LogicalOperator1_g;        /* '<S644>/Logical Operator1' */
  boolean_T LogicalOperator2_h;        /* '<S650>/Logical Operator2' */
  boolean_T Unit_Delay1_i;             /* '<S644>/Unit_Delay1' */
  boolean_T LogicalOperator3_o;        /* '<S651>/Logical Operator3' */
  boolean_T Unit_Delay_eu;             /* '<S651>/Unit_Delay' */
  boolean_T LogicalOperator_hz;        /* '<S651>/Logical Operator' */
  boolean_T LogicalOperator1_l;        /* '<S651>/Logical Operator1' */
  boolean_T LogicalOperator2_p;        /* '<S651>/Logical Operator2' */
  boolean_T Operator_h5;               /* '<S688>/Operator' */
  boolean_T Operator_g1;               /* '<S691>/Operator' */
  boolean_T Operator_j3;               /* '<S689>/Operator' */
  boolean_T Operator_nl1;              /* '<S687>/Operator' */
  boolean_T Operator_pa;               /* '<S584>/Operator' */
  boolean_T Operator_lw;               /* '<S585>/Operator' */
  boolean_T Operator_cm;               /* '<S589>/Operator' */
  boolean_T RX_status_gy;              /* '<S578>/Data Type Conversion8' */
  boolean_T RX_status_ad2;             /* '<S579>/Data Type Conversion8' */
  boolean_T RX_status_cl;              /* '<S439>/Multiport_Switch' */
  boolean_T Operator_lgv;              /* '<S586>/Operator' */
  boolean_T Operator_ic;               /* '<S587>/Operator' */
  boolean_T Operator_a0;               /* '<S588>/Operator' */
  boolean_T Operator_d0;               /* '<S597>/Operator' */
  boolean_T Operator_lm;               /* '<S598>/Operator' */
  boolean_T Operator_jg;               /* '<S602>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S672>/Data Type Conversion' */
  boolean_T DataTypeConversion_di;     /* '<S415>/Data Type Conversion' */
  boolean_T DataType_nf;               /* '<S678>/DataType' */
  boolean_T DataTypeConversion1_h5;    /* '<S415>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S672>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_lh;    /* '<S415>/Data Type Conversion2' */
  boolean_T RX_status_m;               /* '<S592>/Data Type Conversion8' */
  boolean_T RX_status_nk;              /* '<S440>/Multiport_Switch' */
  boolean_T Operator_o5;               /* '<S599>/Operator' */
  boolean_T Operator_cc;               /* '<S600>/Operator' */
  boolean_T Operator_pn;               /* '<S601>/Operator' */
  boolean_T SFunction1_d;              /* '<S730>/S-Function1' */
  boolean_T SFunction1_e;              /* '<S732>/S-Function1' */
  boolean_T LogPbActive;               /* '<S411>/LogPbActive' */
  boolean_T LogicalOperator2_n;        /* '<S411>/Logical Operator2' */
  boolean_T Compare_pe;                /* '<S744>/Compare' */
  boolean_T Uk1_j;                     /* '<S740>/Delay Input1' */
  boolean_T FixPtRelationalOperator_i; /* '<S740>/FixPt Relational Operator' */
  boolean_T UnitDelay_js;              /* '<S736>/Unit Delay' */
  boolean_T Compare_oc;                /* '<S743>/Compare' */
  boolean_T Uk1_fx;                    /* '<S739>/Delay Input1' */
  boolean_T FixPtRelationalOperator_n; /* '<S739>/FixPt Relational Operator' */
  boolean_T UnitDelay_ov;              /* '<S741>/Unit Delay' */
  boolean_T OR1;                       /* '<S741>/OR1' */
  boolean_T Compare_oo;                /* '<S745>/Compare' */
  boolean_T LessThanOrEqual;           /* '<S741>/LessThanOrEqual' */
  boolean_T AND_h;                     /* '<S741>/AND' */
  boolean_T NOT;                       /* '<S736>/NOT' */
  boolean_T AND_hz;                    /* '<S736>/AND' */
  boolean_T UnitDelay_lz;              /* '<S742>/Unit Delay' */
  boolean_T OR1_f;                     /* '<S742>/OR1' */
  boolean_T Compare_os;                /* '<S746>/Compare' */
  boolean_T LessThanOrEqual_k;         /* '<S742>/LessThanOrEqual' */
  boolean_T AND_c;                     /* '<S742>/AND' */
  boolean_T StartPBActive;             /* '<S411>/StartPBActive' */
  boolean_T F_Fault_Soft_c;            /* '<S767>/Relational Operator9' */
  boolean_T Operator_eu;               /* '<S22>/Operator' */
  boolean_T Operator_ms;               /* '<S26>/Operator' */
  boolean_T Operator_fv;               /* '<S27>/Operator' */
  boolean_T Operator_bs;               /* '<S24>/Operator' */
  boolean_T Operator_bw;               /* '<S25>/Operator' */
  boolean_T Operator_eb;               /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S844>/Chart' */
  boolean_T enTPCM;                    /* '<S844>/Chart' */
  boolean_T DataTypeConversion6_j2;    /* '<S1025>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S1029>/u2' */
  boolean_T Operator_lmj;              /* '<S1029>/Operator' */
  boolean_T DataType_ii;               /* '<S1029>/DataType' */
  boolean_T Unit_Delay_l;              /* '<S1034>/Unit_Delay' */
  boolean_T Operator_mi;               /* '<S1036>/Operator' */
  boolean_T AutonomousOutputEnabled_g; /* '<S1000>/Bus Selector2' */
  boolean_T BrakingControlActive_m;    /* '<S1000>/Bus Selector2' */
  boolean_T Unit_Delay_ly;             /* '<S996>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S996>/OperatorEnable' */
  boolean_T LogicalOperator8_a;        /* '<S996>/Logical Operator8' */
  boolean_T LogicalOperator7_j;        /* '<S996>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S996>/OperatorEnable' */
  boolean_T LogicalOperator1_d;        /* '<S996>/Logical Operator1' */
  boolean_T DataTypeConversion2_ld;    /* '<S996>/Data Type Conversion2' */
  boolean_T LogicalOperator_p;         /* '<S996>/Logical Operator' */
  boolean_T Compare_c4;                /* '<S1002>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S996>/OperatorEnable' */
  boolean_T Unit_Delay_jr;             /* '<S1019>/Unit_Delay' */
  boolean_T DataTypeConversion7_m;     /* '<S998>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_ke;    /* '<S998>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_nt;    /* '<S998>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_o;     /* '<S998>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_a;     /* '<S998>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_c;     /* '<S998>/Data Type Conversion6' */
  boolean_T Operator_cci;              /* '<S1021>/Operator' */
  boolean_T DataTypeConversion5_i1;    /* '<S925>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_ll;    /* '<S925>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_dh;    /* '<S925>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_il;    /* '<S925>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_fw;    /* '<S925>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_e5;    /* '<S925>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_o2;    /* '<S926>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_nb;    /* '<S926>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_go;    /* '<S926>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_it;    /* '<S926>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_ok;    /* '<S926>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_fe;    /* '<S926>/Data Type Conversion7' */
  boolean_T Operator_k4;               /* '<S980>/Operator' */
  boolean_T Operator_MX;               /* '<S989>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S989>/Operator_MN' */
  boolean_T Operator_cl;               /* '<S981>/Operator' */
  boolean_T Operator_kri;              /* '<S982>/Operator' */
  boolean_T Operator_ke;               /* '<S983>/Operator' */
  boolean_T Operator_fr;               /* '<S984>/Operator' */
  boolean_T Operator_bqy;              /* '<S985>/Operator' */
  boolean_T Unit_Delay_h;              /* '<S991>/Unit_Delay' */
  boolean_T DataTypeConversion6_cg;    /* '<S928>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_nd;    /* '<S928>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_jz;    /* '<S928>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_no;    /* '<S928>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_ct;    /* '<S928>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_ir;    /* '<S928>/Data Type Conversion7' */
  boolean_T LogicalOperator1_e;        /* '<S989>/Logical Operator1' */
  boolean_T LogicalOperator_kz;        /* '<S989>/Logical Operator' */
  boolean_T Operator_ll3;              /* '<S993>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S871>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S889>/u1' */
  boolean_T DataTypeConversion2_ee;    /* '<S866>/Data Type Conversion2' */
  boolean_T Operator_hx;               /* '<S889>/Operator' */
  boolean_T DataType_pm;               /* '<S889>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_o; /* '<S892>/u1' */
  boolean_T DataTypeConversion5_io;    /* '<S866>/Data Type Conversion5' */
  boolean_T Operator_dj;               /* '<S892>/Operator' */
  boolean_T DataType_mpp;              /* '<S892>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_n; /* '<S883>/u1' */
  boolean_T DataTypeConversion6_i5;    /* '<S866>/Data Type Conversion6' */
  boolean_T Operator_kb;               /* '<S883>/Operator' */
  boolean_T DataType_g2;               /* '<S883>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_j; /* '<S884>/u1' */
  boolean_T DataTypeConversion7_gb;    /* '<S866>/Data Type Conversion7' */
  boolean_T Operator_fvb;              /* '<S884>/Operator' */
  boolean_T DataType_jm;               /* '<S884>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_m; /* '<S890>/u1' */
  boolean_T DataTypeConversion3_py;    /* '<S866>/Data Type Conversion3' */
  boolean_T Operator_cr;               /* '<S890>/Operator' */
  boolean_T DataType_ob;               /* '<S890>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_h; /* '<S891>/u1' */
  boolean_T DataTypeConversion4_cv;    /* '<S866>/Data Type Conversion4' */
  boolean_T Operator_hn;               /* '<S891>/Operator' */
  boolean_T DataType_erc;              /* '<S891>/DataType' */
  boolean_T DataTypeConversion2_m1;    /* '<S872>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S877>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_f;/* '<S878>/Enable' */
  boolean_T DataTypeConversion2_np;    /* '<S867>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_fh;    /* '<S868>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_br;    /* '<S846>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_lb;    /* '<S846>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_fw;    /* '<S846>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_oi;    /* '<S846>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_l;     /* '<S846>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_j1;    /* '<S846>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_a3;    /* '<S847>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_c;     /* '<S847>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_jp;    /* '<S847>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_lk;    /* '<S847>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_hu;    /* '<S847>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_n;     /* '<S847>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S830>/Chart' */
  boolean_T Unit_Delay_bq;             /* '<S823>/Unit_Delay' */
  boolean_T LogicalOperator1_c;        /* '<S823>/Logical Operator1' */
  boolean_T LogicalOperator_d;         /* '<S823>/Logical Operator' */
  boolean_T Unit_Delay_ei;             /* '<S824>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S824>/Logical Operator1' */
  boolean_T RelationalOperator1_g;     /* '<S752>/Relational Operator1' */
  boolean_T LogicalOperator3_g;        /* '<S822>/Logical Operator3' */
  boolean_T Unit_Delay_jw;             /* '<S822>/Unit_Delay' */
  boolean_T LogicalOperator1_f;        /* '<S822>/Logical Operator1' */
  boolean_T LogicalOperator_g;         /* '<S822>/Logical Operator' */
  boolean_T LogicalOperator2_g;        /* '<S822>/Logical Operator2' */
  boolean_T min_relop_jb;              /* '<S825>/min_relop' */
  boolean_T RX_status_a1;              /* '<S643>/serialize_tpdt' */
  boolean_T RX_status_g5i;             /* '<S620>/Data Type Conversion8' */
  boolean_T RX_status_mx;              /* '<S620>/Data Type Conversion3' */
  boolean_T RX_status_dx;              /* '<S603>/Data Type Conversion8' */
  boolean_T RX_status_mo;              /* '<S604>/Data Type Conversion8' */
  boolean_T RX_status_j;               /* '<S590>/Data Type Conversion8' */
  boolean_T RX_status_ka;              /* '<S591>/Data Type Conversion8' */
  boolean_T RX_status_ex;              /* '<S577>/Data Type Conversion8' */
  boolean_T RX_status_ao;              /* '<S573>/Data Type Conversion8' */
  boolean_T RX_status_oo;              /* '<S574>/Data Type Conversion8' */
  boolean_T RX_status_fu;              /* '<S568>/Data Type Conversion3' */
  boolean_T RX_status_el;              /* '<S515>/serialize_tpdt' */
  boolean_T RX_status_kq;              /* '<S504>/Data Type Conversion1' */
  boolean_T CheckHDOP;                 /* '<S389>/CheckHDOP' */
  boolean_T Operator_ns;               /* '<S95>/Operator' */
  boolean_T LogicalOperator_dy;        /* '<S83>/Logical Operator' */
  boolean_T f_vspd_geq_than_target_plus_hys;/* '<S103>/Relational Operator' */
  boolean_T f_target_is_stop_thresh;   /* '<S103>/Relational Operator1' */
  boolean_T Compare_e;                 /* '<S199>/Compare' */
  boolean_T RelationalOperator2_p;     /* '<S103>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S103>/Relational Operator3' */
  boolean_T f_vspd_leq_than_hyst_and_target;/* '<S103>/Logical Operator' */
  boolean_T LogicalOperator1_mr;       /* '<S103>/Logical Operator1' */
  boolean_T DataTypeConversion4_d5;    /* '<S77>/Data Type Conversion4' */
  boolean_T F_Brake_control_active;    /* '<S103>/Logical Operator2' */
  boolean_T Compare_e5;                /* '<S209>/Compare' */
  boolean_T LogicalOperator2_nt;       /* '<S203>/Logical Operator2' */
  boolean_T Compare_ih;                /* '<S207>/Compare' */
  boolean_T Compare_ex;                /* '<S208>/Compare' */
  boolean_T BrakingActive2;            /* '<S203>/BrakingActive2' */
  boolean_T f_brake_sw_off;            /* '<S203>/BrakingActive1' */
  boolean_T Compare_ay;                /* '<S210>/Compare' */
  boolean_T Compare_oso;               /* '<S211>/Compare' */
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
  boolean_T Compare_ey;                /* '<S381>/Compare' */
  boolean_T Compare_j;                 /* '<S378>/Compare' */
  boolean_T Compare_h;                 /* '<S379>/Compare' */
  boolean_T Compare_bp;                /* '<S380>/Compare' */
  boolean_T LogicalOperator2_f;        /* '<S341>/Logical Operator2' */
  boolean_T Unit_Delay_ot;             /* '<S383>/Unit_Delay' */
  boolean_T LogicalOperator1_j;        /* '<S383>/Logical Operator1' */
  boolean_T LogicalOperator_f;         /* '<S383>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S384>/Unit_Delay' */
  boolean_T LogicalOperator1_ao;       /* '<S384>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S369>/Compare' */
  boolean_T Compare_dv;                /* '<S370>/Compare' */
  boolean_T LogicalOperator1_gm;       /* '<S339>/Logical Operator1' */
  boolean_T Unit_Delay_hz;             /* '<S372>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S372>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S372>/Logical Operator' */
  boolean_T Unit_Delay_c;              /* '<S373>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S373>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S335>/Compare' */
  boolean_T FixPtRelationalOperator_d[2];/* '<S336>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_nk[33];            /* '<S355>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S350>/Logical Operator' */
  boolean_T RelationalOperator_fg;     /* '<S350>/Relational Operator' */
  boolean_T LogicalOperator3_os;       /* '<S356>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S356>/Unit_Delay' */
  boolean_T LogicalOperator_ob;        /* '<S356>/Logical Operator' */
  boolean_T LogicalOperator1_p;        /* '<S356>/Logical Operator1' */
  boolean_T f_vspd_min_delta_greater_than_t;/* '<S350>/Logical Operator2' */
  boolean_T RelationalOperator1_g4;    /* '<S350>/Relational Operator1' */
  boolean_T f_vspd_max_delta_greater_than_t;/* '<S350>/Logical Operator1' */
  boolean_T f_accel_rate_greater_than_thres;/* '<S350>/Relational Operator2' */
  boolean_T f_decel_rate_greater_than_thres;/* '<S350>/Relational Operator3' */
  boolean_T f_jerk_rate_greater_than_thresh;/* '<S350>/Relational Operator4' */
  boolean_T f_jerk_rate_greater_than_thre_n;/* '<S350>/Relational Operator5' */
  boolean_T RelationalOperator6_i;     /* '<S350>/Relational Operator6' */
  boolean_T f_distance_max_delta_greater_th;/* '<S350>/Logical Operator3' */
  boolean_T F_Inhibit_sigmoid_vector_shapin;/* '<S350>/Logical Operator4' */
  boolean_T LogicalOperator_n;         /* '<S81>/Logical Operator' */
  boolean_T LogicalOperator2_ft;       /* '<S81>/Logical Operator2' */
  boolean_T RelationalOperator3_k;     /* '<S351>/Relational Operator3' */
  boolean_T RelationalOperator1_hj;    /* '<S351>/Relational Operator1' */
  boolean_T LogicalOperator_da;        /* '<S351>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S351>/Relational Operator2' */
  boolean_T F_set_max_distance_accumulated;/* '<S351>/Logical Operator2' */
  boolean_T RelationalOperator_l;      /* '<S351>/Relational Operator' */
  boolean_T FixPtRelationalOperator_p[2];/* '<S343>/FixPt Relational Operator' */
  boolean_T LogicalOperator_gb;        /* '<S337>/Logical Operator' */
  boolean_T Unit_Delay_ls;             /* '<S345>/Unit_Delay' */
  boolean_T LogicalOperator1_lp;       /* '<S345>/Logical Operator1' */
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
  boolean_T DataTypeConversion_l1;     /* '<S277>/Data Type Conversion' */
  boolean_T Unit_Delay1_jb;            /* '<S321>/Unit_Delay1' */
  boolean_T LogicalOperator_kh;        /* '<S321>/Logical Operator' */
  boolean_T highRateOfChange;          /* '<S276>/highRateOfChange' */
  boolean_T closeToEdge;               /* '<S276>/closeToEdge' */
  boolean_T JumpNearEdge;              /* '<S276>/JumpNearEdge' */
  boolean_T Uk1_k2;                    /* '<S320>/Delay Input1' */
  boolean_T FixPtRelationalOperator_iv;/* '<S320>/FixPt Relational Operator' */
  boolean_T DataTypeConversion_dz;     /* '<S276>/Data Type Conversion' */
  boolean_T Unit_Delay1_f;             /* '<S322>/Unit_Delay1' */
  boolean_T LogicalOperator_a;         /* '<S322>/Logical Operator' */
  boolean_T Unit_Delay1_d;             /* '<S323>/Unit_Delay1' */
  boolean_T LogicalOperator_nz;        /* '<S323>/Logical Operator' */
  boolean_T RelationalOperator_l5;     /* '<S277>/Relational Operator' */
  boolean_T RelationalOperator_d;      /* '<S289>/Relational Operator' */
  boolean_T RelationalOperator5_f;     /* '<S292>/Relational Operator5' */
  boolean_T RelationalOperator4_la;    /* '<S292>/Relational Operator4' */
  boolean_T RelationalOperator2_o;     /* '<S292>/Relational Operator2' */
  boolean_T LogicalOperator1_ji;       /* '<S292>/Logical Operator1' */
  boolean_T RelationalOperator1_ie;    /* '<S292>/Relational Operator1' */
  boolean_T RelationalOperator3_p;     /* '<S292>/Relational Operator3' */
  boolean_T LogicalOperator2_o;        /* '<S292>/Logical Operator2' */
  boolean_T LogicalOperator_bs;        /* '<S292>/Logical Operator' */
  boolean_T LogicalOperator3_oi;       /* '<S292>/Logical Operator3' */
  boolean_T LowerRelop1;               /* '<S291>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S291>/UpperRelop' */
  boolean_T DataTypeConversion_dn;     /* '<S272>/Data Type Conversion' */
  boolean_T LowerRelop1_h;             /* '<S311>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S311>/UpperRelop' */
  boolean_T RelationalOperator1_ps;    /* '<S298>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S298>/Relational Operator' */
  boolean_T RelationalOperator1_f;     /* '<S306>/Relational Operator1' */
  boolean_T RelationalOperator_l4;     /* '<S306>/Relational Operator' */
  boolean_T RelationalOperator1_gr;    /* '<S296>/Relational Operator1' */
  boolean_T RelationalOperator_o;      /* '<S296>/Relational Operator' */
  boolean_T LowerRelop1_o;             /* '<S312>/LowerRelop1' */
  boolean_T UpperRelop_o;              /* '<S312>/UpperRelop' */
  boolean_T LowerRelop1_l;             /* '<S317>/LowerRelop1' */
  boolean_T UpperRelop_k;              /* '<S317>/UpperRelop' */
  boolean_T LowerRelop1_e;             /* '<S316>/LowerRelop1' */
  boolean_T UpperRelop_fl;             /* '<S316>/UpperRelop' */
  boolean_T LowerTest;                 /* '<S282>/Lower Test' */
  boolean_T UpperTest;                 /* '<S282>/Upper Test' */
  boolean_T AND_p;                     /* '<S282>/AND' */
  boolean_T LowerTest_l;               /* '<S287>/Lower Test' */
  boolean_T UpperTest_e;               /* '<S287>/Upper Test' */
  boolean_T AND_j;                     /* '<S287>/AND' */
  boolean_T RelationalOperator_oq;     /* '<S80>/Relational Operator' */
  boolean_T min_relop_k;               /* '<S347>/min_relop' */
  boolean_T LogicalOperator2_gg;       /* '<S356>/Logical Operator2' */
  boolean_T min_relop_cb;              /* '<S375>/min_relop' */
  boolean_T min_relop_fb;              /* '<S386>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S330>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S330>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S330>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S331>/Unit_Delay' */
  boolean_T LogicalOperator1_hp;       /* '<S331>/Logical Operator1' */
  boolean_T RelationalOperator1_e;     /* '<S328>/Relational Operator1' */
  boolean_T LogicalOperator3_a;        /* '<S329>/Logical Operator3' */
  boolean_T Unit_Delay_i;              /* '<S329>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S329>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S329>/Logical Operator' */
  boolean_T LogicalOperator2_j;        /* '<S329>/Logical Operator2' */
  boolean_T min_relop_d;               /* '<S332>/min_relop' */
  boolean_T RelationalOperator1_mf;    /* '<S289>/Relational Operator1' */
  boolean_T RelationalOperator1_ng;    /* '<S218>/Relational Operator1' */
  boolean_T RelationalOperator_d3;     /* '<S218>/Relational Operator' */
  boolean_T RelationalOperator1_ch;    /* '<S219>/Relational Operator1' */
  boolean_T RelationalOperator_j1;     /* '<S219>/Relational Operator' */
  boolean_T RelationalOperator1_l;     /* '<S220>/Relational Operator1' */
  boolean_T RelationalOperator_fd;     /* '<S220>/Relational Operator' */
  boolean_T Unit_Delay1_m;             /* '<S214>/Unit_Delay1' */
  boolean_T f_gpid_reset;              /* '<S214>/Logical Operator' */
  boolean_T RelationalOperator_fl;     /* '<S214>/Relational Operator' */
  boolean_T Unit_Delay_d5;             /* '<S214>/Unit_Delay' */
  boolean_T RelationalOperator1_d3;    /* '<S214>/Relational Operator1' */
  boolean_T Unit_Delay_i0;             /* '<S241>/Unit_Delay' */
  boolean_T LogicalOperator1_o;        /* '<S241>/Logical Operator1' */
  boolean_T Unit_Delay1_dw;            /* '<S261>/Unit_Delay1' */
  boolean_T LogicalOperator_at;        /* '<S261>/Logical Operator' */
  boolean_T Unit_Delay_ne;             /* '<S262>/Unit_Delay' */
  boolean_T LogicalOperator1_k;        /* '<S262>/Logical Operator1' */
  boolean_T Compare_go;                /* '<S246>/Compare' */
  boolean_T RelationalOperator_a;      /* '<S206>/Relational Operator' */
  boolean_T Compare_pj;                /* '<S245>/Compare' */
  boolean_T min_relop_cbm;             /* '<S264>/min_relop' */
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
  boolean_T min_relop_g;               /* '<S190>/min_relop' */
  boolean_T F_Brake_hold_conditions_met;/* '<S177>/Logical Operator2' */
  boolean_T Unit_Delay_h0;             /* '<S181>/Unit_Delay' */
  boolean_T LogicalOperator1_ou;       /* '<S181>/Logical Operator1' */
  boolean_T min_relop_i;               /* '<S183>/min_relop' */
  boolean_T Unit_Delay_m1;             /* '<S147>/Unit_Delay' */
  boolean_T LogicalOperator1_pf;       /* '<S147>/Logical Operator1' */
  boolean_T Unit_Delay1_jk;            /* '<S167>/Unit_Delay1' */
  boolean_T LogicalOperator_lo;        /* '<S167>/Logical Operator' */
  boolean_T Unit_Delay_li;             /* '<S168>/Unit_Delay' */
  boolean_T LogicalOperator1_oy;       /* '<S168>/Logical Operator1' */
  boolean_T Compare_ni;                /* '<S152>/Compare' */
  boolean_T Compare_dl;                /* '<S151>/Compare' */
  boolean_T min_relop_a;               /* '<S170>/min_relop' */
  boolean_T RelationalOperator1_k;     /* '<S173>/Relational Operator1' */
  boolean_T RelationalOperator_m1;     /* '<S173>/Relational Operator' */
  boolean_T Unit_Delay_nm;             /* '<S109>/Unit_Delay' */
  boolean_T LogicalOperator1_ax;       /* '<S109>/Logical Operator1' */
  boolean_T Unit_Delay1_iq;            /* '<S129>/Unit_Delay1' */
  boolean_T LogicalOperator_m;         /* '<S129>/Logical Operator' */
  boolean_T Unit_Delay_nl;             /* '<S130>/Unit_Delay' */
  boolean_T LogicalOperator1_mk;       /* '<S130>/Logical Operator1' */
  boolean_T Compare_aa;                /* '<S114>/Compare' */
  boolean_T Compare_jrp;               /* '<S113>/Compare' */
  boolean_T min_relop_p;               /* '<S132>/min_relop' */
  boolean_T RelationalOperator1_gi;    /* '<S135>/Relational Operator1' */
  boolean_T RelationalOperator_b;      /* '<S135>/Relational Operator' */
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
  boolean_T Operator_oua;              /* '<S50>/Operator' */
  boolean_T Reshape_i[2];              /* '<S42>/Reshape' */
  boolean_T Unit_Delay_m0;             /* '<S42>/Unit_Delay' */
  boolean_T Selector_g;                /* '<S42>/Selector' */
  boolean_T Operator_dh;               /* '<S44>/Operator' */
  boolean_T Reshape_a5[2];             /* '<S36>/Reshape' */
  boolean_T Unit_Delay_g;              /* '<S36>/Unit_Delay' */
  boolean_T Selector_b;                /* '<S36>/Selector' */
  boolean_T Operator_bsv;              /* '<S38>/Operator' */
  boolean_T Reshape_g[2];              /* '<S30>/Reshape' */
  boolean_T Unit_Delay_h4;             /* '<S30>/Unit_Delay' */
  boolean_T Selector_da;               /* '<S30>/Selector' */
  boolean_T Operator_f5;               /* '<S32>/Operator' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_pt;/* '<S1062>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1061>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1061>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_i;/* '<S1061>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S1061>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_j_T If_Then_Else_nq;/* '<S1000>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_ib;/* '<S999>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m3;/* '<S824>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m;/* '<S819>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b;/* '<S818>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_o;/* '<S749>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_c;/* '<S749>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_i;/* '<S749>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n;/* '<S749>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_f;/* '<S767>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S802>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S802>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_h;/* '<S766>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_nn;/* '<S794>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S794>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_n;/* '<S765>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h;/* '<S786>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_e;/* '<S786>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_p;/* '<S764>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_e;/* '<S778>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_l;/* '<S778>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S763>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_n;/* '<S770>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_d;/* '<S770>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S747>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S747>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_h;/* '<S747>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S461>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S384>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S341>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S373>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S339>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S360>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_j;/* '<S351>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S354>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S345>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S344>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S331>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S323>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S322>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b3;/* '<S321>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S306>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m0;/* '<S306>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_mf_T If_Then_Else_c;/* '<S304>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_m;/* '<S275>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_km;/* '<S298>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S298>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S296>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pe;/* '<S296>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m1;/* '<S275>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_nh;/* '<S274>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h3;/* '<S267>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pi;/* '<S267>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_cp;/* '<S262>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k2;/* '<S261>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S238>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S238>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_a;/* '<S213>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_dz;/* '<S220>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_br;/* '<S220>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_kg;/* '<S219>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bo;/* '<S219>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_hx;/* '<S218>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ct;/* '<S218>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nr;/* '<S222>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ga;/* '<S197>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ep;/* '<S188>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_o5;/* '<S178>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_il;/* '<S178>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nz;/* '<S181>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_mf;/* '<S177>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gj;/* '<S177>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_m_T If_Then_Else_la;/* '<S98>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_g;/* '<S173>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fo;/* '<S173>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iy;/* '<S168>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bc;/* '<S167>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S144>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S144>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_b;/* '<S135>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nj;/* '<S135>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bg;/* '<S130>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ly;/* '<S129>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S106>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S106>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_p;/* '<S90>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lw;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_o;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S781>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_h;     /* '<S773>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S797>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_c;     /* '<S789>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S818>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S819>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_hb;    /* '<S817>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S816>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_ea;    /* '<S805>/FixPt Unit Delay1' */
  real_T Unit_Delay_140_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_139_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T UnitDelay_DSTATE;             /* '<S396>/Unit Delay' */
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
  real_T Unit_Delay_119_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_12_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_120_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_121_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_122_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_123_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_124_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_125_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_128_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_129_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_13_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_130_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_131_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_132_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_133_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_134_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_137_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_138_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_14_DSTATE;         /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_141_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_142_DSTATE;        /* '<S3>/Unit_Delay' */
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
  real_T UnitDelay1_DSTATE;            /* '<S741>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_p;          /* '<S742>/Unit Delay1' */
  real_T Unit_Delay_DSTATE;            /* '<S913>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_b;          /* '<S832>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S827>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_o;          /* '<S646>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_d;          /* '<S518>/Unit_Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S389>/Unit Delay1' */
  real_T LongitudnalPosition_DSTATE;   /* '<S390>/LongitudnalPosition' */
  real_T VehHeading_DSTATE;            /* '<S390>/VehHeading' */
  real_T XPosition_DSTATE;             /* '<S390>/XPosition' */
  real_T YPosition_DSTATE;             /* '<S390>/YPosition' */
  real_T Unit_Delay_DSTATE_e;          /* '<S341>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hj;    /* '<S388>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_m;          /* '<S385>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_g;          /* '<S339>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hq;    /* '<S377>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_bw;         /* '<S374>/Unit_Delay' */
  real_T DelayInput1_DSTATE[2];        /* '<S336>/Delay Input1' */
  real_T Unit_Delay_DSTATE_bwg;        /* '<S354>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_li;    /* '<S365>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_p;          /* '<S363>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S343>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_ej;    /* '<S349>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S344>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S344>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S344>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S342>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S197>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S196>/UD' */
  real_T Unit_Delay2_DSTATE_dv;        /* '<S321>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S322>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_p;         /* '<S323>/Unit_Delay2' */
  real_T UnitDelay_DSTATE_m;           /* '<S289>/Unit Delay' */
  real_T UnitDelay_DSTATE_m0;          /* '<S290>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S290>/Unit Delay1' */
  real_T DelayInput2_DSTATE;           /* '<S302>/Delay Input2' */
  real_T Integrator_DSTATE;            /* '<S301>/Integrator' */
  real_T Filter_DSTATE;                /* '<S301>/Filter' */
  real_T DelayInput_DSTATE;            /* '<S305>/Delay Input' */
  real_T DelayOutput_DSTATE;           /* '<S305>/Delay Output' */
  real_T DelayInput2_DSTATE_a;         /* '<S303>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S295>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE_l;         /* '<S315>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S80>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_e;           /* '<S80>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S367>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g0;    /* '<S368>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S362>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S334>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a;     /* '<S266>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_m;         /* '<S261>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_fz;         /* '<S216>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_ob;         /* '<S178>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_d;     /* '<S192>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_om;         /* '<S189>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_c;          /* '<S177>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_b;     /* '<S185>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_oj;         /* '<S182>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_eu;         /* '<S140>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g2;    /* '<S172>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_c;         /* '<S167>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_h;          /* '<S139>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_dc;         /* '<S105>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g1;    /* '<S134>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_dy;        /* '<S129>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_i;          /* '<S104>/Unit_Delay' */
  volatile real_T RateTransition_Buffer0;/* '<S412>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S412>/Rate Transition' */
  real_T TmpRTBAtANDInport1_Buffer0;   /* synthesized block */
  real_T Subtract_DWORK1;              /* '<S736>/Subtract' */
  real_T TmpRTBAtSignalConversion1Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion3Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion2Inport;/* synthesized block */
  real_T TmpRTBAtrad2deg1Inport1_Buffer0;/* synthesized block */
  real_T TmpRTBAtsignCurveOffsetInport1_;/* synthesized block */
  real_T TmpRTBAtAdd2Inport2_Buffer0;  /* synthesized block */
  real_T PrevY;                        /* '<S304>/Limit Rate Limiter' */
  real_T TimeFinal;                    /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityInitialLimited;       /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityFinalLimited;         /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationInitialLimited;   /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationFinalLimited;     /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk56;                       /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk12;                       /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T a;                            /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T b;                            /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T c;                            /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Acceleration34;               /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* '<S205>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV; /* '<S205>/Relay_control_state_machine' */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* '<S205>/Relay_control_state_machine' */
  real_T MABX_RELAY_ON_DELAY_SECS_APV; /* '<S205>/Relay_control_state_machine' */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T IGN_RELAY_ON_DELAY_SECS_APV;  /* '<S205>/Relay_control_state_machine' */
  void *dsa_tcpip_setup_PWORK;         /* '<S393>/dsa_tcpip_setup' */
  void *TCPIP_Com_PWORK;               /* '<S394>/TCPIP_Com' */
  void* Assertion_slioAccessor;        /* '<S768>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S776>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S784>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S792>/Assertion' */
  void* Assertion_slioAccessor_ep;     /* '<S800>/Assertion' */
  void* Assertion_slioAccessor_c;      /* '<S825>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S279>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S284>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S347>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S375>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S386>/Assertion' */
  void* Assertion_slioAccessor_na;     /* '<S332>/Assertion' */
  void* Assertion_slioAccessor_eg;     /* '<S264>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S190>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S183>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S170>/Assertion' */
  void* Assertion_slioAccessor_bo;     /* '<S132>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S279>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S284>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_c;         /* '<S1035>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j;         /* '<S1020>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_n;         /* '<S992>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j1;        /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_126_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_127_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S392>/Heartbeat' */
  int32_T clockTickCounter_j;          /* '<S1063>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S644>/Add' */
  uint32_T Subtract_DWORK1_k;          /* '<S1035>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S1016>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S205>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S393>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S455>/S-Function1' */
  int_T SFunction1_IWORK_a[2];         /* '<S456>/S-Function1' */
  int_T SFunction1_IWORK_g[2];         /* '<S457>/S-Function1' */
  int_T SFunction1_IWORK_d[2];         /* '<S458>/S-Function1' */
  int_T SFunction1_IWORK_c[2];         /* '<S459>/S-Function1' */
  int_T SFunction1_IWORK_l[2];         /* '<S460>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S404>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S781>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S773>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S797>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S789>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_n;    /* '<S817>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_m;    /* '<S816>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S805>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_h;         /* '<S844>/Unit Delay1' */
  uint8_T Unit_Delay_136_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_d;    /* '<S827>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_pd[17];     /* '<S643>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_ek[39];     /* '<S515>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_aq;   /* '<S388>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ip;   /* '<S377>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S365>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_cn;   /* '<S349>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S367>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S368>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ji;   /* '<S334>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S134>/FixPt Unit Delay2' */
  boolean_T Unit_Delay_DSTATE_gn;      /* '<S751>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S818>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_e;      /* '<S751>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_ef;     /* '<S819>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S644>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_k;       /* '<S644>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_of;      /* '<S650>/Unit_Delay' */
  boolean_T Unit_Delay_79_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_82_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S398>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S844>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S844>/Unit Delay3' */
  boolean_T Unit_Delay_117_DSTATE;     /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_118_DSTATE;     /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_135_DSTATE;     /* '<S3>/Unit_Delay' */
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
  boolean_T Unit_Delay2_DSTATE_f;      /* '<S644>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_g;      /* '<S644>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_fu;      /* '<S651>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S740>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_jd;       /* '<S736>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_nn;     /* '<S739>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_pw;       /* '<S741>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_i;        /* '<S742>/Unit Delay' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l;       /* '<S1034>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ly;      /* '<S996>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_a;       /* '<S1019>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_o4;      /* '<S991>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_po;      /* '<S823>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_bq;      /* '<S824>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_c1;      /* '<S822>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S383>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S384>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S372>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S373>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ko;      /* '<S356>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_la;      /* '<S345>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eu4;     /* '<S101>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_d;      /* '<S197>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_db;     /* '<S321>/Unit_Delay1' */
  boolean_T DelayInput1_DSTATE_f0;     /* '<S320>/Delay Input1' */
  boolean_T Unit_Delay1_DSTATE_a;      /* '<S322>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p;      /* '<S323>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_bd;      /* '<S330>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jt;      /* '<S331>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ll;      /* '<S329>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_p1;     /* '<S214>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_lq;      /* '<S214>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_be;      /* '<S241>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_h;      /* '<S261>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_fi;      /* '<S262>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ae;      /* '<S188>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_or;      /* '<S181>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_n;       /* '<S147>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_f;      /* '<S167>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_g4;      /* '<S168>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_omj;     /* '<S109>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_b;      /* '<S129>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_h4;      /* '<S130>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l5;      /* '<S60>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_i5;      /* '<S54>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mq;      /* '<S48>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_h41;     /* '<S42>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_je;      /* '<S36>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_f1;      /* '<S30>/Unit_Delay' */
  volatile int8_T RateTransition_write_buf;/* '<S412>/Rate Transition' */
  volatile int8_T RateTransition_read_buf;/* '<S412>/Rate Transition' */
  volatile int8_T RateTransition_last_buf_wr;/* '<S412>/Rate Transition' */
  int8_T LongitudnalPosition_PrevResetSt;/* '<S390>/LongitudnalPosition' */
  int8_T VehHeading_PrevResetState;    /* '<S390>/VehHeading' */
  int8_T XPosition_PrevResetState;     /* '<S390>/XPosition' */
  int8_T YPosition_PrevResetState;     /* '<S390>/YPosition' */
  int8_T Integrator_PrevResetState;    /* '<S301>/Integrator' */
  int8_T Filter_PrevResetState;        /* '<S301>/Filter' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S295>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_e;/* '<S80>/Discrete-Time Integrator' */
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S844>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S844>/Chart' */
  uint8_T temporalCounter_i1_j;        /* '<S844>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S830>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S830>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S748>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S748>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S748>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S748>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S748>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_e;       /* '<S748>/Health State Machine PWM Sensor 1' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S295>/Discrete-Time Integrator' */
  uint8_T is_active_c12_SUB_L4_Task_10ms_;/* '<S277>/Chart' */
  uint8_T is_c12_SUB_L4_Task_10ms_SUB_STE;/* '<S277>/Chart' */
  uint8_T is_active_c6_SUB_L4_Task_10ms_S;/* '<S205>/Relay_control_state_machine' */
  uint8_T is_c6_SUB_L4_Task_10ms_SUB_STAT;/* '<S205>/Relay_control_state_machine' */
  uint8_T is_POWER_UP_ROUTINE;         /* '<S205>/Relay_control_state_machine' */
  uint8_T is_POWER_DOWN_ROUTINE;       /* '<S205>/Relay_control_state_machine' */
  uint8_T is_active_c19_SUB_L4_Task_10ms_;/* '<S79>/Chart' */
  uint8_T is_c19_SUB_L4_Task_10ms_SUB_STA;/* '<S79>/Chart' */
  boolean_T AlternateMethod;           /* '<S338>/VehicleSpeedSetpointDynamicCalculation' */
  boolean_T Slew_at_event_MODE;        /* '<S737>/Slew_at_event' */
  boolean_T Slew_at_event_MODE_d;      /* '<S277>/Slew_at_event' */
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
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1048>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_c;/* '<S1047>/CAN_TYPE1_TX_M1_C1' */
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

/* Parameters for system: '<S962>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S977>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1076>/Constant'
                                        */
  real_T TransferFcnLeadorLag_ICPrevInpu;/* Mask Parameter: TransferFcnLeadorLag_ICPrevInpu
                                          * Referenced by: '<S305>/Delay Input'
                                          */
  real_T TransferFcnLeadorLag_ICPrevOutp;/* Mask Parameter: TransferFcnLeadorLag_ICPrevOutp
                                          * Referenced by: '<S305>/Delay Output'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S196>/UD'
                                          */
  real_T PIDController_LowerSaturationLi;/* Mask Parameter: PIDController_LowerSaturationLi
                                          * Referenced by: '<S301>/Saturate'
                                          */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S301>/Filter Coefficient'
                                        */
  real_T WrapToZero1_Threshold;        /* Mask Parameter: WrapToZero1_Threshold
                                        * Referenced by: '<S922>/FixPt Switch'
                                        */
  real_T PIDController_UpperSaturationLi;/* Mask Parameter: PIDController_UpperSaturationLi
                                          * Referenced by: '<S301>/Saturate'
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
                                        * Referenced by: '<S381>/Constant'
                                        */
  real_T CompareToConstant10_const;    /* Mask Parameter: CompareToConstant10_const
                                        * Referenced by: '<S378>/Constant'
                                        */
  real_T CompareToConstant11_const;    /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S379>/Constant'
                                        */
  real_T CompareToConstant12_const;    /* Mask Parameter: CompareToConstant12_const
                                        * Referenced by: '<S380>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S369>/Constant'
                                        */
  real_T CompareToConstant8_const;     /* Mask Parameter: CompareToConstant8_const
                                        * Referenced by: '<S370>/Constant'
                                        */
  real_T CompareToConstant_const_g;    /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S313>/Constant'
                                        */
  real_T CompareToConstant_const_k;    /* Mask Parameter: CompareToConstant_const_k
                                        * Referenced by: '<S402>/Constant'
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
                                        * Referenced by: '<S332>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_o;  /* Mask Parameter: CheckStaticLowerBound_min_o
                                        * Referenced by: '<S347>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_h;  /* Mask Parameter: CheckStaticLowerBound_min_h
                                        * Referenced by: '<S375>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_nz; /* Mask Parameter: CheckStaticLowerBound_min_nz
                                        * Referenced by: '<S386>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_m;  /* Mask Parameter: CheckStaticLowerBound_min_m
                                        * Referenced by: '<S825>/min_val'
                                        */
  real_T DetectChange1_vinit;          /* Mask Parameter: DetectChange1_vinit
                                        * Referenced by: '<S336>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_n;        /* Mask Parameter: DetectChange1_vinit_n
                                        * Referenced by: '<S343>/Delay Input1'
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
  ENUM_SIGNAL_HEALTH_T CompareToConstant_const_o;/* Mask Parameter: CompareToConstant_const_o
                                                  * Referenced by: '<S759>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_m;/* Mask Parameter: CompareToConstant2_const_m
                                                   * Referenced by: '<S760>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_f;/* Mask Parameter: CompareToConstant3_const_f
                                                   * Referenced by: '<S755>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S811>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S810>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_o;/* Mask Parameter: CompareToConstant3_const_o
                                                   * Referenced by: '<S809>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_f;/* Mask Parameter: CompareToConstant1_const_f
                                                   * Referenced by: '<S808>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_d;/* Mask Parameter: CompareToConstant1_const_d
                                                   * Referenced by: '<S754>/Constant'
                                                   */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_j;/* Mask Parameter: CompareToConstant_const_j
                                                            * Referenced by: '<S1002>/Constant'
                                                            */
  real32_T IntervalTest_lowlimit;      /* Mask Parameter: IntervalTest_lowlimit
                                        * Referenced by: '<S282>/Lower Limit'
                                        */
  real32_T IntervalTest_lowlimit_k;    /* Mask Parameter: IntervalTest_lowlimit_k
                                        * Referenced by: '<S287>/Lower Limit'
                                        */
  real32_T IntervalTest_uplimit;       /* Mask Parameter: IntervalTest_uplimit
                                        * Referenced by: '<S282>/Upper Limit'
                                        */
  real32_T IntervalTest_uplimit_e;     /* Mask Parameter: IntervalTest_uplimit_e
                                        * Referenced by: '<S287>/Upper Limit'
                                        */
  uint32_T Repeating_Sequence_Stair_OutVal[8];/* Mask Parameter: Repeating_Sequence_Stair_OutVal
                                               * Referenced by: '<S1034>/Constant'
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
                                        * Referenced by: '<S320>/Delay Input1'
                                        */
  boolean_T DetectRisePositive1_vinit; /* Mask Parameter: DetectRisePositive1_vinit
                                        * Referenced by: '<S398>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                        * Referenced by: '<S740>/Delay Input1'
                                        */
  boolean_T DetectFallNegative_vinit;  /* Mask Parameter: DetectFallNegative_vinit
                                        * Referenced by: '<S739>/Delay Input1'
                                        */
  uint8_T Operator_BitMask;            /* Mask Parameter: Operator_BitMask
                                        * Referenced by: '<S851>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S848>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S849>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S850>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S852>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S853>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S859>/Operator'
                                        */
  uint8_T Operator_BitMask_ps;         /* Mask Parameter: Operator_BitMask_ps
                                        * Referenced by: '<S856>/Operator'
                                        */
  uint8_T Operator_BitMask_ft;         /* Mask Parameter: Operator_BitMask_ft
                                        * Referenced by: '<S857>/Operator'
                                        */
  uint8_T Operator_BitMask_i5;         /* Mask Parameter: Operator_BitMask_i5
                                        * Referenced by: '<S858>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S860>/Operator'
                                        */
  uint8_T Operator_BitMask_fb;         /* Mask Parameter: Operator_BitMask_fb
                                        * Referenced by: '<S861>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S903>/Operator'
                                        */
  uint8_T Operator_BitMask_p3;         /* Mask Parameter: Operator_BitMask_p3
                                        * Referenced by: '<S905>/Operator'
                                        */
  uint8_T Operator_BitMask_eq;         /* Mask Parameter: Operator_BitMask_eq
                                        * Referenced by: '<S906>/Operator'
                                        */
  uint8_T Operator_BitMask_mm;         /* Mask Parameter: Operator_BitMask_mm
                                        * Referenced by: '<S904>/Operator'
                                        */
  uint8_T Operator_BitMask_ed;         /* Mask Parameter: Operator_BitMask_ed
                                        * Referenced by: '<S907>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S908>/Operator'
                                        */
  uint8_T Operator_BitMask_eds;        /* Mask Parameter: Operator_BitMask_eds
                                        * Referenced by: '<S881>/Operator'
                                        */
  uint8_T Operator_BitMask_ci;         /* Mask Parameter: Operator_BitMask_ci
                                        * Referenced by: '<S886>/Operator'
                                        */
  uint8_T Operator_BitMask_n;          /* Mask Parameter: Operator_BitMask_n
                                        * Referenced by: '<S882>/Operator'
                                        */
  uint8_T Operator_BitMask_ftl;        /* Mask Parameter: Operator_BitMask_ftl
                                        * Referenced by: '<S887>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S888>/Operator'
                                        */
  uint8_T Operator_BitMask_ov;         /* Mask Parameter: Operator_BitMask_ov
                                        * Referenced by: '<S885>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S933>/Operator'
                                        */
  uint8_T Operator_BitMask_j4;         /* Mask Parameter: Operator_BitMask_j4
                                        * Referenced by: '<S930>/Operator'
                                        */
  uint8_T Operator_BitMask_cr;         /* Mask Parameter: Operator_BitMask_cr
                                        * Referenced by: '<S931>/Operator'
                                        */
  uint8_T Operator_BitMask_ip;         /* Mask Parameter: Operator_BitMask_ip
                                        * Referenced by: '<S932>/Operator'
                                        */
  uint8_T Operator_BitMask_fm;         /* Mask Parameter: Operator_BitMask_fm
                                        * Referenced by: '<S934>/Operator'
                                        */
  uint8_T Operator_BitMask_pw;         /* Mask Parameter: Operator_BitMask_pw
                                        * Referenced by: '<S935>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S941>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S942>/Operator'
                                        */
  uint8_T Operator_BitMask_cm;         /* Mask Parameter: Operator_BitMask_cm
                                        * Referenced by: '<S938>/Operator'
                                        */
  uint8_T Operator_BitMask_ec;         /* Mask Parameter: Operator_BitMask_ec
                                        * Referenced by: '<S939>/Operator'
                                        */
  uint8_T Operator_BitMask_az;         /* Mask Parameter: Operator_BitMask_az
                                        * Referenced by: '<S940>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S943>/Operator'
                                        */
  uint8_T Operator_BitMask_mmr;        /* Mask Parameter: Operator_BitMask_mmr
                                        * Referenced by: '<S956>/Operator'
                                        */
  uint8_T Operator_BitMask_hm;         /* Mask Parameter: Operator_BitMask_hm
                                        * Referenced by: '<S952>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S953>/Operator'
                                        */
  uint8_T Operator_BitMask_eh;         /* Mask Parameter: Operator_BitMask_eh
                                        * Referenced by: '<S954>/Operator'
                                        */
  uint8_T Operator_BitMask_bv;         /* Mask Parameter: Operator_BitMask_bv
                                        * Referenced by: '<S955>/Operator'
                                        */
  uint8_T Operator_BitMask_gv;         /* Mask Parameter: Operator_BitMask_gv
                                        * Referenced by: '<S957>/Operator'
                                        */
  uint8_T Operator_BitMask_pz;         /* Mask Parameter: Operator_BitMask_pz
                                        * Referenced by: '<S1001>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_i0;         /* Mask Parameter: Operator_BitMask_i0
                                        * Referenced by: '<S1012>/Operator'
                                        */
  uint8_T Operator_BitMask_be;         /* Mask Parameter: Operator_BitMask_be
                                        * Referenced by: '<S1007>/Operator'
                                        */
  uint8_T Operator_BitMask_im;         /* Mask Parameter: Operator_BitMask_im
                                        * Referenced by: '<S1008>/Operator'
                                        */
  uint8_T Operator_BitMask_e4;         /* Mask Parameter: Operator_BitMask_e4
                                        * Referenced by: '<S1009>/Operator'
                                        */
  uint8_T Operator_BitMask_eg;         /* Mask Parameter: Operator_BitMask_eg
                                        * Referenced by: '<S1010>/Operator'
                                        */
  uint8_T Operator_BitMask_k2;         /* Mask Parameter: Operator_BitMask_k2
                                        * Referenced by: '<S1011>/Operator'
                                        */
  uint8_T Operator_BitMask_ly;         /* Mask Parameter: Operator_BitMask_ly
                                        * Referenced by: '<S828>/Operator'
                                        */
  uint8_T Operator_BitMask_e1;         /* Mask Parameter: Operator_BitMask_e1
                                        * Referenced by: '<S829>/Operator'
                                        */
  uint8_T Operator_BitMask_nm;         /* Mask Parameter: Operator_BitMask_nm
                                        * Referenced by: '<S667>/Operator'
                                        */
  uint8_T Operator_BitMask_dv;         /* Mask Parameter: Operator_BitMask_dv
                                        * Referenced by: '<S666>/Operator'
                                        */
  uint8_T Operator_BitMask_bt;         /* Mask Parameter: Operator_BitMask_bt
                                        * Referenced by: '<S679>/Operator'
                                        */
  uint8_T Operator_BitMask_fg;         /* Mask Parameter: Operator_BitMask_fg
                                        * Referenced by: '<S678>/Operator'
                                        */
  uint8_T Operator_BitMask_bz;         /* Mask Parameter: Operator_BitMask_bz
                                        * Referenced by: '<S680>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_Out_lg[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_lg
                                               * Referenced by: '<S991>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_Out_ee[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_ee
                                               * Referenced by: '<S1019>/Constant'
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
  real_T SpeedSaturation_UpperSat;     /* Expression: 255
                                        * Referenced by: '<S274>/Speed Saturation'
                                        */
  real_T SpeedSaturation_LowerSat;     /* Expression: 7.5
                                        * Referenced by: '<S274>/Speed Saturation'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S274>/km//h to m//s'
                                        */
  real_T ErrorSaturation_UpperSat;     /* Expression: pi/2
                                        * Referenced by: '<S274>/Error Saturation'
                                        */
  real_T ErrorSaturation_LowerSat;     /* Expression: -pi/2
                                        * Referenced by: '<S274>/Error Saturation'
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
                                        * Referenced by: '<S274>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_k[72]; /* Expression: [-800.0200195
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
  real_T deg2rad_Gain_n;               /* Expression: pi/180
                                        * Referenced by: '<S274>/deg2rad'
                                        */
  real_T invert_Gain;                  /* Expression: -1
                                        * Referenced by: '<S274>/invert'
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
                                        * Referenced by: '<S289>/Constant'
                                        */
  real_T Constant2_Value_hu;           /* Expression: -1
                                        * Referenced by: '<S289>/Constant2'
                                        */
  real_T Constant3_Value_pw;           /* Expression: 1
                                        * Referenced by: '<S289>/Constant3'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S273>/Constant9'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S292>/Constant'
                                        */
  real_T zero1_Value;                  /* Expression: 0
                                        * Referenced by: '<S276>/zero1'
                                        */
  real_T correction_Value;             /* Expression: 0.5
                                        * Referenced by: '<S276>/correction'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S277>/Constant1'
                                        */
  real_T Out_Y0;                       /* Computed Parameter: Out_Y0
                                        * Referenced by: '<S328>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_f;/* Expression: 0.0
                                          * Referenced by: '<S334>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_ah;           /* Expression: 1
                                        * Referenced by: '<S328>/Constant1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 0.5
                                        * Referenced by: '<S366>/Gain'
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
                                        * Referenced by: '<S341>/Unit_Delay'
                                        */
  real_T STABILITY_ACTIVE_VSPD_TARGET_AP;/* Expression: 0
                                          * Referenced by: '<S341>/STABILITY_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_n;            /* Expression: 255
                                        * Referenced by: '<S341>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_l;/* Expression: 0.0
                                          * Referenced by: '<S388>/FixPt Unit Delay1'
                                          */
  real_T STABILITY_CTRL_SLEW_INC_APV_Val;/* Expression: 3
                                          * Referenced by: '<S341>/STABILITY_CTRL_SLEW_INC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_hae;/* Expression: 0
                                          * Referenced by: '<S385>/Unit_Delay'
                                          */
  real_T STABILITY_CTRL_SLEW_DEC_APV_Val;/* Expression: 5
                                          * Referenced by: '<S341>/STABILITY_CTRL_SLEW_DEC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_fb;/* Expression: 0
                                         * Referenced by: '<S339>/Unit_Delay'
                                         */
  real_T FCW_ACTIVE_VSPD_TARGET_APV_Valu;/* Expression: 0
                                          * Referenced by: '<S339>/FCW_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_b;            /* Expression: 255
                                        * Referenced by: '<S339>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_d;/* Expression: 0.0
                                          * Referenced by: '<S377>/FixPt Unit Delay1'
                                          */
  real_T FCW_CTRL_SLEW_INC_APV_Value;  /* Expression: 1
                                        * Referenced by: '<S339>/FCW_CTRL_SLEW_INC_APV'
                                        */
  real_T Unit_Delay_InitialCondition_c;/* Expression: 0
                                        * Referenced by: '<S374>/Unit_Delay'
                                        */
  real_T FCW_CTRL_SLEW_DEC_APV_Value;  /* Expression: 5000
                                        * Referenced by: '<S339>/FCW_CTRL_SLEW_DEC_APV'
                                        */
  real_T TmpRTBAtSignalConversion3Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S335>/Constant'
                                        */
  real_T TmpRTBAtSignalConversion2Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation5_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S338>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S338>/Saturation5'
                                        */
  real_T MIN_VSPD_SIGMOID_INITIAL_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S338>/MIN_VSPD_SIGMOID_INITIAL_KPH_APV'
                                          */
  real_T Gain1_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S338>/Gain1'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S338>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S338>/Saturation4'
                                        */
  real_T MIN_VSPD_SIGMOID_FINAL_KPH_APV_;/* Expression: 0
                                          * Referenced by: '<S338>/MIN_VSPD_SIGMOID_FINAL_KPH_APV'
                                          */
  real_T Gain2_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S338>/Gain2'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S338>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S338>/Saturation6'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S338>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S338>/Saturation7'
                                        */
  real_T VEH_JERK_INITIAL_APV_Value;   /* Expression: 0.4
                                        * Referenced by: '<S81>/VEH_JERK_INITIAL_APV'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S338>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: 0.001
                                        * Referenced by: '<S338>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S338>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0.001
                                        * Referenced by: '<S338>/Saturation2'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: 3.6
                                        * Referenced by: '<S338>/Gain3'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S355>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition_e;/* Expression: 0
                                        * Referenced by: '<S354>/Unit_Delay'
                                        */
  real_T MIN_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S350>/MIN_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T MAX_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S350>/MAX_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T ACCEL_RATE_ABS_MAX_THRESHOLD_MS;/* Expression: 5
                                          * Referenced by: '<S350>/ACCEL_RATE_ABS_MAX_THRESHOLD_MS2_APV'
                                          */
  real_T ACCEL_RATE_ABS_MIN_THRESHOLD_MS;/* Expression: -5
                                          * Referenced by: '<S350>/ACCEL_RATE_ABS_MIN_THRESHOLD_MS2_APV'
                                          */
  real_T JERK_RATE_ABS_MAX_THRESHOLD_MS3;/* Expression: 5
                                          * Referenced by: '<S350>/JERK_RATE_ABS_MAX_THRESHOLD_MS3_APV'
                                          */
  real_T JERK_RATE_ABS_MIN_THRESHOLD_MS3;/* Expression: -5
                                          * Referenced by: '<S350>/JERK_RATE_ABS_MIN_THRESHOLD_MS3_APV'
                                          */
  real_T MAX_DISTANCE_DELTA_THRESHOLD_M_;/* Expression: 0.5
                                          * Referenced by: '<S350>/MAX_DISTANCE_DELTA_THRESHOLD_M_APV'
                                          */
  real_T CPV1_Value_i;                 /* Expression: 0.1
                                        * Referenced by: '<S351>/CPV1'
                                        */
  real_T CPV_Value_h;                  /* Expression: 0
                                        * Referenced by: '<S360>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_h;/* Expression: 0.0
                                          * Referenced by: '<S365>/FixPt Unit Delay1'
                                          */
  real_T CPV1_Value_e;                 /* Expression: 1
                                        * Referenced by: '<S359>/CPV1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S351>/Gain1'
                                        */
  real_T Unit_Delay_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S363>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_m;/* Expression: 0.0
                                          * Referenced by: '<S349>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_1_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S344>/Unit_Delay'
                                        */
  real_T Unit_Delay_2_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S344>/Unit_Delay'
                                        */
  real_T Unit_Delay_3_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S344>/Unit_Delay'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 1/3.6
                                        * Referenced by: '<S344>/Gain2'
                                        */
  real_T Saturation4_UpperSat_a;       /* Expression: 255
                                        * Referenced by: '<S344>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_e;       /* Expression: 0.001
                                        * Referenced by: '<S344>/Saturation4'
                                        */
  real_T Unit_Delay_InitialCondition_e2;/* Expression: 0
                                         * Referenced by: '<S342>/Unit_Delay'
                                         */
  real_T Saturation1_UpperSat_j;       /* Expression: Inf
                                        * Referenced by: '<S344>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0.001
                                        * Referenced by: '<S344>/Saturation1'
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
                                        * Referenced by: '<S279>/IV'
                                        */
  real_T Constant1_Value_i;            /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S271>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.1
                                        * Referenced by: '<S271>/Constant'
                                        */
  real_T timeConstant1_Value;          /* Expression: .01
                                        * Referenced by: '<S276>/timeConstant1'
                                        */
  real_T timeConstant_Value;           /* Expression: 1.0
                                        * Referenced by: '<S276>/timeConstant'
                                        */
  real_T Saturation_UpperSat_o1;       /* Expression: Inf
                                        * Referenced by: '<S321>/Saturation'
                                        */
  real_T Saturation_LowerSat_p2;       /* Expression: 0.0001
                                        * Referenced by: '<S321>/Saturation'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S321>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S321>/Unit_Delay2'
                                         */
  real_T rateOfChangeThreshold_Value;  /* Expression: 5.75
                                        * Referenced by: '<S276>/rateOfChangeThreshold'
                                        */
  real_T closeToLaneEdgeThreshold_Value;/* Expression: 4.0
                                         * Referenced by: '<S276>/closeToLaneEdgeThreshold'
                                         */
  real_T zero2_Value;                  /* Expression: 0
                                        * Referenced by: '<S276>/zero2'
                                        */
  real_T timeConstant3_Value;          /* Expression: .01
                                        * Referenced by: '<S276>/timeConstant3'
                                        */
  real_T timeConstant2_Value;          /* Expression: 3
                                        * Referenced by: '<S276>/timeConstant2'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: Inf
                                        * Referenced by: '<S322>/Saturation'
                                        */
  real_T Saturation_LowerSat_ph;       /* Expression: 0.0001
                                        * Referenced by: '<S322>/Saturation'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S322>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ji;/* Expression: 0
                                          * Referenced by: '<S322>/Unit_Delay2'
                                          */
  real_T timeConstant5_Value;          /* Expression: .01
                                        * Referenced by: '<S276>/timeConstant5'
                                        */
  real_T timeConstant4_Value;          /* Expression: .5
                                        * Referenced by: '<S276>/timeConstant4'
                                        */
  real_T Saturation_UpperSat_ok;       /* Expression: Inf
                                        * Referenced by: '<S323>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0.0001
                                        * Referenced by: '<S323>/Saturation'
                                        */
  real_T Constant1_Value_oi;           /* Expression: 1
                                        * Referenced by: '<S323>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ap;/* Expression: 0
                                          * Referenced by: '<S323>/Unit_Delay2'
                                          */
  real_T Constant3_Value_j;            /* Expression: 2
                                        * Referenced by: '<S277>/Constant3'
                                        */
  real_T Constant4_Value_bq;           /* Expression: -2
                                        * Referenced by: '<S277>/Constant4'
                                        */
  real_T Constant2_Value_p;            /* Expression: .01
                                        * Referenced by: '<S277>/Constant2'
                                        */
  real_T enable_Value;                 /* Expression: 1
                                        * Referenced by: '<S277>/enable'
                                        */
  real_T enableSlew_Value;             /* Expression: 1
                                        * Referenced by: '<S277>/enableSlew'
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
                                        * Referenced by: '<S289>/Unit Delay'
                                        */
  real_T Constant20_Value;             /* Expression: -240
                                        * Referenced by: '<S273>/Constant20'
                                        */
  real_T Constant5_Value_o;            /* Expression: 2
                                        * Referenced by: '<S292>/Constant5'
                                        */
  real_T Constant4_Value_j;            /* Expression: -1
                                        * Referenced by: '<S292>/Constant4'
                                        */
  real_T Constant2_Value_g;            /* Expression: -1
                                        * Referenced by: '<S292>/Constant2'
                                        */
  real_T Constant1_Value_ly;           /* Expression: 1
                                        * Referenced by: '<S292>/Constant1'
                                        */
  real_T Constant3_Value_g;            /* Expression: 1
                                        * Referenced by: '<S292>/Constant3'
                                        */
  real_T UnitDelay_InitialCondition_g; /* Expression: 0
                                        * Referenced by: '<S290>/Unit Delay'
                                        */
  real_T SteeringControlDGain_Value;   /* Expression: .01
                                        * Referenced by: '<S273>/SteeringControlDGain'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S290>/Unit Delay1'
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
                                        * Referenced by: '<S278>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_kj[9]; /* Expression: [0 5 10 15 25 35 45 55 65]
                                        * Referenced by: '<S278>/1-D Lookup Table'
                                        */
  real_T stanleySteeringControlGain_Valu;/* Expression: double(350)
                                          * Referenced by: '<S278>/stanleySteeringControlGain'
                                          */
  real_T IV_Value_o;                   /* Expression: 0
                                        * Referenced by: '<S284>/IV'
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
                                        * Referenced by: '<S278>/Saturation'
                                        */
  real_T Saturation_LowerSat_bq;       /* Expression: 7.5
                                        * Referenced by: '<S278>/Saturation'
                                        */
  real_T kph2mps_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S278>/kph2mps_'
                                        */
  real_T deg2rad1_Gain;                /* Expression: pi/180
                                        * Referenced by: '<S80>/deg2rad1'
                                        */
  real_T TmpRTBAtAdd2Inport2_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T desHeadingWeight_Gain;        /* Expression: 0
                                        * Referenced by: '<S278>/desHeadingWeight'
                                        */
  real_T SaturationSpeedLookup_tableData[6];/* Expression: [1,0.9,0.8,0.5,0.2,0.01]
                                             * Referenced by: '<S304>/Saturation Speed Lookup'
                                             */
  real_T SaturationSpeedLookup_bp01Data[6];/* Expression: [10,20,30,50,70,100]
                                            * Referenced by: '<S304>/Saturation Speed Lookup'
                                            */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S315>/sample time'
                                        */
  real_T sampletime_WtEt_j;            /* Computed Parameter: sampletime_WtEt_j
                                        * Referenced by: '<S302>/sample time'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S302>/Delay Input2'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S275>/Zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S301>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S301>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S301>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S301>/Filter'
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
                                        * Referenced by: '<S275>/1-D Lookup Table'
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
                                        * Referenced by: '<S275>/1-D Lookup Table'
                                        */
  real_T deg2rad_Gain_l;               /* Expression: pi/180
                                        * Referenced by: '<S275>/deg2rad'
                                        */
  real_T invert_Gain_i;                /* Expression: -1
                                        * Referenced by: '<S275>/invert'
                                        */
  real_T sampletime_WtEt_p;            /* Computed Parameter: sampletime_WtEt_p
                                        * Referenced by: '<S303>/sample time'
                                        */
  real_T DelayInput2_InitialCondition_m;/* Expression: 0
                                         * Referenced by: '<S303>/Delay Input2'
                                         */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S295>/Discrete-Time Integrator'
                                         */
  real_T DelayInput2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S315>/Delay Input2'
                                         */
  real_T Gain3_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S304>/Gain3'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S304>/Gain1'
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
  real_T Gain_Gain_p;                  /* Expression: -1
                                        * Referenced by: '<S295>/Gain'
                                        */
  real_T CurvatureLookupTable_tableData[5];/* Expression: [0.0001,0.001,0.1,0.2,1]
                                            * Referenced by: '<S304>/Curvature Lookup Table'
                                            */
  real_T CurvatureLookupTable_bp01Data[5];/* Expression: [0.00001,0.0001,0.1,0.2,0.5]
                                           * Referenced by: '<S304>/Curvature Lookup Table'
                                           */
  real_T ErrorLookupTable_tableData[5];/* Expression: [0.01,0.05,0.1,0.2,1]
                                        * Referenced by: '<S304>/Error Lookup Table'
                                        */
  real_T ErrorLookupTable_bp01Data[5]; /* Expression: [0.001,0.01,0.1,0.5,1]
                                        * Referenced by: '<S304>/Error Lookup Table'
                                        */
  real_T SpeedLookupTable_tableData[6];/* Expression: [1,0.6,0.3,0.1,0.05,0.01]
                                        * Referenced by: '<S304>/Speed Lookup Table'
                                        */
  real_T SpeedLookupTable_bp01Data[6]; /* Expression: [10,20,30,50,70,100]
                                        * Referenced by: '<S304>/Speed Lookup Table'
                                        */
  real_T LimitRateLimiter_RisingLim;   /* Computed Parameter: LimitRateLimiter_RisingLim
                                        * Referenced by: '<S304>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_FallingLim;  /* Computed Parameter: LimitRateLimiter_FallingLim
                                        * Referenced by: '<S304>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_IC;          /* Expression: 0
                                        * Referenced by: '<S304>/Limit Rate Limiter'
                                        */
  real_T sign2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S80>/sign2'
                                        */
  real_T UnitDelay_InitialCondition_g1;/* Expression: 0
                                        * Referenced by: '<S80>/Unit Delay'
                                        */
  real_T CPV_Value_g;                  /* Expression: 1
                                        * Referenced by: '<S359>/CPV'
                                        */
  real_T CPV2_Value_p;                 /* Expression: 1
                                        * Referenced by: '<S359>/CPV2'
                                        */
  real_T CPV_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S361>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dl;/* Expression: 0.0
                                          * Referenced by: '<S367>/FixPt Unit Delay1'
                                          */
  real_T Integrator_method_Value;      /* Expression: 1
                                        * Referenced by: '<S366>/Integrator_method'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ol;/* Expression: 0.0
                                          * Referenced by: '<S368>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_b;/* Expression: 0
                                        * Referenced by: '<S362>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant'
                                        */
  real_T MaximumGoodHDOP_Value;        /* Expression: 2.5
                                        * Referenced by: '<S389>/MaximumGoodHDOP'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant1'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S389>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant18'
                                        */
  real_T Constant19_Value_m;           /* Expression: 0
                                        * Referenced by: '<S389>/Constant19'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant2'
                                        */
  real_T Constant20_Value_i;           /* Expression: 0
                                        * Referenced by: '<S389>/Constant20'
                                        */
  real_T Constant21_Value_g;           /* Expression: 0
                                        * Referenced by: '<S389>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S389>/Constant25'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant3'
                                        */
  real_T Constant4_Value_m;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant4'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S389>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S389>/Constant8'
                                        */
  real_T Constant9_Value_m;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant9'
                                        */
  real_T kph2mps_Gain_l;               /* Expression: 1/3.6
                                        * Referenced by: '<S389>/kph2mps'
                                        */
  real_T lookAheadTime_Value;          /* Expression: 2
                                        * Referenced by: '<S389>/lookAheadTime'
                                        */
  real_T kph2mps1_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S389>/kph2mps1'
                                        */
  real_T lookAheadTime1_Value;         /* Expression: 15
                                        * Referenced by: '<S389>/lookAheadTime1'
                                        */
  real_T UnitDelay1_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S389>/Unit Delay1'
                                        */
  real_T InitialHeading_Value;         /* Expression: 0
                                        * Referenced by: '<S390>/InitialHeading'
                                        */
  real_T InitialPosition_Value;        /* Expression: 0
                                        * Referenced by: '<S390>/InitialPosition'
                                        */
  real_T InitialXPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S390>/InitialXPosition'
                                        */
  real_T InitialYPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S390>/InitialYPosition'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 1000/3600
                                        * Referenced by: '<S71>/kph2ms'
                                        */
  real_T LongitudnalPosition_gainval;  /* Computed Parameter: LongitudnalPosition_gainval
                                        * Referenced by: '<S390>/LongitudnalPosition'
                                        */
  real_T reset_Value;                  /* Expression: 0
                                        * Referenced by: '<S390>/reset'
                                        */
  real_T VehHeading_gainval;           /* Computed Parameter: VehHeading_gainval
                                        * Referenced by: '<S390>/VehHeading'
                                        */
  real_T XPosition_gainval;            /* Computed Parameter: XPosition_gainval
                                        * Referenced by: '<S390>/XPosition'
                                        */
  real_T YPosition_gainval;            /* Computed Parameter: YPosition_gainval
                                        * Referenced by: '<S390>/YPosition'
                                        */
  real_T for_logging6_Gain;            /* Expression: 1
                                        * Referenced by: '<S391>/for_logging6'
                                        */
  real_T for_logging5_Gain;            /* Expression: 1
                                        * Referenced by: '<S391>/for_logging5'
                                        */
  real_T for_logging4_Gain;            /* Expression: 1
                                        * Referenced by: '<S391>/for_logging4'
                                        */
  real_T for_logging3_Gain;            /* Expression: 1
                                        * Referenced by: '<S391>/for_logging3'
                                        */
  real_T for_logging2_Gain;            /* Expression: 1
                                        * Referenced by: '<S391>/for_logging2'
                                        */
  real_T ms_to_kmh_2_Gain;             /* Expression: 3.6
                                        * Referenced by: '<S391>/m//s_to_km//h_2'
                                        */
  real_T ms_to_kmh_Gain;               /* Expression: 3.6
                                        * Referenced by: '<S391>/m//s_to_km//h'
                                        */
  real_T for_logging1_Gain;            /* Expression: 1
                                        * Referenced by: '<S391>/for_logging1'
                                        */
  real_T for_logging_Gain;             /* Expression: 1
                                        * Referenced by: '<S391>/for_logging'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S396>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S396>/Constant1'
                                        */
  real_T byte1_Y0;                     /* Computed Parameter: byte1_Y0
                                        * Referenced by: '<S472>/byte1'
                                        */
  real_T byte2_Y0;                     /* Computed Parameter: byte2_Y0
                                        * Referenced by: '<S472>/byte2'
                                        */
  real_T byte3_Y0;                     /* Computed Parameter: byte3_Y0
                                        * Referenced by: '<S472>/byte3'
                                        */
  real_T byte4_Y0;                     /* Computed Parameter: byte4_Y0
                                        * Referenced by: '<S472>/byte4'
                                        */
  real_T byte5_Y0;                     /* Computed Parameter: byte5_Y0
                                        * Referenced by: '<S472>/byte5'
                                        */
  real_T byte6_Y0;                     /* Computed Parameter: byte6_Y0
                                        * Referenced by: '<S472>/byte6'
                                        */
  real_T byte7_Y0;                     /* Computed Parameter: byte7_Y0
                                        * Referenced by: '<S472>/byte7'
                                        */
  real_T byte8_Y0;                     /* Computed Parameter: byte8_Y0
                                        * Referenced by: '<S472>/byte8'
                                        */
  real_T RXstatus_Y0;                  /* Computed Parameter: RXstatus_Y0
                                        * Referenced by: '<S472>/RX status'
                                        */
  real_T RXtime_Y0;                    /* Computed Parameter: RXtime_Y0
                                        * Referenced by: '<S472>/RX time'
                                        */
  real_T RXdeltatime_Y0;               /* Computed Parameter: RXdeltatime_Y0
                                        * Referenced by: '<S472>/RX delta time'
                                        */
  real_T byte1_Y0_b;                   /* Computed Parameter: byte1_Y0_b
                                        * Referenced by: '<S481>/byte1'
                                        */
  real_T byte2_Y0_d;                   /* Computed Parameter: byte2_Y0_d
                                        * Referenced by: '<S481>/byte2'
                                        */
  real_T byte3_Y0_l;                   /* Computed Parameter: byte3_Y0_l
                                        * Referenced by: '<S481>/byte3'
                                        */
  real_T byte4_Y0_p;                   /* Computed Parameter: byte4_Y0_p
                                        * Referenced by: '<S481>/byte4'
                                        */
  real_T byte5_Y0_n;                   /* Computed Parameter: byte5_Y0_n
                                        * Referenced by: '<S481>/byte5'
                                        */
  real_T byte6_Y0_h;                   /* Computed Parameter: byte6_Y0_h
                                        * Referenced by: '<S481>/byte6'
                                        */
  real_T byte7_Y0_p;                   /* Computed Parameter: byte7_Y0_p
                                        * Referenced by: '<S481>/byte7'
                                        */
  real_T byte8_Y0_j;                   /* Computed Parameter: byte8_Y0_j
                                        * Referenced by: '<S481>/byte8'
                                        */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S481>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S481>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
                                        * Referenced by: '<S481>/RX delta time'
                                        */
  real_T SpeedOfForwardVehicle_Y0;     /* Computed Parameter: SpeedOfForwardVehicle_Y0
                                        * Referenced by: '<S489>/SpeedOfForwardVehicle'
                                        */
  real_T DistanceToForwardVehicle_Y0;  /* Computed Parameter: DistanceToForwardVehicle_Y0
                                        * Referenced by: '<S489>/DistanceToForwardVehicle'
                                        */
  real_T AdaptiveCruiseCtrlSetSpeed_Y0;/* Computed Parameter: AdaptiveCruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S489>/AdaptiveCruiseCtrlSetSpeed'
                                        */
  real_T AdaptiveCruiseCtrlMode_Y0;    /* Computed Parameter: AdaptiveCruiseCtrlMode_Y0
                                        * Referenced by: '<S489>/AdaptiveCruiseCtrlMode'
                                        */
  real_T AdptveCruiseCtrlSetDistanceMode;/* Computed Parameter: AdptveCruiseCtrlSetDistanceMode
                                          * Referenced by: '<S489>/AdptveCruiseCtrlSetDistanceMode'
                                          */
  real_T RoadCurvature_Y0;             /* Computed Parameter: RoadCurvature_Y0
                                        * Referenced by: '<S489>/RoadCurvature'
                                        */
  real_T ACCTargetDetected_Y0;         /* Computed Parameter: ACCTargetDetected_Y0
                                        * Referenced by: '<S489>/ACCTargetDetected'
                                        */
  real_T ACCSystemShutoffWarning_Y0;   /* Computed Parameter: ACCSystemShutoffWarning_Y0
                                        * Referenced by: '<S489>/ACCSystemShutoffWarning'
                                        */
  real_T ACCDistanceAlertSignal_Y0;    /* Computed Parameter: ACCDistanceAlertSignal_Y0
                                        * Referenced by: '<S489>/ACCDistanceAlertSignal'
                                        */
  real_T ForwardCollisionWarning_Y0;   /* Computed Parameter: ForwardCollisionWarning_Y0
                                        * Referenced by: '<S489>/ForwardCollisionWarning'
                                        */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S489>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S489>/RX time'
                                        */
  real_T RXdeltatime_Y0_ax;            /* Computed Parameter: RXdeltatime_Y0_ax
                                        * Referenced by: '<S489>/RX delta time'
                                        */
  real_T AdvEmergencyBrkSysState_Y0;   /* Computed Parameter: AdvEmergencyBrkSysState_Y0
                                        * Referenced by: '<S491>/AdvEmergencyBrkSysState'
                                        */
  real_T CollisionWarningLevel_Y0;     /* Computed Parameter: CollisionWarningLevel_Y0
                                        * Referenced by: '<S491>/CollisionWarningLevel'
                                        */
  real_T RelObjctDetForAdvEmergBrakingSy;/* Computed Parameter: RelObjctDetForAdvEmergBrakingSy
                                          * Referenced by: '<S491>/RelObjctDetForAdvEmergBrakingSys'
                                          */
  real_T BendOffProbabOfRelevantObject_Y;/* Computed Parameter: BendOffProbabOfRelevantObject_Y
                                          * Referenced by: '<S491>/BendOffProbabOfRelevantObject'
                                          */
  real_T TimeToCollisionWithRelevantObj_;/* Computed Parameter: TimeToCollisionWithRelevantObj_
                                          * Referenced by: '<S491>/TimeToCollisionWithRelevantObj'
                                          */
  real_T RXstatus_Y0_i;                /* Computed Parameter: RXstatus_Y0_i
                                        * Referenced by: '<S491>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S491>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S491>/RX delta time'
                                        */
  real_T PneumaticSupplyPress_Y0;      /* Computed Parameter: PneumaticSupplyPress_Y0
                                        * Referenced by: '<S493>/PneumaticSupplyPress'
                                        */
  real_T ParkingAnd_orTrailerAirPress_Y0;/* Computed Parameter: ParkingAnd_orTrailerAirPress_Y0
                                          * Referenced by: '<S493>/ParkingAnd_orTrailerAirPress'
                                          */
  real_T ServiceBrakeCircuit1AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit1AirPress_Y0
                                          * Referenced by: '<S493>/ServiceBrakeCircuit1AirPress'
                                          */
  real_T ServiceBrakeCircuit2AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit2AirPress_Y0
                                          * Referenced by: '<S493>/ServiceBrakeCircuit2AirPress'
                                          */
  real_T AuxEquipmentSupplyPress_Y0;   /* Computed Parameter: AuxEquipmentSupplyPress_Y0
                                        * Referenced by: '<S493>/AuxEquipmentSupplyPress'
                                        */
  real_T AirSuspensionSupplyPress_Y0;  /* Computed Parameter: AirSuspensionSupplyPress_Y0
                                        * Referenced by: '<S493>/AirSuspensionSupplyPress'
                                        */
  real_T AirCompressorStatus_Y0;       /* Computed Parameter: AirCompressorStatus_Y0
                                        * Referenced by: '<S493>/AirCompressorStatus'
                                        */
  real_T PowertrainCircuitAirSupplyPress;/* Computed Parameter: PowertrainCircuitAirSupplyPress
                                          * Referenced by: '<S493>/PowertrainCircuitAirSupplyPress'
                                          */
  real_T RXstatus_Y0_e;                /* Computed Parameter: RXstatus_Y0_e
                                        * Referenced by: '<S493>/RX status'
                                        */
  real_T RXtime_Y0_i;                  /* Computed Parameter: RXtime_Y0_i
                                        * Referenced by: '<S493>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S493>/RX delta time'
                                        */
  real_T BarometricPress_Y0;           /* Computed Parameter: BarometricPress_Y0
                                        * Referenced by: '<S495>/BarometricPress'
                                        */
  real_T CabInteriorTemp_Y0;           /* Computed Parameter: CabInteriorTemp_Y0
                                        * Referenced by: '<S495>/CabInteriorTemp'
                                        */
  real_T AmbientAirTemp_Y0;            /* Computed Parameter: AmbientAirTemp_Y0
                                        * Referenced by: '<S495>/AmbientAirTemp'
                                        */
  real_T EngAirIntakeTemp_Y0;          /* Computed Parameter: EngAirIntakeTemp_Y0
                                        * Referenced by: '<S495>/EngAirIntakeTemp'
                                        */
  real_T RoadSurfaceTemp_Y0;           /* Computed Parameter: RoadSurfaceTemp_Y0
                                        * Referenced by: '<S495>/RoadSurfaceTemp'
                                        */
  real_T RXstatus_Y0_b;                /* Computed Parameter: RXstatus_Y0_b
                                        * Referenced by: '<S495>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S495>/RX time'
                                        */
  real_T RXdeltatime_Y0_m;             /* Computed Parameter: RXdeltatime_Y0_m
                                        * Referenced by: '<S495>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S497>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S497>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_ld;               /* Computed Parameter: RXstatus_Y0_ld
                                        * Referenced by: '<S497>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S497>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
                                        * Referenced by: '<S497>/RX delta time'
                                        */
  real_T tr0_track_selection_status_Y0;/* Computed Parameter: tr0_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr0_track_selection_status'
                                        */
  real_T tr0_corrected_lateral_distance_;/* Computed Parameter: tr0_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr0_corrected_lateral_distance'
                                          */
  real_T tr1_track_selection_status_Y0;/* Computed Parameter: tr1_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr1_track_selection_status'
                                        */
  real_T tr1_corrected_lateral_distance_;/* Computed Parameter: tr1_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr1_corrected_lateral_distance'
                                          */
  real_T tr2_track_selection_status_Y0;/* Computed Parameter: tr2_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr2_track_selection_status'
                                        */
  real_T tr2_corrected_lateral_distance_;/* Computed Parameter: tr2_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr2_corrected_lateral_distance'
                                          */
  real_T tr3_track_selection_status_Y0;/* Computed Parameter: tr3_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr3_track_selection_status'
                                        */
  real_T tr3_corrected_lateral_distance_;/* Computed Parameter: tr3_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr3_corrected_lateral_distance'
                                          */
  real_T tr4_track_selection_status_Y0;/* Computed Parameter: tr4_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr4_track_selection_status'
                                        */
  real_T tr4_corrected_lateral_distance_;/* Computed Parameter: tr4_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr4_corrected_lateral_distance'
                                          */
  real_T tr5_track_selection_status_Y0;/* Computed Parameter: tr5_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr5_track_selection_status'
                                        */
  real_T tr5_corrected_lateral_distance_;/* Computed Parameter: tr5_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr5_corrected_lateral_distance'
                                          */
  real_T tr6_track_selection_status_Y0;/* Computed Parameter: tr6_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr6_track_selection_status'
                                        */
  real_T tr6_corrected_lateral_distance_;/* Computed Parameter: tr6_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr6_corrected_lateral_distance'
                                          */
  real_T tr7_track_selection_status_Y0;/* Computed Parameter: tr7_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr7_track_selection_status'
                                        */
  real_T tr7_corrected_lateral_distance_;/* Computed Parameter: tr7_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr7_corrected_lateral_distance'
                                          */
  real_T tr8_track_selection_status_Y0;/* Computed Parameter: tr8_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr8_track_selection_status'
                                        */
  real_T tr8_corrected_lateral_distance_;/* Computed Parameter: tr8_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr8_corrected_lateral_distance'
                                          */
  real_T tr9_track_selection_status_Y0;/* Computed Parameter: tr9_track_selection_status_Y0
                                        * Referenced by: '<S499>/tr9_track_selection_status'
                                        */
  real_T tr9_corrected_lateral_distance_;/* Computed Parameter: tr9_corrected_lateral_distance_
                                          * Referenced by: '<S499>/tr9_corrected_lateral_distance'
                                          */
  real_T tr0_lateral_position_Y0;      /* Computed Parameter: tr0_lateral_position_Y0
                                        * Referenced by: '<S499>/tr0_lateral_position'
                                        */
  real_T tr1_lateral_position_Y0;      /* Computed Parameter: tr1_lateral_position_Y0
                                        * Referenced by: '<S499>/tr1_lateral_position'
                                        */
  real_T tr2_lateral_position_Y0;      /* Computed Parameter: tr2_lateral_position_Y0
                                        * Referenced by: '<S499>/tr2_lateral_position'
                                        */
  real_T tr3_lateral_position_Y0;      /* Computed Parameter: tr3_lateral_position_Y0
                                        * Referenced by: '<S499>/tr3_lateral_position'
                                        */
  real_T tr4_lateral_position_Y0;      /* Computed Parameter: tr4_lateral_position_Y0
                                        * Referenced by: '<S499>/tr4_lateral_position'
                                        */
  real_T tr5_lateral_position_Y0;      /* Computed Parameter: tr5_lateral_position_Y0
                                        * Referenced by: '<S499>/tr5_lateral_position'
                                        */
  real_T tr6_lateral_position_Y0;      /* Computed Parameter: tr6_lateral_position_Y0
                                        * Referenced by: '<S499>/tr6_lateral_position'
                                        */
  real_T tr7_lateral_position_Y0;      /* Computed Parameter: tr7_lateral_position_Y0
                                        * Referenced by: '<S499>/tr7_lateral_position'
                                        */
  real_T tr8_lateral_position_Y0;      /* Computed Parameter: tr8_lateral_position_Y0
                                        * Referenced by: '<S499>/tr8_lateral_position'
                                        */
  real_T tr9_lateral_position_Y0;      /* Computed Parameter: tr9_lateral_position_Y0
                                        * Referenced by: '<S499>/tr9_lateral_position'
                                        */
  real_T tr0_range_Y0;                 /* Computed Parameter: tr0_range_Y0
                                        * Referenced by: '<S499>/tr0_range'
                                        */
  real_T tr1_range_Y0;                 /* Computed Parameter: tr1_range_Y0
                                        * Referenced by: '<S499>/tr1_range'
                                        */
  real_T tr2_range_Y0;                 /* Computed Parameter: tr2_range_Y0
                                        * Referenced by: '<S499>/tr2_range'
                                        */
  real_T tr3_range_Y0;                 /* Computed Parameter: tr3_range_Y0
                                        * Referenced by: '<S499>/tr3_range'
                                        */
  real_T tr4_range_Y0;                 /* Computed Parameter: tr4_range_Y0
                                        * Referenced by: '<S499>/tr4_range'
                                        */
  real_T tr5_range_Y0;                 /* Computed Parameter: tr5_range_Y0
                                        * Referenced by: '<S499>/tr5_range'
                                        */
  real_T tr6_range_Y0;                 /* Computed Parameter: tr6_range_Y0
                                        * Referenced by: '<S499>/tr6_range'
                                        */
  real_T tr7_range_Y0;                 /* Computed Parameter: tr7_range_Y0
                                        * Referenced by: '<S499>/tr7_range'
                                        */
  real_T tr8_range_Y0;                 /* Computed Parameter: tr8_range_Y0
                                        * Referenced by: '<S499>/tr8_range'
                                        */
  real_T tr9_range_Y0;                 /* Computed Parameter: tr9_range_Y0
                                        * Referenced by: '<S499>/tr9_range'
                                        */
  real_T tr0_radar_confidence_Y0;      /* Computed Parameter: tr0_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr0_radar_confidence'
                                        */
  real_T tr1_radar_confidence_Y0;      /* Computed Parameter: tr1_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr1_radar_confidence'
                                        */
  real_T tr2_radar_confidence_Y0;      /* Computed Parameter: tr2_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr2_radar_confidence'
                                        */
  real_T tr3_radar_confidence_Y0;      /* Computed Parameter: tr3_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr3_radar_confidence'
                                        */
  real_T tr4_radar_confidence_Y0;      /* Computed Parameter: tr4_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr4_radar_confidence'
                                        */
  real_T tr5_radar_confidence_Y0;      /* Computed Parameter: tr5_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr5_radar_confidence'
                                        */
  real_T tr6_radar_confidence_Y0;      /* Computed Parameter: tr6_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr6_radar_confidence'
                                        */
  real_T tr7_radar_confidence_Y0;      /* Computed Parameter: tr7_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr7_radar_confidence'
                                        */
  real_T tr8_radar_confidence_Y0;      /* Computed Parameter: tr8_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr8_radar_confidence'
                                        */
  real_T tr9_radar_confidence_Y0;      /* Computed Parameter: tr9_radar_confidence_Y0
                                        * Referenced by: '<S499>/tr9_radar_confidence'
                                        */
  real_T tr0_relative_velocitiy_Y0;    /* Computed Parameter: tr0_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr0_relative_velocitiy'
                                        */
  real_T tr0_acceleration_over_ground_Y0;/* Computed Parameter: tr0_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr0_acceleration_over_ground'
                                          */
  real_T tr1_relative_velocitiy_Y0;    /* Computed Parameter: tr1_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr1_relative_velocitiy'
                                        */
  real_T tr1_acceleration_over_ground_Y0;/* Computed Parameter: tr1_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr1_acceleration_over_ground'
                                          */
  real_T tr2_relative_velocitiy_Y0;    /* Computed Parameter: tr2_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr2_relative_velocitiy'
                                        */
  real_T tr2_acceleration_over_ground_Y0;/* Computed Parameter: tr2_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr2_acceleration_over_ground'
                                          */
  real_T tr3_relative_velocitiy_Y0;    /* Computed Parameter: tr3_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr3_relative_velocitiy'
                                        */
  real_T tr3_acceleration_over_ground_Y0;/* Computed Parameter: tr3_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr3_acceleration_over_ground'
                                          */
  real_T tr4_relative_velocitiy_Y0;    /* Computed Parameter: tr4_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr4_relative_velocitiy'
                                        */
  real_T tr4_acceleration_over_ground_Y0;/* Computed Parameter: tr4_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr4_acceleration_over_ground'
                                          */
  real_T tr5_relative_velocitiy_Y0;    /* Computed Parameter: tr5_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr5_relative_velocitiy'
                                        */
  real_T tr5_acceleration_over_ground_Y0;/* Computed Parameter: tr5_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr5_acceleration_over_ground'
                                          */
  real_T tr6_relative_velocitiy_Y0;    /* Computed Parameter: tr6_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr6_relative_velocitiy'
                                        */
  real_T tr6_acceleration_over_ground_Y0;/* Computed Parameter: tr6_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr6_acceleration_over_ground'
                                          */
  real_T tr7_relative_velocitiy_Y0;    /* Computed Parameter: tr7_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr7_relative_velocitiy'
                                        */
  real_T tr7_acceleration_over_ground_Y0;/* Computed Parameter: tr7_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr7_acceleration_over_ground'
                                          */
  real_T tr8_relative_velocitiy_Y0;    /* Computed Parameter: tr8_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr8_relative_velocitiy'
                                        */
  real_T tr8_acceleration_over_ground_Y0;/* Computed Parameter: tr8_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr8_acceleration_over_ground'
                                          */
  real_T tr9_relative_velocitiy_Y0;    /* Computed Parameter: tr9_relative_velocitiy_Y0
                                        * Referenced by: '<S499>/tr9_relative_velocitiy'
                                        */
  real_T tr9_acceleration_over_ground_Y0;/* Computed Parameter: tr9_acceleration_over_ground_Y0
                                          * Referenced by: '<S499>/tr9_acceleration_over_ground'
                                          */
  real_T track_multiplexor_Y0;         /* Computed Parameter: track_multiplexor_Y0
                                        * Referenced by: '<S499>/track_multiplexor'
                                        */
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S499>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S499>/RX time'
                                        */
  real_T RXdeltatime_Y0_as;            /* Computed Parameter: RXdeltatime_Y0_as
                                        * Referenced by: '<S499>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0;        /* Computed Parameter: TwoSpeedAxleSwitch_Y0
                                        * Referenced by: '<S501>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0;        /* Computed Parameter: ParkingBrakeSwitch_Y0
                                        * Referenced by: '<S501>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0;     /* Computed Parameter: CruiseCtrlPauseSwitch_Y0
                                        * Referenced by: '<S501>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0; /* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0
                                        * Referenced by: '<S501>/ParkBrakeReleaseInhibitRq'
                                        */
  real_T WheelBasedVehicleSpeed_Y0;    /* Computed Parameter: WheelBasedVehicleSpeed_Y0
                                        * Referenced by: '<S501>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0;          /* Computed Parameter: CruiseCtrlActive_Y0
                                        * Referenced by: '<S501>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0;    /* Computed Parameter: CruiseCtrlEnableSwitch_Y0
                                        * Referenced by: '<S501>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0;               /* Computed Parameter: BrakeSwitch_Y0
                                        * Referenced by: '<S501>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0;              /* Computed Parameter: ClutchSwitch_Y0
                                        * Referenced by: '<S501>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0;       /* Computed Parameter: CruiseCtrlSetSwitch_Y0
                                        * Referenced by: '<S501>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0;     /* Computed Parameter: CruiseCtrlCoastSwitch_Y0
                                        * Referenced by: '<S501>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0;    /* Computed Parameter: CruiseCtrlResumeSwitch_Y0
                                        * Referenced by: '<S501>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0
                                        * Referenced by: '<S501>/CruiseCtrlAccelerateSwitch'
                                        */
  real_T CruiseCtrlSetSpeed_Y0;        /* Computed Parameter: CruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S501>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0;          /* Computed Parameter: PTOGovernorState_Y0
                                        * Referenced by: '<S501>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0;          /* Computed Parameter: CruiseCtrlStates_Y0
                                        * Referenced by: '<S501>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0;    /* Computed Parameter: EngIdleIncrementSwitch_Y0
                                        * Referenced by: '<S501>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0;    /* Computed Parameter: EngIdleDecrementSwitch_Y0
                                        * Referenced by: '<S501>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0;         /* Computed Parameter: EngTestModeSwitch_Y0
                                        * Referenced by: '<S501>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0; /* Computed Parameter: EngShutdownOverrideSwitch_Y0
                                        * Referenced by: '<S501>/EngShutdownOverrideSwitch'
                                        */
  real_T RXstatus_Y0_gd;               /* Computed Parameter: RXstatus_Y0_gd
                                        * Referenced by: '<S501>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S501>/RX time'
                                        */
  real_T RXdeltatime_Y0_jm;            /* Computed Parameter: RXdeltatime_Y0_jm
                                        * Referenced by: '<S501>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_c;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_c
                                        * Referenced by: '<S503>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_a;      /* Computed Parameter: ParkingBrakeSwitch_Y0_a
                                        * Referenced by: '<S503>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_p;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_p
                                        * Referenced by: '<S503>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_m;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_m
                                         * Referenced by: '<S503>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_l;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_l
                                        * Referenced by: '<S503>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_j;        /* Computed Parameter: CruiseCtrlActive_Y0_j
                                        * Referenced by: '<S503>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_f;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_f
                                        * Referenced by: '<S503>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_o;             /* Computed Parameter: BrakeSwitch_Y0_o
                                        * Referenced by: '<S503>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_d;            /* Computed Parameter: ClutchSwitch_Y0_d
                                        * Referenced by: '<S503>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_c;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_c
                                        * Referenced by: '<S503>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_p;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_p
                                        * Referenced by: '<S503>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_e;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_e
                                        * Referenced by: '<S503>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_n;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_n
                                          * Referenced by: '<S503>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_j;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_j
                                        * Referenced by: '<S503>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_h;        /* Computed Parameter: PTOGovernorState_Y0_h
                                        * Referenced by: '<S503>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_f;        /* Computed Parameter: CruiseCtrlStates_Y0_f
                                        * Referenced by: '<S503>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_c;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_c
                                        * Referenced by: '<S503>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_e;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_e
                                        * Referenced by: '<S503>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_i;       /* Computed Parameter: EngTestModeSwitch_Y0_i
                                        * Referenced by: '<S503>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_m;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_m
                                         * Referenced by: '<S503>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_gx;               /* Computed Parameter: RXstatus_Y0_gx
                                        * Referenced by: '<S503>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S503>/RX time'
                                        */
  real_T RXdeltatime_Y0_e;             /* Computed Parameter: RXdeltatime_Y0_e
                                        * Referenced by: '<S503>/RX delta time'
                                        */
  real_T SID_Y0;                       /* Computed Parameter: SID_Y0
                                        * Referenced by: '<S505>/SID'
                                        */
  real_T COGReference_Y0;              /* Computed Parameter: COGReference_Y0
                                        * Referenced by: '<S505>/COGReference'
                                        */
  real_T CourseOverGround_Y0;          /* Computed Parameter: CourseOverGround_Y0
                                        * Referenced by: '<S505>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0;           /* Computed Parameter: SpeedOverGround_Y0
                                        * Referenced by: '<S505>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_or;               /* Computed Parameter: RXstatus_Y0_or
                                        * Referenced by: '<S505>/RX status'
                                        */
  real_T RXtime_Y0_ag;                 /* Computed Parameter: RXtime_Y0_ag
                                        * Referenced by: '<S505>/RX time'
                                        */
  real_T RXdeltatime_Y0_jb;            /* Computed Parameter: RXdeltatime_Y0_jb
                                        * Referenced by: '<S505>/RX delta time'
                                        */
  real_T SID_Y0_l;                     /* Computed Parameter: SID_Y0_l
                                        * Referenced by: '<S506>/SID'
                                        */
  real_T COGReference_Y0_k;            /* Computed Parameter: COGReference_Y0_k
                                        * Referenced by: '<S506>/COGReference'
                                        */
  real_T CourseOverGround_Y0_n;        /* Computed Parameter: CourseOverGround_Y0_n
                                        * Referenced by: '<S506>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_b;         /* Computed Parameter: SpeedOverGround_Y0_b
                                        * Referenced by: '<S506>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_f;                /* Computed Parameter: RXstatus_Y0_f
                                        * Referenced by: '<S506>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S506>/RX time'
                                        */
  real_T RXdeltatime_Y0_mx;            /* Computed Parameter: RXdeltatime_Y0_mx
                                        * Referenced by: '<S506>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S508>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_c;                /* Computed Parameter: RXstatus_Y0_c
                                        * Referenced by: '<S508>/RX status'
                                        */
  real_T RXtime_Y0_or;                 /* Computed Parameter: RXtime_Y0_or
                                        * Referenced by: '<S508>/RX time'
                                        */
  real_T RXdeltatime_Y0_aw;            /* Computed Parameter: RXdeltatime_Y0_aw
                                        * Referenced by: '<S508>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0;          /* Computed Parameter: ASREngCtrlActive_Y0
                                        * Referenced by: '<S510>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0;        /* Computed Parameter: ASRBrakeCtrlActive_Y0
                                        * Referenced by: '<S510>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0;     /* Computed Parameter: AntiLockBrakingActive_Y0
                                        * Referenced by: '<S510>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0;            /* Computed Parameter: EBSBrakeSwitch_Y0
                                        * Referenced by: '<S510>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0;             /* Computed Parameter: BrakePedalPos_Y0
                                        * Referenced by: '<S510>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0;          /* Computed Parameter: ABSOffroadSwitch_Y0
                                        * Referenced by: '<S510>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0;          /* Computed Parameter: ASROffroadSwitch_Y0
                                        * Referenced by: '<S510>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0;       /* Computed Parameter: ASRHillHolderSwitch_Y0
                                        * Referenced by: '<S510>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0
                                        * Referenced by: '<S510>/TractionCtrlOverrideSwitch'
                                        */
  real_T AccelInterlockSwitch_Y0;      /* Computed Parameter: AccelInterlockSwitch_Y0
                                        * Referenced by: '<S510>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0;           /* Computed Parameter: EngDerateSwitch_Y0
                                        * Referenced by: '<S510>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0;      /* Computed Parameter: EngAuxShutdownSwitch_Y0
                                        * Referenced by: '<S510>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0;   /* Computed Parameter: RemoteAccelEnableSwitch_Y0
                                        * Referenced by: '<S510>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0;      /* Computed Parameter: EngRetarderSelection_Y0
                                        * Referenced by: '<S510>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0;       /* Computed Parameter: ABSFullyOperational_Y0
                                        * Referenced by: '<S510>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0;       /* Computed Parameter: EBSRedWarningSignal_Y0
                                        * Referenced by: '<S510>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0; /* Computed Parameter: ABS_EBSAmberWarningSignal_Y0
                                        * Referenced by: '<S510>/ABS_EBSAmberWarningSignal'
                                        */
  real_T ATC_ASRInformationSignal_Y0;  /* Computed Parameter: ATC_ASRInformationSignal_Y0
                                        * Referenced by: '<S510>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCntrl
                                          * Referenced by: '<S510>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0;           /* Computed Parameter: HaltBrakeSwitch_Y0
                                        * Referenced by: '<S510>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0;          /* Computed Parameter: TrailerABSStatus_Y0
                                        * Referenced by: '<S510>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSignal;/* Computed Parameter: TrctrMntdTrilerABSWarningSignal
                                          * Referenced by: '<S510>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_cf;               /* Computed Parameter: RXstatus_Y0_cf
                                        * Referenced by: '<S510>/RX status'
                                        */
  real_T RXtime_Y0_nt;                 /* Computed Parameter: RXtime_Y0_nt
                                        * Referenced by: '<S510>/RX time'
                                        */
  real_T RXdeltatime_Y0_df;            /* Computed Parameter: RXdeltatime_Y0_df
                                        * Referenced by: '<S510>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_c;        /* Computed Parameter: ASREngCtrlActive_Y0_c
                                        * Referenced by: '<S512>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_i;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_i
                                        * Referenced by: '<S512>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_l;   /* Computed Parameter: AntiLockBrakingActive_Y0_l
                                        * Referenced by: '<S512>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_h;          /* Computed Parameter: EBSBrakeSwitch_Y0_h
                                        * Referenced by: '<S512>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_f;           /* Computed Parameter: BrakePedalPos_Y0_f
                                        * Referenced by: '<S512>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_k;        /* Computed Parameter: ABSOffroadSwitch_Y0_k
                                        * Referenced by: '<S512>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_k;        /* Computed Parameter: ASROffroadSwitch_Y0_k
                                        * Referenced by: '<S512>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_c;     /* Computed Parameter: ASRHillHolderSwitch_Y0_c
                                        * Referenced by: '<S512>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_k;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_k
                                          * Referenced by: '<S512>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_a;    /* Computed Parameter: AccelInterlockSwitch_Y0_a
                                        * Referenced by: '<S512>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_d;         /* Computed Parameter: EngDerateSwitch_Y0_d
                                        * Referenced by: '<S512>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_o;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_o
                                        * Referenced by: '<S512>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_n; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_n
                                        * Referenced by: '<S512>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_h;    /* Computed Parameter: EngRetarderSelection_Y0_h
                                        * Referenced by: '<S512>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_k;     /* Computed Parameter: ABSFullyOperational_Y0_k
                                        * Referenced by: '<S512>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_h;     /* Computed Parameter: EBSRedWarningSignal_Y0_h
                                        * Referenced by: '<S512>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_i;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_i
                                         * Referenced by: '<S512>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_h;/* Computed Parameter: ATC_ASRInformationSignal_Y0_h
                                        * Referenced by: '<S512>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_j;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_j
                                          * Referenced by: '<S512>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_e;         /* Computed Parameter: HaltBrakeSwitch_Y0_e
                                        * Referenced by: '<S512>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_f;        /* Computed Parameter: TrailerABSStatus_Y0_f
                                        * Referenced by: '<S512>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_l;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_l
                                          * Referenced by: '<S512>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_ob;               /* Computed Parameter: RXstatus_Y0_ob
                                        * Referenced by: '<S512>/RX status'
                                        */
  real_T RXtime_Y0_d3;                 /* Computed Parameter: RXtime_Y0_d3
                                        * Referenced by: '<S512>/RX time'
                                        */
  real_T RXdeltatime_Y0_jo;            /* Computed Parameter: RXdeltatime_Y0_jo
                                        * Referenced by: '<S512>/RX delta time'
                                        */
  real_T FrontAxleSpeed_Y0;            /* Computed Parameter: FrontAxleSpeed_Y0
                                        * Referenced by: '<S514>/FrontAxleSpeed'
                                        */
  real_T RelativeSpeedFrontAxleLeftWheel;/* Computed Parameter: RelativeSpeedFrontAxleLeftWheel
                                          * Referenced by: '<S514>/RelativeSpeedFrontAxleLeftWheel'
                                          */
  real_T RlativeSpeedFrontAxleRightWheel;/* Computed Parameter: RlativeSpeedFrontAxleRightWheel
                                          * Referenced by: '<S514>/RlativeSpeedFrontAxleRightWheel'
                                          */
  real_T RelativeSpeedRearAxle1LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle1LeftWheel
                                          * Referenced by: '<S514>/RelativeSpeedRearAxle1LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle1RightWheel;/* Computed Parameter: RlativeSpeedRearAxle1RightWheel
                                          * Referenced by: '<S514>/RlativeSpeedRearAxle1RightWheel'
                                          */
  real_T RelativeSpeedRearAxle2LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle2LeftWheel
                                          * Referenced by: '<S514>/RelativeSpeedRearAxle2LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle2RightWheel;/* Computed Parameter: RlativeSpeedRearAxle2RightWheel
                                          * Referenced by: '<S514>/RlativeSpeedRearAxle2RightWheel'
                                          */
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S514>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S514>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
                                        * Referenced by: '<S514>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S518>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_c0;/* Expression: 0
                                         * Referenced by: '<S518>/Unit_Delay'
                                         */
  real_T EngTorqueMode_Y0;             /* Computed Parameter: EngTorqueMode_Y0
                                        * Referenced by: '<S561>/EngTorqueMode'
                                        */
  real_T ActlEngPrcntTrqueHighResolution;/* Computed Parameter: ActlEngPrcntTrqueHighResolution
                                          * Referenced by: '<S561>/ActlEngPrcntTrqueHighResolution'
                                          */
  real_T DriversDemandEngPercentTorque_Y;/* Computed Parameter: DriversDemandEngPercentTorque_Y
                                          * Referenced by: '<S561>/DriversDemandEngPercentTorque'
                                          */
  real_T ActualEngPercentTorque_Y0;    /* Computed Parameter: ActualEngPercentTorque_Y0
                                        * Referenced by: '<S561>/ActualEngPercentTorque'
                                        */
  real_T EngSpeed_Y0;                  /* Computed Parameter: EngSpeed_Y0
                                        * Referenced by: '<S561>/EngSpeed'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrEngCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrEngCntrl
                                          * Referenced by: '<S561>/SrcAddrssOfCtrllngDvcFrEngCntrl'
                                          */
  real_T EngStarterMode_Y0;            /* Computed Parameter: EngStarterMode_Y0
                                        * Referenced by: '<S561>/EngStarterMode'
                                        */
  real_T EngDemandPercentTorque_Y0;    /* Computed Parameter: EngDemandPercentTorque_Y0
                                        * Referenced by: '<S561>/EngDemandPercentTorque'
                                        */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S561>/RX status'
                                        */
  real_T RXtime_Y0_aj;                 /* Computed Parameter: RXtime_Y0_aj
                                        * Referenced by: '<S561>/RX time'
                                        */
  real_T RXdeltatime_Y0_dz;            /* Computed Parameter: RXdeltatime_Y0_dz
                                        * Referenced by: '<S561>/RX delta time'
                                        */
  real_T SPN558_AccelPed1LowIdlSwitch_Y0;/* Computed Parameter: SPN558_AccelPed1LowIdlSwitch_Y0
                                          * Referenced by: '<S563>/SPN558_AccelPed1LowIdlSwitch'
                                          */
  real_T SPN559_AccelPedKickdownSw_Y0; /* Computed Parameter: SPN559_AccelPedKickdownSw_Y0
                                        * Referenced by: '<S563>/SPN559_AccelPedKickdownSw'
                                        */
  real_T SPN1437_RoadSpeedLimitStatus_Y0;/* Computed Parameter: SPN1437_RoadSpeedLimitStatus_Y0
                                          * Referenced by: '<S563>/SPN1437_RoadSpeedLimitStatus'
                                          */
  real_T SPN2970_AccelPed2LowIdlSwitch_Y;/* Computed Parameter: SPN2970_AccelPed2LowIdlSwitch_Y
                                          * Referenced by: '<S563>/SPN2970_AccelPed2LowIdlSwitch'
                                          */
  real_T SPN91_AccelPedPos1_Y0;        /* Computed Parameter: SPN91_AccelPedPos1_Y0
                                        * Referenced by: '<S563>/SPN91_AccelPedPos1'
                                        */
  real_T SPN92_EngPercLoadAtCurrSpd_Y0;/* Computed Parameter: SPN92_EngPercLoadAtCurrSpd_Y0
                                        * Referenced by: '<S563>/SPN92_EngPercLoadAtCurrSpd'
                                        */
  real_T SPN974_RemAccelPedalPosition_Y0;/* Computed Parameter: SPN974_RemAccelPedalPosition_Y0
                                          * Referenced by: '<S563>/SPN974_RemAccelPedalPosition'
                                          */
  real_T SPN29_AccelPedPos2_Y0;        /* Computed Parameter: SPN29_AccelPedPos2_Y0
                                        * Referenced by: '<S563>/SPN29_AccelPedPos2'
                                        */
  real_T SPN2979_VehAccelRateLimStatus_Y;/* Computed Parameter: SPN2979_VehAccelRateLimStatus_Y
                                          * Referenced by: '<S563>/SPN2979_VehAccelRateLimStatus'
                                          */
  real_T SPN5021_MomEngMaxPwrEnFdbk_Y0;/* Computed Parameter: SPN5021_MomEngMaxPwrEnFdbk_Y0
                                        * Referenced by: '<S563>/SPN5021_MomEngMaxPwrEnFdbk'
                                        */
  real_T SPN5399_DPFThermMgmtActive_Y0;/* Computed Parameter: SPN5399_DPFThermMgmtActive_Y0
                                        * Referenced by: '<S563>/SPN5399_DPFThermMgmtActive'
                                        */
  real_T SPN5400_SCRThermMgmtActive_Y0;/* Computed Parameter: SPN5400_SCRThermMgmtActive_Y0
                                        * Referenced by: '<S563>/SPN5400_SCRThermMgmtActive'
                                        */
  real_T SPN3357_ActMaxAvailEngPercTrq_Y;/* Computed Parameter: SPN3357_ActMaxAvailEngPercTrq_Y
                                          * Referenced by: '<S563>/SPN3357_ActMaxAvailEngPercTrq'
                                          */
  real_T SPN5398_EstPumpingPercentTorque;/* Computed Parameter: SPN5398_EstPumpingPercentTorque
                                          * Referenced by: '<S563>/SPN5398_EstPumpingPercentTorque'
                                          */
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S563>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S563>/RX time'
                                        */
  real_T RXdeltatime_Y0_ad;            /* Computed Parameter: RXdeltatime_Y0_ad
                                        * Referenced by: '<S563>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S565>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S565>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_mt;               /* Computed Parameter: RXstatus_Y0_mt
                                        * Referenced by: '<S565>/RX status'
                                        */
  real_T RXtime_Y0_lg;                 /* Computed Parameter: RXtime_Y0_lg
                                        * Referenced by: '<S565>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S565>/RX delta time'
                                        */
  real_T SPN524_TransSelectedGear_Y0;  /* Computed Parameter: SPN524_TransSelectedGear_Y0
                                        * Referenced by: '<S567>/SPN524_TransSelectedGear'
                                        */
  real_T SPN526_TransActualGearRatio_Y0;/* Computed Parameter: SPN526_TransActualGearRatio_Y0
                                         * Referenced by: '<S567>/SPN526_TransActualGearRatio'
                                         */
  real_T SPN523_TransCurrentGear_Y0;   /* Computed Parameter: SPN523_TransCurrentGear_Y0
                                        * Referenced by: '<S567>/SPN523_TransCurrentGear'
                                        */
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S567>/RX status'
                                        */
  real_T RXtime_Y0_id;                 /* Computed Parameter: RXtime_Y0_id
                                        * Referenced by: '<S567>/RX time'
                                        */
  real_T RXdeltatime_Y0_ks;            /* Computed Parameter: RXdeltatime_Y0_ks
                                        * Referenced by: '<S567>/RX delta time'
                                        */
  real_T SID_Y0_n;                     /* Computed Parameter: SID_Y0_n
                                        * Referenced by: '<S569>/SID'
                                        */
  real_T SetMode_Y0;                   /* Computed Parameter: SetMode_Y0
                                        * Referenced by: '<S569>/SetMode'
                                        */
  real_T OpMode_Y0;                    /* Computed Parameter: OpMode_Y0
                                        * Referenced by: '<S569>/OpMode'
                                        */
  real_T HDOP_Y0;                      /* Computed Parameter: HDOP_Y0
                                        * Referenced by: '<S569>/HDOP_'
                                        */
  real_T VDOP_Y0;                      /* Computed Parameter: VDOP_Y0
                                        * Referenced by: '<S569>/VDOP'
                                        */
  real_T TDOP_Y0;                      /* Computed Parameter: TDOP_Y0
                                        * Referenced by: '<S569>/TDOP'
                                        */
  real_T RXstatus_Y0_do;               /* Computed Parameter: RXstatus_Y0_do
                                        * Referenced by: '<S569>/RX status'
                                        */
  real_T RXtime_Y0_ir;                 /* Computed Parameter: RXtime_Y0_ir
                                        * Referenced by: '<S569>/RX time'
                                        */
  real_T RXdeltatime_Y0_hy;            /* Computed Parameter: RXdeltatime_Y0_hy
                                        * Referenced by: '<S569>/RX delta time'
                                        */
  real_T SID_Y0_a;                     /* Computed Parameter: SID_Y0_a
                                        * Referenced by: '<S570>/SID'
                                        */
  real_T SetMode_Y0_k;                 /* Computed Parameter: SetMode_Y0_k
                                        * Referenced by: '<S570>/SetMode'
                                        */
  real_T OpMode_Y0_a;                  /* Computed Parameter: OpMode_Y0_a
                                        * Referenced by: '<S570>/OpMode'
                                        */
  real_T HDOP_Y0_h;                    /* Computed Parameter: HDOP_Y0_h
                                        * Referenced by: '<S570>/HDOP_'
                                        */
  real_T VDOP_Y0_c;                    /* Computed Parameter: VDOP_Y0_c
                                        * Referenced by: '<S570>/VDOP'
                                        */
  real_T TDOP_Y0_l;                    /* Computed Parameter: TDOP_Y0_l
                                        * Referenced by: '<S570>/TDOP'
                                        */
  real_T RXstatus_Y0_mp;               /* Computed Parameter: RXstatus_Y0_mp
                                        * Referenced by: '<S570>/RX status'
                                        */
  real_T RXtime_Y0_fz;                 /* Computed Parameter: RXtime_Y0_fz
                                        * Referenced by: '<S570>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
                                        * Referenced by: '<S570>/RX delta time'
                                        */
  real_T FrontAxleLeftWheelSpeed_Y0;   /* Computed Parameter: FrontAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S572>/FrontAxleLeftWheelSpeed'
                                        */
  real_T FrontAxleRightWheelSpeed_Y0;  /* Computed Parameter: FrontAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S572>/FrontAxleRightWheelSpeed'
                                        */
  real_T RearAxleLeftWheelSpeed_Y0;    /* Computed Parameter: RearAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S572>/RearAxleLeftWheelSpeed'
                                        */
  real_T RearAxleRightWheelSpeed_Y0;   /* Computed Parameter: RearAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S572>/RearAxleRightWheelSpeed'
                                        */
  real_T RXstatus_Y0_oa;               /* Computed Parameter: RXstatus_Y0_oa
                                        * Referenced by: '<S572>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S572>/RX time'
                                        */
  real_T RXdeltatime_Y0_b;             /* Computed Parameter: RXdeltatime_Y0_b
                                        * Referenced by: '<S572>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S575>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S575>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_k;                /* Computed Parameter: RXstatus_Y0_k
                                        * Referenced by: '<S575>/RX status'
                                        */
  real_T RXtime_Y0_a0;                 /* Computed Parameter: RXtime_Y0_a0
                                        * Referenced by: '<S575>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
                                        * Referenced by: '<S575>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_i;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_i
                                          * Referenced by: '<S576>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__g;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__g
                                          * Referenced by: '<S576>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_hp;               /* Computed Parameter: RXstatus_Y0_hp
                                        * Referenced by: '<S576>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S576>/RX time'
                                        */
  real_T RXdeltatime_Y0_ba;            /* Computed Parameter: RXdeltatime_Y0_ba
                                        * Referenced by: '<S576>/RX delta time'
                                        */
  real_T byte1_Y0_e;                   /* Computed Parameter: byte1_Y0_e
                                        * Referenced by: '<S581>/byte1'
                                        */
  real_T byte2_Y0_m;                   /* Computed Parameter: byte2_Y0_m
                                        * Referenced by: '<S581>/byte2'
                                        */
  real_T byte3_Y0_j;                   /* Computed Parameter: byte3_Y0_j
                                        * Referenced by: '<S581>/byte3'
                                        */
  real_T byte4_Y0_h;                   /* Computed Parameter: byte4_Y0_h
                                        * Referenced by: '<S581>/byte4'
                                        */
  real_T byte5_Y0_o;                   /* Computed Parameter: byte5_Y0_o
                                        * Referenced by: '<S581>/byte5'
                                        */
  real_T byte6_Y0_f;                   /* Computed Parameter: byte6_Y0_f
                                        * Referenced by: '<S581>/byte6'
                                        */
  real_T byte7_Y0_d;                   /* Computed Parameter: byte7_Y0_d
                                        * Referenced by: '<S581>/byte7'
                                        */
  real_T byte8_Y0_h;                   /* Computed Parameter: byte8_Y0_h
                                        * Referenced by: '<S581>/byte8'
                                        */
  real_T RXstatus_Y0_mk;               /* Computed Parameter: RXstatus_Y0_mk
                                        * Referenced by: '<S581>/RX status'
                                        */
  real_T RXtime_Y0_ep;                 /* Computed Parameter: RXtime_Y0_ep
                                        * Referenced by: '<S581>/RX time'
                                        */
  real_T RXdeltatime_Y0_ed;            /* Computed Parameter: RXdeltatime_Y0_ed
                                        * Referenced by: '<S581>/RX delta time'
                                        */
  real_T byte1_Y0_m;                   /* Computed Parameter: byte1_Y0_m
                                        * Referenced by: '<S582>/byte1'
                                        */
  real_T byte2_Y0_h;                   /* Computed Parameter: byte2_Y0_h
                                        * Referenced by: '<S582>/byte2'
                                        */
  real_T byte3_Y0_m;                   /* Computed Parameter: byte3_Y0_m
                                        * Referenced by: '<S582>/byte3'
                                        */
  real_T byte4_Y0_pq;                  /* Computed Parameter: byte4_Y0_pq
                                        * Referenced by: '<S582>/byte4'
                                        */
  real_T byte5_Y0_m;                   /* Computed Parameter: byte5_Y0_m
                                        * Referenced by: '<S582>/byte5'
                                        */
  real_T byte6_Y0_hl;                  /* Computed Parameter: byte6_Y0_hl
                                        * Referenced by: '<S582>/byte6'
                                        */
  real_T byte7_Y0_c;                   /* Computed Parameter: byte7_Y0_c
                                        * Referenced by: '<S582>/byte7'
                                        */
  real_T byte8_Y0_c;                   /* Computed Parameter: byte8_Y0_c
                                        * Referenced by: '<S582>/byte8'
                                        */
  real_T RXstatus_Y0_lk;               /* Computed Parameter: RXstatus_Y0_lk
                                        * Referenced by: '<S582>/RX status'
                                        */
  real_T RXtime_Y0_jp;                 /* Computed Parameter: RXtime_Y0_jp
                                        * Referenced by: '<S582>/RX time'
                                        */
  real_T RXdeltatime_Y0_co;            /* Computed Parameter: RXdeltatime_Y0_co
                                        * Referenced by: '<S582>/RX delta time'
                                        */
  real_T byte1_Y0_n;                   /* Computed Parameter: byte1_Y0_n
                                        * Referenced by: '<S583>/byte1'
                                        */
  real_T byte2_Y0_p;                   /* Computed Parameter: byte2_Y0_p
                                        * Referenced by: '<S583>/byte2'
                                        */
  real_T byte3_Y0_b;                   /* Computed Parameter: byte3_Y0_b
                                        * Referenced by: '<S583>/byte3'
                                        */
  real_T byte4_Y0_m;                   /* Computed Parameter: byte4_Y0_m
                                        * Referenced by: '<S583>/byte4'
                                        */
  real_T byte5_Y0_c;                   /* Computed Parameter: byte5_Y0_c
                                        * Referenced by: '<S583>/byte5'
                                        */
  real_T byte6_Y0_k;                   /* Computed Parameter: byte6_Y0_k
                                        * Referenced by: '<S583>/byte6'
                                        */
  real_T byte7_Y0_f;                   /* Computed Parameter: byte7_Y0_f
                                        * Referenced by: '<S583>/byte7'
                                        */
  real_T byte8_Y0_ja;                  /* Computed Parameter: byte8_Y0_ja
                                        * Referenced by: '<S583>/byte8'
                                        */
  real_T RXstatus_Y0_mo;               /* Computed Parameter: RXstatus_Y0_mo
                                        * Referenced by: '<S583>/RX status'
                                        */
  real_T RXtime_Y0_ne;                 /* Computed Parameter: RXtime_Y0_ne
                                        * Referenced by: '<S583>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
                                        * Referenced by: '<S583>/RX delta time'
                                        */
  real_T byte1_Y0_n5;                  /* Computed Parameter: byte1_Y0_n5
                                        * Referenced by: '<S594>/byte1'
                                        */
  real_T byte2_Y0_dr;                  /* Computed Parameter: byte2_Y0_dr
                                        * Referenced by: '<S594>/byte2'
                                        */
  real_T byte3_Y0_mi;                  /* Computed Parameter: byte3_Y0_mi
                                        * Referenced by: '<S594>/byte3'
                                        */
  real_T byte4_Y0_b;                   /* Computed Parameter: byte4_Y0_b
                                        * Referenced by: '<S594>/byte4'
                                        */
  real_T byte5_Y0_na;                  /* Computed Parameter: byte5_Y0_na
                                        * Referenced by: '<S594>/byte5'
                                        */
  real_T byte6_Y0_j;                   /* Computed Parameter: byte6_Y0_j
                                        * Referenced by: '<S594>/byte6'
                                        */
  real_T byte7_Y0_j;                   /* Computed Parameter: byte7_Y0_j
                                        * Referenced by: '<S594>/byte7'
                                        */
  real_T byte8_Y0_e;                   /* Computed Parameter: byte8_Y0_e
                                        * Referenced by: '<S594>/byte8'
                                        */
  real_T RXstatus_Y0_ng;               /* Computed Parameter: RXstatus_Y0_ng
                                        * Referenced by: '<S594>/RX status'
                                        */
  real_T RXtime_Y0_js;                 /* Computed Parameter: RXtime_Y0_js
                                        * Referenced by: '<S594>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
                                        * Referenced by: '<S594>/RX delta time'
                                        */
  real_T byte1_Y0_k;                   /* Computed Parameter: byte1_Y0_k
                                        * Referenced by: '<S595>/byte1'
                                        */
  real_T byte2_Y0_e;                   /* Computed Parameter: byte2_Y0_e
                                        * Referenced by: '<S595>/byte2'
                                        */
  real_T byte3_Y0_p;                   /* Computed Parameter: byte3_Y0_p
                                        * Referenced by: '<S595>/byte3'
                                        */
  real_T byte4_Y0_l;                   /* Computed Parameter: byte4_Y0_l
                                        * Referenced by: '<S595>/byte4'
                                        */
  real_T byte5_Y0_h;                   /* Computed Parameter: byte5_Y0_h
                                        * Referenced by: '<S595>/byte5'
                                        */
  real_T byte6_Y0_e;                   /* Computed Parameter: byte6_Y0_e
                                        * Referenced by: '<S595>/byte6'
                                        */
  real_T byte7_Y0_h;                   /* Computed Parameter: byte7_Y0_h
                                        * Referenced by: '<S595>/byte7'
                                        */
  real_T byte8_Y0_n;                   /* Computed Parameter: byte8_Y0_n
                                        * Referenced by: '<S595>/byte8'
                                        */
  real_T RXstatus_Y0_gm;               /* Computed Parameter: RXstatus_Y0_gm
                                        * Referenced by: '<S595>/RX status'
                                        */
  real_T RXtime_Y0_fg;                 /* Computed Parameter: RXtime_Y0_fg
                                        * Referenced by: '<S595>/RX time'
                                        */
  real_T RXdeltatime_Y0_cp;            /* Computed Parameter: RXdeltatime_Y0_cp
                                        * Referenced by: '<S595>/RX delta time'
                                        */
  real_T byte1_Y0_o;                   /* Computed Parameter: byte1_Y0_o
                                        * Referenced by: '<S596>/byte1'
                                        */
  real_T byte2_Y0_l;                   /* Computed Parameter: byte2_Y0_l
                                        * Referenced by: '<S596>/byte2'
                                        */
  real_T byte3_Y0_h;                   /* Computed Parameter: byte3_Y0_h
                                        * Referenced by: '<S596>/byte3'
                                        */
  real_T byte4_Y0_hf;                  /* Computed Parameter: byte4_Y0_hf
                                        * Referenced by: '<S596>/byte4'
                                        */
  real_T byte5_Y0_o2;                  /* Computed Parameter: byte5_Y0_o2
                                        * Referenced by: '<S596>/byte5'
                                        */
  real_T byte6_Y0_m;                   /* Computed Parameter: byte6_Y0_m
                                        * Referenced by: '<S596>/byte6'
                                        */
  real_T byte7_Y0_h2;                  /* Computed Parameter: byte7_Y0_h2
                                        * Referenced by: '<S596>/byte7'
                                        */
  real_T byte8_Y0_l;                   /* Computed Parameter: byte8_Y0_l
                                        * Referenced by: '<S596>/byte8'
                                        */
  real_T RXstatus_Y0_hr;               /* Computed Parameter: RXstatus_Y0_hr
                                        * Referenced by: '<S596>/RX status'
                                        */
  real_T RXtime_Y0_n0;                 /* Computed Parameter: RXtime_Y0_n0
                                        * Referenced by: '<S596>/RX time'
                                        */
  real_T RXdeltatime_Y0_lo;            /* Computed Parameter: RXdeltatime_Y0_lo
                                        * Referenced by: '<S596>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S607>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S607>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_gu;               /* Computed Parameter: RXstatus_Y0_gu
                                        * Referenced by: '<S607>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S607>/RX time'
                                        */
  real_T RXdeltatime_Y0_ls;            /* Computed Parameter: RXdeltatime_Y0_ls
                                        * Referenced by: '<S607>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_n;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_n
                                          * Referenced by: '<S608>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_p;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_p
                                          * Referenced by: '<S608>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_j;                /* Computed Parameter: RXstatus_Y0_j
                                        * Referenced by: '<S608>/RX status'
                                        */
  real_T RXtime_Y0_ht;                 /* Computed Parameter: RXtime_Y0_ht
                                        * Referenced by: '<S608>/RX time'
                                        */
  real_T RXdeltatime_Y0_gz;            /* Computed Parameter: RXdeltatime_Y0_gz
                                        * Referenced by: '<S608>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_a;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_a
                                          * Referenced by: '<S609>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y_pg;/* Computed Parameter: EPBPCMManualStatusFeedback_Y_pg
                                          * Referenced by: '<S609>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_ka;               /* Computed Parameter: RXstatus_Y0_ka
                                        * Referenced by: '<S609>/RX status'
                                        */
  real_T RXtime_Y0_pr;                 /* Computed Parameter: RXtime_Y0_pr
                                        * Referenced by: '<S609>/RX time'
                                        */
  real_T RXdeltatime_Y0_hn;            /* Computed Parameter: RXdeltatime_Y0_hn
                                        * Referenced by: '<S609>/RX delta time'
                                        */
  real_T PX2_LaneEdgeLeftAngle_Y0;     /* Computed Parameter: PX2_LaneEdgeLeftAngle_Y0
                                        * Referenced by: '<S617>/PX2_LaneEdgeLeftAngle'
                                        */
  real_T PX2_LaneEdgeLeftNumPoints_Y0; /* Computed Parameter: PX2_LaneEdgeLeftNumPoints_Y0
                                        * Referenced by: '<S617>/PX2_LaneEdgeLeftNumPoints'
                                        */
  real_T PX2_LaneEdgeLeftPosition_Y0;  /* Computed Parameter: PX2_LaneEdgeLeftPosition_Y0
                                        * Referenced by: '<S617>/PX2_LaneEdgeLeftPosition'
                                        */
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S617>/RX status'
                                        */
  real_T RXtime_Y0_lm;                 /* Computed Parameter: RXtime_Y0_lm
                                        * Referenced by: '<S617>/RX time'
                                        */
  real_T RXdeltatime_Y0_kr;            /* Computed Parameter: RXdeltatime_Y0_kr
                                        * Referenced by: '<S617>/RX delta time'
                                        */
  real_T PX2_LaneEdgeRightAngle_Y0;    /* Computed Parameter: PX2_LaneEdgeRightAngle_Y0
                                        * Referenced by: '<S618>/PX2_LaneEdgeRightAngle'
                                        */
  real_T PX2_LaneEdgeRightNumPoints_Y0;/* Computed Parameter: PX2_LaneEdgeRightNumPoints_Y0
                                        * Referenced by: '<S618>/PX2_LaneEdgeRightNumPoints'
                                        */
  real_T PX2_LaneEdgeRightPosition_Y0; /* Computed Parameter: PX2_LaneEdgeRightPosition_Y0
                                        * Referenced by: '<S618>/PX2_LaneEdgeRightPosition'
                                        */
  real_T RXstatus_Y0_p;                /* Computed Parameter: RXstatus_Y0_p
                                        * Referenced by: '<S618>/RX status'
                                        */
  real_T RXtime_Y0_ad;                 /* Computed Parameter: RXtime_Y0_ad
                                        * Referenced by: '<S618>/RX time'
                                        */
  real_T RXdeltatime_Y0_ag;            /* Computed Parameter: RXdeltatime_Y0_ag
                                        * Referenced by: '<S618>/RX delta time'
                                        */
  real_T PX2_LanePosEstAngle_Y0;       /* Computed Parameter: PX2_LanePosEstAngle_Y0
                                        * Referenced by: '<S619>/PX2_LanePosEstAngle'
                                        */
  real_T PX2_LanePosEstNumPoints_Y0;   /* Computed Parameter: PX2_LanePosEstNumPoints_Y0
                                        * Referenced by: '<S619>/PX2_LanePosEstNumPoints'
                                        */
  real_T PX2_LanePosEstPosition_Y0;    /* Computed Parameter: PX2_LanePosEstPosition_Y0
                                        * Referenced by: '<S619>/PX2_LanePosEstPosition'
                                        */
  real_T PX2_LanePosEstNumLanes_Y0;    /* Computed Parameter: PX2_LanePosEstNumLanes_Y0
                                        * Referenced by: '<S619>/PX2_LanePosEstNumLanes'
                                        */
  real_T RXstatus_Y0_di;               /* Computed Parameter: RXstatus_Y0_di
                                        * Referenced by: '<S619>/RX status'
                                        */
  real_T RXtime_Y0_mh;                 /* Computed Parameter: RXtime_Y0_mh
                                        * Referenced by: '<S619>/RX time'
                                        */
  real_T RXdeltatime_Y0_asz;           /* Computed Parameter: RXdeltatime_Y0_asz
                                        * Referenced by: '<S619>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S621>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S621>/Longitude_'
                                        */
  real_T RXstatus_Y0_fa;               /* Computed Parameter: RXstatus_Y0_fa
                                        * Referenced by: '<S621>/RX status'
                                        */
  real_T RXtime_Y0_ai;                 /* Computed Parameter: RXtime_Y0_ai
                                        * Referenced by: '<S621>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
                                        * Referenced by: '<S621>/RX delta time'
                                        */
  real_T Latitude_Y0_i;                /* Computed Parameter: Latitude_Y0_i
                                        * Referenced by: '<S622>/Latitude_'
                                        */
  real_T Longitude_Y0_j;               /* Computed Parameter: Longitude_Y0_j
                                        * Referenced by: '<S622>/Longitude_'
                                        */
  real_T RXstatus_Y0_gl;               /* Computed Parameter: RXstatus_Y0_gl
                                        * Referenced by: '<S622>/RX status'
                                        */
  real_T RXtime_Y0_ii;                 /* Computed Parameter: RXtime_Y0_ii
                                        * Referenced by: '<S622>/RX time'
                                        */
  real_T RXdeltatime_Y0_i3;            /* Computed Parameter: RXdeltatime_Y0_i3
                                        * Referenced by: '<S622>/RX delta time'
                                        */
  real_T PressureP4_Y0;                /* Computed Parameter: PressureP4_Y0
                                        * Referenced by: '<S624>/PressureP4'
                                        */
  real_T PressureP1_Y0;                /* Computed Parameter: PressureP1_Y0
                                        * Referenced by: '<S624>/PressureP1'
                                        */
  real_T PressureP21_Y0;               /* Computed Parameter: PressureP21_Y0
                                        * Referenced by: '<S624>/PressureP21'
                                        */
  real_T PressureP22_Y0;               /* Computed Parameter: PressureP22_Y0
                                        * Referenced by: '<S624>/PressureP22'
                                        */
  real_T PressureP42_Y0;               /* Computed Parameter: PressureP42_Y0
                                        * Referenced by: '<S624>/PressureP42'
                                        */
  real_T XPR1ControlStatus_Y0;         /* Computed Parameter: XPR1ControlStatus_Y0
                                        * Referenced by: '<S624>/XPR1ControlStatus'
                                        */
  real_T XPR2ControlStatus_Y0;         /* Computed Parameter: XPR2ControlStatus_Y0
                                        * Referenced by: '<S624>/XPR2ControlStatus'
                                        */
  real_T XPR3ControlStatus_Y0;         /* Computed Parameter: XPR3ControlStatus_Y0
                                        * Referenced by: '<S624>/XPR3ControlStatus'
                                        */
  real_T XPRErrorState_Y0;             /* Computed Parameter: XPRErrorState_Y0
                                        * Referenced by: '<S624>/XPRErrorState'
                                        */
  real_T XPRControlMode_Y0;            /* Computed Parameter: XPRControlMode_Y0
                                        * Referenced by: '<S624>/XPRControlMode'
                                        */
  real_T RXstatus_Y0_fb;               /* Computed Parameter: RXstatus_Y0_fb
                                        * Referenced by: '<S624>/RX status'
                                        */
  real_T RXtime_Y0_a2;                 /* Computed Parameter: RXtime_Y0_a2
                                        * Referenced by: '<S624>/RX time'
                                        */
  real_T RXdeltatime_Y0_bs;            /* Computed Parameter: RXdeltatime_Y0_bs
                                        * Referenced by: '<S624>/RX delta time'
                                        */
  real_T PitchAngleExRange_Y0;         /* Computed Parameter: PitchAngleExRange_Y0
                                        * Referenced by: '<S626>/PitchAngleExRange'
                                        */
  real_T RollAngleExRange_Y0;          /* Computed Parameter: RollAngleExRange_Y0
                                        * Referenced by: '<S626>/RollAngleExRange'
                                        */
  real_T PitchAngleExRangeCompensation_Y;/* Computed Parameter: PitchAngleExRangeCompensation_Y
                                          * Referenced by: '<S626>/PitchAngleExRangeCompensation'
                                          */
  real_T PitchAngleExRangeFigureOfMerit_;/* Computed Parameter: PitchAngleExRangeFigureOfMerit_
                                          * Referenced by: '<S626>/PitchAngleExRangeFigureOfMerit'
                                          */
  real_T RollAngleExRangeCompensation_Y0;/* Computed Parameter: RollAngleExRangeCompensation_Y0
                                          * Referenced by: '<S626>/RollAngleExRangeCompensation'
                                          */
  real_T RollAngleExRangeFigureOfMerit_Y;/* Computed Parameter: RollAngleExRangeFigureOfMerit_Y
                                          * Referenced by: '<S626>/RollAngleExRangeFigureOfMerit'
                                          */
  real_T RllAndPtchExRngMsurementLatency;/* Computed Parameter: RllAndPtchExRngMsurementLatency
                                          * Referenced by: '<S626>/RllAndPtchExRngMsurementLatency'
                                          */
  real_T RXstatus_Y0_ea;               /* Computed Parameter: RXstatus_Y0_ea
                                        * Referenced by: '<S626>/RX status'
                                        */
  real_T RXtime_Y0_in;                 /* Computed Parameter: RXtime_Y0_in
                                        * Referenced by: '<S626>/RX time'
                                        */
  real_T RXdeltatime_Y0_ds;            /* Computed Parameter: RXdeltatime_Y0_ds
                                        * Referenced by: '<S626>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0;        /* Computed Parameter: PX2_MapLaneNearPos_Y0
                                        * Referenced by: '<S628>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0;         /* Computed Parameter: PX2_MapLaneMidPos_Y0
                                        * Referenced by: '<S628>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0;         /* Computed Parameter: PX2_MapLaneFarPos_Y0
                                        * Referenced by: '<S628>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0;   /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0
                                        * Referenced by: '<S628>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0
                                        * Referenced by: '<S628>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0
                                        * Referenced by: '<S628>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_l1;               /* Computed Parameter: RXstatus_Y0_l1
                                        * Referenced by: '<S628>/RX status'
                                        */
  real_T RXtime_Y0_g;                  /* Computed Parameter: RXtime_Y0_g
                                        * Referenced by: '<S628>/RX time'
                                        */
  real_T RXdeltatime_Y0_gm;            /* Computed Parameter: RXdeltatime_Y0_gm
                                        * Referenced by: '<S628>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_m;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_m
                                        * Referenced by: '<S630>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_j;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_j
                                        * Referenced by: '<S630>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_a;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_a
                                        * Referenced by: '<S630>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_i; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_i
                                        * Referenced by: '<S630>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_j;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_j
                                        * Referenced by: '<S630>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_k;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_k
                                        * Referenced by: '<S630>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_k0;               /* Computed Parameter: RXstatus_Y0_k0
                                        * Referenced by: '<S630>/RX status'
                                        */
  real_T RXtime_Y0_nb;                 /* Computed Parameter: RXtime_Y0_nb
                                        * Referenced by: '<S630>/RX time'
                                        */
  real_T RXdeltatime_Y0_of;            /* Computed Parameter: RXdeltatime_Y0_of
                                        * Referenced by: '<S630>/RX delta time'
                                        */
  real_T PX2_EgoLaneNearPosErr_Y0;     /* Computed Parameter: PX2_EgoLaneNearPosErr_Y0
                                        * Referenced by: '<S632>/PX2_EgoLaneNearPosErr'
                                        */
  real_T PX2_EgoLaneMidPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneMidPosErr_Y0
                                        * Referenced by: '<S632>/PX2_EgoLaneMidPosErr'
                                        */
  real_T PX2_EgoLaneFarPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneFarPosErr_Y0
                                        * Referenced by: '<S632>/PX2_EgoLaneFarPosErr'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_m; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_m
                                        * Referenced by: '<S632>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_g;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_g
                                        * Referenced by: '<S632>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_ki; /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_ki
                                        * Referenced by: '<S632>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_cfn;              /* Computed Parameter: RXstatus_Y0_cfn
                                        * Referenced by: '<S632>/RX status'
                                        */
  real_T RXtime_Y0_hq;                 /* Computed Parameter: RXtime_Y0_hq
                                        * Referenced by: '<S632>/RX time'
                                        */
  real_T RXdeltatime_Y0_el;            /* Computed Parameter: RXdeltatime_Y0_el
                                        * Referenced by: '<S632>/RX delta time'
                                        */
  real_T SID_Y0_c;                     /* Computed Parameter: SID_Y0_c
                                        * Referenced by: '<S634>/SID'
                                        */
  real_T Source_Y0;                    /* Computed Parameter: Source_Y0
                                        * Referenced by: '<S634>/Source'
                                        */
  real_T Date_Y0;                      /* Computed Parameter: Date_Y0
                                        * Referenced by: '<S634>/Date'
                                        */
  real_T Time_Y0;                      /* Computed Parameter: Time_Y0
                                        * Referenced by: '<S634>/Time'
                                        */
  real_T RXstatus_Y0_fr;               /* Computed Parameter: RXstatus_Y0_fr
                                        * Referenced by: '<S634>/RX status'
                                        */
  real_T RXtime_Y0_ex;                 /* Computed Parameter: RXtime_Y0_ex
                                        * Referenced by: '<S634>/RX time'
                                        */
  real_T RXdeltatime_Y0_f;             /* Computed Parameter: RXdeltatime_Y0_f
                                        * Referenced by: '<S634>/RX delta time'
                                        */
  real_T SPN681_TransGearShiftInhibitReq;/* Computed Parameter: SPN681_TransGearShiftInhibitReq
                                          * Referenced by: '<S636>/SPN681_TransGearShiftInhibitReq'
                                          */
  real_T SPN682_TransTrqConvLockupDisReq;/* Computed Parameter: SPN682_TransTrqConvLockupDisReq
                                          * Referenced by: '<S636>/SPN682_TransTrqConvLockupDisReq'
                                          */
  real_T SPN683_DisengageDrivelineReq_Y0;/* Computed Parameter: SPN683_DisengageDrivelineReq_Y0
                                          * Referenced by: '<S636>/SPN683_DisengageDrivelineReq'
                                          */
  real_T SPN4242_TransRevGearShiftInhibR;/* Computed Parameter: SPN4242_TransRevGearShiftInhibR
                                          * Referenced by: '<S636>/SPN4242_TransRevGearShiftInhibRq'
                                          */
  real_T SPN684_RequestedPercClutchSlip_;/* Computed Parameter: SPN684_RequestedPercClutchSlip_
                                          * Referenced by: '<S636>/SPN684_RequestedPercClutchSlip'
                                          */
  real_T SPN525_TransRequestedGear_Y0; /* Computed Parameter: SPN525_TransRequestedGear_Y0
                                        * Referenced by: '<S636>/SPN525_TransRequestedGear'
                                        */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* Computed Parameter: SPN685_DisengageDiffLockRqFrAx1
                                          * Referenced by: '<S636>/SPN685_DisengageDiffLockRqFrAx1'
                                          */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* Computed Parameter: SPN686_DisengageDiffLockRqFrAx2
                                          * Referenced by: '<S636>/SPN686_DisengageDiffLockRqFrAx2'
                                          */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* Computed Parameter: SPN687_DisengageDiffLockRqRrAx1
                                          * Referenced by: '<S636>/SPN687_DisengageDiffLockRqRrAx1'
                                          */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* Computed Parameter: SPN688_DisengageDiffLockRqRrAx2
                                          * Referenced by: '<S636>/SPN688_DisengageDiffLockRqRrAx2'
                                          */
  real_T SPN689_DisengageDiffLockRqC_Y0;/* Computed Parameter: SPN689_DisengageDiffLockRqC_Y0
                                         * Referenced by: '<S636>/SPN689_DisengageDiffLockRqC'
                                         */
  real_T SPN690_DisengageDiffLockRqCF_Y0;/* Computed Parameter: SPN690_DisengageDiffLockRqCF_Y0
                                          * Referenced by: '<S636>/SPN690_DisengageDiffLockRqCF'
                                          */
  real_T SPN691_DisengageDiffLockRqCR_Y0;/* Computed Parameter: SPN691_DisengageDiffLockRqCR_Y0
                                          * Referenced by: '<S636>/SPN691_DisengageDiffLockRqCR'
                                          */
  real_T SPN5762_TransLoadRedInhibitRq_Y;/* Computed Parameter: SPN5762_TransLoadRedInhibitRq_Y
                                          * Referenced by: '<S636>/SPN5762_TransLoadRedInhibitRq'
                                          */
  real_T SPN1852_TransmissionMode1_Y0; /* Computed Parameter: SPN1852_TransmissionMode1_Y0
                                        * Referenced by: '<S636>/SPN1852_TransmissionMode1'
                                        */
  real_T SPN1853_TransmissionMode2_Y0; /* Computed Parameter: SPN1853_TransmissionMode2_Y0
                                        * Referenced by: '<S636>/SPN1853_TransmissionMode2'
                                        */
  real_T SPN1854_TransmissionMode3_Y0; /* Computed Parameter: SPN1854_TransmissionMode3_Y0
                                        * Referenced by: '<S636>/SPN1854_TransmissionMode3'
                                        */
  real_T SPN1855_TransmissionMode4_Y0; /* Computed Parameter: SPN1855_TransmissionMode4_Y0
                                        * Referenced by: '<S636>/SPN1855_TransmissionMode4'
                                        */
  real_T SPN7695_TransAutoNeutralRequest;/* Computed Parameter: SPN7695_TransAutoNeutralRequest
                                          * Referenced by: '<S636>/SPN7695_TransAutoNeutralRequest'
                                          */
  real_T SPN4255_TransRequestedLaunchGea;/* Computed Parameter: SPN4255_TransRequestedLaunchGea
                                          * Referenced by: '<S636>/SPN4255_TransRequestedLaunchGear'
                                          */
  real_T SPN2985_TransShiftSelDispModeSw;/* Computed Parameter: SPN2985_TransShiftSelDispModeSw
                                          * Referenced by: '<S636>/SPN2985_TransShiftSelDispModeSw'
                                          */
  real_T SPN4246_TransmissionMode5_Y0; /* Computed Parameter: SPN4246_TransmissionMode5_Y0
                                        * Referenced by: '<S636>/SPN4246_TransmissionMode5'
                                        */
  real_T SPN4247_TransmissionMode6_Y0; /* Computed Parameter: SPN4247_TransmissionMode6_Y0
                                        * Referenced by: '<S636>/SPN4247_TransmissionMode6'
                                        */
  real_T SPN4248_TransmissionMode7_Y0; /* Computed Parameter: SPN4248_TransmissionMode7_Y0
                                        * Referenced by: '<S636>/SPN4248_TransmissionMode7'
                                        */
  real_T SPN4249_TransmissionMode8_Y0; /* Computed Parameter: SPN4249_TransmissionMode8_Y0
                                        * Referenced by: '<S636>/SPN4249_TransmissionMode8'
                                        */
  real_T RXstatus_Y0_bg;               /* Computed Parameter: RXstatus_Y0_bg
                                        * Referenced by: '<S636>/RX status'
                                        */
  real_T RXtime_Y0_od;                 /* Computed Parameter: RXtime_Y0_od
                                        * Referenced by: '<S636>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
                                        * Referenced by: '<S636>/RX delta time'
                                        */
  real_T VDCInformationSignal_Y0;      /* Computed Parameter: VDCInformationSignal_Y0
                                        * Referenced by: '<S638>/VDCInformationSignal'
                                        */
  real_T VDCFullyOperational_Y0;       /* Computed Parameter: VDCFullyOperational_Y0
                                        * Referenced by: '<S638>/VDCFullyOperational'
                                        */
  real_T VDCBrakeLightRq_Y0;           /* Computed Parameter: VDCBrakeLightRq_Y0
                                        * Referenced by: '<S638>/VDCBrakeLightRq'
                                        */
  real_T ROPEngCtrlActive_Y0;          /* Computed Parameter: ROPEngCtrlActive_Y0
                                        * Referenced by: '<S638>/ROPEngCtrlActive'
                                        */
  real_T ROPBrakeCtrlActive_Y0;        /* Computed Parameter: ROPBrakeCtrlActive_Y0
                                        * Referenced by: '<S638>/ROPBrakeCtrlActive'
                                        */
  real_T YCEngCtrlActive_Y0;           /* Computed Parameter: YCEngCtrlActive_Y0
                                        * Referenced by: '<S638>/YCEngCtrlActive'
                                        */
  real_T YCBrakeCtrlActive_Y0;         /* Computed Parameter: YCBrakeCtrlActive_Y0
                                        * Referenced by: '<S638>/YCBrakeCtrlActive'
                                        */
  real_T RXstatus_Y0_f2;               /* Computed Parameter: RXstatus_Y0_f2
                                        * Referenced by: '<S638>/RX status'
                                        */
  real_T RXtime_Y0_gj;                 /* Computed Parameter: RXtime_Y0_gj
                                        * Referenced by: '<S638>/RX time'
                                        */
  real_T RXdeltatime_Y0_cs;            /* Computed Parameter: RXdeltatime_Y0_cs
                                        * Referenced by: '<S638>/RX delta time'
                                        */
  real_T SteerWheelAngle_Y0;           /* Computed Parameter: SteerWheelAngle_Y0
                                        * Referenced by: '<S640>/SteerWheelAngle'
                                        */
  real_T SteerWheelTurnCounter_Y0;     /* Computed Parameter: SteerWheelTurnCounter_Y0
                                        * Referenced by: '<S640>/SteerWheelTurnCounter'
                                        */
  real_T SteerWheelAngleSensorType_Y0; /* Computed Parameter: SteerWheelAngleSensorType_Y0
                                        * Referenced by: '<S640>/SteerWheelAngleSensorType'
                                        */
  real_T YawRate_Y0;                   /* Computed Parameter: YawRate_Y0
                                        * Referenced by: '<S640>/YawRate'
                                        */
  real_T LateralAcceleration_Y0;       /* Computed Parameter: LateralAcceleration_Y0
                                        * Referenced by: '<S640>/LateralAcceleration'
                                        */
  real_T LongitudinalAcceleration_Y0;  /* Computed Parameter: LongitudinalAcceleration_Y0
                                        * Referenced by: '<S640>/LongitudinalAcceleration'
                                        */
  real_T RXstatus_Y0_nx;               /* Computed Parameter: RXstatus_Y0_nx
                                        * Referenced by: '<S640>/RX status'
                                        */
  real_T RXtime_Y0_iw;                 /* Computed Parameter: RXtime_Y0_iw
                                        * Referenced by: '<S640>/RX time'
                                        */
  real_T RXdeltatime_Y0_pe;            /* Computed Parameter: RXdeltatime_Y0_pe
                                        * Referenced by: '<S640>/RX delta time'
                                        */
  real_T NetBatteryCurrent_Y0;         /* Computed Parameter: NetBatteryCurrent_Y0
                                        * Referenced by: '<S642>/NetBatteryCurrent'
                                        */
  real_T AltCurrent_Y0;                /* Computed Parameter: AltCurrent_Y0
                                        * Referenced by: '<S642>/AltCurrent'
                                        */
  real_T ChargingSystemPotential_Y0;   /* Computed Parameter: ChargingSystemPotential_Y0
                                        * Referenced by: '<S642>/ChargingSystemPotential'
                                        */
  real_T BatteryPotential_PowerInput1_Y0;/* Computed Parameter: BatteryPotential_PowerInput1_Y0
                                          * Referenced by: '<S642>/BatteryPotential_PowerInput1'
                                          */
  real_T KeyswitchBatteryPotential_Y0; /* Computed Parameter: KeyswitchBatteryPotential_Y0
                                        * Referenced by: '<S642>/KeyswitchBatteryPotential'
                                        */
  real_T RXstatus_Y0_ai;               /* Computed Parameter: RXstatus_Y0_ai
                                        * Referenced by: '<S642>/RX status'
                                        */
  real_T RXtime_Y0_e2;                 /* Computed Parameter: RXtime_Y0_e2
                                        * Referenced by: '<S642>/RX time'
                                        */
  real_T RXdeltatime_Y0_es;            /* Computed Parameter: RXdeltatime_Y0_es
                                        * Referenced by: '<S642>/RX delta time'
                                        */
  real_T RX_time_Y0_i;                 /* Computed Parameter: RX_time_Y0_i
                                        * Referenced by: '<S646>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_g;/* Expression: 0
                                        * Referenced by: '<S646>/Unit_Delay'
                                        */
  real_T Out_Y0_j;                     /* Computed Parameter: Out_Y0_j
                                        * Referenced by: '<S682>/Out'
                                        */
  real_T Out_Y0_i;                     /* Computed Parameter: Out_Y0_i
                                        * Referenced by: '<S683>/Out'
                                        */
  real_T Out_Y0_c;                     /* Computed Parameter: Out_Y0_c
                                        * Referenced by: '<S684>/Out'
                                        */
  real_T Out_Y0_n;                     /* Computed Parameter: Out_Y0_n
                                        * Referenced by: '<S685>/Out'
                                        */
  real_T Out_Y0_cv;                    /* Computed Parameter: Out_Y0_cv
                                        * Referenced by: '<S686>/Out'
                                        */
  real_T Constant1_Value_k;            /* Expression: 0
                                        * Referenced by: '<S741>/Constant1'
                                        */
  real_T Constant_Value_af;            /* Expression: 1
                                        * Referenced by: '<S741>/Constant'
                                        */
  real_T Constant1_Value_fx;           /* Expression: 0
                                        * Referenced by: '<S742>/Constant1'
                                        */
  real_T Constant_Value_p0;            /* Expression: 1
                                        * Referenced by: '<S742>/Constant'
                                        */
  real_T Out_Y0_p;                     /* Computed Parameter: Out_Y0_p
                                        * Referenced by: '<S752>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_oc;/* Expression: 0.0
                                          * Referenced by: '<S827>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_l0;           /* Expression: 1
                                        * Referenced by: '<S752>/Constant1'
                                        */
  real_T Out1_Y0_i;                    /* Computed Parameter: Out1_Y0_i
                                        * Referenced by: '<S832>/Out1'
                                        */
  real_T Constant1_Value_or;           /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S832>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_c0t;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                          * Referenced by: '<S832>/Unit_Delay'
                                          */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S855>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S855>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S855>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S855>/TX delay time'
                                        */
  real_T TXstatus_Y0_p;                /* Computed Parameter: TXstatus_Y0_p
                                        * Referenced by: '<S863>/TX status'
                                        */
  real_T TXtime_Y0_a;                  /* Computed Parameter: TXtime_Y0_a
                                        * Referenced by: '<S863>/TX time'
                                        */
  real_T TXdeltatime_Y0_l;             /* Computed Parameter: TXdeltatime_Y0_l
                                        * Referenced by: '<S863>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S863>/TX delay time'
                                        */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S875>/TX status'
                                        */
  real_T TXtime_Y0_d;                  /* Computed Parameter: TXtime_Y0_d
                                        * Referenced by: '<S875>/TX time'
                                        */
  real_T TXdeltatime_Y0_p;             /* Computed Parameter: TXdeltatime_Y0_p
                                        * Referenced by: '<S875>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i;             /* Computed Parameter: TXdelaytime_Y0_i
                                        * Referenced by: '<S875>/TX delay time'
                                        */
  real_T TXstatus_Y0_h;                /* Computed Parameter: TXstatus_Y0_h
                                        * Referenced by: '<S876>/TX status'
                                        */
  real_T TXtime_Y0_i;                  /* Computed Parameter: TXtime_Y0_i
                                        * Referenced by: '<S876>/TX time'
                                        */
  real_T TXdeltatime_Y0_e;             /* Computed Parameter: TXdeltatime_Y0_e
                                        * Referenced by: '<S876>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S876>/TX delay time'
                                        */
  real_T TXstatus_Y0_pd;               /* Computed Parameter: TXstatus_Y0_pd
                                        * Referenced by: '<S879>/TX status'
                                        */
  real_T TXtime_Y0_c;                  /* Computed Parameter: TXtime_Y0_c
                                        * Referenced by: '<S879>/TX time'
                                        */
  real_T TXdeltatime_Y0_k;             /* Computed Parameter: TXdeltatime_Y0_k
                                        * Referenced by: '<S879>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S879>/TX delay time'
                                        */
  real_T TXstatus_Y0_jo;               /* Computed Parameter: TXstatus_Y0_jo
                                        * Referenced by: '<S880>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S880>/TX time'
                                        */
  real_T TXdeltatime_Y0_ka;            /* Computed Parameter: TXdeltatime_Y0_ka
                                        * Referenced by: '<S880>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d;             /* Computed Parameter: TXdelaytime_Y0_d
                                        * Referenced by: '<S880>/TX delay time'
                                        */
  real_T TXstatus_Y0_f;                /* Computed Parameter: TXstatus_Y0_f
                                        * Referenced by: '<S895>/TX status'
                                        */
  real_T TXtime_Y0_d1;                 /* Computed Parameter: TXtime_Y0_d1
                                        * Referenced by: '<S895>/TX time'
                                        */
  real_T TXdeltatime_Y0_ld;            /* Computed Parameter: TXdeltatime_Y0_ld
                                        * Referenced by: '<S895>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_m;             /* Computed Parameter: TXdelaytime_Y0_m
                                        * Referenced by: '<S895>/TX delay time'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S896>/TX status'
                                        */
  real_T TXtime_Y0_h;                  /* Computed Parameter: TXtime_Y0_h
                                        * Referenced by: '<S896>/TX time'
                                        */
  real_T TXdeltatime_Y0_pu;            /* Computed Parameter: TXdeltatime_Y0_pu
                                        * Referenced by: '<S896>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_n;             /* Computed Parameter: TXdelaytime_Y0_n
                                        * Referenced by: '<S896>/TX delay time'
                                        */
  real_T TXstatus_Y0_l;                /* Computed Parameter: TXstatus_Y0_l
                                        * Referenced by: '<S898>/TX status'
                                        */
  real_T TXtime_Y0_cy;                 /* Computed Parameter: TXtime_Y0_cy
                                        * Referenced by: '<S898>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S898>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kj;            /* Computed Parameter: TXdelaytime_Y0_kj
                                        * Referenced by: '<S898>/TX delay time'
                                        */
  real_T TXstatus_Y0_a;                /* Computed Parameter: TXstatus_Y0_a
                                        * Referenced by: '<S900>/TX status'
                                        */
  real_T TXtime_Y0_j;                  /* Computed Parameter: TXtime_Y0_j
                                        * Referenced by: '<S900>/TX time'
                                        */
  real_T TXdeltatime_Y0_li;            /* Computed Parameter: TXdeltatime_Y0_li
                                        * Referenced by: '<S900>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_dk;            /* Computed Parameter: TXdelaytime_Y0_dk
                                        * Referenced by: '<S900>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S913>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S921>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_m;/* Expression: 0
                                        * Referenced by: '<S913>/Unit_Delay'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S922>/Constant'
                                        */
  real_T TXstatus_Y0_n;                /* Computed Parameter: TXstatus_Y0_n
                                        * Referenced by: '<S924>/TX status'
                                        */
  real_T TXtime_Y0_dq;                 /* Computed Parameter: TXtime_Y0_dq
                                        * Referenced by: '<S924>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S924>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_e;             /* Computed Parameter: TXdelaytime_Y0_e
                                        * Referenced by: '<S924>/TX delay time'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S877>/Constant'
                                        */
  real_T Constant1_Value_nw;           /* Expression: 1
                                        * Referenced by: '<S877>/Constant1'
                                        */
  real_T Constant_Value_kq;            /* Expression: 0
                                        * Referenced by: '<S878>/Constant'
                                        */
  real_T Constant1_Value_kh;           /* Expression: 1
                                        * Referenced by: '<S878>/Constant1'
                                        */
  real_T Constant_Value_a0;            /* Expression: 0
                                        * Referenced by: '<S897>/Constant'
                                        */
  real_T Constant1_Value_j1;           /* Expression: 1
                                        * Referenced by: '<S897>/Constant1'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S937>/TX status'
                                        */
  real_T TXtime_Y0_jf;                 /* Computed Parameter: TXtime_Y0_jf
                                        * Referenced by: '<S937>/TX time'
                                        */
  real_T TXdeltatime_Y0_nv;            /* Computed Parameter: TXdeltatime_Y0_nv
                                        * Referenced by: '<S937>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i4;            /* Computed Parameter: TXdelaytime_Y0_i4
                                        * Referenced by: '<S937>/TX delay time'
                                        */
  real_T TXstatus_Y0_jj;               /* Computed Parameter: TXstatus_Y0_jj
                                        * Referenced by: '<S946>/TX status'
                                        */
  real_T TXtime_Y0_g3;                 /* Computed Parameter: TXtime_Y0_g3
                                        * Referenced by: '<S946>/TX time'
                                        */
  real_T TXdeltatime_Y0_p2;            /* Computed Parameter: TXdeltatime_Y0_p2
                                        * Referenced by: '<S946>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_mn;            /* Computed Parameter: TXdelaytime_Y0_mn
                                        * Referenced by: '<S946>/TX delay time'
                                        */
  real_T TXstatus_Y0_az;               /* Computed Parameter: TXstatus_Y0_az
                                        * Referenced by: '<S947>/TX status'
                                        */
  real_T TXtime_Y0_c1;                 /* Computed Parameter: TXtime_Y0_c1
                                        * Referenced by: '<S947>/TX time'
                                        */
  real_T TXdeltatime_Y0_eg;            /* Computed Parameter: TXdeltatime_Y0_eg
                                        * Referenced by: '<S947>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g;             /* Computed Parameter: TXdelaytime_Y0_g
                                        * Referenced by: '<S947>/TX delay time'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S950>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S950>/TX time'
                                        */
  real_T TXdeltatime_Y0_af;            /* Computed Parameter: TXdeltatime_Y0_af
                                        * Referenced by: '<S950>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_c;             /* Computed Parameter: TXdelaytime_Y0_c
                                        * Referenced by: '<S950>/TX delay time'
                                        */
  real_T TXstatus_Y0_n0;               /* Computed Parameter: TXstatus_Y0_n0
                                        * Referenced by: '<S951>/TX status'
                                        */
  real_T TXtime_Y0_cv;                 /* Computed Parameter: TXtime_Y0_cv
                                        * Referenced by: '<S951>/TX time'
                                        */
  real_T TXdeltatime_Y0_m;             /* Computed Parameter: TXdeltatime_Y0_m
                                        * Referenced by: '<S951>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S951>/TX delay time'
                                        */
  real_T TXstatus_Y0_fo;               /* Computed Parameter: TXstatus_Y0_fo
                                        * Referenced by: '<S959>/TX status'
                                        */
  real_T TXtime_Y0_o;                  /* Computed Parameter: TXtime_Y0_o
                                        * Referenced by: '<S959>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S959>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S959>/TX delay time'
                                        */
  real_T zero_Value_k;                 /* Expression: 0
                                        * Referenced by: '<S979>/zero'
                                        */
  real_T Constant_Value_fx;            /* Expression: 8192/360
                                        * Referenced by: '<S990>/Constant'
                                        */
  real_T Constant_Value_ie;            /* Expression: 0
                                        * Referenced by: '<S948>/Constant'
                                        */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S948>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S989>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S989>/MN'
                                        */
  real_T Constant_Value_h4;            /* Expression: 0
                                        * Referenced by: '<S949>/Constant'
                                        */
  real_T Constant1_Value_ny;           /* Expression: 1
                                        * Referenced by: '<S949>/Constant1'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S1004>/TX status'
                                        */
  real_T TXtime_Y0_ly;                 /* Computed Parameter: TXtime_Y0_ly
                                        * Referenced by: '<S1004>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S1004>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h;             /* Computed Parameter: TXdelaytime_Y0_h
                                        * Referenced by: '<S1004>/TX delay time'
                                        */
  real_T TXstatus_Y0_pb;               /* Computed Parameter: TXstatus_Y0_pb
                                        * Referenced by: '<S1006>/TX status'
                                        */
  real_T TXtime_Y0_jl;                 /* Computed Parameter: TXtime_Y0_jl
                                        * Referenced by: '<S1006>/TX time'
                                        */
  real_T TXdeltatime_Y0_c;             /* Computed Parameter: TXdeltatime_Y0_c
                                        * Referenced by: '<S1006>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_hd;            /* Computed Parameter: TXdelaytime_Y0_hd
                                        * Referenced by: '<S1006>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S1014>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S1014>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S1014>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d3;            /* Computed Parameter: TXdelaytime_Y0_d3
                                        * Referenced by: '<S1014>/TX delay time'
                                        */
  real_T Constant4_Value_h;            /* Expression: 0
                                        * Referenced by: '<S1000>/Constant4'
                                        */
  real_T Constant2_Value_m4;           /* Expression: -15.687
                                        * Referenced by: '<S1000>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S1000>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S1000>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S1000>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S1000>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S1000>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S840>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S999>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 1
                                        * Referenced by: '<S999>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 0
                                        * Referenced by: '<S999>/Saturation'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 100
                                        * Referenced by: '<S999>/Gain'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.4^-1
                                        * Referenced by: '<S1016>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S999>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S999>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S999>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_b;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1016>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S1000>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S1000>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_cm;               /* Computed Parameter: TXstatus_Y0_cm
                                        * Referenced by: '<S1030>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S1030>/TX time'
                                        */
  real_T TXdeltatime_Y0_j;             /* Computed Parameter: TXdeltatime_Y0_j
                                        * Referenced by: '<S1030>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_og;            /* Computed Parameter: TXdelaytime_Y0_og
                                        * Referenced by: '<S1030>/TX delay time'
                                        */
  real_T TXstatus_Y0_c4;               /* Computed Parameter: TXstatus_Y0_c4
                                        * Referenced by: '<S1041>/TX status'
                                        */
  real_T TXtime_Y0_h1;                 /* Computed Parameter: TXtime_Y0_h1
                                        * Referenced by: '<S1041>/TX time'
                                        */
  real_T TXdeltatime_Y0_ct;            /* Computed Parameter: TXdeltatime_Y0_ct
                                        * Referenced by: '<S1041>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ia;            /* Computed Parameter: TXdelaytime_Y0_ia
                                        * Referenced by: '<S1041>/TX delay time'
                                        */
  real_T TXstatus_Y0_ay;               /* Computed Parameter: TXstatus_Y0_ay
                                        * Referenced by: '<S1042>/TX status'
                                        */
  real_T TXtime_Y0_ft;                 /* Computed Parameter: TXtime_Y0_ft
                                        * Referenced by: '<S1042>/TX time'
                                        */
  real_T TXdeltatime_Y0_cf;            /* Computed Parameter: TXdeltatime_Y0_cf
                                        * Referenced by: '<S1042>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ea;            /* Computed Parameter: TXdelaytime_Y0_ea
                                        * Referenced by: '<S1042>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S843>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S1049>/TX status'
                                        */
  real_T TXtime_Y0_m;                  /* Computed Parameter: TXtime_Y0_m
                                        * Referenced by: '<S1049>/TX time'
                                        */
  real_T TXdeltatime_Y0_ob;            /* Computed Parameter: TXdeltatime_Y0_ob
                                        * Referenced by: '<S1049>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_jd;            /* Computed Parameter: TXdelaytime_Y0_jd
                                        * Referenced by: '<S1049>/TX delay time'
                                        */
  real_T TXstatus_Y0_b3;               /* Computed Parameter: TXstatus_Y0_b3
                                        * Referenced by: '<S1050>/TX status'
                                        */
  real_T TXtime_Y0_fl;                 /* Computed Parameter: TXtime_Y0_fl
                                        * Referenced by: '<S1050>/TX time'
                                        */
  real_T TXdeltatime_Y0_hs;            /* Computed Parameter: TXdeltatime_Y0_hs
                                        * Referenced by: '<S1050>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p0;            /* Computed Parameter: TXdelaytime_Y0_p0
                                        * Referenced by: '<S1050>/TX delay time'
                                        */
  real_T TXstatus_Y0_ks;               /* Computed Parameter: TXstatus_Y0_ks
                                        * Referenced by: '<S1054>/TX status'
                                        */
  real_T TXtime_Y0_dg;                 /* Computed Parameter: TXtime_Y0_dg
                                        * Referenced by: '<S1054>/TX time'
                                        */
  real_T TXdeltatime_Y0_mo;            /* Computed Parameter: TXdeltatime_Y0_mo
                                        * Referenced by: '<S1054>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l2;            /* Computed Parameter: TXdelaytime_Y0_l2
                                        * Referenced by: '<S1054>/TX delay time'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S748>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S748>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S748>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ds;/* Expression: 0.0
                                          * Referenced by: '<S781>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_o;        /* Expression: 1
                                        * Referenced by: '<S777>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_g;        /* Expression: 1
                                        * Referenced by: '<S780>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S748>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S748>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_g4;                 /* Expression: 100
                                        * Referenced by: '<S411>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S748>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S748>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_px;/* Expression: 0.0
                                          * Referenced by: '<S773>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_j;        /* Expression: 1
                                        * Referenced by: '<S769>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_m;        /* Expression: 1
                                        * Referenced by: '<S772>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S748>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S748>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S748>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S748>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_br;/* Expression: 0.0
                                          * Referenced by: '<S797>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_e;        /* Expression: 1
                                        * Referenced by: '<S793>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_h;        /* Expression: 1
                                        * Referenced by: '<S796>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S748>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S748>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 100
                                        * Referenced by: '<S411>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S748>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S748>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_a;/* Expression: 0.0
                                          * Referenced by: '<S789>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_jf;       /* Expression: 1
                                        * Referenced by: '<S785>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_b;        /* Expression: 1
                                        * Referenced by: '<S788>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S748>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S748>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S748>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S751>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S751>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_g;        /* Expression: Inf
                                        * Referenced by: '<S818>/Saturation'
                                        */
  real_T Saturation_LowerSat_g2;       /* Expression: 0.0001
                                        * Referenced by: '<S818>/Saturation'
                                        */
  real_T Constant1_Value_fi;           /* Expression: 1
                                        * Referenced by: '<S818>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_o;/* Expression: 0
                                         * Referenced by: '<S818>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S751>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S751>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S751>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S751>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_iw;       /* Expression: Inf
                                        * Referenced by: '<S819>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: 0.0001
                                        * Referenced by: '<S819>/Saturation'
                                        */
  real_T Constant1_Value_my;           /* Expression: 1
                                        * Referenced by: '<S819>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_i;/* Expression: 0
                                         * Referenced by: '<S819>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S751>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S751>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S737>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCond_pxh;/* Expression: 0.0
                                          * Referenced by: '<S817>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondit_i;/* Expression: 0.0
                                          * Referenced by: '<S816>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S753>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S753>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S748>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S748>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ab;/* Expression: 0.0
                                          * Referenced by: '<S805>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_c;        /* Expression: 1
                                        * Referenced by: '<S801>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_o5;       /* Expression: 1
                                        * Referenced by: '<S804>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_k;/* Expression: 25
                                          * Referenced by: '<S737>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_c;/* Expression: 25
                                          * Referenced by: '<S737>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S737>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S411>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S412>/Rate Transition'
                                          */
  real_T Constant_Value_na;            /* Expression: 1
                                        * Referenced by: '<S445>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S444>/Constant'
                                        */
  real_T dsa_tcpip_setup_P1_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P1_Size
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P1;           /* Expression: boardType
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P2_Size
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2;           /* Expression: boardNo
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P3_Size
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3;           /* Expression: channelNo
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P4_Size
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4;           /* Expression: localIpNum
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P5_Size
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5;           /* Expression: localSnMask
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P6_Size
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6;           /* Expression: localGateway
                                        * Referenced by: '<S393>/dsa_tcpip_setup'
                                        */
  real_T Heartbeat_Amp;                /* Expression: 1
                                        * Referenced by: '<S392>/Heartbeat'
                                        */
  real_T Heartbeat_Period;             /* Expression: 10
                                        * Referenced by: '<S392>/Heartbeat'
                                        */
  real_T Heartbeat_Duty;               /* Expression: 5
                                        * Referenced by: '<S392>/Heartbeat'
                                        */
  real_T Heartbeat_PhaseDelay;         /* Expression: 0
                                        * Referenced by: '<S392>/Heartbeat'
                                        */
  real_T Unit_Delay_140_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_139_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T TCPIP_Com_P1_Size[2];         /* Computed Parameter: TCPIP_Com_P1_Size
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P1;                 /* Expression: localPort
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2_Size[2];         /* Computed Parameter: TCPIP_Com_P2_Size
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2;                 /* Expression: remotePort
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3_Size[2];         /* Computed Parameter: TCPIP_Com_P3_Size
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3;                 /* Expression: remoteAddr
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4_Size[2];         /* Computed Parameter: TCPIP_Com_P4_Size
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4;                 /* Expression: outputSize
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5_Size[2];         /* Computed Parameter: TCPIP_Com_P5_Size
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5;                 /* Expression: inputSize
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6_Size[2];         /* Computed Parameter: TCPIP_Com_P6_Size
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6;                 /* Expression: legacyMode
                                        * Referenced by: '<S394>/TCPIP_Com'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S396>/Unit Delay'
                                        */
  real_T Switch1_Threshold;            /* Expression: 100
                                        * Referenced by: '<S396>/Switch1'
                                        */
  real_T NoData_Value;                 /* Expression: 0
                                        * Referenced by: '<S391>/No Data'
                                        */
  real_T Constant_Value_n5;            /* Expression: 0
                                        * Referenced by: '<S443>/Constant'
                                        */
  real_T Constant_Value_hd;            /* Expression: 1
                                        * Referenced by: '<S426>/Constant'
                                        */
  real_T Constant_Value_it;            /* Expression: 1
                                        * Referenced by: '<S449>/Constant'
                                        */
  real_T Constant_Value_nw;            /* Expression: 0
                                        * Referenced by: '<S1052>/Constant'
                                        */
  real_T Constant1_Value_ce;           /* Expression: 1
                                        * Referenced by: '<S1052>/Constant1'
                                        */
  real_T TmpRTBAtANDInport1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_dn;           /* Expression: 1
                                        * Referenced by: '<S835>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1061>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_i;            /* Expression: 0.001
                                        * Referenced by: '<S835>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1061>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1061>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 0.01
                                        * Referenced by: '<S835>/Gain1'
                                        */
  real_T Constant1_Value_lr;           /* Expression: 1
                                        * Referenced by: '<S835>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1061>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_i;            /* Expression: 0.001
                                        * Referenced by: '<S835>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1061>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1061>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 0.01
                                        * Referenced by: '<S835>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S411>/ShifterControlDC'
                                        */
  real_T Constant_Value_lj;            /* Expression: .4
                                        * Referenced by: '<S1062>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0.5
                                        * Referenced by: '<S1062>/Constant1'
                                        */
  real_T Constant_Value_ir;            /* Expression: 0
                                        * Referenced by: '<S1068>/Constant'
                                        */
  real_T Constant_Value_nm;            /* Expression: 0
                                        * Referenced by: '<S1069>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1063>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1063>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1063>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1063>/Flash'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S436>/Constant'
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
  real_T Unit_Delay_125_InitialCondition;/* Expression: 0
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
  real_T Unit_Delay_134_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_137_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_138_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_14_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S3>/Unit_Delay'
                                         */
  real_T Unit_Delay_141_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_142_InitialCondition;/* Expression: 0
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
  real_T Constant_Value_jq;            /* Expression: 0.125
                                        * Referenced by: '<S521>/Constant'
                                        */
  real_T Constant_Value_aa;            /* Expression: -125
                                        * Referenced by: '<S528>/Constant'
                                        */
  real_T Constant_Value_my;            /* Expression: 0.125
                                        * Referenced by: '<S525>/Constant'
                                        */
  real_T Constant_Value_pr;            /* Expression: 1/1280
                                        * Referenced by: '<S526>/Constant'
                                        */
  real_T Constant_Value_ls;            /* Expression: 0.125
                                        * Referenced by: '<S529>/Constant'
                                        */
  real_T Constant_Value_eg;            /* Expression: 0.1
                                        * Referenced by: '<S530>/Constant'
                                        */
  real_T Constant_Value_ky;            /* Expression: 10
                                        * Referenced by: '<S531>/Constant'
                                        */
  real_T Constant_Value_pw;            /* Expression: 10
                                        * Referenced by: '<S532>/Constant'
                                        */
  real_T Constant_Value_cd;            /* Expression: -125
                                        * Referenced by: '<S533>/Constant'
                                        */
  real_T Constant_Value_gp;            /* Expression: -125
                                        * Referenced by: '<S534>/Constant'
                                        */
  real_T Constant_Value_fs;            /* Expression: 0.125
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Constant_Value_pb;            /* Expression: 0.125
                                        * Referenced by: '<S543>/Constant'
                                        */
  real_T Constant_Value_gl;            /* Expression: 0.004
                                        * Referenced by: '<S536>/Constant'
                                        */
  real_T Constant_Value_gb;            /* Expression: -125
                                        * Referenced by: '<S544>/Constant'
                                        */
  real_T Constant_Value_if;            /* Expression: 0.125
                                        * Referenced by: '<S545>/Constant'
                                        */
  real_T Constant_Value_gj;            /* Expression: -125
                                        * Referenced by: '<S546>/Constant'
                                        */
  real_T Constant_Value_p4;            /* Expression: 0.125
                                        * Referenced by: '<S547>/Constant'
                                        */
  real_T Constant_Value_dj;            /* Expression: -125
                                        * Referenced by: '<S522>/Constant'
                                        */
  real_T Constant_Value_mt;            /* Expression: 0.125
                                        * Referenced by: '<S523>/Constant'
                                        */
  real_T Constant_Value_fe;            /* Expression: -125
                                        * Referenced by: '<S524>/Constant'
                                        */
  real_T Constant_Value_dx;            /* Expression: 1
                                        * Referenced by: '<S422>/Constant'
                                        */
  real_T Constant_Value_e0;            /* Expression: 1
                                        * Referenced by: '<S453>/Constant'
                                        */
  real_T Constant2_Value_b5;           /* Expression: 1
                                        * Referenced by: '<S410>/Constant2'
                                        */
  real_T Constant_Value_bk;            /* Expression: 1/1024
                                        * Referenced by: '<S663>/Constant'
                                        */
  real_T Constant1_Value_gv;           /* Expression: 1/1024
                                        * Referenced by: '<S664>/Constant1'
                                        */
  real_T Constant2_Value_nj;           /* Expression: 360/8192
                                        * Referenced by: '<S665>/Constant2'
                                        */
  real_T Constant_Value_jqu;           /* Expression: 1000
                                        * Referenced by: '<S411>/Constant'
                                        */
  real_T Constant1_Value_b3;           /* Expression: 2000
                                        * Referenced by: '<S411>/Constant1'
                                        */
  real_T UnitDelay1_InitialCondition_a;/* Expression: 0
                                        * Referenced by: '<S741>/Unit Delay1'
                                        */
  real_T Constant_Value_hw;            /* Expression: 1
                                        * Referenced by: '<S736>/Constant'
                                        */
  real_T Constant_Value_ed;            /* Expression: 0
                                        * Referenced by: '<S743>/Constant'
                                        */
  real_T Constant_Value_ic;            /* Expression: 0
                                        * Referenced by: '<S745>/Constant'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.1
                                        * Referenced by: '<S741>/Gain'
                                        */
  real_T UnitDelay1_InitialCondition_l;/* Expression: 0
                                        * Referenced by: '<S742>/Unit Delay1'
                                        */
  real_T Constant_Value_jm;            /* Expression: 0
                                        * Referenced by: '<S746>/Constant'
                                        */
  real_T Gain_Gain_f4;                 /* Expression: 0.1
                                        * Referenced by: '<S742>/Gain'
                                        */
  real_T ShifterControlFreq_Gain;      /* Expression: 1
                                        * Referenced by: '<S411>/ShifterControlFreq'
                                        */
  real_T ShifterControlDC2_Gain;       /* Expression: 1
                                        * Referenced by: '<S411>/ShifterControlDC2'
                                        */
  real_T ShifterControlDC1_Gain;       /* Expression: 1
                                        * Referenced by: '<S411>/ShifterControlDC1'
                                        */
  ENUM_CAN_RX_T Constant_Value_ex;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S416>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_fi;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S471>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_ma;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S417>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_o0;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S480>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_gs;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S653>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant_Value_c4;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S653>/Constant'
                                        */
  ENUM_CAN_RX_T Constant2_Value_px;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S653>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S653>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_br;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S653>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_n;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S653>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_mr;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S471>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_bv;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S471>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_o;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S471>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_mo;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S471>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S471>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_en;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S480>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_j;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S480>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_b;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S480>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S480>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_g;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S480>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_ld;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S606>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_nyo;   /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S606>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_ij;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S606>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S606>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S606>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S606>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_in;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S580>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S580>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_d;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S580>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_d;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S580>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_jc;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S580>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_p;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S580>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant_Value_dj4;    /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S593>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_dm;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S593>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S593>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_n5;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S593>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S593>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_mc;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S593>/Constant4'
                                        */
  ENUM_CAN_STATUS_DIAG_T Constant_Value_cq;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
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
  ENUM_CAN_STATUS_DIAG_T Constant3_Value_hq;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant3'
                                             */
  ENUM_CAN_STATUS_DIAG_T Constant2_Value_j2;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                             * Referenced by: '<S1>/Constant2'
                                             */
  ENUM_CAN_TX_T Constant2_Value_hj;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S837>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_g0;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S837>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S838>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S839>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S839>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S839>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S840>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_ax;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S962>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_gk;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S962>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_ha;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                 * Referenced by: '<S962>/Constant2'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_dj;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                 * Referenced by: '<S962>/Constant3'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_jk;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                 * Referenced by: '<S962>/Constant4'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_m2;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                 * Referenced by: '<S962>/Constant5'
                                                 */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S98>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S98>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S1000>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S1000>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1000>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_o;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1000>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_i;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S1000>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_i;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S1000>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_m;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S1000>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_b;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                     * Referenced by: '<S1000>/Constant10'
                                                     */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S1000>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S1000>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S1000>/XBRPriority'
                                         */
  ENUM_XPR_CONTROL_MODE_T CPV_Value_e; /* Expression: ENUM_XPR_CONTROL_MODE_T.MAXIMUM_MODE
                                        * Referenced by: '<S98>/CPV'
                                        */
  ENUM_XPR_CONTROL_MODE_T CPV2_Value_hm;/* Expression: ENUM_XPR_CONTROL_MODE_T.DRIVER_BRAKING_ONLY
                                         * Referenced by: '<S98>/CPV2'
                                         */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_126_InitialCondition;/* Computed Parameter: Unit_Delay_126_InitialCondition
                                                           * Referenced by: '<S3>/Unit_Delay'
                                                           */
  ENUM_XPR_ERROR_STATE_T CPV1_Value_i5;/* Expression: ENUM_XPR_ERROR_STATE_T.XPR_OK
                                        * Referenced by: '<S98>/CPV1'
                                        */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_127_InitialCondition;/* Computed Parameter: Unit_Delay_127_InitialCondition
                                                          * Referenced by: '<S3>/Unit_Delay'
                                                          */
  ENUM_XPR_INHIBIT_PARK_MANUAL_T PROPB_XPR_INHIBIT_PARK_MANUAL_A;/* Expression: ENUM_XPR_INHIBIT_PARK_MANUAL_T.NO_OVERRIDE
                                                                  * Referenced by: '<S838>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S838>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S838>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S838>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S962>/Merge'
                                        */
  real32_T UnitDelay_InitialCondition_c;/* Computed Parameter: UnitDelay_InitialCondition_c
                                         * Referenced by: '<S279>/Unit Delay'
                                         */
  real32_T UnitDelay_InitialCondition_e;/* Computed Parameter: UnitDelay_InitialCondition_e
                                         * Referenced by: '<S284>/Unit Delay'
                                         */
  real32_T RX_delta_time_Y0;           /* Computed Parameter: RX_delta_time_Y0
                                        * Referenced by: '<S518>/RX_delta_time'
                                        */
  real32_T RX_delta_time_Y0_h;         /* Computed Parameter: RX_delta_time_Y0_h
                                        * Referenced by: '<S646>/RX_delta_time'
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
  uint32_T Constant_Value_o0t;         /* Computed Parameter: Constant_Value_o0t
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
  uint32_T Operator_BitMask_ob;        /* Expression: BitMask
                                        * Referenced by: '<S916>/Operator'
                                        */
  uint32_T Operator_BitMask_gq;        /* Expression: BitMask
                                        * Referenced by: '<S917>/Operator'
                                        */
  uint32_T Operator_BitMask_gn;        /* Expression: BitMask
                                        * Referenced by: '<S918>/Operator'
                                        */
  uint32_T Operator_BitMask_mi;        /* Expression: BitMask
                                        * Referenced by: '<S919>/Operator'
                                        */
  uint32_T Constant_Value_jl;          /* Computed Parameter: Constant_Value_jl
                                        * Referenced by: '<S992>/Constant'
                                        */
  uint32_T Operator_BitMask_am;        /* Expression: BitMask
                                        * Referenced by: '<S966>/Operator'
                                        */
  uint32_T Operator_BitMask_hq;        /* Expression: BitMask
                                        * Referenced by: '<S967>/Operator'
                                        */
  uint32_T Operator_BitMask_bc;        /* Expression: BitMask
                                        * Referenced by: '<S968>/Operator'
                                        */
  uint32_T Operator_BitMask_bf;        /* Expression: BitMask
                                        * Referenced by: '<S969>/Operator'
                                        */
  uint32_T IV_Value_hq;                /* Computed Parameter: IV_Value_hq
                                        * Referenced by: '<S992>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_j;/* Computed Parameter: UnitDelay_InitialCondition_j
                                         * Referenced by: '<S992>/Unit Delay'
                                         */
  uint32_T Operator_BitMask_jm;        /* Expression: BitMask
                                        * Referenced by: '<S970>/Operator'
                                        */
  uint32_T Operator_BitMask_hn;        /* Expression: BitMask
                                        * Referenced by: '<S971>/Operator'
                                        */
  uint32_T Operator_BitMask_ns;        /* Expression: BitMask
                                        * Referenced by: '<S972>/Operator'
                                        */
  uint32_T Operator_BitMask_ab;        /* Expression: BitMask
                                        * Referenced by: '<S973>/Operator'
                                        */
  uint32_T Constant_Value_jx;          /* Computed Parameter: Constant_Value_jx
                                        * Referenced by: '<S1020>/Constant'
                                        */
  uint32_T IV_Value_eo;                /* Computed Parameter: IV_Value_eo
                                        * Referenced by: '<S1020>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_a;/* Computed Parameter: UnitDelay_InitialCondition_a
                                         * Referenced by: '<S1020>/Unit Delay'
                                         */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_m5;          /* Computed Parameter: Constant_Value_m5
                                        * Referenced by: '<S1035>/Constant'
                                        */
  uint32_T IV_Value_i;                 /* Computed Parameter: IV_Value_i
                                        * Referenced by: '<S1035>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_pq;/* Computed Parameter: UnitDelay_InitialCondition_pq
                                          * Referenced by: '<S1035>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_ox;        /* Expression: BitMask
                                        * Referenced by: '<S1031>/Operator'
                                        */
  uint32_T Operator_BitMask_hy;        /* Expression: BitMask
                                        * Referenced by: '<S1032>/Operator'
                                        */
  uint32_T Operator_BitMask_fb0;       /* Expression: BitMask
                                        * Referenced by: '<S1033>/Operator'
                                        */
  uint32_T Constant2_Value_g1;         /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S431>/Constant2'
                                        */
  uint32_T Constant2_Value_l;          /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S454>/Constant2'
                                        */
  int16_T Constant_Value_fr;           /* Expression: int16(512)
                                        * Referenced by: '<S869>/Constant'
                                        */
  uint16_T Operator_BitMask_k2n;       /* Expression: BitMask
                                        * Referenced by: '<S901>/Operator'
                                        */
  uint16_T Operator_BitMask_jk;        /* Expression: BitMask
                                        * Referenced by: '<S902>/Operator'
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
                                        * Referenced by: '<S279>/E'
                                        */
  boolean_T E_Value_ct;                /* Expression: true
                                        * Referenced by: '<S284>/E'
                                        */
  boolean_T F_Out_slewing_Y0;          /* Expression: false
                                        * Referenced by: '<S328>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ls;/* Expression: true
                                            * Referenced by: '<S330>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_i0;/* Expression: true
                                            * Referenced by: '<S331>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ld;/* Expression: false
                                            * Referenced by: '<S329>/Unit_Delay'
                                            */
  boolean_T Constant_Value_hg;         /* Expression: false
                                        * Referenced by: '<S331>/Constant'
                                        */
  boolean_T APTC_PEDAL_POSITION_OVR_APV_Val;/* Expression: false
                                             * Referenced by: '<S83>/APTC_PEDAL_POSITION_OVR_APV'
                                             */
  boolean_T Unit_Delay_InitialCondition_b1;/* Expression: true
                                            * Referenced by: '<S383>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gz;/* Expression: true
                                            * Referenced by: '<S384>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_a;/* Expression: true
                                           * Referenced by: '<S372>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_gt;/* Expression: true
                                            * Referenced by: '<S373>/Unit_Delay'
                                            */
  boolean_T CPV_Value_a;               /* Expression: false
                                        * Referenced by: '<S350>/CPV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ml;/* Expression: false
                                            * Referenced by: '<S356>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ag;/* Expression: true
                                            * Referenced by: '<S345>/Unit_Delay'
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
                                        * Referenced by: '<S279>/R'
                                        */
  boolean_T zero_Value_g;              /* Expression: boolean(0)
                                        * Referenced by: '<S276>/zero'
                                        */
  boolean_T Unit_Delay1_InitialCondition_m;/* Expression: true
                                            * Referenced by: '<S321>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ps;/* Expression: true
                                             * Referenced by: '<S322>/Unit_Delay1'
                                             */
  boolean_T zero3_Value;               /* Expression: boolean(0)
                                        * Referenced by: '<S276>/zero3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_j;/* Expression: true
                                            * Referenced by: '<S323>/Unit_Delay1'
                                            */
  boolean_T Constant8_Value_l;         /* Expression: boolean(0)
                                        * Referenced by: '<S273>/Constant8'
                                        */
  boolean_T Constant_Value_hx;         /* Expression: false
                                        * Referenced by: '<S321>/Constant'
                                        */
  boolean_T Constant_Value_bh;         /* Expression: false
                                        * Referenced by: '<S322>/Constant'
                                        */
  boolean_T Constant_Value_hxo;        /* Expression: false
                                        * Referenced by: '<S323>/Constant'
                                        */
  boolean_T Constant_Value_pu;         /* Expression: false
                                        * Referenced by: '<S345>/Constant'
                                        */
  boolean_T Constant_Value_am;         /* Expression: false
                                        * Referenced by: '<S373>/Constant'
                                        */
  boolean_T Constant_Value_c1;         /* Expression: false
                                        * Referenced by: '<S384>/Constant'
                                        */
  boolean_T Constant3_Value_fa;        /* Computed Parameter: Constant3_Value_fa
                                        * Referenced by: '<S396>/Constant3'
                                        */
  boolean_T Constant2_Value_e;         /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S396>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S515>/RX_status'
                                        */
  boolean_T RX_status_Y0_n;            /* Computed Parameter: RX_status_Y0_n
                                        * Referenced by: '<S643>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_f;        /* Expression: false
                                        * Referenced by: '<S752>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ix;/* Expression: true
                                            * Referenced by: '<S823>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gf;/* Expression: true
                                            * Referenced by: '<S824>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_kc;/* Expression: false
                                            * Referenced by: '<S822>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ie4;        /* Expression: false
                                        * Referenced by: '<S824>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S738>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S910>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S910>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S838>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S864>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S838>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S838>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_h;                 /* Expression: true
                                        * Referenced by: '<S992>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_e4;/* Computed Parameter: Unit_Delay_InitialCondition_e4
                                            * Referenced by: '<S991>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_k;  /* Expression: boolean(0)
                                        * Referenced by: '<S960>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_b;          /* Expression: boolean(0)
                                        * Referenced by: '<S960>/DataPage'
                                        */
  boolean_T E_Value_jh;                /* Expression: true
                                        * Referenced by: '<S1020>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S1000>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_k5;/* Expression: false
                                            * Referenced by: '<S996>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S999>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_h2;/* Computed Parameter: Unit_Delay_InitialCondition_h2
                                            * Referenced by: '<S1019>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_p;  /* Expression: boolean(0)
                                        * Referenced by: '<S1015>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_h;          /* Expression: boolean(0)
                                        * Referenced by: '<S1015>/DataPage'
                                        */
  boolean_T CPV_Value_lr;              /* Expression: true
                                        * Referenced by: '<S999>/CPV'
                                        */
  boolean_T E_Value_f;                 /* Expression: true
                                        * Referenced by: '<S1035>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S1025>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_g3;/* Computed Parameter: Unit_Delay_InitialCondition_g3
                                            * Referenced by: '<S1034>/Unit_Delay'
                                            */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1040>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_fg;         /* Expression: boolean(1)
                                        * Referenced by: '<S420>/Constant'
                                        */
  boolean_T Constant_Value_kv;         /* Expression: boolean(1)
                                        * Referenced by: '<S421>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_bk;/* Expression: true
                                            * Referenced by: '<S751>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_c;/* Expression: true
                                            * Referenced by: '<S818>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_b;/* Expression: true
                                            * Referenced by: '<S751>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ax;/* Expression: true
                                             * Referenced by: '<S819>/Unit_Delay1'
                                             */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S737>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_bx;         /* Expression: boolean(1)
                                        * Referenced by: '<S425>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S430>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S437>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_kx;        /* Expression: boolean(1)
                                        * Referenced by: '<S429>/Constant1'
                                        */
  boolean_T Enable_RX_ETC2_03_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S435>/Enable_RX_ETC2_03'
                                        */
  boolean_T Enable_RX_EEC1_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S432>/Enable_RX_EEC1_00'
                                        */
  boolean_T Enable_RX_EEC3_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S434>/Enable_RX_EEC3_00'
                                        */
  boolean_T Constant_Value_kq5;        /* Expression: boolean(1)
                                        * Referenced by: '<S427>/Constant'
                                        */
  boolean_T Constant_Value_bp;         /* Expression: boolean(1)
                                        * Referenced by: '<S418>/Constant'
                                        */
  boolean_T Constant_Value_b1;         /* Expression: boolean(1)
                                        * Referenced by: '<S451>/Constant'
                                        */
  boolean_T Constant_Value_ip;         /* Expression: boolean(1)
                                        * Referenced by: '<S452>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S644>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_oc;/* Expression: true
                                            * Referenced by: '<S644>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_hy;/* Expression: false
                                            * Referenced by: '<S650>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ig;         /* Expression: boolean(0)
                                        * Referenced by: '<S442>/Constant'
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
  boolean_T Unit_Delay_82_InitialCondition;/* Computed Parameter: Unit_Delay_82_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_45_InitialCondition;/* Computed Parameter: Unit_Delay_45_InitialCondition
                                            * Referenced by: '<S3>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ap;         /* Computed Parameter: Constant_Value_ap
                                        * Referenced by: '<S399>/Constant'
                                        */
  boolean_T useGPSSA00_Value;          /* Expression: boolean(1)
                                        * Referenced by: '<S461>/useGPSSA00'
                                        */
  boolean_T useGPSSA0_Value;           /* Expression: boolean(0)
                                        * Referenced by: '<S461>/useGPSSA0'
                                        */
  boolean_T Constant_Value_axe;        /* Expression: boolean(1)
                                        * Referenced by: '<S424>/Constant'
                                        */
  boolean_T Constant_Value_au;         /* Expression: boolean(1)
                                        * Referenced by: '<S450>/Constant'
                                        */
  boolean_T Constant_Value_hp;         /* Computed Parameter: Constant_Value_hp
                                        * Referenced by: '<S1051>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S844>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S844>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1062>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_lz;        /* Expression: false
                                        * Referenced by: '<S1062>/Constant2'
                                        */
  boolean_T Unit_Delay_117_InitialCondition;/* Computed Parameter: Unit_Delay_117_InitialCondition
                                             * Referenced by: '<S3>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_118_InitialCondition;/* Computed Parameter: Unit_Delay_118_InitialCondition
                                             * Referenced by: '<S3>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_135_InitialCondition;/* Computed Parameter: Unit_Delay_135_InitialCondition
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
  boolean_T Constant_Value_la;         /* Expression: boolean(1)
                                        * Referenced by: '<S419>/Constant'
                                        */
  boolean_T Constant_Value_jqh;        /* Expression: boolean(0)
                                        * Referenced by: '<S423>/Constant'
                                        */
  boolean_T Constant1_Value_fc;        /* Expression: boolean(1)
                                        * Referenced by: '<S428>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S433>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S446>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_m;/* Expression: boolean(0)
                                             * Referenced by: '<S447>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_ok;         /* Expression: boolean(0)
                                        * Referenced by: '<S448>/Constant'
                                        */
  boolean_T Constant_Value_em;         /* Expression: false
                                        * Referenced by: '<S644>/Constant'
                                        */
  boolean_T Constant1_Value_jy;        /* Expression: false
                                        * Referenced by: '<S644>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_p;/* Expression: true
                                            * Referenced by: '<S644>/Unit_Delay2'
                                            */
  boolean_T Unit_Delay1_InitialCondition_d;/* Expression: true
                                            * Referenced by: '<S644>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_leo;/* Expression: false
                                             * Referenced by: '<S651>/Unit_Delay'
                                             */
  boolean_T Constant_Value_gn;         /* Computed Parameter: Constant_Value_gn
                                        * Referenced by: '<S744>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_b;/* Computed Parameter: UnitDelay_InitialCondition_b
                                          * Referenced by: '<S736>/Unit Delay'
                                          */
  boolean_T UnitDelay_InitialCondition_a4;/* Computed Parameter: UnitDelay_InitialCondition_a4
                                           * Referenced by: '<S741>/Unit Delay'
                                           */
  boolean_T UnitDelay_InitialCondition_cu;/* Computed Parameter: UnitDelay_InitialCondition_cu
                                           * Referenced by: '<S742>/Unit Delay'
                                           */
  boolean_T Constant_Value_dy;         /* Expression: false
                                        * Referenced by: '<S751>/Constant'
                                        */
  boolean_T Constant_Value_gu;         /* Expression: false
                                        * Referenced by: '<S818>/Constant'
                                        */
  boolean_T Constant1_Value_md;        /* Expression: false
                                        * Referenced by: '<S751>/Constant1'
                                        */
  boolean_T Constant_Value_ps;         /* Expression: false
                                        * Referenced by: '<S819>/Constant'
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
                                        * Referenced by: '<S391>/for_logging7'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S134>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_f;       /* Computed Parameter: FixPtConstant_Value_f
                                        * Referenced by: '<S134>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_p;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_p
                                           * Referenced by: '<S172>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_j1;      /* Computed Parameter: FixPtConstant_Value_j1
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
                                           * Referenced by: '<S334>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_n;       /* Computed Parameter: FixPtConstant_Value_n
                                        * Referenced by: '<S334>/FixPt Constant'
                                        */
  uint8_T Supervisor_Autonomous_Mode_Valu;/* Computed Parameter: Supervisor_Autonomous_Mode_Valu
                                           * Referenced by: '<S76>/Supervisor_Autonomous_Mode'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_f5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_f5
                                           * Referenced by: '<S388>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_po;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_po
                                           * Referenced by: '<S377>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_i;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                           * Referenced by: '<S365>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ck;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ck
                                           * Referenced by: '<S349>/FixPt Unit Delay2'
                                           */
  uint8_T Constant_Value_mg;           /* Expression: uint8(3)
                                        * Referenced by: '<S277>/Constant'
                                        */
  uint8_T Constant1_Value_ls;          /* Expression: uint8(5)
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint8_T FixPtConstant_Value_az;      /* Computed Parameter: FixPtConstant_Value_az
                                        * Referenced by: '<S349>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_gy;      /* Computed Parameter: FixPtConstant_Value_gy
                                        * Referenced by: '<S365>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_g;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_g
                                           * Referenced by: '<S367>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pz;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pz
                                           * Referenced by: '<S368>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_el;      /* Computed Parameter: FixPtConstant_Value_el
                                        * Referenced by: '<S368>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_p;       /* Computed Parameter: FixPtConstant_Value_p
                                        * Referenced by: '<S367>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_d;       /* Computed Parameter: FixPtConstant_Value_d
                                        * Referenced by: '<S377>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jx;      /* Computed Parameter: FixPtConstant_Value_jx
                                        * Referenced by: '<S388>/FixPt Constant'
                                        */
  uint8_T Failure_Value_k;             /* Computed Parameter: Failure_Value_k
                                        * Referenced by: '<S391>/Failure'
                                        */
  uint8_T RawData_Y0;                  /* Computed Parameter: RawData_Y0
                                        * Referenced by: '<S518>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_gx[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                             * Referenced by: '<S515>/Unit Delay'
                                             */
  uint8_T RawData_Y0_l;                /* Computed Parameter: RawData_Y0_l
                                        * Referenced by: '<S646>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_me[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                             * Referenced by: '<S643>/Unit Delay'
                                             */
  uint8_T FixPtUnitDelay2_InitialCondi_ew;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ew
                                           * Referenced by: '<S827>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_kf;      /* Computed Parameter: FixPtConstant_Value_kf
                                        * Referenced by: '<S827>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_e;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S871>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S910>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S910>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S910>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S910>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_ch;         /* Expression: BitMask
                                        * Referenced by: '<S915>/Operator'
                                        */
  uint8_T Operator_BitMask_md;         /* Expression: BitMask
                                        * Referenced by: '<S914>/Operator'
                                        */
  uint8_T Constant_Value_e5;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S870>/Constant'
                                        */
  uint8_T Constant1_Value_na;          /* Expression: uint8(0)
                                        * Referenced by: '<S963>/Constant1'
                                        */
  uint8_T Constant_Value_fie;          /* Expression: uint8(1)
                                        * Referenced by: '<S963>/Constant'
                                        */
  uint8_T Constant_Value_m24;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S961>/Constant'
                                        */
  uint8_T Constant1_Value_gh;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S961>/Constant1'
                                        */
  uint8_T Operator_BitMask_co;         /* Expression: BitMask
                                        * Referenced by: '<S974>/Operator'
                                        */
  uint8_T Priority_Value_d;            /* Expression: uint8(6)
                                        * Referenced by: '<S960>/Priority'
                                        */
  uint8_T PDUFormat_Value_a;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S960>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_m;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S960>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_o;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S960>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_kf;         /* Expression: BitMask
                                        * Referenced by: '<S975>/Operator'
                                        */
  uint8_T Constant2_Value_han;         /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S1016>/Constant2'
                                        */
  uint8_T Constant3_Value_ci;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1016>/Constant3'
                                        */
  uint8_T Constant4_Value_k;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1016>/Constant4'
                                        */
  uint8_T Constant_Value_e0v;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1016>/Constant'
                                        */
  uint8_T Constant1_Value_fxl;         /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1016>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_m;            /* Expression: uint8(3)
                                        * Referenced by: '<S1015>/Priority'
                                        */
  uint8_T PDUFormat_Value_c;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1015>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_b;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S1015>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_a;       /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S1015>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1016>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1046>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1046>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1046>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1046>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1046>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1046>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1046>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1046>/Byte1'
                                        */
  uint8_T Byte8_Value_m;               /* Expression: uint8('N')
                                        * Referenced by: '<S1045>/Byte8'
                                        */
  uint8_T Byte7_Value_d;               /* Expression: uint8('R')
                                        * Referenced by: '<S1045>/Byte7'
                                        */
  uint8_T Byte6_Value_j;               /* Expression: uint8('*')
                                        * Referenced by: '<S1045>/Byte6'
                                        */
  uint8_T Byte5_Value_c;               /* Expression: uint8('R')
                                        * Referenced by: '<S1045>/Byte5'
                                        */
  uint8_T Byte4_Value_f;               /* Expression: uint8('A')
                                        * Referenced by: '<S1045>/Byte4'
                                        */
  uint8_T Byte3_Value_c;               /* Expression: uint8('C')
                                        * Referenced by: '<S1045>/Byte3'
                                        */
  uint8_T Byte2_Value_o;               /* Expression: uint8('P')
                                        * Referenced by: '<S1045>/Byte2'
                                        */
  uint8_T Byte1_Value_o;               /* Computed Parameter: Byte1_Value_o
                                        * Referenced by: '<S1045>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_j;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_j
                                           * Referenced by: '<S781>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_o;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_o
                                           * Referenced by: '<S773>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_k;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_k
                                           * Referenced by: '<S797>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ep;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ep
                                           * Referenced by: '<S789>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_an;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_an
                                           * Referenced by: '<S817>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_c4;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_c4
                                           * Referenced by: '<S816>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_n;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_n
                                           * Referenced by: '<S805>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_f2;          /* Expression: uint8(32)
                                        * Referenced by: '<S464>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S644>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_jp;           /* Computed Parameter: Constant_Value_jp
                                        * Referenced by: '<S648>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Byte1_Value_ou;              /* Computed Parameter: Byte1_Value_ou
                                        * Referenced by: '<S1043>/Byte1'
                                        */
  uint8_T Byte2_Value_m;               /* Computed Parameter: Byte2_Value_m
                                        * Referenced by: '<S1043>/Byte2'
                                        */
  uint8_T Byte3_Value_l;               /* Computed Parameter: Byte3_Value_l
                                        * Referenced by: '<S1043>/Byte3'
                                        */
  uint8_T Byte4_Value_d;               /* Computed Parameter: Byte4_Value_d
                                        * Referenced by: '<S1043>/Byte4'
                                        */
  uint8_T Byte5_Value_f;               /* Computed Parameter: Byte5_Value_f
                                        * Referenced by: '<S1043>/Byte5'
                                        */
  uint8_T Byte6_Value_m;               /* Computed Parameter: Byte6_Value_m
                                        * Referenced by: '<S1043>/Byte6'
                                        */
  uint8_T Byte7_Value_k;               /* Computed Parameter: Byte7_Value_k
                                        * Referenced by: '<S1043>/Byte7'
                                        */
  uint8_T Byte8_Value_c;               /* Computed Parameter: Byte8_Value_c
                                        * Referenced by: '<S1043>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_ph;/* Computed Parameter: UnitDelay1_InitialCondition_ph
                                          * Referenced by: '<S844>/Unit Delay1'
                                          */
  uint8_T Constant1_Value_f1;          /* Computed Parameter: Constant1_Value_f1
                                        * Referenced by: '<S844>/Constant1'
                                        */
  uint8_T Constant2_Value_e1;          /* Computed Parameter: Constant2_Value_e1
                                        * Referenced by: '<S1063>/Constant2'
                                        */
  uint8_T Constant3_Value_gm;          /* Computed Parameter: Constant3_Value_gm
                                        * Referenced by: '<S1063>/Constant3'
                                        */
  uint8_T Unit_Delay_136_InitialCondition;/* Computed Parameter: Unit_Delay_136_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S644>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_mp;           /* Computed Parameter: Constant_Value_mp
                                        * Referenced by: '<S649>/Constant'
                                        */
  uint8_T Constant_Value_cj;           /* Expression: uint8(16)
                                        * Referenced by: '<S464>/Constant'
                                        */
  uint8_T Constant1_Value_pe;          /* Expression: uint8(17)
                                        * Referenced by: '<S464>/Constant1'
                                        */
  uint8_T Constant2_Value_im;          /* Expression: uint8(19)
                                        * Referenced by: '<S464>/Constant2'
                                        */
  uint8_T Constant4_Value_f;           /* Expression: uint8(255)
                                        * Referenced by: '<S464>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_kw;      /* Computed Parameter: FixPtConstant_Value_kw
                                        * Referenced by: '<S773>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_hh;      /* Computed Parameter: FixPtConstant_Value_hh
                                        * Referenced by: '<S781>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_mx;      /* Computed Parameter: FixPtConstant_Value_mx
                                        * Referenced by: '<S789>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_hn;      /* Computed Parameter: FixPtConstant_Value_hn
                                        * Referenced by: '<S797>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_nq;      /* Computed Parameter: FixPtConstant_Value_nq
                                        * Referenced by: '<S805>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_hq;      /* Computed Parameter: FixPtConstant_Value_hq
                                        * Referenced by: '<S816>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_i;       /* Computed Parameter: FixPtConstant_Value_i
                                        * Referenced by: '<S817>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S962>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S962>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S962>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S962>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S962>/ALL_CTRL_DISABLED' */
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
      real_T const *UPtrs2[23];
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
extern real_T GLB_Absolute_Timestamp;  /* '<S412>/Rate Transition' */
extern real_T ReAX_ActualHandwheelPos; /* '<S438>/Switch' */
extern real_T EthernetLinkStatus;      /* '<S393>/dsa_tcpip_setup' */
extern real_T CurrentAzimuth_rad;      /* '<S391>/Switch' */
extern real_T TargetAzimuth_rad;       /* '<S391>/Switch1' */
extern real_T TargetVelocity_kph;      /* '<S391>/Switch3' */
extern real_T Curvature;               /* '<S391>/Switch4' */
extern real_T CrosstrackError;         /* '<S391>/Switch5' */
extern real_T CurrentVelocity_kph;     /* '<S391>/Switch2' */
extern real_T GPS_X;                   /* '<S391>/Switch6' */
extern real_T GPS_Y;                   /* '<S391>/Switch7' */
extern real_T GPS_Time;                /* '<S391>/Switch8' */
extern real_T ReAX_EchoedSteerWheelPos;/* '<S438>/Switch' */
extern real_T SteerWheelAngle;         /* '<S640>/S-Function1' */
extern real_T YawRate;                 /* '<S640>/S-Function1' */
extern real_T SPN1810_LongitudinalAcceleration;/* '<S640>/S-Function1' */
extern real_T WheelBasedVehicleSpeed;  /* '<S501>/S-Function1' */
extern real_T BrakeSwitch;             /* '<S501>/S-Function1' */
extern real_T Lateral_Control_Rate_Limit;/* '<S304>/Constant' */
extern real_T Lateral_Control_Output;  /* '<S275>/Sum1' */
extern real_T Lateral_Control_Rate_Limiter_Output;/* '<S304>/If_Then_Else' */
extern real_T SteerCommandDeg;         /* '<S80>/sign flip' */
extern real_T DesiredSteeringAngle;    /* '<S80>/sign2' */
extern real_T Lateral_Control_Heading_Error;/* '<S275>/Error Calc' */
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
extern real32_T REAX_Handwheel_Torque; /* '<S414>/Data Type Conversion3' */
extern real32_T REAX_Handwheel_Velocity;/* '<S414>/Data Type Conversion4' */
extern real32_T REAX_Pull_Compensation;/* '<S414>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN1_Status;/* '<S1>/Data Type Conversion' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN5_Status;/* '<S1>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN6_Status;/* '<S1>/Data Type Conversion4' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN3_Status;/* '<S1>/Data Type Conversion3' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN4_Status;/* '<S1>/Data Type Conversion2' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN2_Status;/* '<S1>/Data Type Conversion1' */
extern uint8_T SupervisorMode;         /* '<S391>/Switch9' */
extern uint8_T REAX_Current_Mode;      /* '<S414>/Data Type Conversion' */
extern uint8_T REAX_Req_Mode;          /* '<S414>/Data Type Conversion1' */
extern uint8_T REAX_Status;            /* '<S414>/Data Type Conversion2' */
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1076>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S411>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S738>/Switch' */
extern boolean_T MABX_Heartbeat;       /* '<S392>/Cast To Boolean' */
extern boolean_T EngageRequest;        /* '<S401>/AND' */
extern boolean_T Heartbeat_Ok;         /* '<S396>/Switch1' */
extern boolean_T RTMapsOk;             /* '<S391>/AND' */
extern boolean_T LogEventPB;           /* '<S736>/AND2' */
extern boolean_T EngagePB;             /* '<S411>/Logical Operator' */
extern boolean_T AutonomousEnabled;    /* '<S76>/AND' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T RateLimiterActive;    /* '<S313>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S750>/Switch' */

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
                                        * Referenced by: '<S275>/FeedforwardGain'
                                        */
extern real_T DISTANCE_M;              /* Variable: DISTANCE_M
                                        * Referenced by: '<S81>/DISTANCE_M'
                                        */
extern real_T Lateral_Control_Curvature_Limit;/* Variable: Lateral_Control_Curvature_Limit
                                               * Referenced by:
                                               *   '<S275>/Constant3'
                                               *   '<S275>/Constant5'
                                               */
extern real_T Lateral_Control_D;       /* Variable: Lateral_Control_D
                                        * Referenced by: '<S301>/Derivative Gain'
                                        */
extern real_T Lateral_Control_Error_Limit;/* Variable: Lateral_Control_Error_Limit
                                           * Referenced by:
                                           *   '<S275>/Constant'
                                           *   '<S275>/Constant1'
                                           */
extern real_T Lateral_Control_Error_Rate_Limit;/* Variable: Lateral_Control_Error_Rate_Limit
                                                * Referenced by:
                                                *   '<S275>/Constant10'
                                                *   '<S275>/Constant7'
                                                *   '<S275>/Constant8'
                                                *   '<S275>/Constant9'
                                                */
extern real_T Lateral_Control_I;       /* Variable: Lateral_Control_I
                                        * Referenced by: '<S301>/Integral Gain'
                                        */
extern real_T Lateral_Control_P;       /* Variable: Lateral_Control_P
                                        * Referenced by:
                                        *   '<S275>/PGain'
                                        *   '<S301>/Proportional Gain'
                                        */
extern real_T Lateral_Control_Pole;    /* Variable: Lateral_Control_Pole
                                        * Referenced by: '<S305>/GainPole'
                                        */
extern real_T Lateral_Control_Rate_Limit_APV;/* Variable: Lateral_Control_Rate_Limit_APV
                                              * Referenced by: '<S304>/Constant'
                                              */
extern real_T Lateral_Control_YawRate_Limit;/* Variable: Lateral_Control_YawRate_Limit
                                             * Referenced by:
                                             *   '<S275>/Constant2'
                                             *   '<S275>/Constant4'
                                             */
extern real_T Lateral_Control_Zero;    /* Variable: Lateral_Control_Zero
                                        * Referenced by: '<S305>/GainZero'
                                        */
extern real_T PROPB_REAX_1_E4_DESIRED_POSITION_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_POSITION_APV
                                                    * Referenced by: '<S979>/Constant7'
                                                    */
extern real_T REAX_OFFSET_APV;         /* Variable: REAX_OFFSET_APV
                                        * Referenced by:
                                        *   '<S80>/Constant'
                                        *   '<S274>/ReAX Offset'
                                        *   '<S275>/Constant6'
                                        */
extern real_T STANLEY_GAIN_APV;        /* Variable: STANLEY_GAIN_APV
                                        * Referenced by: '<S274>/StanleySteeringControlGain'
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
                                        * Referenced by: '<S275>/UndersteerCorrection'
                                        */
extern real_T VSPD_TARGET_KPH_APV;     /* Variable: VSPD_TARGET_KPH_APV
                                        * Referenced by: '<S81>/VSPD_TARGET_KPH_APV'
                                        */
extern real_T YAW_RATE_OFFSET_APV;     /* Variable: YAW_RATE_OFFSET_APV
                                        * Referenced by: '<S275>/YAW_RATE_OFFSET_APV'
                                        */
extern real_T Yaw_Rate_FF_Gain;        /* Variable: Yaw_Rate_FF_Gain
                                        * Referenced by: '<S275>/RateFeedbackGain'
                                        */
extern ENUM_AUTONOMOUS_MODE_T AUTONOMOUS_MODE_SELECTOR_APV;/* Variable: AUTONOMOUS_MODE_SELECTOR_APV
                                                            * Referenced by: '<S76>/AUTONOMOUS_MODE_SELECTOR_APV'
                                                            */
extern ENUM_CAN_RX_T CANR_PROPB_XPR_1_50_CHANNEL_APV;/* Variable: CANR_PROPB_XPR_1_50_CHANNEL_APV
                                                      * Referenced by: '<S441>/Constant'
                                                      */
extern ENUM_CAN_RX_T PROPB_REAX_CHANNEL_APV;/* Variable: PROPB_REAX_CHANNEL_APV
                                             * Referenced by:
                                             *   '<S439>/Constant'
                                             *   '<S440>/Constant'
                                             *   '<S461>/Constant3'
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
                                                                      * Referenced by: '<S962>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S979>/Constant1'
                                                                      */
extern ENUM_SWITCH_T RATE_LIMITER_ENABLE_APV;/* Variable: RATE_LIMITER_ENABLE_APV
                                              * Referenced by: '<S304>/RATE_LIMITER_ENABLE_APV'
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
 * '<S274>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController'
 * '<S275>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController'
 * '<S276>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError'
 * '<S277>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew'
 * '<S278>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/stanley'
 * '<S279>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE'
 * '<S280>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Data Type Conversion Inherited'
 * '<S281>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Enable'
 * '<S282>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Interval Test'
 * '<S283>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Reset'
 * '<S284>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE'
 * '<S285>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Data Type Conversion Inherited'
 * '<S286>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Enable'
 * '<S287>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Interval Test'
 * '<S288>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Reset'
 * '<S289>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID'
 * '<S290>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID'
 * '<S291>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/Saturation Dynamic'
 * '<S292>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID/AntiWindup'
 * '<S293>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Error Calc'
 * '<S294>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/If_Then_Else'
 * '<S295>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Bumpless Transfer'
 * '<S296>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation'
 * '<S297>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Calc'
 * '<S298>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation'
 * '<S299>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else'
 * '<S300>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else1'
 * '<S301>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/PID Controller'
 * '<S302>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic'
 * '<S303>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1'
 * '<S304>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation'
 * '<S305>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Transfer Fcn Lead or Lag'
 * '<S306>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation'
 * '<S307>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else'
 * '<S308>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else1'
 * '<S309>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else'
 * '<S310>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else1'
 * '<S311>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S312>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1/Saturation Dynamic'
 * '<S313>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Compare To Constant'
 * '<S314>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/If_Then_Else'
 * '<S315>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter'
 * '<S316>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Saturation'
 * '<S317>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter/Saturation Dynamic'
 * '<S318>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else'
 * '<S319>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else1'
 * '<S320>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/Detect Change'
 * '<S321>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order'
 * '<S322>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied'
 * '<S323>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1'
 * '<S324>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order/If_Then_Else'
 * '<S325>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied/If_Then_Else'
 * '<S326>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1/If_Then_Else'
 * '<S327>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Chart'
 * '<S328>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event'
 * '<S329>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/RS flip-flop'
 * '<S330>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Rising_edge'
 * '<S331>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset'
 * '<S332>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S333>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S334>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S335>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Compare To Zero'
 * '<S336>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Detect Change1'
 * '<S337>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile'
 * '<S338>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile'
 * '<S339>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit'
 * '<S340>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/If_Then_Else'
 * '<S341>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit'
 * '<S342>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/dT'
 * '<S343>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Detect Change1'
 * '<S344>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values'
 * '<S345>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset'
 * '<S346>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values/If_Then_Else'
 * '<S347>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Check Static  Lower Bound'
 * '<S348>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/If_Then_Else'
 * '<S349>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Unit Delay External IC'
 * '<S350>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile'
 * '<S351>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value'
 * '<S352>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/TwentyPointVectorCalculation'
 * '<S353>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/VehicleSpeedSetpointDynamicCalculation'
 * '<S354>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value'
 * '<S355>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Compare To Zero'
 * '<S356>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/SR flip-flop'
 * '<S357>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value/If_Then_Else'
 * '<S358>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/If_Then_Else'
 * '<S359>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators'
 * '<S360>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance'
 * '<S361>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator'
 * '<S362>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT'
 * '<S363>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT1'
 * '<S364>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/If_Then_Else'
 * '<S365>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/Unit Delay Resettable External IC1'
 * '<S366>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method'
 * '<S367>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Unit Delay Resettable External IC1'
 * '<S368>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method/Unit Delay Resettable External IC'
 * '<S369>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant3'
 * '<S370>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant8'
 * '<S371>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/If_Then_Else4'
 * '<S372>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Rising_edge'
 * '<S373>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset'
 * '<S374>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/dT'
 * '<S375>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S376>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/If_Then_Else'
 * '<S377>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S378>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant10'
 * '<S379>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant11'
 * '<S380>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant12'
 * '<S381>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant9'
 * '<S382>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/If_Then_Else4'
 * '<S383>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Rising_edge'
 * '<S384>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset'
 * '<S385>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/dT'
 * '<S386>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S387>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/If_Then_Else'
 * '<S388>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S389>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Mapping'
 * '<S390>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Odometry'
 * '<S391>' : 'L4_MABX/ETHERNET/Data RX'
 * '<S392>' : 'L4_MABX/ETHERNET/Data TX'
 * '<S393>' : 'L4_MABX/ETHERNET/TCPIP_Setup'
 * '<S394>' : 'L4_MABX/ETHERNET/UDPIP_Communication'
 * '<S395>' : 'L4_MABX/ETHERNET/Update_RTMaps_Interface'
 * '<S396>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check'
 * '<S397>' : 'L4_MABX/ETHERNET/Data RX/RTMapsDecode'
 * '<S398>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1'
 * '<S399>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1/Positive'
 * '<S400>' : 'L4_MABX/ETHERNET/Data TX/RTMapsEncode'
 * '<S401>' : 'L4_MABX/ETHERNET/Data TX/Speed Difference Check'
 * '<S402>' : 'L4_MABX/ETHERNET/Data TX/Speed Difference Check/Compare To Constant'
 * '<S403>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background'
 * '<S404>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background_Task'
 * '<S405>' : 'L4_MABX/ETHERNET/TCPIP_Setup/IRQ_Level_2_SW_INT'
 * '<S406>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task'
 * '<S407>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block'
 * '<S408>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task/Tcp Input Processing'
 * '<S409>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block/Common Hardware Interrupt Interface'
 * '<S410>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW'
 * '<S411>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL'
 * '<S412>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access'
 * '<S413>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_EC1'
 * '<S414>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_3'
 * '<S415>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_4'
 * '<S416>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00'
 * '<S417>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00'
 * '<S418>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A'
 * '<S419>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A'
 * '<S420>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31'
 * '<S421>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00'
 * '<S422>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31'
 * '<S423>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks'
 * '<S424>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00'
 * '<S425>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31'
 * '<S426>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01'
 * '<S427>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B'
 * '<S428>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B'
 * '<S429>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B'
 * '<S430>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B'
 * '<S431>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00'
 * '<S432>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00'
 * '<S433>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00'
 * '<S434>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00'
 * '<S435>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03'
 * '<S436>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00'
 * '<S437>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B'
 * '<S438>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13'
 * '<S439>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13'
 * '<S440>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13'
 * '<S441>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50'
 * '<S442>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2'
 * '<S443>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01'
 * '<S444>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30'
 * '<S445>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03'
 * '<S446>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2'
 * '<S447>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3'
 * '<S448>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5'
 * '<S449>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01'
 * '<S450>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05'
 * '<S451>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B'
 * '<S452>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B'
 * '<S453>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03'
 * '<S454>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00'
 * '<S455>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C1'
 * '<S456>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C2'
 * '<S457>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C1'
 * '<S458>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C2'
 * '<S459>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C1'
 * '<S460>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C2'
 * '<S461>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable'
 * '<S462>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3'
 * '<S463>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4'
 * '<S464>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM'
 * '<S465>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPDT'
 * '<S466>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses15'
 * '<S467>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses16'
 * '<S468>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses2'
 * '<S469>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses3'
 * '<S470>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1'
 * '<S471>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel'
 * '<S472>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S473>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ'
 * '<S474>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ1'
 * '<S475>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ2'
 * '<S476>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ3'
 * '<S477>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ4'
 * '<S478>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ5'
 * '<S479>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1'
 * '<S480>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel'
 * '<S481>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S482>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ'
 * '<S483>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ1'
 * '<S484>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ2'
 * '<S485>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ3'
 * '<S486>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ4'
 * '<S487>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ5'
 * '<S488>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1'
 * '<S489>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1/ACC1_2A_'
 * '<S490>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1'
 * '<S491>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1/AEBS1_A0'
 * '<S492>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1'
 * '<S493>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1/AIR1'
 * '<S494>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1'
 * '<S495>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1/AMB'
 * '<S496>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4'
 * '<S497>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4/B2'
 * '<S498>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1'
 * '<S499>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1/Tracks'
 * '<S500>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1'
 * '<S501>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1/CCVS1_00'
 * '<S502>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1'
 * '<S503>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1/CCVS1_31'
 * '<S504>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4'
 * '<S505>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_00'
 * '<S506>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_1'
 * '<S507>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1'
 * '<S508>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1/CVW_0B1'
 * '<S509>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1'
 * '<S510>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1/EBC1_0B'
 * '<S511>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1'
 * '<S512>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1/EBC1_0B'
 * '<S513>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1'
 * '<S514>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1/EBC2_0B1'
 * '<S515>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00'
 * '<S516>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1'
 * '<S517>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/EQ1'
 * '<S518>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/Decode'
 * '<S519>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/serialize_tpdt'
 * '<S520>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/MergeBuses'
 * '<S521>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1'
 * '<S522>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte11'
 * '<S523>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13'
 * '<S524>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte14'
 * '<S525>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16'
 * '<S526>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18'
 * '<S527>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20'
 * '<S528>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte2'
 * '<S529>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22'
 * '<S530>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte23'
 * '<S531>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte24'
 * '<S532>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte25'
 * '<S533>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte26'
 * '<S534>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte27'
 * '<S535>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29'
 * '<S536>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31'
 * '<S537>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33'
 * '<S538>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte34'
 * '<S539>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte35'
 * '<S540>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte36'
 * '<S541>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte37'
 * '<S542>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte38'
 * '<S543>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4'
 * '<S544>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte5'
 * '<S545>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7'
 * '<S546>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte8'
 * '<S547>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10'
 * '<S548>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1/OR'
 * '<S549>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13/OR'
 * '<S550>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16/OR'
 * '<S551>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18/OR'
 * '<S552>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20/OR'
 * '<S553>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22/OR'
 * '<S554>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29/OR'
 * '<S555>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31/OR'
 * '<S556>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33/OR'
 * '<S557>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4/OR'
 * '<S558>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7/OR'
 * '<S559>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10/OR'
 * '<S560>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1'
 * '<S561>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1/EEC1_001'
 * '<S562>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2'
 * '<S563>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2/EEC2_001'
 * '<S564>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1'
 * '<S565>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1/EEC3_001'
 * '<S566>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1'
 * '<S567>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1/ETC2_031'
 * '<S568>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4'
 * '<S569>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_011'
 * '<S570>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_1'
 * '<S571>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1'
 * '<S572>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1/HRW_0B'
 * '<S573>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2'
 * '<S574>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6'
 * '<S575>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2/PropB_REAX_2_13'
 * '<S576>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6/PropB_REAX_2_13'
 * '<S577>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1'
 * '<S578>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2'
 * '<S579>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6'
 * '<S580>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel'
 * '<S581>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S582>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S583>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6/CAN_TYPE1_RX_M3_C2'
 * '<S584>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ'
 * '<S585>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ1'
 * '<S586>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ2'
 * '<S587>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ3'
 * '<S588>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ4'
 * '<S589>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ5'
 * '<S590>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1'
 * '<S591>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2'
 * '<S592>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3'
 * '<S593>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel'
 * '<S594>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S595>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S596>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3/CAN_TYPE1_RX_M3_C2'
 * '<S597>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ'
 * '<S598>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ1'
 * '<S599>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ2'
 * '<S600>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ3'
 * '<S601>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ4'
 * '<S602>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ5'
 * '<S603>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1'
 * '<S604>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2'
 * '<S605>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3'
 * '<S606>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel'
 * '<S607>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S608>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S609>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3/CAN_TYPE1_RX_M2_C1'
 * '<S610>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ'
 * '<S611>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ1'
 * '<S612>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ2'
 * '<S613>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ3'
 * '<S614>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ4'
 * '<S615>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ5'
 * '<S616>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6'
 * '<S617>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeLeft'
 * '<S618>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeRight'
 * '<S619>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LanePosEst'
 * '<S620>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4'
 * '<S621>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_011'
 * '<S622>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_1'
 * '<S623>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3'
 * '<S624>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3/Bendix_Prop2C2_Status_30'
 * '<S625>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1'
 * '<S626>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1/SSI2_031'
 * '<S627>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6'
 * '<S628>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6/PX2_MapLaneEgoLeft'
 * '<S629>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6'
 * '<S630>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6/PX2_MapLaneEgoRight'
 * '<S631>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6'
 * '<S632>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6/PX2_EgoLanePos'
 * '<S633>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4'
 * '<S634>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4/SystemTime_01'
 * '<S635>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5'
 * '<S636>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5/TC1_03_05'
 * '<S637>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1'
 * '<S638>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1/VDC1_0B_'
 * '<S639>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1'
 * '<S640>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1/VDC2_0B1'
 * '<S641>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1'
 * '<S642>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1/VEP1'
 * '<S643>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00'
 * '<S644>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI'
 * '<S645>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/EQ1'
 * '<S646>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/Decode'
 * '<S647>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/serialize_tpdt'
 * '<S648>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero1'
 * '<S649>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero2'
 * '<S650>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop'
 * '<S651>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop1'
 * '<S652>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/If_Then_Else'
 * '<S653>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel'
 * '<S654>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ'
 * '<S655>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ1'
 * '<S656>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ2'
 * '<S657>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ3'
 * '<S658>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ4'
 * '<S659>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ5'
 * '<S660>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/MergeBuses'
 * '<S661>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1'
 * '<S662>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte2'
 * '<S663>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4'
 * '<S664>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6'
 * '<S665>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8'
 * '<S666>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND1'
 * '<S667>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND2'
 * '<S668>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4/OR'
 * '<S669>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6/OR1'
 * '<S670>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8/OR2'
 * '<S671>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/MergeBuses'
 * '<S672>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1'
 * '<S673>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte2'
 * '<S674>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte3'
 * '<S675>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte5'
 * '<S676>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7'
 * '<S677>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte8'
 * '<S678>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND'
 * '<S679>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND1'
 * '<S680>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND2'
 * '<S681>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7/OR'
 * '<S682>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM'
 * '<S683>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS'
 * '<S684>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort'
 * '<S685>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck'
 * '<S686>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS'
 * '<S687>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ'
 * '<S688>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ1'
 * '<S689>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ2'
 * '<S690>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ3'
 * '<S691>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ4'
 * '<S692>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/MergeBuses'
 * '<S693>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte1'
 * '<S694>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3'
 * '<S695>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte4'
 * '<S696>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8'
 * '<S697>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3/OR'
 * '<S698>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8/OR'
 * '<S699>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/MergeBuses'
 * '<S700>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte1'
 * '<S701>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte2'
 * '<S702>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte3'
 * '<S703>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8'
 * '<S704>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8/OR'
 * '<S705>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/MergeBuses'
 * '<S706>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte1'
 * '<S707>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte2'
 * '<S708>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8'
 * '<S709>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8/OR'
 * '<S710>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/MergeBuses'
 * '<S711>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte1'
 * '<S712>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3'
 * '<S713>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte4'
 * '<S714>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8'
 * '<S715>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3/OR'
 * '<S716>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8/OR'
 * '<S717>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/MergeBuses'
 * '<S718>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte1'
 * '<S719>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3'
 * '<S720>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte4'
 * '<S721>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte5'
 * '<S722>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8'
 * '<S723>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3/OR'
 * '<S724>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8/OR'
 * '<S725>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL1'
 * '<S726>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL2'
 * '<S727>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL3'
 * '<S728>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL1'
 * '<S729>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL2'
 * '<S730>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL3'
 * '<S731>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL4'
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL5'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Negative'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Negative/Negative'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive/Positive'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay/Compare To Zero'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay/Compare To Zero'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S804>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S805>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S806>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S807>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S808>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S809>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S810>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S811>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S812>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S813>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S814>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S815>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S816>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S817>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S818>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S819>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S820>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S821>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S822>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S823>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S824>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S825>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S826>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S827>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S828>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S829>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S830>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S831>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S832>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S833>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S834>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S835>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S836>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S837>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S838>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S839>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S840>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S841>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S842>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S843>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S844>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S845>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S846>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S847>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S848>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S849>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S850>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S851>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S852>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S853>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S854>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1043>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1044>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1045>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1046>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1047>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1048>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1049>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1050>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1051>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1052>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1053>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1054>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1055>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1056>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1057>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL3'
 * '<S1058>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL4'
 * '<S1059>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1060>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1061>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1062>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1063>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1064>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1065>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1066>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1067>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1068>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1069>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1070>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1071>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1072>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1073>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1074>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1075>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1076>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
