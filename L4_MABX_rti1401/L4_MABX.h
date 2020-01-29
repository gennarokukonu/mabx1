/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.891
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Tue Jan 28 12:27:43 2020
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

/* Block signals for system '<S114>/Calculate_D_term' */
typedef struct {
  real_T MinMax1;                      /* '<S123>/MinMax1' */
  real_T Saturation;                   /* '<S123>/Saturation' */
  real_T Divide;                       /* '<S123>/Divide' */
  real_T Product2;                     /* '<S123>/Product2' */
  real_T Subtract1;                    /* '<S123>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S123>/Unit_Delay2' */
  real_T Product1;                     /* '<S123>/Product1' */
  real_T Add1;                         /* '<S123>/Add1' */
  real_T Divide_k;                     /* '<S118>/Divide' */
  real_T Xold;                         /* '<S124>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S124>/Init' */
  real_T Subtract;                     /* '<S118>/Subtract' */
  real_T Xnew;                         /* '<S124>/Reset' */
  uint8_T FixPtUnitDelay2;             /* '<S124>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S124>/FixPt Logical Operator' */
  boolean_T Unit_Delay1;               /* '<S123>/Unit_Delay1' */
  boolean_T LogicalOperator;           /* '<S123>/Logical Operator' */
  B_If_Then_Else_L4_MABX_T If_Then_Else;/* '<S123>/If_Then_Else' */
} B_Calculate_D_term_L4_MABX_T;

/* Block states (default storage) for system '<S114>/Calculate_D_term' */
typedef struct {
  real_T Unit_Delay2_DSTATE;           /* '<S123>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE;       /* '<S124>/FixPt Unit Delay1' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S124>/FixPt Unit Delay2' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S123>/Unit_Delay1' */
  boolean_T Calculate_D_term_MODE;     /* '<S114>/Calculate_D_term' */
} DW_Calculate_D_term_L4_MABX_T;

/* Block signals for system '<S128>/If_Then_Else3' */
typedef struct {
  boolean_T Switch;                    /* '<S136>/Switch' */
} B_If_Then_Else_L4_MABX_c_T;

/* Block signals for system '<S114>/Calculate_I_term' */
typedef struct {
  real_T Xold;                         /* '<S130>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S130>/Init' */
  real_T Product1;                     /* '<S126>/Product1' */
  real_T Add;                          /* '<S126>/Add' */
  real_T Unit_Delay;                   /* '<S119>/Unit_Delay' */
  real_T Product;                      /* '<S128>/Product' */
  real_T Subtract;                     /* '<S128>/Subtract' */
  real_T Subtract1;                    /* '<S128>/Subtract1' */
  real_T Xnew;                         /* '<S130>/Reset' */
  real_T Product_j;                    /* '<S127>/Product' */
  real_T Subtract_g;                   /* '<S127>/Subtract' */
  real_T Subtract1_k;                  /* '<S127>/Subtract1' */
  real_T Subtract2;                    /* '<S127>/Subtract2' */
  uint8_T FixPtUnitDelay2;             /* '<S130>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S130>/FixPt Logical Operator' */
  boolean_T Compare;                   /* '<S131>/Compare' */
  boolean_T Compare_n;                 /* '<S132>/Compare' */
  boolean_T RelationalOperator1;       /* '<S128>/Relational Operator1' */
  boolean_T RelationalOperator2;       /* '<S128>/Relational Operator2' */
  boolean_T LogicalOperator1;          /* '<S128>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S128>/Logical Operator2' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else3;/* '<S128>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S128>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S128>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S128>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else;/* '<S126>/If_Then_Else' */
} B_Calculate_I_term_L4_MABX_T;

/* Block states (default storage) for system '<S114>/Calculate_I_term' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S130>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE;            /* '<S119>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S130>/FixPt Unit Delay2' */
  boolean_T Calculate_I_term_MODE;     /* '<S114>/Calculate_I_term' */
} DW_Calculate_I_term_L4_MABX_T;

/* Block signals for system '<S106>/If_Then_Else' */
typedef struct {
  boolean_T Switch;                    /* '<S184>/Switch' */
} B_If_Then_Else_L4_MABX_m_T;

/* Block signals for system '<S185>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S187>/Switch' */
} B_If_Then_Else_L4_MABX_k_T;

/* Block signals for system '<S312>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S322>/Switch' */
} B_If_Then_Else_L4_MABX_mf_T;

/* Block signals for system '<S352>/If_Then_Else' */
typedef struct {
  real_T Vehicle_speed_target;         /* '<S354>/Switch' */
  real_T Vehicle_speed;                /* '<S354>/Switch' */
  real_T Distance_m;                   /* '<S354>/Switch' */
} B_If_Then_Else_L4_MABX_h_T;

/* Block signals for system '<S1017>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S1041>/Switch' */
  real_T XBRUrgency;                   /* '<S1041>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S1041>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S1041>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1041>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S1041>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S1041>/Switch' */
} B_If_Then_Else_L4_MABX_a_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S406>/Decoder' */
  real_T UnitDelay;                    /* '<S759>/Unit Delay' */
  real_T UnitDelay_e;                  /* '<S758>/Unit Delay' */
  real_T Switch;                       /* '<S758>/Switch' */
  real_T Gain;                         /* '<S758>/Gain' */
  real_T Switch_o;                     /* '<S759>/Switch' */
  real_T Gain_h;                       /* '<S759>/Gain' */
  real_T SFunction1_o1;                /* '<S742>/S-Function1' */
  real_T SFunction1_o2;                /* '<S742>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S418>/Data Type Conversion2' */
  real_T Xold;                         /* '<S798>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S798>/Init' */
  real_T FixPtSum1;                    /* '<S794>/FixPt Sum1' */
  real_T FixPtSum1_c;                  /* '<S797>/FixPt Sum1' */
  real_T Gain_k;                       /* '<S418>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S418>/Data Type Conversion9' */
  real_T Xold_k;                       /* '<S790>/FixPt Unit Delay1' */
  real_T Init_j;                       /* '<S790>/Init' */
  real_T FixPtSum1_p;                  /* '<S786>/FixPt Sum1' */
  real_T FixPtSum1_f;                  /* '<S789>/FixPt Sum1' */
  real_T SFunction1_o1_m;              /* '<S743>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S743>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S418>/Data Type Conversion3' */
  real_T Xold_d;                       /* '<S814>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S814>/Init' */
  real_T FixPtSum1_d;                  /* '<S810>/FixPt Sum1' */
  real_T FixPtSum1_b;                  /* '<S813>/FixPt Sum1' */
  real_T Gain1;                        /* '<S418>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S418>/Data Type Conversion1' */
  real_T Xold_m;                       /* '<S806>/FixPt Unit Delay1' */
  real_T Init_d;                       /* '<S806>/Init' */
  real_T FixPtSum1_m;                  /* '<S802>/FixPt Sum1' */
  real_T FixPtSum1_a;                  /* '<S805>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S835>/MinMax1' */
  real_T Saturation;                   /* '<S835>/Saturation' */
  real_T Divide;                       /* '<S835>/Divide' */
  real_T Product2;                     /* '<S835>/Product2' */
  real_T Subtract1;                    /* '<S835>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S835>/Unit_Delay2' */
  real_T Product1;                     /* '<S835>/Product1' */
  real_T Add1;                         /* '<S835>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S768>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_b;                    /* '<S836>/MinMax1' */
  real_T Saturation_n;                 /* '<S836>/Saturation' */
  real_T Divide_a;                     /* '<S836>/Divide' */
  real_T Product2_g;                   /* '<S836>/Product2' */
  real_T Subtract1_p;                  /* '<S836>/Subtract1' */
  real_T Unit_Delay2_m;                /* '<S836>/Unit_Delay2' */
  real_T Product1_d;                   /* '<S836>/Product1' */
  real_T Add1_p;                       /* '<S836>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S768>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S770>/Subtract' */
  real_T Abs;                          /* '<S770>/Abs' */
  real_T Xold_b;                       /* '<S834>/FixPt Unit Delay1' */
  real_T Init_ig;                      /* '<S834>/Init' */
  real_T Xold_f;                       /* '<S833>/FixPt Unit Delay1' */
  real_T Init_l;                       /* '<S833>/Init' */
  real_T MinMax;                       /* '<S764>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S770>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S765>/Data Type Conversion2' */
  real_T Xold_c;                       /* '<S822>/FixPt Unit Delay1' */
  real_T Init_m;                       /* '<S822>/Init' */
  real_T FixPtSum1_am;                 /* '<S818>/FixPt Sum1' */
  real_T FixPtSum1_o;                  /* '<S821>/FixPt Sum1' */
  real_T SFunction1;                   /* '<S734>/S-Function1' */
  real_T IgnitionKeySwitch_voltage;    /* '<S418>/KL15_Monitor' */
  real_T SPN524_TransSelectedGear;     /* '<S573>/Data Type Conversion1' */
  real_T SPN523_TransCurrentGear;      /* '<S573>/Data Type Conversion2' */
  real_T SPN526_TransActualGearRatio;  /* '<S573>/Data Type Conversion3' */
  real_T SPN514_NominalFrictionPercentTo;/* '<S571>/Data Type Conversion2' */
  real_T SPN2978_EstEngParasiticLossesPe;/* '<S571>/Data Type Conversion1' */
  real_T SPN1760_GrossCombinationVehicle;/* '<S514>/Data Type Conversion1' */
  real_T ACCDistanceAlertSignal;       /* '<S495>/Data Type Conversion12' */
  real_T ForwardCollisionWarning;      /* '<S495>/Data Type Conversion13' */
  real_T SPN544_EngineReferenceTorque; /* '<S534>/Data Type Conversion2' */
  real_T PitchAngleExRange;            /* '<S632>/Data Type Conversion1' */
  real_T PressureP1;                   /* '<S630>/Data Type Conversion7' */
  real_T PressureP4;                   /* '<S630>/Data Type Conversion6' */
  real_T PressureP21;                  /* '<S630>/Data Type Conversion11' */
  real_T PressureP22;                  /* '<S630>/Data Type Conversion12' */
  real_T PressureP42;                  /* '<S630>/Data Type Conversion13' */
  real_T Heartbeat;                    /* '<S400>/Heartbeat' */
  real_T Decoder_o3;                   /* '<S406>/Decoder' */
  real_T UnitDelay_f;                  /* '<S405>/Unit Delay' */
  real_T Count;                        /* '<S405>/Switch' */
  real_T Latitude_;                    /* '<S627>/Switch' */
  real_T Longitude_;                   /* '<S627>/Switch' */
  real_T SID;                          /* '<S511>/Switch' */
  real_T COGReference;                 /* '<S511>/Switch' */
  real_T CourseOverGround;             /* '<S511>/Switch' */
  real_T SpeedOverGround;              /* '<S511>/Switch' */
  real_T DataTypeConversion[8];        /* '<S1064>/Data Type Conversion' */
  real_T DataTypeConversion_f[8];      /* '<S1065>/Data Type Conversion' */
  real_T TmpRTBAtANDInport1;           /* '<S1080>/Flash' */
  real_T MinMax_h;                     /* '<S852>/MinMax' */
  real_T DataTypeConversion1;          /* '<S852>/Data Type Conversion1' */
  real_T Divide_i;                     /* '<S852>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S852>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1078>/1-D Lookup Table2' */
  real_T Gain1_g;                      /* '<S852>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S852>/Data Type Conversion6' */
  real_T MinMax1_n;                    /* '<S852>/MinMax1' */
  real_T DataTypeConversion2_p;        /* '<S852>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S852>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S852>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1078>/1-D Lookup Table3' */
  real_T Gain_i;                       /* '<S852>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S852>/Data Type Conversion10' */
  real_T SFunction1_o1_h;              /* '<S741>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S741>/S-Function1' */
  real_T ShiftControlDC;               /* '<S418>/ShifterControlDC' */
  real_T Flash;                        /* '<S1080>/Flash' */
  real_T HDOP_;                        /* '<S575>/Switch' */
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
  real_T DataTypeConversion2_o;        /* '<S528>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S528>/Product' */
  real_T DataTypeConversion_l;         /* '<S420>/Data Type Conversion' */
  real_T DataTypeConversion_h;         /* '<S535>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S535>/Add' */
  real_T DataTypeConversion1_i;        /* '<S420>/Data Type Conversion1' */
  real_T DataTypeConversion2_n;        /* '<S532>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S532>/Product' */
  real_T DataTypeConversion10;         /* '<S420>/Data Type Conversion10' */
  real_T DataTypeConversion2_k;        /* '<S533>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S533>/Product' */
  real_T DataTypeConversion11;         /* '<S420>/Data Type Conversion11' */
  real_T DataTypeConversion2_b;        /* '<S536>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S536>/Product' */
  real_T DataTypeConversion13;         /* '<S420>/Data Type Conversion13' */
  real_T DataTypeConversion2_i;        /* '<S537>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S537>/Product' */
  real_T DataTypeConversion14;         /* '<S420>/Data Type Conversion14' */
  real_T DataTypeConversion2_f;        /* '<S538>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S538>/Product' */
  real_T DataTypeConversion15;         /* '<S420>/Data Type Conversion15' */
  real_T DataTypeConversion2_a;        /* '<S539>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S539>/Product' */
  real_T DataTypeConversion16;         /* '<S420>/Data Type Conversion16' */
  real_T DataTypeConversion_c;         /* '<S540>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S540>/Add' */
  real_T DataTypeConversion17;         /* '<S420>/Data Type Conversion17' */
  real_T DataTypeConversion_m;         /* '<S541>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S541>/Add' */
  real_T DataTypeConversion18;         /* '<S420>/Data Type Conversion18' */
  real_T DataTypeConversion2_a1;       /* '<S542>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S542>/Product' */
  real_T DataTypeConversion19;         /* '<S420>/Data Type Conversion19' */
  real_T DataTypeConversion2_ow;       /* '<S550>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S550>/Product' */
  real_T DataTypeConversion2_e;        /* '<S420>/Data Type Conversion2' */
  real_T DataTypeConversion2_j;        /* '<S543>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S543>/Product' */
  real_T DataTypeConversion20;         /* '<S420>/Data Type Conversion20' */
  real_T DataTypeConversion_b;         /* '<S551>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S551>/Add' */
  real_T DataTypeConversion3;          /* '<S420>/Data Type Conversion3' */
  real_T DataTypeConversion2_m;        /* '<S552>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S552>/Product' */
  real_T DataTypeConversion4;          /* '<S420>/Data Type Conversion4' */
  real_T DataTypeConversion_j;         /* '<S553>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S553>/Add' */
  real_T DataTypeConversion5;          /* '<S420>/Data Type Conversion5' */
  real_T DataTypeConversion2_pl;       /* '<S554>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S554>/Product' */
  real_T DataTypeConversion6;          /* '<S420>/Data Type Conversion6' */
  real_T DataTypeConversion_o;         /* '<S529>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S529>/Add' */
  real_T DataTypeConversion7;          /* '<S420>/Data Type Conversion7' */
  real_T DataTypeConversion2_jt;       /* '<S530>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S530>/Product' */
  real_T DataTypeConversion8;          /* '<S420>/Data Type Conversion8' */
  real_T DataTypeConversion_i;         /* '<S531>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S531>/Add' */
  real_T DataTypeConversion9;          /* '<S420>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S477>/Data Type Conversion9' */
  real_T RX_time_j;                    /* '<S423>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S477>/Data Type Conversion10' */
  real_T RX_delta_time_g;              /* '<S423>/Multiport_Switch' */
  real_T RX_time_g;                    /* '<S486>/Data Type Conversion9' */
  real_T RX_time_c;                    /* '<S424>/Multiport_Switch' */
  real_T RX_delta_time_p;              /* '<S486>/Data Type Conversion10' */
  real_T RX_delta_time_m;              /* '<S424>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S495>/Data Type Conversion1' */
  real_T RX_delta_time_pf;             /* '<S495>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S495>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S495>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S495>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S495>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S495>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S495>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S495>/Data Type Conversion7' */
  real_T RX_time_e;                    /* '<S495>/Data Type Conversion9' */
  real_T RX_delta_time_k;              /* '<S497>/Data Type Conversion10' */
  real_T RX_time_h;                    /* '<S497>/Data Type Conversion9' */
  real_T RX_delta_time_gd;             /* '<S499>/Data Type Conversion10' */
  real_T RX_time_i;                    /* '<S499>/Data Type Conversion9' */
  real_T RX_delta_time_pk;             /* '<S501>/Data Type Conversion10' */
  real_T RX_time_l;                    /* '<S501>/Data Type Conversion9' */
  real_T RX_delta_time_a;              /* '<S503>/Data Type Conversion10' */
  real_T RX_time_ih;                   /* '<S503>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S505>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S505>/Data Type Conversion9' */
  real_T RX_delta_time_e;              /* '<S507>/Data Type Conversion10' */
  real_T RX_time_h1;                   /* '<S507>/Data Type Conversion9' */
  real_T RX_delta_time_f;              /* '<S509>/Data Type Conversion10' */
  real_T RX_time_iha;                  /* '<S509>/Data Type Conversion9' */
  real_T RX_time_ip;                   /* '<S511>/Switch' */
  real_T RX_delta_time_j;              /* '<S511>/Switch' */
  real_T RX_delta_time_i;              /* '<S514>/Data Type Conversion10' */
  real_T RX_time_gm;                   /* '<S514>/Data Type Conversion9' */
  real_T RX_delta_time_pd;             /* '<S516>/Data Type Conversion10' */
  real_T RX_time_f;                    /* '<S516>/Data Type Conversion9' */
  real_T RX_delta_time_b;              /* '<S518>/Data Type Conversion10' */
  real_T RX_time_p;                    /* '<S518>/Data Type Conversion9' */
  real_T RX_delta_time_l;              /* '<S520>/Data Type Conversion10' */
  real_T RX_time_b;                    /* '<S520>/Data Type Conversion9' */
  real_T RX_delta_time_eu;             /* '<S567>/Data Type Conversion10' */
  real_T RX_time_fj;                   /* '<S567>/Data Type Conversion9' */
  real_T RX_delta_time_pj;             /* '<S569>/Data Type Conversion10' */
  real_T RX_time_cr;                   /* '<S569>/Data Type Conversion9' */
  real_T RX_delta_time_d;              /* '<S571>/Data Type Conversion10' */
  real_T RX_time_o;                    /* '<S571>/Data Type Conversion9' */
  real_T RX_delta_time_bi;             /* '<S573>/Data Type Conversion10' */
  real_T RX_time_c5;                   /* '<S573>/Data Type Conversion9' */
  real_T SID_c;                        /* '<S575>/Switch' */
  real_T SetMode;                      /* '<S575>/Switch' */
  real_T OpMode;                       /* '<S575>/Switch' */
  real_T VDOP;                         /* '<S575>/Switch' */
  real_T TDOP;                         /* '<S575>/Switch' */
  real_T RX_time_a;                    /* '<S575>/Switch' */
  real_T RX_delta_time_eq;             /* '<S575>/Switch' */
  real_T RX_delta_time_h;              /* '<S578>/Data Type Conversion10' */
  real_T RX_time_d;                    /* '<S578>/Data Type Conversion9' */
  real_T RX_time_cv;                   /* '<S445>/Switch' */
  real_T RX_delta_time_fr;             /* '<S445>/Switch' */
  real_T RX_time_iv;                   /* '<S612>/Data Type Conversion9' */
  real_T RX_time_g2;                   /* '<S448>/Multiport_Switch' */
  real_T RX_delta_time_pu;             /* '<S612>/Data Type Conversion10' */
  real_T RX_delta_time_kh;             /* '<S448>/Multiport_Switch' */
  real_T RX_delta_time_fk;             /* '<S623>/Data Type Conversion1' */
  real_T RX_delta_time_c;              /* '<S623>/Data Type Conversion10' */
  real_T RX_time_fm;                   /* '<S623>/Data Type Conversion3' */
  real_T RX_delta_time_b1;             /* '<S623>/Data Type Conversion4' */
  real_T RX_time_dk;                   /* '<S623>/Data Type Conversion6' */
  real_T RX_time_fq;                   /* '<S623>/Data Type Conversion9' */
  real_T RX_time_a0;                   /* '<S627>/Switch' */
  real_T RX_delta_time_hm;             /* '<S627>/Switch' */
  real_T XPR1ControlStatus;            /* '<S630>/Data Type Conversion1' */
  real_T RX_delta_time_e2;             /* '<S630>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S630>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S630>/Data Type Conversion3' */
  real_T RX_time_i0;                   /* '<S630>/Data Type Conversion9' */
  real_T RX_delta_time_hv;             /* '<S632>/Data Type Conversion10' */
  real_T RX_time_oa;                   /* '<S632>/Data Type Conversion9' */
  real_T RX_delta_time_pw;             /* '<S634>/Data Type Conversion10' */
  real_T RX_time_pv;                   /* '<S634>/Data Type Conversion9' */
  real_T RX_delta_time_f5;             /* '<S636>/Data Type Conversion10' */
  real_T RX_time_e3;                   /* '<S636>/Data Type Conversion9' */
  real_T RX_delta_time_by;             /* '<S638>/Data Type Conversion10' */
  real_T RX_time_ed;                   /* '<S638>/Data Type Conversion9' */
  real_T RX_delta_time_o;              /* '<S640>/Data Type Conversion10' */
  real_T RX_time_jk;                   /* '<S640>/Data Type Conversion9' */
  real_T RX_delta_time_ox;             /* '<S642>/Data Type Conversion10' */
  real_T RX_time_hs;                   /* '<S642>/Data Type Conversion9' */
  real_T RX_delta_time_n;              /* '<S644>/Data Type Conversion10' */
  real_T RX_time_bp;                   /* '<S644>/Data Type Conversion9' */
  real_T RX_delta_time_kk;             /* '<S646>/Data Type Conversion10' */
  real_T RX_time_ba;                   /* '<S646>/Data Type Conversion9' */
  real_T PitchAngleExRange_g;          /* '<S648>/Data Type Conversion1' */
  real_T RX_delta_time_lk;             /* '<S648>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S648>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S648>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S648>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S648>/Data Type Conversion5' */
  real_T RX_time_i0g;                  /* '<S648>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S417>/Constant2' */
  real_T DataTypeConversion4_m;        /* '<S670>/Data Type Conversion4' */
  real_T DataTypeConversion1_n;        /* '<S671>/Data Type Conversion1' */
  real_T DataTypeConversion1_p;        /* '<S672>/Data Type Conversion1' */
  real_T RX_time_hz;                   /* '<S585>/Data Type Conversion9' */
  real_T RX_time_le;                   /* '<S586>/Data Type Conversion9' */
  real_T RX_time_di;                   /* '<S446>/Multiport_Switch' */
  real_T RX_delta_time_jv;             /* '<S585>/Data Type Conversion10' */
  real_T RX_delta_time_kv;             /* '<S586>/Data Type Conversion10' */
  real_T RX_delta_time_pl;             /* '<S446>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S682>/Data Type Conversion5' */
  real_T DataTypeConversion5_e;        /* '<S422>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S683>/Data Type Conversion9' */
  real_T DataTypeConversion6_o;        /* '<S422>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S684>/Data Type Conversion11' */
  real_T DataTypeConversion7_k;        /* '<S422>/Data Type Conversion7' */
  real_T RX_time_pq;                   /* '<S599>/Data Type Conversion9' */
  real_T RX_time_jh;                   /* '<S447>/Multiport_Switch' */
  real_T RX_delta_time_hn;             /* '<S599>/Data Type Conversion10' */
  real_T RX_delta_time_af;             /* '<S447>/Multiport_Switch' */
  real_T UnitDelay_k;                  /* '<S750>/Unit Delay' */
  real_T Switch_n;                     /* '<S750>/Switch' */
  real_T Gain_g;                       /* '<S750>/Gain' */
  real_T UnitDelay_g;                  /* '<S751>/Unit Delay' */
  real_T Switch_m;                     /* '<S751>/Switch' */
  real_T Gain_kn;                      /* '<S751>/Gain' */
  real_T ShiftControlFreq;             /* '<S418>/ShifterControlFreq' */
  real_T SFunction1_m;                 /* '<S732>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S418>/ShifterControlDC2' */
  real_T SFunction1_h;                 /* '<S733>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S418>/ShifterControlDC1' */
  real_T SFunction1_o1_c;              /* '<S1071>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S1071>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1071>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1071>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S1067>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S1067>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S1067>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S1067>/S-Function1' */
  real_T SFunction1_o1_k;              /* '<S1066>/S-Function1' */
  real_T SFunction1_o2_mn;             /* '<S1066>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S1066>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S1066>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S861>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S861>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1056>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1056>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1056>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_l;     /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_e;     /* '<S1056>/Bus Selector' */
  real_T BrakeSwitch_i;                /* '<S1056>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1056>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1056>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1056>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1056>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1056>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1056>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1056>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1057>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1057>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1057>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1057>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1057>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1057>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1057>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1057>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1057>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1057>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1057>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1057>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1057>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1057>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1057>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1057>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1057>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1057>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1057>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1057>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1057>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1057>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1057>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1057>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1057>/Bus Selector' */
  real_T SFunction1_o1_k0;             /* '<S1059>/S-Function1' */
  real_T SFunction1_o2_hu;             /* '<S1059>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S1059>/S-Function1' */
  real_T SFunction1_o4_al;             /* '<S1059>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S1058>/S-Function1' */
  real_T SFunction1_o2_iq;             /* '<S1058>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S1058>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S1058>/S-Function1' */
  real_T DataTypeConversion_hy;        /* '<S1045>/Data Type Conversion' */
  real_T DataTypeConversion1_b;        /* '<S1045>/Data Type Conversion1' */
  real_T DataTypeConversion2_pj;       /* '<S1045>/Data Type Conversion2' */
  real_T SFunction1_o1_f;              /* '<S1047>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S1047>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S1047>/S-Function1' */
  real_T SFunction1_o4_pd;             /* '<S1047>/S-Function1' */
  real_T BrakingPID_Y_h;               /* '<S1017>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S1017>/Switch1' */
  real_T DataTypeConversion1_e;        /* '<S1020>/Data Type Conversion1' */
  real_T DataTypeConversion2_fo;       /* '<S1020>/Data Type Conversion2' */
  real_T DataTypeConversion3_d;        /* '<S1020>/Data Type Conversion3' */
  real_T DataTypeConversion4_a;        /* '<S1020>/Data Type Conversion4' */
  real_T DataTypeConversion5_b;        /* '<S1020>/Data Type Conversion5' */
  real_T DataTypeConversion6_m;        /* '<S1020>/Data Type Conversion6' */
  real_T DataTypeConversion7_l;        /* '<S1020>/Data Type Conversion7' */
  real_T Saturation_no;                /* '<S1016>/Saturation' */
  real_T BrakingPID_Y_h3;              /* '<S1016>/Bus Selector' */
  real_T Gain_p;                       /* '<S1016>/Gain' */
  real_T Gain_ps;                      /* '<S1033>/Gain' */
  real_T Gain1_o;                      /* '<S1033>/Gain1' */
  real_T DataTypeConversion1_d[8];     /* '<S1014>/Data Type Conversion1' */
  real_T FrontAxleSpeed_d;             /* '<S1030>/Bus Selector4' */
  real_T DataTypeConversion_d;         /* '<S1030>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_o; /* '<S1030>/Bus Selector4' */
  real_T DataTypeConversion1_h;        /* '<S1030>/Data Type Conversion1' */
  real_T SPN1808_YawRate_f;            /* '<S1030>/Bus Selector4' */
  real_T DataTypeConversion2_mo;       /* '<S1030>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_m;/* '<S1030>/Bus Selector4' */
  real_T DataTypeConversion3_g;        /* '<S1030>/Data Type Conversion3' */
  real_T DataType;                     /* '<S1029>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S1015>/Shift_Arithmetic 4' */
  real_T DataType_e;                   /* '<S1025>/DataType' */
  real_T DataType_c;                   /* '<S1026>/DataType' */
  real_T DataType_k;                   /* '<S1027>/DataType' */
  real_T DataType_ei;                  /* '<S1028>/DataType' */
  real_T Shift_Arithmetic;             /* '<S1015>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S1015>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S1015>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S1015>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S1017>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_i;     /* '<S1017>/Divide1' */
  real_T SFunction1_o1_ii;             /* '<S1031>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S1023>/S-Function1' */
  real_T SFunction1_o2_in;             /* '<S1023>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S1023>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S1023>/S-Function1' */
  real_T SFunction1_o1_a;              /* '<S1021>/S-Function1' */
  real_T SFunction1_o2_gk;             /* '<S1021>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S1021>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S1021>/S-Function1' */
  real_T DataTypeConversion4_f;        /* '<S953>/Data Type Conversion4' */
  real_T DataType_cj;                  /* '<S950>/DataType' */
  real_T Shift_Arithmetic2_n;          /* '<S942>/Shift_Arithmetic 2' */
  real_T DataType_j;                   /* '<S948>/DataType' */
  real_T DataType_m;                   /* '<S949>/DataType' */
  real_T DataType_jo;                  /* '<S951>/DataType' */
  real_T DataType_g;                   /* '<S952>/DataType' */
  real_T Shift_Arithmetic_a;           /* '<S942>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_i;          /* '<S942>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_a;          /* '<S942>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_h;          /* '<S942>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_iq;       /* '<S961>/Data Type Conversion1' */
  real_T DataTypeConversion2_m4;       /* '<S961>/Data Type Conversion2' */
  real_T DataTypeConversion3_o;        /* '<S961>/Data Type Conversion3' */
  real_T DataTypeConversion4_f0;       /* '<S961>/Data Type Conversion4' */
  real_T DataTypeConversion5_a;        /* '<S961>/Data Type Conversion5' */
  real_T DataTypeConversion6_p;        /* '<S961>/Data Type Conversion6' */
  real_T DataTypeConversion7_e;        /* '<S961>/Data Type Conversion7' */
  real_T DataTypeConversion8_d;        /* '<S961>/Data Type Conversion8' */
  real_T DataType_b;                   /* '<S958>/DataType' */
  real_T Shift_Arithmetic2_g;          /* '<S943>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_ih;       /* '<S962>/Data Type Conversion1' */
  real_T DataTypeConversion2_c;        /* '<S962>/Data Type Conversion2' */
  real_T DataTypeConversion3_gv;       /* '<S962>/Data Type Conversion3' */
  real_T DataTypeConversion4_n;        /* '<S962>/Data Type Conversion4' */
  real_T DataTypeConversion5_ek;       /* '<S962>/Data Type Conversion5' */
  real_T DataTypeConversion6_d;        /* '<S962>/Data Type Conversion6' */
  real_T DataTypeConversion7_c;        /* '<S962>/Data Type Conversion7' */
  real_T DataTypeConversion8_h;        /* '<S962>/Data Type Conversion8' */
  real_T DataType_f;                   /* '<S959>/DataType' */
  real_T Shift_Arithmetic3_c;          /* '<S943>/Shift_Arithmetic 3' */
  real_T DataType_g2;                  /* '<S956>/DataType' */
  real_T DataType_p;                   /* '<S957>/DataType' */
  real_T DataType_j2;                  /* '<S960>/DataType' */
  real_T Shift_Arithmetic_aj;          /* '<S943>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_k;          /* '<S943>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_k;          /* '<S943>/Shift_Arithmetic 4' */
  real_T Switch_mq;                    /* '<S996>/Switch' */
  real_T Switch2;                      /* '<S1006>/Switch2' */
  real_T DataType_k4;                  /* '<S1006>/DataType' */
  real_T DataTypeConversion1_dm[8];    /* '<S944>/Data Type Conversion1' */
  real_T DataType_j2i;                 /* '<S973>/DataType' */
  real_T Shift_Arithmetic3_g;          /* '<S945>/Shift_Arithmetic 3' */
  real_T DataType_o;                   /* '<S970>/DataType' */
  real_T DataType_jw;                  /* '<S971>/DataType' */
  real_T DataType_d;                   /* '<S972>/DataType' */
  real_T DataType_k4n;                 /* '<S974>/DataType' */
  real_T Shift_Arithmetic_d;           /* '<S945>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_g;          /* '<S945>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_k;          /* '<S945>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_o;          /* '<S945>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S1007>/Product' */
  real_T Switch1;                      /* '<S1006>/Switch1' */
  real_T Multiport_Switch;             /* '<S996>/Multiport_Switch' */
  real_T SFunction1_o1_l;              /* '<S976>/S-Function1' */
  real_T SFunction1_o2_e1;             /* '<S976>/S-Function1' */
  real_T SFunction1_o3_e2;             /* '<S976>/S-Function1' */
  real_T SFunction1_o4_ju;             /* '<S976>/S-Function1' */
  real_T SFunction1_o1_fx;             /* '<S968>/S-Function1' */
  real_T SFunction1_o2_g1;             /* '<S968>/S-Function1' */
  real_T SFunction1_o3_fn;             /* '<S968>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S968>/S-Function1' */
  real_T SFunction1_o1_ae;             /* '<S967>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S967>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S967>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S967>/S-Function1' */
  real_T SFunction1_o1_pm;             /* '<S964>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S964>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S964>/S-Function1' */
  real_T SFunction1_o4_lr;             /* '<S964>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S963>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S963>/S-Function1' */
  real_T SFunction1_o3_f3;             /* '<S963>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S963>/S-Function1' */
  real_T SFunction1_o1_hp;             /* '<S954>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S954>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S954>/S-Function1' */
  real_T SFunction1_o4_fy;             /* '<S954>/S-Function1' */
  real_T DataTypeConversion1_m[8];     /* '<S883>/Data Type Conversion1' */
  real_T DataType_fq;                  /* '<S903>/DataType' */
  real_T Shift_Arithmetic2_m;          /* '<S883>/Shift_Arithmetic 2' */
  real_T DataType_oh;                  /* '<S899>/DataType' */
  real_T DataType_kw;                  /* '<S904>/DataType' */
  real_T Shift_Arithmetic3_cu;         /* '<S883>/Shift_Arithmetic 3' */
  real_T DataType_cc;                  /* '<S905>/DataType' */
  real_T Shift_Arithmetic4_n;          /* '<S883>/Shift_Arithmetic 4' */
  real_T DataType_db;                  /* '<S902>/DataType' */
  real_T Shift_Arithmetic_e;           /* '<S883>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_m;          /* '<S883>/Shift_Arithmetic 1' */
  real_T Latitude__n;                  /* '<S940>/Bus Selector' */
  real_T DataTypeConversion_e;         /* '<S940>/Data Type Conversion' */
  real_T Longitude__i;                 /* '<S940>/Bus Selector' */
  real_T DataTypeConversion1_o;        /* '<S940>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_a;         /* '<S890>/Bus Selector' */
  real_T ParkingBrakeSwitch_a;         /* '<S890>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_g;      /* '<S890>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_o;  /* '<S890>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_lc;    /* '<S890>/Bus Selector' */
  real_T CruiseCtrlActive_j;           /* '<S890>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_en;    /* '<S890>/Bus Selector' */
  real_T BrakeSwitch_is;               /* '<S890>/Bus Selector' */
  real_T ClutchSwitch_c;               /* '<S890>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_n;        /* '<S890>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_f;      /* '<S890>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_k;     /* '<S890>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_n; /* '<S890>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_k;         /* '<S890>/Bus Selector' */
  real_T PTOGovernorState_f;           /* '<S890>/Bus Selector' */
  real_T CruiseCtrlStates_n;           /* '<S890>/Bus Selector' */
  real_T EngIdleIncrementSwitch_f;     /* '<S890>/Bus Selector' */
  real_T EngIdleDecrementSwitch_k;     /* '<S890>/Bus Selector' */
  real_T EngTestModeSwitch_i;          /* '<S890>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_f;  /* '<S890>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_as;        /* '<S891>/Bus Selector' */
  real_T ParkingBrakeSwitch_ac;        /* '<S891>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_gt;     /* '<S891>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_ot; /* '<S891>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_lcd;   /* '<S891>/Bus Selector' */
  real_T CruiseCtrlActive_jk;          /* '<S891>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_enw;   /* '<S891>/Bus Selector' */
  real_T BrakeSwitch_isk;              /* '<S891>/Bus Selector' */
  real_T ClutchSwitch_co;              /* '<S891>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_nl;       /* '<S891>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_fn;     /* '<S891>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_ku;    /* '<S891>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_no;/* '<S891>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_kj;        /* '<S891>/Bus Selector' */
  real_T PTOGovernorState_ff;          /* '<S891>/Bus Selector' */
  real_T CruiseCtrlStates_ng;          /* '<S891>/Bus Selector' */
  real_T EngIdleIncrementSwitch_fj;    /* '<S891>/Bus Selector' */
  real_T EngIdleDecrementSwitch_kc;    /* '<S891>/Bus Selector' */
  real_T EngTestModeSwitch_if;         /* '<S891>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_fs; /* '<S891>/Bus Selector' */
  real_T DataTypeConversion1_pm[8];    /* '<S882>/Data Type Conversion1' */
  real_T SID_a;                        /* '<S914>/Bus Selector' */
  real_T DataTypeConversion_ov;        /* '<S914>/Data Type Conversion' */
  real_T COGReference_f;               /* '<S914>/Bus Selector' */
  real_T DataTypeConversion1_c;        /* '<S914>/Data Type Conversion1' */
  real_T CourseOverGround_k;           /* '<S914>/Bus Selector' */
  real_T DataTypeConversion2_ff;       /* '<S914>/Data Type Conversion2' */
  real_T SpeedOverGround_i;            /* '<S914>/Bus Selector' */
  real_T DataTypeConversion3_gl;       /* '<S914>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S916>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S916>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S916>/Bus Selector' */
  real_T EBSBrakeSwitch_o;             /* '<S916>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S916>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S916>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S916>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S916>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S916>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S916>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S916>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S916>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S916>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S916>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S916>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S916>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S916>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S916>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S916>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S916>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S916>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S916>/Bus Selector' */
  real_T SFunction1_o1_at;             /* '<S941>/S-Function1' */
  real_T SFunction1_o2_gq;             /* '<S941>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S941>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S941>/S-Function1' */
  real_T Unit_Delay;                   /* '<S930>/Unit_Delay' */
  real_T FixPtSum1_n;                  /* '<S938>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S939>/FixPt Switch' */
  real_T SFunction1_o1_lh;             /* '<S917>/S-Function1' */
  real_T SFunction1_o2_gm;             /* '<S917>/S-Function1' */
  real_T SFunction1_o3_c0;             /* '<S917>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S917>/S-Function1' */
  real_T SFunction1_o1_d;              /* '<S915>/S-Function1' */
  real_T SFunction1_o2_la;             /* '<S915>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S915>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S915>/S-Function1' */
  real_T SFunction1_o1_f0;             /* '<S913>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S913>/S-Function1' */
  real_T SFunction1_o3_lg;             /* '<S913>/S-Function1' */
  real_T SFunction1_o4_ji;             /* '<S913>/S-Function1' */
  real_T SFunction1_o1_lb;             /* '<S912>/S-Function1' */
  real_T SFunction1_o2_in5;            /* '<S912>/S-Function1' */
  real_T SFunction1_o3_kt;             /* '<S912>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S912>/S-Function1' */
  real_T SFunction1_o1_m1;             /* '<S897>/S-Function1' */
  real_T SFunction1_o2_b1;             /* '<S897>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S897>/S-Function1' */
  real_T SFunction1_o4_is;             /* '<S897>/S-Function1' */
  real_T SFunction1_o1_kb;             /* '<S896>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S896>/S-Function1' */
  real_T SFunction1_o3_nh;             /* '<S896>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S896>/S-Function1' */
  real_T SFunction1_o1_pw;             /* '<S893>/S-Function1' */
  real_T SFunction1_o2_i4;             /* '<S893>/S-Function1' */
  real_T SFunction1_o3_ge;             /* '<S893>/S-Function1' */
  real_T SFunction1_o4_j5;             /* '<S893>/S-Function1' */
  real_T SFunction1_o1_cq;             /* '<S892>/S-Function1' */
  real_T SFunction1_o2_pm;             /* '<S892>/S-Function1' */
  real_T SFunction1_o3_lf;             /* '<S892>/S-Function1' */
  real_T SFunction1_o4_gm;             /* '<S892>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S871>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S871>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S871>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S871>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S871>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S871>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S871>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S871>/Bus Selector' */
  real_T DataType_c2;                  /* '<S868>/DataType' */
  real_T Shift_Arithmetic2_i;          /* '<S863>/Shift_Arithmetic 2' */
  real_T DataType_m2;                  /* '<S866>/DataType' */
  real_T DataType_cn;                  /* '<S867>/DataType' */
  real_T DataType_jg;                  /* '<S869>/DataType' */
  real_T DataType_gy;                  /* '<S870>/DataType' */
  real_T Shift_Arithmetic_ea;          /* '<S863>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_b;          /* '<S863>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_h;          /* '<S863>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_j;          /* '<S863>/Shift_Arithmetic 4' */
  real_T BarometricPress_b;            /* '<S879>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S879>/Bus Selector' */
  real_T AmbientAirTemp_i;             /* '<S879>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S879>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S879>/Bus Selector' */
  real_T DataType_pi;                  /* '<S876>/DataType' */
  real_T Shift_Arithmetic2_ie;         /* '<S864>/Shift_Arithmetic 2' */
  real_T DataType_jv;                  /* '<S874>/DataType' */
  real_T DataType_i;                   /* '<S875>/DataType' */
  real_T DataType_a;                   /* '<S877>/DataType' */
  real_T DataType_n;                   /* '<S878>/DataType' */
  real_T Shift_Arithmetic_d2;          /* '<S864>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_h;          /* '<S864>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_cz;         /* '<S864>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_l;          /* '<S864>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_j;              /* '<S880>/S-Function1' */
  real_T SFunction1_o2_bi;             /* '<S880>/S-Function1' */
  real_T SFunction1_o3_fi;             /* '<S880>/S-Function1' */
  real_T SFunction1_o4_bt;             /* '<S880>/S-Function1' */
  real_T SFunction1_o1_d4;             /* '<S872>/S-Function1' */
  real_T SFunction1_o2_gg;             /* '<S872>/S-Function1' */
  real_T SFunction1_o3_nm;             /* '<S872>/S-Function1' */
  real_T SFunction1_o4_lk;             /* '<S872>/S-Function1' */
  real_T Unit_Delay_k;                 /* '<S849>/Unit_Delay' */
  real_T Add;                          /* '<S849>/Add' */
  real_T Xold_ki;                      /* '<S844>/FixPt Unit Delay1' */
  real_T Init_n;                       /* '<S844>/Init' */
  real_T Abs_h;                        /* '<S841>/Abs' */
  real_T Product1_k;                   /* '<S841>/Product1' */
  real_T Add1_h;                       /* '<S841>/Add1' */
  real_T MinMax2;                      /* '<S841>/MinMax2' */
  real_T Abs1;                         /* '<S841>/Abs1' */
  real_T Product2_i;                   /* '<S841>/Product2' */
  real_T Subtract1_p2;                 /* '<S841>/Subtract1' */
  real_T MinMax1_l;                    /* '<S841>/MinMax1' */
  real_T Subtract_m;                   /* '<S769>/Subtract' */
  real_T Abs_g;                        /* '<S769>/Abs' */
  real_T Sum;                          /* '<S759>/Sum' */
  real_T Sum_h;                        /* '<S758>/Sum' */
  real_T Sum_b;                        /* '<S751>/Sum' */
  real_T Sum_e;                        /* '<S750>/Sum' */
  real_T timeStamp;                    /* '<S653>/timeStamp' */
  real_T Unit_Delay_o;                 /* '<S653>/Unit_Delay' */
  real_T SFunction1_o1_ki;             /* '<S649>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S649>/S-Function1' */
  real_T SFunction1_o3_hx;             /* '<S649>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S649>/S-Function1' */
  real_T SFunction1_o5;                /* '<S649>/S-Function1' */
  real_T SFunction1_o6;                /* '<S649>/S-Function1' */
  real_T SFunction1_o7;                /* '<S649>/S-Function1' */
  real_T SFunction1_o8;                /* '<S649>/S-Function1' */
  real_T SFunction1_o2_ix;             /* '<S647>/S-Function1' */
  real_T SFunction1_o3_dm;             /* '<S647>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S647>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S647>/S-Function1' */
  real_T SFunction1_o8_l;              /* '<S647>/S-Function1' */
  real_T SFunction1_o9;                /* '<S647>/S-Function1' */
  real_T SFunction1_o1_ju;             /* '<S645>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S645>/S-Function1' */
  real_T SFunction1_o3_gz;             /* '<S645>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S645>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S645>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S645>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S645>/S-Function1' */
  real_T SFunction1_o8_n;              /* '<S645>/S-Function1' */
  real_T SFunction1_o9_l;              /* '<S645>/S-Function1' */
  real_T SFunction1_o10;               /* '<S645>/S-Function1' */
  real_T SFunction1_o1_cm;             /* '<S643>/S-Function1' */
  real_T SFunction1_o2_do;             /* '<S643>/S-Function1' */
  real_T SFunction1_o3_gr;             /* '<S643>/S-Function1' */
  real_T SFunction1_o4_ms;             /* '<S643>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S643>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S643>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S643>/S-Function1' */
  real_T SFunction1_o8_k;              /* '<S643>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S643>/S-Function1' */
  real_T SFunction1_o10_b;             /* '<S643>/S-Function1' */
  real_T SFunction1_o11;               /* '<S643>/S-Function1' */
  real_T SFunction1_o12;               /* '<S643>/S-Function1' */
  real_T SFunction1_o13;               /* '<S643>/S-Function1' */
  real_T SFunction1_o14;               /* '<S643>/S-Function1' */
  real_T SFunction1_o15;               /* '<S643>/S-Function1' */
  real_T SFunction1_o16;               /* '<S643>/S-Function1' */
  real_T SFunction1_o17;               /* '<S643>/S-Function1' */
  real_T SFunction1_o18;               /* '<S643>/S-Function1' */
  real_T SFunction1_o19;               /* '<S643>/S-Function1' */
  real_T SFunction1_o20;               /* '<S643>/S-Function1' */
  real_T SFunction1_o21;               /* '<S643>/S-Function1' */
  real_T SFunction1_o22;               /* '<S643>/S-Function1' */
  real_T SFunction1_o23;               /* '<S643>/S-Function1' */
  real_T SFunction1_o24;               /* '<S643>/S-Function1' */
  real_T SFunction1_o25;               /* '<S643>/S-Function1' */
  real_T SFunction1_o26;               /* '<S643>/S-Function1' */
  real_T SFunction1_o27;               /* '<S643>/S-Function1' */
  real_T SFunction1_o28;               /* '<S643>/S-Function1' */
  real_T SFunction1_o1_jp;             /* '<S641>/S-Function1' */
  real_T SFunction1_o2_aj;             /* '<S641>/S-Function1' */
  real_T SFunction1_o3_jn;             /* '<S641>/S-Function1' */
  real_T SFunction1_o4_m0;             /* '<S641>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S641>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S641>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S641>/S-Function1' */
  real_T SFunction1_o1_pv;             /* '<S639>/S-Function1' */
  real_T SFunction1_o2_dx;             /* '<S639>/S-Function1' */
  real_T SFunction1_o3_lt;             /* '<S639>/S-Function1' */
  real_T SFunction1_o4_gk;             /* '<S639>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S639>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S639>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S639>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S639>/S-Function1' */
  real_T SFunction1_o9_n;              /* '<S639>/S-Function1' */
  real_T SFunction1_o1_fb;             /* '<S637>/S-Function1' */
  real_T SFunction1_o2_ib;             /* '<S637>/S-Function1' */
  real_T SFunction1_o3_cd;             /* '<S637>/S-Function1' */
  real_T SFunction1_o4_lt;             /* '<S637>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S637>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S637>/S-Function1' */
  real_T SFunction1_o7_lm;             /* '<S637>/S-Function1' */
  real_T SFunction1_o8_c;              /* '<S637>/S-Function1' */
  real_T SFunction1_o9_lz;             /* '<S637>/S-Function1' */
  real_T SFunction1_o1_d1;             /* '<S635>/S-Function1' */
  real_T SFunction1_o2_kw;             /* '<S635>/S-Function1' */
  real_T SFunction1_o3_bo;             /* '<S635>/S-Function1' */
  real_T SFunction1_o4_it;             /* '<S635>/S-Function1' */
  real_T SFunction1_o5_kh;             /* '<S635>/S-Function1' */
  real_T SFunction1_o6_fz;             /* '<S635>/S-Function1' */
  real_T SFunction1_o7_lx;             /* '<S635>/S-Function1' */
  real_T SFunction1_o8_h;              /* '<S635>/S-Function1' */
  real_T SFunction1_o9_n5;             /* '<S635>/S-Function1' */
  real_T SFunction1_o1_ms;             /* '<S633>/S-Function1' */
  real_T SFunction1_o2_ph;             /* '<S633>/S-Function1' */
  real_T SFunction1_o3_nr;             /* '<S633>/S-Function1' */
  real_T SFunction1_o4_e2;             /* '<S633>/S-Function1' */
  real_T SFunction1_o5_jy;             /* '<S633>/S-Function1' */
  real_T SFunction1_o6_hx;             /* '<S633>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S633>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S633>/S-Function1' */
  real_T SFunction1_o9_e;              /* '<S633>/S-Function1' */
  real_T SFunction1_o10_i;             /* '<S633>/S-Function1' */
  real_T SFunction1_o1_ak;             /* '<S631>/S-Function1' */
  real_T SFunction1_o2_nc;             /* '<S631>/S-Function1' */
  real_T SFunction1_o3_fd;             /* '<S631>/S-Function1' */
  real_T SFunction1_o4_ka;             /* '<S631>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S631>/S-Function1' */
  real_T SFunction1_o6_fc;             /* '<S631>/S-Function1' */
  real_T SFunction1_o7_jt;             /* '<S631>/S-Function1' */
  real_T SFunction1_o8_j;              /* '<S631>/S-Function1' */
  real_T SFunction1_o9_ed;             /* '<S631>/S-Function1' */
  real_T SFunction1_o10_c;             /* '<S631>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S631>/S-Function1' */
  real_T SFunction1_o12_p;             /* '<S631>/S-Function1' */
  real_T SFunction1_o13_e;             /* '<S631>/S-Function1' */
  real_T RX_time_k;                    /* '<S627>/Data Type Conversion9' */
  real_T RX_time_ei;                   /* '<S627>/Data Type Conversion2' */
  real_T RX_delta_time_n1;             /* '<S627>/Data Type Conversion10' */
  real_T RX_delta_time_jq;             /* '<S627>/Data Type Conversion1' */
  real_T SFunction1_o1_a5;             /* '<S629>/S-Function1' */
  real_T SFunction1_o2_kr;             /* '<S629>/S-Function1' */
  real_T SFunction1_o3_og;             /* '<S629>/S-Function1' */
  real_T SFunction1_o4_p0;             /* '<S629>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S629>/S-Function1' */
  real_T SFunction1_o1_c1;             /* '<S628>/S-Function1' */
  real_T SFunction1_o2_fm;             /* '<S628>/S-Function1' */
  real_T SFunction1_o3_cb;             /* '<S628>/S-Function1' */
  real_T SFunction1_o4_b5;             /* '<S628>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S628>/S-Function1' */
  real_T SFunction1_o1_in;             /* '<S626>/S-Function1' */
  real_T SFunction1_o2_nr;             /* '<S626>/S-Function1' */
  real_T SFunction1_o3_km;             /* '<S626>/S-Function1' */
  real_T SFunction1_o4_p1;             /* '<S626>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S626>/S-Function1' */
  real_T SFunction1_o6_fd;             /* '<S626>/S-Function1' */
  real_T SFunction1_o7_ls;             /* '<S626>/S-Function1' */
  real_T SFunction1_o1_l3;             /* '<S625>/S-Function1' */
  real_T SFunction1_o2_it;             /* '<S625>/S-Function1' */
  real_T SFunction1_o3_f4;             /* '<S625>/S-Function1' */
  real_T SFunction1_o4_kj;             /* '<S625>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S625>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S625>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S624>/S-Function1' */
  real_T SFunction1_o2_hn;             /* '<S624>/S-Function1' */
  real_T SFunction1_o3_hl;             /* '<S624>/S-Function1' */
  real_T SFunction1_o4_bv;             /* '<S624>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S624>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S624>/S-Function1' */
  real_T SFunction1_o1_mx;             /* '<S616>/S-Function1' */
  real_T SFunction1_o2_f1;             /* '<S616>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S616>/S-Function1' */
  real_T SFunction1_o4_jl;             /* '<S616>/S-Function1' */
  real_T SFunction1_o5_ez;             /* '<S616>/S-Function1' */
  real_T SFunction1_o1_le;             /* '<S615>/S-Function1' */
  real_T SFunction1_o2_hv;             /* '<S615>/S-Function1' */
  real_T SFunction1_o3_gu;             /* '<S615>/S-Function1' */
  real_T SFunction1_o4_aj;             /* '<S615>/S-Function1' */
  real_T SFunction1_o5_jm;             /* '<S615>/S-Function1' */
  real_T SFunction1_o1_pg;             /* '<S614>/S-Function1' */
  real_T SFunction1_o2_kj;             /* '<S614>/S-Function1' */
  real_T SFunction1_o3_ed;             /* '<S614>/S-Function1' */
  real_T SFunction1_o4_cs;             /* '<S614>/S-Function1' */
  real_T SFunction1_o5_pf;             /* '<S614>/S-Function1' */
  real_T RX_time_oi;                   /* '<S610>/Data Type Conversion9' */
  real_T RX_time_bf;                   /* '<S611>/Data Type Conversion9' */
  real_T RX_delta_time_bs;             /* '<S610>/Data Type Conversion10' */
  real_T RX_delta_time_cy;             /* '<S611>/Data Type Conversion10' */
  real_T SFunction1_o1_m5;             /* '<S603>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S603>/S-Function1' */
  real_T SFunction1_o3_fim;            /* '<S603>/S-Function1' */
  real_T SFunction1_o4_n4;             /* '<S603>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S603>/S-Function1' */
  real_T SFunction1_o6_dw;             /* '<S603>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S603>/S-Function1' */
  real_T SFunction1_o8_d;              /* '<S603>/S-Function1' */
  real_T SFunction1_o9_g;              /* '<S603>/S-Function1' */
  real_T SFunction1_o10_e;             /* '<S603>/S-Function1' */
  real_T SFunction1_o11_d;             /* '<S603>/S-Function1' */
  real_T SFunction1_o1_nw;             /* '<S602>/S-Function1' */
  real_T SFunction1_o2_k5;             /* '<S602>/S-Function1' */
  real_T SFunction1_o3_hb;             /* '<S602>/S-Function1' */
  real_T SFunction1_o4_id;             /* '<S602>/S-Function1' */
  real_T SFunction1_o5_cl;             /* '<S602>/S-Function1' */
  real_T SFunction1_o6_l1;             /* '<S602>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S602>/S-Function1' */
  real_T SFunction1_o8_dp;             /* '<S602>/S-Function1' */
  real_T SFunction1_o9_m;              /* '<S602>/S-Function1' */
  real_T SFunction1_o10_h;             /* '<S602>/S-Function1' */
  real_T SFunction1_o11_h;             /* '<S602>/S-Function1' */
  real_T SFunction1_o1_df;             /* '<S601>/S-Function1' */
  real_T SFunction1_o2_gb;             /* '<S601>/S-Function1' */
  real_T SFunction1_o3_jx;             /* '<S601>/S-Function1' */
  real_T SFunction1_o4_fu;             /* '<S601>/S-Function1' */
  real_T SFunction1_o5_p4;             /* '<S601>/S-Function1' */
  real_T SFunction1_o6_fp;             /* '<S601>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S601>/S-Function1' */
  real_T SFunction1_o8_b;              /* '<S601>/S-Function1' */
  real_T SFunction1_o9_f;              /* '<S601>/S-Function1' */
  real_T SFunction1_o10_j;             /* '<S601>/S-Function1' */
  real_T SFunction1_o11_j;             /* '<S601>/S-Function1' */
  real_T RX_time_p0;                   /* '<S597>/Data Type Conversion9' */
  real_T RX_time_a3;                   /* '<S598>/Data Type Conversion9' */
  real_T RX_delta_time_bd;             /* '<S597>/Data Type Conversion10' */
  real_T RX_delta_time_ot;             /* '<S598>/Data Type Conversion10' */
  real_T SFunction1_o1_fo;             /* '<S590>/S-Function1' */
  real_T SFunction1_o2_fu;             /* '<S590>/S-Function1' */
  real_T SFunction1_o3_e0;             /* '<S590>/S-Function1' */
  real_T SFunction1_o4_kh;             /* '<S590>/S-Function1' */
  real_T SFunction1_o5_nq;             /* '<S590>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S590>/S-Function1' */
  real_T SFunction1_o7_c3;             /* '<S590>/S-Function1' */
  real_T SFunction1_o8_j4;             /* '<S590>/S-Function1' */
  real_T SFunction1_o9_c5;             /* '<S590>/S-Function1' */
  real_T SFunction1_o10_hf;            /* '<S590>/S-Function1' */
  real_T SFunction1_o11_p;             /* '<S590>/S-Function1' */
  real_T SFunction1_o1_ab;             /* '<S589>/S-Function1' */
  real_T SFunction1_o2_on;             /* '<S589>/S-Function1' */
  real_T SFunction1_o3_nl;             /* '<S589>/S-Function1' */
  real_T SFunction1_o4_kt;             /* '<S589>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S589>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S589>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S589>/S-Function1' */
  real_T SFunction1_o8_m;              /* '<S589>/S-Function1' */
  real_T SFunction1_o9_d;              /* '<S589>/S-Function1' */
  real_T SFunction1_o10_jf;            /* '<S589>/S-Function1' */
  real_T SFunction1_o11_l;             /* '<S589>/S-Function1' */
  real_T SFunction1_o1_eh;             /* '<S588>/S-Function1' */
  real_T SFunction1_o2_dw;             /* '<S588>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S588>/S-Function1' */
  real_T SFunction1_o4_ho;             /* '<S588>/S-Function1' */
  real_T SFunction1_o5_h3;             /* '<S588>/S-Function1' */
  real_T SFunction1_o6_db;             /* '<S588>/S-Function1' */
  real_T SFunction1_o7_ax;             /* '<S588>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S588>/S-Function1' */
  real_T SFunction1_o9_i;              /* '<S588>/S-Function1' */
  real_T SFunction1_o10_n;             /* '<S588>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S588>/S-Function1' */
  real_T RX_time_bc;                   /* '<S584>/Data Type Conversion9' */
  real_T RX_delta_time_hd;             /* '<S584>/Data Type Conversion10' */
  real_T RX_time_cf;                   /* '<S580>/Data Type Conversion9' */
  real_T RX_time_fu;                   /* '<S581>/Data Type Conversion9' */
  real_T RX_delta_time_lv;             /* '<S580>/Data Type Conversion10' */
  real_T RX_delta_time_hz;             /* '<S581>/Data Type Conversion10' */
  real_T SFunction1_o1_cj;             /* '<S583>/S-Function1' */
  real_T SFunction1_o2_h5;             /* '<S583>/S-Function1' */
  real_T SFunction1_o3_m4;             /* '<S583>/S-Function1' */
  real_T SFunction1_o4_gp;             /* '<S583>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S583>/S-Function1' */
  real_T SFunction1_o1_ps;             /* '<S582>/S-Function1' */
  real_T SFunction1_o2_onq;            /* '<S582>/S-Function1' */
  real_T SFunction1_o3_mo;             /* '<S582>/S-Function1' */
  real_T SFunction1_o4_bh;             /* '<S582>/S-Function1' */
  real_T SFunction1_o5_ef;             /* '<S582>/S-Function1' */
  real_T SFunction1_o1_lo;             /* '<S579>/S-Function1' */
  real_T SFunction1_o2_pw;             /* '<S579>/S-Function1' */
  real_T SFunction1_o3_ip;             /* '<S579>/S-Function1' */
  real_T SFunction1_o4_az;             /* '<S579>/S-Function1' */
  real_T SFunction1_o5_e2;             /* '<S579>/S-Function1' */
  real_T SFunction1_o6_os;             /* '<S579>/S-Function1' */
  real_T SFunction1_o7_m0;             /* '<S579>/S-Function1' */
  real_T RX_time_ld;                   /* '<S575>/Data Type Conversion9' */
  real_T RX_time_er;                   /* '<S575>/Data Type Conversion2' */
  real_T RX_delta_time_nf;             /* '<S575>/Data Type Conversion10' */
  real_T RX_delta_time_bw;             /* '<S575>/Data Type Conversion1' */
  real_T SFunction1_o1_l3y;            /* '<S577>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S577>/S-Function1' */
  real_T SFunction1_o3_id;             /* '<S577>/S-Function1' */
  real_T SFunction1_o4_p4;             /* '<S577>/S-Function1' */
  real_T SFunction1_o5_hk;             /* '<S577>/S-Function1' */
  real_T SFunction1_o6_af;             /* '<S577>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S577>/S-Function1' */
  real_T SFunction1_o8_g;              /* '<S577>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S577>/S-Function1' */
  real_T SFunction1_o1_ny;             /* '<S576>/S-Function1' */
  real_T SFunction1_o2_oy;             /* '<S576>/S-Function1' */
  real_T SFunction1_o3_f1;             /* '<S576>/S-Function1' */
  real_T SFunction1_o4_hy;             /* '<S576>/S-Function1' */
  real_T SFunction1_o5_i1;             /* '<S576>/S-Function1' */
  real_T SFunction1_o6_lq;             /* '<S576>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S576>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S576>/S-Function1' */
  real_T SFunction1_o9_ks;             /* '<S576>/S-Function1' */
  real_T SFunction1_o1_f1;             /* '<S574>/S-Function1' */
  real_T SFunction1_o2_er;             /* '<S574>/S-Function1' */
  real_T SFunction1_o3_lh;             /* '<S574>/S-Function1' */
  real_T SFunction1_o4_ls;             /* '<S574>/S-Function1' */
  real_T SFunction1_o5_dc;             /* '<S574>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S574>/S-Function1' */
  real_T SFunction1_o1_lm;             /* '<S572>/S-Function1' */
  real_T SFunction1_o2_hd;             /* '<S572>/S-Function1' */
  real_T SFunction1_o3_m3;             /* '<S572>/S-Function1' */
  real_T SFunction1_o4_e0;             /* '<S572>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S572>/S-Function1' */
  real_T SFunction1_o1_kiv;            /* '<S570>/S-Function1' */
  real_T SFunction1_o2_os;             /* '<S570>/S-Function1' */
  real_T SFunction1_o3_ot;             /* '<S570>/S-Function1' */
  real_T SFunction1_o4_bm;             /* '<S570>/S-Function1' */
  real_T SFunction1_o5_nc;             /* '<S570>/S-Function1' */
  real_T SFunction1_o6_j4;             /* '<S570>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S570>/S-Function1' */
  real_T SFunction1_o8_fl;             /* '<S570>/S-Function1' */
  real_T SFunction1_o9_cu;             /* '<S570>/S-Function1' */
  real_T SFunction1_o10_p;             /* '<S570>/S-Function1' */
  real_T SFunction1_o11_e;             /* '<S570>/S-Function1' */
  real_T SFunction1_o12_g;             /* '<S570>/S-Function1' */
  real_T SFunction1_o13_c;             /* '<S570>/S-Function1' */
  real_T SFunction1_o14_e;             /* '<S570>/S-Function1' */
  real_T SFunction1_o15_h;             /* '<S570>/S-Function1' */
  real_T SFunction1_o16_a;             /* '<S570>/S-Function1' */
  real_T SFunction1_o17_i;             /* '<S570>/S-Function1' */
  real_T SFunction1_o1_od;             /* '<S568>/S-Function1' */
  real_T SFunction1_o2_p0;             /* '<S568>/S-Function1' */
  real_T SFunction1_o3_n1;             /* '<S568>/S-Function1' */
  real_T SFunction1_o4_j0;             /* '<S568>/S-Function1' */
  real_T SFunction1_o5_mg;             /* '<S568>/S-Function1' */
  real_T SFunction1_o6_k3;             /* '<S568>/S-Function1' */
  real_T SFunction1_o7_ow;             /* '<S568>/S-Function1' */
  real_T SFunction1_o8_gl;             /* '<S568>/S-Function1' */
  real_T SFunction1_o9_nu;             /* '<S568>/S-Function1' */
  real_T SFunction1_o10_f;             /* '<S568>/S-Function1' */
  real_T SFunction1_o11_k;             /* '<S568>/S-Function1' */
  real_T timeStamp_p;                  /* '<S525>/timeStamp' */
  real_T Unit_Delay_m;                 /* '<S525>/Unit_Delay' */
  real_T SFunction1_o1_loi;            /* '<S521>/S-Function1' */
  real_T SFunction1_o2_e2;             /* '<S521>/S-Function1' */
  real_T SFunction1_o3_n2;             /* '<S521>/S-Function1' */
  real_T SFunction1_o4_nx;             /* '<S521>/S-Function1' */
  real_T SFunction1_o5_n5;             /* '<S521>/S-Function1' */
  real_T SFunction1_o6_g5;             /* '<S521>/S-Function1' */
  real_T SFunction1_o7_gm;             /* '<S521>/S-Function1' */
  real_T SFunction1_o8_mh;             /* '<S521>/S-Function1' */
  real_T SFunction1_o9_gl;             /* '<S521>/S-Function1' */
  real_T SFunction1_o10_hp;            /* '<S521>/S-Function1' */
  real_T SFunction1_o1_oq;             /* '<S519>/S-Function1' */
  real_T SFunction1_o2_iw;             /* '<S519>/S-Function1' */
  real_T SFunction1_o3_ix;             /* '<S519>/S-Function1' */
  real_T SFunction1_o4_h5;             /* '<S519>/S-Function1' */
  real_T SFunction1_o5_fy;             /* '<S519>/S-Function1' */
  real_T SFunction1_o6_ok;             /* '<S519>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S519>/S-Function1' */
  real_T SFunction1_o8_ge;             /* '<S519>/S-Function1' */
  real_T SFunction1_o9_er;             /* '<S519>/S-Function1' */
  real_T SFunction1_o10_a;             /* '<S519>/S-Function1' */
  real_T SFunction1_o11_f;             /* '<S519>/S-Function1' */
  real_T SFunction1_o12_e;             /* '<S519>/S-Function1' */
  real_T SFunction1_o13_o;             /* '<S519>/S-Function1' */
  real_T SFunction1_o14_o;             /* '<S519>/S-Function1' */
  real_T SFunction1_o15_p;             /* '<S519>/S-Function1' */
  real_T SFunction1_o16_k;             /* '<S519>/S-Function1' */
  real_T SFunction1_o17_e;             /* '<S519>/S-Function1' */
  real_T SFunction1_o18_b;             /* '<S519>/S-Function1' */
  real_T SFunction1_o19_j;             /* '<S519>/S-Function1' */
  real_T SFunction1_o20_a;             /* '<S519>/S-Function1' */
  real_T SFunction1_o21_o;             /* '<S519>/S-Function1' */
  real_T SFunction1_o22_p;             /* '<S519>/S-Function1' */
  real_T SFunction1_o23_f;             /* '<S519>/S-Function1' */
  real_T SFunction1_o24_k;             /* '<S519>/S-Function1' */
  real_T SFunction1_o25_p;             /* '<S519>/S-Function1' */
  real_T SFunction1_o1_c1m;            /* '<S517>/S-Function1' */
  real_T SFunction1_o2_p2;             /* '<S517>/S-Function1' */
  real_T SFunction1_o3_iw;             /* '<S517>/S-Function1' */
  real_T SFunction1_o4_iy;             /* '<S517>/S-Function1' */
  real_T SFunction1_o5_bm;             /* '<S517>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S517>/S-Function1' */
  real_T SFunction1_o7_gn;             /* '<S517>/S-Function1' */
  real_T SFunction1_o8_cp;             /* '<S517>/S-Function1' */
  real_T SFunction1_o9_cuu;            /* '<S517>/S-Function1' */
  real_T SFunction1_o10_g;             /* '<S517>/S-Function1' */
  real_T SFunction1_o11_np;            /* '<S517>/S-Function1' */
  real_T SFunction1_o12_b;             /* '<S517>/S-Function1' */
  real_T SFunction1_o13_n;             /* '<S517>/S-Function1' */
  real_T SFunction1_o14_j;             /* '<S517>/S-Function1' */
  real_T SFunction1_o15_g;             /* '<S517>/S-Function1' */
  real_T SFunction1_o16_e;             /* '<S517>/S-Function1' */
  real_T SFunction1_o17_m;             /* '<S517>/S-Function1' */
  real_T SFunction1_o18_o;             /* '<S517>/S-Function1' */
  real_T SFunction1_o19_c;             /* '<S517>/S-Function1' */
  real_T SFunction1_o20_n;             /* '<S517>/S-Function1' */
  real_T SFunction1_o21_h;             /* '<S517>/S-Function1' */
  real_T SFunction1_o22_k;             /* '<S517>/S-Function1' */
  real_T SFunction1_o23_j;             /* '<S517>/S-Function1' */
  real_T SFunction1_o24_c;             /* '<S517>/S-Function1' */
  real_T SFunction1_o25_b;             /* '<S517>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S515>/S-Function1' */
  real_T SFunction1_o2_iqn;            /* '<S515>/S-Function1' */
  real_T SFunction1_o3_nj;             /* '<S515>/S-Function1' */
  real_T SFunction1_o4_ex;             /* '<S515>/S-Function1' */
  real_T RX_time_el;                   /* '<S511>/Data Type Conversion9' */
  real_T RX_time_jy;                   /* '<S511>/Data Type Conversion2' */
  real_T RX_delta_time_pq;             /* '<S511>/Data Type Conversion10' */
  real_T RX_delta_time_mg;             /* '<S511>/Data Type Conversion3' */
  real_T SFunction1_o1_h4;             /* '<S513>/S-Function1' */
  real_T SFunction1_o2_aq;             /* '<S513>/S-Function1' */
  real_T SFunction1_o3_es;             /* '<S513>/S-Function1' */
  real_T SFunction1_o4_lx;             /* '<S513>/S-Function1' */
  real_T SFunction1_o5_k0;             /* '<S513>/S-Function1' */
  real_T SFunction1_o6_lx;             /* '<S513>/S-Function1' */
  real_T SFunction1_o7_f4;             /* '<S513>/S-Function1' */
  real_T SFunction1_o1_eg;             /* '<S512>/S-Function1' */
  real_T SFunction1_o2_by;             /* '<S512>/S-Function1' */
  real_T SFunction1_o3_iu;             /* '<S512>/S-Function1' */
  real_T SFunction1_o4_am;             /* '<S512>/S-Function1' */
  real_T SFunction1_o5_hr;             /* '<S512>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S512>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S512>/S-Function1' */
  real_T SFunction1_o1_mm;             /* '<S510>/S-Function1' */
  real_T SFunction1_o2_nx;             /* '<S510>/S-Function1' */
  real_T SFunction1_o3_d3;             /* '<S510>/S-Function1' */
  real_T SFunction1_o4_iu;             /* '<S510>/S-Function1' */
  real_T SFunction1_o5_hq;             /* '<S510>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S510>/S-Function1' */
  real_T SFunction1_o7_l3;             /* '<S510>/S-Function1' */
  real_T SFunction1_o8_ci;             /* '<S510>/S-Function1' */
  real_T SFunction1_o9_l5;             /* '<S510>/S-Function1' */
  real_T SFunction1_o10_nk;            /* '<S510>/S-Function1' */
  real_T SFunction1_o11_n0;            /* '<S510>/S-Function1' */
  real_T SFunction1_o12_f;             /* '<S510>/S-Function1' */
  real_T SFunction1_o13_p;             /* '<S510>/S-Function1' */
  real_T SFunction1_o14_g;             /* '<S510>/S-Function1' */
  real_T SFunction1_o15_d;             /* '<S510>/S-Function1' */
  real_T SFunction1_o16_c;             /* '<S510>/S-Function1' */
  real_T SFunction1_o17_p;             /* '<S510>/S-Function1' */
  real_T SFunction1_o18_c;             /* '<S510>/S-Function1' */
  real_T SFunction1_o19_n;             /* '<S510>/S-Function1' */
  real_T SFunction1_o20_k;             /* '<S510>/S-Function1' */
  real_T SFunction1_o21_p;             /* '<S510>/S-Function1' */
  real_T SFunction1_o22_c;             /* '<S510>/S-Function1' */
  real_T SFunction1_o23_ju;            /* '<S510>/S-Function1' */
  real_T SFunction1_o1_ap;             /* '<S508>/S-Function1' */
  real_T SFunction1_o2_ge;             /* '<S508>/S-Function1' */
  real_T SFunction1_o3_kf;             /* '<S508>/S-Function1' */
  real_T SFunction1_o4_ay;             /* '<S508>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S508>/S-Function1' */
  real_T SFunction1_o7_bt;             /* '<S508>/S-Function1' */
  real_T SFunction1_o9_ey;             /* '<S508>/S-Function1' */
  real_T SFunction1_o10_gs;            /* '<S508>/S-Function1' */
  real_T SFunction1_o11_hb;            /* '<S508>/S-Function1' */
  real_T SFunction1_o12_j;             /* '<S508>/S-Function1' */
  real_T SFunction1_o13_m;             /* '<S508>/S-Function1' */
  real_T SFunction1_o14_gr;            /* '<S508>/S-Function1' */
  real_T SFunction1_o15_a;             /* '<S508>/S-Function1' */
  real_T SFunction1_o16_o;             /* '<S508>/S-Function1' */
  real_T SFunction1_o17_c;             /* '<S508>/S-Function1' */
  real_T SFunction1_o18_e;             /* '<S508>/S-Function1' */
  real_T SFunction1_o19_g;             /* '<S508>/S-Function1' */
  real_T SFunction1_o20_j;             /* '<S508>/S-Function1' */
  real_T SFunction1_o21_g;             /* '<S508>/S-Function1' */
  real_T SFunction1_o22_b;             /* '<S508>/S-Function1' */
  real_T SFunction1_o23_d;             /* '<S508>/S-Function1' */
  real_T SFunction1_o1_jr;             /* '<S506>/S-Function1' */
  real_T SFunction1_o2_mq;             /* '<S506>/S-Function1' */
  real_T SFunction1_o3_a1;             /* '<S506>/S-Function1' */
  real_T SFunction1_o4_nl;             /* '<S506>/S-Function1' */
  real_T SFunction1_o5_b3;             /* '<S506>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S506>/S-Function1' */
  real_T SFunction1_o7_iq;             /* '<S506>/S-Function1' */
  real_T SFunction1_o8_i;              /* '<S506>/S-Function1' */
  real_T SFunction1_o9_p;              /* '<S506>/S-Function1' */
  real_T SFunction1_o10_e1;            /* '<S506>/S-Function1' */
  real_T SFunction1_o11_fh;            /* '<S506>/S-Function1' */
  real_T SFunction1_o12_e2;            /* '<S506>/S-Function1' */
  real_T SFunction1_o13_g;             /* '<S506>/S-Function1' */
  real_T SFunction1_o14_b;             /* '<S506>/S-Function1' */
  real_T SFunction1_o15_k;             /* '<S506>/S-Function1' */
  real_T SFunction1_o16_f;             /* '<S506>/S-Function1' */
  real_T SFunction1_o17_et;            /* '<S506>/S-Function1' */
  real_T SFunction1_o18_g;             /* '<S506>/S-Function1' */
  real_T SFunction1_o19_k;             /* '<S506>/S-Function1' */
  real_T SFunction1_o20_c;             /* '<S506>/S-Function1' */
  real_T SFunction1_o21_j;             /* '<S506>/S-Function1' */
  real_T SFunction1_o22_d;             /* '<S506>/S-Function1' */
  real_T SFunction1_o23_m;             /* '<S506>/S-Function1' */
  real_T SFunction1_o24_b;             /* '<S506>/S-Function1' */
  real_T SFunction1_o25_g;             /* '<S506>/S-Function1' */
  real_T SFunction1_o26_n;             /* '<S506>/S-Function1' */
  real_T SFunction1_o27_o;             /* '<S506>/S-Function1' */
  real_T SFunction1_o28_m;             /* '<S506>/S-Function1' */
  real_T SFunction1_o29;               /* '<S506>/S-Function1' */
  real_T SFunction1_o30;               /* '<S506>/S-Function1' */
  real_T SFunction1_o31;               /* '<S506>/S-Function1' */
  real_T SFunction1_o32;               /* '<S506>/S-Function1' */
  real_T SFunction1_o33;               /* '<S506>/S-Function1' */
  real_T SFunction1_o34;               /* '<S506>/S-Function1' */
  real_T SFunction1_o35;               /* '<S506>/S-Function1' */
  real_T SFunction1_o36;               /* '<S506>/S-Function1' */
  real_T SFunction1_o37;               /* '<S506>/S-Function1' */
  real_T SFunction1_o38;               /* '<S506>/S-Function1' */
  real_T SFunction1_o39;               /* '<S506>/S-Function1' */
  real_T SFunction1_o40;               /* '<S506>/S-Function1' */
  real_T SFunction1_o41;               /* '<S506>/S-Function1' */
  real_T SFunction1_o42;               /* '<S506>/S-Function1' */
  real_T SFunction1_o43;               /* '<S506>/S-Function1' */
  real_T SFunction1_o44;               /* '<S506>/S-Function1' */
  real_T SFunction1_o45;               /* '<S506>/S-Function1' */
  real_T SFunction1_o46;               /* '<S506>/S-Function1' */
  real_T SFunction1_o47;               /* '<S506>/S-Function1' */
  real_T SFunction1_o48;               /* '<S506>/S-Function1' */
  real_T SFunction1_o49;               /* '<S506>/S-Function1' */
  real_T SFunction1_o50;               /* '<S506>/S-Function1' */
  real_T SFunction1_o51;               /* '<S506>/S-Function1' */
  real_T SFunction1_o52;               /* '<S506>/S-Function1' */
  real_T SFunction1_o53;               /* '<S506>/S-Function1' */
  real_T SFunction1_o54;               /* '<S506>/S-Function1' */
  real_T SFunction1_o55;               /* '<S506>/S-Function1' */
  real_T SFunction1_o56;               /* '<S506>/S-Function1' */
  real_T SFunction1_o57;               /* '<S506>/S-Function1' */
  real_T SFunction1_o58;               /* '<S506>/S-Function1' */
  real_T SFunction1_o59;               /* '<S506>/S-Function1' */
  real_T SFunction1_o60;               /* '<S506>/S-Function1' */
  real_T SFunction1_o61;               /* '<S506>/S-Function1' */
  real_T SFunction1_o62;               /* '<S506>/S-Function1' */
  real_T SFunction1_o63;               /* '<S506>/S-Function1' */
  real_T SFunction1_o64;               /* '<S506>/S-Function1' */
  real_T SFunction1_o65;               /* '<S506>/S-Function1' */
  real_T SFunction1_o66;               /* '<S506>/S-Function1' */
  real_T SFunction1_o67;               /* '<S506>/S-Function1' */
  real_T SFunction1_o68;               /* '<S506>/S-Function1' */
  real_T SFunction1_o69;               /* '<S506>/S-Function1' */
  real_T SFunction1_o70;               /* '<S506>/S-Function1' */
  real_T SFunction1_o71;               /* '<S506>/S-Function1' */
  real_T SFunction1_o72;               /* '<S506>/S-Function1' */
  real_T SFunction1_o73;               /* '<S506>/S-Function1' */
  real_T SFunction1_o74;               /* '<S506>/S-Function1' */
  real_T SFunction1_o1_o5;             /* '<S504>/S-Function1' */
  real_T SFunction1_o2_bp;             /* '<S504>/S-Function1' */
  real_T SFunction1_o3_l0;             /* '<S504>/S-Function1' */
  real_T SFunction1_o4_gs;             /* '<S504>/S-Function1' */
  real_T SFunction1_o5_om;             /* '<S504>/S-Function1' */
  real_T SFunction1_o1_ih;             /* '<S502>/S-Function1' */
  real_T SFunction1_o2_ov;             /* '<S502>/S-Function1' */
  real_T SFunction1_o3_oc;             /* '<S502>/S-Function1' */
  real_T SFunction1_o4_ey;             /* '<S502>/S-Function1' */
  real_T SFunction1_o5_op;             /* '<S502>/S-Function1' */
  real_T SFunction1_o6_it;             /* '<S502>/S-Function1' */
  real_T SFunction1_o7_lsr;            /* '<S502>/S-Function1' */
  real_T SFunction1_o8_n5;             /* '<S502>/S-Function1' */
  real_T SFunction1_o1_lc;             /* '<S500>/S-Function1' */
  real_T SFunction1_o2_g0;             /* '<S500>/S-Function1' */
  real_T SFunction1_o3_as;             /* '<S500>/S-Function1' */
  real_T SFunction1_o4_n3;             /* '<S500>/S-Function1' */
  real_T SFunction1_o5_mt;             /* '<S500>/S-Function1' */
  real_T SFunction1_o6_iv;             /* '<S500>/S-Function1' */
  real_T SFunction1_o7_g5;             /* '<S500>/S-Function1' */
  real_T SFunction1_o8_fg;             /* '<S500>/S-Function1' */
  real_T SFunction1_o9_b;              /* '<S500>/S-Function1' */
  real_T SFunction1_o10_o;             /* '<S500>/S-Function1' */
  real_T SFunction1_o11_m;             /* '<S500>/S-Function1' */
  real_T SFunction1_o1_ks;             /* '<S498>/S-Function1' */
  real_T SFunction1_o2_d0;             /* '<S498>/S-Function1' */
  real_T SFunction1_o3_ci;             /* '<S498>/S-Function1' */
  real_T SFunction1_o4_amf;            /* '<S498>/S-Function1' */
  real_T SFunction1_o5_js;             /* '<S498>/S-Function1' */
  real_T SFunction1_o6_cy;             /* '<S498>/S-Function1' */
  real_T SFunction1_o7_ba;             /* '<S498>/S-Function1' */
  real_T SFunction1_o8_a;              /* '<S498>/S-Function1' */
  real_T SFunction1_o1_po;             /* '<S496>/S-Function1' */
  real_T SFunction1_o2_nw;             /* '<S496>/S-Function1' */
  real_T SFunction1_o3_hn;             /* '<S496>/S-Function1' */
  real_T SFunction1_o4_p4l;            /* '<S496>/S-Function1' */
  real_T SFunction1_o5_mp;             /* '<S496>/S-Function1' */
  real_T SFunction1_o6_iy;             /* '<S496>/S-Function1' */
  real_T SFunction1_o7_oe;             /* '<S496>/S-Function1' */
  real_T SFunction1_o8_c5;             /* '<S496>/S-Function1' */
  real_T SFunction1_o9_ix;             /* '<S496>/S-Function1' */
  real_T SFunction1_o10_at;            /* '<S496>/S-Function1' */
  real_T SFunction1_o11_ex;            /* '<S496>/S-Function1' */
  real_T SFunction1_o12_l;             /* '<S496>/S-Function1' */
  real_T SFunction1_o13_h;             /* '<S496>/S-Function1' */
  real_T SFunction1_o1_jl;             /* '<S488>/S-Function1' */
  real_T SFunction1_o2_k4;             /* '<S488>/S-Function1' */
  real_T SFunction1_o3_kd;             /* '<S488>/S-Function1' */
  real_T SFunction1_o4_ld;             /* '<S488>/S-Function1' */
  real_T SFunction1_o5_hu;             /* '<S488>/S-Function1' */
  real_T SFunction1_o6_iw;             /* '<S488>/S-Function1' */
  real_T SFunction1_o7_iw;             /* '<S488>/S-Function1' */
  real_T SFunction1_o8_ju;             /* '<S488>/S-Function1' */
  real_T SFunction1_o9_d4;             /* '<S488>/S-Function1' */
  real_T SFunction1_o10_atw;           /* '<S488>/S-Function1' */
  real_T SFunction1_o11_da;            /* '<S488>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S479>/S-Function1' */
  real_T SFunction1_o2_jr;             /* '<S479>/S-Function1' */
  real_T SFunction1_o3_bl;             /* '<S479>/S-Function1' */
  real_T SFunction1_o4_nb;             /* '<S479>/S-Function1' */
  real_T SFunction1_o5_o3;             /* '<S479>/S-Function1' */
  real_T SFunction1_o6_ny;             /* '<S479>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S479>/S-Function1' */
  real_T SFunction1_o8_fx;             /* '<S479>/S-Function1' */
  real_T SFunction1_o9_dj;             /* '<S479>/S-Function1' */
  real_T SFunction1_o10_cs;            /* '<S479>/S-Function1' */
  real_T SFunction1_o11_mb;            /* '<S479>/S-Function1' */
  real_T Sum_l;                        /* '<S405>/Sum' */
  real_T for_logging;                  /* '<S399>/for_logging' */
  real_T for_logging1;                 /* '<S399>/for_logging1' */
  real_T ms_to_kmh;                    /* '<S399>/m//s_to_km//h' */
  real_T ms_to_kmh_2;                  /* '<S399>/m//s_to_km//h_2' */
  real_T for_logging2;                 /* '<S399>/for_logging2' */
  real_T for_logging3;                 /* '<S399>/for_logging3' */
  real_T for_logging4;                 /* '<S399>/for_logging4' */
  real_T for_logging5;                 /* '<S399>/for_logging5' */
  real_T for_logging6;                 /* '<S399>/for_logging6' */
  real_T HDOP__f;                      /* '<S397>/Bus Selector1' */
  real_T FrontAxleSpeed_dv;            /* '<S397>/Bus Selector4' */
  real_T kph2mps;                      /* '<S397>/kph2mps' */
  real_T Product_c;                    /* '<S397>/Product' */
  real_T FrontAxleSpeed_dvq;           /* '<S397>/Bus Selector4' */
  real_T kph2mps1;                     /* '<S397>/kph2mps1' */
  real_T Product1_h;                   /* '<S397>/Product1' */
  real_T UnitDelay1;                   /* '<S397>/Unit Delay1' */
  real_T InitialHeading;               /* '<S398>/InitialHeading' */
  real_T InitialPosition;              /* '<S398>/InitialPosition' */
  real_T InitialXPosition;             /* '<S398>/InitialXPosition' */
  real_T InitialYPosition;             /* '<S398>/InitialYPosition' */
  real_T FrontAxleSpeed_dvqf;          /* '<S71>/Bus Selector' */
  real_T kph2ms;                       /* '<S71>/kph2ms' */
  real_T LongitudnalPosition;          /* '<S398>/LongitudnalPosition' */
  real_T TmpRTBAtVehHeadingInport1;    /* '<S398>/In2' */
  real_T TrigonometricFunction;        /* '<S398>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S398>/Trigonometric Function1' */
  real_T VehHeading;                   /* '<S398>/VehHeading' */
  real_T XPosition;                    /* '<S398>/XPosition' */
  real_T YPosition;                    /* '<S398>/YPosition' */
  real_T Subtract_a;                   /* '<S96>/Subtract' */
  real_T UnitDelay1_f;                 /* '<S97>/Unit Delay1' */
  real_T Switch_a;                     /* '<S97>/Switch' */
  real_T DataTypeConversion1_ht;       /* '<S83>/Data Type Conversion1' */
  real_T uDLookupTable;                /* '<S83>/2-D Lookup Table' */
  real_T DataTypeConversion5_o;        /* '<S77>/Data Type Conversion5' */
  real_T distanceSpdTarget_e;          /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_target_o;       /* '<S81>/Multiport Switch' */
  real_T VSPD_TARGET_KPH_APV_g;        /* '<S81>/Signal Conversion16' */
  real_T VSPD_HYST_KPH_APV_f;          /* '<S81>/Saturation9' */
  real_T Add_k;                        /* '<S111>/Add' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_AP_b;/* '<S81>/Saturation1' */
  real_T DataTypeConversion4_i;        /* '<S79>/Data Type Conversion4' */
  real_T ThrottlePID_Y_m;              /* '<S79>/Switch' */
  real_T MultiportSwitch;              /* '<S83>/Multiport Switch' */
  real_T DataTypeConversion1_n3;       /* '<S82>/Data Type Conversion1' */
  real_T uD_Lookup_Table;              /* '<S85>/2D_Lookup_Table' */
  real_T DataTypeConversion1_a;        /* '<S84>/Data Type Conversion1' */
  real_T Subtract_j;                   /* '<S84>/Subtract' */
  real_T Divide_h;                     /* '<S84>/Divide' */
  real_T Primary_brake_circuit_pressure_;/* '<S106>/Gain4' */
  real_T Secondary_brake_circuit_pressur;/* '<S106>/Gain5' */
  real_T Add_d;                        /* '<S107>/Add' */
  real_T Gain_go;                      /* '<S107>/Gain' */
  real_T Brake_pressure_target_kpa;    /* '<S107>/MinMax' */
  real_T Bendix_2C2_Primary_brake_circui;/* '<S106>/Gain1' */
  real_T Bendix_2C2_Secondary_brake_circ;/* '<S106>/Gain2' */
  real_T Add_n;                        /* '<S108>/Add' */
  real_T brake_system_avg_appl_pressure_;/* '<S108>/Gain' */
  real_T Primary_brake_circuit_pressur_n;/* '<S106>/Gain3' */
  real_T Divide2;                      /* '<S108>/Divide2' */
  real_T Gain5;                        /* '<S108>/Gain5' */
  real_T Brake_appl_percent;           /* '<S108>/Saturation3' */
  real_T Unit_Delay_k4;                /* '<S349>/Unit_Delay' */
  real_T MinMax_d;                     /* '<S349>/MinMax' */
  real_T Xold_h;                       /* '<S396>/FixPt Unit Delay1' */
  real_T Init_ip;                      /* '<S396>/Init' */
  real_T Abs_e;                        /* '<S392>/Abs' */
  real_T DigitalClock;                 /* '<S393>/Digital Clock' */
  real_T Unit_Delay_d;                 /* '<S393>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S393>/Subtract' */
  real_T Product1_hp;                  /* '<S392>/Product1' */
  real_T Add1_n;                       /* '<S392>/Add1' */
  real_T MinMax2_g;                    /* '<S392>/MinMax2' */
  real_T Abs1_h;                       /* '<S392>/Abs1' */
  real_T Product2_c;                   /* '<S392>/Product2' */
  real_T Subtract1_n;                  /* '<S392>/Subtract1' */
  real_T MinMax1_h;                    /* '<S392>/MinMax1' */
  real_T Unit_Delay_n;                 /* '<S347>/Unit_Delay' */
  real_T MinMax_n;                     /* '<S347>/MinMax' */
  real_T Xold_fv;                      /* '<S385>/FixPt Unit Delay1' */
  real_T Init_b;                       /* '<S385>/Init' */
  real_T Abs_ez;                       /* '<S381>/Abs' */
  real_T DigitalClock_b;               /* '<S382>/Digital Clock' */
  real_T Unit_Delay_nx;                /* '<S382>/Unit_Delay' */
  real_T Subtract_i;                   /* '<S382>/Subtract' */
  real_T Product1_i;                   /* '<S381>/Product1' */
  real_T Add1_b;                       /* '<S381>/Add1' */
  real_T MinMax2_k;                    /* '<S381>/MinMax2' */
  real_T Abs1_c;                       /* '<S381>/Abs1' */
  real_T Product2_n;                   /* '<S381>/Product2' */
  real_T Subtract1_h;                  /* '<S381>/Subtract1' */
  real_T MinMax1_j;                    /* '<S381>/MinMax1' */
  real_T pathSpdLimit_a;               /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_abs_max;        /* '<S81>/Multiport Switch' */
  real_T distance_o;                   /* '<S81>/Bus Selector' */
  real_T Distance_to_achieve_speed_targe;/* '<S81>/Multiport Switch' */
  real_T Uk1[2];                       /* '<S344>/Delay Input1' */
  real_T Saturation5;                  /* '<S346>/Saturation5' */
  real_T MinMax6;                      /* '<S346>/MinMax6' */
  real_T Gain1_e;                      /* '<S346>/Gain1' */
  real_T VSPD_TARGET_KPH_APV_gu;       /* '<S346>/Saturation4' */
  real_T MinMax1_f;                    /* '<S346>/MinMax1' */
  real_T Gain2;                        /* '<S346>/Gain2' */
  real_T Saturation6;                  /* '<S346>/Saturation6' */
  real_T Acceleration_target_ms2;      /* '<S81>/Multiport Switch' */
  real_T Saturation7;                  /* '<S346>/Saturation7' */
  real_T Saturation1;                  /* '<S346>/Saturation1' */
  real_T Jerk_target_ms3;              /* '<S81>/Multiport Switch' */
  real_T Saturation2;                  /* '<S346>/Saturation2' */
  real_T Vehicle_speed_vector_kph[33]; /* '<S346>/Gain3' */
  real_T MinMax3;                      /* '<S358>/MinMax3' */
  real_T Unit_Delay_f;                 /* '<S362>/Unit_Delay' */
  real_T MinMax5;                      /* '<S358>/MinMax5' */
  real_T Subtract_al;                  /* '<S358>/Subtract' */
  real_T Abs_m;                        /* '<S358>/Abs' */
  real_T MinMax4;                      /* '<S358>/MinMax4' */
  real_T MinMax6_j;                    /* '<S358>/MinMax6' */
  real_T Subtract1_c;                  /* '<S358>/Subtract1' */
  real_T Abs1_h5;                      /* '<S358>/Abs1' */
  real_T MinMax8;                      /* '<S358>/MinMax8' */
  real_T MinMax7;                      /* '<S358>/MinMax7' */
  real_T MinMax10;                     /* '<S358>/MinMax10' */
  real_T MinMax9;                      /* '<S358>/MinMax9' */
  real_T Subtract2;                    /* '<S358>/Subtract2' */
  real_T Abs2;                         /* '<S358>/Abs2' */
  real_T Xold_p;                       /* '<S373>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S373>/Init' */
  real_T Gain1_c;                      /* '<S359>/Gain1' */
  real_T DigitalClock_f;               /* '<S371>/Digital Clock' */
  real_T Unit_Delay_e;                 /* '<S371>/Unit_Delay' */
  real_T Subtract_b;                   /* '<S371>/Subtract' */
  real_T Product1_a;                   /* '<S368>/Product1' */
  real_T Add_h;                        /* '<S368>/Add' */
  real_T MinMax_a;                     /* '<S368>/MinMax' */
  real_T LookupTableDynamic;           /* '<S359>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S351>/Delay Input1' */
  real_T Xold_o;                       /* '<S357>/FixPt Unit Delay1' */
  real_T Init_p;                       /* '<S357>/Init' */
  real_T Vehicle_speed_target_c;       /* '<S352>/Unit_Delay' */
  real_T Vehicle_speed;                /* '<S352>/Unit_Delay' */
  real_T Distance_m;                   /* '<S352>/Unit_Delay' */
  real_T err;                          /* '<S352>/Subtract' */
  real_T err_abs;                      /* '<S352>/Abs2' */
  real_T Gain2_k;                      /* '<S352>/Gain2' */
  real_T Saturation4;                  /* '<S352>/Saturation4' */
  real_T time_to_target_vspd_secs;     /* '<S352>/Divide2' */
  real_T DigitalClock_p;               /* '<S350>/Digital Clock' */
  real_T Unit_Delay_b;                 /* '<S350>/Unit_Delay' */
  real_T Subtract_g;                   /* '<S350>/Subtract' */
  real_T MinMax3_n;                    /* '<S352>/MinMax3' */
  real_T Saturation1_e;                /* '<S352>/Saturation1' */
  real_T Divide_e;                     /* '<S352>/Divide' */
  real_T Abs_ma;                       /* '<S353>/Abs' */
  real_T Product1_iv;                  /* '<S353>/Product1' */
  real_T Add1_bf;                      /* '<S353>/Add1' */
  real_T MinMax2_c;                    /* '<S353>/MinMax2' */
  real_T Abs1_f;                       /* '<S353>/Abs1' */
  real_T Product2_m;                   /* '<S353>/Product2' */
  real_T Subtract1_h2;                 /* '<S353>/Subtract1' */
  real_T MinMax1_p;                    /* '<S353>/MinMax1' */
  real_T MinMax_o;                     /* '<S81>/MinMax' */
  real_T Vehicle_speed_target_n;       /* '<S81>/Saturation8' */
  real_T uD_Lookup_Table_l;            /* '<S202>/2D_Lookup_Table' */
  real_T Divide_f;                     /* '<S108>/Divide' */
  real_T Gain1_l;                      /* '<S108>/Gain1' */
  real_T Brake_appl_percent_to_achieve_d;/* '<S108>/Saturation1' */
  real_T ACCEL_LIM_MS2_APV_b;          /* '<S81>/Saturation2' */
  real_T uD_Lookup_Table_i;            /* '<S203>/2D_Lookup_Table' */
  real_T Divide1_f;                    /* '<S108>/Divide1' */
  real_T Gain2_e;                      /* '<S108>/Gain2' */
  real_T Brake_appl_percent_for_maximum_;/* '<S108>/Saturation2' */
  real_T DataTypeConversion2_l;        /* '<S77>/Data Type Conversion2' */
  real_T uD_Lookup_Table_le;           /* '<S201>/2D_Lookup_Table' */
  real_T Decel_rate_calculated_ms2;    /* '<S108>/Saturation4' */
  real_T DataTypeConversion_p;         /* '<S109>/Data Type Conversion' */
  real_T DataTypeConversion1_k;        /* '<S109>/Data Type Conversion1' */
  real_T Add_m;                        /* '<S109>/Add' */
  real_T Gain_j;                       /* '<S109>/Gain' */
  real_T MinMax1_i;                    /* '<S205>/MinMax1' */
  real_T Saturation_nc;                /* '<S205>/Saturation' */
  real_T Divide_ae;                    /* '<S205>/Divide' */
  real_T Product2_o;                   /* '<S205>/Product2' */
  real_T Subtract1_e;                  /* '<S205>/Subtract1' */
  real_T Unit_Delay2_g;                /* '<S205>/Unit_Delay2' */
  real_T Product1_o;                   /* '<S205>/Product1' */
  real_T Add1_n1;                      /* '<S205>/Add1' */
  real_T TSamp;                        /* '<S204>/TSamp' */
  real_T Uk1_b;                        /* '<S204>/UD' */
  real_T Diff;                         /* '<S204>/Diff' */
  real_T BrakingPID_Y_percent;         /* '<S77>/MinMax' */
  real_T BrakingPID_Y_k;               /* '<S77>/Gain' */
  real_T CurveBasedSpeedSetpoint;      /* '<S79>/CurveBasedSpeedSetpoint' */
  real_T uDLookupTable1;               /* '<S80>/1-D Lookup Table1' */
  real_T MinMax1_pr;                   /* '<S329>/MinMax1' */
  real_T Saturation_ns;                /* '<S329>/Saturation' */
  real_T Divide_o;                     /* '<S329>/Divide' */
  real_T Product2_b;                   /* '<S329>/Product2' */
  real_T Subtract1_ei;                 /* '<S329>/Subtract1' */
  real_T Unit_Delay2_k;                /* '<S329>/Unit_Delay2' */
  real_T Product1_n;                   /* '<S329>/Product1' */
  real_T Add1_k;                       /* '<S329>/Add1' */
  real_T Abs_i;                        /* '<S284>/Abs' */
  real_T Add_p;                        /* '<S284>/Add' */
  real_T Switch_g;                     /* '<S284>/Switch' */
  real_T MinMax1_a;                    /* '<S330>/MinMax1' */
  real_T Saturation_e;                 /* '<S330>/Saturation' */
  real_T Divide_d;                     /* '<S330>/Divide' */
  real_T Product2_f;                   /* '<S330>/Product2' */
  real_T Subtract1_b;                  /* '<S330>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S330>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S330>/Product1' */
  real_T Add1_pt;                      /* '<S330>/Add1' */
  real_T Sign;                         /* '<S284>/Sign' */
  real_T Product_cf;                   /* '<S284>/Product' */
  real_T MinMax1_e;                    /* '<S331>/MinMax1' */
  real_T Saturation_o;                 /* '<S331>/Saturation' */
  real_T Divide_j;                     /* '<S331>/Divide' */
  real_T Product2_nk;                  /* '<S331>/Product2' */
  real_T Subtract1_eh;                 /* '<S331>/Subtract1' */
  real_T Unit_Delay2_c;                /* '<S331>/Unit_Delay2' */
  real_T Product1_cc;                  /* '<S331>/Product1' */
  real_T Add1_f;                       /* '<S331>/Add1' */
  real_T Switch1_f;                    /* '<S284>/Switch1' */
  real_T correctedError;               /* '<S284>/corrected Error' */
  real_T Switch_h;                     /* '<S285>/Switch' */
  real_T Switch1_j;                    /* '<S285>/Switch1' */
  real_T SteerCtrlErrRaw;              /* '<S80>/sign' */
  real_T DataTypeConversion1_ev;       /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S288>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_k;         /* '<S80>/Data Type Conversion' */
  real_T SteeringControlPGainSpeedFactor;/* '<S80>/SteeringControlPGainSpeedFactor' */
  real_T SteerCtrlPgain;               /* '<S80>/Product1' */
  real_T Gain_c;                       /* '<S80>/Gain' */
  real_T Product_d;                    /* '<S298>/Product' */
  real_T Divide_ag;                    /* '<S298>/Divide' */
  real_T Product1_hr;                  /* '<S298>/Product1' */
  real_T UnitDelay_m;                  /* '<S297>/Unit Delay' */
  real_T Switch_ov;                    /* '<S297>/Switch' */
  real_T Sign1;                        /* '<S300>/Sign1' */
  real_T Switch1_jw;                   /* '<S300>/Switch1' */
  real_T UnitDelay_o;                  /* '<S298>/Unit Delay' */
  real_T Add_px;                       /* '<S298>/Add' */
  real_T Divide1_b;                    /* '<S298>/Divide1' */
  real_T UnitDelay1_e;                 /* '<S298>/Unit Delay1' */
  real_T Add3;                         /* '<S298>/Add3' */
  real_T Add1_m;                       /* '<S298>/Add1' */
  real_T Switch_p;                     /* '<S299>/Switch' */
  real_T Switch2_i;                    /* '<S299>/Switch2' */
  real_T previewSteeringAngle_b;       /* '<S80>/Bus Selector2' */
  real_T rad2deg1;                     /* '<S80>/rad2deg1' */
  real_T Add2;                         /* '<S80>/Add2' */
  real_T uDLookupTable_a;              /* '<S286>/1-D Lookup Table' */
  real_T AdjustedStanleyGain;          /* '<S286>/AdjustedStanleyGain' */
  real_T Step;                         /* '<S280>/Step' */
  real_T TmpRTBAtsignCurveOffsetInport1;/* '<S80>/From26' */
  real_T signCurveOffset;              /* '<S80>/signCurveOffset' */
  real_T Conversion_b;                 /* '<S293>/Conversion' */
  real_T mm2m;                         /* '<S80>/mm2m' */
  real_T Switch3;                      /* '<S80>/Switch3' */
  real_T sign3;                        /* '<S80>/sign3' */
  real_T crossTrackError;              /* '<S80>/crossTrackError' */
  real_T Product_p;                    /* '<S286>/Product' */
  real_T Saturation_a;                 /* '<S286>/Saturation' */
  real_T kph2mps_;                     /* '<S286>/kph2mps_' */
  real_T TrigonometricFunction_p;      /* '<S286>/Trigonometric Function' */
  real_T deg2rad1;                     /* '<S80>/deg2rad1' */
  real_T TmpRTBAtAdd2Inport2;          /* '<S286>/desPathHeading_rad' */
  real_T Add2_g;                       /* '<S286>/Add2' */
  real_T desHeadingWeight;             /* '<S286>/desHeadingWeight' */
  real_T Add1_hl;                      /* '<S286>/Add1' */
  real_T DataTypeConversion_l5;        /* '<S312>/Data Type Conversion' */
  real_T SaturationSpeedLookup;        /* '<S312>/Saturation Speed Lookup' */
  real_T sampletime;                   /* '<S323>/sample time' */
  real_T deltariselimit;               /* '<S323>/delta rise limit' */
  real_T sampletime_c;                 /* '<S310>/sample time' */
  real_T deltariselimit_c;             /* '<S310>/delta rise limit' */
  real_T Yk1;                          /* '<S310>/Delay Input2' */
  real_T UkYk1;                        /* '<S310>/Difference Inputs1' */
  real_T deltafalllimit;               /* '<S310>/delta fall limit' */
  real_T Switch_i;                     /* '<S319>/Switch' */
  real_T Switch2_f;                    /* '<S319>/Switch2' */
  real_T DifferenceInputs2;            /* '<S310>/Difference Inputs2' */
  real_T ProportionalGain;             /* '<S309>/Proportional Gain' */
  real_T Integrator;                   /* '<S309>/Integrator' */
  real_T DerivativeGain;               /* '<S309>/Derivative Gain' */
  real_T Filter;                       /* '<S309>/Filter' */
  real_T SumD;                         /* '<S309>/SumD' */
  real_T FilterCoefficient;            /* '<S309>/Filter Coefficient' */
  real_T Sum_c;                        /* '<S309>/Sum' */
  real_T Saturate;                     /* '<S309>/Saturate' */
  real_T Uk1_m;                        /* '<S313>/Delay Input' */
  real_T ZeroUk1;                      /* '<S313>/GainZero' */
  real_T Yk1_p;                        /* '<S313>/Delay Output' */
  real_T PoleYk1;                      /* '<S313>/GainPole' */
  real_T PoleYk1UkZeroUk1;             /* '<S313>/Sum' */
  real_T Downcast;                     /* '<S313>/Downcast' */
  real_T Subtract_c;                   /* '<S283>/Subtract' */
  real_T uDLookupTable_j;              /* '<S283>/1-D Lookup Table' */
  real_T deg2rad;                      /* '<S283>/deg2rad' */
  real_T invert;                       /* '<S283>/invert' */
  real_T PGain;                        /* '<S283>/PGain' */
  real_T sampletime_a;                 /* '<S311>/sample time' */
  real_T deltariselimit_o;             /* '<S311>/delta rise limit' */
  real_T Sum_ly;                       /* '<S283>/Sum' */
  real_T RateFeedbackGain;             /* '<S283>/RateFeedbackGain' */
  real_T FeedforwardGain;              /* '<S283>/FeedforwardGain' */
  real_T UndersteerCorrection;         /* '<S283>/UndersteerCorrection' */
  real_T Sum2;                         /* '<S283>/Sum2' */
  real_T Yk1_o;                        /* '<S311>/Delay Input2' */
  real_T UkYk1_n;                      /* '<S311>/Difference Inputs1' */
  real_T deltafalllimit_o;             /* '<S311>/delta fall limit' */
  real_T Switch_e;                     /* '<S320>/Switch' */
  real_T Switch2_e;                    /* '<S320>/Switch2' */
  real_T DifferenceInputs2_a;          /* '<S311>/Difference Inputs2' */
  real_T Sum3;                         /* '<S283>/Sum3' */
  real_T DiscreteTimeIntegrator;       /* '<S303>/Discrete-Time Integrator' */
  real_T Sum4;                         /* '<S283>/Sum4' */
  real_T Yk1_pm;                       /* '<S323>/Delay Input2' */
  real_T UkYk1_f;                      /* '<S323>/Difference Inputs1' */
  real_T RateLimitLower;               /* '<S312>/Gain3' */
  real_T deltafalllimit_n;             /* '<S323>/delta fall limit' */
  real_T Switch_f;                     /* '<S325>/Switch' */
  real_T Switch2_fa;                   /* '<S325>/Switch2' */
  real_T DifferenceInputs2_m;          /* '<S323>/Difference Inputs2' */
  real_T Gain1_f;                      /* '<S312>/Gain1' */
  real_T Switch_hx;                    /* '<S324>/Switch' */
  real_T Switch2_k;                    /* '<S324>/Switch2' */
  real_T MultiportSwitch2;             /* '<S80>/Multiport Switch2' */
  real_T DataTypeConversion6_pa;       /* '<S80>/Data Type Conversion6' */
  real_T rad2deg;                      /* '<S80>/rad2deg' */
  real_T MultiportSwitch1;             /* '<S80>/Multiport Switch1' */
  real_T uD_Lookup_Table_a;            /* '<S278>/1D_Lookup_Table' */
  real_T numLanePoints_j;              /* '<S80>/Data Type Conversion4' */
  real_T DiscreteTimeIntegrator_h;     /* '<S80>/Discrete-Time Integrator' */
  real_T Switch_k;                     /* '<S298>/Switch' */
  real_T Gain_o;                       /* '<S303>/Gain' */
  real_T IntegralGain;                 /* '<S309>/Integral Gain' */
  real_T Abs_ig;                       /* '<S312>/Abs' */
  real_T Abs1_ft;                      /* '<S312>/Abs1' */
  real_T Subtract_o;                   /* '<S312>/Subtract' */
  real_T Abs2_k;                       /* '<S312>/Abs2' */
  real_T RateCurvature;                /* '<S312>/Curvature Lookup Table' */
  real_T RateError;                    /* '<S312>/Error Lookup Table' */
  real_T Max;                          /* '<S312>/Max' */
  real_T RateSpeed;                    /* '<S312>/Speed Lookup Table' */
  real_T Min;                          /* '<S312>/Min' */
  real_T RateLimitUpper;               /* '<S312>/Limit Rate Limiter' */
  real_T Subtract_c1;                  /* '<S80>/Subtract' */
  real_T Switch1_p;                    /* '<S80>/Switch1' */
  real_T UnitDelay_p;                  /* '<S80>/Unit Delay' */
  real_T Switch2_i1;                   /* '<S80>/Switch2' */
  real_T Xnew;                         /* '<S373>/Reset' */
  real_T Xold_dp;                      /* '<S375>/FixPt Unit Delay1' */
  real_T Init_o;                       /* '<S375>/Init' */
  real_T Xold_mg;                      /* '<S376>/FixPt Unit Delay1' */
  real_T Init_lg;                      /* '<S376>/Init' */
  real_T MultiportSwitch_i;            /* '<S374>/Multiport Switch' */
  real_T DigitalClock_d;               /* '<S370>/Digital Clock' */
  real_T Unit_Delay_p;                 /* '<S370>/Unit_Delay' */
  real_T Subtract_k;                   /* '<S370>/Subtract' */
  real_T Product1_am;                  /* '<S369>/Product1' */
  real_T Add_db;                       /* '<S369>/Add' */
  real_T Xnew_f;                       /* '<S376>/Reset' */
  real_T Xnew_h;                       /* '<S375>/Reset' */
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
  real_T TimeVectorRaw[6];             /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T PositionVectorRaw[6];         /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityVectorRaw[6];         /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationVectorRaw[6];     /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T JerkVectorRaw[6];             /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T TimeVector[33];               /* '<S346>/TwentyPointVectorCalculation' */
  real_T PositionVector[33];           /* '<S346>/TwentyPointVectorCalculation' */
  real_T VelocityVector[33];           /* '<S346>/TwentyPointVectorCalculation' */
  real_T AccelerationVector[33];       /* '<S346>/TwentyPointVectorCalculation' */
  real_T JerkVector[33];               /* '<S346>/TwentyPointVectorCalculation' */
  real_T Add_py;                       /* '<S374>/Add' */
  real_T u_trapezoidal;                /* '<S374>/Gain' */
  real_T Xold_g;                       /* '<S342>/FixPt Unit Delay1' */
  real_T Init_jw;                      /* '<S342>/Init' */
  real_T Abs_a;                        /* '<S339>/Abs' */
  real_T Product1_i3;                  /* '<S339>/Product1' */
  real_T Add1_b0;                      /* '<S339>/Add1' */
  real_T MinMax2_l;                    /* '<S339>/MinMax2' */
  real_T Abs1_e;                       /* '<S339>/Abs1' */
  real_T Product2_k;                   /* '<S339>/Product2' */
  real_T Subtract1_g;                  /* '<S339>/Subtract1' */
  real_T MinMax1_k;                    /* '<S339>/MinMax1' */
  real_T Subtract_ij;                  /* '<S336>/Subtract' */
  real_T Abs_eu;                       /* '<S336>/Abs' */
  real_T error;                        /* '<S282>/Error Calc' */
  real_T Switch1_m;                    /* '<S297>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_ox;       /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S80>/Data Type Conversion3' */
  real_T SpeedSaturation;              /* '<S282>/Speed Saturation' */
  real_T kmhtoms;                      /* '<S282>/km//h to m//s' */
  real_T Product_n;                    /* '<S282>/Product' */
  real_T TrigonometricFunction_l;      /* '<S282>/Trigonometric Function' */
  real_T ErrorSaturation;              /* '<S282>/Error Saturation' */
  real_T Sum1;                         /* '<S282>/Sum1' */
  real_T Subtract_e;                   /* '<S282>/Subtract' */
  real_T uDLookupTable_h;              /* '<S282>/1-D Lookup Table' */
  real_T deg2rad_o;                    /* '<S282>/deg2rad' */
  real_T invert_d;                     /* '<S282>/invert' */
  real_T Product3;                     /* '<S80>/Product3' */
  real_T deg2rad_d;                    /* '<S80>/deg2rad' */
  real_T Product2_my;                  /* '<S80>/Product2' */
  real_T DataTypeConversion9_h;        /* '<S221>/Data Type Conversion9' */
  real_T DataTypeConversion1_iqa;      /* '<S221>/Data Type Conversion1' */
  real_T Add_di;                       /* '<S221>/Add' */
  real_T DataTypeConversion2_id;       /* '<S221>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S221>/Data Type Conversion3' */
  real_T DataTypeConversion5_i;        /* '<S225>/Data Type Conversion5' */
  real_T Coeff_of_drag_Cd;             /* '<S232>/1-D Lookup Table' */
  real_T KPH_TO_MS;                    /* '<S232>/KPH_TO_M//S' */
  real_T MathFunction;                 /* '<S232>/Math Function' */
  real_T DataTypeConversion_ik;        /* '<S225>/Data Type Conversion' */
  real_T KPA_TO_PA;                    /* '<S232>/KPA_TO_PA' */
  real_T DataTypeConversion4_b;        /* '<S225>/Data Type Conversion4' */
  real_T Add_o;                        /* '<S232>/Add' */
  real_T Product_nm;                   /* '<S232>/Product' */
  real_T Air_density_kgm3;             /* '<S232>/Divide' */
  real_T Aerodynamic_resistance_Ra;    /* '<S232>/Product1' */
  real_T DataTypeConversion6_f;        /* '<S225>/Data Type Conversion6' */
  real_T grade_angle_radians;          /* '<S233>/Divide' */
  real_T TrigonometricFunction_a;      /* '<S233>/Trigonometric Function' */
  real_T Gradient_resistance_Rg;       /* '<S233>/Product1' */
  real_T KPA_TO_MS;                    /* '<S236>/KPA_TO_M//S' */
  real_T Divide2_c;                    /* '<S236>/Divide2' */
  real_T MathFunction_l;               /* '<S236>/Math Function' */
  real_T Add_nj;                       /* '<S236>/Add' */
  real_T KPA_TO_BAR;                   /* '<S236>/KPA_TO_BAR' */
  real_T Divide_k;                     /* '<S236>/Divide' */
  real_T Coeff_of_rolling_resistance_Cr;/* '<S236>/Add1' */
  real_T grade_angle_radians_a;        /* '<S234>/Divide1' */
  real_T TrigonometricFunction_e;      /* '<S234>/Trigonometric Function' */
  real_T Rolling_resistance_Rr;        /* '<S234>/Product2' */
  real_T TotalTractiveForce_N;         /* '<S230>/Add' */
  real_T Saturation_g;                 /* '<S225>/Saturation' */
  real_T DataTypeConversion1_be;       /* '<S225>/Data Type Conversion1' */
  real_T RoadLoadTorque_fract;         /* '<S225>/Divide' */
  real_T RoadLoadTorque_pct;           /* '<S225>/Gain' */
  real_T FeedForwardTorque_pct;        /* '<S221>/Add1' */
  real_T Subtract_f;                   /* '<S222>/Subtract' */
  real_T uD_Lookup_Table_am;           /* '<S243>/2D_Lookup_Table' */
  real_T uD_Lookup_Table_o;            /* '<S244>/2D_Lookup_Table' */
  real_T uD_Lookup_Table_h;            /* '<S245>/2D_Lookup_Table' */
  real_T Abs_igm;                      /* '<S246>/Abs' */
  real_T Abs1_a;                       /* '<S246>/Abs1' */
  real_T Xold_a;                       /* '<S274>/FixPt Unit Delay1' */
  real_T Init_pu;                      /* '<S274>/Init' */
  real_T Abs_n;                        /* '<S270>/Abs' */
  real_T Product1_g;                   /* '<S270>/Product1' */
  real_T Add1_g;                       /* '<S270>/Add1' */
  real_T MinMax2_n;                    /* '<S270>/MinMax2' */
  real_T Abs1_d;                       /* '<S270>/Abs1' */
  real_T Product2_bn;                  /* '<S270>/Product2' */
  real_T Subtract1_o;                  /* '<S270>/Subtract1' */
  real_T MinMax1_g;                    /* '<S270>/MinMax1' */
  real_T Subtract_jb;                  /* '<S247>/Subtract' */
  real_T MinMax1_d;                    /* '<S269>/MinMax1' */
  real_T Saturation_d;                 /* '<S269>/Saturation' */
  real_T Divide_n;                     /* '<S269>/Divide' */
  real_T Product2_l;                   /* '<S269>/Product2' */
  real_T Subtract1_k;                  /* '<S269>/Subtract1' */
  real_T Unit_Delay2_o;                /* '<S269>/Unit_Delay2' */
  real_T Product1_p;                   /* '<S269>/Product1' */
  real_T Add1_i;                       /* '<S269>/Add1' */
  real_T Product_i;                    /* '<S252>/Product' */
  real_T Unit_Delay_m4;                /* '<S224>/Unit_Delay' */
  real_T Add_ds;                       /* '<S248>/Add' */
  real_T PID_d_term_c;                 /* '<S214>/Generic_PID_Governor_3' */
  real_T PID_i_term_c;                 /* '<S214>/Generic_PID_Governor_3' */
  real_T road_load_tq;                 /* '<S225>/F_wheel_to_Tq_eng' */
  real_T TmpSignalConversionAtSFunctionI[4];/* '<S213>/Relay_control_state_machine' */
  real_T TmpSignalConversionAtSFunctio_k[4];/* '<S213>/Relay_control_state_machine' */
  real_T KPH_TO_MPH;                   /* '<S212>/KPH_TO_MPH' */
  real_T MinMax_dl;                    /* '<S212>/MinMax' */
  real_T Divide_p;                     /* '<S212>/Divide' */
  real_T MinMax1_nv;                   /* '<S212>/MinMax1' */
  real_T DataTypeConversion3_m;        /* '<S79>/Data Type Conversion3' */
  real_T ThrottlePID_Y_c;              /* '<S79>/Product' */
  real_T Unit_Delay_dl;                /* '<S186>/Unit_Delay' */
  real_T Xold_e;                       /* '<S200>/FixPt Unit Delay1' */
  real_T Init_br;                      /* '<S200>/Init' */
  real_T Abs_gb;                       /* '<S196>/Abs' */
  real_T DigitalClock_e;               /* '<S197>/Digital Clock' */
  real_T Unit_Delay_nxw;               /* '<S197>/Unit_Delay' */
  real_T Subtract_aw;                  /* '<S197>/Subtract' */
  real_T Product1_nu;                  /* '<S196>/Product1' */
  real_T Add1_fn;                      /* '<S196>/Add1' */
  real_T MinMax2_gw;                   /* '<S196>/MinMax2' */
  real_T Abs1_k;                       /* '<S196>/Abs1' */
  real_T Product2_cb;                  /* '<S196>/Product2' */
  real_T Subtract1_kw;                 /* '<S196>/Subtract1' */
  real_T MinMax1_o;                    /* '<S196>/MinMax1' */
  real_T Unit_Delay_a;                 /* '<S185>/Unit_Delay' */
  real_T Xold_bf;                      /* '<S193>/FixPt Unit Delay1' */
  real_T Init_k;                       /* '<S193>/Init' */
  real_T Abs_b;                        /* '<S189>/Abs' */
  real_T DigitalClock_c;               /* '<S190>/Digital Clock' */
  real_T Unit_Delay_ka;                /* '<S190>/Unit_Delay' */
  real_T Subtract_ko;                  /* '<S190>/Subtract' */
  real_T Product1_f;                   /* '<S189>/Product1' */
  real_T Add1_c;                       /* '<S189>/Add1' */
  real_T MinMax2_c2;                   /* '<S189>/MinMax2' */
  real_T Abs1_ar;                      /* '<S189>/Abs1' */
  real_T Product2_c3;                  /* '<S189>/Product2' */
  real_T Subtract1_ev;                 /* '<S189>/Subtract1' */
  real_T MinMax1_jw;                   /* '<S189>/MinMax1' */
  real_T uD_Lookup_Table_f;            /* '<S149>/1D_Lookup_Table' */
  real_T uD_Lookup_Table_p;            /* '<S150>/1D_Lookup_Table' */
  real_T uD_Lookup_Table_o5;           /* '<S151>/1D_Lookup_Table' */
  real_T Abs_k;                        /* '<S152>/Abs' */
  real_T Abs1_eg;                      /* '<S152>/Abs1' */
  real_T DigitalClock_n;               /* '<S148>/Digital Clock' */
  real_T Unit_Delay_ko;                /* '<S148>/Unit_Delay' */
  real_T Subtract_ac;                  /* '<S148>/Subtract' */
  real_T Xold_cj;                      /* '<S180>/FixPt Unit Delay1' */
  real_T Init_c;                       /* '<S180>/Init' */
  real_T Abs_o;                        /* '<S176>/Abs' */
  real_T Product1_hy;                  /* '<S176>/Product1' */
  real_T Add1_o;                       /* '<S176>/Add1' */
  real_T MinMax2_p;                    /* '<S176>/MinMax2' */
  real_T Abs1_g;                       /* '<S176>/Abs1' */
  real_T Product2_fh;                  /* '<S176>/Product2' */
  real_T Subtract1_f;                  /* '<S176>/Subtract1' */
  real_T MinMax1_hl;                   /* '<S176>/MinMax1' */
  real_T Subtract_jh;                  /* '<S153>/Subtract' */
  real_T MinMax1_jg;                   /* '<S175>/MinMax1' */
  real_T Saturation_m;                 /* '<S175>/Saturation' */
  real_T Divide_af;                    /* '<S175>/Divide' */
  real_T Product2_ce;                  /* '<S175>/Product2' */
  real_T Subtract1_cr;                 /* '<S175>/Subtract1' */
  real_T Unit_Delay2_a;                /* '<S175>/Unit_Delay2' */
  real_T Product1_ch;                  /* '<S175>/Product1' */
  real_T Add1_hla;                     /* '<S175>/Add1' */
  real_T Product_f;                    /* '<S158>/Product' */
  real_T Unit_Delay_fg;                /* '<S147>/Unit_Delay' */
  real_T Add_mh;                       /* '<S154>/Add' */
  real_T Add_my;                       /* '<S104>/Add' */
  real_T Gain_iv;                      /* '<S104>/Gain' */
  real_T Abs_k4;                       /* '<S114>/Abs' */
  real_T Abs1_ap;                      /* '<S114>/Abs1' */
  real_T DigitalClock_j;               /* '<S113>/Digital Clock' */
  real_T Unit_Delay_j;                 /* '<S113>/Unit_Delay' */
  real_T Subtract_jr;                  /* '<S113>/Subtract' */
  real_T Xold_g3;                      /* '<S142>/FixPt Unit Delay1' */
  real_T Init_hw;                      /* '<S142>/Init' */
  real_T Abs_l;                        /* '<S138>/Abs' */
  real_T Product1_b;                   /* '<S138>/Product1' */
  real_T Add1_hu;                      /* '<S138>/Add1' */
  real_T MinMax2_b;                    /* '<S138>/MinMax2' */
  real_T Abs1_d1;                      /* '<S138>/Abs1' */
  real_T Product2_d;                   /* '<S138>/Product2' */
  real_T Subtract1_a;                  /* '<S138>/Subtract1' */
  real_T MinMax1_ps;                   /* '<S138>/MinMax1' */
  real_T Subtract_n;                   /* '<S115>/Subtract' */
  real_T MinMax1_h1;                   /* '<S137>/MinMax1' */
  real_T Saturation_p;                 /* '<S137>/Saturation' */
  real_T Divide_l;                     /* '<S137>/Divide' */
  real_T Product2_kj;                  /* '<S137>/Product2' */
  real_T Subtract1_pm;                 /* '<S137>/Subtract1' */
  real_T Unit_Delay2_d;                /* '<S137>/Unit_Delay2' */
  real_T Product1_c3;                  /* '<S137>/Product1' */
  real_T Add1_i1;                      /* '<S137>/Add1' */
  real_T Product_iq;                   /* '<S120>/Product' */
  real_T Unit_Delay_ja;                /* '<S112>/Unit_Delay' */
  real_T Add_e;                        /* '<S116>/Add' */
  real_T Sum_g;                        /* '<S97>/Sum' */
  real_T MinMax_p;                     /* '<S83>/MinMax' */
  RTMapsTX BusCreator;                 /* '<S400>/Bus Creator' */
  uint32_T Encoder_o2;                 /* '<S409>/Encoder' */
  uint32_T TCPIP_Com_o1[3];            /* '<S402>/TCPIP_Com' */
  uint32_T TCPIP_Com_o2;               /* '<S402>/TCPIP_Com' */
  uint32_T DataTypeConversion_a;       /* '<S399>/Data Type Conversion' */
  uint32_T SFunction1_o1_kx;           /* '<S28>/S-Function1' */
  uint32_T SFunction1_o1_g3;           /* '<S20>/S-Function1' */
  uint32_T SFunction1_o1_ar;           /* '<S21>/S-Function1' */
  uint32_T SFunction1_o1_h4v;          /* '<S18>/S-Function1' */
  uint32_T SFunction1_o1_ma;           /* '<S19>/S-Function1' */
  uint32_T SFunction1_o1_og;           /* '<S17>/S-Function1' */
  uint32_T Reshape[8];                 /* '<S1051>/Reshape' */
  uint32_T UnitDelay_mq;               /* '<S1052>/Unit Delay' */
  uint32_T Switch1_mo;                 /* '<S1055>/Switch1' */
  uint32_T Selector;                   /* '<S1051>/Selector' */
  uint32_T DataTypeConversion_ix;      /* '<S1043>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1048>/Operator' */
  uint32_T Operator_o;                 /* '<S1049>/Operator' */
  uint32_T Operator_a;                 /* '<S1050>/Operator' */
  uint32_T DataType_aw;                /* '<S1050>/DataType' */
  uint32_T Shift_Arithmetic1_p;        /* '<S1043>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1051>/Width' */
  uint32_T Switch1_g;                  /* '<S1054>/Switch1' */
  uint32_T Subtract_a2;                /* '<S1052>/Subtract' */
  uint32_T UnitDelay_ec;               /* '<S1037>/Unit Delay' */
  uint32_T Switch1_i;                  /* '<S1040>/Switch1' */
  uint32_T DataTypeConversion6_mg;     /* '<S1032>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S1032>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_e4;     /* '<S1032>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S1032>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_c;      /* '<S1032>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S1032>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_l;      /* '<S1032>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S1032>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_o;     /* '<S1032>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S1032>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_n;     /* '<S1032>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S1032>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_n;      /* '<S1033>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S1033>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S1033>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_d;        /* '<S1033>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S1033>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_m;        /* '<S1033>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S1033>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_o;        /* '<S1033>/Shift_Arithmetic 5' */
  uint32_T Width_b;                    /* '<S1036>/Width' */
  uint32_T Switch1_pk;                 /* '<S1039>/Switch1' */
  uint32_T Subtract_np;                /* '<S1037>/Subtract' */
  uint32_T DataTypeConversion2_eh;     /* '<S978>/Data Type Conversion2' */
  uint32_T Operator_f;                 /* '<S983>/Operator' */
  uint32_T Operator_h;                 /* '<S984>/Operator' */
  uint32_T Operator_j;                 /* '<S985>/Operator' */
  uint32_T DataType_ox;                /* '<S985>/DataType' */
  uint32_T Shift_Arithmetic1_l;        /* '<S978>/Shift_Arithmetic 1' */
  uint32_T Operator_oi;                /* '<S986>/Operator' */
  uint32_T DataType_fi;                /* '<S986>/DataType' */
  uint32_T Shift_Arithmetic2_e;        /* '<S978>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_mo;               /* '<S1009>/Unit Delay' */
  uint32_T Switch1_ga;                 /* '<S1012>/Switch1' */
  uint32_T DataTypeConversion_n;       /* '<S977>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_m;         /* '<S977>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_l;      /* '<S977>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_e;        /* '<S977>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_g;      /* '<S977>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_mj;       /* '<S977>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_gd;     /* '<S977>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_n;        /* '<S977>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_g;      /* '<S977>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_i;        /* '<S977>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_ih;     /* '<S977>/Data Type Conversion5' */
  uint32_T Operator_hb;                /* '<S982>/Operator' */
  uint32_T DataType_kg;                /* '<S982>/DataType' */
  uint32_T DataTypeConversion3_p4;     /* '<S978>/Data Type Conversion3' */
  uint32_T Operator_l;                 /* '<S987>/Operator' */
  uint32_T Operator_h2;                /* '<S988>/Operator' */
  uint32_T Operator_g;                 /* '<S989>/Operator' */
  uint32_T DataType_au;                /* '<S989>/DataType' */
  uint32_T Shift_Arithmetic4_g;        /* '<S978>/Shift_Arithmetic 4' */
  uint32_T Operator_i;                 /* '<S990>/Operator' */
  uint32_T DataType_nm;                /* '<S990>/DataType' */
  uint32_T Shift_Arithmetic5_d;        /* '<S978>/Shift_Arithmetic 5' */
  uint32_T Width_n;                    /* '<S1008>/Width' */
  uint32_T Switch1_l;                  /* '<S1011>/Switch1' */
  uint32_T Subtract_np3;               /* '<S1009>/Subtract' */
  uint32_T DataTypeConversion_ay;      /* '<S927>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_l;         /* '<S927>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_pp;     /* '<S927>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_bl;       /* '<S927>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_h;      /* '<S927>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_ma;       /* '<S927>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_k;      /* '<S927>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_b;        /* '<S927>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_c;      /* '<S927>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_of;       /* '<S927>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_n;      /* '<S927>/Data Type Conversion5' */
  uint32_T Operator_c;                 /* '<S937>/Operator' */
  uint32_T DataType_bv;                /* '<S937>/DataType' */
  uint32_T DataTypeConversion8_p;      /* '<S926>/Data Type Conversion8' */
  uint32_T Operator_i1;                /* '<S933>/Operator' */
  uint32_T Operator_m;                 /* '<S934>/Operator' */
  uint32_T Operator_a4;                /* '<S935>/Operator' */
  uint32_T DataType_gg;                /* '<S935>/DataType' */
  uint32_T Shift_Arithmetic4_k0;       /* '<S926>/Shift_Arithmetic 4' */
  uint32_T Operator_oo;                /* '<S936>/Operator' */
  uint32_T DataType_ja;                /* '<S936>/DataType' */
  uint32_T Shift_Arithmetic5_p;        /* '<S926>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_c2;      /* '<S729>/Data Type Conversion' */
  uint32_T DataTypeConversion1_it;     /* '<S729>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_d;      /* '<S729>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S729>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S729>/Shift Arithmetic2' */
  uint32_T Operator_ar;                /* '<S731>/Operator' */
  uint32_T DataType_mb;                /* '<S731>/DataType' */
  uint32_T DataTypeConversion_k5;      /* '<S721>/Data Type Conversion' */
  uint32_T DataTypeConversion1_h4;     /* '<S721>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_oe;     /* '<S721>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_n;         /* '<S721>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_h;         /* '<S721>/Shift Arithmetic2' */
  uint32_T Operator_d;                 /* '<S723>/Operator' */
  uint32_T DataType_od;                /* '<S723>/DataType' */
  uint32_T DataTypeConversion_lx;      /* '<S715>/Data Type Conversion' */
  uint32_T DataTypeConversion1_kw;     /* '<S715>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_no;     /* '<S715>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_ny;        /* '<S715>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_k;         /* '<S715>/Shift Arithmetic2' */
  uint32_T Operator_id;                /* '<S716>/Operator' */
  uint32_T DataType_ba;                /* '<S716>/DataType' */
  uint32_T DataTypeConversion_dd;      /* '<S710>/Data Type Conversion' */
  uint32_T DataTypeConversion1_pm4;    /* '<S710>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_pk;     /* '<S710>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_a;         /* '<S710>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_n;         /* '<S710>/Shift Arithmetic2' */
  uint32_T Operator_mu;                /* '<S711>/Operator' */
  uint32_T DataType_kx;                /* '<S711>/DataType' */
  uint32_T DataTypeConversion_f3;      /* '<S703>/Data Type Conversion' */
  uint32_T DataTypeConversion1_g;      /* '<S703>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_m5;     /* '<S703>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_o;         /* '<S703>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_m;         /* '<S703>/Shift Arithmetic2' */
  uint32_T Operator_jt;                /* '<S705>/Operator' */
  uint32_T DataType_fh;                /* '<S705>/DataType' */
  uint32_T UnitDelay_a;                /* '<S61>/Unit Delay' */
  uint32_T Switch1_h;                  /* '<S64>/Switch1' */
  uint32_T Switch1_b;                  /* '<S63>/Switch1' */
  uint32_T Subtract_fc;                /* '<S61>/Subtract' */
  uint32_T UnitDelay_j;                /* '<S55>/Unit Delay' */
  uint32_T Switch1_k;                  /* '<S58>/Switch1' */
  uint32_T Switch1_lh;                 /* '<S57>/Switch1' */
  uint32_T Subtract_md;                /* '<S55>/Subtract' */
  uint32_T UnitDelay_l;                /* '<S49>/Unit Delay' */
  uint32_T Switch1_e;                  /* '<S52>/Switch1' */
  uint32_T Switch1_c;                  /* '<S51>/Switch1' */
  uint32_T Subtract_f1;                /* '<S49>/Subtract' */
  uint32_T UnitDelay_d;                /* '<S43>/Unit Delay' */
  uint32_T Switch1_k4;                 /* '<S46>/Switch1' */
  uint32_T Switch1_fr;                 /* '<S45>/Switch1' */
  uint32_T Subtract_h;                 /* '<S43>/Subtract' */
  uint32_T UnitDelay_b;                /* '<S37>/Unit Delay' */
  uint32_T Switch1_iy;                 /* '<S40>/Switch1' */
  uint32_T Switch1_hm;                 /* '<S39>/Switch1' */
  uint32_T Subtract_nc;                /* '<S37>/Subtract' */
  uint32_T UnitDelay_f4;               /* '<S31>/Unit Delay' */
  uint32_T Switch1_o;                  /* '<S34>/Switch1' */
  uint32_T Switch1_a;                  /* '<S33>/Switch1' */
  uint32_T Subtract_ot;                /* '<S31>/Subtract' */
  uint32_T Gain_co;                    /* '<S97>/Gain' */
  real32_T PropB_REAX_3_HandwheelTorque;/* '<S670>/Product' */
  real32_T PropB_REAX_3_HandwheelVelocity;/* '<S671>/Product1' */
  real32_T PropB_REAX_3_PullCompensation;/* '<S672>/Product2' */
  real32_T Subtract_fx;                /* '<S653>/Subtract' */
  real32_T Subtract_gi;                /* '<S525>/Subtract' */
  real32_T DataTypeConversion2_lf;     /* '<S79>/Data Type Conversion2' */
  real32_T Divide_nn;                  /* '<S287>/Divide' */
  real32_T UnitDelay_fm;               /* '<S287>/Unit Delay' */
  real32_T Switch1_fi;                 /* '<S291>/Switch1' */
  real32_T Divide_d0;                  /* '<S292>/Divide' */
  real32_T UnitDelay_lj;               /* '<S292>/Unit Delay' */
  real32_T Switch1_pb;                 /* '<S296>/Switch1' */
  real32_T DataTypeConversion1_gp;     /* '<S292>/Data Type Conversion1' */
  real32_T Switch1_aq;                 /* '<S294>/Switch1' */
  real32_T DataTypeConversion_mv;      /* '<S292>/Data Type Conversion' */
  real32_T Add3_p;                     /* '<S292>/Add3' */
  real32_T Product1_ce;                /* '<S292>/Product1' */
  real32_T Add_a;                      /* '<S292>/Add' */
  real32_T DataTypeConversion1_b1;     /* '<S287>/Data Type Conversion1' */
  real32_T Switch1_cw;                 /* '<S289>/Switch1' */
  real32_T DataTypeConversion_ps;      /* '<S287>/Data Type Conversion' */
  real32_T Add3_j;                     /* '<S287>/Add3' */
  real32_T Product1_n2;                /* '<S287>/Product1' */
  real32_T Add_f;                      /* '<S287>/Add' */
  int32_T Decoder_o2;                  /* '<S406>/Decoder' */
  int32_T Merge;                       /* '<S979>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S612>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_d;/* '<S448>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S612>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_o;/* '<S448>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_h;/* '<S610>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_m;/* '<S611>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_p;/* '<S610>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_i;/* '<S611>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S630>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_d;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S630>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_d;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1017>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lr; /* '<S106>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_lu;/* '<S106>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S765>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S765>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S211>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l;/* '<S211>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_m4;      /* '<S534>/Data Type Conversion' */
  uint16_T DataTypeConversion1_o5;     /* '<S534>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S534>/Shift Arithmetic' */
  uint16_T Operator_hw;                /* '<S559>/Operator' */
  uint16_T DataType_op;                /* '<S559>/DataType' */
  uint16_T DataTypeConversion_ju;      /* '<S528>/Data Type Conversion' */
  uint16_T DataTypeConversion1_j;      /* '<S528>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_k;          /* '<S528>/Shift Arithmetic' */
  uint16_T Operator_n;                 /* '<S555>/Operator' */
  uint16_T DataType_nb;                /* '<S555>/DataType' */
  uint16_T DataTypeConversion_hm;      /* '<S532>/Data Type Conversion' */
  uint16_T DataTypeConversion1_jk;     /* '<S532>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_kv;         /* '<S532>/Shift Arithmetic' */
  uint16_T Operator_ca;                /* '<S557>/Operator' */
  uint16_T DataType_io;                /* '<S557>/DataType' */
  uint16_T DataTypeConversion1_dj;     /* '<S533>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_f;      /* '<S533>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_n;          /* '<S533>/Shift Arithmetic' */
  uint16_T Operator_jx;                /* '<S558>/Operator' */
  uint16_T DataType_ay;                /* '<S558>/DataType' */
  uint16_T DataTypeConversion1_f;      /* '<S536>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_pz;     /* '<S536>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_b;          /* '<S536>/Shift Arithmetic' */
  uint16_T Operator_ma;                /* '<S560>/Operator' */
  uint16_T DataType_dd;                /* '<S560>/DataType' */
  uint16_T DataTypeConversion1_az;     /* '<S542>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_h0;     /* '<S542>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_d;          /* '<S542>/Shift Arithmetic' */
  uint16_T Operator_n5;                /* '<S561>/Operator' */
  uint16_T DataType_ci;                /* '<S561>/DataType' */
  uint16_T DataTypeConversion_n2;      /* '<S550>/Data Type Conversion' */
  uint16_T DataTypeConversion1_aq;     /* '<S550>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_m;          /* '<S550>/Shift Arithmetic' */
  uint16_T Operator_ob;                /* '<S564>/Operator' */
  uint16_T DataType_ia;                /* '<S564>/DataType' */
  uint16_T DataTypeConversion1_hm;     /* '<S543>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_hv;     /* '<S543>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_nx;         /* '<S543>/Shift Arithmetic' */
  uint16_T Operator_aj;                /* '<S562>/Operator' */
  uint16_T DataType_do;                /* '<S562>/DataType' */
  uint16_T DataTypeConversion_nq;      /* '<S544>/Data Type Conversion' */
  uint16_T DataTypeConversion1_gl;     /* '<S544>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_k1;         /* '<S544>/Shift Arithmetic' */
  uint16_T Operator_k;                 /* '<S563>/Operator' */
  uint16_T DataType_gu;                /* '<S563>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S544>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S420>/Data Type Conversion21' */
  uint16_T DataTypeConversion_ev;      /* '<S552>/Data Type Conversion' */
  uint16_T DataTypeConversion1_kb;     /* '<S552>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_mz;         /* '<S552>/Shift Arithmetic' */
  uint16_T Operator_nq;                /* '<S565>/Operator' */
  uint16_T DataType_h;                 /* '<S565>/DataType' */
  uint16_T DataTypeConversion_nn;      /* '<S554>/Data Type Conversion' */
  uint16_T DataTypeConversion1_i0;     /* '<S554>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_a;          /* '<S554>/Shift Arithmetic' */
  uint16_T Operator_mo;                /* '<S566>/Operator' */
  uint16_T DataType_hz;                /* '<S566>/DataType' */
  uint16_T DataTypeConversion_os;      /* '<S530>/Data Type Conversion' */
  uint16_T DataTypeConversion1_nw;     /* '<S530>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_ns;         /* '<S530>/Shift Arithmetic' */
  uint16_T Operator_iv;                /* '<S556>/Operator' */
  uint16_T DataType_gh;                /* '<S556>/DataType' */
  uint16_T DataTypeConversion1_lp;     /* '<S670>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_mq;     /* '<S670>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_f;        /* '<S670>/Shift_Arithmetic 1' */
  uint16_T Operator_p;                 /* '<S675>/Operator' */
  uint16_T DataType_gw;                /* '<S675>/DataType' */
  uint16_T DataTypeConversion4_l;      /* '<S671>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_j;      /* '<S671>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_c;        /* '<S671>/Shift_Arithmetic 2' */
  uint16_T Operator_ci;                /* '<S676>/Operator' */
  uint16_T DataType_hk;                /* '<S676>/DataType' */
  uint16_T DataTypeConversion7_a;      /* '<S672>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_f;      /* '<S672>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_l;        /* '<S672>/Shift_Arithmetic 3' */
  uint16_T Operator_pc;                /* '<S677>/Operator' */
  uint16_T DataType_fhs;               /* '<S677>/DataType' */
  uint16_T DataTypeConversion6_c;      /* '<S683>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_f;      /* '<S683>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_d;        /* '<S683>/Shift_Arithmetic 2' */
  uint16_T Operator_o2;                /* '<S688>/Operator' */
  uint16_T DataType_ej;                /* '<S688>/DataType' */
  uint16_T DataType_nv;                /* '<S1049>/DataType' */
  uint16_T Shift_Arithmetic_mi;        /* '<S1043>/Shift_Arithmetic ' */
  uint16_T DataType_hx;                /* '<S984>/DataType' */
  uint16_T Shift_Arithmetic_c;         /* '<S978>/Shift_Arithmetic ' */
  uint16_T DataType_hj;                /* '<S988>/DataType' */
  uint16_T Shift_Arithmetic3_an;       /* '<S978>/Shift_Arithmetic 3' */
  uint16_T DataType_f0;                /* '<S934>/DataType' */
  uint16_T Shift_Arithmetic3_o;        /* '<S926>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_bd;     /* '<S887>/Data Type Conversion1' */
  uint16_T Operator_f1;                /* '<S918>/Operator' */
  uint16_T Operator_cp;                /* '<S919>/Operator' */
  uint16_T DataType_iy;                /* '<S919>/DataType' */
  uint16_T Shift_Arithmetic_le;        /* '<S887>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_juc;     /* '<S726>/Data Type Conversion' */
  uint16_T DataTypeConversion1_o0;     /* '<S726>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_g;         /* '<S726>/Shift Arithmetic2' */
  uint16_T Operator_jd;                /* '<S730>/Operator' */
  uint16_T DataType_fs;                /* '<S730>/DataType' */
  uint16_T DataTypeConversion_n1;      /* '<S719>/Data Type Conversion' */
  uint16_T DataTypeConversion1_hn;     /* '<S719>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_f;         /* '<S719>/Shift Arithmetic2' */
  uint16_T Operator_a3;                /* '<S722>/Operator' */
  uint16_T DataType_bm;                /* '<S722>/DataType' */
  uint16_T DataTypeConversion_pn;      /* '<S701>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ao;     /* '<S701>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_ke;        /* '<S701>/Shift Arithmetic2' */
  uint16_T Operator_mp;                /* '<S704>/Operator' */
  uint16_T DataType_aya;               /* '<S704>/DataType' */
  int16_T DataTypeConversion3_e;       /* '<S670>/Data Type Conversion3' */
  int16_T DataTypeConversion6_n;       /* '<S671>/Data Type Conversion6' */
  int16_T DataTypeConversion9_hm;      /* '<S672>/Data Type Conversion9' */
  int16_T DataTypeConversion8_cm;      /* '<S683>/Data Type Conversion8' */
  int16_T DataTypeConversion_pz;       /* '<S887>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S798>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_o;           /* '<S790>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_i;           /* '<S814>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_d;           /* '<S806>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S834>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_oq;          /* '<S833>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_n;           /* '<S822>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_e3;       /* '<S477>/Data Type Conversion' */
  uint8_T DataTypeConversion1_lt;      /* '<S477>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_gk;      /* '<S477>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_m3;      /* '<S477>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_ad;      /* '<S477>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_d;       /* '<S477>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_na;      /* '<S477>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_g;       /* '<S477>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S423>/Multiport_Switch' */
  uint8_T DataTypeConversion_b5[8];    /* '<S471>/Data Type Conversion' */
  uint8_T DataTypeConversion_do;       /* '<S486>/Data Type Conversion' */
  uint8_T DataTypeConversion1_fi;      /* '<S486>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_kq;      /* '<S486>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_f5;      /* '<S486>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_p;       /* '<S486>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_di;      /* '<S486>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_h;       /* '<S486>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h;       /* '<S486>/Data Type Conversion7' */
  uint8_T RawData_h[8];                /* '<S424>/Multiport_Switch' */
  uint8_T DataTypeConversion_g[8];     /* '<S472>/Data Type Conversion' */
  uint8_T DataTypeConversion_as[39];   /* '<S523>/Data Type Conversion' */
  uint8_T DataTypeConversion_lt;       /* '<S651>/Data Type Conversion' */
  uint8_T DataTypeConversion1_k3;      /* '<S651>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_bj;      /* '<S651>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_pj;      /* '<S651>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_b5;      /* '<S651>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_l;       /* '<S651>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_i;       /* '<S651>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_gf;      /* '<S651>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_j;       /* '<S651>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_a;       /* '<S651>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_m;      /* '<S651>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_o;      /* '<S651>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S651>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_p;      /* '<S651>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_l;      /* '<S651>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_k;      /* '<S651>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_e;      /* '<S651>/Data Type Conversion16' */
  uint8_T Add_kc;                      /* '<S651>/Add' */
  uint8_T DataTypeConversion15_a;      /* '<S630>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_c0;      /* '<S630>/Data Type Conversion4' */
  uint8_T MABX_Mode_h;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[24];              /* '<S409>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S402>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1060>/Vector Concatenate' */
  uint8_T UnitDelay1_l;                /* '<S861>/Unit Delay1' */
  uint8_T MultiportSwitch_fd[8];       /* '<S861>/Multiport Switch' */
  uint8_T SupervisorMode_l;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S420>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S420>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S420>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S420>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S420>/Data Type Conversion26' */
  uint8_T DataTypeConversion_il;       /* '<S612>/Data Type Conversion' */
  uint8_T DataTypeConversion1_m3;      /* '<S612>/Data Type Conversion1' */
  uint8_T Add1_a;                      /* '<S651>/Add1' */
  uint8_T DataTypeConversion_j1;       /* '<S585>/Data Type Conversion' */
  uint8_T DataTypeConversion1_hmw;     /* '<S585>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_cd;      /* '<S585>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_b;       /* '<S585>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_n2;      /* '<S585>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_a1;      /* '<S585>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_n0;      /* '<S585>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_gy;      /* '<S585>/Data Type Conversion7' */
  uint8_T DataTypeConversion_po;       /* '<S586>/Data Type Conversion' */
  uint8_T DataTypeConversion1_bi;      /* '<S586>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_pi;      /* '<S586>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_p43;     /* '<S586>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_nb;      /* '<S586>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_n5;      /* '<S586>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_g;       /* '<S586>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ao;      /* '<S586>/Data Type Conversion7' */
  uint8_T RawData_e[8];                /* '<S446>/Multiport_Switch' */
  uint8_T Operator_mj;                 /* '<S674>/Operator' */
  uint8_T DataType_fk;                 /* '<S674>/DataType' */
  uint8_T Operator_ji;                 /* '<S673>/Operator' */
  uint8_T DataType_ml;                 /* '<S673>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S668>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_d3;       /* '<S599>/Data Type Conversion' */
  uint8_T DataTypeConversion1_hg;      /* '<S599>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_jc;      /* '<S599>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_o3;      /* '<S599>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_b4;      /* '<S599>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_lc;      /* '<S599>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ds;      /* '<S599>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_nm;      /* '<S599>/Data Type Conversion7' */
  uint8_T RawData_n[8];                /* '<S447>/Multiport_Switch' */
  uint8_T Operator_fa;                 /* '<S686>/Operator' */
  uint8_T DataType_da;                 /* '<S686>/DataType' */
  uint8_T Shift_Arithmetic_ce;         /* '<S679>/Shift_Arithmetic ' */
  uint8_T Operator_iu;                 /* '<S685>/Operator' */
  uint8_T Operator_as;                 /* '<S687>/Operator' */
  uint8_T DataType_h4;                 /* '<S687>/DataType' */
  uint8_T Shift_Arithmetic1_fx;        /* '<S679>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S680>/SignalConversion' */
  uint8_T DataTypeConversion3_gf;      /* '<S422>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S681>/SignalConversion' */
  uint8_T DataTypeConversion4_d;       /* '<S422>/Data Type Conversion4' */
  uint8_T State;                       /* '<S861>/Chart' */
  uint8_T TPDT_count;                  /* '<S861>/Chart' */
  uint8_T VectorConcatenate_b[8];      /* '<S1062>/Vector Concatenate' */
  uint8_T VectorConcatenate_d[8];      /* '<S1063>/Vector Concatenate' */
  uint8_T DataType_ggj;                /* '<S1048>/DataType' */
  uint8_T DataTypeConversion3_n;       /* '<S1043>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_itp;     /* '<S1043>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_aa;      /* '<S1043>/Data Type Conversion2' */
  uint8_T DataTypeConversion_c1;       /* '<S1013>/Data Type Conversion' */
  uint8_T Operator_e;                  /* '<S1018>/Operator' */
  uint8_T DataType_ag;                 /* '<S1018>/DataType' */
  uint8_T DataTypeConversion2_bw;      /* '<S1033>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_dd;      /* '<S1033>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S1033>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_j;       /* '<S1033>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S1033>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_ln;         /* '<S1033>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_b;      /* '<S1033>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_c1;      /* '<S1033>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_k;         /* '<S1033>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_no;     /* '<S1033>/Data Type Conversion11' */
  uint8_T Reshape_m[16];               /* '<S1036>/Reshape' */
  uint8_T Selector_k;                  /* '<S1036>/Selector' */
  uint8_T DataTypeConversion10_e;      /* '<S1033>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S1033>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_m;       /* '<S1033>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_b;       /* '<S1033>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_ae;      /* '<S1033>/Data Type Conversion9' */
  uint8_T Add2_e;                      /* '<S1033>/Add2' */
  uint8_T Shift_Arithmetic6_l;         /* '<S1033>/Shift_Arithmetic 6' */
  uint8_T Add3_f;                      /* '<S1033>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S1033>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_a;         /* '<S1033>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S1033>/Bitwise Operator7' */
  uint8_T DataTypeConversion_o3;       /* '<S1015>/Data Type Conversion' */
  uint8_T Operator_op;                 /* '<S1029>/Operator' */
  uint8_T Operator_na;                 /* '<S1024>/Operator' */
  uint8_T DataType_d4;                 /* '<S1024>/DataType' */
  uint8_T Operator_jh;                 /* '<S1025>/Operator' */
  uint8_T Operator_ck;                 /* '<S1026>/Operator' */
  uint8_T Operator_b;                  /* '<S1027>/Operator' */
  uint8_T Operator_j2;                 /* '<S1028>/Operator' */
  uint8_T DataTypeConversion_ox;       /* '<S942>/Data Type Conversion' */
  uint8_T Operator_dl;                 /* '<S950>/Operator' */
  uint8_T Operator_cs;                 /* '<S947>/Operator' */
  uint8_T DataType_l;                  /* '<S947>/DataType' */
  uint8_T Operator_jm;                 /* '<S948>/Operator' */
  uint8_T Operator_px;                 /* '<S949>/Operator' */
  uint8_T Operator_pp;                 /* '<S951>/Operator' */
  uint8_T Operator_l5;                 /* '<S952>/Operator' */
  uint8_T DataTypeConversion_bf;       /* '<S943>/Data Type Conversion' */
  uint8_T Operator_ek;                 /* '<S958>/Operator' */
  uint8_T Operator_ey;                 /* '<S959>/Operator' */
  uint8_T Operator_d5;                 /* '<S955>/Operator' */
  uint8_T DataType_it;                 /* '<S955>/DataType' */
  uint8_T Operator_nz;                 /* '<S956>/Operator' */
  uint8_T Operator_at;                 /* '<S957>/Operator' */
  uint8_T Operator_g4;                 /* '<S960>/Operator' */
  uint8_T DataTypeConversion_bx;       /* '<S946>/Data Type Conversion' */
  uint8_T Switch_gr;                   /* '<S980>/Switch' */
  uint8_T DataTypeConversion_pi;       /* '<S978>/Data Type Conversion' */
  uint8_T DataType_mt;                 /* '<S983>/DataType' */
  uint8_T DataTypeConversion4_jh;      /* '<S978>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ab;      /* '<S978>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_a;       /* '<S978>/Data Type Conversion6' */
  uint8_T Reshape_f[16];               /* '<S1008>/Reshape' */
  uint8_T Selector_l;                  /* '<S1008>/Selector' */
  uint8_T DataTypeConversion1_cb;      /* '<S978>/Data Type Conversion1' */
  uint8_T Operator_ed;                 /* '<S991>/Operator' */
  uint8_T DataType_pa;                 /* '<S991>/DataType' */
  uint8_T DataType_dw;                 /* '<S987>/DataType' */
  uint8_T DataTypeConversion8_pj;      /* '<S978>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_c;       /* '<S978>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_ov;     /* '<S978>/Data Type Conversion10' */
  uint8_T Add_ar;                      /* '<S978>/Add' */
  uint8_T Shift_Arithmetic6_la;        /* '<S978>/Shift_Arithmetic 6' */
  uint8_T Add1_b2;                     /* '<S978>/Add1' */
  uint8_T Operator_bd;                 /* '<S992>/Operator' */
  uint8_T DataType_nr;                 /* '<S992>/DataType' */
  uint8_T Shift_Arithmetic7_k;         /* '<S978>/Shift_Arithmetic 7' */
  uint8_T Operator_jy;                 /* '<S993>/Operator' */
  uint8_T DataType_ly;                 /* '<S993>/DataType' */
  uint8_T DataTypeConversion_az;       /* '<S945>/Data Type Conversion' */
  uint8_T Operator_mh;                 /* '<S973>/Operator' */
  uint8_T Operator_dz;                 /* '<S969>/Operator' */
  uint8_T DataType_eg;                 /* '<S969>/DataType' */
  uint8_T Operator_ajy;                /* '<S970>/Operator' */
  uint8_T Operator_kz;                 /* '<S971>/Operator' */
  uint8_T Operator_bl;                 /* '<S972>/Operator' */
  uint8_T Operator_g4g;                /* '<S974>/Operator' */
  uint8_T DataTypeConversion_kf;       /* '<S888>/Data Type Conversion' */
  uint8_T Operator_e0;                 /* '<S920>/Operator' */
  uint8_T DataType_nbp;                /* '<S920>/DataType' */
  uint8_T DataTypeConversion2_gs;      /* '<S888>/Data Type Conversion2' */
  uint8_T Operator_ep;                 /* '<S922>/Operator' */
  uint8_T DataType_oi;                 /* '<S922>/DataType' */
  uint8_T Shift_Arithmetic_h;          /* '<S888>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_ga;      /* '<S888>/Data Type Conversion4' */
  uint8_T Operator_n4;                 /* '<S923>/Operator' */
  uint8_T DataType_aa;                 /* '<S923>/DataType' */
  uint8_T Shift_Arithmetic1_j;         /* '<S888>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_lo;      /* '<S888>/Data Type Conversion5' */
  uint8_T Operator_dd;                 /* '<S921>/Operator' */
  uint8_T DataType_ik;                 /* '<S921>/DataType' */
  uint8_T Shift_Arithmetic2_nu;        /* '<S888>/Shift_Arithmetic 2' */
  uint8_T Operator_e2;                 /* '<S928>/Operator' */
  uint8_T DataType_ohu;                /* '<S928>/DataType' */
  uint8_T DataTypeConversion1_po;      /* '<S888>/Data Type Conversion1' */
  uint8_T Operator_iq;                 /* '<S924>/Operator' */
  uint8_T DataType_hw;                 /* '<S924>/DataType' */
  uint8_T DataType_ow;                 /* '<S933>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S926>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S926>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S926>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_n;      /* '<S926>/Data Type Conversion13' */
  uint8_T Operator_ow;                 /* '<S932>/Operator' */
  uint8_T DataType_at;                 /* '<S932>/DataType' */
  uint8_T Checksum;                    /* '<S926>/Add' */
  uint8_T Shift_Arithmetic7_j;         /* '<S926>/Shift_Arithmetic 7' */
  uint8_T Add1_d;                      /* '<S926>/Add1' */
  uint8_T Operator_ml;                 /* '<S931>/Operator' */
  uint8_T DataType_ff;                 /* '<S931>/DataType' */
  uint8_T DataTypeConversion3_e2;      /* '<S888>/Data Type Conversion3' */
  uint8_T Operator_gn;                 /* '<S925>/Operator' */
  uint8_T DataType_px;                 /* '<S925>/DataType' */
  uint8_T Shift_Arithmetic3_m;         /* '<S888>/Shift_Arithmetic 3' */
  uint8_T Operator_c1;                 /* '<S929>/Operator' */
  uint8_T DataType_jwo;                /* '<S929>/DataType' */
  uint8_T DataTypeConversion_mj;       /* '<S883>/Data Type Conversion' */
  uint8_T Operator_lc;                 /* '<S898>/Operator' */
  uint8_T DataType_fx;                 /* '<S898>/DataType' */
  uint8_T Operator_hp;                 /* '<S903>/Operator' */
  uint8_T Operator_ee;                 /* '<S899>/Operator' */
  uint8_T Operator_pxs;                /* '<S904>/Operator' */
  uint8_T Operator_ln;                 /* '<S905>/Operator' */
  uint8_T Operator_ie;                 /* '<S902>/Operator' */
  uint8_T DataType_hq;                 /* '<S918>/DataType' */
  uint8_T DataTypeConversion2_iv;      /* '<S887>/Data Type Conversion2' */
  uint8_T DataTypeConversion_fb;       /* '<S863>/Data Type Conversion' */
  uint8_T Operator_n1;                 /* '<S868>/Operator' */
  uint8_T Operator_ivl;                /* '<S865>/Operator' */
  uint8_T DataType_on;                 /* '<S865>/DataType' */
  uint8_T Operator_pw;                 /* '<S866>/Operator' */
  uint8_T Operator_p4;                 /* '<S867>/Operator' */
  uint8_T Operator_mho;                /* '<S869>/Operator' */
  uint8_T Operator_el;                 /* '<S870>/Operator' */
  uint8_T DataTypeConversion_fh;       /* '<S864>/Data Type Conversion' */
  uint8_T Operator_ez;                 /* '<S876>/Operator' */
  uint8_T Operator_pd;                 /* '<S873>/Operator' */
  uint8_T DataType_pf;                 /* '<S873>/DataType' */
  uint8_T Operator_gc;                 /* '<S874>/Operator' */
  uint8_T Operator_he;                 /* '<S875>/Operator' */
  uint8_T Operator_p5;                 /* '<S877>/Operator' */
  uint8_T Operator_fm;                 /* '<S878>/Operator' */
  uint8_T FixPtUnitDelay2_g;           /* '<S844>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S725>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S727>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S728>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_e;       /* '<S718>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S720>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_h;       /* '<S713>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S714>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_p;       /* '<S707>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S708>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S709>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_c;       /* '<S700>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S702>/Signal Conversion' */
  uint8_T UnitDelay_gs[17];            /* '<S650>/Unit Delay' */
  uint8_T Data[17];                    /* '<S650>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S653>/Inport' */
  uint8_T DataTypeConversion_i2;       /* '<S610>/Data Type Conversion' */
  uint8_T DataTypeConversion_c5;       /* '<S611>/Data Type Conversion' */
  uint8_T DataTypeConversion1_bz;      /* '<S610>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_cp;      /* '<S611>/Data Type Conversion1' */
  uint8_T DataTypeConversion_ey;       /* '<S597>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ch;      /* '<S597>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_mg;      /* '<S597>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_fh;      /* '<S597>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_k;       /* '<S597>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_k;       /* '<S597>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_n00;     /* '<S597>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_le;      /* '<S597>/Data Type Conversion7' */
  uint8_T DataTypeConversion_nd;       /* '<S598>/Data Type Conversion' */
  uint8_T DataTypeConversion1_iy;      /* '<S598>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_bf;      /* '<S598>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_gs;      /* '<S598>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_ne;      /* '<S598>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ks;      /* '<S598>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_b;       /* '<S598>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_b;       /* '<S598>/Data Type Conversion7' */
  uint8_T DataTypeConversion_kfr;      /* '<S584>/Data Type Conversion' */
  uint8_T DataTypeConversion1_e3;      /* '<S584>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_lv;      /* '<S584>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_a;       /* '<S584>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_h;       /* '<S584>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ea;      /* '<S584>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_nl;      /* '<S584>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h5;      /* '<S584>/Data Type Conversion7' */
  uint8_T UnitDelay_pe[39];            /* '<S522>/Unit Delay' */
  uint8_T Data_a[39];                  /* '<S522>/serialize_tpdt' */
  uint8_T Inport_e[39];                /* '<S525>/Inport' */
  uint8_T DataTypeConversion1_ba;      /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_p;       /* '<S211>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew;      /* '<S106>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S106>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b;           /* '<S396>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_pl;          /* '<S385>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_oi;          /* '<S373>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S373>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_nn;          /* '<S357>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion1_f1;      /* '<S79>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_e3;      /* '<S80>/Data Type Conversion5' */
  uint8_T FixPtUnitDelay2_j;           /* '<S375>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_i;      /* '<S375>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_m;           /* '<S376>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_b;      /* '<S376>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_h;           /* '<S342>/FixPt Unit Delay2' */
  uint8_T stateChange;                 /* '<S285>/Chart' */
  uint8_T FixPtUnitDelay2_a;           /* '<S274>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_gg;          /* '<S200>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_do;          /* '<S193>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_mf;          /* '<S180>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_op;          /* '<S142>/FixPt Unit Delay2' */
  int8_T DataTypeConversion4_go;       /* '<S682>/Data Type Conversion4' */
  int8_T DataTypeConversion10_a;       /* '<S684>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S399>/for_logging7' */
  boolean_T SFunction1_b;              /* '<S736>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S418>/EStopSwActive' */
  boolean_T SFunction1_a;              /* '<S735>/S-Function1' */
  boolean_T Operator_bj;               /* '<S845>/Operator' */
  boolean_T DataType_eq;               /* '<S845>/DataType' */
  boolean_T LogicalOperator;           /* '<S747>/Logical Operator' */
  boolean_T SFunction1_mk;             /* '<S737>/S-Function1' */
  boolean_T Operator_co;               /* '<S846>/Operator' */
  boolean_T DataType_j3;               /* '<S846>/DataType' */
  boolean_T AND2;                      /* '<S747>/AND2' */
  boolean_T SFunction1_m1;             /* '<S738>/S-Function1' */
  boolean_T StartPBActive;             /* '<S418>/StartPBActive' */
  boolean_T LogicalOperator_n;         /* '<S418>/Logical Operator' */
  boolean_T Compare;                   /* '<S761>/Compare' */
  boolean_T Uk1_c;                     /* '<S757>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S757>/FixPt Relational Operator' */
  boolean_T UnitDelay_dh;              /* '<S745>/Unit Delay' */
  boolean_T Compare_o;                 /* '<S760>/Compare' */
  boolean_T Uk1_mp;                    /* '<S756>/Delay Input1' */
  boolean_T FixPtRelationalOperator_b; /* '<S756>/FixPt Relational Operator' */
  boolean_T UnitDelay1_d;              /* '<S758>/Unit Delay1' */
  boolean_T OR1;                       /* '<S758>/OR1' */
  boolean_T Compare_c;                 /* '<S762>/Compare' */
  boolean_T LessThanOrEqual;           /* '<S758>/LessThanOrEqual' */
  boolean_T AND;                       /* '<S758>/AND' */
  boolean_T NOT;                       /* '<S745>/NOT' */
  boolean_T AND_b;                     /* '<S745>/AND' */
  boolean_T UnitDelay1_h;              /* '<S759>/Unit Delay1' */
  boolean_T OR1_m;                     /* '<S759>/OR1' */
  boolean_T Compare_ox;                /* '<S763>/Compare' */
  boolean_T LessThanOrEqual_k;         /* '<S759>/LessThanOrEqual' */
  boolean_T AND_a;                     /* '<S759>/AND' */
  boolean_T SFunction1_l;              /* '<S740>/S-Function1' */
  boolean_T StartPBActive1;            /* '<S418>/StartPBActive1' */
  boolean_T min_relop;                 /* '<S793>/min_relop' */
  boolean_T max_relop;                 /* '<S793>/max_relop' */
  boolean_T conjunction;               /* '<S793>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S795>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S795>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S781>/Relational Operator9' */
  boolean_T min_relop_a;               /* '<S785>/min_relop' */
  boolean_T max_relop_e;               /* '<S785>/max_relop' */
  boolean_T conjunction_l;             /* '<S785>/conjunction' */
  boolean_T RelationalOperator1_m;     /* '<S787>/Relational Operator1' */
  boolean_T RelationalOperator_a;      /* '<S787>/Relational Operator' */
  boolean_T F_Fault_Soft_b;            /* '<S780>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S765>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S781>/Relational Operator8' */
  boolean_T F_Fault_Hard_m;            /* '<S780>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S765>/Logical Operator1' */
  boolean_T Compare_b;                 /* '<S776>/Compare' */
  boolean_T min_relop_aj;              /* '<S809>/min_relop' */
  boolean_T max_relop_f;               /* '<S809>/max_relop' */
  boolean_T conjunction_c;             /* '<S809>/conjunction' */
  boolean_T RelationalOperator1_o;     /* '<S811>/Relational Operator1' */
  boolean_T RelationalOperator_f;      /* '<S811>/Relational Operator' */
  boolean_T F_Fault_Soft_o;            /* '<S783>/Relational Operator9' */
  boolean_T min_relop_n;               /* '<S801>/min_relop' */
  boolean_T max_relop_m;               /* '<S801>/max_relop' */
  boolean_T conjunction_p;             /* '<S801>/conjunction' */
  boolean_T RelationalOperator1_mk;    /* '<S803>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S803>/Relational Operator' */
  boolean_T F_Fault_Soft_h;            /* '<S782>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S765>/Logical Operator4' */
  boolean_T F_Fault_Hard_g;            /* '<S783>/Relational Operator8' */
  boolean_T F_Fault_Hard_d;            /* '<S782>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S765>/Logical Operator3' */
  boolean_T Compare_l;                 /* '<S777>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S765>/Logical Operator5' */
  boolean_T Unit_Delay_f5;             /* '<S768>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S835>/Unit_Delay1' */
  boolean_T LogicalOperator_g;         /* '<S835>/Logical Operator' */
  boolean_T Unit_Delay1_c;             /* '<S768>/Unit_Delay1' */
  boolean_T Unit_Delay1_g;             /* '<S836>/Unit_Delay1' */
  boolean_T LogicalOperator_j;         /* '<S836>/Logical Operator' */
  boolean_T Compare_n;                 /* '<S772>/Compare' */
  boolean_T Compare_ni;                /* '<S828>/Compare' */
  boolean_T LogicalOperator7;          /* '<S766>/Logical Operator7' */
  boolean_T Compare_a;                 /* '<S827>/Compare' */
  boolean_T LogicalOperator8;          /* '<S766>/Logical Operator8' */
  boolean_T Compare_f;                 /* '<S826>/Compare' */
  boolean_T LogicalOperator5;          /* '<S766>/Logical Operator5' */
  boolean_T Compare_ao;                /* '<S825>/Compare' */
  boolean_T LogicalOperator6;          /* '<S766>/Logical Operator6' */
  boolean_T Compare_g;                 /* '<S771>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S770>/Relational Operator' */
  boolean_T min_relop_i;               /* '<S817>/min_relop' */
  boolean_T max_relop_i;               /* '<S817>/max_relop' */
  boolean_T conjunction_n;             /* '<S817>/conjunction' */
  boolean_T RelationalOperator1_d;     /* '<S819>/Relational Operator1' */
  boolean_T RelationalOperator_l;      /* '<S819>/Relational Operator' */
  boolean_T F_Fault_Hard_f;            /* '<S784>/Relational Operator8' */
  boolean_T LogicalOperator6_i;        /* '<S746>/Logical Operator6' */
  boolean_T Operator_gd;               /* '<S480>/Operator' */
  boolean_T Operator_bo;               /* '<S697>/Operator' */
  boolean_T Operator_i0;               /* '<S489>/Operator' */
  boolean_T RX_status;                 /* '<S486>/Data Type Conversion8' */
  boolean_T RX_status_c;               /* '<S424>/Multiport_Switch' */
  boolean_T Operator_ju;               /* '<S524>/Operator' */
  boolean_T LogicalOperator_h;         /* '<S438>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S651>/Unit_Delay3' */
  boolean_T Operator_jhl;              /* '<S652>/Operator' */
  boolean_T LogicalOperator_m;         /* '<S461>/Logical Operator' */
  boolean_T RelationalOperator1_j[17]; /* '<S651>/Relational Operator1' */
  boolean_T Compare_fa;                /* '<S655>/Compare' */
  boolean_T LogicalOperator_b;         /* '<S651>/Logical Operator' */
  boolean_T Unit_Delay_js;             /* '<S651>/Unit_Delay' */
  boolean_T LogicalOperator3_f;        /* '<S657>/Logical Operator3' */
  boolean_T Unit_Delay_i;              /* '<S657>/Unit_Delay' */
  boolean_T LogicalOperator_f;         /* '<S657>/Logical Operator' */
  boolean_T LogicalOperator1_p;        /* '<S657>/Logical Operator1' */
  boolean_T Operator_h3;               /* '<S662>/Operator' */
  boolean_T Operator_dlu;              /* '<S661>/Operator' */
  boolean_T Operator_ac;               /* '<S663>/Operator' */
  boolean_T Operator_bf;               /* '<S664>/Operator' */
  boolean_T Operator_l5n;              /* '<S665>/Operator' */
  boolean_T Operator_e3;               /* '<S666>/Operator' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S468>/OR' */
  boolean_T Enable;                    /* '<S3>/Enable' */
  boolean_T EStop_j;                   /* '<S3>/Unit_Delay' */
  boolean_T EnableSW;                  /* '<S3>/Unit_Delay' */
  boolean_T EngageReq_c;               /* '<S3>/Unit_Delay' */
  boolean_T LogPB;                     /* '<S3>/Unit_Delay' */
  boolean_T AutonomousEnabled_a;       /* '<S3>/Unit_Delay' */
  boolean_T BrakeSW_j;                 /* '<S3>/Unit_Delay' */
  boolean_T Compare_c5;                /* '<S408>/Compare' */
  boolean_T Uk1_f;                     /* '<S407>/Delay Input1' */
  boolean_T FixPtRelationalOperator_i; /* '<S407>/FixPt Relational Operator' */
  boolean_T Operator_m1;               /* '<S404>/Operator' */
  boolean_T SystemsOk;                 /* '<S399>/AND1' */
  boolean_T RX_status_i;               /* '<S511>/Data Type Conversion8' */
  boolean_T RX_status_n;               /* '<S640>/Data Type Conversion8' */
  boolean_T Operator_mn;               /* '<S1070>/Operator' */
  boolean_T DataType_lx;               /* '<S1070>/DataType' */
  boolean_T UnitDelay2;                /* '<S861>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S861>/Unit Delay3' */
  boolean_T Operator_fh;               /* '<S1089>/Operator' */
  boolean_T AND_d;                     /* '<S1080>/AND' */
  boolean_T OR;                        /* '<S1080>/OR' */
  boolean_T Operator_ba;               /* '<S1088>/Operator' */
  boolean_T LogicalOperator_m1;        /* '<S1078>/Logical Operator' */
  boolean_T RelationalOperator_k;      /* '<S1079>/Relational Operator' */
  boolean_T RelationalOperator1_h;     /* '<S1079>/Relational Operator1' */
  boolean_T LogicalOperator_d;         /* '<S1079>/Logical Operator' */
  boolean_T Compare_lg;                /* '<S1085>/Compare' */
  boolean_T Compare_fi;                /* '<S1086>/Compare' */
  boolean_T LogicalOperator1_d;        /* '<S1079>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1079>/Logical Operator2' */
  boolean_T LogicalOperator_gh;        /* '<S852>/Logical Operator' */
  boolean_T RX_status_l;               /* '<S575>/Data Type Conversion8' */
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
  boolean_T RX_status_h;               /* '<S477>/Data Type Conversion8' */
  boolean_T RX_status_nk;              /* '<S423>/Multiport_Switch' */
  boolean_T Operator_np;               /* '<S481>/Operator' */
  boolean_T Operator_hz;               /* '<S482>/Operator' */
  boolean_T Operator_og;               /* '<S483>/Operator' */
  boolean_T Operator_dj;               /* '<S484>/Operator' */
  boolean_T Operator_bm;               /* '<S485>/Operator' */
  boolean_T Operator_cf;               /* '<S490>/Operator' */
  boolean_T Operator_dh;               /* '<S491>/Operator' */
  boolean_T Operator_mf;               /* '<S492>/Operator' */
  boolean_T Operator_mb;               /* '<S493>/Operator' */
  boolean_T Operator_pg;               /* '<S494>/Operator' */
  boolean_T RX_status_g;               /* '<S495>/Data Type Conversion8' */
  boolean_T RX_status_hl;              /* '<S497>/Data Type Conversion8' */
  boolean_T RX_status_gr;              /* '<S499>/Data Type Conversion8' */
  boolean_T RX_status_iy;              /* '<S501>/Data Type Conversion8' */
  boolean_T RX_status_f;               /* '<S503>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S505>/Data Type Conversion8' */
  boolean_T RX_status_o;               /* '<S507>/Data Type Conversion8' */
  boolean_T RX_status_gy;              /* '<S509>/Data Type Conversion8' */
  boolean_T RX_status_j;               /* '<S511>/Switch' */
  boolean_T RX_status_ov;              /* '<S514>/Data Type Conversion8' */
  boolean_T RX_status_js;              /* '<S516>/Data Type Conversion8' */
  boolean_T RX_status_jv;              /* '<S518>/Data Type Conversion8' */
  boolean_T RX_status_n2;              /* '<S520>/Data Type Conversion8' */
  boolean_T RX_status_fy;              /* '<S567>/Data Type Conversion8' */
  boolean_T RX_status_ir;              /* '<S569>/Data Type Conversion8' */
  boolean_T RX_status_d;               /* '<S571>/Data Type Conversion8' */
  boolean_T RX_status_im;              /* '<S573>/Data Type Conversion8' */
  boolean_T RX_status_a;               /* '<S575>/Switch' */
  boolean_T RX_status_e;               /* '<S578>/Data Type Conversion8' */
  boolean_T RX_status_eq;              /* '<S445>/Switch' */
  boolean_T Operator_dy;               /* '<S617>/Operator' */
  boolean_T Operator_m2;               /* '<S618>/Operator' */
  boolean_T Operator_br;               /* '<S619>/Operator' */
  boolean_T RX_status_fn;              /* '<S612>/Data Type Conversion8' */
  boolean_T RX_status_eg;              /* '<S448>/Multiport_Switch' */
  boolean_T Operator_arr;              /* '<S620>/Operator' */
  boolean_T Operator_owh;              /* '<S621>/Operator' */
  boolean_T Operator_n0;               /* '<S622>/Operator' */
  boolean_T RX_status_gu;              /* '<S623>/Data Type Conversion2' */
  boolean_T RX_status_do;              /* '<S623>/Data Type Conversion5' */
  boolean_T RX_status_hn;              /* '<S623>/Data Type Conversion8' */
  boolean_T RX_status_dx;              /* '<S627>/Switch' */
  boolean_T RX_status_c0;              /* '<S630>/Data Type Conversion8' */
  boolean_T RX_status_hlk;             /* '<S632>/Data Type Conversion8' */
  boolean_T RX_status_af;              /* '<S634>/Data Type Conversion8' */
  boolean_T RX_status_c0l;             /* '<S636>/Data Type Conversion8' */
  boolean_T RX_status_gg;              /* '<S638>/Data Type Conversion8' */
  boolean_T RX_status_oq;              /* '<S642>/Data Type Conversion8' */
  boolean_T RX_status_aa;              /* '<S644>/Data Type Conversion8' */
  boolean_T RX_status_dj;              /* '<S646>/Data Type Conversion8' */
  boolean_T RX_status_f0;              /* '<S648>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S651>/Relational Operator2' */
  boolean_T Compare_m;                 /* '<S656>/Compare' */
  boolean_T Unit_Delay2_cw;            /* '<S651>/Unit_Delay2' */
  boolean_T LogicalOperator1_e;        /* '<S651>/Logical Operator1' */
  boolean_T LogicalOperator2_k;        /* '<S657>/Logical Operator2' */
  boolean_T Unit_Delay1_c0;            /* '<S651>/Unit_Delay1' */
  boolean_T LogicalOperator3_a;        /* '<S658>/Logical Operator3' */
  boolean_T Unit_Delay_eb;             /* '<S658>/Unit_Delay' */
  boolean_T LogicalOperator_e;         /* '<S658>/Logical Operator' */
  boolean_T LogicalOperator1_m;        /* '<S658>/Logical Operator1' */
  boolean_T LogicalOperator2_i;        /* '<S658>/Logical Operator2' */
  boolean_T Operator_mub;              /* '<S695>/Operator' */
  boolean_T Operator_hzy;              /* '<S698>/Operator' */
  boolean_T Operator_iw;               /* '<S696>/Operator' */
  boolean_T Operator_c3;               /* '<S694>/Operator' */
  boolean_T Operator_b1;               /* '<S591>/Operator' */
  boolean_T Operator_ae;               /* '<S592>/Operator' */
  boolean_T Operator_oq;               /* '<S596>/Operator' */
  boolean_T RX_status_ho;              /* '<S585>/Data Type Conversion8' */
  boolean_T RX_status_np;              /* '<S586>/Data Type Conversion8' */
  boolean_T RX_status_eq4;             /* '<S446>/Multiport_Switch' */
  boolean_T Operator_bu;               /* '<S593>/Operator' */
  boolean_T Operator_acd;              /* '<S594>/Operator' */
  boolean_T Operator_atr;              /* '<S595>/Operator' */
  boolean_T Operator_obt;              /* '<S604>/Operator' */
  boolean_T Operator_lw;               /* '<S605>/Operator' */
  boolean_T Operator_m4;               /* '<S609>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S679>/Data Type Conversion' */
  boolean_T DataTypeConversion_oxt;    /* '<S422>/Data Type Conversion' */
  boolean_T DataType_iv;               /* '<S685>/DataType' */
  boolean_T DataTypeConversion1_b5;    /* '<S422>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S679>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_bo;    /* '<S422>/Data Type Conversion2' */
  boolean_T RX_status_cm;              /* '<S599>/Data Type Conversion8' */
  boolean_T RX_status_n3;              /* '<S447>/Multiport_Switch' */
  boolean_T Operator_l2;               /* '<S606>/Operator' */
  boolean_T Operator_pww;              /* '<S607>/Operator' */
  boolean_T Operator_bg;               /* '<S608>/Operator' */
  boolean_T SFunction1_e;              /* '<S739>/S-Function1' */
  boolean_T LogPbActive;               /* '<S418>/LogPbActive' */
  boolean_T LogicalOperator2_n;        /* '<S418>/Logical Operator2' */
  boolean_T Compare_e;                 /* '<S753>/Compare' */
  boolean_T Uk1_fn;                    /* '<S749>/Delay Input1' */
  boolean_T FixPtRelationalOperator_d; /* '<S749>/FixPt Relational Operator' */
  boolean_T UnitDelay_bw;              /* '<S744>/Unit Delay' */
  boolean_T Compare_b0;                /* '<S752>/Compare' */
  boolean_T Uk1_l;                     /* '<S748>/Delay Input1' */
  boolean_T FixPtRelationalOperator_o; /* '<S748>/FixPt Relational Operator' */
  boolean_T UnitDelay1_a;              /* '<S750>/Unit Delay1' */
  boolean_T OR1_n;                     /* '<S750>/OR1' */
  boolean_T Compare_mj;                /* '<S754>/Compare' */
  boolean_T LessThanOrEqual_h;         /* '<S750>/LessThanOrEqual' */
  boolean_T AND_l;                     /* '<S750>/AND' */
  boolean_T NOT_a;                     /* '<S744>/NOT' */
  boolean_T AND_bd;                    /* '<S744>/AND' */
  boolean_T UnitDelay1_p;              /* '<S751>/Unit Delay1' */
  boolean_T OR1_h;                     /* '<S751>/OR1' */
  boolean_T Compare_ne;                /* '<S755>/Compare' */
  boolean_T LessThanOrEqual_i;         /* '<S751>/LessThanOrEqual' */
  boolean_T AND_g;                     /* '<S751>/AND' */
  boolean_T F_Fault_Soft_d;            /* '<S784>/Relational Operator9' */
  boolean_T Operator_eu;               /* '<S22>/Operator' */
  boolean_T Operator_ms;               /* '<S26>/Operator' */
  boolean_T Operator_fv;               /* '<S27>/Operator' */
  boolean_T Operator_bs;               /* '<S24>/Operator' */
  boolean_T Operator_bw;               /* '<S25>/Operator' */
  boolean_T Operator_eb;               /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S861>/Chart' */
  boolean_T enTPCM;                    /* '<S861>/Chart' */
  boolean_T DataTypeConversion6_ba;    /* '<S1042>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S1046>/u2' */
  boolean_T Operator_jf;               /* '<S1046>/Operator' */
  boolean_T DataType_ag4;              /* '<S1046>/DataType' */
  boolean_T Unit_Delay_kh;             /* '<S1051>/Unit_Delay' */
  boolean_T Operator_kh;               /* '<S1053>/Operator' */
  boolean_T AutonomousOutputEnabled_p; /* '<S1017>/Bus Selector2' */
  boolean_T BrakingControlActive_f;    /* '<S1017>/Bus Selector2' */
  boolean_T Unit_Delay_jao;            /* '<S1013>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S1013>/OperatorEnable' */
  boolean_T LogicalOperator8_c;        /* '<S1013>/Logical Operator8' */
  boolean_T LogicalOperator7_m;        /* '<S1013>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S1013>/OperatorEnable' */
  boolean_T LogicalOperator1_l;        /* '<S1013>/Logical Operator1' */
  boolean_T DataTypeConversion2_of;    /* '<S1013>/Data Type Conversion2' */
  boolean_T LogicalOperator_l;         /* '<S1013>/Logical Operator' */
  boolean_T Compare_b2;                /* '<S1019>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S1013>/OperatorEnable' */
  boolean_T Unit_Delay_i0;             /* '<S1036>/Unit_Delay' */
  boolean_T DataTypeConversion7_ht;    /* '<S1015>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_cs;    /* '<S1015>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_e5;    /* '<S1015>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_pw;    /* '<S1015>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_h;     /* '<S1015>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_l;     /* '<S1015>/Data Type Conversion6' */
  boolean_T Operator_h0;               /* '<S1038>/Operator' */
  boolean_T DataTypeConversion5_nx;    /* '<S942>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_gkw;   /* '<S942>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_bx;    /* '<S942>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_kl;    /* '<S942>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_nj;    /* '<S942>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_i;     /* '<S942>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_af;    /* '<S943>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_l1;    /* '<S943>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_bh;    /* '<S943>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_f5r;   /* '<S943>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_jg;    /* '<S943>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_kk;    /* '<S943>/Data Type Conversion7' */
  boolean_T Operator_bn;               /* '<S997>/Operator' */
  boolean_T Operator_MX;               /* '<S1006>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S1006>/Operator_MN' */
  boolean_T Operator_f5;               /* '<S998>/Operator' */
  boolean_T Operator_ezf;              /* '<S999>/Operator' */
  boolean_T Operator_gx;               /* '<S1000>/Operator' */
  boolean_T Operator_kc;               /* '<S1001>/Operator' */
  boolean_T Operator_pl;               /* '<S1002>/Operator' */
  boolean_T Unit_Delay_pb;             /* '<S1008>/Unit_Delay' */
  boolean_T DataTypeConversion6_lq;    /* '<S945>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_fm;    /* '<S945>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_kn;    /* '<S945>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_ng;    /* '<S945>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_an;    /* '<S945>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_d;     /* '<S945>/Data Type Conversion7' */
  boolean_T LogicalOperator1_ef;       /* '<S1006>/Logical Operator1' */
  boolean_T LogicalOperator_my;        /* '<S1006>/Logical Operator' */
  boolean_T Operator_pr;               /* '<S1010>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S888>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S906>/u1' */
  boolean_T DataTypeConversion2_nv;    /* '<S883>/Data Type Conversion2' */
  boolean_T Operator_hzf;              /* '<S906>/Operator' */
  boolean_T DataType_hzm;              /* '<S906>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_i; /* '<S909>/u1' */
  boolean_T DataTypeConversion5_iz;    /* '<S883>/Data Type Conversion5' */
  boolean_T Operator_or;               /* '<S909>/Operator' */
  boolean_T DataType_m5;               /* '<S909>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_h; /* '<S900>/u1' */
  boolean_T DataTypeConversion6_mq;    /* '<S883>/Data Type Conversion6' */
  boolean_T Operator_py;               /* '<S900>/Operator' */
  boolean_T DataType_jk;               /* '<S900>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_p; /* '<S901>/u1' */
  boolean_T DataTypeConversion7_gh;    /* '<S883>/Data Type Conversion7' */
  boolean_T Operator_edk;              /* '<S901>/Operator' */
  boolean_T DataType_oe;               /* '<S901>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_b; /* '<S907>/u1' */
  boolean_T DataTypeConversion3_f1;    /* '<S883>/Data Type Conversion3' */
  boolean_T Operator_oz;               /* '<S907>/Operator' */
  boolean_T DataType_fr;               /* '<S907>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_ij;/* '<S908>/u1' */
  boolean_T DataTypeConversion4_gv;    /* '<S883>/Data Type Conversion4' */
  boolean_T Operator_nf;               /* '<S908>/Operator' */
  boolean_T DataType_bo;               /* '<S908>/DataType' */
  boolean_T DataTypeConversion2_js;    /* '<S889>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S894>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_h;/* '<S895>/Enable' */
  boolean_T DataTypeConversion2_hc;    /* '<S884>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_cw;    /* '<S885>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_g;     /* '<S863>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_et;    /* '<S863>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_fn;    /* '<S863>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_hs;    /* '<S863>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_fg;    /* '<S863>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_l5;    /* '<S863>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_c;     /* '<S864>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_ln;    /* '<S864>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_n2;    /* '<S864>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_fm;    /* '<S864>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_cu;    /* '<S864>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_gn;    /* '<S864>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S847>/Chart' */
  boolean_T Unit_Delay_pp;             /* '<S840>/Unit_Delay' */
  boolean_T LogicalOperator1_n;        /* '<S840>/Logical Operator1' */
  boolean_T LogicalOperator_ga;        /* '<S840>/Logical Operator' */
  boolean_T Unit_Delay_jo;             /* '<S841>/Unit_Delay' */
  boolean_T LogicalOperator1_c;        /* '<S841>/Logical Operator1' */
  boolean_T RelationalOperator1_c;     /* '<S769>/Relational Operator1' */
  boolean_T LogicalOperator3_j;        /* '<S839>/Logical Operator3' */
  boolean_T Unit_Delay_oh;             /* '<S839>/Unit_Delay' */
  boolean_T LogicalOperator1_j;        /* '<S839>/Logical Operator1' */
  boolean_T LogicalOperator_p;         /* '<S839>/Logical Operator' */
  boolean_T LogicalOperator2_p;        /* '<S839>/Logical Operator2' */
  boolean_T min_relop_j;               /* '<S842>/min_relop' */
  boolean_T RX_status_lh;              /* '<S650>/serialize_tpdt' */
  boolean_T RX_status_k;               /* '<S627>/Data Type Conversion8' */
  boolean_T RX_status_b;               /* '<S627>/Data Type Conversion3' */
  boolean_T RX_status_aw;              /* '<S610>/Data Type Conversion8' */
  boolean_T RX_status_gs;              /* '<S611>/Data Type Conversion8' */
  boolean_T RX_status_hw;              /* '<S597>/Data Type Conversion8' */
  boolean_T RX_status_p;               /* '<S598>/Data Type Conversion8' */
  boolean_T RX_status_kp;              /* '<S584>/Data Type Conversion8' */
  boolean_T RX_status_gf;              /* '<S580>/Data Type Conversion8' */
  boolean_T RX_status_po;              /* '<S581>/Data Type Conversion8' */
  boolean_T RX_status_kf;              /* '<S575>/Data Type Conversion3' */
  boolean_T RX_status_m;               /* '<S522>/serialize_tpdt' */
  boolean_T RX_status_gw;              /* '<S511>/Data Type Conversion1' */
  boolean_T CheckHDOP;                 /* '<S397>/CheckHDOP' */
  boolean_T NOT_g;                     /* '<S76>/NOT' */
  boolean_T Compare_j;                 /* '<S103>/Compare' */
  boolean_T Uk1_i;                     /* '<S102>/Delay Input1' */
  boolean_T FixPtRelationalOperator_l; /* '<S102>/FixPt Relational Operator' */
  boolean_T Compare_i;                 /* '<S101>/Compare' */
  boolean_T Unit_Delay_nh;             /* '<S76>/Unit_Delay' */
  boolean_T OR_l;                      /* '<S76>/OR' */
  boolean_T Compare_jp;                /* '<S100>/Compare' */
  boolean_T Uk1_d;                     /* '<S98>/Delay Input1' */
  boolean_T FixPtRelationalOperator_ot;/* '<S98>/FixPt Relational Operator' */
  boolean_T UnitDelay_i;               /* '<S97>/Unit Delay' */
  boolean_T OR_e;                      /* '<S97>/OR' */
  boolean_T Compare_fh;                /* '<S99>/Compare' */
  boolean_T LessThanOrEqual_g;         /* '<S97>/LessThanOrEqual' */
  boolean_T AND_f;                     /* '<S97>/AND' */
  boolean_T NOT1;                      /* '<S95>/NOT1' */
  boolean_T LogicalOperator_dy;        /* '<S83>/Logical Operator' */
  boolean_T f_vspd_geq_than_target_plus_hys;/* '<S111>/Relational Operator' */
  boolean_T f_target_is_stop_thresh;   /* '<S111>/Relational Operator1' */
  boolean_T Compare_eu;                /* '<S207>/Compare' */
  boolean_T RelationalOperator2_p;     /* '<S111>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S111>/Relational Operator3' */
  boolean_T f_vspd_leq_than_hyst_and_target;/* '<S111>/Logical Operator' */
  boolean_T LogicalOperator1_mr;       /* '<S111>/Logical Operator1' */
  boolean_T DataTypeConversion4_d5;    /* '<S77>/Data Type Conversion4' */
  boolean_T F_Brake_control_active;    /* '<S111>/Logical Operator2' */
  boolean_T Compare_e5;                /* '<S217>/Compare' */
  boolean_T LogicalOperator2_nt;       /* '<S211>/Logical Operator2' */
  boolean_T Compare_ih;                /* '<S215>/Compare' */
  boolean_T Compare_ex;                /* '<S216>/Compare' */
  boolean_T BrakingActive2;            /* '<S211>/BrakingActive2' */
  boolean_T f_brake_sw_off;            /* '<S211>/BrakingActive1' */
  boolean_T Compare_ay;                /* '<S218>/Compare' */
  boolean_T Compare_os;                /* '<S219>/Compare' */
  boolean_T f_brk_gov_inactive;        /* '<S211>/Logical Operator1' */
  boolean_T LogicalOperator_k;         /* '<S211>/Logical Operator' */
  boolean_T LogicalOperator_j2;        /* '<S82>/Logical Operator' */
  boolean_T APTC_arb_pedal_low_idl_sw_o;/* '<S75>/Relational Operator' */
  boolean_T RelationalOperator1_i;     /* '<S89>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S89>/Relational Operator' */
  boolean_T RelationalOperator1_a;     /* '<S90>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S90>/Relational Operator' */
  boolean_T RelationalOperator3_c[2];  /* '<S106>/Relational Operator3' */
  boolean_T LogicalOperator4_o;        /* '<S106>/Logical Operator4' */
  boolean_T RelationalOperator4[2];    /* '<S106>/Relational Operator4' */
  boolean_T F_Service_brake_pressure_applie;/* '<S106>/Logical Operator3' */
  boolean_T RelationalOperator6[2];    /* '<S106>/Relational Operator6' */
  boolean_T F_Brake_sw_CAN;            /* '<S106>/Logical Operator' */
  boolean_T LogicalOperator5_n;        /* '<S106>/Logical Operator5' */
  boolean_T F_Vehicle_stopped;         /* '<S110>/Relational Operator1' */
  boolean_T Compare_g4;                /* '<S208>/Compare' */
  boolean_T RelationalOperator4_l;     /* '<S111>/Relational Operator4' */
  boolean_T F_Hold_brakes_at_zero_d;   /* '<S111>/Logical Operator3' */
  boolean_T Compare_ey;                /* '<S389>/Compare' */
  boolean_T Compare_jb;                /* '<S386>/Compare' */
  boolean_T Compare_h;                 /* '<S387>/Compare' */
  boolean_T Compare_bp;                /* '<S388>/Compare' */
  boolean_T LogicalOperator2_f;        /* '<S349>/Logical Operator2' */
  boolean_T Unit_Delay_ot;             /* '<S391>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S391>/Logical Operator1' */
  boolean_T LogicalOperator_fl;        /* '<S391>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S392>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S392>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S377>/Compare' */
  boolean_T Compare_dv;                /* '<S378>/Compare' */
  boolean_T LogicalOperator1_g;        /* '<S347>/Logical Operator1' */
  boolean_T Unit_Delay_h;              /* '<S380>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S380>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S380>/Logical Operator' */
  boolean_T Unit_Delay_c;              /* '<S381>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S381>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S343>/Compare' */
  boolean_T FixPtRelationalOperator_dk[2];/* '<S344>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_nk[33];            /* '<S363>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S358>/Logical Operator' */
  boolean_T RelationalOperator_fg;     /* '<S358>/Relational Operator' */
  boolean_T LogicalOperator3_o;        /* '<S364>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S364>/Unit_Delay' */
  boolean_T LogicalOperator_o;         /* '<S364>/Logical Operator' */
  boolean_T LogicalOperator1_ph;       /* '<S364>/Logical Operator1' */
  boolean_T f_vspd_min_delta_greater_than_t;/* '<S358>/Logical Operator2' */
  boolean_T RelationalOperator1_g;     /* '<S358>/Relational Operator1' */
  boolean_T f_vspd_max_delta_greater_than_t;/* '<S358>/Logical Operator1' */
  boolean_T f_accel_rate_greater_than_thres;/* '<S358>/Relational Operator2' */
  boolean_T f_decel_rate_greater_than_thres;/* '<S358>/Relational Operator3' */
  boolean_T f_jerk_rate_greater_than_thresh;/* '<S358>/Relational Operator4' */
  boolean_T f_jerk_rate_greater_than_thre_n;/* '<S358>/Relational Operator5' */
  boolean_T RelationalOperator6_i;     /* '<S358>/Relational Operator6' */
  boolean_T f_distance_max_delta_greater_th;/* '<S358>/Logical Operator3' */
  boolean_T F_Inhibit_sigmoid_vector_shapin;/* '<S358>/Logical Operator4' */
  boolean_T LogicalOperator_nd;        /* '<S81>/Logical Operator' */
  boolean_T LogicalOperator2_ft;       /* '<S81>/Logical Operator2' */
  boolean_T RelationalOperator3_k;     /* '<S359>/Relational Operator3' */
  boolean_T RelationalOperator1_hj;    /* '<S359>/Relational Operator1' */
  boolean_T LogicalOperator_da;        /* '<S359>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S359>/Relational Operator2' */
  boolean_T F_set_max_distance_accumulated;/* '<S359>/Logical Operator2' */
  boolean_T RelationalOperator_lj;     /* '<S359>/Relational Operator' */
  boolean_T FixPtRelationalOperator_p[2];/* '<S351>/FixPt Relational Operator' */
  boolean_T LogicalOperator_gb;        /* '<S345>/Logical Operator' */
  boolean_T Unit_Delay_l;              /* '<S353>/Unit_Delay' */
  boolean_T LogicalOperator1_lp;       /* '<S353>/Logical Operator1' */
  boolean_T F_Driver_braking;          /* '<S106>/Relational Operator2' */
  boolean_T F_Operator_brake_appl;     /* '<S106>/Logical Operator2' */
  boolean_T RelationalOperator5[2];    /* '<S106>/Relational Operator5' */
  boolean_T F_Bendix_2C2_service_brake_pres;/* '<S106>/Logical Operator6' */
  boolean_T F_Bendix_2C2_braking;      /* '<S106>/Relational Operator' */
  boolean_T F_ADAS_brake_appl;         /* '<S106>/Logical Operator7' */
  boolean_T F_ADAS_brake_error;        /* '<S106>/Relational Operator1' */
  boolean_T Unit_Delay_dy;             /* '<S109>/Unit_Delay' */
  boolean_T Unit_Delay1_k;             /* '<S205>/Unit_Delay1' */
  boolean_T LogicalOperator_fc;        /* '<S205>/Logical Operator' */
  boolean_T DataTypeConversion_de;     /* '<S79>/Data Type Conversion' */
  boolean_T RelationalOperator1_cn;    /* '<S213>/Relational Operator1' */
  boolean_T RelationalOperator3_g;     /* '<S213>/Relational Operator3' */
  boolean_T RelationalOperator2_f;     /* '<S213>/Relational Operator2' */
  boolean_T RelationalOperator4_o;     /* '<S213>/Relational Operator4' */
  boolean_T F_Ignition_sw_off_conditions_me;/* '<S213>/Logical Operator' */
  boolean_T F_Ignition_sw_on;          /* '<S213>/Relational Operator' */
  boolean_T DataTypeConversion_l1;     /* '<S285>/Data Type Conversion' */
  boolean_T Unit_Delay1_j;             /* '<S329>/Unit_Delay1' */
  boolean_T LogicalOperator_kh;        /* '<S329>/Logical Operator' */
  boolean_T highRateOfChange;          /* '<S284>/highRateOfChange' */
  boolean_T closeToEdge;               /* '<S284>/closeToEdge' */
  boolean_T JumpNearEdge;              /* '<S284>/JumpNearEdge' */
  boolean_T Uk1_k2;                    /* '<S328>/Delay Input1' */
  boolean_T FixPtRelationalOperator_iv;/* '<S328>/FixPt Relational Operator' */
  boolean_T DataTypeConversion_dz;     /* '<S284>/Data Type Conversion' */
  boolean_T Unit_Delay1_f;             /* '<S330>/Unit_Delay1' */
  boolean_T LogicalOperator_a;         /* '<S330>/Logical Operator' */
  boolean_T Unit_Delay1_d;             /* '<S331>/Unit_Delay1' */
  boolean_T LogicalOperator_nz;        /* '<S331>/Logical Operator' */
  boolean_T RelationalOperator_l5;     /* '<S285>/Relational Operator' */
  boolean_T RelationalOperator_d;      /* '<S297>/Relational Operator' */
  boolean_T RelationalOperator5_f;     /* '<S300>/Relational Operator5' */
  boolean_T RelationalOperator4_la;    /* '<S300>/Relational Operator4' */
  boolean_T RelationalOperator2_o;     /* '<S300>/Relational Operator2' */
  boolean_T LogicalOperator1_ji;       /* '<S300>/Logical Operator1' */
  boolean_T RelationalOperator1_ie;    /* '<S300>/Relational Operator1' */
  boolean_T RelationalOperator3_p;     /* '<S300>/Relational Operator3' */
  boolean_T LogicalOperator2_o;        /* '<S300>/Logical Operator2' */
  boolean_T LogicalOperator_bs;        /* '<S300>/Logical Operator' */
  boolean_T LogicalOperator3_oi;       /* '<S300>/Logical Operator3' */
  boolean_T LowerRelop1;               /* '<S299>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S299>/UpperRelop' */
  boolean_T DataTypeConversion_dn;     /* '<S280>/Data Type Conversion' */
  boolean_T LowerRelop1_h;             /* '<S319>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S319>/UpperRelop' */
  boolean_T RelationalOperator1_p;     /* '<S306>/Relational Operator1' */
  boolean_T RelationalOperator_hy;     /* '<S306>/Relational Operator' */
  boolean_T RelationalOperator1_f;     /* '<S314>/Relational Operator1' */
  boolean_T RelationalOperator_l4;     /* '<S314>/Relational Operator' */
  boolean_T RelationalOperator1_gr;    /* '<S304>/Relational Operator1' */
  boolean_T RelationalOperator_o;      /* '<S304>/Relational Operator' */
  boolean_T LowerRelop1_o;             /* '<S320>/LowerRelop1' */
  boolean_T UpperRelop_o;              /* '<S320>/UpperRelop' */
  boolean_T LowerRelop1_l;             /* '<S325>/LowerRelop1' */
  boolean_T UpperRelop_k;              /* '<S325>/UpperRelop' */
  boolean_T LowerRelop1_e;             /* '<S324>/LowerRelop1' */
  boolean_T UpperRelop_fl;             /* '<S324>/UpperRelop' */
  boolean_T LowerTest;                 /* '<S290>/Lower Test' */
  boolean_T UpperTest;                 /* '<S290>/Upper Test' */
  boolean_T AND_p;                     /* '<S290>/AND' */
  boolean_T LowerTest_l;               /* '<S295>/Lower Test' */
  boolean_T UpperTest_e;               /* '<S295>/Upper Test' */
  boolean_T AND_j;                     /* '<S295>/AND' */
  boolean_T RelationalOperator_oq;     /* '<S80>/Relational Operator' */
  boolean_T min_relop_k;               /* '<S355>/min_relop' */
  boolean_T LogicalOperator2_g;        /* '<S364>/Logical Operator2' */
  boolean_T min_relop_c;               /* '<S383>/min_relop' */
  boolean_T min_relop_f;               /* '<S394>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S338>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S338>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S338>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S339>/Unit_Delay' */
  boolean_T LogicalOperator1_h;        /* '<S339>/Logical Operator1' */
  boolean_T RelationalOperator1_e;     /* '<S336>/Relational Operator1' */
  boolean_T LogicalOperator3_ar;       /* '<S337>/Logical Operator3' */
  boolean_T Unit_Delay_ig;             /* '<S337>/Unit_Delay' */
  boolean_T LogicalOperator1_joh;      /* '<S337>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S337>/Logical Operator' */
  boolean_T LogicalOperator2_j;        /* '<S337>/Logical Operator2' */
  boolean_T min_relop_d;               /* '<S340>/min_relop' */
  boolean_T RelationalOperator1_mf;    /* '<S297>/Relational Operator1' */
  boolean_T RelationalOperator1_n;     /* '<S226>/Relational Operator1' */
  boolean_T RelationalOperator_d3;     /* '<S226>/Relational Operator' */
  boolean_T RelationalOperator1_ch;    /* '<S227>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S227>/Relational Operator' */
  boolean_T RelationalOperator1_l;     /* '<S228>/Relational Operator1' */
  boolean_T RelationalOperator_fd;     /* '<S228>/Relational Operator' */
  boolean_T Unit_Delay1_m;             /* '<S222>/Unit_Delay1' */
  boolean_T f_gpid_reset;              /* '<S222>/Logical Operator' */
  boolean_T RelationalOperator_fl;     /* '<S222>/Relational Operator' */
  boolean_T Unit_Delay_d5;             /* '<S222>/Unit_Delay' */
  boolean_T RelationalOperator1_d3;    /* '<S222>/Relational Operator1' */
  boolean_T Unit_Delay_i04;            /* '<S249>/Unit_Delay' */
  boolean_T LogicalOperator1_o;        /* '<S249>/Logical Operator1' */
  boolean_T Unit_Delay1_dw;            /* '<S269>/Unit_Delay1' */
  boolean_T LogicalOperator_at;        /* '<S269>/Logical Operator' */
  boolean_T Unit_Delay_ne;             /* '<S270>/Unit_Delay' */
  boolean_T LogicalOperator1_k;        /* '<S270>/Logical Operator1' */
  boolean_T Compare_go;                /* '<S254>/Compare' */
  boolean_T RelationalOperator_ao;     /* '<S214>/Relational Operator' */
  boolean_T Compare_p;                 /* '<S253>/Compare' */
  boolean_T min_relop_cb;              /* '<S272>/min_relop' */
  boolean_T RelationalOperator1_ja;    /* '<S275>/Relational Operator1' */
  boolean_T RelationalOperator_p;      /* '<S275>/Relational Operator' */
  boolean_T PID_hold_i_term_f_b;       /* '<S214>/Generic_PID_Governor_3' */
  boolean_T F_Ignition_relay_command_i;/* '<S213>/Relay_control_state_machine' */
  boolean_T F_Inverter_relay_command_p;/* '<S213>/Relay_control_state_machine' */
  boolean_T F_MABX_relay_command_n;    /* '<S213>/Relay_control_state_machine' */
  boolean_T F_Sensor_relay_command_k;  /* '<S213>/Relay_control_state_machine' */
  boolean_T F_Shift_interlock_conditions_me;/* '<S186>/Logical Operator2' */
  boolean_T Unit_Delay_nz;             /* '<S196>/Unit_Delay' */
  boolean_T LogicalOperator1_kv;       /* '<S196>/Logical Operator1' */
  boolean_T min_relop_g;               /* '<S198>/min_relop' */
  boolean_T F_Brake_hold_conditions_met;/* '<S185>/Logical Operator2' */
  boolean_T Unit_Delay_h0;             /* '<S189>/Unit_Delay' */
  boolean_T LogicalOperator1_ou;       /* '<S189>/Logical Operator1' */
  boolean_T min_relop_im;              /* '<S191>/min_relop' */
  boolean_T Unit_Delay_m1;             /* '<S155>/Unit_Delay' */
  boolean_T LogicalOperator1_pf;       /* '<S155>/Logical Operator1' */
  boolean_T Unit_Delay1_jk;            /* '<S175>/Unit_Delay1' */
  boolean_T LogicalOperator_lo;        /* '<S175>/Logical Operator' */
  boolean_T Unit_Delay_li;             /* '<S176>/Unit_Delay' */
  boolean_T LogicalOperator1_oy;       /* '<S176>/Logical Operator1' */
  boolean_T Compare_niw;               /* '<S160>/Compare' */
  boolean_T Compare_dl;                /* '<S159>/Compare' */
  boolean_T min_relop_a5;              /* '<S178>/min_relop' */
  boolean_T RelationalOperator1_k;     /* '<S181>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S181>/Relational Operator' */
  boolean_T Unit_Delay_nm;             /* '<S117>/Unit_Delay' */
  boolean_T LogicalOperator1_ax;       /* '<S117>/Logical Operator1' */
  boolean_T Unit_Delay1_i;             /* '<S137>/Unit_Delay1' */
  boolean_T LogicalOperator_mu;        /* '<S137>/Logical Operator' */
  boolean_T Unit_Delay_nl;             /* '<S138>/Unit_Delay' */
  boolean_T LogicalOperator1_mk;       /* '<S138>/Logical Operator1' */
  boolean_T Compare_aa;                /* '<S122>/Compare' */
  boolean_T Compare_jrp;               /* '<S121>/Compare' */
  boolean_T min_relop_p;               /* '<S140>/min_relop' */
  boolean_T RelationalOperator1_gi;    /* '<S143>/Relational Operator1' */
  boolean_T RelationalOperator_b;      /* '<S143>/Relational Operator' */
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
  boolean_T Operator_ou;               /* '<S50>/Operator' */
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
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_nhu;/* '<S1079>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1078>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1078>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_b;/* '<S1078>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_g;/* '<S1078>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_a_T If_Then_Else_pl;/* '<S1017>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_a;/* '<S1016>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_gq;/* '<S841>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nh;/* '<S836>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b;/* '<S835>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_dy;/* '<S766>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_i;/* '<S766>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_j0;/* '<S766>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_he;/* '<S766>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_d;/* '<S784>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_j;/* '<S819>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_d;/* '<S819>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_lr;/* '<S783>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_kj;/* '<S811>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n;/* '<S811>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_f;/* '<S782>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S803>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_h;/* '<S803>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_l;/* '<S781>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_ef;/* '<S795>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pu;/* '<S795>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S780>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_e;/* '<S787>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S787>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S764>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S764>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S764>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S468>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S392>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S349>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S381>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S347>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S368>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_j;/* '<S359>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S362>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S353>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S352>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S339>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S331>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S330>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b3;/* '<S329>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S314>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m;/* '<S314>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_mf_T If_Then_Else_co;/* '<S312>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_m;/* '<S283>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_km;/* '<S306>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S306>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S304>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pe;/* '<S304>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m1;/* '<S283>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_nhw;/* '<S282>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h3;/* '<S275>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pi;/* '<S275>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_cp;/* '<S270>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S269>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S246>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S246>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_a;/* '<S221>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_dz;/* '<S228>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_br;/* '<S228>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_kg;/* '<S227>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bo;/* '<S227>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h;/* '<S226>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ct;/* '<S226>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nr;/* '<S230>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_g;/* '<S205>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ep;/* '<S196>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_o5;/* '<S186>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_il;/* '<S186>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nz;/* '<S189>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_mf;/* '<S185>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gj;/* '<S185>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_m_T If_Then_Else_l;/* '<S106>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_gx;/* '<S181>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fo;/* '<S181>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iy;/* '<S176>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bc;/* '<S175>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S152>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S152>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_b;/* '<S143>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nj;/* '<S143>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bg;/* '<S138>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ly;/* '<S137>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S114>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S114>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_p;/* '<S90>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_o;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S759>/Unit Delay' */
  real_T UnitDelay_DSTATE_e;           /* '<S758>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE;       /* '<S798>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_c;     /* '<S790>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S814>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_j;     /* '<S806>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S835>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_b;         /* '<S836>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_k;     /* '<S834>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_h;     /* '<S833>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_i;     /* '<S822>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_k;           /* '<S405>/Unit Delay' */
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
  real_T UnitDelay_DSTATE_i;           /* '<S750>/Unit Delay' */
  real_T UnitDelay_DSTATE_n;           /* '<S751>/Unit Delay' */
  real_T Unit_Delay_DSTATE;            /* '<S930>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_i;          /* '<S849>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_m;     /* '<S844>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_h;          /* '<S653>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_o;          /* '<S525>/Unit_Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S397>/Unit Delay1' */
  real_T LongitudnalPosition_DSTATE;   /* '<S398>/LongitudnalPosition' */
  real_T VehHeading_DSTATE;            /* '<S398>/VehHeading' */
  real_T XPosition_DSTATE;             /* '<S398>/XPosition' */
  real_T YPosition_DSTATE;             /* '<S398>/YPosition' */
  real_T UnitDelay1_DSTATE_m;          /* '<S97>/Unit Delay1' */
  real_T Unit_Delay_DSTATE_e;          /* '<S349>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hj;    /* '<S396>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_m;          /* '<S393>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_g;          /* '<S347>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hq;    /* '<S385>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_b;          /* '<S382>/Unit_Delay' */
  real_T DelayInput1_DSTATE[2];        /* '<S344>/Delay Input1' */
  real_T Unit_Delay_DSTATE_bw;         /* '<S362>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S373>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_p;          /* '<S371>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S351>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S357>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S352>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S352>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S352>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S350>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S205>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S204>/UD' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S329>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S330>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_p;         /* '<S331>/Unit_Delay2' */
  real_T UnitDelay_DSTATE_m;           /* '<S297>/Unit Delay' */
  real_T UnitDelay_DSTATE_m0;          /* '<S298>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S298>/Unit Delay1' */
  real_T DelayInput2_DSTATE;           /* '<S310>/Delay Input2' */
  real_T Integrator_DSTATE;            /* '<S309>/Integrator' */
  real_T Filter_DSTATE;                /* '<S309>/Filter' */
  real_T DelayInput_DSTATE;            /* '<S313>/Delay Input' */
  real_T DelayOutput_DSTATE;           /* '<S313>/Delay Output' */
  real_T DelayInput2_DSTATE_a;         /* '<S311>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S303>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE_l;         /* '<S323>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S80>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_e3;          /* '<S80>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pe;    /* '<S375>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S376>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S370>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S342>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a;     /* '<S274>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_m;         /* '<S269>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_fz;         /* '<S224>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_ob;         /* '<S186>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_d;     /* '<S200>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_om;         /* '<S197>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_c;          /* '<S185>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_b;     /* '<S193>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_oj;         /* '<S190>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_eu;         /* '<S148>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g2;    /* '<S180>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_c;         /* '<S175>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_hs;         /* '<S147>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_d;          /* '<S113>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g1;    /* '<S142>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_dy;        /* '<S137>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_i2;         /* '<S112>/Unit_Delay' */
  volatile real_T RateTransition_Buffer0;/* '<S419>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S419>/Rate Transition' */
  real_T TmpRTBAtANDInport1_Buffer0;   /* synthesized block */
  real_T Subtract_DWORK1;              /* '<S653>/Subtract' */
  real_T TmpRTBAtSignalConversion1Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion3Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion2Inport;/* synthesized block */
  real_T TmpRTBAtrad2deg1Inport1_Buffer0;/* synthesized block */
  real_T TmpRTBAtsignCurveOffsetInport1_;/* synthesized block */
  real_T TmpRTBAtAdd2Inport2_Buffer0;  /* synthesized block */
  real_T PrevY;                        /* '<S312>/Limit Rate Limiter' */
  real_T TimeFinal;                    /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityInitialLimited;       /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityFinalLimited;         /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationInitialLimited;   /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationFinalLimited;     /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk56;                       /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk12;                       /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T a;                            /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T b;                            /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T c;                            /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Acceleration34;               /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* '<S213>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV;/* '<S213>/Relay_control_state_machine' */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV; /* '<S213>/Relay_control_state_machine' */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* '<S213>/Relay_control_state_machine' */
  real_T MABX_RELAY_ON_DELAY_SECS_APV; /* '<S213>/Relay_control_state_machine' */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV;/* '<S213>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* '<S213>/Relay_control_state_machine' */
  real_T IGN_RELAY_ON_DELAY_SECS_APV;  /* '<S213>/Relay_control_state_machine' */
  void *dsa_tcpip_setup_PWORK;         /* '<S401>/dsa_tcpip_setup' */
  void *TCPIP_Com_PWORK;               /* '<S402>/TCPIP_Com' */
  void* Assertion_slioAccessor;        /* '<S785>/Assertion' */
  void* Assertion_slioAccessor_i;      /* '<S793>/Assertion' */
  void* Assertion_slioAccessor_l;      /* '<S801>/Assertion' */
  void* Assertion_slioAccessor_f;      /* '<S809>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S817>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S842>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S287>/Assertion' */
  void* Assertion_slioAccessor_km;     /* '<S292>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S355>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S383>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S394>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S340>/Assertion' */
  void* Assertion_slioAccessor_eg;     /* '<S272>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S198>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S191>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S178>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S140>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S287>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S292>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_a;         /* '<S1052>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_ir;        /* '<S1037>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_ee;        /* '<S1009>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j;         /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_128_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_129_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S400>/Heartbeat' */
  int32_T clockTickCounter_c;          /* '<S1080>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S651>/Add' */
  uint32_T Subtract_DWORK1_p;          /* '<S1052>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S1033>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S213>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S401>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S462>/S-Function1' */
  int_T SFunction1_IWORK_a[2];         /* '<S463>/S-Function1' */
  int_T SFunction1_IWORK_o[2];         /* '<S464>/S-Function1' */
  int_T SFunction1_IWORK_b[2];         /* '<S465>/S-Function1' */
  int_T SFunction1_IWORK_l[2];         /* '<S466>/S-Function1' */
  int_T SFunction1_IWORK_h[2];         /* '<S467>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S411>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S798>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_m;    /* '<S790>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S814>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_og;   /* '<S806>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o0;   /* '<S834>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_d;    /* '<S833>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S822>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_c;         /* '<S861>/Unit Delay1' */
  uint8_T Unit_Delay_138_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_mt;   /* '<S844>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_o[17];      /* '<S650>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_g[39];      /* '<S522>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S396>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S385>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S373>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_cn;   /* '<S357>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S375>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S376>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S342>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S274>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S200>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S193>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o4;   /* '<S180>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S142>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S757>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_be;       /* '<S745>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S756>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_g;       /* '<S758>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_gp;      /* '<S759>/Unit Delay1' */
  boolean_T Unit_Delay_DSTATE_k;       /* '<S768>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S835>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_o;      /* '<S768>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_a;      /* '<S836>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S651>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_ca;      /* '<S651>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ed;      /* '<S657>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_48_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_83_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_84_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S407>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S861>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S861>/Unit Delay3' */
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
  boolean_T Unit_Delay2_DSTATE_f;      /* '<S651>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_d;      /* '<S651>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_en;      /* '<S658>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S749>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_de;       /* '<S744>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S748>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_o;       /* '<S750>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_i;       /* '<S751>/Unit Delay1' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_m4;      /* '<S1051>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_dq;      /* '<S1013>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_hh;      /* '<S1036>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_kh;      /* '<S1008>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_bo;      /* '<S840>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_fi;      /* '<S841>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_em;      /* '<S839>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_j;      /* '<S102>/Delay Input1' */
  boolean_T Unit_Delay_DSTATE_fv;      /* '<S76>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S98>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_b1;       /* '<S97>/Unit Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S391>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S392>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S380>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S381>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ko;      /* '<S364>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l;       /* '<S353>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eu4;     /* '<S109>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_di;     /* '<S205>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_db;     /* '<S329>/Unit_Delay1' */
  boolean_T DelayInput1_DSTATE_f0;     /* '<S328>/Delay Input1' */
  boolean_T Unit_Delay1_DSTATE_as;     /* '<S330>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p;      /* '<S331>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_bd;      /* '<S338>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jt;      /* '<S339>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ll;      /* '<S337>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_p1;     /* '<S222>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_lq;      /* '<S222>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_be;      /* '<S249>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_h;      /* '<S269>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_fic;     /* '<S270>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_a;       /* '<S196>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_or;      /* '<S189>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_n;       /* '<S155>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_f;      /* '<S175>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_g4;      /* '<S176>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_omj;     /* '<S117>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_b;      /* '<S137>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_h4;      /* '<S138>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l5;      /* '<S60>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_i5;      /* '<S54>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mq;      /* '<S48>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_h41;     /* '<S42>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_je;      /* '<S36>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_f1;      /* '<S30>/Unit_Delay' */
  volatile int8_T RateTransition_write_buf;/* '<S419>/Rate Transition' */
  volatile int8_T RateTransition_read_buf;/* '<S419>/Rate Transition' */
  volatile int8_T RateTransition_last_buf_wr;/* '<S419>/Rate Transition' */
  int8_T LongitudnalPosition_PrevResetSt;/* '<S398>/LongitudnalPosition' */
  int8_T VehHeading_PrevResetState;    /* '<S398>/VehHeading' */
  int8_T XPosition_PrevResetState;     /* '<S398>/XPosition' */
  int8_T YPosition_PrevResetState;     /* '<S398>/YPosition' */
  int8_T Integrator_PrevResetState;    /* '<S309>/Integrator' */
  int8_T Filter_PrevResetState;        /* '<S309>/Filter' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S303>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_e;/* '<S80>/Discrete-Time Integrator' */
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S861>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S861>/Chart' */
  uint8_T temporalCounter_i1_k;        /* '<S861>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S847>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S847>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S765>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S765>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S765>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S765>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S765>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_f;       /* '<S765>/Health State Machine PWM Sensor 1' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S303>/Discrete-Time Integrator' */
  uint8_T is_active_c12_SUB_L4_Task_10ms_;/* '<S285>/Chart' */
  uint8_T is_c12_SUB_L4_Task_10ms_SUB_STE;/* '<S285>/Chart' */
  uint8_T is_active_c6_SUB_L4_Task_10ms_S;/* '<S213>/Relay_control_state_machine' */
  uint8_T is_c6_SUB_L4_Task_10ms_SUB_STAT;/* '<S213>/Relay_control_state_machine' */
  uint8_T is_POWER_UP_ROUTINE;         /* '<S213>/Relay_control_state_machine' */
  uint8_T is_POWER_DOWN_ROUTINE;       /* '<S213>/Relay_control_state_machine' */
  uint8_T is_active_c19_SUB_L4_Task_10ms_;/* '<S79>/Chart' */
  uint8_T is_c19_SUB_L4_Task_10ms_SUB_STA;/* '<S79>/Chart' */
  boolean_T AlternateMethod;           /* '<S346>/VehicleSpeedSetpointDynamicCalculation' */
  boolean_T Slew_at_event_MODE;        /* '<S746>/Slew_at_event' */
  boolean_T Slew_at_event_MODE_d;      /* '<S285>/Slew_at_event' */
  boolean_T Throttle_controller_gov_MODE;/* '<S79>/Throttle_controller_gov' */
  boolean_T Engine_speed_target_MODE;  /* '<S79>/Engine_speed_target' */
  boolean_T Determine_shift_interlock_brake;/* '<S107>/Determine_shift_interlock_brake_pressure_target' */
  boolean_T Determine_brake_hold_pressure_t;/* '<S107>/Determine_brake_hold_pressure_target' */
  boolean_T Bendix_2C2_vehicle_speed_feedba;/* '<S77>/Bendix_2C2_vehicle_speed_feedback_pressure_controller' */
  boolean_T Bendix_2C2_brake_application_pr;/* '<S77>/Bendix_2C2_brake_application_pressure_feedback_controller' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S246>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S246>/Calculate_D_term' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S152>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S152>/Calculate_D_term' */
  DW_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S114>/Calculate_I_term' */
  DW_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S114>/Calculate_D_term' */
} DW_L4_MABX_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1065>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_n;/* '<S1064>/CAN_TYPE1_TX_M1_C1' */
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

/* Parameters for system: '<S114>/Calculate_D_term' */
struct P_Calculate_D_term_L4_MABX_T_ {
  real_T GPID_d_term_Y0;               /* Expression: 0
                                        * Referenced by: '<S118>/GPID_d_term'
                                        */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S123>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.0001
                                        * Referenced by: '<S123>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S123>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S123>/Unit_Delay2'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S124>/FixPt Unit Delay1'
                                          */
  boolean_T Unit_Delay1_InitialCondition;/* Expression: true
                                          * Referenced by: '<S123>/Unit_Delay1'
                                          */
  boolean_T Constant_Value;            /* Expression: false
                                        * Referenced by: '<S123>/Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S124>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value;         /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S124>/FixPt Constant'
                                        */
};

/* Parameters for system: '<S114>/Calculate_I_term' */
struct P_Calculate_I_term_L4_MABX_T_ {
  real_T GPID_i_sum_error_init_Y0;     /* Expression: 0
                                        * Referenced by: '<S127>/GPID_i_sum_error_init'
                                        */
  real_T GPID_i_term_Y0;               /* Expression: 0
                                        * Referenced by: '<S119>/GPID_i_term'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S130>/FixPt Unit Delay1'
                                          */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S128>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S119>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S131>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S132>/Constant'
                                        */
  boolean_T F_GPID_hold_i_term_Y0;     /* Expression: false
                                        * Referenced by: '<S119>/F_GPID_hold_i_term'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S130>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value;         /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S130>/FixPt Constant'
                                        */
};

/* Parameters for system: '<S979>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S994>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1093>/Constant'
                                        */
  real_T TransferFcnLeadorLag_ICPrevInpu;/* Mask Parameter: TransferFcnLeadorLag_ICPrevInpu
                                          * Referenced by: '<S313>/Delay Input'
                                          */
  real_T TransferFcnLeadorLag_ICPrevOutp;/* Mask Parameter: TransferFcnLeadorLag_ICPrevOutp
                                          * Referenced by: '<S313>/Delay Output'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S204>/UD'
                                          */
  real_T PIDController_LowerSaturationLi;/* Mask Parameter: PIDController_LowerSaturationLi
                                          * Referenced by: '<S309>/Saturate'
                                          */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S309>/Filter Coefficient'
                                        */
  real_T WrapToZero1_Threshold;        /* Mask Parameter: WrapToZero1_Threshold
                                        * Referenced by: '<S939>/FixPt Switch'
                                        */
  real_T PIDController_UpperSaturationLi;/* Mask Parameter: PIDController_UpperSaturationLi
                                          * Referenced by: '<S309>/Saturate'
                                          */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S122>/Constant'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S121>/Constant'
                                        */
  real_T CompareToConstant1_const_m;   /* Mask Parameter: CompareToConstant1_const_m
                                        * Referenced by: '<S160>/Constant'
                                        */
  real_T CompareToConstant_const_c;    /* Mask Parameter: CompareToConstant_const_c
                                        * Referenced by: '<S159>/Constant'
                                        */
  real_T CompareToConstant1_const_i;   /* Mask Parameter: CompareToConstant1_const_i
                                        * Referenced by: '<S254>/Constant'
                                        */
  real_T CompareToConstant_const_d;    /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S253>/Constant'
                                        */
  real_T CompareToConstant_const_a;    /* Mask Parameter: CompareToConstant_const_a
                                        * Referenced by: '<S101>/Constant'
                                        */
  real_T CompareToConstant9_const;     /* Mask Parameter: CompareToConstant9_const
                                        * Referenced by: '<S389>/Constant'
                                        */
  real_T CompareToConstant10_const;    /* Mask Parameter: CompareToConstant10_const
                                        * Referenced by: '<S386>/Constant'
                                        */
  real_T CompareToConstant11_const;    /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S387>/Constant'
                                        */
  real_T CompareToConstant12_const;    /* Mask Parameter: CompareToConstant12_const
                                        * Referenced by: '<S388>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S377>/Constant'
                                        */
  real_T CompareToConstant8_const;     /* Mask Parameter: CompareToConstant8_const
                                        * Referenced by: '<S378>/Constant'
                                        */
  real_T CompareToConstant_const_g;    /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S321>/Constant'
                                        */
  real_T CheckStaticLowerBound_min;    /* Mask Parameter: CheckStaticLowerBound_min
                                        * Referenced by: '<S140>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_d;  /* Mask Parameter: CheckStaticLowerBound_min_d
                                        * Referenced by: '<S178>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_i;  /* Mask Parameter: CheckStaticLowerBound_min_i
                                        * Referenced by: '<S191>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_f;  /* Mask Parameter: CheckStaticLowerBound_min_f
                                        * Referenced by: '<S198>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_b;  /* Mask Parameter: CheckStaticLowerBound_min_b
                                        * Referenced by: '<S272>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_n;  /* Mask Parameter: CheckStaticLowerBound_min_n
                                        * Referenced by: '<S340>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_o;  /* Mask Parameter: CheckStaticLowerBound_min_o
                                        * Referenced by: '<S355>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_h;  /* Mask Parameter: CheckStaticLowerBound_min_h
                                        * Referenced by: '<S383>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_nz; /* Mask Parameter: CheckStaticLowerBound_min_nz
                                        * Referenced by: '<S394>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_p;  /* Mask Parameter: CheckStaticLowerBound_min_p
                                        * Referenced by: '<S842>/min_val'
                                        */
  real_T DetectChange1_vinit;          /* Mask Parameter: DetectChange1_vinit
                                        * Referenced by: '<S344>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_n;        /* Mask Parameter: DetectChange1_vinit_n
                                        * Referenced by: '<S351>/Delay Input1'
                                        */
  ENUM_J1939_SWITCH_T CompareToConstant2_const;/* Mask Parameter: CompareToConstant2_const
                                                * Referenced by: '<S217>/Constant'
                                                */
  ENUM_J1939_SWITCH_T CompareToConstant_const_e;/* Mask Parameter: CompareToConstant_const_e
                                                 * Referenced by: '<S215>/Constant'
                                                 */
  ENUM_J1939_SWITCH_T CompareToConstant1_const_j;/* Mask Parameter: CompareToConstant1_const_j
                                                  * Referenced by: '<S216>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant_const_cr;/* Mask Parameter: CompareToConstant_const_cr
                                                   * Referenced by: '<S776>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_b;/* Mask Parameter: CompareToConstant2_const_b
                                                   * Referenced by: '<S777>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_g;/* Mask Parameter: CompareToConstant3_const_g
                                                   * Referenced by: '<S772>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S828>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S827>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_e;/* Mask Parameter: CompareToConstant3_const_e
                                                   * Referenced by: '<S826>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_o;/* Mask Parameter: CompareToConstant1_const_o
                                                   * Referenced by: '<S825>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_p;/* Mask Parameter: CompareToConstant1_const_p
                                                   * Referenced by: '<S771>/Constant'
                                                   */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_f;/* Mask Parameter: CompareToConstant_const_f
                                                            * Referenced by: '<S1019>/Constant'
                                                            */
  real32_T IntervalTest_lowlimit;      /* Mask Parameter: IntervalTest_lowlimit
                                        * Referenced by: '<S290>/Lower Limit'
                                        */
  real32_T IntervalTest_lowlimit_k;    /* Mask Parameter: IntervalTest_lowlimit_k
                                        * Referenced by: '<S295>/Lower Limit'
                                        */
  real32_T IntervalTest_uplimit;       /* Mask Parameter: IntervalTest_uplimit
                                        * Referenced by: '<S290>/Upper Limit'
                                        */
  real32_T IntervalTest_uplimit_e;     /* Mask Parameter: IntervalTest_uplimit_e
                                        * Referenced by: '<S295>/Upper Limit'
                                        */
  uint32_T Repeating_Sequence_Stair_OutVal[8];/* Mask Parameter: Repeating_Sequence_Stair_OutVal
                                               * Referenced by: '<S1051>/Constant'
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
  boolean_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                        * Referenced by: '<S102>/Delay Input1'
                                        */
  boolean_T DetectFallNonpositive_vinit;/* Mask Parameter: DetectFallNonpositive_vinit
                                         * Referenced by: '<S98>/Delay Input1'
                                         */
  boolean_T DetectChange_vinit;        /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S328>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_a;/* Mask Parameter: DetectRisePositive_vinit_a
                                        * Referenced by: '<S757>/Delay Input1'
                                        */
  boolean_T DetectFallNonpositive_vinit_o;/* Mask Parameter: DetectFallNonpositive_vinit_o
                                           * Referenced by: '<S756>/Delay Input1'
                                           */
  boolean_T DetectRisePositive1_vinit; /* Mask Parameter: DetectRisePositive1_vinit
                                        * Referenced by: '<S407>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_h;/* Mask Parameter: DetectRisePositive_vinit_h
                                        * Referenced by: '<S749>/Delay Input1'
                                        */
  boolean_T DetectFallNonpositive_vinit_d;/* Mask Parameter: DetectFallNonpositive_vinit_d
                                           * Referenced by: '<S748>/Delay Input1'
                                           */
  uint8_T Operator_BitMask;            /* Mask Parameter: Operator_BitMask
                                        * Referenced by: '<S868>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S865>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S866>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S867>/Operator'
                                        */
  uint8_T Operator_BitMask_kw;         /* Mask Parameter: Operator_BitMask_kw
                                        * Referenced by: '<S869>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S870>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S876>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S873>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S874>/Operator'
                                        */
  uint8_T Operator_BitMask_ob;         /* Mask Parameter: Operator_BitMask_ob
                                        * Referenced by: '<S875>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S877>/Operator'
                                        */
  uint8_T Operator_BitMask_fx;         /* Mask Parameter: Operator_BitMask_fx
                                        * Referenced by: '<S878>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S920>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S922>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S923>/Operator'
                                        */
  uint8_T Operator_BitMask_ap;         /* Mask Parameter: Operator_BitMask_ap
                                        * Referenced by: '<S921>/Operator'
                                        */
  uint8_T Operator_BitMask_dj;         /* Mask Parameter: Operator_BitMask_dj
                                        * Referenced by: '<S924>/Operator'
                                        */
  uint8_T Operator_BitMask_ki;         /* Mask Parameter: Operator_BitMask_ki
                                        * Referenced by: '<S925>/Operator'
                                        */
  uint8_T Operator_BitMask_gm;         /* Mask Parameter: Operator_BitMask_gm
                                        * Referenced by: '<S898>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S903>/Operator'
                                        */
  uint8_T Operator_BitMask_mu;         /* Mask Parameter: Operator_BitMask_mu
                                        * Referenced by: '<S899>/Operator'
                                        */
  uint8_T Operator_BitMask_hx;         /* Mask Parameter: Operator_BitMask_hx
                                        * Referenced by: '<S904>/Operator'
                                        */
  uint8_T Operator_BitMask_hr;         /* Mask Parameter: Operator_BitMask_hr
                                        * Referenced by: '<S905>/Operator'
                                        */
  uint8_T Operator_BitMask_pw;         /* Mask Parameter: Operator_BitMask_pw
                                        * Referenced by: '<S902>/Operator'
                                        */
  uint8_T Operator_BitMask_ox;         /* Mask Parameter: Operator_BitMask_ox
                                        * Referenced by: '<S950>/Operator'
                                        */
  uint8_T Operator_BitMask_gmr;        /* Mask Parameter: Operator_BitMask_gmr
                                        * Referenced by: '<S947>/Operator'
                                        */
  uint8_T Operator_BitMask_oz;         /* Mask Parameter: Operator_BitMask_oz
                                        * Referenced by: '<S948>/Operator'
                                        */
  uint8_T Operator_BitMask_n;          /* Mask Parameter: Operator_BitMask_n
                                        * Referenced by: '<S949>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S951>/Operator'
                                        */
  uint8_T Operator_BitMask_bk;         /* Mask Parameter: Operator_BitMask_bk
                                        * Referenced by: '<S952>/Operator'
                                        */
  uint8_T Operator_BitMask_ih;         /* Mask Parameter: Operator_BitMask_ih
                                        * Referenced by: '<S958>/Operator'
                                        */
  uint8_T Operator_BitMask_dt;         /* Mask Parameter: Operator_BitMask_dt
                                        * Referenced by: '<S959>/Operator'
                                        */
  uint8_T Operator_BitMask_oo;         /* Mask Parameter: Operator_BitMask_oo
                                        * Referenced by: '<S955>/Operator'
                                        */
  uint8_T Operator_BitMask_di;         /* Mask Parameter: Operator_BitMask_di
                                        * Referenced by: '<S956>/Operator'
                                        */
  uint8_T Operator_BitMask_bi;         /* Mask Parameter: Operator_BitMask_bi
                                        * Referenced by: '<S957>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S960>/Operator'
                                        */
  uint8_T Operator_BitMask_nm;         /* Mask Parameter: Operator_BitMask_nm
                                        * Referenced by: '<S973>/Operator'
                                        */
  uint8_T Operator_BitMask_g3;         /* Mask Parameter: Operator_BitMask_g3
                                        * Referenced by: '<S969>/Operator'
                                        */
  uint8_T Operator_BitMask_dm;         /* Mask Parameter: Operator_BitMask_dm
                                        * Referenced by: '<S970>/Operator'
                                        */
  uint8_T Operator_BitMask_b1;         /* Mask Parameter: Operator_BitMask_b1
                                        * Referenced by: '<S971>/Operator'
                                        */
  uint8_T Operator_BitMask_m4;         /* Mask Parameter: Operator_BitMask_m4
                                        * Referenced by: '<S972>/Operator'
                                        */
  uint8_T Operator_BitMask_je;         /* Mask Parameter: Operator_BitMask_je
                                        * Referenced by: '<S974>/Operator'
                                        */
  uint8_T Operator_BitMask_ag;         /* Mask Parameter: Operator_BitMask_ag
                                        * Referenced by: '<S1018>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_ln;         /* Mask Parameter: Operator_BitMask_ln
                                        * Referenced by: '<S1029>/Operator'
                                        */
  uint8_T Operator_BitMask_gw;         /* Mask Parameter: Operator_BitMask_gw
                                        * Referenced by: '<S1024>/Operator'
                                        */
  uint8_T Operator_BitMask_k4;         /* Mask Parameter: Operator_BitMask_k4
                                        * Referenced by: '<S1025>/Operator'
                                        */
  uint8_T Operator_BitMask_pl;         /* Mask Parameter: Operator_BitMask_pl
                                        * Referenced by: '<S1026>/Operator'
                                        */
  uint8_T Operator_BitMask_n3;         /* Mask Parameter: Operator_BitMask_n3
                                        * Referenced by: '<S1027>/Operator'
                                        */
  uint8_T Operator_BitMask_a5;         /* Mask Parameter: Operator_BitMask_a5
                                        * Referenced by: '<S1028>/Operator'
                                        */
  uint8_T Operator_BitMask_dd;         /* Mask Parameter: Operator_BitMask_dd
                                        * Referenced by: '<S845>/Operator'
                                        */
  uint8_T Operator_BitMask_kp;         /* Mask Parameter: Operator_BitMask_kp
                                        * Referenced by: '<S846>/Operator'
                                        */
  uint8_T Operator_BitMask_e4;         /* Mask Parameter: Operator_BitMask_e4
                                        * Referenced by: '<S674>/Operator'
                                        */
  uint8_T Operator_BitMask_ew;         /* Mask Parameter: Operator_BitMask_ew
                                        * Referenced by: '<S673>/Operator'
                                        */
  uint8_T Operator_BitMask_hh;         /* Mask Parameter: Operator_BitMask_hh
                                        * Referenced by: '<S686>/Operator'
                                        */
  uint8_T Operator_BitMask_jf;         /* Mask Parameter: Operator_BitMask_jf
                                        * Referenced by: '<S685>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S687>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_Out_e5[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_e5
                                               * Referenced by: '<S1008>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_OutV_p[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_p
                                               * Referenced by: '<S1036>/Constant'
                                               */
  real_T Constant0_Value;              /* Expression: 0
                                        * Referenced by: '<S97>/Constant0'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S97>/Constant1'
                                        */
  real_T PID_output_Y0;                /* Expression: 0
                                        * Referenced by: '<S104>/PID_output'
                                        */
  real_T BRK_PRESS_DEM_AW_HYSTERESIS_APV;/* Expression: 7
                                          * Referenced by: '<S104>/BRK_PRESS_DEM_AW_HYSTERESIS_APV'
                                          */
  real_T BRK_PRESS_DEM_KD_APV_Value;   /* Expression: 0
                                        * Referenced by: '<S104>/BRK_PRESS_DEM_KD_APV'
                                        */
  real_T BRK_PRESS_DEM_KI_APV_Value;   /* Expression: 0.1
                                        * Referenced by: '<S104>/BRK_PRESS_DEM_KI_APV'
                                        */
  real_T BRK_PRESS_DEM_KP_APV_Value;   /* Expression: 0.05
                                        * Referenced by: '<S104>/BRK_PRESS_DEM_KP_APV'
                                        */
  real_T BRK_PRESS_DEM_T_FILT_CTRL_ERROR;/* Expression: 0.025
                                          * Referenced by: '<S104>/BRK_PRESS_DEM_T_FILT_CTRL_ERROR_APV'
                                          */
  real_T BRK_PRESS_DEM_T_FILT_D_APV_Valu;/* Expression: 0.025
                                          * Referenced by: '<S104>/BRK_PRESS_DEM_T_FILT_D_APV'
                                          */
  real_T CPV_Value;                    /* Expression: 0
                                        * Referenced by: '<S104>/CPV'
                                        */
  real_T CPV3_Value;                   /* Expression: 0
                                        * Referenced by: '<S104>/CPV3'
                                        */
  real_T CPV4_Value;                   /* Expression: 5000
                                        * Referenced by: '<S104>/CPV4'
                                        */
  real_T CPV5_Value;                   /* Expression: 5000
                                        * Referenced by: '<S104>/CPV5'
                                        */
  real_T CPV6_Value;                   /* Expression: 100
                                        * Referenced by: '<S104>/CPV6'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S104>/Gain'
                                        */
  real_T Unit_Delay_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S113>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialConditio;/* Expression: 0.0
                                          * Referenced by: '<S142>/FixPt Unit Delay1'
                                          */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S137>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.0001
                                        * Referenced by: '<S137>/Saturation'
                                        */
  real_T Constant1_Value_f;            /* Expression: 1
                                        * Referenced by: '<S137>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S137>/Unit_Delay2'
                                        */
  real_T Unit_Delay_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S112>/Unit_Delay'
                                        */
  real_T PID_output_Y0_p;              /* Expression: 0
                                        * Referenced by: '<S105>/PID_output'
                                        */
  real_T BRK_DECEL_DEM_AW_HYSTERESIS_APV;/* Expression: 12
                                          * Referenced by: '<S105>/BRK_DECEL_DEM_AW_HYSTERESIS_APV'
                                          */
  real_T BRK_DECEL_DEM_SLEW_DEC_APV_Valu;/* Expression: 20
                                          * Referenced by: '<S105>/BRK_DECEL_DEM_SLEW_DEC_APV'
                                          */
  real_T BRK_DECEL_DEM_SLEW_INC_APV_Valu;/* Expression: 20
                                          * Referenced by: '<S105>/BRK_DECEL_DEM_SLEW_INC_APV'
                                          */
  real_T BRK_DECEL_DEM_T_FILT_CTRL_ERROR;/* Expression: 0.025
                                          * Referenced by: '<S105>/BRK_DECEL_DEM_T_FILT_CTRL_ERROR_APV'
                                          */
  real_T BRK_DECEL_DEM_T_FILT_D_APV_Valu;/* Expression: 0.4
                                          * Referenced by: '<S105>/BRK_DECEL_DEM_T_FILT_D_APV'
                                          */
  real_T CPV_Value_i;                  /* Expression: 0
                                        * Referenced by: '<S105>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_f;/* Expression: 0
                                        * Referenced by: '<S148>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_b;/* Expression: 0.0
                                          * Referenced by: '<S180>/FixPt Unit Delay1'
                                          */
  real_T Saturation_UpperSat_o;        /* Expression: Inf
                                        * Referenced by: '<S175>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0.0001
                                        * Referenced by: '<S175>/Saturation'
                                        */
  real_T Constant1_Value_o;            /* Expression: 1
                                        * Referenced by: '<S175>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_b;/* Expression: 0
                                         * Referenced by: '<S175>/Unit_Delay2'
                                         */
  real_T Unit_Delay_InitialCondition_h;/* Expression: 0
                                        * Referenced by: '<S147>/Unit_Delay'
                                        */
  real_T Brake_hold_brake_press_target_k;/* Expression: 0
                                          * Referenced by: '<S185>/Brake_hold_brake_press_target_kpa'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_INC_APV;/* Expression: 30
                                          * Referenced by: '<S185>/BRAKE_PRESS_TARGET_S LEW_INC_APV'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_DEC_APV;/* Expression: 5000
                                          * Referenced by: '<S185>/BRAKE_PRESS_TARGET_SLEW_DEC_APV'
                                          */
  real_T CPV_Value_k;                  /* Expression: 865
                                        * Referenced by: '<S185>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_d;/* Expression: 0
                                        * Referenced by: '<S185>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_p;/* Expression: 0.0
                                          * Referenced by: '<S193>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_k;/* Expression: 0
                                        * Referenced by: '<S190>/Unit_Delay'
                                        */
  real_T Shift_interlock_brake_press_tar;/* Expression: 0
                                          * Referenced by: '<S186>/Shift_interlock_brake_press_target_kpa'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_DEC_A_b;/* Expression: 5000
                                          * Referenced by: '<S186>/BRAKE_PRESS_TARGET_SLEW_DEC_APV'
                                          */
  real_T BRAKE_PRESS_TARGET_SLEW_INC_A_g;/* Expression: 30
                                          * Referenced by: '<S186>/BRAKE_PRESS_TARGET_SLEW_INC_APV'
                                          */
  real_T CPV_Value_l;                  /* Expression: 865
                                        * Referenced by: '<S186>/CPV'
                                        */
  real_T Unit_Delay_InitialCondition_l;/* Expression: 0
                                        * Referenced by: '<S186>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_j;/* Expression: 0.0
                                          * Referenced by: '<S200>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_ha;/* Expression: 0
                                         * Referenced by: '<S197>/Unit_Delay'
                                         */
  real_T Constant2_Value;              /* Expression: 0.01
                                        * Referenced by: '<S79>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S79>/Constant3'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S212>/Out1'
                                        */
  real_T CONVERSION_CONSTANT_CPV_Value;/* Expression: 63360/(pi*60)
                                        * Referenced by: '<S212>/CONVERSION_CONSTANT_CPV'
                                        */
  real_T Constant1_Value_fx;           /* Expression: 3000
                                        * Referenced by: '<S212>/Constant1'
                                        */
  real_T Constant2_Value_m;            /* Expression: 0.01
                                        * Referenced by: '<S212>/Constant2'
                                        */
  real_T KPH_TO_MPH_Gain;              /* Expression: 0.6213712
                                        * Referenced by: '<S212>/KPH_TO_MPH'
                                        */
  real_T REAR_AXLE_RATIO_VALUE_APV_Value;/* Expression: 2.64
                                          * Referenced by: '<S212>/REAR_AXLE_RATIO_VALUE_APV'
                                          */
  real_T TIRE_DIAM_INCHES_APV_Value;   /* Expression: 39.9
                                        * Referenced by: '<S212>/TIRE_DIAM_INCHES_APV'
                                        */
  real_T PID_output_Y0_c;              /* Expression: 0
                                        * Referenced by: '<S214>/PID_output'
                                        */
  real_T PID_output_unlim_Y0;          /* Expression: 0
                                        * Referenced by: '<S214>/PID_output_unlim'
                                        */
  real_T PID_control_error_Y0;         /* Expression: 0
                                        * Referenced by: '<S214>/PID_control_error'
                                        */
  real_T PID_p_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S214>/PID_p_term'
                                        */
  real_T PID_i_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S214>/PID_i_term'
                                        */
  real_T PID_d_term_Y0;                /* Expression: 0
                                        * Referenced by: '<S214>/PID_d_term'
                                        */
  real_T Constant1_Value_c;            /* Expression: 100
                                        * Referenced by: '<S221>/Constant1'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S221>/Constant3'
                                        */
  real_T Constant2_Value_b;            /* Expression: 100
                                        * Referenced by: '<S221>/Constant2'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S221>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 100
                                        * Referenced by: '<S221>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S221>/Constant6'
                                        */
  real_T uDLookupTable_tableData[3];   /* Expression: [0 0.5779 0.5779]
                                        * Referenced by: '<S232>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[3];    /* Expression: [0 1 200]
                                        * Referenced by: '<S232>/1-D Lookup Table'
                                        */
  real_T Veh_Frontal_Area_m2_Value;    /* Expression: 10.382
                                        * Referenced by: '<S225>/Veh_Frontal_Area_m^2'
                                        */
  real_T KPH_TO_MS_Gain;               /* Expression: 0.2777778
                                        * Referenced by: '<S232>/KPH_TO_M//S'
                                        */
  real_T KPA_TO_PA_Gain;               /* Expression: 1000
                                        * Referenced by: '<S232>/KPA_TO_PA'
                                        */
  real_T Constant_Value;               /* Expression: 273.15
                                        * Referenced by: '<S232>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 287.058
                                        * Referenced by: '<S232>/Constant1'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0.5
                                        * Referenced by: '<S232>/Constant2'
                                        */
  real_T Constant2_Value_bc;           /* Expression: pi
                                        * Referenced by: '<S233>/Constant2'
                                        */
  real_T Constant3_Value_n;            /* Expression: 180
                                        * Referenced by: '<S233>/Constant3'
                                        */
  real_T Constant1_Value_a;            /* Expression: 9.807
                                        * Referenced by: '<S233>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 0.005
                                        * Referenced by: '<S236>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0.01
                                        * Referenced by: '<S236>/Constant1'
                                        */
  real_T Constant2_Value_bq;           /* Expression: 0.0095
                                        * Referenced by: '<S236>/Constant2'
                                        */
  real_T KPA_TO_MS_Gain;               /* Expression: 0.27778
                                        * Referenced by: '<S236>/KPA_TO_M//S'
                                        */
  real_T Constant6_Value_g;            /* Expression: 100
                                        * Referenced by: '<S236>/Constant6'
                                        */
  real_T TIRE1_tire_pressure_Value;    /* Expression: 689.4757
                                        * Referenced by: '<S225>/TIRE1_tire_pressure'
                                        */
  real_T Truck166_tire_pressure_Value; /* Expression: 689.4757
                                        * Referenced by: '<S230>/Truck166_tire_pressure'
                                        */
  real_T KPA_TO_BAR_Gain;              /* Expression: 0.01
                                        * Referenced by: '<S236>/KPA_TO_BAR'
                                        */
  real_T Constant4_Value_o;            /* Expression: pi
                                        * Referenced by: '<S234>/Constant4'
                                        */
  real_T Constant5_Value_p;            /* Expression: 180
                                        * Referenced by: '<S234>/Constant5'
                                        */
  real_T Constant3_Value_p;            /* Expression: 9.807
                                        * Referenced by: '<S234>/Constant3'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S230>/Constant'
                                        */
  real_T R_wheel_m_Value;              /* Expression: 0.5
                                        * Referenced by: '<S225>/R_wheel_m'
                                        */
  real_T N_rar_Value;                  /* Expression: 3.25
                                        * Referenced by: '<S225>/N_rar'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 20
                                        * Referenced by: '<S225>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0.1
                                        * Referenced by: '<S225>/Saturation'
                                        */
  real_T eta_Value;                    /* Expression: 0.98
                                        * Referenced by: '<S225>/eta'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 100
                                        * Referenced by: '<S225>/Gain'
                                        */
  real_T ZeroRoadLoadCPV_Value;        /* Expression: 0
                                        * Referenced by: '<S221>/ZeroRoadLoadCPV'
                                        */
  real_T TqDemDt_Value;                /* Expression: 0.01
                                        * Referenced by: '<S214>/TqDemDt'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_o;/* Expression: 0.0
                                          * Referenced by: '<S274>/FixPt Unit Delay1'
                                          */
  real_T TqDemSlewInc_Value;           /* Expression: 3
                                        * Referenced by: '<S214>/TqDemSlewInc'
                                        */
  real_T TqDemSlewDec_Value;           /* Expression: 20
                                        * Referenced by: '<S214>/TqDemSlewDec'
                                        */
  real_T TqDemTFildCtrlErrorSecs_Value;/* Expression: 1
                                        * Referenced by: '<S214>/TqDemTFildCtrlErrorSecs'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: Inf
                                        * Referenced by: '<S269>/Saturation'
                                        */
  real_T Saturation_LowerSat_g5;       /* Expression: 0.0001
                                        * Referenced by: '<S269>/Saturation'
                                        */
  real_T Constant1_Value_ci;           /* Expression: 1
                                        * Referenced by: '<S269>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_j;/* Expression: 0
                                         * Referenced by: '<S269>/Unit_Delay2'
                                         */
  real_T TqDemTFildTSecs_Value;        /* Expression: 0.029
                                        * Referenced by: '<S214>/TqDemTFildTSecs'
                                        */
  real_T TqDemAwHyst_Value;            /* Expression: 7
                                        * Referenced by: '<S214>/TqDemAwHyst'
                                        */
  real_T Unit_Delay_InitialCondition_kg;/* Expression: 0
                                         * Referenced by: '<S224>/Unit_Delay'
                                         */
  real_T TqDemLimMax_Value;            /* Expression: 60
                                        * Referenced by: '<S214>/TqDemLimMax'
                                        */
  real_T TqDemLimMin_Value;            /* Expression: 0
                                        * Referenced by: '<S214>/TqDemLimMin'
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
                                        * Referenced by: '<S282>/Speed Saturation'
                                        */
  real_T SpeedSaturation_LowerSat;     /* Expression: 7.5
                                        * Referenced by: '<S282>/Speed Saturation'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S282>/km//h to m//s'
                                        */
  real_T ErrorSaturation_UpperSat;     /* Expression: pi/2
                                        * Referenced by: '<S282>/Error Saturation'
                                        */
  real_T ErrorSaturation_LowerSat;     /* Expression: -pi/2
                                        * Referenced by: '<S282>/Error Saturation'
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
                                        * Referenced by: '<S282>/1-D Lookup Table'
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
                                        * Referenced by: '<S282>/1-D Lookup Table'
                                        */
  real_T deg2rad_Gain_n;               /* Expression: pi/180
                                        * Referenced by: '<S282>/deg2rad'
                                        */
  real_T invert_Gain;                  /* Expression: -1
                                        * Referenced by: '<S282>/invert'
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
                                        * Referenced by: '<S297>/Constant'
                                        */
  real_T Constant2_Value_hu;           /* Expression: -1
                                        * Referenced by: '<S297>/Constant2'
                                        */
  real_T Constant3_Value_pw;           /* Expression: 1
                                        * Referenced by: '<S297>/Constant3'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S281>/Constant9'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S300>/Constant'
                                        */
  real_T zero1_Value;                  /* Expression: 0
                                        * Referenced by: '<S284>/zero1'
                                        */
  real_T correction_Value;             /* Expression: 0.5
                                        * Referenced by: '<S284>/correction'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S285>/Constant1'
                                        */
  real_T Out_Y0;                       /* Computed Parameter: Out_Y0
                                        * Referenced by: '<S336>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_f;/* Expression: 0.0
                                          * Referenced by: '<S342>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_ah;           /* Expression: 1
                                        * Referenced by: '<S336>/Constant1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 0.5
                                        * Referenced by: '<S374>/Gain'
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
                                        * Referenced by: '<S207>/Constant'
                                        */
  real_T Constant_Value_il;            /* Expression: 0
                                        * Referenced by: '<S218>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S219>/Constant'
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
                                        * Referenced by: '<S106>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S106>/Gain5'
                                        */
  real_T BRAKE_APPL_THRESHOLD_KPA_APV_Va;/* Expression: 16
                                          * Referenced by: '<S106>/BRAKE_APPL_THRESHOLD_KPA_APV'
                                          */
  real_T SPN904_ZERO_SPD_CPV_Value;    /* Expression: 0
                                        * Referenced by: '<S110>/SPN904_ZERO_SPD_CPV'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 0.5
                                        * Referenced by: '<S107>/Gain'
                                        */
  real_T Constant_Value_ol;            /* Expression: 0
                                        * Referenced by: '<S208>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S106>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S106>/Gain2'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 0.5
                                        * Referenced by: '<S108>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<S106>/Gain3'
                                        */
  real_T Gain5_Gain_l;                 /* Expression: 100
                                        * Referenced by: '<S108>/Gain5'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S108>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S108>/Saturation3'
                                        */
  real_T Unit_Delay_InitialCondition_i;/* Expression: 0
                                        * Referenced by: '<S349>/Unit_Delay'
                                        */
  real_T STABILITY_ACTIVE_VSPD_TARGET_AP;/* Expression: 0
                                          * Referenced by: '<S349>/STABILITY_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_n;            /* Expression: 255
                                        * Referenced by: '<S349>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_l;/* Expression: 0.0
                                          * Referenced by: '<S396>/FixPt Unit Delay1'
                                          */
  real_T STABILITY_CTRL_SLEW_INC_APV_Val;/* Expression: 3
                                          * Referenced by: '<S349>/STABILITY_CTRL_SLEW_INC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_hae;/* Expression: 0
                                          * Referenced by: '<S393>/Unit_Delay'
                                          */
  real_T STABILITY_CTRL_SLEW_DEC_APV_Val;/* Expression: 5
                                          * Referenced by: '<S349>/STABILITY_CTRL_SLEW_DEC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_fb;/* Expression: 0
                                         * Referenced by: '<S347>/Unit_Delay'
                                         */
  real_T FCW_ACTIVE_VSPD_TARGET_APV_Valu;/* Expression: 0
                                          * Referenced by: '<S347>/FCW_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_b;            /* Expression: 255
                                        * Referenced by: '<S347>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_d;/* Expression: 0.0
                                          * Referenced by: '<S385>/FixPt Unit Delay1'
                                          */
  real_T FCW_CTRL_SLEW_INC_APV_Value;  /* Expression: 1
                                        * Referenced by: '<S347>/FCW_CTRL_SLEW_INC_APV'
                                        */
  real_T Unit_Delay_InitialCondition_c;/* Expression: 0
                                        * Referenced by: '<S382>/Unit_Delay'
                                        */
  real_T FCW_CTRL_SLEW_DEC_APV_Value;  /* Expression: 5000
                                        * Referenced by: '<S347>/FCW_CTRL_SLEW_DEC_APV'
                                        */
  real_T TmpRTBAtSignalConversion3Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S343>/Constant'
                                        */
  real_T TmpRTBAtSignalConversion2Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation5_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S346>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S346>/Saturation5'
                                        */
  real_T MIN_VSPD_SIGMOID_INITIAL_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S346>/MIN_VSPD_SIGMOID_INITIAL_KPH_APV'
                                          */
  real_T Gain1_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S346>/Gain1'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S346>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S346>/Saturation4'
                                        */
  real_T MIN_VSPD_SIGMOID_FINAL_KPH_APV_;/* Expression: 0
                                          * Referenced by: '<S346>/MIN_VSPD_SIGMOID_FINAL_KPH_APV'
                                          */
  real_T Gain2_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S346>/Gain2'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S346>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S346>/Saturation6'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S346>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S346>/Saturation7'
                                        */
  real_T VEH_JERK_INITIAL_APV_Value;   /* Expression: 0.4
                                        * Referenced by: '<S81>/VEH_JERK_INITIAL_APV'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S346>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: 0.001
                                        * Referenced by: '<S346>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S346>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0.001
                                        * Referenced by: '<S346>/Saturation2'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: 3.6
                                        * Referenced by: '<S346>/Gain3'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S363>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition_e;/* Expression: 0
                                        * Referenced by: '<S362>/Unit_Delay'
                                        */
  real_T MIN_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S358>/MIN_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T MAX_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S358>/MAX_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T ACCEL_RATE_ABS_MAX_THRESHOLD_MS;/* Expression: 5
                                          * Referenced by: '<S358>/ACCEL_RATE_ABS_MAX_THRESHOLD_MS2_APV'
                                          */
  real_T ACCEL_RATE_ABS_MIN_THRESHOLD_MS;/* Expression: -5
                                          * Referenced by: '<S358>/ACCEL_RATE_ABS_MIN_THRESHOLD_MS2_APV'
                                          */
  real_T JERK_RATE_ABS_MAX_THRESHOLD_MS3;/* Expression: 5
                                          * Referenced by: '<S358>/JERK_RATE_ABS_MAX_THRESHOLD_MS3_APV'
                                          */
  real_T JERK_RATE_ABS_MIN_THRESHOLD_MS3;/* Expression: -5
                                          * Referenced by: '<S358>/JERK_RATE_ABS_MIN_THRESHOLD_MS3_APV'
                                          */
  real_T MAX_DISTANCE_DELTA_THRESHOLD_M_;/* Expression: 0.5
                                          * Referenced by: '<S358>/MAX_DISTANCE_DELTA_THRESHOLD_M_APV'
                                          */
  real_T CPV1_Value_i;                 /* Expression: 0.1
                                        * Referenced by: '<S359>/CPV1'
                                        */
  real_T CPV_Value_h;                  /* Expression: 0
                                        * Referenced by: '<S368>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_h;/* Expression: 0.0
                                          * Referenced by: '<S373>/FixPt Unit Delay1'
                                          */
  real_T CPV1_Value_e;                 /* Expression: 1
                                        * Referenced by: '<S367>/CPV1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S359>/Gain1'
                                        */
  real_T Unit_Delay_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S371>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_m;/* Expression: 0.0
                                          * Referenced by: '<S357>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_1_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S352>/Unit_Delay'
                                        */
  real_T Unit_Delay_2_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S352>/Unit_Delay'
                                        */
  real_T Unit_Delay_3_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S352>/Unit_Delay'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 1/3.6
                                        * Referenced by: '<S352>/Gain2'
                                        */
  real_T Saturation4_UpperSat_a;       /* Expression: 255
                                        * Referenced by: '<S352>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_e;       /* Expression: 0.001
                                        * Referenced by: '<S352>/Saturation4'
                                        */
  real_T Unit_Delay_InitialCondition_e2;/* Expression: 0
                                         * Referenced by: '<S350>/Unit_Delay'
                                         */
  real_T Saturation1_UpperSat_j;       /* Expression: Inf
                                        * Referenced by: '<S352>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0.001
                                        * Referenced by: '<S352>/Saturation1'
                                        */
  real_T Saturation8_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S81>/Saturation8'
                                        */
  real_T Saturation8_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S81>/Saturation8'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 100
                                        * Referenced by: '<S108>/Gain1'
                                        */
  real_T Saturation1_UpperSat_l;       /* Expression: 100
                                        * Referenced by: '<S108>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: 0
                                        * Referenced by: '<S108>/Saturation1'
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
                                        * Referenced by: '<S108>/Gain2'
                                        */
  real_T Saturation2_UpperSat_b;       /* Expression: 100
                                        * Referenced by: '<S108>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_o;       /* Expression: 0
                                        * Referenced by: '<S108>/Saturation2'
                                        */
  real_T BENDIX_2C2_BRAKE_APPL_THRESHOLD;/* Expression: 16
                                          * Referenced by: '<S106>/BENDIX_2C2_BRAKE_APPL_THRESHOLD_KPA_APV'
                                          */
  real_T Saturation4_UpperSat_f;       /* Expression: 0
                                        * Referenced by: '<S108>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_a;       /* Expression: -15.687
                                        * Referenced by: '<S108>/Saturation4'
                                        */
  real_T Constant10_Value;             /* Expression: 0.01
                                        * Referenced by: '<S109>/Constant10'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 0.5
                                        * Referenced by: '<S109>/Gain'
                                        */
  real_T VSPD_CAN_HRW_0B_FILT_T_APV_Valu;/* Expression: 0.2
                                          * Referenced by: '<S109>/VSPD_CAN_HRW_0B_FILT_T_APV'
                                          */
  real_T Saturation_UpperSat_l;        /* Expression: Inf
                                        * Referenced by: '<S205>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 0.0001
                                        * Referenced by: '<S205>/Saturation'
                                        */
  real_T Constant1_Value_od;           /* Expression: 1
                                        * Referenced by: '<S205>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_a;/* Expression: 0
                                         * Referenced by: '<S205>/Unit_Delay2'
                                         */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S204>/TSamp'
                                        */
  real_T Gain_Gain_no;                 /* Expression: 0.01
                                        * Referenced by: '<S77>/Gain'
                                        */
  real_T CPV1_Value_n;                 /* Expression: 0
                                        * Referenced by: '<S213>/CPV1'
                                        */
  real_T CPV2_Value_h;                 /* Expression: 0
                                        * Referenced by: '<S213>/CPV2'
                                        */
  real_T CPV3_Value_n;                 /* Expression: 0
                                        * Referenced by: '<S213>/CPV3'
                                        */
  real_T CPV5_Value_g;                 /* Expression: 1
                                        * Referenced by: '<S213>/CPV5'
                                        */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV_Va;/* Expression: 0.2
                                          * Referenced by: '<S213>/IGN_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T IGN_RELAY_ON_DELAY_SECS_APV_Val;/* Expression: 0.2
                                          * Referenced by: '<S213>/IGN_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T IGN_SW_VOLTAGE_THRESHOLD_APV_Va;/* Expression: 6
                                          * Referenced by: '<S213>/IGN_SW_VOLTAGE_THRESHOLD_APV'
                                          */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* Expression: 0
                                          * Referenced by: '<S213>/INVERTER_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* Expression: 0
                                          * Referenced by: '<S213>/INVERTER_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV_V;/* Expression: 0
                                          * Referenced by: '<S213>/MABX_RELAY_OFF_DELAY_SECS_APV'
                                          */
  real_T MABX_RELAY_ON_DELAY_SECS_APV_Va;/* Expression: 0
                                          * Referenced by: '<S213>/MABX_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV_;/* Expression: 0
                                          * Referenced by: '<S213>/SENSOR_RELAY_ON_DELAY_SECS_APV'
                                          */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* Expression: 0
                                          * Referenced by: '<S213>/SENSOR_RELAY_OFF_DELAY_SECS_APV'
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
                                        * Referenced by: '<S281>/Constant19'
                                        */
  real_T IV_Value;                     /* Expression: 0
                                        * Referenced by: '<S287>/IV'
                                        */
  real_T Constant1_Value_i;            /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S279>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.1
                                        * Referenced by: '<S279>/Constant'
                                        */
  real_T timeConstant1_Value;          /* Expression: .01
                                        * Referenced by: '<S284>/timeConstant1'
                                        */
  real_T timeConstant_Value;           /* Expression: 1.0
                                        * Referenced by: '<S284>/timeConstant'
                                        */
  real_T Saturation_UpperSat_o1;       /* Expression: Inf
                                        * Referenced by: '<S329>/Saturation'
                                        */
  real_T Saturation_LowerSat_p2;       /* Expression: 0.0001
                                        * Referenced by: '<S329>/Saturation'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S329>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S329>/Unit_Delay2'
                                         */
  real_T rateOfChangeThreshold_Value;  /* Expression: 5.75
                                        * Referenced by: '<S284>/rateOfChangeThreshold'
                                        */
  real_T closeToLaneEdgeThreshold_Value;/* Expression: 4.0
                                         * Referenced by: '<S284>/closeToLaneEdgeThreshold'
                                         */
  real_T zero2_Value;                  /* Expression: 0
                                        * Referenced by: '<S284>/zero2'
                                        */
  real_T timeConstant3_Value;          /* Expression: .01
                                        * Referenced by: '<S284>/timeConstant3'
                                        */
  real_T timeConstant2_Value;          /* Expression: 3
                                        * Referenced by: '<S284>/timeConstant2'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: Inf
                                        * Referenced by: '<S330>/Saturation'
                                        */
  real_T Saturation_LowerSat_ph;       /* Expression: 0.0001
                                        * Referenced by: '<S330>/Saturation'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S330>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ji;/* Expression: 0
                                          * Referenced by: '<S330>/Unit_Delay2'
                                          */
  real_T timeConstant5_Value;          /* Expression: .01
                                        * Referenced by: '<S284>/timeConstant5'
                                        */
  real_T timeConstant4_Value;          /* Expression: .5
                                        * Referenced by: '<S284>/timeConstant4'
                                        */
  real_T Saturation_UpperSat_ok;       /* Expression: Inf
                                        * Referenced by: '<S331>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0.0001
                                        * Referenced by: '<S331>/Saturation'
                                        */
  real_T Constant1_Value_oi;           /* Expression: 1
                                        * Referenced by: '<S331>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ap;/* Expression: 0
                                          * Referenced by: '<S331>/Unit_Delay2'
                                          */
  real_T Constant3_Value_j;            /* Expression: 2
                                        * Referenced by: '<S285>/Constant3'
                                        */
  real_T Constant4_Value_bq;           /* Expression: -2
                                        * Referenced by: '<S285>/Constant4'
                                        */
  real_T Constant2_Value_p;            /* Expression: .01
                                        * Referenced by: '<S285>/Constant2'
                                        */
  real_T enable_Value;                 /* Expression: 1
                                        * Referenced by: '<S285>/enable'
                                        */
  real_T enableSlew_Value;             /* Expression: 1
                                        * Referenced by: '<S285>/enableSlew'
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
                                        * Referenced by: '<S281>/Constant21'
                                        */
  real_T SteeringControlIntGain_Value; /* Expression: 20
                                        * Referenced by: '<S281>/SteeringControlIntGain'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S297>/Unit Delay'
                                        */
  real_T Constant20_Value;             /* Expression: -240
                                        * Referenced by: '<S281>/Constant20'
                                        */
  real_T Constant5_Value_o;            /* Expression: 2
                                        * Referenced by: '<S300>/Constant5'
                                        */
  real_T Constant4_Value_j;            /* Expression: -1
                                        * Referenced by: '<S300>/Constant4'
                                        */
  real_T Constant2_Value_g;            /* Expression: -1
                                        * Referenced by: '<S300>/Constant2'
                                        */
  real_T Constant1_Value_ly;           /* Expression: 1
                                        * Referenced by: '<S300>/Constant1'
                                        */
  real_T Constant3_Value_g;            /* Expression: 1
                                        * Referenced by: '<S300>/Constant3'
                                        */
  real_T UnitDelay_InitialCondition_g; /* Expression: 0
                                        * Referenced by: '<S298>/Unit Delay'
                                        */
  real_T SteeringControlDGain_Value;   /* Expression: .01
                                        * Referenced by: '<S281>/SteeringControlDGain'
                                        */
  real_T UnitDelay1_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S298>/Unit Delay1'
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
                                        * Referenced by: '<S286>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_kj[9]; /* Expression: [0 5 10 15 25 35 45 55 65]
                                        * Referenced by: '<S286>/1-D Lookup Table'
                                        */
  real_T stanleySteeringControlGain_Valu;/* Expression: double(350)
                                          * Referenced by: '<S286>/stanleySteeringControlGain'
                                          */
  real_T IV_Value_o;                   /* Expression: 0
                                        * Referenced by: '<S292>/IV'
                                        */
  real_T Step_Time;                    /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S280>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 1
                                        * Referenced by: '<S280>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 0
                                        * Referenced by: '<S280>/Step'
                                        */
  real_T Constant1_Value_iy;           /* Expression: 0.01
                                        * Referenced by: '<S280>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: 2.0
                                        * Referenced by: '<S280>/Constant'
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
                                        * Referenced by: '<S286>/Saturation'
                                        */
  real_T Saturation_LowerSat_bq;       /* Expression: 7.5
                                        * Referenced by: '<S286>/Saturation'
                                        */
  real_T kph2mps_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S286>/kph2mps_'
                                        */
  real_T deg2rad1_Gain;                /* Expression: pi/180
                                        * Referenced by: '<S80>/deg2rad1'
                                        */
  real_T TmpRTBAtAdd2Inport2_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T desHeadingWeight_Gain;        /* Expression: 0
                                        * Referenced by: '<S286>/desHeadingWeight'
                                        */
  real_T SaturationSpeedLookup_tableData[6];/* Expression: [1,0.9,0.8,0.5,0.2,0.01]
                                             * Referenced by: '<S312>/Saturation Speed Lookup'
                                             */
  real_T SaturationSpeedLookup_bp01Data[6];/* Expression: [10,20,30,50,70,100]
                                            * Referenced by: '<S312>/Saturation Speed Lookup'
                                            */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S323>/sample time'
                                        */
  real_T sampletime_WtEt_j;            /* Computed Parameter: sampletime_WtEt_j
                                        * Referenced by: '<S310>/sample time'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S310>/Delay Input2'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S283>/Zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S309>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S309>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S309>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S309>/Filter'
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
                                        * Referenced by: '<S283>/1-D Lookup Table'
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
                                        * Referenced by: '<S283>/1-D Lookup Table'
                                        */
  real_T deg2rad_Gain_l;               /* Expression: pi/180
                                        * Referenced by: '<S283>/deg2rad'
                                        */
  real_T invert_Gain_i;                /* Expression: -1
                                        * Referenced by: '<S283>/invert'
                                        */
  real_T sampletime_WtEt_p;            /* Computed Parameter: sampletime_WtEt_p
                                        * Referenced by: '<S311>/sample time'
                                        */
  real_T DelayInput2_InitialCondition_m;/* Expression: 0
                                         * Referenced by: '<S311>/Delay Input2'
                                         */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S303>/Discrete-Time Integrator'
                                         */
  real_T DelayInput2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S323>/Delay Input2'
                                         */
  real_T Gain3_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S312>/Gain3'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S312>/Gain1'
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
                                        * Referenced by: '<S303>/Gain'
                                        */
  real_T CurvatureLookupTable_tableData[5];/* Expression: [0.0001,0.001,0.1,0.2,1]
                                            * Referenced by: '<S312>/Curvature Lookup Table'
                                            */
  real_T CurvatureLookupTable_bp01Data[5];/* Expression: [0.00001,0.0001,0.1,0.2,0.5]
                                           * Referenced by: '<S312>/Curvature Lookup Table'
                                           */
  real_T ErrorLookupTable_tableData[5];/* Expression: [0.01,0.05,0.1,0.2,1]
                                        * Referenced by: '<S312>/Error Lookup Table'
                                        */
  real_T ErrorLookupTable_bp01Data[5]; /* Expression: [0.001,0.01,0.1,0.5,1]
                                        * Referenced by: '<S312>/Error Lookup Table'
                                        */
  real_T SpeedLookupTable_tableData[6];/* Expression: [1,0.6,0.3,0.1,0.05,0.01]
                                        * Referenced by: '<S312>/Speed Lookup Table'
                                        */
  real_T SpeedLookupTable_bp01Data[6]; /* Expression: [10,20,30,50,70,100]
                                        * Referenced by: '<S312>/Speed Lookup Table'
                                        */
  real_T LimitRateLimiter_RisingLim;   /* Computed Parameter: LimitRateLimiter_RisingLim
                                        * Referenced by: '<S312>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_FallingLim;  /* Computed Parameter: LimitRateLimiter_FallingLim
                                        * Referenced by: '<S312>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_IC;          /* Expression: 0
                                        * Referenced by: '<S312>/Limit Rate Limiter'
                                        */
  real_T sign2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S80>/sign2'
                                        */
  real_T UnitDelay_InitialCondition_g1;/* Expression: 0
                                        * Referenced by: '<S80>/Unit Delay'
                                        */
  real_T CPV_Value_g;                  /* Expression: 1
                                        * Referenced by: '<S367>/CPV'
                                        */
  real_T CPV2_Value_p;                 /* Expression: 1
                                        * Referenced by: '<S367>/CPV2'
                                        */
  real_T CPV_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S369>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dl;/* Expression: 0.0
                                          * Referenced by: '<S375>/FixPt Unit Delay1'
                                          */
  real_T Integrator_method_Value;      /* Expression: 1
                                        * Referenced by: '<S374>/Integrator_method'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ol;/* Expression: 0.0
                                          * Referenced by: '<S376>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_b;/* Expression: 0
                                        * Referenced by: '<S370>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant'
                                        */
  real_T MaximumGoodHDOP_Value;        /* Expression: 2.5
                                        * Referenced by: '<S397>/MaximumGoodHDOP'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S397>/Constant1'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S397>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant18'
                                        */
  real_T Constant19_Value_m;           /* Expression: 0
                                        * Referenced by: '<S397>/Constant19'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S397>/Constant2'
                                        */
  real_T Constant20_Value_i;           /* Expression: 0
                                        * Referenced by: '<S397>/Constant20'
                                        */
  real_T Constant21_Value_g;           /* Expression: 0
                                        * Referenced by: '<S397>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S397>/Constant25'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S397>/Constant3'
                                        */
  real_T Constant4_Value_m;            /* Expression: 0
                                        * Referenced by: '<S397>/Constant4'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S397>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S397>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S397>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S397>/Constant8'
                                        */
  real_T Constant9_Value_m;            /* Expression: 0
                                        * Referenced by: '<S397>/Constant9'
                                        */
  real_T kph2mps_Gain_l;               /* Expression: 1/3.6
                                        * Referenced by: '<S397>/kph2mps'
                                        */
  real_T lookAheadTime_Value;          /* Expression: 2
                                        * Referenced by: '<S397>/lookAheadTime'
                                        */
  real_T kph2mps1_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S397>/kph2mps1'
                                        */
  real_T lookAheadTime1_Value;         /* Expression: 15
                                        * Referenced by: '<S397>/lookAheadTime1'
                                        */
  real_T UnitDelay1_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S397>/Unit Delay1'
                                        */
  real_T InitialHeading_Value;         /* Expression: 0
                                        * Referenced by: '<S398>/InitialHeading'
                                        */
  real_T InitialPosition_Value;        /* Expression: 0
                                        * Referenced by: '<S398>/InitialPosition'
                                        */
  real_T InitialXPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S398>/InitialXPosition'
                                        */
  real_T InitialYPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S398>/InitialYPosition'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 1000/3600
                                        * Referenced by: '<S71>/kph2ms'
                                        */
  real_T LongitudnalPosition_gainval;  /* Computed Parameter: LongitudnalPosition_gainval
                                        * Referenced by: '<S398>/LongitudnalPosition'
                                        */
  real_T reset_Value;                  /* Expression: 0
                                        * Referenced by: '<S398>/reset'
                                        */
  real_T VehHeading_gainval;           /* Computed Parameter: VehHeading_gainval
                                        * Referenced by: '<S398>/VehHeading'
                                        */
  real_T XPosition_gainval;            /* Computed Parameter: XPosition_gainval
                                        * Referenced by: '<S398>/XPosition'
                                        */
  real_T YPosition_gainval;            /* Computed Parameter: YPosition_gainval
                                        * Referenced by: '<S398>/YPosition'
                                        */
  real_T for_logging6_Gain;            /* Expression: 1
                                        * Referenced by: '<S399>/for_logging6'
                                        */
  real_T for_logging5_Gain;            /* Expression: 1
                                        * Referenced by: '<S399>/for_logging5'
                                        */
  real_T for_logging4_Gain;            /* Expression: 1
                                        * Referenced by: '<S399>/for_logging4'
                                        */
  real_T for_logging3_Gain;            /* Expression: 1
                                        * Referenced by: '<S399>/for_logging3'
                                        */
  real_T for_logging2_Gain;            /* Expression: 1
                                        * Referenced by: '<S399>/for_logging2'
                                        */
  real_T ms_to_kmh_2_Gain;             /* Expression: 3.6
                                        * Referenced by: '<S399>/m//s_to_km//h_2'
                                        */
  real_T ms_to_kmh_Gain;               /* Expression: 3.6
                                        * Referenced by: '<S399>/m//s_to_km//h'
                                        */
  real_T for_logging1_Gain;            /* Expression: 1
                                        * Referenced by: '<S399>/for_logging1'
                                        */
  real_T for_logging_Gain;             /* Expression: 1
                                        * Referenced by: '<S399>/for_logging'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S405>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S405>/Constant1'
                                        */
  real_T byte1_Y0;                     /* Computed Parameter: byte1_Y0
                                        * Referenced by: '<S479>/byte1'
                                        */
  real_T byte2_Y0;                     /* Computed Parameter: byte2_Y0
                                        * Referenced by: '<S479>/byte2'
                                        */
  real_T byte3_Y0;                     /* Computed Parameter: byte3_Y0
                                        * Referenced by: '<S479>/byte3'
                                        */
  real_T byte4_Y0;                     /* Computed Parameter: byte4_Y0
                                        * Referenced by: '<S479>/byte4'
                                        */
  real_T byte5_Y0;                     /* Computed Parameter: byte5_Y0
                                        * Referenced by: '<S479>/byte5'
                                        */
  real_T byte6_Y0;                     /* Computed Parameter: byte6_Y0
                                        * Referenced by: '<S479>/byte6'
                                        */
  real_T byte7_Y0;                     /* Computed Parameter: byte7_Y0
                                        * Referenced by: '<S479>/byte7'
                                        */
  real_T byte8_Y0;                     /* Computed Parameter: byte8_Y0
                                        * Referenced by: '<S479>/byte8'
                                        */
  real_T RXstatus_Y0;                  /* Computed Parameter: RXstatus_Y0
                                        * Referenced by: '<S479>/RX status'
                                        */
  real_T RXtime_Y0;                    /* Computed Parameter: RXtime_Y0
                                        * Referenced by: '<S479>/RX time'
                                        */
  real_T RXdeltatime_Y0;               /* Computed Parameter: RXdeltatime_Y0
                                        * Referenced by: '<S479>/RX delta time'
                                        */
  real_T byte1_Y0_a;                   /* Computed Parameter: byte1_Y0_a
                                        * Referenced by: '<S488>/byte1'
                                        */
  real_T byte2_Y0_g;                   /* Computed Parameter: byte2_Y0_g
                                        * Referenced by: '<S488>/byte2'
                                        */
  real_T byte3_Y0_f;                   /* Computed Parameter: byte3_Y0_f
                                        * Referenced by: '<S488>/byte3'
                                        */
  real_T byte4_Y0_a;                   /* Computed Parameter: byte4_Y0_a
                                        * Referenced by: '<S488>/byte4'
                                        */
  real_T byte5_Y0_e;                   /* Computed Parameter: byte5_Y0_e
                                        * Referenced by: '<S488>/byte5'
                                        */
  real_T byte6_Y0_f;                   /* Computed Parameter: byte6_Y0_f
                                        * Referenced by: '<S488>/byte6'
                                        */
  real_T byte7_Y0_o;                   /* Computed Parameter: byte7_Y0_o
                                        * Referenced by: '<S488>/byte7'
                                        */
  real_T byte8_Y0_m;                   /* Computed Parameter: byte8_Y0_m
                                        * Referenced by: '<S488>/byte8'
                                        */
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S488>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S488>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S488>/RX delta time'
                                        */
  real_T SpeedOfForwardVehicle_Y0;     /* Computed Parameter: SpeedOfForwardVehicle_Y0
                                        * Referenced by: '<S496>/SpeedOfForwardVehicle'
                                        */
  real_T DistanceToForwardVehicle_Y0;  /* Computed Parameter: DistanceToForwardVehicle_Y0
                                        * Referenced by: '<S496>/DistanceToForwardVehicle'
                                        */
  real_T AdaptiveCruiseCtrlSetSpeed_Y0;/* Computed Parameter: AdaptiveCruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S496>/AdaptiveCruiseCtrlSetSpeed'
                                        */
  real_T AdaptiveCruiseCtrlMode_Y0;    /* Computed Parameter: AdaptiveCruiseCtrlMode_Y0
                                        * Referenced by: '<S496>/AdaptiveCruiseCtrlMode'
                                        */
  real_T AdptveCruiseCtrlSetDistanceMode;/* Computed Parameter: AdptveCruiseCtrlSetDistanceMode
                                          * Referenced by: '<S496>/AdptveCruiseCtrlSetDistanceMode'
                                          */
  real_T RoadCurvature_Y0;             /* Computed Parameter: RoadCurvature_Y0
                                        * Referenced by: '<S496>/RoadCurvature'
                                        */
  real_T ACCTargetDetected_Y0;         /* Computed Parameter: ACCTargetDetected_Y0
                                        * Referenced by: '<S496>/ACCTargetDetected'
                                        */
  real_T ACCSystemShutoffWarning_Y0;   /* Computed Parameter: ACCSystemShutoffWarning_Y0
                                        * Referenced by: '<S496>/ACCSystemShutoffWarning'
                                        */
  real_T ACCDistanceAlertSignal_Y0;    /* Computed Parameter: ACCDistanceAlertSignal_Y0
                                        * Referenced by: '<S496>/ACCDistanceAlertSignal'
                                        */
  real_T ForwardCollisionWarning_Y0;   /* Computed Parameter: ForwardCollisionWarning_Y0
                                        * Referenced by: '<S496>/ForwardCollisionWarning'
                                        */
  real_T RXstatus_Y0_i;                /* Computed Parameter: RXstatus_Y0_i
                                        * Referenced by: '<S496>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S496>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
                                        * Referenced by: '<S496>/RX delta time'
                                        */
  real_T AdvEmergencyBrkSysState_Y0;   /* Computed Parameter: AdvEmergencyBrkSysState_Y0
                                        * Referenced by: '<S498>/AdvEmergencyBrkSysState'
                                        */
  real_T CollisionWarningLevel_Y0;     /* Computed Parameter: CollisionWarningLevel_Y0
                                        * Referenced by: '<S498>/CollisionWarningLevel'
                                        */
  real_T RelObjctDetForAdvEmergBrakingSy;/* Computed Parameter: RelObjctDetForAdvEmergBrakingSy
                                          * Referenced by: '<S498>/RelObjctDetForAdvEmergBrakingSys'
                                          */
  real_T BendOffProbabOfRelevantObject_Y;/* Computed Parameter: BendOffProbabOfRelevantObject_Y
                                          * Referenced by: '<S498>/BendOffProbabOfRelevantObject'
                                          */
  real_T TimeToCollisionWithRelevantObj_;/* Computed Parameter: TimeToCollisionWithRelevantObj_
                                          * Referenced by: '<S498>/TimeToCollisionWithRelevantObj'
                                          */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S498>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S498>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
                                        * Referenced by: '<S498>/RX delta time'
                                        */
  real_T PneumaticSupplyPress_Y0;      /* Computed Parameter: PneumaticSupplyPress_Y0
                                        * Referenced by: '<S500>/PneumaticSupplyPress'
                                        */
  real_T ParkingAnd_orTrailerAirPress_Y0;/* Computed Parameter: ParkingAnd_orTrailerAirPress_Y0
                                          * Referenced by: '<S500>/ParkingAnd_orTrailerAirPress'
                                          */
  real_T ServiceBrakeCircuit1AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit1AirPress_Y0
                                          * Referenced by: '<S500>/ServiceBrakeCircuit1AirPress'
                                          */
  real_T ServiceBrakeCircuit2AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit2AirPress_Y0
                                          * Referenced by: '<S500>/ServiceBrakeCircuit2AirPress'
                                          */
  real_T AuxEquipmentSupplyPress_Y0;   /* Computed Parameter: AuxEquipmentSupplyPress_Y0
                                        * Referenced by: '<S500>/AuxEquipmentSupplyPress'
                                        */
  real_T AirSuspensionSupplyPress_Y0;  /* Computed Parameter: AirSuspensionSupplyPress_Y0
                                        * Referenced by: '<S500>/AirSuspensionSupplyPress'
                                        */
  real_T AirCompressorStatus_Y0;       /* Computed Parameter: AirCompressorStatus_Y0
                                        * Referenced by: '<S500>/AirCompressorStatus'
                                        */
  real_T PowertrainCircuitAirSupplyPress;/* Computed Parameter: PowertrainCircuitAirSupplyPress
                                          * Referenced by: '<S500>/PowertrainCircuitAirSupplyPress'
                                          */
  real_T RXstatus_Y0_n5;               /* Computed Parameter: RXstatus_Y0_n5
                                        * Referenced by: '<S500>/RX status'
                                        */
  real_T RXtime_Y0_i;                  /* Computed Parameter: RXtime_Y0_i
                                        * Referenced by: '<S500>/RX time'
                                        */
  real_T RXdeltatime_Y0_ne;            /* Computed Parameter: RXdeltatime_Y0_ne
                                        * Referenced by: '<S500>/RX delta time'
                                        */
  real_T BarometricPress_Y0;           /* Computed Parameter: BarometricPress_Y0
                                        * Referenced by: '<S502>/BarometricPress'
                                        */
  real_T CabInteriorTemp_Y0;           /* Computed Parameter: CabInteriorTemp_Y0
                                        * Referenced by: '<S502>/CabInteriorTemp'
                                        */
  real_T AmbientAirTemp_Y0;            /* Computed Parameter: AmbientAirTemp_Y0
                                        * Referenced by: '<S502>/AmbientAirTemp'
                                        */
  real_T EngAirIntakeTemp_Y0;          /* Computed Parameter: EngAirIntakeTemp_Y0
                                        * Referenced by: '<S502>/EngAirIntakeTemp'
                                        */
  real_T RoadSurfaceTemp_Y0;           /* Computed Parameter: RoadSurfaceTemp_Y0
                                        * Referenced by: '<S502>/RoadSurfaceTemp'
                                        */
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S502>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S502>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S502>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S504>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S504>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_j;                /* Computed Parameter: RXstatus_Y0_j
                                        * Referenced by: '<S504>/RX status'
                                        */
  real_T RXtime_Y0_pb;                 /* Computed Parameter: RXtime_Y0_pb
                                        * Referenced by: '<S504>/RX time'
                                        */
  real_T RXdeltatime_Y0_n0;            /* Computed Parameter: RXdeltatime_Y0_n0
                                        * Referenced by: '<S504>/RX delta time'
                                        */
  real_T tr0_track_selection_status_Y0;/* Computed Parameter: tr0_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr0_track_selection_status'
                                        */
  real_T tr0_corrected_lateral_distance_;/* Computed Parameter: tr0_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr0_corrected_lateral_distance'
                                          */
  real_T tr1_track_selection_status_Y0;/* Computed Parameter: tr1_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr1_track_selection_status'
                                        */
  real_T tr1_corrected_lateral_distance_;/* Computed Parameter: tr1_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr1_corrected_lateral_distance'
                                          */
  real_T tr2_track_selection_status_Y0;/* Computed Parameter: tr2_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr2_track_selection_status'
                                        */
  real_T tr2_corrected_lateral_distance_;/* Computed Parameter: tr2_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr2_corrected_lateral_distance'
                                          */
  real_T tr3_track_selection_status_Y0;/* Computed Parameter: tr3_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr3_track_selection_status'
                                        */
  real_T tr3_corrected_lateral_distance_;/* Computed Parameter: tr3_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr3_corrected_lateral_distance'
                                          */
  real_T tr4_track_selection_status_Y0;/* Computed Parameter: tr4_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr4_track_selection_status'
                                        */
  real_T tr4_corrected_lateral_distance_;/* Computed Parameter: tr4_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr4_corrected_lateral_distance'
                                          */
  real_T tr5_track_selection_status_Y0;/* Computed Parameter: tr5_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr5_track_selection_status'
                                        */
  real_T tr5_corrected_lateral_distance_;/* Computed Parameter: tr5_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr5_corrected_lateral_distance'
                                          */
  real_T tr6_track_selection_status_Y0;/* Computed Parameter: tr6_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr6_track_selection_status'
                                        */
  real_T tr6_corrected_lateral_distance_;/* Computed Parameter: tr6_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr6_corrected_lateral_distance'
                                          */
  real_T tr7_track_selection_status_Y0;/* Computed Parameter: tr7_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr7_track_selection_status'
                                        */
  real_T tr7_corrected_lateral_distance_;/* Computed Parameter: tr7_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr7_corrected_lateral_distance'
                                          */
  real_T tr8_track_selection_status_Y0;/* Computed Parameter: tr8_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr8_track_selection_status'
                                        */
  real_T tr8_corrected_lateral_distance_;/* Computed Parameter: tr8_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr8_corrected_lateral_distance'
                                          */
  real_T tr9_track_selection_status_Y0;/* Computed Parameter: tr9_track_selection_status_Y0
                                        * Referenced by: '<S506>/tr9_track_selection_status'
                                        */
  real_T tr9_corrected_lateral_distance_;/* Computed Parameter: tr9_corrected_lateral_distance_
                                          * Referenced by: '<S506>/tr9_corrected_lateral_distance'
                                          */
  real_T tr0_lateral_position_Y0;      /* Computed Parameter: tr0_lateral_position_Y0
                                        * Referenced by: '<S506>/tr0_lateral_position'
                                        */
  real_T tr1_lateral_position_Y0;      /* Computed Parameter: tr1_lateral_position_Y0
                                        * Referenced by: '<S506>/tr1_lateral_position'
                                        */
  real_T tr2_lateral_position_Y0;      /* Computed Parameter: tr2_lateral_position_Y0
                                        * Referenced by: '<S506>/tr2_lateral_position'
                                        */
  real_T tr3_lateral_position_Y0;      /* Computed Parameter: tr3_lateral_position_Y0
                                        * Referenced by: '<S506>/tr3_lateral_position'
                                        */
  real_T tr4_lateral_position_Y0;      /* Computed Parameter: tr4_lateral_position_Y0
                                        * Referenced by: '<S506>/tr4_lateral_position'
                                        */
  real_T tr5_lateral_position_Y0;      /* Computed Parameter: tr5_lateral_position_Y0
                                        * Referenced by: '<S506>/tr5_lateral_position'
                                        */
  real_T tr6_lateral_position_Y0;      /* Computed Parameter: tr6_lateral_position_Y0
                                        * Referenced by: '<S506>/tr6_lateral_position'
                                        */
  real_T tr7_lateral_position_Y0;      /* Computed Parameter: tr7_lateral_position_Y0
                                        * Referenced by: '<S506>/tr7_lateral_position'
                                        */
  real_T tr8_lateral_position_Y0;      /* Computed Parameter: tr8_lateral_position_Y0
                                        * Referenced by: '<S506>/tr8_lateral_position'
                                        */
  real_T tr9_lateral_position_Y0;      /* Computed Parameter: tr9_lateral_position_Y0
                                        * Referenced by: '<S506>/tr9_lateral_position'
                                        */
  real_T tr0_range_Y0;                 /* Computed Parameter: tr0_range_Y0
                                        * Referenced by: '<S506>/tr0_range'
                                        */
  real_T tr1_range_Y0;                 /* Computed Parameter: tr1_range_Y0
                                        * Referenced by: '<S506>/tr1_range'
                                        */
  real_T tr2_range_Y0;                 /* Computed Parameter: tr2_range_Y0
                                        * Referenced by: '<S506>/tr2_range'
                                        */
  real_T tr3_range_Y0;                 /* Computed Parameter: tr3_range_Y0
                                        * Referenced by: '<S506>/tr3_range'
                                        */
  real_T tr4_range_Y0;                 /* Computed Parameter: tr4_range_Y0
                                        * Referenced by: '<S506>/tr4_range'
                                        */
  real_T tr5_range_Y0;                 /* Computed Parameter: tr5_range_Y0
                                        * Referenced by: '<S506>/tr5_range'
                                        */
  real_T tr6_range_Y0;                 /* Computed Parameter: tr6_range_Y0
                                        * Referenced by: '<S506>/tr6_range'
                                        */
  real_T tr7_range_Y0;                 /* Computed Parameter: tr7_range_Y0
                                        * Referenced by: '<S506>/tr7_range'
                                        */
  real_T tr8_range_Y0;                 /* Computed Parameter: tr8_range_Y0
                                        * Referenced by: '<S506>/tr8_range'
                                        */
  real_T tr9_range_Y0;                 /* Computed Parameter: tr9_range_Y0
                                        * Referenced by: '<S506>/tr9_range'
                                        */
  real_T tr0_radar_confidence_Y0;      /* Computed Parameter: tr0_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr0_radar_confidence'
                                        */
  real_T tr1_radar_confidence_Y0;      /* Computed Parameter: tr1_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr1_radar_confidence'
                                        */
  real_T tr2_radar_confidence_Y0;      /* Computed Parameter: tr2_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr2_radar_confidence'
                                        */
  real_T tr3_radar_confidence_Y0;      /* Computed Parameter: tr3_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr3_radar_confidence'
                                        */
  real_T tr4_radar_confidence_Y0;      /* Computed Parameter: tr4_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr4_radar_confidence'
                                        */
  real_T tr5_radar_confidence_Y0;      /* Computed Parameter: tr5_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr5_radar_confidence'
                                        */
  real_T tr6_radar_confidence_Y0;      /* Computed Parameter: tr6_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr6_radar_confidence'
                                        */
  real_T tr7_radar_confidence_Y0;      /* Computed Parameter: tr7_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr7_radar_confidence'
                                        */
  real_T tr8_radar_confidence_Y0;      /* Computed Parameter: tr8_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr8_radar_confidence'
                                        */
  real_T tr9_radar_confidence_Y0;      /* Computed Parameter: tr9_radar_confidence_Y0
                                        * Referenced by: '<S506>/tr9_radar_confidence'
                                        */
  real_T tr0_relative_velocitiy_Y0;    /* Computed Parameter: tr0_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr0_relative_velocitiy'
                                        */
  real_T tr0_acceleration_over_ground_Y0;/* Computed Parameter: tr0_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr0_acceleration_over_ground'
                                          */
  real_T tr1_relative_velocitiy_Y0;    /* Computed Parameter: tr1_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr1_relative_velocitiy'
                                        */
  real_T tr1_acceleration_over_ground_Y0;/* Computed Parameter: tr1_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr1_acceleration_over_ground'
                                          */
  real_T tr2_relative_velocitiy_Y0;    /* Computed Parameter: tr2_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr2_relative_velocitiy'
                                        */
  real_T tr2_acceleration_over_ground_Y0;/* Computed Parameter: tr2_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr2_acceleration_over_ground'
                                          */
  real_T tr3_relative_velocitiy_Y0;    /* Computed Parameter: tr3_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr3_relative_velocitiy'
                                        */
  real_T tr3_acceleration_over_ground_Y0;/* Computed Parameter: tr3_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr3_acceleration_over_ground'
                                          */
  real_T tr4_relative_velocitiy_Y0;    /* Computed Parameter: tr4_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr4_relative_velocitiy'
                                        */
  real_T tr4_acceleration_over_ground_Y0;/* Computed Parameter: tr4_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr4_acceleration_over_ground'
                                          */
  real_T tr5_relative_velocitiy_Y0;    /* Computed Parameter: tr5_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr5_relative_velocitiy'
                                        */
  real_T tr5_acceleration_over_ground_Y0;/* Computed Parameter: tr5_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr5_acceleration_over_ground'
                                          */
  real_T tr6_relative_velocitiy_Y0;    /* Computed Parameter: tr6_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr6_relative_velocitiy'
                                        */
  real_T tr6_acceleration_over_ground_Y0;/* Computed Parameter: tr6_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr6_acceleration_over_ground'
                                          */
  real_T tr7_relative_velocitiy_Y0;    /* Computed Parameter: tr7_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr7_relative_velocitiy'
                                        */
  real_T tr7_acceleration_over_ground_Y0;/* Computed Parameter: tr7_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr7_acceleration_over_ground'
                                          */
  real_T tr8_relative_velocitiy_Y0;    /* Computed Parameter: tr8_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr8_relative_velocitiy'
                                        */
  real_T tr8_acceleration_over_ground_Y0;/* Computed Parameter: tr8_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr8_acceleration_over_ground'
                                          */
  real_T tr9_relative_velocitiy_Y0;    /* Computed Parameter: tr9_relative_velocitiy_Y0
                                        * Referenced by: '<S506>/tr9_relative_velocitiy'
                                        */
  real_T tr9_acceleration_over_ground_Y0;/* Computed Parameter: tr9_acceleration_over_ground_Y0
                                          * Referenced by: '<S506>/tr9_acceleration_over_ground'
                                          */
  real_T track_multiplexor_Y0;         /* Computed Parameter: track_multiplexor_Y0
                                        * Referenced by: '<S506>/track_multiplexor'
                                        */
  real_T RXstatus_Y0_b;                /* Computed Parameter: RXstatus_Y0_b
                                        * Referenced by: '<S506>/RX status'
                                        */
  real_T RXtime_Y0_pr;                 /* Computed Parameter: RXtime_Y0_pr
                                        * Referenced by: '<S506>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
                                        * Referenced by: '<S506>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0;        /* Computed Parameter: TwoSpeedAxleSwitch_Y0
                                        * Referenced by: '<S508>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0;        /* Computed Parameter: ParkingBrakeSwitch_Y0
                                        * Referenced by: '<S508>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0;     /* Computed Parameter: CruiseCtrlPauseSwitch_Y0
                                        * Referenced by: '<S508>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0; /* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0
                                        * Referenced by: '<S508>/ParkBrakeReleaseInhibitRq'
                                        */
  real_T WheelBasedVehicleSpeed_Y0;    /* Computed Parameter: WheelBasedVehicleSpeed_Y0
                                        * Referenced by: '<S508>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0;          /* Computed Parameter: CruiseCtrlActive_Y0
                                        * Referenced by: '<S508>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0;    /* Computed Parameter: CruiseCtrlEnableSwitch_Y0
                                        * Referenced by: '<S508>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0;               /* Computed Parameter: BrakeSwitch_Y0
                                        * Referenced by: '<S508>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0;              /* Computed Parameter: ClutchSwitch_Y0
                                        * Referenced by: '<S508>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0;       /* Computed Parameter: CruiseCtrlSetSwitch_Y0
                                        * Referenced by: '<S508>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0;     /* Computed Parameter: CruiseCtrlCoastSwitch_Y0
                                        * Referenced by: '<S508>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0;    /* Computed Parameter: CruiseCtrlResumeSwitch_Y0
                                        * Referenced by: '<S508>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0
                                        * Referenced by: '<S508>/CruiseCtrlAccelerateSwitch'
                                        */
  real_T CruiseCtrlSetSpeed_Y0;        /* Computed Parameter: CruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S508>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0;          /* Computed Parameter: PTOGovernorState_Y0
                                        * Referenced by: '<S508>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0;          /* Computed Parameter: CruiseCtrlStates_Y0
                                        * Referenced by: '<S508>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0;    /* Computed Parameter: EngIdleIncrementSwitch_Y0
                                        * Referenced by: '<S508>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0;    /* Computed Parameter: EngIdleDecrementSwitch_Y0
                                        * Referenced by: '<S508>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0;         /* Computed Parameter: EngTestModeSwitch_Y0
                                        * Referenced by: '<S508>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0; /* Computed Parameter: EngShutdownOverrideSwitch_Y0
                                        * Referenced by: '<S508>/EngShutdownOverrideSwitch'
                                        */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S508>/RX status'
                                        */
  real_T RXtime_Y0_hk;                 /* Computed Parameter: RXtime_Y0_hk
                                        * Referenced by: '<S508>/RX time'
                                        */
  real_T RXdeltatime_Y0_dj;            /* Computed Parameter: RXdeltatime_Y0_dj
                                        * Referenced by: '<S508>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_j;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_j
                                        * Referenced by: '<S510>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_c;      /* Computed Parameter: ParkingBrakeSwitch_Y0_c
                                        * Referenced by: '<S510>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_g;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_g
                                        * Referenced by: '<S510>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_c;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_c
                                         * Referenced by: '<S510>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_a;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_a
                                        * Referenced by: '<S510>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_l;        /* Computed Parameter: CruiseCtrlActive_Y0_l
                                        * Referenced by: '<S510>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_i;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_i
                                        * Referenced by: '<S510>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_d;             /* Computed Parameter: BrakeSwitch_Y0_d
                                        * Referenced by: '<S510>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_j;            /* Computed Parameter: ClutchSwitch_Y0_j
                                        * Referenced by: '<S510>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_k;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_k
                                        * Referenced by: '<S510>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_i;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_i
                                        * Referenced by: '<S510>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_k;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_k
                                        * Referenced by: '<S510>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_e;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_e
                                          * Referenced by: '<S510>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_b;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_b
                                        * Referenced by: '<S510>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_i;        /* Computed Parameter: PTOGovernorState_Y0_i
                                        * Referenced by: '<S510>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_m;        /* Computed Parameter: CruiseCtrlStates_Y0_m
                                        * Referenced by: '<S510>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_o;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_o
                                        * Referenced by: '<S510>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_h;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_h
                                        * Referenced by: '<S510>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_b;       /* Computed Parameter: EngTestModeSwitch_Y0_b
                                        * Referenced by: '<S510>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_p;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_p
                                         * Referenced by: '<S510>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_i4;               /* Computed Parameter: RXstatus_Y0_i4
                                        * Referenced by: '<S510>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S510>/RX time'
                                        */
  real_T RXdeltatime_Y0_pn;            /* Computed Parameter: RXdeltatime_Y0_pn
                                        * Referenced by: '<S510>/RX delta time'
                                        */
  real_T SID_Y0;                       /* Computed Parameter: SID_Y0
                                        * Referenced by: '<S512>/SID'
                                        */
  real_T COGReference_Y0;              /* Computed Parameter: COGReference_Y0
                                        * Referenced by: '<S512>/COGReference'
                                        */
  real_T CourseOverGround_Y0;          /* Computed Parameter: CourseOverGround_Y0
                                        * Referenced by: '<S512>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0;           /* Computed Parameter: SpeedOverGround_Y0
                                        * Referenced by: '<S512>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_f;                /* Computed Parameter: RXstatus_Y0_f
                                        * Referenced by: '<S512>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S512>/RX time'
                                        */
  real_T RXdeltatime_Y0_pm;            /* Computed Parameter: RXdeltatime_Y0_pm
                                        * Referenced by: '<S512>/RX delta time'
                                        */
  real_T SID_Y0_g;                     /* Computed Parameter: SID_Y0_g
                                        * Referenced by: '<S513>/SID'
                                        */
  real_T COGReference_Y0_n;            /* Computed Parameter: COGReference_Y0_n
                                        * Referenced by: '<S513>/COGReference'
                                        */
  real_T CourseOverGround_Y0_k;        /* Computed Parameter: CourseOverGround_Y0_k
                                        * Referenced by: '<S513>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_o;         /* Computed Parameter: SpeedOverGround_Y0_o
                                        * Referenced by: '<S513>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_c;                /* Computed Parameter: RXstatus_Y0_c
                                        * Referenced by: '<S513>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S513>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
                                        * Referenced by: '<S513>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S515>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_k;                /* Computed Parameter: RXstatus_Y0_k
                                        * Referenced by: '<S515>/RX status'
                                        */
  real_T RXtime_Y0_g;                  /* Computed Parameter: RXtime_Y0_g
                                        * Referenced by: '<S515>/RX time'
                                        */
  real_T RXdeltatime_Y0_ar;            /* Computed Parameter: RXdeltatime_Y0_ar
                                        * Referenced by: '<S515>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0;          /* Computed Parameter: ASREngCtrlActive_Y0
                                        * Referenced by: '<S517>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0;        /* Computed Parameter: ASRBrakeCtrlActive_Y0
                                        * Referenced by: '<S517>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0;     /* Computed Parameter: AntiLockBrakingActive_Y0
                                        * Referenced by: '<S517>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0;            /* Computed Parameter: EBSBrakeSwitch_Y0
                                        * Referenced by: '<S517>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0;             /* Computed Parameter: BrakePedalPos_Y0
                                        * Referenced by: '<S517>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0;          /* Computed Parameter: ABSOffroadSwitch_Y0
                                        * Referenced by: '<S517>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0;          /* Computed Parameter: ASROffroadSwitch_Y0
                                        * Referenced by: '<S517>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0;       /* Computed Parameter: ASRHillHolderSwitch_Y0
                                        * Referenced by: '<S517>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0
                                        * Referenced by: '<S517>/TractionCtrlOverrideSwitch'
                                        */
  real_T AccelInterlockSwitch_Y0;      /* Computed Parameter: AccelInterlockSwitch_Y0
                                        * Referenced by: '<S517>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0;           /* Computed Parameter: EngDerateSwitch_Y0
                                        * Referenced by: '<S517>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0;      /* Computed Parameter: EngAuxShutdownSwitch_Y0
                                        * Referenced by: '<S517>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0;   /* Computed Parameter: RemoteAccelEnableSwitch_Y0
                                        * Referenced by: '<S517>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0;      /* Computed Parameter: EngRetarderSelection_Y0
                                        * Referenced by: '<S517>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0;       /* Computed Parameter: ABSFullyOperational_Y0
                                        * Referenced by: '<S517>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0;       /* Computed Parameter: EBSRedWarningSignal_Y0
                                        * Referenced by: '<S517>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0; /* Computed Parameter: ABS_EBSAmberWarningSignal_Y0
                                        * Referenced by: '<S517>/ABS_EBSAmberWarningSignal'
                                        */
  real_T ATC_ASRInformationSignal_Y0;  /* Computed Parameter: ATC_ASRInformationSignal_Y0
                                        * Referenced by: '<S517>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCntrl
                                          * Referenced by: '<S517>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0;           /* Computed Parameter: HaltBrakeSwitch_Y0
                                        * Referenced by: '<S517>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0;          /* Computed Parameter: TrailerABSStatus_Y0
                                        * Referenced by: '<S517>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSignal;/* Computed Parameter: TrctrMntdTrilerABSWarningSignal
                                          * Referenced by: '<S517>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S517>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S517>/RX time'
                                        */
  real_T RXdeltatime_Y0_f;             /* Computed Parameter: RXdeltatime_Y0_f
                                        * Referenced by: '<S517>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_p;        /* Computed Parameter: ASREngCtrlActive_Y0_p
                                        * Referenced by: '<S519>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_n;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_n
                                        * Referenced by: '<S519>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_l;   /* Computed Parameter: AntiLockBrakingActive_Y0_l
                                        * Referenced by: '<S519>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_a;          /* Computed Parameter: EBSBrakeSwitch_Y0_a
                                        * Referenced by: '<S519>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_p;           /* Computed Parameter: BrakePedalPos_Y0_p
                                        * Referenced by: '<S519>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_g;        /* Computed Parameter: ABSOffroadSwitch_Y0_g
                                        * Referenced by: '<S519>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_c;        /* Computed Parameter: ASROffroadSwitch_Y0_c
                                        * Referenced by: '<S519>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_b;     /* Computed Parameter: ASRHillHolderSwitch_Y0_b
                                        * Referenced by: '<S519>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_f;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_f
                                          * Referenced by: '<S519>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_e;    /* Computed Parameter: AccelInterlockSwitch_Y0_e
                                        * Referenced by: '<S519>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_j;         /* Computed Parameter: EngDerateSwitch_Y0_j
                                        * Referenced by: '<S519>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_m;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_m
                                        * Referenced by: '<S519>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_l; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_l
                                        * Referenced by: '<S519>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_i;    /* Computed Parameter: EngRetarderSelection_Y0_i
                                        * Referenced by: '<S519>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_o;     /* Computed Parameter: ABSFullyOperational_Y0_o
                                        * Referenced by: '<S519>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_g;     /* Computed Parameter: EBSRedWarningSignal_Y0_g
                                        * Referenced by: '<S519>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_f;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_f
                                         * Referenced by: '<S519>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_p;/* Computed Parameter: ATC_ASRInformationSignal_Y0_p
                                        * Referenced by: '<S519>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_n;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_n
                                          * Referenced by: '<S519>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_c;         /* Computed Parameter: HaltBrakeSwitch_Y0_c
                                        * Referenced by: '<S519>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_o;        /* Computed Parameter: TrailerABSStatus_Y0_o
                                        * Referenced by: '<S519>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_l;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_l
                                          * Referenced by: '<S519>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_fm;               /* Computed Parameter: RXstatus_Y0_fm
                                        * Referenced by: '<S519>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S519>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
                                        * Referenced by: '<S519>/RX delta time'
                                        */
  real_T FrontAxleSpeed_Y0;            /* Computed Parameter: FrontAxleSpeed_Y0
                                        * Referenced by: '<S521>/FrontAxleSpeed'
                                        */
  real_T RelativeSpeedFrontAxleLeftWheel;/* Computed Parameter: RelativeSpeedFrontAxleLeftWheel
                                          * Referenced by: '<S521>/RelativeSpeedFrontAxleLeftWheel'
                                          */
  real_T RlativeSpeedFrontAxleRightWheel;/* Computed Parameter: RlativeSpeedFrontAxleRightWheel
                                          * Referenced by: '<S521>/RlativeSpeedFrontAxleRightWheel'
                                          */
  real_T RelativeSpeedRearAxle1LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle1LeftWheel
                                          * Referenced by: '<S521>/RelativeSpeedRearAxle1LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle1RightWheel;/* Computed Parameter: RlativeSpeedRearAxle1RightWheel
                                          * Referenced by: '<S521>/RlativeSpeedRearAxle1RightWheel'
                                          */
  real_T RelativeSpeedRearAxle2LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle2LeftWheel
                                          * Referenced by: '<S521>/RelativeSpeedRearAxle2LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle2RightWheel;/* Computed Parameter: RlativeSpeedRearAxle2RightWheel
                                          * Referenced by: '<S521>/RlativeSpeedRearAxle2RightWheel'
                                          */
  real_T RXstatus_Y0_nm;               /* Computed Parameter: RXstatus_Y0_nm
                                        * Referenced by: '<S521>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S521>/RX time'
                                        */
  real_T RXdeltatime_Y0_m;             /* Computed Parameter: RXdeltatime_Y0_m
                                        * Referenced by: '<S521>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S525>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_bh;/* Expression: 0
                                         * Referenced by: '<S525>/Unit_Delay'
                                         */
  real_T EngTorqueMode_Y0;             /* Computed Parameter: EngTorqueMode_Y0
                                        * Referenced by: '<S568>/EngTorqueMode'
                                        */
  real_T ActlEngPrcntTrqueHighResolution;/* Computed Parameter: ActlEngPrcntTrqueHighResolution
                                          * Referenced by: '<S568>/ActlEngPrcntTrqueHighResolution'
                                          */
  real_T DriversDemandEngPercentTorque_Y;/* Computed Parameter: DriversDemandEngPercentTorque_Y
                                          * Referenced by: '<S568>/DriversDemandEngPercentTorque'
                                          */
  real_T ActualEngPercentTorque_Y0;    /* Computed Parameter: ActualEngPercentTorque_Y0
                                        * Referenced by: '<S568>/ActualEngPercentTorque'
                                        */
  real_T EngSpeed_Y0;                  /* Computed Parameter: EngSpeed_Y0
                                        * Referenced by: '<S568>/EngSpeed'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrEngCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrEngCntrl
                                          * Referenced by: '<S568>/SrcAddrssOfCtrllngDvcFrEngCntrl'
                                          */
  real_T EngStarterMode_Y0;            /* Computed Parameter: EngStarterMode_Y0
                                        * Referenced by: '<S568>/EngStarterMode'
                                        */
  real_T EngDemandPercentTorque_Y0;    /* Computed Parameter: EngDemandPercentTorque_Y0
                                        * Referenced by: '<S568>/EngDemandPercentTorque'
                                        */
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S568>/RX status'
                                        */
  real_T RXtime_Y0_ek;                 /* Computed Parameter: RXtime_Y0_ek
                                        * Referenced by: '<S568>/RX time'
                                        */
  real_T RXdeltatime_Y0_pn1;           /* Computed Parameter: RXdeltatime_Y0_pn1
                                        * Referenced by: '<S568>/RX delta time'
                                        */
  real_T SPN558_AccelPed1LowIdlSwitch_Y0;/* Computed Parameter: SPN558_AccelPed1LowIdlSwitch_Y0
                                          * Referenced by: '<S570>/SPN558_AccelPed1LowIdlSwitch'
                                          */
  real_T SPN559_AccelPedKickdownSw_Y0; /* Computed Parameter: SPN559_AccelPedKickdownSw_Y0
                                        * Referenced by: '<S570>/SPN559_AccelPedKickdownSw'
                                        */
  real_T SPN1437_RoadSpeedLimitStatus_Y0;/* Computed Parameter: SPN1437_RoadSpeedLimitStatus_Y0
                                          * Referenced by: '<S570>/SPN1437_RoadSpeedLimitStatus'
                                          */
  real_T SPN2970_AccelPed2LowIdlSwitch_Y;/* Computed Parameter: SPN2970_AccelPed2LowIdlSwitch_Y
                                          * Referenced by: '<S570>/SPN2970_AccelPed2LowIdlSwitch'
                                          */
  real_T SPN91_AccelPedPos1_Y0;        /* Computed Parameter: SPN91_AccelPedPos1_Y0
                                        * Referenced by: '<S570>/SPN91_AccelPedPos1'
                                        */
  real_T SPN92_EngPercLoadAtCurrSpd_Y0;/* Computed Parameter: SPN92_EngPercLoadAtCurrSpd_Y0
                                        * Referenced by: '<S570>/SPN92_EngPercLoadAtCurrSpd'
                                        */
  real_T SPN974_RemAccelPedalPosition_Y0;/* Computed Parameter: SPN974_RemAccelPedalPosition_Y0
                                          * Referenced by: '<S570>/SPN974_RemAccelPedalPosition'
                                          */
  real_T SPN29_AccelPedPos2_Y0;        /* Computed Parameter: SPN29_AccelPedPos2_Y0
                                        * Referenced by: '<S570>/SPN29_AccelPedPos2'
                                        */
  real_T SPN2979_VehAccelRateLimStatus_Y;/* Computed Parameter: SPN2979_VehAccelRateLimStatus_Y
                                          * Referenced by: '<S570>/SPN2979_VehAccelRateLimStatus'
                                          */
  real_T SPN5021_MomEngMaxPwrEnFdbk_Y0;/* Computed Parameter: SPN5021_MomEngMaxPwrEnFdbk_Y0
                                        * Referenced by: '<S570>/SPN5021_MomEngMaxPwrEnFdbk'
                                        */
  real_T SPN5399_DPFThermMgmtActive_Y0;/* Computed Parameter: SPN5399_DPFThermMgmtActive_Y0
                                        * Referenced by: '<S570>/SPN5399_DPFThermMgmtActive'
                                        */
  real_T SPN5400_SCRThermMgmtActive_Y0;/* Computed Parameter: SPN5400_SCRThermMgmtActive_Y0
                                        * Referenced by: '<S570>/SPN5400_SCRThermMgmtActive'
                                        */
  real_T SPN3357_ActMaxAvailEngPercTrq_Y;/* Computed Parameter: SPN3357_ActMaxAvailEngPercTrq_Y
                                          * Referenced by: '<S570>/SPN3357_ActMaxAvailEngPercTrq'
                                          */
  real_T SPN5398_EstPumpingPercentTorque;/* Computed Parameter: SPN5398_EstPumpingPercentTorque
                                          * Referenced by: '<S570>/SPN5398_EstPumpingPercentTorque'
                                          */
  real_T RXstatus_Y0_h0;               /* Computed Parameter: RXstatus_Y0_h0
                                        * Referenced by: '<S570>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S570>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S570>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S572>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S572>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_ha;               /* Computed Parameter: RXstatus_Y0_ha
                                        * Referenced by: '<S572>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S572>/RX time'
                                        */
  real_T RXdeltatime_Y0_j4;            /* Computed Parameter: RXdeltatime_Y0_j4
                                        * Referenced by: '<S572>/RX delta time'
                                        */
  real_T SPN524_TransSelectedGear_Y0;  /* Computed Parameter: SPN524_TransSelectedGear_Y0
                                        * Referenced by: '<S574>/SPN524_TransSelectedGear'
                                        */
  real_T SPN526_TransActualGearRatio_Y0;/* Computed Parameter: SPN526_TransActualGearRatio_Y0
                                         * Referenced by: '<S574>/SPN526_TransActualGearRatio'
                                         */
  real_T SPN523_TransCurrentGear_Y0;   /* Computed Parameter: SPN523_TransCurrentGear_Y0
                                        * Referenced by: '<S574>/SPN523_TransCurrentGear'
                                        */
  real_T RXstatus_Y0_mv;               /* Computed Parameter: RXstatus_Y0_mv
                                        * Referenced by: '<S574>/RX status'
                                        */
  real_T RXtime_Y0_ms;                 /* Computed Parameter: RXtime_Y0_ms
                                        * Referenced by: '<S574>/RX time'
                                        */
  real_T RXdeltatime_Y0_mg;            /* Computed Parameter: RXdeltatime_Y0_mg
                                        * Referenced by: '<S574>/RX delta time'
                                        */
  real_T SID_Y0_c;                     /* Computed Parameter: SID_Y0_c
                                        * Referenced by: '<S576>/SID'
                                        */
  real_T SetMode_Y0;                   /* Computed Parameter: SetMode_Y0
                                        * Referenced by: '<S576>/SetMode'
                                        */
  real_T OpMode_Y0;                    /* Computed Parameter: OpMode_Y0
                                        * Referenced by: '<S576>/OpMode'
                                        */
  real_T HDOP_Y0;                      /* Computed Parameter: HDOP_Y0
                                        * Referenced by: '<S576>/HDOP_'
                                        */
  real_T VDOP_Y0;                      /* Computed Parameter: VDOP_Y0
                                        * Referenced by: '<S576>/VDOP'
                                        */
  real_T TDOP_Y0;                      /* Computed Parameter: TDOP_Y0
                                        * Referenced by: '<S576>/TDOP'
                                        */
  real_T RXstatus_Y0_e;                /* Computed Parameter: RXstatus_Y0_e
                                        * Referenced by: '<S576>/RX status'
                                        */
  real_T RXtime_Y0_j1;                 /* Computed Parameter: RXtime_Y0_j1
                                        * Referenced by: '<S576>/RX time'
                                        */
  real_T RXdeltatime_Y0_jy;            /* Computed Parameter: RXdeltatime_Y0_jy
                                        * Referenced by: '<S576>/RX delta time'
                                        */
  real_T SID_Y0_e;                     /* Computed Parameter: SID_Y0_e
                                        * Referenced by: '<S577>/SID'
                                        */
  real_T SetMode_Y0_i;                 /* Computed Parameter: SetMode_Y0_i
                                        * Referenced by: '<S577>/SetMode'
                                        */
  real_T OpMode_Y0_g;                  /* Computed Parameter: OpMode_Y0_g
                                        * Referenced by: '<S577>/OpMode'
                                        */
  real_T HDOP_Y0_j;                    /* Computed Parameter: HDOP_Y0_j
                                        * Referenced by: '<S577>/HDOP_'
                                        */
  real_T VDOP_Y0_l;                    /* Computed Parameter: VDOP_Y0_l
                                        * Referenced by: '<S577>/VDOP'
                                        */
  real_T TDOP_Y0_c;                    /* Computed Parameter: TDOP_Y0_c
                                        * Referenced by: '<S577>/TDOP'
                                        */
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S577>/RX status'
                                        */
  real_T RXtime_Y0_fy;                 /* Computed Parameter: RXtime_Y0_fy
                                        * Referenced by: '<S577>/RX time'
                                        */
  real_T RXdeltatime_Y0_cb;            /* Computed Parameter: RXdeltatime_Y0_cb
                                        * Referenced by: '<S577>/RX delta time'
                                        */
  real_T FrontAxleLeftWheelSpeed_Y0;   /* Computed Parameter: FrontAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S579>/FrontAxleLeftWheelSpeed'
                                        */
  real_T FrontAxleRightWheelSpeed_Y0;  /* Computed Parameter: FrontAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S579>/FrontAxleRightWheelSpeed'
                                        */
  real_T RearAxleLeftWheelSpeed_Y0;    /* Computed Parameter: RearAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S579>/RearAxleLeftWheelSpeed'
                                        */
  real_T RearAxleRightWheelSpeed_Y0;   /* Computed Parameter: RearAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S579>/RearAxleRightWheelSpeed'
                                        */
  real_T RXstatus_Y0_iw;               /* Computed Parameter: RXstatus_Y0_iw
                                        * Referenced by: '<S579>/RX status'
                                        */
  real_T RXtime_Y0_mp;                 /* Computed Parameter: RXtime_Y0_mp
                                        * Referenced by: '<S579>/RX time'
                                        */
  real_T RXdeltatime_Y0_pc;            /* Computed Parameter: RXdeltatime_Y0_pc
                                        * Referenced by: '<S579>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S582>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S582>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_kt;               /* Computed Parameter: RXstatus_Y0_kt
                                        * Referenced by: '<S582>/RX status'
                                        */
  real_T RXtime_Y0_ob;                 /* Computed Parameter: RXtime_Y0_ob
                                        * Referenced by: '<S582>/RX time'
                                        */
  real_T RXdeltatime_Y0_ir;            /* Computed Parameter: RXdeltatime_Y0_ir
                                        * Referenced by: '<S582>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_o;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_o
                                          * Referenced by: '<S583>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__f;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__f
                                          * Referenced by: '<S583>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S583>/RX status'
                                        */
  real_T RXtime_Y0_lh;                 /* Computed Parameter: RXtime_Y0_lh
                                        * Referenced by: '<S583>/RX time'
                                        */
  real_T RXdeltatime_Y0_i1;            /* Computed Parameter: RXdeltatime_Y0_i1
                                        * Referenced by: '<S583>/RX delta time'
                                        */
  real_T byte1_Y0_f;                   /* Computed Parameter: byte1_Y0_f
                                        * Referenced by: '<S588>/byte1'
                                        */
  real_T byte2_Y0_g4;                  /* Computed Parameter: byte2_Y0_g4
                                        * Referenced by: '<S588>/byte2'
                                        */
  real_T byte3_Y0_p;                   /* Computed Parameter: byte3_Y0_p
                                        * Referenced by: '<S588>/byte3'
                                        */
  real_T byte4_Y0_i;                   /* Computed Parameter: byte4_Y0_i
                                        * Referenced by: '<S588>/byte4'
                                        */
  real_T byte5_Y0_l;                   /* Computed Parameter: byte5_Y0_l
                                        * Referenced by: '<S588>/byte5'
                                        */
  real_T byte6_Y0_fw;                  /* Computed Parameter: byte6_Y0_fw
                                        * Referenced by: '<S588>/byte6'
                                        */
  real_T byte7_Y0_h;                   /* Computed Parameter: byte7_Y0_h
                                        * Referenced by: '<S588>/byte7'
                                        */
  real_T byte8_Y0_k;                   /* Computed Parameter: byte8_Y0_k
                                        * Referenced by: '<S588>/byte8'
                                        */
  real_T RXstatus_Y0_n3;               /* Computed Parameter: RXstatus_Y0_n3
                                        * Referenced by: '<S588>/RX status'
                                        */
  real_T RXtime_Y0_hw;                 /* Computed Parameter: RXtime_Y0_hw
                                        * Referenced by: '<S588>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
                                        * Referenced by: '<S588>/RX delta time'
                                        */
  real_T byte1_Y0_o;                   /* Computed Parameter: byte1_Y0_o
                                        * Referenced by: '<S589>/byte1'
                                        */
  real_T byte2_Y0_m;                   /* Computed Parameter: byte2_Y0_m
                                        * Referenced by: '<S589>/byte2'
                                        */
  real_T byte3_Y0_n;                   /* Computed Parameter: byte3_Y0_n
                                        * Referenced by: '<S589>/byte3'
                                        */
  real_T byte4_Y0_n;                   /* Computed Parameter: byte4_Y0_n
                                        * Referenced by: '<S589>/byte4'
                                        */
  real_T byte5_Y0_ek;                  /* Computed Parameter: byte5_Y0_ek
                                        * Referenced by: '<S589>/byte5'
                                        */
  real_T byte6_Y0_fe;                  /* Computed Parameter: byte6_Y0_fe
                                        * Referenced by: '<S589>/byte6'
                                        */
  real_T byte7_Y0_b;                   /* Computed Parameter: byte7_Y0_b
                                        * Referenced by: '<S589>/byte7'
                                        */
  real_T byte8_Y0_d;                   /* Computed Parameter: byte8_Y0_d
                                        * Referenced by: '<S589>/byte8'
                                        */
  real_T RXstatus_Y0_kd;               /* Computed Parameter: RXstatus_Y0_kd
                                        * Referenced by: '<S589>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S589>/RX time'
                                        */
  real_T RXdeltatime_Y0_jb;            /* Computed Parameter: RXdeltatime_Y0_jb
                                        * Referenced by: '<S589>/RX delta time'
                                        */
  real_T byte1_Y0_ay;                  /* Computed Parameter: byte1_Y0_ay
                                        * Referenced by: '<S590>/byte1'
                                        */
  real_T byte2_Y0_f;                   /* Computed Parameter: byte2_Y0_f
                                        * Referenced by: '<S590>/byte2'
                                        */
  real_T byte3_Y0_d;                   /* Computed Parameter: byte3_Y0_d
                                        * Referenced by: '<S590>/byte3'
                                        */
  real_T byte4_Y0_h;                   /* Computed Parameter: byte4_Y0_h
                                        * Referenced by: '<S590>/byte4'
                                        */
  real_T byte5_Y0_f;                   /* Computed Parameter: byte5_Y0_f
                                        * Referenced by: '<S590>/byte5'
                                        */
  real_T byte6_Y0_m;                   /* Computed Parameter: byte6_Y0_m
                                        * Referenced by: '<S590>/byte6'
                                        */
  real_T byte7_Y0_f;                   /* Computed Parameter: byte7_Y0_f
                                        * Referenced by: '<S590>/byte7'
                                        */
  real_T byte8_Y0_d2;                  /* Computed Parameter: byte8_Y0_d2
                                        * Referenced by: '<S590>/byte8'
                                        */
  real_T RXstatus_Y0_ap;               /* Computed Parameter: RXstatus_Y0_ap
                                        * Referenced by: '<S590>/RX status'
                                        */
  real_T RXtime_Y0_g3;                 /* Computed Parameter: RXtime_Y0_g3
                                        * Referenced by: '<S590>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
                                        * Referenced by: '<S590>/RX delta time'
                                        */
  real_T byte1_Y0_c;                   /* Computed Parameter: byte1_Y0_c
                                        * Referenced by: '<S601>/byte1'
                                        */
  real_T byte2_Y0_b;                   /* Computed Parameter: byte2_Y0_b
                                        * Referenced by: '<S601>/byte2'
                                        */
  real_T byte3_Y0_f2;                  /* Computed Parameter: byte3_Y0_f2
                                        * Referenced by: '<S601>/byte3'
                                        */
  real_T byte4_Y0_c;                   /* Computed Parameter: byte4_Y0_c
                                        * Referenced by: '<S601>/byte4'
                                        */
  real_T byte5_Y0_d;                   /* Computed Parameter: byte5_Y0_d
                                        * Referenced by: '<S601>/byte5'
                                        */
  real_T byte6_Y0_j;                   /* Computed Parameter: byte6_Y0_j
                                        * Referenced by: '<S601>/byte6'
                                        */
  real_T byte7_Y0_fb;                  /* Computed Parameter: byte7_Y0_fb
                                        * Referenced by: '<S601>/byte7'
                                        */
  real_T byte8_Y0_f;                   /* Computed Parameter: byte8_Y0_f
                                        * Referenced by: '<S601>/byte8'
                                        */
  real_T RXstatus_Y0_n4;               /* Computed Parameter: RXstatus_Y0_n4
                                        * Referenced by: '<S601>/RX status'
                                        */
  real_T RXtime_Y0_g1;                 /* Computed Parameter: RXtime_Y0_g1
                                        * Referenced by: '<S601>/RX time'
                                        */
  real_T RXdeltatime_Y0_nm;            /* Computed Parameter: RXdeltatime_Y0_nm
                                        * Referenced by: '<S601>/RX delta time'
                                        */
  real_T byte1_Y0_m;                   /* Computed Parameter: byte1_Y0_m
                                        * Referenced by: '<S602>/byte1'
                                        */
  real_T byte2_Y0_l;                   /* Computed Parameter: byte2_Y0_l
                                        * Referenced by: '<S602>/byte2'
                                        */
  real_T byte3_Y0_i;                   /* Computed Parameter: byte3_Y0_i
                                        * Referenced by: '<S602>/byte3'
                                        */
  real_T byte4_Y0_g;                   /* Computed Parameter: byte4_Y0_g
                                        * Referenced by: '<S602>/byte4'
                                        */
  real_T byte5_Y0_n;                   /* Computed Parameter: byte5_Y0_n
                                        * Referenced by: '<S602>/byte5'
                                        */
  real_T byte6_Y0_l;                   /* Computed Parameter: byte6_Y0_l
                                        * Referenced by: '<S602>/byte6'
                                        */
  real_T byte7_Y0_k;                   /* Computed Parameter: byte7_Y0_k
                                        * Referenced by: '<S602>/byte7'
                                        */
  real_T byte8_Y0_p;                   /* Computed Parameter: byte8_Y0_p
                                        * Referenced by: '<S602>/byte8'
                                        */
  real_T RXstatus_Y0_m1;               /* Computed Parameter: RXstatus_Y0_m1
                                        * Referenced by: '<S602>/RX status'
                                        */
  real_T RXtime_Y0_bb;                 /* Computed Parameter: RXtime_Y0_bb
                                        * Referenced by: '<S602>/RX time'
                                        */
  real_T RXdeltatime_Y0_gb;            /* Computed Parameter: RXdeltatime_Y0_gb
                                        * Referenced by: '<S602>/RX delta time'
                                        */
  real_T byte1_Y0_p;                   /* Computed Parameter: byte1_Y0_p
                                        * Referenced by: '<S603>/byte1'
                                        */
  real_T byte2_Y0_lq;                  /* Computed Parameter: byte2_Y0_lq
                                        * Referenced by: '<S603>/byte2'
                                        */
  real_T byte3_Y0_g;                   /* Computed Parameter: byte3_Y0_g
                                        * Referenced by: '<S603>/byte3'
                                        */
  real_T byte4_Y0_ct;                  /* Computed Parameter: byte4_Y0_ct
                                        * Referenced by: '<S603>/byte4'
                                        */
  real_T byte5_Y0_fj;                  /* Computed Parameter: byte5_Y0_fj
                                        * Referenced by: '<S603>/byte5'
                                        */
  real_T byte6_Y0_o;                   /* Computed Parameter: byte6_Y0_o
                                        * Referenced by: '<S603>/byte6'
                                        */
  real_T byte7_Y0_j;                   /* Computed Parameter: byte7_Y0_j
                                        * Referenced by: '<S603>/byte7'
                                        */
  real_T byte8_Y0_o;                   /* Computed Parameter: byte8_Y0_o
                                        * Referenced by: '<S603>/byte8'
                                        */
  real_T RXstatus_Y0_ml;               /* Computed Parameter: RXstatus_Y0_ml
                                        * Referenced by: '<S603>/RX status'
                                        */
  real_T RXtime_Y0_a2;                 /* Computed Parameter: RXtime_Y0_a2
                                        * Referenced by: '<S603>/RX time'
                                        */
  real_T RXdeltatime_Y0_d3;            /* Computed Parameter: RXdeltatime_Y0_d3
                                        * Referenced by: '<S603>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S614>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S614>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_bd;               /* Computed Parameter: RXstatus_Y0_bd
                                        * Referenced by: '<S614>/RX status'
                                        */
  real_T RXtime_Y0_lw;                 /* Computed Parameter: RXtime_Y0_lw
                                        * Referenced by: '<S614>/RX time'
                                        */
  real_T RXdeltatime_Y0_aq;            /* Computed Parameter: RXdeltatime_Y0_aq
                                        * Referenced by: '<S614>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_j;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_j
                                          * Referenced by: '<S615>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_o;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_o
                                          * Referenced by: '<S615>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_ki;               /* Computed Parameter: RXstatus_Y0_ki
                                        * Referenced by: '<S615>/RX status'
                                        */
  real_T RXtime_Y0_oh;                 /* Computed Parameter: RXtime_Y0_oh
                                        * Referenced by: '<S615>/RX time'
                                        */
  real_T RXdeltatime_Y0_go;            /* Computed Parameter: RXdeltatime_Y0_go
                                        * Referenced by: '<S615>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_e;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_e
                                          * Referenced by: '<S616>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_a;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_a
                                          * Referenced by: '<S616>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_hu;               /* Computed Parameter: RXstatus_Y0_hu
                                        * Referenced by: '<S616>/RX status'
                                        */
  real_T RXtime_Y0_lp;                 /* Computed Parameter: RXtime_Y0_lp
                                        * Referenced by: '<S616>/RX time'
                                        */
  real_T RXdeltatime_Y0_mx;            /* Computed Parameter: RXdeltatime_Y0_mx
                                        * Referenced by: '<S616>/RX delta time'
                                        */
  real_T PX2_LaneEdgeLeftAngle_Y0;     /* Computed Parameter: PX2_LaneEdgeLeftAngle_Y0
                                        * Referenced by: '<S624>/PX2_LaneEdgeLeftAngle'
                                        */
  real_T PX2_LaneEdgeLeftNumPoints_Y0; /* Computed Parameter: PX2_LaneEdgeLeftNumPoints_Y0
                                        * Referenced by: '<S624>/PX2_LaneEdgeLeftNumPoints'
                                        */
  real_T PX2_LaneEdgeLeftPosition_Y0;  /* Computed Parameter: PX2_LaneEdgeLeftPosition_Y0
                                        * Referenced by: '<S624>/PX2_LaneEdgeLeftPosition'
                                        */
  real_T RXstatus_Y0_gs;               /* Computed Parameter: RXstatus_Y0_gs
                                        * Referenced by: '<S624>/RX status'
                                        */
  real_T RXtime_Y0_o3;                 /* Computed Parameter: RXtime_Y0_o3
                                        * Referenced by: '<S624>/RX time'
                                        */
  real_T RXdeltatime_Y0_n2;            /* Computed Parameter: RXdeltatime_Y0_n2
                                        * Referenced by: '<S624>/RX delta time'
                                        */
  real_T PX2_LaneEdgeRightAngle_Y0;    /* Computed Parameter: PX2_LaneEdgeRightAngle_Y0
                                        * Referenced by: '<S625>/PX2_LaneEdgeRightAngle'
                                        */
  real_T PX2_LaneEdgeRightNumPoints_Y0;/* Computed Parameter: PX2_LaneEdgeRightNumPoints_Y0
                                        * Referenced by: '<S625>/PX2_LaneEdgeRightNumPoints'
                                        */
  real_T PX2_LaneEdgeRightPosition_Y0; /* Computed Parameter: PX2_LaneEdgeRightPosition_Y0
                                        * Referenced by: '<S625>/PX2_LaneEdgeRightPosition'
                                        */
  real_T RXstatus_Y0_cd;               /* Computed Parameter: RXstatus_Y0_cd
                                        * Referenced by: '<S625>/RX status'
                                        */
  real_T RXtime_Y0_cc;                 /* Computed Parameter: RXtime_Y0_cc
                                        * Referenced by: '<S625>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
                                        * Referenced by: '<S625>/RX delta time'
                                        */
  real_T PX2_LanePosEstAngle_Y0;       /* Computed Parameter: PX2_LanePosEstAngle_Y0
                                        * Referenced by: '<S626>/PX2_LanePosEstAngle'
                                        */
  real_T PX2_LanePosEstNumPoints_Y0;   /* Computed Parameter: PX2_LanePosEstNumPoints_Y0
                                        * Referenced by: '<S626>/PX2_LanePosEstNumPoints'
                                        */
  real_T PX2_LanePosEstPosition_Y0;    /* Computed Parameter: PX2_LanePosEstPosition_Y0
                                        * Referenced by: '<S626>/PX2_LanePosEstPosition'
                                        */
  real_T PX2_LanePosEstNumLanes_Y0;    /* Computed Parameter: PX2_LanePosEstNumLanes_Y0
                                        * Referenced by: '<S626>/PX2_LanePosEstNumLanes'
                                        */
  real_T RXstatus_Y0_fl;               /* Computed Parameter: RXstatus_Y0_fl
                                        * Referenced by: '<S626>/RX status'
                                        */
  real_T RXtime_Y0_jp;                 /* Computed Parameter: RXtime_Y0_jp
                                        * Referenced by: '<S626>/RX time'
                                        */
  real_T RXdeltatime_Y0_f4;            /* Computed Parameter: RXdeltatime_Y0_f4
                                        * Referenced by: '<S626>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S628>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S628>/Longitude_'
                                        */
  real_T RXstatus_Y0_gp;               /* Computed Parameter: RXstatus_Y0_gp
                                        * Referenced by: '<S628>/RX status'
                                        */
  real_T RXtime_Y0_mt;                 /* Computed Parameter: RXtime_Y0_mt
                                        * Referenced by: '<S628>/RX time'
                                        */
  real_T RXdeltatime_Y0_lo;            /* Computed Parameter: RXdeltatime_Y0_lo
                                        * Referenced by: '<S628>/RX delta time'
                                        */
  real_T Latitude_Y0_l;                /* Computed Parameter: Latitude_Y0_l
                                        * Referenced by: '<S629>/Latitude_'
                                        */
  real_T Longitude_Y0_j;               /* Computed Parameter: Longitude_Y0_j
                                        * Referenced by: '<S629>/Longitude_'
                                        */
  real_T RXstatus_Y0_df;               /* Computed Parameter: RXstatus_Y0_df
                                        * Referenced by: '<S629>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S629>/RX time'
                                        */
  real_T RXdeltatime_Y0_dx;            /* Computed Parameter: RXdeltatime_Y0_dx
                                        * Referenced by: '<S629>/RX delta time'
                                        */
  real_T PressureP4_Y0;                /* Computed Parameter: PressureP4_Y0
                                        * Referenced by: '<S631>/PressureP4'
                                        */
  real_T PressureP1_Y0;                /* Computed Parameter: PressureP1_Y0
                                        * Referenced by: '<S631>/PressureP1'
                                        */
  real_T PressureP21_Y0;               /* Computed Parameter: PressureP21_Y0
                                        * Referenced by: '<S631>/PressureP21'
                                        */
  real_T PressureP22_Y0;               /* Computed Parameter: PressureP22_Y0
                                        * Referenced by: '<S631>/PressureP22'
                                        */
  real_T PressureP42_Y0;               /* Computed Parameter: PressureP42_Y0
                                        * Referenced by: '<S631>/PressureP42'
                                        */
  real_T XPR1ControlStatus_Y0;         /* Computed Parameter: XPR1ControlStatus_Y0
                                        * Referenced by: '<S631>/XPR1ControlStatus'
                                        */
  real_T XPR2ControlStatus_Y0;         /* Computed Parameter: XPR2ControlStatus_Y0
                                        * Referenced by: '<S631>/XPR2ControlStatus'
                                        */
  real_T XPR3ControlStatus_Y0;         /* Computed Parameter: XPR3ControlStatus_Y0
                                        * Referenced by: '<S631>/XPR3ControlStatus'
                                        */
  real_T XPRErrorState_Y0;             /* Computed Parameter: XPRErrorState_Y0
                                        * Referenced by: '<S631>/XPRErrorState'
                                        */
  real_T XPRControlMode_Y0;            /* Computed Parameter: XPRControlMode_Y0
                                        * Referenced by: '<S631>/XPRControlMode'
                                        */
  real_T RXstatus_Y0_ef;               /* Computed Parameter: RXstatus_Y0_ef
                                        * Referenced by: '<S631>/RX status'
                                        */
  real_T RXtime_Y0_fr;                 /* Computed Parameter: RXtime_Y0_fr
                                        * Referenced by: '<S631>/RX time'
                                        */
  real_T RXdeltatime_Y0_hq;            /* Computed Parameter: RXdeltatime_Y0_hq
                                        * Referenced by: '<S631>/RX delta time'
                                        */
  real_T PitchAngleExRange_Y0;         /* Computed Parameter: PitchAngleExRange_Y0
                                        * Referenced by: '<S633>/PitchAngleExRange'
                                        */
  real_T RollAngleExRange_Y0;          /* Computed Parameter: RollAngleExRange_Y0
                                        * Referenced by: '<S633>/RollAngleExRange'
                                        */
  real_T PitchAngleExRangeCompensation_Y;/* Computed Parameter: PitchAngleExRangeCompensation_Y
                                          * Referenced by: '<S633>/PitchAngleExRangeCompensation'
                                          */
  real_T PitchAngleExRangeFigureOfMerit_;/* Computed Parameter: PitchAngleExRangeFigureOfMerit_
                                          * Referenced by: '<S633>/PitchAngleExRangeFigureOfMerit'
                                          */
  real_T RollAngleExRangeCompensation_Y0;/* Computed Parameter: RollAngleExRangeCompensation_Y0
                                          * Referenced by: '<S633>/RollAngleExRangeCompensation'
                                          */
  real_T RollAngleExRangeFigureOfMerit_Y;/* Computed Parameter: RollAngleExRangeFigureOfMerit_Y
                                          * Referenced by: '<S633>/RollAngleExRangeFigureOfMerit'
                                          */
  real_T RllAndPtchExRngMsurementLatency;/* Computed Parameter: RllAndPtchExRngMsurementLatency
                                          * Referenced by: '<S633>/RllAndPtchExRngMsurementLatency'
                                          */
  real_T RXstatus_Y0_gg;               /* Computed Parameter: RXstatus_Y0_gg
                                        * Referenced by: '<S633>/RX status'
                                        */
  real_T RXtime_Y0_hc;                 /* Computed Parameter: RXtime_Y0_hc
                                        * Referenced by: '<S633>/RX time'
                                        */
  real_T RXdeltatime_Y0_g3;            /* Computed Parameter: RXdeltatime_Y0_g3
                                        * Referenced by: '<S633>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0;        /* Computed Parameter: PX2_MapLaneNearPos_Y0
                                        * Referenced by: '<S635>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0;         /* Computed Parameter: PX2_MapLaneMidPos_Y0
                                        * Referenced by: '<S635>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0;         /* Computed Parameter: PX2_MapLaneFarPos_Y0
                                        * Referenced by: '<S635>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0;   /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0
                                        * Referenced by: '<S635>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0
                                        * Referenced by: '<S635>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0
                                        * Referenced by: '<S635>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_ar;               /* Computed Parameter: RXstatus_Y0_ar
                                        * Referenced by: '<S635>/RX status'
                                        */
  real_T RXtime_Y0_ch;                 /* Computed Parameter: RXtime_Y0_ch
                                        * Referenced by: '<S635>/RX time'
                                        */
  real_T RXdeltatime_Y0_n4;            /* Computed Parameter: RXdeltatime_Y0_n4
                                        * Referenced by: '<S635>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_e;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_e
                                        * Referenced by: '<S637>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_c;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_c
                                        * Referenced by: '<S637>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_a;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_a
                                        * Referenced by: '<S637>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_m; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_m
                                        * Referenced by: '<S637>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_l;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_l
                                        * Referenced by: '<S637>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_e;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_e
                                        * Referenced by: '<S637>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_os;               /* Computed Parameter: RXstatus_Y0_os
                                        * Referenced by: '<S637>/RX status'
                                        */
  real_T RXtime_Y0_aa;                 /* Computed Parameter: RXtime_Y0_aa
                                        * Referenced by: '<S637>/RX time'
                                        */
  real_T RXdeltatime_Y0_if;            /* Computed Parameter: RXdeltatime_Y0_if
                                        * Referenced by: '<S637>/RX delta time'
                                        */
  real_T PX2_EgoLaneNearPosErr_Y0;     /* Computed Parameter: PX2_EgoLaneNearPosErr_Y0
                                        * Referenced by: '<S639>/PX2_EgoLaneNearPosErr'
                                        */
  real_T PX2_EgoLaneMidPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneMidPosErr_Y0
                                        * Referenced by: '<S639>/PX2_EgoLaneMidPosErr'
                                        */
  real_T PX2_EgoLaneFarPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneFarPosErr_Y0
                                        * Referenced by: '<S639>/PX2_EgoLaneFarPosErr'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_k; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_k
                                        * Referenced by: '<S639>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_h;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_h
                                        * Referenced by: '<S639>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_h;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_h
                                        * Referenced by: '<S639>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_lv;               /* Computed Parameter: RXstatus_Y0_lv
                                        * Referenced by: '<S639>/RX status'
                                        */
  real_T RXtime_Y0_ge;                 /* Computed Parameter: RXtime_Y0_ge
                                        * Referenced by: '<S639>/RX time'
                                        */
  real_T RXdeltatime_Y0_ch;            /* Computed Parameter: RXdeltatime_Y0_ch
                                        * Referenced by: '<S639>/RX delta time'
                                        */
  real_T SID_Y0_a;                     /* Computed Parameter: SID_Y0_a
                                        * Referenced by: '<S641>/SID'
                                        */
  real_T Source_Y0;                    /* Computed Parameter: Source_Y0
                                        * Referenced by: '<S641>/Source'
                                        */
  real_T Date_Y0;                      /* Computed Parameter: Date_Y0
                                        * Referenced by: '<S641>/Date'
                                        */
  real_T Time_Y0;                      /* Computed Parameter: Time_Y0
                                        * Referenced by: '<S641>/Time'
                                        */
  real_T RXstatus_Y0_mlx;              /* Computed Parameter: RXstatus_Y0_mlx
                                        * Referenced by: '<S641>/RX status'
                                        */
  real_T RXtime_Y0_iq;                 /* Computed Parameter: RXtime_Y0_iq
                                        * Referenced by: '<S641>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
                                        * Referenced by: '<S641>/RX delta time'
                                        */
  real_T SPN681_TransGearShiftInhibitReq;/* Computed Parameter: SPN681_TransGearShiftInhibitReq
                                          * Referenced by: '<S643>/SPN681_TransGearShiftInhibitReq'
                                          */
  real_T SPN682_TransTrqConvLockupDisReq;/* Computed Parameter: SPN682_TransTrqConvLockupDisReq
                                          * Referenced by: '<S643>/SPN682_TransTrqConvLockupDisReq'
                                          */
  real_T SPN683_DisengageDrivelineReq_Y0;/* Computed Parameter: SPN683_DisengageDrivelineReq_Y0
                                          * Referenced by: '<S643>/SPN683_DisengageDrivelineReq'
                                          */
  real_T SPN4242_TransRevGearShiftInhibR;/* Computed Parameter: SPN4242_TransRevGearShiftInhibR
                                          * Referenced by: '<S643>/SPN4242_TransRevGearShiftInhibRq'
                                          */
  real_T SPN684_RequestedPercClutchSlip_;/* Computed Parameter: SPN684_RequestedPercClutchSlip_
                                          * Referenced by: '<S643>/SPN684_RequestedPercClutchSlip'
                                          */
  real_T SPN525_TransRequestedGear_Y0; /* Computed Parameter: SPN525_TransRequestedGear_Y0
                                        * Referenced by: '<S643>/SPN525_TransRequestedGear'
                                        */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* Computed Parameter: SPN685_DisengageDiffLockRqFrAx1
                                          * Referenced by: '<S643>/SPN685_DisengageDiffLockRqFrAx1'
                                          */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* Computed Parameter: SPN686_DisengageDiffLockRqFrAx2
                                          * Referenced by: '<S643>/SPN686_DisengageDiffLockRqFrAx2'
                                          */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* Computed Parameter: SPN687_DisengageDiffLockRqRrAx1
                                          * Referenced by: '<S643>/SPN687_DisengageDiffLockRqRrAx1'
                                          */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* Computed Parameter: SPN688_DisengageDiffLockRqRrAx2
                                          * Referenced by: '<S643>/SPN688_DisengageDiffLockRqRrAx2'
                                          */
  real_T SPN689_DisengageDiffLockRqC_Y0;/* Computed Parameter: SPN689_DisengageDiffLockRqC_Y0
                                         * Referenced by: '<S643>/SPN689_DisengageDiffLockRqC'
                                         */
  real_T SPN690_DisengageDiffLockRqCF_Y0;/* Computed Parameter: SPN690_DisengageDiffLockRqCF_Y0
                                          * Referenced by: '<S643>/SPN690_DisengageDiffLockRqCF'
                                          */
  real_T SPN691_DisengageDiffLockRqCR_Y0;/* Computed Parameter: SPN691_DisengageDiffLockRqCR_Y0
                                          * Referenced by: '<S643>/SPN691_DisengageDiffLockRqCR'
                                          */
  real_T SPN5762_TransLoadRedInhibitRq_Y;/* Computed Parameter: SPN5762_TransLoadRedInhibitRq_Y
                                          * Referenced by: '<S643>/SPN5762_TransLoadRedInhibitRq'
                                          */
  real_T SPN1852_TransmissionMode1_Y0; /* Computed Parameter: SPN1852_TransmissionMode1_Y0
                                        * Referenced by: '<S643>/SPN1852_TransmissionMode1'
                                        */
  real_T SPN1853_TransmissionMode2_Y0; /* Computed Parameter: SPN1853_TransmissionMode2_Y0
                                        * Referenced by: '<S643>/SPN1853_TransmissionMode2'
                                        */
  real_T SPN1854_TransmissionMode3_Y0; /* Computed Parameter: SPN1854_TransmissionMode3_Y0
                                        * Referenced by: '<S643>/SPN1854_TransmissionMode3'
                                        */
  real_T SPN1855_TransmissionMode4_Y0; /* Computed Parameter: SPN1855_TransmissionMode4_Y0
                                        * Referenced by: '<S643>/SPN1855_TransmissionMode4'
                                        */
  real_T SPN7695_TransAutoNeutralRequest;/* Computed Parameter: SPN7695_TransAutoNeutralRequest
                                          * Referenced by: '<S643>/SPN7695_TransAutoNeutralRequest'
                                          */
  real_T SPN4255_TransRequestedLaunchGea;/* Computed Parameter: SPN4255_TransRequestedLaunchGea
                                          * Referenced by: '<S643>/SPN4255_TransRequestedLaunchGear'
                                          */
  real_T SPN2985_TransShiftSelDispModeSw;/* Computed Parameter: SPN2985_TransShiftSelDispModeSw
                                          * Referenced by: '<S643>/SPN2985_TransShiftSelDispModeSw'
                                          */
  real_T SPN4246_TransmissionMode5_Y0; /* Computed Parameter: SPN4246_TransmissionMode5_Y0
                                        * Referenced by: '<S643>/SPN4246_TransmissionMode5'
                                        */
  real_T SPN4247_TransmissionMode6_Y0; /* Computed Parameter: SPN4247_TransmissionMode6_Y0
                                        * Referenced by: '<S643>/SPN4247_TransmissionMode6'
                                        */
  real_T SPN4248_TransmissionMode7_Y0; /* Computed Parameter: SPN4248_TransmissionMode7_Y0
                                        * Referenced by: '<S643>/SPN4248_TransmissionMode7'
                                        */
  real_T SPN4249_TransmissionMode8_Y0; /* Computed Parameter: SPN4249_TransmissionMode8_Y0
                                        * Referenced by: '<S643>/SPN4249_TransmissionMode8'
                                        */
  real_T RXstatus_Y0_er;               /* Computed Parameter: RXstatus_Y0_er
                                        * Referenced by: '<S643>/RX status'
                                        */
  real_T RXtime_Y0_nj;                 /* Computed Parameter: RXtime_Y0_nj
                                        * Referenced by: '<S643>/RX time'
                                        */
  real_T RXdeltatime_Y0_ks;            /* Computed Parameter: RXdeltatime_Y0_ks
                                        * Referenced by: '<S643>/RX delta time'
                                        */
  real_T VDCInformationSignal_Y0;      /* Computed Parameter: VDCInformationSignal_Y0
                                        * Referenced by: '<S645>/VDCInformationSignal'
                                        */
  real_T VDCFullyOperational_Y0;       /* Computed Parameter: VDCFullyOperational_Y0
                                        * Referenced by: '<S645>/VDCFullyOperational'
                                        */
  real_T VDCBrakeLightRq_Y0;           /* Computed Parameter: VDCBrakeLightRq_Y0
                                        * Referenced by: '<S645>/VDCBrakeLightRq'
                                        */
  real_T ROPEngCtrlActive_Y0;          /* Computed Parameter: ROPEngCtrlActive_Y0
                                        * Referenced by: '<S645>/ROPEngCtrlActive'
                                        */
  real_T ROPBrakeCtrlActive_Y0;        /* Computed Parameter: ROPBrakeCtrlActive_Y0
                                        * Referenced by: '<S645>/ROPBrakeCtrlActive'
                                        */
  real_T YCEngCtrlActive_Y0;           /* Computed Parameter: YCEngCtrlActive_Y0
                                        * Referenced by: '<S645>/YCEngCtrlActive'
                                        */
  real_T YCBrakeCtrlActive_Y0;         /* Computed Parameter: YCBrakeCtrlActive_Y0
                                        * Referenced by: '<S645>/YCBrakeCtrlActive'
                                        */
  real_T RXstatus_Y0_me;               /* Computed Parameter: RXstatus_Y0_me
                                        * Referenced by: '<S645>/RX status'
                                        */
  real_T RXtime_Y0_ef;                 /* Computed Parameter: RXtime_Y0_ef
                                        * Referenced by: '<S645>/RX time'
                                        */
  real_T RXdeltatime_Y0_gc;            /* Computed Parameter: RXdeltatime_Y0_gc
                                        * Referenced by: '<S645>/RX delta time'
                                        */
  real_T SteerWheelAngle_Y0;           /* Computed Parameter: SteerWheelAngle_Y0
                                        * Referenced by: '<S647>/SteerWheelAngle'
                                        */
  real_T SteerWheelTurnCounter_Y0;     /* Computed Parameter: SteerWheelTurnCounter_Y0
                                        * Referenced by: '<S647>/SteerWheelTurnCounter'
                                        */
  real_T SteerWheelAngleSensorType_Y0; /* Computed Parameter: SteerWheelAngleSensorType_Y0
                                        * Referenced by: '<S647>/SteerWheelAngleSensorType'
                                        */
  real_T YawRate_Y0;                   /* Computed Parameter: YawRate_Y0
                                        * Referenced by: '<S647>/YawRate'
                                        */
  real_T LateralAcceleration_Y0;       /* Computed Parameter: LateralAcceleration_Y0
                                        * Referenced by: '<S647>/LateralAcceleration'
                                        */
  real_T LongitudinalAcceleration_Y0;  /* Computed Parameter: LongitudinalAcceleration_Y0
                                        * Referenced by: '<S647>/LongitudinalAcceleration'
                                        */
  real_T RXstatus_Y0_dr;               /* Computed Parameter: RXstatus_Y0_dr
                                        * Referenced by: '<S647>/RX status'
                                        */
  real_T RXtime_Y0_lb;                 /* Computed Parameter: RXtime_Y0_lb
                                        * Referenced by: '<S647>/RX time'
                                        */
  real_T RXdeltatime_Y0_i5;            /* Computed Parameter: RXdeltatime_Y0_i5
                                        * Referenced by: '<S647>/RX delta time'
                                        */
  real_T NetBatteryCurrent_Y0;         /* Computed Parameter: NetBatteryCurrent_Y0
                                        * Referenced by: '<S649>/NetBatteryCurrent'
                                        */
  real_T AltCurrent_Y0;                /* Computed Parameter: AltCurrent_Y0
                                        * Referenced by: '<S649>/AltCurrent'
                                        */
  real_T ChargingSystemPotential_Y0;   /* Computed Parameter: ChargingSystemPotential_Y0
                                        * Referenced by: '<S649>/ChargingSystemPotential'
                                        */
  real_T BatteryPotential_PowerInput1_Y0;/* Computed Parameter: BatteryPotential_PowerInput1_Y0
                                          * Referenced by: '<S649>/BatteryPotential_PowerInput1'
                                          */
  real_T KeyswitchBatteryPotential_Y0; /* Computed Parameter: KeyswitchBatteryPotential_Y0
                                        * Referenced by: '<S649>/KeyswitchBatteryPotential'
                                        */
  real_T RXstatus_Y0_ln;               /* Computed Parameter: RXstatus_Y0_ln
                                        * Referenced by: '<S649>/RX status'
                                        */
  real_T RXtime_Y0_eq;                 /* Computed Parameter: RXtime_Y0_eq
                                        * Referenced by: '<S649>/RX time'
                                        */
  real_T RXdeltatime_Y0_e;             /* Computed Parameter: RXdeltatime_Y0_e
                                        * Referenced by: '<S649>/RX delta time'
                                        */
  real_T RX_time_Y0_p;                 /* Computed Parameter: RX_time_Y0_p
                                        * Referenced by: '<S653>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_jz;/* Expression: 0
                                         * Referenced by: '<S653>/Unit_Delay'
                                         */
  real_T Out_Y0_c;                     /* Computed Parameter: Out_Y0_c
                                        * Referenced by: '<S689>/Out'
                                        */
  real_T Out_Y0_g;                     /* Computed Parameter: Out_Y0_g
                                        * Referenced by: '<S690>/Out'
                                        */
  real_T Out_Y0_k;                     /* Computed Parameter: Out_Y0_k
                                        * Referenced by: '<S691>/Out'
                                        */
  real_T Out_Y0_kl;                    /* Computed Parameter: Out_Y0_kl
                                        * Referenced by: '<S692>/Out'
                                        */
  real_T Out_Y0_l;                     /* Computed Parameter: Out_Y0_l
                                        * Referenced by: '<S693>/Out'
                                        */
  real_T Constant0_Value_l;            /* Expression: 0
                                        * Referenced by: '<S750>/Constant0'
                                        */
  real_T Constant1_Value_c0;           /* Expression: 1
                                        * Referenced by: '<S750>/Constant1'
                                        */
  real_T Constant0_Value_j;            /* Expression: 0
                                        * Referenced by: '<S751>/Constant0'
                                        */
  real_T Constant1_Value_l0;           /* Expression: 1
                                        * Referenced by: '<S751>/Constant1'
                                        */
  real_T Constant0_Value_g;            /* Expression: 0
                                        * Referenced by: '<S758>/Constant0'
                                        */
  real_T Constant1_Value_lp;           /* Expression: 1
                                        * Referenced by: '<S758>/Constant1'
                                        */
  real_T Constant0_Value_lq;           /* Expression: 0
                                        * Referenced by: '<S759>/Constant0'
                                        */
  real_T Constant1_Value_mj;           /* Expression: 1
                                        * Referenced by: '<S759>/Constant1'
                                        */
  real_T Out_Y0_lv;                    /* Computed Parameter: Out_Y0_lv
                                        * Referenced by: '<S769>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ly;/* Expression: 0.0
                                          * Referenced by: '<S844>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S769>/Constant1'
                                        */
  real_T Out1_Y0_g;                    /* Computed Parameter: Out1_Y0_g
                                        * Referenced by: '<S849>/Out1'
                                        */
  real_T Constant1_Value_ja;           /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S849>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_g;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S849>/Unit_Delay'
                                        */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S872>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S872>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S872>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S872>/TX delay time'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S880>/TX status'
                                        */
  real_T TXtime_Y0_d;                  /* Computed Parameter: TXtime_Y0_d
                                        * Referenced by: '<S880>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S880>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S880>/TX delay time'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S892>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S892>/TX time'
                                        */
  real_T TXdeltatime_Y0_j;             /* Computed Parameter: TXdeltatime_Y0_j
                                        * Referenced by: '<S892>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_b;             /* Computed Parameter: TXdelaytime_Y0_b
                                        * Referenced by: '<S892>/TX delay time'
                                        */
  real_T TXstatus_Y0_d;                /* Computed Parameter: TXstatus_Y0_d
                                        * Referenced by: '<S893>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S893>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S893>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kt;            /* Computed Parameter: TXdelaytime_Y0_kt
                                        * Referenced by: '<S893>/TX delay time'
                                        */
  real_T TXstatus_Y0_n;                /* Computed Parameter: TXstatus_Y0_n
                                        * Referenced by: '<S896>/TX status'
                                        */
  real_T TXtime_Y0_fm;                 /* Computed Parameter: TXtime_Y0_fm
                                        * Referenced by: '<S896>/TX time'
                                        */
  real_T TXdeltatime_Y0_l;             /* Computed Parameter: TXdeltatime_Y0_l
                                        * Referenced by: '<S896>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S896>/TX delay time'
                                        */
  real_T TXstatus_Y0_nd;               /* Computed Parameter: TXstatus_Y0_nd
                                        * Referenced by: '<S897>/TX status'
                                        */
  real_T TXtime_Y0_m;                  /* Computed Parameter: TXtime_Y0_m
                                        * Referenced by: '<S897>/TX time'
                                        */
  real_T TXdeltatime_Y0_m;             /* Computed Parameter: TXdeltatime_Y0_m
                                        * Referenced by: '<S897>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kx;            /* Computed Parameter: TXdelaytime_Y0_kx
                                        * Referenced by: '<S897>/TX delay time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S912>/TX status'
                                        */
  real_T TXtime_Y0_e;                  /* Computed Parameter: TXtime_Y0_e
                                        * Referenced by: '<S912>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S912>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kb;            /* Computed Parameter: TXdelaytime_Y0_kb
                                        * Referenced by: '<S912>/TX delay time'
                                        */
  real_T TXstatus_Y0_a;                /* Computed Parameter: TXstatus_Y0_a
                                        * Referenced by: '<S913>/TX status'
                                        */
  real_T TXtime_Y0_c;                  /* Computed Parameter: TXtime_Y0_c
                                        * Referenced by: '<S913>/TX time'
                                        */
  real_T TXdeltatime_Y0_c;             /* Computed Parameter: TXdeltatime_Y0_c
                                        * Referenced by: '<S913>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_oz;            /* Computed Parameter: TXdelaytime_Y0_oz
                                        * Referenced by: '<S913>/TX delay time'
                                        */
  real_T TXstatus_Y0_h;                /* Computed Parameter: TXstatus_Y0_h
                                        * Referenced by: '<S915>/TX status'
                                        */
  real_T TXtime_Y0_em;                 /* Computed Parameter: TXtime_Y0_em
                                        * Referenced by: '<S915>/TX time'
                                        */
  real_T TXdeltatime_Y0_b2;            /* Computed Parameter: TXdeltatime_Y0_b2
                                        * Referenced by: '<S915>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o0;            /* Computed Parameter: TXdelaytime_Y0_o0
                                        * Referenced by: '<S915>/TX delay time'
                                        */
  real_T TXstatus_Y0_ak;               /* Computed Parameter: TXstatus_Y0_ak
                                        * Referenced by: '<S917>/TX status'
                                        */
  real_T TXtime_Y0_fd;                 /* Computed Parameter: TXtime_Y0_fd
                                        * Referenced by: '<S917>/TX time'
                                        */
  real_T TXdeltatime_Y0_bp;            /* Computed Parameter: TXdeltatime_Y0_bp
                                        * Referenced by: '<S917>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S917>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S930>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S938>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_fn;/* Expression: 0
                                         * Referenced by: '<S930>/Unit_Delay'
                                         */
  real_T Constant_Value_hy;            /* Expression: 0
                                        * Referenced by: '<S939>/Constant'
                                        */
  real_T TXstatus_Y0_g;                /* Computed Parameter: TXstatus_Y0_g
                                        * Referenced by: '<S941>/TX status'
                                        */
  real_T TXtime_Y0_dc;                 /* Computed Parameter: TXtime_Y0_dc
                                        * Referenced by: '<S941>/TX time'
                                        */
  real_T TXdeltatime_Y0_jz;            /* Computed Parameter: TXdeltatime_Y0_jz
                                        * Referenced by: '<S941>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S941>/TX delay time'
                                        */
  real_T Constant_Value_ar;            /* Expression: 0
                                        * Referenced by: '<S894>/Constant'
                                        */
  real_T Constant1_Value_gm;           /* Expression: 1
                                        * Referenced by: '<S894>/Constant1'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S895>/Constant'
                                        */
  real_T Constant1_Value_aq;           /* Expression: 1
                                        * Referenced by: '<S895>/Constant1'
                                        */
  real_T Constant_Value_p1;            /* Expression: 0
                                        * Referenced by: '<S914>/Constant'
                                        */
  real_T Constant1_Value_bp;           /* Expression: 1
                                        * Referenced by: '<S914>/Constant1'
                                        */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S954>/TX status'
                                        */
  real_T TXtime_Y0_b;                  /* Computed Parameter: TXtime_Y0_b
                                        * Referenced by: '<S954>/TX time'
                                        */
  real_T TXdeltatime_Y0_e;             /* Computed Parameter: TXdeltatime_Y0_e
                                        * Referenced by: '<S954>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_m;             /* Computed Parameter: TXdelaytime_Y0_m
                                        * Referenced by: '<S954>/TX delay time'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S963>/TX status'
                                        */
  real_T TXtime_Y0_j;                  /* Computed Parameter: TXtime_Y0_j
                                        * Referenced by: '<S963>/TX time'
                                        */
  real_T TXdeltatime_Y0_mi;            /* Computed Parameter: TXdeltatime_Y0_mi
                                        * Referenced by: '<S963>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i;             /* Computed Parameter: TXdelaytime_Y0_i
                                        * Referenced by: '<S963>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S964>/TX status'
                                        */
  real_T TXtime_Y0_cb;                 /* Computed Parameter: TXtime_Y0_cb
                                        * Referenced by: '<S964>/TX time'
                                        */
  real_T TXdeltatime_Y0_gu;            /* Computed Parameter: TXdeltatime_Y0_gu
                                        * Referenced by: '<S964>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g;             /* Computed Parameter: TXdelaytime_Y0_g
                                        * Referenced by: '<S964>/TX delay time'
                                        */
  real_T TXstatus_Y0_g4;               /* Computed Parameter: TXstatus_Y0_g4
                                        * Referenced by: '<S967>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S967>/TX time'
                                        */
  real_T TXdeltatime_Y0_ci;            /* Computed Parameter: TXdeltatime_Y0_ci
                                        * Referenced by: '<S967>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S967>/TX delay time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S968>/TX status'
                                        */
  real_T TXtime_Y0_gn;                 /* Computed Parameter: TXtime_Y0_gn
                                        * Referenced by: '<S968>/TX time'
                                        */
  real_T TXdeltatime_Y0_d;             /* Computed Parameter: TXdeltatime_Y0_d
                                        * Referenced by: '<S968>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d;             /* Computed Parameter: TXdelaytime_Y0_d
                                        * Referenced by: '<S968>/TX delay time'
                                        */
  real_T TXstatus_Y0_i5;               /* Computed Parameter: TXstatus_Y0_i5
                                        * Referenced by: '<S976>/TX status'
                                        */
  real_T TXtime_Y0_k;                  /* Computed Parameter: TXtime_Y0_k
                                        * Referenced by: '<S976>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S976>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i1;            /* Computed Parameter: TXdelaytime_Y0_i1
                                        * Referenced by: '<S976>/TX delay time'
                                        */
  real_T zero_Value_l;                 /* Expression: 0
                                        * Referenced by: '<S996>/zero'
                                        */
  real_T Constant_Value_c;             /* Expression: 8192/360
                                        * Referenced by: '<S1007>/Constant'
                                        */
  real_T Constant_Value_ea;            /* Expression: 0
                                        * Referenced by: '<S965>/Constant'
                                        */
  real_T Constant1_Value_jx;           /* Expression: 1
                                        * Referenced by: '<S965>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S1006>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S1006>/MN'
                                        */
  real_T Constant_Value_id;            /* Expression: 0
                                        * Referenced by: '<S966>/Constant'
                                        */
  real_T Constant1_Value_az;           /* Expression: 1
                                        * Referenced by: '<S966>/Constant1'
                                        */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S1021>/TX status'
                                        */
  real_T TXtime_Y0_ns;                 /* Computed Parameter: TXtime_Y0_ns
                                        * Referenced by: '<S1021>/TX time'
                                        */
  real_T TXdeltatime_Y0_j5;            /* Computed Parameter: TXdeltatime_Y0_j5
                                        * Referenced by: '<S1021>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o3;            /* Computed Parameter: TXdelaytime_Y0_o3
                                        * Referenced by: '<S1021>/TX delay time'
                                        */
  real_T TXstatus_Y0_bk;               /* Computed Parameter: TXstatus_Y0_bk
                                        * Referenced by: '<S1023>/TX status'
                                        */
  real_T TXtime_Y0_mg;                 /* Computed Parameter: TXtime_Y0_mg
                                        * Referenced by: '<S1023>/TX time'
                                        */
  real_T TXdeltatime_Y0_f;             /* Computed Parameter: TXdeltatime_Y0_f
                                        * Referenced by: '<S1023>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kc;            /* Computed Parameter: TXdelaytime_Y0_kc
                                        * Referenced by: '<S1023>/TX delay time'
                                        */
  real_T TXstatus_Y0_ip;               /* Computed Parameter: TXstatus_Y0_ip
                                        * Referenced by: '<S1031>/TX status'
                                        */
  real_T TXtime_Y0_nm;                 /* Computed Parameter: TXtime_Y0_nm
                                        * Referenced by: '<S1031>/TX time'
                                        */
  real_T TXdeltatime_Y0_c4;            /* Computed Parameter: TXdeltatime_Y0_c4
                                        * Referenced by: '<S1031>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_jm;            /* Computed Parameter: TXdelaytime_Y0_jm
                                        * Referenced by: '<S1031>/TX delay time'
                                        */
  real_T Constant4_Value_j0;           /* Expression: 0
                                        * Referenced by: '<S1017>/Constant4'
                                        */
  real_T Constant2_Value_h1;           /* Expression: -15.687
                                        * Referenced by: '<S1017>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S1017>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S1017>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S1017>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S1017>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S1017>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S857>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S1016>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 1
                                        * Referenced by: '<S1016>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0
                                        * Referenced by: '<S1016>/Saturation'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 100
                                        * Referenced by: '<S1016>/Gain'
                                        */
  real_T Gain_Gain_ez;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1033>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S1016>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S1016>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S1016>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_m;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1033>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S1017>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S1017>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_bn;               /* Computed Parameter: TXstatus_Y0_bn
                                        * Referenced by: '<S1047>/TX status'
                                        */
  real_T TXtime_Y0_dk;                 /* Computed Parameter: TXtime_Y0_dk
                                        * Referenced by: '<S1047>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S1047>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kcv;           /* Computed Parameter: TXdelaytime_Y0_kcv
                                        * Referenced by: '<S1047>/TX delay time'
                                        */
  real_T TXstatus_Y0_bkk;              /* Computed Parameter: TXstatus_Y0_bkk
                                        * Referenced by: '<S1058>/TX status'
                                        */
  real_T TXtime_Y0_mu;                 /* Computed Parameter: TXtime_Y0_mu
                                        * Referenced by: '<S1058>/TX time'
                                        */
  real_T TXdeltatime_Y0_dp;            /* Computed Parameter: TXdeltatime_Y0_dp
                                        * Referenced by: '<S1058>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_dq;            /* Computed Parameter: TXdelaytime_Y0_dq
                                        * Referenced by: '<S1058>/TX delay time'
                                        */
  real_T TXstatus_Y0_hd;               /* Computed Parameter: TXstatus_Y0_hd
                                        * Referenced by: '<S1059>/TX status'
                                        */
  real_T TXtime_Y0_bg;                 /* Computed Parameter: TXtime_Y0_bg
                                        * Referenced by: '<S1059>/TX time'
                                        */
  real_T TXdeltatime_Y0_b0;            /* Computed Parameter: TXdeltatime_Y0_b0
                                        * Referenced by: '<S1059>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kn;            /* Computed Parameter: TXdelaytime_Y0_kn
                                        * Referenced by: '<S1059>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S860>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_n2;               /* Computed Parameter: TXstatus_Y0_n2
                                        * Referenced by: '<S1066>/TX status'
                                        */
  real_T TXtime_Y0_cz;                 /* Computed Parameter: TXtime_Y0_cz
                                        * Referenced by: '<S1066>/TX time'
                                        */
  real_T TXdeltatime_Y0_no;            /* Computed Parameter: TXdeltatime_Y0_no
                                        * Referenced by: '<S1066>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_n;             /* Computed Parameter: TXdelaytime_Y0_n
                                        * Referenced by: '<S1066>/TX delay time'
                                        */
  real_T TXstatus_Y0_ck;               /* Computed Parameter: TXstatus_Y0_ck
                                        * Referenced by: '<S1067>/TX status'
                                        */
  real_T TXtime_Y0_nn;                 /* Computed Parameter: TXtime_Y0_nn
                                        * Referenced by: '<S1067>/TX time'
                                        */
  real_T TXdeltatime_Y0_ok;            /* Computed Parameter: TXdeltatime_Y0_ok
                                        * Referenced by: '<S1067>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_jt;            /* Computed Parameter: TXdelaytime_Y0_jt
                                        * Referenced by: '<S1067>/TX delay time'
                                        */
  real_T TXstatus_Y0_mp;               /* Computed Parameter: TXstatus_Y0_mp
                                        * Referenced by: '<S1071>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S1071>/TX time'
                                        */
  real_T TXdeltatime_Y0_gy;            /* Computed Parameter: TXdeltatime_Y0_gy
                                        * Referenced by: '<S1071>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h;             /* Computed Parameter: TXdelaytime_Y0_h
                                        * Referenced by: '<S1071>/TX delay time'
                                        */
  real_T UnitDelay_InitialCondition_k; /* Expression: 0
                                        * Referenced by: '<S759>/Unit Delay'
                                        */
  real_T UnitDelay_InitialCondition_o; /* Expression: 0
                                        * Referenced by: '<S758>/Unit Delay'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S762>/Constant'
                                        */
  real_T Constant3_Value_po;           /* Expression: 500
                                        * Referenced by: '<S418>/Constant3'
                                        */
  real_T Gain_Gain_jc;                 /* Expression: 0.1
                                        * Referenced by: '<S758>/Gain'
                                        */
  real_T Constant_Value_ida;           /* Expression: 0
                                        * Referenced by: '<S763>/Constant'
                                        */
  real_T Constant2_Value_e;            /* Expression: 2000
                                        * Referenced by: '<S418>/Constant2'
                                        */
  real_T Gain_Gain_nv;                 /* Expression: 0.1
                                        * Referenced by: '<S759>/Gain'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S765>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S765>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S765>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_bn;/* Expression: 0.0
                                          * Referenced by: '<S798>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_b;        /* Expression: 1
                                        * Referenced by: '<S794>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_p;        /* Expression: 1
                                        * Referenced by: '<S797>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S765>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S765>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 100
                                        * Referenced by: '<S418>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S765>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S765>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ha;/* Expression: 0.0
                                          * Referenced by: '<S790>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_i;        /* Expression: 1
                                        * Referenced by: '<S786>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_iv;       /* Expression: 1
                                        * Referenced by: '<S789>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S765>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S765>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S765>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S765>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_mh;/* Expression: 0.0
                                          * Referenced by: '<S814>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_e;        /* Expression: 1
                                        * Referenced by: '<S810>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_k;        /* Expression: 1
                                        * Referenced by: '<S813>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S765>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S765>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_os;                /* Expression: 100
                                        * Referenced by: '<S418>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S765>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S765>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_fp;/* Expression: 0.0
                                          * Referenced by: '<S806>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_c;        /* Expression: 1
                                        * Referenced by: '<S802>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_ck;       /* Expression: 1
                                        * Referenced by: '<S805>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S765>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S765>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S765>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S768>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S768>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_g;        /* Expression: Inf
                                        * Referenced by: '<S835>/Saturation'
                                        */
  real_T Saturation_LowerSat_p3;       /* Expression: 0.0001
                                        * Referenced by: '<S835>/Saturation'
                                        */
  real_T Constant1_Value_g2;           /* Expression: 1
                                        * Referenced by: '<S835>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_o;/* Expression: 0
                                         * Referenced by: '<S835>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S768>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S768>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S768>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S768>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_c;        /* Expression: Inf
                                        * Referenced by: '<S836>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0.0001
                                        * Referenced by: '<S836>/Saturation'
                                        */
  real_T Constant1_Value_d;            /* Expression: 1
                                        * Referenced by: '<S836>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_n;/* Expression: 0
                                         * Referenced by: '<S836>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S768>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S768>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S746>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCondit_k;/* Expression: 0.0
                                          * Referenced by: '<S834>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_ff;/* Expression: 0.0
                                          * Referenced by: '<S833>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S770>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S770>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S765>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S765>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_n;/* Expression: 0.0
                                          * Referenced by: '<S822>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_d;        /* Expression: 1
                                        * Referenced by: '<S818>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_i3;       /* Expression: 1
                                        * Referenced by: '<S821>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_n;/* Expression: 25
                                          * Referenced by: '<S746>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_p;/* Expression: 25
                                          * Referenced by: '<S746>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S746>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S418>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S419>/Rate Transition'
                                          */
  real_T Constant_Value_hp;            /* Expression: 1
                                        * Referenced by: '<S452>/Constant'
                                        */
  real_T Constant_Value_ny;            /* Expression: 1
                                        * Referenced by: '<S451>/Constant'
                                        */
  real_T dsa_tcpip_setup_P1_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P1_Size
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P1;           /* Expression: boardType
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P2_Size
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2;           /* Expression: boardNo
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P3_Size
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3;           /* Expression: channelNo
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P4_Size
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4;           /* Expression: localIpNum
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P5_Size
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5;           /* Expression: localSnMask
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P6_Size
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6;           /* Expression: localGateway
                                        * Referenced by: '<S401>/dsa_tcpip_setup'
                                        */
  real_T Heartbeat_Amp;                /* Expression: 1
                                        * Referenced by: '<S400>/Heartbeat'
                                        */
  real_T Heartbeat_Period;             /* Expression: 10
                                        * Referenced by: '<S400>/Heartbeat'
                                        */
  real_T Heartbeat_Duty;               /* Expression: 5
                                        * Referenced by: '<S400>/Heartbeat'
                                        */
  real_T Heartbeat_PhaseDelay;         /* Expression: 0
                                        * Referenced by: '<S400>/Heartbeat'
                                        */
  real_T TCPIP_Com_P1_Size[2];         /* Computed Parameter: TCPIP_Com_P1_Size
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P1;                 /* Expression: localPort
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2_Size[2];         /* Computed Parameter: TCPIP_Com_P2_Size
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2;                 /* Expression: remotePort
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3_Size[2];         /* Computed Parameter: TCPIP_Com_P3_Size
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3;                 /* Expression: remoteAddr
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4_Size[2];         /* Computed Parameter: TCPIP_Com_P4_Size
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4;                 /* Expression: outputSize
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5_Size[2];         /* Computed Parameter: TCPIP_Com_P5_Size
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5;                 /* Expression: inputSize
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6_Size[2];         /* Computed Parameter: TCPIP_Com_P6_Size
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6;                 /* Expression: legacyMode
                                        * Referenced by: '<S402>/TCPIP_Com'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S405>/Unit Delay'
                                        */
  real_T Switch1_Threshold;            /* Expression: 100
                                        * Referenced by: '<S405>/Switch1'
                                        */
  real_T NoData_Value;                 /* Expression: 0
                                        * Referenced by: '<S399>/No Data'
                                        */
  real_T Constant_Value_kv;            /* Expression: 0
                                        * Referenced by: '<S450>/Constant'
                                        */
  real_T Constant_Value_hb;            /* Expression: 1
                                        * Referenced by: '<S433>/Constant'
                                        */
  real_T Constant_Value_a0;            /* Expression: 1
                                        * Referenced by: '<S456>/Constant'
                                        */
  real_T Constant_Value_gf;            /* Expression: 0
                                        * Referenced by: '<S1069>/Constant'
                                        */
  real_T Constant1_Value_ep;           /* Expression: 1
                                        * Referenced by: '<S1069>/Constant1'
                                        */
  real_T TmpRTBAtANDInport1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_ju;           /* Expression: 1
                                        * Referenced by: '<S852>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1078>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_o;            /* Expression: 0.001
                                        * Referenced by: '<S852>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1078>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1078>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_ay;                /* Expression: 0.01
                                        * Referenced by: '<S852>/Gain1'
                                        */
  real_T Constant1_Value_in;           /* Expression: 1
                                        * Referenced by: '<S852>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1078>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_mc;           /* Expression: 0.001
                                        * Referenced by: '<S852>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1078>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1078>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_pv;                 /* Expression: 0.01
                                        * Referenced by: '<S852>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S418>/ShifterControlDC'
                                        */
  real_T Constant_Value_ez;            /* Expression: .4
                                        * Referenced by: '<S1079>/Constant'
                                        */
  real_T Constant1_Value_oq;           /* Expression: 0.5
                                        * Referenced by: '<S1079>/Constant1'
                                        */
  real_T Constant_Value_ge;            /* Expression: 0
                                        * Referenced by: '<S1085>/Constant'
                                        */
  real_T Constant_Value_m2;            /* Expression: 0
                                        * Referenced by: '<S1086>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1080>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1080>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1080>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1080>/Flash'
                                        */
  real_T Constant_Value_fw;            /* Expression: 0
                                        * Referenced by: '<S443>/Constant'
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
  real_T Constant_Value_it;            /* Expression: 0.125
                                        * Referenced by: '<S528>/Constant'
                                        */
  real_T Constant_Value_cm;            /* Expression: -125
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Constant_Value_am;            /* Expression: 0.125
                                        * Referenced by: '<S532>/Constant'
                                        */
  real_T Constant_Value_e1;            /* Expression: 1/1280
                                        * Referenced by: '<S533>/Constant'
                                        */
  real_T Constant_Value_nj;            /* Expression: 0.125
                                        * Referenced by: '<S536>/Constant'
                                        */
  real_T Constant_Value_a1;            /* Expression: 0.1
                                        * Referenced by: '<S537>/Constant'
                                        */
  real_T Constant_Value_ix;            /* Expression: 10
                                        * Referenced by: '<S538>/Constant'
                                        */
  real_T Constant_Value_dv;            /* Expression: 10
                                        * Referenced by: '<S539>/Constant'
                                        */
  real_T Constant_Value_c0;            /* Expression: -125
                                        * Referenced by: '<S540>/Constant'
                                        */
  real_T Constant_Value_bc;            /* Expression: -125
                                        * Referenced by: '<S541>/Constant'
                                        */
  real_T Constant_Value_gm;            /* Expression: 0.125
                                        * Referenced by: '<S542>/Constant'
                                        */
  real_T Constant_Value_f2;            /* Expression: 0.125
                                        * Referenced by: '<S550>/Constant'
                                        */
  real_T Constant_Value_mr;            /* Expression: 0.004
                                        * Referenced by: '<S543>/Constant'
                                        */
  real_T Constant_Value_lv;            /* Expression: -125
                                        * Referenced by: '<S551>/Constant'
                                        */
  real_T Constant_Value_hz;            /* Expression: 0.125
                                        * Referenced by: '<S552>/Constant'
                                        */
  real_T Constant_Value_br;            /* Expression: -125
                                        * Referenced by: '<S553>/Constant'
                                        */
  real_T Constant_Value_b4;            /* Expression: 0.125
                                        * Referenced by: '<S554>/Constant'
                                        */
  real_T Constant_Value_ht;            /* Expression: -125
                                        * Referenced by: '<S529>/Constant'
                                        */
  real_T Constant_Value_gh;            /* Expression: 0.125
                                        * Referenced by: '<S530>/Constant'
                                        */
  real_T Constant_Value_ej;            /* Expression: -125
                                        * Referenced by: '<S531>/Constant'
                                        */
  real_T Constant_Value_pd;            /* Expression: 1
                                        * Referenced by: '<S429>/Constant'
                                        */
  real_T Constant_Value_da;            /* Expression: 1
                                        * Referenced by: '<S460>/Constant'
                                        */
  real_T Constant2_Value_az;           /* Expression: 1
                                        * Referenced by: '<S417>/Constant2'
                                        */
  real_T Constant_Value_hc;            /* Expression: 1/1024
                                        * Referenced by: '<S670>/Constant'
                                        */
  real_T Constant1_Value_o0;           /* Expression: 1/1024
                                        * Referenced by: '<S671>/Constant1'
                                        */
  real_T Constant2_Value_i;            /* Expression: 360/8192
                                        * Referenced by: '<S672>/Constant2'
                                        */
  real_T Constant_Value_fo;            /* Expression: 1000
                                        * Referenced by: '<S418>/Constant'
                                        */
  real_T Constant1_Value_ef;           /* Expression: 2000
                                        * Referenced by: '<S418>/Constant1'
                                        */
  real_T UnitDelay_InitialCondition_f; /* Expression: 0
                                        * Referenced by: '<S750>/Unit Delay'
                                        */
  real_T Constant_Value_po;            /* Expression: 0
                                        * Referenced by: '<S754>/Constant'
                                        */
  real_T Gain_Gain_ge;                 /* Expression: 0.1
                                        * Referenced by: '<S750>/Gain'
                                        */
  real_T UnitDelay_InitialCondition_i; /* Expression: 0
                                        * Referenced by: '<S751>/Unit Delay'
                                        */
  real_T Constant_Value_c4;            /* Expression: 0
                                        * Referenced by: '<S755>/Constant'
                                        */
  real_T Gain_Gain_fi;                 /* Expression: 0.1
                                        * Referenced by: '<S751>/Gain'
                                        */
  real_T ShifterControlFreq_Gain;      /* Expression: 1
                                        * Referenced by: '<S418>/ShifterControlFreq'
                                        */
  real_T ShifterControlDC2_Gain;       /* Expression: 1
                                        * Referenced by: '<S418>/ShifterControlDC2'
                                        */
  real_T ShifterControlDC1_Gain;       /* Expression: 1
                                        * Referenced by: '<S418>/ShifterControlDC1'
                                        */
  ENUM_CAN_RX_T Constant_Value_cu;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S423>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_mw;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S478>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_oy;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S424>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_lx;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S487>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_eu;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S660>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant_Value_nb;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S660>/Constant'
                                        */
  ENUM_CAN_RX_T Constant2_Value_eu;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S660>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_b;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S660>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_g;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S660>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_l;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S660>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_ez;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S478>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_nb;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S478>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S478>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_l;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S478>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_pt;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S478>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_js;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S487>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S487>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S487>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_lv;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S487>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_li;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S487>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_en;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S613>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_ms;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S613>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_e0;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S613>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S613>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_lp;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S613>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S613>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_j;      /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S587>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_ns;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S587>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S587>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_nj;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S587>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_cg;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S587>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S587>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant_Value_pw;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S600>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_jt;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S600>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_n;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S600>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_o3;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S600>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_o;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S600>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_nk;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S600>/Constant4'
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
  ENUM_CAN_STATUS_DIAG_T Constant1_Value_c04;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                              * Referenced by: '<S1>/Constant1'
                                              */
  ENUM_CAN_STATUS_DIAG_T Constant3_Value_h;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant3'
                                            */
  ENUM_CAN_STATUS_DIAG_T Constant2_Value_j;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant2'
                                            */
  ENUM_CAN_TX_T Constant2_Value_njy;   /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S854>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_jr;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S854>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S855>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S856>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S856>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S856>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S857>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_pn;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S979>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_al;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S979>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_al;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                 * Referenced by: '<S979>/Constant2'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_bi;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                 * Referenced by: '<S979>/Constant3'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_a;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                * Referenced by: '<S979>/Constant4'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_e;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                * Referenced by: '<S979>/Constant5'
                                                */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S106>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S106>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S1017>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S1017>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1017>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_g;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1017>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_b;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S1017>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_p;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S1017>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_i;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S1017>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_d;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                     * Referenced by: '<S1017>/Constant10'
                                                     */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S1017>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S1017>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S1017>/XBRPriority'
                                         */
  ENUM_XPR_CONTROL_MODE_T CPV_Value_e; /* Expression: ENUM_XPR_CONTROL_MODE_T.MAXIMUM_MODE
                                        * Referenced by: '<S106>/CPV'
                                        */
  ENUM_XPR_CONTROL_MODE_T CPV2_Value_hm;/* Expression: ENUM_XPR_CONTROL_MODE_T.DRIVER_BRAKING_ONLY
                                         * Referenced by: '<S106>/CPV2'
                                         */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_128_InitialCondition;/* Computed Parameter: Unit_Delay_128_InitialCondition
                                                           * Referenced by: '<S3>/Unit_Delay'
                                                           */
  ENUM_XPR_ERROR_STATE_T CPV1_Value_i5;/* Expression: ENUM_XPR_ERROR_STATE_T.XPR_OK
                                        * Referenced by: '<S106>/CPV1'
                                        */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_129_InitialCondition;/* Computed Parameter: Unit_Delay_129_InitialCondition
                                                          * Referenced by: '<S3>/Unit_Delay'
                                                          */
  ENUM_XPR_INHIBIT_PARK_MANUAL_T PROPB_XPR_INHIBIT_PARK_MANUAL_A;/* Expression: ENUM_XPR_INHIBIT_PARK_MANUAL_T.NO_OVERRIDE
                                                                  * Referenced by: '<S855>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S855>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S855>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S855>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S979>/Merge'
                                        */
  real32_T UnitDelay_InitialCondition_c;/* Computed Parameter: UnitDelay_InitialCondition_c
                                         * Referenced by: '<S287>/Unit Delay'
                                         */
  real32_T UnitDelay_InitialCondition_e;/* Computed Parameter: UnitDelay_InitialCondition_e
                                         * Referenced by: '<S292>/Unit Delay'
                                         */
  real32_T RX_delta_time_Y0;           /* Computed Parameter: RX_delta_time_Y0
                                        * Referenced by: '<S525>/RX_delta_time'
                                        */
  real32_T RX_delta_time_Y0_k;         /* Computed Parameter: RX_delta_time_Y0_k
                                        * Referenced by: '<S653>/RX_delta_time'
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
  uint32_T UnitDelay_InitialCondition_iv;/* Computed Parameter: UnitDelay_InitialCondition_iv
                                          * Referenced by: '<S61>/Unit Delay'
                                          */
  uint32_T uD_Lookup_Table_maxIndex[2];/* Computed Parameter: uD_Lookup_Table_maxIndex
                                        * Referenced by: '<S243>/2D_Lookup_Table'
                                        */
  uint32_T uD_Lookup_Table_maxIndex_p[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_p
                                          * Referenced by: '<S244>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_a[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_a
                                          * Referenced by: '<S245>/2D_Lookup_Table'
                                          */
  uint32_T uDLookupTable_maxIndex[2];  /* Computed Parameter: uDLookupTable_maxIndex
                                        * Referenced by: '<S83>/2-D Lookup Table'
                                        */
  uint32_T uD_Lookup_Table_maxIndex_h[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_h
                                          * Referenced by: '<S85>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_e[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_e
                                          * Referenced by: '<S202>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_n[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_n
                                          * Referenced by: '<S203>/2D_Lookup_Table'
                                          */
  uint32_T uD_Lookup_Table_maxIndex_m[2];/* Computed Parameter: uD_Lookup_Table_maxIndex_m
                                          * Referenced by: '<S201>/2D_Lookup_Table'
                                          */
  uint32_T Operator_BitMask_op;        /* Expression: BitMask
                                        * Referenced by: '<S933>/Operator'
                                        */
  uint32_T Operator_BitMask_muo;       /* Expression: BitMask
                                        * Referenced by: '<S934>/Operator'
                                        */
  uint32_T Operator_BitMask_ej;        /* Expression: BitMask
                                        * Referenced by: '<S935>/Operator'
                                        */
  uint32_T Operator_BitMask_lm;        /* Expression: BitMask
                                        * Referenced by: '<S936>/Operator'
                                        */
  uint32_T Constant_Value_es;          /* Computed Parameter: Constant_Value_es
                                        * Referenced by: '<S1009>/Constant'
                                        */
  uint32_T Operator_BitMask_ia;        /* Expression: BitMask
                                        * Referenced by: '<S983>/Operator'
                                        */
  uint32_T Operator_BitMask_nh;        /* Expression: BitMask
                                        * Referenced by: '<S984>/Operator'
                                        */
  uint32_T Operator_BitMask_dz;        /* Expression: BitMask
                                        * Referenced by: '<S985>/Operator'
                                        */
  uint32_T Operator_BitMask_ge;        /* Expression: BitMask
                                        * Referenced by: '<S986>/Operator'
                                        */
  uint32_T IV_Value_f;                 /* Computed Parameter: IV_Value_f
                                        * Referenced by: '<S1009>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_fg;/* Computed Parameter: UnitDelay_InitialCondition_fg
                                          * Referenced by: '<S1009>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_n2;        /* Expression: BitMask
                                        * Referenced by: '<S987>/Operator'
                                        */
  uint32_T Operator_BitMask_j2;        /* Expression: BitMask
                                        * Referenced by: '<S988>/Operator'
                                        */
  uint32_T Operator_BitMask_ja;        /* Expression: BitMask
                                        * Referenced by: '<S989>/Operator'
                                        */
  uint32_T Operator_BitMask_mr;        /* Expression: BitMask
                                        * Referenced by: '<S990>/Operator'
                                        */
  uint32_T Constant_Value_nd;          /* Computed Parameter: Constant_Value_nd
                                        * Referenced by: '<S1037>/Constant'
                                        */
  uint32_T IV_Value_c;                 /* Computed Parameter: IV_Value_c
                                        * Referenced by: '<S1037>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_gt;/* Computed Parameter: UnitDelay_InitialCondition_gt
                                          * Referenced by: '<S1037>/Unit Delay'
                                          */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_ixr;         /* Computed Parameter: Constant_Value_ixr
                                        * Referenced by: '<S1052>/Constant'
                                        */
  uint32_T IV_Value_ku;                /* Computed Parameter: IV_Value_ku
                                        * Referenced by: '<S1052>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_kr;/* Computed Parameter: UnitDelay_InitialCondition_kr
                                          * Referenced by: '<S1052>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_nl;        /* Expression: BitMask
                                        * Referenced by: '<S1048>/Operator'
                                        */
  uint32_T Operator_BitMask_dp;        /* Expression: BitMask
                                        * Referenced by: '<S1049>/Operator'
                                        */
  uint32_T Operator_BitMask_mk;        /* Expression: BitMask
                                        * Referenced by: '<S1050>/Operator'
                                        */
  uint32_T Constant2_Value_ki;         /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S438>/Constant2'
                                        */
  uint32_T Constant2_Value_k0;         /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S461>/Constant2'
                                        */
  int16_T Constant_Value_eh;           /* Expression: int16(512)
                                        * Referenced by: '<S886>/Constant'
                                        */
  uint16_T Gain_Gain_bn;               /* Computed Parameter: Gain_Gain_bn
                                        * Referenced by: '<S97>/Gain'
                                        */
  uint16_T u000msDelay_Value;          /* Computed Parameter: u000msDelay_Value
                                        * Referenced by: '<S95>/2000ms Delay'
                                        */
  uint16_T Operator_BitMask_p2;        /* Expression: BitMask
                                        * Referenced by: '<S918>/Operator'
                                        */
  uint16_T Operator_BitMask_fb;        /* Expression: BitMask
                                        * Referenced by: '<S919>/Operator'
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
                                             * Referenced by: '<S104>/BRK_PRESS_DEM_AW_COND_INT_APV'
                                             */
  boolean_T CPV1_Value_g;              /* Expression: false
                                        * Referenced by: '<S104>/CPV1'
                                        */
  boolean_T CPV2_Value_m;              /* Expression: false
                                        * Referenced by: '<S104>/CPV2'
                                        */
  boolean_T Unit_Delay_InitialCondition_lt;/* Expression: true
                                            * Referenced by: '<S117>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition;/* Expression: true
                                          * Referenced by: '<S137>/Unit_Delay1'
                                          */
  boolean_T Unit_Delay_InitialCondition_og;/* Expression: true
                                            * Referenced by: '<S138>/Unit_Delay'
                                            */
  boolean_T Constant_Value_olo;        /* Expression: false
                                        * Referenced by: '<S137>/Constant'
                                        */
  boolean_T Constant_Value_hi;         /* Expression: false
                                        * Referenced by: '<S138>/Constant'
                                        */
  boolean_T Constant_Value_lo;         /* Expression: false
                                        * Referenced by: '<S117>/Constant'
                                        */
  boolean_T BRK_DECEL_DEM_AW_COND_INT_APV_V;/* Expression: true
                                             * Referenced by: '<S105>/BRK_DECEL_DEM_AW_COND_INT_APV'
                                             */
  boolean_T CPV1_Value_no;             /* Expression: false
                                        * Referenced by: '<S105>/CPV1'
                                        */
  boolean_T CPV2_Value_a;              /* Expression: false
                                        * Referenced by: '<S105>/CPV2'
                                        */
  boolean_T Unit_Delay_InitialCondition_jb;/* Expression: true
                                            * Referenced by: '<S155>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_p;/* Expression: true
                                            * Referenced by: '<S175>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_lq;/* Expression: true
                                            * Referenced by: '<S176>/Unit_Delay'
                                            */
  boolean_T Constant_Value_bd;         /* Expression: false
                                        * Referenced by: '<S175>/Constant'
                                        */
  boolean_T Constant_Value_m2w;        /* Expression: false
                                        * Referenced by: '<S176>/Constant'
                                        */
  boolean_T Constant_Value_j5;         /* Expression: false
                                        * Referenced by: '<S155>/Constant'
                                        */
  boolean_T F_Brake_hold_conditions_met_Y0;/* Expression: false
                                            * Referenced by: '<S185>/F_Brake_hold_conditions_met'
                                            */
  boolean_T CPV1_Value_p;              /* Expression: false
                                        * Referenced by: '<S185>/CPV1'
                                        */
  boolean_T Unit_Delay_InitialCondition_fy;/* Expression: true
                                            * Referenced by: '<S189>/Unit_Delay'
                                            */
  boolean_T Constant_Value_m3;         /* Expression: false
                                        * Referenced by: '<S189>/Constant'
                                        */
  boolean_T F_Shift_interlock_conditions_me;/* Expression: false
                                             * Referenced by: '<S186>/F_Shift_interlock_conditions_met'
                                             */
  boolean_T CPV1_Value_pl;             /* Expression: false
                                        * Referenced by: '<S186>/CPV1'
                                        */
  boolean_T Unit_Delay_InitialCondition_cl;/* Expression: true
                                            * Referenced by: '<S196>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ii;         /* Expression: false
                                        * Referenced by: '<S196>/Constant'
                                        */
  boolean_T PID_hold_i_term_f_Y0;      /* Expression: false
                                        * Referenced by: '<S214>/PID_hold_i_term_f'
                                        */
  boolean_T UseFeedForwardRoadLoad_Value;/* Expression: false
                                          * Referenced by: '<S221>/UseFeedForwardRoadLoad'
                                          */
  boolean_T Constant1_Value_g1;        /* Expression: false
                                        * Referenced by: '<S222>/Constant1'
                                        */
  boolean_T Constant3_Value_lp;        /* Expression: false
                                        * Referenced by: '<S222>/Constant3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_o;/* Expression: true
                                            * Referenced by: '<S222>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_b2;/* Computed Parameter: Unit_Delay_InitialCondition_b2
                                            * Referenced by: '<S222>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_lj;/* Expression: true
                                            * Referenced by: '<S249>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_a;/* Expression: true
                                            * Referenced by: '<S269>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_bm;/* Expression: true
                                            * Referenced by: '<S270>/Unit_Delay'
                                            */
  boolean_T GpidAwCondIntegration_Value;/* Expression: true
                                         * Referenced by: '<S214>/GpidAwCondIntegration'
                                         */
  boolean_T Constant_Value_ot;         /* Expression: false
                                        * Referenced by: '<S269>/Constant'
                                        */
  boolean_T Constant_Value_h0;         /* Expression: false
                                        * Referenced by: '<S270>/Constant'
                                        */
  boolean_T Constant_Value_ck;         /* Expression: false
                                        * Referenced by: '<S249>/Constant'
                                        */
  boolean_T E_Value_j;                 /* Expression: true
                                        * Referenced by: '<S287>/E'
                                        */
  boolean_T E_Value_ct;                /* Expression: true
                                        * Referenced by: '<S292>/E'
                                        */
  boolean_T F_Out_slewing_Y0;          /* Expression: false
                                        * Referenced by: '<S336>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ls;/* Expression: true
                                            * Referenced by: '<S338>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_i0;/* Expression: true
                                            * Referenced by: '<S339>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ld;/* Expression: false
                                            * Referenced by: '<S337>/Unit_Delay'
                                            */
  boolean_T Constant_Value_hg;         /* Expression: false
                                        * Referenced by: '<S339>/Constant'
                                        */
  boolean_T Constant_Value_ll;         /* Computed Parameter: Constant_Value_ll
                                        * Referenced by: '<S103>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_jn;/* Computed Parameter: Unit_Delay_InitialCondition_jn
                                            * Referenced by: '<S76>/Unit_Delay'
                                            */
  boolean_T Constant_Value_io;         /* Computed Parameter: Constant_Value_io
                                        * Referenced by: '<S100>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_b;/* Computed Parameter: UnitDelay_InitialCondition_b
                                          * Referenced by: '<S97>/Unit Delay'
                                          */
  boolean_T APTC_PEDAL_POSITION_OVR_APV_Val;/* Expression: false
                                             * Referenced by: '<S83>/APTC_PEDAL_POSITION_OVR_APV'
                                             */
  boolean_T Unit_Delay_InitialCondition_b1;/* Expression: true
                                            * Referenced by: '<S391>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gz;/* Expression: true
                                            * Referenced by: '<S392>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_a;/* Expression: true
                                           * Referenced by: '<S380>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_gt;/* Expression: true
                                            * Referenced by: '<S381>/Unit_Delay'
                                            */
  boolean_T CPV_Value_a;               /* Expression: false
                                        * Referenced by: '<S358>/CPV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ml;/* Expression: false
                                            * Referenced by: '<S364>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ag;/* Expression: true
                                            * Referenced by: '<S353>/Unit_Delay'
                                            */
  boolean_T Constant7_Value_j;         /* Expression: false
                                        * Referenced by: '<S109>/Constant7'
                                        */
  boolean_T Unit_Delay_InitialCondition_ip;/* Expression: true
                                            * Referenced by: '<S109>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_f;/* Expression: true
                                            * Referenced by: '<S205>/Unit_Delay1'
                                            */
  boolean_T Constant_Value_jf;         /* Expression: false
                                        * Referenced by: '<S205>/Constant'
                                        */
  boolean_T Constant_Value_cp;         /* Expression: false
                                        * Referenced by: '<S79>/Constant'
                                        */
  boolean_T Constant_Value_jg4;        /* Expression: false
                                        * Referenced by: '<S210>/Constant'
                                        */
  boolean_T R_Value;                   /* Expression: false
                                        * Referenced by: '<S287>/R'
                                        */
  boolean_T zero_Value_g;              /* Expression: boolean(0)
                                        * Referenced by: '<S284>/zero'
                                        */
  boolean_T Unit_Delay1_InitialCondition_m;/* Expression: true
                                            * Referenced by: '<S329>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ps;/* Expression: true
                                             * Referenced by: '<S330>/Unit_Delay1'
                                             */
  boolean_T zero3_Value;               /* Expression: boolean(0)
                                        * Referenced by: '<S284>/zero3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_j;/* Expression: true
                                            * Referenced by: '<S331>/Unit_Delay1'
                                            */
  boolean_T Constant8_Value_l;         /* Expression: boolean(0)
                                        * Referenced by: '<S281>/Constant8'
                                        */
  boolean_T Constant_Value_hx;         /* Expression: false
                                        * Referenced by: '<S329>/Constant'
                                        */
  boolean_T Constant_Value_bh;         /* Expression: false
                                        * Referenced by: '<S330>/Constant'
                                        */
  boolean_T Constant_Value_hxo;        /* Expression: false
                                        * Referenced by: '<S331>/Constant'
                                        */
  boolean_T Constant_Value_pu;         /* Expression: false
                                        * Referenced by: '<S353>/Constant'
                                        */
  boolean_T Constant_Value_am4;        /* Expression: false
                                        * Referenced by: '<S381>/Constant'
                                        */
  boolean_T Constant_Value_c1;         /* Expression: false
                                        * Referenced by: '<S392>/Constant'
                                        */
  boolean_T Constant3_Value_f;         /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S405>/Constant3'
                                        */
  boolean_T Constant2_Value_eu2;       /* Computed Parameter: Constant2_Value_eu2
                                        * Referenced by: '<S405>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S522>/RX_status'
                                        */
  boolean_T RX_status_Y0_n;            /* Computed Parameter: RX_status_Y0_n
                                        * Referenced by: '<S650>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_e;        /* Expression: false
                                        * Referenced by: '<S769>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ks;/* Expression: true
                                            * Referenced by: '<S840>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_n;/* Expression: true
                                           * Referenced by: '<S841>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_g2;/* Expression: false
                                            * Referenced by: '<S839>/Unit_Delay'
                                            */
  boolean_T Constant_Value_os;         /* Expression: false
                                        * Referenced by: '<S841>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S747>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S927>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S927>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S855>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S881>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S855>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S855>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_o;                 /* Expression: true
                                        * Referenced by: '<S1009>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_f0;/* Computed Parameter: Unit_Delay_InitialCondition_f0
                                            * Referenced by: '<S1008>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_o;  /* Expression: boolean(0)
                                        * Referenced by: '<S977>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_c;          /* Expression: boolean(0)
                                        * Referenced by: '<S977>/DataPage'
                                        */
  boolean_T E_Value_f;                 /* Expression: true
                                        * Referenced by: '<S1037>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S1017>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_op;/* Expression: false
                                            * Referenced by: '<S1013>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S1016>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_a4;/* Computed Parameter: Unit_Delay_InitialCondition_a4
                                            * Referenced by: '<S1036>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_og; /* Expression: boolean(0)
                                        * Referenced by: '<S1032>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_n;          /* Expression: boolean(0)
                                        * Referenced by: '<S1032>/DataPage'
                                        */
  boolean_T CPV_Value_h0;              /* Expression: true
                                        * Referenced by: '<S1016>/CPV'
                                        */
  boolean_T E_Value_k;                 /* Expression: true
                                        * Referenced by: '<S1052>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S1042>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_px;/* Computed Parameter: Unit_Delay_InitialCondition_px
                                            * Referenced by: '<S1051>/Unit_Delay'
                                            */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1057>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_o0s;        /* Expression: boolean(1)
                                        * Referenced by: '<S427>/Constant'
                                        */
  boolean_T Constant_Value_cn;         /* Expression: boolean(1)
                                        * Referenced by: '<S428>/Constant'
                                        */
  boolean_T Constant_Value_l4;         /* Computed Parameter: Constant_Value_l4
                                        * Referenced by: '<S761>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_h4;/* Computed Parameter: UnitDelay_InitialCondition_h4
                                           * Referenced by: '<S745>/Unit Delay'
                                           */
  boolean_T Constant_Value_fe;         /* Computed Parameter: Constant_Value_fe
                                        * Referenced by: '<S760>/Constant'
                                        */
  boolean_T UnitDelay1_InitialCondition_pp;/* Computed Parameter: UnitDelay1_InitialCondition_pp
                                            * Referenced by: '<S758>/Unit Delay1'
                                            */
  boolean_T UnitDelay1_InitialCondition_h;/* Computed Parameter: UnitDelay1_InitialCondition_h
                                           * Referenced by: '<S759>/Unit Delay1'
                                           */
  boolean_T Unit_Delay_InitialCondition_kk;/* Expression: true
                                            * Referenced by: '<S768>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_oj;/* Expression: true
                                             * Referenced by: '<S835>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_d;/* Expression: true
                                            * Referenced by: '<S768>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_n;/* Expression: true
                                            * Referenced by: '<S836>/Unit_Delay1'
                                            */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S746>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_oi;         /* Expression: boolean(1)
                                        * Referenced by: '<S432>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S437>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S444>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_av;        /* Expression: boolean(1)
                                        * Referenced by: '<S436>/Constant1'
                                        */
  boolean_T Enable_RX_ETC2_03_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S442>/Enable_RX_ETC2_03'
                                        */
  boolean_T Enable_RX_EEC1_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S439>/Enable_RX_EEC1_00'
                                        */
  boolean_T Enable_RX_EEC3_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S441>/Enable_RX_EEC3_00'
                                        */
  boolean_T Constant_Value_p1x;        /* Expression: boolean(1)
                                        * Referenced by: '<S434>/Constant'
                                        */
  boolean_T Constant_Value_fr;         /* Expression: boolean(1)
                                        * Referenced by: '<S425>/Constant'
                                        */
  boolean_T Constant_Value_hw;         /* Expression: boolean(1)
                                        * Referenced by: '<S458>/Constant'
                                        */
  boolean_T Constant_Value_d4;         /* Expression: boolean(1)
                                        * Referenced by: '<S459>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S651>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_bw;/* Expression: true
                                            * Referenced by: '<S651>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ka;/* Expression: false
                                            * Referenced by: '<S657>/Unit_Delay'
                                            */
  boolean_T Constant_Value_h2;         /* Expression: boolean(0)
                                        * Referenced by: '<S449>/Constant'
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
                                        * Referenced by: '<S408>/Constant'
                                        */
  boolean_T useGPSSA00_Value;          /* Expression: boolean(1)
                                        * Referenced by: '<S468>/useGPSSA00'
                                        */
  boolean_T useGPSSA0_Value;           /* Expression: boolean(0)
                                        * Referenced by: '<S468>/useGPSSA0'
                                        */
  boolean_T Constant_Value_dp;         /* Expression: boolean(1)
                                        * Referenced by: '<S431>/Constant'
                                        */
  boolean_T Constant_Value_eb;         /* Expression: boolean(1)
                                        * Referenced by: '<S457>/Constant'
                                        */
  boolean_T Constant_Value_de;         /* Computed Parameter: Constant_Value_de
                                        * Referenced by: '<S1068>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S861>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S861>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1079>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_ha;        /* Expression: false
                                        * Referenced by: '<S1079>/Constant2'
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
  boolean_T Constant_Value_ku;         /* Expression: boolean(1)
                                        * Referenced by: '<S426>/Constant'
                                        */
  boolean_T Constant_Value_esw;        /* Expression: boolean(0)
                                        * Referenced by: '<S430>/Constant'
                                        */
  boolean_T Constant1_Value_ls;        /* Expression: boolean(1)
                                        * Referenced by: '<S435>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S440>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S453>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_n;/* Expression: boolean(0)
                                             * Referenced by: '<S454>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_o1;         /* Expression: boolean(0)
                                        * Referenced by: '<S455>/Constant'
                                        */
  boolean_T Constant_Value_il3;        /* Expression: false
                                        * Referenced by: '<S651>/Constant'
                                        */
  boolean_T Constant1_Value_fd;        /* Expression: false
                                        * Referenced by: '<S651>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_e;/* Expression: true
                                            * Referenced by: '<S651>/Unit_Delay2'
                                            */
  boolean_T Unit_Delay1_InitialCondition_m4;/* Expression: true
                                             * Referenced by: '<S651>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay_InitialCondition_p3;/* Expression: false
                                            * Referenced by: '<S658>/Unit_Delay'
                                            */
  boolean_T Constant_Value_ox;         /* Computed Parameter: Constant_Value_ox
                                        * Referenced by: '<S753>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_cx;/* Computed Parameter: UnitDelay_InitialCondition_cx
                                           * Referenced by: '<S744>/Unit Delay'
                                           */
  boolean_T Constant_Value_hf;         /* Computed Parameter: Constant_Value_hf
                                        * Referenced by: '<S752>/Constant'
                                        */
  boolean_T UnitDelay1_InitialCondition_k;/* Computed Parameter: UnitDelay1_InitialCondition_k
                                           * Referenced by: '<S750>/Unit Delay1'
                                           */
  boolean_T UnitDelay1_InitialCondition_g;/* Computed Parameter: UnitDelay1_InitialCondition_g
                                           * Referenced by: '<S751>/Unit Delay1'
                                           */
  boolean_T Constant_Value_la;         /* Expression: false
                                        * Referenced by: '<S768>/Constant'
                                        */
  boolean_T Constant_Value_ari;        /* Expression: false
                                        * Referenced by: '<S835>/Constant'
                                        */
  boolean_T Constant1_Value_ng;        /* Expression: false
                                        * Referenced by: '<S768>/Constant1'
                                        */
  boolean_T Constant_Value_oz;         /* Expression: false
                                        * Referenced by: '<S836>/Constant'
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
                                        * Referenced by: '<S399>/for_logging7'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S142>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_f;       /* Computed Parameter: FixPtConstant_Value_f
                                        * Referenced by: '<S142>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_p;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_p
                                           * Referenced by: '<S180>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_j;       /* Computed Parameter: FixPtConstant_Value_j
                                        * Referenced by: '<S180>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_e;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_e
                                           * Referenced by: '<S193>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_a;       /* Computed Parameter: FixPtConstant_Value_a
                                        * Referenced by: '<S193>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_f;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_f
                                           * Referenced by: '<S200>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_kr;      /* Computed Parameter: FixPtConstant_Value_kr
                                        * Referenced by: '<S200>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_a;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_a
                                           * Referenced by: '<S274>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_jk;      /* Computed Parameter: FixPtConstant_Value_jk
                                        * Referenced by: '<S274>/FixPt Constant'
                                        */
  uint8_T SteeringControlSRC_Value;    /* Expression: uint8(3)
                                        * Referenced by: '<S80>/SteeringControlSRC'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_c;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_c
                                           * Referenced by: '<S342>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_n;       /* Computed Parameter: FixPtConstant_Value_n
                                        * Referenced by: '<S342>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondi_f5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_f5
                                           * Referenced by: '<S396>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_po;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_po
                                           * Referenced by: '<S385>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_i;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                           * Referenced by: '<S373>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ck;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ck
                                           * Referenced by: '<S357>/FixPt Unit Delay2'
                                           */
  uint8_T Constant_Value_mg;           /* Expression: uint8(3)
                                        * Referenced by: '<S285>/Constant'
                                        */
  uint8_T Constant1_Value_lsu;         /* Expression: uint8(5)
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint8_T FixPtConstant_Value_az;      /* Computed Parameter: FixPtConstant_Value_az
                                        * Referenced by: '<S357>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_g;       /* Computed Parameter: FixPtConstant_Value_g
                                        * Referenced by: '<S373>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_g;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_g
                                           * Referenced by: '<S375>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pz;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pz
                                           * Referenced by: '<S376>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_el;      /* Computed Parameter: FixPtConstant_Value_el
                                        * Referenced by: '<S376>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_p2;      /* Computed Parameter: FixPtConstant_Value_p2
                                        * Referenced by: '<S375>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_dx;      /* Computed Parameter: FixPtConstant_Value_dx
                                        * Referenced by: '<S385>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jx;      /* Computed Parameter: FixPtConstant_Value_jx
                                        * Referenced by: '<S396>/FixPt Constant'
                                        */
  uint8_T Failure_Value_k;             /* Computed Parameter: Failure_Value_k
                                        * Referenced by: '<S399>/Failure'
                                        */
  uint8_T RawData_Y0;                  /* Computed Parameter: RawData_Y0
                                        * Referenced by: '<S525>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_co[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                             * Referenced by: '<S522>/Unit Delay'
                                             */
  uint8_T RawData_Y0_b;                /* Computed Parameter: RawData_Y0_b
                                        * Referenced by: '<S653>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_lh[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                             * Referenced by: '<S650>/Unit Delay'
                                             */
  uint8_T FixPtUnitDelay2_InitialCondit_j;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_j
                                           * Referenced by: '<S844>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_dj;      /* Computed Parameter: FixPtConstant_Value_dj
                                        * Referenced by: '<S844>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_ju1;         /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S888>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S927>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S927>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S927>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S927>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_mw;         /* Expression: BitMask
                                        * Referenced by: '<S932>/Operator'
                                        */
  uint8_T Operator_BitMask_cl;         /* Expression: BitMask
                                        * Referenced by: '<S931>/Operator'
                                        */
  uint8_T Constant_Value_m4;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S887>/Constant'
                                        */
  uint8_T Constant1_Value_ov;          /* Expression: uint8(0)
                                        * Referenced by: '<S980>/Constant1'
                                        */
  uint8_T Constant_Value_p4;           /* Expression: uint8(1)
                                        * Referenced by: '<S980>/Constant'
                                        */
  uint8_T Constant_Value_gz;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S978>/Constant'
                                        */
  uint8_T Constant1_Value_ox;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S978>/Constant1'
                                        */
  uint8_T Operator_BitMask_ai;         /* Expression: BitMask
                                        * Referenced by: '<S991>/Operator'
                                        */
  uint8_T Priority_Value_c;            /* Expression: uint8(6)
                                        * Referenced by: '<S977>/Priority'
                                        */
  uint8_T PDUFormat_Value_c;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S977>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_e;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S977>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_j;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S977>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_lw;         /* Expression: BitMask
                                        * Referenced by: '<S992>/Operator'
                                        */
  uint8_T Constant2_Value_jl;          /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S1033>/Constant2'
                                        */
  uint8_T Constant3_Value_ok;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1033>/Constant3'
                                        */
  uint8_T Constant4_Value_j4;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1033>/Constant4'
                                        */
  uint8_T Constant_Value_hqd;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1033>/Constant'
                                        */
  uint8_T Constant1_Value_cg;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1033>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_b;            /* Expression: uint8(3)
                                        * Referenced by: '<S1032>/Priority'
                                        */
  uint8_T PDUFormat_Value_h;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1032>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_c;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S1032>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_j2;      /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S1032>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1033>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1063>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1063>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1063>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1063>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1063>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1063>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1063>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1063>/Byte1'
                                        */
  uint8_T Byte8_Value_m;               /* Expression: uint8('N')
                                        * Referenced by: '<S1062>/Byte8'
                                        */
  uint8_T Byte7_Value_o;               /* Expression: uint8('R')
                                        * Referenced by: '<S1062>/Byte7'
                                        */
  uint8_T Byte6_Value_m;               /* Expression: uint8('*')
                                        * Referenced by: '<S1062>/Byte6'
                                        */
  uint8_T Byte5_Value_b;               /* Expression: uint8('R')
                                        * Referenced by: '<S1062>/Byte5'
                                        */
  uint8_T Byte4_Value_o;               /* Expression: uint8('A')
                                        * Referenced by: '<S1062>/Byte4'
                                        */
  uint8_T Byte3_Value_g;               /* Expression: uint8('C')
                                        * Referenced by: '<S1062>/Byte3'
                                        */
  uint8_T Byte2_Value_m;               /* Expression: uint8('P')
                                        * Referenced by: '<S1062>/Byte2'
                                        */
  uint8_T Byte1_Value_n;               /* Computed Parameter: Byte1_Value_n
                                        * Referenced by: '<S1062>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondi_cq;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_cq
                                           * Referenced by: '<S798>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ge;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ge
                                           * Referenced by: '<S790>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_af;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_af
                                           * Referenced by: '<S814>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_iq;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_iq
                                           * Referenced by: '<S806>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_p4;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_p4
                                           * Referenced by: '<S834>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_jr;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_jr
                                           * Referenced by: '<S833>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_k;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_k
                                           * Referenced by: '<S822>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_eq;          /* Expression: uint8(32)
                                        * Referenced by: '<S471>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S651>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_df;           /* Computed Parameter: Constant_Value_df
                                        * Referenced by: '<S655>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Supervisor_Autonomous_Mode_Valu;/* Computed Parameter: Supervisor_Autonomous_Mode_Valu
                                           * Referenced by: '<S399>/Supervisor_Autonomous_Mode'
                                           */
  uint8_T Byte1_Value_g;               /* Computed Parameter: Byte1_Value_g
                                        * Referenced by: '<S1060>/Byte1'
                                        */
  uint8_T Byte2_Value_l;               /* Computed Parameter: Byte2_Value_l
                                        * Referenced by: '<S1060>/Byte2'
                                        */
  uint8_T Byte3_Value_l;               /* Computed Parameter: Byte3_Value_l
                                        * Referenced by: '<S1060>/Byte3'
                                        */
  uint8_T Byte4_Value_e;               /* Computed Parameter: Byte4_Value_e
                                        * Referenced by: '<S1060>/Byte4'
                                        */
  uint8_T Byte5_Value_e;               /* Computed Parameter: Byte5_Value_e
                                        * Referenced by: '<S1060>/Byte5'
                                        */
  uint8_T Byte6_Value_i;               /* Computed Parameter: Byte6_Value_i
                                        * Referenced by: '<S1060>/Byte6'
                                        */
  uint8_T Byte7_Value_j;               /* Computed Parameter: Byte7_Value_j
                                        * Referenced by: '<S1060>/Byte7'
                                        */
  uint8_T Byte8_Value_e;               /* Computed Parameter: Byte8_Value_e
                                        * Referenced by: '<S1060>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_l;/* Computed Parameter: UnitDelay1_InitialCondition_l
                                         * Referenced by: '<S861>/Unit Delay1'
                                         */
  uint8_T Constant1_Value_gm2;         /* Computed Parameter: Constant1_Value_gm2
                                        * Referenced by: '<S861>/Constant1'
                                        */
  uint8_T Constant2_Value_gq;          /* Computed Parameter: Constant2_Value_gq
                                        * Referenced by: '<S1080>/Constant2'
                                        */
  uint8_T Constant3_Value_fb;          /* Computed Parameter: Constant3_Value_fb
                                        * Referenced by: '<S1080>/Constant3'
                                        */
  uint8_T Unit_Delay_138_InitialCondition;/* Computed Parameter: Unit_Delay_138_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S651>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_ac;           /* Computed Parameter: Constant_Value_ac
                                        * Referenced by: '<S656>/Constant'
                                        */
  uint8_T Constant_Value_k5;           /* Expression: uint8(16)
                                        * Referenced by: '<S471>/Constant'
                                        */
  uint8_T Constant1_Value_oh;          /* Expression: uint8(17)
                                        * Referenced by: '<S471>/Constant1'
                                        */
  uint8_T Constant2_Value_njc;         /* Expression: uint8(19)
                                        * Referenced by: '<S471>/Constant2'
                                        */
  uint8_T Constant4_Value_kp;          /* Expression: uint8(255)
                                        * Referenced by: '<S471>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_c2;      /* Computed Parameter: FixPtConstant_Value_c2
                                        * Referenced by: '<S790>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_l;       /* Computed Parameter: FixPtConstant_Value_l
                                        * Referenced by: '<S798>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_e4;      /* Computed Parameter: FixPtConstant_Value_e4
                                        * Referenced by: '<S806>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_po;      /* Computed Parameter: FixPtConstant_Value_po
                                        * Referenced by: '<S814>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_n5;      /* Computed Parameter: FixPtConstant_Value_n5
                                        * Referenced by: '<S822>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_pe;      /* Computed Parameter: FixPtConstant_Value_pe
                                        * Referenced by: '<S833>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_gs;      /* Computed Parameter: FixPtConstant_Value_gs
                                        * Referenced by: '<S834>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S979>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S979>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S979>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S979>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S979>/ALL_CTRL_DISABLED' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S246>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S246>/Calculate_D_term' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S152>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S152>/Calculate_D_term' */
  P_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S114>/Calculate_I_term' */
  P_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S114>/Calculate_D_term' */
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
extern real_T GLB_Absolute_Timestamp;  /* '<S419>/Rate Transition' */
extern real_T ReAX_ActualHandwheelPos; /* '<S445>/Switch' */
extern real_T EthernetLinkStatus;      /* '<S401>/dsa_tcpip_setup' */
extern real_T CurrentAzimuth_rad;      /* '<S399>/Switch' */
extern real_T TargetAzimuth_rad;       /* '<S399>/Switch1' */
extern real_T TargetVelocity_kph;      /* '<S399>/Switch3' */
extern real_T Curvature;               /* '<S399>/Switch4' */
extern real_T CrosstrackError;         /* '<S399>/Switch5' */
extern real_T CurrentVelocity_kph;     /* '<S399>/Switch2' */
extern real_T GPS_X;                   /* '<S399>/Switch6' */
extern real_T GPS_Y;                   /* '<S399>/Switch7' */
extern real_T GPS_Time;                /* '<S399>/Switch8' */
extern real_T ReAX_EchoedSteerWheelPos;/* '<S445>/Switch' */
extern real_T SteerWheelAngle;         /* '<S647>/S-Function1' */
extern real_T YawRate;                 /* '<S647>/S-Function1' */
extern real_T SPN1810_LongitudinalAcceleration;/* '<S647>/S-Function1' */
extern real_T WheelBasedVehicleSpeed;  /* '<S508>/S-Function1' */
extern real_T BrakeSwitch;             /* '<S508>/S-Function1' */
extern real_T Lateral_Control_Rate_Limit;/* '<S312>/Constant' */
extern real_T Lateral_Control_Output;  /* '<S283>/Sum1' */
extern real_T Lateral_Control_Rate_Limiter_Output;/* '<S312>/If_Then_Else' */
extern real_T SteerCommandDeg;         /* '<S80>/sign flip' */
extern real_T DesiredSteeringAngle;    /* '<S80>/sign2' */
extern real_T Lateral_Control_Heading_Error;/* '<S283>/Error Calc' */
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
extern real32_T REAX_Handwheel_Torque; /* '<S421>/Data Type Conversion3' */
extern real32_T REAX_Handwheel_Velocity;/* '<S421>/Data Type Conversion4' */
extern real32_T REAX_Pull_Compensation;/* '<S421>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN1_Status;/* '<S1>/Data Type Conversion' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN5_Status;/* '<S1>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN6_Status;/* '<S1>/Data Type Conversion4' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN3_Status;/* '<S1>/Data Type Conversion3' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN4_Status;/* '<S1>/Data Type Conversion2' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN2_Status;/* '<S1>/Data Type Conversion1' */
extern uint8_T SupervisorMode;         /* '<S399>/Switch9' */
extern uint8_T REAX_Current_Mode;      /* '<S421>/Data Type Conversion' */
extern uint8_T REAX_Req_Mode;          /* '<S421>/Data Type Conversion1' */
extern uint8_T REAX_Status;            /* '<S421>/Data Type Conversion2' */
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1093>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S418>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S747>/Switch' */
extern boolean_T EngagePB;             /* '<S745>/AND2' */
extern boolean_T BrakeSW;              /* '<S418>/Logical Operator3' */
extern boolean_T MABX_Heartbeat;       /* '<S400>/Cast To Boolean' */
extern boolean_T Heartbeat_Ok;         /* '<S405>/Switch1' */
extern boolean_T RTMapsOk;             /* '<S399>/AND' */
extern boolean_T LogEventPB;           /* '<S744>/AND2' */
extern boolean_T EngageReq;            /* '<S96>/AND' */
extern boolean_T AutonomousEnabled;    /* '<S76>/AND' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T RateLimiterActive;    /* '<S321>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S767>/Switch' */

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
                                        * Referenced by: '<S151>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_KI_DATA_MPV[8];  /* Variable: BRK_DEM_KI_DATA_MPV
                                        * Referenced by: '<S150>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_KP_DATA_MPV[8];  /* Variable: BRK_DEM_KP_DATA_MPV
                                        * Referenced by: '<S149>/1D_Lookup_Table'
                                        */
extern real_T BRK_DEM_MASS_STEP_MPV[8];/* Variable: BRK_DEM_MASS_STEP_MPV
                                        * Referenced by:
                                        *   '<S149>/1D_Lookup_Table'
                                        *   '<S150>/1D_Lookup_Table'
                                        *   '<S151>/1D_Lookup_Table'
                                        */
extern real_T BRK_GOV_FF_DECEL_RATE_DATA_MPV[32];/* Variable: BRK_GOV_FF_DECEL_RATE_DATA_MPV
                                                  * Referenced by: '<S201>/2D_Lookup_Table'
                                                  */
extern real_T BRK_GOV_FF_DECEL_RATE_STEP_MPV[16];/* Variable: BRK_GOV_FF_DECEL_RATE_STEP_MPV
                                                  * Referenced by:
                                                  *   '<S202>/2D_Lookup_Table'
                                                  *   '<S203>/2D_Lookup_Table'
                                                  */
extern real_T BRK_GOV_FF_MASS_STEP_MPV[2];/* Variable: BRK_GOV_FF_MASS_STEP_MPV
                                           * Referenced by:
                                           *   '<S201>/2D_Lookup_Table'
                                           *   '<S202>/2D_Lookup_Table'
                                           *   '<S203>/2D_Lookup_Table'
                                           */
extern real_T BRK_GOV_FF_PRESS_KPA_DATA_MPV[32];/* Variable: BRK_GOV_FF_PRESS_KPA_DATA_MPV
                                                 * Referenced by:
                                                 *   '<S202>/2D_Lookup_Table'
                                                 *   '<S203>/2D_Lookup_Table'
                                                 */
extern real_T BRK_GOV_FF_PRESS_KPA_STEP_MPV[16];/* Variable: BRK_GOV_FF_PRESS_KPA_STEP_MPV
                                                 * Referenced by: '<S201>/2D_Lookup_Table'
                                                 */
extern real_T Curvature_FF_Gain;       /* Variable: Curvature_FF_Gain
                                        * Referenced by: '<S283>/FeedforwardGain'
                                        */
extern real_T DISTANCE_M;              /* Variable: DISTANCE_M
                                        * Referenced by: '<S81>/DISTANCE_M'
                                        */
extern real_T Lateral_Control_Curvature_Limit;/* Variable: Lateral_Control_Curvature_Limit
                                               * Referenced by:
                                               *   '<S283>/Constant3'
                                               *   '<S283>/Constant5'
                                               */
extern real_T Lateral_Control_D;       /* Variable: Lateral_Control_D
                                        * Referenced by: '<S309>/Derivative Gain'
                                        */
extern real_T Lateral_Control_Error_Limit;/* Variable: Lateral_Control_Error_Limit
                                           * Referenced by:
                                           *   '<S283>/Constant'
                                           *   '<S283>/Constant1'
                                           */
extern real_T Lateral_Control_Error_Rate_Limit;/* Variable: Lateral_Control_Error_Rate_Limit
                                                * Referenced by:
                                                *   '<S283>/Constant10'
                                                *   '<S283>/Constant7'
                                                *   '<S283>/Constant8'
                                                *   '<S283>/Constant9'
                                                */
extern real_T Lateral_Control_I;       /* Variable: Lateral_Control_I
                                        * Referenced by: '<S309>/Integral Gain'
                                        */
extern real_T Lateral_Control_P;       /* Variable: Lateral_Control_P
                                        * Referenced by:
                                        *   '<S283>/PGain'
                                        *   '<S309>/Proportional Gain'
                                        */
extern real_T Lateral_Control_Pole;    /* Variable: Lateral_Control_Pole
                                        * Referenced by: '<S313>/GainPole'
                                        */
extern real_T Lateral_Control_Rate_Limit_APV;/* Variable: Lateral_Control_Rate_Limit_APV
                                              * Referenced by: '<S312>/Constant'
                                              */
extern real_T Lateral_Control_YawRate_Limit;/* Variable: Lateral_Control_YawRate_Limit
                                             * Referenced by:
                                             *   '<S283>/Constant2'
                                             *   '<S283>/Constant4'
                                             */
extern real_T Lateral_Control_Zero;    /* Variable: Lateral_Control_Zero
                                        * Referenced by: '<S313>/GainZero'
                                        */
extern real_T PROPB_REAX_1_E4_DESIRED_POSITION_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_POSITION_APV
                                                    * Referenced by: '<S996>/Constant7'
                                                    */
extern real_T REAX_OFFSET_APV;         /* Variable: REAX_OFFSET_APV
                                        * Referenced by:
                                        *   '<S80>/Constant'
                                        *   '<S282>/ReAX Offset'
                                        *   '<S283>/Constant6'
                                        */
extern real_T STANLEY_GAIN_APV;        /* Variable: STANLEY_GAIN_APV
                                        * Referenced by: '<S282>/StanleySteeringControlGain'
                                        */
extern real_T STEERCTRL_WHEEL_ANGLE_DATA_MPV[72];/* Variable: STEERCTRL_WHEEL_ANGLE_DATA_MPV
                                                  * Referenced by: '<S278>/1D_Lookup_Table'
                                                  */
extern real_T STEERCTRL_WHEEL_ANGLE_STEP_MPV[72];/* Variable: STEERCTRL_WHEEL_ANGLE_STEP_MPV
                                                  * Referenced by: '<S278>/1D_Lookup_Table'
                                                  */
extern real_T TQ_DEM_GEAR_RATIO_STEP_MPV[8];/* Variable: TQ_DEM_GEAR_RATIO_STEP_MPV
                                             * Referenced by:
                                             *   '<S243>/2D_Lookup_Table'
                                             *   '<S244>/2D_Lookup_Table'
                                             *   '<S245>/2D_Lookup_Table'
                                             */
extern real_T TQ_DEM_KD_DATA_MPV[64];  /* Variable: TQ_DEM_KD_DATA_MPV
                                        * Referenced by: '<S245>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_KI_DATA_MPV[64];  /* Variable: TQ_DEM_KI_DATA_MPV
                                        * Referenced by: '<S244>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_KP_DATA_MPV[64];  /* Variable: TQ_DEM_KP_DATA_MPV
                                        * Referenced by: '<S243>/2D_Lookup_Table'
                                        */
extern real_T TQ_DEM_MASS_STEP_MPV[8]; /* Variable: TQ_DEM_MASS_STEP_MPV
                                        * Referenced by:
                                        *   '<S243>/2D_Lookup_Table'
                                        *   '<S244>/2D_Lookup_Table'
                                        *   '<S245>/2D_Lookup_Table'
                                        */
extern real_T UndersteerCorection;     /* Variable: UndersteerCorection
                                        * Referenced by: '<S283>/UndersteerCorrection'
                                        */
extern real_T VSPD_TARGET_KPH_APV;     /* Variable: VSPD_TARGET_KPH_APV
                                        * Referenced by: '<S81>/VSPD_TARGET_KPH_APV'
                                        */
extern real_T YAW_RATE_OFFSET_APV;     /* Variable: YAW_RATE_OFFSET_APV
                                        * Referenced by: '<S283>/YAW_RATE_OFFSET_APV'
                                        */
extern real_T Yaw_Rate_FF_Gain;        /* Variable: Yaw_Rate_FF_Gain
                                        * Referenced by: '<S283>/RateFeedbackGain'
                                        */
extern ENUM_AUTONOMOUS_MODE_T AUTONOMOUS_MODE_SELECTOR_APV;/* Variable: AUTONOMOUS_MODE_SELECTOR_APV
                                                            * Referenced by: '<S76>/AUTONOMOUS_MODE_SELECTOR_APV'
                                                            */
extern ENUM_CAN_RX_T CANR_PROPB_XPR_1_50_CHANNEL_APV;/* Variable: CANR_PROPB_XPR_1_50_CHANNEL_APV
                                                      * Referenced by: '<S448>/Constant'
                                                      */
extern ENUM_CAN_RX_T PROPB_REAX_CHANNEL_APV;/* Variable: PROPB_REAX_CHANNEL_APV
                                             * Referenced by:
                                             *   '<S446>/Constant'
                                             *   '<S447>/Constant'
                                             *   '<S468>/Constant3'
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
                                                                      * Referenced by: '<S979>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S996>/Constant1'
                                                                      */
extern ENUM_SWITCH_T RATE_LIMITER_ENABLE_APV;/* Variable: RATE_LIMITER_ENABLE_APV
                                              * Referenced by: '<S312>/RATE_LIMITER_ENABLE_APV'
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
 * '<S102>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/Speed Difference Check/Detect Rise Positive'
 * '<S103>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/AutonomousEnable/Speed Difference Check/Detect Rise Positive/Positive'
 * '<S104>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller'
 * '<S105>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller'
 * '<S106>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_application_and_switch_states'
 * '<S107>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target'
 * '<S108>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits'
 * '<S109>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate'
 * '<S110>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_stopped'
 * '<S111>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control'
 * '<S112>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3'
 * '<S113>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/dT'
 * '<S114>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S115>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error'
 * '<S116>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID'
 * '<S117>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Reset_governor'
 * '<S118>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S119>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S120>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S121>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S122>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S123>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S124>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S125>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S126>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S127>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S128>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S129>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S130>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S131>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S132>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S133>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S134>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S135>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S136>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S137>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S138>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S139>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S140>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S141>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S142>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S143>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S144>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S145>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_brake_application_pressure_feedback_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S146>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem'
 * '<S147>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3'
 * '<S148>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/dT'
 * '<S149>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table'
 * '<S150>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table1'
 * '<S151>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Gain_sch_brake_dem/1D_Lookup_Table2'
 * '<S152>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S153>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error'
 * '<S154>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID'
 * '<S155>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Reset_governor'
 * '<S156>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S157>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S158>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S159>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S160>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S161>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S162>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S163>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S164>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S165>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S166>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S167>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S168>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S169>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S170>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S171>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S172>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S173>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S174>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S175>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S176>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S177>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S178>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S179>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S180>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S181>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S182>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S183>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Bendix_2C2_vehicle_speed_feedback_pressure_controller/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S184>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_application_and_switch_states/If_Then_Else'
 * '<S185>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target'
 * '<S186>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target'
 * '<S187>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/If_Then_Else'
 * '<S188>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/If_Then_Else1'
 * '<S189>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset'
 * '<S190>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/dT'
 * '<S191>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/Check Static  Lower Bound'
 * '<S192>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/If_Then_Else'
 * '<S193>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_brake_hold_pressure_target/Slew_init_reset/Unit Delay External IC'
 * '<S194>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/If_Then_Else'
 * '<S195>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/If_Then_Else1'
 * '<S196>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset'
 * '<S197>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/dT'
 * '<S198>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/Check Static  Lower Bound'
 * '<S199>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/If_Then_Else'
 * '<S200>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_pressure_target/Determine_shift_interlock_brake_pressure_target/Slew_init_reset/Unit Delay External IC'
 * '<S201>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table'
 * '<S202>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table1'
 * '<S203>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_brake_system_performance_targets_and_limits/2D_Lookup_Table2'
 * '<S204>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/Discrete Derivative1'
 * '<S205>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/LPF_first_order'
 * '<S206>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Determine_vehicle_speed_and_accel_rate/LPF_first_order/If_Then_Else'
 * '<S207>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control/Compare To Zero'
 * '<S208>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/BRKPEDARB_10ms/Enable_brake_control/Compare To Zero1'
 * '<S209>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Chart'
 * '<S210>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/ESTOP_10ms'
 * '<S211>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller'
 * '<S212>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Engine_speed_target'
 * '<S213>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Relay_control'
 * '<S214>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov'
 * '<S215>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant'
 * '<S216>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant1'
 * '<S217>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Constant2'
 * '<S218>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Zero'
 * '<S219>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Enable_throttle_controller/Compare To Zero1'
 * '<S220>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Relay_control/Relay_control_state_machine'
 * '<S221>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses'
 * '<S222>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_tq_dem_gov_reset'
 * '<S223>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem'
 * '<S224>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3'
 * '<S225>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque'
 * '<S226>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation'
 * '<S227>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1'
 * '<S228>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2'
 * '<S229>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/If_Then_Else'
 * '<S230>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce'
 * '<S231>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/F_wheel_to_Tq_eng'
 * '<S232>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine aerodynamic resistance'
 * '<S233>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine gradient resistance'
 * '<S234>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine rolling resistance'
 * '<S235>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/If_Then_Else'
 * '<S236>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/CalculateRoadLoadTorque/CalculateTotalTractiveForce/Determine rolling resistance/Determine coefficient of rolling resistance'
 * '<S237>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation/If_Then_Else'
 * '<S238>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation/If_Then_Else1'
 * '<S239>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1/If_Then_Else'
 * '<S240>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation1/If_Then_Else1'
 * '<S241>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2/If_Then_Else'
 * '<S242>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Determine_engine_torque_and_losses/Dynamic_saturation2/If_Then_Else1'
 * '<S243>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table'
 * '<S244>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table1'
 * '<S245>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Gain_sch_torque_dem/2D_Lookup_Table2'
 * '<S246>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms'
 * '<S247>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error'
 * '<S248>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID'
 * '<S249>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Reset_governor'
 * '<S250>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term'
 * '<S251>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term'
 * '<S252>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_P_term'
 * '<S253>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant'
 * '<S254>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Compare To Constant1'
 * '<S255>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order'
 * '<S256>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/Unit Delay Resettable External IC'
 * '<S257>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_D_term/LPF_first_order/If_Then_Else'
 * '<S258>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term'
 * '<S259>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Initialize_integral_term'
 * '<S260>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup'
 * '<S261>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/If_Then_Else'
 * '<S262>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Calculate_integral_term/Unit Delay Resettable External IC1'
 * '<S263>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero'
 * '<S264>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/Compare To Zero1'
 * '<S265>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else'
 * '<S266>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else1'
 * '<S267>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else2'
 * '<S268>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Calculate_PID_terms/Calculate_I_term/Prevent_integral_term_windup/If_Then_Else3'
 * '<S269>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/LPF_first_order'
 * '<S270>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset'
 * '<S271>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/LPF_first_order/If_Then_Else'
 * '<S272>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Check Static  Lower Bound'
 * '<S273>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/If_Then_Else'
 * '<S274>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Determine_control_error/Slew_init_reset/Unit Delay External IC'
 * '<S275>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation'
 * '<S276>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else'
 * '<S277>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STATE_CONTROL_10ms/Throttle_controller_gov/Generic_PID_Governor_3/Output_PID/Dynamic_saturation/If_Then_Else1'
 * '<S278>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/1D_Lookup_Table'
 * '<S279>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF'
 * '<S280>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1'
 * '<S281>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID'
 * '<S282>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController'
 * '<S283>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController'
 * '<S284>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError'
 * '<S285>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew'
 * '<S286>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/stanley'
 * '<S287>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE'
 * '<S288>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Data Type Conversion Inherited'
 * '<S289>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Enable'
 * '<S290>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Interval Test'
 * '<S291>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF/LowpassT_RE/Reset'
 * '<S292>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE'
 * '<S293>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Data Type Conversion Inherited'
 * '<S294>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Enable'
 * '<S295>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Interval Test'
 * '<S296>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/LPF1/LowpassT_RE/Reset'
 * '<S297>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID'
 * '<S298>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID'
 * '<S299>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/Saturation Dynamic'
 * '<S300>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/PID/PID/PID/AntiWindup'
 * '<S301>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/Error Calc'
 * '<S302>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/StanleyController/If_Then_Else'
 * '<S303>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Bumpless Transfer'
 * '<S304>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation'
 * '<S305>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Calc'
 * '<S306>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation'
 * '<S307>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else'
 * '<S308>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else1'
 * '<S309>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/PID Controller'
 * '<S310>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic'
 * '<S311>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1'
 * '<S312>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation'
 * '<S313>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Transfer Fcn Lead or Lag'
 * '<S314>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation'
 * '<S315>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else'
 * '<S316>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else1'
 * '<S317>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else'
 * '<S318>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else1'
 * '<S319>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S320>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1/Saturation Dynamic'
 * '<S321>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Compare To Constant'
 * '<S322>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/If_Then_Else'
 * '<S323>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter'
 * '<S324>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Saturation'
 * '<S325>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter/Saturation Dynamic'
 * '<S326>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else'
 * '<S327>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else1'
 * '<S328>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/Detect Change'
 * '<S329>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order'
 * '<S330>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied'
 * '<S331>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1'
 * '<S332>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order/If_Then_Else'
 * '<S333>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied/If_Then_Else'
 * '<S334>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1/If_Then_Else'
 * '<S335>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Chart'
 * '<S336>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event'
 * '<S337>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/RS flip-flop'
 * '<S338>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Rising_edge'
 * '<S339>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset'
 * '<S340>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S341>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S342>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S343>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Compare To Zero'
 * '<S344>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Detect Change1'
 * '<S345>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile'
 * '<S346>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile'
 * '<S347>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit'
 * '<S348>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/If_Then_Else'
 * '<S349>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit'
 * '<S350>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/dT'
 * '<S351>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Detect Change1'
 * '<S352>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values'
 * '<S353>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset'
 * '<S354>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values/If_Then_Else'
 * '<S355>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Check Static  Lower Bound'
 * '<S356>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/If_Then_Else'
 * '<S357>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Unit Delay External IC'
 * '<S358>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile'
 * '<S359>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value'
 * '<S360>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/TwentyPointVectorCalculation'
 * '<S361>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/VehicleSpeedSetpointDynamicCalculation'
 * '<S362>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value'
 * '<S363>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Compare To Zero'
 * '<S364>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/SR flip-flop'
 * '<S365>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value/If_Then_Else'
 * '<S366>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/If_Then_Else'
 * '<S367>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators'
 * '<S368>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance'
 * '<S369>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator'
 * '<S370>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT'
 * '<S371>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT1'
 * '<S372>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/If_Then_Else'
 * '<S373>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/Unit Delay Resettable External IC1'
 * '<S374>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method'
 * '<S375>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Unit Delay Resettable External IC1'
 * '<S376>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method/Unit Delay Resettable External IC'
 * '<S377>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant3'
 * '<S378>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant8'
 * '<S379>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/If_Then_Else4'
 * '<S380>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Rising_edge'
 * '<S381>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset'
 * '<S382>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/dT'
 * '<S383>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S384>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/If_Then_Else'
 * '<S385>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S386>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant10'
 * '<S387>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant11'
 * '<S388>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant12'
 * '<S389>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant9'
 * '<S390>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/If_Then_Else4'
 * '<S391>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Rising_edge'
 * '<S392>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset'
 * '<S393>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/dT'
 * '<S394>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S395>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/If_Then_Else'
 * '<S396>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S397>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Mapping'
 * '<S398>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Odometry'
 * '<S399>' : 'L4_MABX/ETHERNET/Data RX'
 * '<S400>' : 'L4_MABX/ETHERNET/Data TX'
 * '<S401>' : 'L4_MABX/ETHERNET/TCPIP_Setup'
 * '<S402>' : 'L4_MABX/ETHERNET/UDPIP_Communication'
 * '<S403>' : 'L4_MABX/ETHERNET/Update_RTMaps_Interface'
 * '<S404>' : 'L4_MABX/ETHERNET/Data RX/EQ'
 * '<S405>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check'
 * '<S406>' : 'L4_MABX/ETHERNET/Data RX/RTMapsDecode'
 * '<S407>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1'
 * '<S408>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1/Positive'
 * '<S409>' : 'L4_MABX/ETHERNET/Data TX/RTMapsEncode'
 * '<S410>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background'
 * '<S411>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background_Task'
 * '<S412>' : 'L4_MABX/ETHERNET/TCPIP_Setup/IRQ_Level_2_SW_INT'
 * '<S413>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task'
 * '<S414>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block'
 * '<S415>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task/Tcp Input Processing'
 * '<S416>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block/Common Hardware Interrupt Interface'
 * '<S417>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW'
 * '<S418>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL'
 * '<S419>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access'
 * '<S420>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_EC1'
 * '<S421>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_3'
 * '<S422>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_4'
 * '<S423>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00'
 * '<S424>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00'
 * '<S425>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A'
 * '<S426>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A'
 * '<S427>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31'
 * '<S428>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00'
 * '<S429>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31'
 * '<S430>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks'
 * '<S431>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00'
 * '<S432>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31'
 * '<S433>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01'
 * '<S434>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B'
 * '<S435>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B'
 * '<S436>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B'
 * '<S437>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B'
 * '<S438>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00'
 * '<S439>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00'
 * '<S440>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00'
 * '<S441>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00'
 * '<S442>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03'
 * '<S443>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00'
 * '<S444>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B'
 * '<S445>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13'
 * '<S446>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13'
 * '<S447>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13'
 * '<S448>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50'
 * '<S449>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2'
 * '<S450>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01'
 * '<S451>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30'
 * '<S452>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03'
 * '<S453>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2'
 * '<S454>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3'
 * '<S455>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5'
 * '<S456>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01'
 * '<S457>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05'
 * '<S458>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B'
 * '<S459>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B'
 * '<S460>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03'
 * '<S461>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00'
 * '<S462>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C1'
 * '<S463>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C2'
 * '<S464>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C1'
 * '<S465>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C2'
 * '<S466>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C1'
 * '<S467>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C2'
 * '<S468>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable'
 * '<S469>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3'
 * '<S470>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4'
 * '<S471>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM'
 * '<S472>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPDT'
 * '<S473>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses15'
 * '<S474>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses16'
 * '<S475>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses2'
 * '<S476>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses3'
 * '<S477>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1'
 * '<S478>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel'
 * '<S479>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S480>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ'
 * '<S481>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ1'
 * '<S482>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ2'
 * '<S483>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ3'
 * '<S484>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ4'
 * '<S485>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ5'
 * '<S486>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1'
 * '<S487>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel'
 * '<S488>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S489>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ'
 * '<S490>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ1'
 * '<S491>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ2'
 * '<S492>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ3'
 * '<S493>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ4'
 * '<S494>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ5'
 * '<S495>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1'
 * '<S496>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1/ACC1_2A_'
 * '<S497>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1'
 * '<S498>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1/AEBS1_A0'
 * '<S499>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1'
 * '<S500>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1/AIR1'
 * '<S501>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1'
 * '<S502>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1/AMB'
 * '<S503>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4'
 * '<S504>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4/B2'
 * '<S505>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1'
 * '<S506>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1/Tracks'
 * '<S507>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1'
 * '<S508>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1/CCVS1_00'
 * '<S509>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1'
 * '<S510>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1/CCVS1_31'
 * '<S511>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4'
 * '<S512>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_00'
 * '<S513>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_1'
 * '<S514>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1'
 * '<S515>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1/CVW_0B1'
 * '<S516>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1'
 * '<S517>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1/EBC1_0B'
 * '<S518>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1'
 * '<S519>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1/EBC1_0B'
 * '<S520>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1'
 * '<S521>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1/EBC2_0B1'
 * '<S522>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00'
 * '<S523>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1'
 * '<S524>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/EQ1'
 * '<S525>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/Decode'
 * '<S526>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/serialize_tpdt'
 * '<S527>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/MergeBuses'
 * '<S528>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1'
 * '<S529>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte11'
 * '<S530>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13'
 * '<S531>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte14'
 * '<S532>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16'
 * '<S533>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18'
 * '<S534>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20'
 * '<S535>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte2'
 * '<S536>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22'
 * '<S537>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte23'
 * '<S538>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte24'
 * '<S539>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte25'
 * '<S540>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte26'
 * '<S541>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte27'
 * '<S542>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29'
 * '<S543>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31'
 * '<S544>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33'
 * '<S545>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte34'
 * '<S546>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte35'
 * '<S547>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte36'
 * '<S548>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte37'
 * '<S549>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte38'
 * '<S550>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4'
 * '<S551>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte5'
 * '<S552>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7'
 * '<S553>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte8'
 * '<S554>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10'
 * '<S555>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1/OR'
 * '<S556>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13/OR'
 * '<S557>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16/OR'
 * '<S558>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18/OR'
 * '<S559>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20/OR'
 * '<S560>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22/OR'
 * '<S561>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29/OR'
 * '<S562>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31/OR'
 * '<S563>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33/OR'
 * '<S564>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4/OR'
 * '<S565>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7/OR'
 * '<S566>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10/OR'
 * '<S567>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1'
 * '<S568>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1/EEC1_001'
 * '<S569>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2'
 * '<S570>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2/EEC2_001'
 * '<S571>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1'
 * '<S572>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1/EEC3_001'
 * '<S573>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1'
 * '<S574>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1/ETC2_031'
 * '<S575>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4'
 * '<S576>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_011'
 * '<S577>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_1'
 * '<S578>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1'
 * '<S579>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1/HRW_0B'
 * '<S580>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2'
 * '<S581>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6'
 * '<S582>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2/PropB_REAX_2_13'
 * '<S583>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6/PropB_REAX_2_13'
 * '<S584>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1'
 * '<S585>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2'
 * '<S586>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6'
 * '<S587>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel'
 * '<S588>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S589>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S590>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6/CAN_TYPE1_RX_M3_C2'
 * '<S591>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ'
 * '<S592>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ1'
 * '<S593>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ2'
 * '<S594>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ3'
 * '<S595>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ4'
 * '<S596>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ5'
 * '<S597>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1'
 * '<S598>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2'
 * '<S599>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3'
 * '<S600>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel'
 * '<S601>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S602>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S603>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3/CAN_TYPE1_RX_M3_C2'
 * '<S604>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ'
 * '<S605>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ1'
 * '<S606>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ2'
 * '<S607>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ3'
 * '<S608>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ4'
 * '<S609>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ5'
 * '<S610>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1'
 * '<S611>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2'
 * '<S612>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3'
 * '<S613>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel'
 * '<S614>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S615>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S616>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3/CAN_TYPE1_RX_M2_C1'
 * '<S617>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ'
 * '<S618>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ1'
 * '<S619>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ2'
 * '<S620>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ3'
 * '<S621>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ4'
 * '<S622>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ5'
 * '<S623>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6'
 * '<S624>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeLeft'
 * '<S625>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeRight'
 * '<S626>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LanePosEst'
 * '<S627>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4'
 * '<S628>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_011'
 * '<S629>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_1'
 * '<S630>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3'
 * '<S631>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3/Bendix_Prop2C2_Status_30'
 * '<S632>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1'
 * '<S633>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1/SSI2_031'
 * '<S634>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6'
 * '<S635>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6/PX2_MapLaneEgoLeft'
 * '<S636>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6'
 * '<S637>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6/PX2_MapLaneEgoRight'
 * '<S638>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6'
 * '<S639>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6/PX2_EgoLanePos'
 * '<S640>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4'
 * '<S641>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4/SystemTime_01'
 * '<S642>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5'
 * '<S643>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5/TC1_03_05'
 * '<S644>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1'
 * '<S645>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1/VDC1_0B_'
 * '<S646>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1'
 * '<S647>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1/VDC2_0B1'
 * '<S648>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1'
 * '<S649>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1/VEP1'
 * '<S650>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00'
 * '<S651>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI'
 * '<S652>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/EQ1'
 * '<S653>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/Decode'
 * '<S654>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/serialize_tpdt'
 * '<S655>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero1'
 * '<S656>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero2'
 * '<S657>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop'
 * '<S658>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop1'
 * '<S659>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/If_Then_Else'
 * '<S660>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel'
 * '<S661>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ'
 * '<S662>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ1'
 * '<S663>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ2'
 * '<S664>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ3'
 * '<S665>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ4'
 * '<S666>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ5'
 * '<S667>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/MergeBuses'
 * '<S668>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1'
 * '<S669>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte2'
 * '<S670>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4'
 * '<S671>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6'
 * '<S672>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8'
 * '<S673>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND1'
 * '<S674>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND2'
 * '<S675>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4/OR'
 * '<S676>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6/OR1'
 * '<S677>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8/OR2'
 * '<S678>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/MergeBuses'
 * '<S679>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1'
 * '<S680>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte2'
 * '<S681>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte3'
 * '<S682>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte5'
 * '<S683>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7'
 * '<S684>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte8'
 * '<S685>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND'
 * '<S686>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND1'
 * '<S687>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND2'
 * '<S688>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7/OR'
 * '<S689>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM'
 * '<S690>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS'
 * '<S691>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort'
 * '<S692>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck'
 * '<S693>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS'
 * '<S694>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ'
 * '<S695>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ1'
 * '<S696>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ2'
 * '<S697>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ3'
 * '<S698>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ4'
 * '<S699>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/MergeBuses'
 * '<S700>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte1'
 * '<S701>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3'
 * '<S702>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte4'
 * '<S703>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8'
 * '<S704>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3/OR'
 * '<S705>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8/OR'
 * '<S706>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/MergeBuses'
 * '<S707>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte1'
 * '<S708>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte2'
 * '<S709>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte3'
 * '<S710>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8'
 * '<S711>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8/OR'
 * '<S712>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/MergeBuses'
 * '<S713>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte1'
 * '<S714>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte2'
 * '<S715>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8'
 * '<S716>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8/OR'
 * '<S717>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/MergeBuses'
 * '<S718>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte1'
 * '<S719>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3'
 * '<S720>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte4'
 * '<S721>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8'
 * '<S722>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3/OR'
 * '<S723>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8/OR'
 * '<S724>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/MergeBuses'
 * '<S725>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte1'
 * '<S726>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3'
 * '<S727>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte4'
 * '<S728>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte5'
 * '<S729>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8'
 * '<S730>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3/OR'
 * '<S731>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8/OR'
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL1'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL2'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL3'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_1'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_3'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_4'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_5'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_6'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_7'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Nonpositive'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Nonpositive/Nonpositive'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive/Positive'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay/Compare To Zero'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay/Compare To Zero'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Fall Nonpositive'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Rise Positive'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Off Delay'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/On Delay'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Fall Nonpositive/Nonpositive'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Rise Positive/Positive'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Off Delay/Compare To Zero'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/On Delay/Compare To Zero'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S804>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S805>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S806>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S807>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S808>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S809>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S810>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S811>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S812>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S813>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S814>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S815>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S816>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S817>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S818>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S819>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S820>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S821>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S822>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S823>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S824>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S825>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S826>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S827>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S828>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S829>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S830>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S831>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S832>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S833>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S834>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S835>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S836>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S837>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S838>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S839>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S840>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S841>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S842>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S843>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S844>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S845>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S846>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S847>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S848>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S849>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S850>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S851>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S852>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S853>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S854>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S1043>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S1044>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S1045>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S1046>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1047>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1048>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1049>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1050>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1051>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1052>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1053>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1054>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1055>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1056>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1057>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1058>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1059>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1060>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1061>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1062>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1063>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1064>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1065>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1066>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1067>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1068>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1069>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1070>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1071>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1072>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1073>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1074>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL3'
 * '<S1075>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL4'
 * '<S1076>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1077>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1078>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1079>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1080>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1081>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1082>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1083>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1084>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1085>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1086>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1087>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1088>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1089>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1090>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1091>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1092>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1093>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
