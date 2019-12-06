/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.868
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Fri Dec  6 11:54:14 2019
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

/* Block signals for system '<S990>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S1014>/Switch' */
  real_T XBRUrgency;                   /* '<S1014>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S1014>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S1014>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1014>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S1014>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S1014>/Switch' */
} B_If_Then_Else_L4_MABX_fr_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S397>/Decoder' */
  real_T SFunction1_o1;                /* '<S733>/S-Function1' */
  real_T SFunction1_o2;                /* '<S733>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S411>/Data Type Conversion2' */
  real_T Xold;                         /* '<S771>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S771>/Init' */
  real_T FixPtSum1;                    /* '<S767>/FixPt Sum1' */
  real_T FixPtSum1_f;                  /* '<S770>/FixPt Sum1' */
  real_T Gain;                         /* '<S411>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S411>/Data Type Conversion9' */
  real_T Xold_p;                       /* '<S763>/FixPt Unit Delay1' */
  real_T Init_f;                       /* '<S763>/Init' */
  real_T FixPtSum1_i;                  /* '<S759>/FixPt Sum1' */
  real_T FixPtSum1_c;                  /* '<S762>/FixPt Sum1' */
  real_T SFunction1_o1_l;              /* '<S734>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S734>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S411>/Data Type Conversion3' */
  real_T Xold_m;                       /* '<S787>/FixPt Unit Delay1' */
  real_T Init_c;                       /* '<S787>/Init' */
  real_T FixPtSum1_cq;                 /* '<S783>/FixPt Sum1' */
  real_T FixPtSum1_iu;                 /* '<S786>/FixPt Sum1' */
  real_T Gain1;                        /* '<S411>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S411>/Data Type Conversion1' */
  real_T Xold_e;                       /* '<S779>/FixPt Unit Delay1' */
  real_T Init_m;                       /* '<S779>/Init' */
  real_T FixPtSum1_j;                  /* '<S775>/FixPt Sum1' */
  real_T FixPtSum1_ip;                 /* '<S778>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S808>/MinMax1' */
  real_T Saturation;                   /* '<S808>/Saturation' */
  real_T Divide;                       /* '<S808>/Divide' */
  real_T Product2;                     /* '<S808>/Product2' */
  real_T Subtract1;                    /* '<S808>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S808>/Unit_Delay2' */
  real_T Product1;                     /* '<S808>/Product1' */
  real_T Add1;                         /* '<S808>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S741>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_b;                    /* '<S809>/MinMax1' */
  real_T Saturation_i;                 /* '<S809>/Saturation' */
  real_T Divide_p;                     /* '<S809>/Divide' */
  real_T Product2_p;                   /* '<S809>/Product2' */
  real_T Subtract1_g;                  /* '<S809>/Subtract1' */
  real_T Unit_Delay2_h;                /* '<S809>/Unit_Delay2' */
  real_T Product1_e;                   /* '<S809>/Product1' */
  real_T Add1_f;                       /* '<S809>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S741>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S743>/Subtract' */
  real_T Abs;                          /* '<S743>/Abs' */
  real_T Xold_n;                       /* '<S807>/FixPt Unit Delay1' */
  real_T Init_fo;                      /* '<S807>/Init' */
  real_T Xold_j;                       /* '<S806>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S806>/Init' */
  real_T MinMax;                       /* '<S737>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S743>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S738>/Data Type Conversion2' */
  real_T Xold_pl;                      /* '<S795>/FixPt Unit Delay1' */
  real_T Init_a;                       /* '<S795>/Init' */
  real_T FixPtSum1_jm;                 /* '<S791>/FixPt Sum1' */
  real_T FixPtSum1_cv;                 /* '<S794>/FixPt Sum1' */
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
  real_T DataTypeConversion[8];        /* '<S1037>/Data Type Conversion' */
  real_T DataTypeConversion_e[8];      /* '<S1038>/Data Type Conversion' */
  real_T TmpRTBAtANDInport1;           /* '<S1053>/Flash' */
  real_T MinMax_o;                     /* '<S825>/MinMax' */
  real_T DataTypeConversion1;          /* '<S825>/Data Type Conversion1' */
  real_T Divide_l;                     /* '<S825>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S825>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1051>/1-D Lookup Table2' */
  real_T Gain1_d;                      /* '<S825>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S825>/Data Type Conversion6' */
  real_T MinMax1_h;                    /* '<S825>/MinMax1' */
  real_T DataTypeConversion2_i;        /* '<S825>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S825>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S825>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1051>/1-D Lookup Table3' */
  real_T Gain_n;                       /* '<S825>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S825>/Data Type Conversion10' */
  real_T SFunction1_o1_c;              /* '<S732>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S732>/S-Function1' */
  real_T ShiftControlDC;               /* '<S411>/ShifterControlDC' */
  real_T Flash;                        /* '<S1053>/Flash' */
  real_T HDOP_;                        /* '<S568>/Switch' */
  real_T DesSteeringAngle;             /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle2;           /* '<S3>/Unit_Delay' */
  real_T SPN1760_GrossCombinationVehic_h;/* '<S3>/Unit_Delay' */
  real_T ACCDistanceAlertSignal_o;     /* '<S3>/Unit_Delay' */
  real_T ForwardCollisionWarning_c;    /* '<S3>/Unit_Delay' */
  real_T SPN544_EngineReferenceTorque_g;/* '<S3>/Unit_Delay' */
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
  real_T PitchAngleExRange_m;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstPosition;       /* '<S3>/Unit_Delay' */
  real_T DesSteeringDistTerm;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstAngle;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstNumPoints;      /* '<S3>/Unit_Delay' */
  real_T Latitude__c;                  /* '<S3>/Unit_Delay' */
  real_T Longitude__m;                 /* '<S3>/Unit_Delay' */
  real_T HDOP__o;                      /* '<S3>/Unit_Delay' */
  real_T PressureP1_a;                 /* '<S3>/Unit_Delay' */
  real_T PressureP4_h;                 /* '<S3>/Unit_Delay' */
  real_T PressureP21_b;                /* '<S3>/Unit_Delay' */
  real_T numLanePoints;                /* '<S3>/Unit_Delay' */
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
  real_T FrontAxleRightWheelSpeed;     /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle;            /* '<S3>/Unit_Delay' */
  real_T EBSBrakeSwitch;               /* '<S3>/Unit_Delay' */
  real_T SPN524_TransSelectedGear_m;   /* '<S3>/Unit_Delay' */
  real_T SPN523_TransCurrentGear_n;    /* '<S3>/Unit_Delay' */
  real_T SPN526_TransActualGearRatio_f;/* '<S3>/Unit_Delay' */
  real_T ActualEngPercentTorque;       /* '<S3>/Unit_Delay' */
  real_T ActlEngPrcntTrqueHighResolution;/* '<S3>/Unit_Delay' */
  real_T EngSpeed;                     /* '<S3>/Unit_Delay' */
  real_T DriversDemandEngPercentTorque;/* '<S3>/Unit_Delay' */
  real_T SPN514_NominalFrictionPercent_g;/* '<S3>/Unit_Delay' */
  real_T SPN2978_EstEngParasiticLosses_m;/* '<S3>/Unit_Delay' */
  real_T DataTypeConversion2_c;        /* '<S521>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S521>/Product' */
  real_T DataTypeConversion_h;         /* '<S413>/Data Type Conversion' */
  real_T DataTypeConversion_f;         /* '<S528>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S528>/Add' */
  real_T DataTypeConversion1_b;        /* '<S413>/Data Type Conversion1' */
  real_T DataTypeConversion2_o;        /* '<S525>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S525>/Product' */
  real_T DataTypeConversion10;         /* '<S413>/Data Type Conversion10' */
  real_T DataTypeConversion2_k;        /* '<S526>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S526>/Product' */
  real_T DataTypeConversion11;         /* '<S413>/Data Type Conversion11' */
  real_T DataTypeConversion2_l;        /* '<S529>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S529>/Product' */
  real_T DataTypeConversion13;         /* '<S413>/Data Type Conversion13' */
  real_T DataTypeConversion2_e;        /* '<S530>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S530>/Product' */
  real_T DataTypeConversion14;         /* '<S413>/Data Type Conversion14' */
  real_T DataTypeConversion2_m;        /* '<S531>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S531>/Product' */
  real_T DataTypeConversion15;         /* '<S413>/Data Type Conversion15' */
  real_T DataTypeConversion2_cb;       /* '<S532>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S532>/Product' */
  real_T DataTypeConversion16;         /* '<S413>/Data Type Conversion16' */
  real_T DataTypeConversion_hg;        /* '<S533>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S533>/Add' */
  real_T DataTypeConversion17;         /* '<S413>/Data Type Conversion17' */
  real_T DataTypeConversion_ff;        /* '<S534>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S534>/Add' */
  real_T DataTypeConversion18;         /* '<S413>/Data Type Conversion18' */
  real_T DataTypeConversion2_md;       /* '<S535>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S535>/Product' */
  real_T DataTypeConversion19;         /* '<S413>/Data Type Conversion19' */
  real_T DataTypeConversion2_n;        /* '<S543>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S543>/Product' */
  real_T DataTypeConversion2_g;        /* '<S413>/Data Type Conversion2' */
  real_T DataTypeConversion2_f;        /* '<S536>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S536>/Product' */
  real_T DataTypeConversion20;         /* '<S413>/Data Type Conversion20' */
  real_T DataTypeConversion_m;         /* '<S544>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S544>/Add' */
  real_T DataTypeConversion3;          /* '<S413>/Data Type Conversion3' */
  real_T DataTypeConversion2_fr;       /* '<S545>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S545>/Product' */
  real_T DataTypeConversion4;          /* '<S413>/Data Type Conversion4' */
  real_T DataTypeConversion_d;         /* '<S546>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S546>/Add' */
  real_T DataTypeConversion5;          /* '<S413>/Data Type Conversion5' */
  real_T DataTypeConversion2_kg;       /* '<S547>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S547>/Product' */
  real_T DataTypeConversion6;          /* '<S413>/Data Type Conversion6' */
  real_T DataTypeConversion_a;         /* '<S522>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S522>/Add' */
  real_T DataTypeConversion7;          /* '<S413>/Data Type Conversion7' */
  real_T DataTypeConversion2_ln;       /* '<S523>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S523>/Product' */
  real_T DataTypeConversion8;          /* '<S413>/Data Type Conversion8' */
  real_T DataTypeConversion_g;         /* '<S524>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S524>/Add' */
  real_T DataTypeConversion9;          /* '<S413>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S470>/Data Type Conversion9' */
  real_T RX_time_a;                    /* '<S416>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S470>/Data Type Conversion10' */
  real_T RX_delta_time_l;              /* '<S416>/Multiport_Switch' */
  real_T RX_time_g;                    /* '<S479>/Data Type Conversion9' */
  real_T RX_time_f;                    /* '<S417>/Multiport_Switch' */
  real_T RX_delta_time_c;              /* '<S479>/Data Type Conversion10' */
  real_T RX_delta_time_n;              /* '<S417>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S488>/Data Type Conversion1' */
  real_T RX_delta_time_f;              /* '<S488>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S488>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S488>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S488>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S488>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S488>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S488>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S488>/Data Type Conversion7' */
  real_T RX_time_j;                    /* '<S488>/Data Type Conversion9' */
  real_T RX_delta_time_p;              /* '<S490>/Data Type Conversion10' */
  real_T RX_time_n;                    /* '<S490>/Data Type Conversion9' */
  real_T RX_delta_time_k;              /* '<S492>/Data Type Conversion10' */
  real_T RX_time_k;                    /* '<S492>/Data Type Conversion9' */
  real_T RX_delta_time_fg;             /* '<S494>/Data Type Conversion10' */
  real_T RX_time_b;                    /* '<S494>/Data Type Conversion9' */
  real_T RX_delta_time_e;              /* '<S496>/Data Type Conversion10' */
  real_T RX_time_h;                    /* '<S496>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S498>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S498>/Data Type Conversion9' */
  real_T RX_delta_time_g;              /* '<S500>/Data Type Conversion10' */
  real_T RX_time_i;                    /* '<S500>/Data Type Conversion9' */
  real_T RX_delta_time_k2;             /* '<S502>/Data Type Conversion10' */
  real_T RX_time_bm;                   /* '<S502>/Data Type Conversion9' */
  real_T RX_time_m;                    /* '<S504>/Switch' */
  real_T RX_delta_time_fx;             /* '<S504>/Switch' */
  real_T RX_delta_time_o;              /* '<S507>/Data Type Conversion10' */
  real_T RX_time_d;                    /* '<S507>/Data Type Conversion9' */
  real_T RX_delta_time_ng;             /* '<S509>/Data Type Conversion10' */
  real_T RX_time_bmo;                  /* '<S509>/Data Type Conversion9' */
  real_T RX_delta_time_h;              /* '<S511>/Data Type Conversion10' */
  real_T RX_time_iw;                   /* '<S511>/Data Type Conversion9' */
  real_T RX_delta_time_j;              /* '<S513>/Data Type Conversion10' */
  real_T RX_time_k5;                   /* '<S513>/Data Type Conversion9' */
  real_T RX_delta_time_hq;             /* '<S560>/Data Type Conversion10' */
  real_T RX_time_if;                   /* '<S560>/Data Type Conversion9' */
  real_T RX_delta_time_gn;             /* '<S562>/Data Type Conversion10' */
  real_T RX_time_g4;                   /* '<S562>/Data Type Conversion9' */
  real_T RX_delta_time_cb;             /* '<S564>/Data Type Conversion10' */
  real_T RX_time_ha;                   /* '<S564>/Data Type Conversion9' */
  real_T RX_delta_time_hk;             /* '<S566>/Data Type Conversion10' */
  real_T RX_time_gj;                   /* '<S566>/Data Type Conversion9' */
  real_T SID_f;                        /* '<S568>/Switch' */
  real_T SetMode;                      /* '<S568>/Switch' */
  real_T OpMode;                       /* '<S568>/Switch' */
  real_T VDOP;                         /* '<S568>/Switch' */
  real_T TDOP;                         /* '<S568>/Switch' */
  real_T RX_time_is;                   /* '<S568>/Switch' */
  real_T RX_delta_time_cu;             /* '<S568>/Switch' */
  real_T RX_delta_time_gs;             /* '<S571>/Data Type Conversion10' */
  real_T RX_time_o;                    /* '<S571>/Data Type Conversion9' */
  real_T RX_time_bb;                   /* '<S438>/Switch' */
  real_T RX_delta_time_h3;             /* '<S438>/Switch' */
  real_T RX_time_l;                    /* '<S605>/Data Type Conversion9' */
  real_T RX_time_kj;                   /* '<S441>/Multiport_Switch' */
  real_T RX_delta_time_cq;             /* '<S605>/Data Type Conversion10' */
  real_T RX_delta_time_b;              /* '<S441>/Multiport_Switch' */
  real_T RX_delta_time_bf;             /* '<S616>/Data Type Conversion1' */
  real_T RX_delta_time_kk;             /* '<S616>/Data Type Conversion10' */
  real_T RX_time_kg;                   /* '<S616>/Data Type Conversion3' */
  real_T RX_delta_time_fh;             /* '<S616>/Data Type Conversion4' */
  real_T RX_time_i0;                   /* '<S616>/Data Type Conversion6' */
  real_T RX_time_of;                   /* '<S616>/Data Type Conversion9' */
  real_T RX_time_ja;                   /* '<S620>/Switch' */
  real_T RX_delta_time_ce;             /* '<S620>/Switch' */
  real_T XPR1ControlStatus;            /* '<S623>/Data Type Conversion1' */
  real_T RX_delta_time_jp;             /* '<S623>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S623>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S623>/Data Type Conversion3' */
  real_T RX_time_gm;                   /* '<S623>/Data Type Conversion9' */
  real_T RX_delta_time_ot;             /* '<S625>/Data Type Conversion10' */
  real_T RX_time_o4;                   /* '<S625>/Data Type Conversion9' */
  real_T RX_delta_time_lr;             /* '<S627>/Data Type Conversion10' */
  real_T RX_time_io;                   /* '<S627>/Data Type Conversion9' */
  real_T RX_delta_time_d;              /* '<S629>/Data Type Conversion10' */
  real_T RX_time_ke;                   /* '<S629>/Data Type Conversion9' */
  real_T RX_delta_time_by;             /* '<S631>/Data Type Conversion10' */
  real_T RX_time_fl;                   /* '<S631>/Data Type Conversion9' */
  real_T RX_delta_time_i;              /* '<S633>/Data Type Conversion10' */
  real_T RX_time_e;                    /* '<S633>/Data Type Conversion9' */
  real_T RX_delta_time_d3;             /* '<S635>/Data Type Conversion10' */
  real_T RX_time_p;                    /* '<S635>/Data Type Conversion9' */
  real_T RX_delta_time_kw;             /* '<S637>/Data Type Conversion10' */
  real_T RX_time_c;                    /* '<S637>/Data Type Conversion9' */
  real_T RX_delta_time_kx;             /* '<S639>/Data Type Conversion10' */
  real_T RX_time_jn;                   /* '<S639>/Data Type Conversion9' */
  real_T PitchAngleExRange_a;          /* '<S641>/Data Type Conversion1' */
  real_T RX_delta_time_ox;             /* '<S641>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S641>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S641>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S641>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S641>/Data Type Conversion5' */
  real_T RX_time_as;                   /* '<S641>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S410>/Constant2' */
  real_T DataTypeConversion4_i;        /* '<S663>/Data Type Conversion4' */
  real_T DataTypeConversion1_f;        /* '<S664>/Data Type Conversion1' */
  real_T DataTypeConversion1_j;        /* '<S665>/Data Type Conversion1' */
  real_T RX_time_o41;                  /* '<S578>/Data Type Conversion9' */
  real_T RX_time_ek;                   /* '<S579>/Data Type Conversion9' */
  real_T RX_time_dv;                   /* '<S439>/Multiport_Switch' */
  real_T RX_delta_time_gj;             /* '<S578>/Data Type Conversion10' */
  real_T RX_delta_time_ig;             /* '<S579>/Data Type Conversion10' */
  real_T RX_delta_time_fn;             /* '<S439>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S675>/Data Type Conversion5' */
  real_T DataTypeConversion5_c;        /* '<S415>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S676>/Data Type Conversion9' */
  real_T DataTypeConversion6_l;        /* '<S415>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S677>/Data Type Conversion11' */
  real_T DataTypeConversion7_f;        /* '<S415>/Data Type Conversion7' */
  real_T RX_time_hv;                   /* '<S592>/Data Type Conversion9' */
  real_T RX_time_ij;                   /* '<S440>/Multiport_Switch' */
  real_T RX_delta_time_bv;             /* '<S592>/Data Type Conversion10' */
  real_T RX_delta_time_e2;             /* '<S440>/Multiport_Switch' */
  real_T ShiftControlFreq;             /* '<S411>/ShifterControlFreq' */
  real_T SFunction1_a;                 /* '<S725>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S411>/ShifterControlDC2' */
  real_T SFunction1_k;                 /* '<S726>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S411>/ShifterControlDC1' */
  real_T SFunction1_o1_h;              /* '<S1044>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S1044>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1044>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1044>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S1040>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S1040>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S1040>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S1040>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S1039>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S1039>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S1039>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S1039>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S834>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S834>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1029>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1029>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1029>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_b;     /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_b;     /* '<S1029>/Bus Selector' */
  real_T BrakeSwitch_i;                /* '<S1029>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1029>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1029>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1029>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1029>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1029>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1029>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1029>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1030>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1030>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1030>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1030>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1030>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1030>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1030>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1030>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1030>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1030>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1030>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1030>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1030>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1030>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1030>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1030>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1030>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1030>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1030>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1030>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1030>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1030>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1030>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1030>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1030>/Bus Selector' */
  real_T SFunction1_o1_hy;             /* '<S1032>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S1032>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S1032>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S1032>/S-Function1' */
  real_T SFunction1_o1_hr;             /* '<S1031>/S-Function1' */
  real_T SFunction1_o2_cn;             /* '<S1031>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S1031>/S-Function1' */
  real_T DataTypeConversion_ew;        /* '<S1018>/Data Type Conversion' */
  real_T DataTypeConversion1_n;        /* '<S1018>/Data Type Conversion1' */
  real_T DataTypeConversion2_d;        /* '<S1018>/Data Type Conversion2' */
  real_T SFunction1_o1_f;              /* '<S1020>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S1020>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S1020>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S1020>/S-Function1' */
  real_T BrakingPID_Y_e;               /* '<S990>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S990>/Switch1' */
  real_T DataTypeConversion1_p;        /* '<S993>/Data Type Conversion1' */
  real_T DataTypeConversion2_h;        /* '<S993>/Data Type Conversion2' */
  real_T DataTypeConversion3_o;        /* '<S993>/Data Type Conversion3' */
  real_T DataTypeConversion4_k;        /* '<S993>/Data Type Conversion4' */
  real_T DataTypeConversion5_a;        /* '<S993>/Data Type Conversion5' */
  real_T DataTypeConversion6_h;        /* '<S993>/Data Type Conversion6' */
  real_T DataTypeConversion7_o;        /* '<S993>/Data Type Conversion7' */
  real_T Saturation_b;                 /* '<S989>/Saturation' */
  real_T BrakingPID_Y_es;              /* '<S989>/Bus Selector' */
  real_T Gain_i;                       /* '<S989>/Gain' */
  real_T Gain_c;                       /* '<S1006>/Gain' */
  real_T Gain1_f;                      /* '<S1006>/Gain1' */
  real_T DataTypeConversion1_c[8];     /* '<S987>/Data Type Conversion1' */
  real_T FrontAxleSpeed_a;             /* '<S1003>/Bus Selector4' */
  real_T DataTypeConversion_j;         /* '<S1003>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_l; /* '<S1003>/Bus Selector4' */
  real_T DataTypeConversion1_e;        /* '<S1003>/Data Type Conversion1' */
  real_T SPN1808_YawRate_f;            /* '<S1003>/Bus Selector4' */
  real_T DataTypeConversion2_e1;       /* '<S1003>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_k;/* '<S1003>/Bus Selector4' */
  real_T DataTypeConversion3_l;        /* '<S1003>/Data Type Conversion3' */
  real_T DataType;                     /* '<S1002>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S988>/Shift_Arithmetic 4' */
  real_T DataType_c;                   /* '<S998>/DataType' */
  real_T DataType_l;                   /* '<S999>/DataType' */
  real_T DataType_m;                   /* '<S1000>/DataType' */
  real_T DataType_h;                   /* '<S1001>/DataType' */
  real_T Shift_Arithmetic;             /* '<S988>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S988>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S988>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S988>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S990>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_a;     /* '<S990>/Divide1' */
  real_T SFunction1_o1_fy;             /* '<S1004>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S1004>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S1004>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S1004>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S996>/S-Function1' */
  real_T SFunction1_o2_o4;             /* '<S996>/S-Function1' */
  real_T SFunction1_o3_c3;             /* '<S996>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S996>/S-Function1' */
  real_T SFunction1_o1_bu;             /* '<S994>/S-Function1' */
  real_T SFunction1_o2_ak;             /* '<S994>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S994>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S994>/S-Function1' */
  real_T DataTypeConversion4_p;        /* '<S926>/Data Type Conversion4' */
  real_T DataType_i;                   /* '<S923>/DataType' */
  real_T Shift_Arithmetic2_g;          /* '<S915>/Shift_Arithmetic 2' */
  real_T DataType_d;                   /* '<S921>/DataType' */
  real_T DataType_j;                   /* '<S922>/DataType' */
  real_T DataType_g;                   /* '<S924>/DataType' */
  real_T DataType_c2;                  /* '<S925>/DataType' */
  real_T Shift_Arithmetic_i;           /* '<S915>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_b;          /* '<S915>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_e;          /* '<S915>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_b;          /* '<S915>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_ff;       /* '<S934>/Data Type Conversion1' */
  real_T DataTypeConversion2_ig;       /* '<S934>/Data Type Conversion2' */
  real_T DataTypeConversion3_k;        /* '<S934>/Data Type Conversion3' */
  real_T DataTypeConversion4_h;        /* '<S934>/Data Type Conversion4' */
  real_T DataTypeConversion5_h;        /* '<S934>/Data Type Conversion5' */
  real_T DataTypeConversion6_b;        /* '<S934>/Data Type Conversion6' */
  real_T DataTypeConversion7_j;        /* '<S934>/Data Type Conversion7' */
  real_T DataTypeConversion8_e;        /* '<S934>/Data Type Conversion8' */
  real_T DataType_f;                   /* '<S931>/DataType' */
  real_T Shift_Arithmetic2_p;          /* '<S916>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_i;        /* '<S935>/Data Type Conversion1' */
  real_T DataTypeConversion2_nv;       /* '<S935>/Data Type Conversion2' */
  real_T DataTypeConversion3_i;        /* '<S935>/Data Type Conversion3' */
  real_T DataTypeConversion4_m;        /* '<S935>/Data Type Conversion4' */
  real_T DataTypeConversion5_e;        /* '<S935>/Data Type Conversion5' */
  real_T DataTypeConversion6_o;        /* '<S935>/Data Type Conversion6' */
  real_T DataTypeConversion7_g;        /* '<S935>/Data Type Conversion7' */
  real_T DataTypeConversion8_d;        /* '<S935>/Data Type Conversion8' */
  real_T DataType_a;                   /* '<S932>/DataType' */
  real_T Shift_Arithmetic3_j;          /* '<S916>/Shift_Arithmetic 3' */
  real_T DataType_o;                   /* '<S929>/DataType' */
  real_T DataType_gc;                  /* '<S930>/DataType' */
  real_T DataType_n;                   /* '<S933>/DataType' */
  real_T Shift_Arithmetic_n;           /* '<S916>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_i;          /* '<S916>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_m;          /* '<S916>/Shift_Arithmetic 4' */
  real_T Switch;                       /* '<S969>/Switch' */
  real_T Switch2;                      /* '<S979>/Switch2' */
  real_T DataType_l3;                  /* '<S979>/DataType' */
  real_T DataTypeConversion1_d[8];     /* '<S917>/Data Type Conversion1' */
  real_T DataType_d2;                  /* '<S946>/DataType' */
  real_T Shift_Arithmetic3_c;          /* '<S918>/Shift_Arithmetic 3' */
  real_T DataType_f1;                  /* '<S943>/DataType' */
  real_T DataType_e;                   /* '<S944>/DataType' */
  real_T DataType_at;                  /* '<S945>/DataType' */
  real_T DataType_ce;                  /* '<S947>/DataType' */
  real_T Shift_Arithmetic_p;           /* '<S918>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_m;          /* '<S918>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_n;          /* '<S918>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_bm;         /* '<S918>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S980>/Product' */
  real_T Switch1;                      /* '<S979>/Switch1' */
  real_T Multiport_Switch;             /* '<S969>/Multiport_Switch' */
  real_T SFunction1_o1_ep;             /* '<S949>/S-Function1' */
  real_T SFunction1_o2_ir;             /* '<S949>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S949>/S-Function1' */
  real_T SFunction1_o4_nj;             /* '<S949>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S941>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S941>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S941>/S-Function1' */
  real_T SFunction1_o4_lg;             /* '<S941>/S-Function1' */
  real_T SFunction1_o1_f1;             /* '<S940>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S940>/S-Function1' */
  real_T SFunction1_o3_dp;             /* '<S940>/S-Function1' */
  real_T SFunction1_o4_ej;             /* '<S940>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S937>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S937>/S-Function1' */
  real_T SFunction1_o3_cb;             /* '<S937>/S-Function1' */
  real_T SFunction1_o4_lb;             /* '<S937>/S-Function1' */
  real_T SFunction1_o1_hh;             /* '<S936>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S936>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S936>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S936>/S-Function1' */
  real_T SFunction1_o1_ex;             /* '<S927>/S-Function1' */
  real_T SFunction1_o2_ou;             /* '<S927>/S-Function1' */
  real_T SFunction1_o3_ky;             /* '<S927>/S-Function1' */
  real_T SFunction1_o4_km;             /* '<S927>/S-Function1' */
  real_T DataTypeConversion1_ee[8];    /* '<S856>/Data Type Conversion1' */
  real_T DataType_nn;                  /* '<S876>/DataType' */
  real_T Shift_Arithmetic2_g4;         /* '<S856>/Shift_Arithmetic 2' */
  real_T DataType_ch;                  /* '<S872>/DataType' */
  real_T DataType_gh;                  /* '<S877>/DataType' */
  real_T Shift_Arithmetic3_n;          /* '<S856>/Shift_Arithmetic 3' */
  real_T DataType_cg;                  /* '<S878>/DataType' */
  real_T Shift_Arithmetic4_p;          /* '<S856>/Shift_Arithmetic 4' */
  real_T DataType_ef;                  /* '<S875>/DataType' */
  real_T Shift_Arithmetic_l;           /* '<S856>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_e;          /* '<S856>/Shift_Arithmetic 1' */
  real_T Latitude__a;                  /* '<S913>/Bus Selector' */
  real_T DataTypeConversion_j0;        /* '<S913>/Data Type Conversion' */
  real_T Longitude__i;                 /* '<S913>/Bus Selector' */
  real_T DataTypeConversion1_o;        /* '<S913>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_i;         /* '<S863>/Bus Selector' */
  real_T ParkingBrakeSwitch_o;         /* '<S863>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_p;      /* '<S863>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_f;  /* '<S863>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_bu;    /* '<S863>/Bus Selector' */
  real_T CruiseCtrlActive_b;           /* '<S863>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_b0;    /* '<S863>/Bus Selector' */
  real_T BrakeSwitch_id;               /* '<S863>/Bus Selector' */
  real_T ClutchSwitch_f;               /* '<S863>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_a;        /* '<S863>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_n;      /* '<S863>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_a;     /* '<S863>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_g; /* '<S863>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_e;         /* '<S863>/Bus Selector' */
  real_T PTOGovernorState_j;           /* '<S863>/Bus Selector' */
  real_T CruiseCtrlStates_o;           /* '<S863>/Bus Selector' */
  real_T EngIdleIncrementSwitch_a;     /* '<S863>/Bus Selector' */
  real_T EngIdleDecrementSwitch_h;     /* '<S863>/Bus Selector' */
  real_T EngTestModeSwitch_o;          /* '<S863>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_i;  /* '<S863>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_ik;        /* '<S864>/Bus Selector' */
  real_T ParkingBrakeSwitch_ow;        /* '<S864>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_p5;     /* '<S864>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_fg; /* '<S864>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_buu;   /* '<S864>/Bus Selector' */
  real_T CruiseCtrlActive_bu;          /* '<S864>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_b0a;   /* '<S864>/Bus Selector' */
  real_T BrakeSwitch_id0;              /* '<S864>/Bus Selector' */
  real_T ClutchSwitch_fb;              /* '<S864>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_a4;       /* '<S864>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_ng;     /* '<S864>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_af;    /* '<S864>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_gi;/* '<S864>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_ed;        /* '<S864>/Bus Selector' */
  real_T PTOGovernorState_jz;          /* '<S864>/Bus Selector' */
  real_T CruiseCtrlStates_ob;          /* '<S864>/Bus Selector' */
  real_T EngIdleIncrementSwitch_a4;    /* '<S864>/Bus Selector' */
  real_T EngIdleDecrementSwitch_ho;    /* '<S864>/Bus Selector' */
  real_T EngTestModeSwitch_ot;         /* '<S864>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_ie; /* '<S864>/Bus Selector' */
  real_T DataTypeConversion1_eu[8];    /* '<S855>/Data Type Conversion1' */
  real_T SID_fa;                       /* '<S887>/Bus Selector' */
  real_T DataTypeConversion_k;         /* '<S887>/Data Type Conversion' */
  real_T COGReference_c;               /* '<S887>/Bus Selector' */
  real_T DataTypeConversion1_l;        /* '<S887>/Data Type Conversion1' */
  real_T CourseOverGround_i;           /* '<S887>/Bus Selector' */
  real_T DataTypeConversion2_a;        /* '<S887>/Data Type Conversion2' */
  real_T SpeedOverGround_l;            /* '<S887>/Bus Selector' */
  real_T DataTypeConversion3_e;        /* '<S887>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S889>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S889>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S889>/Bus Selector' */
  real_T EBSBrakeSwitch_e;             /* '<S889>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S889>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S889>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S889>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S889>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S889>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S889>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S889>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S889>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S889>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S889>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S889>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S889>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S889>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S889>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S889>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S889>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S889>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S889>/Bus Selector' */
  real_T SFunction1_o1_m;              /* '<S914>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S914>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S914>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S914>/S-Function1' */
  real_T Unit_Delay;                   /* '<S903>/Unit_Delay' */
  real_T FixPtSum1_p;                  /* '<S911>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S912>/FixPt Switch' */
  real_T SFunction1_o1_oh;             /* '<S890>/S-Function1' */
  real_T SFunction1_o2_oa;             /* '<S890>/S-Function1' */
  real_T SFunction1_o3_kw;             /* '<S890>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S890>/S-Function1' */
  real_T SFunction1_o1_hp;             /* '<S888>/S-Function1' */
  real_T SFunction1_o2_iq;             /* '<S888>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S888>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S888>/S-Function1' */
  real_T SFunction1_o1_hk;             /* '<S886>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S886>/S-Function1' */
  real_T SFunction1_o3_bz;             /* '<S886>/S-Function1' */
  real_T SFunction1_o4_lf;             /* '<S886>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S885>/S-Function1' */
  real_T SFunction1_o2_ee;             /* '<S885>/S-Function1' */
  real_T SFunction1_o3_cv;             /* '<S885>/S-Function1' */
  real_T SFunction1_o4_ca;             /* '<S885>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S870>/S-Function1' */
  real_T SFunction1_o2_c1;             /* '<S870>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S870>/S-Function1' */
  real_T SFunction1_o4_gc;             /* '<S870>/S-Function1' */
  real_T SFunction1_o1_cl;             /* '<S869>/S-Function1' */
  real_T SFunction1_o2_ds;             /* '<S869>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S869>/S-Function1' */
  real_T SFunction1_o4_mj;             /* '<S869>/S-Function1' */
  real_T SFunction1_o1_ne;             /* '<S866>/S-Function1' */
  real_T SFunction1_o2_ix;             /* '<S866>/S-Function1' */
  real_T SFunction1_o3_c1;             /* '<S866>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S866>/S-Function1' */
  real_T SFunction1_o1_ns;             /* '<S865>/S-Function1' */
  real_T SFunction1_o2_c4;             /* '<S865>/S-Function1' */
  real_T SFunction1_o3_ov;             /* '<S865>/S-Function1' */
  real_T SFunction1_o4_bc;             /* '<S865>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S844>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S844>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S844>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S844>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S844>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S844>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S844>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S844>/Bus Selector' */
  real_T DataType_ga;                  /* '<S841>/DataType' */
  real_T Shift_Arithmetic2_g3;         /* '<S836>/Shift_Arithmetic 2' */
  real_T DataType_gj;                  /* '<S839>/DataType' */
  real_T DataType_b;                   /* '<S840>/DataType' */
  real_T DataType_k;                   /* '<S842>/DataType' */
  real_T DataType_jn;                  /* '<S843>/DataType' */
  real_T Shift_Arithmetic_pf;          /* '<S836>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_c;          /* '<S836>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_e2;         /* '<S836>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_o;          /* '<S836>/Shift_Arithmetic 4' */
  real_T BarometricPress_h;            /* '<S852>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S852>/Bus Selector' */
  real_T AmbientAirTemp_i;             /* '<S852>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S852>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S852>/Bus Selector' */
  real_T DataType_n2;                  /* '<S849>/DataType' */
  real_T Shift_Arithmetic2_o;          /* '<S837>/Shift_Arithmetic 2' */
  real_T DataType_k2;                  /* '<S847>/DataType' */
  real_T DataType_mi;                  /* '<S848>/DataType' */
  real_T DataType_iu;                  /* '<S850>/DataType' */
  real_T DataType_kc;                  /* '<S851>/DataType' */
  real_T Shift_Arithmetic_k;           /* '<S837>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_is;         /* '<S837>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_k;          /* '<S837>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_or;         /* '<S837>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_ei;             /* '<S853>/S-Function1' */
  real_T SFunction1_o2_a4;             /* '<S853>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S853>/S-Function1' */
  real_T SFunction1_o4_bz;             /* '<S853>/S-Function1' */
  real_T SFunction1_o1_hkw;            /* '<S845>/S-Function1' */
  real_T SFunction1_o2_bn;             /* '<S845>/S-Function1' */
  real_T SFunction1_o3_b0;             /* '<S845>/S-Function1' */
  real_T SFunction1_o4_cv;             /* '<S845>/S-Function1' */
  real_T Unit_Delay_k;                 /* '<S822>/Unit_Delay' */
  real_T Add;                          /* '<S822>/Add' */
  real_T Xold_m2;                      /* '<S817>/FixPt Unit Delay1' */
  real_T Init_g;                       /* '<S817>/Init' */
  real_T Abs_i;                        /* '<S814>/Abs' */
  real_T Product1_k;                   /* '<S814>/Product1' */
  real_T Add1_e;                       /* '<S814>/Add1' */
  real_T MinMax2;                      /* '<S814>/MinMax2' */
  real_T Abs1;                         /* '<S814>/Abs1' */
  real_T Product2_n;                   /* '<S814>/Product2' */
  real_T Subtract1_d;                  /* '<S814>/Subtract1' */
  real_T MinMax1_h3;                   /* '<S814>/MinMax1' */
  real_T Subtract_b;                   /* '<S742>/Subtract' */
  real_T Abs_k;                        /* '<S742>/Abs' */
  real_T timeStamp;                    /* '<S646>/timeStamp' */
  real_T Unit_Delay_i;                 /* '<S646>/Unit_Delay' */
  real_T SFunction1_o1_a;              /* '<S642>/S-Function1' */
  real_T SFunction1_o2_ho;             /* '<S642>/S-Function1' */
  real_T SFunction1_o3_o0;             /* '<S642>/S-Function1' */
  real_T SFunction1_o4_pj;             /* '<S642>/S-Function1' */
  real_T SFunction1_o5;                /* '<S642>/S-Function1' */
  real_T SFunction1_o6;                /* '<S642>/S-Function1' */
  real_T SFunction1_o7;                /* '<S642>/S-Function1' */
  real_T SFunction1_o8;                /* '<S642>/S-Function1' */
  real_T SFunction1_o2_jf;             /* '<S640>/S-Function1' */
  real_T SFunction1_o3_eg;             /* '<S640>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S640>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S640>/S-Function1' */
  real_T SFunction1_o8_b;              /* '<S640>/S-Function1' */
  real_T SFunction1_o9;                /* '<S640>/S-Function1' */
  real_T SFunction1_o1_exz;            /* '<S638>/S-Function1' */
  real_T SFunction1_o2_bv;             /* '<S638>/S-Function1' */
  real_T SFunction1_o3_eo;             /* '<S638>/S-Function1' */
  real_T SFunction1_o4_e2;             /* '<S638>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S638>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S638>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S638>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S638>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S638>/S-Function1' */
  real_T SFunction1_o10;               /* '<S638>/S-Function1' */
  real_T SFunction1_o1_l5;             /* '<S636>/S-Function1' */
  real_T SFunction1_o2_ay;             /* '<S636>/S-Function1' */
  real_T SFunction1_o3_dv;             /* '<S636>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S636>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S636>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S636>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S636>/S-Function1' */
  real_T SFunction1_o8_n;              /* '<S636>/S-Function1' */
  real_T SFunction1_o9_f;              /* '<S636>/S-Function1' */
  real_T SFunction1_o10_f;             /* '<S636>/S-Function1' */
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
  real_T SFunction1_o1_k;              /* '<S634>/S-Function1' */
  real_T SFunction1_o2_hp;             /* '<S634>/S-Function1' */
  real_T SFunction1_o3_er;             /* '<S634>/S-Function1' */
  real_T SFunction1_o4_dk;             /* '<S634>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S634>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S634>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S634>/S-Function1' */
  real_T SFunction1_o1_nn;             /* '<S632>/S-Function1' */
  real_T SFunction1_o2_pb;             /* '<S632>/S-Function1' */
  real_T SFunction1_o3_ef;             /* '<S632>/S-Function1' */
  real_T SFunction1_o4_cw;             /* '<S632>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S632>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S632>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S632>/S-Function1' */
  real_T SFunction1_o8_i;              /* '<S632>/S-Function1' */
  real_T SFunction1_o9_m;              /* '<S632>/S-Function1' */
  real_T SFunction1_o1_d;              /* '<S630>/S-Function1' */
  real_T SFunction1_o2_d2;             /* '<S630>/S-Function1' */
  real_T SFunction1_o3_fr;             /* '<S630>/S-Function1' */
  real_T SFunction1_o4_f2;             /* '<S630>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S630>/S-Function1' */
  real_T SFunction1_o6_cp;             /* '<S630>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S630>/S-Function1' */
  real_T SFunction1_o8_j;              /* '<S630>/S-Function1' */
  real_T SFunction1_o9_fb;             /* '<S630>/S-Function1' */
  real_T SFunction1_o1_gl;             /* '<S628>/S-Function1' */
  real_T SFunction1_o2_bg;             /* '<S628>/S-Function1' */
  real_T SFunction1_o3_kp;             /* '<S628>/S-Function1' */
  real_T SFunction1_o4_pg;             /* '<S628>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S628>/S-Function1' */
  real_T SFunction1_o6_dg;             /* '<S628>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S628>/S-Function1' */
  real_T SFunction1_o8_io;             /* '<S628>/S-Function1' */
  real_T SFunction1_o9_b;              /* '<S628>/S-Function1' */
  real_T SFunction1_o1_l0;             /* '<S626>/S-Function1' */
  real_T SFunction1_o2_n1;             /* '<S626>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S626>/S-Function1' */
  real_T SFunction1_o4_fh;             /* '<S626>/S-Function1' */
  real_T SFunction1_o5_nh;             /* '<S626>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S626>/S-Function1' */
  real_T SFunction1_o7_cz;             /* '<S626>/S-Function1' */
  real_T SFunction1_o8_iv;             /* '<S626>/S-Function1' */
  real_T SFunction1_o9_n;              /* '<S626>/S-Function1' */
  real_T SFunction1_o10_d;             /* '<S626>/S-Function1' */
  real_T SFunction1_o1_bx;             /* '<S624>/S-Function1' */
  real_T SFunction1_o2_jr;             /* '<S624>/S-Function1' */
  real_T SFunction1_o3_j1;             /* '<S624>/S-Function1' */
  real_T SFunction1_o4_ly;             /* '<S624>/S-Function1' */
  real_T SFunction1_o5_dp;             /* '<S624>/S-Function1' */
  real_T SFunction1_o6_dv;             /* '<S624>/S-Function1' */
  real_T SFunction1_o7_k3;             /* '<S624>/S-Function1' */
  real_T SFunction1_o8_h;              /* '<S624>/S-Function1' */
  real_T SFunction1_o9_fu;             /* '<S624>/S-Function1' */
  real_T SFunction1_o10_n;             /* '<S624>/S-Function1' */
  real_T SFunction1_o11_e;             /* '<S624>/S-Function1' */
  real_T SFunction1_o12_g;             /* '<S624>/S-Function1' */
  real_T SFunction1_o13_d;             /* '<S624>/S-Function1' */
  real_T RX_time_iq;                   /* '<S620>/Data Type Conversion9' */
  real_T RX_time_pg;                   /* '<S620>/Data Type Conversion2' */
  real_T RX_delta_time_gp;             /* '<S620>/Data Type Conversion10' */
  real_T RX_delta_time_bk;             /* '<S620>/Data Type Conversion1' */
  real_T SFunction1_o1_a5;             /* '<S622>/S-Function1' */
  real_T SFunction1_o2_k4;             /* '<S622>/S-Function1' */
  real_T SFunction1_o3_ah;             /* '<S622>/S-Function1' */
  real_T SFunction1_o4_l4;             /* '<S622>/S-Function1' */
  real_T SFunction1_o5_ic;             /* '<S622>/S-Function1' */
  real_T SFunction1_o1_iy;             /* '<S621>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S621>/S-Function1' */
  real_T SFunction1_o3_p2;             /* '<S621>/S-Function1' */
  real_T SFunction1_o4_jw;             /* '<S621>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S621>/S-Function1' */
  real_T SFunction1_o1_ae;             /* '<S619>/S-Function1' */
  real_T SFunction1_o2_iv;             /* '<S619>/S-Function1' */
  real_T SFunction1_o3_lm;             /* '<S619>/S-Function1' */
  real_T SFunction1_o4_gc2;            /* '<S619>/S-Function1' */
  real_T SFunction1_o5_dn;             /* '<S619>/S-Function1' */
  real_T SFunction1_o6_dd;             /* '<S619>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S619>/S-Function1' */
  real_T SFunction1_o1_ew;             /* '<S618>/S-Function1' */
  real_T SFunction1_o2_do;             /* '<S618>/S-Function1' */
  real_T SFunction1_o3_di;             /* '<S618>/S-Function1' */
  real_T SFunction1_o4_fc;             /* '<S618>/S-Function1' */
  real_T SFunction1_o5_dq;             /* '<S618>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S618>/S-Function1' */
  real_T SFunction1_o1_ld;             /* '<S617>/S-Function1' */
  real_T SFunction1_o2_dx;             /* '<S617>/S-Function1' */
  real_T SFunction1_o3_ip;             /* '<S617>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S617>/S-Function1' */
  real_T SFunction1_o5_g5;             /* '<S617>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S617>/S-Function1' */
  real_T SFunction1_o1_mp;             /* '<S609>/S-Function1' */
  real_T SFunction1_o2_ng;             /* '<S609>/S-Function1' */
  real_T SFunction1_o3_ii;             /* '<S609>/S-Function1' */
  real_T SFunction1_o4_jn;             /* '<S609>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S609>/S-Function1' */
  real_T SFunction1_o1_h5;             /* '<S608>/S-Function1' */
  real_T SFunction1_o2_lh;             /* '<S608>/S-Function1' */
  real_T SFunction1_o3_cs;             /* '<S608>/S-Function1' */
  real_T SFunction1_o4_e0;             /* '<S608>/S-Function1' */
  real_T SFunction1_o5_c5;             /* '<S608>/S-Function1' */
  real_T SFunction1_o1_i3;             /* '<S607>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S607>/S-Function1' */
  real_T SFunction1_o3_le;             /* '<S607>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S607>/S-Function1' */
  real_T SFunction1_o5_ir;             /* '<S607>/S-Function1' */
  real_T RX_time_of0;                  /* '<S603>/Data Type Conversion9' */
  real_T RX_time_do;                   /* '<S604>/Data Type Conversion9' */
  real_T RX_delta_time_nn;             /* '<S603>/Data Type Conversion10' */
  real_T RX_delta_time_jq;             /* '<S604>/Data Type Conversion10' */
  real_T SFunction1_o1_ix;             /* '<S596>/S-Function1' */
  real_T SFunction1_o2_aa;             /* '<S596>/S-Function1' */
  real_T SFunction1_o3_hs;             /* '<S596>/S-Function1' */
  real_T SFunction1_o4_ku;             /* '<S596>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S596>/S-Function1' */
  real_T SFunction1_o6_pk;             /* '<S596>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S596>/S-Function1' */
  real_T SFunction1_o8_nf;             /* '<S596>/S-Function1' */
  real_T SFunction1_o9_k1;             /* '<S596>/S-Function1' */
  real_T SFunction1_o10_f5;            /* '<S596>/S-Function1' */
  real_T SFunction1_o11_m;             /* '<S596>/S-Function1' */
  real_T SFunction1_o1_ot;             /* '<S595>/S-Function1' */
  real_T SFunction1_o2_go;             /* '<S595>/S-Function1' */
  real_T SFunction1_o3_ly;             /* '<S595>/S-Function1' */
  real_T SFunction1_o4_cg;             /* '<S595>/S-Function1' */
  real_T SFunction1_o5_mi;             /* '<S595>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S595>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S595>/S-Function1' */
  real_T SFunction1_o8_n0;             /* '<S595>/S-Function1' */
  real_T SFunction1_o9_fr;             /* '<S595>/S-Function1' */
  real_T SFunction1_o10_a;             /* '<S595>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S595>/S-Function1' */
  real_T SFunction1_o1_mpc;            /* '<S594>/S-Function1' */
  real_T SFunction1_o2_m1;             /* '<S594>/S-Function1' */
  real_T SFunction1_o3_hi;             /* '<S594>/S-Function1' */
  real_T SFunction1_o4_fl;             /* '<S594>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S594>/S-Function1' */
  real_T SFunction1_o6_b3;             /* '<S594>/S-Function1' */
  real_T SFunction1_o7_oa;             /* '<S594>/S-Function1' */
  real_T SFunction1_o8_iy;             /* '<S594>/S-Function1' */
  real_T SFunction1_o9_p;              /* '<S594>/S-Function1' */
  real_T SFunction1_o10_m;             /* '<S594>/S-Function1' */
  real_T SFunction1_o11_d;             /* '<S594>/S-Function1' */
  real_T RX_time_nk;                   /* '<S590>/Data Type Conversion9' */
  real_T RX_time_nj;                   /* '<S591>/Data Type Conversion9' */
  real_T RX_delta_time_d2;             /* '<S590>/Data Type Conversion10' */
  real_T RX_delta_time_kz;             /* '<S591>/Data Type Conversion10' */
  real_T SFunction1_o1_pk;             /* '<S583>/S-Function1' */
  real_T SFunction1_o2_eq;             /* '<S583>/S-Function1' */
  real_T SFunction1_o3_hf;             /* '<S583>/S-Function1' */
  real_T SFunction1_o4_er;             /* '<S583>/S-Function1' */
  real_T SFunction1_o5_l3;             /* '<S583>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S583>/S-Function1' */
  real_T SFunction1_o7_ih;             /* '<S583>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S583>/S-Function1' */
  real_T SFunction1_o9_kc;             /* '<S583>/S-Function1' */
  real_T SFunction1_o10_l;             /* '<S583>/S-Function1' */
  real_T SFunction1_o11_p;             /* '<S583>/S-Function1' */
  real_T SFunction1_o1_ki;             /* '<S582>/S-Function1' */
  real_T SFunction1_o2_m5;             /* '<S582>/S-Function1' */
  real_T SFunction1_o3_ae;             /* '<S582>/S-Function1' */
  real_T SFunction1_o4_pg3;            /* '<S582>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S582>/S-Function1' */
  real_T SFunction1_o6_ka;             /* '<S582>/S-Function1' */
  real_T SFunction1_o7_hq;             /* '<S582>/S-Function1' */
  real_T SFunction1_o8_b5;             /* '<S582>/S-Function1' */
  real_T SFunction1_o9_e;              /* '<S582>/S-Function1' */
  real_T SFunction1_o10_ni;            /* '<S582>/S-Function1' */
  real_T SFunction1_o11_pw;            /* '<S582>/S-Function1' */
  real_T SFunction1_o1_b3;             /* '<S581>/S-Function1' */
  real_T SFunction1_o2_br;             /* '<S581>/S-Function1' */
  real_T SFunction1_o3_ci;             /* '<S581>/S-Function1' */
  real_T SFunction1_o4_b4;             /* '<S581>/S-Function1' */
  real_T SFunction1_o5_ce;             /* '<S581>/S-Function1' */
  real_T SFunction1_o6_hq;             /* '<S581>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S581>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S581>/S-Function1' */
  real_T SFunction1_o9_mi;             /* '<S581>/S-Function1' */
  real_T SFunction1_o10_fd;            /* '<S581>/S-Function1' */
  real_T SFunction1_o11_p4;            /* '<S581>/S-Function1' */
  real_T RX_time_he;                   /* '<S577>/Data Type Conversion9' */
  real_T RX_delta_time_m;              /* '<S577>/Data Type Conversion10' */
  real_T RX_time_mm;                   /* '<S573>/Data Type Conversion9' */
  real_T RX_time_hp;                   /* '<S574>/Data Type Conversion9' */
  real_T RX_delta_time_n4;             /* '<S573>/Data Type Conversion10' */
  real_T RX_delta_time_ou;             /* '<S574>/Data Type Conversion10' */
  real_T SFunction1_o1_ldo;            /* '<S576>/S-Function1' */
  real_T SFunction1_o2_al;             /* '<S576>/S-Function1' */
  real_T SFunction1_o3_og;             /* '<S576>/S-Function1' */
  real_T SFunction1_o4_cp;             /* '<S576>/S-Function1' */
  real_T SFunction1_o5_g1;             /* '<S576>/S-Function1' */
  real_T SFunction1_o1_a0;             /* '<S575>/S-Function1' */
  real_T SFunction1_o2_pn;             /* '<S575>/S-Function1' */
  real_T SFunction1_o3_c15;            /* '<S575>/S-Function1' */
  real_T SFunction1_o4_nq;             /* '<S575>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S575>/S-Function1' */
  real_T SFunction1_o1_br;             /* '<S572>/S-Function1' */
  real_T SFunction1_o2_oc;             /* '<S572>/S-Function1' */
  real_T SFunction1_o3_ca;             /* '<S572>/S-Function1' */
  real_T SFunction1_o4_ex;             /* '<S572>/S-Function1' */
  real_T SFunction1_o5_i1;             /* '<S572>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S572>/S-Function1' */
  real_T SFunction1_o7_dc;             /* '<S572>/S-Function1' */
  real_T RX_time_hl;                   /* '<S568>/Data Type Conversion9' */
  real_T RX_time_n5;                   /* '<S568>/Data Type Conversion2' */
  real_T RX_delta_time_byl;            /* '<S568>/Data Type Conversion10' */
  real_T RX_delta_time_cut;            /* '<S568>/Data Type Conversion1' */
  real_T SFunction1_o1_d4;             /* '<S570>/S-Function1' */
  real_T SFunction1_o2_ca;             /* '<S570>/S-Function1' */
  real_T SFunction1_o3_dt;             /* '<S570>/S-Function1' */
  real_T SFunction1_o4_an;             /* '<S570>/S-Function1' */
  real_T SFunction1_o5_pg;             /* '<S570>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S570>/S-Function1' */
  real_T SFunction1_o7_hx;             /* '<S570>/S-Function1' */
  real_T SFunction1_o8_br;             /* '<S570>/S-Function1' */
  real_T SFunction1_o9_ny;             /* '<S570>/S-Function1' */
  real_T SFunction1_o1_ey;             /* '<S569>/S-Function1' */
  real_T SFunction1_o2_nr;             /* '<S569>/S-Function1' */
  real_T SFunction1_o3_ai;             /* '<S569>/S-Function1' */
  real_T SFunction1_o4_p1;             /* '<S569>/S-Function1' */
  real_T SFunction1_o5_ba;             /* '<S569>/S-Function1' */
  real_T SFunction1_o6_gn;             /* '<S569>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S569>/S-Function1' */
  real_T SFunction1_o8_l;              /* '<S569>/S-Function1' */
  real_T SFunction1_o9_bi;             /* '<S569>/S-Function1' */
  real_T SFunction1_o1_ewm;            /* '<S567>/S-Function1' */
  real_T SFunction1_o2_fs;             /* '<S567>/S-Function1' */
  real_T SFunction1_o3_ah3;            /* '<S567>/S-Function1' */
  real_T SFunction1_o4_o4;             /* '<S567>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S567>/S-Function1' */
  real_T SFunction1_o6_io;             /* '<S567>/S-Function1' */
  real_T SFunction1_o1_ixk;            /* '<S565>/S-Function1' */
  real_T SFunction1_o2_gf;             /* '<S565>/S-Function1' */
  real_T SFunction1_o3_mg;             /* '<S565>/S-Function1' */
  real_T SFunction1_o4_l3;             /* '<S565>/S-Function1' */
  real_T SFunction1_o5_dw;             /* '<S565>/S-Function1' */
  real_T SFunction1_o1_j;              /* '<S563>/S-Function1' */
  real_T SFunction1_o2_ft;             /* '<S563>/S-Function1' */
  real_T SFunction1_o3_jp;             /* '<S563>/S-Function1' */
  real_T SFunction1_o4_bi;             /* '<S563>/S-Function1' */
  real_T SFunction1_o5_c4;             /* '<S563>/S-Function1' */
  real_T SFunction1_o6_pm;             /* '<S563>/S-Function1' */
  real_T SFunction1_o7_oq;             /* '<S563>/S-Function1' */
  real_T SFunction1_o8_lf;             /* '<S563>/S-Function1' */
  real_T SFunction1_o9_l;              /* '<S563>/S-Function1' */
  real_T SFunction1_o10_fp;            /* '<S563>/S-Function1' */
  real_T SFunction1_o11_nm;            /* '<S563>/S-Function1' */
  real_T SFunction1_o12_n;             /* '<S563>/S-Function1' */
  real_T SFunction1_o13_j;             /* '<S563>/S-Function1' */
  real_T SFunction1_o14_p;             /* '<S563>/S-Function1' */
  real_T SFunction1_o15_c;             /* '<S563>/S-Function1' */
  real_T SFunction1_o16_e;             /* '<S563>/S-Function1' */
  real_T SFunction1_o17_b;             /* '<S563>/S-Function1' */
  real_T SFunction1_o1_jh;             /* '<S561>/S-Function1' */
  real_T SFunction1_o2_ec;             /* '<S561>/S-Function1' */
  real_T SFunction1_o3_ir;             /* '<S561>/S-Function1' */
  real_T SFunction1_o4_ga;             /* '<S561>/S-Function1' */
  real_T SFunction1_o5_dc;             /* '<S561>/S-Function1' */
  real_T SFunction1_o6_e1;             /* '<S561>/S-Function1' */
  real_T SFunction1_o7_dh;             /* '<S561>/S-Function1' */
  real_T SFunction1_o8_el;             /* '<S561>/S-Function1' */
  real_T SFunction1_o9_kn;             /* '<S561>/S-Function1' */
  real_T SFunction1_o10_m4;            /* '<S561>/S-Function1' */
  real_T SFunction1_o11_h;             /* '<S561>/S-Function1' */
  real_T timeStamp_e;                  /* '<S518>/timeStamp' */
  real_T Unit_Delay_o;                 /* '<S518>/Unit_Delay' */
  real_T SFunction1_o1_h54;            /* '<S514>/S-Function1' */
  real_T SFunction1_o2_ge;             /* '<S514>/S-Function1' */
  real_T SFunction1_o3_gl;             /* '<S514>/S-Function1' */
  real_T SFunction1_o4_gu;             /* '<S514>/S-Function1' */
  real_T SFunction1_o5_dv;             /* '<S514>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S514>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S514>/S-Function1' */
  real_T SFunction1_o8_nz;             /* '<S514>/S-Function1' */
  real_T SFunction1_o9_p2;             /* '<S514>/S-Function1' */
  real_T SFunction1_o10_k;             /* '<S514>/S-Function1' */
  real_T SFunction1_o1_l2;             /* '<S512>/S-Function1' */
  real_T SFunction1_o2_cu;             /* '<S512>/S-Function1' */
  real_T SFunction1_o3_ln;             /* '<S512>/S-Function1' */
  real_T SFunction1_o4_ow;             /* '<S512>/S-Function1' */
  real_T SFunction1_o5_lu;             /* '<S512>/S-Function1' */
  real_T SFunction1_o6_ho;             /* '<S512>/S-Function1' */
  real_T SFunction1_o7_as;             /* '<S512>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S512>/S-Function1' */
  real_T SFunction1_o9_o;              /* '<S512>/S-Function1' */
  real_T SFunction1_o10_b;             /* '<S512>/S-Function1' */
  real_T SFunction1_o11_b;             /* '<S512>/S-Function1' */
  real_T SFunction1_o12_m;             /* '<S512>/S-Function1' */
  real_T SFunction1_o13_b;             /* '<S512>/S-Function1' */
  real_T SFunction1_o14_a;             /* '<S512>/S-Function1' */
  real_T SFunction1_o15_m;             /* '<S512>/S-Function1' */
  real_T SFunction1_o16_l;             /* '<S512>/S-Function1' */
  real_T SFunction1_o17_g;             /* '<S512>/S-Function1' */
  real_T SFunction1_o18_k;             /* '<S512>/S-Function1' */
  real_T SFunction1_o19_m;             /* '<S512>/S-Function1' */
  real_T SFunction1_o20_o;             /* '<S512>/S-Function1' */
  real_T SFunction1_o21_m;             /* '<S512>/S-Function1' */
  real_T SFunction1_o22_m;             /* '<S512>/S-Function1' */
  real_T SFunction1_o23_n;             /* '<S512>/S-Function1' */
  real_T SFunction1_o24_p;             /* '<S512>/S-Function1' */
  real_T SFunction1_o25_f;             /* '<S512>/S-Function1' */
  real_T SFunction1_o1_au;             /* '<S510>/S-Function1' */
  real_T SFunction1_o2_fe;             /* '<S510>/S-Function1' */
  real_T SFunction1_o3_nf;             /* '<S510>/S-Function1' */
  real_T SFunction1_o4_bs;             /* '<S510>/S-Function1' */
  real_T SFunction1_o5_ck;             /* '<S510>/S-Function1' */
  real_T SFunction1_o6_h1;             /* '<S510>/S-Function1' */
  real_T SFunction1_o7_ja;             /* '<S510>/S-Function1' */
  real_T SFunction1_o8_f2;             /* '<S510>/S-Function1' */
  real_T SFunction1_o9_kf;             /* '<S510>/S-Function1' */
  real_T SFunction1_o10_du;            /* '<S510>/S-Function1' */
  real_T SFunction1_o11_nl;            /* '<S510>/S-Function1' */
  real_T SFunction1_o12_o;             /* '<S510>/S-Function1' */
  real_T SFunction1_o13_l;             /* '<S510>/S-Function1' */
  real_T SFunction1_o14_a4;            /* '<S510>/S-Function1' */
  real_T SFunction1_o15_k;             /* '<S510>/S-Function1' */
  real_T SFunction1_o16_d;             /* '<S510>/S-Function1' */
  real_T SFunction1_o17_a;             /* '<S510>/S-Function1' */
  real_T SFunction1_o18_a;             /* '<S510>/S-Function1' */
  real_T SFunction1_o19_k;             /* '<S510>/S-Function1' */
  real_T SFunction1_o20_e;             /* '<S510>/S-Function1' */
  real_T SFunction1_o21_n;             /* '<S510>/S-Function1' */
  real_T SFunction1_o22_p;             /* '<S510>/S-Function1' */
  real_T SFunction1_o23_l;             /* '<S510>/S-Function1' */
  real_T SFunction1_o24_l;             /* '<S510>/S-Function1' */
  real_T SFunction1_o25_fk;            /* '<S510>/S-Function1' */
  real_T SFunction1_o1_fs;             /* '<S508>/S-Function1' */
  real_T SFunction1_o2_lt;             /* '<S508>/S-Function1' */
  real_T SFunction1_o3_a1;             /* '<S508>/S-Function1' */
  real_T SFunction1_o4_aq;             /* '<S508>/S-Function1' */
  real_T RX_time_as5;                  /* '<S504>/Data Type Conversion9' */
  real_T RX_time_c5;                   /* '<S504>/Data Type Conversion2' */
  real_T RX_delta_time_bp;             /* '<S504>/Data Type Conversion10' */
  real_T RX_delta_time_jj;             /* '<S504>/Data Type Conversion3' */
  real_T SFunction1_o1_n2;             /* '<S506>/S-Function1' */
  real_T SFunction1_o2_fc;             /* '<S506>/S-Function1' */
  real_T SFunction1_o3_o1;             /* '<S506>/S-Function1' */
  real_T SFunction1_o4_kn;             /* '<S506>/S-Function1' */
  real_T SFunction1_o5_jr;             /* '<S506>/S-Function1' */
  real_T SFunction1_o6_h2;             /* '<S506>/S-Function1' */
  real_T SFunction1_o7_ka;             /* '<S506>/S-Function1' */
  real_T SFunction1_o1_jp;             /* '<S505>/S-Function1' */
  real_T SFunction1_o2_kj;             /* '<S505>/S-Function1' */
  real_T SFunction1_o3_ad;             /* '<S505>/S-Function1' */
  real_T SFunction1_o4_fm;             /* '<S505>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S505>/S-Function1' */
  real_T SFunction1_o6_m0;             /* '<S505>/S-Function1' */
  real_T SFunction1_o7_dv;             /* '<S505>/S-Function1' */
  real_T SFunction1_o1_na;             /* '<S503>/S-Function1' */
  real_T SFunction1_o2_hi;             /* '<S503>/S-Function1' */
  real_T SFunction1_o3_p5;             /* '<S503>/S-Function1' */
  real_T SFunction1_o4_li;             /* '<S503>/S-Function1' */
  real_T SFunction1_o5_i4;             /* '<S503>/S-Function1' */
  real_T SFunction1_o6_bq;             /* '<S503>/S-Function1' */
  real_T SFunction1_o7_id;             /* '<S503>/S-Function1' */
  real_T SFunction1_o8_k;              /* '<S503>/S-Function1' */
  real_T SFunction1_o9_k1o;            /* '<S503>/S-Function1' */
  real_T SFunction1_o10_h;             /* '<S503>/S-Function1' */
  real_T SFunction1_o11_i;             /* '<S503>/S-Function1' */
  real_T SFunction1_o12_i;             /* '<S503>/S-Function1' */
  real_T SFunction1_o13_i;             /* '<S503>/S-Function1' */
  real_T SFunction1_o14_b;             /* '<S503>/S-Function1' */
  real_T SFunction1_o15_j;             /* '<S503>/S-Function1' */
  real_T SFunction1_o16_a;             /* '<S503>/S-Function1' */
  real_T SFunction1_o17_m;             /* '<S503>/S-Function1' */
  real_T SFunction1_o18_b;             /* '<S503>/S-Function1' */
  real_T SFunction1_o19_j;             /* '<S503>/S-Function1' */
  real_T SFunction1_o20_oo;            /* '<S503>/S-Function1' */
  real_T SFunction1_o21_d;             /* '<S503>/S-Function1' */
  real_T SFunction1_o22_pp;            /* '<S503>/S-Function1' */
  real_T SFunction1_o23_m;             /* '<S503>/S-Function1' */
  real_T SFunction1_o1_mf;             /* '<S501>/S-Function1' */
  real_T SFunction1_o2_j0;             /* '<S501>/S-Function1' */
  real_T SFunction1_o3_ko;             /* '<S501>/S-Function1' */
  real_T SFunction1_o4_np;             /* '<S501>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S501>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S501>/S-Function1' */
  real_T SFunction1_o9_oo;             /* '<S501>/S-Function1' */
  real_T SFunction1_o10_am;            /* '<S501>/S-Function1' */
  real_T SFunction1_o11_g;             /* '<S501>/S-Function1' */
  real_T SFunction1_o12_l;             /* '<S501>/S-Function1' */
  real_T SFunction1_o13_dw;            /* '<S501>/S-Function1' */
  real_T SFunction1_o14_e;             /* '<S501>/S-Function1' */
  real_T SFunction1_o15_b;             /* '<S501>/S-Function1' */
  real_T SFunction1_o16_g;             /* '<S501>/S-Function1' */
  real_T SFunction1_o17_c;             /* '<S501>/S-Function1' */
  real_T SFunction1_o18_e;             /* '<S501>/S-Function1' */
  real_T SFunction1_o19_g;             /* '<S501>/S-Function1' */
  real_T SFunction1_o20_eq;            /* '<S501>/S-Function1' */
  real_T SFunction1_o21_j;             /* '<S501>/S-Function1' */
  real_T SFunction1_o22_g;             /* '<S501>/S-Function1' */
  real_T SFunction1_o23_d;             /* '<S501>/S-Function1' */
  real_T SFunction1_o1_ps;             /* '<S499>/S-Function1' */
  real_T SFunction1_o2_dos;            /* '<S499>/S-Function1' */
  real_T SFunction1_o3_hy;             /* '<S499>/S-Function1' */
  real_T SFunction1_o4_l1;             /* '<S499>/S-Function1' */
  real_T SFunction1_o5_nc;             /* '<S499>/S-Function1' */
  real_T SFunction1_o6_cd;             /* '<S499>/S-Function1' */
  real_T SFunction1_o7_jr;             /* '<S499>/S-Function1' */
  real_T SFunction1_o8_g;              /* '<S499>/S-Function1' */
  real_T SFunction1_o9_oh;             /* '<S499>/S-Function1' */
  real_T SFunction1_o10_l4;            /* '<S499>/S-Function1' */
  real_T SFunction1_o11_k;             /* '<S499>/S-Function1' */
  real_T SFunction1_o12_b;             /* '<S499>/S-Function1' */
  real_T SFunction1_o13_m;             /* '<S499>/S-Function1' */
  real_T SFunction1_o14_n;             /* '<S499>/S-Function1' */
  real_T SFunction1_o15_p;             /* '<S499>/S-Function1' */
  real_T SFunction1_o16_b;             /* '<S499>/S-Function1' */
  real_T SFunction1_o17_f;             /* '<S499>/S-Function1' */
  real_T SFunction1_o18_p;             /* '<S499>/S-Function1' */
  real_T SFunction1_o19_kc;            /* '<S499>/S-Function1' */
  real_T SFunction1_o20_m;             /* '<S499>/S-Function1' */
  real_T SFunction1_o21_o;             /* '<S499>/S-Function1' */
  real_T SFunction1_o22_o;             /* '<S499>/S-Function1' */
  real_T SFunction1_o23_o;             /* '<S499>/S-Function1' */
  real_T SFunction1_o24_n;             /* '<S499>/S-Function1' */
  real_T SFunction1_o25_n;             /* '<S499>/S-Function1' */
  real_T SFunction1_o26_c;             /* '<S499>/S-Function1' */
  real_T SFunction1_o27_e;             /* '<S499>/S-Function1' */
  real_T SFunction1_o28_m;             /* '<S499>/S-Function1' */
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
  real_T SFunction1_o1_cv;             /* '<S497>/S-Function1' */
  real_T SFunction1_o2_nk;             /* '<S497>/S-Function1' */
  real_T SFunction1_o3_g3;             /* '<S497>/S-Function1' */
  real_T SFunction1_o4_n5;             /* '<S497>/S-Function1' */
  real_T SFunction1_o5_dg;             /* '<S497>/S-Function1' */
  real_T SFunction1_o1_e3;             /* '<S495>/S-Function1' */
  real_T SFunction1_o2_os;             /* '<S495>/S-Function1' */
  real_T SFunction1_o3_f4;             /* '<S495>/S-Function1' */
  real_T SFunction1_o4_f0;             /* '<S495>/S-Function1' */
  real_T SFunction1_o5_bb;             /* '<S495>/S-Function1' */
  real_T SFunction1_o6_pf;             /* '<S495>/S-Function1' */
  real_T SFunction1_o7_nx;             /* '<S495>/S-Function1' */
  real_T SFunction1_o8_ko;             /* '<S495>/S-Function1' */
  real_T SFunction1_o1_k5;             /* '<S493>/S-Function1' */
  real_T SFunction1_o2_if;             /* '<S493>/S-Function1' */
  real_T SFunction1_o3_kl;             /* '<S493>/S-Function1' */
  real_T SFunction1_o4_dd;             /* '<S493>/S-Function1' */
  real_T SFunction1_o5_aw;             /* '<S493>/S-Function1' */
  real_T SFunction1_o6_pp;             /* '<S493>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S493>/S-Function1' */
  real_T SFunction1_o8_kd;             /* '<S493>/S-Function1' */
  real_T SFunction1_o9_g;              /* '<S493>/S-Function1' */
  real_T SFunction1_o10_fpb;           /* '<S493>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S493>/S-Function1' */
  real_T SFunction1_o1_mj;             /* '<S491>/S-Function1' */
  real_T SFunction1_o2_akn;            /* '<S491>/S-Function1' */
  real_T SFunction1_o3_ck;             /* '<S491>/S-Function1' */
  real_T SFunction1_o4_n0;             /* '<S491>/S-Function1' */
  real_T SFunction1_o5_pv;             /* '<S491>/S-Function1' */
  real_T SFunction1_o6_b3d;            /* '<S491>/S-Function1' */
  real_T SFunction1_o7_hh;             /* '<S491>/S-Function1' */
  real_T SFunction1_o8_c;              /* '<S491>/S-Function1' */
  real_T SFunction1_o1_o5;             /* '<S489>/S-Function1' */
  real_T SFunction1_o2_l4;             /* '<S489>/S-Function1' */
  real_T SFunction1_o3_lm3;            /* '<S489>/S-Function1' */
  real_T SFunction1_o4_go;             /* '<S489>/S-Function1' */
  real_T SFunction1_o5_hv;             /* '<S489>/S-Function1' */
  real_T SFunction1_o6_p3;             /* '<S489>/S-Function1' */
  real_T SFunction1_o7_lo;             /* '<S489>/S-Function1' */
  real_T SFunction1_o8_kw;             /* '<S489>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S489>/S-Function1' */
  real_T SFunction1_o10_nu;            /* '<S489>/S-Function1' */
  real_T SFunction1_o11_o;             /* '<S489>/S-Function1' */
  real_T SFunction1_o12_h;             /* '<S489>/S-Function1' */
  real_T SFunction1_o13_ip;            /* '<S489>/S-Function1' */
  real_T SFunction1_o1_dl;             /* '<S481>/S-Function1' */
  real_T SFunction1_o2_hd;             /* '<S481>/S-Function1' */
  real_T SFunction1_o3_n5;             /* '<S481>/S-Function1' */
  real_T SFunction1_o4_p4;             /* '<S481>/S-Function1' */
  real_T SFunction1_o5_mt;             /* '<S481>/S-Function1' */
  real_T SFunction1_o6_d1;             /* '<S481>/S-Function1' */
  real_T SFunction1_o7_dcs;            /* '<S481>/S-Function1' */
  real_T SFunction1_o8_m;              /* '<S481>/S-Function1' */
  real_T SFunction1_o9_pl;             /* '<S481>/S-Function1' */
  real_T SFunction1_o10_o;             /* '<S481>/S-Function1' */
  real_T SFunction1_o11_j;             /* '<S481>/S-Function1' */
  real_T SFunction1_o1_mv;             /* '<S472>/S-Function1' */
  real_T SFunction1_o2_ep;             /* '<S472>/S-Function1' */
  real_T SFunction1_o3_nh;             /* '<S472>/S-Function1' */
  real_T SFunction1_o4_g0;             /* '<S472>/S-Function1' */
  real_T SFunction1_o5_lf;             /* '<S472>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S472>/S-Function1' */
  real_T SFunction1_o7_ou;             /* '<S472>/S-Function1' */
  real_T SFunction1_o8_lu;             /* '<S472>/S-Function1' */
  real_T SFunction1_o9_bh;             /* '<S472>/S-Function1' */
  real_T SFunction1_o10_mc;            /* '<S472>/S-Function1' */
  real_T SFunction1_o11_ow;            /* '<S472>/S-Function1' */
  real_T Sum;                          /* '<S396>/Sum' */
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
  real_T UnitDelay1;                   /* '<S389>/Unit Delay1' */
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
  real_T DataTypeConversion1_h;        /* '<S83>/Data Type Conversion1' */
  real_T uDLookupTable;                /* '<S83>/2-D Lookup Table' */
  real_T DataTypeConversion5_o;        /* '<S77>/Data Type Conversion5' */
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
  real_T Unit_Delay_k4;                /* '<S341>/Unit_Delay' */
  real_T MinMax_d;                     /* '<S341>/MinMax' */
  real_T Xold_h;                       /* '<S388>/FixPt Unit Delay1' */
  real_T Init_ip;                      /* '<S388>/Init' */
  real_T Abs_e;                        /* '<S384>/Abs' */
  real_T DigitalClock;                 /* '<S385>/Digital Clock' */
  real_T Unit_Delay_d;                 /* '<S385>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S385>/Subtract' */
  real_T Product1_hp;                  /* '<S384>/Product1' */
  real_T Add1_n;                       /* '<S384>/Add1' */
  real_T MinMax2_g;                    /* '<S384>/MinMax2' */
  real_T Abs1_h;                       /* '<S384>/Abs1' */
  real_T Product2_c;                   /* '<S384>/Product2' */
  real_T Subtract1_n;                  /* '<S384>/Subtract1' */
  real_T MinMax1_hj;                   /* '<S384>/MinMax1' */
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
  real_T Product2_nl;                  /* '<S373>/Product2' */
  real_T Subtract1_h;                  /* '<S373>/Subtract1' */
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
  real_T Subtract1_c;                  /* '<S350>/Subtract1' */
  real_T Abs1_h5;                      /* '<S350>/Abs1' */
  real_T MinMax8;                      /* '<S350>/MinMax8' */
  real_T MinMax7;                      /* '<S350>/MinMax7' */
  real_T MinMax10;                     /* '<S350>/MinMax10' */
  real_T MinMax9;                      /* '<S350>/MinMax9' */
  real_T Subtract2;                    /* '<S350>/Subtract2' */
  real_T Abs2;                         /* '<S350>/Abs2' */
  real_T Xold_pg;                      /* '<S365>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S365>/Init' */
  real_T Gain1_c;                      /* '<S351>/Gain1' */
  real_T DigitalClock_f;               /* '<S363>/Digital Clock' */
  real_T Unit_Delay_e;                 /* '<S363>/Unit_Delay' */
  real_T Subtract_b0;                  /* '<S363>/Subtract' */
  real_T Product1_a;                   /* '<S360>/Product1' */
  real_T Add_h;                        /* '<S360>/Add' */
  real_T MinMax_a;                     /* '<S360>/MinMax' */
  real_T LookupTableDynamic;           /* '<S351>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S343>/Delay Input1' */
  real_T Xold_o;                       /* '<S349>/FixPt Unit Delay1' */
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
  real_T DataTypeConversion2_l3;       /* '<S77>/Data Type Conversion2' */
  real_T uD_Lookup_Table_le;           /* '<S193>/2D_Lookup_Table' */
  real_T Decel_rate_calculated_ms2;    /* '<S100>/Saturation4' */
  real_T DataTypeConversion_p;         /* '<S101>/Data Type Conversion' */
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
  real_T Product2_b;                   /* '<S321>/Product2' */
  real_T Subtract1_ei;                 /* '<S321>/Subtract1' */
  real_T Unit_Delay2_k;                /* '<S321>/Unit_Delay2' */
  real_T Product1_n;                   /* '<S321>/Product1' */
  real_T Add1_k;                       /* '<S321>/Add1' */
  real_T Abs_ij;                       /* '<S276>/Abs' */
  real_T Add_p;                        /* '<S276>/Add' */
  real_T Switch_g;                     /* '<S276>/Switch' */
  real_T MinMax1_a;                    /* '<S322>/MinMax1' */
  real_T Saturation_e;                 /* '<S322>/Saturation' */
  real_T Divide_d;                     /* '<S322>/Divide' */
  real_T Product2_f;                   /* '<S322>/Product2' */
  real_T Subtract1_b;                  /* '<S322>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S322>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S322>/Product1' */
  real_T Add1_p;                       /* '<S322>/Add1' */
  real_T Sign;                         /* '<S276>/Sign' */
  real_T Product_cf;                   /* '<S276>/Product' */
  real_T MinMax1_e;                    /* '<S323>/MinMax1' */
  real_T Saturation_o;                 /* '<S323>/Saturation' */
  real_T Divide_j;                     /* '<S323>/Divide' */
  real_T Product2_nk;                  /* '<S323>/Product2' */
  real_T Subtract1_eh;                 /* '<S323>/Subtract1' */
  real_T Unit_Delay2_c;                /* '<S323>/Unit_Delay2' */
  real_T Product1_cc;                  /* '<S323>/Product1' */
  real_T Add1_f1;                      /* '<S323>/Add1' */
  real_T Switch1_f;                    /* '<S276>/Switch1' */
  real_T correctedError;               /* '<S276>/corrected Error' */
  real_T Switch_h;                     /* '<S277>/Switch' */
  real_T Switch1_j;                    /* '<S277>/Switch1' */
  real_T SteerCtrlErrRaw;              /* '<S80>/sign' */
  real_T DataTypeConversion1_ev;       /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S280>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_ku;        /* '<S80>/Data Type Conversion' */
  real_T SteeringControlPGainSpeedFactor;/* '<S80>/SteeringControlPGainSpeedFactor' */
  real_T SteerCtrlPgain;               /* '<S80>/Product1' */
  real_T Gain_cd;                      /* '<S80>/Gain' */
  real_T Product_d;                    /* '<S290>/Product' */
  real_T Divide_ag;                    /* '<S290>/Divide' */
  real_T Product1_hr;                  /* '<S290>/Product1' */
  real_T UnitDelay_m;                  /* '<S289>/Unit Delay' */
  real_T Switch_o;                     /* '<S289>/Switch' */
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
  real_T DataTypeConversion_l;         /* '<S304>/Data Type Conversion' */
  real_T SaturationSpeedLookup;        /* '<S304>/Saturation Speed Lookup' */
  real_T sampletime;                   /* '<S315>/sample time' */
  real_T deltariselimit;               /* '<S315>/delta rise limit' */
  real_T sampletime_c;                 /* '<S302>/sample time' */
  real_T deltariselimit_c;             /* '<S302>/delta rise limit' */
  real_T Yk1;                          /* '<S302>/Delay Input2' */
  real_T UkYk1;                        /* '<S302>/Difference Inputs1' */
  real_T deltafalllimit;               /* '<S302>/delta fall limit' */
  real_T Switch_i;                     /* '<S311>/Switch' */
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
  real_T Sum_l;                        /* '<S275>/Sum' */
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
  real_T Gain1_fi;                     /* '<S304>/Gain1' */
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
  real_T Subtract_o;                   /* '<S304>/Subtract' */
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
  real_T Init_o;                       /* '<S367>/Init' */
  real_T Xold_mg;                      /* '<S368>/FixPt Unit Delay1' */
  real_T Init_l;                       /* '<S368>/Init' */
  real_T MultiportSwitch_i;            /* '<S366>/Multiport Switch' */
  real_T DigitalClock_d;               /* '<S362>/Digital Clock' */
  real_T Unit_Delay_p;                 /* '<S362>/Unit_Delay' */
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
  real_T Subtract1_gl;                 /* '<S331>/Subtract1' */
  real_T MinMax1_k;                    /* '<S331>/MinMax1' */
  real_T Subtract_ij;                  /* '<S328>/Subtract' */
  real_T Abs_eu;                       /* '<S328>/Abs' */
  real_T error;                        /* '<S274>/Error Calc' */
  real_T Switch1_m;                    /* '<S289>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_ox;       /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S80>/Data Type Conversion3' */
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
  real_T DataTypeConversion2_id;       /* '<S213>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S213>/Data Type Conversion3' */
  real_T DataTypeConversion5_i;        /* '<S217>/Data Type Conversion5' */
  real_T Coeff_of_drag_Cd;             /* '<S224>/1-D Lookup Table' */
  real_T KPH_TO_MS;                    /* '<S224>/KPH_TO_M//S' */
  real_T MathFunction;                 /* '<S224>/Math Function' */
  real_T DataTypeConversion_i;         /* '<S217>/Data Type Conversion' */
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
  real_T Divide_pm;                    /* '<S204>/Divide' */
  real_T MinMax1_n;                    /* '<S204>/MinMax1' */
  real_T DataTypeConversion3_m;        /* '<S79>/Data Type Conversion3' */
  real_T ThrottlePID_Y_c;              /* '<S79>/Product' */
  real_T Unit_Delay_dl;                /* '<S178>/Unit_Delay' */
  real_T Xold_eq;                      /* '<S192>/FixPt Unit Delay1' */
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
  real_T Abs_k1;                       /* '<S144>/Abs' */
  real_T Abs1_eg;                      /* '<S144>/Abs1' */
  real_T DigitalClock_n;               /* '<S140>/Digital Clock' */
  real_T Unit_Delay_ko;                /* '<S140>/Unit_Delay' */
  real_T Subtract_ac;                  /* '<S140>/Subtract' */
  real_T Xold_c;                       /* '<S172>/FixPt Unit Delay1' */
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
  real_T Gain_iv;                      /* '<S96>/Gain' */
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
  real_T Divide_lm;                    /* '<S129>/Divide' */
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
  uint32_T Reshape[8];                 /* '<S1024>/Reshape' */
  uint32_T UnitDelay_k;                /* '<S1025>/Unit Delay' */
  uint32_T Switch1_i;                  /* '<S1028>/Switch1' */
  uint32_T Selector;                   /* '<S1024>/Selector' */
  uint32_T DataTypeConversion_gu;      /* '<S1016>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1021>/Operator' */
  uint32_T Operator_f;                 /* '<S1022>/Operator' */
  uint32_T Operator_e;                 /* '<S1023>/Operator' */
  uint32_T DataType_og;                /* '<S1023>/DataType' */
  uint32_T Shift_Arithmetic1_o;        /* '<S1016>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1024>/Width' */
  uint32_T Switch1_fw;                 /* '<S1027>/Switch1' */
  uint32_T Subtract_p;                 /* '<S1025>/Subtract' */
  uint32_T UnitDelay_a;                /* '<S1010>/Unit Delay' */
  uint32_T Switch1_k;                  /* '<S1013>/Switch1' */
  uint32_T DataTypeConversion6_k;      /* '<S1005>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S1005>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_n;      /* '<S1005>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S1005>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_l;      /* '<S1005>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S1005>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_c;      /* '<S1005>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S1005>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_h;     /* '<S1005>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S1005>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_i;     /* '<S1005>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S1005>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_l;      /* '<S1006>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S1006>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S1006>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_f;        /* '<S1006>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S1006>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_n;        /* '<S1006>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S1006>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_g;        /* '<S1006>/Shift_Arithmetic 5' */
  uint32_T Width_p;                    /* '<S1009>/Width' */
  uint32_T Switch1_n;                  /* '<S1012>/Switch1' */
  uint32_T Subtract_e1;                /* '<S1010>/Subtract' */
  uint32_T DataTypeConversion2_b;      /* '<S951>/Data Type Conversion2' */
  uint32_T Operator_l;                 /* '<S956>/Operator' */
  uint32_T Operator_m;                 /* '<S957>/Operator' */
  uint32_T Operator_d;                 /* '<S958>/Operator' */
  uint32_T DataType_k4;                /* '<S958>/DataType' */
  uint32_T Shift_Arithmetic1_l;        /* '<S951>/Shift_Arithmetic 1' */
  uint32_T Operator_fa;                /* '<S959>/Operator' */
  uint32_T DataType_i3;                /* '<S959>/DataType' */
  uint32_T Shift_Arithmetic2_m;        /* '<S951>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_kz;               /* '<S982>/Unit Delay' */
  uint32_T Switch1_e;                  /* '<S985>/Switch1' */
  uint32_T DataTypeConversion_dy;      /* '<S950>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_k2;        /* '<S950>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_j5;     /* '<S950>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_g;        /* '<S950>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_hf;     /* '<S950>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_gy;       /* '<S950>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_a;      /* '<S950>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_p;        /* '<S950>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_n;      /* '<S950>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_d;        /* '<S950>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_m;      /* '<S950>/Data Type Conversion5' */
  uint32_T Operator_f2;                /* '<S955>/Operator' */
  uint32_T DataType_d1;                /* '<S955>/DataType' */
  uint32_T DataTypeConversion3_ke;     /* '<S951>/Data Type Conversion3' */
  uint32_T Operator_l0;                /* '<S960>/Operator' */
  uint32_T Operator_n;                 /* '<S961>/Operator' */
  uint32_T Operator_b;                 /* '<S962>/Operator' */
  uint32_T DataType_kf;                /* '<S962>/DataType' */
  uint32_T Shift_Arithmetic4_i;        /* '<S951>/Shift_Arithmetic 4' */
  uint32_T Operator_n2;                /* '<S963>/Operator' */
  uint32_T DataType_ip;                /* '<S963>/DataType' */
  uint32_T Shift_Arithmetic5_i;        /* '<S951>/Shift_Arithmetic 5' */
  uint32_T Width_b;                    /* '<S981>/Width' */
  uint32_T Switch1_c;                  /* '<S984>/Switch1' */
  uint32_T Subtract_kx;                /* '<S982>/Subtract' */
  uint32_T DataTypeConversion_ii;      /* '<S900>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_m;         /* '<S900>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_fq;     /* '<S900>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_j;        /* '<S900>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_ms;     /* '<S900>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_a;        /* '<S900>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_kq;     /* '<S900>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_cf;       /* '<S900>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_ba;     /* '<S900>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_k;        /* '<S900>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_n;      /* '<S900>/Data Type Conversion5' */
  uint32_T Operator_i;                 /* '<S910>/Operator' */
  uint32_T DataType_ht;                /* '<S910>/DataType' */
  uint32_T DataTypeConversion8_b;      /* '<S899>/Data Type Conversion8' */
  uint32_T Operator_p;                 /* '<S906>/Operator' */
  uint32_T Operator_bp;                /* '<S907>/Operator' */
  uint32_T Operator_j;                 /* '<S908>/Operator' */
  uint32_T DataType_d0;                /* '<S908>/DataType' */
  uint32_T Shift_Arithmetic4_c;        /* '<S899>/Shift_Arithmetic 4' */
  uint32_T Operator_bs;                /* '<S909>/Operator' */
  uint32_T DataType_c0;                /* '<S909>/DataType' */
  uint32_T Shift_Arithmetic5_h;        /* '<S899>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_ah;      /* '<S722>/Data Type Conversion' */
  uint32_T DataTypeConversion1_ip;     /* '<S722>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_dq;     /* '<S722>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S722>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S722>/Shift Arithmetic2' */
  uint32_T Operator_c;                 /* '<S724>/Operator' */
  uint32_T DataType_ft;                /* '<S724>/DataType' */
  uint32_T DataTypeConversion_kx;      /* '<S714>/Data Type Conversion' */
  uint32_T DataTypeConversion1_lb;     /* '<S714>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_lt;     /* '<S714>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_d;         /* '<S714>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_o;         /* '<S714>/Shift Arithmetic2' */
  uint32_T Operator_ep;                /* '<S716>/Operator' */
  uint32_T DataType_jy;                /* '<S716>/DataType' */
  uint32_T DataTypeConversion_hk;      /* '<S708>/Data Type Conversion' */
  uint32_T DataTypeConversion1_fl;     /* '<S708>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_kh;     /* '<S708>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_e;         /* '<S708>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_e;         /* '<S708>/Shift Arithmetic2' */
  uint32_T Operator_o;                 /* '<S709>/Operator' */
  uint32_T DataType_fi;                /* '<S709>/DataType' */
  uint32_T DataTypeConversion_mx;      /* '<S703>/Data Type Conversion' */
  uint32_T DataTypeConversion1_g;      /* '<S703>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_iz;     /* '<S703>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_n;         /* '<S703>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_i;         /* '<S703>/Shift Arithmetic2' */
  uint32_T Operator_lc;                /* '<S704>/Operator' */
  uint32_T DataType_g5;                /* '<S704>/DataType' */
  uint32_T DataTypeConversion_iz;      /* '<S696>/Data Type Conversion' */
  uint32_T DataTypeConversion1_c3;     /* '<S696>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_f5;     /* '<S696>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_p;         /* '<S696>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_ox;        /* '<S696>/Shift Arithmetic2' */
  uint32_T Operator_h;                 /* '<S698>/Operator' */
  uint32_T DataType_oo;                /* '<S698>/DataType' */
  uint32_T UnitDelay_av;               /* '<S61>/Unit Delay' */
  uint32_T Switch1_h;                  /* '<S64>/Switch1' */
  uint32_T Switch1_b;                  /* '<S63>/Switch1' */
  uint32_T Subtract_fc;                /* '<S61>/Subtract' */
  uint32_T UnitDelay_j;                /* '<S55>/Unit Delay' */
  uint32_T Switch1_kd;                 /* '<S58>/Switch1' */
  uint32_T Switch1_l;                  /* '<S57>/Switch1' */
  uint32_T Subtract_m;                 /* '<S55>/Subtract' */
  uint32_T UnitDelay_l;                /* '<S49>/Unit Delay' */
  uint32_T Switch1_ex;                 /* '<S52>/Switch1' */
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
  real32_T Subtract_ei;                /* '<S646>/Subtract' */
  real32_T Subtract_fe;                /* '<S518>/Subtract' */
  real32_T DataTypeConversion2_lf;     /* '<S79>/Data Type Conversion2' */
  real32_T Divide_nn;                  /* '<S279>/Divide' */
  real32_T UnitDelay_fm;               /* '<S279>/Unit Delay' */
  real32_T Switch1_fi;                 /* '<S283>/Switch1' */
  real32_T Divide_d0;                  /* '<S284>/Divide' */
  real32_T UnitDelay_lj;               /* '<S284>/Unit Delay' */
  real32_T Switch1_pb;                 /* '<S288>/Switch1' */
  real32_T DataTypeConversion1_gp;     /* '<S284>/Data Type Conversion1' */
  real32_T Switch1_aq;                 /* '<S286>/Switch1' */
  real32_T DataTypeConversion_mv;      /* '<S284>/Data Type Conversion' */
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
  int32_T Merge;                       /* '<S952>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S605>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_j;/* '<S441>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S605>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_b;/* '<S441>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_l;/* '<S603>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_i;/* '<S604>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_h;/* '<S603>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_p;/* '<S604>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S623>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_d;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S623>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_d;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S990>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lr; /* '<S98>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_lu;/* '<S98>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S738>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S738>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S203>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l5;/* '<S203>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_c;       /* '<S527>/Data Type Conversion' */
  uint16_T DataTypeConversion1_or;     /* '<S527>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S527>/Shift Arithmetic' */
  uint16_T Operator_eo;                /* '<S552>/Operator' */
  uint16_T DataType_p;                 /* '<S552>/DataType' */
  uint16_T DataTypeConversion_b;       /* '<S521>/Data Type Conversion' */
  uint16_T DataTypeConversion1_jz;     /* '<S521>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_n;          /* '<S521>/Shift Arithmetic' */
  uint16_T Operator_pj;                /* '<S548>/Operator' */
  uint16_T DataType_ej;                /* '<S548>/DataType' */
  uint16_T DataTypeConversion_dz;      /* '<S525>/Data Type Conversion' */
  uint16_T DataTypeConversion1_fh;     /* '<S525>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_l;          /* '<S525>/Shift Arithmetic' */
  uint16_T Operator_b3;                /* '<S550>/Operator' */
  uint16_T DataType_hc;                /* '<S550>/DataType' */
  uint16_T DataTypeConversion1_m;      /* '<S526>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_d;      /* '<S526>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_c;          /* '<S526>/Shift Arithmetic' */
  uint16_T Operator_k;                 /* '<S551>/Operator' */
  uint16_T DataType_bs;                /* '<S551>/DataType' */
  uint16_T DataTypeConversion1_nm;     /* '<S529>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_ae;     /* '<S529>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_p;          /* '<S529>/Shift Arithmetic' */
  uint16_T Operator_p1;                /* '<S553>/Operator' */
  uint16_T DataType_el;                /* '<S553>/DataType' */
  uint16_T DataTypeConversion1_em;     /* '<S535>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_kp;     /* '<S535>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_cl;         /* '<S535>/Shift Arithmetic' */
  uint16_T Operator_ln;                /* '<S554>/Operator' */
  uint16_T DataType_ic;                /* '<S554>/DataType' */
  uint16_T DataTypeConversion_pa;      /* '<S543>/Data Type Conversion' */
  uint16_T DataTypeConversion1_do;     /* '<S543>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_k;          /* '<S543>/Shift Arithmetic' */
  uint16_T Operator_ki;                /* '<S557>/Operator' */
  uint16_T DataType_aw;                /* '<S557>/DataType' */
  uint16_T DataTypeConversion1_b1v;    /* '<S536>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_b;      /* '<S536>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_b;          /* '<S536>/Shift Arithmetic' */
  uint16_T Operator_o1;                /* '<S555>/Operator' */
  uint16_T DataType_po;                /* '<S555>/DataType' */
  uint16_T DataTypeConversion_p3;      /* '<S537>/Data Type Conversion' */
  uint16_T DataTypeConversion1_dj;     /* '<S537>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_o;          /* '<S537>/Shift Arithmetic' */
  uint16_T Operator_oy;                /* '<S556>/Operator' */
  uint16_T DataType_ai;                /* '<S556>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S537>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S413>/Data Type Conversion21' */
  uint16_T DataTypeConversion_pm;      /* '<S545>/Data Type Conversion' */
  uint16_T DataTypeConversion1_bx;     /* '<S545>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_m;          /* '<S545>/Shift Arithmetic' */
  uint16_T Operator_lk;                /* '<S558>/Operator' */
  uint16_T DataType_a3;                /* '<S558>/DataType' */
  uint16_T DataTypeConversion_jw;      /* '<S547>/Data Type Conversion' */
  uint16_T DataTypeConversion1_d3;     /* '<S547>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_cf;         /* '<S547>/Shift Arithmetic' */
  uint16_T Operator_iw;                /* '<S559>/Operator' */
  uint16_T DataType_iur;               /* '<S559>/DataType' */
  uint16_T DataTypeConversion_n;       /* '<S523>/Data Type Conversion' */
  uint16_T DataTypeConversion1_fy;     /* '<S523>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_e;          /* '<S523>/Shift Arithmetic' */
  uint16_T Operator_cd;                /* '<S549>/Operator' */
  uint16_T DataType_d5;                /* '<S549>/DataType' */
  uint16_T DataTypeConversion1_fu;     /* '<S663>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_j;      /* '<S663>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_m0;       /* '<S663>/Shift_Arithmetic 1' */
  uint16_T Operator_fm;                /* '<S668>/Operator' */
  uint16_T DataType_ex;                /* '<S668>/DataType' */
  uint16_T DataTypeConversion4_l;      /* '<S664>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_ax;     /* '<S664>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_e;        /* '<S664>/Shift_Arithmetic 2' */
  uint16_T Operator_a;                 /* '<S669>/Operator' */
  uint16_T DataType_ev;                /* '<S669>/DataType' */
  uint16_T DataTypeConversion7_lw;     /* '<S665>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_p;      /* '<S665>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_b;        /* '<S665>/Shift_Arithmetic 3' */
  uint16_T Operator_i5;                /* '<S670>/Operator' */
  uint16_T DataType_n5;                /* '<S670>/DataType' */
  uint16_T DataTypeConversion6_po;     /* '<S676>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_a;      /* '<S676>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_af;       /* '<S676>/Shift_Arithmetic 2' */
  uint16_T Operator_de;                /* '<S681>/Operator' */
  uint16_T DataType_gv;                /* '<S681>/DataType' */
  uint16_T DataType_jv;                /* '<S1022>/DataType' */
  uint16_T Shift_Arithmetic_e;         /* '<S1016>/Shift_Arithmetic ' */
  uint16_T DataType_bp;                /* '<S957>/DataType' */
  uint16_T Shift_Arithmetic_a;         /* '<S951>/Shift_Arithmetic ' */
  uint16_T DataType_g3;                /* '<S961>/DataType' */
  uint16_T Shift_Arithmetic3_d;        /* '<S951>/Shift_Arithmetic 3' */
  uint16_T DataType_ipn;               /* '<S907>/DataType' */
  uint16_T Shift_Arithmetic3_nh;       /* '<S899>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_nk;     /* '<S860>/Data Type Conversion1' */
  uint16_T Operator_az;                /* '<S891>/Operator' */
  uint16_T Operator_nw;                /* '<S892>/Operator' */
  uint16_T DataType_h5;                /* '<S892>/DataType' */
  uint16_T Shift_Arithmetic_d;         /* '<S860>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_gd;      /* '<S719>/Data Type Conversion' */
  uint16_T DataTypeConversion1_oh;     /* '<S719>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_l;         /* '<S719>/Shift Arithmetic2' */
  uint16_T Operator_k4;                /* '<S723>/Operator' */
  uint16_T DataType_jr;                /* '<S723>/DataType' */
  uint16_T DataTypeConversion_jz;      /* '<S712>/Data Type Conversion' */
  uint16_T DataTypeConversion1_g4;     /* '<S712>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_j;         /* '<S712>/Shift Arithmetic2' */
  uint16_T Operator_lp;                /* '<S715>/Operator' */
  uint16_T DataType_jri;               /* '<S715>/DataType' */
  uint16_T DataTypeConversion_af;      /* '<S694>/Data Type Conversion' */
  uint16_T DataTypeConversion1_nq;     /* '<S694>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_p;         /* '<S694>/Shift Arithmetic2' */
  uint16_T Operator_lpw;               /* '<S697>/Operator' */
  uint16_T DataType_o5;                /* '<S697>/DataType' */
  int16_T DataTypeConversion3_oi;      /* '<S663>/Data Type Conversion3' */
  int16_T DataTypeConversion6_m;       /* '<S664>/Data Type Conversion6' */
  int16_T DataTypeConversion9_l;       /* '<S665>/Data Type Conversion9' */
  int16_T DataTypeConversion8_a;       /* '<S676>/Data Type Conversion8' */
  int16_T DataTypeConversion_dk;       /* '<S860>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S771>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_b;           /* '<S763>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_j;           /* '<S787>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_h;           /* '<S779>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_a;           /* '<S807>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_e;           /* '<S806>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_c;           /* '<S795>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_jd;       /* '<S470>/Data Type Conversion' */
  uint8_T DataTypeConversion1_fg;      /* '<S470>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_mw;      /* '<S470>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_en;      /* '<S470>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_g;       /* '<S470>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_j;       /* '<S470>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_hv;      /* '<S470>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_of;      /* '<S470>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S416>/Multiport_Switch' */
  uint8_T DataTypeConversion_g5[8];    /* '<S464>/Data Type Conversion' */
  uint8_T DataTypeConversion_o;        /* '<S479>/Data Type Conversion' */
  uint8_T DataTypeConversion1_djm;     /* '<S479>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_op;      /* '<S479>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_od;      /* '<S479>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_f;       /* '<S479>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_g;       /* '<S479>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_pe;      /* '<S479>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_b;       /* '<S479>/Data Type Conversion7' */
  uint8_T RawData_j[8];                /* '<S417>/Multiport_Switch' */
  uint8_T DataTypeConversion_cc[8];    /* '<S465>/Data Type Conversion' */
  uint8_T DataTypeConversion_nd[39];   /* '<S516>/Data Type Conversion' */
  uint8_T DataTypeConversion_m1;       /* '<S644>/Data Type Conversion' */
  uint8_T DataTypeConversion1_af;      /* '<S644>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_fs;      /* '<S644>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_k5;      /* '<S644>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_f3;      /* '<S644>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_gs;      /* '<S644>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_a;       /* '<S644>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ae;      /* '<S644>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_p5;      /* '<S644>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_p;       /* '<S644>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_g;      /* '<S644>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_g;      /* '<S644>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S644>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_p;      /* '<S644>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_o;      /* '<S644>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_f;      /* '<S644>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_o;      /* '<S644>/Data Type Conversion16' */
  uint8_T Add_i;                       /* '<S644>/Add' */
  uint8_T DataTypeConversion15_n;      /* '<S623>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_bf;      /* '<S623>/Data Type Conversion4' */
  uint8_T MABX_Mode_h;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[22];              /* '<S400>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S394>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1033>/Vector Concatenate' */
  uint8_T UnitDelay1_m;                /* '<S834>/Unit Delay1' */
  uint8_T MultiportSwitch_iq[8];       /* '<S834>/Multiport Switch' */
  uint8_T SupervisorMode_l;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S413>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S413>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S413>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S413>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S413>/Data Type Conversion26' */
  uint8_T DataTypeConversion_cct;      /* '<S605>/Data Type Conversion' */
  uint8_T DataTypeConversion1_nf;      /* '<S605>/Data Type Conversion1' */
  uint8_T Add1_kk;                     /* '<S644>/Add1' */
  uint8_T DataTypeConversion_es;       /* '<S578>/Data Type Conversion' */
  uint8_T DataTypeConversion1_cj;      /* '<S578>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_b2;      /* '<S578>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_dm;      /* '<S578>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_k4;      /* '<S578>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_gc;      /* '<S578>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_g;       /* '<S578>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ox;      /* '<S578>/Data Type Conversion7' */
  uint8_T DataTypeConversion_a3;       /* '<S579>/Data Type Conversion' */
  uint8_T DataTypeConversion1_g2;      /* '<S579>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_kr;      /* '<S579>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_g;       /* '<S579>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_hh;      /* '<S579>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ce;      /* '<S579>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_n;       /* '<S579>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ln;      /* '<S579>/Data Type Conversion7' */
  uint8_T RawData_h[8];                /* '<S439>/Multiport_Switch' */
  uint8_T Operator_fw;                 /* '<S667>/Operator' */
  uint8_T DataType_oop;                /* '<S667>/DataType' */
  uint8_T Operator_dz;                 /* '<S666>/Operator' */
  uint8_T DataType_iuj;                /* '<S666>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S661>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_ffi;      /* '<S592>/Data Type Conversion' */
  uint8_T DataTypeConversion1_gf;      /* '<S592>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_au;      /* '<S592>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_hq;      /* '<S592>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_nr;      /* '<S592>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_jv;      /* '<S592>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_gw;      /* '<S592>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ja;      /* '<S592>/Data Type Conversion7' */
  uint8_T RawData_o[8];                /* '<S440>/Multiport_Switch' */
  uint8_T Operator_hj;                 /* '<S679>/Operator' */
  uint8_T DataType_al;                 /* '<S679>/DataType' */
  uint8_T Shift_Arithmetic_j;          /* '<S672>/Shift_Arithmetic ' */
  uint8_T Operator_p1v;                /* '<S678>/Operator' */
  uint8_T Operator_a2;                 /* '<S680>/Operator' */
  uint8_T DataType_me;                 /* '<S680>/DataType' */
  uint8_T Shift_Arithmetic1_p;         /* '<S672>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S673>/SignalConversion' */
  uint8_T DataTypeConversion3_f;       /* '<S415>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S674>/SignalConversion' */
  uint8_T DataTypeConversion4_e;       /* '<S415>/Data Type Conversion4' */
  uint8_T State;                       /* '<S834>/Chart' */
  uint8_T TPDT_count;                  /* '<S834>/Chart' */
  uint8_T VectorConcatenate_e[8];      /* '<S1035>/Vector Concatenate' */
  uint8_T VectorConcatenate_g[8];      /* '<S1036>/Vector Concatenate' */
  uint8_T DataType_er;                 /* '<S1021>/DataType' */
  uint8_T DataTypeConversion3_c;       /* '<S1016>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_p3;      /* '<S1016>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_i4;      /* '<S1016>/Data Type Conversion2' */
  uint8_T DataTypeConversion_df;       /* '<S986>/Data Type Conversion' */
  uint8_T Operator_bf;                 /* '<S991>/Operator' */
  uint8_T DataType_o5f;                /* '<S991>/DataType' */
  uint8_T DataTypeConversion2_nc;      /* '<S1006>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_m1;      /* '<S1006>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S1006>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_o;       /* '<S1006>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S1006>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_ps;         /* '<S1006>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_i;      /* '<S1006>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_c;       /* '<S1006>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_a;         /* '<S1006>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_e;      /* '<S1006>/Data Type Conversion11' */
  uint8_T Reshape_j[16];               /* '<S1009>/Reshape' */
  uint8_T Selector_e;                  /* '<S1009>/Selector' */
  uint8_T DataTypeConversion10_hb;     /* '<S1006>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S1006>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_ji;      /* '<S1006>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_a3;      /* '<S1006>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_a;       /* '<S1006>/Data Type Conversion9' */
  uint8_T Add2_b;                      /* '<S1006>/Add2' */
  uint8_T Shift_Arithmetic6_g;         /* '<S1006>/Shift_Arithmetic 6' */
  uint8_T Add3_b;                      /* '<S1006>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S1006>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_n;         /* '<S1006>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S1006>/Bitwise Operator7' */
  uint8_T DataTypeConversion_mxp;      /* '<S988>/Data Type Conversion' */
  uint8_T Operator_g;                  /* '<S1002>/Operator' */
  uint8_T Operator_pw;                 /* '<S997>/Operator' */
  uint8_T DataType_k0;                 /* '<S997>/DataType' */
  uint8_T Operator_hf;                 /* '<S998>/Operator' */
  uint8_T Operator_ol;                 /* '<S999>/Operator' */
  uint8_T Operator_lr;                 /* '<S1000>/Operator' */
  uint8_T Operator_hn;                 /* '<S1001>/Operator' */
  uint8_T DataTypeConversion_mw;       /* '<S915>/Data Type Conversion' */
  uint8_T Operator_on;                 /* '<S923>/Operator' */
  uint8_T Operator_os;                 /* '<S920>/Operator' */
  uint8_T DataType_pz;                 /* '<S920>/DataType' */
  uint8_T Operator_a3;                 /* '<S921>/Operator' */
  uint8_T Operator_i4;                 /* '<S922>/Operator' */
  uint8_T Operator_lx;                 /* '<S924>/Operator' */
  uint8_T Operator_he;                 /* '<S925>/Operator' */
  uint8_T DataTypeConversion_do;       /* '<S916>/Data Type Conversion' */
  uint8_T Operator_a3c;                /* '<S931>/Operator' */
  uint8_T Operator_gb;                 /* '<S932>/Operator' */
  uint8_T Operator_bq;                 /* '<S928>/Operator' */
  uint8_T DataType_fn;                 /* '<S928>/DataType' */
  uint8_T Operator_jr;                 /* '<S929>/Operator' */
  uint8_T Operator_br;                 /* '<S930>/Operator' */
  uint8_T Operator_au;                 /* '<S933>/Operator' */
  uint8_T DataTypeConversion_da;       /* '<S919>/Data Type Conversion' */
  uint8_T Switch_d;                    /* '<S953>/Switch' */
  uint8_T DataTypeConversion_o2;       /* '<S951>/Data Type Conversion' */
  uint8_T DataType_la;                 /* '<S956>/DataType' */
  uint8_T DataTypeConversion4_a;       /* '<S951>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_hr;      /* '<S951>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_kd;      /* '<S951>/Data Type Conversion6' */
  uint8_T Reshape_l[16];               /* '<S981>/Reshape' */
  uint8_T Selector_l;                  /* '<S981>/Selector' */
  uint8_T DataTypeConversion1_jm;      /* '<S951>/Data Type Conversion1' */
  uint8_T Operator_ms;                 /* '<S964>/Operator' */
  uint8_T DataType_nl;                 /* '<S964>/DataType' */
  uint8_T DataType_fc;                 /* '<S960>/DataType' */
  uint8_T DataTypeConversion8_i;       /* '<S951>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_n;       /* '<S951>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_o;      /* '<S951>/Data Type Conversion10' */
  uint8_T Add_h5;                      /* '<S951>/Add' */
  uint8_T Shift_Arithmetic6_f;         /* '<S951>/Shift_Arithmetic 6' */
  uint8_T Add1_j;                      /* '<S951>/Add1' */
  uint8_T Operator_an;                 /* '<S965>/Operator' */
  uint8_T DataType_el4;                /* '<S965>/DataType' */
  uint8_T Shift_Arithmetic7_b;         /* '<S951>/Shift_Arithmetic 7' */
  uint8_T Operator_p0;                 /* '<S966>/Operator' */
  uint8_T DataType_ak;                 /* '<S966>/DataType' */
  uint8_T DataTypeConversion_ms;       /* '<S918>/Data Type Conversion' */
  uint8_T Operator_fo;                 /* '<S946>/Operator' */
  uint8_T Operator_b4;                 /* '<S942>/Operator' */
  uint8_T DataType_pi;                 /* '<S942>/DataType' */
  uint8_T Operator_ly;                 /* '<S943>/Operator' */
  uint8_T Operator_df;                 /* '<S944>/Operator' */
  uint8_T Operator_bt;                 /* '<S945>/Operator' */
  uint8_T Operator_pm;                 /* '<S947>/Operator' */
  uint8_T DataTypeConversion_g1;       /* '<S861>/Data Type Conversion' */
  uint8_T Operator_eg;                 /* '<S893>/Operator' */
  uint8_T DataType_ei;                 /* '<S893>/DataType' */
  uint8_T DataTypeConversion2_n1;      /* '<S861>/Data Type Conversion2' */
  uint8_T Operator_li;                 /* '<S895>/Operator' */
  uint8_T DataType_lp;                 /* '<S895>/DataType' */
  uint8_T Shift_Arithmetic_nw;         /* '<S861>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_c;       /* '<S861>/Data Type Conversion4' */
  uint8_T Operator_pa;                 /* '<S896>/Operator' */
  uint8_T DataType_gr;                 /* '<S896>/DataType' */
  uint8_T Shift_Arithmetic1_cg;        /* '<S861>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_f;       /* '<S861>/Data Type Conversion5' */
  uint8_T Operator_du;                 /* '<S894>/Operator' */
  uint8_T DataType_dm;                 /* '<S894>/DataType' */
  uint8_T Shift_Arithmetic2_l;         /* '<S861>/Shift_Arithmetic 2' */
  uint8_T Operator_hg;                 /* '<S901>/Operator' */
  uint8_T DataType_k1;                 /* '<S901>/DataType' */
  uint8_T DataTypeConversion1_kp;      /* '<S861>/Data Type Conversion1' */
  uint8_T Operator_ok;                 /* '<S897>/Operator' */
  uint8_T DataType_mc;                 /* '<S897>/DataType' */
  uint8_T DataType_gm;                 /* '<S906>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S899>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S899>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S899>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_f;      /* '<S899>/Data Type Conversion13' */
  uint8_T Operator_c3;                 /* '<S905>/Operator' */
  uint8_T DataType_fe;                 /* '<S905>/DataType' */
  uint8_T Checksum;                    /* '<S899>/Add' */
  uint8_T Shift_Arithmetic7_p;         /* '<S899>/Shift_Arithmetic 7' */
  uint8_T Add1_nk;                     /* '<S899>/Add1' */
  uint8_T Operator_nm;                 /* '<S904>/Operator' */
  uint8_T DataType_h2;                 /* '<S904>/DataType' */
  uint8_T DataTypeConversion3_kk;      /* '<S861>/Data Type Conversion3' */
  uint8_T Operator_cs;                 /* '<S898>/Operator' */
  uint8_T DataType_mq;                 /* '<S898>/DataType' */
  uint8_T Shift_Arithmetic3_i;         /* '<S861>/Shift_Arithmetic 3' */
  uint8_T Operator_mh;                 /* '<S902>/Operator' */
  uint8_T DataType_gre;                /* '<S902>/DataType' */
  uint8_T DataTypeConversion_do4;      /* '<S856>/Data Type Conversion' */
  uint8_T Operator_io;                 /* '<S871>/Operator' */
  uint8_T DataType_jnh;                /* '<S871>/DataType' */
  uint8_T Operator_in;                 /* '<S876>/Operator' */
  uint8_T Operator_e0;                 /* '<S872>/Operator' */
  uint8_T Operator_ni;                 /* '<S877>/Operator' */
  uint8_T Operator_f2r;                /* '<S878>/Operator' */
  uint8_T Operator_hm;                 /* '<S875>/Operator' */
  uint8_T DataType_c2v;                /* '<S891>/DataType' */
  uint8_T DataTypeConversion2_oh;      /* '<S860>/Data Type Conversion2' */
  uint8_T DataTypeConversion_lq;       /* '<S836>/Data Type Conversion' */
  uint8_T Operator_ic;                 /* '<S841>/Operator' */
  uint8_T Operator_g5;                 /* '<S838>/Operator' */
  uint8_T DataType_d4;                 /* '<S838>/DataType' */
  uint8_T Operator_nl;                 /* '<S839>/Operator' */
  uint8_T Operator_pp;                 /* '<S840>/Operator' */
  uint8_T Operator_hl;                 /* '<S842>/Operator' */
  uint8_T Operator_ku;                 /* '<S843>/Operator' */
  uint8_T DataTypeConversion_b0;       /* '<S837>/Data Type Conversion' */
  uint8_T Operator_ij;                 /* '<S849>/Operator' */
  uint8_T Operator_ek;                 /* '<S846>/Operator' */
  uint8_T DataType_mh;                 /* '<S846>/DataType' */
  uint8_T Operator_jy;                 /* '<S847>/Operator' */
  uint8_T Operator_olt;                /* '<S848>/Operator' */
  uint8_T Operator_om;                 /* '<S850>/Operator' */
  uint8_T Operator_hjq;                /* '<S851>/Operator' */
  uint8_T FixPtUnitDelay2_bh;          /* '<S817>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S718>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S720>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S721>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_i;       /* '<S711>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S713>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_b;       /* '<S706>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S707>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_c;       /* '<S700>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S701>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S702>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_ix;      /* '<S693>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S695>/Signal Conversion' */
  uint8_T UnitDelay_ar[17];            /* '<S643>/Unit Delay' */
  uint8_T Data[17];                    /* '<S643>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S646>/Inport' */
  uint8_T DataTypeConversion_is;       /* '<S603>/Data Type Conversion' */
  uint8_T DataTypeConversion_fq;       /* '<S604>/Data Type Conversion' */
  uint8_T DataTypeConversion1_h2;      /* '<S603>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_mw;      /* '<S604>/Data Type Conversion1' */
  uint8_T DataTypeConversion_bi;       /* '<S590>/Data Type Conversion' */
  uint8_T DataTypeConversion1_l1;      /* '<S590>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_gk;      /* '<S590>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ck;      /* '<S590>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_on;      /* '<S590>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_h3;      /* '<S590>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_mk;      /* '<S590>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h;       /* '<S590>/Data Type Conversion7' */
  uint8_T DataTypeConversion_c3;       /* '<S591>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ld;      /* '<S591>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ds;      /* '<S591>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ga;      /* '<S591>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_hz;      /* '<S591>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_jd;      /* '<S591>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ll;      /* '<S591>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ol;      /* '<S591>/Data Type Conversion7' */
  uint8_T DataTypeConversion_na;       /* '<S577>/Data Type Conversion' */
  uint8_T DataTypeConversion1_cq;      /* '<S577>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_dk;      /* '<S577>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ef;      /* '<S577>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_l0;      /* '<S577>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_os;      /* '<S577>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_lu;      /* '<S577>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_la;      /* '<S577>/Data Type Conversion7' */
  uint8_T UnitDelay_g[39];             /* '<S515>/Unit Delay' */
  uint8_T Data_l[39];                  /* '<S515>/serialize_tpdt' */
  uint8_T Inport_j[39];                /* '<S518>/Inport' */
  uint8_T DataTypeConversion1_ba;      /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_p;       /* '<S203>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew;      /* '<S98>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S98>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b2;          /* '<S388>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S377>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_o;           /* '<S365>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S365>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_n;           /* '<S349>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion1_f1;      /* '<S79>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_e3;      /* '<S80>/Data Type Conversion5' */
  uint8_T FixPtUnitDelay2_ji;          /* '<S367>/FixPt Unit Delay2' */
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
  int8_T DataTypeConversion4_hy;       /* '<S675>/Data Type Conversion4' */
  int8_T DataTypeConversion10_i;       /* '<S677>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S391>/for_logging7' */
  boolean_T SFunction1_m;              /* '<S729>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S411>/EStopSwActive' */
  boolean_T SFunction1_i;              /* '<S728>/S-Function1' */
  boolean_T Operator_jm;               /* '<S818>/Operator' */
  boolean_T DataType_ml;               /* '<S818>/DataType' */
  boolean_T LogicalOperator;           /* '<S736>/Logical Operator' */
  boolean_T SFunction1_ix;             /* '<S731>/S-Function1' */
  boolean_T Operator_il;               /* '<S819>/Operator' */
  boolean_T DataType_ooa;              /* '<S819>/DataType' */
  boolean_T AND2;                      /* '<S736>/AND2' */
  boolean_T min_relop;                 /* '<S766>/min_relop' */
  boolean_T max_relop;                 /* '<S766>/max_relop' */
  boolean_T conjunction;               /* '<S766>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S768>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S768>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S754>/Relational Operator9' */
  boolean_T min_relop_b;               /* '<S758>/min_relop' */
  boolean_T max_relop_k;               /* '<S758>/max_relop' */
  boolean_T conjunction_d;             /* '<S758>/conjunction' */
  boolean_T RelationalOperator1_e;     /* '<S760>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S760>/Relational Operator' */
  boolean_T F_Fault_Soft_l;            /* '<S753>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S738>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S754>/Relational Operator8' */
  boolean_T F_Fault_Hard_h;            /* '<S753>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S738>/Logical Operator1' */
  boolean_T Compare;                   /* '<S749>/Compare' */
  boolean_T min_relop_g;               /* '<S782>/min_relop' */
  boolean_T max_relop_i;               /* '<S782>/max_relop' */
  boolean_T conjunction_o;             /* '<S782>/conjunction' */
  boolean_T RelationalOperator1_h;     /* '<S784>/Relational Operator1' */
  boolean_T RelationalOperator_k;      /* '<S784>/Relational Operator' */
  boolean_T F_Fault_Soft_j;            /* '<S756>/Relational Operator9' */
  boolean_T min_relop_bm;              /* '<S774>/min_relop' */
  boolean_T max_relop_d;               /* '<S774>/max_relop' */
  boolean_T conjunction_m;             /* '<S774>/conjunction' */
  boolean_T RelationalOperator1_p;     /* '<S776>/Relational Operator1' */
  boolean_T RelationalOperator_cj;     /* '<S776>/Relational Operator' */
  boolean_T F_Fault_Soft_o;            /* '<S755>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S738>/Logical Operator4' */
  boolean_T F_Fault_Hard_hv;           /* '<S756>/Relational Operator8' */
  boolean_T F_Fault_Hard_p;            /* '<S755>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S738>/Logical Operator3' */
  boolean_T Compare_c;                 /* '<S750>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S738>/Logical Operator5' */
  boolean_T Unit_Delay_jw;             /* '<S741>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S808>/Unit_Delay1' */
  boolean_T LogicalOperator_m;         /* '<S808>/Logical Operator' */
  boolean_T Unit_Delay1_b;             /* '<S741>/Unit_Delay1' */
  boolean_T Unit_Delay1_j;             /* '<S809>/Unit_Delay1' */
  boolean_T LogicalOperator_d;         /* '<S809>/Logical Operator' */
  boolean_T Compare_n;                 /* '<S745>/Compare' */
  boolean_T Compare_f;                 /* '<S801>/Compare' */
  boolean_T LogicalOperator7;          /* '<S739>/Logical Operator7' */
  boolean_T Compare_h;                 /* '<S800>/Compare' */
  boolean_T LogicalOperator8;          /* '<S739>/Logical Operator8' */
  boolean_T Compare_k;                 /* '<S799>/Compare' */
  boolean_T LogicalOperator5;          /* '<S739>/Logical Operator5' */
  boolean_T Compare_hd;                /* '<S798>/Compare' */
  boolean_T LogicalOperator6;          /* '<S739>/Logical Operator6' */
  boolean_T Compare_g;                 /* '<S744>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S743>/Relational Operator' */
  boolean_T min_relop_bz;              /* '<S790>/min_relop' */
  boolean_T max_relop_g;               /* '<S790>/max_relop' */
  boolean_T conjunction_dt;            /* '<S790>/conjunction' */
  boolean_T RelationalOperator1_o;     /* '<S792>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S792>/Relational Operator' */
  boolean_T F_Fault_Hard_l;            /* '<S757>/Relational Operator8' */
  boolean_T LogicalOperator6_b;        /* '<S735>/Logical Operator6' */
  boolean_T Operator_nh;               /* '<S473>/Operator' */
  boolean_T Operator_jx;               /* '<S690>/Operator' */
  boolean_T Operator_p2;               /* '<S482>/Operator' */
  boolean_T RX_status;                 /* '<S479>/Data Type Conversion8' */
  boolean_T RX_status_l;               /* '<S417>/Multiport_Switch' */
  boolean_T Operator_fl;               /* '<S517>/Operator' */
  boolean_T LogicalOperator_mj;        /* '<S431>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S644>/Unit_Delay3' */
  boolean_T Operator_ov;               /* '<S645>/Operator' */
  boolean_T LogicalOperator_ml;        /* '<S454>/Logical Operator' */
  boolean_T RelationalOperator1_i[17]; /* '<S644>/Relational Operator1' */
  boolean_T Compare_j;                 /* '<S648>/Compare' */
  boolean_T LogicalOperator_l;         /* '<S644>/Logical Operator' */
  boolean_T Unit_Delay_g;              /* '<S644>/Unit_Delay' */
  boolean_T LogicalOperator3_m;        /* '<S650>/Logical Operator3' */
  boolean_T Unit_Delay_h;              /* '<S650>/Unit_Delay' */
  boolean_T LogicalOperator_h;         /* '<S650>/Logical Operator' */
  boolean_T LogicalOperator1_p;        /* '<S650>/Logical Operator1' */
  boolean_T Operator_ox;               /* '<S655>/Operator' */
  boolean_T Operator_kh;               /* '<S654>/Operator' */
  boolean_T Operator_jg;               /* '<S656>/Operator' */
  boolean_T Operator_jx4;              /* '<S657>/Operator' */
  boolean_T Operator_ck;               /* '<S658>/Operator' */
  boolean_T Operator_of;               /* '<S659>/Operator' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S461>/OR' */
  boolean_T Enable;                    /* '<S3>/Enable' */
  boolean_T Heartbeat_e;               /* '<S392>/Cast To Boolean' */
  boolean_T EStop_j;                   /* '<S3>/Unit_Delay' */
  boolean_T EnableSW;                  /* '<S3>/Unit_Delay' */
  boolean_T EngagePB_g;                /* '<S3>/Unit_Delay' */
  boolean_T Compare_fz;                /* '<S402>/Compare' */
  boolean_T AND;                       /* '<S401>/AND' */
  boolean_T AutonomousEnabled_a;       /* '<S3>/Unit_Delay' */
  boolean_T Compare_c5;                /* '<S399>/Compare' */
  boolean_T Uk1_f;                     /* '<S398>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S398>/FixPt Relational Operator' */
  boolean_T RX_status_e;               /* '<S504>/Data Type Conversion8' */
  boolean_T RX_status_o;               /* '<S633>/Data Type Conversion8' */
  boolean_T Operator_kz;               /* '<S1043>/Operator' */
  boolean_T DataType_n0;               /* '<S1043>/DataType' */
  boolean_T UnitDelay2;                /* '<S834>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S834>/Unit Delay3' */
  boolean_T Operator_eot;              /* '<S1062>/Operator' */
  boolean_T AND_k;                     /* '<S1053>/AND' */
  boolean_T OR;                        /* '<S1053>/OR' */
  boolean_T Operator_dr;               /* '<S1061>/Operator' */
  boolean_T LogicalOperator_mf;        /* '<S1051>/Logical Operator' */
  boolean_T RelationalOperator_f;      /* '<S1052>/Relational Operator' */
  boolean_T RelationalOperator1_d;     /* '<S1052>/Relational Operator1' */
  boolean_T LogicalOperator_e;         /* '<S1052>/Logical Operator' */
  boolean_T Compare_gm;                /* '<S1058>/Compare' */
  boolean_T Compare_fp;                /* '<S1059>/Compare' */
  boolean_T LogicalOperator1_d;        /* '<S1052>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1052>/Logical Operator2' */
  boolean_T LogicalOperator_b;         /* '<S825>/Logical Operator' */
  boolean_T RX_status_c;               /* '<S568>/Data Type Conversion8' */
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
  boolean_T RX_status_f;               /* '<S470>/Data Type Conversion8' */
  boolean_T RX_status_ea;              /* '<S416>/Multiport_Switch' */
  boolean_T Operator_kt;               /* '<S474>/Operator' */
  boolean_T Operator_n4;               /* '<S475>/Operator' */
  boolean_T Operator_bc;               /* '<S476>/Operator' */
  boolean_T Operator_gf;               /* '<S477>/Operator' */
  boolean_T Operator_ih;               /* '<S478>/Operator' */
  boolean_T Operator_al;               /* '<S483>/Operator' */
  boolean_T Operator_n3;               /* '<S484>/Operator' */
  boolean_T Operator_nf;               /* '<S485>/Operator' */
  boolean_T Operator_jb;               /* '<S486>/Operator' */
  boolean_T Operator_ktb;              /* '<S487>/Operator' */
  boolean_T RX_status_g;               /* '<S488>/Data Type Conversion8' */
  boolean_T RX_status_m;               /* '<S490>/Data Type Conversion8' */
  boolean_T RX_status_k;               /* '<S492>/Data Type Conversion8' */
  boolean_T RX_status_h;               /* '<S494>/Data Type Conversion8' */
  boolean_T RX_status_fo;              /* '<S496>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S498>/Data Type Conversion8' */
  boolean_T RX_status_hd;              /* '<S500>/Data Type Conversion8' */
  boolean_T RX_status_d;               /* '<S502>/Data Type Conversion8' */
  boolean_T RX_status_n;               /* '<S504>/Switch' */
  boolean_T RX_status_i;               /* '<S507>/Data Type Conversion8' */
  boolean_T RX_status_a;               /* '<S509>/Data Type Conversion8' */
  boolean_T RX_status_lq;              /* '<S511>/Data Type Conversion8' */
  boolean_T RX_status_k4;              /* '<S513>/Data Type Conversion8' */
  boolean_T RX_status_dd;              /* '<S560>/Data Type Conversion8' */
  boolean_T RX_status_p;               /* '<S562>/Data Type Conversion8' */
  boolean_T RX_status_ex;              /* '<S564>/Data Type Conversion8' */
  boolean_T RX_status_cf;              /* '<S566>/Data Type Conversion8' */
  boolean_T RX_status_ia;              /* '<S568>/Switch' */
  boolean_T RX_status_k2;              /* '<S571>/Data Type Conversion8' */
  boolean_T RX_status_fv;              /* '<S438>/Switch' */
  boolean_T Operator_j5;               /* '<S610>/Operator' */
  boolean_T Operator_mg;               /* '<S611>/Operator' */
  boolean_T Operator_ms4;              /* '<S612>/Operator' */
  boolean_T RX_status_aq;              /* '<S605>/Data Type Conversion8' */
  boolean_T RX_status_c1;              /* '<S441>/Multiport_Switch' */
  boolean_T Operator_oxz;              /* '<S613>/Operator' */
  boolean_T Operator_ny;               /* '<S614>/Operator' */
  boolean_T Operator_brq;              /* '<S615>/Operator' */
  boolean_T RX_status_md;              /* '<S616>/Data Type Conversion2' */
  boolean_T RX_status_ib;              /* '<S616>/Data Type Conversion5' */
  boolean_T RX_status_iq;              /* '<S616>/Data Type Conversion8' */
  boolean_T RX_status_kb;              /* '<S620>/Switch' */
  boolean_T RX_status_kx;              /* '<S623>/Data Type Conversion8' */
  boolean_T RX_status_a2;              /* '<S625>/Data Type Conversion8' */
  boolean_T RX_status_pe;              /* '<S627>/Data Type Conversion8' */
  boolean_T RX_status_f0;              /* '<S629>/Data Type Conversion8' */
  boolean_T RX_status_ky;              /* '<S631>/Data Type Conversion8' */
  boolean_T RX_status_k1;              /* '<S635>/Data Type Conversion8' */
  boolean_T RX_status_o0;              /* '<S637>/Data Type Conversion8' */
  boolean_T RX_status_ef;              /* '<S639>/Data Type Conversion8' */
  boolean_T RX_status_ic;              /* '<S641>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S644>/Relational Operator2' */
  boolean_T Compare_ks;                /* '<S649>/Compare' */
  boolean_T Unit_Delay2_ap;            /* '<S644>/Unit_Delay2' */
  boolean_T LogicalOperator1_b;        /* '<S644>/Logical Operator1' */
  boolean_T LogicalOperator2_d;        /* '<S650>/Logical Operator2' */
  boolean_T Unit_Delay1_f;             /* '<S644>/Unit_Delay1' */
  boolean_T LogicalOperator3_b;        /* '<S651>/Logical Operator3' */
  boolean_T Unit_Delay_js;             /* '<S651>/Unit_Delay' */
  boolean_T LogicalOperator_en;        /* '<S651>/Logical Operator' */
  boolean_T LogicalOperator1_n;        /* '<S651>/Logical Operator1' */
  boolean_T LogicalOperator2_g;        /* '<S651>/Logical Operator2' */
  boolean_T Operator_fs;               /* '<S688>/Operator' */
  boolean_T Operator_py;               /* '<S691>/Operator' */
  boolean_T Operator_cn;               /* '<S689>/Operator' */
  boolean_T Operator_o0;               /* '<S687>/Operator' */
  boolean_T Operator_id;               /* '<S584>/Operator' */
  boolean_T Operator_ph;               /* '<S585>/Operator' */
  boolean_T Operator_oyk;              /* '<S589>/Operator' */
  boolean_T RX_status_pq;              /* '<S578>/Data Type Conversion8' */
  boolean_T RX_status_b;               /* '<S579>/Data Type Conversion8' */
  boolean_T RX_status_iak;             /* '<S439>/Multiport_Switch' */
  boolean_T Operator_mc;               /* '<S586>/Operator' */
  boolean_T Operator_dn;               /* '<S587>/Operator' */
  boolean_T Operator_eq;               /* '<S588>/Operator' */
  boolean_T Operator_lyg;              /* '<S597>/Operator' */
  boolean_T Operator_o00;              /* '<S598>/Operator' */
  boolean_T Operator_pd;               /* '<S602>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S672>/Data Type Conversion' */
  boolean_T DataTypeConversion_f5;     /* '<S415>/Data Type Conversion' */
  boolean_T DataType_f2;               /* '<S678>/DataType' */
  boolean_T DataTypeConversion1_o0;    /* '<S415>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S672>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_hn;    /* '<S415>/Data Type Conversion2' */
  boolean_T RX_status_ds;              /* '<S592>/Data Type Conversion8' */
  boolean_T RX_status_dc;              /* '<S440>/Multiport_Switch' */
  boolean_T Operator_et;               /* '<S599>/Operator' */
  boolean_T Operator_ax;               /* '<S600>/Operator' */
  boolean_T Operator_po;               /* '<S601>/Operator' */
  boolean_T SFunction1_h;              /* '<S730>/S-Function1' */
  boolean_T StartPBActive;             /* '<S411>/StartPBActive' */
  boolean_T F_Fault_Soft_n;            /* '<S757>/Relational Operator9' */
  boolean_T Operator_eu;               /* '<S22>/Operator' */
  boolean_T Operator_msz;              /* '<S26>/Operator' */
  boolean_T Operator_fv;               /* '<S27>/Operator' */
  boolean_T Operator_bsh;              /* '<S24>/Operator' */
  boolean_T Operator_bw;               /* '<S25>/Operator' */
  boolean_T Operator_eb;               /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S834>/Chart' */
  boolean_T enTPCM;                    /* '<S834>/Chart' */
  boolean_T DataTypeConversion6_bn;    /* '<S1015>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S1019>/u2' */
  boolean_T Operator_bd;               /* '<S1019>/Operator' */
  boolean_T DataType_ew;               /* '<S1019>/DataType' */
  boolean_T Unit_Delay_ki;             /* '<S1024>/Unit_Delay' */
  boolean_T Operator_hz;               /* '<S1026>/Operator' */
  boolean_T AutonomousOutputEnabled_nr;/* '<S990>/Bus Selector2' */
  boolean_T BrakingControlActive_b;    /* '<S990>/Bus Selector2' */
  boolean_T Unit_Delay_nl;             /* '<S986>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S986>/OperatorEnable' */
  boolean_T LogicalOperator8_n;        /* '<S986>/Logical Operator8' */
  boolean_T LogicalOperator7_h;        /* '<S986>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S986>/OperatorEnable' */
  boolean_T LogicalOperator1_l;        /* '<S986>/Logical Operator1' */
  boolean_T DataTypeConversion2_jx;    /* '<S986>/Data Type Conversion2' */
  boolean_T LogicalOperator_c;         /* '<S986>/Logical Operator' */
  boolean_T Compare_o;                 /* '<S992>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S986>/OperatorEnable' */
  boolean_T Unit_Delay_c;              /* '<S1009>/Unit_Delay' */
  boolean_T DataTypeConversion7_m;     /* '<S988>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_k2;    /* '<S988>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_gx;    /* '<S988>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_cn;    /* '<S988>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_c0;    /* '<S988>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_g0;    /* '<S988>/Data Type Conversion6' */
  boolean_T Operator_ice;              /* '<S1011>/Operator' */
  boolean_T DataTypeConversion5_nd;    /* '<S915>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_ko;    /* '<S915>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_fa;    /* '<S915>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_pp;    /* '<S915>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_pl;    /* '<S915>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_le;    /* '<S915>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_az;    /* '<S916>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_mw;    /* '<S916>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_ed;    /* '<S916>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_dl;    /* '<S916>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_a2;    /* '<S916>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_d;     /* '<S916>/Data Type Conversion7' */
  boolean_T Operator_c4;               /* '<S970>/Operator' */
  boolean_T Operator_MX;               /* '<S979>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S979>/Operator_MN' */
  boolean_T Operator_jk;               /* '<S971>/Operator' */
  boolean_T Operator_k5;               /* '<S972>/Operator' */
  boolean_T Operator_cke;              /* '<S973>/Operator' */
  boolean_T Operator_c4a;              /* '<S974>/Operator' */
  boolean_T Operator_dz4;              /* '<S975>/Operator' */
  boolean_T Unit_Delay_bk;             /* '<S981>/Unit_Delay' */
  boolean_T DataTypeConversion6_hj;    /* '<S918>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_ib;    /* '<S918>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_aew;   /* '<S918>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_eu;    /* '<S918>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_b;     /* '<S918>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_o2;    /* '<S918>/Data Type Conversion7' */
  boolean_T LogicalOperator1_m;        /* '<S979>/Logical Operator1' */
  boolean_T LogicalOperator_hz;        /* '<S979>/Logical Operator' */
  boolean_T Operator_ca;               /* '<S983>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S861>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S879>/u1' */
  boolean_T DataTypeConversion2_lh;    /* '<S856>/Data Type Conversion2' */
  boolean_T Operator_kb;               /* '<S879>/Operator' */
  boolean_T DataType_n2i;              /* '<S879>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_j; /* '<S882>/u1' */
  boolean_T DataTypeConversion5_d;     /* '<S856>/Data Type Conversion5' */
  boolean_T Operator_g4;               /* '<S882>/Operator' */
  boolean_T DataType_i1;               /* '<S882>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_b; /* '<S873>/u1' */
  boolean_T DataTypeConversion6_e;     /* '<S856>/Data Type Conversion6' */
  boolean_T Operator_oyn;              /* '<S873>/Operator' */
  boolean_T DataType_gb;               /* '<S873>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_n; /* '<S874>/u1' */
  boolean_T DataTypeConversion7_on;    /* '<S856>/Data Type Conversion7' */
  boolean_T Operator_bl;               /* '<S874>/Operator' */
  boolean_T DataType_d2a;              /* '<S874>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_d; /* '<S880>/u1' */
  boolean_T DataTypeConversion3_gc;    /* '<S856>/Data Type Conversion3' */
  boolean_T Operator_dg;               /* '<S880>/Operator' */
  boolean_T DataType_p1;               /* '<S880>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_h; /* '<S881>/u1' */
  boolean_T DataTypeConversion4_gh;    /* '<S856>/Data Type Conversion4' */
  boolean_T Operator_jn;               /* '<S881>/Operator' */
  boolean_T DataType_ar;               /* '<S881>/DataType' */
  boolean_T DataTypeConversion2_al;    /* '<S862>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S867>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_m;/* '<S868>/Enable' */
  boolean_T DataTypeConversion2_ho;    /* '<S857>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_dy;    /* '<S858>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_jv3;   /* '<S836>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_gg;    /* '<S836>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_c1;    /* '<S836>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_lf;    /* '<S836>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_cw;    /* '<S836>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_fs;    /* '<S836>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_da;    /* '<S837>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_igb;   /* '<S837>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_aq;    /* '<S837>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_ff;    /* '<S837>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_pn;    /* '<S837>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_mo;    /* '<S837>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S820>/Chart' */
  boolean_T Unit_Delay_mq;             /* '<S813>/Unit_Delay' */
  boolean_T LogicalOperator1_e;        /* '<S813>/Logical Operator1' */
  boolean_T LogicalOperator_ck;        /* '<S813>/Logical Operator' */
  boolean_T Unit_Delay_cb;             /* '<S814>/Unit_Delay' */
  boolean_T LogicalOperator1_i;        /* '<S814>/Logical Operator1' */
  boolean_T RelationalOperator1_l;     /* '<S742>/Relational Operator1' */
  boolean_T LogicalOperator3_a;        /* '<S812>/Logical Operator3' */
  boolean_T Unit_Delay_gi;             /* '<S812>/Unit_Delay' */
  boolean_T LogicalOperator1_es;       /* '<S812>/Logical Operator1' */
  boolean_T LogicalOperator_cj;        /* '<S812>/Logical Operator' */
  boolean_T LogicalOperator2_f;        /* '<S812>/Logical Operator2' */
  boolean_T min_relop_a;               /* '<S815>/min_relop' */
  boolean_T RX_status_gz;              /* '<S643>/serialize_tpdt' */
  boolean_T RX_status_eu;              /* '<S620>/Data Type Conversion8' */
  boolean_T RX_status_fk;              /* '<S620>/Data Type Conversion3' */
  boolean_T RX_status_c2;              /* '<S603>/Data Type Conversion8' */
  boolean_T RX_status_br;              /* '<S604>/Data Type Conversion8' */
  boolean_T RX_status_ou;              /* '<S590>/Data Type Conversion8' */
  boolean_T RX_status_io;              /* '<S591>/Data Type Conversion8' */
  boolean_T RX_status_ep;              /* '<S577>/Data Type Conversion8' */
  boolean_T RX_status_bs;              /* '<S573>/Data Type Conversion8' */
  boolean_T RX_status_lr;              /* '<S574>/Data Type Conversion8' */
  boolean_T RX_status_i0;              /* '<S568>/Data Type Conversion3' */
  boolean_T RX_status_o05;             /* '<S515>/serialize_tpdt' */
  boolean_T RX_status_hf;              /* '<S504>/Data Type Conversion1' */
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
  boolean_T DataTypeConversion4_d;     /* '<S77>/Data Type Conversion4' */
  boolean_T F_Brake_control_active;    /* '<S103>/Logical Operator2' */
  boolean_T Compare_e5;                /* '<S209>/Compare' */
  boolean_T LogicalOperator2_n;        /* '<S203>/Logical Operator2' */
  boolean_T Compare_i;                 /* '<S207>/Compare' */
  boolean_T Compare_ex;                /* '<S208>/Compare' */
  boolean_T BrakingActive2;            /* '<S203>/BrakingActive2' */
  boolean_T f_brake_sw_off;            /* '<S203>/BrakingActive1' */
  boolean_T Compare_a;                 /* '<S210>/Compare' */
  boolean_T Compare_os;                /* '<S211>/Compare' */
  boolean_T f_brk_gov_inactive;        /* '<S203>/Logical Operator1' */
  boolean_T LogicalOperator_k;         /* '<S203>/Logical Operator' */
  boolean_T LogicalOperator_j;         /* '<S82>/Logical Operator' */
  boolean_T APTC_arb_pedal_low_idl_sw_o;/* '<S75>/Relational Operator' */
  boolean_T RelationalOperator1_is;    /* '<S89>/Relational Operator1' */
  boolean_T RelationalOperator_ca;     /* '<S89>/Relational Operator' */
  boolean_T RelationalOperator1_a;     /* '<S90>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S90>/Relational Operator' */
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
  boolean_T Compare_jb;                /* '<S378>/Compare' */
  boolean_T Compare_hc;                /* '<S379>/Compare' */
  boolean_T Compare_b;                 /* '<S380>/Compare' */
  boolean_T LogicalOperator2_f5;       /* '<S341>/Logical Operator2' */
  boolean_T Unit_Delay_ot;             /* '<S383>/Unit_Delay' */
  boolean_T LogicalOperator1_j;        /* '<S383>/Logical Operator1' */
  boolean_T LogicalOperator_f;         /* '<S383>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S384>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S384>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S369>/Compare' */
  boolean_T Compare_dv;                /* '<S370>/Compare' */
  boolean_T LogicalOperator1_g;        /* '<S339>/Logical Operator1' */
  boolean_T Unit_Delay_hz;             /* '<S372>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S372>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S372>/Logical Operator' */
  boolean_T Unit_Delay_c4;             /* '<S373>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S373>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S335>/Compare' */
  boolean_T FixPtRelationalOperator_d[2];/* '<S336>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_nk[33];            /* '<S355>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S350>/Logical Operator' */
  boolean_T RelationalOperator_fg;     /* '<S350>/Relational Operator' */
  boolean_T LogicalOperator3_o;        /* '<S356>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S356>/Unit_Delay' */
  boolean_T LogicalOperator_o;         /* '<S356>/Logical Operator' */
  boolean_T LogicalOperator1_ph;       /* '<S356>/Logical Operator1' */
  boolean_T f_vspd_min_delta_greater_than_t;/* '<S350>/Logical Operator2' */
  boolean_T RelationalOperator1_g;     /* '<S350>/Relational Operator1' */
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
  boolean_T LogicalOperator_g;         /* '<S337>/Logical Operator' */
  boolean_T Unit_Delay_l;              /* '<S345>/Unit_Delay' */
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
  boolean_T FixPtRelationalOperator_i; /* '<S320>/FixPt Relational Operator' */
  boolean_T DataTypeConversion_dzv;    /* '<S276>/Data Type Conversion' */
  boolean_T Unit_Delay1_fe;            /* '<S322>/Unit_Delay1' */
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
  boolean_T min_relop_c;               /* '<S375>/min_relop' */
  boolean_T min_relop_f;               /* '<S386>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S330>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S330>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S330>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S331>/Unit_Delay' */
  boolean_T LogicalOperator1_h;        /* '<S331>/Logical Operator1' */
  boolean_T RelationalOperator1_et;    /* '<S328>/Relational Operator1' */
  boolean_T LogicalOperator3_ar;       /* '<S329>/Logical Operator3' */
  boolean_T Unit_Delay_ig;             /* '<S329>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S329>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S329>/Logical Operator' */
  boolean_T LogicalOperator2_j;        /* '<S329>/Logical Operator2' */
  boolean_T min_relop_d;               /* '<S332>/min_relop' */
  boolean_T RelationalOperator1_m;     /* '<S289>/Relational Operator1' */
  boolean_T RelationalOperator1_n;     /* '<S218>/Relational Operator1' */
  boolean_T RelationalOperator_d3;     /* '<S218>/Relational Operator' */
  boolean_T RelationalOperator1_ch;    /* '<S219>/Relational Operator1' */
  boolean_T RelationalOperator_j1;     /* '<S219>/Relational Operator' */
  boolean_T RelationalOperator1_ln;    /* '<S220>/Relational Operator1' */
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
  boolean_T LogicalOperator_lo;        /* '<S167>/Logical Operator' */
  boolean_T Unit_Delay_li;             /* '<S168>/Unit_Delay' */
  boolean_T LogicalOperator1_oy;       /* '<S168>/Logical Operator1' */
  boolean_T Compare_ni;                /* '<S152>/Compare' */
  boolean_T Compare_dl;                /* '<S151>/Compare' */
  boolean_T min_relop_a5;              /* '<S170>/min_relop' */
  boolean_T RelationalOperator1_k;     /* '<S173>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S173>/Relational Operator' */
  boolean_T Unit_Delay_nm;             /* '<S109>/Unit_Delay' */
  boolean_T LogicalOperator1_ax;       /* '<S109>/Logical Operator1' */
  boolean_T Unit_Delay1_i;             /* '<S129>/Unit_Delay1' */
  boolean_T LogicalOperator_mu;        /* '<S129>/Logical Operator' */
  boolean_T Unit_Delay_nlp;            /* '<S130>/Unit_Delay' */
  boolean_T LogicalOperator1_mk;       /* '<S130>/Logical Operator1' */
  boolean_T Compare_aa;                /* '<S114>/Compare' */
  boolean_T Compare_jrp;               /* '<S113>/Compare' */
  boolean_T min_relop_p;               /* '<S132>/min_relop' */
  boolean_T RelationalOperator1_gi;    /* '<S135>/Relational Operator1' */
  boolean_T RelationalOperator_b;      /* '<S135>/Relational Operator' */
  boolean_T Reshape_j4[2];             /* '<S60>/Reshape' */
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
  boolean_T Reshape_i[2];              /* '<S42>/Reshape' */
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
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_n;/* '<S1052>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1051>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1051>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_n;/* '<S1051>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S1051>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_fr_T If_Then_Else_d;/* '<S990>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_mfx;/* '<S989>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ev;/* '<S814>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_kl;/* '<S809>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S808>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_o;/* '<S739>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_p;/* '<S739>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_f;/* '<S739>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_h;/* '<S739>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_f;/* '<S757>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_kx;/* '<S792>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S792>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_g;/* '<S756>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S784>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_a;/* '<S784>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_j;/* '<S755>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_p;/* '<S776>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S776>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_i;/* '<S754>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S768>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_j;/* '<S768>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S753>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S760>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fj;/* '<S760>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S737>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S737>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S737>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S461>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S384>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S341>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S373>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S339>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S360>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_jh;/* '<S351>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S354>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S345>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S344>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S331>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S323>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S322>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b;/* '<S321>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o0;/* '<S306>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m;/* '<S306>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_mf_T If_Then_Else_co;/* '<S304>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_m;/* '<S275>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_km;/* '<S298>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S298>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S296>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S296>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m1;/* '<S275>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_nh;/* '<S274>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h3;/* '<S267>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pi;/* '<S267>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_cp;/* '<S262>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k2;/* '<S261>/If_Then_Else' */
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
  B_If_Then_Else_L4_MABX_T If_Then_Else1_b;/* '<S135>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nj;/* '<S135>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bg;/* '<S130>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ly;/* '<S129>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S106>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S106>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_pf;/* '<S90>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iz;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lol;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lw;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_oy;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fh;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S771>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S763>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_c;     /* '<S787>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S779>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S808>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S809>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_cc;    /* '<S807>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_od;    /* '<S806>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S795>/FixPt Unit Delay1' */
  real_T Unit_Delay_139_DSTATE;        /* '<S3>/Unit_Delay' */
  real_T Unit_Delay_138_DSTATE;        /* '<S3>/Unit_Delay' */
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
  real_T Unit_Delay_DSTATE;            /* '<S903>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S822>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_oj;    /* '<S817>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_a;          /* '<S646>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_p;          /* '<S518>/Unit_Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S389>/Unit Delay1' */
  real_T LongitudnalPosition_DSTATE;   /* '<S390>/LongitudnalPosition' */
  real_T VehHeading_DSTATE;            /* '<S390>/VehHeading' */
  real_T XPosition_DSTATE;             /* '<S390>/XPosition' */
  real_T YPosition_DSTATE;             /* '<S390>/YPosition' */
  real_T Unit_Delay_DSTATE_e;          /* '<S341>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_h;     /* '<S388>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_m;          /* '<S385>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_g;          /* '<S339>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hq;    /* '<S377>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_b;          /* '<S374>/Unit_Delay' */
  real_T DelayInput1_DSTATE[2];        /* '<S336>/Delay Input1' */
  real_T Unit_Delay_DSTATE_bw;         /* '<S354>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_li;    /* '<S365>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_ps;         /* '<S363>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S343>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S349>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S344>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S344>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S344>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_ff;         /* '<S342>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S197>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S196>/UD' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S321>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_im;        /* '<S322>/Unit_Delay2' */
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
  real_T FixPtUnitDelay1_DSTATE_pe;    /* '<S367>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S368>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S362>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_ov;    /* '<S334>/FixPt Unit Delay1' */
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
  volatile real_T RateTransition_Buffer0;/* '<S412>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S412>/Rate Transition' */
  real_T TmpRTBAtANDInport1_Buffer0;   /* synthesized block */
  real_T Subtract_DWORK1;              /* '<S646>/Subtract' */
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
  void* Assertion_slioAccessor;        /* '<S758>/Assertion' */
  void* Assertion_slioAccessor_h;      /* '<S766>/Assertion' */
  void* Assertion_slioAccessor_p;      /* '<S774>/Assertion' */
  void* Assertion_slioAccessor_hx;     /* '<S782>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S790>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S815>/Assertion' */
  void* Assertion_slioAccessor_al;     /* '<S279>/Assertion' */
  void* Assertion_slioAccessor_km;     /* '<S284>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S347>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S375>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S386>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S332>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S264>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S190>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S183>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S170>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S132>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S279>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S284>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_i;         /* '<S1025>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_is;        /* '<S1010>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_a;         /* '<S982>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j;         /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_125_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_126_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S392>/Heartbeat' */
  int32_T clockTickCounter_n;          /* '<S1053>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S644>/Add' */
  uint32_T Subtract_DWORK1_c;          /* '<S1025>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S1006>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S205>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S393>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S455>/S-Function1' */
  int_T SFunction1_IWORK_o[2];         /* '<S456>/S-Function1' */
  int_T SFunction1_IWORK_b[2];         /* '<S457>/S-Function1' */
  int_T SFunction1_IWORK_f[2];         /* '<S458>/S-Function1' */
  int_T SFunction1_IWORK_l[2];         /* '<S459>/S-Function1' */
  int_T SFunction1_IWORK_e[2];         /* '<S460>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S404>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S771>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S763>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_d;    /* '<S787>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_h;    /* '<S779>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_dm;   /* '<S807>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S806>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_k;    /* '<S795>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_i;         /* '<S834>/Unit Delay1' */
  uint8_T Unit_Delay_135_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_dv;   /* '<S817>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_e1[17];     /* '<S643>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_ie[39];     /* '<S515>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S388>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ip;   /* '<S377>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S365>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_cn;   /* '<S349>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S367>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S368>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S334>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S134>/FixPt Unit Delay2' */
  boolean_T Unit_Delay_DSTATE_mb;      /* '<S741>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S808>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_c;      /* '<S741>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_j;      /* '<S809>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S644>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_l;       /* '<S644>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_by;      /* '<S650>/Unit_Delay' */
  boolean_T Unit_Delay_79_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S398>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S834>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S834>/Unit Delay3' */
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
  boolean_T Unit_Delay2_DSTATE_j;      /* '<S644>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_p;      /* '<S644>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_j0;      /* '<S651>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jp;      /* '<S1024>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_f2;      /* '<S986>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_pd;      /* '<S1009>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ep;      /* '<S981>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jo;      /* '<S813>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_aa;      /* '<S814>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jl;      /* '<S812>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S383>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S384>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S372>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S373>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_k;       /* '<S356>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_la;      /* '<S345>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eu4;     /* '<S101>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_d;      /* '<S197>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_db;     /* '<S321>/Unit_Delay1' */
  boolean_T DelayInput1_DSTATE_f0;     /* '<S320>/Delay Input1' */
  boolean_T Unit_Delay1_DSTATE_a;      /* '<S322>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p3;     /* '<S323>/Unit_Delay1' */
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
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S834>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S834>/Chart' */
  uint8_T temporalCounter_i1_m;        /* '<S834>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S820>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S820>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S738>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S738>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S738>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S738>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S738>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_o;       /* '<S738>/Health State Machine PWM Sensor 1' */
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
  boolean_T Slew_at_event_MODE;        /* '<S735>/Slew_at_event' */
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
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1038>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_i;/* '<S1037>/CAN_TYPE1_TX_M1_C1' */
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

