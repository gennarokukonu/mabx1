/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.894
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Mon Feb  3 15:07:24 2020
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

/* Block signals for system '<S310>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S320>/Switch' */
} B_If_Then_Else_L4_MABX_mf_T;

/* Block signals for system '<S350>/If_Then_Else' */
typedef struct {
  real_T Vehicle_speed_target;         /* '<S352>/Switch' */
  real_T Vehicle_speed;                /* '<S352>/Switch' */
  real_T Distance_m;                   /* '<S352>/Switch' */
} B_If_Then_Else_L4_MABX_h_T;

/* Block signals for system '<S1015>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S1039>/Switch' */
  real_T XBRUrgency;                   /* '<S1039>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S1039>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S1039>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1039>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S1039>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S1039>/Switch' */
} B_If_Then_Else_L4_MABX_b_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S404>/Decoder' */
  real_T UnitDelay;                    /* '<S757>/Unit Delay' */
  real_T UnitDelay_c;                  /* '<S756>/Unit Delay' */
  real_T Switch;                       /* '<S756>/Switch' */
  real_T Gain;                         /* '<S756>/Gain' */
  real_T Switch_e;                     /* '<S757>/Switch' */
  real_T Gain_p;                       /* '<S757>/Gain' */
  real_T SFunction1_o1;                /* '<S740>/S-Function1' */
  real_T SFunction1_o2;                /* '<S740>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S416>/Data Type Conversion2' */
  real_T Xold;                         /* '<S796>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S796>/Init' */
  real_T FixPtSum1;                    /* '<S792>/FixPt Sum1' */
  real_T FixPtSum1_n;                  /* '<S795>/FixPt Sum1' */
  real_T Gain_g;                       /* '<S416>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S416>/Data Type Conversion9' */
  real_T Xold_g;                       /* '<S788>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S788>/Init' */
  real_T FixPtSum1_o;                  /* '<S784>/FixPt Sum1' */
  real_T FixPtSum1_b;                  /* '<S787>/FixPt Sum1' */
  real_T SFunction1_o1_g;              /* '<S741>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S741>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S416>/Data Type Conversion3' */
  real_T Xold_m;                       /* '<S812>/FixPt Unit Delay1' */
  real_T Init_d;                       /* '<S812>/Init' */
  real_T FixPtSum1_e;                  /* '<S808>/FixPt Sum1' */
  real_T FixPtSum1_c;                  /* '<S811>/FixPt Sum1' */
  real_T Gain1;                        /* '<S416>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S416>/Data Type Conversion1' */
  real_T Xold_e;                       /* '<S804>/FixPt Unit Delay1' */
  real_T Init_l;                       /* '<S804>/Init' */
  real_T FixPtSum1_d;                  /* '<S800>/FixPt Sum1' */
  real_T FixPtSum1_bg;                 /* '<S803>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S833>/MinMax1' */
  real_T Saturation;                   /* '<S833>/Saturation' */
  real_T Divide;                       /* '<S833>/Divide' */
  real_T Product2;                     /* '<S833>/Product2' */
  real_T Subtract1;                    /* '<S833>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S833>/Unit_Delay2' */
  real_T Product1;                     /* '<S833>/Product1' */
  real_T Add1;                         /* '<S833>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S766>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_h;                    /* '<S834>/MinMax1' */
  real_T Saturation_m;                 /* '<S834>/Saturation' */
  real_T Divide_h;                     /* '<S834>/Divide' */
  real_T Product2_b;                   /* '<S834>/Product2' */
  real_T Subtract1_m;                  /* '<S834>/Subtract1' */
  real_T Unit_Delay2_p;                /* '<S834>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S834>/Product1' */
  real_T Add1_n;                       /* '<S834>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S766>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S768>/Subtract' */
  real_T Abs;                          /* '<S768>/Abs' */
  real_T Xold_h;                       /* '<S832>/FixPt Unit Delay1' */
  real_T Init_c;                       /* '<S832>/Init' */
  real_T Xold_hz;                      /* '<S831>/FixPt Unit Delay1' */
  real_T Init_j;                       /* '<S831>/Init' */
  real_T MinMax;                       /* '<S762>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S768>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S763>/Data Type Conversion2' */
  real_T Xold_k;                       /* '<S820>/FixPt Unit Delay1' */
  real_T Init_ck;                      /* '<S820>/Init' */
  real_T FixPtSum1_m;                  /* '<S816>/FixPt Sum1' */
  real_T FixPtSum1_ex;                 /* '<S819>/FixPt Sum1' */
  real_T SFunction1;                   /* '<S732>/S-Function1' */
  real_T IgnitionKeySwitch_voltage;    /* '<S416>/KL15_Monitor' */
  real_T SPN524_TransSelectedGear;     /* '<S571>/Data Type Conversion1' */
  real_T SPN523_TransCurrentGear;      /* '<S571>/Data Type Conversion2' */
  real_T SPN526_TransActualGearRatio;  /* '<S571>/Data Type Conversion3' */
  real_T SPN514_NominalFrictionPercentTo;/* '<S569>/Data Type Conversion2' */
  real_T SPN2978_EstEngParasiticLossesPe;/* '<S569>/Data Type Conversion1' */
  real_T SPN1760_GrossCombinationVehicle;/* '<S512>/Data Type Conversion1' */
  real_T ACCDistanceAlertSignal;       /* '<S493>/Data Type Conversion12' */
  real_T ForwardCollisionWarning;      /* '<S493>/Data Type Conversion13' */
  real_T SPN544_EngineReferenceTorque; /* '<S532>/Data Type Conversion2' */
  real_T PitchAngleExRange;            /* '<S630>/Data Type Conversion1' */
  real_T PressureP1;                   /* '<S628>/Data Type Conversion7' */
  real_T PressureP4;                   /* '<S628>/Data Type Conversion6' */
  real_T PressureP21;                  /* '<S628>/Data Type Conversion11' */
  real_T PressureP22;                  /* '<S628>/Data Type Conversion12' */
  real_T PressureP42;                  /* '<S628>/Data Type Conversion13' */
  real_T Heartbeat;                    /* '<S398>/Heartbeat' */
  real_T Decoder_o3;                   /* '<S404>/Decoder' */
  real_T UnitDelay_f;                  /* '<S403>/Unit Delay' */
  real_T Count;                        /* '<S403>/Switch' */
  real_T Latitude_;                    /* '<S625>/Switch' */
  real_T Longitude_;                   /* '<S625>/Switch' */
  real_T SID;                          /* '<S509>/Switch' */
  real_T COGReference;                 /* '<S509>/Switch' */
  real_T CourseOverGround;             /* '<S509>/Switch' */
  real_T SpeedOverGround;              /* '<S509>/Switch' */
  real_T DataTypeConversion[8];        /* '<S1062>/Data Type Conversion' */
  real_T DataTypeConversion_f[8];      /* '<S1063>/Data Type Conversion' */
  real_T TmpRTBAtFlashOutport1;        /* '<S1077>/Flash' */
  real_T MinMax_k;                     /* '<S850>/MinMax' */
  real_T DataTypeConversion1;          /* '<S850>/Data Type Conversion1' */
  real_T Divide_k;                     /* '<S850>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S850>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1075>/1-D Lookup Table2' */
  real_T Gain1_h;                      /* '<S850>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S850>/Data Type Conversion6' */
  real_T MinMax1_hc;                   /* '<S850>/MinMax1' */
  real_T DataTypeConversion2_c;        /* '<S850>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S850>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S850>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1075>/1-D Lookup Table3' */
  real_T Gain_go;                      /* '<S850>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S850>/Data Type Conversion10' */
  real_T SFunction1_o1_e;              /* '<S739>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S739>/S-Function1' */
  real_T ShiftControlDC;               /* '<S416>/ShifterControlDC' */
  real_T Flash;                        /* '<S1077>/Flash' */
  real_T HDOP_;                        /* '<S573>/Switch' */
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
  real_T DataTypeConversion2_p;        /* '<S526>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S526>/Product' */
  real_T DataTypeConversion_b;         /* '<S418>/Data Type Conversion' */
  real_T DataTypeConversion_i;         /* '<S533>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S533>/Add' */
  real_T DataTypeConversion1_e;        /* '<S418>/Data Type Conversion1' */
  real_T DataTypeConversion2_o;        /* '<S530>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S530>/Product' */
  real_T DataTypeConversion10;         /* '<S418>/Data Type Conversion10' */
  real_T DataTypeConversion2_f;        /* '<S531>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S531>/Product' */
  real_T DataTypeConversion11;         /* '<S418>/Data Type Conversion11' */
  real_T DataTypeConversion2_p5;       /* '<S534>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S534>/Product' */
  real_T DataTypeConversion13;         /* '<S418>/Data Type Conversion13' */
  real_T DataTypeConversion2_ci;       /* '<S535>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S535>/Product' */
  real_T DataTypeConversion14;         /* '<S418>/Data Type Conversion14' */
  real_T DataTypeConversion2_g;        /* '<S536>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S536>/Product' */
  real_T DataTypeConversion15;         /* '<S418>/Data Type Conversion15' */
  real_T DataTypeConversion2_i;        /* '<S537>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S537>/Product' */
  real_T DataTypeConversion16;         /* '<S418>/Data Type Conversion16' */
  real_T DataTypeConversion_f3;        /* '<S538>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S538>/Add' */
  real_T DataTypeConversion17;         /* '<S418>/Data Type Conversion17' */
  real_T DataTypeConversion_g;         /* '<S539>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S539>/Add' */
  real_T DataTypeConversion18;         /* '<S418>/Data Type Conversion18' */
  real_T DataTypeConversion2_cg;       /* '<S540>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S540>/Product' */
  real_T DataTypeConversion19;         /* '<S418>/Data Type Conversion19' */
  real_T DataTypeConversion2_o2;       /* '<S548>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S548>/Product' */
  real_T DataTypeConversion2_g0;       /* '<S418>/Data Type Conversion2' */
  real_T DataTypeConversion2_b;        /* '<S541>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S541>/Product' */
  real_T DataTypeConversion20;         /* '<S418>/Data Type Conversion20' */
  real_T DataTypeConversion_k;         /* '<S549>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S549>/Add' */
  real_T DataTypeConversion3;          /* '<S418>/Data Type Conversion3' */
  real_T DataTypeConversion2_gt;       /* '<S550>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S550>/Product' */
  real_T DataTypeConversion4;          /* '<S418>/Data Type Conversion4' */
  real_T DataTypeConversion_fa;        /* '<S551>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S551>/Add' */
  real_T DataTypeConversion5;          /* '<S418>/Data Type Conversion5' */
  real_T DataTypeConversion2_oj;       /* '<S552>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S552>/Product' */
  real_T DataTypeConversion6;          /* '<S418>/Data Type Conversion6' */
  real_T DataTypeConversion_p;         /* '<S527>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S527>/Add' */
  real_T DataTypeConversion7;          /* '<S418>/Data Type Conversion7' */
  real_T DataTypeConversion2_n;        /* '<S528>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S528>/Product' */
  real_T DataTypeConversion8;          /* '<S418>/Data Type Conversion8' */
  real_T DataTypeConversion_j;         /* '<S529>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S529>/Add' */
  real_T DataTypeConversion9;          /* '<S418>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S475>/Data Type Conversion9' */
  real_T RX_time_j;                    /* '<S421>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S475>/Data Type Conversion10' */
  real_T RX_delta_time_n;              /* '<S421>/Multiport_Switch' */
  real_T RX_time_jk;                   /* '<S484>/Data Type Conversion9' */
  real_T RX_time_o;                    /* '<S422>/Multiport_Switch' */
  real_T RX_delta_time_j;              /* '<S484>/Data Type Conversion10' */
  real_T RX_delta_time_m;              /* '<S422>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S493>/Data Type Conversion1' */
  real_T RX_delta_time_d;              /* '<S493>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S493>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S493>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S493>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S493>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S493>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S493>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S493>/Data Type Conversion7' */
  real_T RX_time_m;                    /* '<S493>/Data Type Conversion9' */
  real_T RX_delta_time_l;              /* '<S495>/Data Type Conversion10' */
  real_T RX_time_l;                    /* '<S495>/Data Type Conversion9' */
  real_T RX_delta_time_b;              /* '<S497>/Data Type Conversion10' */
  real_T RX_time_i;                    /* '<S497>/Data Type Conversion9' */
  real_T RX_delta_time_jq;             /* '<S499>/Data Type Conversion10' */
  real_T RX_time_f;                    /* '<S499>/Data Type Conversion9' */
  real_T RX_delta_time_lt;             /* '<S501>/Data Type Conversion10' */
  real_T RX_time_c;                    /* '<S501>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S503>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S503>/Data Type Conversion9' */
  real_T RX_delta_time_a;              /* '<S505>/Data Type Conversion10' */
  real_T RX_time_iw;                   /* '<S505>/Data Type Conversion9' */
  real_T RX_delta_time_di;             /* '<S507>/Data Type Conversion10' */
  real_T RX_time_b;                    /* '<S507>/Data Type Conversion9' */
  real_T RX_time_cn;                   /* '<S509>/Switch' */
  real_T RX_delta_time_ng;             /* '<S509>/Switch' */
  real_T RX_delta_time_jo;             /* '<S512>/Data Type Conversion10' */
  real_T RX_time_k;                    /* '<S512>/Data Type Conversion9' */
  real_T RX_delta_time_f;              /* '<S514>/Data Type Conversion10' */
  real_T RX_time_a;                    /* '<S514>/Data Type Conversion9' */
  real_T RX_delta_time_o;              /* '<S516>/Data Type Conversion10' */
  real_T RX_time_g;                    /* '<S516>/Data Type Conversion9' */
  real_T RX_delta_time_mk;             /* '<S518>/Data Type Conversion10' */
  real_T RX_time_ad;                   /* '<S518>/Data Type Conversion9' */
  real_T RX_delta_time_m3;             /* '<S565>/Data Type Conversion10' */
  real_T RX_time_oj;                   /* '<S565>/Data Type Conversion9' */
  real_T RX_delta_time_ne;             /* '<S567>/Data Type Conversion10' */
  real_T RX_time_h;                    /* '<S567>/Data Type Conversion9' */
  real_T RX_delta_time_c;              /* '<S569>/Data Type Conversion10' */
  real_T RX_time_i0;                   /* '<S569>/Data Type Conversion9' */
  real_T RX_delta_time_mb;             /* '<S571>/Data Type Conversion10' */
  real_T RX_time_p;                    /* '<S571>/Data Type Conversion9' */
  real_T SID_l;                        /* '<S573>/Switch' */
  real_T SetMode;                      /* '<S573>/Switch' */
  real_T OpMode;                       /* '<S573>/Switch' */
  real_T VDOP;                         /* '<S573>/Switch' */
  real_T TDOP;                         /* '<S573>/Switch' */
  real_T RX_time_ij;                   /* '<S573>/Switch' */
  real_T RX_delta_time_ok;             /* '<S573>/Switch' */
  real_T RX_delta_time_h;              /* '<S576>/Data Type Conversion10' */
  real_T RX_time_kq;                   /* '<S576>/Data Type Conversion9' */
  real_T RX_time_n;                    /* '<S443>/Switch' */
  real_T RX_delta_time_h2;             /* '<S443>/Switch' */
  real_T RX_time_gp;                   /* '<S610>/Data Type Conversion9' */
  real_T RX_time_cd;                   /* '<S446>/Multiport_Switch' */
  real_T RX_delta_time_h1;             /* '<S610>/Data Type Conversion10' */
  real_T RX_delta_time_h3;             /* '<S446>/Multiport_Switch' */
  real_T RX_delta_time_k;              /* '<S621>/Data Type Conversion1' */
  real_T RX_delta_time_e;              /* '<S621>/Data Type Conversion10' */
  real_T RX_time_kk;                   /* '<S621>/Data Type Conversion3' */
  real_T RX_delta_time_o1;             /* '<S621>/Data Type Conversion4' */
  real_T RX_time_iv;                   /* '<S621>/Data Type Conversion6' */
  real_T RX_time_hl;                   /* '<S621>/Data Type Conversion9' */
  real_T RX_time_d;                    /* '<S625>/Switch' */
  real_T RX_delta_time_oc;             /* '<S625>/Switch' */
  real_T XPR1ControlStatus;            /* '<S628>/Data Type Conversion1' */
  real_T RX_delta_time_nb;             /* '<S628>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S628>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S628>/Data Type Conversion3' */
  real_T RX_time_hs;                   /* '<S628>/Data Type Conversion9' */
  real_T RX_delta_time_ki;             /* '<S630>/Data Type Conversion10' */
  real_T RX_time_of;                   /* '<S630>/Data Type Conversion9' */
  real_T RX_delta_time_g;              /* '<S632>/Data Type Conversion10' */
  real_T RX_time_ct;                   /* '<S632>/Data Type Conversion9' */
  real_T RX_delta_time_ji;             /* '<S634>/Data Type Conversion10' */
  real_T RX_time_o0;                   /* '<S634>/Data Type Conversion9' */
  real_T RX_delta_time_cq;             /* '<S636>/Data Type Conversion10' */
  real_T RX_time_kp;                   /* '<S636>/Data Type Conversion9' */
  real_T RX_delta_time_at;             /* '<S638>/Data Type Conversion10' */
  real_T RX_time_du;                   /* '<S638>/Data Type Conversion9' */
  real_T RX_delta_time_jg;             /* '<S640>/Data Type Conversion10' */
  real_T RX_time_nl;                   /* '<S640>/Data Type Conversion9' */
  real_T RX_delta_time_i;              /* '<S642>/Data Type Conversion10' */
  real_T RX_time_hn;                   /* '<S642>/Data Type Conversion9' */
  real_T RX_delta_time_an;             /* '<S644>/Data Type Conversion10' */
  real_T RX_time_oo;                   /* '<S644>/Data Type Conversion9' */
  real_T PitchAngleExRange_d;          /* '<S646>/Data Type Conversion1' */
  real_T RX_delta_time_ln;             /* '<S646>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S646>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S646>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S646>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S646>/Data Type Conversion5' */
  real_T RX_time_gt;                   /* '<S646>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S415>/Constant2' */
  real_T DataTypeConversion4_o;        /* '<S668>/Data Type Conversion4' */
  real_T DataTypeConversion1_i;        /* '<S669>/Data Type Conversion1' */
  real_T DataTypeConversion1_n;        /* '<S670>/Data Type Conversion1' */
  real_T RX_time_pz;                   /* '<S583>/Data Type Conversion9' */
  real_T RX_time_jq;                   /* '<S584>/Data Type Conversion9' */
  real_T RX_time_in;                   /* '<S444>/Multiport_Switch' */
  real_T RX_delta_time_iu;             /* '<S583>/Data Type Conversion10' */
  real_T RX_delta_time_cw;             /* '<S584>/Data Type Conversion10' */
  real_T RX_delta_time_az;             /* '<S444>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S680>/Data Type Conversion5' */
  real_T DataTypeConversion5_j;        /* '<S420>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S681>/Data Type Conversion9' */
  real_T DataTypeConversion6_a;        /* '<S420>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S682>/Data Type Conversion11' */
  real_T DataTypeConversion7_g;        /* '<S420>/Data Type Conversion7' */
  real_T RX_time_pn;                   /* '<S597>/Data Type Conversion9' */
  real_T RX_time_mv;                   /* '<S445>/Multiport_Switch' */
  real_T RX_delta_time_p;              /* '<S597>/Data Type Conversion10' */
  real_T RX_delta_time_db;             /* '<S445>/Multiport_Switch' */
  real_T UnitDelay_m;                  /* '<S748>/Unit Delay' */
  real_T Switch_f;                     /* '<S748>/Switch' */
  real_T Gain_b;                       /* '<S748>/Gain' */
  real_T UnitDelay_b;                  /* '<S749>/Unit Delay' */
  real_T Switch_b;                     /* '<S749>/Switch' */
  real_T Gain_br;                      /* '<S749>/Gain' */
  real_T ShiftControlFreq;             /* '<S416>/ShifterControlFreq' */
  real_T SFunction1_e;                 /* '<S730>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S416>/ShifterControlDC2' */
  real_T SFunction1_f;                 /* '<S731>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S416>/ShifterControlDC1' */
  real_T SFunction1_o1_a;              /* '<S1069>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S1069>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1069>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1069>/S-Function1' */
  real_T SFunction1_o1_ac;             /* '<S1065>/S-Function1' */
  real_T SFunction1_o2_br;             /* '<S1065>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S1065>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S1065>/S-Function1' */
  real_T SFunction1_o1_h;              /* '<S1064>/S-Function1' */
  real_T SFunction1_o2_jd;             /* '<S1064>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S1064>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S1064>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S859>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S859>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1054>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1054>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1054>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_j;     /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_i;     /* '<S1054>/Bus Selector' */
  real_T BrakeSwitch_m;                /* '<S1054>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1054>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1054>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1054>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1054>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1054>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1054>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1054>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1055>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1055>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1055>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1055>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1055>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1055>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1055>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1055>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1055>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1055>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1055>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1055>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1055>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1055>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1055>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1055>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1055>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1055>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1055>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1055>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1055>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1055>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1055>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1055>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1055>/Bus Selector' */
  real_T SFunction1_o1_k;              /* '<S1057>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S1057>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S1057>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S1057>/S-Function1' */
  real_T SFunction1_o1_j;              /* '<S1056>/S-Function1' */
  real_T SFunction1_o2_ju;             /* '<S1056>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S1056>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S1056>/S-Function1' */
  real_T DataTypeConversion_m;         /* '<S1043>/Data Type Conversion' */
  real_T DataTypeConversion1_c;        /* '<S1043>/Data Type Conversion1' */
  real_T DataTypeConversion2_e;        /* '<S1043>/Data Type Conversion2' */
  real_T SFunction1_o1_jk;             /* '<S1045>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S1045>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S1045>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S1045>/S-Function1' */
  real_T BrakingPID_Y_k;               /* '<S1015>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S1015>/Switch1' */
  real_T DataTypeConversion1_ej;       /* '<S1018>/Data Type Conversion1' */
  real_T DataTypeConversion2_m;        /* '<S1018>/Data Type Conversion2' */
  real_T DataTypeConversion3_b;        /* '<S1018>/Data Type Conversion3' */
  real_T DataTypeConversion4_l;        /* '<S1018>/Data Type Conversion4' */
  real_T DataTypeConversion5_l;        /* '<S1018>/Data Type Conversion5' */
  real_T DataTypeConversion6_b;        /* '<S1018>/Data Type Conversion6' */
  real_T DataTypeConversion7_o;        /* '<S1018>/Data Type Conversion7' */
  real_T Saturation_d;                 /* '<S1014>/Saturation' */
  real_T BrakingPID_Y_kq;              /* '<S1014>/Bus Selector' */
  real_T Gain_pu;                      /* '<S1014>/Gain' */
  real_T Gain_c;                       /* '<S1031>/Gain' */
  real_T Gain1_g;                      /* '<S1031>/Gain1' */
  real_T DataTypeConversion1_l[8];     /* '<S1012>/Data Type Conversion1' */
  real_T FrontAxleSpeed_e;             /* '<S1028>/Bus Selector4' */
  real_T DataTypeConversion_fp;        /* '<S1028>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_h; /* '<S1028>/Bus Selector4' */
  real_T DataTypeConversion1_j;        /* '<S1028>/Data Type Conversion1' */
  real_T SPN1808_YawRate_h;            /* '<S1028>/Bus Selector4' */
  real_T DataTypeConversion2_a;        /* '<S1028>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_d;/* '<S1028>/Bus Selector4' */
  real_T DataTypeConversion3_a;        /* '<S1028>/Data Type Conversion3' */
  real_T DataType;                     /* '<S1027>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S1013>/Shift_Arithmetic 4' */
  real_T DataType_n;                   /* '<S1023>/DataType' */
  real_T DataType_l;                   /* '<S1024>/DataType' */
  real_T DataType_f;                   /* '<S1025>/DataType' */
  real_T DataType_g;                   /* '<S1026>/DataType' */
  real_T Shift_Arithmetic;             /* '<S1013>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S1013>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S1013>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S1013>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S1015>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_i;     /* '<S1015>/Divide1' */
  real_T SFunction1_o1_n;              /* '<S1029>/S-Function1' */
  real_T SFunction1_o2_j3;             /* '<S1029>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S1029>/S-Function1' */
  real_T SFunction1_o4_ev;             /* '<S1029>/S-Function1' */
  real_T SFunction1_o1_ao;             /* '<S1021>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S1021>/S-Function1' */
  real_T SFunction1_o3_mp;             /* '<S1021>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S1021>/S-Function1' */
  real_T SFunction1_o1_hw;             /* '<S1019>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S1019>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S1019>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S1019>/S-Function1' */
  real_T DataTypeConversion4_f;        /* '<S951>/Data Type Conversion4' */
  real_T DataType_le;                  /* '<S948>/DataType' */
  real_T Shift_Arithmetic2_h;          /* '<S940>/Shift_Arithmetic 2' */
  real_T DataType_ly;                  /* '<S946>/DataType' */
  real_T DataType_c;                   /* '<S947>/DataType' */
  real_T DataType_b;                   /* '<S949>/DataType' */
  real_T DataType_ny;                  /* '<S950>/DataType' */
  real_T Shift_Arithmetic_e;           /* '<S940>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_p;          /* '<S940>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_p;          /* '<S940>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_o;          /* '<S940>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_ce;       /* '<S959>/Data Type Conversion1' */
  real_T DataTypeConversion2_p4;       /* '<S959>/Data Type Conversion2' */
  real_T DataTypeConversion3_e;        /* '<S959>/Data Type Conversion3' */
  real_T DataTypeConversion4_g;        /* '<S959>/Data Type Conversion4' */
  real_T DataTypeConversion5_a;        /* '<S959>/Data Type Conversion5' */
  real_T DataTypeConversion6_p;        /* '<S959>/Data Type Conversion6' */
  real_T DataTypeConversion7_n;        /* '<S959>/Data Type Conversion7' */
  real_T DataTypeConversion8_a;        /* '<S959>/Data Type Conversion8' */
  real_T DataType_m;                   /* '<S956>/DataType' */
  real_T Shift_Arithmetic2_o;          /* '<S941>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_o;        /* '<S960>/Data Type Conversion1' */
  real_T DataTypeConversion2_ew;       /* '<S960>/Data Type Conversion2' */
  real_T DataTypeConversion3_j;        /* '<S960>/Data Type Conversion3' */
  real_T DataTypeConversion4_a;        /* '<S960>/Data Type Conversion4' */
  real_T DataTypeConversion5_f;        /* '<S960>/Data Type Conversion5' */
  real_T DataTypeConversion6_g;        /* '<S960>/Data Type Conversion6' */
  real_T DataTypeConversion7_e;        /* '<S960>/Data Type Conversion7' */
  real_T DataTypeConversion8_f;        /* '<S960>/Data Type Conversion8' */
  real_T DataType_h;                   /* '<S957>/DataType' */
  real_T Shift_Arithmetic3_i;          /* '<S941>/Shift_Arithmetic 3' */
  real_T DataType_bi;                  /* '<S954>/DataType' */
  real_T DataType_o;                   /* '<S955>/DataType' */
  real_T DataType_d;                   /* '<S958>/DataType' */
  real_T Shift_Arithmetic_p;           /* '<S941>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_l;          /* '<S941>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_h;          /* '<S941>/Shift_Arithmetic 4' */
  real_T Switch_k;                     /* '<S994>/Switch' */
  real_T Switch2;                      /* '<S1004>/Switch2' */
  real_T DataType_hl;                  /* '<S1004>/DataType' */
  real_T DataTypeConversion1_ox[8];    /* '<S942>/Data Type Conversion1' */
  real_T DataType_a;                   /* '<S971>/DataType' */
  real_T Shift_Arithmetic3_m;          /* '<S943>/Shift_Arithmetic 3' */
  real_T DataType_lr;                  /* '<S968>/DataType' */
  real_T DataType_ms;                  /* '<S969>/DataType' */
  real_T DataType_aw;                  /* '<S970>/DataType' */
  real_T DataType_k;                   /* '<S972>/DataType' */
  real_T Shift_Arithmetic_c;           /* '<S943>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_b;          /* '<S943>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_hd;         /* '<S943>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_e;          /* '<S943>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S1005>/Product' */
  real_T Switch1;                      /* '<S1004>/Switch1' */
  real_T Multiport_Switch;             /* '<S994>/Multiport_Switch' */
  real_T SFunction1_o1_h4;             /* '<S974>/S-Function1' */
  real_T SFunction1_o2_b1;             /* '<S974>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S974>/S-Function1' */
  real_T SFunction1_o4_jv;             /* '<S974>/S-Function1' */
  real_T SFunction1_o1_c;              /* '<S966>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S966>/S-Function1' */
  real_T SFunction1_o3_n1;             /* '<S966>/S-Function1' */
  real_T SFunction1_o4_my;             /* '<S966>/S-Function1' */
  real_T SFunction1_o1_a5;             /* '<S965>/S-Function1' */
  real_T SFunction1_o2_nw;             /* '<S965>/S-Function1' */
  real_T SFunction1_o3_g1;             /* '<S965>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S965>/S-Function1' */
  real_T SFunction1_o1_l;              /* '<S962>/S-Function1' */
  real_T SFunction1_o2_jq;             /* '<S962>/S-Function1' */
  real_T SFunction1_o3_nn;             /* '<S962>/S-Function1' */
  real_T SFunction1_o4_g3;             /* '<S962>/S-Function1' */
  real_T SFunction1_o1_ky;             /* '<S961>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S961>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S961>/S-Function1' */
  real_T SFunction1_o4_ek;             /* '<S961>/S-Function1' */
  real_T SFunction1_o1_kc;             /* '<S952>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S952>/S-Function1' */
  real_T SFunction1_o3_mw;             /* '<S952>/S-Function1' */
  real_T SFunction1_o4_gi;             /* '<S952>/S-Function1' */
  real_T DataTypeConversion1_p[8];     /* '<S881>/Data Type Conversion1' */
  real_T DataType_fr;                  /* '<S901>/DataType' */
  real_T Shift_Arithmetic2_d;          /* '<S881>/Shift_Arithmetic 2' */
  real_T DataType_m2;                  /* '<S897>/DataType' */
  real_T DataType_nq;                  /* '<S902>/DataType' */
  real_T Shift_Arithmetic3_b;          /* '<S881>/Shift_Arithmetic 3' */
  real_T DataType_no;                  /* '<S903>/DataType' */
  real_T Shift_Arithmetic4_a;          /* '<S881>/Shift_Arithmetic 4' */
  real_T DataType_gt;                  /* '<S900>/DataType' */
  real_T Shift_Arithmetic_n;           /* '<S881>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_g;          /* '<S881>/Shift_Arithmetic 1' */
  real_T Latitude__j;                  /* '<S938>/Bus Selector' */
  real_T DataTypeConversion_c;         /* '<S938>/Data Type Conversion' */
  real_T Longitude__g;                 /* '<S938>/Bus Selector' */
  real_T DataTypeConversion1_m;        /* '<S938>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_l;         /* '<S888>/Bus Selector' */
  real_T ParkingBrakeSwitch_h;         /* '<S888>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_h;      /* '<S888>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_c;  /* '<S888>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_jj;    /* '<S888>/Bus Selector' */
  real_T CruiseCtrlActive_n;           /* '<S888>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_ii;    /* '<S888>/Bus Selector' */
  real_T BrakeSwitch_mq;               /* '<S888>/Bus Selector' */
  real_T ClutchSwitch_i;               /* '<S888>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_l;        /* '<S888>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_f;      /* '<S888>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_l;     /* '<S888>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_c; /* '<S888>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_j;         /* '<S888>/Bus Selector' */
  real_T PTOGovernorState_m;           /* '<S888>/Bus Selector' */
  real_T CruiseCtrlStates_c;           /* '<S888>/Bus Selector' */
  real_T EngIdleIncrementSwitch_k;     /* '<S888>/Bus Selector' */
  real_T EngIdleDecrementSwitch_c;     /* '<S888>/Bus Selector' */
  real_T EngTestModeSwitch_f;          /* '<S888>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_g;  /* '<S888>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_l1;        /* '<S889>/Bus Selector' */
  real_T ParkingBrakeSwitch_hd;        /* '<S889>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_hy;     /* '<S889>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_cf; /* '<S889>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_jjn;   /* '<S889>/Bus Selector' */
  real_T CruiseCtrlActive_ns;          /* '<S889>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_iim;   /* '<S889>/Bus Selector' */
  real_T BrakeSwitch_mq0;              /* '<S889>/Bus Selector' */
  real_T ClutchSwitch_ic;              /* '<S889>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_lx;       /* '<S889>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_f1;     /* '<S889>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_l3;    /* '<S889>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_cw;/* '<S889>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_jb;        /* '<S889>/Bus Selector' */
  real_T PTOGovernorState_mu;          /* '<S889>/Bus Selector' */
  real_T CruiseCtrlStates_cv;          /* '<S889>/Bus Selector' */
  real_T EngIdleIncrementSwitch_k0;    /* '<S889>/Bus Selector' */
  real_T EngIdleDecrementSwitch_cv;    /* '<S889>/Bus Selector' */
  real_T EngTestModeSwitch_fw;         /* '<S889>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_gz; /* '<S889>/Bus Selector' */
  real_T DataTypeConversion1_m2[8];    /* '<S880>/Data Type Conversion1' */
  real_T SID_k;                        /* '<S912>/Bus Selector' */
  real_T DataTypeConversion_pi;        /* '<S912>/Data Type Conversion' */
  real_T COGReference_k;               /* '<S912>/Bus Selector' */
  real_T DataTypeConversion1_k;        /* '<S912>/Data Type Conversion1' */
  real_T CourseOverGround_i;           /* '<S912>/Bus Selector' */
  real_T DataTypeConversion2_m4;       /* '<S912>/Data Type Conversion2' */
  real_T SpeedOverGround_l;            /* '<S912>/Bus Selector' */
  real_T DataTypeConversion3_h;        /* '<S912>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S914>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S914>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S914>/Bus Selector' */
  real_T EBSBrakeSwitch_c;             /* '<S914>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S914>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S914>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S914>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S914>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S914>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S914>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S914>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S914>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S914>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S914>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S914>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S914>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S914>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S914>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S914>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S914>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S914>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S914>/Bus Selector' */
  real_T SFunction1_o1_ko;             /* '<S939>/S-Function1' */
  real_T SFunction1_o2_jw;             /* '<S939>/S-Function1' */
  real_T SFunction1_o3_mo;             /* '<S939>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S939>/S-Function1' */
  real_T Unit_Delay;                   /* '<S928>/Unit_Delay' */
  real_T FixPtSum1_a;                  /* '<S936>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S937>/FixPt Switch' */
  real_T SFunction1_o1_jg;             /* '<S915>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S915>/S-Function1' */
  real_T SFunction1_o3_nw;             /* '<S915>/S-Function1' */
  real_T SFunction1_o4_jg;             /* '<S915>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S913>/S-Function1' */
  real_T SFunction1_o2_brz;            /* '<S913>/S-Function1' */
  real_T SFunction1_o3_hv;             /* '<S913>/S-Function1' */
  real_T SFunction1_o4_m0;             /* '<S913>/S-Function1' */
  real_T SFunction1_o1_ag;             /* '<S911>/S-Function1' */
  real_T SFunction1_o2_gg;             /* '<S911>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S911>/S-Function1' */
  real_T SFunction1_o4_pe;             /* '<S911>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S910>/S-Function1' */
  real_T SFunction1_o2_nm;             /* '<S910>/S-Function1' */
  real_T SFunction1_o3_lz;             /* '<S910>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S910>/S-Function1' */
  real_T SFunction1_o1_cb;             /* '<S895>/S-Function1' */
  real_T SFunction1_o2_nh;             /* '<S895>/S-Function1' */
  real_T SFunction1_o3_fe;             /* '<S895>/S-Function1' */
  real_T SFunction1_o4_eb;             /* '<S895>/S-Function1' */
  real_T SFunction1_o1_ev;             /* '<S894>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S894>/S-Function1' */
  real_T SFunction1_o3_hm;             /* '<S894>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S894>/S-Function1' */
  real_T SFunction1_o1_aj;             /* '<S891>/S-Function1' */
  real_T SFunction1_o2_nb;             /* '<S891>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S891>/S-Function1' */
  real_T SFunction1_o4_c4;             /* '<S891>/S-Function1' */
  real_T SFunction1_o1_pr;             /* '<S890>/S-Function1' */
  real_T SFunction1_o2_co;             /* '<S890>/S-Function1' */
  real_T SFunction1_o3_ls;             /* '<S890>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S890>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S869>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S869>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S869>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S869>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S869>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S869>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S869>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S869>/Bus Selector' */
  real_T DataType_o3;                  /* '<S866>/DataType' */
  real_T Shift_Arithmetic2_g;          /* '<S861>/Shift_Arithmetic 2' */
  real_T DataType_h1;                  /* '<S864>/DataType' */
  real_T DataType_i;                   /* '<S865>/DataType' */
  real_T DataType_ls;                  /* '<S867>/DataType' */
  real_T DataType_j;                   /* '<S868>/DataType' */
  real_T Shift_Arithmetic_a;           /* '<S861>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_gq;         /* '<S861>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_f;          /* '<S861>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_g;          /* '<S861>/Shift_Arithmetic 4' */
  real_T BarometricPress_h;            /* '<S877>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S877>/Bus Selector' */
  real_T AmbientAirTemp_h;             /* '<S877>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S877>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S877>/Bus Selector' */
  real_T DataType_dp;                  /* '<S874>/DataType' */
  real_T Shift_Arithmetic2_p;          /* '<S862>/Shift_Arithmetic 2' */
  real_T DataType_mv;                  /* '<S872>/DataType' */
  real_T DataType_e;                   /* '<S873>/DataType' */
  real_T DataType_gw;                  /* '<S875>/DataType' */
  real_T DataType_fk;                  /* '<S876>/DataType' */
  real_T Shift_Arithmetic_pg;          /* '<S862>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_m;          /* '<S862>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_d;          /* '<S862>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_gy;         /* '<S862>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_lh;             /* '<S878>/S-Function1' */
  real_T SFunction1_o2_og;             /* '<S878>/S-Function1' */
  real_T SFunction1_o3_nw3;            /* '<S878>/S-Function1' */
  real_T SFunction1_o4_dn;             /* '<S878>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S870>/S-Function1' */
  real_T SFunction1_o2_jb;             /* '<S870>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S870>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S870>/S-Function1' */
  real_T Unit_Delay_c;                 /* '<S847>/Unit_Delay' */
  real_T Add;                          /* '<S847>/Add' */
  real_T Xold_f;                       /* '<S842>/FixPt Unit Delay1' */
  real_T Init_jy;                      /* '<S842>/Init' */
  real_T Abs_p;                        /* '<S839>/Abs' */
  real_T Product1_h;                   /* '<S839>/Product1' */
  real_T Add1_nu;                      /* '<S839>/Add1' */
  real_T MinMax2;                      /* '<S839>/MinMax2' */
  real_T Abs1;                         /* '<S839>/Abs1' */
  real_T Product2_l;                   /* '<S839>/Product2' */
  real_T Subtract1_l;                  /* '<S839>/Subtract1' */
  real_T MinMax1_c;                    /* '<S839>/MinMax1' */
  real_T Subtract_k;                   /* '<S767>/Subtract' */
  real_T Abs_k;                        /* '<S767>/Abs' */
  real_T Sum;                          /* '<S757>/Sum' */
  real_T Sum_k;                        /* '<S756>/Sum' */
  real_T Sum_d;                        /* '<S749>/Sum' */
  real_T Sum_o;                        /* '<S748>/Sum' */
  real_T timeStamp;                    /* '<S651>/timeStamp' */
  real_T Unit_Delay_p;                 /* '<S651>/Unit_Delay' */
  real_T SFunction1_o1_ow;             /* '<S647>/S-Function1' */
  real_T SFunction1_o2_jj;             /* '<S647>/S-Function1' */
  real_T SFunction1_o3_at;             /* '<S647>/S-Function1' */
  real_T SFunction1_o4_m2;             /* '<S647>/S-Function1' */
  real_T SFunction1_o5;                /* '<S647>/S-Function1' */
  real_T SFunction1_o6;                /* '<S647>/S-Function1' */
  real_T SFunction1_o7;                /* '<S647>/S-Function1' */
  real_T SFunction1_o8;                /* '<S647>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S645>/S-Function1' */
  real_T SFunction1_o3_a0;             /* '<S645>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S645>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S645>/S-Function1' */
  real_T SFunction1_o8_c;              /* '<S645>/S-Function1' */
  real_T SFunction1_o9;                /* '<S645>/S-Function1' */
  real_T SFunction1_o1_ol;             /* '<S643>/S-Function1' */
  real_T SFunction1_o2_dm;             /* '<S643>/S-Function1' */
  real_T SFunction1_o3_na;             /* '<S643>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S643>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S643>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S643>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S643>/S-Function1' */
  real_T SFunction1_o8_a;              /* '<S643>/S-Function1' */
  real_T SFunction1_o9_j;              /* '<S643>/S-Function1' */
  real_T SFunction1_o10;               /* '<S643>/S-Function1' */
  real_T SFunction1_o1_n5;             /* '<S641>/S-Function1' */
  real_T SFunction1_o2_hw;             /* '<S641>/S-Function1' */
  real_T SFunction1_o3_cg;             /* '<S641>/S-Function1' */
  real_T SFunction1_o4_eq;             /* '<S641>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S641>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S641>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S641>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S641>/S-Function1' */
  real_T SFunction1_o9_g;              /* '<S641>/S-Function1' */
  real_T SFunction1_o10_k;             /* '<S641>/S-Function1' */
  real_T SFunction1_o11;               /* '<S641>/S-Function1' */
  real_T SFunction1_o12;               /* '<S641>/S-Function1' */
  real_T SFunction1_o13;               /* '<S641>/S-Function1' */
  real_T SFunction1_o14;               /* '<S641>/S-Function1' */
  real_T SFunction1_o15;               /* '<S641>/S-Function1' */
  real_T SFunction1_o16;               /* '<S641>/S-Function1' */
  real_T SFunction1_o17;               /* '<S641>/S-Function1' */
  real_T SFunction1_o18;               /* '<S641>/S-Function1' */
  real_T SFunction1_o19;               /* '<S641>/S-Function1' */
  real_T SFunction1_o20;               /* '<S641>/S-Function1' */
  real_T SFunction1_o21;               /* '<S641>/S-Function1' */
  real_T SFunction1_o22;               /* '<S641>/S-Function1' */
  real_T SFunction1_o23;               /* '<S641>/S-Function1' */
  real_T SFunction1_o24;               /* '<S641>/S-Function1' */
  real_T SFunction1_o25;               /* '<S641>/S-Function1' */
  real_T SFunction1_o26;               /* '<S641>/S-Function1' */
  real_T SFunction1_o27;               /* '<S641>/S-Function1' */
  real_T SFunction1_o28;               /* '<S641>/S-Function1' */
  real_T SFunction1_o1_lg;             /* '<S639>/S-Function1' */
  real_T SFunction1_o2_lu;             /* '<S639>/S-Function1' */
  real_T SFunction1_o3_ct;             /* '<S639>/S-Function1' */
  real_T SFunction1_o4_os;             /* '<S639>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S639>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S639>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S639>/S-Function1' */
  real_T SFunction1_o1_ak;             /* '<S637>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S637>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S637>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S637>/S-Function1' */
  real_T SFunction1_o5_f3;             /* '<S637>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S637>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S637>/S-Function1' */
  real_T SFunction1_o8_d;              /* '<S637>/S-Function1' */
  real_T SFunction1_o9_a;              /* '<S637>/S-Function1' */
  real_T SFunction1_o1_d;              /* '<S635>/S-Function1' */
  real_T SFunction1_o2_jz;             /* '<S635>/S-Function1' */
  real_T SFunction1_o3_fv;             /* '<S635>/S-Function1' */
  real_T SFunction1_o4_mx;             /* '<S635>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S635>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S635>/S-Function1' */
  real_T SFunction1_o7_c0;             /* '<S635>/S-Function1' */
  real_T SFunction1_o8_l;              /* '<S635>/S-Function1' */
  real_T SFunction1_o9_az;             /* '<S635>/S-Function1' */
  real_T SFunction1_o1_f;              /* '<S633>/S-Function1' */
  real_T SFunction1_o2_ia;             /* '<S633>/S-Function1' */
  real_T SFunction1_o3_eu;             /* '<S633>/S-Function1' */
  real_T SFunction1_o4_fd;             /* '<S633>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S633>/S-Function1' */
  real_T SFunction1_o6_ls;             /* '<S633>/S-Function1' */
  real_T SFunction1_o7_ah;             /* '<S633>/S-Function1' */
  real_T SFunction1_o8_fp;             /* '<S633>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S633>/S-Function1' */
  real_T SFunction1_o1_f5;             /* '<S631>/S-Function1' */
  real_T SFunction1_o2_gk;             /* '<S631>/S-Function1' */
  real_T SFunction1_o3_aa;             /* '<S631>/S-Function1' */
  real_T SFunction1_o4_p0;             /* '<S631>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S631>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S631>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S631>/S-Function1' */
  real_T SFunction1_o8_lw;             /* '<S631>/S-Function1' */
  real_T SFunction1_o9_m;              /* '<S631>/S-Function1' */
  real_T SFunction1_o10_l;             /* '<S631>/S-Function1' */
  real_T SFunction1_o1_kq;             /* '<S629>/S-Function1' */
  real_T SFunction1_o2_gr;             /* '<S629>/S-Function1' */
  real_T SFunction1_o3_pd;             /* '<S629>/S-Function1' */
  real_T SFunction1_o4_jgy;            /* '<S629>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S629>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S629>/S-Function1' */
  real_T SFunction1_o7_av;             /* '<S629>/S-Function1' */
  real_T SFunction1_o8_cu;             /* '<S629>/S-Function1' */
  real_T SFunction1_o9_i;              /* '<S629>/S-Function1' */
  real_T SFunction1_o10_n;             /* '<S629>/S-Function1' */
  real_T SFunction1_o11_j;             /* '<S629>/S-Function1' */
  real_T SFunction1_o12_g;             /* '<S629>/S-Function1' */
  real_T SFunction1_o13_g;             /* '<S629>/S-Function1' */
  real_T RX_time_nlr;                  /* '<S625>/Data Type Conversion9' */
  real_T RX_time_j1;                   /* '<S625>/Data Type Conversion2' */
  real_T RX_delta_time_cz;             /* '<S625>/Data Type Conversion10' */
  real_T RX_delta_time_o1l;            /* '<S625>/Data Type Conversion1' */
  real_T SFunction1_o1_po;             /* '<S627>/S-Function1' */
  real_T SFunction1_o2_bc;             /* '<S627>/S-Function1' */
  real_T SFunction1_o3_g4;             /* '<S627>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S627>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S627>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S626>/S-Function1' */
  real_T SFunction1_o2_nv;             /* '<S626>/S-Function1' */
  real_T SFunction1_o3_pv;             /* '<S626>/S-Function1' */
  real_T SFunction1_o4_fz;             /* '<S626>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S626>/S-Function1' */
  real_T SFunction1_o1_m;              /* '<S624>/S-Function1' */
  real_T SFunction1_o2_kz;             /* '<S624>/S-Function1' */
  real_T SFunction1_o3_on;             /* '<S624>/S-Function1' */
  real_T SFunction1_o4_ke;             /* '<S624>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S624>/S-Function1' */
  real_T SFunction1_o6_pv;             /* '<S624>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S624>/S-Function1' */
  real_T SFunction1_o1_fq;             /* '<S623>/S-Function1' */
  real_T SFunction1_o2_gp;             /* '<S623>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S623>/S-Function1' */
  real_T SFunction1_o4_l0;             /* '<S623>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S623>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S623>/S-Function1' */
  real_T SFunction1_o1_lb;             /* '<S622>/S-Function1' */
  real_T SFunction1_o2_om;             /* '<S622>/S-Function1' */
  real_T SFunction1_o3_gw;             /* '<S622>/S-Function1' */
  real_T SFunction1_o4_pa;             /* '<S622>/S-Function1' */
  real_T SFunction1_o5_br;             /* '<S622>/S-Function1' */
  real_T SFunction1_o6_p3;             /* '<S622>/S-Function1' */
  real_T SFunction1_o1_lv;             /* '<S614>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S614>/S-Function1' */
  real_T SFunction1_o3_atb;            /* '<S614>/S-Function1' */
  real_T SFunction1_o4_h3;             /* '<S614>/S-Function1' */
  real_T SFunction1_o5_f3f;            /* '<S614>/S-Function1' */
  real_T SFunction1_o1_a1;             /* '<S613>/S-Function1' */
  real_T SFunction1_o2_dg;             /* '<S613>/S-Function1' */
  real_T SFunction1_o3_oh;             /* '<S613>/S-Function1' */
  real_T SFunction1_o4_jd;             /* '<S613>/S-Function1' */
  real_T SFunction1_o5_mw;             /* '<S613>/S-Function1' */
  real_T SFunction1_o1_a54;            /* '<S612>/S-Function1' */
  real_T SFunction1_o2_kd;             /* '<S612>/S-Function1' */
  real_T SFunction1_o3_ek;             /* '<S612>/S-Function1' */
  real_T SFunction1_o4_ex;             /* '<S612>/S-Function1' */
  real_T SFunction1_o5_kn;             /* '<S612>/S-Function1' */
  real_T RX_time_e;                    /* '<S608>/Data Type Conversion9' */
  real_T RX_time_kt;                   /* '<S609>/Data Type Conversion9' */
  real_T RX_delta_time_pk;             /* '<S608>/Data Type Conversion10' */
  real_T RX_delta_time_h14;            /* '<S609>/Data Type Conversion10' */
  real_T SFunction1_o1_dp;             /* '<S601>/S-Function1' */
  real_T SFunction1_o2_dc;             /* '<S601>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S601>/S-Function1' */
  real_T SFunction1_o4_ah;             /* '<S601>/S-Function1' */
  real_T SFunction1_o5_dl;             /* '<S601>/S-Function1' */
  real_T SFunction1_o6_o2;             /* '<S601>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S601>/S-Function1' */
  real_T SFunction1_o8_dr;             /* '<S601>/S-Function1' */
  real_T SFunction1_o9_ch;             /* '<S601>/S-Function1' */
  real_T SFunction1_o10_p;             /* '<S601>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S601>/S-Function1' */
  real_T SFunction1_o1_dr;             /* '<S600>/S-Function1' */
  real_T SFunction1_o2_gv;             /* '<S600>/S-Function1' */
  real_T SFunction1_o3_p0;             /* '<S600>/S-Function1' */
  real_T SFunction1_o4_hs;             /* '<S600>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S600>/S-Function1' */
  real_T SFunction1_o6_ix;             /* '<S600>/S-Function1' */
  real_T SFunction1_o7_nn;             /* '<S600>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S600>/S-Function1' */
  real_T SFunction1_o9_h;              /* '<S600>/S-Function1' */
  real_T SFunction1_o10_e;             /* '<S600>/S-Function1' */
  real_T SFunction1_o11_c;             /* '<S600>/S-Function1' */
  real_T SFunction1_o1_ld;             /* '<S599>/S-Function1' */
  real_T SFunction1_o2_g4;             /* '<S599>/S-Function1' */
  real_T SFunction1_o3_h1;             /* '<S599>/S-Function1' */
  real_T SFunction1_o4_pp;             /* '<S599>/S-Function1' */
  real_T SFunction1_o5_hd;             /* '<S599>/S-Function1' */
  real_T SFunction1_o6_f4;             /* '<S599>/S-Function1' */
  real_T SFunction1_o7_kv;             /* '<S599>/S-Function1' */
  real_T SFunction1_o8_m;              /* '<S599>/S-Function1' */
  real_T SFunction1_o9_ii;             /* '<S599>/S-Function1' */
  real_T SFunction1_o10_d;             /* '<S599>/S-Function1' */
  real_T SFunction1_o11_m;             /* '<S599>/S-Function1' */
  real_T RX_time_bw;                   /* '<S595>/Data Type Conversion9' */
  real_T RX_time_kc;                   /* '<S596>/Data Type Conversion9' */
  real_T RX_delta_time_ia;             /* '<S595>/Data Type Conversion10' */
  real_T RX_delta_time_ls;             /* '<S596>/Data Type Conversion10' */
  real_T SFunction1_o1_fo;             /* '<S588>/S-Function1' */
  real_T SFunction1_o2_mv;             /* '<S588>/S-Function1' */
  real_T SFunction1_o3_j5;             /* '<S588>/S-Function1' */
  real_T SFunction1_o4_n0;             /* '<S588>/S-Function1' */
  real_T SFunction1_o5_ov;             /* '<S588>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S588>/S-Function1' */
  real_T SFunction1_o7_ou;             /* '<S588>/S-Function1' */
  real_T SFunction1_o8_m0;             /* '<S588>/S-Function1' */
  real_T SFunction1_o9_l;              /* '<S588>/S-Function1' */
  real_T SFunction1_o10_c;             /* '<S588>/S-Function1' */
  real_T SFunction1_o11_l;             /* '<S588>/S-Function1' */
  real_T SFunction1_o1_koq;            /* '<S587>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S587>/S-Function1' */
  real_T SFunction1_o3_ab;             /* '<S587>/S-Function1' */
  real_T SFunction1_o4_ej;             /* '<S587>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S587>/S-Function1' */
  real_T SFunction1_o6_nf;             /* '<S587>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S587>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S587>/S-Function1' */
  real_T SFunction1_o9_mi;             /* '<S587>/S-Function1' */
  real_T SFunction1_o10_g;             /* '<S587>/S-Function1' */
  real_T SFunction1_o11_f;             /* '<S587>/S-Function1' */
  real_T SFunction1_o1_ajb;            /* '<S586>/S-Function1' */
  real_T SFunction1_o2_ej;             /* '<S586>/S-Function1' */
  real_T SFunction1_o3_as;             /* '<S586>/S-Function1' */
  real_T SFunction1_o4_it;             /* '<S586>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S586>/S-Function1' */
  real_T SFunction1_o6_gn;             /* '<S586>/S-Function1' */
  real_T SFunction1_o7_ad;             /* '<S586>/S-Function1' */
  real_T SFunction1_o8_pl;             /* '<S586>/S-Function1' */
  real_T SFunction1_o9_le;             /* '<S586>/S-Function1' */
  real_T SFunction1_o10_m;             /* '<S586>/S-Function1' */
  real_T SFunction1_o11_h;             /* '<S586>/S-Function1' */
  real_T RX_time_df;                   /* '<S582>/Data Type Conversion9' */
  real_T RX_delta_time_id;             /* '<S582>/Data Type Conversion10' */
  real_T RX_time_kn;                   /* '<S578>/Data Type Conversion9' */
  real_T RX_time_ec;                   /* '<S579>/Data Type Conversion9' */
  real_T RX_delta_time_ko;             /* '<S578>/Data Type Conversion10' */
  real_T RX_delta_time_in;             /* '<S579>/Data Type Conversion10' */
  real_T SFunction1_o1_gm;             /* '<S581>/S-Function1' */
  real_T SFunction1_o2_jh;             /* '<S581>/S-Function1' */
  real_T SFunction1_o3_ep;             /* '<S581>/S-Function1' */
  real_T SFunction1_o4_bl;             /* '<S581>/S-Function1' */
  real_T SFunction1_o5_my;             /* '<S581>/S-Function1' */
  real_T SFunction1_o1_cc;             /* '<S580>/S-Function1' */
  real_T SFunction1_o2_kb;             /* '<S580>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S580>/S-Function1' */
  real_T SFunction1_o4_hf;             /* '<S580>/S-Function1' */
  real_T SFunction1_o5_pr;             /* '<S580>/S-Function1' */
  real_T SFunction1_o1_i4;             /* '<S577>/S-Function1' */
  real_T SFunction1_o2_da;             /* '<S577>/S-Function1' */
  real_T SFunction1_o3_p1;             /* '<S577>/S-Function1' */
  real_T SFunction1_o4_aj;             /* '<S577>/S-Function1' */
  real_T SFunction1_o5_b0;             /* '<S577>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S577>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S577>/S-Function1' */
  real_T RX_time_gm;                   /* '<S573>/Data Type Conversion9' */
  real_T RX_time_as;                   /* '<S573>/Data Type Conversion2' */
  real_T RX_delta_time_g0;             /* '<S573>/Data Type Conversion10' */
  real_T RX_delta_time_dil;            /* '<S573>/Data Type Conversion1' */
  real_T SFunction1_o1_lr;             /* '<S575>/S-Function1' */
  real_T SFunction1_o2_mt;             /* '<S575>/S-Function1' */
  real_T SFunction1_o3_m3;             /* '<S575>/S-Function1' */
  real_T SFunction1_o4_ey;             /* '<S575>/S-Function1' */
  real_T SFunction1_o5_g5;             /* '<S575>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S575>/S-Function1' */
  real_T SFunction1_o7_jo;             /* '<S575>/S-Function1' */
  real_T SFunction1_o8_pc;             /* '<S575>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S575>/S-Function1' */
  real_T SFunction1_o1_nf;             /* '<S574>/S-Function1' */
  real_T SFunction1_o2_mj;             /* '<S574>/S-Function1' */
  real_T SFunction1_o3_l3;             /* '<S574>/S-Function1' */
  real_T SFunction1_o4_eg;             /* '<S574>/S-Function1' */
  real_T SFunction1_o5_pl;             /* '<S574>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S574>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S574>/S-Function1' */
  real_T SFunction1_o8_a4;             /* '<S574>/S-Function1' */
  real_T SFunction1_o9_p;              /* '<S574>/S-Function1' */
  real_T SFunction1_o1_lx;             /* '<S572>/S-Function1' */
  real_T SFunction1_o2_fb;             /* '<S572>/S-Function1' */
  real_T SFunction1_o3_js;             /* '<S572>/S-Function1' */
  real_T SFunction1_o4_b3;             /* '<S572>/S-Function1' */
  real_T SFunction1_o5_lx;             /* '<S572>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S572>/S-Function1' */
  real_T SFunction1_o1_nn;             /* '<S570>/S-Function1' */
  real_T SFunction1_o2_mg;             /* '<S570>/S-Function1' */
  real_T SFunction1_o3_ji;             /* '<S570>/S-Function1' */
  real_T SFunction1_o4_lp;             /* '<S570>/S-Function1' */
  real_T SFunction1_o5_gf;             /* '<S570>/S-Function1' */
  real_T SFunction1_o1_dx;             /* '<S568>/S-Function1' */
  real_T SFunction1_o2_h1;             /* '<S568>/S-Function1' */
  real_T SFunction1_o3_ee;             /* '<S568>/S-Function1' */
  real_T SFunction1_o4_gk;             /* '<S568>/S-Function1' */
  real_T SFunction1_o5_m2;             /* '<S568>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S568>/S-Function1' */
  real_T SFunction1_o7_oo;             /* '<S568>/S-Function1' */
  real_T SFunction1_o8_a2;             /* '<S568>/S-Function1' */
  real_T SFunction1_o9_ge;             /* '<S568>/S-Function1' */
  real_T SFunction1_o10_f;             /* '<S568>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S568>/S-Function1' */
  real_T SFunction1_o12_p;             /* '<S568>/S-Function1' */
  real_T SFunction1_o13_h;             /* '<S568>/S-Function1' */
  real_T SFunction1_o14_p;             /* '<S568>/S-Function1' */
  real_T SFunction1_o15_p;             /* '<S568>/S-Function1' */
  real_T SFunction1_o16_n;             /* '<S568>/S-Function1' */
  real_T SFunction1_o17_p;             /* '<S568>/S-Function1' */
  real_T SFunction1_o1_mp;             /* '<S566>/S-Function1' */
  real_T SFunction1_o2_a4;             /* '<S566>/S-Function1' */
  real_T SFunction1_o3_ob;             /* '<S566>/S-Function1' */
  real_T SFunction1_o4_jr;             /* '<S566>/S-Function1' */
  real_T SFunction1_o5_en;             /* '<S566>/S-Function1' */
  real_T SFunction1_o6_cv;             /* '<S566>/S-Function1' */
  real_T SFunction1_o7_ny;             /* '<S566>/S-Function1' */
  real_T SFunction1_o8_ab;             /* '<S566>/S-Function1' */
  real_T SFunction1_o9_px;             /* '<S566>/S-Function1' */
  real_T SFunction1_o10_ft;            /* '<S566>/S-Function1' */
  real_T SFunction1_o11_g;             /* '<S566>/S-Function1' */
  real_T timeStamp_c;                  /* '<S523>/timeStamp' */
  real_T Unit_Delay_n;                 /* '<S523>/Unit_Delay' */
  real_T SFunction1_o1_ie;             /* '<S519>/S-Function1' */
  real_T SFunction1_o2_js;             /* '<S519>/S-Function1' */
  real_T SFunction1_o3_a3;             /* '<S519>/S-Function1' */
  real_T SFunction1_o4_o2;             /* '<S519>/S-Function1' */
  real_T SFunction1_o5_co;             /* '<S519>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S519>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S519>/S-Function1' */
  real_T SFunction1_o8_g;              /* '<S519>/S-Function1' */
  real_T SFunction1_o9_cm;             /* '<S519>/S-Function1' */
  real_T SFunction1_o10_ey;            /* '<S519>/S-Function1' */
  real_T SFunction1_o1_mb;             /* '<S517>/S-Function1' */
  real_T SFunction1_o2_i1;             /* '<S517>/S-Function1' */
  real_T SFunction1_o3_ac;             /* '<S517>/S-Function1' */
  real_T SFunction1_o4_oc;             /* '<S517>/S-Function1' */
  real_T SFunction1_o5_md;             /* '<S517>/S-Function1' */
  real_T SFunction1_o6_oc;             /* '<S517>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S517>/S-Function1' */
  real_T SFunction1_o8_l1;             /* '<S517>/S-Function1' */
  real_T SFunction1_o9_lw;             /* '<S517>/S-Function1' */
  real_T SFunction1_o10_h;             /* '<S517>/S-Function1' */
  real_T SFunction1_o11_ay;            /* '<S517>/S-Function1' */
  real_T SFunction1_o12_j;             /* '<S517>/S-Function1' */
  real_T SFunction1_o13_gt;            /* '<S517>/S-Function1' */
  real_T SFunction1_o14_h;             /* '<S517>/S-Function1' */
  real_T SFunction1_o15_k;             /* '<S517>/S-Function1' */
  real_T SFunction1_o16_l;             /* '<S517>/S-Function1' */
  real_T SFunction1_o17_m;             /* '<S517>/S-Function1' */
  real_T SFunction1_o18_j;             /* '<S517>/S-Function1' */
  real_T SFunction1_o19_h;             /* '<S517>/S-Function1' */
  real_T SFunction1_o20_j;             /* '<S517>/S-Function1' */
  real_T SFunction1_o21_p;             /* '<S517>/S-Function1' */
  real_T SFunction1_o22_e;             /* '<S517>/S-Function1' */
  real_T SFunction1_o23_i;             /* '<S517>/S-Function1' */
  real_T SFunction1_o24_a;             /* '<S517>/S-Function1' */
  real_T SFunction1_o25_p;             /* '<S517>/S-Function1' */
  real_T SFunction1_o1_fp;             /* '<S515>/S-Function1' */
  real_T SFunction1_o2_fr;             /* '<S515>/S-Function1' */
  real_T SFunction1_o3_ja;             /* '<S515>/S-Function1' */
  real_T SFunction1_o4_f4;             /* '<S515>/S-Function1' */
  real_T SFunction1_o5_ld;             /* '<S515>/S-Function1' */
  real_T SFunction1_o6_n3;             /* '<S515>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S515>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S515>/S-Function1' */
  real_T SFunction1_o9_ia;             /* '<S515>/S-Function1' */
  real_T SFunction1_o10_f5;            /* '<S515>/S-Function1' */
  real_T SFunction1_o11_d;             /* '<S515>/S-Function1' */
  real_T SFunction1_o12_a;             /* '<S515>/S-Function1' */
  real_T SFunction1_o13_k;             /* '<S515>/S-Function1' */
  real_T SFunction1_o14_g;             /* '<S515>/S-Function1' */
  real_T SFunction1_o15_e;             /* '<S515>/S-Function1' */
  real_T SFunction1_o16_h;             /* '<S515>/S-Function1' */
  real_T SFunction1_o17_n;             /* '<S515>/S-Function1' */
  real_T SFunction1_o18_h;             /* '<S515>/S-Function1' */
  real_T SFunction1_o19_n;             /* '<S515>/S-Function1' */
  real_T SFunction1_o20_d;             /* '<S515>/S-Function1' */
  real_T SFunction1_o21_a;             /* '<S515>/S-Function1' */
  real_T SFunction1_o22_o;             /* '<S515>/S-Function1' */
  real_T SFunction1_o23_k;             /* '<S515>/S-Function1' */
  real_T SFunction1_o24_l;             /* '<S515>/S-Function1' */
  real_T SFunction1_o25_n;             /* '<S515>/S-Function1' */
  real_T SFunction1_o1_am;             /* '<S513>/S-Function1' */
  real_T SFunction1_o2_ap;             /* '<S513>/S-Function1' */
  real_T SFunction1_o3_dd;             /* '<S513>/S-Function1' */
  real_T SFunction1_o4_ii;             /* '<S513>/S-Function1' */
  real_T RX_time_ed;                   /* '<S509>/Data Type Conversion9' */
  real_T RX_time_md;                   /* '<S509>/Data Type Conversion2' */
  real_T RX_delta_time_nr;             /* '<S509>/Data Type Conversion10' */
  real_T RX_delta_time_f2;             /* '<S509>/Data Type Conversion3' */
  real_T SFunction1_o1_ieu;            /* '<S511>/S-Function1' */
  real_T SFunction1_o2_bf;             /* '<S511>/S-Function1' */
  real_T SFunction1_o3_er;             /* '<S511>/S-Function1' */
  real_T SFunction1_o4_ik;             /* '<S511>/S-Function1' */
  real_T SFunction1_o5_lq;             /* '<S511>/S-Function1' */
  real_T SFunction1_o6_fk;             /* '<S511>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S511>/S-Function1' */
  real_T SFunction1_o1_c5;             /* '<S510>/S-Function1' */
  real_T SFunction1_o2_dq;             /* '<S510>/S-Function1' */
  real_T SFunction1_o3_hj;             /* '<S510>/S-Function1' */
  real_T SFunction1_o4_gu;             /* '<S510>/S-Function1' */
  real_T SFunction1_o5_ly;             /* '<S510>/S-Function1' */
  real_T SFunction1_o6_hp;             /* '<S510>/S-Function1' */
  real_T SFunction1_o7_ol;             /* '<S510>/S-Function1' */
  real_T SFunction1_o1_em;             /* '<S508>/S-Function1' */
  real_T SFunction1_o2_gh;             /* '<S508>/S-Function1' */
  real_T SFunction1_o3_kk;             /* '<S508>/S-Function1' */
  real_T SFunction1_o4_pw;             /* '<S508>/S-Function1' */
  real_T SFunction1_o5_dz;             /* '<S508>/S-Function1' */
  real_T SFunction1_o6_hc;             /* '<S508>/S-Function1' */
  real_T SFunction1_o7_au;             /* '<S508>/S-Function1' */
  real_T SFunction1_o8_ct;             /* '<S508>/S-Function1' */
  real_T SFunction1_o9_g3;             /* '<S508>/S-Function1' */
  real_T SFunction1_o10_nn;            /* '<S508>/S-Function1' */
  real_T SFunction1_o11_b;             /* '<S508>/S-Function1' */
  real_T SFunction1_o12_d;             /* '<S508>/S-Function1' */
  real_T SFunction1_o13_hi;            /* '<S508>/S-Function1' */
  real_T SFunction1_o14_px;            /* '<S508>/S-Function1' */
  real_T SFunction1_o15_m;             /* '<S508>/S-Function1' */
  real_T SFunction1_o16_lm;            /* '<S508>/S-Function1' */
  real_T SFunction1_o17_d;             /* '<S508>/S-Function1' */
  real_T SFunction1_o18_d;             /* '<S508>/S-Function1' */
  real_T SFunction1_o19_d;             /* '<S508>/S-Function1' */
  real_T SFunction1_o20_a;             /* '<S508>/S-Function1' */
  real_T SFunction1_o21_j;             /* '<S508>/S-Function1' */
  real_T SFunction1_o22_a;             /* '<S508>/S-Function1' */
  real_T SFunction1_o23_n;             /* '<S508>/S-Function1' */
  real_T SFunction1_o1_fl;             /* '<S506>/S-Function1' */
  real_T SFunction1_o2_bu;             /* '<S506>/S-Function1' */
  real_T SFunction1_o3_ko;             /* '<S506>/S-Function1' */
  real_T SFunction1_o4_kv;             /* '<S506>/S-Function1' */
  real_T SFunction1_o6_mm;             /* '<S506>/S-Function1' */
  real_T SFunction1_o7_m1;             /* '<S506>/S-Function1' */
  real_T SFunction1_o9_py;             /* '<S506>/S-Function1' */
  real_T SFunction1_o10_a;             /* '<S506>/S-Function1' */
  real_T SFunction1_o11_mi;            /* '<S506>/S-Function1' */
  real_T SFunction1_o12_k;             /* '<S506>/S-Function1' */
  real_T SFunction1_o13_gj;            /* '<S506>/S-Function1' */
  real_T SFunction1_o14_e;             /* '<S506>/S-Function1' */
  real_T SFunction1_o15_pj;            /* '<S506>/S-Function1' */
  real_T SFunction1_o16_g;             /* '<S506>/S-Function1' */
  real_T SFunction1_o17_k;             /* '<S506>/S-Function1' */
  real_T SFunction1_o18_e;             /* '<S506>/S-Function1' */
  real_T SFunction1_o19_a;             /* '<S506>/S-Function1' */
  real_T SFunction1_o20_f;             /* '<S506>/S-Function1' */
  real_T SFunction1_o21_c;             /* '<S506>/S-Function1' */
  real_T SFunction1_o22_og;            /* '<S506>/S-Function1' */
  real_T SFunction1_o23_a;             /* '<S506>/S-Function1' */
  real_T SFunction1_o1_cy;             /* '<S504>/S-Function1' */
  real_T SFunction1_o2_dt;             /* '<S504>/S-Function1' */
  real_T SFunction1_o3_lj;             /* '<S504>/S-Function1' */
  real_T SFunction1_o4_aa;             /* '<S504>/S-Function1' */
  real_T SFunction1_o5_bi;             /* '<S504>/S-Function1' */
  real_T SFunction1_o6_ny;             /* '<S504>/S-Function1' */
  real_T SFunction1_o7_nm;             /* '<S504>/S-Function1' */
  real_T SFunction1_o8_pi;             /* '<S504>/S-Function1' */
  real_T SFunction1_o9_c2;             /* '<S504>/S-Function1' */
  real_T SFunction1_o10_b;             /* '<S504>/S-Function1' */
  real_T SFunction1_o11_h2;            /* '<S504>/S-Function1' */
  real_T SFunction1_o12_dj;            /* '<S504>/S-Function1' */
  real_T SFunction1_o13_n;             /* '<S504>/S-Function1' */
  real_T SFunction1_o14_ed;            /* '<S504>/S-Function1' */
  real_T SFunction1_o15_e2;            /* '<S504>/S-Function1' */
  real_T SFunction1_o16_i;             /* '<S504>/S-Function1' */
  real_T SFunction1_o17_o;             /* '<S504>/S-Function1' */
  real_T SFunction1_o18_p;             /* '<S504>/S-Function1' */
  real_T SFunction1_o19_o;             /* '<S504>/S-Function1' */
  real_T SFunction1_o20_i;             /* '<S504>/S-Function1' */
  real_T SFunction1_o21_b;             /* '<S504>/S-Function1' */
  real_T SFunction1_o22_i;             /* '<S504>/S-Function1' */
  real_T SFunction1_o23_j;             /* '<S504>/S-Function1' */
  real_T SFunction1_o24_j;             /* '<S504>/S-Function1' */
  real_T SFunction1_o25_e;             /* '<S504>/S-Function1' */
  real_T SFunction1_o26_c;             /* '<S504>/S-Function1' */
  real_T SFunction1_o27_e;             /* '<S504>/S-Function1' */
  real_T SFunction1_o28_n;             /* '<S504>/S-Function1' */
  real_T SFunction1_o29;               /* '<S504>/S-Function1' */
  real_T SFunction1_o30;               /* '<S504>/S-Function1' */
  real_T SFunction1_o31;               /* '<S504>/S-Function1' */
  real_T SFunction1_o32;               /* '<S504>/S-Function1' */
  real_T SFunction1_o33;               /* '<S504>/S-Function1' */
  real_T SFunction1_o34;               /* '<S504>/S-Function1' */
  real_T SFunction1_o35;               /* '<S504>/S-Function1' */
  real_T SFunction1_o36;               /* '<S504>/S-Function1' */
  real_T SFunction1_o37;               /* '<S504>/S-Function1' */
  real_T SFunction1_o38;               /* '<S504>/S-Function1' */
  real_T SFunction1_o39;               /* '<S504>/S-Function1' */
  real_T SFunction1_o40;               /* '<S504>/S-Function1' */
  real_T SFunction1_o41;               /* '<S504>/S-Function1' */
  real_T SFunction1_o42;               /* '<S504>/S-Function1' */
  real_T SFunction1_o43;               /* '<S504>/S-Function1' */
  real_T SFunction1_o44;               /* '<S504>/S-Function1' */
  real_T SFunction1_o45;               /* '<S504>/S-Function1' */
  real_T SFunction1_o46;               /* '<S504>/S-Function1' */
  real_T SFunction1_o47;               /* '<S504>/S-Function1' */
  real_T SFunction1_o48;               /* '<S504>/S-Function1' */
  real_T SFunction1_o49;               /* '<S504>/S-Function1' */
  real_T SFunction1_o50;               /* '<S504>/S-Function1' */
  real_T SFunction1_o51;               /* '<S504>/S-Function1' */
  real_T SFunction1_o52;               /* '<S504>/S-Function1' */
  real_T SFunction1_o53;               /* '<S504>/S-Function1' */
  real_T SFunction1_o54;               /* '<S504>/S-Function1' */
  real_T SFunction1_o55;               /* '<S504>/S-Function1' */
  real_T SFunction1_o56;               /* '<S504>/S-Function1' */
  real_T SFunction1_o57;               /* '<S504>/S-Function1' */
  real_T SFunction1_o58;               /* '<S504>/S-Function1' */
  real_T SFunction1_o59;               /* '<S504>/S-Function1' */
  real_T SFunction1_o60;               /* '<S504>/S-Function1' */
  real_T SFunction1_o61;               /* '<S504>/S-Function1' */
  real_T SFunction1_o62;               /* '<S504>/S-Function1' */
  real_T SFunction1_o63;               /* '<S504>/S-Function1' */
  real_T SFunction1_o64;               /* '<S504>/S-Function1' */
  real_T SFunction1_o65;               /* '<S504>/S-Function1' */
  real_T SFunction1_o66;               /* '<S504>/S-Function1' */
  real_T SFunction1_o67;               /* '<S504>/S-Function1' */
  real_T SFunction1_o68;               /* '<S504>/S-Function1' */
  real_T SFunction1_o69;               /* '<S504>/S-Function1' */
  real_T SFunction1_o70;               /* '<S504>/S-Function1' */
  real_T SFunction1_o71;               /* '<S504>/S-Function1' */
  real_T SFunction1_o72;               /* '<S504>/S-Function1' */
  real_T SFunction1_o73;               /* '<S504>/S-Function1' */
  real_T SFunction1_o74;               /* '<S504>/S-Function1' */
  real_T SFunction1_o1_m2;             /* '<S502>/S-Function1' */
  real_T SFunction1_o2_fs;             /* '<S502>/S-Function1' */
  real_T SFunction1_o3_j5c;            /* '<S502>/S-Function1' */
  real_T SFunction1_o4_fzy;            /* '<S502>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S502>/S-Function1' */
  real_T SFunction1_o1_nb;             /* '<S500>/S-Function1' */
  real_T SFunction1_o2_dg5;            /* '<S500>/S-Function1' */
  real_T SFunction1_o3_ip;             /* '<S500>/S-Function1' */
  real_T SFunction1_o4_ci;             /* '<S500>/S-Function1' */
  real_T SFunction1_o5_lo;             /* '<S500>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S500>/S-Function1' */
  real_T SFunction1_o7_ie;             /* '<S500>/S-Function1' */
  real_T SFunction1_o8_fs;             /* '<S500>/S-Function1' */
  real_T SFunction1_o1_p0;             /* '<S498>/S-Function1' */
  real_T SFunction1_o2_or;             /* '<S498>/S-Function1' */
  real_T SFunction1_o3_cv;             /* '<S498>/S-Function1' */
  real_T SFunction1_o4_gt;             /* '<S498>/S-Function1' */
  real_T SFunction1_o5_he;             /* '<S498>/S-Function1' */
  real_T SFunction1_o6_hl;             /* '<S498>/S-Function1' */
  real_T SFunction1_o7_lu;             /* '<S498>/S-Function1' */
  real_T SFunction1_o8_oa;             /* '<S498>/S-Function1' */
  real_T SFunction1_o9_n;              /* '<S498>/S-Function1' */
  real_T SFunction1_o10_nt;            /* '<S498>/S-Function1' */
  real_T SFunction1_o11_jy;            /* '<S498>/S-Function1' */
  real_T SFunction1_o1_of;             /* '<S496>/S-Function1' */
  real_T SFunction1_o2_l0;             /* '<S496>/S-Function1' */
  real_T SFunction1_o3_ok;             /* '<S496>/S-Function1' */
  real_T SFunction1_o4_ae;             /* '<S496>/S-Function1' */
  real_T SFunction1_o5_e2;             /* '<S496>/S-Function1' */
  real_T SFunction1_o6_oj;             /* '<S496>/S-Function1' */
  real_T SFunction1_o7_fc;             /* '<S496>/S-Function1' */
  real_T SFunction1_o8_lf;             /* '<S496>/S-Function1' */
  real_T SFunction1_o1_lz;             /* '<S494>/S-Function1' */
  real_T SFunction1_o2_cq;             /* '<S494>/S-Function1' */
  real_T SFunction1_o3_ew;             /* '<S494>/S-Function1' */
  real_T SFunction1_o4_jvw;            /* '<S494>/S-Function1' */
  real_T SFunction1_o5_p3;             /* '<S494>/S-Function1' */
  real_T SFunction1_o6_jd;             /* '<S494>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S494>/S-Function1' */
  real_T SFunction1_o8_o1;             /* '<S494>/S-Function1' */
  real_T SFunction1_o9_f;              /* '<S494>/S-Function1' */
  real_T SFunction1_o10_cg;            /* '<S494>/S-Function1' */
  real_T SFunction1_o11_e;             /* '<S494>/S-Function1' */
  real_T SFunction1_o12_ag;            /* '<S494>/S-Function1' */
  real_T SFunction1_o13_i;             /* '<S494>/S-Function1' */
  real_T SFunction1_o1_do;             /* '<S486>/S-Function1' */
  real_T SFunction1_o2_m0;             /* '<S486>/S-Function1' */
  real_T SFunction1_o3_lm;             /* '<S486>/S-Function1' */
  real_T SFunction1_o4_p5;             /* '<S486>/S-Function1' */
  real_T SFunction1_o5_ej;             /* '<S486>/S-Function1' */
  real_T SFunction1_o6_p3d;            /* '<S486>/S-Function1' */
  real_T SFunction1_o7_k4;             /* '<S486>/S-Function1' */
  real_T SFunction1_o8_n;              /* '<S486>/S-Function1' */
  real_T SFunction1_o9_kq;             /* '<S486>/S-Function1' */
  real_T SFunction1_o10_eo;            /* '<S486>/S-Function1' */
  real_T SFunction1_o11_k;             /* '<S486>/S-Function1' */
  real_T SFunction1_o1_en;             /* '<S477>/S-Function1' */
  real_T SFunction1_o2_cm;             /* '<S477>/S-Function1' */
  real_T SFunction1_o3_ewi;            /* '<S477>/S-Function1' */
  real_T SFunction1_o4_kw;             /* '<S477>/S-Function1' */
  real_T SFunction1_o5_cp;             /* '<S477>/S-Function1' */
  real_T SFunction1_o6_du;             /* '<S477>/S-Function1' */
  real_T SFunction1_o7_mj;             /* '<S477>/S-Function1' */
  real_T SFunction1_o8_k;              /* '<S477>/S-Function1' */
  real_T SFunction1_o9_cg;             /* '<S477>/S-Function1' */
  real_T SFunction1_o10_mb;            /* '<S477>/S-Function1' */
  real_T SFunction1_o11_hc;            /* '<S477>/S-Function1' */
  real_T Sum_l;                        /* '<S403>/Sum' */
  real_T for_logging;                  /* '<S397>/for_logging' */
  real_T for_logging1;                 /* '<S397>/for_logging1' */
  real_T ms_to_kmh;                    /* '<S397>/m//s_to_km//h' */
  real_T ms_to_kmh_2;                  /* '<S397>/m//s_to_km//h_2' */
  real_T for_logging2;                 /* '<S397>/for_logging2' */
  real_T for_logging3;                 /* '<S397>/for_logging3' */
  real_T for_logging4;                 /* '<S397>/for_logging4' */
  real_T for_logging5;                 /* '<S397>/for_logging5' */
  real_T for_logging6;                 /* '<S397>/for_logging6' */
  real_T HDOP__f;                      /* '<S395>/Bus Selector1' */
  real_T FrontAxleSpeed_d;             /* '<S395>/Bus Selector4' */
  real_T kph2mps;                      /* '<S395>/kph2mps' */
  real_T Product_c;                    /* '<S395>/Product' */
  real_T FrontAxleSpeed_dv;            /* '<S395>/Bus Selector4' */
  real_T kph2mps1;                     /* '<S395>/kph2mps1' */
  real_T Product1_hl;                  /* '<S395>/Product1' */
  real_T UnitDelay1;                   /* '<S395>/Unit Delay1' */
  real_T InitialHeading;               /* '<S396>/InitialHeading' */
  real_T InitialPosition;              /* '<S396>/InitialPosition' */
  real_T InitialXPosition;             /* '<S396>/InitialXPosition' */
  real_T InitialYPosition;             /* '<S396>/InitialYPosition' */
  real_T FrontAxleSpeed_dvq;           /* '<S71>/Bus Selector' */
  real_T kph2ms;                       /* '<S71>/kph2ms' */
  real_T LongitudnalPosition;          /* '<S396>/LongitudnalPosition' */
  real_T TmpRTBAtVehHeadingInport1;    /* '<S396>/In2' */
  real_T TrigonometricFunction;        /* '<S396>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S396>/Trigonometric Function1' */
  real_T VehHeading;                   /* '<S396>/VehHeading' */
  real_T XPosition;                    /* '<S396>/XPosition' */
  real_T YPosition;                    /* '<S396>/YPosition' */
  real_T UnitDelay1_f;                 /* '<S97>/Unit Delay1' */
  real_T Switch_a;                     /* '<S97>/Switch' */
  real_T Subtract_a;                   /* '<S96>/Subtract' */
  real_T DataTypeConversion1_h;        /* '<S83>/Data Type Conversion1' */
  real_T uDLookupTable;                /* '<S83>/2-D Lookup Table' */
  real_T DataTypeConversion5_o;        /* '<S77>/Data Type Conversion5' */
  real_T distanceSpdTarget_e;          /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_target_o;       /* '<S81>/Multiport Switch' */
  real_T VSPD_TARGET_KPH_APV_g;        /* '<S81>/Signal Conversion16' */
  real_T VSPD_HYST_KPH_APV_f;          /* '<S81>/Saturation9' */
  real_T Add_k;                        /* '<S109>/Add' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_AP_b;/* '<S81>/Saturation1' */
  real_T DataTypeConversion4_i;        /* '<S79>/Data Type Conversion4' */
  real_T ThrottlePID_Y_m;              /* '<S79>/Switch' */
  real_T MultiportSwitch;              /* '<S83>/Multiport Switch' */
  real_T DataTypeConversion1_n3;       /* '<S82>/Data Type Conversion1' */
  real_T uD_Lookup_Table;              /* '<S85>/2D_Lookup_Table' */
  real_T DataTypeConversion1_a;        /* '<S84>/Data Type Conversion1' */
  real_T Subtract_j;                   /* '<S84>/Subtract' */
  real_T Divide_hl;                    /* '<S84>/Divide' */
  real_T Primary_brake_circuit_pressure_;/* '<S104>/Gain4' */
  real_T Secondary_brake_circuit_pressur;/* '<S104>/Gain5' */
  real_T Add_d;                        /* '<S105>/Add' */
  real_T Gain_go0;                     /* '<S105>/Gain' */
  real_T Brake_pressure_target_kpa;    /* '<S105>/MinMax' */
  real_T Bendix_2C2_Primary_brake_circui;/* '<S104>/Gain1' */
  real_T Bendix_2C2_Secondary_brake_circ;/* '<S104>/Gain2' */
  real_T Add_n;                        /* '<S106>/Add' */
  real_T brake_system_avg_appl_pressure_;/* '<S106>/Gain' */
  real_T Primary_brake_circuit_pressur_n;/* '<S104>/Gain3' */
  real_T Divide2;                      /* '<S106>/Divide2' */
  real_T Gain5;                        /* '<S106>/Gain5' */
  real_T Brake_appl_percent;           /* '<S106>/Saturation3' */
  real_T Unit_Delay_k;                 /* '<S347>/Unit_Delay' */
  real_T MinMax_d;                     /* '<S347>/MinMax' */
  real_T Xold_hq;                      /* '<S394>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S394>/Init' */
  real_T Abs_e;                        /* '<S390>/Abs' */
  real_T DigitalClock;                 /* '<S391>/Digital Clock' */
  real_T Unit_Delay_d;                 /* '<S391>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S391>/Subtract' */
  real_T Product1_hp;                  /* '<S390>/Product1' */
  real_T Add1_nd;                      /* '<S390>/Add1' */
  real_T MinMax2_g;                    /* '<S390>/MinMax2' */
  real_T Abs1_h;                       /* '<S390>/Abs1' */
  real_T Product2_c;                   /* '<S390>/Product2' */
  real_T Subtract1_n;                  /* '<S390>/Subtract1' */
  real_T MinMax1_hj;                   /* '<S390>/MinMax1' */
  real_T Unit_Delay_nc;                /* '<S345>/Unit_Delay' */
  real_T MinMax_n;                     /* '<S345>/MinMax' */
  real_T Xold_fv;                      /* '<S383>/FixPt Unit Delay1' */
  real_T Init_b;                       /* '<S383>/Init' */
  real_T Abs_ez;                       /* '<S379>/Abs' */
  real_T DigitalClock_b;               /* '<S380>/Digital Clock' */
  real_T Unit_Delay_nx;                /* '<S380>/Unit_Delay' */
  real_T Subtract_i;                   /* '<S380>/Subtract' */
  real_T Product1_i;                   /* '<S379>/Product1' */
  real_T Add1_b;                       /* '<S379>/Add1' */
  real_T MinMax2_k;                    /* '<S379>/MinMax2' */
  real_T Abs1_c;                       /* '<S379>/Abs1' */
  real_T Product2_n;                   /* '<S379>/Product2' */
  real_T Subtract1_h;                  /* '<S379>/Subtract1' */
  real_T MinMax1_j;                    /* '<S379>/MinMax1' */
  real_T pathSpdLimit_a;               /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_abs_max;        /* '<S81>/Multiport Switch' */
  real_T distance_o;                   /* '<S81>/Bus Selector' */
  real_T Distance_to_achieve_speed_targe;/* '<S81>/Multiport Switch' */
  real_T Uk1[2];                       /* '<S342>/Delay Input1' */
  real_T Saturation5;                  /* '<S344>/Saturation5' */
  real_T MinMax6;                      /* '<S344>/MinMax6' */
  real_T Gain1_e;                      /* '<S344>/Gain1' */
  real_T VSPD_TARGET_KPH_APV_gu;       /* '<S344>/Saturation4' */
  real_T MinMax1_f;                    /* '<S344>/MinMax1' */
  real_T Gain2;                        /* '<S344>/Gain2' */
  real_T Saturation6;                  /* '<S344>/Saturation6' */
  real_T Acceleration_target_ms2;      /* '<S81>/Multiport Switch' */
  real_T Saturation7;                  /* '<S344>/Saturation7' */
  real_T Saturation1;                  /* '<S344>/Saturation1' */
  real_T Jerk_target_ms3;              /* '<S81>/Multiport Switch' */
  real_T Saturation2;                  /* '<S344>/Saturation2' */
  real_T Vehicle_speed_vector_kph[33]; /* '<S344>/Gain3' */
  real_T MinMax3;                      /* '<S356>/MinMax3' */
  real_T Unit_Delay_f;                 /* '<S360>/Unit_Delay' */
  real_T MinMax5;                      /* '<S356>/MinMax5' */
  real_T Subtract_al;                  /* '<S356>/Subtract' */
  real_T Abs_m;                        /* '<S356>/Abs' */
  real_T MinMax4;                      /* '<S356>/MinMax4' */
  real_T MinMax6_j;                    /* '<S356>/MinMax6' */
  real_T Subtract1_c;                  /* '<S356>/Subtract1' */
  real_T Abs1_h5;                      /* '<S356>/Abs1' */
  real_T MinMax8;                      /* '<S356>/MinMax8' */
  real_T MinMax7;                      /* '<S356>/MinMax7' */
  real_T MinMax10;                     /* '<S356>/MinMax10' */
  real_T MinMax9;                      /* '<S356>/MinMax9' */
  real_T Subtract2;                    /* '<S356>/Subtract2' */
  real_T Abs2;                         /* '<S356>/Abs2' */
  real_T Xold_p;                       /* '<S371>/FixPt Unit Delay1' */
  real_T Init_hz;                      /* '<S371>/Init' */
  real_T Gain1_c;                      /* '<S357>/Gain1' */
  real_T DigitalClock_f;               /* '<S369>/Digital Clock' */
  real_T Unit_Delay_e;                 /* '<S369>/Unit_Delay' */
  real_T Subtract_b;                   /* '<S369>/Subtract' */
  real_T Product1_a;                   /* '<S366>/Product1' */
  real_T Add_h;                        /* '<S366>/Add' */
  real_T MinMax_a;                     /* '<S366>/MinMax' */
  real_T LookupTableDynamic;           /* '<S357>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S349>/Delay Input1' */
  real_T Xold_o;                       /* '<S355>/FixPt Unit Delay1' */
  real_T Init_p;                       /* '<S355>/Init' */
  real_T Vehicle_speed_target_c;       /* '<S350>/Unit_Delay' */
  real_T Vehicle_speed;                /* '<S350>/Unit_Delay' */
  real_T Distance_m;                   /* '<S350>/Unit_Delay' */
  real_T err;                          /* '<S350>/Subtract' */
  real_T err_abs;                      /* '<S350>/Abs2' */
  real_T Gain2_k;                      /* '<S350>/Gain2' */
  real_T Saturation4;                  /* '<S350>/Saturation4' */
  real_T time_to_target_vspd_secs;     /* '<S350>/Divide2' */
  real_T DigitalClock_p;               /* '<S348>/Digital Clock' */
  real_T Unit_Delay_b;                 /* '<S348>/Unit_Delay' */
  real_T Subtract_g;                   /* '<S348>/Subtract' */
  real_T MinMax3_n;                    /* '<S350>/MinMax3' */
  real_T Saturation1_e;                /* '<S350>/Saturation1' */
  real_T Divide_e;                     /* '<S350>/Divide' */
  real_T Abs_ma;                       /* '<S351>/Abs' */
  real_T Product1_iv;                  /* '<S351>/Product1' */
  real_T Add1_bf;                      /* '<S351>/Add1' */
  real_T MinMax2_c;                    /* '<S351>/MinMax2' */
  real_T Abs1_f;                       /* '<S351>/Abs1' */
  real_T Product2_m;                   /* '<S351>/Product2' */
  real_T Subtract1_h2;                 /* '<S351>/Subtract1' */
  real_T MinMax1_p;                    /* '<S351>/MinMax1' */
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
  real_T DataTypeConversion1_k5;       /* '<S107>/Data Type Conversion1' */
  real_T Add_m;                        /* '<S107>/Add' */
  real_T Gain_j;                       /* '<S107>/Gain' */
  real_T MinMax1_i;                    /* '<S203>/MinMax1' */
  real_T Saturation_n;                 /* '<S203>/Saturation' */
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
  real_T BrakingPID_Y_k5;              /* '<S77>/Gain' */
  real_T CurveBasedSpeedSetpoint;      /* '<S79>/CurveBasedSpeedSetpoint' */
  real_T uDLookupTable1;               /* '<S80>/1-D Lookup Table1' */
  real_T MinMax1_pr;                   /* '<S327>/MinMax1' */
  real_T Saturation_ns;                /* '<S327>/Saturation' */
  real_T Divide_o;                     /* '<S327>/Divide' */
  real_T Product2_bu;                  /* '<S327>/Product2' */
  real_T Subtract1_ei;                 /* '<S327>/Subtract1' */
  real_T Unit_Delay2_k;                /* '<S327>/Unit_Delay2' */
  real_T Product1_n;                   /* '<S327>/Product1' */
  real_T Add1_k;                       /* '<S327>/Add1' */
  real_T Abs_i;                        /* '<S282>/Abs' */
  real_T Add_p;                        /* '<S282>/Add' */
  real_T Switch_g;                     /* '<S282>/Switch' */
  real_T MinMax1_a;                    /* '<S328>/MinMax1' */
  real_T Saturation_e;                 /* '<S328>/Saturation' */
  real_T Divide_d;                     /* '<S328>/Divide' */
  real_T Product2_f;                   /* '<S328>/Product2' */
  real_T Subtract1_b;                  /* '<S328>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S328>/Unit_Delay2' */
  real_T Product1_co;                  /* '<S328>/Product1' */
  real_T Add1_p;                       /* '<S328>/Add1' */
  real_T Sign;                         /* '<S282>/Sign' */
  real_T Product_cf;                   /* '<S282>/Product' */
  real_T MinMax1_e;                    /* '<S329>/MinMax1' */
  real_T Saturation_o;                 /* '<S329>/Saturation' */
  real_T Divide_j;                     /* '<S329>/Divide' */
  real_T Product2_nk;                  /* '<S329>/Product2' */
  real_T Subtract1_eh;                 /* '<S329>/Subtract1' */
  real_T Unit_Delay2_c;                /* '<S329>/Unit_Delay2' */
  real_T Product1_cc;                  /* '<S329>/Product1' */
  real_T Add1_f;                       /* '<S329>/Add1' */
  real_T Switch1_f;                    /* '<S282>/Switch1' */
  real_T correctedError;               /* '<S282>/corrected Error' */
  real_T Switch_h;                     /* '<S283>/Switch' */
  real_T Switch1_j;                    /* '<S283>/Switch1' */
  real_T SteerCtrlErrRaw;              /* '<S80>/sign' */
  real_T DataTypeConversion1_ev;       /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S286>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_ku;        /* '<S80>/Data Type Conversion' */
  real_T SteeringControlPGainSpeedFactor;/* '<S80>/SteeringControlPGainSpeedFactor' */
  real_T SteerCtrlPgain;               /* '<S80>/Product1' */
  real_T Gain_cd;                      /* '<S80>/Gain' */
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
  real_T Add1_h;                       /* '<S284>/Add1' */
  real_T DataTypeConversion_l;         /* '<S310>/Data Type Conversion' */
  real_T SaturationSpeedLookup;        /* '<S310>/Saturation Speed Lookup' */
  real_T sampletime;                   /* '<S321>/sample time' */
  real_T deltariselimit;               /* '<S321>/delta rise limit' */
  real_T sampletime_c;                 /* '<S308>/sample time' */
  real_T deltariselimit_c;             /* '<S308>/delta rise limit' */
  real_T Yk1;                          /* '<S308>/Delay Input2' */
  real_T UkYk1;                        /* '<S308>/Difference Inputs1' */
  real_T deltafalllimit;               /* '<S308>/delta fall limit' */
  real_T Switch_i;                     /* '<S317>/Switch' */
  real_T Switch2_f;                    /* '<S317>/Switch2' */
  real_T DifferenceInputs2;            /* '<S308>/Difference Inputs2' */
  real_T ProportionalGain;             /* '<S307>/Proportional Gain' */
  real_T Integrator;                   /* '<S307>/Integrator' */
  real_T DerivativeGain;               /* '<S307>/Derivative Gain' */
  real_T Filter;                       /* '<S307>/Filter' */
  real_T SumD;                         /* '<S307>/SumD' */
  real_T FilterCoefficient;            /* '<S307>/Filter Coefficient' */
  real_T Sum_c;                        /* '<S307>/Sum' */
  real_T Saturate;                     /* '<S307>/Saturate' */
  real_T Uk1_m;                        /* '<S311>/Delay Input' */
  real_T ZeroUk1;                      /* '<S311>/GainZero' */
  real_T Yk1_p;                        /* '<S311>/Delay Output' */
  real_T PoleYk1;                      /* '<S311>/GainPole' */
  real_T PoleYk1UkZeroUk1;             /* '<S311>/Sum' */
  real_T Downcast;                     /* '<S311>/Downcast' */
  real_T Subtract_c;                   /* '<S281>/Subtract' */
  real_T uDLookupTable_j;              /* '<S281>/1-D Lookup Table' */
  real_T deg2rad;                      /* '<S281>/deg2rad' */
  real_T invert;                       /* '<S281>/invert' */
  real_T PGain;                        /* '<S281>/PGain' */
  real_T sampletime_a;                 /* '<S309>/sample time' */
  real_T deltariselimit_o;             /* '<S309>/delta rise limit' */
  real_T Sum_ly;                       /* '<S281>/Sum' */
  real_T RateFeedbackGain;             /* '<S281>/RateFeedbackGain' */
  real_T FeedforwardGain;              /* '<S281>/FeedforwardGain' */
  real_T UndersteerCorrection;         /* '<S281>/UndersteerCorrection' */
  real_T Sum2;                         /* '<S281>/Sum2' */
  real_T Yk1_o;                        /* '<S309>/Delay Input2' */
  real_T UkYk1_n;                      /* '<S309>/Difference Inputs1' */
  real_T deltafalllimit_o;             /* '<S309>/delta fall limit' */
  real_T Switch_ea;                    /* '<S318>/Switch' */
  real_T Switch2_e;                    /* '<S318>/Switch2' */
  real_T DifferenceInputs2_a;          /* '<S309>/Difference Inputs2' */
  real_T Sum3;                         /* '<S281>/Sum3' */
  real_T DiscreteTimeIntegrator;       /* '<S301>/Discrete-Time Integrator' */
  real_T Sum4;                         /* '<S281>/Sum4' */
  real_T Yk1_pm;                       /* '<S321>/Delay Input2' */
  real_T UkYk1_f;                      /* '<S321>/Difference Inputs1' */
  real_T RateLimitLower;               /* '<S310>/Gain3' */
  real_T deltafalllimit_n;             /* '<S321>/delta fall limit' */
  real_T Switch_fu;                    /* '<S323>/Switch' */
  real_T Switch2_fa;                   /* '<S323>/Switch2' */
  real_T DifferenceInputs2_m;          /* '<S321>/Difference Inputs2' */
  real_T Gain1_f;                      /* '<S310>/Gain1' */
  real_T Switch_hx;                    /* '<S322>/Switch' */
  real_T Switch2_k;                    /* '<S322>/Switch2' */
  real_T MultiportSwitch2;             /* '<S80>/Multiport Switch2' */
  real_T DataTypeConversion6_pa;       /* '<S80>/Data Type Conversion6' */
  real_T rad2deg;                      /* '<S80>/rad2deg' */
  real_T MultiportSwitch1;             /* '<S80>/Multiport Switch1' */
  real_T uD_Lookup_Table_a;            /* '<S276>/1D_Lookup_Table' */
  real_T numLanePoints_j;              /* '<S80>/Data Type Conversion4' */
  real_T DiscreteTimeIntegrator_h;     /* '<S80>/Discrete-Time Integrator' */
  real_T Switch_ko;                    /* '<S296>/Switch' */
  real_T Gain_o;                       /* '<S301>/Gain' */
  real_T IntegralGain;                 /* '<S307>/Integral Gain' */
  real_T Abs_ig;                       /* '<S310>/Abs' */
  real_T Abs1_ft;                      /* '<S310>/Abs1' */
  real_T Subtract_o;                   /* '<S310>/Subtract' */
  real_T Abs2_k;                       /* '<S310>/Abs2' */
  real_T RateCurvature;                /* '<S310>/Curvature Lookup Table' */
  real_T RateError;                    /* '<S310>/Error Lookup Table' */
  real_T Max;                          /* '<S310>/Max' */
  real_T RateSpeed;                    /* '<S310>/Speed Lookup Table' */
  real_T Min;                          /* '<S310>/Min' */
  real_T RateLimitUpper;               /* '<S310>/Limit Rate Limiter' */
  real_T Subtract_c1;                  /* '<S80>/Subtract' */
  real_T Switch1_p;                    /* '<S80>/Switch1' */
  real_T UnitDelay_p;                  /* '<S80>/Unit Delay' */
  real_T Switch2_i1;                   /* '<S80>/Switch2' */
  real_T Xnew;                         /* '<S371>/Reset' */
  real_T Xold_d;                       /* '<S373>/FixPt Unit Delay1' */
  real_T Init_o;                       /* '<S373>/Init' */
  real_T Xold_mg;                      /* '<S374>/FixPt Unit Delay1' */
  real_T Init_lg;                      /* '<S374>/Init' */
  real_T MultiportSwitch_i;            /* '<S372>/Multiport Switch' */
  real_T DigitalClock_d;               /* '<S368>/Digital Clock' */
  real_T Unit_Delay_pa;                /* '<S368>/Unit_Delay' */
  real_T Subtract_kx;                  /* '<S368>/Subtract' */
  real_T Product1_am;                  /* '<S367>/Product1' */
  real_T Add_db;                       /* '<S367>/Add' */
  real_T Xnew_f;                       /* '<S374>/Reset' */
  real_T Xnew_h;                       /* '<S373>/Reset' */
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
  real_T TimeVectorRaw[6];             /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T PositionVectorRaw[6];         /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityVectorRaw[6];         /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationVectorRaw[6];     /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T JerkVectorRaw[6];             /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T TimeVector[33];               /* '<S344>/TwentyPointVectorCalculation' */
  real_T PositionVector[33];           /* '<S344>/TwentyPointVectorCalculation' */
  real_T VelocityVector[33];           /* '<S344>/TwentyPointVectorCalculation' */
  real_T AccelerationVector[33];       /* '<S344>/TwentyPointVectorCalculation' */
  real_T JerkVector[33];               /* '<S344>/TwentyPointVectorCalculation' */
  real_T Add_py;                       /* '<S372>/Add' */
  real_T u_trapezoidal;                /* '<S372>/Gain' */
  real_T Xold_gn;                      /* '<S340>/FixPt Unit Delay1' */
  real_T Init_jw;                      /* '<S340>/Init' */
  real_T Abs_a;                        /* '<S337>/Abs' */
  real_T Product1_i3;                  /* '<S337>/Product1' */
  real_T Add1_b0;                      /* '<S337>/Add1' */
  real_T MinMax2_l;                    /* '<S337>/MinMax2' */
  real_T Abs1_e;                       /* '<S337>/Abs1' */
  real_T Product2_k;                   /* '<S337>/Product2' */
  real_T Subtract1_g;                  /* '<S337>/Subtract1' */
  real_T MinMax1_k;                    /* '<S337>/MinMax1' */
  real_T Subtract_ij;                  /* '<S334>/Subtract' */
  real_T Abs_eu;                       /* '<S334>/Abs' */
  real_T error;                        /* '<S280>/Error Calc' */
  real_T Switch1_m;                    /* '<S295>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_ox;       /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S80>/Data Type Conversion3' */
  real_T SpeedSaturation;              /* '<S280>/Speed Saturation' */
  real_T kmhtoms;                      /* '<S280>/km//h to m//s' */
  real_T Product_n;                    /* '<S280>/Product' */
  real_T TrigonometricFunction_l;      /* '<S280>/Trigonometric Function' */
  real_T ErrorSaturation;              /* '<S280>/Error Saturation' */
  real_T Sum1;                         /* '<S280>/Sum1' */
  real_T Subtract_e;                   /* '<S280>/Subtract' */
  real_T uDLookupTable_h;              /* '<S280>/1-D Lookup Table' */
  real_T deg2rad_o;                    /* '<S280>/deg2rad' */
  real_T invert_d;                     /* '<S280>/invert' */
  real_T Product3;                     /* '<S80>/Product3' */
  real_T deg2rad_d;                    /* '<S80>/deg2rad' */
  real_T Product2_my;                  /* '<S80>/Product2' */
  real_T DataTypeConversion9_h;        /* '<S219>/Data Type Conversion9' */
  real_T DataTypeConversion1_iq;       /* '<S219>/Data Type Conversion1' */
  real_T Add_di;                       /* '<S219>/Add' */
  real_T DataTypeConversion2_id;       /* '<S219>/Data Type Conversion2' */
  real_T DataTypeConversion3_he;       /* '<S219>/Data Type Conversion3' */
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
  real_T Divide_kj;                    /* '<S234>/Divide' */
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
  real_T Saturation_dy;                /* '<S267>/Saturation' */
  real_T Divide_n;                     /* '<S267>/Divide' */
  real_T Product2_lv;                  /* '<S267>/Product2' */
  real_T Subtract1_k;                  /* '<S267>/Subtract1' */
  real_T Unit_Delay2_o;                /* '<S267>/Unit_Delay2' */
  real_T Product1_p;                   /* '<S267>/Product1' */
  real_T Add1_i;                       /* '<S267>/Add1' */
  real_T Product_i;                    /* '<S250>/Product' */
  real_T Unit_Delay_m;                 /* '<S222>/Unit_Delay' */
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
  real_T Subtract1_f;                  /* '<S174>/Subtract1' */
  real_T MinMax1_hl;                   /* '<S174>/MinMax1' */
  real_T Subtract_jh;                  /* '<S151>/Subtract' */
  real_T MinMax1_jg;                   /* '<S173>/MinMax1' */
  real_T Saturation_mo;                /* '<S173>/Saturation' */
  real_T Divide_af;                    /* '<S173>/Divide' */
  real_T Product2_ce;                  /* '<S173>/Product2' */
  real_T Subtract1_cr;                 /* '<S173>/Subtract1' */
  real_T Unit_Delay2_a;                /* '<S173>/Unit_Delay2' */
  real_T Product1_ch;                  /* '<S173>/Product1' */
  real_T Add1_hl;                      /* '<S173>/Add1' */
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
  real_T Product2_d;                   /* '<S136>/Product2' */
  real_T Subtract1_a;                  /* '<S136>/Subtract1' */
  real_T MinMax1_ps;                   /* '<S136>/MinMax1' */
  real_T Subtract_n;                   /* '<S113>/Subtract' */
  real_T MinMax1_h1;                   /* '<S135>/MinMax1' */
  real_T Saturation_p;                 /* '<S135>/Saturation' */
  real_T Divide_l;                     /* '<S135>/Divide' */
  real_T Product2_kj;                  /* '<S135>/Product2' */
  real_T Subtract1_p;                  /* '<S135>/Subtract1' */
  real_T Unit_Delay2_d;                /* '<S135>/Unit_Delay2' */
  real_T Product1_c3;                  /* '<S135>/Product1' */
  real_T Add1_i1;                      /* '<S135>/Add1' */
  real_T Product_iq;                   /* '<S118>/Product' */
  real_T Unit_Delay_ja;                /* '<S110>/Unit_Delay' */
  real_T Add_e;                        /* '<S114>/Add' */
  real_T Sum_g;                        /* '<S97>/Sum' */
  real_T MinMax_p;                     /* '<S83>/MinMax' */
  RTMapsTX BusCreator;                 /* '<S398>/Bus Creator' */
  uint32_T Encoder_o2;                 /* '<S407>/Encoder' */
  uint32_T TCPIP_Com_o1[3];            /* '<S400>/TCPIP_Com' */
  uint32_T TCPIP_Com_o2;               /* '<S400>/TCPIP_Com' */
  uint32_T DataTypeConversion_a;       /* '<S397>/Data Type Conversion' */
  uint32_T SFunction1_o1_kx;           /* '<S28>/S-Function1' */
  uint32_T SFunction1_o1_g3;           /* '<S20>/S-Function1' */
  uint32_T SFunction1_o1_ar;           /* '<S21>/S-Function1' */
  uint32_T SFunction1_o1_h4v;          /* '<S18>/S-Function1' */
  uint32_T SFunction1_o1_ma;           /* '<S19>/S-Function1' */
  uint32_T SFunction1_o1_og;           /* '<S17>/S-Function1' */
  uint32_T Reshape[8];                 /* '<S1049>/Reshape' */
  uint32_T UnitDelay_ol;               /* '<S1050>/Unit Delay' */
  uint32_T Switch1_a;                  /* '<S1053>/Switch1' */
  uint32_T Selector;                   /* '<S1049>/Selector' */
  uint32_T DataTypeConversion_lx;      /* '<S1041>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1046>/Operator' */
  uint32_T Operator_e;                 /* '<S1047>/Operator' */
  uint32_T Operator_n;                 /* '<S1048>/Operator' */
  uint32_T DataType_lp;                /* '<S1048>/DataType' */
  uint32_T Shift_Arithmetic1_c;        /* '<S1041>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1049>/Width' */
  uint32_T Switch1_g;                  /* '<S1052>/Switch1' */
  uint32_T Subtract_h;                 /* '<S1050>/Subtract' */
  uint32_T UnitDelay_g;                /* '<S1035>/Unit Delay' */
  uint32_T Switch1_au;                 /* '<S1038>/Switch1' */
  uint32_T DataTypeConversion6_pl;     /* '<S1030>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S1030>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_k;      /* '<S1030>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S1030>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_d;      /* '<S1030>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S1030>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_f;      /* '<S1030>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S1030>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_d;     /* '<S1030>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S1030>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_e;     /* '<S1030>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S1030>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_c;      /* '<S1031>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S1031>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S1031>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_h;        /* '<S1031>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S1031>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_f;        /* '<S1031>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S1031>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_d;        /* '<S1031>/Shift_Arithmetic 5' */
  uint32_T Width_h;                    /* '<S1034>/Width' */
  uint32_T Switch1_mb;                 /* '<S1037>/Switch1' */
  uint32_T Subtract_m;                 /* '<S1035>/Subtract' */
  uint32_T DataTypeConversion2_j;      /* '<S976>/Data Type Conversion2' */
  uint32_T Operator_g;                 /* '<S981>/Operator' */
  uint32_T Operator_j;                 /* '<S982>/Operator' */
  uint32_T Operator_a;                 /* '<S983>/Operator' */
  uint32_T DataType_p;                 /* '<S983>/DataType' */
  uint32_T Shift_Arithmetic1_pm;       /* '<S976>/Shift_Arithmetic 1' */
  uint32_T Operator_na;                /* '<S984>/Operator' */
  uint32_T DataType_gp;                /* '<S984>/DataType' */
  uint32_T Shift_Arithmetic2_n;        /* '<S976>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_j;                /* '<S1007>/Unit Delay' */
  uint32_T Switch1_ab;                 /* '<S1010>/Switch1' */
  uint32_T DataTypeConversion_iv;      /* '<S975>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_h;         /* '<S975>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_d;      /* '<S975>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_d;        /* '<S975>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_i0;     /* '<S975>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_f;        /* '<S975>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_ju;     /* '<S975>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_pk;       /* '<S975>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_f3;     /* '<S975>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_hr;       /* '<S975>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_c;      /* '<S975>/Data Type Conversion5' */
  uint32_T Operator_d;                 /* '<S980>/Operator' */
  uint32_T DataType_nqw;               /* '<S980>/DataType' */
  uint32_T DataTypeConversion3_hef;    /* '<S976>/Data Type Conversion3' */
  uint32_T Operator_af;                /* '<S985>/Operator' */
  uint32_T Operator_m;                 /* '<S986>/Operator' */
  uint32_T Operator_h;                 /* '<S987>/Operator' */
  uint32_T DataType_cw;                /* '<S987>/DataType' */
  uint32_T Shift_Arithmetic4_j;        /* '<S976>/Shift_Arithmetic 4' */
  uint32_T Operator_ne;                /* '<S988>/Operator' */
  uint32_T DataType_gx;                /* '<S988>/DataType' */
  uint32_T Shift_Arithmetic5_g;        /* '<S976>/Shift_Arithmetic 5' */
  uint32_T Width_p;                    /* '<S1006>/Width' */
  uint32_T Switch1_h;                  /* '<S1009>/Switch1' */
  uint32_T Subtract_bg;                /* '<S1007>/Subtract' */
  uint32_T DataTypeConversion_ml;      /* '<S925>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_f;         /* '<S925>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_f;      /* '<S925>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_o;        /* '<S925>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_pu;     /* '<S925>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_hn;       /* '<S925>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_n;      /* '<S925>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_e;        /* '<S925>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_ax;     /* '<S925>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_o4;       /* '<S925>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_h;      /* '<S925>/Data Type Conversion5' */
  uint32_T Operator_jd;                /* '<S935>/Operator' */
  uint32_T DataType_c5;                /* '<S935>/DataType' */
  uint32_T DataTypeConversion8_h;      /* '<S924>/Data Type Conversion8' */
  uint32_T Operator_ei;                /* '<S931>/Operator' */
  uint32_T Operator_c;                 /* '<S932>/Operator' */
  uint32_T Operator_p;                 /* '<S933>/Operator' */
  uint32_T DataType_ba;                /* '<S933>/DataType' */
  uint32_T Shift_Arithmetic4_b;        /* '<S924>/Shift_Arithmetic 4' */
  uint32_T Operator_k;                 /* '<S934>/Operator' */
  uint32_T DataType_fp;                /* '<S934>/DataType' */
  uint32_T Shift_Arithmetic5_m;        /* '<S924>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_ge;      /* '<S727>/Data Type Conversion' */
  uint32_T DataTypeConversion1_lh;     /* '<S727>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_h;      /* '<S727>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S727>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S727>/Shift Arithmetic2' */
  uint32_T Operator_ng;                /* '<S729>/Operator' */
  uint32_T DataType_iz;                /* '<S729>/DataType' */
  uint32_T DataTypeConversion_id;      /* '<S719>/Data Type Conversion' */
  uint32_T DataTypeConversion1_ii;     /* '<S719>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_av;     /* '<S719>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_p;         /* '<S719>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_l;         /* '<S719>/Shift Arithmetic2' */
  uint32_T Operator_hr;                /* '<S721>/Operator' */
  uint32_T DataType_ns;                /* '<S721>/DataType' */
  uint32_T DataTypeConversion_g1;      /* '<S713>/Data Type Conversion' */
  uint32_T DataTypeConversion1_eh;     /* '<S713>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_ia;     /* '<S713>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_h;         /* '<S713>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_m;         /* '<S713>/Shift Arithmetic2' */
  uint32_T Operator_cc;                /* '<S714>/Operator' */
  uint32_T DataType_hm;                /* '<S714>/DataType' */
  uint32_T DataTypeConversion_bs;      /* '<S708>/Data Type Conversion' */
  uint32_T DataTypeConversion1_h3;     /* '<S708>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_ii;     /* '<S708>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_f;         /* '<S708>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_j;         /* '<S708>/Shift Arithmetic2' */
  uint32_T Operator_i;                 /* '<S709>/Operator' */
  uint32_T DataType_il;                /* '<S709>/DataType' */
  uint32_T DataTypeConversion_d;       /* '<S701>/Data Type Conversion' */
  uint32_T DataTypeConversion1_l2;     /* '<S701>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_pj;     /* '<S701>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_m;         /* '<S701>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_o;         /* '<S701>/Shift Arithmetic2' */
  uint32_T Operator_ah;                /* '<S703>/Operator' */
  uint32_T DataType_ef;                /* '<S703>/DataType' */
  uint32_T UnitDelay_a;                /* '<S61>/Unit Delay' */
  uint32_T Switch1_ht;                 /* '<S64>/Switch1' */
  uint32_T Switch1_b;                  /* '<S63>/Switch1' */
  uint32_T Subtract_fc;                /* '<S61>/Subtract' */
  uint32_T UnitDelay_j5;               /* '<S55>/Unit Delay' */
  uint32_T Switch1_k;                  /* '<S58>/Switch1' */
  uint32_T Switch1_l;                  /* '<S57>/Switch1' */
  uint32_T Subtract_md;                /* '<S55>/Subtract' */
  uint32_T UnitDelay_l;                /* '<S49>/Unit Delay' */
  uint32_T Switch1_e;                  /* '<S52>/Switch1' */
  uint32_T Switch1_c;                  /* '<S51>/Switch1' */
  uint32_T Subtract_f1;                /* '<S49>/Subtract' */
  uint32_T UnitDelay_d;                /* '<S43>/Unit Delay' */
  uint32_T Switch1_k4;                 /* '<S46>/Switch1' */
  uint32_T Switch1_fr;                 /* '<S45>/Switch1' */
  uint32_T Subtract_h1;                /* '<S43>/Subtract' */
  uint32_T UnitDelay_bw;               /* '<S37>/Unit Delay' */
  uint32_T Switch1_i;                  /* '<S40>/Switch1' */
  uint32_T Switch1_hm;                 /* '<S39>/Switch1' */
  uint32_T Subtract_nc;                /* '<S37>/Subtract' */
  uint32_T UnitDelay_f4;               /* '<S31>/Unit Delay' */
  uint32_T Switch1_o;                  /* '<S34>/Switch1' */
  uint32_T Switch1_az;                 /* '<S33>/Switch1' */
  uint32_T Subtract_ot;                /* '<S31>/Subtract' */
  uint32_T Gain_co;                    /* '<S97>/Gain' */
  real32_T PropB_REAX_3_HandwheelTorque;/* '<S668>/Product' */
  real32_T PropB_REAX_3_HandwheelVelocity;/* '<S669>/Product1' */
  real32_T PropB_REAX_3_PullCompensation;/* '<S670>/Product2' */
  real32_T Subtract_h3;                /* '<S651>/Subtract' */
  real32_T Subtract_f3;                /* '<S523>/Subtract' */
  real32_T DataTypeConversion2_lf;     /* '<S79>/Data Type Conversion2' */
  real32_T Divide_nn;                  /* '<S285>/Divide' */
  real32_T UnitDelay_fm;               /* '<S285>/Unit Delay' */
  real32_T Switch1_fi;                 /* '<S289>/Switch1' */
  real32_T Divide_d0;                  /* '<S290>/Divide' */
  real32_T UnitDelay_lj;               /* '<S290>/Unit Delay' */
  real32_T Switch1_pb;                 /* '<S294>/Switch1' */
  real32_T DataTypeConversion1_g;      /* '<S290>/Data Type Conversion1' */
  real32_T Switch1_aq;                 /* '<S292>/Switch1' */
  real32_T DataTypeConversion_mv;      /* '<S290>/Data Type Conversion' */
  real32_T Add3_p;                     /* '<S290>/Add3' */
  real32_T Product1_ce;                /* '<S290>/Product1' */
  real32_T Add_a;                      /* '<S290>/Add' */
  real32_T DataTypeConversion1_b1;     /* '<S285>/Data Type Conversion1' */
  real32_T Switch1_cw;                 /* '<S287>/Switch1' */
  real32_T DataTypeConversion_ps;      /* '<S285>/Data Type Conversion' */
  real32_T Add3_j;                     /* '<S285>/Add3' */
  real32_T Product1_n2;                /* '<S285>/Product1' */
  real32_T Add_f;                      /* '<S285>/Add' */
  int32_T Decoder_o2;                  /* '<S404>/Decoder' */
  int32_T Merge;                       /* '<S977>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S610>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_f;/* '<S446>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S610>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_m;/* '<S446>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_m;/* '<S608>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_i;/* '<S609>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_d;/* '<S608>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_f;/* '<S609>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S628>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_d;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S628>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_d;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1015>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lr; /* '<S104>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_lu;/* '<S104>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S763>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S763>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S209>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l;/* '<S209>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_lc;      /* '<S532>/Data Type Conversion' */
  uint16_T DataTypeConversion1_hc;     /* '<S532>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S532>/Shift Arithmetic' */
  uint16_T Operator_im;                /* '<S557>/Operator' */
  uint16_T DataType_jt;                /* '<S557>/DataType' */
  uint16_T DataTypeConversion_l3;      /* '<S526>/Data Type Conversion' */
  uint16_T DataTypeConversion1_jf;     /* '<S526>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_d;          /* '<S526>/Shift Arithmetic' */
  uint16_T Operator_e4;                /* '<S553>/Operator' */
  uint16_T DataType_fs;                /* '<S553>/DataType' */
  uint16_T DataTypeConversion_a4;      /* '<S530>/Data Type Conversion' */
  uint16_T DataTypeConversion1_kb;     /* '<S530>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_j;          /* '<S530>/Shift Arithmetic' */
  uint16_T Operator_jq;                /* '<S555>/Operator' */
  uint16_T DataType_pm;                /* '<S555>/DataType' */
  uint16_T DataTypeConversion1_fe;     /* '<S531>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_a0;     /* '<S531>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_dw;         /* '<S531>/Shift Arithmetic' */
  uint16_T Operator_ic;                /* '<S556>/Operator' */
  uint16_T DataType_jd;                /* '<S556>/DataType' */
  uint16_T DataTypeConversion1_gb;     /* '<S534>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_k;      /* '<S534>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_l;          /* '<S534>/Shift Arithmetic' */
  uint16_T Operator_o;                 /* '<S558>/Operator' */
  uint16_T DataType_k4;                /* '<S558>/DataType' */
  uint16_T DataTypeConversion1_ie;     /* '<S540>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_o;      /* '<S540>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_e;          /* '<S540>/Shift Arithmetic' */
  uint16_T Operator_od;                /* '<S559>/Operator' */
  uint16_T DataType_gi;                /* '<S559>/DataType' */
  uint16_T DataTypeConversion_ig;      /* '<S548>/Data Type Conversion' */
  uint16_T DataTypeConversion1_pi;     /* '<S548>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_f;          /* '<S548>/Shift Arithmetic' */
  uint16_T Operator_cd;                /* '<S562>/Operator' */
  uint16_T DataType_im;                /* '<S562>/DataType' */
  uint16_T DataTypeConversion1_g5;     /* '<S541>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_en;     /* '<S541>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_k;          /* '<S541>/Shift Arithmetic' */
  uint16_T Operator_gw;                /* '<S560>/Operator' */
  uint16_T DataType_b0;                /* '<S560>/DataType' */
  uint16_T DataTypeConversion_h;       /* '<S542>/Data Type Conversion' */
  uint16_T DataTypeConversion1_p5;     /* '<S542>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_g;          /* '<S542>/Shift Arithmetic' */
  uint16_T Operator_b;                 /* '<S561>/Operator' */
  uint16_T DataType_ge;                /* '<S561>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S542>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S418>/Data Type Conversion21' */
  uint16_T DataTypeConversion_o;       /* '<S550>/Data Type Conversion' */
  uint16_T DataTypeConversion1_cl;     /* '<S550>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_n;          /* '<S550>/Shift Arithmetic' */
  uint16_T Operator_ov;                /* '<S563>/Operator' */
  uint16_T DataType_fe;                /* '<S563>/DataType' */
  uint16_T DataTypeConversion_kf;      /* '<S552>/Data Type Conversion' */
  uint16_T DataTypeConversion1_go;     /* '<S552>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_p;          /* '<S552>/Shift Arithmetic' */
  uint16_T Operator_f;                 /* '<S564>/Operator' */
  uint16_T DataType_n4;                /* '<S564>/DataType' */
  uint16_T DataTypeConversion_jv;      /* '<S528>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ci;     /* '<S528>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_gq;         /* '<S528>/Shift Arithmetic' */
  uint16_T Operator_mq;                /* '<S554>/Operator' */
  uint16_T DataType_jw;                /* '<S554>/DataType' */
  uint16_T DataTypeConversion1_hn;     /* '<S668>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_k;      /* '<S668>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_p4;       /* '<S668>/Shift_Arithmetic 1' */
  uint16_T Operator_pj;                /* '<S673>/Operator' */
  uint16_T DataType_ia;                /* '<S673>/DataType' */
  uint16_T DataTypeConversion4_m;      /* '<S669>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_fe;     /* '<S669>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_fo;       /* '<S669>/Shift_Arithmetic 2' */
  uint16_T Operator_ol;                /* '<S674>/Operator' */
  uint16_T DataType_hk;                /* '<S674>/DataType' */
  uint16_T DataTypeConversion7_b;      /* '<S670>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_l;      /* '<S670>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_ih;       /* '<S670>/Shift_Arithmetic 3' */
  uint16_T Operator_ik;                /* '<S675>/Operator' */
  uint16_T DataType_bp;                /* '<S675>/DataType' */
  uint16_T DataTypeConversion6_f1;     /* '<S681>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_bo;     /* '<S681>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_j;        /* '<S681>/Shift_Arithmetic 2' */
  uint16_T Operator_l;                 /* '<S686>/Operator' */
  uint16_T DataType_lc;                /* '<S686>/DataType' */
  uint16_T DataType_hs;                /* '<S1047>/DataType' */
  uint16_T Shift_Arithmetic_g;         /* '<S1041>/Shift_Arithmetic ' */
  uint16_T DataType_jj;                /* '<S982>/DataType' */
  uint16_T Shift_Arithmetic_j;         /* '<S976>/Shift_Arithmetic ' */
  uint16_T DataType_fg;                /* '<S986>/DataType' */
  uint16_T Shift_Arithmetic3_k;        /* '<S976>/Shift_Arithmetic 3' */
  uint16_T DataType_cy;                /* '<S932>/DataType' */
  uint16_T Shift_Arithmetic3_a;        /* '<S924>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_c3;     /* '<S885>/Data Type Conversion1' */
  uint16_T Operator_h3;                /* '<S916>/Operator' */
  uint16_T Operator_dr;                /* '<S917>/Operator' */
  uint16_T DataType_pq;                /* '<S917>/DataType' */
  uint16_T Shift_Arithmetic_o;         /* '<S885>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_gi;      /* '<S724>/Data Type Conversion' */
  uint16_T DataTypeConversion1_it;     /* '<S724>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_a;         /* '<S724>/Shift Arithmetic2' */
  uint16_T Operator_nj;                /* '<S728>/Operator' */
  uint16_T DataType_cn;                /* '<S728>/DataType' */
  uint16_T DataTypeConversion_gm;      /* '<S717>/Data Type Conversion' */
  uint16_T DataTypeConversion1_df;     /* '<S717>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_f;         /* '<S717>/Shift Arithmetic2' */
  uint16_T Operator_nv;                /* '<S720>/Operator' */
  uint16_T DataType_cp;                /* '<S720>/DataType' */
  uint16_T DataTypeConversion_n;       /* '<S699>/Data Type Conversion' */
  uint16_T DataTypeConversion1_k2;     /* '<S699>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_fl;        /* '<S699>/Shift Arithmetic2' */
  uint16_T Operator_er;                /* '<S702>/Operator' */
  uint16_T DataType_le1;               /* '<S702>/DataType' */
  int16_T DataTypeConversion3_kh;      /* '<S668>/Data Type Conversion3' */
  int16_T DataTypeConversion6_k;       /* '<S669>/Data Type Conversion6' */
  int16_T DataTypeConversion9_k;       /* '<S670>/Data Type Conversion9' */
  int16_T DataTypeConversion8_a3;      /* '<S681>/Data Type Conversion8' */
  int16_T DataTypeConversion_kg;       /* '<S885>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S796>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_h;           /* '<S788>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S812>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_e;           /* '<S804>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_ee;          /* '<S832>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_ej;          /* '<S831>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_em;          /* '<S820>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_be;       /* '<S475>/Data Type Conversion' */
  uint8_T DataTypeConversion1_d0;      /* '<S475>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_pl;      /* '<S475>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_d;       /* '<S475>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_c;       /* '<S475>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_j3;      /* '<S475>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_e;       /* '<S475>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_bg;      /* '<S475>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S421>/Multiport_Switch' */
  uint8_T DataTypeConversion_kl[8];    /* '<S469>/Data Type Conversion' */
  uint8_T DataTypeConversion_l4;       /* '<S484>/Data Type Conversion' */
  uint8_T DataTypeConversion1_hl;      /* '<S484>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_pj3;     /* '<S484>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_i;       /* '<S484>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_g1;      /* '<S484>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_g;       /* '<S484>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_d;       /* '<S484>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_o4;      /* '<S484>/Data Type Conversion7' */
  uint8_T RawData_l[8];                /* '<S422>/Multiport_Switch' */
  uint8_T DataTypeConversion_e[8];     /* '<S470>/Data Type Conversion' */
  uint8_T DataTypeConversion_c0[39];   /* '<S521>/Data Type Conversion' */
  uint8_T DataTypeConversion_ld;       /* '<S649>/Data Type Conversion' */
  uint8_T DataTypeConversion1_e1;      /* '<S649>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_oi;      /* '<S649>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_f;       /* '<S649>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_j;       /* '<S649>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_n;       /* '<S649>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_d4;      /* '<S649>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_e1;      /* '<S649>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_fx;      /* '<S649>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_b;       /* '<S649>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_l;      /* '<S649>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_l;      /* '<S649>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S649>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_f;      /* '<S649>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_n;      /* '<S649>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_a;      /* '<S649>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_e;      /* '<S649>/Data Type Conversion16' */
  uint8_T Add_g;                       /* '<S649>/Add' */
  uint8_T DataTypeConversion15_c;      /* '<S628>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_gi;      /* '<S628>/Data Type Conversion4' */
  uint8_T MABX_Mode_h;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[24];              /* '<S407>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S400>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1058>/Vector Concatenate' */
  uint8_T UnitDelay1_i;                /* '<S859>/Unit Delay1' */
  uint8_T MultiportSwitch_g[8];        /* '<S859>/Multiport Switch' */
  uint8_T SupervisorMode_l;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S418>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S418>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S418>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S418>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S418>/Data Type Conversion26' */
  uint8_T DataTypeConversion_ai;       /* '<S610>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ct;      /* '<S610>/Data Type Conversion1' */
  uint8_T Add1_d;                      /* '<S649>/Add1' */
  uint8_T DataTypeConversion_mo;       /* '<S583>/Data Type Conversion' */
  uint8_T DataTypeConversion1_fk;      /* '<S583>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_jx;      /* '<S583>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_c;       /* '<S583>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_ms;      /* '<S583>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_p;       /* '<S583>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_e3;      /* '<S583>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_a;       /* '<S583>/Data Type Conversion7' */
  uint8_T DataTypeConversion_mx;       /* '<S584>/Data Type Conversion' */
  uint8_T DataTypeConversion1_jb;      /* '<S584>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_hg;      /* '<S584>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_km;      /* '<S584>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_e;       /* '<S584>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_m;       /* '<S584>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_m;       /* '<S584>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h;       /* '<S584>/Data Type Conversion7' */
  uint8_T RawData_e[8];                /* '<S444>/Multiport_Switch' */
  uint8_T Operator_jg;                 /* '<S672>/Operator' */
  uint8_T DataType_d1;                 /* '<S672>/DataType' */
  uint8_T Operator_nz;                 /* '<S671>/Operator' */
  uint8_T DataType_de;                 /* '<S671>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S666>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_gt;       /* '<S597>/Data Type Conversion' */
  uint8_T DataTypeConversion1_evi;     /* '<S597>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_lr;      /* '<S597>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_a3;      /* '<S597>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_it;      /* '<S597>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_nf;      /* '<S597>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_l;       /* '<S597>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_p;       /* '<S597>/Data Type Conversion7' */
  uint8_T RawData_i[8];                /* '<S445>/Multiport_Switch' */
  uint8_T Operator_fu;                 /* '<S684>/Operator' */
  uint8_T DataType_fsx;                /* '<S684>/DataType' */
  uint8_T Shift_Arithmetic_pw;         /* '<S677>/Shift_Arithmetic ' */
  uint8_T Operator_gz;                 /* '<S683>/Operator' */
  uint8_T Operator_at;                 /* '<S685>/Operator' */
  uint8_T DataType_on;                 /* '<S685>/DataType' */
  uint8_T Shift_Arithmetic1_pr;        /* '<S677>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S678>/SignalConversion' */
  uint8_T DataTypeConversion3_c1;      /* '<S420>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S679>/SignalConversion' */
  uint8_T DataTypeConversion4_li;      /* '<S420>/Data Type Conversion4' */
  uint8_T State;                       /* '<S859>/Chart' */
  uint8_T TPDT_count;                  /* '<S859>/Chart' */
  uint8_T VectorConcatenate_l[8];      /* '<S1060>/Vector Concatenate' */
  uint8_T VectorConcatenate_d[8];      /* '<S1061>/Vector Concatenate' */
  uint8_T DataType_bii;                /* '<S1046>/DataType' */
  uint8_T DataTypeConversion3_li;      /* '<S1041>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_jk;      /* '<S1041>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_f5;      /* '<S1041>/Data Type Conversion2' */
  uint8_T DataTypeConversion_cw;       /* '<S1011>/Data Type Conversion' */
  uint8_T Operator_gj;                 /* '<S1016>/Operator' */
  uint8_T DataType_hz;                 /* '<S1016>/DataType' */
  uint8_T DataTypeConversion2_fy;      /* '<S1031>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ai;      /* '<S1031>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S1031>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_j1;      /* '<S1031>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S1031>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_k;          /* '<S1031>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_e;      /* '<S1031>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_lq;      /* '<S1031>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_p;         /* '<S1031>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_c;      /* '<S1031>/Data Type Conversion11' */
  uint8_T Reshape_o[16];               /* '<S1034>/Reshape' */
  uint8_T Selector_n;                  /* '<S1034>/Selector' */
  uint8_T DataTypeConversion10_p;      /* '<S1031>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S1031>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_fl;      /* '<S1031>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_b;       /* '<S1031>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_e;       /* '<S1031>/Data Type Conversion9' */
  uint8_T Add2_d;                      /* '<S1031>/Add2' */
  uint8_T Shift_Arithmetic6_p;         /* '<S1031>/Shift_Arithmetic 6' */
  uint8_T Add3_o;                      /* '<S1031>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S1031>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_p;         /* '<S1031>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S1031>/Bitwise Operator7' */
  uint8_T DataTypeConversion_ot;       /* '<S1013>/Data Type Conversion' */
  uint8_T Operator_ms;                 /* '<S1027>/Operator' */
  uint8_T Operator_hb;                 /* '<S1022>/Operator' */
  uint8_T DataType_ot;                 /* '<S1022>/DataType' */
  uint8_T Operator_p4;                 /* '<S1023>/Operator' */
  uint8_T Operator_np;                 /* '<S1024>/Operator' */
  uint8_T Operator_hh;                 /* '<S1025>/Operator' */
  uint8_T Operator_jqc;                /* '<S1026>/Operator' */
  uint8_T DataTypeConversion_o3;       /* '<S940>/Data Type Conversion' */
  uint8_T Operator_as;                 /* '<S948>/Operator' */
  uint8_T Operator_fw;                 /* '<S945>/Operator' */
  uint8_T DataType_er;                 /* '<S945>/DataType' */
  uint8_T Operator_bv;                 /* '<S946>/Operator' */
  uint8_T Operator_fj;                 /* '<S947>/Operator' */
  uint8_T Operator_jb;                 /* '<S949>/Operator' */
  uint8_T Operator_oo;                 /* '<S950>/Operator' */
  uint8_T DataTypeConversion_p3;       /* '<S941>/Data Type Conversion' */
  uint8_T Operator_au;                 /* '<S956>/Operator' */
  uint8_T Operator_hc;                 /* '<S957>/Operator' */
  uint8_T Operator_ery;                /* '<S953>/Operator' */
  uint8_T DataType_co;                 /* '<S953>/DataType' */
  uint8_T Operator_li;                 /* '<S954>/Operator' */
  uint8_T Operator_gwa;                /* '<S955>/Operator' */
  uint8_T Operator_aup;                /* '<S958>/Operator' */
  uint8_T DataTypeConversion_hc;       /* '<S944>/Data Type Conversion' */
  uint8_T Switch_l;                    /* '<S978>/Switch' */
  uint8_T DataTypeConversion_ep;       /* '<S976>/Data Type Conversion' */
  uint8_T DataType_jq;                 /* '<S981>/DataType' */
  uint8_T DataTypeConversion4_m2;      /* '<S976>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_jw;      /* '<S976>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_pb;      /* '<S976>/Data Type Conversion6' */
  uint8_T Reshape_e[16];               /* '<S1006>/Reshape' */
  uint8_T Selector_k;                  /* '<S1006>/Selector' */
  uint8_T DataTypeConversion1_nz;      /* '<S976>/Data Type Conversion1' */
  uint8_T Operator_hw;                 /* '<S989>/Operator' */
  uint8_T DataType_bs;                 /* '<S989>/DataType' */
  uint8_T DataType_hn;                 /* '<S985>/DataType' */
  uint8_T DataTypeConversion8_p;       /* '<S976>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_g;       /* '<S976>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_a;      /* '<S976>/Data Type Conversion10' */
  uint8_T Add_ow;                      /* '<S976>/Add' */
  uint8_T Shift_Arithmetic6_m;         /* '<S976>/Shift_Arithmetic 6' */
  uint8_T Add1_pa;                     /* '<S976>/Add1' */
  uint8_T Operator_k3;                 /* '<S990>/Operator' */
  uint8_T DataType_j4;                 /* '<S990>/DataType' */
  uint8_T Shift_Arithmetic7_j;         /* '<S976>/Shift_Arithmetic 7' */
  uint8_T Operator_gp;                 /* '<S991>/Operator' */
  uint8_T DataType_n0;                 /* '<S991>/DataType' */
  uint8_T DataTypeConversion_cw4;      /* '<S943>/Data Type Conversion' */
  uint8_T Operator_dk;                 /* '<S971>/Operator' */
  uint8_T Operator_nq;                 /* '<S967>/Operator' */
  uint8_T DataType_jg;                 /* '<S967>/DataType' */
  uint8_T Operator_bu;                 /* '<S968>/Operator' */
  uint8_T Operator_gf;                 /* '<S969>/Operator' */
  uint8_T Operator_br;                 /* '<S970>/Operator' */
  uint8_T Operator_d2;                 /* '<S972>/Operator' */
  uint8_T DataTypeConversion_ikj;      /* '<S886>/Data Type Conversion' */
  uint8_T Operator_jr;                 /* '<S918>/Operator' */
  uint8_T DataType_gn;                 /* '<S918>/DataType' */
  uint8_T DataTypeConversion2_d;       /* '<S886>/Data Type Conversion2' */
  uint8_T Operator_i3;                 /* '<S920>/Operator' */
  uint8_T DataType_a5;                 /* '<S920>/DataType' */
  uint8_T Shift_Arithmetic_m;          /* '<S886>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_k;       /* '<S886>/Data Type Conversion4' */
  uint8_T Operator_m3;                 /* '<S921>/Operator' */
  uint8_T DataType_iu;                 /* '<S921>/DataType' */
  uint8_T Shift_Arithmetic1_h;         /* '<S886>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_hw;      /* '<S886>/Data Type Conversion5' */
  uint8_T Operator_cv;                 /* '<S919>/Operator' */
  uint8_T DataType_ku;                 /* '<S919>/DataType' */
  uint8_T Shift_Arithmetic2_a;         /* '<S886>/Shift_Arithmetic 2' */
  uint8_T Operator_lb;                 /* '<S926>/Operator' */
  uint8_T DataType_mi;                 /* '<S926>/DataType' */
  uint8_T DataTypeConversion1_nm;      /* '<S886>/Data Type Conversion1' */
  uint8_T Operator_hb3;                /* '<S922>/Operator' */
  uint8_T DataType_fn;                 /* '<S922>/DataType' */
  uint8_T DataType_lz;                 /* '<S931>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S924>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S924>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S924>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_k;      /* '<S924>/Data Type Conversion13' */
  uint8_T Operator_f3;                 /* '<S930>/Operator' */
  uint8_T DataType_m0;                 /* '<S930>/DataType' */
  uint8_T Checksum;                    /* '<S924>/Add' */
  uint8_T Shift_Arithmetic7_h;         /* '<S924>/Shift_Arithmetic 7' */
  uint8_T Add1_cz;                     /* '<S924>/Add1' */
  uint8_T Operator_mw;                 /* '<S929>/Operator' */
  uint8_T DataType_gq;                 /* '<S929>/DataType' */
  uint8_T DataTypeConversion3_dm;      /* '<S886>/Data Type Conversion3' */
  uint8_T Operator_cp;                 /* '<S923>/Operator' */
  uint8_T DataType_ef5;                /* '<S923>/DataType' */
  uint8_T Shift_Arithmetic3_mb;        /* '<S886>/Shift_Arithmetic 3' */
  uint8_T Operator_kj;                 /* '<S927>/Operator' */
  uint8_T DataType_ny4;                /* '<S927>/DataType' */
  uint8_T DataTypeConversion_d2;       /* '<S881>/Data Type Conversion' */
  uint8_T Operator_ce;                 /* '<S896>/Operator' */
  uint8_T DataType_pw;                 /* '<S896>/DataType' */
  uint8_T Operator_gl;                 /* '<S901>/Operator' */
  uint8_T Operator_jh;                 /* '<S897>/Operator' */
  uint8_T Operator_nzu;                /* '<S902>/Operator' */
  uint8_T Operator_ch;                 /* '<S903>/Operator' */
  uint8_T Operator_fz;                 /* '<S900>/Operator' */
  uint8_T DataType_cs;                 /* '<S916>/DataType' */
  uint8_T DataTypeConversion2_es;      /* '<S885>/Data Type Conversion2' */
  uint8_T DataTypeConversion_l5;       /* '<S861>/Data Type Conversion' */
  uint8_T Operator_jg0;                /* '<S866>/Operator' */
  uint8_T Operator_ow;                 /* '<S863>/Operator' */
  uint8_T DataType_gj;                 /* '<S863>/DataType' */
  uint8_T Operator_jy;                 /* '<S864>/Operator' */
  uint8_T Operator_gh;                 /* '<S865>/Operator' */
  uint8_T Operator_auf;                /* '<S867>/Operator' */
  uint8_T Operator_ha;                 /* '<S868>/Operator' */
  uint8_T DataTypeConversion_p32;      /* '<S862>/Data Type Conversion' */
  uint8_T Operator_fy;                 /* '<S874>/Operator' */
  uint8_T Operator_ia;                 /* '<S871>/Operator' */
  uint8_T DataType_n1;                 /* '<S871>/DataType' */
  uint8_T Operator_db;                 /* '<S872>/Operator' */
  uint8_T Operator_pw;                 /* '<S873>/Operator' */
  uint8_T Operator_go;                 /* '<S875>/Operator' */
  uint8_T Operator_nt;                 /* '<S876>/Operator' */
  uint8_T FixPtUnitDelay2_o;           /* '<S842>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S723>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S725>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S726>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_o;       /* '<S716>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S718>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_n;       /* '<S711>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S712>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_d;       /* '<S705>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S706>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S707>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_k;       /* '<S698>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S700>/Signal Conversion' */
  uint8_T UnitDelay_b2[17];            /* '<S648>/Unit Delay' */
  uint8_T Data[17];                    /* '<S648>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S651>/Inport' */
  uint8_T DataTypeConversion_kz;       /* '<S608>/Data Type Conversion' */
  uint8_T DataTypeConversion_hh;       /* '<S609>/Data Type Conversion' */
  uint8_T DataTypeConversion1_ae;      /* '<S608>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_bl;      /* '<S609>/Data Type Conversion1' */
  uint8_T DataTypeConversion_ec;       /* '<S595>/Data Type Conversion' */
  uint8_T DataTypeConversion1_or;      /* '<S595>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_d0;      /* '<S595>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_eb;      /* '<S595>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_mw;      /* '<S595>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_j3i;     /* '<S595>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ee;      /* '<S595>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_m;       /* '<S595>/Data Type Conversion7' */
  uint8_T DataTypeConversion_ha;       /* '<S596>/Data Type Conversion' */
  uint8_T DataTypeConversion1_nu;      /* '<S596>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_m5;      /* '<S596>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_by;      /* '<S596>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_fl;      /* '<S596>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_gi;      /* '<S596>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_af;      /* '<S596>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_j;       /* '<S596>/Data Type Conversion7' */
  uint8_T DataTypeConversion_at;       /* '<S582>/Data Type Conversion' */
  uint8_T DataTypeConversion1_jt;      /* '<S582>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_f5c;     /* '<S582>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_nj;      /* '<S582>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_g2;      /* '<S582>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ff;      /* '<S582>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_lqm;     /* '<S582>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ci;      /* '<S582>/Data Type Conversion7' */
  uint8_T UnitDelay_ca[39];            /* '<S520>/Unit Delay' */
  uint8_T Data_i[39];                  /* '<S520>/serialize_tpdt' */
  uint8_T Inport_j[39];                /* '<S523>/Inport' */
  uint8_T DataTypeConversion1_ba;      /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_pw;      /* '<S209>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew1;     /* '<S104>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S104>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b;           /* '<S394>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_pl;          /* '<S383>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_oi;          /* '<S371>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S371>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_n;           /* '<S355>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion1_f1;      /* '<S79>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_e;       /* '<S80>/Data Type Conversion5' */
  uint8_T FixPtUnitDelay2_j;           /* '<S373>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_i;      /* '<S373>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_m;           /* '<S374>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_b;      /* '<S374>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_h5;          /* '<S340>/FixPt Unit Delay2' */
  uint8_T stateChange;                 /* '<S283>/Chart' */
  uint8_T FixPtUnitDelay2_a;           /* '<S272>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_g;           /* '<S198>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_d;           /* '<S191>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_mf;          /* '<S178>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_op;          /* '<S140>/FixPt Unit Delay2' */
  int8_T DataTypeConversion4_iy;       /* '<S680>/Data Type Conversion4' */
  int8_T DataTypeConversion10_h;       /* '<S682>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S397>/for_logging7' */
  boolean_T SFunction1_i;              /* '<S734>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S416>/EStopSwActive' */
  boolean_T SFunction1_c;              /* '<S733>/S-Function1' */
  boolean_T Operator_mx;               /* '<S843>/Operator' */
  boolean_T DataType_ll;               /* '<S843>/DataType' */
  boolean_T LogicalOperator;           /* '<S745>/Logical Operator' */
  boolean_T SFunction1_g;              /* '<S735>/S-Function1' */
  boolean_T Operator_hd;               /* '<S844>/Operator' */
  boolean_T DataType_oe;               /* '<S844>/DataType' */
  boolean_T AND2;                      /* '<S745>/AND2' */
  boolean_T SFunction1_l;              /* '<S736>/S-Function1' */
  boolean_T StartPBActive;             /* '<S416>/StartPBActive' */
  boolean_T LogicalOperator_i;         /* '<S416>/Logical Operator' */
  boolean_T Compare;                   /* '<S759>/Compare' */
  boolean_T Uk1_j;                     /* '<S755>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S755>/FixPt Relational Operator' */
  boolean_T UnitDelay_n;               /* '<S743>/Unit Delay' */
  boolean_T Compare_j;                 /* '<S758>/Compare' */
  boolean_T Uk1_f;                     /* '<S754>/Delay Input1' */
  boolean_T FixPtRelationalOperator_h; /* '<S754>/FixPt Relational Operator' */
  boolean_T UnitDelay1_c;              /* '<S756>/Unit Delay1' */
  boolean_T OR1;                       /* '<S756>/OR1' */
  boolean_T Compare_k;                 /* '<S760>/Compare' */
  boolean_T LessThanOrEqual;           /* '<S756>/LessThanOrEqual' */
  boolean_T AND;                       /* '<S756>/AND' */
  boolean_T NOT;                       /* '<S743>/NOT' */
  boolean_T AND_k;                     /* '<S743>/AND' */
  boolean_T UnitDelay1_d;              /* '<S757>/Unit Delay1' */
  boolean_T OR1_j;                     /* '<S757>/OR1' */
  boolean_T Compare_o;                 /* '<S761>/Compare' */
  boolean_T LessThanOrEqual_n;         /* '<S757>/LessThanOrEqual' */
  boolean_T AND_p;                     /* '<S757>/AND' */
  boolean_T SFunction1_n;              /* '<S738>/S-Function1' */
  boolean_T StartPBActive1;            /* '<S416>/StartPBActive1' */
  boolean_T min_relop;                 /* '<S791>/min_relop' */
  boolean_T max_relop;                 /* '<S791>/max_relop' */
  boolean_T conjunction;               /* '<S791>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S793>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S793>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S779>/Relational Operator9' */
  boolean_T min_relop_k;               /* '<S783>/min_relop' */
  boolean_T max_relop_k;               /* '<S783>/max_relop' */
  boolean_T conjunction_l;             /* '<S783>/conjunction' */
  boolean_T RelationalOperator1_g;     /* '<S785>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S785>/Relational Operator' */
  boolean_T F_Fault_Soft_m;            /* '<S778>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S763>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S779>/Relational Operator8' */
  boolean_T F_Fault_Hard_n;            /* '<S778>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S763>/Logical Operator1' */
  boolean_T Compare_i;                 /* '<S774>/Compare' */
  boolean_T min_relop_a;               /* '<S807>/min_relop' */
  boolean_T max_relop_l;               /* '<S807>/max_relop' */
  boolean_T conjunction_m;             /* '<S807>/conjunction' */
  boolean_T RelationalOperator1_gh;    /* '<S809>/Relational Operator1' */
  boolean_T RelationalOperator_p;      /* '<S809>/Relational Operator' */
  boolean_T F_Fault_Soft_j;            /* '<S781>/Relational Operator9' */
  boolean_T min_relop_l;               /* '<S799>/min_relop' */
  boolean_T max_relop_lf;              /* '<S799>/max_relop' */
  boolean_T conjunction_g;             /* '<S799>/conjunction' */
  boolean_T RelationalOperator1_n;     /* '<S801>/Relational Operator1' */
  boolean_T RelationalOperator_k;      /* '<S801>/Relational Operator' */
  boolean_T F_Fault_Soft_f;            /* '<S780>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S763>/Logical Operator4' */
  boolean_T F_Fault_Hard_p;            /* '<S781>/Relational Operator8' */
  boolean_T F_Fault_Hard_j;            /* '<S780>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S763>/Logical Operator3' */
  boolean_T Compare_b;                 /* '<S775>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S763>/Logical Operator5' */
  boolean_T Unit_Delay_kh;             /* '<S766>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S833>/Unit_Delay1' */
  boolean_T LogicalOperator_n;         /* '<S833>/Logical Operator' */
  boolean_T Unit_Delay1_m;             /* '<S766>/Unit_Delay1' */
  boolean_T Unit_Delay1_c;             /* '<S834>/Unit_Delay1' */
  boolean_T LogicalOperator_k;         /* '<S834>/Logical Operator' */
  boolean_T Compare_d;                 /* '<S770>/Compare' */
  boolean_T Compare_id;                /* '<S826>/Compare' */
  boolean_T LogicalOperator7;          /* '<S764>/Logical Operator7' */
  boolean_T Compare_c;                 /* '<S825>/Compare' */
  boolean_T LogicalOperator8;          /* '<S764>/Logical Operator8' */
  boolean_T Compare_a;                 /* '<S824>/Compare' */
  boolean_T LogicalOperator5;          /* '<S764>/Logical Operator5' */
  boolean_T Compare_l;                 /* '<S823>/Compare' */
  boolean_T LogicalOperator6;          /* '<S764>/Logical Operator6' */
  boolean_T Compare_n;                 /* '<S769>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S768>/Relational Operator' */
  boolean_T min_relop_lv;              /* '<S815>/min_relop' */
  boolean_T max_relop_ki;              /* '<S815>/max_relop' */
  boolean_T conjunction_b;             /* '<S815>/conjunction' */
  boolean_T RelationalOperator1_h;     /* '<S817>/Relational Operator1' */
  boolean_T RelationalOperator_e;      /* '<S817>/Relational Operator' */
  boolean_T F_Fault_Hard_i;            /* '<S782>/Relational Operator8' */
  boolean_T LogicalOperator6_b;        /* '<S744>/Logical Operator6' */
  boolean_T Operator_po;               /* '<S478>/Operator' */
  boolean_T Operator_lij;              /* '<S695>/Operator' */
  boolean_T Operator_he;               /* '<S487>/Operator' */
  boolean_T RX_status;                 /* '<S484>/Data Type Conversion8' */
  boolean_T RX_status_e;               /* '<S422>/Multiport_Switch' */
  boolean_T Operator_dj;               /* '<S522>/Operator' */
  boolean_T LogicalOperator_n4;        /* '<S436>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S649>/Unit_Delay3' */
  boolean_T Operator_gm;               /* '<S650>/Operator' */
  boolean_T LogicalOperator_b;         /* '<S459>/Logical Operator' */
  boolean_T RelationalOperator1_g1[17];/* '<S649>/Relational Operator1' */
  boolean_T Compare_g;                 /* '<S653>/Compare' */
  boolean_T LogicalOperator_f;         /* '<S649>/Logical Operator' */
  boolean_T Unit_Delay_l;              /* '<S649>/Unit_Delay' */
  boolean_T LogicalOperator3_c;        /* '<S655>/Logical Operator3' */
  boolean_T Unit_Delay_lt;             /* '<S655>/Unit_Delay' */
  boolean_T LogicalOperator_id;        /* '<S655>/Logical Operator' */
  boolean_T LogicalOperator1_c;        /* '<S655>/Logical Operator1' */
  boolean_T Operator_jhs;              /* '<S660>/Operator' */
  boolean_T Operator_nl;               /* '<S659>/Operator' */
  boolean_T Operator_ap;               /* '<S661>/Operator' */
  boolean_T Operator_nw;               /* '<S662>/Operator' */
  boolean_T Operator_jbt;              /* '<S663>/Operator' */
  boolean_T Operator_ej;               /* '<S664>/Operator' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S466>/OR' */
  boolean_T Enable;                    /* '<S3>/Enable' */
  boolean_T EStop_j;                   /* '<S3>/Unit_Delay' */
  boolean_T EnableSW;                  /* '<S3>/Unit_Delay' */
  boolean_T EngageReq;                 /* '<S3>/Unit_Delay' */
  boolean_T LogPB;                     /* '<S3>/Unit_Delay' */
  boolean_T AutonomousEnabled;         /* '<S3>/Unit_Delay' */
  boolean_T BrakeSW_j;                 /* '<S3>/Unit_Delay' */
  boolean_T Compare_c5;                /* '<S406>/Compare' */
  boolean_T Uk1_f5;                    /* '<S405>/Delay Input1' */
  boolean_T FixPtRelationalOperator_i; /* '<S405>/FixPt Relational Operator' */
  boolean_T Operator_m1;               /* '<S402>/Operator' */
  boolean_T SystemsOk;                 /* '<S397>/AND1' */
  boolean_T RX_status_es;              /* '<S509>/Data Type Conversion8' */
  boolean_T RX_status_c;               /* '<S638>/Data Type Conversion8' */
  boolean_T Operator_iq;               /* '<S1068>/Operator' */
  boolean_T DataType_k3;               /* '<S1068>/DataType' */
  boolean_T UnitDelay2;                /* '<S859>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S859>/Unit Delay3' */
  boolean_T Operator_n4;               /* '<S1085>/Operator' */
  boolean_T AND3;                      /* '<S1077>/AND3' */
  boolean_T NOT2;                      /* '<S1077>/NOT2' */
  boolean_T OR1_o;                     /* '<S1077>/OR1' */
  boolean_T NOT1;                      /* '<S1077>/NOT1' */
  boolean_T Operator_kk;               /* '<S1086>/Operator' */
  boolean_T NOT_p;                     /* '<S1077>/NOT' */
  boolean_T AND1;                      /* '<S1077>/AND1' */
  boolean_T AND_b;                     /* '<S1077>/AND' */
  boolean_T OR;                        /* '<S1077>/OR' */
  boolean_T AND2_g;                    /* '<S1077>/AND2' */
  boolean_T LogicalOperator_j;         /* '<S1075>/Logical Operator' */
  boolean_T RelationalOperator_g;      /* '<S1076>/Relational Operator' */
  boolean_T RelationalOperator1_m;     /* '<S1076>/Relational Operator1' */
  boolean_T LogicalOperator_iy;        /* '<S1076>/Logical Operator' */
  boolean_T Compare_bx;                /* '<S1082>/Compare' */
  boolean_T Compare_kv;                /* '<S1083>/Compare' */
  boolean_T LogicalOperator1_k;        /* '<S1076>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1076>/Logical Operator2' */
  boolean_T LogicalOperator_l;         /* '<S850>/Logical Operator' */
  boolean_T RX_status_j;               /* '<S573>/Data Type Conversion8' */
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
  boolean_T RX_status_ec;              /* '<S475>/Data Type Conversion8' */
  boolean_T RX_status_el;              /* '<S421>/Multiport_Switch' */
  boolean_T Operator_nj2;              /* '<S479>/Operator' */
  boolean_T Operator_bm;               /* '<S480>/Operator' */
  boolean_T Operator_dl;               /* '<S481>/Operator' */
  boolean_T Operator_hdc;              /* '<S482>/Operator' */
  boolean_T Operator_d0;               /* '<S483>/Operator' */
  boolean_T Operator_goa;              /* '<S488>/Operator' */
  boolean_T Operator_el;               /* '<S489>/Operator' */
  boolean_T Operator_jyv;              /* '<S490>/Operator' */
  boolean_T Operator_a0;               /* '<S491>/Operator' */
  boolean_T Operator_h3s;              /* '<S492>/Operator' */
  boolean_T RX_status_a;               /* '<S493>/Data Type Conversion8' */
  boolean_T RX_status_p;               /* '<S495>/Data Type Conversion8' */
  boolean_T RX_status_c0;              /* '<S497>/Data Type Conversion8' */
  boolean_T RX_status_n;               /* '<S499>/Data Type Conversion8' */
  boolean_T RX_status_c05;             /* '<S501>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S503>/Data Type Conversion8' */
  boolean_T RX_status_h;               /* '<S505>/Data Type Conversion8' */
  boolean_T RX_status_f;               /* '<S507>/Data Type Conversion8' */
  boolean_T RX_status_ao;              /* '<S509>/Switch' */
  boolean_T RX_status_o;               /* '<S512>/Data Type Conversion8' */
  boolean_T RX_status_hs;              /* '<S514>/Data Type Conversion8' */
  boolean_T RX_status_l;               /* '<S516>/Data Type Conversion8' */
  boolean_T RX_status_he;              /* '<S518>/Data Type Conversion8' */
  boolean_T RX_status_k;               /* '<S565>/Data Type Conversion8' */
  boolean_T RX_status_os;              /* '<S567>/Data Type Conversion8' */
  boolean_T RX_status_e2;              /* '<S569>/Data Type Conversion8' */
  boolean_T RX_status_at;              /* '<S571>/Data Type Conversion8' */
  boolean_T RX_status_d;               /* '<S573>/Switch' */
  boolean_T RX_status_ej;              /* '<S576>/Data Type Conversion8' */
  boolean_T RX_status_d5;              /* '<S443>/Switch' */
  boolean_T Operator_ahw;              /* '<S615>/Operator' */
  boolean_T Operator_owm;              /* '<S616>/Operator' */
  boolean_T Operator_ad;               /* '<S617>/Operator' */
  boolean_T RX_status_eh;              /* '<S610>/Data Type Conversion8' */
  boolean_T RX_status_d0;              /* '<S446>/Multiport_Switch' */
  boolean_T Operator_e0;               /* '<S618>/Operator' */
  boolean_T Operator_jj;               /* '<S619>/Operator' */
  boolean_T Operator_ni;               /* '<S620>/Operator' */
  boolean_T RX_status_dj;              /* '<S621>/Data Type Conversion2' */
  boolean_T RX_status_f2;              /* '<S621>/Data Type Conversion5' */
  boolean_T RX_status_i;               /* '<S621>/Data Type Conversion8' */
  boolean_T RX_status_dt;              /* '<S625>/Switch' */
  boolean_T RX_status_je;              /* '<S628>/Data Type Conversion8' */
  boolean_T RX_status_pm;              /* '<S630>/Data Type Conversion8' */
  boolean_T RX_status_fk;              /* '<S632>/Data Type Conversion8' */
  boolean_T RX_status_ce;              /* '<S634>/Data Type Conversion8' */
  boolean_T RX_status_c4;              /* '<S636>/Data Type Conversion8' */
  boolean_T RX_status_dq;              /* '<S640>/Data Type Conversion8' */
  boolean_T RX_status_im;              /* '<S642>/Data Type Conversion8' */
  boolean_T RX_status_hv;              /* '<S644>/Data Type Conversion8' */
  boolean_T RX_status_n3;              /* '<S646>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S649>/Relational Operator2' */
  boolean_T Compare_h;                 /* '<S654>/Compare' */
  boolean_T Unit_Delay2_l3;            /* '<S649>/Unit_Delay2' */
  boolean_T LogicalOperator1_j;        /* '<S649>/Logical Operator1' */
  boolean_T LogicalOperator2_h;        /* '<S655>/Logical Operator2' */
  boolean_T Unit_Delay1_g;             /* '<S649>/Unit_Delay1' */
  boolean_T LogicalOperator3_cs;       /* '<S656>/Logical Operator3' */
  boolean_T Unit_Delay_fs;             /* '<S656>/Unit_Delay' */
  boolean_T LogicalOperator_f2;        /* '<S656>/Logical Operator' */
  boolean_T LogicalOperator1_e;        /* '<S656>/Logical Operator1' */
  boolean_T LogicalOperator2_f;        /* '<S656>/Logical Operator2' */
  boolean_T Operator_la;               /* '<S693>/Operator' */
  boolean_T Operator_b1;               /* '<S696>/Operator' */
  boolean_T Operator_pg;               /* '<S694>/Operator' */
  boolean_T Operator_ay;               /* '<S692>/Operator' */
  boolean_T Operator_ep;               /* '<S589>/Operator' */
  boolean_T Operator_ct;               /* '<S590>/Operator' */
  boolean_T Operator_ki;               /* '<S594>/Operator' */
  boolean_T RX_status_cw;              /* '<S583>/Data Type Conversion8' */
  boolean_T RX_status_b;               /* '<S584>/Data Type Conversion8' */
  boolean_T RX_status_av;              /* '<S444>/Multiport_Switch' */
  boolean_T Operator_pi;               /* '<S591>/Operator' */
  boolean_T Operator_n5;               /* '<S592>/Operator' */
  boolean_T Operator_jya;              /* '<S593>/Operator' */
  boolean_T Operator_kp;               /* '<S602>/Operator' */
  boolean_T Operator_jge;              /* '<S603>/Operator' */
  boolean_T Operator_iq3;              /* '<S607>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S677>/Data Type Conversion' */
  boolean_T DataTypeConversion_f0;     /* '<S420>/Data Type Conversion' */
  boolean_T DataType_f1;               /* '<S683>/DataType' */
  boolean_T DataTypeConversion1_cya;   /* '<S420>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S677>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_ag;    /* '<S420>/Data Type Conversion2' */
  boolean_T RX_status_jg;              /* '<S597>/Data Type Conversion8' */
  boolean_T RX_status_is;              /* '<S445>/Multiport_Switch' */
  boolean_T Operator_eq;               /* '<S604>/Operator' */
  boolean_T Operator_ac;               /* '<S605>/Operator' */
  boolean_T Operator_e4m;              /* '<S606>/Operator' */
  boolean_T SFunction1_a;              /* '<S737>/S-Function1' */
  boolean_T LogPbActive;               /* '<S416>/LogPbActive' */
  boolean_T LogicalOperator2_o;        /* '<S416>/Logical Operator2' */
  boolean_T Compare_ng;                /* '<S751>/Compare' */
  boolean_T Uk1_h;                     /* '<S747>/Delay Input1' */
  boolean_T FixPtRelationalOperator_d; /* '<S747>/FixPt Relational Operator' */
  boolean_T UnitDelay_m3;              /* '<S742>/Unit Delay' */
  boolean_T Compare_bv;                /* '<S750>/Compare' */
  boolean_T Uk1_a;                     /* '<S746>/Delay Input1' */
  boolean_T FixPtRelationalOperator_n; /* '<S746>/FixPt Relational Operator' */
  boolean_T UnitDelay1_em;             /* '<S748>/Unit Delay1' */
  boolean_T OR1_e;                     /* '<S748>/OR1' */
  boolean_T Compare_m;                 /* '<S752>/Compare' */
  boolean_T LessThanOrEqual_a;         /* '<S748>/LessThanOrEqual' */
  boolean_T AND_d;                     /* '<S748>/AND' */
  boolean_T NOT_l;                     /* '<S742>/NOT' */
  boolean_T AND_j;                     /* '<S742>/AND' */
  boolean_T UnitDelay1_ef;             /* '<S749>/Unit Delay1' */
  boolean_T OR1_h;                     /* '<S749>/OR1' */
  boolean_T Compare_p;                 /* '<S753>/Compare' */
  boolean_T LessThanOrEqual_d;         /* '<S749>/LessThanOrEqual' */
  boolean_T AND_e;                     /* '<S749>/AND' */
  boolean_T F_Fault_Soft_b;            /* '<S782>/Relational Operator9' */
  boolean_T Operator_eu;               /* '<S22>/Operator' */
  boolean_T Operator_msz;              /* '<S26>/Operator' */
  boolean_T Operator_fv;               /* '<S27>/Operator' */
  boolean_T Operator_bs;               /* '<S24>/Operator' */
  boolean_T Operator_bw;               /* '<S25>/Operator' */
  boolean_T Operator_eb;               /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S859>/Chart' */
  boolean_T enTPCM;                    /* '<S859>/Chart' */
  boolean_T DataTypeConversion6_c;     /* '<S1040>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S1044>/u2' */
  boolean_T Operator_nr;               /* '<S1044>/Operator' */
  boolean_T DataType_eq;               /* '<S1044>/DataType' */
  boolean_T Unit_Delay_o;              /* '<S1049>/Unit_Delay' */
  boolean_T Operator_kh;               /* '<S1051>/Operator' */
  boolean_T AutonomousOutputEnabled_i; /* '<S1015>/Bus Selector2' */
  boolean_T BrakingControlActive_h;    /* '<S1015>/Bus Selector2' */
  boolean_T Unit_Delay_i;              /* '<S1011>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S1011>/OperatorEnable' */
  boolean_T LogicalOperator8_k;        /* '<S1011>/Logical Operator8' */
  boolean_T LogicalOperator7_p;        /* '<S1011>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S1011>/OperatorEnable' */
  boolean_T LogicalOperator1_n;        /* '<S1011>/Logical Operator1' */
  boolean_T DataTypeConversion2_lj;    /* '<S1011>/Data Type Conversion2' */
  boolean_T LogicalOperator_ij;        /* '<S1011>/Logical Operator' */
  boolean_T Compare_p2;                /* '<S1017>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S1011>/OperatorEnable' */
  boolean_T Unit_Delay_np;             /* '<S1034>/Unit_Delay' */
  boolean_T DataTypeConversion7_f;     /* '<S1013>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_l1;    /* '<S1013>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_nd;    /* '<S1013>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_jt;    /* '<S1013>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_hi;    /* '<S1013>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_fb;    /* '<S1013>/Data Type Conversion6' */
  boolean_T Operator_oq;               /* '<S1036>/Operator' */
  boolean_T DataTypeConversion5_h1;    /* '<S940>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_dr;    /* '<S940>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_on;    /* '<S940>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_jb;    /* '<S940>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_cx;    /* '<S940>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_jm;    /* '<S940>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_il;    /* '<S941>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_ly;    /* '<S941>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_bk;    /* '<S941>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_cr;    /* '<S941>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_gin;   /* '<S941>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_i;     /* '<S941>/Data Type Conversion7' */
  boolean_T Operator_o5;               /* '<S995>/Operator' */
  boolean_T Operator_MX;               /* '<S1004>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S1004>/Operator_MN' */
  boolean_T Operator_epr;              /* '<S996>/Operator' */
  boolean_T Operator_gt;               /* '<S997>/Operator' */
  boolean_T Operator_oy;               /* '<S998>/Operator' */
  boolean_T Operator_ek;               /* '<S999>/Operator' */
  boolean_T Operator_acs;              /* '<S1000>/Operator' */
  boolean_T Unit_Delay_jm;             /* '<S1006>/Unit_Delay' */
  boolean_T DataTypeConversion6_o;     /* '<S943>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_ip;    /* '<S943>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_hb;    /* '<S943>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_d;     /* '<S943>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_ld;    /* '<S943>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_ns;    /* '<S943>/Data Type Conversion7' */
  boolean_T LogicalOperator1_l;        /* '<S1004>/Logical Operator1' */
  boolean_T LogicalOperator_nk;        /* '<S1004>/Logical Operator' */
  boolean_T Operator_n3;               /* '<S1008>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S886>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S904>/u1' */
  boolean_T DataTypeConversion2_p2;    /* '<S881>/Data Type Conversion2' */
  boolean_T Operator_bx;               /* '<S904>/Operator' */
  boolean_T DataType_dl;               /* '<S904>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_o; /* '<S907>/u1' */
  boolean_T DataTypeConversion5_b;     /* '<S881>/Data Type Conversion5' */
  boolean_T Operator_ja;               /* '<S907>/Operator' */
  boolean_T DataType_iq;               /* '<S907>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_f; /* '<S898>/u1' */
  boolean_T DataTypeConversion6_kr;    /* '<S881>/Data Type Conversion6' */
  boolean_T Operator_mo;               /* '<S898>/Operator' */
  boolean_T DataType_l3;               /* '<S898>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_h; /* '<S899>/u1' */
  boolean_T DataTypeConversion7_bb;    /* '<S881>/Data Type Conversion7' */
  boolean_T Operator_dlf;              /* '<S899>/Operator' */
  boolean_T DataType_py;               /* '<S899>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_c; /* '<S905>/u1' */
  boolean_T DataTypeConversion3_hv;    /* '<S881>/Data Type Conversion3' */
  boolean_T Operator_pig;              /* '<S905>/Operator' */
  boolean_T DataType_oj;               /* '<S905>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_oe;/* '<S906>/u1' */
  boolean_T DataTypeConversion4_gind;  /* '<S881>/Data Type Conversion4' */
  boolean_T Operator_lal;              /* '<S906>/Operator' */
  boolean_T DataType_jc;               /* '<S906>/DataType' */
  boolean_T DataTypeConversion2_kz;    /* '<S887>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S892>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_j;/* '<S893>/Enable' */
  boolean_T DataTypeConversion2_oy;    /* '<S882>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_k2;    /* '<S883>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_cj;    /* '<S861>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_lc;    /* '<S861>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_iq;    /* '<S861>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_mt;    /* '<S861>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_cj;    /* '<S861>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_gj;    /* '<S861>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_hy;    /* '<S862>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_bu;    /* '<S862>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_ld;    /* '<S862>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_kz;    /* '<S862>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_ew;    /* '<S862>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_im;    /* '<S862>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S845>/Chart' */
  boolean_T Unit_Delay_l1;             /* '<S838>/Unit_Delay' */
  boolean_T LogicalOperator1_h;        /* '<S838>/Logical Operator1' */
  boolean_T LogicalOperator_bu;        /* '<S838>/Logical Operator' */
  boolean_T Unit_Delay_ct;             /* '<S839>/Unit_Delay' */
  boolean_T LogicalOperator1_jw;       /* '<S839>/Logical Operator1' */
  boolean_T RelationalOperator1_a;     /* '<S767>/Relational Operator1' */
  boolean_T LogicalOperator3_d;        /* '<S837>/Logical Operator3' */
  boolean_T Unit_Delay_ej;             /* '<S837>/Unit_Delay' */
  boolean_T LogicalOperator1_i;        /* '<S837>/Logical Operator1' */
  boolean_T LogicalOperator_b4;        /* '<S837>/Logical Operator' */
  boolean_T LogicalOperator2_d;        /* '<S837>/Logical Operator2' */
  boolean_T min_relop_n;               /* '<S840>/min_relop' */
  boolean_T RX_status_ez;              /* '<S648>/serialize_tpdt' */
  boolean_T RX_status_pb;              /* '<S625>/Data Type Conversion8' */
  boolean_T RX_status_ab;              /* '<S625>/Data Type Conversion3' */
  boolean_T RX_status_g;               /* '<S608>/Data Type Conversion8' */
  boolean_T RX_status_nw;              /* '<S609>/Data Type Conversion8' */
  boolean_T RX_status_kh;              /* '<S595>/Data Type Conversion8' */
  boolean_T RX_status_d5q;             /* '<S596>/Data Type Conversion8' */
  boolean_T RX_status_ek;              /* '<S582>/Data Type Conversion8' */
  boolean_T RX_status_if;              /* '<S578>/Data Type Conversion8' */
  boolean_T RX_status_fz;              /* '<S579>/Data Type Conversion8' */
  boolean_T RX_status_p4;              /* '<S573>/Data Type Conversion3' */
  boolean_T RX_status_di;              /* '<S520>/serialize_tpdt' */
  boolean_T RX_status_fe;              /* '<S509>/Data Type Conversion1' */
  boolean_T CheckHDOP;                 /* '<S395>/CheckHDOP' */
  boolean_T Unit_Delay_nh;             /* '<S76>/Unit_Delay' */
  boolean_T Compare_jp;                /* '<S100>/Compare' */
  boolean_T Uk1_d;                     /* '<S98>/Delay Input1' */
  boolean_T FixPtRelationalOperator_o; /* '<S98>/FixPt Relational Operator' */
  boolean_T UnitDelay_i;               /* '<S97>/Unit Delay' */
  boolean_T OR_e;                      /* '<S97>/OR' */
  boolean_T Compare_f;                 /* '<S99>/Compare' */
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
  boolean_T Compare_e;                 /* '<S205>/Compare' */
  boolean_T RelationalOperator2_p;     /* '<S109>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S109>/Relational Operator3' */
  boolean_T f_vspd_leq_than_hyst_and_target;/* '<S109>/Logical Operator' */
  boolean_T LogicalOperator1_m;        /* '<S109>/Logical Operator1' */
  boolean_T DataTypeConversion4_d5;    /* '<S77>/Data Type Conversion4' */
  boolean_T F_Brake_control_active;    /* '<S109>/Logical Operator2' */
  boolean_T Compare_e5;                /* '<S215>/Compare' */
  boolean_T LogicalOperator2_n;        /* '<S209>/Logical Operator2' */
  boolean_T Compare_ih;                /* '<S213>/Compare' */
  boolean_T Compare_ex;                /* '<S214>/Compare' */
  boolean_T BrakingActive2;            /* '<S209>/BrakingActive2' */
  boolean_T f_brake_sw_off;            /* '<S209>/BrakingActive1' */
  boolean_T Compare_ay;                /* '<S216>/Compare' */
  boolean_T Compare_os;                /* '<S217>/Compare' */
  boolean_T f_brk_gov_inactive;        /* '<S209>/Logical Operator1' */
  boolean_T LogicalOperator_ke;        /* '<S209>/Logical Operator' */
  boolean_T LogicalOperator_j2;        /* '<S82>/Logical Operator' */
  boolean_T APTC_arb_pedal_low_idl_sw_o;/* '<S75>/Relational Operator' */
  boolean_T RelationalOperator1_i;     /* '<S89>/Relational Operator1' */
  boolean_T RelationalOperator_ca;     /* '<S89>/Relational Operator' */
  boolean_T RelationalOperator1_ar;    /* '<S90>/Relational Operator1' */
  boolean_T RelationalOperator_n;      /* '<S90>/Relational Operator' */
  boolean_T RelationalOperator3_c[2];  /* '<S104>/Relational Operator3' */
  boolean_T LogicalOperator4_o;        /* '<S104>/Logical Operator4' */
  boolean_T RelationalOperator4[2];    /* '<S104>/Relational Operator4' */
  boolean_T F_Service_brake_pressure_applie;/* '<S104>/Logical Operator3' */
  boolean_T RelationalOperator6[2];    /* '<S104>/Relational Operator6' */
  boolean_T F_Brake_sw_CAN;            /* '<S104>/Logical Operator' */
  boolean_T LogicalOperator5_n;        /* '<S104>/Logical Operator5' */
  boolean_T F_Vehicle_stopped;         /* '<S108>/Relational Operator1' */
  boolean_T Compare_g4;                /* '<S206>/Compare' */
  boolean_T RelationalOperator4_l;     /* '<S109>/Relational Operator4' */
  boolean_T F_Hold_brakes_at_zero_d;   /* '<S109>/Logical Operator3' */
  boolean_T Compare_ey;                /* '<S387>/Compare' */
  boolean_T Compare_jb;                /* '<S384>/Compare' */
  boolean_T Compare_hc;                /* '<S385>/Compare' */
  boolean_T Compare_bp;                /* '<S386>/Compare' */
  boolean_T LogicalOperator2_f5;       /* '<S347>/Logical Operator2' */
  boolean_T Unit_Delay_ot;             /* '<S389>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S389>/Logical Operator1' */
  boolean_T LogicalOperator_fl;        /* '<S389>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S390>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S390>/Logical Operator1' */
  boolean_T Compare_d3;                /* '<S375>/Compare' */
  boolean_T Compare_dv;                /* '<S376>/Compare' */
  boolean_T LogicalOperator1_g;        /* '<S345>/Logical Operator1' */
  boolean_T Unit_Delay_h;              /* '<S378>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S378>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S378>/Logical Operator' */
  boolean_T Unit_Delay_c4;             /* '<S379>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S379>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S341>/Compare' */
  boolean_T FixPtRelationalOperator_dk[2];/* '<S342>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_nk[33];            /* '<S361>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S356>/Logical Operator' */
  boolean_T RelationalOperator_f;      /* '<S356>/Relational Operator' */
  boolean_T LogicalOperator3_o;        /* '<S362>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S362>/Unit_Delay' */
  boolean_T LogicalOperator_o;         /* '<S362>/Logical Operator' */
  boolean_T LogicalOperator1_p;        /* '<S362>/Logical Operator1' */
  boolean_T f_vspd_min_delta_greater_than_t;/* '<S356>/Logical Operator2' */
  boolean_T RelationalOperator1_g4;    /* '<S356>/Relational Operator1' */
  boolean_T f_vspd_max_delta_greater_than_t;/* '<S356>/Logical Operator1' */
  boolean_T f_accel_rate_greater_than_thres;/* '<S356>/Relational Operator2' */
  boolean_T f_decel_rate_greater_than_thres;/* '<S356>/Relational Operator3' */
  boolean_T f_jerk_rate_greater_than_thresh;/* '<S356>/Relational Operator4' */
  boolean_T f_jerk_rate_greater_than_thre_n;/* '<S356>/Relational Operator5' */
  boolean_T RelationalOperator6_i;     /* '<S356>/Relational Operator6' */
  boolean_T f_distance_max_delta_greater_th;/* '<S356>/Logical Operator3' */
  boolean_T F_Inhibit_sigmoid_vector_shapin;/* '<S356>/Logical Operator4' */
  boolean_T LogicalOperator_nd;        /* '<S81>/Logical Operator' */
  boolean_T LogicalOperator2_ft;       /* '<S81>/Logical Operator2' */
  boolean_T RelationalOperator3_k;     /* '<S357>/Relational Operator3' */
  boolean_T RelationalOperator1_hj;    /* '<S357>/Relational Operator1' */
  boolean_T LogicalOperator_da;        /* '<S357>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S357>/Relational Operator2' */
  boolean_T F_set_max_distance_accumulated;/* '<S357>/Logical Operator2' */
  boolean_T RelationalOperator_l;      /* '<S357>/Relational Operator' */
  boolean_T FixPtRelationalOperator_p[2];/* '<S349>/FixPt Relational Operator' */
  boolean_T LogicalOperator_g;         /* '<S343>/Logical Operator' */
  boolean_T Unit_Delay_ls;             /* '<S351>/Unit_Delay' */
  boolean_T LogicalOperator1_lp;       /* '<S351>/Logical Operator1' */
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
  boolean_T RelationalOperator1_c;     /* '<S211>/Relational Operator1' */
  boolean_T RelationalOperator3_g;     /* '<S211>/Relational Operator3' */
  boolean_T RelationalOperator2_f;     /* '<S211>/Relational Operator2' */
  boolean_T RelationalOperator4_o;     /* '<S211>/Relational Operator4' */
  boolean_T F_Ignition_sw_off_conditions_me;/* '<S211>/Logical Operator' */
  boolean_T F_Ignition_sw_on;          /* '<S211>/Relational Operator' */
  boolean_T DataTypeConversion_l1;     /* '<S283>/Data Type Conversion' */
  boolean_T Unit_Delay1_j;             /* '<S327>/Unit_Delay1' */
  boolean_T LogicalOperator_kh;        /* '<S327>/Logical Operator' */
  boolean_T highRateOfChange;          /* '<S282>/highRateOfChange' */
  boolean_T closeToEdge;               /* '<S282>/closeToEdge' */
  boolean_T JumpNearEdge;              /* '<S282>/JumpNearEdge' */
  boolean_T Uk1_k2;                    /* '<S326>/Delay Input1' */
  boolean_T FixPtRelationalOperator_iv;/* '<S326>/FixPt Relational Operator' */
  boolean_T DataTypeConversion_dz;     /* '<S282>/Data Type Conversion' */
  boolean_T Unit_Delay1_f;             /* '<S328>/Unit_Delay1' */
  boolean_T LogicalOperator_a;         /* '<S328>/Logical Operator' */
  boolean_T Unit_Delay1_d;             /* '<S329>/Unit_Delay1' */
  boolean_T LogicalOperator_nz;        /* '<S329>/Logical Operator' */
  boolean_T RelationalOperator_l5;     /* '<S283>/Relational Operator' */
  boolean_T RelationalOperator_d;      /* '<S295>/Relational Operator' */
  boolean_T RelationalOperator5_f;     /* '<S298>/Relational Operator5' */
  boolean_T RelationalOperator4_la;    /* '<S298>/Relational Operator4' */
  boolean_T RelationalOperator2_o;     /* '<S298>/Relational Operator2' */
  boolean_T LogicalOperator1_ji;       /* '<S298>/Logical Operator1' */
  boolean_T RelationalOperator1_ie;    /* '<S298>/Relational Operator1' */
  boolean_T RelationalOperator3_p;     /* '<S298>/Relational Operator3' */
  boolean_T LogicalOperator2_oh;       /* '<S298>/Logical Operator2' */
  boolean_T LogicalOperator_bs;        /* '<S298>/Logical Operator' */
  boolean_T LogicalOperator3_oi;       /* '<S298>/Logical Operator3' */
  boolean_T LowerRelop1;               /* '<S297>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S297>/UpperRelop' */
  boolean_T DataTypeConversion_dn;     /* '<S278>/Data Type Conversion' */
  boolean_T LowerRelop1_h;             /* '<S317>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S317>/UpperRelop' */
  boolean_T RelationalOperator1_p;     /* '<S304>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S304>/Relational Operator' */
  boolean_T RelationalOperator1_f;     /* '<S312>/Relational Operator1' */
  boolean_T RelationalOperator_l4;     /* '<S312>/Relational Operator' */
  boolean_T RelationalOperator1_gr;    /* '<S302>/Relational Operator1' */
  boolean_T RelationalOperator_o;      /* '<S302>/Relational Operator' */
  boolean_T LowerRelop1_o;             /* '<S318>/LowerRelop1' */
  boolean_T UpperRelop_o;              /* '<S318>/UpperRelop' */
  boolean_T LowerRelop1_l;             /* '<S323>/LowerRelop1' */
  boolean_T UpperRelop_k;              /* '<S323>/UpperRelop' */
  boolean_T LowerRelop1_e;             /* '<S322>/LowerRelop1' */
  boolean_T UpperRelop_fl;             /* '<S322>/UpperRelop' */
  boolean_T LowerTest;                 /* '<S288>/Lower Test' */
  boolean_T UpperTest;                 /* '<S288>/Upper Test' */
  boolean_T AND_ps;                    /* '<S288>/AND' */
  boolean_T LowerTest_l;               /* '<S293>/Lower Test' */
  boolean_T UpperTest_e;               /* '<S293>/Upper Test' */
  boolean_T AND_jt;                    /* '<S293>/AND' */
  boolean_T RelationalOperator_oq;     /* '<S80>/Relational Operator' */
  boolean_T min_relop_k0;              /* '<S353>/min_relop' */
  boolean_T LogicalOperator2_g;        /* '<S362>/Logical Operator2' */
  boolean_T min_relop_c;               /* '<S381>/min_relop' */
  boolean_T min_relop_f;               /* '<S392>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S336>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S336>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S336>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S337>/Unit_Delay' */
  boolean_T LogicalOperator1_hp;       /* '<S337>/Logical Operator1' */
  boolean_T RelationalOperator1_e;     /* '<S334>/Relational Operator1' */
  boolean_T LogicalOperator3_a;        /* '<S335>/Logical Operator3' */
  boolean_T Unit_Delay_ig;             /* '<S335>/Unit_Delay' */
  boolean_T LogicalOperator1_joh;      /* '<S335>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S335>/Logical Operator' */
  boolean_T LogicalOperator2_j;        /* '<S335>/Logical Operator2' */
  boolean_T min_relop_d;               /* '<S338>/min_relop' */
  boolean_T RelationalOperator1_mf;    /* '<S295>/Relational Operator1' */
  boolean_T RelationalOperator1_ng;    /* '<S224>/Relational Operator1' */
  boolean_T RelationalOperator_d3;     /* '<S224>/Relational Operator' */
  boolean_T RelationalOperator1_ch;    /* '<S225>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S225>/Relational Operator' */
  boolean_T RelationalOperator1_l;     /* '<S226>/Relational Operator1' */
  boolean_T RelationalOperator_fd;     /* '<S226>/Relational Operator' */
  boolean_T Unit_Delay1_m5;            /* '<S220>/Unit_Delay1' */
  boolean_T f_gpid_reset;              /* '<S220>/Logical Operator' */
  boolean_T RelationalOperator_fl;     /* '<S220>/Relational Operator' */
  boolean_T Unit_Delay_d5;             /* '<S220>/Unit_Delay' */
  boolean_T RelationalOperator1_d;     /* '<S220>/Relational Operator1' */
  boolean_T Unit_Delay_i0;             /* '<S247>/Unit_Delay' */
  boolean_T LogicalOperator1_o;        /* '<S247>/Logical Operator1' */
  boolean_T Unit_Delay1_dw;            /* '<S267>/Unit_Delay1' */
  boolean_T LogicalOperator_at;        /* '<S267>/Logical Operator' */
  boolean_T Unit_Delay_ne;             /* '<S268>/Unit_Delay' */
  boolean_T LogicalOperator1_kz;       /* '<S268>/Logical Operator1' */
  boolean_T Compare_go;                /* '<S252>/Compare' */
  boolean_T RelationalOperator_a;      /* '<S212>/Relational Operator' */
  boolean_T Compare_pj;                /* '<S251>/Compare' */
  boolean_T min_relop_cb;              /* '<S270>/min_relop' */
  boolean_T RelationalOperator1_j;     /* '<S273>/Relational Operator1' */
  boolean_T RelationalOperator_p4;     /* '<S273>/Relational Operator' */
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
  boolean_T LogicalOperator_lo;        /* '<S173>/Logical Operator' */
  boolean_T Unit_Delay_li;             /* '<S174>/Unit_Delay' */
  boolean_T LogicalOperator1_oy;       /* '<S174>/Logical Operator1' */
  boolean_T Compare_ni;                /* '<S158>/Compare' */
  boolean_T Compare_dl;                /* '<S157>/Compare' */
  boolean_T min_relop_a5;              /* '<S176>/min_relop' */
  boolean_T RelationalOperator1_k;     /* '<S179>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S179>/Relational Operator' */
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
  boolean_T Selector_d;                /* '<S30>/Selector' */
  boolean_T Operator_f5;               /* '<S32>/Operator' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_l;/* '<S1076>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1075>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1075>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_i;/* '<S1075>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S1075>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_b_T If_Then_Else_dq;/* '<S1015>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_ep;/* '<S1014>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f1;/* '<S839>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_dt;/* '<S834>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mz;/* '<S833>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_i;/* '<S764>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_p;/* '<S764>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_ln;/* '<S764>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n;/* '<S764>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_m;/* '<S782>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_g;/* '<S817>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_d;/* '<S817>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_l;/* '<S781>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_c;/* '<S809>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_g;/* '<S809>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_f;/* '<S780>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_e;/* '<S801>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m;/* '<S801>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_j;/* '<S779>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_f;/* '<S793>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S793>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S778>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S785>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S785>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S762>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S762>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_e;/* '<S762>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S466>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S390>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S347>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S379>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S345>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S366>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_j;/* '<S357>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S360>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S351>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S350>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S337>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S329>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S328>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b3;/* '<S327>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o0;/* '<S312>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m0;/* '<S312>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_mf_T If_Then_Else_co;/* '<S310>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_m;/* '<S281>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S304>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S304>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S302>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S302>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m1;/* '<S281>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_nh;/* '<S280>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h3;/* '<S273>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pi;/* '<S273>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_cp;/* '<S268>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S267>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S244>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S244>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_a;/* '<S219>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_dz;/* '<S226>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_br;/* '<S226>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_kg;/* '<S225>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bo;/* '<S225>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h;/* '<S224>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ct;/* '<S224>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nr;/* '<S228>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ga;/* '<S203>/If_Then_Else' */
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
  B_If_Then_Else_L4_MABX_T If_Then_Else1_b;/* '<S141>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nj;/* '<S141>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bg;/* '<S136>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ly;/* '<S135>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S112>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S112>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_p;/* '<S90>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iz;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lw;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_o;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S757>/Unit Delay' */
  real_T UnitDelay_DSTATE_m;           /* '<S756>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE;       /* '<S796>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S788>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_h;     /* '<S812>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_h3;    /* '<S804>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S833>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_b;         /* '<S834>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S832>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_i;     /* '<S831>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S820>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_k;           /* '<S403>/Unit Delay' */
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
  real_T UnitDelay_DSTATE_e;           /* '<S748>/Unit Delay' */
  real_T UnitDelay_DSTATE_j;           /* '<S749>/Unit Delay' */
  real_T Unit_Delay_DSTATE;            /* '<S928>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_l;          /* '<S847>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_b;     /* '<S842>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_e;          /* '<S651>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_a;          /* '<S523>/Unit_Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S395>/Unit Delay1' */
  real_T LongitudnalPosition_DSTATE;   /* '<S396>/LongitudnalPosition' */
  real_T VehHeading_DSTATE;            /* '<S396>/VehHeading' */
  real_T XPosition_DSTATE;             /* '<S396>/XPosition' */
  real_T YPosition_DSTATE;             /* '<S396>/YPosition' */
  real_T UnitDelay1_DSTATE_m;          /* '<S97>/Unit Delay1' */
  real_T Unit_Delay_DSTATE_ef;         /* '<S347>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hj;    /* '<S394>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_m;          /* '<S391>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_g;          /* '<S345>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hq;    /* '<S383>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_b;          /* '<S380>/Unit_Delay' */
  real_T DelayInput1_DSTATE[2];        /* '<S342>/Delay Input1' */
  real_T Unit_Delay_DSTATE_bw;         /* '<S360>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S371>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_p;          /* '<S369>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S349>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_ej;    /* '<S355>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S350>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S350>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S350>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S348>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S203>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S202>/UD' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S327>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S328>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_p;         /* '<S329>/Unit_Delay2' */
  real_T UnitDelay_DSTATE_ml;          /* '<S295>/Unit Delay' */
  real_T UnitDelay_DSTATE_m0;          /* '<S296>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S296>/Unit Delay1' */
  real_T DelayInput2_DSTATE;           /* '<S308>/Delay Input2' */
  real_T Integrator_DSTATE;            /* '<S307>/Integrator' */
  real_T Filter_DSTATE;                /* '<S307>/Filter' */
  real_T DelayInput_DSTATE;            /* '<S311>/Delay Input' */
  real_T DelayOutput_DSTATE;           /* '<S311>/Delay Output' */
  real_T DelayInput2_DSTATE_a;         /* '<S309>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S301>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE_l;         /* '<S321>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S80>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_e3;          /* '<S80>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pe;    /* '<S373>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S374>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S368>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_ov;    /* '<S340>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a;     /* '<S272>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_m;         /* '<S267>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_fz;         /* '<S222>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_o;          /* '<S184>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_d;     /* '<S198>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_om;         /* '<S195>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_c;          /* '<S183>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_b0;    /* '<S191>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_oj;         /* '<S188>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_eu;         /* '<S146>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g2;    /* '<S178>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_c;         /* '<S173>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_h;          /* '<S145>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_d;          /* '<S111>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g1;    /* '<S140>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_dy;        /* '<S135>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_i;          /* '<S110>/Unit_Delay' */
  volatile real_T RateTransition_Buffer0;/* '<S417>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S417>/Rate Transition' */
  real_T TmpRTBAtFlashOutport1_Buffer0;/* synthesized block */
  real_T Subtract_DWORK1;              /* '<S651>/Subtract' */
  real_T TmpRTBAtSignalConversion1Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion3Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion2Inport;/* synthesized block */
  real_T TmpRTBAtrad2deg1Inport1_Buffer0;/* synthesized block */
  real_T TmpRTBAtsignCurveOffsetInport1_;/* synthesized block */
  real_T TmpRTBAtAdd2Inport2_Buffer0;  /* synthesized block */
  real_T PrevY;                        /* '<S310>/Limit Rate Limiter' */
  real_T TimeFinal;                    /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityInitialLimited;       /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityFinalLimited;         /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationInitialLimited;   /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationFinalLimited;     /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk56;                       /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk12;                       /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T a;                            /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T b;                            /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T c;                            /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Acceleration34;               /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* '<S211>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV;/* '<S211>/Relay_control_state_machine' */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV; /* '<S211>/Relay_control_state_machine' */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* '<S211>/Relay_control_state_machine' */
  real_T MABX_RELAY_ON_DELAY_SECS_APV; /* '<S211>/Relay_control_state_machine' */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV;/* '<S211>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* '<S211>/Relay_control_state_machine' */
  real_T IGN_RELAY_ON_DELAY_SECS_APV;  /* '<S211>/Relay_control_state_machine' */
  void *dsa_tcpip_setup_PWORK;         /* '<S399>/dsa_tcpip_setup' */
  void *TCPIP_Com_PWORK;               /* '<S400>/TCPIP_Com' */
  void* Assertion_slioAccessor;        /* '<S783>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S791>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S799>/Assertion' */
  void* Assertion_slioAccessor_g;      /* '<S807>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S815>/Assertion' */
  void* Assertion_slioAccessor_et;     /* '<S840>/Assertion' */
  void* Assertion_slioAccessor_al;     /* '<S285>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S290>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S353>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S381>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S392>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S338>/Assertion' */
  void* Assertion_slioAccessor_eg;     /* '<S270>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S196>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S189>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S176>/Assertion' */
  void* Assertion_slioAccessor_bo;     /* '<S138>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S285>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S290>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S1050>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_c;         /* '<S1035>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_mk;        /* '<S1007>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_hi;        /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j1;        /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_128_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_129_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S398>/Heartbeat' */
  int32_T clockTickCounter_f;          /* '<S1077>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S649>/Add' */
  uint32_T Subtract_DWORK1_b;          /* '<S1050>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S1031>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S211>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S399>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S460>/S-Function1' */
  int_T SFunction1_IWORK_p[2];         /* '<S461>/S-Function1' */
  int_T SFunction1_IWORK_a[2];         /* '<S462>/S-Function1' */
  int_T SFunction1_IWORK_d[2];         /* '<S463>/S-Function1' */
  int_T SFunction1_IWORK_p1[2];        /* '<S464>/S-Function1' */
  int_T SFunction1_IWORK_m[2];         /* '<S465>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S409>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S796>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S788>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S812>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_k;    /* '<S804>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ie;   /* '<S832>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_iv;   /* '<S831>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_b;    /* '<S820>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_d;         /* '<S859>/Unit Delay1' */
  uint8_T Unit_Delay_138_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S842>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_a[17];      /* '<S648>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_em[39];     /* '<S520>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S394>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ip;   /* '<S383>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_fh;   /* '<S371>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S355>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S373>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S374>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S340>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S272>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S198>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S191>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o4;   /* '<S178>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S140>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S755>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_o;        /* '<S743>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S754>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_kw;      /* '<S756>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_b;       /* '<S757>/Unit Delay1' */
  boolean_T Unit_Delay_DSTATE_h2;      /* '<S766>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S833>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_m;      /* '<S766>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_j;      /* '<S834>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S649>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_k;       /* '<S649>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_dl;      /* '<S655>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_48_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_83_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_84_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_np;     /* '<S405>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S859>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S859>/Unit Delay3' */
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
  boolean_T Unit_Delay2_DSTATE_k;      /* '<S649>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_p;      /* '<S649>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_g1;      /* '<S656>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S747>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_dy;       /* '<S742>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S746>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_c;       /* '<S748>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_c2;      /* '<S749>/Unit Delay1' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ek;      /* '<S1049>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_bm;      /* '<S1011>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jc;      /* '<S1034>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_im;      /* '<S1006>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_m5;      /* '<S838>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ep;      /* '<S839>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_cg;      /* '<S837>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_fv;      /* '<S76>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S98>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_b1;       /* '<S97>/Unit Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S389>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S390>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S378>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S379>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ko;      /* '<S362>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_la;      /* '<S351>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eu4;     /* '<S107>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_d;      /* '<S203>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_db;     /* '<S327>/Unit_Delay1' */
  boolean_T DelayInput1_DSTATE_f0;     /* '<S326>/Delay Input1' */
  boolean_T Unit_Delay1_DSTATE_a;      /* '<S328>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p3;     /* '<S329>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_bd;      /* '<S336>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jt;      /* '<S337>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ll;      /* '<S335>/Unit_Delay' */
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
  volatile int8_T RateTransition_write_buf;/* '<S417>/Rate Transition' */
  volatile int8_T RateTransition_read_buf;/* '<S417>/Rate Transition' */
  volatile int8_T RateTransition_last_buf_wr;/* '<S417>/Rate Transition' */
  int8_T LongitudnalPosition_PrevResetSt;/* '<S396>/LongitudnalPosition' */
  int8_T VehHeading_PrevResetState;    /* '<S396>/VehHeading' */
  int8_T XPosition_PrevResetState;     /* '<S396>/XPosition' */
  int8_T YPosition_PrevResetState;     /* '<S396>/YPosition' */
  int8_T Integrator_PrevResetState;    /* '<S307>/Integrator' */
  int8_T Filter_PrevResetState;        /* '<S307>/Filter' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S301>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_e;/* '<S80>/Discrete-Time Integrator' */
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S859>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S859>/Chart' */
  uint8_T temporalCounter_i1_p;        /* '<S859>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S845>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S845>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S763>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S763>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S763>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S763>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S763>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_p;       /* '<S763>/Health State Machine PWM Sensor 1' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S301>/Discrete-Time Integrator' */
  uint8_T is_active_c12_SUB_L4_Task_10ms_;/* '<S283>/Chart' */
  uint8_T is_c12_SUB_L4_Task_10ms_SUB_STE;/* '<S283>/Chart' */
  uint8_T is_active_c6_SUB_L4_Task_10ms_S;/* '<S211>/Relay_control_state_machine' */
  uint8_T is_c6_SUB_L4_Task_10ms_SUB_STAT;/* '<S211>/Relay_control_state_machine' */
  uint8_T is_POWER_UP_ROUTINE;         /* '<S211>/Relay_control_state_machine' */
  uint8_T is_POWER_DOWN_ROUTINE;       /* '<S211>/Relay_control_state_machine' */
  uint8_T is_active_c19_SUB_L4_Task_10ms_;/* '<S79>/Chart' */
  uint8_T is_c19_SUB_L4_Task_10ms_SUB_STA;/* '<S79>/Chart' */
  boolean_T AlternateMethod;           /* '<S344>/VehicleSpeedSetpointDynamicCalculation' */
  boolean_T Slew_at_event_MODE;        /* '<S744>/Slew_at_event' */
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
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1063>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_e;/* '<S1062>/CAN_TYPE1_TX_M1_C1' */
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

/* Parameters for system: '<S977>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S992>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1090>/Constant'
                                        */
  real_T TransferFcnLeadorLag_ICPrevInpu;/* Mask Parameter: TransferFcnLeadorLag_ICPrevInpu
                                          * Referenced by: '<S311>/Delay Input'
                                          */
  real_T TransferFcnLeadorLag_ICPrevOutp;/* Mask Parameter: TransferFcnLeadorLag_ICPrevOutp
                                          * Referenced by: '<S311>/Delay Output'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S202>/UD'
                                          */
  real_T PIDController_LowerSaturationLi;/* Mask Parameter: PIDController_LowerSaturationLi
                                          * Referenced by: '<S307>/Saturate'
                                          */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S307>/Filter Coefficient'
                                        */
  real_T WrapToZero1_Threshold;        /* Mask Parameter: WrapToZero1_Threshold
                                        * Referenced by: '<S937>/FixPt Switch'
                                        */
  real_T PIDController_UpperSaturationLi;/* Mask Parameter: PIDController_UpperSaturationLi
                                          * Referenced by: '<S307>/Saturate'
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
                                        * Referenced by: '<S387>/Constant'
                                        */
  real_T CompareToConstant10_const;    /* Mask Parameter: CompareToConstant10_const
                                        * Referenced by: '<S384>/Constant'
                                        */
  real_T CompareToConstant11_const;    /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S385>/Constant'
                                        */
  real_T CompareToConstant12_const;    /* Mask Parameter: CompareToConstant12_const
                                        * Referenced by: '<S386>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S375>/Constant'
                                        */
  real_T CompareToConstant8_const;     /* Mask Parameter: CompareToConstant8_const
                                        * Referenced by: '<S376>/Constant'
                                        */
  real_T CompareToConstant_const_g;    /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S319>/Constant'
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
                                        * Referenced by: '<S338>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_o;  /* Mask Parameter: CheckStaticLowerBound_min_o
                                        * Referenced by: '<S353>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_h;  /* Mask Parameter: CheckStaticLowerBound_min_h
                                        * Referenced by: '<S381>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_nz; /* Mask Parameter: CheckStaticLowerBound_min_nz
                                        * Referenced by: '<S392>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_k;  /* Mask Parameter: CheckStaticLowerBound_min_k
                                        * Referenced by: '<S840>/min_val'
                                        */
  real_T DetectChange1_vinit;          /* Mask Parameter: DetectChange1_vinit
                                        * Referenced by: '<S342>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_n;        /* Mask Parameter: DetectChange1_vinit_n
                                        * Referenced by: '<S349>/Delay Input1'
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
  ENUM_SIGNAL_HEALTH_T CompareToConstant_const_cw;/* Mask Parameter: CompareToConstant_const_cw
                                                   * Referenced by: '<S774>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_c;/* Mask Parameter: CompareToConstant2_const_c
                                                   * Referenced by: '<S775>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_c;/* Mask Parameter: CompareToConstant3_const_c
                                                   * Referenced by: '<S770>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S826>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S825>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_m;/* Mask Parameter: CompareToConstant3_const_m
                                                   * Referenced by: '<S824>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_jn;/* Mask Parameter: CompareToConstant1_const_jn
                                                    * Referenced by: '<S823>/Constant'
                                                    */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_o;/* Mask Parameter: CompareToConstant1_const_o
                                                   * Referenced by: '<S769>/Constant'
                                                   */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_j;/* Mask Parameter: CompareToConstant_const_j
                                                            * Referenced by: '<S1017>/Constant'
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
                                               * Referenced by: '<S1049>/Constant'
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
                                        * Referenced by: '<S326>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                        * Referenced by: '<S755>/Delay Input1'
                                        */
  boolean_T DetectFallNonpositive_vinit_d;/* Mask Parameter: DetectFallNonpositive_vinit_d
                                           * Referenced by: '<S754>/Delay Input1'
                                           */
  boolean_T DetectRisePositive1_vinit; /* Mask Parameter: DetectRisePositive1_vinit
                                        * Referenced by: '<S405>/Delay Input1'
                                        */
  boolean_T DetectRisePositive_vinit_e;/* Mask Parameter: DetectRisePositive_vinit_e
                                        * Referenced by: '<S747>/Delay Input1'
                                        */
  boolean_T DetectFallNonpositive_vinit_l;/* Mask Parameter: DetectFallNonpositive_vinit_l
                                           * Referenced by: '<S746>/Delay Input1'
                                           */
  uint8_T Operator_BitMask;            /* Mask Parameter: Operator_BitMask
                                        * Referenced by: '<S866>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S863>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S864>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S865>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S867>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S868>/Operator'
                                        */
  uint8_T Operator_BitMask_n;          /* Mask Parameter: Operator_BitMask_n
                                        * Referenced by: '<S874>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S871>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S872>/Operator'
                                        */
  uint8_T Operator_BitMask_cz;         /* Mask Parameter: Operator_BitMask_cz
                                        * Referenced by: '<S873>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S875>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S876>/Operator'
                                        */
  uint8_T Operator_BitMask_ag;         /* Mask Parameter: Operator_BitMask_ag
                                        * Referenced by: '<S918>/Operator'
                                        */
  uint8_T Operator_BitMask_js;         /* Mask Parameter: Operator_BitMask_js
                                        * Referenced by: '<S920>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S921>/Operator'
                                        */
  uint8_T Operator_BitMask_oz;         /* Mask Parameter: Operator_BitMask_oz
                                        * Referenced by: '<S919>/Operator'
                                        */
  uint8_T Operator_BitMask_ju;         /* Mask Parameter: Operator_BitMask_ju
                                        * Referenced by: '<S922>/Operator'
                                        */
  uint8_T Operator_BitMask_kh;         /* Mask Parameter: Operator_BitMask_kh
                                        * Referenced by: '<S923>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S896>/Operator'
                                        */
  uint8_T Operator_BitMask_nu;         /* Mask Parameter: Operator_BitMask_nu
                                        * Referenced by: '<S901>/Operator'
                                        */
  uint8_T Operator_BitMask_au;         /* Mask Parameter: Operator_BitMask_au
                                        * Referenced by: '<S897>/Operator'
                                        */
  uint8_T Operator_BitMask_ce;         /* Mask Parameter: Operator_BitMask_ce
                                        * Referenced by: '<S902>/Operator'
                                        */
  uint8_T Operator_BitMask_dk;         /* Mask Parameter: Operator_BitMask_dk
                                        * Referenced by: '<S903>/Operator'
                                        */
  uint8_T Operator_BitMask_jd;         /* Mask Parameter: Operator_BitMask_jd
                                        * Referenced by: '<S900>/Operator'
                                        */
  uint8_T Operator_BitMask_cm;         /* Mask Parameter: Operator_BitMask_cm
                                        * Referenced by: '<S948>/Operator'
                                        */
  uint8_T Operator_BitMask_gs;         /* Mask Parameter: Operator_BitMask_gs
                                        * Referenced by: '<S945>/Operator'
                                        */
  uint8_T Operator_BitMask_bh;         /* Mask Parameter: Operator_BitMask_bh
                                        * Referenced by: '<S946>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S947>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S949>/Operator'
                                        */
  uint8_T Operator_BitMask_nq;         /* Mask Parameter: Operator_BitMask_nq
                                        * Referenced by: '<S950>/Operator'
                                        */
  uint8_T Operator_BitMask_pm;         /* Mask Parameter: Operator_BitMask_pm
                                        * Referenced by: '<S956>/Operator'
                                        */
  uint8_T Operator_BitMask_od;         /* Mask Parameter: Operator_BitMask_od
                                        * Referenced by: '<S957>/Operator'
                                        */
  uint8_T Operator_BitMask_dl;         /* Mask Parameter: Operator_BitMask_dl
                                        * Referenced by: '<S953>/Operator'
                                        */
  uint8_T Operator_BitMask_hq;         /* Mask Parameter: Operator_BitMask_hq
                                        * Referenced by: '<S954>/Operator'
                                        */
  uint8_T Operator_BitMask_ob;         /* Mask Parameter: Operator_BitMask_ob
                                        * Referenced by: '<S955>/Operator'
                                        */
  uint8_T Operator_BitMask_cx;         /* Mask Parameter: Operator_BitMask_cx
                                        * Referenced by: '<S958>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S971>/Operator'
                                        */
  uint8_T Operator_BitMask_ms;         /* Mask Parameter: Operator_BitMask_ms
                                        * Referenced by: '<S967>/Operator'
                                        */
  uint8_T Operator_BitMask_dj;         /* Mask Parameter: Operator_BitMask_dj
                                        * Referenced by: '<S968>/Operator'
                                        */
  uint8_T Operator_BitMask_oby;        /* Mask Parameter: Operator_BitMask_oby
                                        * Referenced by: '<S969>/Operator'
                                        */
  uint8_T Operator_BitMask_cb;         /* Mask Parameter: Operator_BitMask_cb
                                        * Referenced by: '<S970>/Operator'
                                        */
  uint8_T Operator_BitMask_nk;         /* Mask Parameter: Operator_BitMask_nk
                                        * Referenced by: '<S972>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S1016>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_os;         /* Mask Parameter: Operator_BitMask_os
                                        * Referenced by: '<S1027>/Operator'
                                        */
  uint8_T Operator_BitMask_ne;         /* Mask Parameter: Operator_BitMask_ne
                                        * Referenced by: '<S1022>/Operator'
                                        */
  uint8_T Operator_BitMask_cef;        /* Mask Parameter: Operator_BitMask_cef
                                        * Referenced by: '<S1023>/Operator'
                                        */
  uint8_T Operator_BitMask_nn;         /* Mask Parameter: Operator_BitMask_nn
                                        * Referenced by: '<S1024>/Operator'
                                        */
  uint8_T Operator_BitMask_dje;        /* Mask Parameter: Operator_BitMask_dje
                                        * Referenced by: '<S1025>/Operator'
                                        */
  uint8_T Operator_BitMask_hz;         /* Mask Parameter: Operator_BitMask_hz
                                        * Referenced by: '<S1026>/Operator'
                                        */
  uint8_T Operator_BitMask_ly;         /* Mask Parameter: Operator_BitMask_ly
                                        * Referenced by: '<S843>/Operator'
                                        */
  uint8_T Operator_BitMask_do;         /* Mask Parameter: Operator_BitMask_do
                                        * Referenced by: '<S844>/Operator'
                                        */
  uint8_T Operator_BitMask_jf;         /* Mask Parameter: Operator_BitMask_jf
                                        * Referenced by: '<S672>/Operator'
                                        */
  uint8_T Operator_BitMask_am;         /* Mask Parameter: Operator_BitMask_am
                                        * Referenced by: '<S671>/Operator'
                                        */
  uint8_T Operator_BitMask_lp;         /* Mask Parameter: Operator_BitMask_lp
                                        * Referenced by: '<S684>/Operator'
                                        */
  uint8_T Operator_BitMask_ia;         /* Mask Parameter: Operator_BitMask_ia
                                        * Referenced by: '<S683>/Operator'
                                        */
  uint8_T Operator_BitMask_ah;         /* Mask Parameter: Operator_BitMask_ah
                                        * Referenced by: '<S685>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_OutV_h[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_h
                                               * Referenced by: '<S1006>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_Out_dj[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_dj
                                               * Referenced by: '<S1034>/Constant'
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
  real_T SpeedSaturation_UpperSat;     /* Expression: 255
                                        * Referenced by: '<S280>/Speed Saturation'
                                        */
  real_T SpeedSaturation_LowerSat;     /* Expression: 7.5
                                        * Referenced by: '<S280>/Speed Saturation'
                                        */
  real_T kmhtoms_Gain;                 /* Expression: 1/3.6
                                        * Referenced by: '<S280>/km//h to m//s'
                                        */
  real_T ErrorSaturation_UpperSat;     /* Expression: pi/2
                                        * Referenced by: '<S280>/Error Saturation'
                                        */
  real_T ErrorSaturation_LowerSat;     /* Expression: -pi/2
                                        * Referenced by: '<S280>/Error Saturation'
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
                                        * Referenced by: '<S280>/1-D Lookup Table'
                                        */
  real_T deg2rad_Gain_n;               /* Expression: pi/180
                                        * Referenced by: '<S280>/deg2rad'
                                        */
  real_T invert_Gain;                  /* Expression: -1
                                        * Referenced by: '<S280>/invert'
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
                                        * Referenced by: '<S334>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_f;/* Expression: 0.0
                                          * Referenced by: '<S340>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_ah;           /* Expression: 1
                                        * Referenced by: '<S334>/Constant1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 0.5
                                        * Referenced by: '<S372>/Gain'
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
                                        * Referenced by: '<S347>/Unit_Delay'
                                        */
  real_T STABILITY_ACTIVE_VSPD_TARGET_AP;/* Expression: 0
                                          * Referenced by: '<S347>/STABILITY_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_n;            /* Expression: 255
                                        * Referenced by: '<S347>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_l;/* Expression: 0.0
                                          * Referenced by: '<S394>/FixPt Unit Delay1'
                                          */
  real_T STABILITY_CTRL_SLEW_INC_APV_Val;/* Expression: 3
                                          * Referenced by: '<S347>/STABILITY_CTRL_SLEW_INC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_hae;/* Expression: 0
                                          * Referenced by: '<S391>/Unit_Delay'
                                          */
  real_T STABILITY_CTRL_SLEW_DEC_APV_Val;/* Expression: 5
                                          * Referenced by: '<S347>/STABILITY_CTRL_SLEW_DEC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_fb;/* Expression: 0
                                         * Referenced by: '<S345>/Unit_Delay'
                                         */
  real_T FCW_ACTIVE_VSPD_TARGET_APV_Valu;/* Expression: 0
                                          * Referenced by: '<S345>/FCW_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_b;            /* Expression: 255
                                        * Referenced by: '<S345>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_d;/* Expression: 0.0
                                          * Referenced by: '<S383>/FixPt Unit Delay1'
                                          */
  real_T FCW_CTRL_SLEW_INC_APV_Value;  /* Expression: 1
                                        * Referenced by: '<S345>/FCW_CTRL_SLEW_INC_APV'
                                        */
  real_T Unit_Delay_InitialCondition_c;/* Expression: 0
                                        * Referenced by: '<S380>/Unit_Delay'
                                        */
  real_T FCW_CTRL_SLEW_DEC_APV_Value;  /* Expression: 5000
                                        * Referenced by: '<S345>/FCW_CTRL_SLEW_DEC_APV'
                                        */
  real_T TmpRTBAtSignalConversion3Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S341>/Constant'
                                        */
  real_T TmpRTBAtSignalConversion2Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation5_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S344>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S344>/Saturation5'
                                        */
  real_T MIN_VSPD_SIGMOID_INITIAL_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S344>/MIN_VSPD_SIGMOID_INITIAL_KPH_APV'
                                          */
  real_T Gain1_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S344>/Gain1'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S344>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S344>/Saturation4'
                                        */
  real_T MIN_VSPD_SIGMOID_FINAL_KPH_APV_;/* Expression: 0
                                          * Referenced by: '<S344>/MIN_VSPD_SIGMOID_FINAL_KPH_APV'
                                          */
  real_T Gain2_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S344>/Gain2'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S344>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S344>/Saturation6'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S344>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S344>/Saturation7'
                                        */
  real_T VEH_JERK_INITIAL_APV_Value;   /* Expression: 0.4
                                        * Referenced by: '<S81>/VEH_JERK_INITIAL_APV'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S344>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: 0.001
                                        * Referenced by: '<S344>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S344>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0.001
                                        * Referenced by: '<S344>/Saturation2'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: 3.6
                                        * Referenced by: '<S344>/Gain3'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S361>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition_e;/* Expression: 0
                                        * Referenced by: '<S360>/Unit_Delay'
                                        */
  real_T MIN_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S356>/MIN_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T MAX_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S356>/MAX_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T ACCEL_RATE_ABS_MAX_THRESHOLD_MS;/* Expression: 5
                                          * Referenced by: '<S356>/ACCEL_RATE_ABS_MAX_THRESHOLD_MS2_APV'
                                          */
  real_T ACCEL_RATE_ABS_MIN_THRESHOLD_MS;/* Expression: -5
                                          * Referenced by: '<S356>/ACCEL_RATE_ABS_MIN_THRESHOLD_MS2_APV'
                                          */
  real_T JERK_RATE_ABS_MAX_THRESHOLD_MS3;/* Expression: 5
                                          * Referenced by: '<S356>/JERK_RATE_ABS_MAX_THRESHOLD_MS3_APV'
                                          */
  real_T JERK_RATE_ABS_MIN_THRESHOLD_MS3;/* Expression: -5
                                          * Referenced by: '<S356>/JERK_RATE_ABS_MIN_THRESHOLD_MS3_APV'
                                          */
  real_T MAX_DISTANCE_DELTA_THRESHOLD_M_;/* Expression: 0.5
                                          * Referenced by: '<S356>/MAX_DISTANCE_DELTA_THRESHOLD_M_APV'
                                          */
  real_T CPV1_Value_i;                 /* Expression: 0.1
                                        * Referenced by: '<S357>/CPV1'
                                        */
  real_T CPV_Value_h;                  /* Expression: 0
                                        * Referenced by: '<S366>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_h;/* Expression: 0.0
                                          * Referenced by: '<S371>/FixPt Unit Delay1'
                                          */
  real_T CPV1_Value_e;                 /* Expression: 1
                                        * Referenced by: '<S365>/CPV1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S357>/Gain1'
                                        */
  real_T Unit_Delay_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S369>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_m;/* Expression: 0.0
                                          * Referenced by: '<S355>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_1_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S350>/Unit_Delay'
                                        */
  real_T Unit_Delay_2_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S350>/Unit_Delay'
                                        */
  real_T Unit_Delay_3_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S350>/Unit_Delay'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 1/3.6
                                        * Referenced by: '<S350>/Gain2'
                                        */
  real_T Saturation4_UpperSat_a;       /* Expression: 255
                                        * Referenced by: '<S350>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_e;       /* Expression: 0.001
                                        * Referenced by: '<S350>/Saturation4'
                                        */
  real_T Unit_Delay_InitialCondition_e2;/* Expression: 0
                                         * Referenced by: '<S348>/Unit_Delay'
                                         */
  real_T Saturation1_UpperSat_j;       /* Expression: Inf
                                        * Referenced by: '<S350>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0.001
                                        * Referenced by: '<S350>/Saturation1'
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
                                        * Referenced by: '<S327>/Saturation'
                                        */
  real_T Saturation_LowerSat_p2;       /* Expression: 0.0001
                                        * Referenced by: '<S327>/Saturation'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S327>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S327>/Unit_Delay2'
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
                                        * Referenced by: '<S328>/Saturation'
                                        */
  real_T Saturation_LowerSat_ph;       /* Expression: 0.0001
                                        * Referenced by: '<S328>/Saturation'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S328>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ji;/* Expression: 0
                                          * Referenced by: '<S328>/Unit_Delay2'
                                          */
  real_T timeConstant5_Value;          /* Expression: .01
                                        * Referenced by: '<S282>/timeConstant5'
                                        */
  real_T timeConstant4_Value;          /* Expression: .5
                                        * Referenced by: '<S282>/timeConstant4'
                                        */
  real_T Saturation_UpperSat_ok;       /* Expression: Inf
                                        * Referenced by: '<S329>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0.0001
                                        * Referenced by: '<S329>/Saturation'
                                        */
  real_T Constant1_Value_oi;           /* Expression: 1
                                        * Referenced by: '<S329>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ap;/* Expression: 0
                                          * Referenced by: '<S329>/Unit_Delay2'
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
  real_T uDLookupTable_bp01Data_kj[9]; /* Expression: [0 5 10 15 25 35 45 55 65]
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
                                             * Referenced by: '<S310>/Saturation Speed Lookup'
                                             */
  real_T SaturationSpeedLookup_bp01Data[6];/* Expression: [10,20,30,50,70,100]
                                            * Referenced by: '<S310>/Saturation Speed Lookup'
                                            */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S321>/sample time'
                                        */
  real_T sampletime_WtEt_j;            /* Computed Parameter: sampletime_WtEt_j
                                        * Referenced by: '<S308>/sample time'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S308>/Delay Input2'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S281>/Zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S307>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S307>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S307>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S307>/Filter'
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
  real_T invert_Gain_i;                /* Expression: -1
                                        * Referenced by: '<S281>/invert'
                                        */
  real_T sampletime_WtEt_p;            /* Computed Parameter: sampletime_WtEt_p
                                        * Referenced by: '<S309>/sample time'
                                        */
  real_T DelayInput2_InitialCondition_m;/* Expression: 0
                                         * Referenced by: '<S309>/Delay Input2'
                                         */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S301>/Discrete-Time Integrator'
                                         */
  real_T DelayInput2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S321>/Delay Input2'
                                         */
  real_T Gain3_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S310>/Gain3'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S310>/Gain1'
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
                                        * Referenced by: '<S301>/Gain'
                                        */
  real_T CurvatureLookupTable_tableData[5];/* Expression: [0.0001,0.001,0.1,0.2,1]
                                            * Referenced by: '<S310>/Curvature Lookup Table'
                                            */
  real_T CurvatureLookupTable_bp01Data[5];/* Expression: [0.00001,0.0001,0.1,0.2,0.5]
                                           * Referenced by: '<S310>/Curvature Lookup Table'
                                           */
  real_T ErrorLookupTable_tableData[5];/* Expression: [0.01,0.05,0.1,0.2,1]
                                        * Referenced by: '<S310>/Error Lookup Table'
                                        */
  real_T ErrorLookupTable_bp01Data[5]; /* Expression: [0.001,0.01,0.1,0.5,1]
                                        * Referenced by: '<S310>/Error Lookup Table'
                                        */
  real_T SpeedLookupTable_tableData[6];/* Expression: [1,0.6,0.3,0.1,0.05,0.01]
                                        * Referenced by: '<S310>/Speed Lookup Table'
                                        */
  real_T SpeedLookupTable_bp01Data[6]; /* Expression: [10,20,30,50,70,100]
                                        * Referenced by: '<S310>/Speed Lookup Table'
                                        */
  real_T LimitRateLimiter_RisingLim;   /* Computed Parameter: LimitRateLimiter_RisingLim
                                        * Referenced by: '<S310>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_FallingLim;  /* Computed Parameter: LimitRateLimiter_FallingLim
                                        * Referenced by: '<S310>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_IC;          /* Expression: 0
                                        * Referenced by: '<S310>/Limit Rate Limiter'
                                        */
  real_T sign2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S80>/sign2'
                                        */
  real_T UnitDelay_InitialCondition_g1;/* Expression: 0
                                        * Referenced by: '<S80>/Unit Delay'
                                        */
  real_T CPV_Value_g;                  /* Expression: 1
                                        * Referenced by: '<S365>/CPV'
                                        */
  real_T CPV2_Value_p;                 /* Expression: 1
                                        * Referenced by: '<S365>/CPV2'
                                        */
  real_T CPV_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S367>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dl;/* Expression: 0.0
                                          * Referenced by: '<S373>/FixPt Unit Delay1'
                                          */
  real_T Integrator_method_Value;      /* Expression: 1
                                        * Referenced by: '<S372>/Integrator_method'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ol;/* Expression: 0.0
                                          * Referenced by: '<S374>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_b;/* Expression: 0
                                        * Referenced by: '<S368>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant'
                                        */
  real_T MaximumGoodHDOP_Value;        /* Expression: 2.5
                                        * Referenced by: '<S395>/MaximumGoodHDOP'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S395>/Constant1'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S395>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant18'
                                        */
  real_T Constant19_Value_m;           /* Expression: 0
                                        * Referenced by: '<S395>/Constant19'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S395>/Constant2'
                                        */
  real_T Constant20_Value_i;           /* Expression: 0
                                        * Referenced by: '<S395>/Constant20'
                                        */
  real_T Constant21_Value_g;           /* Expression: 0
                                        * Referenced by: '<S395>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S395>/Constant25'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S395>/Constant3'
                                        */
  real_T Constant4_Value_m;            /* Expression: 0
                                        * Referenced by: '<S395>/Constant4'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S395>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S395>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S395>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S395>/Constant8'
                                        */
  real_T Constant9_Value_m;            /* Expression: 0
                                        * Referenced by: '<S395>/Constant9'
                                        */
  real_T kph2mps_Gain_l;               /* Expression: 1/3.6
                                        * Referenced by: '<S395>/kph2mps'
                                        */
  real_T lookAheadTime_Value;          /* Expression: 2
                                        * Referenced by: '<S395>/lookAheadTime'
                                        */
  real_T kph2mps1_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S395>/kph2mps1'
                                        */
  real_T lookAheadTime1_Value;         /* Expression: 15
                                        * Referenced by: '<S395>/lookAheadTime1'
                                        */
  real_T UnitDelay1_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S395>/Unit Delay1'
                                        */
  real_T InitialHeading_Value;         /* Expression: 0
                                        * Referenced by: '<S396>/InitialHeading'
                                        */
  real_T InitialPosition_Value;        /* Expression: 0
                                        * Referenced by: '<S396>/InitialPosition'
                                        */
  real_T InitialXPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S396>/InitialXPosition'
                                        */
  real_T InitialYPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S396>/InitialYPosition'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 1000/3600
                                        * Referenced by: '<S71>/kph2ms'
                                        */
  real_T LongitudnalPosition_gainval;  /* Computed Parameter: LongitudnalPosition_gainval
                                        * Referenced by: '<S396>/LongitudnalPosition'
                                        */
  real_T reset_Value;                  /* Expression: 0
                                        * Referenced by: '<S396>/reset'
                                        */
  real_T VehHeading_gainval;           /* Computed Parameter: VehHeading_gainval
                                        * Referenced by: '<S396>/VehHeading'
                                        */
  real_T XPosition_gainval;            /* Computed Parameter: XPosition_gainval
                                        * Referenced by: '<S396>/XPosition'
                                        */
  real_T YPosition_gainval;            /* Computed Parameter: YPosition_gainval
                                        * Referenced by: '<S396>/YPosition'
                                        */
  real_T for_logging6_Gain;            /* Expression: 1
                                        * Referenced by: '<S397>/for_logging6'
                                        */
  real_T for_logging5_Gain;            /* Expression: 1
                                        * Referenced by: '<S397>/for_logging5'
                                        */
  real_T for_logging4_Gain;            /* Expression: 1
                                        * Referenced by: '<S397>/for_logging4'
                                        */
  real_T for_logging3_Gain;            /* Expression: 1
                                        * Referenced by: '<S397>/for_logging3'
                                        */
  real_T for_logging2_Gain;            /* Expression: 1
                                        * Referenced by: '<S397>/for_logging2'
                                        */
  real_T ms_to_kmh_2_Gain;             /* Expression: 3.6
                                        * Referenced by: '<S397>/m//s_to_km//h_2'
                                        */
  real_T ms_to_kmh_Gain;               /* Expression: 3.6
                                        * Referenced by: '<S397>/m//s_to_km//h'
                                        */
  real_T for_logging1_Gain;            /* Expression: 1
                                        * Referenced by: '<S397>/for_logging1'
                                        */
  real_T for_logging_Gain;             /* Expression: 1
                                        * Referenced by: '<S397>/for_logging'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S403>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S403>/Constant1'
                                        */
  real_T byte1_Y0;                     /* Computed Parameter: byte1_Y0
                                        * Referenced by: '<S477>/byte1'
                                        */
  real_T byte2_Y0;                     /* Computed Parameter: byte2_Y0
                                        * Referenced by: '<S477>/byte2'
                                        */
  real_T byte3_Y0;                     /* Computed Parameter: byte3_Y0
                                        * Referenced by: '<S477>/byte3'
                                        */
  real_T byte4_Y0;                     /* Computed Parameter: byte4_Y0
                                        * Referenced by: '<S477>/byte4'
                                        */
  real_T byte5_Y0;                     /* Computed Parameter: byte5_Y0
                                        * Referenced by: '<S477>/byte5'
                                        */
  real_T byte6_Y0;                     /* Computed Parameter: byte6_Y0
                                        * Referenced by: '<S477>/byte6'
                                        */
  real_T byte7_Y0;                     /* Computed Parameter: byte7_Y0
                                        * Referenced by: '<S477>/byte7'
                                        */
  real_T byte8_Y0;                     /* Computed Parameter: byte8_Y0
                                        * Referenced by: '<S477>/byte8'
                                        */
  real_T RXstatus_Y0;                  /* Computed Parameter: RXstatus_Y0
                                        * Referenced by: '<S477>/RX status'
                                        */
  real_T RXtime_Y0;                    /* Computed Parameter: RXtime_Y0
                                        * Referenced by: '<S477>/RX time'
                                        */
  real_T RXdeltatime_Y0;               /* Computed Parameter: RXdeltatime_Y0
                                        * Referenced by: '<S477>/RX delta time'
                                        */
  real_T byte1_Y0_l;                   /* Computed Parameter: byte1_Y0_l
                                        * Referenced by: '<S486>/byte1'
                                        */
  real_T byte2_Y0_c;                   /* Computed Parameter: byte2_Y0_c
                                        * Referenced by: '<S486>/byte2'
                                        */
  real_T byte3_Y0_d;                   /* Computed Parameter: byte3_Y0_d
                                        * Referenced by: '<S486>/byte3'
                                        */
  real_T byte4_Y0_c;                   /* Computed Parameter: byte4_Y0_c
                                        * Referenced by: '<S486>/byte4'
                                        */
  real_T byte5_Y0_h;                   /* Computed Parameter: byte5_Y0_h
                                        * Referenced by: '<S486>/byte5'
                                        */
  real_T byte6_Y0_e;                   /* Computed Parameter: byte6_Y0_e
                                        * Referenced by: '<S486>/byte6'
                                        */
  real_T byte7_Y0_l;                   /* Computed Parameter: byte7_Y0_l
                                        * Referenced by: '<S486>/byte7'
                                        */
  real_T byte8_Y0_l;                   /* Computed Parameter: byte8_Y0_l
                                        * Referenced by: '<S486>/byte8'
                                        */
  real_T RXstatus_Y0_p;                /* Computed Parameter: RXstatus_Y0_p
                                        * Referenced by: '<S486>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S486>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
                                        * Referenced by: '<S486>/RX delta time'
                                        */
  real_T SpeedOfForwardVehicle_Y0;     /* Computed Parameter: SpeedOfForwardVehicle_Y0
                                        * Referenced by: '<S494>/SpeedOfForwardVehicle'
                                        */
  real_T DistanceToForwardVehicle_Y0;  /* Computed Parameter: DistanceToForwardVehicle_Y0
                                        * Referenced by: '<S494>/DistanceToForwardVehicle'
                                        */
  real_T AdaptiveCruiseCtrlSetSpeed_Y0;/* Computed Parameter: AdaptiveCruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S494>/AdaptiveCruiseCtrlSetSpeed'
                                        */
  real_T AdaptiveCruiseCtrlMode_Y0;    /* Computed Parameter: AdaptiveCruiseCtrlMode_Y0
                                        * Referenced by: '<S494>/AdaptiveCruiseCtrlMode'
                                        */
  real_T AdptveCruiseCtrlSetDistanceMode;/* Computed Parameter: AdptveCruiseCtrlSetDistanceMode
                                          * Referenced by: '<S494>/AdptveCruiseCtrlSetDistanceMode'
                                          */
  real_T RoadCurvature_Y0;             /* Computed Parameter: RoadCurvature_Y0
                                        * Referenced by: '<S494>/RoadCurvature'
                                        */
  real_T ACCTargetDetected_Y0;         /* Computed Parameter: ACCTargetDetected_Y0
                                        * Referenced by: '<S494>/ACCTargetDetected'
                                        */
  real_T ACCSystemShutoffWarning_Y0;   /* Computed Parameter: ACCSystemShutoffWarning_Y0
                                        * Referenced by: '<S494>/ACCSystemShutoffWarning'
                                        */
  real_T ACCDistanceAlertSignal_Y0;    /* Computed Parameter: ACCDistanceAlertSignal_Y0
                                        * Referenced by: '<S494>/ACCDistanceAlertSignal'
                                        */
  real_T ForwardCollisionWarning_Y0;   /* Computed Parameter: ForwardCollisionWarning_Y0
                                        * Referenced by: '<S494>/ForwardCollisionWarning'
                                        */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S494>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S494>/RX time'
                                        */
  real_T RXdeltatime_Y0_e;             /* Computed Parameter: RXdeltatime_Y0_e
                                        * Referenced by: '<S494>/RX delta time'
                                        */
  real_T AdvEmergencyBrkSysState_Y0;   /* Computed Parameter: AdvEmergencyBrkSysState_Y0
                                        * Referenced by: '<S496>/AdvEmergencyBrkSysState'
                                        */
  real_T CollisionWarningLevel_Y0;     /* Computed Parameter: CollisionWarningLevel_Y0
                                        * Referenced by: '<S496>/CollisionWarningLevel'
                                        */
  real_T RelObjctDetForAdvEmergBrakingSy;/* Computed Parameter: RelObjctDetForAdvEmergBrakingSy
                                          * Referenced by: '<S496>/RelObjctDetForAdvEmergBrakingSys'
                                          */
  real_T BendOffProbabOfRelevantObject_Y;/* Computed Parameter: BendOffProbabOfRelevantObject_Y
                                          * Referenced by: '<S496>/BendOffProbabOfRelevantObject'
                                          */
  real_T TimeToCollisionWithRelevantObj_;/* Computed Parameter: TimeToCollisionWithRelevantObj_
                                          * Referenced by: '<S496>/TimeToCollisionWithRelevantObj'
                                          */
  real_T RXstatus_Y0_c;                /* Computed Parameter: RXstatus_Y0_c
                                        * Referenced by: '<S496>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S496>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S496>/RX delta time'
                                        */
  real_T PneumaticSupplyPress_Y0;      /* Computed Parameter: PneumaticSupplyPress_Y0
                                        * Referenced by: '<S498>/PneumaticSupplyPress'
                                        */
  real_T ParkingAnd_orTrailerAirPress_Y0;/* Computed Parameter: ParkingAnd_orTrailerAirPress_Y0
                                          * Referenced by: '<S498>/ParkingAnd_orTrailerAirPress'
                                          */
  real_T ServiceBrakeCircuit1AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit1AirPress_Y0
                                          * Referenced by: '<S498>/ServiceBrakeCircuit1AirPress'
                                          */
  real_T ServiceBrakeCircuit2AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit2AirPress_Y0
                                          * Referenced by: '<S498>/ServiceBrakeCircuit2AirPress'
                                          */
  real_T AuxEquipmentSupplyPress_Y0;   /* Computed Parameter: AuxEquipmentSupplyPress_Y0
                                        * Referenced by: '<S498>/AuxEquipmentSupplyPress'
                                        */
  real_T AirSuspensionSupplyPress_Y0;  /* Computed Parameter: AirSuspensionSupplyPress_Y0
                                        * Referenced by: '<S498>/AirSuspensionSupplyPress'
                                        */
  real_T AirCompressorStatus_Y0;       /* Computed Parameter: AirCompressorStatus_Y0
                                        * Referenced by: '<S498>/AirCompressorStatus'
                                        */
  real_T PowertrainCircuitAirSupplyPress;/* Computed Parameter: PowertrainCircuitAirSupplyPress
                                          * Referenced by: '<S498>/PowertrainCircuitAirSupplyPress'
                                          */
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S498>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S498>/RX time'
                                        */
  real_T RXdeltatime_Y0_jl;            /* Computed Parameter: RXdeltatime_Y0_jl
                                        * Referenced by: '<S498>/RX delta time'
                                        */
  real_T BarometricPress_Y0;           /* Computed Parameter: BarometricPress_Y0
                                        * Referenced by: '<S500>/BarometricPress'
                                        */
  real_T CabInteriorTemp_Y0;           /* Computed Parameter: CabInteriorTemp_Y0
                                        * Referenced by: '<S500>/CabInteriorTemp'
                                        */
  real_T AmbientAirTemp_Y0;            /* Computed Parameter: AmbientAirTemp_Y0
                                        * Referenced by: '<S500>/AmbientAirTemp'
                                        */
  real_T EngAirIntakeTemp_Y0;          /* Computed Parameter: EngAirIntakeTemp_Y0
                                        * Referenced by: '<S500>/EngAirIntakeTemp'
                                        */
  real_T RoadSurfaceTemp_Y0;           /* Computed Parameter: RoadSurfaceTemp_Y0
                                        * Referenced by: '<S500>/RoadSurfaceTemp'
                                        */
  real_T RXstatus_Y0_db;               /* Computed Parameter: RXstatus_Y0_db
                                        * Referenced by: '<S500>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S500>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
                                        * Referenced by: '<S500>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S502>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S502>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_b;                /* Computed Parameter: RXstatus_Y0_b
                                        * Referenced by: '<S502>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S502>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
                                        * Referenced by: '<S502>/RX delta time'
                                        */
  real_T tr0_track_selection_status_Y0;/* Computed Parameter: tr0_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr0_track_selection_status'
                                        */
  real_T tr0_corrected_lateral_distance_;/* Computed Parameter: tr0_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr0_corrected_lateral_distance'
                                          */
  real_T tr1_track_selection_status_Y0;/* Computed Parameter: tr1_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr1_track_selection_status'
                                        */
  real_T tr1_corrected_lateral_distance_;/* Computed Parameter: tr1_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr1_corrected_lateral_distance'
                                          */
  real_T tr2_track_selection_status_Y0;/* Computed Parameter: tr2_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr2_track_selection_status'
                                        */
  real_T tr2_corrected_lateral_distance_;/* Computed Parameter: tr2_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr2_corrected_lateral_distance'
                                          */
  real_T tr3_track_selection_status_Y0;/* Computed Parameter: tr3_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr3_track_selection_status'
                                        */
  real_T tr3_corrected_lateral_distance_;/* Computed Parameter: tr3_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr3_corrected_lateral_distance'
                                          */
  real_T tr4_track_selection_status_Y0;/* Computed Parameter: tr4_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr4_track_selection_status'
                                        */
  real_T tr4_corrected_lateral_distance_;/* Computed Parameter: tr4_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr4_corrected_lateral_distance'
                                          */
  real_T tr5_track_selection_status_Y0;/* Computed Parameter: tr5_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr5_track_selection_status'
                                        */
  real_T tr5_corrected_lateral_distance_;/* Computed Parameter: tr5_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr5_corrected_lateral_distance'
                                          */
  real_T tr6_track_selection_status_Y0;/* Computed Parameter: tr6_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr6_track_selection_status'
                                        */
  real_T tr6_corrected_lateral_distance_;/* Computed Parameter: tr6_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr6_corrected_lateral_distance'
                                          */
  real_T tr7_track_selection_status_Y0;/* Computed Parameter: tr7_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr7_track_selection_status'
                                        */
  real_T tr7_corrected_lateral_distance_;/* Computed Parameter: tr7_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr7_corrected_lateral_distance'
                                          */
  real_T tr8_track_selection_status_Y0;/* Computed Parameter: tr8_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr8_track_selection_status'
                                        */
  real_T tr8_corrected_lateral_distance_;/* Computed Parameter: tr8_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr8_corrected_lateral_distance'
                                          */
  real_T tr9_track_selection_status_Y0;/* Computed Parameter: tr9_track_selection_status_Y0
                                        * Referenced by: '<S504>/tr9_track_selection_status'
                                        */
  real_T tr9_corrected_lateral_distance_;/* Computed Parameter: tr9_corrected_lateral_distance_
                                          * Referenced by: '<S504>/tr9_corrected_lateral_distance'
                                          */
  real_T tr0_lateral_position_Y0;      /* Computed Parameter: tr0_lateral_position_Y0
                                        * Referenced by: '<S504>/tr0_lateral_position'
                                        */
  real_T tr1_lateral_position_Y0;      /* Computed Parameter: tr1_lateral_position_Y0
                                        * Referenced by: '<S504>/tr1_lateral_position'
                                        */
  real_T tr2_lateral_position_Y0;      /* Computed Parameter: tr2_lateral_position_Y0
                                        * Referenced by: '<S504>/tr2_lateral_position'
                                        */
  real_T tr3_lateral_position_Y0;      /* Computed Parameter: tr3_lateral_position_Y0
                                        * Referenced by: '<S504>/tr3_lateral_position'
                                        */
  real_T tr4_lateral_position_Y0;      /* Computed Parameter: tr4_lateral_position_Y0
                                        * Referenced by: '<S504>/tr4_lateral_position'
                                        */
  real_T tr5_lateral_position_Y0;      /* Computed Parameter: tr5_lateral_position_Y0
                                        * Referenced by: '<S504>/tr5_lateral_position'
                                        */
  real_T tr6_lateral_position_Y0;      /* Computed Parameter: tr6_lateral_position_Y0
                                        * Referenced by: '<S504>/tr6_lateral_position'
                                        */
  real_T tr7_lateral_position_Y0;      /* Computed Parameter: tr7_lateral_position_Y0
                                        * Referenced by: '<S504>/tr7_lateral_position'
                                        */
  real_T tr8_lateral_position_Y0;      /* Computed Parameter: tr8_lateral_position_Y0
                                        * Referenced by: '<S504>/tr8_lateral_position'
                                        */
  real_T tr9_lateral_position_Y0;      /* Computed Parameter: tr9_lateral_position_Y0
                                        * Referenced by: '<S504>/tr9_lateral_position'
                                        */
  real_T tr0_range_Y0;                 /* Computed Parameter: tr0_range_Y0
                                        * Referenced by: '<S504>/tr0_range'
                                        */
  real_T tr1_range_Y0;                 /* Computed Parameter: tr1_range_Y0
                                        * Referenced by: '<S504>/tr1_range'
                                        */
  real_T tr2_range_Y0;                 /* Computed Parameter: tr2_range_Y0
                                        * Referenced by: '<S504>/tr2_range'
                                        */
  real_T tr3_range_Y0;                 /* Computed Parameter: tr3_range_Y0
                                        * Referenced by: '<S504>/tr3_range'
                                        */
  real_T tr4_range_Y0;                 /* Computed Parameter: tr4_range_Y0
                                        * Referenced by: '<S504>/tr4_range'
                                        */
  real_T tr5_range_Y0;                 /* Computed Parameter: tr5_range_Y0
                                        * Referenced by: '<S504>/tr5_range'
                                        */
  real_T tr6_range_Y0;                 /* Computed Parameter: tr6_range_Y0
                                        * Referenced by: '<S504>/tr6_range'
                                        */
  real_T tr7_range_Y0;                 /* Computed Parameter: tr7_range_Y0
                                        * Referenced by: '<S504>/tr7_range'
                                        */
  real_T tr8_range_Y0;                 /* Computed Parameter: tr8_range_Y0
                                        * Referenced by: '<S504>/tr8_range'
                                        */
  real_T tr9_range_Y0;                 /* Computed Parameter: tr9_range_Y0
                                        * Referenced by: '<S504>/tr9_range'
                                        */
  real_T tr0_radar_confidence_Y0;      /* Computed Parameter: tr0_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr0_radar_confidence'
                                        */
  real_T tr1_radar_confidence_Y0;      /* Computed Parameter: tr1_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr1_radar_confidence'
                                        */
  real_T tr2_radar_confidence_Y0;      /* Computed Parameter: tr2_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr2_radar_confidence'
                                        */
  real_T tr3_radar_confidence_Y0;      /* Computed Parameter: tr3_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr3_radar_confidence'
                                        */
  real_T tr4_radar_confidence_Y0;      /* Computed Parameter: tr4_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr4_radar_confidence'
                                        */
  real_T tr5_radar_confidence_Y0;      /* Computed Parameter: tr5_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr5_radar_confidence'
                                        */
  real_T tr6_radar_confidence_Y0;      /* Computed Parameter: tr6_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr6_radar_confidence'
                                        */
  real_T tr7_radar_confidence_Y0;      /* Computed Parameter: tr7_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr7_radar_confidence'
                                        */
  real_T tr8_radar_confidence_Y0;      /* Computed Parameter: tr8_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr8_radar_confidence'
                                        */
  real_T tr9_radar_confidence_Y0;      /* Computed Parameter: tr9_radar_confidence_Y0
                                        * Referenced by: '<S504>/tr9_radar_confidence'
                                        */
  real_T tr0_relative_velocitiy_Y0;    /* Computed Parameter: tr0_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr0_relative_velocitiy'
                                        */
  real_T tr0_acceleration_over_ground_Y0;/* Computed Parameter: tr0_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr0_acceleration_over_ground'
                                          */
  real_T tr1_relative_velocitiy_Y0;    /* Computed Parameter: tr1_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr1_relative_velocitiy'
                                        */
  real_T tr1_acceleration_over_ground_Y0;/* Computed Parameter: tr1_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr1_acceleration_over_ground'
                                          */
  real_T tr2_relative_velocitiy_Y0;    /* Computed Parameter: tr2_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr2_relative_velocitiy'
                                        */
  real_T tr2_acceleration_over_ground_Y0;/* Computed Parameter: tr2_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr2_acceleration_over_ground'
                                          */
  real_T tr3_relative_velocitiy_Y0;    /* Computed Parameter: tr3_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr3_relative_velocitiy'
                                        */
  real_T tr3_acceleration_over_ground_Y0;/* Computed Parameter: tr3_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr3_acceleration_over_ground'
                                          */
  real_T tr4_relative_velocitiy_Y0;    /* Computed Parameter: tr4_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr4_relative_velocitiy'
                                        */
  real_T tr4_acceleration_over_ground_Y0;/* Computed Parameter: tr4_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr4_acceleration_over_ground'
                                          */
  real_T tr5_relative_velocitiy_Y0;    /* Computed Parameter: tr5_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr5_relative_velocitiy'
                                        */
  real_T tr5_acceleration_over_ground_Y0;/* Computed Parameter: tr5_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr5_acceleration_over_ground'
                                          */
  real_T tr6_relative_velocitiy_Y0;    /* Computed Parameter: tr6_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr6_relative_velocitiy'
                                        */
  real_T tr6_acceleration_over_ground_Y0;/* Computed Parameter: tr6_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr6_acceleration_over_ground'
                                          */
  real_T tr7_relative_velocitiy_Y0;    /* Computed Parameter: tr7_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr7_relative_velocitiy'
                                        */
  real_T tr7_acceleration_over_ground_Y0;/* Computed Parameter: tr7_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr7_acceleration_over_ground'
                                          */
  real_T tr8_relative_velocitiy_Y0;    /* Computed Parameter: tr8_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr8_relative_velocitiy'
                                        */
  real_T tr8_acceleration_over_ground_Y0;/* Computed Parameter: tr8_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr8_acceleration_over_ground'
                                          */
  real_T tr9_relative_velocitiy_Y0;    /* Computed Parameter: tr9_relative_velocitiy_Y0
                                        * Referenced by: '<S504>/tr9_relative_velocitiy'
                                        */
  real_T tr9_acceleration_over_ground_Y0;/* Computed Parameter: tr9_acceleration_over_ground_Y0
                                          * Referenced by: '<S504>/tr9_acceleration_over_ground'
                                          */
  real_T track_multiplexor_Y0;         /* Computed Parameter: track_multiplexor_Y0
                                        * Referenced by: '<S504>/track_multiplexor'
                                        */
  real_T RXstatus_Y0_dd;               /* Computed Parameter: RXstatus_Y0_dd
                                        * Referenced by: '<S504>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S504>/RX time'
                                        */
  real_T RXdeltatime_Y0_pz;            /* Computed Parameter: RXdeltatime_Y0_pz
                                        * Referenced by: '<S504>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0;        /* Computed Parameter: TwoSpeedAxleSwitch_Y0
                                        * Referenced by: '<S506>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0;        /* Computed Parameter: ParkingBrakeSwitch_Y0
                                        * Referenced by: '<S506>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0;     /* Computed Parameter: CruiseCtrlPauseSwitch_Y0
                                        * Referenced by: '<S506>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0; /* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0
                                        * Referenced by: '<S506>/ParkBrakeReleaseInhibitRq'
                                        */
  real_T WheelBasedVehicleSpeed_Y0;    /* Computed Parameter: WheelBasedVehicleSpeed_Y0
                                        * Referenced by: '<S506>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0;          /* Computed Parameter: CruiseCtrlActive_Y0
                                        * Referenced by: '<S506>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0;    /* Computed Parameter: CruiseCtrlEnableSwitch_Y0
                                        * Referenced by: '<S506>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0;               /* Computed Parameter: BrakeSwitch_Y0
                                        * Referenced by: '<S506>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0;              /* Computed Parameter: ClutchSwitch_Y0
                                        * Referenced by: '<S506>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0;       /* Computed Parameter: CruiseCtrlSetSwitch_Y0
                                        * Referenced by: '<S506>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0;     /* Computed Parameter: CruiseCtrlCoastSwitch_Y0
                                        * Referenced by: '<S506>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0;    /* Computed Parameter: CruiseCtrlResumeSwitch_Y0
                                        * Referenced by: '<S506>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0
                                        * Referenced by: '<S506>/CruiseCtrlAccelerateSwitch'
                                        */
  real_T CruiseCtrlSetSpeed_Y0;        /* Computed Parameter: CruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S506>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0;          /* Computed Parameter: PTOGovernorState_Y0
                                        * Referenced by: '<S506>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0;          /* Computed Parameter: CruiseCtrlStates_Y0
                                        * Referenced by: '<S506>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0;    /* Computed Parameter: EngIdleIncrementSwitch_Y0
                                        * Referenced by: '<S506>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0;    /* Computed Parameter: EngIdleDecrementSwitch_Y0
                                        * Referenced by: '<S506>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0;         /* Computed Parameter: EngTestModeSwitch_Y0
                                        * Referenced by: '<S506>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0; /* Computed Parameter: EngShutdownOverrideSwitch_Y0
                                        * Referenced by: '<S506>/EngShutdownOverrideSwitch'
                                        */
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S506>/RX status'
                                        */
  real_T RXtime_Y0_op;                 /* Computed Parameter: RXtime_Y0_op
                                        * Referenced by: '<S506>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
                                        * Referenced by: '<S506>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_e;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_e
                                        * Referenced by: '<S508>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_n;      /* Computed Parameter: ParkingBrakeSwitch_Y0_n
                                        * Referenced by: '<S508>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_d;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_d
                                        * Referenced by: '<S508>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_k;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_k
                                         * Referenced by: '<S508>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_a;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_a
                                        * Referenced by: '<S508>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_c;        /* Computed Parameter: CruiseCtrlActive_Y0_c
                                        * Referenced by: '<S508>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_i;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_i
                                        * Referenced by: '<S508>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_n;             /* Computed Parameter: BrakeSwitch_Y0_n
                                        * Referenced by: '<S508>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_l;            /* Computed Parameter: ClutchSwitch_Y0_l
                                        * Referenced by: '<S508>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_h;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_h
                                        * Referenced by: '<S508>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_l;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_l
                                        * Referenced by: '<S508>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_d;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_d
                                        * Referenced by: '<S508>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_e;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_e
                                          * Referenced by: '<S508>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_l;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_l
                                        * Referenced by: '<S508>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_f;        /* Computed Parameter: PTOGovernorState_Y0_f
                                        * Referenced by: '<S508>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_h;        /* Computed Parameter: CruiseCtrlStates_Y0_h
                                        * Referenced by: '<S508>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_m;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_m
                                        * Referenced by: '<S508>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_o;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_o
                                        * Referenced by: '<S508>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_o;       /* Computed Parameter: EngTestModeSwitch_Y0_o
                                        * Referenced by: '<S508>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_k;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_k
                                         * Referenced by: '<S508>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_de;               /* Computed Parameter: RXstatus_Y0_de
                                        * Referenced by: '<S508>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S508>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S508>/RX delta time'
                                        */
  real_T SID_Y0;                       /* Computed Parameter: SID_Y0
                                        * Referenced by: '<S510>/SID'
                                        */
  real_T COGReference_Y0;              /* Computed Parameter: COGReference_Y0
                                        * Referenced by: '<S510>/COGReference'
                                        */
  real_T CourseOverGround_Y0;          /* Computed Parameter: CourseOverGround_Y0
                                        * Referenced by: '<S510>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0;           /* Computed Parameter: SpeedOverGround_Y0
                                        * Referenced by: '<S510>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_ddm;              /* Computed Parameter: RXstatus_Y0_ddm
                                        * Referenced by: '<S510>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S510>/RX time'
                                        */
  real_T RXdeltatime_Y0_hs;            /* Computed Parameter: RXdeltatime_Y0_hs
                                        * Referenced by: '<S510>/RX delta time'
                                        */
  real_T SID_Y0_k;                     /* Computed Parameter: SID_Y0_k
                                        * Referenced by: '<S511>/SID'
                                        */
  real_T COGReference_Y0_c;            /* Computed Parameter: COGReference_Y0_c
                                        * Referenced by: '<S511>/COGReference'
                                        */
  real_T CourseOverGround_Y0_c;        /* Computed Parameter: CourseOverGround_Y0_c
                                        * Referenced by: '<S511>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_a;         /* Computed Parameter: SpeedOverGround_Y0_a
                                        * Referenced by: '<S511>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S511>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S511>/RX time'
                                        */
  real_T RXdeltatime_Y0_d0;            /* Computed Parameter: RXdeltatime_Y0_d0
                                        * Referenced by: '<S511>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S513>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S513>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S513>/RX time'
                                        */
  real_T RXdeltatime_Y0_pb;            /* Computed Parameter: RXdeltatime_Y0_pb
                                        * Referenced by: '<S513>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0;          /* Computed Parameter: ASREngCtrlActive_Y0
                                        * Referenced by: '<S515>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0;        /* Computed Parameter: ASRBrakeCtrlActive_Y0
                                        * Referenced by: '<S515>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0;     /* Computed Parameter: AntiLockBrakingActive_Y0
                                        * Referenced by: '<S515>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0;            /* Computed Parameter: EBSBrakeSwitch_Y0
                                        * Referenced by: '<S515>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0;             /* Computed Parameter: BrakePedalPos_Y0
                                        * Referenced by: '<S515>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0;          /* Computed Parameter: ABSOffroadSwitch_Y0
                                        * Referenced by: '<S515>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0;          /* Computed Parameter: ASROffroadSwitch_Y0
                                        * Referenced by: '<S515>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0;       /* Computed Parameter: ASRHillHolderSwitch_Y0
                                        * Referenced by: '<S515>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0
                                        * Referenced by: '<S515>/TractionCtrlOverrideSwitch'
                                        */
  real_T AccelInterlockSwitch_Y0;      /* Computed Parameter: AccelInterlockSwitch_Y0
                                        * Referenced by: '<S515>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0;           /* Computed Parameter: EngDerateSwitch_Y0
                                        * Referenced by: '<S515>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0;      /* Computed Parameter: EngAuxShutdownSwitch_Y0
                                        * Referenced by: '<S515>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0;   /* Computed Parameter: RemoteAccelEnableSwitch_Y0
                                        * Referenced by: '<S515>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0;      /* Computed Parameter: EngRetarderSelection_Y0
                                        * Referenced by: '<S515>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0;       /* Computed Parameter: ABSFullyOperational_Y0
                                        * Referenced by: '<S515>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0;       /* Computed Parameter: EBSRedWarningSignal_Y0
                                        * Referenced by: '<S515>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0; /* Computed Parameter: ABS_EBSAmberWarningSignal_Y0
                                        * Referenced by: '<S515>/ABS_EBSAmberWarningSignal'
                                        */
  real_T ATC_ASRInformationSignal_Y0;  /* Computed Parameter: ATC_ASRInformationSignal_Y0
                                        * Referenced by: '<S515>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCntrl
                                          * Referenced by: '<S515>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0;           /* Computed Parameter: HaltBrakeSwitch_Y0
                                        * Referenced by: '<S515>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0;          /* Computed Parameter: TrailerABSStatus_Y0
                                        * Referenced by: '<S515>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSignal;/* Computed Parameter: TrctrMntdTrilerABSWarningSignal
                                          * Referenced by: '<S515>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S515>/RX status'
                                        */
  real_T RXtime_Y0_br;                 /* Computed Parameter: RXtime_Y0_br
                                        * Referenced by: '<S515>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
                                        * Referenced by: '<S515>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_m;        /* Computed Parameter: ASREngCtrlActive_Y0_m
                                        * Referenced by: '<S517>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_l;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_l
                                        * Referenced by: '<S517>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_f;   /* Computed Parameter: AntiLockBrakingActive_Y0_f
                                        * Referenced by: '<S517>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_j;          /* Computed Parameter: EBSBrakeSwitch_Y0_j
                                        * Referenced by: '<S517>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_j;           /* Computed Parameter: BrakePedalPos_Y0_j
                                        * Referenced by: '<S517>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_l;        /* Computed Parameter: ABSOffroadSwitch_Y0_l
                                        * Referenced by: '<S517>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_o;        /* Computed Parameter: ASROffroadSwitch_Y0_o
                                        * Referenced by: '<S517>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_a;     /* Computed Parameter: ASRHillHolderSwitch_Y0_a
                                        * Referenced by: '<S517>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_b;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_b
                                          * Referenced by: '<S517>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_m;    /* Computed Parameter: AccelInterlockSwitch_Y0_m
                                        * Referenced by: '<S517>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_j;         /* Computed Parameter: EngDerateSwitch_Y0_j
                                        * Referenced by: '<S517>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_f;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_f
                                        * Referenced by: '<S517>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_o; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_o
                                        * Referenced by: '<S517>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_h;    /* Computed Parameter: EngRetarderSelection_Y0_h
                                        * Referenced by: '<S517>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_f;     /* Computed Parameter: ABSFullyOperational_Y0_f
                                        * Referenced by: '<S517>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_i;     /* Computed Parameter: EBSRedWarningSignal_Y0_i
                                        * Referenced by: '<S517>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_a;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_a
                                         * Referenced by: '<S517>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_h;/* Computed Parameter: ATC_ASRInformationSignal_Y0_h
                                        * Referenced by: '<S517>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_b;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_b
                                          * Referenced by: '<S517>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_i;         /* Computed Parameter: HaltBrakeSwitch_Y0_i
                                        * Referenced by: '<S517>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_i;        /* Computed Parameter: TrailerABSStatus_Y0_i
                                        * Referenced by: '<S517>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_e;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_e
                                          * Referenced by: '<S517>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_j;                /* Computed Parameter: RXstatus_Y0_j
                                        * Referenced by: '<S517>/RX status'
                                        */
  real_T RXtime_Y0_dr;                 /* Computed Parameter: RXtime_Y0_dr
                                        * Referenced by: '<S517>/RX time'
                                        */
  real_T RXdeltatime_Y0_a2;            /* Computed Parameter: RXdeltatime_Y0_a2
                                        * Referenced by: '<S517>/RX delta time'
                                        */
  real_T FrontAxleSpeed_Y0;            /* Computed Parameter: FrontAxleSpeed_Y0
                                        * Referenced by: '<S519>/FrontAxleSpeed'
                                        */
  real_T RelativeSpeedFrontAxleLeftWheel;/* Computed Parameter: RelativeSpeedFrontAxleLeftWheel
                                          * Referenced by: '<S519>/RelativeSpeedFrontAxleLeftWheel'
                                          */
  real_T RlativeSpeedFrontAxleRightWheel;/* Computed Parameter: RlativeSpeedFrontAxleRightWheel
                                          * Referenced by: '<S519>/RlativeSpeedFrontAxleRightWheel'
                                          */
  real_T RelativeSpeedRearAxle1LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle1LeftWheel
                                          * Referenced by: '<S519>/RelativeSpeedRearAxle1LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle1RightWheel;/* Computed Parameter: RlativeSpeedRearAxle1RightWheel
                                          * Referenced by: '<S519>/RlativeSpeedRearAxle1RightWheel'
                                          */
  real_T RelativeSpeedRearAxle2LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle2LeftWheel
                                          * Referenced by: '<S519>/RelativeSpeedRearAxle2LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle2RightWheel;/* Computed Parameter: RlativeSpeedRearAxle2RightWheel
                                          * Referenced by: '<S519>/RlativeSpeedRearAxle2RightWheel'
                                          */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S519>/RX status'
                                        */
  real_T RXtime_Y0_jo;                 /* Computed Parameter: RXtime_Y0_jo
                                        * Referenced by: '<S519>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
                                        * Referenced by: '<S519>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S523>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_bp;/* Expression: 0
                                         * Referenced by: '<S523>/Unit_Delay'
                                         */
  real_T EngTorqueMode_Y0;             /* Computed Parameter: EngTorqueMode_Y0
                                        * Referenced by: '<S566>/EngTorqueMode'
                                        */
  real_T ActlEngPrcntTrqueHighResolution;/* Computed Parameter: ActlEngPrcntTrqueHighResolution
                                          * Referenced by: '<S566>/ActlEngPrcntTrqueHighResolution'
                                          */
  real_T DriversDemandEngPercentTorque_Y;/* Computed Parameter: DriversDemandEngPercentTorque_Y
                                          * Referenced by: '<S566>/DriversDemandEngPercentTorque'
                                          */
  real_T ActualEngPercentTorque_Y0;    /* Computed Parameter: ActualEngPercentTorque_Y0
                                        * Referenced by: '<S566>/ActualEngPercentTorque'
                                        */
  real_T EngSpeed_Y0;                  /* Computed Parameter: EngSpeed_Y0
                                        * Referenced by: '<S566>/EngSpeed'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrEngCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrEngCntrl
                                          * Referenced by: '<S566>/SrcAddrssOfCtrllngDvcFrEngCntrl'
                                          */
  real_T EngStarterMode_Y0;            /* Computed Parameter: EngStarterMode_Y0
                                        * Referenced by: '<S566>/EngStarterMode'
                                        */
  real_T EngDemandPercentTorque_Y0;    /* Computed Parameter: EngDemandPercentTorque_Y0
                                        * Referenced by: '<S566>/EngDemandPercentTorque'
                                        */
  real_T RXstatus_Y0_hj;               /* Computed Parameter: RXstatus_Y0_hj
                                        * Referenced by: '<S566>/RX status'
                                        */
  real_T RXtime_Y0_a1;                 /* Computed Parameter: RXtime_Y0_a1
                                        * Referenced by: '<S566>/RX time'
                                        */
  real_T RXdeltatime_Y0_pa;            /* Computed Parameter: RXdeltatime_Y0_pa
                                        * Referenced by: '<S566>/RX delta time'
                                        */
  real_T SPN558_AccelPed1LowIdlSwitch_Y0;/* Computed Parameter: SPN558_AccelPed1LowIdlSwitch_Y0
                                          * Referenced by: '<S568>/SPN558_AccelPed1LowIdlSwitch'
                                          */
  real_T SPN559_AccelPedKickdownSw_Y0; /* Computed Parameter: SPN559_AccelPedKickdownSw_Y0
                                        * Referenced by: '<S568>/SPN559_AccelPedKickdownSw'
                                        */
  real_T SPN1437_RoadSpeedLimitStatus_Y0;/* Computed Parameter: SPN1437_RoadSpeedLimitStatus_Y0
                                          * Referenced by: '<S568>/SPN1437_RoadSpeedLimitStatus'
                                          */
  real_T SPN2970_AccelPed2LowIdlSwitch_Y;/* Computed Parameter: SPN2970_AccelPed2LowIdlSwitch_Y
                                          * Referenced by: '<S568>/SPN2970_AccelPed2LowIdlSwitch'
                                          */
  real_T SPN91_AccelPedPos1_Y0;        /* Computed Parameter: SPN91_AccelPedPos1_Y0
                                        * Referenced by: '<S568>/SPN91_AccelPedPos1'
                                        */
  real_T SPN92_EngPercLoadAtCurrSpd_Y0;/* Computed Parameter: SPN92_EngPercLoadAtCurrSpd_Y0
                                        * Referenced by: '<S568>/SPN92_EngPercLoadAtCurrSpd'
                                        */
  real_T SPN974_RemAccelPedalPosition_Y0;/* Computed Parameter: SPN974_RemAccelPedalPosition_Y0
                                          * Referenced by: '<S568>/SPN974_RemAccelPedalPosition'
                                          */
  real_T SPN29_AccelPedPos2_Y0;        /* Computed Parameter: SPN29_AccelPedPos2_Y0
                                        * Referenced by: '<S568>/SPN29_AccelPedPos2'
                                        */
  real_T SPN2979_VehAccelRateLimStatus_Y;/* Computed Parameter: SPN2979_VehAccelRateLimStatus_Y
                                          * Referenced by: '<S568>/SPN2979_VehAccelRateLimStatus'
                                          */
  real_T SPN5021_MomEngMaxPwrEnFdbk_Y0;/* Computed Parameter: SPN5021_MomEngMaxPwrEnFdbk_Y0
                                        * Referenced by: '<S568>/SPN5021_MomEngMaxPwrEnFdbk'
                                        */
  real_T SPN5399_DPFThermMgmtActive_Y0;/* Computed Parameter: SPN5399_DPFThermMgmtActive_Y0
                                        * Referenced by: '<S568>/SPN5399_DPFThermMgmtActive'
                                        */
  real_T SPN5400_SCRThermMgmtActive_Y0;/* Computed Parameter: SPN5400_SCRThermMgmtActive_Y0
                                        * Referenced by: '<S568>/SPN5400_SCRThermMgmtActive'
                                        */
  real_T SPN3357_ActMaxAvailEngPercTrq_Y;/* Computed Parameter: SPN3357_ActMaxAvailEngPercTrq_Y
                                          * Referenced by: '<S568>/SPN3357_ActMaxAvailEngPercTrq'
                                          */
  real_T SPN5398_EstPumpingPercentTorque;/* Computed Parameter: SPN5398_EstPumpingPercentTorque
                                          * Referenced by: '<S568>/SPN5398_EstPumpingPercentTorque'
                                          */
  real_T RXstatus_Y0_lj;               /* Computed Parameter: RXstatus_Y0_lj
                                        * Referenced by: '<S568>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S568>/RX time'
                                        */
  real_T RXdeltatime_Y0_dj;            /* Computed Parameter: RXdeltatime_Y0_dj
                                        * Referenced by: '<S568>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S570>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S570>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_i;                /* Computed Parameter: RXstatus_Y0_i
                                        * Referenced by: '<S570>/RX status'
                                        */
  real_T RXtime_Y0_lf;                 /* Computed Parameter: RXtime_Y0_lf
                                        * Referenced by: '<S570>/RX time'
                                        */
  real_T RXdeltatime_Y0_dz;            /* Computed Parameter: RXdeltatime_Y0_dz
                                        * Referenced by: '<S570>/RX delta time'
                                        */
  real_T SPN524_TransSelectedGear_Y0;  /* Computed Parameter: SPN524_TransSelectedGear_Y0
                                        * Referenced by: '<S572>/SPN524_TransSelectedGear'
                                        */
  real_T SPN526_TransActualGearRatio_Y0;/* Computed Parameter: SPN526_TransActualGearRatio_Y0
                                         * Referenced by: '<S572>/SPN526_TransActualGearRatio'
                                         */
  real_T SPN523_TransCurrentGear_Y0;   /* Computed Parameter: SPN523_TransCurrentGear_Y0
                                        * Referenced by: '<S572>/SPN523_TransCurrentGear'
                                        */
  real_T RXstatus_Y0_da;               /* Computed Parameter: RXstatus_Y0_da
                                        * Referenced by: '<S572>/RX status'
                                        */
  real_T RXtime_Y0_h2;                 /* Computed Parameter: RXtime_Y0_h2
                                        * Referenced by: '<S572>/RX time'
                                        */
  real_T RXdeltatime_Y0_hk;            /* Computed Parameter: RXdeltatime_Y0_hk
                                        * Referenced by: '<S572>/RX delta time'
                                        */
  real_T SID_Y0_k5;                    /* Computed Parameter: SID_Y0_k5
                                        * Referenced by: '<S574>/SID'
                                        */
  real_T SetMode_Y0;                   /* Computed Parameter: SetMode_Y0
                                        * Referenced by: '<S574>/SetMode'
                                        */
  real_T OpMode_Y0;                    /* Computed Parameter: OpMode_Y0
                                        * Referenced by: '<S574>/OpMode'
                                        */
  real_T HDOP_Y0;                      /* Computed Parameter: HDOP_Y0
                                        * Referenced by: '<S574>/HDOP_'
                                        */
  real_T VDOP_Y0;                      /* Computed Parameter: VDOP_Y0
                                        * Referenced by: '<S574>/VDOP'
                                        */
  real_T TDOP_Y0;                      /* Computed Parameter: TDOP_Y0
                                        * Referenced by: '<S574>/TDOP'
                                        */
  real_T RXstatus_Y0_f;                /* Computed Parameter: RXstatus_Y0_f
                                        * Referenced by: '<S574>/RX status'
                                        */
  real_T RXtime_Y0_bw;                 /* Computed Parameter: RXtime_Y0_bw
                                        * Referenced by: '<S574>/RX time'
                                        */
  real_T RXdeltatime_Y0_ho;            /* Computed Parameter: RXdeltatime_Y0_ho
                                        * Referenced by: '<S574>/RX delta time'
                                        */
  real_T SID_Y0_l;                     /* Computed Parameter: SID_Y0_l
                                        * Referenced by: '<S575>/SID'
                                        */
  real_T SetMode_Y0_l;                 /* Computed Parameter: SetMode_Y0_l
                                        * Referenced by: '<S575>/SetMode'
                                        */
  real_T OpMode_Y0_n;                  /* Computed Parameter: OpMode_Y0_n
                                        * Referenced by: '<S575>/OpMode'
                                        */
  real_T HDOP_Y0_h;                    /* Computed Parameter: HDOP_Y0_h
                                        * Referenced by: '<S575>/HDOP_'
                                        */
  real_T VDOP_Y0_n;                    /* Computed Parameter: VDOP_Y0_n
                                        * Referenced by: '<S575>/VDOP'
                                        */
  real_T TDOP_Y0_c;                    /* Computed Parameter: TDOP_Y0_c
                                        * Referenced by: '<S575>/TDOP'
                                        */
  real_T RXstatus_Y0_mr;               /* Computed Parameter: RXstatus_Y0_mr
                                        * Referenced by: '<S575>/RX status'
                                        */
  real_T RXtime_Y0_aw;                 /* Computed Parameter: RXtime_Y0_aw
                                        * Referenced by: '<S575>/RX time'
                                        */
  real_T RXdeltatime_Y0_kj;            /* Computed Parameter: RXdeltatime_Y0_kj
                                        * Referenced by: '<S575>/RX delta time'
                                        */
  real_T FrontAxleLeftWheelSpeed_Y0;   /* Computed Parameter: FrontAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S577>/FrontAxleLeftWheelSpeed'
                                        */
  real_T FrontAxleRightWheelSpeed_Y0;  /* Computed Parameter: FrontAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S577>/FrontAxleRightWheelSpeed'
                                        */
  real_T RearAxleLeftWheelSpeed_Y0;    /* Computed Parameter: RearAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S577>/RearAxleLeftWheelSpeed'
                                        */
  real_T RearAxleRightWheelSpeed_Y0;   /* Computed Parameter: RearAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S577>/RearAxleRightWheelSpeed'
                                        */
  real_T RXstatus_Y0_pe;               /* Computed Parameter: RXstatus_Y0_pe
                                        * Referenced by: '<S577>/RX status'
                                        */
  real_T RXtime_Y0_cb;                 /* Computed Parameter: RXtime_Y0_cb
                                        * Referenced by: '<S577>/RX time'
                                        */
  real_T RXdeltatime_Y0_dk;            /* Computed Parameter: RXdeltatime_Y0_dk
                                        * Referenced by: '<S577>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S580>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S580>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_hq;               /* Computed Parameter: RXstatus_Y0_hq
                                        * Referenced by: '<S580>/RX status'
                                        */
  real_T RXtime_Y0_ak;                 /* Computed Parameter: RXtime_Y0_ak
                                        * Referenced by: '<S580>/RX time'
                                        */
  real_T RXdeltatime_Y0_pf;            /* Computed Parameter: RXdeltatime_Y0_pf
                                        * Referenced by: '<S580>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_k;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_k
                                          * Referenced by: '<S581>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__c;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__c
                                          * Referenced by: '<S581>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_dem;              /* Computed Parameter: RXstatus_Y0_dem
                                        * Referenced by: '<S581>/RX status'
                                        */
  real_T RXtime_Y0_pe;                 /* Computed Parameter: RXtime_Y0_pe
                                        * Referenced by: '<S581>/RX time'
                                        */
  real_T RXdeltatime_Y0_ab;            /* Computed Parameter: RXdeltatime_Y0_ab
                                        * Referenced by: '<S581>/RX delta time'
                                        */
  real_T byte1_Y0_c;                   /* Computed Parameter: byte1_Y0_c
                                        * Referenced by: '<S586>/byte1'
                                        */
  real_T byte2_Y0_p;                   /* Computed Parameter: byte2_Y0_p
                                        * Referenced by: '<S586>/byte2'
                                        */
  real_T byte3_Y0_j;                   /* Computed Parameter: byte3_Y0_j
                                        * Referenced by: '<S586>/byte3'
                                        */
  real_T byte4_Y0_j;                   /* Computed Parameter: byte4_Y0_j
                                        * Referenced by: '<S586>/byte4'
                                        */
  real_T byte5_Y0_e;                   /* Computed Parameter: byte5_Y0_e
                                        * Referenced by: '<S586>/byte5'
                                        */
  real_T byte6_Y0_k;                   /* Computed Parameter: byte6_Y0_k
                                        * Referenced by: '<S586>/byte6'
                                        */
  real_T byte7_Y0_m;                   /* Computed Parameter: byte7_Y0_m
                                        * Referenced by: '<S586>/byte7'
                                        */
  real_T byte8_Y0_e;                   /* Computed Parameter: byte8_Y0_e
                                        * Referenced by: '<S586>/byte8'
                                        */
  real_T RXstatus_Y0_l5;               /* Computed Parameter: RXstatus_Y0_l5
                                        * Referenced by: '<S586>/RX status'
                                        */
  real_T RXtime_Y0_dt;                 /* Computed Parameter: RXtime_Y0_dt
                                        * Referenced by: '<S586>/RX time'
                                        */
  real_T RXdeltatime_Y0_hv;            /* Computed Parameter: RXdeltatime_Y0_hv
                                        * Referenced by: '<S586>/RX delta time'
                                        */
  real_T byte1_Y0_n;                   /* Computed Parameter: byte1_Y0_n
                                        * Referenced by: '<S587>/byte1'
                                        */
  real_T byte2_Y0_i;                   /* Computed Parameter: byte2_Y0_i
                                        * Referenced by: '<S587>/byte2'
                                        */
  real_T byte3_Y0_n;                   /* Computed Parameter: byte3_Y0_n
                                        * Referenced by: '<S587>/byte3'
                                        */
  real_T byte4_Y0_p;                   /* Computed Parameter: byte4_Y0_p
                                        * Referenced by: '<S587>/byte4'
                                        */
  real_T byte5_Y0_f;                   /* Computed Parameter: byte5_Y0_f
                                        * Referenced by: '<S587>/byte5'
                                        */
  real_T byte6_Y0_o;                   /* Computed Parameter: byte6_Y0_o
                                        * Referenced by: '<S587>/byte6'
                                        */
  real_T byte7_Y0_o;                   /* Computed Parameter: byte7_Y0_o
                                        * Referenced by: '<S587>/byte7'
                                        */
  real_T byte8_Y0_o;                   /* Computed Parameter: byte8_Y0_o
                                        * Referenced by: '<S587>/byte8'
                                        */
  real_T RXstatus_Y0_bn;               /* Computed Parameter: RXstatus_Y0_bn
                                        * Referenced by: '<S587>/RX status'
                                        */
  real_T RXtime_Y0_dg;                 /* Computed Parameter: RXtime_Y0_dg
                                        * Referenced by: '<S587>/RX time'
                                        */
  real_T RXdeltatime_Y0_ap;            /* Computed Parameter: RXdeltatime_Y0_ap
                                        * Referenced by: '<S587>/RX delta time'
                                        */
  real_T byte1_Y0_lo;                  /* Computed Parameter: byte1_Y0_lo
                                        * Referenced by: '<S588>/byte1'
                                        */
  real_T byte2_Y0_g;                   /* Computed Parameter: byte2_Y0_g
                                        * Referenced by: '<S588>/byte2'
                                        */
  real_T byte3_Y0_m;                   /* Computed Parameter: byte3_Y0_m
                                        * Referenced by: '<S588>/byte3'
                                        */
  real_T byte4_Y0_i;                   /* Computed Parameter: byte4_Y0_i
                                        * Referenced by: '<S588>/byte4'
                                        */
  real_T byte5_Y0_f0;                  /* Computed Parameter: byte5_Y0_f0
                                        * Referenced by: '<S588>/byte5'
                                        */
  real_T byte6_Y0_h;                   /* Computed Parameter: byte6_Y0_h
                                        * Referenced by: '<S588>/byte6'
                                        */
  real_T byte7_Y0_i;                   /* Computed Parameter: byte7_Y0_i
                                        * Referenced by: '<S588>/byte7'
                                        */
  real_T byte8_Y0_c;                   /* Computed Parameter: byte8_Y0_c
                                        * Referenced by: '<S588>/byte8'
                                        */
  real_T RXstatus_Y0_pu;               /* Computed Parameter: RXstatus_Y0_pu
                                        * Referenced by: '<S588>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S588>/RX time'
                                        */
  real_T RXdeltatime_Y0_ii;            /* Computed Parameter: RXdeltatime_Y0_ii
                                        * Referenced by: '<S588>/RX delta time'
                                        */
  real_T byte1_Y0_g;                   /* Computed Parameter: byte1_Y0_g
                                        * Referenced by: '<S599>/byte1'
                                        */
  real_T byte2_Y0_d;                   /* Computed Parameter: byte2_Y0_d
                                        * Referenced by: '<S599>/byte2'
                                        */
  real_T byte3_Y0_jd;                  /* Computed Parameter: byte3_Y0_jd
                                        * Referenced by: '<S599>/byte3'
                                        */
  real_T byte4_Y0_f;                   /* Computed Parameter: byte4_Y0_f
                                        * Referenced by: '<S599>/byte4'
                                        */
  real_T byte5_Y0_o;                   /* Computed Parameter: byte5_Y0_o
                                        * Referenced by: '<S599>/byte5'
                                        */
  real_T byte6_Y0_i;                   /* Computed Parameter: byte6_Y0_i
                                        * Referenced by: '<S599>/byte6'
                                        */
  real_T byte7_Y0_j;                   /* Computed Parameter: byte7_Y0_j
                                        * Referenced by: '<S599>/byte7'
                                        */
  real_T byte8_Y0_h;                   /* Computed Parameter: byte8_Y0_h
                                        * Referenced by: '<S599>/byte8'
                                        */
  real_T RXstatus_Y0_cl;               /* Computed Parameter: RXstatus_Y0_cl
                                        * Referenced by: '<S599>/RX status'
                                        */
  real_T RXtime_Y0_bq;                 /* Computed Parameter: RXtime_Y0_bq
                                        * Referenced by: '<S599>/RX time'
                                        */
  real_T RXdeltatime_Y0_b;             /* Computed Parameter: RXdeltatime_Y0_b
                                        * Referenced by: '<S599>/RX delta time'
                                        */
  real_T byte1_Y0_li;                  /* Computed Parameter: byte1_Y0_li
                                        * Referenced by: '<S600>/byte1'
                                        */
  real_T byte2_Y0_l;                   /* Computed Parameter: byte2_Y0_l
                                        * Referenced by: '<S600>/byte2'
                                        */
  real_T byte3_Y0_o;                   /* Computed Parameter: byte3_Y0_o
                                        * Referenced by: '<S600>/byte3'
                                        */
  real_T byte4_Y0_d;                   /* Computed Parameter: byte4_Y0_d
                                        * Referenced by: '<S600>/byte4'
                                        */
  real_T byte5_Y0_g;                   /* Computed Parameter: byte5_Y0_g
                                        * Referenced by: '<S600>/byte5'
                                        */
  real_T byte6_Y0_g;                   /* Computed Parameter: byte6_Y0_g
                                        * Referenced by: '<S600>/byte6'
                                        */
  real_T byte7_Y0_ol;                  /* Computed Parameter: byte7_Y0_ol
                                        * Referenced by: '<S600>/byte7'
                                        */
  real_T byte8_Y0_a;                   /* Computed Parameter: byte8_Y0_a
                                        * Referenced by: '<S600>/byte8'
                                        */
  real_T RXstatus_Y0_dy;               /* Computed Parameter: RXstatus_Y0_dy
                                        * Referenced by: '<S600>/RX status'
                                        */
  real_T RXtime_Y0_ap;                 /* Computed Parameter: RXtime_Y0_ap
                                        * Referenced by: '<S600>/RX time'
                                        */
  real_T RXdeltatime_Y0_m;             /* Computed Parameter: RXdeltatime_Y0_m
                                        * Referenced by: '<S600>/RX delta time'
                                        */
  real_T byte1_Y0_j;                   /* Computed Parameter: byte1_Y0_j
                                        * Referenced by: '<S601>/byte1'
                                        */
  real_T byte2_Y0_h;                   /* Computed Parameter: byte2_Y0_h
                                        * Referenced by: '<S601>/byte2'
                                        */
  real_T byte3_Y0_oy;                  /* Computed Parameter: byte3_Y0_oy
                                        * Referenced by: '<S601>/byte3'
                                        */
  real_T byte4_Y0_f5;                  /* Computed Parameter: byte4_Y0_f5
                                        * Referenced by: '<S601>/byte4'
                                        */
  real_T byte5_Y0_i;                   /* Computed Parameter: byte5_Y0_i
                                        * Referenced by: '<S601>/byte5'
                                        */
  real_T byte6_Y0_n;                   /* Computed Parameter: byte6_Y0_n
                                        * Referenced by: '<S601>/byte6'
                                        */
  real_T byte7_Y0_h;                   /* Computed Parameter: byte7_Y0_h
                                        * Referenced by: '<S601>/byte7'
                                        */
  real_T byte8_Y0_ec;                  /* Computed Parameter: byte8_Y0_ec
                                        * Referenced by: '<S601>/byte8'
                                        */
  real_T RXstatus_Y0_ms;               /* Computed Parameter: RXstatus_Y0_ms
                                        * Referenced by: '<S601>/RX status'
                                        */
  real_T RXtime_Y0_oj;                 /* Computed Parameter: RXtime_Y0_oj
                                        * Referenced by: '<S601>/RX time'
                                        */
  real_T RXdeltatime_Y0_hi;            /* Computed Parameter: RXdeltatime_Y0_hi
                                        * Referenced by: '<S601>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S612>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S612>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_js;               /* Computed Parameter: RXstatus_Y0_js
                                        * Referenced by: '<S612>/RX status'
                                        */
  real_T RXtime_Y0_pw;                 /* Computed Parameter: RXtime_Y0_pw
                                        * Referenced by: '<S612>/RX time'
                                        */
  real_T RXdeltatime_Y0_ae;            /* Computed Parameter: RXdeltatime_Y0_ae
                                        * Referenced by: '<S612>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_k;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_k
                                          * Referenced by: '<S613>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_p;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_p
                                          * Referenced by: '<S613>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_pa;               /* Computed Parameter: RXstatus_Y0_pa
                                        * Referenced by: '<S613>/RX status'
                                        */
  real_T RXtime_Y0_bl;                 /* Computed Parameter: RXtime_Y0_bl
                                        * Referenced by: '<S613>/RX time'
                                        */
  real_T RXdeltatime_Y0_ee;            /* Computed Parameter: RXdeltatime_Y0_ee
                                        * Referenced by: '<S613>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_g;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_g
                                          * Referenced by: '<S614>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_n;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_n
                                          * Referenced by: '<S614>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_fu;               /* Computed Parameter: RXstatus_Y0_fu
                                        * Referenced by: '<S614>/RX status'
                                        */
  real_T RXtime_Y0_dc;                 /* Computed Parameter: RXtime_Y0_dc
                                        * Referenced by: '<S614>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S614>/RX delta time'
                                        */
  real_T PX2_LaneEdgeLeftAngle_Y0;     /* Computed Parameter: PX2_LaneEdgeLeftAngle_Y0
                                        * Referenced by: '<S622>/PX2_LaneEdgeLeftAngle'
                                        */
  real_T PX2_LaneEdgeLeftNumPoints_Y0; /* Computed Parameter: PX2_LaneEdgeLeftNumPoints_Y0
                                        * Referenced by: '<S622>/PX2_LaneEdgeLeftNumPoints'
                                        */
  real_T PX2_LaneEdgeLeftPosition_Y0;  /* Computed Parameter: PX2_LaneEdgeLeftPosition_Y0
                                        * Referenced by: '<S622>/PX2_LaneEdgeLeftPosition'
                                        */
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S622>/RX status'
                                        */
  real_T RXtime_Y0_er;                 /* Computed Parameter: RXtime_Y0_er
                                        * Referenced by: '<S622>/RX time'
                                        */
  real_T RXdeltatime_Y0_av;            /* Computed Parameter: RXdeltatime_Y0_av
                                        * Referenced by: '<S622>/RX delta time'
                                        */
  real_T PX2_LaneEdgeRightAngle_Y0;    /* Computed Parameter: PX2_LaneEdgeRightAngle_Y0
                                        * Referenced by: '<S623>/PX2_LaneEdgeRightAngle'
                                        */
  real_T PX2_LaneEdgeRightNumPoints_Y0;/* Computed Parameter: PX2_LaneEdgeRightNumPoints_Y0
                                        * Referenced by: '<S623>/PX2_LaneEdgeRightNumPoints'
                                        */
  real_T PX2_LaneEdgeRightPosition_Y0; /* Computed Parameter: PX2_LaneEdgeRightPosition_Y0
                                        * Referenced by: '<S623>/PX2_LaneEdgeRightPosition'
                                        */
  real_T RXstatus_Y0_fm;               /* Computed Parameter: RXstatus_Y0_fm
                                        * Referenced by: '<S623>/RX status'
                                        */
  real_T RXtime_Y0_co;                 /* Computed Parameter: RXtime_Y0_co
                                        * Referenced by: '<S623>/RX time'
                                        */
  real_T RXdeltatime_Y0_io;            /* Computed Parameter: RXdeltatime_Y0_io
                                        * Referenced by: '<S623>/RX delta time'
                                        */
  real_T PX2_LanePosEstAngle_Y0;       /* Computed Parameter: PX2_LanePosEstAngle_Y0
                                        * Referenced by: '<S624>/PX2_LanePosEstAngle'
                                        */
  real_T PX2_LanePosEstNumPoints_Y0;   /* Computed Parameter: PX2_LanePosEstNumPoints_Y0
                                        * Referenced by: '<S624>/PX2_LanePosEstNumPoints'
                                        */
  real_T PX2_LanePosEstPosition_Y0;    /* Computed Parameter: PX2_LanePosEstPosition_Y0
                                        * Referenced by: '<S624>/PX2_LanePosEstPosition'
                                        */
  real_T PX2_LanePosEstNumLanes_Y0;    /* Computed Parameter: PX2_LanePosEstNumLanes_Y0
                                        * Referenced by: '<S624>/PX2_LanePosEstNumLanes'
                                        */
  real_T RXstatus_Y0_hqw;              /* Computed Parameter: RXstatus_Y0_hqw
                                        * Referenced by: '<S624>/RX status'
                                        */
  real_T RXtime_Y0_dty;                /* Computed Parameter: RXtime_Y0_dty
                                        * Referenced by: '<S624>/RX time'
                                        */
  real_T RXdeltatime_Y0_cl;            /* Computed Parameter: RXdeltatime_Y0_cl
                                        * Referenced by: '<S624>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S626>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S626>/Longitude_'
                                        */
  real_T RXstatus_Y0_nd;               /* Computed Parameter: RXstatus_Y0_nd
                                        * Referenced by: '<S626>/RX status'
                                        */
  real_T RXtime_Y0_o2;                 /* Computed Parameter: RXtime_Y0_o2
                                        * Referenced by: '<S626>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
                                        * Referenced by: '<S626>/RX delta time'
                                        */
  real_T Latitude_Y0_j;                /* Computed Parameter: Latitude_Y0_j
                                        * Referenced by: '<S627>/Latitude_'
                                        */
  real_T Longitude_Y0_l;               /* Computed Parameter: Longitude_Y0_l
                                        * Referenced by: '<S627>/Longitude_'
                                        */
  real_T RXstatus_Y0_nh;               /* Computed Parameter: RXstatus_Y0_nh
                                        * Referenced by: '<S627>/RX status'
                                        */
  real_T RXtime_Y0_kz;                 /* Computed Parameter: RXtime_Y0_kz
                                        * Referenced by: '<S627>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
                                        * Referenced by: '<S627>/RX delta time'
                                        */
  real_T PressureP4_Y0;                /* Computed Parameter: PressureP4_Y0
                                        * Referenced by: '<S629>/PressureP4'
                                        */
  real_T PressureP1_Y0;                /* Computed Parameter: PressureP1_Y0
                                        * Referenced by: '<S629>/PressureP1'
                                        */
  real_T PressureP21_Y0;               /* Computed Parameter: PressureP21_Y0
                                        * Referenced by: '<S629>/PressureP21'
                                        */
  real_T PressureP22_Y0;               /* Computed Parameter: PressureP22_Y0
                                        * Referenced by: '<S629>/PressureP22'
                                        */
  real_T PressureP42_Y0;               /* Computed Parameter: PressureP42_Y0
                                        * Referenced by: '<S629>/PressureP42'
                                        */
  real_T XPR1ControlStatus_Y0;         /* Computed Parameter: XPR1ControlStatus_Y0
                                        * Referenced by: '<S629>/XPR1ControlStatus'
                                        */
  real_T XPR2ControlStatus_Y0;         /* Computed Parameter: XPR2ControlStatus_Y0
                                        * Referenced by: '<S629>/XPR2ControlStatus'
                                        */
  real_T XPR3ControlStatus_Y0;         /* Computed Parameter: XPR3ControlStatus_Y0
                                        * Referenced by: '<S629>/XPR3ControlStatus'
                                        */
  real_T XPRErrorState_Y0;             /* Computed Parameter: XPRErrorState_Y0
                                        * Referenced by: '<S629>/XPRErrorState'
                                        */
  real_T XPRControlMode_Y0;            /* Computed Parameter: XPRControlMode_Y0
                                        * Referenced by: '<S629>/XPRControlMode'
                                        */
  real_T RXstatus_Y0_ox;               /* Computed Parameter: RXstatus_Y0_ox
                                        * Referenced by: '<S629>/RX status'
                                        */
  real_T RXtime_Y0_ph;                 /* Computed Parameter: RXtime_Y0_ph
                                        * Referenced by: '<S629>/RX time'
                                        */
  real_T RXdeltatime_Y0_b1;            /* Computed Parameter: RXdeltatime_Y0_b1
                                        * Referenced by: '<S629>/RX delta time'
                                        */
  real_T PitchAngleExRange_Y0;         /* Computed Parameter: PitchAngleExRange_Y0
                                        * Referenced by: '<S631>/PitchAngleExRange'
                                        */
  real_T RollAngleExRange_Y0;          /* Computed Parameter: RollAngleExRange_Y0
                                        * Referenced by: '<S631>/RollAngleExRange'
                                        */
  real_T PitchAngleExRangeCompensation_Y;/* Computed Parameter: PitchAngleExRangeCompensation_Y
                                          * Referenced by: '<S631>/PitchAngleExRangeCompensation'
                                          */
  real_T PitchAngleExRangeFigureOfMerit_;/* Computed Parameter: PitchAngleExRangeFigureOfMerit_
                                          * Referenced by: '<S631>/PitchAngleExRangeFigureOfMerit'
                                          */
  real_T RollAngleExRangeCompensation_Y0;/* Computed Parameter: RollAngleExRangeCompensation_Y0
                                          * Referenced by: '<S631>/RollAngleExRangeCompensation'
                                          */
  real_T RollAngleExRangeFigureOfMerit_Y;/* Computed Parameter: RollAngleExRangeFigureOfMerit_Y
                                          * Referenced by: '<S631>/RollAngleExRangeFigureOfMerit'
                                          */
  real_T RllAndPtchExRngMsurementLatency;/* Computed Parameter: RllAndPtchExRngMsurementLatency
                                          * Referenced by: '<S631>/RllAndPtchExRngMsurementLatency'
                                          */
  real_T RXstatus_Y0_ps;               /* Computed Parameter: RXstatus_Y0_ps
                                        * Referenced by: '<S631>/RX status'
                                        */
  real_T RXtime_Y0_lz;                 /* Computed Parameter: RXtime_Y0_lz
                                        * Referenced by: '<S631>/RX time'
                                        */
  real_T RXdeltatime_Y0_nn;            /* Computed Parameter: RXdeltatime_Y0_nn
                                        * Referenced by: '<S631>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0;        /* Computed Parameter: PX2_MapLaneNearPos_Y0
                                        * Referenced by: '<S633>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0;         /* Computed Parameter: PX2_MapLaneMidPos_Y0
                                        * Referenced by: '<S633>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0;         /* Computed Parameter: PX2_MapLaneFarPos_Y0
                                        * Referenced by: '<S633>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0;   /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0
                                        * Referenced by: '<S633>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0
                                        * Referenced by: '<S633>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0
                                        * Referenced by: '<S633>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_bny;              /* Computed Parameter: RXstatus_Y0_bny
                                        * Referenced by: '<S633>/RX status'
                                        */
  real_T RXtime_Y0_ed;                 /* Computed Parameter: RXtime_Y0_ed
                                        * Referenced by: '<S633>/RX time'
                                        */
  real_T RXdeltatime_Y0_pi;            /* Computed Parameter: RXdeltatime_Y0_pi
                                        * Referenced by: '<S633>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_l;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_l
                                        * Referenced by: '<S635>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_c;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_c
                                        * Referenced by: '<S635>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_h;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_h
                                        * Referenced by: '<S635>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_h; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_h
                                        * Referenced by: '<S635>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_m;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_m
                                        * Referenced by: '<S635>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_c;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_c
                                        * Referenced by: '<S635>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_gl;               /* Computed Parameter: RXstatus_Y0_gl
                                        * Referenced by: '<S635>/RX status'
                                        */
  real_T RXtime_Y0_g;                  /* Computed Parameter: RXtime_Y0_g
                                        * Referenced by: '<S635>/RX time'
                                        */
  real_T RXdeltatime_Y0_cf;            /* Computed Parameter: RXdeltatime_Y0_cf
                                        * Referenced by: '<S635>/RX delta time'
                                        */
  real_T PX2_EgoLaneNearPosErr_Y0;     /* Computed Parameter: PX2_EgoLaneNearPosErr_Y0
                                        * Referenced by: '<S637>/PX2_EgoLaneNearPosErr'
                                        */
  real_T PX2_EgoLaneMidPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneMidPosErr_Y0
                                        * Referenced by: '<S637>/PX2_EgoLaneMidPosErr'
                                        */
  real_T PX2_EgoLaneFarPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneFarPosErr_Y0
                                        * Referenced by: '<S637>/PX2_EgoLaneFarPosErr'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_e; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_e
                                        * Referenced by: '<S637>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_p;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_p
                                        * Referenced by: '<S637>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_co; /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_co
                                        * Referenced by: '<S637>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_lju;              /* Computed Parameter: RXstatus_Y0_lju
                                        * Referenced by: '<S637>/RX status'
                                        */
  real_T RXtime_Y0_n0;                 /* Computed Parameter: RXtime_Y0_n0
                                        * Referenced by: '<S637>/RX time'
                                        */
  real_T RXdeltatime_Y0_ao;            /* Computed Parameter: RXdeltatime_Y0_ao
                                        * Referenced by: '<S637>/RX delta time'
                                        */
  real_T SID_Y0_km;                    /* Computed Parameter: SID_Y0_km
                                        * Referenced by: '<S639>/SID'
                                        */
  real_T Source_Y0;                    /* Computed Parameter: Source_Y0
                                        * Referenced by: '<S639>/Source'
                                        */
  real_T Date_Y0;                      /* Computed Parameter: Date_Y0
                                        * Referenced by: '<S639>/Date'
                                        */
  real_T Time_Y0;                      /* Computed Parameter: Time_Y0
                                        * Referenced by: '<S639>/Time'
                                        */
  real_T RXstatus_Y0_m1;               /* Computed Parameter: RXstatus_Y0_m1
                                        * Referenced by: '<S639>/RX status'
                                        */
  real_T RXtime_Y0_eu;                 /* Computed Parameter: RXtime_Y0_eu
                                        * Referenced by: '<S639>/RX time'
                                        */
  real_T RXdeltatime_Y0_jp;            /* Computed Parameter: RXdeltatime_Y0_jp
                                        * Referenced by: '<S639>/RX delta time'
                                        */
  real_T SPN681_TransGearShiftInhibitReq;/* Computed Parameter: SPN681_TransGearShiftInhibitReq
                                          * Referenced by: '<S641>/SPN681_TransGearShiftInhibitReq'
                                          */
  real_T SPN682_TransTrqConvLockupDisReq;/* Computed Parameter: SPN682_TransTrqConvLockupDisReq
                                          * Referenced by: '<S641>/SPN682_TransTrqConvLockupDisReq'
                                          */
  real_T SPN683_DisengageDrivelineReq_Y0;/* Computed Parameter: SPN683_DisengageDrivelineReq_Y0
                                          * Referenced by: '<S641>/SPN683_DisengageDrivelineReq'
                                          */
  real_T SPN4242_TransRevGearShiftInhibR;/* Computed Parameter: SPN4242_TransRevGearShiftInhibR
                                          * Referenced by: '<S641>/SPN4242_TransRevGearShiftInhibRq'
                                          */
  real_T SPN684_RequestedPercClutchSlip_;/* Computed Parameter: SPN684_RequestedPercClutchSlip_
                                          * Referenced by: '<S641>/SPN684_RequestedPercClutchSlip'
                                          */
  real_T SPN525_TransRequestedGear_Y0; /* Computed Parameter: SPN525_TransRequestedGear_Y0
                                        * Referenced by: '<S641>/SPN525_TransRequestedGear'
                                        */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* Computed Parameter: SPN685_DisengageDiffLockRqFrAx1
                                          * Referenced by: '<S641>/SPN685_DisengageDiffLockRqFrAx1'
                                          */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* Computed Parameter: SPN686_DisengageDiffLockRqFrAx2
                                          * Referenced by: '<S641>/SPN686_DisengageDiffLockRqFrAx2'
                                          */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* Computed Parameter: SPN687_DisengageDiffLockRqRrAx1
                                          * Referenced by: '<S641>/SPN687_DisengageDiffLockRqRrAx1'
                                          */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* Computed Parameter: SPN688_DisengageDiffLockRqRrAx2
                                          * Referenced by: '<S641>/SPN688_DisengageDiffLockRqRrAx2'
                                          */
  real_T SPN689_DisengageDiffLockRqC_Y0;/* Computed Parameter: SPN689_DisengageDiffLockRqC_Y0
                                         * Referenced by: '<S641>/SPN689_DisengageDiffLockRqC'
                                         */
  real_T SPN690_DisengageDiffLockRqCF_Y0;/* Computed Parameter: SPN690_DisengageDiffLockRqCF_Y0
                                          * Referenced by: '<S641>/SPN690_DisengageDiffLockRqCF'
                                          */
  real_T SPN691_DisengageDiffLockRqCR_Y0;/* Computed Parameter: SPN691_DisengageDiffLockRqCR_Y0
                                          * Referenced by: '<S641>/SPN691_DisengageDiffLockRqCR'
                                          */
  real_T SPN5762_TransLoadRedInhibitRq_Y;/* Computed Parameter: SPN5762_TransLoadRedInhibitRq_Y
                                          * Referenced by: '<S641>/SPN5762_TransLoadRedInhibitRq'
                                          */
  real_T SPN1852_TransmissionMode1_Y0; /* Computed Parameter: SPN1852_TransmissionMode1_Y0
                                        * Referenced by: '<S641>/SPN1852_TransmissionMode1'
                                        */
  real_T SPN1853_TransmissionMode2_Y0; /* Computed Parameter: SPN1853_TransmissionMode2_Y0
                                        * Referenced by: '<S641>/SPN1853_TransmissionMode2'
                                        */
  real_T SPN1854_TransmissionMode3_Y0; /* Computed Parameter: SPN1854_TransmissionMode3_Y0
                                        * Referenced by: '<S641>/SPN1854_TransmissionMode3'
                                        */
  real_T SPN1855_TransmissionMode4_Y0; /* Computed Parameter: SPN1855_TransmissionMode4_Y0
                                        * Referenced by: '<S641>/SPN1855_TransmissionMode4'
                                        */
  real_T SPN7695_TransAutoNeutralRequest;/* Computed Parameter: SPN7695_TransAutoNeutralRequest
                                          * Referenced by: '<S641>/SPN7695_TransAutoNeutralRequest'
                                          */
  real_T SPN4255_TransRequestedLaunchGea;/* Computed Parameter: SPN4255_TransRequestedLaunchGea
                                          * Referenced by: '<S641>/SPN4255_TransRequestedLaunchGear'
                                          */
  real_T SPN2985_TransShiftSelDispModeSw;/* Computed Parameter: SPN2985_TransShiftSelDispModeSw
                                          * Referenced by: '<S641>/SPN2985_TransShiftSelDispModeSw'
                                          */
  real_T SPN4246_TransmissionMode5_Y0; /* Computed Parameter: SPN4246_TransmissionMode5_Y0
                                        * Referenced by: '<S641>/SPN4246_TransmissionMode5'
                                        */
  real_T SPN4247_TransmissionMode6_Y0; /* Computed Parameter: SPN4247_TransmissionMode6_Y0
                                        * Referenced by: '<S641>/SPN4247_TransmissionMode6'
                                        */
  real_T SPN4248_TransmissionMode7_Y0; /* Computed Parameter: SPN4248_TransmissionMode7_Y0
                                        * Referenced by: '<S641>/SPN4248_TransmissionMode7'
                                        */
  real_T SPN4249_TransmissionMode8_Y0; /* Computed Parameter: SPN4249_TransmissionMode8_Y0
                                        * Referenced by: '<S641>/SPN4249_TransmissionMode8'
                                        */
  real_T RXstatus_Y0_pg;               /* Computed Parameter: RXstatus_Y0_pg
                                        * Referenced by: '<S641>/RX status'
                                        */
  real_T RXtime_Y0_au;                 /* Computed Parameter: RXtime_Y0_au
                                        * Referenced by: '<S641>/RX time'
                                        */
  real_T RXdeltatime_Y0_bp;            /* Computed Parameter: RXdeltatime_Y0_bp
                                        * Referenced by: '<S641>/RX delta time'
                                        */
  real_T VDCInformationSignal_Y0;      /* Computed Parameter: VDCInformationSignal_Y0
                                        * Referenced by: '<S643>/VDCInformationSignal'
                                        */
  real_T VDCFullyOperational_Y0;       /* Computed Parameter: VDCFullyOperational_Y0
                                        * Referenced by: '<S643>/VDCFullyOperational'
                                        */
  real_T VDCBrakeLightRq_Y0;           /* Computed Parameter: VDCBrakeLightRq_Y0
                                        * Referenced by: '<S643>/VDCBrakeLightRq'
                                        */
  real_T ROPEngCtrlActive_Y0;          /* Computed Parameter: ROPEngCtrlActive_Y0
                                        * Referenced by: '<S643>/ROPEngCtrlActive'
                                        */
  real_T ROPBrakeCtrlActive_Y0;        /* Computed Parameter: ROPBrakeCtrlActive_Y0
                                        * Referenced by: '<S643>/ROPBrakeCtrlActive'
                                        */
  real_T YCEngCtrlActive_Y0;           /* Computed Parameter: YCEngCtrlActive_Y0
                                        * Referenced by: '<S643>/YCEngCtrlActive'
                                        */
  real_T YCBrakeCtrlActive_Y0;         /* Computed Parameter: YCBrakeCtrlActive_Y0
                                        * Referenced by: '<S643>/YCBrakeCtrlActive'
                                        */
  real_T RXstatus_Y0_fuv;              /* Computed Parameter: RXstatus_Y0_fuv
                                        * Referenced by: '<S643>/RX status'
                                        */
  real_T RXtime_Y0_ev;                 /* Computed Parameter: RXtime_Y0_ev
                                        * Referenced by: '<S643>/RX time'
                                        */
  real_T RXdeltatime_Y0_g2;            /* Computed Parameter: RXdeltatime_Y0_g2
                                        * Referenced by: '<S643>/RX delta time'
                                        */
  real_T SteerWheelAngle_Y0;           /* Computed Parameter: SteerWheelAngle_Y0
                                        * Referenced by: '<S645>/SteerWheelAngle'
                                        */
  real_T SteerWheelTurnCounter_Y0;     /* Computed Parameter: SteerWheelTurnCounter_Y0
                                        * Referenced by: '<S645>/SteerWheelTurnCounter'
                                        */
  real_T SteerWheelAngleSensorType_Y0; /* Computed Parameter: SteerWheelAngleSensorType_Y0
                                        * Referenced by: '<S645>/SteerWheelAngleSensorType'
                                        */
  real_T YawRate_Y0;                   /* Computed Parameter: YawRate_Y0
                                        * Referenced by: '<S645>/YawRate'
                                        */
  real_T LateralAcceleration_Y0;       /* Computed Parameter: LateralAcceleration_Y0
                                        * Referenced by: '<S645>/LateralAcceleration'
                                        */
  real_T LongitudinalAcceleration_Y0;  /* Computed Parameter: LongitudinalAcceleration_Y0
                                        * Referenced by: '<S645>/LongitudinalAcceleration'
                                        */
  real_T RXstatus_Y0_hv;               /* Computed Parameter: RXstatus_Y0_hv
                                        * Referenced by: '<S645>/RX status'
                                        */
  real_T RXtime_Y0_oz;                 /* Computed Parameter: RXtime_Y0_oz
                                        * Referenced by: '<S645>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
                                        * Referenced by: '<S645>/RX delta time'
                                        */
  real_T NetBatteryCurrent_Y0;         /* Computed Parameter: NetBatteryCurrent_Y0
                                        * Referenced by: '<S647>/NetBatteryCurrent'
                                        */
  real_T AltCurrent_Y0;                /* Computed Parameter: AltCurrent_Y0
                                        * Referenced by: '<S647>/AltCurrent'
                                        */
  real_T ChargingSystemPotential_Y0;   /* Computed Parameter: ChargingSystemPotential_Y0
                                        * Referenced by: '<S647>/ChargingSystemPotential'
                                        */
  real_T BatteryPotential_PowerInput1_Y0;/* Computed Parameter: BatteryPotential_PowerInput1_Y0
                                          * Referenced by: '<S647>/BatteryPotential_PowerInput1'
                                          */
  real_T KeyswitchBatteryPotential_Y0; /* Computed Parameter: KeyswitchBatteryPotential_Y0
                                        * Referenced by: '<S647>/KeyswitchBatteryPotential'
                                        */
  real_T RXstatus_Y0_c4;               /* Computed Parameter: RXstatus_Y0_c4
                                        * Referenced by: '<S647>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S647>/RX time'
                                        */
  real_T RXdeltatime_Y0_hc;            /* Computed Parameter: RXdeltatime_Y0_hc
                                        * Referenced by: '<S647>/RX delta time'
                                        */
  real_T RX_time_Y0_i;                 /* Computed Parameter: RX_time_Y0_i
                                        * Referenced by: '<S651>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_js;/* Expression: 0
                                         * Referenced by: '<S651>/Unit_Delay'
                                         */
  real_T Out_Y0_h;                     /* Computed Parameter: Out_Y0_h
                                        * Referenced by: '<S687>/Out'
                                        */
  real_T Out_Y0_b;                     /* Computed Parameter: Out_Y0_b
                                        * Referenced by: '<S688>/Out'
                                        */
  real_T Out_Y0_m;                     /* Computed Parameter: Out_Y0_m
                                        * Referenced by: '<S689>/Out'
                                        */
  real_T Out_Y0_i;                     /* Computed Parameter: Out_Y0_i
                                        * Referenced by: '<S690>/Out'
                                        */
  real_T Out_Y0_bf;                    /* Computed Parameter: Out_Y0_bf
                                        * Referenced by: '<S691>/Out'
                                        */
  real_T Constant0_Value_n;            /* Expression: 0
                                        * Referenced by: '<S748>/Constant0'
                                        */
  real_T Constant1_Value_e0;           /* Expression: 1
                                        * Referenced by: '<S748>/Constant1'
                                        */
  real_T Constant0_Value_k;            /* Expression: 0
                                        * Referenced by: '<S749>/Constant0'
                                        */
  real_T Constant1_Value_f0;           /* Expression: 1
                                        * Referenced by: '<S749>/Constant1'
                                        */
  real_T Constant0_Value_g;            /* Expression: 0
                                        * Referenced by: '<S756>/Constant0'
                                        */
  real_T Constant1_Value_fo;           /* Expression: 1
                                        * Referenced by: '<S756>/Constant1'
                                        */
  real_T Constant0_Value_h;            /* Expression: 0
                                        * Referenced by: '<S757>/Constant0'
                                        */
  real_T Constant1_Value_eg;           /* Expression: 1
                                        * Referenced by: '<S757>/Constant1'
                                        */
  real_T Out_Y0_f;                     /* Computed Parameter: Out_Y0_f
                                        * Referenced by: '<S767>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_k;/* Expression: 0.0
                                          * Referenced by: '<S842>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_fw;           /* Expression: 1
                                        * Referenced by: '<S767>/Constant1'
                                        */
  real_T Out1_Y0_g;                    /* Computed Parameter: Out1_Y0_g
                                        * Referenced by: '<S847>/Out1'
                                        */
  real_T Constant1_Value_b;            /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S847>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_g;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S847>/Unit_Delay'
                                        */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S870>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S870>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S870>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S870>/TX delay time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S878>/TX status'
                                        */
  real_T TXtime_Y0_p;                  /* Computed Parameter: TXtime_Y0_p
                                        * Referenced by: '<S878>/TX time'
                                        */
  real_T TXdeltatime_Y0_p;             /* Computed Parameter: TXdeltatime_Y0_p
                                        * Referenced by: '<S878>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g;             /* Computed Parameter: TXdelaytime_Y0_g
                                        * Referenced by: '<S878>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S890>/TX status'
                                        */
  real_T TXtime_Y0_j;                  /* Computed Parameter: TXtime_Y0_j
                                        * Referenced by: '<S890>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S890>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S890>/TX delay time'
                                        */
  real_T TXstatus_Y0_g;                /* Computed Parameter: TXstatus_Y0_g
                                        * Referenced by: '<S891>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S891>/TX time'
                                        */
  real_T TXdeltatime_Y0_l;             /* Computed Parameter: TXdeltatime_Y0_l
                                        * Referenced by: '<S891>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_gk;            /* Computed Parameter: TXdelaytime_Y0_gk
                                        * Referenced by: '<S891>/TX delay time'
                                        */
  real_T TXstatus_Y0_n;                /* Computed Parameter: TXstatus_Y0_n
                                        * Referenced by: '<S894>/TX status'
                                        */
  real_T TXtime_Y0_d;                  /* Computed Parameter: TXtime_Y0_d
                                        * Referenced by: '<S894>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S894>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S894>/TX delay time'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S895>/TX status'
                                        */
  real_T TXtime_Y0_jj;                 /* Computed Parameter: TXtime_Y0_jj
                                        * Referenced by: '<S895>/TX time'
                                        */
  real_T TXdeltatime_Y0_a2;            /* Computed Parameter: TXdeltatime_Y0_a2
                                        * Referenced by: '<S895>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i;             /* Computed Parameter: TXdelaytime_Y0_i
                                        * Referenced by: '<S895>/TX delay time'
                                        */
  real_T TXstatus_Y0_p;                /* Computed Parameter: TXstatus_Y0_p
                                        * Referenced by: '<S910>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S910>/TX time'
                                        */
  real_T TXdeltatime_Y0_m;             /* Computed Parameter: TXdeltatime_Y0_m
                                        * Referenced by: '<S910>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_e;             /* Computed Parameter: TXdelaytime_Y0_e
                                        * Referenced by: '<S910>/TX delay time'
                                        */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S911>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S911>/TX time'
                                        */
  real_T TXdeltatime_Y0_e;             /* Computed Parameter: TXdeltatime_Y0_e
                                        * Referenced by: '<S911>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_eh;            /* Computed Parameter: TXdelaytime_Y0_eh
                                        * Referenced by: '<S911>/TX delay time'
                                        */
  real_T TXstatus_Y0_et;               /* Computed Parameter: TXstatus_Y0_et
                                        * Referenced by: '<S913>/TX status'
                                        */
  real_T TXtime_Y0_o;                  /* Computed Parameter: TXtime_Y0_o
                                        * Referenced by: '<S913>/TX time'
                                        */
  real_T TXdeltatime_Y0_ag;            /* Computed Parameter: TXdeltatime_Y0_ag
                                        * Referenced by: '<S913>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_gl;            /* Computed Parameter: TXdelaytime_Y0_gl
                                        * Referenced by: '<S913>/TX delay time'
                                        */
  real_T TXstatus_Y0_l;                /* Computed Parameter: TXstatus_Y0_l
                                        * Referenced by: '<S915>/TX status'
                                        */
  real_T TXtime_Y0_pc;                 /* Computed Parameter: TXtime_Y0_pc
                                        * Referenced by: '<S915>/TX time'
                                        */
  real_T TXdeltatime_Y0_f;             /* Computed Parameter: TXdeltatime_Y0_f
                                        * Referenced by: '<S915>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_a;             /* Computed Parameter: TXdelaytime_Y0_a
                                        * Referenced by: '<S915>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S928>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S936>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_n;/* Expression: 0
                                        * Referenced by: '<S928>/Unit_Delay'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S937>/Constant'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S939>/TX status'
                                        */
  real_T TXtime_Y0_h;                  /* Computed Parameter: TXtime_Y0_h
                                        * Referenced by: '<S939>/TX time'
                                        */
  real_T TXdeltatime_Y0_ls;            /* Computed Parameter: TXdeltatime_Y0_ls
                                        * Referenced by: '<S939>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_f;             /* Computed Parameter: TXdelaytime_Y0_f
                                        * Referenced by: '<S939>/TX delay time'
                                        */
  real_T Constant_Value_oy;            /* Expression: 0
                                        * Referenced by: '<S892>/Constant'
                                        */
  real_T Constant1_Value_jm;           /* Expression: 1
                                        * Referenced by: '<S892>/Constant1'
                                        */
  real_T Constant_Value_kn;            /* Expression: 0
                                        * Referenced by: '<S893>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 1
                                        * Referenced by: '<S893>/Constant1'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S912>/Constant'
                                        */
  real_T Constant1_Value_jc;           /* Expression: 1
                                        * Referenced by: '<S912>/Constant1'
                                        */
  real_T TXstatus_Y0_f;                /* Computed Parameter: TXstatus_Y0_f
                                        * Referenced by: '<S952>/TX status'
                                        */
  real_T TXtime_Y0_gi;                 /* Computed Parameter: TXtime_Y0_gi
                                        * Referenced by: '<S952>/TX time'
                                        */
  real_T TXdeltatime_Y0_l5;            /* Computed Parameter: TXdeltatime_Y0_l5
                                        * Referenced by: '<S952>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_jn;            /* Computed Parameter: TXdelaytime_Y0_jn
                                        * Referenced by: '<S952>/TX delay time'
                                        */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S961>/TX status'
                                        */
  real_T TXtime_Y0_jk;                 /* Computed Parameter: TXtime_Y0_jk
                                        * Referenced by: '<S961>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S961>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ev;            /* Computed Parameter: TXdelaytime_Y0_ev
                                        * Referenced by: '<S961>/TX delay time'
                                        */
  real_T TXstatus_Y0_pg;               /* Computed Parameter: TXstatus_Y0_pg
                                        * Referenced by: '<S962>/TX status'
                                        */
  real_T TXtime_Y0_e;                  /* Computed Parameter: TXtime_Y0_e
                                        * Referenced by: '<S962>/TX time'
                                        */
  real_T TXdeltatime_Y0_mg;            /* Computed Parameter: TXdeltatime_Y0_mg
                                        * Referenced by: '<S962>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ae;            /* Computed Parameter: TXdelaytime_Y0_ae
                                        * Referenced by: '<S962>/TX delay time'
                                        */
  real_T TXstatus_Y0_kn;               /* Computed Parameter: TXstatus_Y0_kn
                                        * Referenced by: '<S965>/TX status'
                                        */
  real_T TXtime_Y0_dc;                 /* Computed Parameter: TXtime_Y0_dc
                                        * Referenced by: '<S965>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S965>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S965>/TX delay time'
                                        */
  real_T TXstatus_Y0_fa;               /* Computed Parameter: TXstatus_Y0_fa
                                        * Referenced by: '<S966>/TX status'
                                        */
  real_T TXtime_Y0_hf;                 /* Computed Parameter: TXtime_Y0_hf
                                        * Referenced by: '<S966>/TX time'
                                        */
  real_T TXdeltatime_Y0_fv;            /* Computed Parameter: TXdeltatime_Y0_fv
                                        * Referenced by: '<S966>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S966>/TX delay time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S974>/TX status'
                                        */
  real_T TXtime_Y0_eg;                 /* Computed Parameter: TXtime_Y0_eg
                                        * Referenced by: '<S974>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S974>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d;             /* Computed Parameter: TXdelaytime_Y0_d
                                        * Referenced by: '<S974>/TX delay time'
                                        */
  real_T zero_Value_h;                 /* Expression: 0
                                        * Referenced by: '<S994>/zero'
                                        */
  real_T Constant_Value_iy;            /* Expression: 8192/360
                                        * Referenced by: '<S1005>/Constant'
                                        */
  real_T Constant_Value_l3;            /* Expression: 0
                                        * Referenced by: '<S963>/Constant'
                                        */
  real_T Constant1_Value_o1;           /* Expression: 1
                                        * Referenced by: '<S963>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S1004>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S1004>/MN'
                                        */
  real_T Constant_Value_nk;            /* Expression: 0
                                        * Referenced by: '<S964>/Constant'
                                        */
  real_T Constant1_Value_at;           /* Expression: 1
                                        * Referenced by: '<S964>/Constant1'
                                        */
  real_T TXstatus_Y0_ng;               /* Computed Parameter: TXstatus_Y0_ng
                                        * Referenced by: '<S1019>/TX status'
                                        */
  real_T TXtime_Y0_dr;                 /* Computed Parameter: TXtime_Y0_dr
                                        * Referenced by: '<S1019>/TX time'
                                        */
  real_T TXdeltatime_Y0_ns;            /* Computed Parameter: TXdeltatime_Y0_ns
                                        * Referenced by: '<S1019>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_c;             /* Computed Parameter: TXdelaytime_Y0_c
                                        * Referenced by: '<S1019>/TX delay time'
                                        */
  real_T TXstatus_Y0_oc;               /* Computed Parameter: TXstatus_Y0_oc
                                        * Referenced by: '<S1021>/TX status'
                                        */
  real_T TXtime_Y0_oj;                 /* Computed Parameter: TXtime_Y0_oj
                                        * Referenced by: '<S1021>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S1021>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ao;            /* Computed Parameter: TXdelaytime_Y0_ao
                                        * Referenced by: '<S1021>/TX delay time'
                                        */
  real_T TXstatus_Y0_p2;               /* Computed Parameter: TXstatus_Y0_p2
                                        * Referenced by: '<S1029>/TX status'
                                        */
  real_T TXtime_Y0_du;                 /* Computed Parameter: TXtime_Y0_du
                                        * Referenced by: '<S1029>/TX time'
                                        */
  real_T TXdeltatime_Y0_bo;            /* Computed Parameter: TXdeltatime_Y0_bo
                                        * Referenced by: '<S1029>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_lf;            /* Computed Parameter: TXdelaytime_Y0_lf
                                        * Referenced by: '<S1029>/TX delay time'
                                        */
  real_T Constant4_Value_k;            /* Expression: 0
                                        * Referenced by: '<S1015>/Constant4'
                                        */
  real_T Constant2_Value_hz;           /* Expression: -15.687
                                        * Referenced by: '<S1015>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S1015>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S1015>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S1015>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S1015>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S1015>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S855>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S1014>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 1
                                        * Referenced by: '<S1014>/Saturation'
                                        */
  real_T Saturation_LowerSat_gb;       /* Expression: 0
                                        * Referenced by: '<S1014>/Saturation'
                                        */
  real_T Gain_Gain_ja;                 /* Expression: 100
                                        * Referenced by: '<S1014>/Gain'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 0.4^-1
                                        * Referenced by: '<S1031>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S1014>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S1014>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S1014>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_h;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S1031>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S1015>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S1015>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_h;                /* Computed Parameter: TXstatus_Y0_h
                                        * Referenced by: '<S1045>/TX status'
                                        */
  real_T TXtime_Y0_pp;                 /* Computed Parameter: TXtime_Y0_pp
                                        * Referenced by: '<S1045>/TX time'
                                        */
  real_T TXdeltatime_Y0_bc;            /* Computed Parameter: TXdeltatime_Y0_bc
                                        * Referenced by: '<S1045>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S1045>/TX delay time'
                                        */
  real_T TXstatus_Y0_ge;               /* Computed Parameter: TXstatus_Y0_ge
                                        * Referenced by: '<S1056>/TX status'
                                        */
  real_T TXtime_Y0_ju;                 /* Computed Parameter: TXtime_Y0_ju
                                        * Referenced by: '<S1056>/TX time'
                                        */
  real_T TXdeltatime_Y0_mb;            /* Computed Parameter: TXdeltatime_Y0_mb
                                        * Referenced by: '<S1056>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h;             /* Computed Parameter: TXdelaytime_Y0_h
                                        * Referenced by: '<S1056>/TX delay time'
                                        */
  real_T TXstatus_Y0_hk;               /* Computed Parameter: TXstatus_Y0_hk
                                        * Referenced by: '<S1057>/TX status'
                                        */
  real_T TXtime_Y0_hu;                 /* Computed Parameter: TXtime_Y0_hu
                                        * Referenced by: '<S1057>/TX time'
                                        */
  real_T TXdeltatime_Y0_ni;            /* Computed Parameter: TXdeltatime_Y0_ni
                                        * Referenced by: '<S1057>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_kl;            /* Computed Parameter: TXdelaytime_Y0_kl
                                        * Referenced by: '<S1057>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S858>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_gp;               /* Computed Parameter: TXstatus_Y0_gp
                                        * Referenced by: '<S1064>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S1064>/TX time'
                                        */
  real_T TXdeltatime_Y0_c;             /* Computed Parameter: TXdeltatime_Y0_c
                                        * Referenced by: '<S1064>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_pz;            /* Computed Parameter: TXdelaytime_Y0_pz
                                        * Referenced by: '<S1064>/TX delay time'
                                        */
  real_T TXstatus_Y0_ha;               /* Computed Parameter: TXstatus_Y0_ha
                                        * Referenced by: '<S1065>/TX status'
                                        */
  real_T TXtime_Y0_c;                  /* Computed Parameter: TXtime_Y0_c
                                        * Referenced by: '<S1065>/TX time'
                                        */
  real_T TXdeltatime_Y0_k;             /* Computed Parameter: TXdeltatime_Y0_k
                                        * Referenced by: '<S1065>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d2;            /* Computed Parameter: TXdelaytime_Y0_d2
                                        * Referenced by: '<S1065>/TX delay time'
                                        */
  real_T TXstatus_Y0_of;               /* Computed Parameter: TXstatus_Y0_of
                                        * Referenced by: '<S1069>/TX status'
                                        */
  real_T TXtime_Y0_ns;                 /* Computed Parameter: TXtime_Y0_ns
                                        * Referenced by: '<S1069>/TX time'
                                        */
  real_T TXdeltatime_Y0_fh;            /* Computed Parameter: TXdeltatime_Y0_fh
                                        * Referenced by: '<S1069>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_jc;            /* Computed Parameter: TXdelaytime_Y0_jc
                                        * Referenced by: '<S1069>/TX delay time'
                                        */
  real_T UnitDelay_InitialCondition_m; /* Expression: 0
                                        * Referenced by: '<S757>/Unit Delay'
                                        */
  real_T UnitDelay_InitialCondition_mf;/* Expression: 0
                                        * Referenced by: '<S756>/Unit Delay'
                                        */
  real_T Constant_Value_ao;            /* Expression: 0
                                        * Referenced by: '<S760>/Constant'
                                        */
  real_T Constant3_Value_a;            /* Expression: 500
                                        * Referenced by: '<S416>/Constant3'
                                        */
  real_T Gain_Gain_iy;                 /* Expression: 0.1
                                        * Referenced by: '<S756>/Gain'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S761>/Constant'
                                        */
  real_T Constant2_Value_d;            /* Expression: 1000
                                        * Referenced by: '<S416>/Constant2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.1
                                        * Referenced by: '<S757>/Gain'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S763>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S763>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S763>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_lr;/* Expression: 0.0
                                          * Referenced by: '<S796>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_c;        /* Expression: 1
                                        * Referenced by: '<S792>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_cq;       /* Expression: 1
                                        * Referenced by: '<S795>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S763>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S763>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 100
                                        * Referenced by: '<S416>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S763>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S763>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ld;/* Expression: 0.0
                                          * Referenced by: '<S788>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_b;        /* Expression: 1
                                        * Referenced by: '<S784>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_g;        /* Expression: 1
                                        * Referenced by: '<S787>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S763>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S763>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S763>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S763>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_l2;/* Expression: 0.0
                                          * Referenced by: '<S812>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_f;        /* Expression: 1
                                        * Referenced by: '<S808>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_p;        /* Expression: 1
                                        * Referenced by: '<S811>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S763>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S763>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 100
                                        * Referenced by: '<S416>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S763>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S763>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_g;/* Expression: 0.0
                                          * Referenced by: '<S804>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_by;       /* Expression: 1
                                        * Referenced by: '<S800>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_l;        /* Expression: 1
                                        * Referenced by: '<S803>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S763>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S763>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S763>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S766>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S766>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_j;        /* Expression: Inf
                                        * Referenced by: '<S833>/Saturation'
                                        */
  real_T Saturation_LowerSat_kl;       /* Expression: 0.0001
                                        * Referenced by: '<S833>/Saturation'
                                        */
  real_T Constant1_Value_f3;           /* Expression: 1
                                        * Referenced by: '<S833>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_o;/* Expression: 0
                                         * Referenced by: '<S833>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S766>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S766>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S766>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S766>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_g;        /* Expression: Inf
                                        * Referenced by: '<S834>/Saturation'
                                        */
  real_T Saturation_LowerSat_kz;       /* Expression: 0.0001
                                        * Referenced by: '<S834>/Saturation'
                                        */
  real_T Constant1_Value_ga;           /* Expression: 1
                                        * Referenced by: '<S834>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_e;/* Expression: 0
                                         * Referenced by: '<S834>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S766>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S766>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S744>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCondit_c;/* Expression: 0.0
                                          * Referenced by: '<S832>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_dm;/* Expression: 0.0
                                          * Referenced by: '<S831>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S768>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S768>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S763>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S763>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ch;/* Expression: 0.0
                                          * Referenced by: '<S820>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_fb;       /* Expression: 1
                                        * Referenced by: '<S816>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_a;        /* Expression: 1
                                        * Referenced by: '<S819>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_k;/* Expression: 25
                                          * Referenced by: '<S744>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_h;/* Expression: 25
                                          * Referenced by: '<S744>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S744>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S416>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S417>/Rate Transition'
                                          */
  real_T Constant_Value_gt;            /* Expression: 1
                                        * Referenced by: '<S450>/Constant'
                                        */
  real_T Constant_Value_bk;            /* Expression: 1
                                        * Referenced by: '<S449>/Constant'
                                        */
  real_T dsa_tcpip_setup_P1_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P1_Size
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P1;           /* Expression: boardType
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P2_Size
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2;           /* Expression: boardNo
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P3_Size
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3;           /* Expression: channelNo
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P4_Size
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4;           /* Expression: localIpNum
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P5_Size
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5;           /* Expression: localSnMask
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P6_Size
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6;           /* Expression: localGateway
                                        * Referenced by: '<S399>/dsa_tcpip_setup'
                                        */
  real_T Heartbeat_Amp;                /* Expression: 1
                                        * Referenced by: '<S398>/Heartbeat'
                                        */
  real_T Heartbeat_Period;             /* Expression: 10
                                        * Referenced by: '<S398>/Heartbeat'
                                        */
  real_T Heartbeat_Duty;               /* Expression: 5
                                        * Referenced by: '<S398>/Heartbeat'
                                        */
  real_T Heartbeat_PhaseDelay;         /* Expression: 0
                                        * Referenced by: '<S398>/Heartbeat'
                                        */
  real_T TCPIP_Com_P1_Size[2];         /* Computed Parameter: TCPIP_Com_P1_Size
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P1;                 /* Expression: localPort
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2_Size[2];         /* Computed Parameter: TCPIP_Com_P2_Size
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2;                 /* Expression: remotePort
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3_Size[2];         /* Computed Parameter: TCPIP_Com_P3_Size
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3;                 /* Expression: remoteAddr
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4_Size[2];         /* Computed Parameter: TCPIP_Com_P4_Size
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4;                 /* Expression: outputSize
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5_Size[2];         /* Computed Parameter: TCPIP_Com_P5_Size
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5;                 /* Expression: inputSize
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6_Size[2];         /* Computed Parameter: TCPIP_Com_P6_Size
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6;                 /* Expression: legacyMode
                                        * Referenced by: '<S400>/TCPIP_Com'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S403>/Unit Delay'
                                        */
  real_T Switch1_Threshold;            /* Expression: 100
                                        * Referenced by: '<S403>/Switch1'
                                        */
  real_T NoData_Value;                 /* Expression: 0
                                        * Referenced by: '<S397>/No Data'
                                        */
  real_T Constant_Value_fy;            /* Expression: 0
                                        * Referenced by: '<S448>/Constant'
                                        */
  real_T Constant_Value_lf;            /* Expression: 1
                                        * Referenced by: '<S431>/Constant'
                                        */
  real_T Constant_Value_ez;            /* Expression: 1
                                        * Referenced by: '<S454>/Constant'
                                        */
  real_T Constant_Value_m1;            /* Expression: 0
                                        * Referenced by: '<S1067>/Constant'
                                        */
  real_T Constant1_Value_mf;           /* Expression: 1
                                        * Referenced by: '<S1067>/Constant1'
                                        */
  real_T TmpRTBAtFlashOutport1_InitialCo;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_aj;           /* Expression: 1
                                        * Referenced by: '<S850>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1075>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_nm;           /* Expression: 0.001
                                        * Referenced by: '<S850>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1075>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1075>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 0.01
                                        * Referenced by: '<S850>/Gain1'
                                        */
  real_T Constant1_Value_ib;           /* Expression: 1
                                        * Referenced by: '<S850>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1075>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_p;            /* Expression: 0.001
                                        * Referenced by: '<S850>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1075>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1075>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 0.01
                                        * Referenced by: '<S850>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S416>/ShifterControlDC'
                                        */
  real_T Constant_Value_m1r;           /* Expression: .4
                                        * Referenced by: '<S1076>/Constant'
                                        */
  real_T Constant1_Value_dd;           /* Expression: 0.5
                                        * Referenced by: '<S1076>/Constant1'
                                        */
  real_T Constant_Value_oi;            /* Expression: 0
                                        * Referenced by: '<S1082>/Constant'
                                        */
  real_T Constant_Value_hf;            /* Expression: 0
                                        * Referenced by: '<S1083>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1077>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1077>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1077>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1077>/Flash'
                                        */
  real_T Constant_Value_ak;            /* Expression: 0
                                        * Referenced by: '<S441>/Constant'
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
  real_T Constant_Value_gw;            /* Expression: 0.125
                                        * Referenced by: '<S526>/Constant'
                                        */
  real_T Constant_Value_he;            /* Expression: -125
                                        * Referenced by: '<S533>/Constant'
                                        */
  real_T Constant_Value_ki;            /* Expression: 0.125
                                        * Referenced by: '<S530>/Constant'
                                        */
  real_T Constant_Value_cz;            /* Expression: 1/1280
                                        * Referenced by: '<S531>/Constant'
                                        */
  real_T Constant_Value_ou;            /* Expression: 0.125
                                        * Referenced by: '<S534>/Constant'
                                        */
  real_T Constant_Value_op;            /* Expression: 0.1
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Constant_Value_bo;            /* Expression: 10
                                        * Referenced by: '<S536>/Constant'
                                        */
  real_T Constant_Value_ag;            /* Expression: 10
                                        * Referenced by: '<S537>/Constant'
                                        */
  real_T Constant_Value_at;            /* Expression: -125
                                        * Referenced by: '<S538>/Constant'
                                        */
  real_T Constant_Value_gz;            /* Expression: -125
                                        * Referenced by: '<S539>/Constant'
                                        */
  real_T Constant_Value_oun;           /* Expression: 0.125
                                        * Referenced by: '<S540>/Constant'
                                        */
  real_T Constant_Value_mf;            /* Expression: 0.125
                                        * Referenced by: '<S548>/Constant'
                                        */
  real_T Constant_Value_pm;            /* Expression: 0.004
                                        * Referenced by: '<S541>/Constant'
                                        */
  real_T Constant_Value_d4;            /* Expression: -125
                                        * Referenced by: '<S549>/Constant'
                                        */
  real_T Constant_Value_fp;            /* Expression: 0.125
                                        * Referenced by: '<S550>/Constant'
                                        */
  real_T Constant_Value_o3;            /* Expression: -125
                                        * Referenced by: '<S551>/Constant'
                                        */
  real_T Constant_Value_ht;            /* Expression: 0.125
                                        * Referenced by: '<S552>/Constant'
                                        */
  real_T Constant_Value_eo;            /* Expression: -125
                                        * Referenced by: '<S527>/Constant'
                                        */
  real_T Constant_Value_hs;            /* Expression: 0.125
                                        * Referenced by: '<S528>/Constant'
                                        */
  real_T Constant_Value_fj;            /* Expression: -125
                                        * Referenced by: '<S529>/Constant'
                                        */
  real_T Constant_Value_aj;            /* Expression: 1
                                        * Referenced by: '<S427>/Constant'
                                        */
  real_T Constant_Value_pw;            /* Expression: 1
                                        * Referenced by: '<S458>/Constant'
                                        */
  real_T Constant2_Value_l;            /* Expression: 1
                                        * Referenced by: '<S415>/Constant2'
                                        */
  real_T Constant_Value_it;            /* Expression: 1/1024
                                        * Referenced by: '<S668>/Constant'
                                        */
  real_T Constant1_Value_is;           /* Expression: 1/1024
                                        * Referenced by: '<S669>/Constant1'
                                        */
  real_T Constant2_Value_hx;           /* Expression: 360/8192
                                        * Referenced by: '<S670>/Constant2'
                                        */
  real_T Constant_Value_fya;           /* Expression: 1000
                                        * Referenced by: '<S416>/Constant'
                                        */
  real_T Constant1_Value_cv;           /* Expression: 2000
                                        * Referenced by: '<S416>/Constant1'
                                        */
  real_T UnitDelay_InitialCondition_a; /* Expression: 0
                                        * Referenced by: '<S748>/Unit Delay'
                                        */
  real_T Constant_Value_g4;            /* Expression: 0
                                        * Referenced by: '<S752>/Constant'
                                        */
  real_T Gain_Gain_gr;                 /* Expression: 0.1
                                        * Referenced by: '<S748>/Gain'
                                        */
  real_T UnitDelay_InitialCondition_p; /* Expression: 0
                                        * Referenced by: '<S749>/Unit Delay'
                                        */
  real_T Constant_Value_kq;            /* Expression: 0
                                        * Referenced by: '<S753>/Constant'
                                        */
  real_T Gain_Gain_li;                 /* Expression: 0.1
                                        * Referenced by: '<S749>/Gain'
                                        */
  real_T ShifterControlFreq_Gain;      /* Expression: 1
                                        * Referenced by: '<S416>/ShifterControlFreq'
                                        */
  real_T ShifterControlDC2_Gain;       /* Expression: 1
                                        * Referenced by: '<S416>/ShifterControlDC2'
                                        */
  real_T ShifterControlDC1_Gain;       /* Expression: 1
                                        * Referenced by: '<S416>/ShifterControlDC1'
                                        */
  ENUM_CAN_RX_T Constant_Value_bl;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S421>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_gg;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S476>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_b4;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S422>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_h0;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S485>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_em;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S658>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant_Value_m1a;    /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S658>/Constant'
                                        */
  ENUM_CAN_RX_T Constant2_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S658>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_d1;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S658>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S658>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S658>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_jk;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S476>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_o;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S476>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_d0;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S476>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_pa;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S476>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_d;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S476>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_gp;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S485>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_g0;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S485>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_m;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S485>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_js;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S485>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_n;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S485>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_mx;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S611>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_ai;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S611>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_ln;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S611>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S611>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S611>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S611>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_ih;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S585>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_jg;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S585>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_ku;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S585>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_es;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S585>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_g4;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S585>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_k5;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S585>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant_Value_ij;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S598>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_oih;   /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S598>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_k2;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S598>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_ow;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S598>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S598>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_kk;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S598>/Constant4'
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
  ENUM_CAN_STATUS_DIAG_T Constant2_Value_j;/* Expression: ENUM_CAN_STATUS_DIAG_T.BUS_OFF
                                            * Referenced by: '<S1>/Constant2'
                                            */
  ENUM_CAN_TX_T Constant2_Value_c;     /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S852>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_ie;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S852>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S853>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S854>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S854>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S854>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S855>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_ef;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S977>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_a5;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S977>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_bg;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                 * Referenced by: '<S977>/Constant2'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_fz;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                 * Referenced by: '<S977>/Constant3'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_g;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                * Referenced by: '<S977>/Constant4'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_os;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                 * Referenced by: '<S977>/Constant5'
                                                 */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S104>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S104>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S1015>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S1015>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1015>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_g;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S1015>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_j;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S1015>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_d;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S1015>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_d;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S1015>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_i;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                     * Referenced by: '<S1015>/Constant10'
                                                     */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S1015>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S1015>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S1015>/XBRPriority'
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
                                                                  * Referenced by: '<S853>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S853>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S853>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S853>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S977>/Merge'
                                        */
  real32_T UnitDelay_InitialCondition_c;/* Computed Parameter: UnitDelay_InitialCondition_c
                                         * Referenced by: '<S285>/Unit Delay'
                                         */
  real32_T UnitDelay_InitialCondition_e;/* Computed Parameter: UnitDelay_InitialCondition_e
                                         * Referenced by: '<S290>/Unit Delay'
                                         */
  real32_T RX_delta_time_Y0;           /* Computed Parameter: RX_delta_time_Y0
                                        * Referenced by: '<S523>/RX_delta_time'
                                        */
  real32_T RX_delta_time_Y0_m;         /* Computed Parameter: RX_delta_time_Y0_m
                                        * Referenced by: '<S651>/RX_delta_time'
                                        */
  uint32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
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
  uint32_T UnitDelay_InitialCondition_m2;/* Computed Parameter: UnitDelay_InitialCondition_m2
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
  uint32_T UnitDelay_InitialCondition_pg;/* Computed Parameter: UnitDelay_InitialCondition_pg
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
  uint32_T Operator_BitMask_o1;        /* Expression: BitMask
                                        * Referenced by: '<S931>/Operator'
                                        */
  uint32_T Operator_BitMask_ez;        /* Expression: BitMask
                                        * Referenced by: '<S932>/Operator'
                                        */
  uint32_T Operator_BitMask_de;        /* Expression: BitMask
                                        * Referenced by: '<S933>/Operator'
                                        */
  uint32_T Operator_BitMask_ht;        /* Expression: BitMask
                                        * Referenced by: '<S934>/Operator'
                                        */
  uint32_T Constant_Value_k3;          /* Computed Parameter: Constant_Value_k3
                                        * Referenced by: '<S1007>/Constant'
                                        */
  uint32_T Operator_BitMask_ij;        /* Expression: BitMask
                                        * Referenced by: '<S981>/Operator'
                                        */
  uint32_T Operator_BitMask_kl;        /* Expression: BitMask
                                        * Referenced by: '<S982>/Operator'
                                        */
  uint32_T Operator_BitMask_ae;        /* Expression: BitMask
                                        * Referenced by: '<S983>/Operator'
                                        */
  uint32_T Operator_BitMask_mz;        /* Expression: BitMask
                                        * Referenced by: '<S984>/Operator'
                                        */
  uint32_T IV_Value_ec;                /* Computed Parameter: IV_Value_ec
                                        * Referenced by: '<S1007>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_ph;/* Computed Parameter: UnitDelay_InitialCondition_ph
                                          * Referenced by: '<S1007>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_i1;        /* Expression: BitMask
                                        * Referenced by: '<S985>/Operator'
                                        */
  uint32_T Operator_BitMask_jz;        /* Expression: BitMask
                                        * Referenced by: '<S986>/Operator'
                                        */
  uint32_T Operator_BitMask_g1;        /* Expression: BitMask
                                        * Referenced by: '<S987>/Operator'
                                        */
  uint32_T Operator_BitMask_ik;        /* Expression: BitMask
                                        * Referenced by: '<S988>/Operator'
                                        */
  uint32_T Constant_Value_gr;          /* Computed Parameter: Constant_Value_gr
                                        * Referenced by: '<S1035>/Constant'
                                        */
  uint32_T IV_Value_d;                 /* Computed Parameter: IV_Value_d
                                        * Referenced by: '<S1035>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_hz;/* Computed Parameter: UnitDelay_InitialCondition_hz
                                          * Referenced by: '<S1035>/Unit Delay'
                                          */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_gb;          /* Computed Parameter: Constant_Value_gb
                                        * Referenced by: '<S1050>/Constant'
                                        */
  uint32_T IV_Value_n;                 /* Computed Parameter: IV_Value_n
                                        * Referenced by: '<S1050>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_ns;/* Computed Parameter: UnitDelay_InitialCondition_ns
                                          * Referenced by: '<S1050>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_cs;        /* Expression: BitMask
                                        * Referenced by: '<S1046>/Operator'
                                        */
  uint32_T Operator_BitMask_kd;        /* Expression: BitMask
                                        * Referenced by: '<S1047>/Operator'
                                        */
  uint32_T Operator_BitMask_nkr;       /* Expression: BitMask
                                        * Referenced by: '<S1048>/Operator'
                                        */
  uint32_T Constant2_Value_gm;         /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S436>/Constant2'
                                        */
  uint32_T Constant2_Value_ps;         /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S459>/Constant2'
                                        */
  int16_T Constant_Value_k4;           /* Expression: int16(512)
                                        * Referenced by: '<S884>/Constant'
                                        */
  uint16_T Gain_Gain_b;                /* Computed Parameter: Gain_Gain_b
                                        * Referenced by: '<S97>/Gain'
                                        */
  uint16_T u000msDelay_Value;          /* Computed Parameter: u000msDelay_Value
                                        * Referenced by: '<S95>/2000ms Delay'
                                        */
  uint16_T Operator_BitMask_fh;        /* Expression: BitMask
                                        * Referenced by: '<S916>/Operator'
                                        */
  uint16_T Operator_BitMask_na;        /* Expression: BitMask
                                        * Referenced by: '<S917>/Operator'
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
  boolean_T Constant_Value_h03;        /* Expression: false
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
                                        * Referenced by: '<S334>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ls;/* Expression: true
                                            * Referenced by: '<S336>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_i0;/* Expression: true
                                            * Referenced by: '<S337>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ld;/* Expression: false
                                            * Referenced by: '<S335>/Unit_Delay'
                                            */
  boolean_T Constant_Value_hg;         /* Expression: false
                                        * Referenced by: '<S337>/Constant'
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
                                            * Referenced by: '<S389>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gz;/* Expression: true
                                            * Referenced by: '<S390>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_a;/* Expression: true
                                           * Referenced by: '<S378>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_gt;/* Expression: true
                                            * Referenced by: '<S379>/Unit_Delay'
                                            */
  boolean_T CPV_Value_a;               /* Expression: false
                                        * Referenced by: '<S356>/CPV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ml;/* Expression: false
                                            * Referenced by: '<S362>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ag;/* Expression: true
                                            * Referenced by: '<S351>/Unit_Delay'
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
                                            * Referenced by: '<S327>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ps;/* Expression: true
                                             * Referenced by: '<S328>/Unit_Delay1'
                                             */
  boolean_T zero3_Value;               /* Expression: boolean(0)
                                        * Referenced by: '<S282>/zero3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_j;/* Expression: true
                                            * Referenced by: '<S329>/Unit_Delay1'
                                            */
  boolean_T Constant8_Value_l;         /* Expression: boolean(0)
                                        * Referenced by: '<S279>/Constant8'
                                        */
  boolean_T Constant_Value_hx;         /* Expression: false
                                        * Referenced by: '<S327>/Constant'
                                        */
  boolean_T Constant_Value_bh;         /* Expression: false
                                        * Referenced by: '<S328>/Constant'
                                        */
  boolean_T Constant_Value_hxo;        /* Expression: false
                                        * Referenced by: '<S329>/Constant'
                                        */
  boolean_T Constant_Value_pu;         /* Expression: false
                                        * Referenced by: '<S351>/Constant'
                                        */
  boolean_T Constant_Value_am;         /* Expression: false
                                        * Referenced by: '<S379>/Constant'
                                        */
  boolean_T Constant_Value_c1;         /* Expression: false
                                        * Referenced by: '<S390>/Constant'
                                        */
  boolean_T Constant3_Value_fa;        /* Computed Parameter: Constant3_Value_fa
                                        * Referenced by: '<S403>/Constant3'
                                        */
  boolean_T Constant2_Value_eu;        /* Computed Parameter: Constant2_Value_eu
                                        * Referenced by: '<S403>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S520>/RX_status'
                                        */
  boolean_T RX_status_Y0_e;            /* Computed Parameter: RX_status_Y0_e
                                        * Referenced by: '<S648>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_c;        /* Expression: false
                                        * Referenced by: '<S767>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ed;/* Expression: true
                                            * Referenced by: '<S838>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_aj;/* Expression: true
                                            * Referenced by: '<S839>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_had;/* Expression: false
                                             * Referenced by: '<S837>/Unit_Delay'
                                             */
  boolean_T Constant_Value_cb;         /* Expression: false
                                        * Referenced by: '<S839>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S745>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S925>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S925>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S853>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S879>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S853>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S853>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_o;                 /* Expression: true
                                        * Referenced by: '<S1007>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_ay;/* Computed Parameter: Unit_Delay_InitialCondition_ay
                                            * Referenced by: '<S1006>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_h;  /* Expression: boolean(0)
                                        * Referenced by: '<S975>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_b;          /* Expression: boolean(0)
                                        * Referenced by: '<S975>/DataPage'
                                        */
  boolean_T E_Value_jh;                /* Expression: true
                                        * Referenced by: '<S1035>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S1015>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_oc;/* Expression: false
                                            * Referenced by: '<S1011>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S1014>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ah;/* Computed Parameter: Unit_Delay_InitialCondition_ah
                                            * Referenced by: '<S1034>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_p;  /* Expression: boolean(0)
                                        * Referenced by: '<S1030>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_l;          /* Expression: boolean(0)
                                        * Referenced by: '<S1030>/DataPage'
                                        */
  boolean_T CPV_Value_hc;              /* Expression: true
                                        * Referenced by: '<S1014>/CPV'
                                        */
  boolean_T E_Value_cd;                /* Expression: true
                                        * Referenced by: '<S1050>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S1040>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_k0;/* Computed Parameter: Unit_Delay_InitialCondition_k0
                                            * Referenced by: '<S1049>/Unit_Delay'
                                            */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1055>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_pd;         /* Expression: boolean(1)
                                        * Referenced by: '<S425>/Constant'
                                        */
  boolean_T Constant_Value_pmp;        /* Expression: boolean(1)
                                        * Referenced by: '<S426>/Constant'
                                        */
  boolean_T Constant_Value_ow;         /* Computed Parameter: Constant_Value_ow
                                        * Referenced by: '<S759>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_gq;/* Computed Parameter: UnitDelay_InitialCondition_gq
                                           * Referenced by: '<S743>/Unit Delay'
                                           */
  boolean_T Constant_Value_oc;         /* Computed Parameter: Constant_Value_oc
                                        * Referenced by: '<S758>/Constant'
                                        */
  boolean_T UnitDelay1_InitialCondition_g;/* Computed Parameter: UnitDelay1_InitialCondition_g
                                           * Referenced by: '<S756>/Unit Delay1'
                                           */
  boolean_T UnitDelay1_InitialCondition_f;/* Computed Parameter: UnitDelay1_InitialCondition_f
                                           * Referenced by: '<S757>/Unit Delay1'
                                           */
  boolean_T Unit_Delay_InitialCondition_pp;/* Expression: true
                                            * Referenced by: '<S766>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_n;/* Expression: true
                                            * Referenced by: '<S833>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_m2;/* Expression: true
                                             * Referenced by: '<S766>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_k;/* Expression: true
                                            * Referenced by: '<S834>/Unit_Delay1'
                                            */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S744>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_lj;         /* Expression: boolean(1)
                                        * Referenced by: '<S430>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S435>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S442>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_ls;        /* Expression: boolean(1)
                                        * Referenced by: '<S434>/Constant1'
                                        */
  boolean_T Enable_RX_ETC2_03_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S440>/Enable_RX_ETC2_03'
                                        */
  boolean_T Enable_RX_EEC1_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S437>/Enable_RX_EEC1_00'
                                        */
  boolean_T Enable_RX_EEC3_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S439>/Enable_RX_EEC3_00'
                                        */
  boolean_T Constant_Value_hc;         /* Expression: boolean(1)
                                        * Referenced by: '<S432>/Constant'
                                        */
  boolean_T Constant_Value_c5;         /* Expression: boolean(1)
                                        * Referenced by: '<S423>/Constant'
                                        */
  boolean_T Constant_Value_bj;         /* Expression: boolean(1)
                                        * Referenced by: '<S456>/Constant'
                                        */
  boolean_T Constant_Value_hcn;        /* Expression: boolean(1)
                                        * Referenced by: '<S457>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S649>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_lst;/* Expression: true
                                             * Referenced by: '<S649>/Unit_Delay'
                                             */
  boolean_T Unit_Delay_InitialCondition_ia;/* Expression: false
                                            * Referenced by: '<S655>/Unit_Delay'
                                            */
  boolean_T Constant_Value_pa;         /* Expression: boolean(0)
                                        * Referenced by: '<S447>/Constant'
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
                                        * Referenced by: '<S406>/Constant'
                                        */
  boolean_T useGPSSA00_Value;          /* Expression: boolean(1)
                                        * Referenced by: '<S466>/useGPSSA00'
                                        */
  boolean_T useGPSSA0_Value;           /* Expression: boolean(0)
                                        * Referenced by: '<S466>/useGPSSA0'
                                        */
  boolean_T Constant_Value_jq;         /* Expression: boolean(1)
                                        * Referenced by: '<S429>/Constant'
                                        */
  boolean_T Constant_Value_jf3;        /* Expression: boolean(1)
                                        * Referenced by: '<S455>/Constant'
                                        */
  boolean_T Constant_Value_i1;         /* Computed Parameter: Constant_Value_i1
                                        * Referenced by: '<S1066>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S859>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S859>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1076>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_f;         /* Expression: false
                                        * Referenced by: '<S1076>/Constant2'
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
  boolean_T Constant_Value_cu;         /* Expression: boolean(1)
                                        * Referenced by: '<S424>/Constant'
                                        */
  boolean_T Constant_Value_ed;         /* Expression: boolean(0)
                                        * Referenced by: '<S428>/Constant'
                                        */
  boolean_T Constant1_Value_n1;        /* Expression: boolean(1)
                                        * Referenced by: '<S433>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S438>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S451>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_e;/* Expression: boolean(0)
                                             * Referenced by: '<S452>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_j0;         /* Expression: boolean(0)
                                        * Referenced by: '<S453>/Constant'
                                        */
  boolean_T Constant_Value_f1;         /* Expression: false
                                        * Referenced by: '<S649>/Constant'
                                        */
  boolean_T Constant1_Value_fh;        /* Expression: false
                                        * Referenced by: '<S649>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_c;/* Expression: true
                                            * Referenced by: '<S649>/Unit_Delay2'
                                            */
  boolean_T Unit_Delay1_InitialCondition_b;/* Expression: true
                                            * Referenced by: '<S649>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_ep;/* Expression: false
                                            * Referenced by: '<S656>/Unit_Delay'
                                            */
  boolean_T Constant_Value_j1;         /* Computed Parameter: Constant_Value_j1
                                        * Referenced by: '<S751>/Constant'
                                        */
  boolean_T UnitDelay_InitialCondition_d;/* Computed Parameter: UnitDelay_InitialCondition_d
                                          * Referenced by: '<S742>/Unit Delay'
                                          */
  boolean_T Constant_Value_eb;         /* Computed Parameter: Constant_Value_eb
                                        * Referenced by: '<S750>/Constant'
                                        */
  boolean_T UnitDelay1_InitialCondition_k;/* Computed Parameter: UnitDelay1_InitialCondition_k
                                           * Referenced by: '<S748>/Unit Delay1'
                                           */
  boolean_T UnitDelay1_InitialCondition_pw;/* Computed Parameter: UnitDelay1_InitialCondition_pw
                                            * Referenced by: '<S749>/Unit Delay1'
                                            */
  boolean_T Constant_Value_ebv;        /* Expression: false
                                        * Referenced by: '<S766>/Constant'
                                        */
  boolean_T Constant_Value_dd;         /* Expression: false
                                        * Referenced by: '<S833>/Constant'
                                        */
  boolean_T Constant1_Value_fi;        /* Expression: false
                                        * Referenced by: '<S766>/Constant1'
                                        */
  boolean_T Constant_Value_dg;         /* Expression: false
                                        * Referenced by: '<S834>/Constant'
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
                                        * Referenced by: '<S397>/for_logging7'
                                        */
  uint8_T FixPtUnitDelay2_InitialConditio;/* Computed Parameter: FixPtUnitDelay2_InitialConditio
                                           * Referenced by: '<S140>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_fl;      /* Computed Parameter: FixPtConstant_Value_fl
                                        * Referenced by: '<S140>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_p;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_p
                                           * Referenced by: '<S178>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_j;       /* Computed Parameter: FixPtConstant_Value_j
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
  uint8_T FixPtConstant_Value_k;       /* Computed Parameter: FixPtConstant_Value_k
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
                                           * Referenced by: '<S340>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_n;       /* Computed Parameter: FixPtConstant_Value_n
                                        * Referenced by: '<S340>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondi_f5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_f5
                                           * Referenced by: '<S394>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_po;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_po
                                           * Referenced by: '<S383>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_i;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                           * Referenced by: '<S371>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ck;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ck
                                           * Referenced by: '<S355>/FixPt Unit Delay2'
                                           */
  uint8_T Constant_Value_mg;           /* Expression: uint8(3)
                                        * Referenced by: '<S283>/Constant'
                                        */
  uint8_T Constant1_Value_lsu;         /* Expression: uint8(5)
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint8_T FixPtConstant_Value_az;      /* Computed Parameter: FixPtConstant_Value_az
                                        * Referenced by: '<S355>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_gy;      /* Computed Parameter: FixPtConstant_Value_gy
                                        * Referenced by: '<S371>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_g;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_g
                                           * Referenced by: '<S373>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pz;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pz
                                           * Referenced by: '<S374>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_e;       /* Computed Parameter: FixPtConstant_Value_e
                                        * Referenced by: '<S374>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_p2;      /* Computed Parameter: FixPtConstant_Value_p2
                                        * Referenced by: '<S373>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_d;       /* Computed Parameter: FixPtConstant_Value_d
                                        * Referenced by: '<S383>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jx;      /* Computed Parameter: FixPtConstant_Value_jx
                                        * Referenced by: '<S394>/FixPt Constant'
                                        */
  uint8_T Failure_Value_k;             /* Computed Parameter: Failure_Value_k
                                        * Referenced by: '<S397>/Failure'
                                        */
  uint8_T RawData_Y0;                  /* Computed Parameter: RawData_Y0
                                        * Referenced by: '<S523>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_lf[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                             * Referenced by: '<S520>/Unit Delay'
                                             */
  uint8_T RawData_Y0_b;                /* Computed Parameter: RawData_Y0_b
                                        * Referenced by: '<S651>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_k[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                            * Referenced by: '<S648>/Unit Delay'
                                            */
  uint8_T FixPtUnitDelay2_InitialCondit_l;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_l
                                           * Referenced by: '<S842>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_e0;      /* Computed Parameter: FixPtConstant_Value_e0
                                        * Referenced by: '<S842>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_k;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S886>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S925>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S925>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S925>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S925>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_gv;         /* Expression: BitMask
                                        * Referenced by: '<S930>/Operator'
                                        */
  uint8_T Operator_BitMask_kdu;        /* Expression: BitMask
                                        * Referenced by: '<S929>/Operator'
                                        */
  uint8_T Constant_Value_dl;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S885>/Constant'
                                        */
  uint8_T Constant1_Value_cd;          /* Expression: uint8(0)
                                        * Referenced by: '<S978>/Constant1'
                                        */
  uint8_T Constant_Value_cuw;          /* Expression: uint8(1)
                                        * Referenced by: '<S978>/Constant'
                                        */
  uint8_T Constant_Value_blu;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S976>/Constant'
                                        */
  uint8_T Constant1_Value_pc;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S976>/Constant1'
                                        */
  uint8_T Operator_BitMask_ki;         /* Expression: BitMask
                                        * Referenced by: '<S989>/Operator'
                                        */
  uint8_T Priority_Value_d;            /* Expression: uint8(6)
                                        * Referenced by: '<S975>/Priority'
                                        */
  uint8_T PDUFormat_Value_m;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S975>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_h;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S975>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_h;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S975>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_fi;         /* Expression: BitMask
                                        * Referenced by: '<S990>/Operator'
                                        */
  uint8_T Constant2_Value_ae;          /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S1031>/Constant2'
                                        */
  uint8_T Constant3_Value_fx;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1031>/Constant3'
                                        */
  uint8_T Constant4_Value_fm;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1031>/Constant4'
                                        */
  uint8_T Constant_Value_id;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1031>/Constant'
                                        */
  uint8_T Constant1_Value_ld;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1031>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_l;            /* Expression: uint8(3)
                                        * Referenced by: '<S1030>/Priority'
                                        */
  uint8_T PDUFormat_Value_p;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S1030>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_i;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S1030>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_i;       /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S1030>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S1031>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1061>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1061>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1061>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1061>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1061>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1061>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1061>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1061>/Byte1'
                                        */
  uint8_T Byte8_Value_e;               /* Expression: uint8('N')
                                        * Referenced by: '<S1060>/Byte8'
                                        */
  uint8_T Byte7_Value_b;               /* Expression: uint8('R')
                                        * Referenced by: '<S1060>/Byte7'
                                        */
  uint8_T Byte6_Value_c;               /* Expression: uint8('*')
                                        * Referenced by: '<S1060>/Byte6'
                                        */
  uint8_T Byte5_Value_e;               /* Expression: uint8('R')
                                        * Referenced by: '<S1060>/Byte5'
                                        */
  uint8_T Byte4_Value_c;               /* Expression: uint8('A')
                                        * Referenced by: '<S1060>/Byte4'
                                        */
  uint8_T Byte3_Value_c;               /* Expression: uint8('C')
                                        * Referenced by: '<S1060>/Byte3'
                                        */
  uint8_T Byte2_Value_n;               /* Expression: uint8('P')
                                        * Referenced by: '<S1060>/Byte2'
                                        */
  uint8_T Byte1_Value_e;               /* Computed Parameter: Byte1_Value_e
                                        * Referenced by: '<S1060>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_h;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_h
                                           * Referenced by: '<S796>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_lt;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_lt
                                           * Referenced by: '<S788>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_m;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_m
                                           * Referenced by: '<S812>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_h5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_h5
                                           * Referenced by: '<S804>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_o;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_o
                                           * Referenced by: '<S832>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_j;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_j
                                           * Referenced by: '<S831>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ht;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ht
                                           * Referenced by: '<S820>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_po;          /* Expression: uint8(32)
                                        * Referenced by: '<S469>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S649>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_cl;           /* Computed Parameter: Constant_Value_cl
                                        * Referenced by: '<S653>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Supervisor_Autonomous_Mode_Valu;/* Computed Parameter: Supervisor_Autonomous_Mode_Valu
                                           * Referenced by: '<S397>/Supervisor_Autonomous_Mode'
                                           */
  uint8_T Byte1_Value_m;               /* Computed Parameter: Byte1_Value_m
                                        * Referenced by: '<S1058>/Byte1'
                                        */
  uint8_T Byte2_Value_j;               /* Computed Parameter: Byte2_Value_j
                                        * Referenced by: '<S1058>/Byte2'
                                        */
  uint8_T Byte3_Value_p;               /* Computed Parameter: Byte3_Value_p
                                        * Referenced by: '<S1058>/Byte3'
                                        */
  uint8_T Byte4_Value_f;               /* Computed Parameter: Byte4_Value_f
                                        * Referenced by: '<S1058>/Byte4'
                                        */
  uint8_T Byte5_Value_p;               /* Computed Parameter: Byte5_Value_p
                                        * Referenced by: '<S1058>/Byte5'
                                        */
  uint8_T Byte6_Value_g;               /* Computed Parameter: Byte6_Value_g
                                        * Referenced by: '<S1058>/Byte6'
                                        */
  uint8_T Byte7_Value_h;               /* Computed Parameter: Byte7_Value_h
                                        * Referenced by: '<S1058>/Byte7'
                                        */
  uint8_T Byte8_Value_p;               /* Computed Parameter: Byte8_Value_p
                                        * Referenced by: '<S1058>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_o;/* Computed Parameter: UnitDelay1_InitialCondition_o
                                         * Referenced by: '<S859>/Unit Delay1'
                                         */
  uint8_T Constant1_Value_m5;          /* Computed Parameter: Constant1_Value_m5
                                        * Referenced by: '<S859>/Constant1'
                                        */
  uint8_T ManualReady_Value;           /* Computed Parameter: ManualReady_Value
                                        * Referenced by: '<S1077>/Manual Ready'
                                        */
  uint8_T Constant2_Value_i;           /* Computed Parameter: Constant2_Value_i
                                        * Referenced by: '<S1077>/Constant2'
                                        */
  uint8_T Unit_Delay_138_InitialCondition;/* Computed Parameter: Unit_Delay_138_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S649>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_m0;           /* Computed Parameter: Constant_Value_m0
                                        * Referenced by: '<S654>/Constant'
                                        */
  uint8_T Constant_Value_en;           /* Expression: uint8(16)
                                        * Referenced by: '<S469>/Constant'
                                        */
  uint8_T Constant1_Value_ap;          /* Expression: uint8(17)
                                        * Referenced by: '<S469>/Constant1'
                                        */
  uint8_T Constant2_Value_bx;          /* Expression: uint8(19)
                                        * Referenced by: '<S469>/Constant2'
                                        */
  uint8_T Constant4_Value_h;           /* Expression: uint8(255)
                                        * Referenced by: '<S469>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_k5;      /* Computed Parameter: FixPtConstant_Value_k5
                                        * Referenced by: '<S788>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_kn;      /* Computed Parameter: FixPtConstant_Value_kn
                                        * Referenced by: '<S796>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_em;      /* Computed Parameter: FixPtConstant_Value_em
                                        * Referenced by: '<S804>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_fu;      /* Computed Parameter: FixPtConstant_Value_fu
                                        * Referenced by: '<S812>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_o;       /* Computed Parameter: FixPtConstant_Value_o
                                        * Referenced by: '<S820>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_px;      /* Computed Parameter: FixPtConstant_Value_px
                                        * Referenced by: '<S831>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_i;       /* Computed Parameter: FixPtConstant_Value_i
                                        * Referenced by: '<S832>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S977>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S977>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S977>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S977>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S977>/ALL_CTRL_DISABLED' */
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
extern real_T GLB_Absolute_Timestamp;  /* '<S417>/Rate Transition' */
extern real_T ReAX_ActualHandwheelPos; /* '<S443>/Switch' */
extern real_T EthernetLinkStatus;      /* '<S399>/dsa_tcpip_setup' */
extern real_T CurrentAzimuth_rad;      /* '<S397>/Switch' */
extern real_T TargetAzimuth_rad;       /* '<S397>/Switch1' */
extern real_T TargetVelocity_kph;      /* '<S397>/Switch3' */
extern real_T Curvature;               /* '<S397>/Switch4' */
extern real_T CrosstrackError;         /* '<S397>/Switch5' */
extern real_T CurrentVelocity_kph;     /* '<S397>/Switch2' */
extern real_T GPS_X;                   /* '<S397>/Switch6' */
extern real_T GPS_Y;                   /* '<S397>/Switch7' */
extern real_T GPS_Time;                /* '<S397>/Switch8' */
extern real_T ReAX_EchoedSteerWheelPos;/* '<S443>/Switch' */
extern real_T SteerWheelAngle;         /* '<S645>/S-Function1' */
extern real_T YawRate;                 /* '<S645>/S-Function1' */
extern real_T SPN1810_LongitudinalAcceleration;/* '<S645>/S-Function1' */
extern real_T WheelBasedVehicleSpeed;  /* '<S506>/S-Function1' */
extern real_T BrakeSwitch;             /* '<S506>/S-Function1' */
extern real_T Lateral_Control_Rate_Limit;/* '<S310>/Constant' */
extern real_T Lateral_Control_Output;  /* '<S281>/Sum1' */
extern real_T Lateral_Control_Rate_Limiter_Output;/* '<S310>/If_Then_Else' */
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
extern real32_T REAX_Handwheel_Torque; /* '<S419>/Data Type Conversion3' */
extern real32_T REAX_Handwheel_Velocity;/* '<S419>/Data Type Conversion4' */
extern real32_T REAX_Pull_Compensation;/* '<S419>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN1_Status;/* '<S1>/Data Type Conversion' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN5_Status;/* '<S1>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN6_Status;/* '<S1>/Data Type Conversion4' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN3_Status;/* '<S1>/Data Type Conversion3' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN4_Status;/* '<S1>/Data Type Conversion2' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN2_Status;/* '<S1>/Data Type Conversion1' */
extern uint8_T SupervisorMode;         /* '<S397>/Switch9' */
extern uint8_T REAX_Current_Mode;      /* '<S419>/Data Type Conversion' */
extern uint8_T REAX_Req_Mode;          /* '<S419>/Data Type Conversion1' */
extern uint8_T REAX_Status;            /* '<S419>/Data Type Conversion2' */
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1090>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S416>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S745>/Switch' */
extern boolean_T EngagePB;             /* '<S743>/AND2' */
extern boolean_T BrakeSW;              /* '<S416>/Logical Operator3' */
extern boolean_T MABX_Heartbeat;       /* '<S398>/Cast To Boolean' */
extern boolean_T Heartbeat_Ok;         /* '<S403>/Switch1' */
extern boolean_T RTMapsOk;             /* '<S397>/AND' */
extern boolean_T LogEventPB;           /* '<S742>/AND2' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T RateLimiterActive;    /* '<S319>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S765>/Switch' */

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
extern real_T Curvature_FF_Gain;       /* Variable: Curvature_FF_Gain
                                        * Referenced by: '<S281>/FeedforwardGain'
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
                                        * Referenced by: '<S307>/Derivative Gain'
                                        */
extern real_T Lateral_Control_Error_Limit;/* Variable: Lateral_Control_Error_Limit
                                           * Referenced by:
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
                                        * Referenced by: '<S307>/Integral Gain'
                                        */
extern real_T Lateral_Control_P;       /* Variable: Lateral_Control_P
                                        * Referenced by:
                                        *   '<S281>/PGain'
                                        *   '<S307>/Proportional Gain'
                                        */
extern real_T Lateral_Control_Pole;    /* Variable: Lateral_Control_Pole
                                        * Referenced by: '<S311>/GainPole'
                                        */
extern real_T Lateral_Control_Rate_Limit_APV;/* Variable: Lateral_Control_Rate_Limit_APV
                                              * Referenced by: '<S310>/Constant'
                                              */
extern real_T Lateral_Control_YawRate_Limit;/* Variable: Lateral_Control_YawRate_Limit
                                             * Referenced by:
                                             *   '<S281>/Constant2'
                                             *   '<S281>/Constant4'
                                             */
extern real_T Lateral_Control_Zero;    /* Variable: Lateral_Control_Zero
                                        * Referenced by: '<S311>/GainZero'
                                        */
extern real_T PROPB_REAX_1_E4_DESIRED_POSITION_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_POSITION_APV
                                                    * Referenced by: '<S994>/Constant7'
                                                    */
extern real_T REAX_OFFSET_APV;         /* Variable: REAX_OFFSET_APV
                                        * Referenced by:
                                        *   '<S80>/Constant'
                                        *   '<S280>/ReAX Offset'
                                        *   '<S281>/Constant6'
                                        */
extern real_T STANLEY_GAIN_APV;        /* Variable: STANLEY_GAIN_APV
                                        * Referenced by: '<S280>/StanleySteeringControlGain'
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
                                        * Referenced by: '<S281>/UndersteerCorrection'
                                        */
extern real_T VSPD_TARGET_KPH_APV;     /* Variable: VSPD_TARGET_KPH_APV
                                        * Referenced by: '<S81>/VSPD_TARGET_KPH_APV'
                                        */
extern real_T YAW_RATE_OFFSET_APV;     /* Variable: YAW_RATE_OFFSET_APV
                                        * Referenced by: '<S281>/YAW_RATE_OFFSET_APV'
                                        */
extern real_T Yaw_Rate_FF_Gain;        /* Variable: Yaw_Rate_FF_Gain
                                        * Referenced by: '<S281>/RateFeedbackGain'
                                        */
extern ENUM_AUTONOMOUS_MODE_T AUTONOMOUS_MODE_SELECTOR_APV;/* Variable: AUTONOMOUS_MODE_SELECTOR_APV
                                                            * Referenced by: '<S76>/AUTONOMOUS_MODE_SELECTOR_APV'
                                                            */
extern ENUM_CAN_RX_T CANR_PROPB_XPR_1_50_CHANNEL_APV;/* Variable: CANR_PROPB_XPR_1_50_CHANNEL_APV
                                                      * Referenced by: '<S446>/Constant'
                                                      */
extern ENUM_CAN_RX_T PROPB_REAX_CHANNEL_APV;/* Variable: PROPB_REAX_CHANNEL_APV
                                             * Referenced by:
                                             *   '<S444>/Constant'
                                             *   '<S445>/Constant'
                                             *   '<S466>/Constant3'
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
                                                                      * Referenced by: '<S977>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S994>/Constant1'
                                                                      */
extern ENUM_SWITCH_T RATE_LIMITER_ENABLE_APV;/* Variable: RATE_LIMITER_ENABLE_APV
                                              * Referenced by: '<S310>/RATE_LIMITER_ENABLE_APV'
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
 * '<S301>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Bumpless Transfer'
 * '<S302>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation'
 * '<S303>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Calc'
 * '<S304>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation'
 * '<S305>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else'
 * '<S306>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/If_Then_Else1'
 * '<S307>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/PID Controller'
 * '<S308>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic'
 * '<S309>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1'
 * '<S310>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation'
 * '<S311>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Transfer Fcn Lead or Lag'
 * '<S312>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation'
 * '<S313>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else'
 * '<S314>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else1'
 * '<S315>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else'
 * '<S316>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else1'
 * '<S317>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic/Saturation Dynamic'
 * '<S318>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter Dynamic1/Saturation Dynamic'
 * '<S319>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Compare To Constant'
 * '<S320>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/If_Then_Else'
 * '<S321>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter'
 * '<S322>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Saturation'
 * '<S323>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter/Saturation Dynamic'
 * '<S324>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else'
 * '<S325>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else1'
 * '<S326>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/Detect Change'
 * '<S327>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order'
 * '<S328>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied'
 * '<S329>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1'
 * '<S330>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order/If_Then_Else'
 * '<S331>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied/If_Then_Else'
 * '<S332>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1/If_Then_Else'
 * '<S333>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Chart'
 * '<S334>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event'
 * '<S335>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/RS flip-flop'
 * '<S336>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Rising_edge'
 * '<S337>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset'
 * '<S338>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S339>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S340>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S341>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Compare To Zero'
 * '<S342>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Detect Change1'
 * '<S343>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile'
 * '<S344>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile'
 * '<S345>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit'
 * '<S346>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/If_Then_Else'
 * '<S347>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit'
 * '<S348>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/dT'
 * '<S349>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Detect Change1'
 * '<S350>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values'
 * '<S351>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset'
 * '<S352>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values/If_Then_Else'
 * '<S353>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Check Static  Lower Bound'
 * '<S354>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/If_Then_Else'
 * '<S355>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Unit Delay External IC'
 * '<S356>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile'
 * '<S357>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value'
 * '<S358>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/TwentyPointVectorCalculation'
 * '<S359>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/VehicleSpeedSetpointDynamicCalculation'
 * '<S360>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value'
 * '<S361>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Compare To Zero'
 * '<S362>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/SR flip-flop'
 * '<S363>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value/If_Then_Else'
 * '<S364>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/If_Then_Else'
 * '<S365>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators'
 * '<S366>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance'
 * '<S367>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator'
 * '<S368>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT'
 * '<S369>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT1'
 * '<S370>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/If_Then_Else'
 * '<S371>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/Unit Delay Resettable External IC1'
 * '<S372>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method'
 * '<S373>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Unit Delay Resettable External IC1'
 * '<S374>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method/Unit Delay Resettable External IC'
 * '<S375>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant3'
 * '<S376>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant8'
 * '<S377>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/If_Then_Else4'
 * '<S378>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Rising_edge'
 * '<S379>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset'
 * '<S380>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/dT'
 * '<S381>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S382>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/If_Then_Else'
 * '<S383>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S384>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant10'
 * '<S385>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant11'
 * '<S386>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant12'
 * '<S387>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant9'
 * '<S388>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/If_Then_Else4'
 * '<S389>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Rising_edge'
 * '<S390>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset'
 * '<S391>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/dT'
 * '<S392>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S393>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/If_Then_Else'
 * '<S394>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S395>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Mapping'
 * '<S396>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Odometry'
 * '<S397>' : 'L4_MABX/ETHERNET/Data RX'
 * '<S398>' : 'L4_MABX/ETHERNET/Data TX'
 * '<S399>' : 'L4_MABX/ETHERNET/TCPIP_Setup'
 * '<S400>' : 'L4_MABX/ETHERNET/UDPIP_Communication'
 * '<S401>' : 'L4_MABX/ETHERNET/Update_RTMaps_Interface'
 * '<S402>' : 'L4_MABX/ETHERNET/Data RX/EQ'
 * '<S403>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check'
 * '<S404>' : 'L4_MABX/ETHERNET/Data RX/RTMapsDecode'
 * '<S405>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1'
 * '<S406>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1/Positive'
 * '<S407>' : 'L4_MABX/ETHERNET/Data TX/RTMapsEncode'
 * '<S408>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background'
 * '<S409>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background_Task'
 * '<S410>' : 'L4_MABX/ETHERNET/TCPIP_Setup/IRQ_Level_2_SW_INT'
 * '<S411>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task'
 * '<S412>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block'
 * '<S413>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task/Tcp Input Processing'
 * '<S414>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block/Common Hardware Interrupt Interface'
 * '<S415>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW'
 * '<S416>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL'
 * '<S417>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access'
 * '<S418>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_EC1'
 * '<S419>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_3'
 * '<S420>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_4'
 * '<S421>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00'
 * '<S422>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00'
 * '<S423>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A'
 * '<S424>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A'
 * '<S425>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31'
 * '<S426>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00'
 * '<S427>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31'
 * '<S428>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks'
 * '<S429>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00'
 * '<S430>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31'
 * '<S431>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01'
 * '<S432>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B'
 * '<S433>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B'
 * '<S434>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B'
 * '<S435>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B'
 * '<S436>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00'
 * '<S437>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00'
 * '<S438>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00'
 * '<S439>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00'
 * '<S440>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03'
 * '<S441>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00'
 * '<S442>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B'
 * '<S443>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13'
 * '<S444>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13'
 * '<S445>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13'
 * '<S446>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50'
 * '<S447>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2'
 * '<S448>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01'
 * '<S449>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30'
 * '<S450>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03'
 * '<S451>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2'
 * '<S452>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3'
 * '<S453>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5'
 * '<S454>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01'
 * '<S455>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05'
 * '<S456>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B'
 * '<S457>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B'
 * '<S458>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03'
 * '<S459>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00'
 * '<S460>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C1'
 * '<S461>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C2'
 * '<S462>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C1'
 * '<S463>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C2'
 * '<S464>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C1'
 * '<S465>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C2'
 * '<S466>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable'
 * '<S467>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3'
 * '<S468>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4'
 * '<S469>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM'
 * '<S470>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPDT'
 * '<S471>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses15'
 * '<S472>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses16'
 * '<S473>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses2'
 * '<S474>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses3'
 * '<S475>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1'
 * '<S476>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel'
 * '<S477>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S478>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ'
 * '<S479>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ1'
 * '<S480>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ2'
 * '<S481>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ3'
 * '<S482>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ4'
 * '<S483>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ5'
 * '<S484>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1'
 * '<S485>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel'
 * '<S486>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S487>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ'
 * '<S488>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ1'
 * '<S489>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ2'
 * '<S490>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ3'
 * '<S491>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ4'
 * '<S492>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ5'
 * '<S493>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1'
 * '<S494>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1/ACC1_2A_'
 * '<S495>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1'
 * '<S496>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1/AEBS1_A0'
 * '<S497>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1'
 * '<S498>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1/AIR1'
 * '<S499>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1'
 * '<S500>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1/AMB'
 * '<S501>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4'
 * '<S502>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4/B2'
 * '<S503>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1'
 * '<S504>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1/Tracks'
 * '<S505>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1'
 * '<S506>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1/CCVS1_00'
 * '<S507>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1'
 * '<S508>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1/CCVS1_31'
 * '<S509>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4'
 * '<S510>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_00'
 * '<S511>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_1'
 * '<S512>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1'
 * '<S513>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1/CVW_0B1'
 * '<S514>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1'
 * '<S515>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1/EBC1_0B'
 * '<S516>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1'
 * '<S517>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1/EBC1_0B'
 * '<S518>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1'
 * '<S519>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1/EBC2_0B1'
 * '<S520>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00'
 * '<S521>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1'
 * '<S522>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/EQ1'
 * '<S523>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/Decode'
 * '<S524>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/serialize_tpdt'
 * '<S525>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/MergeBuses'
 * '<S526>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1'
 * '<S527>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte11'
 * '<S528>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13'
 * '<S529>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte14'
 * '<S530>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16'
 * '<S531>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18'
 * '<S532>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20'
 * '<S533>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte2'
 * '<S534>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22'
 * '<S535>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte23'
 * '<S536>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte24'
 * '<S537>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte25'
 * '<S538>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte26'
 * '<S539>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte27'
 * '<S540>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29'
 * '<S541>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31'
 * '<S542>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33'
 * '<S543>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte34'
 * '<S544>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte35'
 * '<S545>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte36'
 * '<S546>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte37'
 * '<S547>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte38'
 * '<S548>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4'
 * '<S549>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte5'
 * '<S550>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7'
 * '<S551>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte8'
 * '<S552>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10'
 * '<S553>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1/OR'
 * '<S554>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13/OR'
 * '<S555>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16/OR'
 * '<S556>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18/OR'
 * '<S557>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20/OR'
 * '<S558>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22/OR'
 * '<S559>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29/OR'
 * '<S560>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31/OR'
 * '<S561>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33/OR'
 * '<S562>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4/OR'
 * '<S563>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7/OR'
 * '<S564>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10/OR'
 * '<S565>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1'
 * '<S566>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1/EEC1_001'
 * '<S567>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2'
 * '<S568>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2/EEC2_001'
 * '<S569>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1'
 * '<S570>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1/EEC3_001'
 * '<S571>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1'
 * '<S572>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1/ETC2_031'
 * '<S573>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4'
 * '<S574>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_011'
 * '<S575>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_1'
 * '<S576>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1'
 * '<S577>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1/HRW_0B'
 * '<S578>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2'
 * '<S579>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6'
 * '<S580>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2/PropB_REAX_2_13'
 * '<S581>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6/PropB_REAX_2_13'
 * '<S582>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1'
 * '<S583>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2'
 * '<S584>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6'
 * '<S585>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel'
 * '<S586>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S587>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S588>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6/CAN_TYPE1_RX_M3_C2'
 * '<S589>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ'
 * '<S590>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ1'
 * '<S591>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ2'
 * '<S592>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ3'
 * '<S593>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ4'
 * '<S594>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ5'
 * '<S595>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1'
 * '<S596>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2'
 * '<S597>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3'
 * '<S598>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel'
 * '<S599>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S600>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S601>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3/CAN_TYPE1_RX_M3_C2'
 * '<S602>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ'
 * '<S603>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ1'
 * '<S604>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ2'
 * '<S605>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ3'
 * '<S606>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ4'
 * '<S607>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ5'
 * '<S608>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1'
 * '<S609>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2'
 * '<S610>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3'
 * '<S611>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel'
 * '<S612>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S613>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S614>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3/CAN_TYPE1_RX_M2_C1'
 * '<S615>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ'
 * '<S616>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ1'
 * '<S617>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ2'
 * '<S618>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ3'
 * '<S619>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ4'
 * '<S620>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ5'
 * '<S621>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6'
 * '<S622>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeLeft'
 * '<S623>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeRight'
 * '<S624>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LanePosEst'
 * '<S625>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4'
 * '<S626>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_011'
 * '<S627>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_1'
 * '<S628>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3'
 * '<S629>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3/Bendix_Prop2C2_Status_30'
 * '<S630>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1'
 * '<S631>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1/SSI2_031'
 * '<S632>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6'
 * '<S633>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6/PX2_MapLaneEgoLeft'
 * '<S634>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6'
 * '<S635>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6/PX2_MapLaneEgoRight'
 * '<S636>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6'
 * '<S637>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6/PX2_EgoLanePos'
 * '<S638>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4'
 * '<S639>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4/SystemTime_01'
 * '<S640>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5'
 * '<S641>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5/TC1_03_05'
 * '<S642>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1'
 * '<S643>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1/VDC1_0B_'
 * '<S644>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1'
 * '<S645>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1/VDC2_0B1'
 * '<S646>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1'
 * '<S647>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1/VEP1'
 * '<S648>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00'
 * '<S649>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI'
 * '<S650>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/EQ1'
 * '<S651>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/Decode'
 * '<S652>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/serialize_tpdt'
 * '<S653>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero1'
 * '<S654>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero2'
 * '<S655>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop'
 * '<S656>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop1'
 * '<S657>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/If_Then_Else'
 * '<S658>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel'
 * '<S659>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ'
 * '<S660>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ1'
 * '<S661>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ2'
 * '<S662>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ3'
 * '<S663>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ4'
 * '<S664>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ5'
 * '<S665>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/MergeBuses'
 * '<S666>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1'
 * '<S667>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte2'
 * '<S668>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4'
 * '<S669>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6'
 * '<S670>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8'
 * '<S671>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND1'
 * '<S672>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND2'
 * '<S673>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4/OR'
 * '<S674>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6/OR1'
 * '<S675>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8/OR2'
 * '<S676>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/MergeBuses'
 * '<S677>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1'
 * '<S678>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte2'
 * '<S679>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte3'
 * '<S680>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte5'
 * '<S681>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7'
 * '<S682>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte8'
 * '<S683>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND'
 * '<S684>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND1'
 * '<S685>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND2'
 * '<S686>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7/OR'
 * '<S687>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM'
 * '<S688>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS'
 * '<S689>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort'
 * '<S690>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck'
 * '<S691>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS'
 * '<S692>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ'
 * '<S693>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ1'
 * '<S694>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ2'
 * '<S695>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ3'
 * '<S696>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ4'
 * '<S697>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/MergeBuses'
 * '<S698>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte1'
 * '<S699>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3'
 * '<S700>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte4'
 * '<S701>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8'
 * '<S702>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3/OR'
 * '<S703>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8/OR'
 * '<S704>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/MergeBuses'
 * '<S705>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte1'
 * '<S706>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte2'
 * '<S707>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte3'
 * '<S708>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8'
 * '<S709>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8/OR'
 * '<S710>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/MergeBuses'
 * '<S711>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte1'
 * '<S712>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte2'
 * '<S713>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8'
 * '<S714>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8/OR'
 * '<S715>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/MergeBuses'
 * '<S716>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte1'
 * '<S717>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3'
 * '<S718>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte4'
 * '<S719>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8'
 * '<S720>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3/OR'
 * '<S721>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8/OR'
 * '<S722>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/MergeBuses'
 * '<S723>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte1'
 * '<S724>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3'
 * '<S725>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte4'
 * '<S726>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte5'
 * '<S727>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8'
 * '<S728>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3/OR'
 * '<S729>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8/OR'
 * '<S730>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL1'
 * '<S731>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL2'
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL3'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_1'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_3'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_4'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_5'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_6'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_7'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Nonpositive'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Fall Nonpositive/Nonpositive'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Detect Rise Positive/Positive'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/Off Delay/Compare To Zero'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce/On Delay/Compare To Zero'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Fall Nonpositive'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Rise Positive'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Off Delay'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/On Delay'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Fall Nonpositive/Nonpositive'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Detect Rise Positive/Positive'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/Off Delay/Compare To Zero'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Debounce1/On Delay/Compare To Zero'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S804>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S805>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S806>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S807>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S808>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S809>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S810>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S811>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S812>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S813>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S814>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S815>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S816>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S817>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S818>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S819>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S820>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S821>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S822>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S823>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S824>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S825>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S826>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S827>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S828>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S829>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S830>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S831>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S832>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S833>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S834>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S835>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S836>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S837>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S838>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S839>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S840>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S841>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S842>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S843>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S844>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S845>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S846>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S847>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S848>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S849>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S850>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S851>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S852>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S853>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S854>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S1043>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S1044>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1045>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1046>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1047>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1048>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1049>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1050>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1051>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1052>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1053>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1054>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1055>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1056>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1057>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1058>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1059>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1060>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1061>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1062>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1063>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1064>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1065>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1066>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1067>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1068>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1069>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1070>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1071>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1072>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL6'
 * '<S1073>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1074>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1075>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1076>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1077>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1078>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1079>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1080>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1081>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1082>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1083>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1084>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1085>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1086>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1087>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1088>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1089>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1090>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