/* Parameters for system: '<S952>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S967>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1066>/Constant'
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
                                        * Referenced by: '<S912>/FixPt Switch'
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
  real_T CheckStaticLowerBound_min_g;  /* Mask Parameter: CheckStaticLowerBound_min_g
                                        * Referenced by: '<S815>/min_val'
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
  ENUM_SIGNAL_HEALTH_T CompareToConstant_const_a;/* Mask Parameter: CompareToConstant_const_a
                                                  * Referenced by: '<S749>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_d;/* Mask Parameter: CompareToConstant2_const_d
                                                   * Referenced by: '<S750>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_o;/* Mask Parameter: CompareToConstant3_const_o
                                                   * Referenced by: '<S745>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S801>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S800>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_n;/* Mask Parameter: CompareToConstant3_const_n
                                                   * Referenced by: '<S799>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_a;/* Mask Parameter: CompareToConstant1_const_a
                                                   * Referenced by: '<S798>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_h;/* Mask Parameter: CompareToConstant1_const_h
                                                   * Referenced by: '<S744>/Constant'
                                                   */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_p;/* Mask Parameter: CompareToConstant_const_p
                                                            * Referenced by: '<S992>/Constant'
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
                                               * Referenced by: '<S1024>/Constant'
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
  uint8_T Operator_BitMask;            /* Mask Parameter: Operator_BitMask
                                        * Referenced by: '<S841>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S838>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S839>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S840>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S842>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S843>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S849>/Operator'
                                        */
  uint8_T Operator_BitMask_m4;         /* Mask Parameter: Operator_BitMask_m4
                                        * Referenced by: '<S846>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S847>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S848>/Operator'
                                        */
  uint8_T Operator_BitMask_kw;         /* Mask Parameter: Operator_BitMask_kw
                                        * Referenced by: '<S850>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S851>/Operator'
                                        */
  uint8_T Operator_BitMask_n;          /* Mask Parameter: Operator_BitMask_n
                                        * Referenced by: '<S893>/Operator'
                                        */
  uint8_T Operator_BitMask_j4;         /* Mask Parameter: Operator_BitMask_j4
                                        * Referenced by: '<S895>/Operator'
                                        */
  uint8_T Operator_BitMask_bx;         /* Mask Parameter: Operator_BitMask_bx
                                        * Referenced by: '<S896>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S894>/Operator'
                                        */
  uint8_T Operator_BitMask_if;         /* Mask Parameter: Operator_BitMask_if
                                        * Referenced by: '<S897>/Operator'
                                        */
  uint8_T Operator_BitMask_mo;         /* Mask Parameter: Operator_BitMask_mo
                                        * Referenced by: '<S898>/Operator'
                                        */
  uint8_T Operator_BitMask_gc;         /* Mask Parameter: Operator_BitMask_gc
                                        * Referenced by: '<S871>/Operator'
                                        */
  uint8_T Operator_BitMask_em;         /* Mask Parameter: Operator_BitMask_em
                                        * Referenced by: '<S876>/Operator'
                                        */
  uint8_T Operator_BitMask_id;         /* Mask Parameter: Operator_BitMask_id
                                        * Referenced by: '<S872>/Operator'
                                        */
  uint8_T Operator_BitMask_mk;         /* Mask Parameter: Operator_BitMask_mk
                                        * Referenced by: '<S877>/Operator'
                                        */
  uint8_T Operator_BitMask_es;         /* Mask Parameter: Operator_BitMask_es
                                        * Referenced by: '<S878>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S875>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S923>/Operator'
                                        */
  uint8_T Operator_BitMask_ks;         /* Mask Parameter: Operator_BitMask_ks
                                        * Referenced by: '<S920>/Operator'
                                        */
  uint8_T Operator_BitMask_d5;         /* Mask Parameter: Operator_BitMask_d5
                                        * Referenced by: '<S921>/Operator'
                                        */
  uint8_T Operator_BitMask_e3;         /* Mask Parameter: Operator_BitMask_e3
                                        * Referenced by: '<S922>/Operator'
                                        */
  uint8_T Operator_BitMask_nr;         /* Mask Parameter: Operator_BitMask_nr
                                        * Referenced by: '<S924>/Operator'
                                        */
  uint8_T Operator_BitMask_ln;         /* Mask Parameter: Operator_BitMask_ln
                                        * Referenced by: '<S925>/Operator'
                                        */
  uint8_T Operator_BitMask_bv;         /* Mask Parameter: Operator_BitMask_bv
                                        * Referenced by: '<S931>/Operator'
                                        */
  uint8_T Operator_BitMask_bi;         /* Mask Parameter: Operator_BitMask_bi
                                        * Referenced by: '<S932>/Operator'
                                        */
  uint8_T Operator_BitMask_bc;         /* Mask Parameter: Operator_BitMask_bc
                                        * Referenced by: '<S928>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S929>/Operator'
                                        */
  uint8_T Operator_BitMask_nc;         /* Mask Parameter: Operator_BitMask_nc
                                        * Referenced by: '<S930>/Operator'
                                        */
  uint8_T Operator_BitMask_kz;         /* Mask Parameter: Operator_BitMask_kz
                                        * Referenced by: '<S933>/Operator'
                                        */
  uint8_T Operator_BitMask_it;         /* Mask Parameter: Operator_BitMask_it
                                        * Referenced by: '<S946>/Operator'
                                        */
  uint8_T Operator_BitMask_d4;         /* Mask Parameter: Operator_BitMask_d4
                                        * Referenced by: '<S942>/Operator'
                                        */
  uint8_T Operator_BitMask_an;         /* Mask Parameter: Operator_BitMask_an
                                        * Referenced by: '<S943>/Operator'
                                        */
  uint8_T Operator_BitMask_mn;         /* Mask Parameter: Operator_BitMask_mn
                                        * Referenced by: '<S944>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S945>/Operator'
                                        */
  uint8_T Operator_BitMask_lm;         /* Mask Parameter: Operator_BitMask_lm
                                        * Referenced by: '<S947>/Operator'
                                        */
  uint8_T Operator_BitMask_gm;         /* Mask Parameter: Operator_BitMask_gm
                                        * Referenced by: '<S991>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_nu;         /* Mask Parameter: Operator_BitMask_nu
                                        * Referenced by: '<S1002>/Operator'
                                        */
  uint8_T Operator_BitMask_is;         /* Mask Parameter: Operator_BitMask_is
                                        * Referenced by: '<S997>/Operator'
                                        */
  uint8_T Operator_BitMask_by;         /* Mask Parameter: Operator_BitMask_by
                                        * Referenced by: '<S998>/Operator'
                                        */
  uint8_T Operator_BitMask_hx;         /* Mask Parameter: Operator_BitMask_hx
                                        * Referenced by: '<S999>/Operator'
                                        */
  uint8_T Operator_BitMask_ko;         /* Mask Parameter: Operator_BitMask_ko
                                        * Referenced by: '<S1000>/Operator'
                                        */
  uint8_T Operator_BitMask_cz;         /* Mask Parameter: Operator_BitMask_cz
                                        * Referenced by: '<S1001>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S818>/Operator'
                                        */
  uint8_T Operator_BitMask_m5;         /* Mask Parameter: Operator_BitMask_m5
                                        * Referenced by: '<S819>/Operator'
                                        */
  uint8_T Operator_BitMask_af;         /* Mask Parameter: Operator_BitMask_af
                                        * Referenced by: '<S667>/Operator'
                                        */
  uint8_T Operator_BitMask_mx;         /* Mask Parameter: Operator_BitMask_mx
                                        * Referenced by: '<S666>/Operator'
                                        */
  uint8_T Operator_BitMask_e0;         /* Mask Parameter: Operator_BitMask_e0
                                        * Referenced by: '<S679>/Operator'
                                        */
  uint8_T Operator_BitMask_iw;         /* Mask Parameter: Operator_BitMask_iw
                                        * Referenced by: '<S678>/Operator'
                                        */
  uint8_T Operator_BitMask_jf;         /* Mask Parameter: Operator_BitMask_jf
                                        * Referenced by: '<S680>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_OutV_h[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_h
                                               * Referenced by: '<S981>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_OutV_c[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_c
                                               * Referenced by: '<S1009>/Constant'
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
  real_T byte1_Y0_c;                   /* Computed Parameter: byte1_Y0_c
                                        * Referenced by: '<S481>/byte1'
                                        */
  real_T byte2_Y0_h;                   /* Computed Parameter: byte2_Y0_h
                                        * Referenced by: '<S481>/byte2'
                                        */
  real_T byte3_Y0_n;                   /* Computed Parameter: byte3_Y0_n
                                        * Referenced by: '<S481>/byte3'
                                        */
  real_T byte4_Y0_n;                   /* Computed Parameter: byte4_Y0_n
                                        * Referenced by: '<S481>/byte4'
                                        */
  real_T byte5_Y0_j;                   /* Computed Parameter: byte5_Y0_j
                                        * Referenced by: '<S481>/byte5'
                                        */
  real_T byte6_Y0_b;                   /* Computed Parameter: byte6_Y0_b
                                        * Referenced by: '<S481>/byte6'
                                        */
  real_T byte7_Y0_k;                   /* Computed Parameter: byte7_Y0_k
                                        * Referenced by: '<S481>/byte7'
                                        */
  real_T byte8_Y0_c;                   /* Computed Parameter: byte8_Y0_c
                                        * Referenced by: '<S481>/byte8'
                                        */
  real_T RXstatus_Y0_i;                /* Computed Parameter: RXstatus_Y0_i
                                        * Referenced by: '<S481>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S481>/RX time'
                                        */
  real_T RXdeltatime_Y0_m;             /* Computed Parameter: RXdeltatime_Y0_m
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
  real_T RXstatus_Y0_c;                /* Computed Parameter: RXstatus_Y0_c
                                        * Referenced by: '<S489>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S489>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
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
  real_T RXstatus_Y0_k;                /* Computed Parameter: RXstatus_Y0_k
                                        * Referenced by: '<S491>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S491>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
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
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S493>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S493>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
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
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S495>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S495>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
                                        * Referenced by: '<S495>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S497>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S497>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S497>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S497>/RX time'
                                        */
  real_T RXdeltatime_Y0_b;             /* Computed Parameter: RXdeltatime_Y0_b
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
  real_T RXstatus_Y0_p;                /* Computed Parameter: RXstatus_Y0_p
                                        * Referenced by: '<S499>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S499>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
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
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S501>/RX status'
                                        */
  real_T RXtime_Y0_ef;                 /* Computed Parameter: RXtime_Y0_ef
                                        * Referenced by: '<S501>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S501>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_g;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_g
                                        * Referenced by: '<S503>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_o;      /* Computed Parameter: ParkingBrakeSwitch_Y0_o
                                        * Referenced by: '<S503>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_g;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_g
                                        * Referenced by: '<S503>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_d;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_d
                                         * Referenced by: '<S503>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_i;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_i
                                        * Referenced by: '<S503>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_j;        /* Computed Parameter: CruiseCtrlActive_Y0_j
                                        * Referenced by: '<S503>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_c;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_c
                                        * Referenced by: '<S503>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_n;             /* Computed Parameter: BrakeSwitch_Y0_n
                                        * Referenced by: '<S503>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_j;            /* Computed Parameter: ClutchSwitch_Y0_j
                                        * Referenced by: '<S503>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_h;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_h
                                        * Referenced by: '<S503>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_f;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_f
                                        * Referenced by: '<S503>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_c;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_c
                                        * Referenced by: '<S503>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_b;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_b
                                          * Referenced by: '<S503>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_c;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_c
                                        * Referenced by: '<S503>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_f;        /* Computed Parameter: PTOGovernorState_Y0_f
                                        * Referenced by: '<S503>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_l;        /* Computed Parameter: CruiseCtrlStates_Y0_l
                                        * Referenced by: '<S503>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_l;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_l
                                        * Referenced by: '<S503>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_m;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_m
                                        * Referenced by: '<S503>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_p;       /* Computed Parameter: EngTestModeSwitch_Y0_p
                                        * Referenced by: '<S503>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_h;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_h
                                         * Referenced by: '<S503>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_hu;               /* Computed Parameter: RXstatus_Y0_hu
                                        * Referenced by: '<S503>/RX status'
                                        */
  real_T RXtime_Y0_fk;                 /* Computed Parameter: RXtime_Y0_fk
                                        * Referenced by: '<S503>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
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
  real_T RXstatus_Y0_ol;               /* Computed Parameter: RXstatus_Y0_ol
                                        * Referenced by: '<S505>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S505>/RX time'
                                        */
  real_T RXdeltatime_Y0_iv;            /* Computed Parameter: RXdeltatime_Y0_iv
                                        * Referenced by: '<S505>/RX delta time'
                                        */
  real_T SID_Y0_i;                     /* Computed Parameter: SID_Y0_i
                                        * Referenced by: '<S506>/SID'
                                        */
  real_T COGReference_Y0_j;            /* Computed Parameter: COGReference_Y0_j
                                        * Referenced by: '<S506>/COGReference'
                                        */
  real_T CourseOverGround_Y0_l;        /* Computed Parameter: CourseOverGround_Y0_l
                                        * Referenced by: '<S506>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_a;         /* Computed Parameter: SpeedOverGround_Y0_a
                                        * Referenced by: '<S506>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S506>/RX status'
                                        */
  real_T RXtime_Y0_ms;                 /* Computed Parameter: RXtime_Y0_ms
                                        * Referenced by: '<S506>/RX time'
                                        */
  real_T RXdeltatime_Y0_d5;            /* Computed Parameter: RXdeltatime_Y0_d5
                                        * Referenced by: '<S506>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S508>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S508>/RX status'
                                        */
  real_T RXtime_Y0_fw;                 /* Computed Parameter: RXtime_Y0_fw
                                        * Referenced by: '<S508>/RX time'
                                        */
  real_T RXdeltatime_Y0_le;            /* Computed Parameter: RXdeltatime_Y0_le
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
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S510>/RX status'
                                        */
  real_T RXtime_Y0_ey;                 /* Computed Parameter: RXtime_Y0_ey
                                        * Referenced by: '<S510>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S510>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_o;        /* Computed Parameter: ASREngCtrlActive_Y0_o
                                        * Referenced by: '<S512>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_k;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_k
                                        * Referenced by: '<S512>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_i;   /* Computed Parameter: AntiLockBrakingActive_Y0_i
                                        * Referenced by: '<S512>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_a;          /* Computed Parameter: EBSBrakeSwitch_Y0_a
                                        * Referenced by: '<S512>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_p;           /* Computed Parameter: BrakePedalPos_Y0_p
                                        * Referenced by: '<S512>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_o;        /* Computed Parameter: ABSOffroadSwitch_Y0_o
                                        * Referenced by: '<S512>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_a;        /* Computed Parameter: ASROffroadSwitch_Y0_a
                                        * Referenced by: '<S512>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_d;     /* Computed Parameter: ASRHillHolderSwitch_Y0_d
                                        * Referenced by: '<S512>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_d;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_d
                                          * Referenced by: '<S512>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_p;    /* Computed Parameter: AccelInterlockSwitch_Y0_p
                                        * Referenced by: '<S512>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_b;         /* Computed Parameter: EngDerateSwitch_Y0_b
                                        * Referenced by: '<S512>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_e;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_e
                                        * Referenced by: '<S512>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_n; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_n
                                        * Referenced by: '<S512>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_o;    /* Computed Parameter: EngRetarderSelection_Y0_o
                                        * Referenced by: '<S512>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_m;     /* Computed Parameter: ABSFullyOperational_Y0_m
                                        * Referenced by: '<S512>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_a;     /* Computed Parameter: EBSRedWarningSignal_Y0_a
                                        * Referenced by: '<S512>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_h;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_h
                                         * Referenced by: '<S512>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_f;/* Computed Parameter: ATC_ASRInformationSignal_Y0_f
                                        * Referenced by: '<S512>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_b;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_b
                                          * Referenced by: '<S512>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_f;         /* Computed Parameter: HaltBrakeSwitch_Y0_f
                                        * Referenced by: '<S512>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_o;        /* Computed Parameter: TrailerABSStatus_Y0_o
                                        * Referenced by: '<S512>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_g;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_g
                                          * Referenced by: '<S512>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_a0;               /* Computed Parameter: RXstatus_Y0_a0
                                        * Referenced by: '<S512>/RX status'
                                        */
  real_T RXtime_Y0_fm;                 /* Computed Parameter: RXtime_Y0_fm
                                        * Referenced by: '<S512>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
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
  real_T RXstatus_Y0_db;               /* Computed Parameter: RXstatus_Y0_db
                                        * Referenced by: '<S514>/RX status'
                                        */
  real_T RXtime_Y0_es;                 /* Computed Parameter: RXtime_Y0_es
                                        * Referenced by: '<S514>/RX time'
                                        */
  real_T RXdeltatime_Y0_j5;            /* Computed Parameter: RXdeltatime_Y0_j5
                                        * Referenced by: '<S514>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S518>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_pz;/* Expression: 0
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
  real_T RXstatus_Y0_ns;               /* Computed Parameter: RXstatus_Y0_ns
                                        * Referenced by: '<S561>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S561>/RX time'
                                        */
  real_T RXdeltatime_Y0_jp;            /* Computed Parameter: RXdeltatime_Y0_jp
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
  real_T RXstatus_Y0_dr;               /* Computed Parameter: RXstatus_Y0_dr
                                        * Referenced by: '<S563>/RX status'
                                        */
  real_T RXtime_Y0_a3;                 /* Computed Parameter: RXtime_Y0_a3
                                        * Referenced by: '<S563>/RX time'
                                        */
  real_T RXdeltatime_Y0_pe;            /* Computed Parameter: RXdeltatime_Y0_pe
                                        * Referenced by: '<S563>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S565>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S565>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_e;                /* Computed Parameter: RXstatus_Y0_e
                                        * Referenced by: '<S565>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S565>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
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
  real_T RXstatus_Y0_ol5;              /* Computed Parameter: RXstatus_Y0_ol5
                                        * Referenced by: '<S567>/RX status'
                                        */
  real_T RXtime_Y0_m0;                 /* Computed Parameter: RXtime_Y0_m0
                                        * Referenced by: '<S567>/RX time'
                                        */
  real_T RXdeltatime_Y0_be;            /* Computed Parameter: RXdeltatime_Y0_be
                                        * Referenced by: '<S567>/RX delta time'
                                        */
  real_T SID_Y0_f;                     /* Computed Parameter: SID_Y0_f
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
  real_T RXstatus_Y0_a5;               /* Computed Parameter: RXstatus_Y0_a5
                                        * Referenced by: '<S569>/RX status'
                                        */
  real_T RXtime_Y0_g;                  /* Computed Parameter: RXtime_Y0_g
                                        * Referenced by: '<S569>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
                                        * Referenced by: '<S569>/RX delta time'
                                        */
  real_T SID_Y0_j;                     /* Computed Parameter: SID_Y0_j
                                        * Referenced by: '<S570>/SID'
                                        */
  real_T SetMode_Y0_d;                 /* Computed Parameter: SetMode_Y0_d
                                        * Referenced by: '<S570>/SetMode'
                                        */
  real_T OpMode_Y0_e;                  /* Computed Parameter: OpMode_Y0_e
                                        * Referenced by: '<S570>/OpMode'
                                        */
  real_T HDOP_Y0_p;                    /* Computed Parameter: HDOP_Y0_p
                                        * Referenced by: '<S570>/HDOP_'
                                        */
  real_T VDOP_Y0_e;                    /* Computed Parameter: VDOP_Y0_e
                                        * Referenced by: '<S570>/VDOP'
                                        */
  real_T TDOP_Y0_p;                    /* Computed Parameter: TDOP_Y0_p
                                        * Referenced by: '<S570>/TDOP'
                                        */
  real_T RXstatus_Y0_hi;               /* Computed Parameter: RXstatus_Y0_hi
                                        * Referenced by: '<S570>/RX status'
                                        */
  real_T RXtime_Y0_o1;                 /* Computed Parameter: RXtime_Y0_o1
                                        * Referenced by: '<S570>/RX time'
                                        */
  real_T RXdeltatime_Y0_ou;            /* Computed Parameter: RXdeltatime_Y0_ou
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
  real_T RXstatus_Y0_ct;               /* Computed Parameter: RXstatus_Y0_ct
                                        * Referenced by: '<S572>/RX status'
                                        */
  real_T RXtime_Y0_ct;                 /* Computed Parameter: RXtime_Y0_ct
                                        * Referenced by: '<S572>/RX time'
                                        */
  real_T RXdeltatime_Y0_f;             /* Computed Parameter: RXdeltatime_Y0_f
                                        * Referenced by: '<S572>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S575>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S575>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_oe;               /* Computed Parameter: RXstatus_Y0_oe
                                        * Referenced by: '<S575>/RX status'
                                        */
  real_T RXtime_Y0_gs;                 /* Computed Parameter: RXtime_Y0_gs
                                        * Referenced by: '<S575>/RX time'
                                        */
  real_T RXdeltatime_Y0_pn;            /* Computed Parameter: RXdeltatime_Y0_pn
                                        * Referenced by: '<S575>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_f;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_f
                                          * Referenced by: '<S576>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__m;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__m
                                          * Referenced by: '<S576>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_af;               /* Computed Parameter: RXstatus_Y0_af
                                        * Referenced by: '<S576>/RX status'
                                        */
  real_T RXtime_Y0_fe;                 /* Computed Parameter: RXtime_Y0_fe
                                        * Referenced by: '<S576>/RX time'
                                        */
  real_T RXdeltatime_Y0_ja;            /* Computed Parameter: RXdeltatime_Y0_ja
                                        * Referenced by: '<S576>/RX delta time'
                                        */
  real_T byte1_Y0_l;                   /* Computed Parameter: byte1_Y0_l
                                        * Referenced by: '<S581>/byte1'
                                        */
  real_T byte2_Y0_c;                   /* Computed Parameter: byte2_Y0_c
                                        * Referenced by: '<S581>/byte2'
                                        */
  real_T byte3_Y0_o;                   /* Computed Parameter: byte3_Y0_o
                                        * Referenced by: '<S581>/byte3'
                                        */
  real_T byte4_Y0_a;                   /* Computed Parameter: byte4_Y0_a
                                        * Referenced by: '<S581>/byte4'
                                        */
  real_T byte5_Y0_n;                   /* Computed Parameter: byte5_Y0_n
                                        * Referenced by: '<S581>/byte5'
                                        */
  real_T byte6_Y0_a;                   /* Computed Parameter: byte6_Y0_a
                                        * Referenced by: '<S581>/byte6'
                                        */
  real_T byte7_Y0_i;                   /* Computed Parameter: byte7_Y0_i
                                        * Referenced by: '<S581>/byte7'
                                        */
  real_T byte8_Y0_j;                   /* Computed Parameter: byte8_Y0_j
                                        * Referenced by: '<S581>/byte8'
                                        */
  real_T RXstatus_Y0_a2;               /* Computed Parameter: RXstatus_Y0_a2
                                        * Referenced by: '<S581>/RX status'
                                        */
  real_T RXtime_Y0_fg;                 /* Computed Parameter: RXtime_Y0_fg
                                        * Referenced by: '<S581>/RX time'
                                        */
  real_T RXdeltatime_Y0_mu;            /* Computed Parameter: RXdeltatime_Y0_mu
                                        * Referenced by: '<S581>/RX delta time'
                                        */
  real_T byte1_Y0_lr;                  /* Computed Parameter: byte1_Y0_lr
                                        * Referenced by: '<S582>/byte1'
                                        */
  real_T byte2_Y0_i;                   /* Computed Parameter: byte2_Y0_i
                                        * Referenced by: '<S582>/byte2'
                                        */
  real_T byte3_Y0_a;                   /* Computed Parameter: byte3_Y0_a
                                        * Referenced by: '<S582>/byte3'
                                        */
  real_T byte4_Y0_o;                   /* Computed Parameter: byte4_Y0_o
                                        * Referenced by: '<S582>/byte4'
                                        */
  real_T byte5_Y0_i;                   /* Computed Parameter: byte5_Y0_i
                                        * Referenced by: '<S582>/byte5'
                                        */
  real_T byte6_Y0_f;                   /* Computed Parameter: byte6_Y0_f
                                        * Referenced by: '<S582>/byte6'
                                        */
  real_T byte7_Y0_d;                   /* Computed Parameter: byte7_Y0_d
                                        * Referenced by: '<S582>/byte7'
                                        */
  real_T byte8_Y0_g;                   /* Computed Parameter: byte8_Y0_g
                                        * Referenced by: '<S582>/byte8'
                                        */
  real_T RXstatus_Y0_ca;               /* Computed Parameter: RXstatus_Y0_ca
                                        * Referenced by: '<S582>/RX status'
                                        */
  real_T RXtime_Y0_eb;                 /* Computed Parameter: RXtime_Y0_eb
                                        * Referenced by: '<S582>/RX time'
                                        */
  real_T RXdeltatime_Y0_kg;            /* Computed Parameter: RXdeltatime_Y0_kg
                                        * Referenced by: '<S582>/RX delta time'
                                        */
  real_T byte1_Y0_cm;                  /* Computed Parameter: byte1_Y0_cm
                                        * Referenced by: '<S583>/byte1'
                                        */
  real_T byte2_Y0_k;                   /* Computed Parameter: byte2_Y0_k
                                        * Referenced by: '<S583>/byte2'
                                        */
  real_T byte3_Y0_p;                   /* Computed Parameter: byte3_Y0_p
                                        * Referenced by: '<S583>/byte3'
                                        */
  real_T byte4_Y0_nm;                  /* Computed Parameter: byte4_Y0_nm
                                        * Referenced by: '<S583>/byte4'
                                        */
  real_T byte5_Y0_e;                   /* Computed Parameter: byte5_Y0_e
                                        * Referenced by: '<S583>/byte5'
                                        */
  real_T byte6_Y0_j;                   /* Computed Parameter: byte6_Y0_j
                                        * Referenced by: '<S583>/byte6'
                                        */
  real_T byte7_Y0_ic;                  /* Computed Parameter: byte7_Y0_ic
                                        * Referenced by: '<S583>/byte7'
                                        */
  real_T byte8_Y0_a;                   /* Computed Parameter: byte8_Y0_a
                                        * Referenced by: '<S583>/byte8'
                                        */
  real_T RXstatus_Y0_me;               /* Computed Parameter: RXstatus_Y0_me
                                        * Referenced by: '<S583>/RX status'
                                        */
  real_T RXtime_Y0_fa;                 /* Computed Parameter: RXtime_Y0_fa
                                        * Referenced by: '<S583>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S583>/RX delta time'
                                        */
  real_T byte1_Y0_a;                   /* Computed Parameter: byte1_Y0_a
                                        * Referenced by: '<S594>/byte1'
                                        */
  real_T byte2_Y0_a;                   /* Computed Parameter: byte2_Y0_a
                                        * Referenced by: '<S594>/byte2'
                                        */
  real_T byte3_Y0_d;                   /* Computed Parameter: byte3_Y0_d
                                        * Referenced by: '<S594>/byte3'
                                        */
  real_T byte4_Y0_k;                   /* Computed Parameter: byte4_Y0_k
                                        * Referenced by: '<S594>/byte4'
                                        */
  real_T byte5_Y0_ij;                  /* Computed Parameter: byte5_Y0_ij
                                        * Referenced by: '<S594>/byte5'
                                        */
  real_T byte6_Y0_k;                   /* Computed Parameter: byte6_Y0_k
                                        * Referenced by: '<S594>/byte6'
                                        */
  real_T byte7_Y0_ky;                  /* Computed Parameter: byte7_Y0_ky
                                        * Referenced by: '<S594>/byte7'
                                        */
  real_T byte8_Y0_ay;                  /* Computed Parameter: byte8_Y0_ay
                                        * Referenced by: '<S594>/byte8'
                                        */
  real_T RXstatus_Y0_ov;               /* Computed Parameter: RXstatus_Y0_ov
                                        * Referenced by: '<S594>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S594>/RX time'
                                        */
  real_T RXdeltatime_Y0_bb;            /* Computed Parameter: RXdeltatime_Y0_bb
                                        * Referenced by: '<S594>/RX delta time'
                                        */
  real_T byte1_Y0_cmf;                 /* Computed Parameter: byte1_Y0_cmf
                                        * Referenced by: '<S595>/byte1'
                                        */
  real_T byte2_Y0_p;                   /* Computed Parameter: byte2_Y0_p
                                        * Referenced by: '<S595>/byte2'
                                        */
  real_T byte3_Y0_a4;                  /* Computed Parameter: byte3_Y0_a4
                                        * Referenced by: '<S595>/byte3'
                                        */
  real_T byte4_Y0_j;                   /* Computed Parameter: byte4_Y0_j
                                        * Referenced by: '<S595>/byte4'
                                        */
  real_T byte5_Y0_nu;                  /* Computed Parameter: byte5_Y0_nu
                                        * Referenced by: '<S595>/byte5'
                                        */
  real_T byte6_Y0_o;                   /* Computed Parameter: byte6_Y0_o
                                        * Referenced by: '<S595>/byte6'
                                        */
  real_T byte7_Y0_l;                   /* Computed Parameter: byte7_Y0_l
                                        * Referenced by: '<S595>/byte7'
                                        */
  real_T byte8_Y0_b;                   /* Computed Parameter: byte8_Y0_b
                                        * Referenced by: '<S595>/byte8'
                                        */
  real_T RXstatus_Y0_hb;               /* Computed Parameter: RXstatus_Y0_hb
                                        * Referenced by: '<S595>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S595>/RX time'
                                        */
  real_T RXdeltatime_Y0_ll;            /* Computed Parameter: RXdeltatime_Y0_ll
                                        * Referenced by: '<S595>/RX delta time'
                                        */
  real_T byte1_Y0_o;                   /* Computed Parameter: byte1_Y0_o
                                        * Referenced by: '<S596>/byte1'
                                        */
  real_T byte2_Y0_h4;                  /* Computed Parameter: byte2_Y0_h4
                                        * Referenced by: '<S596>/byte2'
                                        */
  real_T byte3_Y0_b;                   /* Computed Parameter: byte3_Y0_b
                                        * Referenced by: '<S596>/byte3'
                                        */
  real_T byte4_Y0_e;                   /* Computed Parameter: byte4_Y0_e
                                        * Referenced by: '<S596>/byte4'
                                        */
  real_T byte5_Y0_h;                   /* Computed Parameter: byte5_Y0_h
                                        * Referenced by: '<S596>/byte5'
                                        */
  real_T byte6_Y0_bl;                  /* Computed Parameter: byte6_Y0_bl
                                        * Referenced by: '<S596>/byte6'
                                        */
  real_T byte7_Y0_p;                   /* Computed Parameter: byte7_Y0_p
                                        * Referenced by: '<S596>/byte7'
                                        */
  real_T byte8_Y0_i;                   /* Computed Parameter: byte8_Y0_i
                                        * Referenced by: '<S596>/byte8'
                                        */
  real_T RXstatus_Y0_ke;               /* Computed Parameter: RXstatus_Y0_ke
                                        * Referenced by: '<S596>/RX status'
                                        */
  real_T RXtime_Y0_gy;                 /* Computed Parameter: RXtime_Y0_gy
                                        * Referenced by: '<S596>/RX time'
                                        */
  real_T RXdeltatime_Y0_cf;            /* Computed Parameter: RXdeltatime_Y0_cf
                                        * Referenced by: '<S596>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S607>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S607>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S607>/RX status'
                                        */
  real_T RXtime_Y0_n1;                 /* Computed Parameter: RXtime_Y0_n1
                                        * Referenced by: '<S607>/RX time'
                                        */
  real_T RXdeltatime_Y0_e;             /* Computed Parameter: RXdeltatime_Y0_e
                                        * Referenced by: '<S607>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_p;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_p
                                          * Referenced by: '<S608>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_n;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_n
                                          * Referenced by: '<S608>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_pe;               /* Computed Parameter: RXstatus_Y0_pe
                                        * Referenced by: '<S608>/RX status'
                                        */
  real_T RXtime_Y0_fj;                 /* Computed Parameter: RXtime_Y0_fj
                                        * Referenced by: '<S608>/RX time'
                                        */
  real_T RXdeltatime_Y0_ki;            /* Computed Parameter: RXdeltatime_Y0_ki
                                        * Referenced by: '<S608>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_n;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_n
                                          * Referenced by: '<S609>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_o;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_o
                                          * Referenced by: '<S609>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_ix;               /* Computed Parameter: RXstatus_Y0_ix
                                        * Referenced by: '<S609>/RX status'
                                        */
  real_T RXtime_Y0_mg;                 /* Computed Parameter: RXtime_Y0_mg
                                        * Referenced by: '<S609>/RX time'
                                        */
  real_T RXdeltatime_Y0_gu;            /* Computed Parameter: RXdeltatime_Y0_gu
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
  real_T RXstatus_Y0_j;                /* Computed Parameter: RXstatus_Y0_j
                                        * Referenced by: '<S617>/RX status'
                                        */
  real_T RXtime_Y0_hy;                 /* Computed Parameter: RXtime_Y0_hy
                                        * Referenced by: '<S617>/RX time'
                                        */
  real_T RXdeltatime_Y0_om;            /* Computed Parameter: RXdeltatime_Y0_om
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
  real_T RXstatus_Y0_ge;               /* Computed Parameter: RXstatus_Y0_ge
                                        * Referenced by: '<S618>/RX status'
                                        */
  real_T RXtime_Y0_bm;                 /* Computed Parameter: RXtime_Y0_bm
                                        * Referenced by: '<S618>/RX time'
                                        */
  real_T RXdeltatime_Y0_gy;            /* Computed Parameter: RXdeltatime_Y0_gy
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
  real_T RXstatus_Y0_j1;               /* Computed Parameter: RXstatus_Y0_j1
                                        * Referenced by: '<S619>/RX status'
                                        */
  real_T RXtime_Y0_cs;                 /* Computed Parameter: RXtime_Y0_cs
                                        * Referenced by: '<S619>/RX time'
                                        */
  real_T RXdeltatime_Y0_br;            /* Computed Parameter: RXdeltatime_Y0_br
                                        * Referenced by: '<S619>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S621>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S621>/Longitude_'
                                        */
  real_T RXstatus_Y0_f;                /* Computed Parameter: RXstatus_Y0_f
                                        * Referenced by: '<S621>/RX status'
                                        */
  real_T RXtime_Y0_hi;                 /* Computed Parameter: RXtime_Y0_hi
                                        * Referenced by: '<S621>/RX time'
                                        */
  real_T RXdeltatime_Y0_au;            /* Computed Parameter: RXdeltatime_Y0_au
                                        * Referenced by: '<S621>/RX delta time'
                                        */
  real_T Latitude_Y0_b;                /* Computed Parameter: Latitude_Y0_b
                                        * Referenced by: '<S622>/Latitude_'
                                        */
  real_T Longitude_Y0_p;               /* Computed Parameter: Longitude_Y0_p
                                        * Referenced by: '<S622>/Longitude_'
                                        */
  real_T RXstatus_Y0_pp;               /* Computed Parameter: RXstatus_Y0_pp
                                        * Referenced by: '<S622>/RX status'
                                        */
  real_T RXtime_Y0_oe;                 /* Computed Parameter: RXtime_Y0_oe
                                        * Referenced by: '<S622>/RX time'
                                        */
  real_T RXdeltatime_Y0_hp;            /* Computed Parameter: RXdeltatime_Y0_hp
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
  real_T RXstatus_Y0_jz;               /* Computed Parameter: RXstatus_Y0_jz
                                        * Referenced by: '<S624>/RX status'
                                        */
  real_T RXtime_Y0_fc;                 /* Computed Parameter: RXtime_Y0_fc
                                        * Referenced by: '<S624>/RX time'
                                        */
  real_T RXdeltatime_Y0_ps;            /* Computed Parameter: RXdeltatime_Y0_ps
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
  real_T RXstatus_Y0_mz;               /* Computed Parameter: RXstatus_Y0_mz
                                        * Referenced by: '<S626>/RX status'
                                        */
  real_T RXtime_Y0_mi;                 /* Computed Parameter: RXtime_Y0_mi
                                        * Referenced by: '<S626>/RX time'
                                        */
  real_T RXdeltatime_Y0_bt;            /* Computed Parameter: RXdeltatime_Y0_bt
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
  real_T RXstatus_Y0_kw;               /* Computed Parameter: RXstatus_Y0_kw
                                        * Referenced by: '<S628>/RX status'
                                        */
  real_T RXtime_Y0_eg;                 /* Computed Parameter: RXtime_Y0_eg
                                        * Referenced by: '<S628>/RX time'
                                        */
  real_T RXdeltatime_Y0_gi;            /* Computed Parameter: RXdeltatime_Y0_gi
                                        * Referenced by: '<S628>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_f;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_f
                                        * Referenced by: '<S630>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_d;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_d
                                        * Referenced by: '<S630>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_g;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_g
                                        * Referenced by: '<S630>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_f; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_f
                                        * Referenced by: '<S630>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_n;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_n
                                        * Referenced by: '<S630>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_j;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_j
                                        * Referenced by: '<S630>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_drg;              /* Computed Parameter: RXstatus_Y0_drg
                                        * Referenced by: '<S630>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S630>/RX time'
                                        */
  real_T RXdeltatime_Y0_ig;            /* Computed Parameter: RXdeltatime_Y0_ig
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
  real_T PX2_EgoLaneNearPosValid_Y0_g; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_g
                                        * Referenced by: '<S632>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_b;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_b
                                        * Referenced by: '<S632>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_jr; /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_jr
                                        * Referenced by: '<S632>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_f3;               /* Computed Parameter: RXstatus_Y0_f3
                                        * Referenced by: '<S632>/RX status'
                                        */
  real_T RXtime_Y0_l0;                 /* Computed Parameter: RXtime_Y0_l0
                                        * Referenced by: '<S632>/RX time'
                                        */
  real_T RXdeltatime_Y0_gz;            /* Computed Parameter: RXdeltatime_Y0_gz
                                        * Referenced by: '<S632>/RX delta time'
                                        */
  real_T SID_Y0_d;                     /* Computed Parameter: SID_Y0_d
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
  real_T RXstatus_Y0_p0;               /* Computed Parameter: RXstatus_Y0_p0
                                        * Referenced by: '<S634>/RX status'
                                        */
  real_T RXtime_Y0_mq;                 /* Computed Parameter: RXtime_Y0_mq
                                        * Referenced by: '<S634>/RX time'
                                        */
  real_T RXdeltatime_Y0_ap;            /* Computed Parameter: RXdeltatime_Y0_ap
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
  real_T RXstatus_Y0_d3;               /* Computed Parameter: RXstatus_Y0_d3
                                        * Referenced by: '<S636>/RX status'
                                        */
  real_T RXtime_Y0_nt;                 /* Computed Parameter: RXtime_Y0_nt
                                        * Referenced by: '<S636>/RX time'
                                        */
  real_T RXdeltatime_Y0_bf;            /* Computed Parameter: RXdeltatime_Y0_bf
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
  real_T RXstatus_Y0_b;                /* Computed Parameter: RXstatus_Y0_b
                                        * Referenced by: '<S638>/RX status'
                                        */
  real_T RXtime_Y0_au;                 /* Computed Parameter: RXtime_Y0_au
                                        * Referenced by: '<S638>/RX time'
                                        */
  real_T RXdeltatime_Y0_n5;            /* Computed Parameter: RXdeltatime_Y0_n5
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
  real_T RXstatus_Y0_p2;               /* Computed Parameter: RXstatus_Y0_p2
                                        * Referenced by: '<S640>/RX status'
                                        */
  real_T RXtime_Y0_m1;                 /* Computed Parameter: RXtime_Y0_m1
                                        * Referenced by: '<S640>/RX time'
                                        */
  real_T RXdeltatime_Y0_kb;            /* Computed Parameter: RXdeltatime_Y0_kb
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
  real_T RXstatus_Y0_ax;               /* Computed Parameter: RXstatus_Y0_ax
                                        * Referenced by: '<S642>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S642>/RX time'
                                        */
  real_T RXdeltatime_Y0_g2;            /* Computed Parameter: RXdeltatime_Y0_g2
                                        * Referenced by: '<S642>/RX delta time'
                                        */
  real_T RX_time_Y0_h;                 /* Computed Parameter: RX_time_Y0_h
                                        * Referenced by: '<S646>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_dt;/* Expression: 0
                                         * Referenced by: '<S646>/Unit_Delay'
                                         */
  real_T Out_Y0_n;                     /* Computed Parameter: Out_Y0_n
                                        * Referenced by: '<S682>/Out'
                                        */
  real_T Out_Y0_m;                     /* Computed Parameter: Out_Y0_m
                                        * Referenced by: '<S683>/Out'
                                        */
  real_T Out_Y0_i;                     /* Computed Parameter: Out_Y0_i
                                        * Referenced by: '<S684>/Out'
                                        */
  real_T Out_Y0_iv;                    /* Computed Parameter: Out_Y0_iv
                                        * Referenced by: '<S685>/Out'
                                        */
  real_T Out_Y0_iv5;                   /* Computed Parameter: Out_Y0_iv5
                                        * Referenced by: '<S686>/Out'
                                        */
  real_T Out_Y0_l;                     /* Computed Parameter: Out_Y0_l
                                        * Referenced by: '<S742>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_g;/* Expression: 0.0
                                          * Referenced by: '<S817>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_ge;           /* Expression: 1
                                        * Referenced by: '<S742>/Constant1'
                                        */
  real_T Out1_Y0_c;                    /* Computed Parameter: Out1_Y0_c
                                        * Referenced by: '<S822>/Out1'
                                        */
  real_T Constant1_Value_k;            /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S822>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_je;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                         * Referenced by: '<S822>/Unit_Delay'
                                         */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S845>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S845>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S845>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S845>/TX delay time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S853>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S853>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S853>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S853>/TX delay time'
                                        */
  real_T TXstatus_Y0_d;                /* Computed Parameter: TXstatus_Y0_d
                                        * Referenced by: '<S865>/TX status'
                                        */
  real_T TXtime_Y0_p;                  /* Computed Parameter: TXtime_Y0_p
                                        * Referenced by: '<S865>/TX time'
                                        */
  real_T TXdeltatime_Y0_l;             /* Computed Parameter: TXdeltatime_Y0_l
                                        * Referenced by: '<S865>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_n;             /* Computed Parameter: TXdelaytime_Y0_n
                                        * Referenced by: '<S865>/TX delay time'
                                        */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S866>/TX status'
                                        */
  real_T TXtime_Y0_h;                  /* Computed Parameter: TXtime_Y0_h
                                        * Referenced by: '<S866>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S866>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S866>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S869>/TX status'
                                        */
  real_T TXtime_Y0_a;                  /* Computed Parameter: TXtime_Y0_a
                                        * Referenced by: '<S869>/TX time'
                                        */
  real_T TXdeltatime_Y0_l1;            /* Computed Parameter: TXdeltatime_Y0_l1
                                        * Referenced by: '<S869>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S869>/TX delay time'
                                        */
  real_T TXstatus_Y0_ck;               /* Computed Parameter: TXstatus_Y0_ck
                                        * Referenced by: '<S870>/TX status'
                                        */
  real_T TXtime_Y0_c;                  /* Computed Parameter: TXtime_Y0_c
                                        * Referenced by: '<S870>/TX time'
                                        */
  real_T TXdeltatime_Y0_f;             /* Computed Parameter: TXdeltatime_Y0_f
                                        * Referenced by: '<S870>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p0;            /* Computed Parameter: TXdelaytime_Y0_p0
                                        * Referenced by: '<S870>/TX delay time'
                                        */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S885>/TX status'
                                        */
  real_T TXtime_Y0_a0;                 /* Computed Parameter: TXtime_Y0_a0
                                        * Referenced by: '<S885>/TX time'
                                        */
  real_T TXdeltatime_Y0_gk;            /* Computed Parameter: TXdeltatime_Y0_gk
                                        * Referenced by: '<S885>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_m;             /* Computed Parameter: TXdelaytime_Y0_m
                                        * Referenced by: '<S885>/TX delay time'
                                        */
  real_T TXstatus_Y0_n;                /* Computed Parameter: TXstatus_Y0_n
                                        * Referenced by: '<S886>/TX status'
                                        */
  real_T TXtime_Y0_pb;                 /* Computed Parameter: TXtime_Y0_pb
                                        * Referenced by: '<S886>/TX time'
                                        */
  real_T TXdeltatime_Y0_l2;            /* Computed Parameter: TXdeltatime_Y0_l2
                                        * Referenced by: '<S886>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S886>/TX delay time'
                                        */
  real_T TXstatus_Y0_do;               /* Computed Parameter: TXstatus_Y0_do
                                        * Referenced by: '<S888>/TX status'
                                        */
  real_T TXtime_Y0_fc;                 /* Computed Parameter: TXtime_Y0_fc
                                        * Referenced by: '<S888>/TX time'
                                        */
  real_T TXdeltatime_Y0_k;             /* Computed Parameter: TXdeltatime_Y0_k
                                        * Referenced by: '<S888>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_mp;            /* Computed Parameter: TXdelaytime_Y0_mp
                                        * Referenced by: '<S888>/TX delay time'
                                        */
  real_T TXstatus_Y0_g;                /* Computed Parameter: TXstatus_Y0_g
                                        * Referenced by: '<S890>/TX status'
                                        */
  real_T TXtime_Y0_i;                  /* Computed Parameter: TXtime_Y0_i
                                        * Referenced by: '<S890>/TX time'
                                        */
  real_T TXdeltatime_Y0_c;             /* Computed Parameter: TXdeltatime_Y0_c
                                        * Referenced by: '<S890>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_c;             /* Computed Parameter: TXdelaytime_Y0_c
                                        * Referenced by: '<S890>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S903>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S911>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_bo;/* Expression: 0
                                         * Referenced by: '<S903>/Unit_Delay'
                                         */
  real_T Constant_Value_hf;            /* Expression: 0
                                        * Referenced by: '<S912>/Constant'
                                        */
  real_T TXstatus_Y0_h;                /* Computed Parameter: TXstatus_Y0_h
                                        * Referenced by: '<S914>/TX status'
                                        */
  real_T TXtime_Y0_i2;                 /* Computed Parameter: TXtime_Y0_i2
                                        * Referenced by: '<S914>/TX time'
                                        */
  real_T TXdeltatime_Y0_cw;            /* Computed Parameter: TXdeltatime_Y0_cw
                                        * Referenced by: '<S914>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h;             /* Computed Parameter: TXdelaytime_Y0_h
                                        * Referenced by: '<S914>/TX delay time'
                                        */
  real_T Constant_Value_ez;            /* Expression: 0
                                        * Referenced by: '<S867>/Constant'
                                        */
  real_T Constant1_Value_eq;           /* Expression: 1
                                        * Referenced by: '<S867>/Constant1'
                                        */
  real_T Constant_Value_ha;            /* Expression: 0
                                        * Referenced by: '<S868>/Constant'
                                        */
  real_T Constant1_Value_ok;           /* Expression: 1
                                        * Referenced by: '<S868>/Constant1'
                                        */
  real_T Constant_Value_ga;            /* Expression: 0
                                        * Referenced by: '<S887>/Constant'
                                        */
  real_T Constant1_Value_mx;           /* Expression: 1
                                        * Referenced by: '<S887>/Constant1'
                                        */
  real_T TXstatus_Y0_cr;               /* Computed Parameter: TXstatus_Y0_cr
                                        * Referenced by: '<S927>/TX status'
                                        */
  real_T TXtime_Y0_j;                  /* Computed Parameter: TXtime_Y0_j
                                        * Referenced by: '<S927>/TX time'
                                        */
  real_T TXdeltatime_Y0_p;             /* Computed Parameter: TXdeltatime_Y0_p
                                        * Referenced by: '<S927>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_b;             /* Computed Parameter: TXdelaytime_Y0_b
                                        * Referenced by: '<S927>/TX delay time'
                                        */
  real_T TXstatus_Y0_jk;               /* Computed Parameter: TXstatus_Y0_jk
                                        * Referenced by: '<S936>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S936>/TX time'
                                        */
  real_T TXdeltatime_Y0_i;             /* Computed Parameter: TXdeltatime_Y0_i
                                        * Referenced by: '<S936>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_hx;            /* Computed Parameter: TXdelaytime_Y0_hx
                                        * Referenced by: '<S936>/TX delay time'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S937>/TX status'
                                        */
  real_T TXtime_Y0_fh;                 /* Computed Parameter: TXtime_Y0_fh
                                        * Referenced by: '<S937>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S937>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i;             /* Computed Parameter: TXdelaytime_Y0_i
                                        * Referenced by: '<S937>/TX delay time'
                                        */
  real_T TXstatus_Y0_dl;               /* Computed Parameter: TXstatus_Y0_dl
                                        * Referenced by: '<S940>/TX status'
                                        */
  real_T TXtime_Y0_c1;                 /* Computed Parameter: TXtime_Y0_c1
                                        * Referenced by: '<S940>/TX time'
                                        */
  real_T TXdeltatime_Y0_lj;            /* Computed Parameter: TXdeltatime_Y0_lj
                                        * Referenced by: '<S940>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_e;             /* Computed Parameter: TXdelaytime_Y0_e
                                        * Referenced by: '<S940>/TX delay time'
                                        */
  real_T TXstatus_Y0_f;                /* Computed Parameter: TXstatus_Y0_f
                                        * Referenced by: '<S941>/TX status'
                                        */
  real_T TXtime_Y0_gc;                 /* Computed Parameter: TXtime_Y0_gc
                                        * Referenced by: '<S941>/TX time'
                                        */
  real_T TXdeltatime_Y0_cg;            /* Computed Parameter: TXdeltatime_Y0_cg
                                        * Referenced by: '<S941>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ii;            /* Computed Parameter: TXdelaytime_Y0_ii
                                        * Referenced by: '<S941>/TX delay time'
                                        */
  real_T TXstatus_Y0_b5;               /* Computed Parameter: TXstatus_Y0_b5
                                        * Referenced by: '<S949>/TX status'
                                        */
  real_T TXtime_Y0_ac;                 /* Computed Parameter: TXtime_Y0_ac
                                        * Referenced by: '<S949>/TX time'
                                        */
  real_T TXdeltatime_Y0_c2;            /* Computed Parameter: TXdeltatime_Y0_c2
                                        * Referenced by: '<S949>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g;             /* Computed Parameter: TXdelaytime_Y0_g
                                        * Referenced by: '<S949>/TX delay time'
                                        */
  real_T zero_Value_d;                 /* Expression: 0
                                        * Referenced by: '<S969>/zero'
                                        */
  real_T Constant_Value_oa;            /* Expression: 8192/360
                                        * Referenced by: '<S980>/Constant'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S938>/Constant'
                                        */
  real_T Constant1_Value_ot;           /* Expression: 1
                                        * Referenced by: '<S938>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S979>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S979>/MN'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S939>/Constant'
                                        */
  real_T Constant1_Value_gz;           /* Expression: 1
                                        * Referenced by: '<S939>/Constant1'
                                        */
  real_T TXstatus_Y0_n4;               /* Computed Parameter: TXstatus_Y0_n4
                                        * Referenced by: '<S994>/TX status'
                                        */
  real_T TXtime_Y0_hz;                 /* Computed Parameter: TXtime_Y0_hz
                                        * Referenced by: '<S994>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S994>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_bg;            /* Computed Parameter: TXdelaytime_Y0_bg
                                        * Referenced by: '<S994>/TX delay time'
                                        */
  real_T TXstatus_Y0_hn;               /* Computed Parameter: TXstatus_Y0_hn
                                        * Referenced by: '<S996>/TX status'
                                        */
  real_T TXtime_Y0_k;                  /* Computed Parameter: TXtime_Y0_k
                                        * Referenced by: '<S996>/TX time'
                                        */
  real_T TXdeltatime_Y0_ix;            /* Computed Parameter: TXdeltatime_Y0_ix
                                        * Referenced by: '<S996>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S996>/TX delay time'
                                        */
  real_T TXstatus_Y0_jm;               /* Computed Parameter: TXstatus_Y0_jm
                                        * Referenced by: '<S1004>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S1004>/TX time'
                                        */
  real_T TXdeltatime_Y0_j;             /* Computed Parameter: TXdeltatime_Y0_j
                                        * Referenced by: '<S1004>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_co;            /* Computed Parameter: TXdelaytime_Y0_co
                                        * Referenced by: '<S1004>/TX delay time'
                                        */
  real_T Constant4_Value_f;            /* Expression: 0
                                        * Referenced by: '<S990>/Constant4'
                                        */
  real_T Constant2_Value_e;            /* Expression: -15.687
                                        * Referenced by: '<S990>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S990>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S990>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S990>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S990>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S990>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S830>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S989>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_el;       /* Expression: 1
                                        * Referenced by: '<S989>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S989>/Saturation'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 100
                                        * Referenced by: '<S989>/Gain'
                                        */
  real_T Gain_Gain_mt;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1006>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S989>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S989>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S989>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_e;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1006>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S990>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S990>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_fa;               /* Computed Parameter: TXstatus_Y0_fa
                                        * Referenced by: '<S1020>/TX status'
                                        */
  real_T TXtime_Y0_gt;                 /* Computed Parameter: TXtime_Y0_gt
                                        * Referenced by: '<S1020>/TX time'
                                        */
  real_T TXdeltatime_Y0_lv;            /* Computed Parameter: TXdeltatime_Y0_lv
                                        * Referenced by: '<S1020>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_in;            /* Computed Parameter: TXdelaytime_Y0_in
                                        * Referenced by: '<S1020>/TX delay time'
                                        */
  real_T TXstatus_Y0_gz;               /* Computed Parameter: TXstatus_Y0_gz
                                        * Referenced by: '<S1031>/TX status'
                                        */
  real_T TXtime_Y0_cz;                 /* Computed Parameter: TXtime_Y0_cz
                                        * Referenced by: '<S1031>/TX time'
                                        */
  real_T TXdeltatime_Y0_be;            /* Computed Parameter: TXdeltatime_Y0_be
                                        * Referenced by: '<S1031>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_on;            /* Computed Parameter: TXdelaytime_Y0_on
                                        * Referenced by: '<S1031>/TX delay time'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S1032>/TX status'
                                        */
  real_T TXtime_Y0_d;                  /* Computed Parameter: TXtime_Y0_d
                                        * Referenced by: '<S1032>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S1032>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kk;            /* Computed Parameter: TXdelaytime_Y0_kk
                                        * Referenced by: '<S1032>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S833>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_p;                /* Computed Parameter: TXstatus_Y0_p
                                        * Referenced by: '<S1039>/TX status'
                                        */
  real_T TXtime_Y0_n3;                 /* Computed Parameter: TXtime_Y0_n3
                                        * Referenced by: '<S1039>/TX time'
                                        */
  real_T TXdeltatime_Y0_p3;            /* Computed Parameter: TXdeltatime_Y0_p3
                                        * Referenced by: '<S1039>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_lv;            /* Computed Parameter: TXdelaytime_Y0_lv
                                        * Referenced by: '<S1039>/TX delay time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S1040>/TX status'
                                        */
  real_T TXtime_Y0_e;                  /* Computed Parameter: TXtime_Y0_e
                                        * Referenced by: '<S1040>/TX time'
                                        */
  real_T TXdeltatime_Y0_jt;            /* Computed Parameter: TXdeltatime_Y0_jt
                                        * Referenced by: '<S1040>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_a;             /* Computed Parameter: TXdelaytime_Y0_a
                                        * Referenced by: '<S1040>/TX delay time'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S1044>/TX status'
                                        */
  real_T TXtime_Y0_jg;                 /* Computed Parameter: TXtime_Y0_jg
                                        * Referenced by: '<S1044>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S1044>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i4;            /* Computed Parameter: TXdelaytime_Y0_i4
                                        * Referenced by: '<S1044>/TX delay time'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S738>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S738>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S738>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_oj;/* Expression: 0.0
                                          * Referenced by: '<S771>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_d;        /* Expression: 1
                                        * Referenced by: '<S767>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_g;        /* Expression: 1
                                        * Referenced by: '<S770>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S738>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S738>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_lw;                 /* Expression: 100
                                        * Referenced by: '<S411>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S738>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S738>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_n;/* Expression: 0.0
                                          * Referenced by: '<S763>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_o;        /* Expression: 1
                                        * Referenced by: '<S759>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_o2;       /* Expression: 1
                                        * Referenced by: '<S762>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S738>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S738>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S738>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S738>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_hj;/* Expression: 0.0
                                          * Referenced by: '<S787>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_i;        /* Expression: 1
                                        * Referenced by: '<S783>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_de;       /* Expression: 1
                                        * Referenced by: '<S786>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S738>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S738>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 100
                                        * Referenced by: '<S411>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S738>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S738>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_e;/* Expression: 0.0
                                          * Referenced by: '<S779>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_ik;       /* Expression: 1
                                        * Referenced by: '<S775>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_b;        /* Expression: 1
                                        * Referenced by: '<S778>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S738>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S738>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S738>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S741>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S741>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_k;        /* Expression: Inf
                                        * Referenced by: '<S808>/Saturation'
                                        */
  real_T Saturation_LowerSat_gy;       /* Expression: 0.0001
                                        * Referenced by: '<S808>/Saturation'
                                        */
  real_T Constant1_Value_gf;           /* Expression: 1
                                        * Referenced by: '<S808>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_n;/* Expression: 0
                                         * Referenced by: '<S808>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S741>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S741>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S741>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S741>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_df;       /* Expression: Inf
                                        * Referenced by: '<S809>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: 0.0001
                                        * Referenced by: '<S809>/Saturation'
                                        */
  real_T Constant1_Value_el;           /* Expression: 1
                                        * Referenced by: '<S809>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_k;/* Expression: 0
                                         * Referenced by: '<S809>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S741>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S741>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S735>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_eg;/* Expression: 0.0
                                          * Referenced by: '<S807>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondit_k;/* Expression: 0.0
                                          * Referenced by: '<S806>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S743>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S743>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S738>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S738>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_gy;/* Expression: 0.0
                                          * Referenced by: '<S795>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_m;        /* Expression: 1
                                        * Referenced by: '<S791>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_mk;       /* Expression: 1
                                        * Referenced by: '<S794>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_p;/* Expression: 25
                                          * Referenced by: '<S735>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_m;/* Expression: 25
                                          * Referenced by: '<S735>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S735>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S411>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S412>/Rate Transition'
                                          */
  real_T Constant_Value_dq;            /* Expression: 1
                                        * Referenced by: '<S445>/Constant'
                                        */
  real_T Constant_Value_gz;            /* Expression: 1
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
  real_T Unit_Delay_139_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  real_T Unit_Delay_138_InitialCondition;/* Expression: 0
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
  real_T Constant_Value_dn;            /* Expression: 0
                                        * Referenced by: '<S443>/Constant'
                                        */
  real_T Constant_Value_az;            /* Expression: 1
                                        * Referenced by: '<S426>/Constant'
                                        */
  real_T Constant_Value_cy;            /* Expression: 1
                                        * Referenced by: '<S449>/Constant'
                                        */
  real_T Constant_Value_o2;            /* Expression: 0
                                        * Referenced by: '<S1042>/Constant'
                                        */
  real_T Constant1_Value_o3;           /* Expression: 1
                                        * Referenced by: '<S1042>/Constant1'
                                        */
  real_T TmpRTBAtANDInport1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_n5;           /* Expression: 1
                                        * Referenced by: '<S825>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1051>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_d;            /* Expression: 0.001
                                        * Referenced by: '<S825>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1051>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1051>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_dm;                /* Expression: 0.01
                                        * Referenced by: '<S825>/Gain1'
                                        */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S825>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1051>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_bm;           /* Expression: 0.001
                                        * Referenced by: '<S825>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1051>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1051>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_lp;                 /* Expression: 0.01
                                        * Referenced by: '<S825>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S411>/ShifterControlDC'
                                        */
  real_T Constant_Value_av;            /* Expression: .4
                                        * Referenced by: '<S1052>/Constant'
                                        */
  real_T Constant1_Value_c4;           /* Expression: 0.5
                                        * Referenced by: '<S1052>/Constant1'
                                        */
  real_T Constant_Value_pl;            /* Expression: 0
                                        * Referenced by: '<S1058>/Constant'
                                        */
  real_T Constant_Value_n1;            /* Expression: 0
                                        * Referenced by: '<S1059>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1053>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1053>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1053>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1053>/Flash'
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
  real_T Constant_Value_a1;            /* Expression: 0.125
                                        * Referenced by: '<S521>/Constant'
                                        */
  real_T Constant_Value_gc;            /* Expression: -125
                                        * Referenced by: '<S528>/Constant'
                                        */
  real_T Constant_Value_gu;            /* Expression: 0.125
                                        * Referenced by: '<S525>/Constant'
                                        */
  real_T Constant_Value_hd;            /* Expression: 1/1280
                                        * Referenced by: '<S526>/Constant'
                                        */
  real_T Constant_Value_ar;            /* Expression: 0.125
                                        * Referenced by: '<S529>/Constant'
                                        */
  real_T Constant_Value_kl;            /* Expression: 0.1
                                        * Referenced by: '<S530>/Constant'
                                        */
  real_T Constant_Value_pt;            /* Expression: 10
                                        * Referenced by: '<S531>/Constant'
                                        */
  real_T Constant_Value_kz;            /* Expression: 10
                                        * Referenced by: '<S532>/Constant'
                                        */
  real_T Constant_Value_n3;            /* Expression: -125
                                        * Referenced by: '<S533>/Constant'
                                        */
  real_T Constant_Value_hs;            /* Expression: -125
                                        * Referenced by: '<S534>/Constant'
                                        */
  real_T Constant_Value_ow;            /* Expression: 0.125
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Constant_Value_bu;            /* Expression: 0.125
                                        * Referenced by: '<S543>/Constant'
                                        */
  real_T Constant_Value_f3;            /* Expression: 0.004
                                        * Referenced by: '<S536>/Constant'
                                        */
  real_T Constant_Value_fm;            /* Expression: -125
                                        * Referenced by: '<S544>/Constant'
                                        */
  real_T Constant_Value_bo;            /* Expression: 0.125
                                        * Referenced by: '<S545>/Constant'
                                        */
  real_T Constant_Value_cs;            /* Expression: -125
                                        * Referenced by: '<S546>/Constant'
                                        */
  real_T Constant_Value_lp;            /* Expression: 0.125
                                        * Referenced by: '<S547>/Constant'
                                        */
  real_T Constant_Value_fj;            /* Expression: -125
                                        * Referenced by: '<S522>/Constant'
                                        */
  real_T Constant_Value_e2;            /* Expression: 0.125
                                        * Referenced by: '<S523>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: -125
                                        * Referenced by: '<S524>/Constant'
                                        */
  real_T Constant_Value_lx;            /* Expression: 1
                                        * Referenced by: '<S422>/Constant'
                                        */
  real_T Constant_Value_at;            /* Expression: 1
                                        * Referenced by: '<S453>/Constant'
                                        */
  real_T Constant2_Value_f;            /* Expression: 1
                                        * Referenced by: '<S410>/Constant2'
                                        */
  real_T Constant_Value_du;            /* Expression: 1/1024
                                        * Referenced by: '<S663>/Constant'
                                        */
  real_T Constant1_Value_pk;           /* Expression: 1/1024
                                        * Referenced by: '<S664>/Constant1'
                                        */
  real_T Constant2_Value_i;            /* Expression: 360/8192
                                        * Referenced by: '<S665>/Constant2'
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
  ENUM_CAN_RX_T Constant_Value_hw;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S416>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_lw;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S471>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_ek;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S417>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_ko;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S480>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_pm;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S653>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant_Value_b0;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S653>/Constant'
                                        */
  ENUM_CAN_RX_T Constant2_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S653>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S653>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S653>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_bi;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S653>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_c3;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S471>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_n5;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S471>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_lh;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S471>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S471>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_n;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S471>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_ke;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S480>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_gm;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S480>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_dw;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S480>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S480>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S480>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_cw;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S606>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S606>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_pc;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S606>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S606>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S606>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S606>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_ev;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S580>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_d;     /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S580>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_d;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S580>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_hx;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S580>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S580>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S580>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant_Value_js;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S593>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_f4;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S593>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_cd;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S593>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_i2;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S593>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_gk;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S593>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_d;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
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
  ENUM_CAN_STATUS_DIAG_T Constant3_Value_h;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant3'
                                            */
  ENUM_CAN_STATUS_DIAG_T Constant2_Value_j;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant2'
                                            */
  ENUM_CAN_TX_T Constant2_Value_fq;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S827>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_dm;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S827>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S828>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S829>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S829>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S829>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S830>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_eu;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S952>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_m0;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S952>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_j3;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                 * Referenced by: '<S952>/Constant2'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_o;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                * Referenced by: '<S952>/Constant3'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_ku;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                 * Referenced by: '<S952>/Constant4'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_h;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                * Referenced by: '<S952>/Constant5'
                                                */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S98>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S98>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S990>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S990>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S990>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_l;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S990>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_f;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S990>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_o;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S990>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_g;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S990>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_j;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                     * Referenced by: '<S990>/Constant10'
                                                     */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S990>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S990>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S990>/XBRPriority'
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
                                                                  * Referenced by: '<S828>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S828>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S828>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S828>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S952>/Merge'
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
  uint32_T Operator_BitMask_lf;        /* Expression: BitMask
                                        * Referenced by: '<S906>/Operator'
                                        */
  uint32_T Operator_BitMask_pd;        /* Expression: BitMask
                                        * Referenced by: '<S907>/Operator'
                                        */
  uint32_T Operator_BitMask_p2;        /* Expression: BitMask
                                        * Referenced by: '<S908>/Operator'
                                        */
  uint32_T Operator_BitMask_pn;        /* Expression: BitMask
                                        * Referenced by: '<S909>/Operator'
                                        */
  uint32_T Constant_Value_pu;          /* Computed Parameter: Constant_Value_pu
                                        * Referenced by: '<S982>/Constant'
                                        */
  uint32_T Operator_BitMask_mz;        /* Expression: BitMask
                                        * Referenced by: '<S956>/Operator'
                                        */
  uint32_T Operator_BitMask_gn;        /* Expression: BitMask
                                        * Referenced by: '<S957>/Operator'
                                        */
  uint32_T Operator_BitMask_ii;        /* Expression: BitMask
                                        * Referenced by: '<S958>/Operator'
                                        */
  uint32_T Operator_BitMask_ju;        /* Expression: BitMask
                                        * Referenced by: '<S959>/Operator'
                                        */
  uint32_T IV_Value_l;                 /* Computed Parameter: IV_Value_l
                                        * Referenced by: '<S982>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_a;/* Computed Parameter: UnitDelay_InitialCondition_a
                                         * Referenced by: '<S982>/Unit Delay'
                                         */
  uint32_T Operator_BitMask_bn;        /* Expression: BitMask
                                        * Referenced by: '<S960>/Operator'
                                        */
  uint32_T Operator_BitMask_lnv;       /* Expression: BitMask
                                        * Referenced by: '<S961>/Operator'
                                        */
  uint32_T Operator_BitMask_jl;        /* Expression: BitMask
                                        * Referenced by: '<S962>/Operator'
                                        */
  uint32_T Operator_BitMask_cv;        /* Expression: BitMask
                                        * Referenced by: '<S963>/Operator'
                                        */
  uint32_T Constant_Value_pc;          /* Computed Parameter: Constant_Value_pc
                                        * Referenced by: '<S1010>/Constant'
                                        */
  uint32_T IV_Value_a;                 /* Computed Parameter: IV_Value_a
                                        * Referenced by: '<S1010>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_nl;/* Computed Parameter: UnitDelay_InitialCondition_nl
                                          * Referenced by: '<S1010>/Unit Delay'
                                          */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_c0;          /* Computed Parameter: Constant_Value_c0
                                        * Referenced by: '<S1025>/Constant'
                                        */
  uint32_T IV_Value_bj;                /* Computed Parameter: IV_Value_bj
                                        * Referenced by: '<S1025>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_o;/* Computed Parameter: UnitDelay_InitialCondition_o
                                         * Referenced by: '<S1025>/Unit Delay'
                                         */
  uint32_T Operator_BitMask_au;        /* Expression: BitMask
                                        * Referenced by: '<S1021>/Operator'
                                        */
  uint32_T Operator_BitMask_as;        /* Expression: BitMask
                                        * Referenced by: '<S1022>/Operator'
                                        */
  uint32_T Operator_BitMask_fc;        /* Expression: BitMask
                                        * Referenced by: '<S1023>/Operator'
                                        */
  uint32_T Constant2_Value_mx;         /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S431>/Constant2'
                                        */
  uint32_T Constant2_Value_js;         /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S454>/Constant2'
                                        */
  int16_T Constant_Value_bq;           /* Expression: int16(512)
                                        * Referenced by: '<S859>/Constant'
                                        */
  uint16_T Operator_BitMask_hh;        /* Expression: BitMask
                                        * Referenced by: '<S891>/Operator'
                                        */
  uint16_T Operator_BitMask_ad;        /* Expression: BitMask
                                        * Referenced by: '<S892>/Operator'
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
  boolean_T Unit_Delay_InitialCondition_bo2;/* Computed Parameter: Unit_Delay_InitialCondition_bo2
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
  boolean_T Unit_Delay_InitialCondition_g;/* Expression: true
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
  boolean_T Constant_Value_pum;        /* Expression: false
                                        * Referenced by: '<S345>/Constant'
                                        */
  boolean_T Constant_Value_am;         /* Expression: false
                                        * Referenced by: '<S373>/Constant'
                                        */
  boolean_T Constant_Value_c1;         /* Expression: false
                                        * Referenced by: '<S384>/Constant'
                                        */
  boolean_T Constant3_Value_f;         /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S396>/Constant3'
                                        */
  boolean_T Constant2_Value_eu;        /* Computed Parameter: Constant2_Value_eu
                                        * Referenced by: '<S396>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S515>/RX_status'
                                        */
  boolean_T RX_status_Y0_f;            /* Computed Parameter: RX_status_Y0_f
                                        * Referenced by: '<S643>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_d;        /* Expression: false
                                        * Referenced by: '<S742>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_o4;/* Expression: true
                                            * Referenced by: '<S813>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_lk;/* Expression: true
                                            * Referenced by: '<S814>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_om;/* Expression: false
                                            * Referenced by: '<S812>/Unit_Delay'
                                            */
  boolean_T Constant_Value_iu3;        /* Expression: false
                                        * Referenced by: '<S814>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S736>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S900>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S900>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S828>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S854>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S828>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S828>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_lj;                /* Expression: true
                                        * Referenced by: '<S982>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_bw;/* Computed Parameter: Unit_Delay_InitialCondition_bw
                                            * Referenced by: '<S981>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_k;  /* Expression: boolean(0)
                                        * Referenced by: '<S950>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_c;          /* Expression: boolean(0)
                                        * Referenced by: '<S950>/DataPage'
                                        */
  boolean_T E_Value_mt;                /* Expression: true
                                        * Referenced by: '<S1010>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S990>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_d2;/* Expression: false
                                            * Referenced by: '<S986>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S989>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_jf;/* Computed Parameter: Unit_Delay_InitialCondition_jf
                                            * Referenced by: '<S1009>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_p;  /* Expression: boolean(0)
                                        * Referenced by: '<S1005>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_l;          /* Expression: boolean(0)
                                        * Referenced by: '<S1005>/DataPage'
                                        */
  boolean_T CPV_Value_f;               /* Expression: true
                                        * Referenced by: '<S989>/CPV'
                                        */
  boolean_T E_Value_e;                 /* Expression: true
                                        * Referenced by: '<S1025>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S1015>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_hb;/* Computed Parameter: Unit_Delay_InitialCondition_hb
                                            * Referenced by: '<S1024>/Unit_Delay'
                                            */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1030>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_nb;         /* Expression: boolean(1)
                                        * Referenced by: '<S420>/Constant'
                                        */
  boolean_T Constant_Value_m5;         /* Expression: boolean(1)
                                        * Referenced by: '<S421>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_bn;/* Expression: true
                                            * Referenced by: '<S741>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ja;/* Expression: true
                                             * Referenced by: '<S808>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_e;/* Expression: true
                                            * Referenced by: '<S741>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_d;/* Expression: true
                                            * Referenced by: '<S809>/Unit_Delay1'
                                            */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S735>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_gx;         /* Expression: boolean(1)
                                        * Referenced by: '<S425>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S430>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S437>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_f4e;       /* Expression: boolean(1)
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
  boolean_T Constant_Value_hp;         /* Expression: boolean(1)
                                        * Referenced by: '<S427>/Constant'
                                        */
  boolean_T Constant_Value_bm;         /* Expression: boolean(1)
                                        * Referenced by: '<S418>/Constant'
                                        */
  boolean_T Constant_Value_dus;        /* Expression: boolean(1)
                                        * Referenced by: '<S451>/Constant'
                                        */
  boolean_T Constant_Value_fb;         /* Expression: boolean(1)
                                        * Referenced by: '<S452>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S644>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_d5;/* Expression: true
                                            * Referenced by: '<S644>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_g4;/* Expression: false
                                            * Referenced by: '<S650>/Unit_Delay'
                                            */
  boolean_T Constant_Value_pe;         /* Expression: boolean(0)
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
  boolean_T Constant_Value_lb;         /* Expression: boolean(1)
                                        * Referenced by: '<S424>/Constant'
                                        */
  boolean_T Constant_Value_fp;         /* Expression: boolean(1)
                                        * Referenced by: '<S450>/Constant'
                                        */
  boolean_T Constant_Value_lu;         /* Computed Parameter: Constant_Value_lu
                                        * Referenced by: '<S1041>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S834>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S834>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1052>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_ml;        /* Expression: false
                                        * Referenced by: '<S1052>/Constant2'
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
  boolean_T Constant_Value_km;         /* Expression: boolean(1)
                                        * Referenced by: '<S419>/Constant'
                                        */
  boolean_T Constant_Value_aa;         /* Expression: boolean(0)
                                        * Referenced by: '<S423>/Constant'
                                        */
  boolean_T Constant1_Value_nx;        /* Expression: boolean(1)
                                        * Referenced by: '<S428>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S433>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S446>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_g;/* Expression: boolean(0)
                                             * Referenced by: '<S447>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_bp;         /* Expression: boolean(0)
                                        * Referenced by: '<S448>/Constant'
                                        */
  boolean_T Constant_Value_kzo;        /* Expression: false
                                        * Referenced by: '<S644>/Constant'
                                        */
  boolean_T Constant1_Value_ef;        /* Expression: false
                                        * Referenced by: '<S644>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_e;/* Expression: true
                                            * Referenced by: '<S644>/Unit_Delay2'
                                            */
  boolean_T Unit_Delay1_InitialCondition_d1;/* Expression: true
                                             * Referenced by: '<S644>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay_InitialCondition_ko;/* Expression: false
                                            * Referenced by: '<S651>/Unit_Delay'
                                            */
  boolean_T Constant_Value_er;         /* Expression: false
                                        * Referenced by: '<S741>/Constant'
                                        */
  boolean_T Constant_Value_ng;         /* Expression: false
                                        * Referenced by: '<S808>/Constant'
                                        */
  boolean_T Constant1_Value_fc;        /* Expression: false
                                        * Referenced by: '<S741>/Constant1'
                                        */
  boolean_T Constant_Value_l2;         /* Expression: false
                                        * Referenced by: '<S809>/Constant'
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
  uint8_T FixPtConstant_Value_e;       /* Computed Parameter: FixPtConstant_Value_e
                                        * Referenced by: '<S368>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_p;       /* Computed Parameter: FixPtConstant_Value_p
                                        * Referenced by: '<S367>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_dx;      /* Computed Parameter: FixPtConstant_Value_dx
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
  uint8_T UnitDelay_InitialCondition_ai[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                             * Referenced by: '<S515>/Unit Delay'
                                             */
  uint8_T RawData_Y0_c;                /* Computed Parameter: RawData_Y0_c
                                        * Referenced by: '<S646>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_mk[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                             * Referenced by: '<S643>/Unit Delay'
                                             */
  uint8_T FixPtUnitDelay2_InitialCondi_au;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_au
                                           * Referenced by: '<S817>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_h;       /* Computed Parameter: FixPtConstant_Value_h
                                        * Referenced by: '<S817>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_ny;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S861>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S900>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S900>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S900>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S900>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_cb;         /* Expression: BitMask
                                        * Referenced by: '<S905>/Operator'
                                        */
  uint8_T Operator_BitMask_kol;        /* Expression: BitMask
                                        * Referenced by: '<S904>/Operator'
                                        */
  uint8_T Constant_Value_hy;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S860>/Constant'
                                        */
  uint8_T Constant1_Value_jz;          /* Expression: uint8(0)
                                        * Referenced by: '<S953>/Constant1'
                                        */
  uint8_T Constant_Value_ly;           /* Expression: uint8(1)
                                        * Referenced by: '<S953>/Constant'
                                        */
  uint8_T Constant_Value_f5;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S951>/Constant'
                                        */
  uint8_T Constant1_Value_h1;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S951>/Constant1'
                                        */
  uint8_T Operator_BitMask_hj;         /* Expression: BitMask
                                        * Referenced by: '<S964>/Operator'
                                        */
  uint8_T Priority_Value_d;            /* Expression: uint8(6)
                                        * Referenced by: '<S950>/Priority'
                                        */
  uint8_T PDUFormat_Value_e;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S950>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_a;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S950>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_k;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S950>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_eb;         /* Expression: BitMask
                                        * Referenced by: '<S965>/Operator'
                                        */
  uint8_T Constant2_Value_k;           /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S1006>/Constant2'
                                        */
  uint8_T Constant3_Value_b;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1006>/Constant3'
                                        */
  uint8_T Constant4_Value_e4;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1006>/Constant4'
                                        */
  uint8_T Constant_Value_bhk;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1006>/Constant'
                                        */
  uint8_T Constant1_Value_fj;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1006>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_f;            /* Expression: uint8(3)
                                        * Referenced by: '<S1005>/Priority'
                                        */
  uint8_T PDUFormat_Value_et;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1005>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_p;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S1005>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_b;       /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S1005>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1006>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1036>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1036>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1036>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1036>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1036>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1036>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1036>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1036>/Byte1'
                                        */
  uint8_T Byte8_Value_c;               /* Expression: uint8('N')
                                        * Referenced by: '<S1035>/Byte8'
                                        */
  uint8_T Byte7_Value_n;               /* Expression: uint8('R')
                                        * Referenced by: '<S1035>/Byte7'
                                        */
  uint8_T Byte6_Value_e;               /* Expression: uint8('*')
                                        * Referenced by: '<S1035>/Byte6'
                                        */
  uint8_T Byte5_Value_n;               /* Expression: uint8('R')
                                        * Referenced by: '<S1035>/Byte5'
                                        */
  uint8_T Byte4_Value_k;               /* Expression: uint8('A')
                                        * Referenced by: '<S1035>/Byte4'
                                        */
  uint8_T Byte3_Value_n;               /* Expression: uint8('C')
                                        * Referenced by: '<S1035>/Byte3'
                                        */
  uint8_T Byte2_Value_e;               /* Expression: uint8('P')
                                        * Referenced by: '<S1035>/Byte2'
                                        */
  uint8_T Byte1_Value_l;               /* Computed Parameter: Byte1_Value_l
                                        * Referenced by: '<S1035>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_d;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_d
                                           * Referenced by: '<S771>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_b;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_b
                                           * Referenced by: '<S763>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_gw;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_gw
                                           * Referenced by: '<S787>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pb;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pb
                                           * Referenced by: '<S779>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_o;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_o
                                           * Referenced by: '<S807>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_g1;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_g1
                                           * Referenced by: '<S806>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_io;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_io
                                           * Referenced by: '<S795>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_m;           /* Expression: uint8(32)
                                        * Referenced by: '<S464>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S644>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_jx;           /* Computed Parameter: Constant_Value_jx
                                        * Referenced by: '<S648>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Byte1_Value_o;               /* Computed Parameter: Byte1_Value_o
                                        * Referenced by: '<S1033>/Byte1'
                                        */
  uint8_T Byte2_Value_o;               /* Computed Parameter: Byte2_Value_o
                                        * Referenced by: '<S1033>/Byte2'
                                        */
  uint8_T Byte3_Value_m;               /* Computed Parameter: Byte3_Value_m
                                        * Referenced by: '<S1033>/Byte3'
                                        */
  uint8_T Byte4_Value_f;               /* Computed Parameter: Byte4_Value_f
                                        * Referenced by: '<S1033>/Byte4'
                                        */
  uint8_T Byte5_Value_g;               /* Computed Parameter: Byte5_Value_g
                                        * Referenced by: '<S1033>/Byte5'
                                        */
  uint8_T Byte6_Value_f;               /* Computed Parameter: Byte6_Value_f
                                        * Referenced by: '<S1033>/Byte6'
                                        */
  uint8_T Byte7_Value_c;               /* Computed Parameter: Byte7_Value_c
                                        * Referenced by: '<S1033>/Byte7'
                                        */
  uint8_T Byte8_Value_i;               /* Computed Parameter: Byte8_Value_i
                                        * Referenced by: '<S1033>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_po;/* Computed Parameter: UnitDelay1_InitialCondition_po
                                          * Referenced by: '<S834>/Unit Delay1'
                                          */
  uint8_T Constant1_Value_dn;          /* Computed Parameter: Constant1_Value_dn
                                        * Referenced by: '<S834>/Constant1'
                                        */
  uint8_T Constant2_Value_o;           /* Computed Parameter: Constant2_Value_o
                                        * Referenced by: '<S1053>/Constant2'
                                        */
  uint8_T Constant3_Value_iu;          /* Computed Parameter: Constant3_Value_iu
                                        * Referenced by: '<S1053>/Constant3'
                                        */
  uint8_T Unit_Delay_135_InitialCondition;/* Computed Parameter: Unit_Delay_135_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S644>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_fn;           /* Computed Parameter: Constant_Value_fn
                                        * Referenced by: '<S649>/Constant'
                                        */
  uint8_T Constant_Value_bb;           /* Expression: uint8(16)
                                        * Referenced by: '<S464>/Constant'
                                        */
  uint8_T Constant1_Value_a0;          /* Expression: uint8(17)
                                        * Referenced by: '<S464>/Constant1'
                                        */
  uint8_T Constant2_Value_jh;          /* Expression: uint8(19)
                                        * Referenced by: '<S464>/Constant2'
                                        */
  uint8_T Constant4_Value_io;          /* Expression: uint8(255)
                                        * Referenced by: '<S464>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_du;      /* Computed Parameter: FixPtConstant_Value_du
                                        * Referenced by: '<S763>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_kf;      /* Computed Parameter: FixPtConstant_Value_kf
                                        * Referenced by: '<S771>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_f3;      /* Computed Parameter: FixPtConstant_Value_f3
                                        * Referenced by: '<S779>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_bo;      /* Computed Parameter: FixPtConstant_Value_bo
                                        * Referenced by: '<S787>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_hi;      /* Computed Parameter: FixPtConstant_Value_hi
                                        * Referenced by: '<S795>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_ma;      /* Computed Parameter: FixPtConstant_Value_ma
                                        * Referenced by: '<S806>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_kl;      /* Computed Parameter: FixPtConstant_Value_kl
                                        * Referenced by: '<S807>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S952>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S952>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S952>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S952>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S952>/ALL_CTRL_DISABLED' */
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
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1066>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S411>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S736>/Switch' */
extern boolean_T Heartbeat_Ok;         /* '<S396>/Switch1' */
extern boolean_T RTMapsOk;             /* '<S391>/AND' */
extern boolean_T EngagePB;             /* '<S411>/Logical Operator' */
extern boolean_T AutonomousEnabled;    /* '<S76>/AND' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T RateLimiterActive;    /* '<S313>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S740>/Switch' */

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
                                                    * Referenced by: '<S969>/Constant7'
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
                                                                      * Referenced by: '<S952>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S969>/Constant1'
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
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S804>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S805>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S806>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S807>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S808>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S809>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S810>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S811>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S812>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S813>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S814>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S815>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S816>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S817>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S818>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S819>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S820>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S821>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S822>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S823>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S824>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S825>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S826>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S827>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S828>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S829>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S830>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S831>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S832>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S833>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S834>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S835>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S836>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S837>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S838>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S839>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S840>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S841>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S842>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S843>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S844>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S845>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S846>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S847>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S848>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S849>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S850>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S851>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S852>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S853>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S854>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1043>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1044>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1045>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1046>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1047>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL3'
 * '<S1048>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL4'
 * '<S1049>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1050>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1051>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1052>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1053>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1054>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1055>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1056>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1057>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1058>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1059>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1060>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1061>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1062>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1063>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1064>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1065>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1066>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
