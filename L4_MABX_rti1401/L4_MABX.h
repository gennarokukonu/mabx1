/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.845
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Wed Aug 28 10:31:29 2019
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

/* Block signals for system '<S299>/If_Then_Else' */
typedef struct {
  real_T Switch;                       /* '<S307>/Switch' */
} B_If_Then_Else_L4_MABX_mf_T;

/* Block signals for system '<S337>/If_Then_Else' */
typedef struct {
  real_T Vehicle_speed_target;         /* '<S339>/Switch' */
  real_T Vehicle_speed;                /* '<S339>/Switch' */
  real_T Distance_m;                   /* '<S339>/Switch' */
} B_If_Then_Else_L4_MABX_h_T;

/* Block signals for system '<S970>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S994>/Switch' */
  real_T XBRUrgency;                   /* '<S994>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S994>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S994>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S994>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S994>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S994>/Switch' */
} B_If_Then_Else_L4_MABX_d_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S390>/Decoder' */
  real_T SFunction1_o1;                /* '<S713>/S-Function1' */
  real_T SFunction1_o2;                /* '<S713>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S402>/Data Type Conversion2' */
  real_T Xold;                         /* '<S751>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S751>/Init' */
  real_T FixPtSum1;                    /* '<S747>/FixPt Sum1' */
  real_T FixPtSum1_d;                  /* '<S750>/FixPt Sum1' */
  real_T Gain;                         /* '<S402>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S402>/Data Type Conversion9' */
  real_T Xold_g;                       /* '<S743>/FixPt Unit Delay1' */
  real_T Init_d;                       /* '<S743>/Init' */
  real_T FixPtSum1_n;                  /* '<S739>/FixPt Sum1' */
  real_T FixPtSum1_m;                  /* '<S742>/FixPt Sum1' */
  real_T SFunction1_o1_e;              /* '<S714>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S714>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S402>/Data Type Conversion3' */
  real_T Xold_f;                       /* '<S767>/FixPt Unit Delay1' */
  real_T Init_c;                       /* '<S767>/Init' */
  real_T FixPtSum1_h;                  /* '<S763>/FixPt Sum1' */
  real_T FixPtSum1_h1;                 /* '<S766>/FixPt Sum1' */
  real_T Gain1;                        /* '<S402>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S402>/Data Type Conversion1' */
  real_T Xold_p;                       /* '<S759>/FixPt Unit Delay1' */
  real_T Init_dh;                      /* '<S759>/Init' */
  real_T FixPtSum1_hv;                 /* '<S755>/FixPt Sum1' */
  real_T FixPtSum1_d1;                 /* '<S758>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S788>/MinMax1' */
  real_T Saturation;                   /* '<S788>/Saturation' */
  real_T Divide;                       /* '<S788>/Divide' */
  real_T Product2;                     /* '<S788>/Product2' */
  real_T Subtract1;                    /* '<S788>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S788>/Unit_Delay2' */
  real_T Product1;                     /* '<S788>/Product1' */
  real_T Add1;                         /* '<S788>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S721>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_m;                    /* '<S789>/MinMax1' */
  real_T Saturation_d;                 /* '<S789>/Saturation' */
  real_T Divide_m;                     /* '<S789>/Divide' */
  real_T Product2_o;                   /* '<S789>/Product2' */
  real_T Subtract1_i;                  /* '<S789>/Subtract1' */
  real_T Unit_Delay2_h;                /* '<S789>/Unit_Delay2' */
  real_T Product1_a;                   /* '<S789>/Product1' */
  real_T Add1_c;                       /* '<S789>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S721>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S723>/Subtract' */
  real_T Abs;                          /* '<S723>/Abs' */
  real_T Xold_b;                       /* '<S787>/FixPt Unit Delay1' */
  real_T Init_dd;                      /* '<S787>/Init' */
  real_T Xold_h;                       /* '<S786>/FixPt Unit Delay1' */
  real_T Init_d2;                      /* '<S786>/Init' */
  real_T MinMax;                       /* '<S717>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S723>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S718>/Data Type Conversion2' */
  real_T Xold_n;                       /* '<S775>/FixPt Unit Delay1' */
  real_T Init_n;                       /* '<S775>/Init' */
  real_T FixPtSum1_l;                  /* '<S771>/FixPt Sum1' */
  real_T FixPtSum1_c;                  /* '<S774>/FixPt Sum1' */
  real_T SFunction1;                   /* '<S707>/S-Function1' */
  real_T IgnitionKeySwitch_voltage;    /* '<S402>/KL15_Monitor' */
  real_T SPN524_TransSelectedGear;     /* '<S557>/Data Type Conversion1' */
  real_T SPN523_TransCurrentGear;      /* '<S557>/Data Type Conversion2' */
  real_T SPN526_TransActualGearRatio;  /* '<S557>/Data Type Conversion3' */
  real_T SPN514_NominalFrictionPercentTo;/* '<S555>/Data Type Conversion2' */
  real_T SPN2978_EstEngParasiticLossesPe;/* '<S555>/Data Type Conversion1' */
  real_T SPN1760_GrossCombinationVehicle;/* '<S498>/Data Type Conversion1' */
  real_T ACCDistanceAlertSignal;       /* '<S479>/Data Type Conversion12' */
  real_T ForwardCollisionWarning;      /* '<S479>/Data Type Conversion13' */
  real_T SPN544_EngineReferenceTorque; /* '<S518>/Data Type Conversion2' */
  real_T PitchAngleExRange;            /* '<S612>/Data Type Conversion1' */
  real_T PressureP1;                   /* '<S610>/Data Type Conversion7' */
  real_T PressureP4;                   /* '<S610>/Data Type Conversion6' */
  real_T PressureP21;                  /* '<S610>/Data Type Conversion11' */
  real_T PressureP22;                  /* '<S610>/Data Type Conversion12' */
  real_T PressureP42;                  /* '<S610>/Data Type Conversion13' */
  real_T Heartbeat;                    /* '<S385>/Heartbeat' */
  real_T Decoder_o3;                   /* '<S390>/Decoder' */
  real_T UnitDelay;                    /* '<S389>/Unit Delay' */
  real_T Count;                        /* '<S389>/Switch' */
  real_T Latitude_;                    /* '<S607>/Switch' */
  real_T Longitude_;                   /* '<S607>/Switch' */
  real_T SID;                          /* '<S495>/Switch' */
  real_T COGReference;                 /* '<S495>/Switch' */
  real_T CourseOverGround;             /* '<S495>/Switch' */
  real_T SpeedOverGround;              /* '<S495>/Switch' */
  real_T DataTypeConversion[8];        /* '<S1017>/Data Type Conversion' */
  real_T DataTypeConversion_a[8];      /* '<S1018>/Data Type Conversion' */
  real_T TmpRTBAtANDInport1;           /* '<S1033>/Flash' */
  real_T MinMax_i;                     /* '<S805>/MinMax' */
  real_T DataTypeConversion1;          /* '<S805>/Data Type Conversion1' */
  real_T Divide_j;                     /* '<S805>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S805>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1031>/1-D Lookup Table2' */
  real_T Gain1_n;                      /* '<S805>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S805>/Data Type Conversion6' */
  real_T MinMax1_j;                    /* '<S805>/MinMax1' */
  real_T DataTypeConversion2_f;        /* '<S805>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S805>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S805>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1031>/1-D Lookup Table3' */
  real_T Gain_f;                       /* '<S805>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S805>/Data Type Conversion10' */
  real_T SFunction1_o1_f;              /* '<S712>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S712>/S-Function1' */
  real_T ShiftControlDC;               /* '<S402>/ShifterControlDC' */
  real_T Flash;                        /* '<S1033>/Flash' */
  real_T HDOP_;                        /* '<S559>/Switch' */
  real_T DesSteeringAngle;             /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle2;           /* '<S3>/Unit_Delay' */
  real_T SPN1760_GrossCombinationVehic_d;/* '<S3>/Unit_Delay' */
  real_T ACCDistanceAlertSignal_d;     /* '<S3>/Unit_Delay' */
  real_T ForwardCollisionWarning_n;    /* '<S3>/Unit_Delay' */
  real_T SPN544_EngineReferenceTorque_j;/* '<S3>/Unit_Delay' */
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
  real_T PitchAngleExRange_h;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstPosition;       /* '<S3>/Unit_Delay' */
  real_T DesSteeringDistTerm;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstAngle;          /* '<S3>/Unit_Delay' */
  real_T PX2_LanePosEstNumPoints;      /* '<S3>/Unit_Delay' */
  real_T Latitude__e;                  /* '<S3>/Unit_Delay' */
  real_T Longitude__k;                 /* '<S3>/Unit_Delay' */
  real_T HDOP__f;                      /* '<S3>/Unit_Delay' */
  real_T PressureP1_l;                 /* '<S3>/Unit_Delay' */
  real_T PressureP4_a;                 /* '<S3>/Unit_Delay' */
  real_T PressureP21_k;                /* '<S3>/Unit_Delay' */
  real_T numLanePoints;                /* '<S3>/Unit_Delay' */
  real_T PressureP22_g;                /* '<S3>/Unit_Delay' */
  real_T PressureP42_h;                /* '<S3>/Unit_Delay' */
  real_T ReAX_ActualHandwheelPos_f;    /* '<S3>/Unit_Delay' */
  real_T ReAX_EchoedSteerWheelPos_f;   /* '<S3>/Unit_Delay' */
  real_T CurrentAzimuth_rad_l;         /* '<S3>/Unit_Delay' */
  real_T TargetAzimuth_rad_f;          /* '<S3>/Unit_Delay' */
  real_T CurrentVelocity_kph_f;        /* '<S3>/Unit_Delay' */
  real_T TargetVelocity_kph_n;         /* '<S3>/Unit_Delay' */
  real_T rawPositionError;             /* '<S3>/Unit_Delay' */
  real_T Curvature_j;                  /* '<S3>/Unit_Delay' */
  real_T CrosstrackError_o;            /* '<S3>/Unit_Delay' */
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
  real_T S_k;                          /* '<S3>/Unit_Delay' */
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
  real_T previewSteeringAngle_a;       /* '<S3>/Unit_Delay' */
  real_T desHeading;                   /* '<S3>/Unit_Delay' */
  real_T actPreviewDist;               /* '<S3>/Unit_Delay' */
  real_T desPreviewDist;               /* '<S3>/Unit_Delay' */
  real_T mappingSearchCase;            /* '<S3>/Unit_Delay' */
  real_T CurvatureEst;                 /* '<S3>/Unit_Delay' */
  real_T PedalPWMPos;                  /* '<S3>/Unit_Delay' */
  real_T IgnitionKeySwitch_voltage_j;  /* '<S3>/Unit_Delay' */
  real_T BrakeSwitch_f;                /* '<S3>/Unit_Delay' */
  real_T Park_brake_switch;            /* '<S3>/Unit_Delay' */
  real_T CruiseCtrlEnableSwitch;       /* '<S3>/Unit_Delay' */
  real_T FrontAxleSpeed;               /* '<S3>/Unit_Delay' */
  real_T FrontAxleLeftWheelSpeed;      /* '<S3>/Unit_Delay' */
  real_T FrontAxleRightWheelSpeed;     /* '<S3>/Unit_Delay' */
  real_T Stanley_axleAngle;            /* '<S3>/Unit_Delay' */
  real_T EBSBrakeSwitch;               /* '<S3>/Unit_Delay' */
  real_T SPN524_TransSelectedGear_j;   /* '<S3>/Unit_Delay' */
  real_T SPN523_TransCurrentGear_e;    /* '<S3>/Unit_Delay' */
  real_T SPN526_TransActualGearRatio_f;/* '<S3>/Unit_Delay' */
  real_T ActualEngPercentTorque;       /* '<S3>/Unit_Delay' */
  real_T ActlEngPrcntTrqueHighResolution;/* '<S3>/Unit_Delay' */
  real_T EngSpeed;                     /* '<S3>/Unit_Delay' */
  real_T DriversDemandEngPercentTorque;/* '<S3>/Unit_Delay' */
  real_T SPN514_NominalFrictionPercent_k;/* '<S3>/Unit_Delay' */
  real_T SPN2978_EstEngParasiticLosses_n;/* '<S3>/Unit_Delay' */
  real_T DataTypeConversion2_c;        /* '<S512>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S512>/Product' */
  real_T DataTypeConversion_g;         /* '<S404>/Data Type Conversion' */
  real_T DataTypeConversion_e;         /* '<S519>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S519>/Add' */
  real_T DataTypeConversion1_d;        /* '<S404>/Data Type Conversion1' */
  real_T DataTypeConversion2_fo;       /* '<S516>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S516>/Product' */
  real_T DataTypeConversion10;         /* '<S404>/Data Type Conversion10' */
  real_T DataTypeConversion2_g;        /* '<S517>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S517>/Product' */
  real_T DataTypeConversion11;         /* '<S404>/Data Type Conversion11' */
  real_T DataTypeConversion2_a;        /* '<S520>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S520>/Product' */
  real_T DataTypeConversion13;         /* '<S404>/Data Type Conversion13' */
  real_T DataTypeConversion2_i;        /* '<S521>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S521>/Product' */
  real_T DataTypeConversion14;         /* '<S404>/Data Type Conversion14' */
  real_T DataTypeConversion2_n;        /* '<S522>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S522>/Product' */
  real_T DataTypeConversion15;         /* '<S404>/Data Type Conversion15' */
  real_T DataTypeConversion2_d;        /* '<S523>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S523>/Product' */
  real_T DataTypeConversion16;         /* '<S404>/Data Type Conversion16' */
  real_T DataTypeConversion_p;         /* '<S524>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S524>/Add' */
  real_T DataTypeConversion17;         /* '<S404>/Data Type Conversion17' */
  real_T DataTypeConversion_b;         /* '<S525>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S525>/Add' */
  real_T DataTypeConversion18;         /* '<S404>/Data Type Conversion18' */
  real_T DataTypeConversion2_ck;       /* '<S526>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S526>/Product' */
  real_T DataTypeConversion19;         /* '<S404>/Data Type Conversion19' */
  real_T DataTypeConversion2_e;        /* '<S534>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S534>/Product' */
  real_T DataTypeConversion2_j;        /* '<S404>/Data Type Conversion2' */
  real_T DataTypeConversion2_gx;       /* '<S527>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S527>/Product' */
  real_T DataTypeConversion20;         /* '<S404>/Data Type Conversion20' */
  real_T DataTypeConversion_d;         /* '<S535>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S535>/Add' */
  real_T DataTypeConversion3;          /* '<S404>/Data Type Conversion3' */
  real_T DataTypeConversion2_l;        /* '<S536>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S536>/Product' */
  real_T DataTypeConversion4;          /* '<S404>/Data Type Conversion4' */
  real_T DataTypeConversion_ba;        /* '<S537>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S537>/Add' */
  real_T DataTypeConversion5;          /* '<S404>/Data Type Conversion5' */
  real_T DataTypeConversion2_lu;       /* '<S538>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S538>/Product' */
  real_T DataTypeConversion6;          /* '<S404>/Data Type Conversion6' */
  real_T DataTypeConversion_l;         /* '<S513>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S513>/Add' */
  real_T DataTypeConversion7;          /* '<S404>/Data Type Conversion7' */
  real_T DataTypeConversion2_lt;       /* '<S514>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S514>/Product' */
  real_T DataTypeConversion8;          /* '<S404>/Data Type Conversion8' */
  real_T DataTypeConversion_n;         /* '<S515>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S515>/Add' */
  real_T DataTypeConversion9;          /* '<S404>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S461>/Data Type Conversion9' */
  real_T RX_time_f;                    /* '<S407>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S461>/Data Type Conversion10' */
  real_T RX_delta_time_g;              /* '<S407>/Multiport_Switch' */
  real_T RX_time_i;                    /* '<S470>/Data Type Conversion9' */
  real_T RX_time_h;                    /* '<S408>/Multiport_Switch' */
  real_T RX_delta_time_d;              /* '<S470>/Data Type Conversion10' */
  real_T RX_delta_time_k;              /* '<S408>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S479>/Data Type Conversion1' */
  real_T RX_delta_time_kp;             /* '<S479>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S479>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S479>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S479>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S479>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S479>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S479>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S479>/Data Type Conversion7' */
  real_T RX_time_a;                    /* '<S479>/Data Type Conversion9' */
  real_T RX_delta_time_n;              /* '<S481>/Data Type Conversion10' */
  real_T RX_time_hz;                   /* '<S481>/Data Type Conversion9' */
  real_T RX_delta_time_a;              /* '<S483>/Data Type Conversion10' */
  real_T RX_time_ir;                   /* '<S483>/Data Type Conversion9' */
  real_T RX_delta_time_ny;             /* '<S485>/Data Type Conversion10' */
  real_T RX_time_p;                    /* '<S485>/Data Type Conversion9' */
  real_T RX_delta_time_d0;             /* '<S487>/Data Type Conversion10' */
  real_T RX_time_g;                    /* '<S487>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S489>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S489>/Data Type Conversion9' */
  real_T RX_delta_time_ak;             /* '<S491>/Data Type Conversion10' */
  real_T RX_time_b;                    /* '<S491>/Data Type Conversion9' */
  real_T RX_delta_time_ax;             /* '<S493>/Data Type Conversion10' */
  real_T RX_time_pu;                   /* '<S493>/Data Type Conversion9' */
  real_T RX_time_o;                    /* '<S495>/Switch' */
  real_T RX_delta_time_l;              /* '<S495>/Switch' */
  real_T RX_delta_time_f;              /* '<S498>/Data Type Conversion10' */
  real_T RX_time_i0;                   /* '<S498>/Data Type Conversion9' */
  real_T RX_delta_time_fu;             /* '<S500>/Data Type Conversion10' */
  real_T RX_time_l;                    /* '<S500>/Data Type Conversion9' */
  real_T RX_delta_time_lz;             /* '<S502>/Data Type Conversion10' */
  real_T RX_time_ox;                   /* '<S502>/Data Type Conversion9' */
  real_T RX_delta_time_j;              /* '<S504>/Data Type Conversion10' */
  real_T RX_time_fy;                   /* '<S504>/Data Type Conversion9' */
  real_T RX_delta_time_p;              /* '<S551>/Data Type Conversion10' */
  real_T RX_time_hh;                   /* '<S551>/Data Type Conversion9' */
  real_T RX_delta_time_h;              /* '<S553>/Data Type Conversion10' */
  real_T RX_time_d;                    /* '<S553>/Data Type Conversion9' */
  real_T RX_delta_time_hh;             /* '<S555>/Data Type Conversion10' */
  real_T RX_time_m;                    /* '<S555>/Data Type Conversion9' */
  real_T RX_delta_time_c;              /* '<S557>/Data Type Conversion10' */
  real_T RX_time_e;                    /* '<S557>/Data Type Conversion9' */
  real_T SID_i;                        /* '<S559>/Switch' */
  real_T SetMode;                      /* '<S559>/Switch' */
  real_T OpMode;                       /* '<S559>/Switch' */
  real_T VDOP;                         /* '<S559>/Switch' */
  real_T TDOP;                         /* '<S559>/Switch' */
  real_T RX_time_a0;                   /* '<S559>/Switch' */
  real_T RX_delta_time_e;              /* '<S559>/Switch' */
  real_T RX_delta_time_lp;             /* '<S562>/Data Type Conversion10' */
  real_T RX_time_bw;                   /* '<S562>/Data Type Conversion9' */
  real_T RX_time_i1;                   /* '<S429>/Switch' */
  real_T RX_delta_time_kc;             /* '<S429>/Switch' */
  real_T RX_time_au;                   /* '<S592>/Data Type Conversion9' */
  real_T RX_time_iy;                   /* '<S432>/Multiport_Switch' */
  real_T RX_delta_time_pg;             /* '<S592>/Data Type Conversion10' */
  real_T RX_delta_time_e3;             /* '<S432>/Multiport_Switch' */
  real_T RX_delta_time_i;              /* '<S603>/Data Type Conversion1' */
  real_T RX_delta_time_nc;             /* '<S603>/Data Type Conversion10' */
  real_T RX_time_is;                   /* '<S603>/Data Type Conversion3' */
  real_T RX_delta_time_kn;             /* '<S603>/Data Type Conversion4' */
  real_T RX_time_e3;                   /* '<S603>/Data Type Conversion6' */
  real_T RX_time_in;                   /* '<S603>/Data Type Conversion9' */
  real_T RX_time_k;                    /* '<S607>/Switch' */
  real_T RX_delta_time_l3;             /* '<S607>/Switch' */
  real_T XPR1ControlStatus;            /* '<S610>/Data Type Conversion1' */
  real_T RX_delta_time_lk;             /* '<S610>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S610>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S610>/Data Type Conversion3' */
  real_T RX_time_e2;                   /* '<S610>/Data Type Conversion9' */
  real_T RX_delta_time_hr;             /* '<S612>/Data Type Conversion10' */
  real_T RX_time_ly;                   /* '<S612>/Data Type Conversion9' */
  real_T RX_delta_time_ag;             /* '<S614>/Data Type Conversion10' */
  real_T RX_time_n;                    /* '<S614>/Data Type Conversion9' */
  real_T RX_delta_time_fu4;            /* '<S616>/Data Type Conversion10' */
  real_T RX_time_mq;                   /* '<S616>/Data Type Conversion9' */
  real_T RX_delta_time_aq;             /* '<S618>/Data Type Conversion10' */
  real_T RX_time_c;                    /* '<S618>/Data Type Conversion9' */
  real_T RX_delta_time_o;              /* '<S620>/Data Type Conversion10' */
  real_T RX_time_pg;                   /* '<S620>/Data Type Conversion9' */
  real_T RX_delta_time_je;             /* '<S622>/Data Type Conversion10' */
  real_T RX_time_bf;                   /* '<S622>/Data Type Conversion9' */
  real_T RX_delta_time_as;             /* '<S624>/Data Type Conversion10' */
  real_T RX_time_d1;                   /* '<S624>/Data Type Conversion9' */
  real_T RX_delta_time_n2;             /* '<S626>/Data Type Conversion10' */
  real_T RX_time_b4;                   /* '<S626>/Data Type Conversion9' */
  real_T PitchAngleExRange_n;          /* '<S628>/Data Type Conversion1' */
  real_T RX_delta_time_pm;             /* '<S628>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S628>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S628>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S628>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S628>/Data Type Conversion5' */
  real_T RX_time_hj;                   /* '<S628>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S401>/Constant2' */
  real_T DataTypeConversion4_l;        /* '<S643>/Data Type Conversion4' */
  real_T DataTypeConversion1_h;        /* '<S644>/Data Type Conversion1' */
  real_T DataTypeConversion1_b;        /* '<S645>/Data Type Conversion1' */
  real_T RX_time_ol;                   /* '<S569>/Data Type Conversion9' */
  real_T RX_time_ad;                   /* '<S430>/Multiport_Switch' */
  real_T RX_delta_time_ll;             /* '<S569>/Data Type Conversion10' */
  real_T RX_delta_time_kx;             /* '<S430>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S655>/Data Type Conversion5' */
  real_T DataTypeConversion5_j;        /* '<S406>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S656>/Data Type Conversion9' */
  real_T DataTypeConversion6_i;        /* '<S406>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S657>/Data Type Conversion11' */
  real_T DataTypeConversion7_d;        /* '<S406>/Data Type Conversion7' */
  real_T RX_time_pt;                   /* '<S580>/Data Type Conversion9' */
  real_T RX_time_f5;                   /* '<S431>/Multiport_Switch' */
  real_T RX_delta_time_f0;             /* '<S580>/Data Type Conversion10' */
  real_T RX_delta_time_ok;             /* '<S431>/Multiport_Switch' */
  real_T ShiftControlFreq;             /* '<S402>/ShifterControlFreq' */
  real_T SFunction1_l;                 /* '<S705>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S402>/ShifterControlDC2' */
  real_T SFunction1_l5;                /* '<S706>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S402>/ShifterControlDC1' */
  real_T SFunction1_o1_j;              /* '<S1024>/S-Function1' */
  real_T SFunction1_o2_i4;             /* '<S1024>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1024>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1024>/S-Function1' */
  real_T SFunction1_o1_c;              /* '<S1020>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S1020>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S1020>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S1020>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S1019>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S1019>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S1019>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S1019>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S814>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S814>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1009>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1009>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1009>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_j;     /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_c;     /* '<S1009>/Bus Selector' */
  real_T BrakeSwitch_d;                /* '<S1009>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1009>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1009>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1009>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1009>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1009>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1009>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1009>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1010>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1010>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1010>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1010>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1010>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1010>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1010>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1010>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1010>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1010>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1010>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1010>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1010>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1010>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1010>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1010>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1010>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1010>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1010>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1010>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1010>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1010>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1010>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1010>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1010>/Bus Selector' */
  real_T SFunction1_o1_o;              /* '<S1012>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S1012>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S1012>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S1012>/S-Function1' */
  real_T SFunction1_o1_k;              /* '<S1011>/S-Function1' */
  real_T SFunction1_o2_fy;             /* '<S1011>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S1011>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S1011>/S-Function1' */
  real_T DataTypeConversion_nu;        /* '<S998>/Data Type Conversion' */
  real_T DataTypeConversion1_g;        /* '<S998>/Data Type Conversion1' */
  real_T DataTypeConversion2_m;        /* '<S998>/Data Type Conversion2' */
  real_T SFunction1_o1_er;             /* '<S1000>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S1000>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S1000>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S1000>/S-Function1' */
  real_T BrakingPID_Y_b;               /* '<S970>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S970>/Switch1' */
  real_T DataTypeConversion1_i;        /* '<S973>/Data Type Conversion1' */
  real_T DataTypeConversion2_lh;       /* '<S973>/Data Type Conversion2' */
  real_T DataTypeConversion3_d;        /* '<S973>/Data Type Conversion3' */
  real_T DataTypeConversion4_h;        /* '<S973>/Data Type Conversion4' */
  real_T DataTypeConversion5_b;        /* '<S973>/Data Type Conversion5' */
  real_T DataTypeConversion6_iv;       /* '<S973>/Data Type Conversion6' */
  real_T DataTypeConversion7_da;       /* '<S973>/Data Type Conversion7' */
  real_T Saturation_c;                 /* '<S969>/Saturation' */
  real_T BrakingPID_Y_bk;              /* '<S969>/Bus Selector' */
  real_T Gain_c;                       /* '<S969>/Gain' */
  real_T Gain_b;                       /* '<S986>/Gain' */
  real_T Gain1_l;                      /* '<S986>/Gain1' */
  real_T DataTypeConversion1_f[8];     /* '<S967>/Data Type Conversion1' */
  real_T FrontAxleSpeed_h;             /* '<S983>/Bus Selector4' */
  real_T DataTypeConversion_lb;        /* '<S983>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_c; /* '<S983>/Bus Selector4' */
  real_T DataTypeConversion1_k;        /* '<S983>/Data Type Conversion1' */
  real_T SPN1808_YawRate_e;            /* '<S983>/Bus Selector4' */
  real_T DataTypeConversion2_ds;       /* '<S983>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_m;/* '<S983>/Bus Selector4' */
  real_T DataTypeConversion3_b;        /* '<S983>/Data Type Conversion3' */
  real_T DataType;                     /* '<S982>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S968>/Shift_Arithmetic 4' */
  real_T DataType_j;                   /* '<S978>/DataType' */
  real_T DataType_m;                   /* '<S979>/DataType' */
  real_T DataType_p;                   /* '<S980>/DataType' */
  real_T DataType_pb;                  /* '<S981>/DataType' */
  real_T Shift_Arithmetic;             /* '<S968>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S968>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S968>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S968>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S970>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_g;     /* '<S970>/Divide1' */
  real_T SFunction1_o1_d;              /* '<S984>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S984>/S-Function1' */
  real_T SFunction1_o3_g3;             /* '<S984>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S984>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S976>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S976>/S-Function1' */
  real_T SFunction1_o3_ls;             /* '<S976>/S-Function1' */
  real_T SFunction1_o4_mx;             /* '<S976>/S-Function1' */
  real_T SFunction1_o1_a;              /* '<S974>/S-Function1' */
  real_T SFunction1_o2_i2;             /* '<S974>/S-Function1' */
  real_T SFunction1_o3_lq;             /* '<S974>/S-Function1' */
  real_T SFunction1_o4_ds;             /* '<S974>/S-Function1' */
  real_T DataTypeConversion4_n;        /* '<S906>/Data Type Conversion4' */
  real_T DataType_k;                   /* '<S903>/DataType' */
  real_T Shift_Arithmetic2_e;          /* '<S895>/Shift_Arithmetic 2' */
  real_T DataType_c;                   /* '<S901>/DataType' */
  real_T DataType_md;                  /* '<S902>/DataType' */
  real_T DataType_d;                   /* '<S904>/DataType' */
  real_T DataType_i;                   /* '<S905>/DataType' */
  real_T Shift_Arithmetic_j;           /* '<S895>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_b;          /* '<S895>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_p;          /* '<S895>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_o;          /* '<S895>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_gt;       /* '<S914>/Data Type Conversion1' */
  real_T DataTypeConversion2_dq;       /* '<S914>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S914>/Data Type Conversion3' */
  real_T DataTypeConversion4_g;        /* '<S914>/Data Type Conversion4' */
  real_T DataTypeConversion5_e;        /* '<S914>/Data Type Conversion5' */
  real_T DataTypeConversion6_c;        /* '<S914>/Data Type Conversion6' */
  real_T DataTypeConversion7_d3;       /* '<S914>/Data Type Conversion7' */
  real_T DataTypeConversion8_o;        /* '<S914>/Data Type Conversion8' */
  real_T DataType_l;                   /* '<S911>/DataType' */
  real_T Shift_Arithmetic2_k;          /* '<S896>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_k2;       /* '<S915>/Data Type Conversion1' */
  real_T DataTypeConversion2_k;        /* '<S915>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S915>/Data Type Conversion3' */
  real_T DataTypeConversion4_m;        /* '<S915>/Data Type Conversion4' */
  real_T DataTypeConversion5_l;        /* '<S915>/Data Type Conversion5' */
  real_T DataTypeConversion6_o;        /* '<S915>/Data Type Conversion6' */
  real_T DataTypeConversion7_e;        /* '<S915>/Data Type Conversion7' */
  real_T DataTypeConversion8_g;        /* '<S915>/Data Type Conversion8' */
  real_T DataType_f;                   /* '<S912>/DataType' */
  real_T Shift_Arithmetic3_m;          /* '<S896>/Shift_Arithmetic 3' */
  real_T DataType_df;                  /* '<S909>/DataType' */
  real_T DataType_n;                   /* '<S910>/DataType' */
  real_T DataType_a;                   /* '<S913>/DataType' */
  real_T Shift_Arithmetic_c;           /* '<S896>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_e;          /* '<S896>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_on;         /* '<S896>/Shift_Arithmetic 4' */
  real_T Switch;                       /* '<S949>/Switch' */
  real_T Switch2;                      /* '<S959>/Switch2' */
  real_T DataType_p5;                  /* '<S959>/DataType' */
  real_T DataTypeConversion1_p[8];     /* '<S897>/Data Type Conversion1' */
  real_T DataType_g;                   /* '<S926>/DataType' */
  real_T Shift_Arithmetic3_b;          /* '<S898>/Shift_Arithmetic 3' */
  real_T DataType_n4;                  /* '<S923>/DataType' */
  real_T DataType_je;                  /* '<S924>/DataType' */
  real_T DataType_mm;                  /* '<S925>/DataType' */
  real_T DataType_ae;                  /* '<S927>/DataType' */
  real_T Shift_Arithmetic_p;           /* '<S898>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_l;          /* '<S898>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_i;          /* '<S898>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_h;          /* '<S898>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S960>/Product' */
  real_T Switch1;                      /* '<S959>/Switch1' */
  real_T Multiport_Switch;             /* '<S949>/Multiport_Switch' */
  real_T SFunction1_o1_h;              /* '<S929>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S929>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S929>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S929>/S-Function1' */
  real_T SFunction1_o1_o0;             /* '<S921>/S-Function1' */
  real_T SFunction1_o2_gr;             /* '<S921>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S921>/S-Function1' */
  real_T SFunction1_o4_ee;             /* '<S921>/S-Function1' */
  real_T SFunction1_o1_ol;             /* '<S920>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S920>/S-Function1' */
  real_T SFunction1_o3_dr;             /* '<S920>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S920>/S-Function1' */
  real_T SFunction1_o1_ko;             /* '<S917>/S-Function1' */
  real_T SFunction1_o2_cr;             /* '<S917>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S917>/S-Function1' */
  real_T SFunction1_o4_nc;             /* '<S917>/S-Function1' */
  real_T SFunction1_o1_k5;             /* '<S916>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S916>/S-Function1' */
  real_T SFunction1_o3_lo;             /* '<S916>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S916>/S-Function1' */
  real_T SFunction1_o1_aa;             /* '<S907>/S-Function1' */
  real_T SFunction1_o2_ft;             /* '<S907>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S907>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S907>/S-Function1' */
  real_T DataTypeConversion1_db[8];    /* '<S836>/Data Type Conversion1' */
  real_T DataType_fc;                  /* '<S856>/DataType' */
  real_T Shift_Arithmetic2_p;          /* '<S836>/Shift_Arithmetic 2' */
  real_T DataType_c0;                  /* '<S852>/DataType' */
  real_T DataType_o;                   /* '<S857>/DataType' */
  real_T Shift_Arithmetic3_j;          /* '<S836>/Shift_Arithmetic 3' */
  real_T DataType_m0;                  /* '<S858>/DataType' */
  real_T Shift_Arithmetic4_p;          /* '<S836>/Shift_Arithmetic 4' */
  real_T DataType_m0n;                 /* '<S855>/DataType' */
  real_T Shift_Arithmetic_n;           /* '<S836>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_g;          /* '<S836>/Shift_Arithmetic 1' */
  real_T Latitude__m;                  /* '<S893>/Bus Selector' */
  real_T DataTypeConversion_a5;        /* '<S893>/Data Type Conversion' */
  real_T Longitude__d;                 /* '<S893>/Bus Selector' */
  real_T DataTypeConversion1_hz;       /* '<S893>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_g;         /* '<S843>/Bus Selector' */
  real_T ParkingBrakeSwitch_b;         /* '<S843>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_a;      /* '<S843>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_i;  /* '<S843>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_j0;    /* '<S843>/Bus Selector' */
  real_T CruiseCtrlActive_f;           /* '<S843>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_c0;    /* '<S843>/Bus Selector' */
  real_T BrakeSwitch_du;               /* '<S843>/Bus Selector' */
  real_T ClutchSwitch_j;               /* '<S843>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_b;        /* '<S843>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_c;      /* '<S843>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_b;     /* '<S843>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_n; /* '<S843>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_g;         /* '<S843>/Bus Selector' */
  real_T PTOGovernorState_p;           /* '<S843>/Bus Selector' */
  real_T CruiseCtrlStates_i;           /* '<S843>/Bus Selector' */
  real_T EngIdleIncrementSwitch_p;     /* '<S843>/Bus Selector' */
  real_T EngIdleDecrementSwitch_c;     /* '<S843>/Bus Selector' */
  real_T EngTestModeSwitch_g;          /* '<S843>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_c;  /* '<S843>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_g4;        /* '<S844>/Bus Selector' */
  real_T ParkingBrakeSwitch_bg;        /* '<S844>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_a4;     /* '<S844>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_i1; /* '<S844>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_j05;   /* '<S844>/Bus Selector' */
  real_T CruiseCtrlActive_fn;          /* '<S844>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_c0n;   /* '<S844>/Bus Selector' */
  real_T BrakeSwitch_dus;              /* '<S844>/Bus Selector' */
  real_T ClutchSwitch_j0;              /* '<S844>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_bq;       /* '<S844>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_ce;     /* '<S844>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_bx;    /* '<S844>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_nq;/* '<S844>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_gy;        /* '<S844>/Bus Selector' */
  real_T PTOGovernorState_pj;          /* '<S844>/Bus Selector' */
  real_T CruiseCtrlStates_iz;          /* '<S844>/Bus Selector' */
  real_T EngIdleIncrementSwitch_pl;    /* '<S844>/Bus Selector' */
  real_T EngIdleDecrementSwitch_cg;    /* '<S844>/Bus Selector' */
  real_T EngTestModeSwitch_gu;         /* '<S844>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_ca; /* '<S844>/Bus Selector' */
  real_T DataTypeConversion1_c[8];     /* '<S835>/Data Type Conversion1' */
  real_T SID_k;                        /* '<S867>/Bus Selector' */
  real_T DataTypeConversion_ny;        /* '<S867>/Data Type Conversion' */
  real_T COGReference_b;               /* '<S867>/Bus Selector' */
  real_T DataTypeConversion1_gl;       /* '<S867>/Data Type Conversion1' */
  real_T CourseOverGround_c;           /* '<S867>/Bus Selector' */
  real_T DataTypeConversion2_ay;       /* '<S867>/Data Type Conversion2' */
  real_T SpeedOverGround_j;            /* '<S867>/Bus Selector' */
  real_T DataTypeConversion3_dp;       /* '<S867>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S869>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S869>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S869>/Bus Selector' */
  real_T EBSBrakeSwitch_b;             /* '<S869>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S869>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S869>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S869>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S869>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S869>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S869>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S869>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S869>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S869>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S869>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S869>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S869>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S869>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S869>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S869>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S869>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S869>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S869>/Bus Selector' */
  real_T SFunction1_o1_ow;             /* '<S894>/S-Function1' */
  real_T SFunction1_o2_ig;             /* '<S894>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S894>/S-Function1' */
  real_T SFunction1_o4_ey;             /* '<S894>/S-Function1' */
  real_T Unit_Delay;                   /* '<S883>/Unit_Delay' */
  real_T FixPtSum1_k;                  /* '<S891>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S892>/FixPt Switch' */
  real_T SFunction1_o1_m;              /* '<S870>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S870>/S-Function1' */
  real_T SFunction1_o3_c0;             /* '<S870>/S-Function1' */
  real_T SFunction1_o4_be;             /* '<S870>/S-Function1' */
  real_T SFunction1_o1_fj;             /* '<S868>/S-Function1' */
  real_T SFunction1_o2_nt;             /* '<S868>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S868>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S868>/S-Function1' */
  real_T SFunction1_o1_k1;             /* '<S866>/S-Function1' */
  real_T SFunction1_o2_np;             /* '<S866>/S-Function1' */
  real_T SFunction1_o3_lk;             /* '<S866>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S866>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S865>/S-Function1' */
  real_T SFunction1_o2_nb;             /* '<S865>/S-Function1' */
  real_T SFunction1_o3_kv;             /* '<S865>/S-Function1' */
  real_T SFunction1_o4_mi;             /* '<S865>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S850>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S850>/S-Function1' */
  real_T SFunction1_o3_lz;             /* '<S850>/S-Function1' */
  real_T SFunction1_o4_iq;             /* '<S850>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S849>/S-Function1' */
  real_T SFunction1_o2_h3;             /* '<S849>/S-Function1' */
  real_T SFunction1_o3_g0;             /* '<S849>/S-Function1' */
  real_T SFunction1_o4_ht;             /* '<S849>/S-Function1' */
  real_T SFunction1_o1_dm;             /* '<S846>/S-Function1' */
  real_T SFunction1_o2_hi;             /* '<S846>/S-Function1' */
  real_T SFunction1_o3_cz;             /* '<S846>/S-Function1' */
  real_T SFunction1_o4_m1;             /* '<S846>/S-Function1' */
  real_T SFunction1_o1_mt;             /* '<S845>/S-Function1' */
  real_T SFunction1_o2_g3;             /* '<S845>/S-Function1' */
  real_T SFunction1_o3_ft;             /* '<S845>/S-Function1' */
  real_T SFunction1_o4_oo;             /* '<S845>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S824>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S824>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S824>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S824>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S824>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S824>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S824>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S824>/Bus Selector' */
  real_T DataType_jl;                  /* '<S821>/DataType' */
  real_T Shift_Arithmetic2_n;          /* '<S816>/Shift_Arithmetic 2' */
  real_T DataType_ib;                  /* '<S819>/DataType' */
  real_T DataType_j3;                  /* '<S820>/DataType' */
  real_T DataType_cd;                  /* '<S822>/DataType' */
  real_T DataType_jj;                  /* '<S823>/DataType' */
  real_T Shift_Arithmetic_k;           /* '<S816>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_d;          /* '<S816>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_mn;         /* '<S816>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_k;          /* '<S816>/Shift_Arithmetic 4' */
  real_T BarometricPress_c;            /* '<S832>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S832>/Bus Selector' */
  real_T AmbientAirTemp_k;             /* '<S832>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S832>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S832>/Bus Selector' */
  real_T DataType_nq;                  /* '<S829>/DataType' */
  real_T Shift_Arithmetic2_o;          /* '<S817>/Shift_Arithmetic 2' */
  real_T DataType_mt;                  /* '<S827>/DataType' */
  real_T DataType_e;                   /* '<S828>/DataType' */
  real_T DataType_ay;                  /* '<S830>/DataType' */
  real_T DataType_jx;                  /* '<S831>/DataType' */
  real_T Shift_Arithmetic_a;           /* '<S817>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_k;          /* '<S817>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_c;          /* '<S817>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_a;          /* '<S817>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_n1;             /* '<S833>/S-Function1' */
  real_T SFunction1_o2_df;             /* '<S833>/S-Function1' */
  real_T SFunction1_o3_o2;             /* '<S833>/S-Function1' */
  real_T SFunction1_o4_l4;             /* '<S833>/S-Function1' */
  real_T SFunction1_o1_l;              /* '<S825>/S-Function1' */
  real_T SFunction1_o2_h5;             /* '<S825>/S-Function1' */
  real_T SFunction1_o3_hw;             /* '<S825>/S-Function1' */
  real_T SFunction1_o4_gy;             /* '<S825>/S-Function1' */
  real_T Unit_Delay_k;                 /* '<S802>/Unit_Delay' */
  real_T Add;                          /* '<S802>/Add' */
  real_T Xold_g3;                      /* '<S797>/FixPt Unit Delay1' */
  real_T Init_m;                       /* '<S797>/Init' */
  real_T Abs_b;                        /* '<S794>/Abs' */
  real_T Product1_o;                   /* '<S794>/Product1' */
  real_T Add1_n;                       /* '<S794>/Add1' */
  real_T MinMax2;                      /* '<S794>/MinMax2' */
  real_T Abs1;                         /* '<S794>/Abs1' */
  real_T Product2_e;                   /* '<S794>/Product2' */
  real_T Subtract1_e;                  /* '<S794>/Subtract1' */
  real_T MinMax1_h;                    /* '<S794>/MinMax1' */
  real_T Subtract_o;                   /* '<S722>/Subtract' */
  real_T Abs_l;                        /* '<S722>/Abs' */
  real_T timeStamp;                    /* '<S633>/timeStamp' */
  real_T Unit_Delay_l;                 /* '<S633>/Unit_Delay' */
  real_T SFunction1_o1_kt;             /* '<S629>/S-Function1' */
  real_T SFunction1_o2_i3;             /* '<S629>/S-Function1' */
  real_T SFunction1_o3_hm;             /* '<S629>/S-Function1' */
  real_T SFunction1_o4_dsy;            /* '<S629>/S-Function1' */
  real_T SFunction1_o5;                /* '<S629>/S-Function1' */
  real_T SFunction1_o6;                /* '<S629>/S-Function1' */
  real_T SFunction1_o7;                /* '<S629>/S-Function1' */
  real_T SFunction1_o8;                /* '<S629>/S-Function1' */
  real_T SFunction1_o2_e1;             /* '<S627>/S-Function1' */
  real_T SFunction1_o3_ko;             /* '<S627>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S627>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S627>/S-Function1' */
  real_T SFunction1_o8_d;              /* '<S627>/S-Function1' */
  real_T SFunction1_o9;                /* '<S627>/S-Function1' */
  real_T SFunction1_o1_mu;             /* '<S625>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S625>/S-Function1' */
  real_T SFunction1_o3_jl;             /* '<S625>/S-Function1' */
  real_T SFunction1_o4_ne;             /* '<S625>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S625>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S625>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S625>/S-Function1' */
  real_T SFunction1_o8_h;              /* '<S625>/S-Function1' */
  real_T SFunction1_o9_n;              /* '<S625>/S-Function1' */
  real_T SFunction1_o10;               /* '<S625>/S-Function1' */
  real_T SFunction1_o1_cn;             /* '<S623>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S623>/S-Function1' */
  real_T SFunction1_o3_n1;             /* '<S623>/S-Function1' */
  real_T SFunction1_o4_p0;             /* '<S623>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S623>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S623>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S623>/S-Function1' */
  real_T SFunction1_o8_c;              /* '<S623>/S-Function1' */
  real_T SFunction1_o9_e;              /* '<S623>/S-Function1' */
  real_T SFunction1_o10_a;             /* '<S623>/S-Function1' */
  real_T SFunction1_o11;               /* '<S623>/S-Function1' */
  real_T SFunction1_o12;               /* '<S623>/S-Function1' */
  real_T SFunction1_o13;               /* '<S623>/S-Function1' */
  real_T SFunction1_o14;               /* '<S623>/S-Function1' */
  real_T SFunction1_o15;               /* '<S623>/S-Function1' */
  real_T SFunction1_o16;               /* '<S623>/S-Function1' */
  real_T SFunction1_o17;               /* '<S623>/S-Function1' */
  real_T SFunction1_o18;               /* '<S623>/S-Function1' */
  real_T SFunction1_o19;               /* '<S623>/S-Function1' */
  real_T SFunction1_o20;               /* '<S623>/S-Function1' */
  real_T SFunction1_o21;               /* '<S623>/S-Function1' */
  real_T SFunction1_o22;               /* '<S623>/S-Function1' */
  real_T SFunction1_o23;               /* '<S623>/S-Function1' */
  real_T SFunction1_o24;               /* '<S623>/S-Function1' */
  real_T SFunction1_o25;               /* '<S623>/S-Function1' */
  real_T SFunction1_o26;               /* '<S623>/S-Function1' */
  real_T SFunction1_o27;               /* '<S623>/S-Function1' */
  real_T SFunction1_o28;               /* '<S623>/S-Function1' */
  real_T SFunction1_o1_i5;             /* '<S621>/S-Function1' */
  real_T SFunction1_o2_p1;             /* '<S621>/S-Function1' */
  real_T SFunction1_o3_nm;             /* '<S621>/S-Function1' */
  real_T SFunction1_o4_ki;             /* '<S621>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S621>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S621>/S-Function1' */
  real_T SFunction1_o7_li;             /* '<S621>/S-Function1' */
  real_T SFunction1_o1_af;             /* '<S619>/S-Function1' */
  real_T SFunction1_o2_oj;             /* '<S619>/S-Function1' */
  real_T SFunction1_o3_cd;             /* '<S619>/S-Function1' */
  real_T SFunction1_o4_ow;             /* '<S619>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S619>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S619>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S619>/S-Function1' */
  real_T SFunction1_o8_c5;             /* '<S619>/S-Function1' */
  real_T SFunction1_o9_eo;             /* '<S619>/S-Function1' */
  real_T SFunction1_o1_lk;             /* '<S617>/S-Function1' */
  real_T SFunction1_o2_jq;             /* '<S617>/S-Function1' */
  real_T SFunction1_o3_ou;             /* '<S617>/S-Function1' */
  real_T SFunction1_o4_pe;             /* '<S617>/S-Function1' */
  real_T SFunction1_o5_dx;             /* '<S617>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S617>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S617>/S-Function1' */
  real_T SFunction1_o8_i;              /* '<S617>/S-Function1' */
  real_T SFunction1_o9_eu;             /* '<S617>/S-Function1' */
  real_T SFunction1_o1_p2;             /* '<S615>/S-Function1' */
  real_T SFunction1_o2_jj;             /* '<S615>/S-Function1' */
  real_T SFunction1_o3_mi;             /* '<S615>/S-Function1' */
  real_T SFunction1_o4_br;             /* '<S615>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S615>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S615>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S615>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S615>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S615>/S-Function1' */
  real_T SFunction1_o1_cb;             /* '<S613>/S-Function1' */
  real_T SFunction1_o2_eh;             /* '<S613>/S-Function1' */
  real_T SFunction1_o3_cy;             /* '<S613>/S-Function1' */
  real_T SFunction1_o4_k5;             /* '<S613>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S613>/S-Function1' */
  real_T SFunction1_o6_m0;             /* '<S613>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S613>/S-Function1' */
  real_T SFunction1_o8_j;              /* '<S613>/S-Function1' */
  real_T SFunction1_o9_i;              /* '<S613>/S-Function1' */
  real_T SFunction1_o10_l;             /* '<S613>/S-Function1' */
  real_T SFunction1_o1_gv;             /* '<S611>/S-Function1' */
  real_T SFunction1_o2_iz;             /* '<S611>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S611>/S-Function1' */
  real_T SFunction1_o4_kn;             /* '<S611>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S611>/S-Function1' */
  real_T SFunction1_o6_lq;             /* '<S611>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S611>/S-Function1' */
  real_T SFunction1_o8_f4;             /* '<S611>/S-Function1' */
  real_T SFunction1_o9_b;              /* '<S611>/S-Function1' */
  real_T SFunction1_o10_i;             /* '<S611>/S-Function1' */
  real_T SFunction1_o11_l;             /* '<S611>/S-Function1' */
  real_T SFunction1_o12_h;             /* '<S611>/S-Function1' */
  real_T SFunction1_o13_l;             /* '<S611>/S-Function1' */
  real_T RX_time_fk;                   /* '<S607>/Data Type Conversion9' */
  real_T RX_time_i5;                   /* '<S607>/Data Type Conversion2' */
  real_T RX_delta_time_pf;             /* '<S607>/Data Type Conversion10' */
  real_T RX_delta_time_fg;             /* '<S607>/Data Type Conversion1' */
  real_T SFunction1_o1_ck;             /* '<S609>/S-Function1' */
  real_T SFunction1_o2_dn;             /* '<S609>/S-Function1' */
  real_T SFunction1_o3_gm;             /* '<S609>/S-Function1' */
  real_T SFunction1_o4_hc;             /* '<S609>/S-Function1' */
  real_T SFunction1_o5_ib;             /* '<S609>/S-Function1' */
  real_T SFunction1_o1_on;             /* '<S608>/S-Function1' */
  real_T SFunction1_o2_or;             /* '<S608>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S608>/S-Function1' */
  real_T SFunction1_o4_mw;             /* '<S608>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S608>/S-Function1' */
  real_T SFunction1_o1_dc;             /* '<S606>/S-Function1' */
  real_T SFunction1_o2_et;             /* '<S606>/S-Function1' */
  real_T SFunction1_o3_nn;             /* '<S606>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S606>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S606>/S-Function1' */
  real_T SFunction1_o6_eu;             /* '<S606>/S-Function1' */
  real_T SFunction1_o7_lv;             /* '<S606>/S-Function1' */
  real_T SFunction1_o1_mz;             /* '<S605>/S-Function1' */
  real_T SFunction1_o2_bh;             /* '<S605>/S-Function1' */
  real_T SFunction1_o3_ey;             /* '<S605>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S605>/S-Function1' */
  real_T SFunction1_o5_al;             /* '<S605>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S605>/S-Function1' */
  real_T SFunction1_o1_fv;             /* '<S604>/S-Function1' */
  real_T SFunction1_o2_mc;             /* '<S604>/S-Function1' */
  real_T SFunction1_o3_fu;             /* '<S604>/S-Function1' */
  real_T SFunction1_o4_n5;             /* '<S604>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S604>/S-Function1' */
  real_T SFunction1_o6_av;             /* '<S604>/S-Function1' */
  real_T SFunction1_o1_ac;             /* '<S596>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S596>/S-Function1' */
  real_T SFunction1_o3_ff;             /* '<S596>/S-Function1' */
  real_T SFunction1_o4_ah;             /* '<S596>/S-Function1' */
  real_T SFunction1_o5_bs;             /* '<S596>/S-Function1' */
  real_T SFunction1_o1_ih;             /* '<S595>/S-Function1' */
  real_T SFunction1_o2_o0;             /* '<S595>/S-Function1' */
  real_T SFunction1_o3_l3;             /* '<S595>/S-Function1' */
  real_T SFunction1_o4_hx;             /* '<S595>/S-Function1' */
  real_T SFunction1_o5_hc;             /* '<S595>/S-Function1' */
  real_T SFunction1_o1_do;             /* '<S594>/S-Function1' */
  real_T SFunction1_o2_hf;             /* '<S594>/S-Function1' */
  real_T SFunction1_o3_me;             /* '<S594>/S-Function1' */
  real_T SFunction1_o4_g5;             /* '<S594>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S594>/S-Function1' */
  real_T RX_time_no;                   /* '<S590>/Data Type Conversion9' */
  real_T RX_time_c1;                   /* '<S591>/Data Type Conversion9' */
  real_T RX_delta_time_hc;             /* '<S590>/Data Type Conversion10' */
  real_T RX_delta_time_ho;             /* '<S591>/Data Type Conversion10' */
  real_T SFunction1_o1_p3;             /* '<S583>/S-Function1' */
  real_T SFunction1_o2_b1;             /* '<S583>/S-Function1' */
  real_T SFunction1_o3_eu;             /* '<S583>/S-Function1' */
  real_T SFunction1_o4_dw;             /* '<S583>/S-Function1' */
  real_T SFunction1_o5_hz;             /* '<S583>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S583>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S583>/S-Function1' */
  real_T SFunction1_o8_m;              /* '<S583>/S-Function1' */
  real_T SFunction1_o9_bu;             /* '<S583>/S-Function1' */
  real_T SFunction1_o10_e;             /* '<S583>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S583>/S-Function1' */
  real_T SFunction1_o1_m0;             /* '<S582>/S-Function1' */
  real_T SFunction1_o2_bp;             /* '<S582>/S-Function1' */
  real_T SFunction1_o3_kx;             /* '<S582>/S-Function1' */
  real_T SFunction1_o4_lc;             /* '<S582>/S-Function1' */
  real_T SFunction1_o5_oi;             /* '<S582>/S-Function1' */
  real_T SFunction1_o6_f2;             /* '<S582>/S-Function1' */
  real_T SFunction1_o7_dv;             /* '<S582>/S-Function1' */
  real_T SFunction1_o8_k;              /* '<S582>/S-Function1' */
  real_T SFunction1_o9_o;              /* '<S582>/S-Function1' */
  real_T SFunction1_o10_m;             /* '<S582>/S-Function1' */
  real_T SFunction1_o11_k;             /* '<S582>/S-Function1' */
  real_T RX_time_nq;                   /* '<S579>/Data Type Conversion9' */
  real_T RX_delta_time_aj;             /* '<S579>/Data Type Conversion10' */
  real_T SFunction1_o1_cr;             /* '<S572>/S-Function1' */
  real_T SFunction1_o2_bs;             /* '<S572>/S-Function1' */
  real_T SFunction1_o3_g5;             /* '<S572>/S-Function1' */
  real_T SFunction1_o4_ov;             /* '<S572>/S-Function1' */
  real_T SFunction1_o5_ht;             /* '<S572>/S-Function1' */
  real_T SFunction1_o6_o2;             /* '<S572>/S-Function1' */
  real_T SFunction1_o7_or;             /* '<S572>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S572>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S572>/S-Function1' */
  real_T SFunction1_o10_er;            /* '<S572>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S572>/S-Function1' */
  real_T SFunction1_o1_gy;             /* '<S571>/S-Function1' */
  real_T SFunction1_o2_nb5;            /* '<S571>/S-Function1' */
  real_T SFunction1_o3_fa;             /* '<S571>/S-Function1' */
  real_T SFunction1_o4_p4;             /* '<S571>/S-Function1' */
  real_T SFunction1_o5_fv;             /* '<S571>/S-Function1' */
  real_T SFunction1_o6_ot;             /* '<S571>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S571>/S-Function1' */
  real_T SFunction1_o8_iq;             /* '<S571>/S-Function1' */
  real_T SFunction1_o9_bs;             /* '<S571>/S-Function1' */
  real_T SFunction1_o10_b;             /* '<S571>/S-Function1' */
  real_T SFunction1_o11_f;             /* '<S571>/S-Function1' */
  real_T RX_time_it;                   /* '<S568>/Data Type Conversion9' */
  real_T RX_delta_time_gq;             /* '<S568>/Data Type Conversion10' */
  real_T RX_time_gi;                   /* '<S564>/Data Type Conversion9' */
  real_T RX_time_pq;                   /* '<S565>/Data Type Conversion9' */
  real_T RX_delta_time_kz;             /* '<S564>/Data Type Conversion10' */
  real_T RX_delta_time_m;              /* '<S565>/Data Type Conversion10' */
  real_T SFunction1_o1_l4;             /* '<S567>/S-Function1' */
  real_T SFunction1_o2_gu;             /* '<S567>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S567>/S-Function1' */
  real_T SFunction1_o4_gz;             /* '<S567>/S-Function1' */
  real_T SFunction1_o5_pk;             /* '<S567>/S-Function1' */
  real_T SFunction1_o1_kx;             /* '<S566>/S-Function1' */
  real_T SFunction1_o2_lv;             /* '<S566>/S-Function1' */
  real_T SFunction1_o3_oa;             /* '<S566>/S-Function1' */
  real_T SFunction1_o4_km;             /* '<S566>/S-Function1' */
  real_T SFunction1_o5_cm;             /* '<S566>/S-Function1' */
  real_T SFunction1_o1_gh;             /* '<S563>/S-Function1' */
  real_T SFunction1_o2_k5;             /* '<S563>/S-Function1' */
  real_T SFunction1_o3_n1d;            /* '<S563>/S-Function1' */
  real_T SFunction1_o4_gd;             /* '<S563>/S-Function1' */
  real_T SFunction1_o5_hp;             /* '<S563>/S-Function1' */
  real_T SFunction1_o6_l4;             /* '<S563>/S-Function1' */
  real_T SFunction1_o7_lc;             /* '<S563>/S-Function1' */
  real_T RX_time_of;                   /* '<S559>/Data Type Conversion9' */
  real_T RX_time_fz;                   /* '<S559>/Data Type Conversion2' */
  real_T RX_delta_time_ex;             /* '<S559>/Data Type Conversion10' */
  real_T RX_delta_time_cq;             /* '<S559>/Data Type Conversion1' */
  real_T SFunction1_o1_ou;             /* '<S561>/S-Function1' */
  real_T SFunction1_o2_e4;             /* '<S561>/S-Function1' */
  real_T SFunction1_o3_nc;             /* '<S561>/S-Function1' */
  real_T SFunction1_o4_nk;             /* '<S561>/S-Function1' */
  real_T SFunction1_o5_fr;             /* '<S561>/S-Function1' */
  real_T SFunction1_o6_mi;             /* '<S561>/S-Function1' */
  real_T SFunction1_o7_eh;             /* '<S561>/S-Function1' */
  real_T SFunction1_o8_mx;             /* '<S561>/S-Function1' */
  real_T SFunction1_o9_ie;             /* '<S561>/S-Function1' */
  real_T SFunction1_o1_hz;             /* '<S560>/S-Function1' */
  real_T SFunction1_o2_a5;             /* '<S560>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S560>/S-Function1' */
  real_T SFunction1_o4_h5;             /* '<S560>/S-Function1' */
  real_T SFunction1_o5_gi;             /* '<S560>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S560>/S-Function1' */
  real_T SFunction1_o7_ob;             /* '<S560>/S-Function1' */
  real_T SFunction1_o8_h0;             /* '<S560>/S-Function1' */
  real_T SFunction1_o9_nr;             /* '<S560>/S-Function1' */
  real_T SFunction1_o1_gk;             /* '<S558>/S-Function1' */
  real_T SFunction1_o2_kj;             /* '<S558>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S558>/S-Function1' */
  real_T SFunction1_o4_lu;             /* '<S558>/S-Function1' */
  real_T SFunction1_o5_kr;             /* '<S558>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S558>/S-Function1' */
  real_T SFunction1_o1_ia;             /* '<S556>/S-Function1' */
  real_T SFunction1_o2_gg;             /* '<S556>/S-Function1' */
  real_T SFunction1_o3_lh;             /* '<S556>/S-Function1' */
  real_T SFunction1_o4_im;             /* '<S556>/S-Function1' */
  real_T SFunction1_o5_fy;             /* '<S556>/S-Function1' */
  real_T SFunction1_o1_dw;             /* '<S554>/S-Function1' */
  real_T SFunction1_o2_px;             /* '<S554>/S-Function1' */
  real_T SFunction1_o3_fk;             /* '<S554>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S554>/S-Function1' */
  real_T SFunction1_o5_cd;             /* '<S554>/S-Function1' */
  real_T SFunction1_o6_fq;             /* '<S554>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S554>/S-Function1' */
  real_T SFunction1_o8_is;             /* '<S554>/S-Function1' */
  real_T SFunction1_o9_l;              /* '<S554>/S-Function1' */
  real_T SFunction1_o10_ed;            /* '<S554>/S-Function1' */
  real_T SFunction1_o11_j;             /* '<S554>/S-Function1' */
  real_T SFunction1_o12_i;             /* '<S554>/S-Function1' */
  real_T SFunction1_o13_g;             /* '<S554>/S-Function1' */
  real_T SFunction1_o14_e;             /* '<S554>/S-Function1' */
  real_T SFunction1_o15_i;             /* '<S554>/S-Function1' */
  real_T SFunction1_o16_p;             /* '<S554>/S-Function1' */
  real_T SFunction1_o17_p;             /* '<S554>/S-Function1' */
  real_T SFunction1_o1_kp;             /* '<S552>/S-Function1' */
  real_T SFunction1_o2_pk;             /* '<S552>/S-Function1' */
  real_T SFunction1_o3_el;             /* '<S552>/S-Function1' */
  real_T SFunction1_o4_e1;             /* '<S552>/S-Function1' */
  real_T SFunction1_o5_aw;             /* '<S552>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S552>/S-Function1' */
  real_T SFunction1_o7_a0;             /* '<S552>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S552>/S-Function1' */
  real_T SFunction1_o9_eh;             /* '<S552>/S-Function1' */
  real_T SFunction1_o10_bm;            /* '<S552>/S-Function1' */
  real_T SFunction1_o11_ai;            /* '<S552>/S-Function1' */
  real_T timeStamp_i;                  /* '<S509>/timeStamp' */
  real_T Unit_Delay_e;                 /* '<S509>/Unit_Delay' */
  real_T SFunction1_o1_c4;             /* '<S505>/S-Function1' */
  real_T SFunction1_o2_p3;             /* '<S505>/S-Function1' */
  real_T SFunction1_o3_id;             /* '<S505>/S-Function1' */
  real_T SFunction1_o4_ln;             /* '<S505>/S-Function1' */
  real_T SFunction1_o5_pl;             /* '<S505>/S-Function1' */
  real_T SFunction1_o6_au;             /* '<S505>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S505>/S-Function1' */
  real_T SFunction1_o8_l;              /* '<S505>/S-Function1' */
  real_T SFunction1_o9_p;              /* '<S505>/S-Function1' */
  real_T SFunction1_o10_p;             /* '<S505>/S-Function1' */
  real_T SFunction1_o1_bs;             /* '<S503>/S-Function1' */
  real_T SFunction1_o2_m1;             /* '<S503>/S-Function1' */
  real_T SFunction1_o3_jx;             /* '<S503>/S-Function1' */
  real_T SFunction1_o4_kq;             /* '<S503>/S-Function1' */
  real_T SFunction1_o5_cn;             /* '<S503>/S-Function1' */
  real_T SFunction1_o6_m4;             /* '<S503>/S-Function1' */
  real_T SFunction1_o7_ix;             /* '<S503>/S-Function1' */
  real_T SFunction1_o8_jo;             /* '<S503>/S-Function1' */
  real_T SFunction1_o9_h;              /* '<S503>/S-Function1' */
  real_T SFunction1_o10_k;             /* '<S503>/S-Function1' */
  real_T SFunction1_o11_c;             /* '<S503>/S-Function1' */
  real_T SFunction1_o12_o;             /* '<S503>/S-Function1' */
  real_T SFunction1_o13_f;             /* '<S503>/S-Function1' */
  real_T SFunction1_o14_o;             /* '<S503>/S-Function1' */
  real_T SFunction1_o15_g;             /* '<S503>/S-Function1' */
  real_T SFunction1_o16_j;             /* '<S503>/S-Function1' */
  real_T SFunction1_o17_m;             /* '<S503>/S-Function1' */
  real_T SFunction1_o18_o;             /* '<S503>/S-Function1' */
  real_T SFunction1_o19_f;             /* '<S503>/S-Function1' */
  real_T SFunction1_o20_p;             /* '<S503>/S-Function1' */
  real_T SFunction1_o21_o;             /* '<S503>/S-Function1' */
  real_T SFunction1_o22_d;             /* '<S503>/S-Function1' */
  real_T SFunction1_o23_m;             /* '<S503>/S-Function1' */
  real_T SFunction1_o24_i;             /* '<S503>/S-Function1' */
  real_T SFunction1_o25_k;             /* '<S503>/S-Function1' */
  real_T SFunction1_o1_fc;             /* '<S501>/S-Function1' */
  real_T SFunction1_o2_f1;             /* '<S501>/S-Function1' */
  real_T SFunction1_o3_hv;             /* '<S501>/S-Function1' */
  real_T SFunction1_o4_kb;             /* '<S501>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S501>/S-Function1' */
  real_T SFunction1_o6_lb;             /* '<S501>/S-Function1' */
  real_T SFunction1_o7_gb;             /* '<S501>/S-Function1' */
  real_T SFunction1_o8_mu;             /* '<S501>/S-Function1' */
  real_T SFunction1_o9_no;             /* '<S501>/S-Function1' */
  real_T SFunction1_o10_mw;            /* '<S501>/S-Function1' */
  real_T SFunction1_o11_m;             /* '<S501>/S-Function1' */
  real_T SFunction1_o12_n;             /* '<S501>/S-Function1' */
  real_T SFunction1_o13_d;             /* '<S501>/S-Function1' */
  real_T SFunction1_o14_a;             /* '<S501>/S-Function1' */
  real_T SFunction1_o15_m;             /* '<S501>/S-Function1' */
  real_T SFunction1_o16_f;             /* '<S501>/S-Function1' */
  real_T SFunction1_o17_d;             /* '<S501>/S-Function1' */
  real_T SFunction1_o18_f;             /* '<S501>/S-Function1' */
  real_T SFunction1_o19_k;             /* '<S501>/S-Function1' */
  real_T SFunction1_o20_e;             /* '<S501>/S-Function1' */
  real_T SFunction1_o21_d;             /* '<S501>/S-Function1' */
  real_T SFunction1_o22_a;             /* '<S501>/S-Function1' */
  real_T SFunction1_o23_f;             /* '<S501>/S-Function1' */
  real_T SFunction1_o24_it;            /* '<S501>/S-Function1' */
  real_T SFunction1_o25_a;             /* '<S501>/S-Function1' */
  real_T SFunction1_o1_it;             /* '<S499>/S-Function1' */
  real_T SFunction1_o2_dh;             /* '<S499>/S-Function1' */
  real_T SFunction1_o3_o5;             /* '<S499>/S-Function1' */
  real_T SFunction1_o4_er;             /* '<S499>/S-Function1' */
  real_T RX_time_oc;                   /* '<S495>/Data Type Conversion9' */
  real_T RX_time_hn;                   /* '<S495>/Data Type Conversion2' */
  real_T RX_delta_time_ih;             /* '<S495>/Data Type Conversion10' */
  real_T RX_delta_time_hb;             /* '<S495>/Data Type Conversion3' */
  real_T SFunction1_o1_az;             /* '<S497>/S-Function1' */
  real_T SFunction1_o2_ftn;            /* '<S497>/S-Function1' */
  real_T SFunction1_o3_gj;             /* '<S497>/S-Function1' */
  real_T SFunction1_o4_jh;             /* '<S497>/S-Function1' */
  real_T SFunction1_o5_i2;             /* '<S497>/S-Function1' */
  real_T SFunction1_o6_pz;             /* '<S497>/S-Function1' */
  real_T SFunction1_o7_dq;             /* '<S497>/S-Function1' */
  real_T SFunction1_o1_nr;             /* '<S496>/S-Function1' */
  real_T SFunction1_o2_j5;             /* '<S496>/S-Function1' */
  real_T SFunction1_o3_no;             /* '<S496>/S-Function1' */
  real_T SFunction1_o4_dm;             /* '<S496>/S-Function1' */
  real_T SFunction1_o5_p0;             /* '<S496>/S-Function1' */
  real_T SFunction1_o6_jb;             /* '<S496>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S496>/S-Function1' */
  real_T SFunction1_o1_fy;             /* '<S494>/S-Function1' */
  real_T SFunction1_o2_ez;             /* '<S494>/S-Function1' */
  real_T SFunction1_o3_jq;             /* '<S494>/S-Function1' */
  real_T SFunction1_o4_dz;             /* '<S494>/S-Function1' */
  real_T SFunction1_o5_oc;             /* '<S494>/S-Function1' */
  real_T SFunction1_o6_he;             /* '<S494>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S494>/S-Function1' */
  real_T SFunction1_o8_jt;             /* '<S494>/S-Function1' */
  real_T SFunction1_o9_lc;             /* '<S494>/S-Function1' */
  real_T SFunction1_o10_lg;            /* '<S494>/S-Function1' */
  real_T SFunction1_o11_mn;            /* '<S494>/S-Function1' */
  real_T SFunction1_o12_ir;            /* '<S494>/S-Function1' */
  real_T SFunction1_o13_fh;            /* '<S494>/S-Function1' */
  real_T SFunction1_o14_l;             /* '<S494>/S-Function1' */
  real_T SFunction1_o15_a;             /* '<S494>/S-Function1' */
  real_T SFunction1_o16_m;             /* '<S494>/S-Function1' */
  real_T SFunction1_o17_d2;            /* '<S494>/S-Function1' */
  real_T SFunction1_o18_m;             /* '<S494>/S-Function1' */
  real_T SFunction1_o19_m;             /* '<S494>/S-Function1' */
  real_T SFunction1_o20_f;             /* '<S494>/S-Function1' */
  real_T SFunction1_o21_p;             /* '<S494>/S-Function1' */
  real_T SFunction1_o22_h;             /* '<S494>/S-Function1' */
  real_T SFunction1_o23_g;             /* '<S494>/S-Function1' */
  real_T SFunction1_o1_kc;             /* '<S492>/S-Function1' */
  real_T SFunction1_o2_cc;             /* '<S492>/S-Function1' */
  real_T SFunction1_o3_bu;             /* '<S492>/S-Function1' */
  real_T SFunction1_o4_ku;             /* '<S492>/S-Function1' */
  real_T SFunction1_o6_dq;             /* '<S492>/S-Function1' */
  real_T SFunction1_o7_kr;             /* '<S492>/S-Function1' */
  real_T SFunction1_o9_a;              /* '<S492>/S-Function1' */
  real_T SFunction1_o10_eg;            /* '<S492>/S-Function1' */
  real_T SFunction1_o11_d;             /* '<S492>/S-Function1' */
  real_T SFunction1_o12_d;             /* '<S492>/S-Function1' */
  real_T SFunction1_o13_fk;            /* '<S492>/S-Function1' */
  real_T SFunction1_o14_m;             /* '<S492>/S-Function1' */
  real_T SFunction1_o15_p;             /* '<S492>/S-Function1' */
  real_T SFunction1_o16_c;             /* '<S492>/S-Function1' */
  real_T SFunction1_o17_b;             /* '<S492>/S-Function1' */
  real_T SFunction1_o18_d;             /* '<S492>/S-Function1' */
  real_T SFunction1_o19_c;             /* '<S492>/S-Function1' */
  real_T SFunction1_o20_o;             /* '<S492>/S-Function1' */
  real_T SFunction1_o21_a;             /* '<S492>/S-Function1' */
  real_T SFunction1_o22_f;             /* '<S492>/S-Function1' */
  real_T SFunction1_o23_j;             /* '<S492>/S-Function1' */
  real_T SFunction1_o1_bd;             /* '<S490>/S-Function1' */
  real_T SFunction1_o2_cv;             /* '<S490>/S-Function1' */
  real_T SFunction1_o3_c4;             /* '<S490>/S-Function1' */
  real_T SFunction1_o4_dl;             /* '<S490>/S-Function1' */
  real_T SFunction1_o5_at;             /* '<S490>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S490>/S-Function1' */
  real_T SFunction1_o7_gr;             /* '<S490>/S-Function1' */
  real_T SFunction1_o8_cf;             /* '<S490>/S-Function1' */
  real_T SFunction1_o9_ba;             /* '<S490>/S-Function1' */
  real_T SFunction1_o10_g;             /* '<S490>/S-Function1' */
  real_T SFunction1_o11_h;             /* '<S490>/S-Function1' */
  real_T SFunction1_o12_hk;            /* '<S490>/S-Function1' */
  real_T SFunction1_o13_a;             /* '<S490>/S-Function1' */
  real_T SFunction1_o14_g;             /* '<S490>/S-Function1' */
  real_T SFunction1_o15_c;             /* '<S490>/S-Function1' */
  real_T SFunction1_o16_o;             /* '<S490>/S-Function1' */
  real_T SFunction1_o17_l;             /* '<S490>/S-Function1' */
  real_T SFunction1_o18_c;             /* '<S490>/S-Function1' */
  real_T SFunction1_o19_l;             /* '<S490>/S-Function1' */
  real_T SFunction1_o20_m;             /* '<S490>/S-Function1' */
  real_T SFunction1_o21_e;             /* '<S490>/S-Function1' */
  real_T SFunction1_o22_df;            /* '<S490>/S-Function1' */
  real_T SFunction1_o23_h;             /* '<S490>/S-Function1' */
  real_T SFunction1_o24_h;             /* '<S490>/S-Function1' */
  real_T SFunction1_o25_f;             /* '<S490>/S-Function1' */
  real_T SFunction1_o26_m;             /* '<S490>/S-Function1' */
  real_T SFunction1_o27_a;             /* '<S490>/S-Function1' */
  real_T SFunction1_o28_m;             /* '<S490>/S-Function1' */
  real_T SFunction1_o29;               /* '<S490>/S-Function1' */
  real_T SFunction1_o30;               /* '<S490>/S-Function1' */
  real_T SFunction1_o31;               /* '<S490>/S-Function1' */
  real_T SFunction1_o32;               /* '<S490>/S-Function1' */
  real_T SFunction1_o33;               /* '<S490>/S-Function1' */
  real_T SFunction1_o34;               /* '<S490>/S-Function1' */
  real_T SFunction1_o35;               /* '<S490>/S-Function1' */
  real_T SFunction1_o36;               /* '<S490>/S-Function1' */
  real_T SFunction1_o37;               /* '<S490>/S-Function1' */
  real_T SFunction1_o38;               /* '<S490>/S-Function1' */
  real_T SFunction1_o39;               /* '<S490>/S-Function1' */
  real_T SFunction1_o40;               /* '<S490>/S-Function1' */
  real_T SFunction1_o41;               /* '<S490>/S-Function1' */
  real_T SFunction1_o42;               /* '<S490>/S-Function1' */
  real_T SFunction1_o43;               /* '<S490>/S-Function1' */
  real_T SFunction1_o44;               /* '<S490>/S-Function1' */
  real_T SFunction1_o45;               /* '<S490>/S-Function1' */
  real_T SFunction1_o46;               /* '<S490>/S-Function1' */
  real_T SFunction1_o47;               /* '<S490>/S-Function1' */
  real_T SFunction1_o48;               /* '<S490>/S-Function1' */
  real_T SFunction1_o49;               /* '<S490>/S-Function1' */
  real_T SFunction1_o50;               /* '<S490>/S-Function1' */
  real_T SFunction1_o51;               /* '<S490>/S-Function1' */
  real_T SFunction1_o52;               /* '<S490>/S-Function1' */
  real_T SFunction1_o53;               /* '<S490>/S-Function1' */
  real_T SFunction1_o54;               /* '<S490>/S-Function1' */
  real_T SFunction1_o55;               /* '<S490>/S-Function1' */
  real_T SFunction1_o56;               /* '<S490>/S-Function1' */
  real_T SFunction1_o57;               /* '<S490>/S-Function1' */
  real_T SFunction1_o58;               /* '<S490>/S-Function1' */
  real_T SFunction1_o59;               /* '<S490>/S-Function1' */
  real_T SFunction1_o60;               /* '<S490>/S-Function1' */
  real_T SFunction1_o61;               /* '<S490>/S-Function1' */
  real_T SFunction1_o62;               /* '<S490>/S-Function1' */
  real_T SFunction1_o63;               /* '<S490>/S-Function1' */
  real_T SFunction1_o64;               /* '<S490>/S-Function1' */
  real_T SFunction1_o65;               /* '<S490>/S-Function1' */
  real_T SFunction1_o66;               /* '<S490>/S-Function1' */
  real_T SFunction1_o67;               /* '<S490>/S-Function1' */
  real_T SFunction1_o68;               /* '<S490>/S-Function1' */
  real_T SFunction1_o69;               /* '<S490>/S-Function1' */
  real_T SFunction1_o70;               /* '<S490>/S-Function1' */
  real_T SFunction1_o71;               /* '<S490>/S-Function1' */
  real_T SFunction1_o72;               /* '<S490>/S-Function1' */
  real_T SFunction1_o73;               /* '<S490>/S-Function1' */
  real_T SFunction1_o74;               /* '<S490>/S-Function1' */
  real_T SFunction1_o1_dt;             /* '<S488>/S-Function1' */
  real_T SFunction1_o2_kr;             /* '<S488>/S-Function1' */
  real_T SFunction1_o3_br;             /* '<S488>/S-Function1' */
  real_T SFunction1_o4_m3;             /* '<S488>/S-Function1' */
  real_T SFunction1_o5_hzp;            /* '<S488>/S-Function1' */
  real_T SFunction1_o1_afv;            /* '<S486>/S-Function1' */
  real_T SFunction1_o2_dd;             /* '<S486>/S-Function1' */
  real_T SFunction1_o3_ng;             /* '<S486>/S-Function1' */
  real_T SFunction1_o4_dd;             /* '<S486>/S-Function1' */
  real_T SFunction1_o5_c5;             /* '<S486>/S-Function1' */
  real_T SFunction1_o6_nu;             /* '<S486>/S-Function1' */
  real_T SFunction1_o7_lg;             /* '<S486>/S-Function1' */
  real_T SFunction1_o8_fw;             /* '<S486>/S-Function1' */
  real_T SFunction1_o1_of;             /* '<S484>/S-Function1' */
  real_T SFunction1_o2_j3;             /* '<S484>/S-Function1' */
  real_T SFunction1_o3_ll;             /* '<S484>/S-Function1' */
  real_T SFunction1_o4_ig;             /* '<S484>/S-Function1' */
  real_T SFunction1_o5_el;             /* '<S484>/S-Function1' */
  real_T SFunction1_o6_mn;             /* '<S484>/S-Function1' */
  real_T SFunction1_o7_lz;             /* '<S484>/S-Function1' */
  real_T SFunction1_o8_p5;             /* '<S484>/S-Function1' */
  real_T SFunction1_o9_ni;             /* '<S484>/S-Function1' */
  real_T SFunction1_o10_ll;            /* '<S484>/S-Function1' */
  real_T SFunction1_o11_o;             /* '<S484>/S-Function1' */
  real_T SFunction1_o1_db;             /* '<S482>/S-Function1' */
  real_T SFunction1_o2_be;             /* '<S482>/S-Function1' */
  real_T SFunction1_o3_f5;             /* '<S482>/S-Function1' */
  real_T SFunction1_o4_aw;             /* '<S482>/S-Function1' */
  real_T SFunction1_o5_gr;             /* '<S482>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S482>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S482>/S-Function1' */
  real_T SFunction1_o8_ll;             /* '<S482>/S-Function1' */
  real_T SFunction1_o1_p1;             /* '<S480>/S-Function1' */
  real_T SFunction1_o2_jv;             /* '<S480>/S-Function1' */
  real_T SFunction1_o3_he;             /* '<S480>/S-Function1' */
  real_T SFunction1_o4_ir;             /* '<S480>/S-Function1' */
  real_T SFunction1_o5_b2;             /* '<S480>/S-Function1' */
  real_T SFunction1_o6_cb;             /* '<S480>/S-Function1' */
  real_T SFunction1_o7_bf;             /* '<S480>/S-Function1' */
  real_T SFunction1_o8_hg;             /* '<S480>/S-Function1' */
  real_T SFunction1_o9_g;              /* '<S480>/S-Function1' */
  real_T SFunction1_o10_ih;            /* '<S480>/S-Function1' */
  real_T SFunction1_o11_p;             /* '<S480>/S-Function1' */
  real_T SFunction1_o12_db;            /* '<S480>/S-Function1' */
  real_T SFunction1_o13_k;             /* '<S480>/S-Function1' */
  real_T SFunction1_o1_bm;             /* '<S472>/S-Function1' */
  real_T SFunction1_o2_dj;             /* '<S472>/S-Function1' */
  real_T SFunction1_o3_px;             /* '<S472>/S-Function1' */
  real_T SFunction1_o4_bh;             /* '<S472>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S472>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S472>/S-Function1' */
  real_T SFunction1_o7_gk;             /* '<S472>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S472>/S-Function1' */
  real_T SFunction1_o9_j;              /* '<S472>/S-Function1' */
  real_T SFunction1_o10_b4;            /* '<S472>/S-Function1' */
  real_T SFunction1_o11_pn;            /* '<S472>/S-Function1' */
  real_T SFunction1_o1_ax;             /* '<S463>/S-Function1' */
  real_T SFunction1_o2_ln;             /* '<S463>/S-Function1' */
  real_T SFunction1_o3_a2;             /* '<S463>/S-Function1' */
  real_T SFunction1_o4_he;             /* '<S463>/S-Function1' */
  real_T SFunction1_o5_cb;             /* '<S463>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S463>/S-Function1' */
  real_T SFunction1_o7_j0;             /* '<S463>/S-Function1' */
  real_T SFunction1_o8_kq;             /* '<S463>/S-Function1' */
  real_T SFunction1_o9_ph;             /* '<S463>/S-Function1' */
  real_T SFunction1_o10_kx;            /* '<S463>/S-Function1' */
  real_T SFunction1_o11_jf;            /* '<S463>/S-Function1' */
  real_T Sum;                          /* '<S389>/Sum' */
  real_T for_logging;                  /* '<S384>/for_logging' */
  real_T for_logging1;                 /* '<S384>/for_logging1' */
  real_T ms_to_kmh;                    /* '<S384>/m//s_to_km//h' */
  real_T ms_to_kmh_2;                  /* '<S384>/m//s_to_km//h_2' */
  real_T for_logging2;                 /* '<S384>/for_logging2' */
  real_T for_logging3;                 /* '<S384>/for_logging3' */
  real_T for_logging4;                 /* '<S384>/for_logging4' */
  real_T for_logging5;                 /* '<S384>/for_logging5' */
  real_T for_logging6;                 /* '<S384>/for_logging6' */
  real_T HDOP__f1;                     /* '<S382>/Bus Selector1' */
  real_T FrontAxleSpeed_d;             /* '<S382>/Bus Selector4' */
  real_T kph2mps;                      /* '<S382>/kph2mps' */
  real_T Product_c;                    /* '<S382>/Product' */
  real_T FrontAxleSpeed_dv;            /* '<S382>/Bus Selector4' */
  real_T kph2mps1;                     /* '<S382>/kph2mps1' */
  real_T Product1_h;                   /* '<S382>/Product1' */
  real_T UnitDelay1;                   /* '<S382>/Unit Delay1' */
  real_T InitialHeading;               /* '<S383>/InitialHeading' */
  real_T InitialPosition;              /* '<S383>/InitialPosition' */
  real_T InitialXPosition;             /* '<S383>/InitialXPosition' */
  real_T InitialYPosition;             /* '<S383>/InitialYPosition' */
  real_T FrontAxleSpeed_dvq;           /* '<S71>/Bus Selector' */
  real_T kph2ms;                       /* '<S71>/kph2ms' */
  real_T LongitudnalPosition;          /* '<S383>/LongitudnalPosition' */
  real_T TmpRTBAtVehHeadingInport1;    /* '<S383>/In2' */
  real_T TrigonometricFunction;        /* '<S383>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S383>/Trigonometric Function1' */
  real_T VehHeading;                   /* '<S383>/VehHeading' */
  real_T XPosition;                    /* '<S383>/XPosition' */
  real_T YPosition;                    /* '<S383>/YPosition' */
  real_T DataTypeConversion1_ht;       /* '<S83>/Data Type Conversion1' */
  real_T uDLookupTable;                /* '<S83>/2-D Lookup Table' */
  real_T DataTypeConversion5_o;        /* '<S77>/Data Type Conversion5' */
  real_T distanceSpdTarget_e;          /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_target_o;       /* '<S81>/Multiport Switch' */
  real_T VSPD_TARGET_KPH_APV_g;        /* '<S81>/Signal Conversion16' */
  real_T VSPD_HYST_KPH_APV_f;          /* '<S81>/Saturation9' */
  real_T Add_k;                        /* '<S103>/Add' */
  real_T VSPD_BRAKE_STOP_THRESH_KPH_AP_b;/* '<S81>/Saturation1' */
  real_T DataTypeConversion4_i;        /* '<S79>/Data Type Conversion4' */
  real_T ThrottlePID_Y_m;              /* '<S79>/Switch' */
  real_T MultiportSwitch;              /* '<S83>/Multiport Switch' */
  real_T DataTypeConversion1_n;        /* '<S82>/Data Type Conversion1' */
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
  real_T Unit_Delay_k4;                /* '<S334>/Unit_Delay' */
  real_T MinMax_d;                     /* '<S334>/MinMax' */
  real_T Xold_hq;                      /* '<S381>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S381>/Init' */
  real_T Abs_e;                        /* '<S377>/Abs' */
  real_T DigitalClock;                 /* '<S378>/Digital Clock' */
  real_T Unit_Delay_d;                 /* '<S378>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S378>/Subtract' */
  real_T Product1_hp;                  /* '<S377>/Product1' */
  real_T Add1_nd;                      /* '<S377>/Add1' */
  real_T MinMax2_g;                    /* '<S377>/MinMax2' */
  real_T Abs1_h;                       /* '<S377>/Abs1' */
  real_T Product2_c;                   /* '<S377>/Product2' */
  real_T Subtract1_n;                  /* '<S377>/Subtract1' */
  real_T MinMax1_hj;                   /* '<S377>/MinMax1' */
  real_T Unit_Delay_n;                 /* '<S332>/Unit_Delay' */
  real_T MinMax_n;                     /* '<S332>/MinMax' */
  real_T Xold_fv;                      /* '<S370>/FixPt Unit Delay1' */
  real_T Init_b;                       /* '<S370>/Init' */
  real_T Abs_ez;                       /* '<S366>/Abs' */
  real_T DigitalClock_b;               /* '<S367>/Digital Clock' */
  real_T Unit_Delay_nx;                /* '<S367>/Unit_Delay' */
  real_T Subtract_i;                   /* '<S367>/Subtract' */
  real_T Product1_i;                   /* '<S366>/Product1' */
  real_T Add1_b;                       /* '<S366>/Add1' */
  real_T MinMax2_k;                    /* '<S366>/MinMax2' */
  real_T Abs1_c;                       /* '<S366>/Abs1' */
  real_T Product2_n;                   /* '<S366>/Product2' */
  real_T Subtract1_h;                  /* '<S366>/Subtract1' */
  real_T MinMax1_jm;                   /* '<S366>/MinMax1' */
  real_T pathSpdLimit_a;               /* '<S81>/Bus Selector' */
  real_T Vehicle_speed_abs_max;        /* '<S81>/Multiport Switch' */
  real_T distance_o;                   /* '<S81>/Bus Selector' */
  real_T Distance_to_achieve_speed_targe;/* '<S81>/Multiport Switch' */
  real_T Uk1[2];                       /* '<S329>/Delay Input1' */
  real_T Saturation5;                  /* '<S331>/Saturation5' */
  real_T MinMax6;                      /* '<S331>/MinMax6' */
  real_T Gain1_e;                      /* '<S331>/Gain1' */
  real_T VSPD_TARGET_KPH_APV_gu;       /* '<S331>/Saturation4' */
  real_T MinMax1_f;                    /* '<S331>/MinMax1' */
  real_T Gain2;                        /* '<S331>/Gain2' */
  real_T Saturation6;                  /* '<S331>/Saturation6' */
  real_T Acceleration_target_ms2;      /* '<S81>/Multiport Switch' */
  real_T Saturation7;                  /* '<S331>/Saturation7' */
  real_T Saturation1;                  /* '<S331>/Saturation1' */
  real_T Jerk_target_ms3;              /* '<S81>/Multiport Switch' */
  real_T Saturation2;                  /* '<S331>/Saturation2' */
  real_T Vehicle_speed_vector_kph[33]; /* '<S331>/Gain3' */
  real_T MinMax3;                      /* '<S343>/MinMax3' */
  real_T Unit_Delay_f;                 /* '<S347>/Unit_Delay' */
  real_T MinMax5;                      /* '<S343>/MinMax5' */
  real_T Subtract_a;                   /* '<S343>/Subtract' */
  real_T Abs_m;                        /* '<S343>/Abs' */
  real_T MinMax4;                      /* '<S343>/MinMax4' */
  real_T MinMax6_j;                    /* '<S343>/MinMax6' */
  real_T Subtract1_c;                  /* '<S343>/Subtract1' */
  real_T Abs1_h5;                      /* '<S343>/Abs1' */
  real_T MinMax8;                      /* '<S343>/MinMax8' */
  real_T MinMax7;                      /* '<S343>/MinMax7' */
  real_T MinMax10;                     /* '<S343>/MinMax10' */
  real_T MinMax9;                      /* '<S343>/MinMax9' */
  real_T Subtract2;                    /* '<S343>/Subtract2' */
  real_T Abs2;                         /* '<S343>/Abs2' */
  real_T Xold_pg;                      /* '<S358>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S358>/Init' */
  real_T Gain1_c;                      /* '<S344>/Gain1' */
  real_T DigitalClock_f;               /* '<S356>/Digital Clock' */
  real_T Unit_Delay_ew;                /* '<S356>/Unit_Delay' */
  real_T Subtract_b;                   /* '<S356>/Subtract' */
  real_T Product1_aq;                  /* '<S353>/Product1' */
  real_T Add_h;                        /* '<S353>/Add' */
  real_T MinMax_a;                     /* '<S353>/MinMax' */
  real_T LookupTableDynamic;           /* '<S344>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S336>/Delay Input1' */
  real_T Xold_o;                       /* '<S342>/FixPt Unit Delay1' */
  real_T Init_p;                       /* '<S342>/Init' */
  real_T Vehicle_speed_target_c;       /* '<S337>/Unit_Delay' */
  real_T Vehicle_speed;                /* '<S337>/Unit_Delay' */
  real_T Distance_m;                   /* '<S337>/Unit_Delay' */
  real_T err;                          /* '<S337>/Subtract' */
  real_T err_abs;                      /* '<S337>/Abs2' */
  real_T Gain2_k;                      /* '<S337>/Gain2' */
  real_T Saturation4;                  /* '<S337>/Saturation4' */
  real_T time_to_target_vspd_secs;     /* '<S337>/Divide2' */
  real_T DigitalClock_p;               /* '<S335>/Digital Clock' */
  real_T Unit_Delay_b;                 /* '<S335>/Unit_Delay' */
  real_T Subtract_g;                   /* '<S335>/Subtract' */
  real_T MinMax3_n;                    /* '<S337>/MinMax3' */
  real_T Saturation1_e;                /* '<S337>/Saturation1' */
  real_T Divide_e;                     /* '<S337>/Divide' */
  real_T Abs_ma;                       /* '<S338>/Abs' */
  real_T Product1_iv;                  /* '<S338>/Product1' */
  real_T Add1_bf;                      /* '<S338>/Add1' */
  real_T MinMax2_c;                    /* '<S338>/MinMax2' */
  real_T Abs1_f;                       /* '<S338>/Abs1' */
  real_T Product2_m;                   /* '<S338>/Product2' */
  real_T Subtract1_h2;                 /* '<S338>/Subtract1' */
  real_T MinMax1_p;                    /* '<S338>/MinMax1' */
  real_T MinMax_o;                     /* '<S81>/MinMax' */
  real_T Vehicle_speed_target_n;       /* '<S81>/Saturation8' */
  real_T uD_Lookup_Table_l;            /* '<S194>/2D_Lookup_Table' */
  real_T Divide_f;                     /* '<S100>/Divide' */
  real_T Gain1_ll;                     /* '<S100>/Gain1' */
  real_T Brake_appl_percent_to_achieve_d;/* '<S100>/Saturation1' */
  real_T ACCEL_LIM_MS2_APV_b;          /* '<S81>/Saturation2' */
  real_T uD_Lookup_Table_i;            /* '<S195>/2D_Lookup_Table' */
  real_T Divide1_f;                    /* '<S100>/Divide1' */
  real_T Gain2_e;                      /* '<S100>/Gain2' */
  real_T Brake_appl_percent_for_maximum_;/* '<S100>/Saturation2' */
  real_T DataTypeConversion2_l3;       /* '<S77>/Data Type Conversion2' */
  real_T uD_Lookup_Table_le;           /* '<S193>/2D_Lookup_Table' */
  real_T Decel_rate_calculated_ms2;    /* '<S100>/Saturation4' */
  real_T DataTypeConversion_pp;        /* '<S101>/Data Type Conversion' */
  real_T DataTypeConversion1_k5;       /* '<S101>/Data Type Conversion1' */
  real_T Add_m;                        /* '<S101>/Add' */
  real_T Gain_j;                       /* '<S101>/Gain' */
  real_T MinMax1_i;                    /* '<S197>/MinMax1' */
  real_T Saturation_n;                 /* '<S197>/Saturation' */
  real_T Divide_a;                     /* '<S197>/Divide' */
  real_T Product2_on;                  /* '<S197>/Product2' */
  real_T Subtract1_ee;                 /* '<S197>/Subtract1' */
  real_T Unit_Delay2_g;                /* '<S197>/Unit_Delay2' */
  real_T Product1_oo;                  /* '<S197>/Product1' */
  real_T Add1_n1;                      /* '<S197>/Add1' */
  real_T TSamp;                        /* '<S196>/TSamp' */
  real_T Uk1_b;                        /* '<S196>/UD' */
  real_T Diff;                         /* '<S196>/Diff' */
  real_T BrakingPID_Y_percent;         /* '<S77>/MinMax' */
  real_T BrakingPID_Y_k;               /* '<S77>/Gain' */
  real_T CurveBasedSpeedSetpoint;      /* '<S79>/CurveBasedSpeedSetpoint' */
  real_T uDLookupTable1;               /* '<S80>/1-D Lookup Table1' */
  real_T MinMax1_pr;                   /* '<S314>/MinMax1' */
  real_T Saturation_ns;                /* '<S314>/Saturation' */
  real_T Divide_o;                     /* '<S314>/Divide' */
  real_T Product2_b;                   /* '<S314>/Product2' */
  real_T Subtract1_ei;                 /* '<S314>/Subtract1' */
  real_T Unit_Delay2_k;                /* '<S314>/Unit_Delay2' */
  real_T Product1_n;                   /* '<S314>/Product1' */
  real_T Add1_k;                       /* '<S314>/Add1' */
  real_T Abs_i;                        /* '<S275>/Abs' */
  real_T Add_p;                        /* '<S275>/Add' */
  real_T Switch_g;                     /* '<S275>/Switch' */
  real_T MinMax1_a;                    /* '<S315>/MinMax1' */
  real_T Saturation_e;                 /* '<S315>/Saturation' */
  real_T Divide_d;                     /* '<S315>/Divide' */
  real_T Product2_f;                   /* '<S315>/Product2' */
  real_T Subtract1_b;                  /* '<S315>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S315>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S315>/Product1' */
  real_T Add1_p;                       /* '<S315>/Add1' */
  real_T Sign;                         /* '<S275>/Sign' */
  real_T Product_cf;                   /* '<S275>/Product' */
  real_T MinMax1_e;                    /* '<S316>/MinMax1' */
  real_T Saturation_o;                 /* '<S316>/Saturation' */
  real_T Divide_jr;                    /* '<S316>/Divide' */
  real_T Product2_nk;                  /* '<S316>/Product2' */
  real_T Subtract1_eh;                 /* '<S316>/Subtract1' */
  real_T Unit_Delay2_c;                /* '<S316>/Unit_Delay2' */
  real_T Product1_cc;                  /* '<S316>/Product1' */
  real_T Add1_f;                       /* '<S316>/Add1' */
  real_T Switch1_f;                    /* '<S275>/Switch1' */
  real_T correctedError;               /* '<S275>/corrected Error' */
  real_T Switch_h;                     /* '<S276>/Switch' */
  real_T Switch1_j;                    /* '<S276>/Switch1' */
  real_T SteerCtrlErrRaw;              /* '<S80>/sign' */
  real_T DataTypeConversion1_e;        /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S279>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_k;         /* '<S80>/Data Type Conversion' */
  real_T SteeringControlPGainSpeedFactor;/* '<S80>/SteeringControlPGainSpeedFactor' */
  real_T SteerCtrlPgain;               /* '<S80>/Product1' */
  real_T Gain_cd;                      /* '<S80>/Gain' */
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
  real_T DataTypeConversion_l5;        /* '<S299>/Data Type Conversion' */
  real_T SaturationSpeedLookup;        /* '<S299>/Saturation Speed Lookup' */
  real_T Abs_ig;                       /* '<S299>/Abs' */
  real_T RateCurvature;                /* '<S299>/Curvature Lookup Table' */
  real_T Lateral_Control_Heading_Error;/* '<S274>/Error 5Hz LPF' */
  real_T Abs1_ft;                      /* '<S299>/Abs1' */
  real_T RateError;                    /* '<S299>/Error Lookup Table' */
  real_T Max;                          /* '<S299>/Max' */
  real_T RateSpeed;                    /* '<S299>/Speed Lookup Table' */
  real_T Min;                          /* '<S299>/Min' */
  real_T RateLimitUpper;               /* '<S299>/Limit Rate Limiter' */
  real_T sampletime;                   /* '<S308>/sample time' */
  real_T deltariselimit;               /* '<S308>/delta rise limit' */
  real_T ProportionalGain;             /* '<S298>/Proportional Gain' */
  real_T Integrator;                   /* '<S298>/Integrator' */
  real_T DerivativeGain;               /* '<S298>/Derivative Gain' */
  real_T Filter;                       /* '<S298>/Filter' */
  real_T SumD;                         /* '<S298>/SumD' */
  real_T FilterCoefficient;            /* '<S298>/Filter Coefficient' */
  real_T Sum_c;                        /* '<S298>/Sum' */
  real_T Saturate;                     /* '<S298>/Saturate' */
  real_T Uk1_m;                        /* '<S300>/Delay Input' */
  real_T ZeroUk1;                      /* '<S300>/GainZero' */
  real_T Yk1;                          /* '<S300>/Delay Output' */
  real_T PoleYk1;                      /* '<S300>/GainPole' */
  real_T PoleYk1UkZeroUk1;             /* '<S300>/Sum' */
  real_T Downcast;                     /* '<S300>/Downcast' */
  real_T uDLookupTable_j;              /* '<S274>/1-D Lookup Table' */
  real_T deg2rad;                      /* '<S274>/deg2rad' */
  real_T PGain;                        /* '<S274>/PGain' */
  real_T uHzLPF;                       /* '<S274>/5Hz LPF' */
  real_T Sum3;                         /* '<S274>/Sum3' */
  real_T DiscreteTimeIntegrator;       /* '<S292>/Discrete-Time Integrator' */
  real_T Sum4;                         /* '<S274>/Sum4' */
  real_T Yk1_p;                        /* '<S308>/Delay Input2' */
  real_T UkYk1;                        /* '<S308>/Difference Inputs1' */
  real_T RateLimitLower;               /* '<S299>/Gain3' */
  real_T deltafalllimit;               /* '<S308>/delta fall limit' */
  real_T Switch_f;                     /* '<S310>/Switch' */
  real_T Switch2_f;                    /* '<S310>/Switch2' */
  real_T DifferenceInputs2;            /* '<S308>/Difference Inputs2' */
  real_T Gain1_f;                      /* '<S299>/Gain1' */
  real_T Switch_hx;                    /* '<S309>/Switch' */
  real_T Switch2_k;                    /* '<S309>/Switch2' */
  real_T DataTypeConversion6_p;        /* '<S80>/Data Type Conversion6' */
  real_T rad2deg;                      /* '<S80>/rad2deg' */
  real_T MultiportSwitch1;             /* '<S80>/Multiport Switch1' */
  real_T uD_Lookup_Table_a;            /* '<S270>/1D_Lookup_Table' */
  real_T numLanePoints_j;              /* '<S80>/Data Type Conversion4' */
  real_T DiscreteTimeIntegrator_h;     /* '<S80>/Discrete-Time Integrator' */
  real_T Switch_k;                     /* '<S289>/Switch' */
  real_T Gain_o;                       /* '<S292>/Gain' */
  real_T FeedforwardGain;              /* '<S274>/FeedforwardGain' */
  real_T IntegralGain;                 /* '<S298>/Integral Gain' */
  real_T Subtract_og;                  /* '<S299>/Subtract' */
  real_T Abs2_k;                       /* '<S299>/Abs2' */
  real_T RateFeedbackGain;             /* '<S274>/RateFeedbackGain' */
  real_T UndersteerCorrection;         /* '<S274>/UndersteerCorrection' */
  real_T Sum2;                         /* '<S274>/Sum2' */
  real_T Switch1_p;                    /* '<S80>/Switch1' */
  real_T UnitDelay_p;                  /* '<S80>/Unit Delay' */
  real_T Switch2_i1;                   /* '<S80>/Switch2' */
  real_T Xnew;                         /* '<S358>/Reset' */
  real_T Xold_d;                       /* '<S360>/FixPt Unit Delay1' */
  real_T Init_o;                       /* '<S360>/Init' */
  real_T Xold_m;                       /* '<S361>/FixPt Unit Delay1' */
  real_T Init_l;                       /* '<S361>/Init' */
  real_T MultiportSwitch_i;            /* '<S359>/Multiport Switch' */
  real_T DigitalClock_d;               /* '<S355>/Digital Clock' */
  real_T Unit_Delay_p;                 /* '<S355>/Unit_Delay' */
  real_T Subtract_k;                   /* '<S355>/Subtract' */
  real_T Product1_am;                  /* '<S354>/Product1' */
  real_T Add_db;                       /* '<S354>/Add' */
  real_T Xnew_f;                       /* '<S361>/Reset' */
  real_T Xnew_h;                       /* '<S360>/Reset' */
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
  real_T TimeVectorRaw[6];             /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T PositionVectorRaw[6];         /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityVectorRaw[6];         /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationVectorRaw[6];     /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T JerkVectorRaw[6];             /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T TimeVector[33];               /* '<S331>/TwentyPointVectorCalculation' */
  real_T PositionVector[33];           /* '<S331>/TwentyPointVectorCalculation' */
  real_T VelocityVector[33];           /* '<S331>/TwentyPointVectorCalculation' */
  real_T AccelerationVector[33];       /* '<S331>/TwentyPointVectorCalculation' */
  real_T JerkVector[33];               /* '<S331>/TwentyPointVectorCalculation' */
  real_T Add_py;                       /* '<S359>/Add' */
  real_T u_trapezoidal;                /* '<S359>/Gain' */
  real_T Xold_gn;                      /* '<S327>/FixPt Unit Delay1' */
  real_T Init_j;                       /* '<S327>/Init' */
  real_T Abs_a;                        /* '<S324>/Abs' */
  real_T Product1_i3;                  /* '<S324>/Product1' */
  real_T Add1_b0;                      /* '<S324>/Add1' */
  real_T MinMax2_l;                    /* '<S324>/MinMax2' */
  real_T Abs1_e;                       /* '<S324>/Abs1' */
  real_T Product2_k;                   /* '<S324>/Product2' */
  real_T Subtract1_g;                  /* '<S324>/Subtract1' */
  real_T MinMax1_k;                    /* '<S324>/MinMax1' */
  real_T Subtract_ij;                  /* '<S321>/Subtract' */
  real_T Abs_eu;                       /* '<S321>/Abs' */
  real_T error;                        /* '<S274>/Error Calc' */
  real_T Switch1_m;                    /* '<S288>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_o;        /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_pl;       /* '<S80>/Data Type Conversion3' */
  real_T Product3;                     /* '<S80>/Product3' */
  real_T deg2rad_d;                    /* '<S80>/deg2rad' */
  real_T Product2_my;                  /* '<S80>/Product2' */
  real_T DataTypeConversion9_h;        /* '<S213>/Data Type Conversion9' */
  real_T DataTypeConversion1_iq;       /* '<S213>/Data Type Conversion1' */
  real_T Add_di;                       /* '<S213>/Add' */
  real_T DataTypeConversion2_id;       /* '<S213>/Data Type Conversion2' */
  real_T DataTypeConversion3_he;       /* '<S213>/Data Type Conversion3' */
  real_T DataTypeConversion5_i;        /* '<S217>/Data Type Conversion5' */
  real_T Coeff_of_drag_Cd;             /* '<S224>/1-D Lookup Table' */
  real_T KPH_TO_MS;                    /* '<S224>/KPH_TO_M//S' */
  real_T MathFunction;                 /* '<S224>/Math Function' */
  real_T DataTypeConversion_i;         /* '<S217>/Data Type Conversion' */
  real_T KPA_TO_PA;                    /* '<S224>/KPA_TO_PA' */
  real_T DataTypeConversion4_b;        /* '<S217>/Data Type Conversion4' */
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
  real_T Saturation_dy;                /* '<S261>/Saturation' */
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
  real_T Xold_bf;                      /* '<S185>/FixPt Unit Delay1' */
  real_T Init_k;                       /* '<S185>/Init' */
  real_T Abs_bu;                       /* '<S181>/Abs' */
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
  real_T Gain_i;                       /* '<S96>/Gain' */
  real_T Abs_k4;                       /* '<S106>/Abs' */
  real_T Abs1_ap;                      /* '<S106>/Abs1' */
  real_T DigitalClock_j;               /* '<S105>/Digital Clock' */
  real_T Unit_Delay_j;                 /* '<S105>/Unit_Delay' */
  real_T Subtract_jr;                  /* '<S105>/Subtract' */
  real_T Xold_g34;                     /* '<S134>/FixPt Unit Delay1' */
  real_T Init_hw;                      /* '<S134>/Init' */
  real_T Abs_lt;                       /* '<S130>/Abs' */
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
  RTMapsTX BusCreator;                 /* '<S385>/Bus Creator' */
  uint32_T Encoder_o2;                 /* '<S393>/Encoder' */
  uint32_T TCPIP_Com_o1[3];            /* '<S387>/TCPIP_Com' */
  uint32_T TCPIP_Com_o2;               /* '<S387>/TCPIP_Com' */
  uint32_T DataTypeConversion_f;       /* '<S384>/Data Type Conversion' */
  uint32_T SFunction1_o1_kxk;          /* '<S28>/S-Function1' */
  uint32_T SFunction1_o1_g3;           /* '<S20>/S-Function1' */
  uint32_T SFunction1_o1_ar;           /* '<S21>/S-Function1' */
  uint32_T SFunction1_o1_h4;           /* '<S18>/S-Function1' */
  uint32_T SFunction1_o1_ma;           /* '<S19>/S-Function1' */
  uint32_T SFunction1_o1_og;           /* '<S17>/S-Function1' */
  uint32_T Reshape[8];                 /* '<S1004>/Reshape' */
  uint32_T UnitDelay_f;                /* '<S1005>/Unit Delay' */
  uint32_T Switch1_c;                  /* '<S1008>/Switch1' */
  uint32_T Selector;                   /* '<S1004>/Selector' */
  uint32_T DataTypeConversion_a3;      /* '<S996>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1001>/Operator' */
  uint32_T Operator_l;                 /* '<S1002>/Operator' */
  uint32_T Operator_a;                 /* '<S1003>/Operator' */
  uint32_T DataType_ex;                /* '<S1003>/DataType' */
  uint32_T Shift_Arithmetic1_c;        /* '<S996>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1004>/Width' */
  uint32_T Switch1_me;                 /* '<S1007>/Switch1' */
  uint32_T Subtract_o3;                /* '<S1005>/Subtract' */
  uint32_T UnitDelay_c;                /* '<S990>/Unit Delay' */
  uint32_T Switch1_h;                  /* '<S993>/Switch1' */
  uint32_T DataTypeConversion6_n;      /* '<S985>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S985>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_i;      /* '<S985>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S985>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_n;      /* '<S985>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S985>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_p;      /* '<S985>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S985>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_l;     /* '<S985>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S985>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_m;     /* '<S985>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S985>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_b;      /* '<S986>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S986>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S986>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_o;        /* '<S986>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S986>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_c;        /* '<S986>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S986>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_i;        /* '<S986>/Shift_Arithmetic 5' */
  uint32_T Width_a;                    /* '<S989>/Width' */
  uint32_T Switch1_k;                  /* '<S992>/Switch1' */
  uint32_T Subtract_bb;                /* '<S990>/Subtract' */
  uint32_T DataTypeConversion2_mk;     /* '<S931>/Data Type Conversion2' */
  uint32_T Operator_f;                 /* '<S936>/Operator' */
  uint32_T Operator_m;                 /* '<S937>/Operator' */
  uint32_T Operator_i;                 /* '<S938>/Operator' */
  uint32_T DataType_gg;                /* '<S938>/DataType' */
  uint32_T Shift_Arithmetic1_gf;       /* '<S931>/Shift_Arithmetic 1' */
  uint32_T Operator_fl;                /* '<S939>/Operator' */
  uint32_T DataType_mmt;               /* '<S939>/DataType' */
  uint32_T Shift_Arithmetic2_l;        /* '<S931>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_d;                /* '<S962>/Unit Delay' */
  uint32_T Switch1_hz;                 /* '<S965>/Switch1' */
  uint32_T DataTypeConversion_m;       /* '<S930>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_nm;        /* '<S930>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_ih;     /* '<S930>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_j;        /* '<S930>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_d1;     /* '<S930>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_lw;       /* '<S930>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_h4;     /* '<S930>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_l;        /* '<S930>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_hm;     /* '<S930>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_m;        /* '<S930>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_k;      /* '<S930>/Data Type Conversion5' */
  uint32_T Operator_aq;                /* '<S935>/Operator' */
  uint32_T DataType_o2;                /* '<S935>/DataType' */
  uint32_T DataTypeConversion3_j;      /* '<S931>/Data Type Conversion3' */
  uint32_T Operator_aa;                /* '<S940>/Operator' */
  uint32_T Operator_p;                 /* '<S941>/Operator' */
  uint32_T Operator_p1;                /* '<S942>/Operator' */
  uint32_T DataType_oc;                /* '<S942>/DataType' */
  uint32_T Shift_Arithmetic4_onr;      /* '<S931>/Shift_Arithmetic 4' */
  uint32_T Operator_ij;                /* '<S943>/Operator' */
  uint32_T DataType_k4;                /* '<S943>/DataType' */
  uint32_T Shift_Arithmetic5_l;        /* '<S931>/Shift_Arithmetic 5' */
  uint32_T Width_o;                    /* '<S961>/Width' */
  uint32_T Switch1_g;                  /* '<S964>/Switch1' */
  uint32_T Subtract_d;                 /* '<S962>/Subtract' */
  uint32_T DataTypeConversion_ne;      /* '<S880>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_h;         /* '<S880>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_dm;     /* '<S880>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_p;        /* '<S880>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_lhu;    /* '<S880>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_j;        /* '<S880>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_o;      /* '<S880>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_i;        /* '<S880>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_d;      /* '<S880>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_i;        /* '<S880>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_bt;     /* '<S880>/Data Type Conversion5' */
  uint32_T Operator_j;                 /* '<S890>/Operator' */
  uint32_T DataType_pv;                /* '<S890>/DataType' */
  uint32_T DataTypeConversion8_a;      /* '<S879>/Data Type Conversion8' */
  uint32_T Operator_b;                 /* '<S886>/Operator' */
  uint32_T Operator_c;                 /* '<S887>/Operator' */
  uint32_T Operator_g;                 /* '<S888>/Operator' */
  uint32_T DataType_pz;                /* '<S888>/DataType' */
  uint32_T Shift_Arithmetic4_cq;       /* '<S879>/Shift_Arithmetic 4' */
  uint32_T Operator_f0;                /* '<S889>/Operator' */
  uint32_T DataType_ej;                /* '<S889>/DataType' */
  uint32_T Shift_Arithmetic5_h;        /* '<S879>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_lr;      /* '<S702>/Data Type Conversion' */
  uint32_T DataTypeConversion1_m;      /* '<S702>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_o1;     /* '<S702>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S702>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S702>/Shift Arithmetic2' */
  uint32_T Operator_e;                 /* '<S704>/Operator' */
  uint32_T DataType_gy;                /* '<S704>/DataType' */
  uint32_T DataTypeConversion_j;       /* '<S694>/Data Type Conversion' */
  uint32_T DataTypeConversion1_iu;     /* '<S694>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_ji;     /* '<S694>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_a;         /* '<S694>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_g;         /* '<S694>/Shift Arithmetic2' */
  uint32_T Operator_n;                 /* '<S696>/Operator' */
  uint32_T DataType_cn;                /* '<S696>/DataType' */
  uint32_T DataTypeConversion_b3;      /* '<S688>/Data Type Conversion' */
  uint32_T DataTypeConversion1_pk;     /* '<S688>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_p;      /* '<S688>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_n;         /* '<S688>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_o;         /* '<S688>/Shift Arithmetic2' */
  uint32_T Operator_bd;                /* '<S689>/Operator' */
  uint32_T DataType_e1;                /* '<S689>/DataType' */
  uint32_T DataTypeConversion_mo;      /* '<S683>/Data Type Conversion' */
  uint32_T DataTypeConversion1_cp;     /* '<S683>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_gj;     /* '<S683>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_h;         /* '<S683>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_ou;        /* '<S683>/Shift Arithmetic2' */
  uint32_T Operator_my;                /* '<S684>/Operator' */
  uint32_T DataType_jt;                /* '<S684>/DataType' */
  uint32_T DataTypeConversion_kd;      /* '<S676>/Data Type Conversion' */
  uint32_T DataTypeConversion1_c4;     /* '<S676>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_gu;     /* '<S676>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_d;         /* '<S676>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_b;         /* '<S676>/Shift Arithmetic2' */
  uint32_T Operator_es;                /* '<S678>/Operator' */
  uint32_T DataType_oa;                /* '<S678>/DataType' */
  uint32_T UnitDelay_a;                /* '<S61>/Unit Delay' */
  uint32_T Switch1_ht;                 /* '<S64>/Switch1' */
  uint32_T Switch1_b;                  /* '<S63>/Switch1' */
  uint32_T Subtract_fc;                /* '<S61>/Subtract' */
  uint32_T UnitDelay_j;                /* '<S55>/Unit Delay' */
  uint32_T Switch1_kd;                 /* '<S58>/Switch1' */
  uint32_T Switch1_l;                  /* '<S57>/Switch1' */
  uint32_T Subtract_m;                 /* '<S55>/Subtract' */
  uint32_T UnitDelay_l;                /* '<S49>/Unit Delay' */
  uint32_T Switch1_e;                  /* '<S52>/Switch1' */
  uint32_T Switch1_c4;                 /* '<S51>/Switch1' */
  uint32_T Subtract_f1;                /* '<S49>/Subtract' */
  uint32_T UnitDelay_d4;               /* '<S43>/Unit Delay' */
  uint32_T Switch1_k4;                 /* '<S46>/Switch1' */
  uint32_T Switch1_fr;                 /* '<S45>/Switch1' */
  uint32_T Subtract_h;                 /* '<S43>/Subtract' */
  uint32_T UnitDelay_b;                /* '<S37>/Unit Delay' */
  uint32_T Switch1_i;                  /* '<S40>/Switch1' */
  uint32_T Switch1_hm;                 /* '<S39>/Switch1' */
  uint32_T Subtract_nc;                /* '<S37>/Subtract' */
  uint32_T UnitDelay_f4;               /* '<S31>/Unit Delay' */
  uint32_T Switch1_o;                  /* '<S34>/Switch1' */
  uint32_T Switch1_a;                  /* '<S33>/Switch1' */
  uint32_T Subtract_ot;                /* '<S31>/Subtract' */
  real32_T PropB_REAX_3_HandwheelTorque;/* '<S643>/Product' */
  real32_T PropB_REAX_3_HandwheelVelocity;/* '<S644>/Product1' */
  real32_T PropB_REAX_3_PullCompensation;/* '<S645>/Product2' */
  real32_T Subtract_oo;                /* '<S633>/Subtract' */
  real32_T Subtract_e;                 /* '<S509>/Subtract' */
  real32_T DataTypeConversion2_lf;     /* '<S79>/Data Type Conversion2' */
  real32_T Divide_nn;                  /* '<S278>/Divide' */
  real32_T UnitDelay_fm;               /* '<S278>/Unit Delay' */
  real32_T Switch1_fi;                 /* '<S282>/Switch1' */
  real32_T Divide_d0;                  /* '<S283>/Divide' */
  real32_T UnitDelay_lj;               /* '<S283>/Unit Delay' */
  real32_T Switch1_pb;                 /* '<S287>/Switch1' */
  real32_T DataTypeConversion1_gp;     /* '<S283>/Data Type Conversion1' */
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
  int32_T Decoder_o2;                  /* '<S390>/Decoder' */
  int32_T Merge;                       /* '<S932>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S592>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_c;/* '<S432>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S592>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_c;/* '<S432>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_f;/* '<S590>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_e;/* '<S591>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_o;/* '<S590>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_cb;/* '<S591>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S610>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_a;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S610>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_d;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S970>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lrn;/* '<S98>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_l; /* '<S98>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S718>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S718>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S203>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l;/* '<S203>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_j4;      /* '<S518>/Data Type Conversion' */
  uint16_T DataTypeConversion1_c3;     /* '<S518>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S518>/Shift Arithmetic' */
  uint16_T Operator_h;                 /* '<S543>/Operator' */
  uint16_T DataType_pr;                /* '<S543>/DataType' */
  uint16_T DataTypeConversion_pso;     /* '<S512>/Data Type Conversion' */
  uint16_T DataTypeConversion1_dw;     /* '<S512>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_i;          /* '<S512>/Shift Arithmetic' */
  uint16_T Operator_k;                 /* '<S539>/Operator' */
  uint16_T DataType_k5;                /* '<S539>/DataType' */
  uint16_T DataTypeConversion_c;       /* '<S516>/Data Type Conversion' */
  uint16_T DataTypeConversion1_if;     /* '<S516>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_a;          /* '<S516>/Shift Arithmetic' */
  uint16_T Operator_n4;                /* '<S541>/Operator' */
  uint16_T DataType_fb;                /* '<S541>/DataType' */
  uint16_T DataTypeConversion1_pi;     /* '<S517>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_o0;     /* '<S517>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_g;          /* '<S517>/Shift Arithmetic' */
  uint16_T Operator_ho;                /* '<S542>/Operator' */
  uint16_T DataType_ow;                /* '<S542>/DataType' */
  uint16_T DataTypeConversion1_gm;     /* '<S520>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_ot;     /* '<S520>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_i2;         /* '<S520>/Shift Arithmetic' */
  uint16_T Operator_fh;                /* '<S544>/Operator' */
  uint16_T DataType_dx;                /* '<S544>/DataType' */
  uint16_T DataTypeConversion1_gb;     /* '<S526>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_e;      /* '<S526>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_ip;         /* '<S526>/Shift Arithmetic' */
  uint16_T Operator_mv;                /* '<S545>/Operator' */
  uint16_T DataType_p4;                /* '<S545>/DataType' */
  uint16_T DataTypeConversion_em;      /* '<S534>/Data Type Conversion' */
  uint16_T DataTypeConversion1_aq;     /* '<S534>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_n;          /* '<S534>/Shift Arithmetic' */
  uint16_T Operator_gl;                /* '<S548>/Operator' */
  uint16_T DataType_h;                 /* '<S548>/DataType' */
  uint16_T DataTypeConversion1_gs;     /* '<S527>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_n;      /* '<S527>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_j;          /* '<S527>/Shift Arithmetic' */
  uint16_T Operator_hq;                /* '<S546>/Operator' */
  uint16_T DataType_lu;                /* '<S546>/DataType' */
  uint16_T DataTypeConversion_bp;      /* '<S528>/Data Type Conversion' */
  uint16_T DataTypeConversion1_lr;     /* '<S528>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_d;          /* '<S528>/Shift Arithmetic' */
  uint16_T Operator_he;                /* '<S547>/Operator' */
  uint16_T DataType_ek;                /* '<S547>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S528>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S404>/Data Type Conversion21' */
  uint16_T DataTypeConversion_k1;      /* '<S536>/Data Type Conversion' */
  uint16_T DataTypeConversion1_gq;     /* '<S536>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_h;          /* '<S536>/Shift Arithmetic' */
  uint16_T Operator_iv;                /* '<S549>/Operator' */
  uint16_T DataType_n3;                /* '<S549>/DataType' */
  uint16_T DataTypeConversion_b4;      /* '<S538>/Data Type Conversion' */
  uint16_T DataTypeConversion1_j;      /* '<S538>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_e;          /* '<S538>/Shift Arithmetic' */
  uint16_T Operator_mg;                /* '<S550>/Operator' */
  uint16_T DataType_pq;                /* '<S550>/DataType' */
  uint16_T DataTypeConversion_k3;      /* '<S514>/Data Type Conversion' */
  uint16_T DataTypeConversion1_o;      /* '<S514>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_o;          /* '<S514>/Shift Arithmetic' */
  uint16_T Operator_mr;                /* '<S540>/Operator' */
  uint16_T DataType_aa;                /* '<S540>/DataType' */
  uint16_T DataTypeConversion1_io;     /* '<S643>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_jb;     /* '<S643>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_o;        /* '<S643>/Shift_Arithmetic 1' */
  uint16_T Operator_lp;                /* '<S648>/Operator' */
  uint16_T DataType_b;                 /* '<S648>/DataType' */
  uint16_T DataTypeConversion4_o;      /* '<S644>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_jc;     /* '<S644>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_oz;       /* '<S644>/Shift_Arithmetic 2' */
  uint16_T Operator_d;                 /* '<S649>/Operator' */
  uint16_T DataType_ab;                /* '<S649>/DataType' */
  uint16_T DataTypeConversion7_j;      /* '<S645>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_h;      /* '<S645>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_e;        /* '<S645>/Shift_Arithmetic 3' */
  uint16_T Operator_fg;                /* '<S650>/Operator' */
  uint16_T DataType_ji;                /* '<S650>/DataType' */
  uint16_T DataTypeConversion6_j;      /* '<S656>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_m;      /* '<S656>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_nt;       /* '<S656>/Shift_Arithmetic 2' */
  uint16_T Operator_ae;                /* '<S661>/Operator' */
  uint16_T DataType_owd;               /* '<S661>/DataType' */
  uint16_T DataType_dc;                /* '<S1002>/DataType' */
  uint16_T Shift_Arithmetic_k5;        /* '<S996>/Shift_Arithmetic ' */
  uint16_T DataType_ji3;               /* '<S937>/DataType' */
  uint16_T Shift_Arithmetic_p3;        /* '<S931>/Shift_Arithmetic ' */
  uint16_T DataType_kv;                /* '<S941>/DataType' */
  uint16_T Shift_Arithmetic3_or;       /* '<S931>/Shift_Arithmetic 3' */
  uint16_T DataType_kl;                /* '<S887>/DataType' */
  uint16_T Shift_Arithmetic3_ec;       /* '<S879>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_cb;     /* '<S840>/Data Type Conversion1' */
  uint16_T Operator_dm;                /* '<S871>/Operator' */
  uint16_T Operator_hp;                /* '<S872>/Operator' */
  uint16_T DataType_gp;                /* '<S872>/DataType' */
  uint16_T Shift_Arithmetic_g;         /* '<S840>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_ah;      /* '<S699>/Data Type Conversion' */
  uint16_T DataTypeConversion1_jm;     /* '<S699>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_p;         /* '<S699>/Shift Arithmetic2' */
  uint16_T Operator_hk;                /* '<S703>/Operator' */
  uint16_T DataType_g1;                /* '<S703>/DataType' */
  uint16_T DataTypeConversion_h;       /* '<S692>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ld;     /* '<S692>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_i;         /* '<S692>/Shift Arithmetic2' */
  uint16_T Operator_fq;                /* '<S695>/Operator' */
  uint16_T DataType_aw;                /* '<S695>/DataType' */
  uint16_T DataTypeConversion_ig;      /* '<S674>/Data Type Conversion' */
  uint16_T DataTypeConversion1_mv;     /* '<S674>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_j;         /* '<S674>/Shift Arithmetic2' */
  uint16_T Operator_lw;                /* '<S677>/Operator' */
  uint16_T DataType_g5;                /* '<S677>/DataType' */
  int16_T DataTypeConversion3_el;      /* '<S643>/Data Type Conversion3' */
  int16_T DataTypeConversion6_k;       /* '<S644>/Data Type Conversion6' */
  int16_T DataTypeConversion9_k;       /* '<S645>/Data Type Conversion9' */
  int16_T DataTypeConversion8_p;       /* '<S656>/Data Type Conversion8' */
  int16_T DataTypeConversion_aa;       /* '<S840>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S751>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_b;           /* '<S743>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_m;           /* '<S767>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_g;           /* '<S759>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_c;           /* '<S787>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_l;           /* '<S786>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_h;           /* '<S775>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_ag;       /* '<S461>/Data Type Conversion' */
  uint8_T DataTypeConversion1_m0;      /* '<S461>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_mz;      /* '<S461>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_bc;      /* '<S461>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_bq;      /* '<S461>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_g;       /* '<S461>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_pz;      /* '<S461>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ej;      /* '<S461>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S407>/Multiport_Switch' */
  uint8_T DataTypeConversion_cn[8];    /* '<S455>/Data Type Conversion' */
  uint8_T DataTypeConversion_ho;       /* '<S470>/Data Type Conversion' */
  uint8_T DataTypeConversion1_fg;      /* '<S470>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_nf;      /* '<S470>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_i;       /* '<S470>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_ir;      /* '<S470>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_f;       /* '<S470>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_n1;      /* '<S470>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_bt;      /* '<S470>/Data Type Conversion7' */
  uint8_T RawData_n[8];                /* '<S408>/Multiport_Switch' */
  uint8_T DataTypeConversion_gq[8];    /* '<S456>/Data Type Conversion' */
  uint8_T DataTypeConversion_gg[39];   /* '<S507>/Data Type Conversion' */
  uint8_T DataTypeConversion_pj;       /* '<S631>/Data Type Conversion' */
  uint8_T DataTypeConversion1_pr;      /* '<S631>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_i1;      /* '<S631>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_mu;      /* '<S631>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_k;       /* '<S631>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_c;       /* '<S631>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_a;       /* '<S631>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h;       /* '<S631>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_b;       /* '<S631>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_m;       /* '<S631>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_n;      /* '<S631>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_m2;     /* '<S631>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S631>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_k;      /* '<S631>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_h;      /* '<S631>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_k;      /* '<S631>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_i;      /* '<S631>/Data Type Conversion16' */
  uint8_T Add_g;                       /* '<S631>/Add' */
  uint8_T DataTypeConversion15_i;      /* '<S610>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_gt;      /* '<S610>/Data Type Conversion4' */
  uint8_T MABX_Mode_j;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[22];              /* '<S393>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S387>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1013>/Vector Concatenate' */
  uint8_T UnitDelay1_b;                /* '<S814>/Unit Delay1' */
  uint8_T MultiportSwitch_b[8];        /* '<S814>/Multiport Switch' */
  uint8_T SupervisorMode_i;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S404>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S404>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S404>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S404>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S404>/Data Type Conversion26' */
  uint8_T DataTypeConversion_er;       /* '<S592>/Data Type Conversion' */
  uint8_T DataTypeConversion1_c1;      /* '<S592>/Data Type Conversion1' */
  uint8_T Add1_f4;                     /* '<S631>/Add1' */
  uint8_T DataTypeConversion_hm;       /* '<S569>/Data Type Conversion' */
  uint8_T DataTypeConversion1_b5;      /* '<S569>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_jp;      /* '<S569>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_or;      /* '<S569>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_dg;      /* '<S569>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_h;       /* '<S569>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_d;       /* '<S569>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_d3w;     /* '<S569>/Data Type Conversion7' */
  uint8_T RawData_p[8];                /* '<S430>/Multiport_Switch' */
  uint8_T Operator_pm;                 /* '<S647>/Operator' */
  uint8_T DataType_kp;                 /* '<S647>/DataType' */
  uint8_T Operator_bo;                 /* '<S646>/Operator' */
  uint8_T DataType_ab3;                /* '<S646>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S641>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_gn;       /* '<S580>/Data Type Conversion' */
  uint8_T DataTypeConversion1_p0;      /* '<S580>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_e1;      /* '<S580>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_l3;      /* '<S580>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_op;      /* '<S580>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_n;       /* '<S580>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ja;      /* '<S580>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_h0;      /* '<S580>/Data Type Conversion7' */
  uint8_T RawData_h[8];                /* '<S431>/Multiport_Switch' */
  uint8_T Operator_em;                 /* '<S659>/Operator' */
  uint8_T DataType_jg;                 /* '<S659>/DataType' */
  uint8_T Shift_Arithmetic_p5;         /* '<S652>/Shift_Arithmetic ' */
  uint8_T Operator_k4;                 /* '<S658>/Operator' */
  uint8_T Operator_en;                 /* '<S660>/Operator' */
  uint8_T DataType_lo;                 /* '<S660>/DataType' */
  uint8_T Shift_Arithmetic1_ga;        /* '<S652>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S653>/SignalConversion' */
  uint8_T DataTypeConversion3_f;       /* '<S406>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S654>/SignalConversion' */
  uint8_T DataTypeConversion4_j;       /* '<S406>/Data Type Conversion4' */
  uint8_T State;                       /* '<S814>/Chart' */
  uint8_T TPDT_count;                  /* '<S814>/Chart' */
  uint8_T VectorConcatenate_g[8];      /* '<S1015>/Vector Concatenate' */
  uint8_T VectorConcatenate_f[8];      /* '<S1016>/Vector Concatenate' */
  uint8_T DataType_dj;                 /* '<S1001>/DataType' */
  uint8_T DataTypeConversion3_k;       /* '<S996>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_i1;      /* '<S996>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_fc;      /* '<S996>/Data Type Conversion2' */
  uint8_T DataTypeConversion_pf;       /* '<S966>/Data Type Conversion' */
  uint8_T Operator_f2;                 /* '<S971>/Operator' */
  uint8_T DataType_no;                 /* '<S971>/DataType' */
  uint8_T DataTypeConversion2_ky;      /* '<S986>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_k2;      /* '<S986>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S986>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_gz;      /* '<S986>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S986>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_g0;         /* '<S986>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_l;      /* '<S986>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_i3;      /* '<S986>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_h;         /* '<S986>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_f;      /* '<S986>/Data Type Conversion11' */
  uint8_T Reshape_c[16];               /* '<S989>/Reshape' */
  uint8_T Selector_g;                  /* '<S989>/Selector' */
  uint8_T DataTypeConversion10_o;      /* '<S986>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S986>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_ls;      /* '<S986>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_hc;      /* '<S986>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_l;       /* '<S986>/Data Type Conversion9' */
  uint8_T Add2_d;                      /* '<S986>/Add2' */
  uint8_T Shift_Arithmetic6_d;         /* '<S986>/Shift_Arithmetic 6' */
  uint8_T Add3_k;                      /* '<S986>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S986>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_p;         /* '<S986>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S986>/Bitwise Operator7' */
  uint8_T DataTypeConversion_d3;       /* '<S968>/Data Type Conversion' */
  uint8_T Operator_mx;                 /* '<S982>/Operator' */
  uint8_T Operator_l5;                 /* '<S977>/Operator' */
  uint8_T DataType_cj;                 /* '<S977>/DataType' */
  uint8_T Operator_nx;                 /* '<S978>/Operator' */
  uint8_T Operator_jt;                 /* '<S979>/Operator' */
  uint8_T Operator_jc;                 /* '<S980>/Operator' */
  uint8_T Operator_l2;                 /* '<S981>/Operator' */
  uint8_T DataTypeConversion_ax;       /* '<S895>/Data Type Conversion' */
  uint8_T Operator_hz;                 /* '<S903>/Operator' */
  uint8_T Operator_f1;                 /* '<S900>/Operator' */
  uint8_T DataType_e2;                 /* '<S900>/DataType' */
  uint8_T Operator_co;                 /* '<S901>/Operator' */
  uint8_T Operator_dj;                 /* '<S902>/Operator' */
  uint8_T Operator_kz;                 /* '<S904>/Operator' */
  uint8_T Operator_b3;                 /* '<S905>/Operator' */
  uint8_T DataTypeConversion_ly;       /* '<S896>/Data Type Conversion' */
  uint8_T Operator_i1;                 /* '<S911>/Operator' */
  uint8_T Operator_e2;                 /* '<S912>/Operator' */
  uint8_T Operator_cw;                 /* '<S908>/Operator' */
  uint8_T DataType_hw;                 /* '<S908>/DataType' */
  uint8_T Operator_ci;                 /* '<S909>/Operator' */
  uint8_T Operator_cy;                 /* '<S910>/Operator' */
  uint8_T Operator_fi;                 /* '<S913>/Operator' */
  uint8_T DataTypeConversion_o;        /* '<S899>/Data Type Conversion' */
  uint8_T Switch_j;                    /* '<S933>/Switch' */
  uint8_T DataTypeConversion_fw;       /* '<S931>/Data Type Conversion' */
  uint8_T DataType_g2;                 /* '<S936>/DataType' */
  uint8_T DataTypeConversion4_d2;      /* '<S931>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_en;      /* '<S931>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_g;       /* '<S931>/Data Type Conversion6' */
  uint8_T Reshape_m[16];               /* '<S961>/Reshape' */
  uint8_T Selector_e;                  /* '<S961>/Selector' */
  uint8_T DataTypeConversion1_om;      /* '<S931>/Data Type Conversion1' */
  uint8_T Operator_nn;                 /* '<S944>/Operator' */
  uint8_T DataType_ew;                 /* '<S944>/DataType' */
  uint8_T DataType_iy;                 /* '<S940>/DataType' */
  uint8_T DataTypeConversion8_c;       /* '<S931>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_b;       /* '<S931>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_p;      /* '<S931>/Data Type Conversion10' */
  uint8_T Add_gz;                      /* '<S931>/Add' */
  uint8_T Shift_Arithmetic6_l;         /* '<S931>/Shift_Arithmetic 6' */
  uint8_T Add1_d;                      /* '<S931>/Add1' */
  uint8_T Operator_ik;                 /* '<S945>/Operator' */
  uint8_T DataType_mz;                 /* '<S945>/DataType' */
  uint8_T Shift_Arithmetic7_f;         /* '<S931>/Shift_Arithmetic 7' */
  uint8_T Operator_kl;                 /* '<S946>/Operator' */
  uint8_T DataType_owp;                /* '<S946>/DataType' */
  uint8_T DataTypeConversion_dp;       /* '<S898>/Data Type Conversion' */
  uint8_T Operator_c1;                 /* '<S926>/Operator' */
  uint8_T Operator_kb;                 /* '<S922>/Operator' */
  uint8_T DataType_gv;                 /* '<S922>/DataType' */
  uint8_T Operator_jr;                 /* '<S923>/Operator' */
  uint8_T Operator_jm;                 /* '<S924>/Operator' */
  uint8_T Operator_ag;                 /* '<S925>/Operator' */
  uint8_T Operator_kd;                 /* '<S927>/Operator' */
  uint8_T DataTypeConversion_fy;       /* '<S841>/Data Type Conversion' */
  uint8_T Operator_o;                  /* '<S873>/Operator' */
  uint8_T DataType_ik;                 /* '<S873>/DataType' */
  uint8_T DataTypeConversion2_ki;      /* '<S841>/Data Type Conversion2' */
  uint8_T Operator_mz;                 /* '<S875>/Operator' */
  uint8_T DataType_lk;                 /* '<S875>/DataType' */
  uint8_T Shift_Arithmetic_b;          /* '<S841>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_gj;      /* '<S841>/Data Type Conversion4' */
  uint8_T Operator_f1j;                /* '<S876>/Operator' */
  uint8_T DataType_g4;                 /* '<S876>/DataType' */
  uint8_T Shift_Arithmetic1_dy;        /* '<S841>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_m;       /* '<S841>/Data Type Conversion5' */
  uint8_T Operator_ix;                 /* '<S874>/Operator' */
  uint8_T DataType_js;                 /* '<S874>/DataType' */
  uint8_T Shift_Arithmetic2_b;         /* '<S841>/Shift_Arithmetic 2' */
  uint8_T Operator_iu;                 /* '<S881>/Operator' */
  uint8_T DataType_oi;                 /* '<S881>/DataType' */
  uint8_T DataTypeConversion1_du;      /* '<S841>/Data Type Conversion1' */
  uint8_T Operator_nh;                 /* '<S877>/Operator' */
  uint8_T DataType_ep;                 /* '<S877>/DataType' */
  uint8_T DataType_dl;                 /* '<S886>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S879>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S879>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S879>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_n;      /* '<S879>/Data Type Conversion13' */
  uint8_T Operator_kdv;                /* '<S885>/Operator' */
  uint8_T DataType_a1;                 /* '<S885>/DataType' */
  uint8_T Checksum;                    /* '<S879>/Add' */
  uint8_T Shift_Arithmetic7_o;         /* '<S879>/Shift_Arithmetic 7' */
  uint8_T Add1_dg;                     /* '<S879>/Add1' */
  uint8_T Operator_hr;                 /* '<S884>/Operator' */
  uint8_T DataType_p0;                 /* '<S884>/DataType' */
  uint8_T DataTypeConversion3_if;      /* '<S841>/Data Type Conversion3' */
  uint8_T Operator_me;                 /* '<S878>/Operator' */
  uint8_T DataType_da;                 /* '<S878>/DataType' */
  uint8_T Shift_Arithmetic3_h;         /* '<S841>/Shift_Arithmetic 3' */
  uint8_T Operator_dd;                 /* '<S882>/Operator' */
  uint8_T DataType_oj;                 /* '<S882>/DataType' */
  uint8_T DataTypeConversion_jv;       /* '<S836>/Data Type Conversion' */
  uint8_T Operator_ec;                 /* '<S851>/Operator' */
  uint8_T DataType_cm;                 /* '<S851>/DataType' */
  uint8_T Operator_n0;                 /* '<S856>/Operator' */
  uint8_T Operator_ee;                 /* '<S852>/Operator' */
  uint8_T Operator_nw;                 /* '<S857>/Operator' */
  uint8_T Operator_de;                 /* '<S858>/Operator' */
  uint8_T Operator_pz;                 /* '<S855>/Operator' */
  uint8_T DataType_hy;                 /* '<S871>/DataType' */
  uint8_T DataTypeConversion2_fi;      /* '<S840>/Data Type Conversion2' */
  uint8_T DataTypeConversion_mj;       /* '<S816>/Data Type Conversion' */
  uint8_T Operator_jy;                 /* '<S821>/Operator' */
  uint8_T Operator_ft;                 /* '<S818>/Operator' */
  uint8_T DataType_np;                 /* '<S818>/DataType' */
  uint8_T Operator_fm;                 /* '<S819>/Operator' */
  uint8_T Operator_mt;                 /* '<S820>/Operator' */
  uint8_T Operator_ks;                 /* '<S822>/Operator' */
  uint8_T Operator_nm;                 /* '<S823>/Operator' */
  uint8_T DataTypeConversion_cw;       /* '<S817>/Data Type Conversion' */
  uint8_T Operator_ak;                 /* '<S829>/Operator' */
  uint8_T Operator_nu;                 /* '<S826>/Operator' */
  uint8_T DataType_ne;                 /* '<S826>/DataType' */
  uint8_T Operator_ir;                 /* '<S827>/Operator' */
  uint8_T Operator_br;                 /* '<S828>/Operator' */
  uint8_T Operator_n4w;                /* '<S830>/Operator' */
  uint8_T Operator_nux;                /* '<S831>/Operator' */
  uint8_T FixPtUnitDelay2_i;           /* '<S797>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S698>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S700>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S701>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_k;       /* '<S691>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S693>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_p;       /* '<S686>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S687>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_e;       /* '<S680>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S681>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S682>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_o;       /* '<S673>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S675>/Signal Conversion' */
  uint8_T UnitDelay_bo[17];            /* '<S630>/Unit Delay' */
  uint8_T Data[17];                    /* '<S630>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S633>/Inport' */
  uint8_T DataTypeConversion_nb;       /* '<S590>/Data Type Conversion' */
  uint8_T DataTypeConversion_e2;       /* '<S591>/Data Type Conversion' */
  uint8_T DataTypeConversion1_px;      /* '<S590>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_fv;      /* '<S591>/Data Type Conversion1' */
  uint8_T DataTypeConversion_ic;       /* '<S579>/Data Type Conversion' */
  uint8_T DataTypeConversion1_bv;      /* '<S579>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_kr;      /* '<S579>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_o0g;     /* '<S579>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_b4;      /* '<S579>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_e2;      /* '<S579>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_b;       /* '<S579>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_mv;      /* '<S579>/Data Type Conversion7' */
  uint8_T DataTypeConversion_hmw;      /* '<S568>/Data Type Conversion' */
  uint8_T DataTypeConversion1_aqv;     /* '<S568>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_n4;      /* '<S568>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_on;      /* '<S568>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_hm1;     /* '<S568>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_d;       /* '<S568>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_g0;      /* '<S568>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_jq;      /* '<S568>/Data Type Conversion7' */
  uint8_T UnitDelay_je[39];            /* '<S506>/Unit Delay' */
  uint8_T Data_a[39];                  /* '<S506>/serialize_tpdt' */
  uint8_T Inport_a[39];                /* '<S509>/Inport' */
  uint8_T DataTypeConversion1_ba;      /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_p;       /* '<S203>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew;      /* '<S98>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S98>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b2;          /* '<S381>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S370>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_o;           /* '<S358>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator;        /* '<S358>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_n;           /* '<S342>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion1_f1;      /* '<S79>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_e3;      /* '<S80>/Data Type Conversion5' */
  uint8_T FixPtUnitDelay2_j;           /* '<S360>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_i;      /* '<S360>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_mz;          /* '<S361>/FixPt Unit Delay2' */
  uint8_T FixPtLogicalOperator_b;      /* '<S361>/FixPt Logical Operator' */
  uint8_T FixPtUnitDelay2_h5;          /* '<S327>/FixPt Unit Delay2' */
  uint8_T stateChange;                 /* '<S276>/Chart' */
  uint8_T FixPtUnitDelay2_a;           /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_gg;          /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_d;           /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_mf;          /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_op;          /* '<S134>/FixPt Unit Delay2' */
  int8_T DataTypeConversion4_e;        /* '<S655>/Data Type Conversion4' */
  int8_T DataTypeConversion10_c;       /* '<S657>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S384>/for_logging7' */
  boolean_T SFunction1_d;              /* '<S709>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S402>/EStopSwActive' */
  boolean_T SFunction1_o;              /* '<S708>/S-Function1' */
  boolean_T Operator_lh;               /* '<S798>/Operator' */
  boolean_T DataType_kd;               /* '<S798>/DataType' */
  boolean_T LogicalOperator;           /* '<S716>/Logical Operator' */
  boolean_T SFunction1_on;             /* '<S711>/S-Function1' */
  boolean_T Operator_hon;              /* '<S799>/Operator' */
  boolean_T DataType_bv;               /* '<S799>/DataType' */
  boolean_T AND2;                      /* '<S716>/AND2' */
  boolean_T min_relop;                 /* '<S746>/min_relop' */
  boolean_T max_relop;                 /* '<S746>/max_relop' */
  boolean_T conjunction;               /* '<S746>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S748>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S748>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S734>/Relational Operator9' */
  boolean_T min_relop_p;               /* '<S738>/min_relop' */
  boolean_T max_relop_n;               /* '<S738>/max_relop' */
  boolean_T conjunction_m;             /* '<S738>/conjunction' */
  boolean_T RelationalOperator1_n;     /* '<S740>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S740>/Relational Operator' */
  boolean_T F_Fault_Soft_o;            /* '<S733>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S718>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S734>/Relational Operator8' */
  boolean_T F_Fault_Hard_o;            /* '<S733>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S718>/Logical Operator1' */
  boolean_T Compare;                   /* '<S729>/Compare' */
  boolean_T min_relop_k;               /* '<S762>/min_relop' */
  boolean_T max_relop_c;               /* '<S762>/max_relop' */
  boolean_T conjunction_h;             /* '<S762>/conjunction' */
  boolean_T RelationalOperator1_h;     /* '<S764>/Relational Operator1' */
  boolean_T RelationalOperator_b;      /* '<S764>/Relational Operator' */
  boolean_T F_Fault_Soft_e;            /* '<S736>/Relational Operator9' */
  boolean_T min_relop_j;               /* '<S754>/min_relop' */
  boolean_T max_relop_o;               /* '<S754>/max_relop' */
  boolean_T conjunction_g;             /* '<S754>/conjunction' */
  boolean_T RelationalOperator1_j;     /* '<S756>/Relational Operator1' */
  boolean_T RelationalOperator_e;      /* '<S756>/Relational Operator' */
  boolean_T F_Fault_Soft_b;            /* '<S735>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S718>/Logical Operator4' */
  boolean_T F_Fault_Hard_a;            /* '<S736>/Relational Operator8' */
  boolean_T F_Fault_Hard_l;            /* '<S735>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S718>/Logical Operator3' */
  boolean_T Compare_k;                 /* '<S730>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S718>/Logical Operator5' */
  boolean_T Unit_Delay_e0;             /* '<S721>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S788>/Unit_Delay1' */
  boolean_T LogicalOperator_d;         /* '<S788>/Logical Operator' */
  boolean_T Unit_Delay1_m;             /* '<S721>/Unit_Delay1' */
  boolean_T Unit_Delay1_a;             /* '<S789>/Unit_Delay1' */
  boolean_T LogicalOperator_a;         /* '<S789>/Logical Operator' */
  boolean_T Compare_n;                 /* '<S725>/Compare' */
  boolean_T Compare_h;                 /* '<S781>/Compare' */
  boolean_T LogicalOperator7;          /* '<S719>/Logical Operator7' */
  boolean_T Compare_f;                 /* '<S780>/Compare' */
  boolean_T LogicalOperator8;          /* '<S719>/Logical Operator8' */
  boolean_T Compare_l;                 /* '<S779>/Compare' */
  boolean_T LogicalOperator5;          /* '<S719>/Logical Operator5' */
  boolean_T Compare_hm;                /* '<S778>/Compare' */
  boolean_T LogicalOperator6;          /* '<S719>/Logical Operator6' */
  boolean_T Compare_a;                 /* '<S724>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S723>/Relational Operator' */
  boolean_T min_relop_h;               /* '<S770>/min_relop' */
  boolean_T max_relop_cr;              /* '<S770>/max_relop' */
  boolean_T conjunction_l;             /* '<S770>/conjunction' */
  boolean_T RelationalOperator1_p;     /* '<S772>/Relational Operator1' */
  boolean_T RelationalOperator_f;      /* '<S772>/Relational Operator' */
  boolean_T F_Fault_Hard_p;            /* '<S737>/Relational Operator8' */
  boolean_T LogicalOperator6_m;        /* '<S715>/Logical Operator6' */
  boolean_T Operator_des;              /* '<S464>/Operator' */
  boolean_T Operator_md;               /* '<S670>/Operator' */
  boolean_T Operator_o3;               /* '<S473>/Operator' */
  boolean_T RX_status;                 /* '<S470>/Data Type Conversion8' */
  boolean_T RX_status_b;               /* '<S408>/Multiport_Switch' */
  boolean_T Operator_bc;               /* '<S508>/Operator' */
  boolean_T LogicalOperator_aq;        /* '<S422>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S631>/Unit_Delay3' */
  boolean_T Operator_gd;               /* '<S632>/Operator' */
  boolean_T LogicalOperator_l;         /* '<S445>/Logical Operator' */
  boolean_T RelationalOperator1_e[17]; /* '<S631>/Relational Operator1' */
  boolean_T Compare_n2;                /* '<S635>/Compare' */
  boolean_T LogicalOperator_f;         /* '<S631>/Logical Operator' */
  boolean_T Unit_Delay_dt;             /* '<S631>/Unit_Delay' */
  boolean_T LogicalOperator3_j;        /* '<S637>/Logical Operator3' */
  boolean_T Unit_Delay_jaz;            /* '<S637>/Unit_Delay' */
  boolean_T LogicalOperator_m;         /* '<S637>/Logical Operator' */
  boolean_T LogicalOperator1_h;        /* '<S637>/Logical Operator1' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S452>/Logical Operator' */
  boolean_T Enable;                    /* '<S3>/Enable' */
  boolean_T Heartbeat_l;               /* '<S385>/Cast To Boolean' */
  boolean_T EStop_p;                   /* '<S3>/Unit_Delay' */
  boolean_T EnableSW;                  /* '<S3>/Unit_Delay' */
  boolean_T EngagePB_j;                /* '<S3>/Unit_Delay' */
  boolean_T AutonomousEnabled_i;       /* '<S3>/Unit_Delay' */
  boolean_T Compare_ax;                /* '<S392>/Compare' */
  boolean_T Uk1_i;                     /* '<S391>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S391>/FixPt Relational Operator' */
  boolean_T Switch1_om;                /* '<S389>/Switch1' */
  boolean_T RX_status_g;               /* '<S495>/Data Type Conversion8' */
  boolean_T RX_status_c;               /* '<S620>/Data Type Conversion8' */
  boolean_T Operator_jv;               /* '<S1023>/Operator' */
  boolean_T DataType_em;               /* '<S1023>/DataType' */
  boolean_T UnitDelay2;                /* '<S814>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S814>/Unit Delay3' */
  boolean_T Operator_ab;               /* '<S1042>/Operator' */
  boolean_T LogicalOperator2_c;        /* '<S1033>/Logical Operator2' */
  boolean_T AND;                       /* '<S1033>/AND' */
  boolean_T OR;                        /* '<S1033>/OR' */
  boolean_T LogicalOperator4_k;        /* '<S1033>/Logical Operator4' */
  boolean_T LogicalOperator1_l;        /* '<S1033>/Logical Operator1' */
  boolean_T Operator_fk;               /* '<S1041>/Operator' */
  boolean_T LogicalOperator3_l;        /* '<S1033>/Logical Operator3' */
  boolean_T LogicalOperator_lj;        /* '<S1031>/Logical Operator' */
  boolean_T RelationalOperator_p;      /* '<S1032>/Relational Operator' */
  boolean_T RelationalOperator1_nt;    /* '<S1032>/Relational Operator1' */
  boolean_T LogicalOperator_dv;        /* '<S1032>/Logical Operator' */
  boolean_T Compare_nw;                /* '<S1038>/Compare' */
  boolean_T Compare_g;                 /* '<S1039>/Compare' */
  boolean_T LogicalOperator1_g;        /* '<S1032>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1032>/Logical Operator2' */
  boolean_T LogicalOperator_k;         /* '<S805>/Logical Operator' */
  boolean_T RX_status_h;               /* '<S559>/Data Type Conversion8' */
  boolean_T F_Truck1571_VIN_Match;     /* '<S3>/Unit_Delay' */
  boolean_T F_Truck166_VIN_Match;      /* '<S3>/Unit_Delay' */
  boolean_T RTMapsOk_c;                /* '<S3>/Unit_Delay' */
  boolean_T APTC_arb_pedal_low_idl_sw; /* '<S3>/Unit_Delay' */
  boolean_T signal1;                   /* '<S3>/Unit_Delay' */
  boolean_T PID_hold_i_term_f;         /* '<S3>/Unit_Delay' */
  boolean_T F_Ignition_relay_command;  /* '<S3>/Unit_Delay' */
  boolean_T F_Inverter_relay_command;  /* '<S3>/Unit_Delay' */
  boolean_T F_MABX_relay_command;      /* '<S3>/Unit_Delay' */
  boolean_T F_Sensor_relay_command;    /* '<S3>/Unit_Delay' */
  boolean_T BrakingControlActive;      /* '<S3>/Unit_Delay' */
  boolean_T F_Hold_brakes_at_zero;     /* '<S3>/Unit_Delay' */
  boolean_T AutonomousOutputEnabled_k; /* '<S3>/Unit_Delay' */
  boolean_T RX_status_k;               /* '<S461>/Data Type Conversion8' */
  boolean_T RX_status_j;               /* '<S407>/Multiport_Switch' */
  boolean_T Operator_bf;               /* '<S465>/Operator' */
  boolean_T Operator_b5;               /* '<S466>/Operator' */
  boolean_T Operator_jd;               /* '<S467>/Operator' */
  boolean_T Operator_djo;              /* '<S468>/Operator' */
  boolean_T Operator_pi;               /* '<S469>/Operator' */
  boolean_T Operator_nmv;              /* '<S474>/Operator' */
  boolean_T Operator_ika;              /* '<S475>/Operator' */
  boolean_T Operator_hl;               /* '<S476>/Operator' */
  boolean_T Operator_bd2;              /* '<S477>/Operator' */
  boolean_T Operator_lx;               /* '<S478>/Operator' */
  boolean_T RX_status_jw;              /* '<S479>/Data Type Conversion8' */
  boolean_T RX_status_bq;              /* '<S481>/Data Type Conversion8' */
  boolean_T RX_status_jj;              /* '<S483>/Data Type Conversion8' */
  boolean_T RX_status_kt;              /* '<S485>/Data Type Conversion8' */
  boolean_T RX_status_a;               /* '<S487>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S489>/Data Type Conversion8' */
  boolean_T RX_status_m;               /* '<S491>/Data Type Conversion8' */
  boolean_T RX_status_md;              /* '<S493>/Data Type Conversion8' */
  boolean_T RX_status_o;               /* '<S495>/Switch' */
  boolean_T RX_status_l;               /* '<S498>/Data Type Conversion8' */
  boolean_T RX_status_p;               /* '<S500>/Data Type Conversion8' */
  boolean_T RX_status_bu;              /* '<S502>/Data Type Conversion8' */
  boolean_T RX_status_he;              /* '<S504>/Data Type Conversion8' */
  boolean_T RX_status_ci;              /* '<S551>/Data Type Conversion8' */
  boolean_T RX_status_pk;              /* '<S553>/Data Type Conversion8' */
  boolean_T RX_status_mg;              /* '<S555>/Data Type Conversion8' */
  boolean_T RX_status_e;               /* '<S557>/Data Type Conversion8' */
  boolean_T RX_status_la;              /* '<S559>/Switch' */
  boolean_T RX_status_f;               /* '<S562>/Data Type Conversion8' */
  boolean_T RX_status_kl;              /* '<S429>/Switch' */
  boolean_T Operator_brf;              /* '<S597>/Operator' */
  boolean_T Operator_fts;              /* '<S598>/Operator' */
  boolean_T Operator_b4;               /* '<S599>/Operator' */
  boolean_T RX_status_n;               /* '<S592>/Data Type Conversion8' */
  boolean_T RX_status_gj;              /* '<S432>/Multiport_Switch' */
  boolean_T Operator_g3;               /* '<S600>/Operator' */
  boolean_T Operator_er;               /* '<S601>/Operator' */
  boolean_T Operator_ba;               /* '<S602>/Operator' */
  boolean_T RX_status_bf;              /* '<S603>/Data Type Conversion2' */
  boolean_T RX_status_e2;              /* '<S603>/Data Type Conversion5' */
  boolean_T RX_status_k3;              /* '<S603>/Data Type Conversion8' */
  boolean_T RX_status_hp;              /* '<S607>/Switch' */
  boolean_T RX_status_a4;              /* '<S610>/Data Type Conversion8' */
  boolean_T RX_status_fm;              /* '<S612>/Data Type Conversion8' */
  boolean_T RX_status_cm;              /* '<S614>/Data Type Conversion8' */
  boolean_T RX_status_ll;              /* '<S616>/Data Type Conversion8' */
  boolean_T RX_status_hk;              /* '<S618>/Data Type Conversion8' */
  boolean_T RX_status_jwi;             /* '<S622>/Data Type Conversion8' */
  boolean_T RX_status_ag;              /* '<S624>/Data Type Conversion8' */
  boolean_T RX_status_ak;              /* '<S626>/Data Type Conversion8' */
  boolean_T RX_status_no;              /* '<S628>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S631>/Relational Operator2' */
  boolean_T Compare_gk;                /* '<S636>/Compare' */
  boolean_T Unit_Delay2_gj;            /* '<S631>/Unit_Delay2' */
  boolean_T LogicalOperator1_h1;       /* '<S631>/Logical Operator1' */
  boolean_T LogicalOperator2_h;        /* '<S637>/Logical Operator2' */
  boolean_T Unit_Delay1_d;             /* '<S631>/Unit_Delay1' */
  boolean_T LogicalOperator3_jm;       /* '<S638>/Logical Operator3' */
  boolean_T Unit_Delay_c;              /* '<S638>/Unit_Delay' */
  boolean_T LogicalOperator_dvk;       /* '<S638>/Logical Operator' */
  boolean_T LogicalOperator1_j;        /* '<S638>/Logical Operator1' */
  boolean_T LogicalOperator2_n;        /* '<S638>/Logical Operator2' */
  boolean_T Operator_ok;               /* '<S668>/Operator' */
  boolean_T Operator_al;               /* '<S671>/Operator' */
  boolean_T Operator_aq1;              /* '<S669>/Operator' */
  boolean_T Operator_pm1;              /* '<S667>/Operator' */
  boolean_T Operator_hq1;              /* '<S573>/Operator' */
  boolean_T Operator_fa;               /* '<S574>/Operator' */
  boolean_T RX_status_e3;              /* '<S569>/Data Type Conversion8' */
  boolean_T RX_status_a2;              /* '<S430>/Multiport_Switch' */
  boolean_T Operator_pp;               /* '<S575>/Operator' */
  boolean_T Operator_kzd;              /* '<S576>/Operator' */
  boolean_T Operator_gp;               /* '<S577>/Operator' */
  boolean_T Operator_gpg;              /* '<S578>/Operator' */
  boolean_T Operator_g5;               /* '<S584>/Operator' */
  boolean_T Operator_ijc;              /* '<S585>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S652>/Data Type Conversion' */
  boolean_T DataTypeConversion_kh;     /* '<S406>/Data Type Conversion' */
  boolean_T DataType_nx;               /* '<S658>/DataType' */
  boolean_T DataTypeConversion1_jc;    /* '<S406>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S652>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_j1;    /* '<S406>/Data Type Conversion2' */
  boolean_T RX_status_mp;              /* '<S580>/Data Type Conversion8' */
  boolean_T RX_status_cx;              /* '<S431>/Multiport_Switch' */
  boolean_T Operator_ay;               /* '<S586>/Operator' */
  boolean_T Operator_mvi;              /* '<S587>/Operator' */
  boolean_T Operator_o3q;              /* '<S588>/Operator' */
  boolean_T Operator_kf;               /* '<S589>/Operator' */
  boolean_T SFunction1_d3;             /* '<S710>/S-Function1' */
  boolean_T StartPBActive;             /* '<S402>/StartPBActive' */
  boolean_T F_Fault_Soft_d;            /* '<S737>/Relational Operator9' */
  boolean_T Operator_eu;               /* '<S22>/Operator' */
  boolean_T Operator_ms;               /* '<S26>/Operator' */
  boolean_T Operator_fv;               /* '<S27>/Operator' */
  boolean_T Operator_bs;               /* '<S24>/Operator' */
  boolean_T Operator_bw;               /* '<S25>/Operator' */
  boolean_T Operator_eb;               /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S814>/Chart' */
  boolean_T enTPCM;                    /* '<S814>/Chart' */
  boolean_T DataTypeConversion6_jx;    /* '<S995>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S999>/u2' */
  boolean_T Operator_bh;               /* '<S999>/Operator' */
  boolean_T DataType_lr;               /* '<S999>/DataType' */
  boolean_T Unit_Delay_jv;             /* '<S1004>/Unit_Delay' */
  boolean_T Operator_j5;               /* '<S1006>/Operator' */
  boolean_T AutonomousOutputEnabled_m; /* '<S970>/Bus Selector2' */
  boolean_T BrakingControlActive_g;    /* '<S970>/Bus Selector2' */
  boolean_T Unit_Delay_c4;             /* '<S966>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S966>/OperatorEnable' */
  boolean_T LogicalOperator8_h;        /* '<S966>/Logical Operator8' */
  boolean_T LogicalOperator7_l;        /* '<S966>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S966>/OperatorEnable' */
  boolean_T LogicalOperator1_m;        /* '<S966>/Logical Operator1' */
  boolean_T DataTypeConversion2_kn;    /* '<S966>/Data Type Conversion2' */
  boolean_T LogicalOperator_i;         /* '<S966>/Logical Operator' */
  boolean_T Compare_i;                 /* '<S972>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S966>/OperatorEnable' */
  boolean_T Unit_Delay_lr;             /* '<S989>/Unit_Delay' */
  boolean_T DataTypeConversion7_ec;    /* '<S968>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_dx;    /* '<S968>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_dg;    /* '<S968>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_k5;    /* '<S968>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_ph;    /* '<S968>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_pf;    /* '<S968>/Data Type Conversion6' */
  boolean_T Operator_ijm;              /* '<S991>/Operator' */
  boolean_T DataTypeConversion5_mg;    /* '<S895>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_ke;    /* '<S895>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_ko;    /* '<S895>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_p;     /* '<S895>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_oh;    /* '<S895>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_jt;    /* '<S895>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_gx;    /* '<S896>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_g0t;   /* '<S896>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_b;     /* '<S896>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_dx;    /* '<S896>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_c;     /* '<S896>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_is;    /* '<S896>/Data Type Conversion7' */
  boolean_T Operator_ap;               /* '<S950>/Operator' */
  boolean_T Operator_MX;               /* '<S959>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S959>/Operator_MN' */
  boolean_T Operator_m0;               /* '<S951>/Operator' */
  boolean_T Operator_f0c;              /* '<S952>/Operator' */
  boolean_T Operator_nx4;              /* '<S953>/Operator' */
  boolean_T Operator_ck;               /* '<S954>/Operator' */
  boolean_T Operator_j0;               /* '<S955>/Operator' */
  boolean_T Unit_Delay_fh;             /* '<S961>/Unit_Delay' */
  boolean_T DataTypeConversion6_ka;    /* '<S898>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_lrp;   /* '<S898>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_di;    /* '<S898>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_dw;    /* '<S898>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_e1;    /* '<S898>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_mv5;   /* '<S898>/Data Type Conversion7' */
  boolean_T LogicalOperator1_mg;       /* '<S959>/Logical Operator1' */
  boolean_T LogicalOperator_dp;        /* '<S959>/Logical Operator' */
  boolean_T Operator_ng;               /* '<S963>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S841>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S859>/u1' */
  boolean_T DataTypeConversion2_mf;    /* '<S836>/Data Type Conversion2' */
  boolean_T Operator_kfj;              /* '<S859>/Operator' */
  boolean_T DataType_j3w;              /* '<S859>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_j; /* '<S862>/u1' */
  boolean_T DataTypeConversion5_hx;    /* '<S836>/Data Type Conversion5' */
  boolean_T Operator_jh;               /* '<S862>/Operator' */
  boolean_T DataType_ibc;              /* '<S862>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_e; /* '<S853>/u1' */
  boolean_T DataTypeConversion6_fn;    /* '<S836>/Data Type Conversion6' */
  boolean_T Operator_es1;              /* '<S853>/Operator' */
  boolean_T DataType_ix;               /* '<S853>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_p; /* '<S854>/u1' */
  boolean_T DataTypeConversion7_g;     /* '<S836>/Data Type Conversion7' */
  boolean_T Operator_k5;               /* '<S854>/Operator' */
  boolean_T DataType_io;               /* '<S854>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_f; /* '<S860>/u1' */
  boolean_T DataTypeConversion3_fc;    /* '<S836>/Data Type Conversion3' */
  boolean_T Operator_ju;               /* '<S860>/Operator' */
  boolean_T DataType_i2;               /* '<S860>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_i; /* '<S861>/u1' */
  boolean_T DataTypeConversion4_mu;    /* '<S836>/Data Type Conversion4' */
  boolean_T Operator_j3;               /* '<S861>/Operator' */
  boolean_T DataType_fa;               /* '<S861>/DataType' */
  boolean_T DataTypeConversion2_l0;    /* '<S842>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S847>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_a;/* '<S848>/Enable' */
  boolean_T DataTypeConversion2_h;     /* '<S837>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_of;    /* '<S838>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_id;    /* '<S816>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_li;    /* '<S816>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_ko3;   /* '<S816>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_d2i;   /* '<S816>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_e;     /* '<S816>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_l;     /* '<S816>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_n3;    /* '<S817>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_g5;    /* '<S817>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_mh;    /* '<S817>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_mz;    /* '<S817>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_m;     /* '<S817>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_p;     /* '<S817>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S800>/Chart' */
  boolean_T Unit_Delay_l2;             /* '<S793>/Unit_Delay' */
  boolean_T LogicalOperator1_e;        /* '<S793>/Logical Operator1' */
  boolean_T LogicalOperator_c;         /* '<S793>/Logical Operator' */
  boolean_T Unit_Delay_o;              /* '<S794>/Unit_Delay' */
  boolean_T LogicalOperator1_b;        /* '<S794>/Logical Operator1' */
  boolean_T RelationalOperator1_jf;    /* '<S722>/Relational Operator1' */
  boolean_T LogicalOperator3_e;        /* '<S792>/Logical Operator3' */
  boolean_T Unit_Delay_b5;             /* '<S792>/Unit_Delay' */
  boolean_T LogicalOperator1_hj;       /* '<S792>/Logical Operator1' */
  boolean_T LogicalOperator_p;         /* '<S792>/Logical Operator' */
  boolean_T LogicalOperator2_k;        /* '<S792>/Logical Operator2' */
  boolean_T min_relop_m;               /* '<S795>/min_relop' */
  boolean_T RX_status_os;              /* '<S630>/serialize_tpdt' */
  boolean_T RX_status_cd;              /* '<S607>/Data Type Conversion8' */
  boolean_T RX_status_pz;              /* '<S607>/Data Type Conversion3' */
  boolean_T RX_status_gx;              /* '<S590>/Data Type Conversion8' */
  boolean_T RX_status_mb;              /* '<S591>/Data Type Conversion8' */
  boolean_T RX_status_ok;              /* '<S579>/Data Type Conversion8' */
  boolean_T RX_status_hc;              /* '<S568>/Data Type Conversion8' */
  boolean_T RX_status_f2;              /* '<S564>/Data Type Conversion8' */
  boolean_T RX_status_of;              /* '<S565>/Data Type Conversion8' */
  boolean_T RX_status_by;              /* '<S559>/Data Type Conversion3' */
  boolean_T RX_status_cc;              /* '<S506>/serialize_tpdt' */
  boolean_T RX_status_i;               /* '<S495>/Data Type Conversion1' */
  boolean_T CheckHDOP;                 /* '<S382>/CheckHDOP' */
  boolean_T Operator_ns;               /* '<S95>/Operator' */
  boolean_T AND_l;                     /* '<S76>/AND' */
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
  boolean_T Compare_o;                 /* '<S211>/Compare' */
  boolean_T f_brk_gov_inactive;        /* '<S203>/Logical Operator1' */
  boolean_T LogicalOperator_ke;        /* '<S203>/Logical Operator' */
  boolean_T LogicalOperator_j;         /* '<S82>/Logical Operator' */
  boolean_T APTC_arb_pedal_low_idl_sw_o;/* '<S75>/Relational Operator' */
  boolean_T RelationalOperator1_i;     /* '<S89>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S89>/Relational Operator' */
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
  boolean_T Compare_ey;                /* '<S374>/Compare' */
  boolean_T Compare_j;                 /* '<S371>/Compare' */
  boolean_T Compare_hc;                /* '<S372>/Compare' */
  boolean_T Compare_b;                 /* '<S373>/Compare' */
  boolean_T LogicalOperator2_f;        /* '<S334>/Logical Operator2' */
  boolean_T Unit_Delay_ot;             /* '<S376>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S376>/Logical Operator1' */
  boolean_T LogicalOperator_fl;        /* '<S376>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S377>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S377>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S362>/Compare' */
  boolean_T Compare_dv;                /* '<S363>/Compare' */
  boolean_T LogicalOperator1_gm;       /* '<S332>/Logical Operator1' */
  boolean_T Unit_Delay_h;              /* '<S365>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S365>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S365>/Logical Operator' */
  boolean_T Unit_Delay_c4v;            /* '<S366>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S366>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S328>/Compare' */
  boolean_T FixPtRelationalOperator_d[2];/* '<S329>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_nk[33];            /* '<S348>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S343>/Logical Operator' */
  boolean_T RelationalOperator_fg;     /* '<S343>/Relational Operator' */
  boolean_T LogicalOperator3_o;        /* '<S349>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S349>/Unit_Delay' */
  boolean_T LogicalOperator_o;         /* '<S349>/Logical Operator' */
  boolean_T LogicalOperator1_p;        /* '<S349>/Logical Operator1' */
  boolean_T f_vspd_min_delta_greater_than_t;/* '<S343>/Logical Operator2' */
  boolean_T RelationalOperator1_g;     /* '<S343>/Relational Operator1' */
  boolean_T f_vspd_max_delta_greater_than_t;/* '<S343>/Logical Operator1' */
  boolean_T f_accel_rate_greater_than_thres;/* '<S343>/Relational Operator2' */
  boolean_T f_decel_rate_greater_than_thres;/* '<S343>/Relational Operator3' */
  boolean_T f_jerk_rate_greater_than_thresh;/* '<S343>/Relational Operator4' */
  boolean_T f_jerk_rate_greater_than_thre_n;/* '<S343>/Relational Operator5' */
  boolean_T RelationalOperator6_i;     /* '<S343>/Relational Operator6' */
  boolean_T f_distance_max_delta_greater_th;/* '<S343>/Logical Operator3' */
  boolean_T F_Inhibit_sigmoid_vector_shapin;/* '<S343>/Logical Operator4' */
  boolean_T LogicalOperator_n;         /* '<S81>/Logical Operator' */
  boolean_T LogicalOperator2_ft;       /* '<S81>/Logical Operator2' */
  boolean_T RelationalOperator3_k;     /* '<S344>/Relational Operator3' */
  boolean_T RelationalOperator1_hj;    /* '<S344>/Relational Operator1' */
  boolean_T LogicalOperator_da;        /* '<S344>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S344>/Relational Operator2' */
  boolean_T F_set_max_distance_accumulated;/* '<S344>/Logical Operator2' */
  boolean_T RelationalOperator_l;      /* '<S344>/Relational Operator' */
  boolean_T FixPtRelationalOperator_p[2];/* '<S336>/FixPt Relational Operator' */
  boolean_T LogicalOperator_g;         /* '<S330>/Logical Operator' */
  boolean_T Unit_Delay_ls;             /* '<S338>/Unit_Delay' */
  boolean_T LogicalOperator1_lp;       /* '<S338>/Logical Operator1' */
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
  boolean_T Unit_Delay1_j;             /* '<S314>/Unit_Delay1' */
  boolean_T LogicalOperator_kh;        /* '<S314>/Logical Operator' */
  boolean_T highRateOfChange;          /* '<S275>/highRateOfChange' */
  boolean_T closeToEdge;               /* '<S275>/closeToEdge' */
  boolean_T JumpNearEdge;              /* '<S275>/JumpNearEdge' */
  boolean_T Uk1_k2;                    /* '<S313>/Delay Input1' */
  boolean_T FixPtRelationalOperator_i; /* '<S313>/FixPt Relational Operator' */
  boolean_T DataTypeConversion_dz;     /* '<S275>/Data Type Conversion' */
  boolean_T Unit_Delay1_f;             /* '<S315>/Unit_Delay1' */
  boolean_T LogicalOperator_a3;        /* '<S315>/Logical Operator' */
  boolean_T Unit_Delay1_de;            /* '<S316>/Unit_Delay1' */
  boolean_T LogicalOperator_nz;        /* '<S316>/Logical Operator' */
  boolean_T RelationalOperator_l5;     /* '<S276>/Relational Operator' */
  boolean_T RelationalOperator_d;      /* '<S288>/Relational Operator' */
  boolean_T RelationalOperator5_f;     /* '<S291>/Relational Operator5' */
  boolean_T RelationalOperator4_la;    /* '<S291>/Relational Operator4' */
  boolean_T RelationalOperator2_o;     /* '<S291>/Relational Operator2' */
  boolean_T LogicalOperator1_ji;       /* '<S291>/Logical Operator1' */
  boolean_T RelationalOperator1_ie;    /* '<S291>/Relational Operator1' */
  boolean_T RelationalOperator3_p;     /* '<S291>/Relational Operator3' */
  boolean_T LogicalOperator2_o;        /* '<S291>/Logical Operator2' */
  boolean_T LogicalOperator_b;         /* '<S291>/Logical Operator' */
  boolean_T LogicalOperator3_oi;       /* '<S291>/Logical Operator3' */
  boolean_T LowerRelop1;               /* '<S290>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S290>/UpperRelop' */
  boolean_T DataTypeConversion_dn;     /* '<S272>/Data Type Conversion' */
  boolean_T RelationalOperator1_gr;    /* '<S293>/Relational Operator1' */
  boolean_T RelationalOperator_o;      /* '<S293>/Relational Operator' */
  boolean_T RelationalOperator1_ps;    /* '<S295>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S295>/Relational Operator' */
  boolean_T LowerRelop1_l;             /* '<S310>/LowerRelop1' */
  boolean_T UpperRelop_k;              /* '<S310>/UpperRelop' */
  boolean_T LowerRelop1_e;             /* '<S309>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S309>/UpperRelop' */
  boolean_T LowerTest;                 /* '<S281>/Lower Test' */
  boolean_T UpperTest;                 /* '<S281>/Upper Test' */
  boolean_T AND_p;                     /* '<S281>/AND' */
  boolean_T LowerTest_l;               /* '<S286>/Lower Test' */
  boolean_T UpperTest_e;               /* '<S286>/Upper Test' */
  boolean_T AND_j;                     /* '<S286>/AND' */
  boolean_T RelationalOperator_oq;     /* '<S80>/Relational Operator' */
  boolean_T RelationalOperator1_f;     /* '<S301>/Relational Operator1' */
  boolean_T RelationalOperator_l4;     /* '<S301>/Relational Operator' */
  boolean_T min_relop_k0;              /* '<S340>/min_relop' */
  boolean_T LogicalOperator2_g;        /* '<S349>/Logical Operator2' */
  boolean_T min_relop_c;               /* '<S368>/min_relop' */
  boolean_T min_relop_f;               /* '<S379>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S323>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S323>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S323>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S324>/Unit_Delay' */
  boolean_T LogicalOperator1_hp;       /* '<S324>/Logical Operator1' */
  boolean_T RelationalOperator1_et;    /* '<S321>/Relational Operator1' */
  boolean_T LogicalOperator3_a;        /* '<S322>/Logical Operator3' */
  boolean_T Unit_Delay_i;              /* '<S322>/Unit_Delay' */
  boolean_T LogicalOperator1_joh;      /* '<S322>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S322>/Logical Operator' */
  boolean_T LogicalOperator2_j;        /* '<S322>/Logical Operator2' */
  boolean_T min_relop_d;               /* '<S325>/min_relop' */
  boolean_T RelationalOperator1_m;     /* '<S288>/Relational Operator1' */
  boolean_T RelationalOperator1_ng;    /* '<S218>/Relational Operator1' */
  boolean_T RelationalOperator_d3;     /* '<S218>/Relational Operator' */
  boolean_T RelationalOperator1_ch;    /* '<S219>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S219>/Relational Operator' */
  boolean_T RelationalOperator1_l;     /* '<S220>/Relational Operator1' */
  boolean_T RelationalOperator_fd;     /* '<S220>/Relational Operator' */
  boolean_T Unit_Delay1_m5;            /* '<S214>/Unit_Delay1' */
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
  boolean_T RelationalOperator1_ja;    /* '<S267>/Relational Operator1' */
  boolean_T RelationalOperator_p4;     /* '<S267>/Relational Operator' */
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
  boolean_T Unit_Delay1_i;             /* '<S129>/Unit_Delay1' */
  boolean_T LogicalOperator_mu;        /* '<S129>/Logical Operator' */
  boolean_T Unit_Delay_nl;             /* '<S130>/Unit_Delay' */
  boolean_T LogicalOperator1_mk;       /* '<S130>/Logical Operator1' */
  boolean_T Compare_aa;                /* '<S114>/Compare' */
  boolean_T Compare_jrp;               /* '<S113>/Compare' */
  boolean_T min_relop_ph;              /* '<S132>/min_relop' */
  boolean_T RelationalOperator1_gi;    /* '<S135>/Relational Operator1' */
  boolean_T RelationalOperator_ba;     /* '<S135>/Relational Operator' */
  boolean_T Reshape_j[2];              /* '<S60>/Reshape' */
  boolean_T Unit_Delay_mw;             /* '<S60>/Unit_Delay' */
  boolean_T Selector_h;                /* '<S60>/Selector' */
  boolean_T Operator_bg;               /* '<S62>/Operator' */
  boolean_T Reshape_a[2];              /* '<S54>/Reshape' */
  boolean_T Unit_Delay_p1;             /* '<S54>/Unit_Delay' */
  boolean_T Selector_p;                /* '<S54>/Selector' */
  boolean_T Operator_ho0;              /* '<S56>/Operator' */
  boolean_T Reshape_n[2];              /* '<S48>/Reshape' */
  boolean_T Unit_Delay_fl;             /* '<S48>/Unit_Delay' */
  boolean_T Selector_i;                /* '<S48>/Selector' */
  boolean_T Operator_ou;               /* '<S50>/Operator' */
  boolean_T Reshape_i[2];              /* '<S42>/Reshape' */
  boolean_T Unit_Delay_m0;             /* '<S42>/Unit_Delay' */
  boolean_T Selector_gs;               /* '<S42>/Selector' */
  boolean_T Operator_dh;               /* '<S44>/Operator' */
  boolean_T Reshape_a5[2];             /* '<S36>/Reshape' */
  boolean_T Unit_Delay_g;              /* '<S36>/Unit_Delay' */
  boolean_T Selector_b;                /* '<S36>/Selector' */
  boolean_T Operator_bsv;              /* '<S38>/Operator' */
  boolean_T Reshape_g[2];              /* '<S30>/Reshape' */
  boolean_T Unit_Delay_h4;             /* '<S30>/Unit_Delay' */
  boolean_T Selector_d;                /* '<S30>/Selector' */
  boolean_T Operator_f5;               /* '<S32>/Operator' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_ms;/* '<S1032>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1031>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1031>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_l;/* '<S1031>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_f;/* '<S1031>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_d_T If_Then_Else_ou;/* '<S970>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_hl;/* '<S969>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ki;/* '<S794>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p1;/* '<S789>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iz;/* '<S788>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_f;/* '<S719>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_f;/* '<S719>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S719>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_l;/* '<S719>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_j;/* '<S737>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_nx;/* '<S772>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m;/* '<S772>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_c;/* '<S736>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S764>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n;/* '<S764>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_l;/* '<S735>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_n;/* '<S756>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b;/* '<S756>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_a;/* '<S734>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_g;/* '<S748>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S748>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S733>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_i;/* '<S740>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S740>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S717>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S717>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S717>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S452>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S377>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S334>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S366>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S332>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S353>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_j;/* '<S344>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S347>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S338>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S337>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S324>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S316>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S315>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b3;/* '<S314>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o0;/* '<S301>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m0;/* '<S301>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_mf_T If_Then_Else_co;/* '<S299>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_m;/* '<S274>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m1;/* '<S274>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S295>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S295>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S293>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pe;/* '<S293>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h3;/* '<S267>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pi;/* '<S267>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_cp;/* '<S262>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S261>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_n;/* '<S238>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_h;/* '<S238>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_a;/* '<S213>/If_Then_Else' */
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
  B_If_Then_Else_L4_MABX_m_T If_Then_Else_la;/* '<S98>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_gx;/* '<S173>/If_Then_Else1' */
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
  B_If_Then_Else_L4_MABX_T If_Then_Else_izl;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lw;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_o;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S751>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S743>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_n;     /* '<S767>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S759>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S788>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_j;         /* '<S789>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_b;     /* '<S787>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S786>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_k;     /* '<S775>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S389>/Unit Delay' */
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
  real_T Unit_Delay_DSTATE;            /* '<S883>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_k;          /* '<S802>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S797>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_o;          /* '<S633>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_ob;         /* '<S509>/Unit_Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S382>/Unit Delay1' */
  real_T LongitudnalPosition_DSTATE;   /* '<S383>/LongitudnalPosition' */
  real_T VehHeading_DSTATE;            /* '<S383>/VehHeading' */
  real_T XPosition_DSTATE;             /* '<S383>/XPosition' */
  real_T YPosition_DSTATE;             /* '<S383>/YPosition' */
  real_T Unit_Delay_DSTATE_e;          /* '<S334>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_h;     /* '<S381>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_m;          /* '<S378>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_g;          /* '<S332>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_hq;    /* '<S370>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_b;          /* '<S367>/Unit_Delay' */
  real_T DelayInput1_DSTATE[2];        /* '<S329>/Delay Input1' */
  real_T Unit_Delay_DSTATE_bw;         /* '<S347>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S358>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_p;          /* '<S356>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S336>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_ej;    /* '<S342>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S337>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S337>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S337>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S335>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S197>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S196>/UD' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S314>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S315>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_p;         /* '<S316>/Unit_Delay2' */
  real_T UnitDelay_DSTATE_m;           /* '<S288>/Unit Delay' */
  real_T UnitDelay_DSTATE_m0;          /* '<S289>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S289>/Unit Delay1' */
  real_T Error5HzLPF_states[3];        /* '<S274>/Error 5Hz LPF' */
  real_T Integrator_DSTATE;            /* '<S298>/Integrator' */
  real_T Filter_DSTATE;                /* '<S298>/Filter' */
  real_T DelayInput_DSTATE;            /* '<S300>/Delay Input' */
  real_T DelayOutput_DSTATE;           /* '<S300>/Delay Output' */
  real_T uHzLPF_states[3];             /* '<S274>/5Hz LPF' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S292>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE;           /* '<S308>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S80>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_e;           /* '<S80>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pe;    /* '<S360>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g0;    /* '<S361>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S355>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S327>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a;     /* '<S266>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_m;         /* '<S261>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_fz;         /* '<S216>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_obz;        /* '<S178>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_d;     /* '<S192>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_om;         /* '<S189>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_c;          /* '<S177>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_b0;    /* '<S185>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_oj;         /* '<S182>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_eu;         /* '<S140>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g2;    /* '<S172>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_c;         /* '<S167>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_h;          /* '<S139>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_d;          /* '<S105>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g1;    /* '<S134>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_dy;        /* '<S129>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_i;          /* '<S104>/Unit_Delay' */
  volatile real_T RateTransition_Buffer0;/* '<S403>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S403>/Rate Transition' */
  real_T TmpRTBAtANDInport1_Buffer0;   /* synthesized block */
  real_T Subtract_DWORK1;              /* '<S633>/Subtract' */
  real_T TmpRTBAtSignalConversion1Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion3Inport;/* synthesized block */
  real_T TmpRTBAtSignalConversion2Inport;/* synthesized block */
  real_T TmpRTBAtrad2deg1Inport1_Buffer0;/* synthesized block */
  real_T TmpRTBAtsignCurveOffsetInport1_;/* synthesized block */
  real_T TmpRTBAtAdd2Inport2_Buffer0;  /* synthesized block */
  real_T PrevY;                        /* '<S299>/Limit Rate Limiter' */
  real_T TimeFinal;                    /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityInitialLimited;       /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T VelocityFinalLimited;         /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationInitialLimited;   /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T AccelerationFinalLimited;     /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk56;                       /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Jerk12;                       /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T a;                            /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T b;                            /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T c;                            /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T Acceleration34;               /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  real_T INVERTER_RELAY_ON_DELAY_SECS_AP;/* '<S205>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_ON_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T IGN_RELAY_OFF_DELAY_SECS_APV; /* '<S205>/Relay_control_state_machine' */
  real_T INVERTER_RELAY_OFF_DELAY_SECS_A;/* '<S205>/Relay_control_state_machine' */
  real_T MABX_RELAY_ON_DELAY_SECS_APV; /* '<S205>/Relay_control_state_machine' */
  real_T MABX_RELAY_OFF_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T SENSOR_RELAY_OFF_DELAY_SECS_APV;/* '<S205>/Relay_control_state_machine' */
  real_T IGN_RELAY_ON_DELAY_SECS_APV;  /* '<S205>/Relay_control_state_machine' */
  void *dsa_tcpip_setup_PWORK;         /* '<S386>/dsa_tcpip_setup' */
  void *TCPIP_Com_PWORK;               /* '<S387>/TCPIP_Com' */
  void* Assertion_slioAccessor;        /* '<S738>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S746>/Assertion' */
  void* Assertion_slioAccessor_c;      /* '<S754>/Assertion' */
  void* Assertion_slioAccessor_i;      /* '<S762>/Assertion' */
  void* Assertion_slioAccessor_ks;     /* '<S770>/Assertion' */
  void* Assertion_slioAccessor_ce;     /* '<S795>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S278>/Assertion' */
  void* Assertion_slioAccessor_km;     /* '<S283>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S340>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S368>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S379>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S325>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S264>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S190>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S183>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S170>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S132>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S278>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S283>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S1005>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j;         /* '<S990>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_a;         /* '<S962>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_hi;        /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j1;        /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_125_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_126_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S385>/Heartbeat' */
  int32_T clockTickCounter_e;          /* '<S1033>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S631>/Add' */
  uint32_T Subtract_DWORK1_b;          /* '<S1005>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S986>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S205>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S386>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S446>/S-Function1' */
  int_T SFunction1_IWORK_m[2];         /* '<S447>/S-Function1' */
  int_T SFunction1_IWORK_n[2];         /* '<S448>/S-Function1' */
  int_T SFunction1_IWORK_k[2];         /* '<S449>/S-Function1' */
  int_T SFunction1_IWORK_ka[2];        /* '<S450>/S-Function1' */
  int_T SFunction1_IWORK_g[2];         /* '<S451>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S395>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S751>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_h;    /* '<S743>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S767>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S759>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S787>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_e;    /* '<S786>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_n;    /* '<S775>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_a;         /* '<S814>/Unit Delay1' */
  uint8_T Unit_Delay_135_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_m;    /* '<S797>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_k[17];      /* '<S630>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_es[39];     /* '<S506>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S381>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ip;   /* '<S370>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S358>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_cn;   /* '<S342>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S360>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gx;   /* '<S361>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S327>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S134>/FixPt Unit Delay2' */
  boolean_T Unit_Delay_DSTATE_d5;      /* '<S721>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S788>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_c;      /* '<S721>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_i;      /* '<S789>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S631>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_c0;      /* '<S631>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_p4;      /* '<S637>/Unit_Delay' */
  boolean_T Unit_Delay_79_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S391>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S814>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S814>/Unit Delay3' */
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
  boolean_T Unit_Delay2_DSTATE_l;      /* '<S631>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_o;      /* '<S631>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_c1;      /* '<S638>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eg;      /* '<S1004>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mz;      /* '<S966>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ju;      /* '<S989>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_g0;      /* '<S961>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_fk;      /* '<S793>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_fo;      /* '<S794>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ki;      /* '<S792>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S376>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S377>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S365>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S366>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ko;      /* '<S349>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l;       /* '<S338>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eu4;     /* '<S101>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_d;      /* '<S197>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_db;     /* '<S314>/Unit_Delay1' */
  boolean_T DelayInput1_DSTATE_f0;     /* '<S313>/Delay Input1' */
  boolean_T Unit_Delay1_DSTATE_a;      /* '<S315>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_p;      /* '<S316>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_bd;      /* '<S323>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_jt;      /* '<S324>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ll;      /* '<S322>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_p1;     /* '<S214>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_lq;      /* '<S214>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_be;      /* '<S241>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE_h;      /* '<S261>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_fi;      /* '<S262>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_a;       /* '<S188>/Unit_Delay' */
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
  volatile int8_T RateTransition_write_buf;/* '<S403>/Rate Transition' */
  volatile int8_T RateTransition_read_buf;/* '<S403>/Rate Transition' */
  volatile int8_T RateTransition_last_buf_wr;/* '<S403>/Rate Transition' */
  int8_T LongitudnalPosition_PrevResetSt;/* '<S383>/LongitudnalPosition' */
  int8_T VehHeading_PrevResetState;    /* '<S383>/VehHeading' */
  int8_T XPosition_PrevResetState;     /* '<S383>/XPosition' */
  int8_T YPosition_PrevResetState;     /* '<S383>/YPosition' */
  int8_T Integrator_PrevResetState;    /* '<S298>/Integrator' */
  int8_T Filter_PrevResetState;        /* '<S298>/Filter' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S292>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_e;/* '<S80>/Discrete-Time Integrator' */
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S814>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S814>/Chart' */
  uint8_T temporalCounter_i1_a;        /* '<S814>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S800>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S800>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S718>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S718>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S718>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S718>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S718>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_m;       /* '<S718>/Health State Machine PWM Sensor 1' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S292>/Discrete-Time Integrator' */
  uint8_T is_active_c12_SUB_L4_Task_10ms_;/* '<S276>/Chart' */
  uint8_T is_c12_SUB_L4_Task_10ms_SUB_STE;/* '<S276>/Chart' */
  uint8_T is_active_c6_SUB_L4_Task_10ms_S;/* '<S205>/Relay_control_state_machine' */
  uint8_T is_c6_SUB_L4_Task_10ms_SUB_STAT;/* '<S205>/Relay_control_state_machine' */
  uint8_T is_POWER_UP_ROUTINE;         /* '<S205>/Relay_control_state_machine' */
  uint8_T is_POWER_DOWN_ROUTINE;       /* '<S205>/Relay_control_state_machine' */
  uint8_T is_active_c19_SUB_L4_Task_10ms_;/* '<S79>/Chart' */
  uint8_T is_c19_SUB_L4_Task_10ms_SUB_STA;/* '<S79>/Chart' */
  boolean_T AlternateMethod;           /* '<S331>/VehicleSpeedSetpointDynamicCalculation' */
  boolean_T Slew_at_event_MODE;        /* '<S715>/Slew_at_event' */
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
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1018>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_g;/* '<S1017>/CAN_TYPE1_TX_M1_C1' */
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

/* Parameters for system: '<S932>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S947>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1046>/Constant'
                                        */
  real_T TransferFcnLeadorLag_ICPrevInpu;/* Mask Parameter: TransferFcnLeadorLag_ICPrevInpu
                                          * Referenced by: '<S300>/Delay Input'
                                          */
  real_T TransferFcnLeadorLag_ICPrevOutp;/* Mask Parameter: TransferFcnLeadorLag_ICPrevOutp
                                          * Referenced by: '<S300>/Delay Output'
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
                                        * Referenced by: '<S892>/FixPt Switch'
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
                                        * Referenced by: '<S374>/Constant'
                                        */
  real_T CompareToConstant10_const;    /* Mask Parameter: CompareToConstant10_const
                                        * Referenced by: '<S371>/Constant'
                                        */
  real_T CompareToConstant11_const;    /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S372>/Constant'
                                        */
  real_T CompareToConstant12_const;    /* Mask Parameter: CompareToConstant12_const
                                        * Referenced by: '<S373>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S362>/Constant'
                                        */
  real_T CompareToConstant8_const;     /* Mask Parameter: CompareToConstant8_const
                                        * Referenced by: '<S363>/Constant'
                                        */
  real_T CompareToConstant_const_g;    /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S306>/Constant'
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
                                        * Referenced by: '<S325>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_o;  /* Mask Parameter: CheckStaticLowerBound_min_o
                                        * Referenced by: '<S340>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_h;  /* Mask Parameter: CheckStaticLowerBound_min_h
                                        * Referenced by: '<S368>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_nz; /* Mask Parameter: CheckStaticLowerBound_min_nz
                                        * Referenced by: '<S379>/min_val'
                                        */
  real_T CheckStaticLowerBound_min_e;  /* Mask Parameter: CheckStaticLowerBound_min_e
                                        * Referenced by: '<S795>/min_val'
                                        */
  real_T DetectChange1_vinit;          /* Mask Parameter: DetectChange1_vinit
                                        * Referenced by: '<S329>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_n;        /* Mask Parameter: DetectChange1_vinit_n
                                        * Referenced by: '<S336>/Delay Input1'
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
                                                  * Referenced by: '<S729>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_d;/* Mask Parameter: CompareToConstant2_const_d
                                                   * Referenced by: '<S730>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_e;/* Mask Parameter: CompareToConstant3_const_e
                                                   * Referenced by: '<S725>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S781>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S780>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_b;/* Mask Parameter: CompareToConstant3_const_b
                                                   * Referenced by: '<S779>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_jx;/* Mask Parameter: CompareToConstant1_const_jx
                                                    * Referenced by: '<S778>/Constant'
                                                    */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_j2;/* Mask Parameter: CompareToConstant1_const_j2
                                                    * Referenced by: '<S724>/Constant'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_p;/* Mask Parameter: CompareToConstant_const_p
                                                            * Referenced by: '<S972>/Constant'
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
                                               * Referenced by: '<S1004>/Constant'
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
                                        * Referenced by: '<S313>/Delay Input1'
                                        */
  boolean_T DetectRisePositive1_vinit; /* Mask Parameter: DetectRisePositive1_vinit
                                        * Referenced by: '<S391>/Delay Input1'
                                        */
  uint8_T Operator_BitMask;            /* Mask Parameter: Operator_BitMask
                                        * Referenced by: '<S821>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S818>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S819>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S820>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S822>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S823>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S829>/Operator'
                                        */
  uint8_T Operator_BitMask_es;         /* Mask Parameter: Operator_BitMask_es
                                        * Referenced by: '<S826>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S827>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S828>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S830>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S831>/Operator'
                                        */
  uint8_T Operator_BitMask_dy;         /* Mask Parameter: Operator_BitMask_dy
                                        * Referenced by: '<S873>/Operator'
                                        */
  uint8_T Operator_BitMask_gi;         /* Mask Parameter: Operator_BitMask_gi
                                        * Referenced by: '<S875>/Operator'
                                        */
  uint8_T Operator_BitMask_fu;         /* Mask Parameter: Operator_BitMask_fu
                                        * Referenced by: '<S876>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S874>/Operator'
                                        */
  uint8_T Operator_BitMask_ca;         /* Mask Parameter: Operator_BitMask_ca
                                        * Referenced by: '<S877>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S878>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S851>/Operator'
                                        */
  uint8_T Operator_BitMask_pl;         /* Mask Parameter: Operator_BitMask_pl
                                        * Referenced by: '<S856>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S852>/Operator'
                                        */
  uint8_T Operator_BitMask_mt;         /* Mask Parameter: Operator_BitMask_mt
                                        * Referenced by: '<S857>/Operator'
                                        */
  uint8_T Operator_BitMask_by;         /* Mask Parameter: Operator_BitMask_by
                                        * Referenced by: '<S858>/Operator'
                                        */
  uint8_T Operator_BitMask_ch;         /* Mask Parameter: Operator_BitMask_ch
                                        * Referenced by: '<S855>/Operator'
                                        */
  uint8_T Operator_BitMask_pn;         /* Mask Parameter: Operator_BitMask_pn
                                        * Referenced by: '<S903>/Operator'
                                        */
  uint8_T Operator_BitMask_n;          /* Mask Parameter: Operator_BitMask_n
                                        * Referenced by: '<S900>/Operator'
                                        */
  uint8_T Operator_BitMask_jy;         /* Mask Parameter: Operator_BitMask_jy
                                        * Referenced by: '<S901>/Operator'
                                        */
  uint8_T Operator_BitMask_gu;         /* Mask Parameter: Operator_BitMask_gu
                                        * Referenced by: '<S902>/Operator'
                                        */
  uint8_T Operator_BitMask_dj;         /* Mask Parameter: Operator_BitMask_dj
                                        * Referenced by: '<S904>/Operator'
                                        */
  uint8_T Operator_BitMask_bu;         /* Mask Parameter: Operator_BitMask_bu
                                        * Referenced by: '<S905>/Operator'
                                        */
  uint8_T Operator_BitMask_an;         /* Mask Parameter: Operator_BitMask_an
                                        * Referenced by: '<S911>/Operator'
                                        */
  uint8_T Operator_BitMask_k3;         /* Mask Parameter: Operator_BitMask_k3
                                        * Referenced by: '<S912>/Operator'
                                        */
  uint8_T Operator_BitMask_cg;         /* Mask Parameter: Operator_BitMask_cg
                                        * Referenced by: '<S908>/Operator'
                                        */
  uint8_T Operator_BitMask_oj;         /* Mask Parameter: Operator_BitMask_oj
                                        * Referenced by: '<S909>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S910>/Operator'
                                        */
  uint8_T Operator_BitMask_hs;         /* Mask Parameter: Operator_BitMask_hs
                                        * Referenced by: '<S913>/Operator'
                                        */
  uint8_T Operator_BitMask_go;         /* Mask Parameter: Operator_BitMask_go
                                        * Referenced by: '<S926>/Operator'
                                        */
  uint8_T Operator_BitMask_o2;         /* Mask Parameter: Operator_BitMask_o2
                                        * Referenced by: '<S922>/Operator'
                                        */
  uint8_T Operator_BitMask_bw;         /* Mask Parameter: Operator_BitMask_bw
                                        * Referenced by: '<S923>/Operator'
                                        */
  uint8_T Operator_BitMask_jo;         /* Mask Parameter: Operator_BitMask_jo
                                        * Referenced by: '<S924>/Operator'
                                        */
  uint8_T Operator_BitMask_dg;         /* Mask Parameter: Operator_BitMask_dg
                                        * Referenced by: '<S925>/Operator'
                                        */
  uint8_T Operator_BitMask_ek;         /* Mask Parameter: Operator_BitMask_ek
                                        * Referenced by: '<S927>/Operator'
                                        */
  uint8_T Operator_BitMask_pt;         /* Mask Parameter: Operator_BitMask_pt
                                        * Referenced by: '<S971>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S986>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S986>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_anb;        /* Mask Parameter: Operator_BitMask_anb
                                        * Referenced by: '<S982>/Operator'
                                        */
  uint8_T Operator_BitMask_jyr;        /* Mask Parameter: Operator_BitMask_jyr
                                        * Referenced by: '<S977>/Operator'
                                        */
  uint8_T Operator_BitMask_fn;         /* Mask Parameter: Operator_BitMask_fn
                                        * Referenced by: '<S978>/Operator'
                                        */
  uint8_T Operator_BitMask_f3;         /* Mask Parameter: Operator_BitMask_f3
                                        * Referenced by: '<S979>/Operator'
                                        */
  uint8_T Operator_BitMask_bj;         /* Mask Parameter: Operator_BitMask_bj
                                        * Referenced by: '<S980>/Operator'
                                        */
  uint8_T Operator_BitMask_om;         /* Mask Parameter: Operator_BitMask_om
                                        * Referenced by: '<S981>/Operator'
                                        */
  uint8_T Operator_BitMask_p1;         /* Mask Parameter: Operator_BitMask_p1
                                        * Referenced by: '<S798>/Operator'
                                        */
  uint8_T Operator_BitMask_ed;         /* Mask Parameter: Operator_BitMask_ed
                                        * Referenced by: '<S799>/Operator'
                                        */
  uint8_T Operator_BitMask_a3;         /* Mask Parameter: Operator_BitMask_a3
                                        * Referenced by: '<S647>/Operator'
                                        */
  uint8_T Operator_BitMask_af;         /* Mask Parameter: Operator_BitMask_af
                                        * Referenced by: '<S646>/Operator'
                                        */
  uint8_T Operator_BitMask_nn;         /* Mask Parameter: Operator_BitMask_nn
                                        * Referenced by: '<S659>/Operator'
                                        */
  uint8_T Operator_BitMask_h0;         /* Mask Parameter: Operator_BitMask_h0
                                        * Referenced by: '<S658>/Operator'
                                        */
  uint8_T Operator_BitMask_f2;         /* Mask Parameter: Operator_BitMask_f2
                                        * Referenced by: '<S660>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_OutV_h[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_h
                                               * Referenced by: '<S961>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_Out_dt[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_dt
                                               * Referenced by: '<S989>/Constant'
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
                                        * Referenced by: '<S321>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_f;/* Expression: 0.0
                                          * Referenced by: '<S327>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_ah;           /* Expression: 1
                                        * Referenced by: '<S321>/Constant1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 0.5
                                        * Referenced by: '<S359>/Gain'
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
                                        * Referenced by: '<S334>/Unit_Delay'
                                        */
  real_T STABILITY_ACTIVE_VSPD_TARGET_AP;/* Expression: 0
                                          * Referenced by: '<S334>/STABILITY_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_n;            /* Expression: 255
                                        * Referenced by: '<S334>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_l;/* Expression: 0.0
                                          * Referenced by: '<S381>/FixPt Unit Delay1'
                                          */
  real_T STABILITY_CTRL_SLEW_INC_APV_Val;/* Expression: 3
                                          * Referenced by: '<S334>/STABILITY_CTRL_SLEW_INC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_hae;/* Expression: 0
                                          * Referenced by: '<S378>/Unit_Delay'
                                          */
  real_T STABILITY_CTRL_SLEW_DEC_APV_Val;/* Expression: 5
                                          * Referenced by: '<S334>/STABILITY_CTRL_SLEW_DEC_APV'
                                          */
  real_T Unit_Delay_InitialCondition_fb;/* Expression: 0
                                         * Referenced by: '<S332>/Unit_Delay'
                                         */
  real_T FCW_ACTIVE_VSPD_TARGET_APV_Valu;/* Expression: 0
                                          * Referenced by: '<S332>/FCW_ACTIVE_VSPD_TARGET_APV'
                                          */
  real_T Constant4_Value_b;            /* Expression: 255
                                        * Referenced by: '<S332>/Constant4'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_d;/* Expression: 0.0
                                          * Referenced by: '<S370>/FixPt Unit Delay1'
                                          */
  real_T FCW_CTRL_SLEW_INC_APV_Value;  /* Expression: 1
                                        * Referenced by: '<S332>/FCW_CTRL_SLEW_INC_APV'
                                        */
  real_T Unit_Delay_InitialCondition_c;/* Expression: 0
                                        * Referenced by: '<S367>/Unit_Delay'
                                        */
  real_T FCW_CTRL_SLEW_DEC_APV_Value;  /* Expression: 5000
                                        * Referenced by: '<S332>/FCW_CTRL_SLEW_DEC_APV'
                                        */
  real_T TmpRTBAtSignalConversion3Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S328>/Constant'
                                        */
  real_T TmpRTBAtSignalConversion2Inport;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation5_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S331>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S331>/Saturation5'
                                        */
  real_T MIN_VSPD_SIGMOID_INITIAL_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S331>/MIN_VSPD_SIGMOID_INITIAL_KPH_APV'
                                          */
  real_T Gain1_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S331>/Gain1'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 255
                                        * Referenced by: '<S331>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S331>/Saturation4'
                                        */
  real_T MIN_VSPD_SIGMOID_FINAL_KPH_APV_;/* Expression: 0
                                          * Referenced by: '<S331>/MIN_VSPD_SIGMOID_FINAL_KPH_APV'
                                          */
  real_T Gain2_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S331>/Gain2'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S331>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S331>/Saturation6'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 15.562
                                        * Referenced by: '<S331>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: -15.562
                                        * Referenced by: '<S331>/Saturation7'
                                        */
  real_T VEH_JERK_INITIAL_APV_Value;   /* Expression: 0.4
                                        * Referenced by: '<S81>/VEH_JERK_INITIAL_APV'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S331>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: 0.001
                                        * Referenced by: '<S331>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S331>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0.001
                                        * Referenced by: '<S331>/Saturation2'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: 3.6
                                        * Referenced by: '<S331>/Gain3'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S348>/Constant'
                                        */
  real_T Unit_Delay_InitialCondition_e;/* Expression: 0
                                        * Referenced by: '<S347>/Unit_Delay'
                                        */
  real_T MIN_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S343>/MIN_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T MAX_VSPD_DELTA_THRESHOLD_KPH_AP;/* Expression: 5
                                          * Referenced by: '<S343>/MAX_VSPD_DELTA_THRESHOLD_KPH_APV'
                                          */
  real_T ACCEL_RATE_ABS_MAX_THRESHOLD_MS;/* Expression: 5
                                          * Referenced by: '<S343>/ACCEL_RATE_ABS_MAX_THRESHOLD_MS2_APV'
                                          */
  real_T ACCEL_RATE_ABS_MIN_THRESHOLD_MS;/* Expression: -5
                                          * Referenced by: '<S343>/ACCEL_RATE_ABS_MIN_THRESHOLD_MS2_APV'
                                          */
  real_T JERK_RATE_ABS_MAX_THRESHOLD_MS3;/* Expression: 5
                                          * Referenced by: '<S343>/JERK_RATE_ABS_MAX_THRESHOLD_MS3_APV'
                                          */
  real_T JERK_RATE_ABS_MIN_THRESHOLD_MS3;/* Expression: -5
                                          * Referenced by: '<S343>/JERK_RATE_ABS_MIN_THRESHOLD_MS3_APV'
                                          */
  real_T MAX_DISTANCE_DELTA_THRESHOLD_M_;/* Expression: 0.5
                                          * Referenced by: '<S343>/MAX_DISTANCE_DELTA_THRESHOLD_M_APV'
                                          */
  real_T CPV1_Value_i;                 /* Expression: 0.1
                                        * Referenced by: '<S344>/CPV1'
                                        */
  real_T CPV_Value_h;                  /* Expression: 0
                                        * Referenced by: '<S353>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_h;/* Expression: 0.0
                                          * Referenced by: '<S358>/FixPt Unit Delay1'
                                          */
  real_T CPV1_Value_e;                 /* Expression: 1
                                        * Referenced by: '<S352>/CPV1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 1/3.6
                                        * Referenced by: '<S344>/Gain1'
                                        */
  real_T Unit_Delay_InitialCondition_j;/* Expression: 0
                                        * Referenced by: '<S356>/Unit_Delay'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_m;/* Expression: 0.0
                                          * Referenced by: '<S342>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_1_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S337>/Unit_Delay'
                                        */
  real_T Unit_Delay_2_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S337>/Unit_Delay'
                                        */
  real_T Unit_Delay_3_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S337>/Unit_Delay'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 1/3.6
                                        * Referenced by: '<S337>/Gain2'
                                        */
  real_T Saturation4_UpperSat_a;       /* Expression: 255
                                        * Referenced by: '<S337>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_e;       /* Expression: 0.001
                                        * Referenced by: '<S337>/Saturation4'
                                        */
  real_T Unit_Delay_InitialCondition_e2;/* Expression: 0
                                         * Referenced by: '<S335>/Unit_Delay'
                                         */
  real_T Saturation1_UpperSat_j;       /* Expression: Inf
                                        * Referenced by: '<S337>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0.001
                                        * Referenced by: '<S337>/Saturation1'
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
                                        * Referenced by: '<S314>/Saturation'
                                        */
  real_T Saturation_LowerSat_p2;       /* Expression: 0.0001
                                        * Referenced by: '<S314>/Saturation'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S314>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_g;/* Expression: 0
                                         * Referenced by: '<S314>/Unit_Delay2'
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
                                        * Referenced by: '<S315>/Saturation'
                                        */
  real_T Saturation_LowerSat_ph;       /* Expression: 0.0001
                                        * Referenced by: '<S315>/Saturation'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S315>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ji;/* Expression: 0
                                          * Referenced by: '<S315>/Unit_Delay2'
                                          */
  real_T timeConstant5_Value;          /* Expression: .01
                                        * Referenced by: '<S275>/timeConstant5'
                                        */
  real_T timeConstant4_Value;          /* Expression: .5
                                        * Referenced by: '<S275>/timeConstant4'
                                        */
  real_T Saturation_UpperSat_ok;       /* Expression: Inf
                                        * Referenced by: '<S316>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0.0001
                                        * Referenced by: '<S316>/Saturation'
                                        */
  real_T Constant1_Value_oi;           /* Expression: 1
                                        * Referenced by: '<S316>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_ap;/* Expression: 0
                                          * Referenced by: '<S316>/Unit_Delay2'
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
  real_T SaturationSpeedLookup_tableData[6];/* Expression: [1,0.9,0.8,0.5,0.35,0.3]
                                             * Referenced by: '<S299>/Saturation Speed Lookup'
                                             */
  real_T SaturationSpeedLookup_bp01Data[6];/* Expression: [10,20,30,50,70,100]
                                            * Referenced by: '<S299>/Saturation Speed Lookup'
                                            */
  real_T CurvatureLookupTable_tableData[5];/* Expression: [0.0001,0.001,0.1,0.2,1]
                                            * Referenced by: '<S299>/Curvature Lookup Table'
                                            */
  real_T CurvatureLookupTable_bp01Data[5];/* Expression: [0.00001,0.0001,0.1,0.2,0.5]
                                           * Referenced by: '<S299>/Curvature Lookup Table'
                                           */
  real_T Error5HzLPF_NumCoef[4];       /* Expression: [0   0.003864487551074   0.013274721856995   0.002862882791433]
                                        * Referenced by: '<S274>/Error 5Hz LPF'
                                        */
  real_T Error5HzLPF_DenCoef[4];       /* Expression: [1.000000000000000  -2.404462450768444   1.973276179061975  -0.548811636094028]
                                        * Referenced by: '<S274>/Error 5Hz LPF'
                                        */
  real_T Error5HzLPF_InitialStates;    /* Expression: 0
                                        * Referenced by: '<S274>/Error 5Hz LPF'
                                        */
  real_T ErrorLookupTable_tableData[5];/* Expression: [0.0001,0.001,0.1,0.2,1]
                                        * Referenced by: '<S299>/Error Lookup Table'
                                        */
  real_T ErrorLookupTable_bp01Data[5]; /* Expression: [0.001,0.01,0.1,0.5,1]
                                        * Referenced by: '<S299>/Error Lookup Table'
                                        */
  real_T SpeedLookupTable_tableData[6];/* Expression: [1,0.6,0.3,0.1,0.05,0.01]
                                        * Referenced by: '<S299>/Speed Lookup Table'
                                        */
  real_T SpeedLookupTable_bp01Data[6]; /* Expression: [10,20,30,50,70,100]
                                        * Referenced by: '<S299>/Speed Lookup Table'
                                        */
  real_T LimitRateLimiter_RisingLim;   /* Computed Parameter: LimitRateLimiter_RisingLim
                                        * Referenced by: '<S299>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_FallingLim;  /* Computed Parameter: LimitRateLimiter_FallingLim
                                        * Referenced by: '<S299>/Limit Rate Limiter'
                                        */
  real_T LimitRateLimiter_IC;          /* Expression: 0
                                        * Referenced by: '<S299>/Limit Rate Limiter'
                                        */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S308>/sample time'
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
  real_T uHzLPF_NumCoef[4];            /* Expression: [0   0.003864487551074   0.013274721856995   0.002862882791433]
                                        * Referenced by: '<S274>/5Hz LPF'
                                        */
  real_T uHzLPF_DenCoef[4];            /* Expression: [1.000000000000000  -2.404462450768444   1.973276179061975  -0.548811636094028]
                                        * Referenced by: '<S274>/5Hz LPF'
                                        */
  real_T uHzLPF_InitialStates;         /* Expression: 0
                                        * Referenced by: '<S274>/5Hz LPF'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S292>/Discrete-Time Integrator'
                                         */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S308>/Delay Input2'
                                        */
  real_T Gain3_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S299>/Gain3'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S299>/Gain1'
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
  real_T UnitDelay_InitialCondition_g1;/* Expression: 0
                                        * Referenced by: '<S80>/Unit Delay'
                                        */
  real_T sign2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S80>/sign2'
                                        */
  real_T CPV_Value_g;                  /* Expression: 1
                                        * Referenced by: '<S352>/CPV'
                                        */
  real_T CPV2_Value_p;                 /* Expression: 1
                                        * Referenced by: '<S352>/CPV2'
                                        */
  real_T CPV_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S354>/CPV'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dl;/* Expression: 0.0
                                          * Referenced by: '<S360>/FixPt Unit Delay1'
                                          */
  real_T Integrator_method_Value;      /* Expression: 1
                                        * Referenced by: '<S359>/Integrator_method'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_ol;/* Expression: 0.0
                                          * Referenced by: '<S361>/FixPt Unit Delay1'
                                          */
  real_T Unit_Delay_InitialCondition_b;/* Expression: 0
                                        * Referenced by: '<S355>/Unit_Delay'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant'
                                        */
  real_T MaximumGoodHDOP_Value;        /* Expression: 2.5
                                        * Referenced by: '<S382>/MaximumGoodHDOP'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant1'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S382>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant18'
                                        */
  real_T Constant19_Value_m;           /* Expression: 0
                                        * Referenced by: '<S382>/Constant19'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant2'
                                        */
  real_T Constant20_Value_i;           /* Expression: 0
                                        * Referenced by: '<S382>/Constant20'
                                        */
  real_T Constant21_Value_g;           /* Expression: 0
                                        * Referenced by: '<S382>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S382>/Constant25'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant3'
                                        */
  real_T Constant4_Value_m;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant4'
                                        */
  real_T Constant5_Value_b;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S382>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S382>/Constant8'
                                        */
  real_T Constant9_Value_m;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant9'
                                        */
  real_T kph2mps_Gain_l;               /* Expression: 1/3.6
                                        * Referenced by: '<S382>/kph2mps'
                                        */
  real_T lookAheadTime_Value;          /* Expression: 2
                                        * Referenced by: '<S382>/lookAheadTime'
                                        */
  real_T kph2mps1_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S382>/kph2mps1'
                                        */
  real_T lookAheadTime1_Value;         /* Expression: 15
                                        * Referenced by: '<S382>/lookAheadTime1'
                                        */
  real_T UnitDelay1_InitialCondition_p;/* Expression: 0
                                        * Referenced by: '<S382>/Unit Delay1'
                                        */
  real_T InitialHeading_Value;         /* Expression: 0
                                        * Referenced by: '<S383>/InitialHeading'
                                        */
  real_T InitialPosition_Value;        /* Expression: 0
                                        * Referenced by: '<S383>/InitialPosition'
                                        */
  real_T InitialXPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S383>/InitialXPosition'
                                        */
  real_T InitialYPosition_Value;       /* Expression: 0
                                        * Referenced by: '<S383>/InitialYPosition'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 1000/3600
                                        * Referenced by: '<S71>/kph2ms'
                                        */
  real_T LongitudnalPosition_gainval;  /* Computed Parameter: LongitudnalPosition_gainval
                                        * Referenced by: '<S383>/LongitudnalPosition'
                                        */
  real_T reset_Value;                  /* Expression: 0
                                        * Referenced by: '<S383>/reset'
                                        */
  real_T VehHeading_gainval;           /* Computed Parameter: VehHeading_gainval
                                        * Referenced by: '<S383>/VehHeading'
                                        */
  real_T XPosition_gainval;            /* Computed Parameter: XPosition_gainval
                                        * Referenced by: '<S383>/XPosition'
                                        */
  real_T YPosition_gainval;            /* Computed Parameter: YPosition_gainval
                                        * Referenced by: '<S383>/YPosition'
                                        */
  real_T for_logging6_Gain;            /* Expression: 1
                                        * Referenced by: '<S384>/for_logging6'
                                        */
  real_T for_logging5_Gain;            /* Expression: 1
                                        * Referenced by: '<S384>/for_logging5'
                                        */
  real_T for_logging4_Gain;            /* Expression: 1
                                        * Referenced by: '<S384>/for_logging4'
                                        */
  real_T for_logging3_Gain;            /* Expression: 1
                                        * Referenced by: '<S384>/for_logging3'
                                        */
  real_T for_logging2_Gain;            /* Expression: 1
                                        * Referenced by: '<S384>/for_logging2'
                                        */
  real_T ms_to_kmh_2_Gain;             /* Expression: 3.6
                                        * Referenced by: '<S384>/m//s_to_km//h_2'
                                        */
  real_T ms_to_kmh_Gain;               /* Expression: 3.6
                                        * Referenced by: '<S384>/m//s_to_km//h'
                                        */
  real_T for_logging1_Gain;            /* Expression: 1
                                        * Referenced by: '<S384>/for_logging1'
                                        */
  real_T for_logging_Gain;             /* Expression: 1
                                        * Referenced by: '<S384>/for_logging'
                                        */
  real_T Constant_Value_hp;            /* Expression: 1
                                        * Referenced by: '<S389>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S389>/Constant1'
                                        */
  real_T byte1_Y0;                     /* Computed Parameter: byte1_Y0
                                        * Referenced by: '<S463>/byte1'
                                        */
  real_T byte2_Y0;                     /* Computed Parameter: byte2_Y0
                                        * Referenced by: '<S463>/byte2'
                                        */
  real_T byte3_Y0;                     /* Computed Parameter: byte3_Y0
                                        * Referenced by: '<S463>/byte3'
                                        */
  real_T byte4_Y0;                     /* Computed Parameter: byte4_Y0
                                        * Referenced by: '<S463>/byte4'
                                        */
  real_T byte5_Y0;                     /* Computed Parameter: byte5_Y0
                                        * Referenced by: '<S463>/byte5'
                                        */
  real_T byte6_Y0;                     /* Computed Parameter: byte6_Y0
                                        * Referenced by: '<S463>/byte6'
                                        */
  real_T byte7_Y0;                     /* Computed Parameter: byte7_Y0
                                        * Referenced by: '<S463>/byte7'
                                        */
  real_T byte8_Y0;                     /* Computed Parameter: byte8_Y0
                                        * Referenced by: '<S463>/byte8'
                                        */
  real_T RXstatus_Y0;                  /* Computed Parameter: RXstatus_Y0
                                        * Referenced by: '<S463>/RX status'
                                        */
  real_T RXtime_Y0;                    /* Computed Parameter: RXtime_Y0
                                        * Referenced by: '<S463>/RX time'
                                        */
  real_T RXdeltatime_Y0;               /* Computed Parameter: RXdeltatime_Y0
                                        * Referenced by: '<S463>/RX delta time'
                                        */
  real_T byte1_Y0_f;                   /* Computed Parameter: byte1_Y0_f
                                        * Referenced by: '<S472>/byte1'
                                        */
  real_T byte2_Y0_i;                   /* Computed Parameter: byte2_Y0_i
                                        * Referenced by: '<S472>/byte2'
                                        */
  real_T byte3_Y0_o;                   /* Computed Parameter: byte3_Y0_o
                                        * Referenced by: '<S472>/byte3'
                                        */
  real_T byte4_Y0_h;                   /* Computed Parameter: byte4_Y0_h
                                        * Referenced by: '<S472>/byte4'
                                        */
  real_T byte5_Y0_d;                   /* Computed Parameter: byte5_Y0_d
                                        * Referenced by: '<S472>/byte5'
                                        */
  real_T byte6_Y0_k;                   /* Computed Parameter: byte6_Y0_k
                                        * Referenced by: '<S472>/byte6'
                                        */
  real_T byte7_Y0_k;                   /* Computed Parameter: byte7_Y0_k
                                        * Referenced by: '<S472>/byte7'
                                        */
  real_T byte8_Y0_n;                   /* Computed Parameter: byte8_Y0_n
                                        * Referenced by: '<S472>/byte8'
                                        */
  real_T RXstatus_Y0_k;                /* Computed Parameter: RXstatus_Y0_k
                                        * Referenced by: '<S472>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S472>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
                                        * Referenced by: '<S472>/RX delta time'
                                        */
  real_T SpeedOfForwardVehicle_Y0;     /* Computed Parameter: SpeedOfForwardVehicle_Y0
                                        * Referenced by: '<S480>/SpeedOfForwardVehicle'
                                        */
  real_T DistanceToForwardVehicle_Y0;  /* Computed Parameter: DistanceToForwardVehicle_Y0
                                        * Referenced by: '<S480>/DistanceToForwardVehicle'
                                        */
  real_T AdaptiveCruiseCtrlSetSpeed_Y0;/* Computed Parameter: AdaptiveCruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S480>/AdaptiveCruiseCtrlSetSpeed'
                                        */
  real_T AdaptiveCruiseCtrlMode_Y0;    /* Computed Parameter: AdaptiveCruiseCtrlMode_Y0
                                        * Referenced by: '<S480>/AdaptiveCruiseCtrlMode'
                                        */
  real_T AdptveCruiseCtrlSetDistanceMode;/* Computed Parameter: AdptveCruiseCtrlSetDistanceMode
                                          * Referenced by: '<S480>/AdptveCruiseCtrlSetDistanceMode'
                                          */
  real_T RoadCurvature_Y0;             /* Computed Parameter: RoadCurvature_Y0
                                        * Referenced by: '<S480>/RoadCurvature'
                                        */
  real_T ACCTargetDetected_Y0;         /* Computed Parameter: ACCTargetDetected_Y0
                                        * Referenced by: '<S480>/ACCTargetDetected'
                                        */
  real_T ACCSystemShutoffWarning_Y0;   /* Computed Parameter: ACCSystemShutoffWarning_Y0
                                        * Referenced by: '<S480>/ACCSystemShutoffWarning'
                                        */
  real_T ACCDistanceAlertSignal_Y0;    /* Computed Parameter: ACCDistanceAlertSignal_Y0
                                        * Referenced by: '<S480>/ACCDistanceAlertSignal'
                                        */
  real_T ForwardCollisionWarning_Y0;   /* Computed Parameter: ForwardCollisionWarning_Y0
                                        * Referenced by: '<S480>/ForwardCollisionWarning'
                                        */
  real_T RXstatus_Y0_i;                /* Computed Parameter: RXstatus_Y0_i
                                        * Referenced by: '<S480>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S480>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
                                        * Referenced by: '<S480>/RX delta time'
                                        */
  real_T AdvEmergencyBrkSysState_Y0;   /* Computed Parameter: AdvEmergencyBrkSysState_Y0
                                        * Referenced by: '<S482>/AdvEmergencyBrkSysState'
                                        */
  real_T CollisionWarningLevel_Y0;     /* Computed Parameter: CollisionWarningLevel_Y0
                                        * Referenced by: '<S482>/CollisionWarningLevel'
                                        */
  real_T RelObjctDetForAdvEmergBrakingSy;/* Computed Parameter: RelObjctDetForAdvEmergBrakingSy
                                          * Referenced by: '<S482>/RelObjctDetForAdvEmergBrakingSys'
                                          */
  real_T BendOffProbabOfRelevantObject_Y;/* Computed Parameter: BendOffProbabOfRelevantObject_Y
                                          * Referenced by: '<S482>/BendOffProbabOfRelevantObject'
                                          */
  real_T TimeToCollisionWithRelevantObj_;/* Computed Parameter: TimeToCollisionWithRelevantObj_
                                          * Referenced by: '<S482>/TimeToCollisionWithRelevantObj'
                                          */
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S482>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S482>/RX time'
                                        */
  real_T RXdeltatime_Y0_gs;            /* Computed Parameter: RXdeltatime_Y0_gs
                                        * Referenced by: '<S482>/RX delta time'
                                        */
  real_T PneumaticSupplyPress_Y0;      /* Computed Parameter: PneumaticSupplyPress_Y0
                                        * Referenced by: '<S484>/PneumaticSupplyPress'
                                        */
  real_T ParkingAnd_orTrailerAirPress_Y0;/* Computed Parameter: ParkingAnd_orTrailerAirPress_Y0
                                          * Referenced by: '<S484>/ParkingAnd_orTrailerAirPress'
                                          */
  real_T ServiceBrakeCircuit1AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit1AirPress_Y0
                                          * Referenced by: '<S484>/ServiceBrakeCircuit1AirPress'
                                          */
  real_T ServiceBrakeCircuit2AirPress_Y0;/* Computed Parameter: ServiceBrakeCircuit2AirPress_Y0
                                          * Referenced by: '<S484>/ServiceBrakeCircuit2AirPress'
                                          */
  real_T AuxEquipmentSupplyPress_Y0;   /* Computed Parameter: AuxEquipmentSupplyPress_Y0
                                        * Referenced by: '<S484>/AuxEquipmentSupplyPress'
                                        */
  real_T AirSuspensionSupplyPress_Y0;  /* Computed Parameter: AirSuspensionSupplyPress_Y0
                                        * Referenced by: '<S484>/AirSuspensionSupplyPress'
                                        */
  real_T AirCompressorStatus_Y0;       /* Computed Parameter: AirCompressorStatus_Y0
                                        * Referenced by: '<S484>/AirCompressorStatus'
                                        */
  real_T PowertrainCircuitAirSupplyPress;/* Computed Parameter: PowertrainCircuitAirSupplyPress
                                          * Referenced by: '<S484>/PowertrainCircuitAirSupplyPress'
                                          */
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S484>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S484>/RX time'
                                        */
  real_T RXdeltatime_Y0_kv;            /* Computed Parameter: RXdeltatime_Y0_kv
                                        * Referenced by: '<S484>/RX delta time'
                                        */
  real_T BarometricPress_Y0;           /* Computed Parameter: BarometricPress_Y0
                                        * Referenced by: '<S486>/BarometricPress'
                                        */
  real_T CabInteriorTemp_Y0;           /* Computed Parameter: CabInteriorTemp_Y0
                                        * Referenced by: '<S486>/CabInteriorTemp'
                                        */
  real_T AmbientAirTemp_Y0;            /* Computed Parameter: AmbientAirTemp_Y0
                                        * Referenced by: '<S486>/AmbientAirTemp'
                                        */
  real_T EngAirIntakeTemp_Y0;          /* Computed Parameter: EngAirIntakeTemp_Y0
                                        * Referenced by: '<S486>/EngAirIntakeTemp'
                                        */
  real_T RoadSurfaceTemp_Y0;           /* Computed Parameter: RoadSurfaceTemp_Y0
                                        * Referenced by: '<S486>/RoadSurfaceTemp'
                                        */
  real_T RXstatus_Y0_j;                /* Computed Parameter: RXstatus_Y0_j
                                        * Referenced by: '<S486>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S486>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
                                        * Referenced by: '<S486>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S488>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S488>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_e;                /* Computed Parameter: RXstatus_Y0_e
                                        * Referenced by: '<S488>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S488>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S488>/RX delta time'
                                        */
  real_T tr0_track_selection_status_Y0;/* Computed Parameter: tr0_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr0_track_selection_status'
                                        */
  real_T tr0_corrected_lateral_distance_;/* Computed Parameter: tr0_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr0_corrected_lateral_distance'
                                          */
  real_T tr1_track_selection_status_Y0;/* Computed Parameter: tr1_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr1_track_selection_status'
                                        */
  real_T tr1_corrected_lateral_distance_;/* Computed Parameter: tr1_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr1_corrected_lateral_distance'
                                          */
  real_T tr2_track_selection_status_Y0;/* Computed Parameter: tr2_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr2_track_selection_status'
                                        */
  real_T tr2_corrected_lateral_distance_;/* Computed Parameter: tr2_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr2_corrected_lateral_distance'
                                          */
  real_T tr3_track_selection_status_Y0;/* Computed Parameter: tr3_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr3_track_selection_status'
                                        */
  real_T tr3_corrected_lateral_distance_;/* Computed Parameter: tr3_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr3_corrected_lateral_distance'
                                          */
  real_T tr4_track_selection_status_Y0;/* Computed Parameter: tr4_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr4_track_selection_status'
                                        */
  real_T tr4_corrected_lateral_distance_;/* Computed Parameter: tr4_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr4_corrected_lateral_distance'
                                          */
  real_T tr5_track_selection_status_Y0;/* Computed Parameter: tr5_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr5_track_selection_status'
                                        */
  real_T tr5_corrected_lateral_distance_;/* Computed Parameter: tr5_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr5_corrected_lateral_distance'
                                          */
  real_T tr6_track_selection_status_Y0;/* Computed Parameter: tr6_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr6_track_selection_status'
                                        */
  real_T tr6_corrected_lateral_distance_;/* Computed Parameter: tr6_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr6_corrected_lateral_distance'
                                          */
  real_T tr7_track_selection_status_Y0;/* Computed Parameter: tr7_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr7_track_selection_status'
                                        */
  real_T tr7_corrected_lateral_distance_;/* Computed Parameter: tr7_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr7_corrected_lateral_distance'
                                          */
  real_T tr8_track_selection_status_Y0;/* Computed Parameter: tr8_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr8_track_selection_status'
                                        */
  real_T tr8_corrected_lateral_distance_;/* Computed Parameter: tr8_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr8_corrected_lateral_distance'
                                          */
  real_T tr9_track_selection_status_Y0;/* Computed Parameter: tr9_track_selection_status_Y0
                                        * Referenced by: '<S490>/tr9_track_selection_status'
                                        */
  real_T tr9_corrected_lateral_distance_;/* Computed Parameter: tr9_corrected_lateral_distance_
                                          * Referenced by: '<S490>/tr9_corrected_lateral_distance'
                                          */
  real_T tr0_lateral_position_Y0;      /* Computed Parameter: tr0_lateral_position_Y0
                                        * Referenced by: '<S490>/tr0_lateral_position'
                                        */
  real_T tr1_lateral_position_Y0;      /* Computed Parameter: tr1_lateral_position_Y0
                                        * Referenced by: '<S490>/tr1_lateral_position'
                                        */
  real_T tr2_lateral_position_Y0;      /* Computed Parameter: tr2_lateral_position_Y0
                                        * Referenced by: '<S490>/tr2_lateral_position'
                                        */
  real_T tr3_lateral_position_Y0;      /* Computed Parameter: tr3_lateral_position_Y0
                                        * Referenced by: '<S490>/tr3_lateral_position'
                                        */
  real_T tr4_lateral_position_Y0;      /* Computed Parameter: tr4_lateral_position_Y0
                                        * Referenced by: '<S490>/tr4_lateral_position'
                                        */
  real_T tr5_lateral_position_Y0;      /* Computed Parameter: tr5_lateral_position_Y0
                                        * Referenced by: '<S490>/tr5_lateral_position'
                                        */
  real_T tr6_lateral_position_Y0;      /* Computed Parameter: tr6_lateral_position_Y0
                                        * Referenced by: '<S490>/tr6_lateral_position'
                                        */
  real_T tr7_lateral_position_Y0;      /* Computed Parameter: tr7_lateral_position_Y0
                                        * Referenced by: '<S490>/tr7_lateral_position'
                                        */
  real_T tr8_lateral_position_Y0;      /* Computed Parameter: tr8_lateral_position_Y0
                                        * Referenced by: '<S490>/tr8_lateral_position'
                                        */
  real_T tr9_lateral_position_Y0;      /* Computed Parameter: tr9_lateral_position_Y0
                                        * Referenced by: '<S490>/tr9_lateral_position'
                                        */
  real_T tr0_range_Y0;                 /* Computed Parameter: tr0_range_Y0
                                        * Referenced by: '<S490>/tr0_range'
                                        */
  real_T tr1_range_Y0;                 /* Computed Parameter: tr1_range_Y0
                                        * Referenced by: '<S490>/tr1_range'
                                        */
  real_T tr2_range_Y0;                 /* Computed Parameter: tr2_range_Y0
                                        * Referenced by: '<S490>/tr2_range'
                                        */
  real_T tr3_range_Y0;                 /* Computed Parameter: tr3_range_Y0
                                        * Referenced by: '<S490>/tr3_range'
                                        */
  real_T tr4_range_Y0;                 /* Computed Parameter: tr4_range_Y0
                                        * Referenced by: '<S490>/tr4_range'
                                        */
  real_T tr5_range_Y0;                 /* Computed Parameter: tr5_range_Y0
                                        * Referenced by: '<S490>/tr5_range'
                                        */
  real_T tr6_range_Y0;                 /* Computed Parameter: tr6_range_Y0
                                        * Referenced by: '<S490>/tr6_range'
                                        */
  real_T tr7_range_Y0;                 /* Computed Parameter: tr7_range_Y0
                                        * Referenced by: '<S490>/tr7_range'
                                        */
  real_T tr8_range_Y0;                 /* Computed Parameter: tr8_range_Y0
                                        * Referenced by: '<S490>/tr8_range'
                                        */
  real_T tr9_range_Y0;                 /* Computed Parameter: tr9_range_Y0
                                        * Referenced by: '<S490>/tr9_range'
                                        */
  real_T tr0_radar_confidence_Y0;      /* Computed Parameter: tr0_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr0_radar_confidence'
                                        */
  real_T tr1_radar_confidence_Y0;      /* Computed Parameter: tr1_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr1_radar_confidence'
                                        */
  real_T tr2_radar_confidence_Y0;      /* Computed Parameter: tr2_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr2_radar_confidence'
                                        */
  real_T tr3_radar_confidence_Y0;      /* Computed Parameter: tr3_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr3_radar_confidence'
                                        */
  real_T tr4_radar_confidence_Y0;      /* Computed Parameter: tr4_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr4_radar_confidence'
                                        */
  real_T tr5_radar_confidence_Y0;      /* Computed Parameter: tr5_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr5_radar_confidence'
                                        */
  real_T tr6_radar_confidence_Y0;      /* Computed Parameter: tr6_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr6_radar_confidence'
                                        */
  real_T tr7_radar_confidence_Y0;      /* Computed Parameter: tr7_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr7_radar_confidence'
                                        */
  real_T tr8_radar_confidence_Y0;      /* Computed Parameter: tr8_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr8_radar_confidence'
                                        */
  real_T tr9_radar_confidence_Y0;      /* Computed Parameter: tr9_radar_confidence_Y0
                                        * Referenced by: '<S490>/tr9_radar_confidence'
                                        */
  real_T tr0_relative_velocitiy_Y0;    /* Computed Parameter: tr0_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr0_relative_velocitiy'
                                        */
  real_T tr0_acceleration_over_ground_Y0;/* Computed Parameter: tr0_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr0_acceleration_over_ground'
                                          */
  real_T tr1_relative_velocitiy_Y0;    /* Computed Parameter: tr1_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr1_relative_velocitiy'
                                        */
  real_T tr1_acceleration_over_ground_Y0;/* Computed Parameter: tr1_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr1_acceleration_over_ground'
                                          */
  real_T tr2_relative_velocitiy_Y0;    /* Computed Parameter: tr2_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr2_relative_velocitiy'
                                        */
  real_T tr2_acceleration_over_ground_Y0;/* Computed Parameter: tr2_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr2_acceleration_over_ground'
                                          */
  real_T tr3_relative_velocitiy_Y0;    /* Computed Parameter: tr3_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr3_relative_velocitiy'
                                        */
  real_T tr3_acceleration_over_ground_Y0;/* Computed Parameter: tr3_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr3_acceleration_over_ground'
                                          */
  real_T tr4_relative_velocitiy_Y0;    /* Computed Parameter: tr4_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr4_relative_velocitiy'
                                        */
  real_T tr4_acceleration_over_ground_Y0;/* Computed Parameter: tr4_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr4_acceleration_over_ground'
                                          */
  real_T tr5_relative_velocitiy_Y0;    /* Computed Parameter: tr5_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr5_relative_velocitiy'
                                        */
  real_T tr5_acceleration_over_ground_Y0;/* Computed Parameter: tr5_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr5_acceleration_over_ground'
                                          */
  real_T tr6_relative_velocitiy_Y0;    /* Computed Parameter: tr6_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr6_relative_velocitiy'
                                        */
  real_T tr6_acceleration_over_ground_Y0;/* Computed Parameter: tr6_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr6_acceleration_over_ground'
                                          */
  real_T tr7_relative_velocitiy_Y0;    /* Computed Parameter: tr7_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr7_relative_velocitiy'
                                        */
  real_T tr7_acceleration_over_ground_Y0;/* Computed Parameter: tr7_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr7_acceleration_over_ground'
                                          */
  real_T tr8_relative_velocitiy_Y0;    /* Computed Parameter: tr8_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr8_relative_velocitiy'
                                        */
  real_T tr8_acceleration_over_ground_Y0;/* Computed Parameter: tr8_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr8_acceleration_over_ground'
                                          */
  real_T tr9_relative_velocitiy_Y0;    /* Computed Parameter: tr9_relative_velocitiy_Y0
                                        * Referenced by: '<S490>/tr9_relative_velocitiy'
                                        */
  real_T tr9_acceleration_over_ground_Y0;/* Computed Parameter: tr9_acceleration_over_ground_Y0
                                          * Referenced by: '<S490>/tr9_acceleration_over_ground'
                                          */
  real_T track_multiplexor_Y0;         /* Computed Parameter: track_multiplexor_Y0
                                        * Referenced by: '<S490>/track_multiplexor'
                                        */
  real_T RXstatus_Y0_p;                /* Computed Parameter: RXstatus_Y0_p
                                        * Referenced by: '<S490>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S490>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S490>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0;        /* Computed Parameter: TwoSpeedAxleSwitch_Y0
                                        * Referenced by: '<S492>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0;        /* Computed Parameter: ParkingBrakeSwitch_Y0
                                        * Referenced by: '<S492>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0;     /* Computed Parameter: CruiseCtrlPauseSwitch_Y0
                                        * Referenced by: '<S492>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0; /* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0
                                        * Referenced by: '<S492>/ParkBrakeReleaseInhibitRq'
                                        */
  real_T WheelBasedVehicleSpeed_Y0;    /* Computed Parameter: WheelBasedVehicleSpeed_Y0
                                        * Referenced by: '<S492>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0;          /* Computed Parameter: CruiseCtrlActive_Y0
                                        * Referenced by: '<S492>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0;    /* Computed Parameter: CruiseCtrlEnableSwitch_Y0
                                        * Referenced by: '<S492>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0;               /* Computed Parameter: BrakeSwitch_Y0
                                        * Referenced by: '<S492>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0;              /* Computed Parameter: ClutchSwitch_Y0
                                        * Referenced by: '<S492>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0;       /* Computed Parameter: CruiseCtrlSetSwitch_Y0
                                        * Referenced by: '<S492>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0;     /* Computed Parameter: CruiseCtrlCoastSwitch_Y0
                                        * Referenced by: '<S492>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0;    /* Computed Parameter: CruiseCtrlResumeSwitch_Y0
                                        * Referenced by: '<S492>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0
                                        * Referenced by: '<S492>/CruiseCtrlAccelerateSwitch'
                                        */
  real_T CruiseCtrlSetSpeed_Y0;        /* Computed Parameter: CruiseCtrlSetSpeed_Y0
                                        * Referenced by: '<S492>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0;          /* Computed Parameter: PTOGovernorState_Y0
                                        * Referenced by: '<S492>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0;          /* Computed Parameter: CruiseCtrlStates_Y0
                                        * Referenced by: '<S492>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0;    /* Computed Parameter: EngIdleIncrementSwitch_Y0
                                        * Referenced by: '<S492>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0;    /* Computed Parameter: EngIdleDecrementSwitch_Y0
                                        * Referenced by: '<S492>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0;         /* Computed Parameter: EngTestModeSwitch_Y0
                                        * Referenced by: '<S492>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0; /* Computed Parameter: EngShutdownOverrideSwitch_Y0
                                        * Referenced by: '<S492>/EngShutdownOverrideSwitch'
                                        */
  real_T RXstatus_Y0_c;                /* Computed Parameter: RXstatus_Y0_c
                                        * Referenced by: '<S492>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S492>/RX time'
                                        */
  real_T RXdeltatime_Y0_f;             /* Computed Parameter: RXdeltatime_Y0_f
                                        * Referenced by: '<S492>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_c;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_c
                                        * Referenced by: '<S494>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_c;      /* Computed Parameter: ParkingBrakeSwitch_Y0_c
                                        * Referenced by: '<S494>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_e;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_e
                                        * Referenced by: '<S494>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_j;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_j
                                         * Referenced by: '<S494>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_p;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_p
                                        * Referenced by: '<S494>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_m;        /* Computed Parameter: CruiseCtrlActive_Y0_m
                                        * Referenced by: '<S494>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_l;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_l
                                        * Referenced by: '<S494>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_f;             /* Computed Parameter: BrakeSwitch_Y0_f
                                        * Referenced by: '<S494>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_b;            /* Computed Parameter: ClutchSwitch_Y0_b
                                        * Referenced by: '<S494>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_o;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_o
                                        * Referenced by: '<S494>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_g;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_g
                                        * Referenced by: '<S494>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_k;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_k
                                        * Referenced by: '<S494>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_k;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_k
                                          * Referenced by: '<S494>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_m;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_m
                                        * Referenced by: '<S494>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_n;        /* Computed Parameter: PTOGovernorState_Y0_n
                                        * Referenced by: '<S494>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_l;        /* Computed Parameter: CruiseCtrlStates_Y0_l
                                        * Referenced by: '<S494>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_c;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_c
                                        * Referenced by: '<S494>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_n;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_n
                                        * Referenced by: '<S494>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_f;       /* Computed Parameter: EngTestModeSwitch_Y0_f
                                        * Referenced by: '<S494>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_g;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_g
                                         * Referenced by: '<S494>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S494>/RX status'
                                        */
  real_T RXtime_Y0_pv;                 /* Computed Parameter: RXtime_Y0_pv
                                        * Referenced by: '<S494>/RX time'
                                        */
  real_T RXdeltatime_Y0_m;             /* Computed Parameter: RXdeltatime_Y0_m
                                        * Referenced by: '<S494>/RX delta time'
                                        */
  real_T SID_Y0;                       /* Computed Parameter: SID_Y0
                                        * Referenced by: '<S496>/SID'
                                        */
  real_T COGReference_Y0;              /* Computed Parameter: COGReference_Y0
                                        * Referenced by: '<S496>/COGReference'
                                        */
  real_T CourseOverGround_Y0;          /* Computed Parameter: CourseOverGround_Y0
                                        * Referenced by: '<S496>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0;           /* Computed Parameter: SpeedOverGround_Y0
                                        * Referenced by: '<S496>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_py;               /* Computed Parameter: RXstatus_Y0_py
                                        * Referenced by: '<S496>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S496>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
                                        * Referenced by: '<S496>/RX delta time'
                                        */
  real_T SID_Y0_o;                     /* Computed Parameter: SID_Y0_o
                                        * Referenced by: '<S497>/SID'
                                        */
  real_T COGReference_Y0_e;            /* Computed Parameter: COGReference_Y0_e
                                        * Referenced by: '<S497>/COGReference'
                                        */
  real_T CourseOverGround_Y0_l;        /* Computed Parameter: CourseOverGround_Y0_l
                                        * Referenced by: '<S497>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_o;         /* Computed Parameter: SpeedOverGround_Y0_o
                                        * Referenced by: '<S497>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S497>/RX status'
                                        */
  real_T RXtime_Y0_bv;                 /* Computed Parameter: RXtime_Y0_bv
                                        * Referenced by: '<S497>/RX time'
                                        */
  real_T RXdeltatime_Y0_hg;            /* Computed Parameter: RXdeltatime_Y0_hg
                                        * Referenced by: '<S497>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S499>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_kw;               /* Computed Parameter: RXstatus_Y0_kw
                                        * Referenced by: '<S499>/RX status'
                                        */
  real_T RXtime_Y0_br;                 /* Computed Parameter: RXtime_Y0_br
                                        * Referenced by: '<S499>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
                                        * Referenced by: '<S499>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0;          /* Computed Parameter: ASREngCtrlActive_Y0
                                        * Referenced by: '<S501>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0;        /* Computed Parameter: ASRBrakeCtrlActive_Y0
                                        * Referenced by: '<S501>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0;     /* Computed Parameter: AntiLockBrakingActive_Y0
                                        * Referenced by: '<S501>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0;            /* Computed Parameter: EBSBrakeSwitch_Y0
                                        * Referenced by: '<S501>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0;             /* Computed Parameter: BrakePedalPos_Y0
                                        * Referenced by: '<S501>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0;          /* Computed Parameter: ABSOffroadSwitch_Y0
                                        * Referenced by: '<S501>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0;          /* Computed Parameter: ASROffroadSwitch_Y0
                                        * Referenced by: '<S501>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0;       /* Computed Parameter: ASRHillHolderSwitch_Y0
                                        * Referenced by: '<S501>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0
                                        * Referenced by: '<S501>/TractionCtrlOverrideSwitch'
                                        */
  real_T AccelInterlockSwitch_Y0;      /* Computed Parameter: AccelInterlockSwitch_Y0
                                        * Referenced by: '<S501>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0;           /* Computed Parameter: EngDerateSwitch_Y0
                                        * Referenced by: '<S501>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0;      /* Computed Parameter: EngAuxShutdownSwitch_Y0
                                        * Referenced by: '<S501>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0;   /* Computed Parameter: RemoteAccelEnableSwitch_Y0
                                        * Referenced by: '<S501>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0;      /* Computed Parameter: EngRetarderSelection_Y0
                                        * Referenced by: '<S501>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0;       /* Computed Parameter: ABSFullyOperational_Y0
                                        * Referenced by: '<S501>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0;       /* Computed Parameter: EBSRedWarningSignal_Y0
                                        * Referenced by: '<S501>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0; /* Computed Parameter: ABS_EBSAmberWarningSignal_Y0
                                        * Referenced by: '<S501>/ABS_EBSAmberWarningSignal'
                                        */
  real_T ATC_ASRInformationSignal_Y0;  /* Computed Parameter: ATC_ASRInformationSignal_Y0
                                        * Referenced by: '<S501>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCntrl
                                          * Referenced by: '<S501>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0;           /* Computed Parameter: HaltBrakeSwitch_Y0
                                        * Referenced by: '<S501>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0;          /* Computed Parameter: TrailerABSStatus_Y0
                                        * Referenced by: '<S501>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSignal;/* Computed Parameter: TrctrMntdTrilerABSWarningSignal
                                          * Referenced by: '<S501>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S501>/RX status'
                                        */
  real_T RXtime_Y0_hq;                 /* Computed Parameter: RXtime_Y0_hq
                                        * Referenced by: '<S501>/RX time'
                                        */
  real_T RXdeltatime_Y0_ol;            /* Computed Parameter: RXdeltatime_Y0_ol
                                        * Referenced by: '<S501>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_o;        /* Computed Parameter: ASREngCtrlActive_Y0_o
                                        * Referenced by: '<S503>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_b;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_b
                                        * Referenced by: '<S503>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_m;   /* Computed Parameter: AntiLockBrakingActive_Y0_m
                                        * Referenced by: '<S503>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_j;          /* Computed Parameter: EBSBrakeSwitch_Y0_j
                                        * Referenced by: '<S503>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_n;           /* Computed Parameter: BrakePedalPos_Y0_n
                                        * Referenced by: '<S503>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_o;        /* Computed Parameter: ABSOffroadSwitch_Y0_o
                                        * Referenced by: '<S503>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_k;        /* Computed Parameter: ASROffroadSwitch_Y0_k
                                        * Referenced by: '<S503>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_e;     /* Computed Parameter: ASRHillHolderSwitch_Y0_e
                                        * Referenced by: '<S503>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_a;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_a
                                          * Referenced by: '<S503>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_p;    /* Computed Parameter: AccelInterlockSwitch_Y0_p
                                        * Referenced by: '<S503>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_a;         /* Computed Parameter: EngDerateSwitch_Y0_a
                                        * Referenced by: '<S503>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_k;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_k
                                        * Referenced by: '<S503>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_g; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_g
                                        * Referenced by: '<S503>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_b;    /* Computed Parameter: EngRetarderSelection_Y0_b
                                        * Referenced by: '<S503>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_k;     /* Computed Parameter: ABSFullyOperational_Y0_k
                                        * Referenced by: '<S503>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_j;     /* Computed Parameter: EBSRedWarningSignal_Y0_j
                                        * Referenced by: '<S503>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_p;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_p
                                         * Referenced by: '<S503>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_l;/* Computed Parameter: ATC_ASRInformationSignal_Y0_l
                                        * Referenced by: '<S503>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_f;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_f
                                          * Referenced by: '<S503>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_e;         /* Computed Parameter: HaltBrakeSwitch_Y0_e
                                        * Referenced by: '<S503>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_h;        /* Computed Parameter: TrailerABSStatus_Y0_h
                                        * Referenced by: '<S503>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_j;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_j
                                          * Referenced by: '<S503>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_pe;               /* Computed Parameter: RXstatus_Y0_pe
                                        * Referenced by: '<S503>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S503>/RX time'
                                        */
  real_T RXdeltatime_Y0_f1;            /* Computed Parameter: RXdeltatime_Y0_f1
                                        * Referenced by: '<S503>/RX delta time'
                                        */
  real_T FrontAxleSpeed_Y0;            /* Computed Parameter: FrontAxleSpeed_Y0
                                        * Referenced by: '<S505>/FrontAxleSpeed'
                                        */
  real_T RelativeSpeedFrontAxleLeftWheel;/* Computed Parameter: RelativeSpeedFrontAxleLeftWheel
                                          * Referenced by: '<S505>/RelativeSpeedFrontAxleLeftWheel'
                                          */
  real_T RlativeSpeedFrontAxleRightWheel;/* Computed Parameter: RlativeSpeedFrontAxleRightWheel
                                          * Referenced by: '<S505>/RlativeSpeedFrontAxleRightWheel'
                                          */
  real_T RelativeSpeedRearAxle1LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle1LeftWheel
                                          * Referenced by: '<S505>/RelativeSpeedRearAxle1LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle1RightWheel;/* Computed Parameter: RlativeSpeedRearAxle1RightWheel
                                          * Referenced by: '<S505>/RlativeSpeedRearAxle1RightWheel'
                                          */
  real_T RelativeSpeedRearAxle2LeftWheel;/* Computed Parameter: RelativeSpeedRearAxle2LeftWheel
                                          * Referenced by: '<S505>/RelativeSpeedRearAxle2LeftWheel'
                                          */
  real_T RlativeSpeedRearAxle2RightWheel;/* Computed Parameter: RlativeSpeedRearAxle2RightWheel
                                          * Referenced by: '<S505>/RlativeSpeedRearAxle2RightWheel'
                                          */
  real_T RXstatus_Y0_c4;               /* Computed Parameter: RXstatus_Y0_c4
                                        * Referenced by: '<S505>/RX status'
                                        */
  real_T RXtime_Y0_cs;                 /* Computed Parameter: RXtime_Y0_cs
                                        * Referenced by: '<S505>/RX time'
                                        */
  real_T RXdeltatime_Y0_o1;            /* Computed Parameter: RXdeltatime_Y0_o1
                                        * Referenced by: '<S505>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S509>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_if;/* Expression: 0
                                         * Referenced by: '<S509>/Unit_Delay'
                                         */
  real_T EngTorqueMode_Y0;             /* Computed Parameter: EngTorqueMode_Y0
                                        * Referenced by: '<S552>/EngTorqueMode'
                                        */
  real_T ActlEngPrcntTrqueHighResolution;/* Computed Parameter: ActlEngPrcntTrqueHighResolution
                                          * Referenced by: '<S552>/ActlEngPrcntTrqueHighResolution'
                                          */
  real_T DriversDemandEngPercentTorque_Y;/* Computed Parameter: DriversDemandEngPercentTorque_Y
                                          * Referenced by: '<S552>/DriversDemandEngPercentTorque'
                                          */
  real_T ActualEngPercentTorque_Y0;    /* Computed Parameter: ActualEngPercentTorque_Y0
                                        * Referenced by: '<S552>/ActualEngPercentTorque'
                                        */
  real_T EngSpeed_Y0;                  /* Computed Parameter: EngSpeed_Y0
                                        * Referenced by: '<S552>/EngSpeed'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrEngCntrl;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrEngCntrl
                                          * Referenced by: '<S552>/SrcAddrssOfCtrllngDvcFrEngCntrl'
                                          */
  real_T EngStarterMode_Y0;            /* Computed Parameter: EngStarterMode_Y0
                                        * Referenced by: '<S552>/EngStarterMode'
                                        */
  real_T EngDemandPercentTorque_Y0;    /* Computed Parameter: EngDemandPercentTorque_Y0
                                        * Referenced by: '<S552>/EngDemandPercentTorque'
                                        */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S552>/RX status'
                                        */
  real_T RXtime_Y0_ei;                 /* Computed Parameter: RXtime_Y0_ei
                                        * Referenced by: '<S552>/RX time'
                                        */
  real_T RXdeltatime_Y0_b;             /* Computed Parameter: RXdeltatime_Y0_b
                                        * Referenced by: '<S552>/RX delta time'
                                        */
  real_T SPN558_AccelPed1LowIdlSwitch_Y0;/* Computed Parameter: SPN558_AccelPed1LowIdlSwitch_Y0
                                          * Referenced by: '<S554>/SPN558_AccelPed1LowIdlSwitch'
                                          */
  real_T SPN559_AccelPedKickdownSw_Y0; /* Computed Parameter: SPN559_AccelPedKickdownSw_Y0
                                        * Referenced by: '<S554>/SPN559_AccelPedKickdownSw'
                                        */
  real_T SPN1437_RoadSpeedLimitStatus_Y0;/* Computed Parameter: SPN1437_RoadSpeedLimitStatus_Y0
                                          * Referenced by: '<S554>/SPN1437_RoadSpeedLimitStatus'
                                          */
  real_T SPN2970_AccelPed2LowIdlSwitch_Y;/* Computed Parameter: SPN2970_AccelPed2LowIdlSwitch_Y
                                          * Referenced by: '<S554>/SPN2970_AccelPed2LowIdlSwitch'
                                          */
  real_T SPN91_AccelPedPos1_Y0;        /* Computed Parameter: SPN91_AccelPedPos1_Y0
                                        * Referenced by: '<S554>/SPN91_AccelPedPos1'
                                        */
  real_T SPN92_EngPercLoadAtCurrSpd_Y0;/* Computed Parameter: SPN92_EngPercLoadAtCurrSpd_Y0
                                        * Referenced by: '<S554>/SPN92_EngPercLoadAtCurrSpd'
                                        */
  real_T SPN974_RemAccelPedalPosition_Y0;/* Computed Parameter: SPN974_RemAccelPedalPosition_Y0
                                          * Referenced by: '<S554>/SPN974_RemAccelPedalPosition'
                                          */
  real_T SPN29_AccelPedPos2_Y0;        /* Computed Parameter: SPN29_AccelPedPos2_Y0
                                        * Referenced by: '<S554>/SPN29_AccelPedPos2'
                                        */
  real_T SPN2979_VehAccelRateLimStatus_Y;/* Computed Parameter: SPN2979_VehAccelRateLimStatus_Y
                                          * Referenced by: '<S554>/SPN2979_VehAccelRateLimStatus'
                                          */
  real_T SPN5021_MomEngMaxPwrEnFdbk_Y0;/* Computed Parameter: SPN5021_MomEngMaxPwrEnFdbk_Y0
                                        * Referenced by: '<S554>/SPN5021_MomEngMaxPwrEnFdbk'
                                        */
  real_T SPN5399_DPFThermMgmtActive_Y0;/* Computed Parameter: SPN5399_DPFThermMgmtActive_Y0
                                        * Referenced by: '<S554>/SPN5399_DPFThermMgmtActive'
                                        */
  real_T SPN5400_SCRThermMgmtActive_Y0;/* Computed Parameter: SPN5400_SCRThermMgmtActive_Y0
                                        * Referenced by: '<S554>/SPN5400_SCRThermMgmtActive'
                                        */
  real_T SPN3357_ActMaxAvailEngPercTrq_Y;/* Computed Parameter: SPN3357_ActMaxAvailEngPercTrq_Y
                                          * Referenced by: '<S554>/SPN3357_ActMaxAvailEngPercTrq'
                                          */
  real_T SPN5398_EstPumpingPercentTorque;/* Computed Parameter: SPN5398_EstPumpingPercentTorque
                                          * Referenced by: '<S554>/SPN5398_EstPumpingPercentTorque'
                                          */
  real_T RXstatus_Y0_dn;               /* Computed Parameter: RXstatus_Y0_dn
                                        * Referenced by: '<S554>/RX status'
                                        */
  real_T RXtime_Y0_p2;                 /* Computed Parameter: RXtime_Y0_p2
                                        * Referenced by: '<S554>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
                                        * Referenced by: '<S554>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S556>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S556>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S556>/RX status'
                                        */
  real_T RXtime_Y0_hv;                 /* Computed Parameter: RXtime_Y0_hv
                                        * Referenced by: '<S556>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
                                        * Referenced by: '<S556>/RX delta time'
                                        */
  real_T SPN524_TransSelectedGear_Y0;  /* Computed Parameter: SPN524_TransSelectedGear_Y0
                                        * Referenced by: '<S558>/SPN524_TransSelectedGear'
                                        */
  real_T SPN526_TransActualGearRatio_Y0;/* Computed Parameter: SPN526_TransActualGearRatio_Y0
                                         * Referenced by: '<S558>/SPN526_TransActualGearRatio'
                                         */
  real_T SPN523_TransCurrentGear_Y0;   /* Computed Parameter: SPN523_TransCurrentGear_Y0
                                        * Referenced by: '<S558>/SPN523_TransCurrentGear'
                                        */
  real_T RXstatus_Y0_i5;               /* Computed Parameter: RXstatus_Y0_i5
                                        * Referenced by: '<S558>/RX status'
                                        */
  real_T RXtime_Y0_mx;                 /* Computed Parameter: RXtime_Y0_mx
                                        * Referenced by: '<S558>/RX time'
                                        */
  real_T RXdeltatime_Y0_g3;            /* Computed Parameter: RXdeltatime_Y0_g3
                                        * Referenced by: '<S558>/RX delta time'
                                        */
  real_T SID_Y0_h;                     /* Computed Parameter: SID_Y0_h
                                        * Referenced by: '<S560>/SID'
                                        */
  real_T SetMode_Y0;                   /* Computed Parameter: SetMode_Y0
                                        * Referenced by: '<S560>/SetMode'
                                        */
  real_T OpMode_Y0;                    /* Computed Parameter: OpMode_Y0
                                        * Referenced by: '<S560>/OpMode'
                                        */
  real_T HDOP_Y0;                      /* Computed Parameter: HDOP_Y0
                                        * Referenced by: '<S560>/HDOP_'
                                        */
  real_T VDOP_Y0;                      /* Computed Parameter: VDOP_Y0
                                        * Referenced by: '<S560>/VDOP'
                                        */
  real_T TDOP_Y0;                      /* Computed Parameter: TDOP_Y0
                                        * Referenced by: '<S560>/TDOP'
                                        */
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S560>/RX status'
                                        */
  real_T RXtime_Y0_p2o;                /* Computed Parameter: RXtime_Y0_p2o
                                        * Referenced by: '<S560>/RX time'
                                        */
  real_T RXdeltatime_Y0_go;            /* Computed Parameter: RXdeltatime_Y0_go
                                        * Referenced by: '<S560>/RX delta time'
                                        */
  real_T SID_Y0_m;                     /* Computed Parameter: SID_Y0_m
                                        * Referenced by: '<S561>/SID'
                                        */
  real_T SetMode_Y0_e;                 /* Computed Parameter: SetMode_Y0_e
                                        * Referenced by: '<S561>/SetMode'
                                        */
  real_T OpMode_Y0_g;                  /* Computed Parameter: OpMode_Y0_g
                                        * Referenced by: '<S561>/OpMode'
                                        */
  real_T HDOP_Y0_l;                    /* Computed Parameter: HDOP_Y0_l
                                        * Referenced by: '<S561>/HDOP_'
                                        */
  real_T VDOP_Y0_l;                    /* Computed Parameter: VDOP_Y0_l
                                        * Referenced by: '<S561>/VDOP'
                                        */
  real_T TDOP_Y0_d;                    /* Computed Parameter: TDOP_Y0_d
                                        * Referenced by: '<S561>/TDOP'
                                        */
  real_T RXstatus_Y0_pb;               /* Computed Parameter: RXstatus_Y0_pb
                                        * Referenced by: '<S561>/RX status'
                                        */
  real_T RXtime_Y0_dw;                 /* Computed Parameter: RXtime_Y0_dw
                                        * Referenced by: '<S561>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
                                        * Referenced by: '<S561>/RX delta time'
                                        */
  real_T FrontAxleLeftWheelSpeed_Y0;   /* Computed Parameter: FrontAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S563>/FrontAxleLeftWheelSpeed'
                                        */
  real_T FrontAxleRightWheelSpeed_Y0;  /* Computed Parameter: FrontAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S563>/FrontAxleRightWheelSpeed'
                                        */
  real_T RearAxleLeftWheelSpeed_Y0;    /* Computed Parameter: RearAxleLeftWheelSpeed_Y0
                                        * Referenced by: '<S563>/RearAxleLeftWheelSpeed'
                                        */
  real_T RearAxleRightWheelSpeed_Y0;   /* Computed Parameter: RearAxleRightWheelSpeed_Y0
                                        * Referenced by: '<S563>/RearAxleRightWheelSpeed'
                                        */
  real_T RXstatus_Y0_dc;               /* Computed Parameter: RXstatus_Y0_dc
                                        * Referenced by: '<S563>/RX status'
                                        */
  real_T RXtime_Y0_ee;                 /* Computed Parameter: RXtime_Y0_ee
                                        * Referenced by: '<S563>/RX time'
                                        */
  real_T RXdeltatime_Y0_id;            /* Computed Parameter: RXdeltatime_Y0_id
                                        * Referenced by: '<S563>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S566>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S566>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_mu;               /* Computed Parameter: RXstatus_Y0_mu
                                        * Referenced by: '<S566>/RX status'
                                        */
  real_T RXtime_Y0_i;                  /* Computed Parameter: RXtime_Y0_i
                                        * Referenced by: '<S566>/RX time'
                                        */
  real_T RXdeltatime_Y0_olr;           /* Computed Parameter: RXdeltatime_Y0_olr
                                        * Referenced by: '<S566>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_a;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_a
                                          * Referenced by: '<S567>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__b;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__b
                                          * Referenced by: '<S567>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_hr;               /* Computed Parameter: RXstatus_Y0_hr
                                        * Referenced by: '<S567>/RX status'
                                        */
  real_T RXtime_Y0_fe;                 /* Computed Parameter: RXtime_Y0_fe
                                        * Referenced by: '<S567>/RX time'
                                        */
  real_T RXdeltatime_Y0_gh;            /* Computed Parameter: RXdeltatime_Y0_gh
                                        * Referenced by: '<S567>/RX delta time'
                                        */
  real_T byte1_Y0_fn;                  /* Computed Parameter: byte1_Y0_fn
                                        * Referenced by: '<S571>/byte1'
                                        */
  real_T byte2_Y0_b;                   /* Computed Parameter: byte2_Y0_b
                                        * Referenced by: '<S571>/byte2'
                                        */
  real_T byte3_Y0_p;                   /* Computed Parameter: byte3_Y0_p
                                        * Referenced by: '<S571>/byte3'
                                        */
  real_T byte4_Y0_c;                   /* Computed Parameter: byte4_Y0_c
                                        * Referenced by: '<S571>/byte4'
                                        */
  real_T byte5_Y0_m;                   /* Computed Parameter: byte5_Y0_m
                                        * Referenced by: '<S571>/byte5'
                                        */
  real_T byte6_Y0_l;                   /* Computed Parameter: byte6_Y0_l
                                        * Referenced by: '<S571>/byte6'
                                        */
  real_T byte7_Y0_m;                   /* Computed Parameter: byte7_Y0_m
                                        * Referenced by: '<S571>/byte7'
                                        */
  real_T byte8_Y0_nu;                  /* Computed Parameter: byte8_Y0_nu
                                        * Referenced by: '<S571>/byte8'
                                        */
  real_T RXstatus_Y0_hs;               /* Computed Parameter: RXstatus_Y0_hs
                                        * Referenced by: '<S571>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S571>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S571>/RX delta time'
                                        */
  real_T byte1_Y0_d;                   /* Computed Parameter: byte1_Y0_d
                                        * Referenced by: '<S572>/byte1'
                                        */
  real_T byte2_Y0_a;                   /* Computed Parameter: byte2_Y0_a
                                        * Referenced by: '<S572>/byte2'
                                        */
  real_T byte3_Y0_b;                   /* Computed Parameter: byte3_Y0_b
                                        * Referenced by: '<S572>/byte3'
                                        */
  real_T byte4_Y0_d;                   /* Computed Parameter: byte4_Y0_d
                                        * Referenced by: '<S572>/byte4'
                                        */
  real_T byte5_Y0_o;                   /* Computed Parameter: byte5_Y0_o
                                        * Referenced by: '<S572>/byte5'
                                        */
  real_T byte6_Y0_kh;                  /* Computed Parameter: byte6_Y0_kh
                                        * Referenced by: '<S572>/byte6'
                                        */
  real_T byte7_Y0_l;                   /* Computed Parameter: byte7_Y0_l
                                        * Referenced by: '<S572>/byte7'
                                        */
  real_T byte8_Y0_b;                   /* Computed Parameter: byte8_Y0_b
                                        * Referenced by: '<S572>/byte8'
                                        */
  real_T RXstatus_Y0_jm;               /* Computed Parameter: RXstatus_Y0_jm
                                        * Referenced by: '<S572>/RX status'
                                        */
  real_T RXtime_Y0_mi;                 /* Computed Parameter: RXtime_Y0_mi
                                        * Referenced by: '<S572>/RX time'
                                        */
  real_T RXdeltatime_Y0_gn;            /* Computed Parameter: RXdeltatime_Y0_gn
                                        * Referenced by: '<S572>/RX delta time'
                                        */
  real_T byte1_Y0_k;                   /* Computed Parameter: byte1_Y0_k
                                        * Referenced by: '<S582>/byte1'
                                        */
  real_T byte2_Y0_c;                   /* Computed Parameter: byte2_Y0_c
                                        * Referenced by: '<S582>/byte2'
                                        */
  real_T byte3_Y0_i;                   /* Computed Parameter: byte3_Y0_i
                                        * Referenced by: '<S582>/byte3'
                                        */
  real_T byte4_Y0_b;                   /* Computed Parameter: byte4_Y0_b
                                        * Referenced by: '<S582>/byte4'
                                        */
  real_T byte5_Y0_g;                   /* Computed Parameter: byte5_Y0_g
                                        * Referenced by: '<S582>/byte5'
                                        */
  real_T byte6_Y0_c;                   /* Computed Parameter: byte6_Y0_c
                                        * Referenced by: '<S582>/byte6'
                                        */
  real_T byte7_Y0_n;                   /* Computed Parameter: byte7_Y0_n
                                        * Referenced by: '<S582>/byte7'
                                        */
  real_T byte8_Y0_a;                   /* Computed Parameter: byte8_Y0_a
                                        * Referenced by: '<S582>/byte8'
                                        */
  real_T RXstatus_Y0_cj;               /* Computed Parameter: RXstatus_Y0_cj
                                        * Referenced by: '<S582>/RX status'
                                        */
  real_T RXtime_Y0_ps;                 /* Computed Parameter: RXtime_Y0_ps
                                        * Referenced by: '<S582>/RX time'
                                        */
  real_T RXdeltatime_Y0_gu;            /* Computed Parameter: RXdeltatime_Y0_gu
                                        * Referenced by: '<S582>/RX delta time'
                                        */
  real_T byte1_Y0_c;                   /* Computed Parameter: byte1_Y0_c
                                        * Referenced by: '<S583>/byte1'
                                        */
  real_T byte2_Y0_k;                   /* Computed Parameter: byte2_Y0_k
                                        * Referenced by: '<S583>/byte2'
                                        */
  real_T byte3_Y0_iz;                  /* Computed Parameter: byte3_Y0_iz
                                        * Referenced by: '<S583>/byte3'
                                        */
  real_T byte4_Y0_n;                   /* Computed Parameter: byte4_Y0_n
                                        * Referenced by: '<S583>/byte4'
                                        */
  real_T byte5_Y0_b;                   /* Computed Parameter: byte5_Y0_b
                                        * Referenced by: '<S583>/byte5'
                                        */
  real_T byte6_Y0_i;                   /* Computed Parameter: byte6_Y0_i
                                        * Referenced by: '<S583>/byte6'
                                        */
  real_T byte7_Y0_b;                   /* Computed Parameter: byte7_Y0_b
                                        * Referenced by: '<S583>/byte7'
                                        */
  real_T byte8_Y0_o;                   /* Computed Parameter: byte8_Y0_o
                                        * Referenced by: '<S583>/byte8'
                                        */
  real_T RXstatus_Y0_dk;               /* Computed Parameter: RXstatus_Y0_dk
                                        * Referenced by: '<S583>/RX status'
                                        */
  real_T RXtime_Y0_dc;                 /* Computed Parameter: RXtime_Y0_dc
                                        * Referenced by: '<S583>/RX time'
                                        */
  real_T RXdeltatime_Y0_mq;            /* Computed Parameter: RXdeltatime_Y0_mq
                                        * Referenced by: '<S583>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S594>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S594>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_ij;               /* Computed Parameter: RXstatus_Y0_ij
                                        * Referenced by: '<S594>/RX status'
                                        */
  real_T RXtime_Y0_ha;                 /* Computed Parameter: RXtime_Y0_ha
                                        * Referenced by: '<S594>/RX time'
                                        */
  real_T RXdeltatime_Y0_jq;            /* Computed Parameter: RXdeltatime_Y0_jq
                                        * Referenced by: '<S594>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_j;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_j
                                          * Referenced by: '<S595>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_d;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_d
                                          * Referenced by: '<S595>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_ah;               /* Computed Parameter: RXstatus_Y0_ah
                                        * Referenced by: '<S595>/RX status'
                                        */
  real_T RXtime_Y0_hs;                 /* Computed Parameter: RXtime_Y0_hs
                                        * Referenced by: '<S595>/RX time'
                                        */
  real_T RXdeltatime_Y0_h3;            /* Computed Parameter: RXdeltatime_Y0_h3
                                        * Referenced by: '<S595>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_n;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_n
                                          * Referenced by: '<S596>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_k;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_k
                                          * Referenced by: '<S596>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_lw;               /* Computed Parameter: RXstatus_Y0_lw
                                        * Referenced by: '<S596>/RX status'
                                        */
  real_T RXtime_Y0_ez;                 /* Computed Parameter: RXtime_Y0_ez
                                        * Referenced by: '<S596>/RX time'
                                        */
  real_T RXdeltatime_Y0_f3;            /* Computed Parameter: RXdeltatime_Y0_f3
                                        * Referenced by: '<S596>/RX delta time'
                                        */
  real_T PX2_LaneEdgeLeftAngle_Y0;     /* Computed Parameter: PX2_LaneEdgeLeftAngle_Y0
                                        * Referenced by: '<S604>/PX2_LaneEdgeLeftAngle'
                                        */
  real_T PX2_LaneEdgeLeftNumPoints_Y0; /* Computed Parameter: PX2_LaneEdgeLeftNumPoints_Y0
                                        * Referenced by: '<S604>/PX2_LaneEdgeLeftNumPoints'
                                        */
  real_T PX2_LaneEdgeLeftPosition_Y0;  /* Computed Parameter: PX2_LaneEdgeLeftPosition_Y0
                                        * Referenced by: '<S604>/PX2_LaneEdgeLeftPosition'
                                        */
  real_T RXstatus_Y0_es;               /* Computed Parameter: RXstatus_Y0_es
                                        * Referenced by: '<S604>/RX status'
                                        */
  real_T RXtime_Y0_im;                 /* Computed Parameter: RXtime_Y0_im
                                        * Referenced by: '<S604>/RX time'
                                        */
  real_T RXdeltatime_Y0_bl;            /* Computed Parameter: RXdeltatime_Y0_bl
                                        * Referenced by: '<S604>/RX delta time'
                                        */
  real_T PX2_LaneEdgeRightAngle_Y0;    /* Computed Parameter: PX2_LaneEdgeRightAngle_Y0
                                        * Referenced by: '<S605>/PX2_LaneEdgeRightAngle'
                                        */
  real_T PX2_LaneEdgeRightNumPoints_Y0;/* Computed Parameter: PX2_LaneEdgeRightNumPoints_Y0
                                        * Referenced by: '<S605>/PX2_LaneEdgeRightNumPoints'
                                        */
  real_T PX2_LaneEdgeRightPosition_Y0; /* Computed Parameter: PX2_LaneEdgeRightPosition_Y0
                                        * Referenced by: '<S605>/PX2_LaneEdgeRightPosition'
                                        */
  real_T RXstatus_Y0_nw;               /* Computed Parameter: RXstatus_Y0_nw
                                        * Referenced by: '<S605>/RX status'
                                        */
  real_T RXtime_Y0_lj;                 /* Computed Parameter: RXtime_Y0_lj
                                        * Referenced by: '<S605>/RX time'
                                        */
  real_T RXdeltatime_Y0_ix;            /* Computed Parameter: RXdeltatime_Y0_ix
                                        * Referenced by: '<S605>/RX delta time'
                                        */
  real_T PX2_LanePosEstAngle_Y0;       /* Computed Parameter: PX2_LanePosEstAngle_Y0
                                        * Referenced by: '<S606>/PX2_LanePosEstAngle'
                                        */
  real_T PX2_LanePosEstNumPoints_Y0;   /* Computed Parameter: PX2_LanePosEstNumPoints_Y0
                                        * Referenced by: '<S606>/PX2_LanePosEstNumPoints'
                                        */
  real_T PX2_LanePosEstPosition_Y0;    /* Computed Parameter: PX2_LanePosEstPosition_Y0
                                        * Referenced by: '<S606>/PX2_LanePosEstPosition'
                                        */
  real_T PX2_LanePosEstNumLanes_Y0;    /* Computed Parameter: PX2_LanePosEstNumLanes_Y0
                                        * Referenced by: '<S606>/PX2_LanePosEstNumLanes'
                                        */
  real_T RXstatus_Y0_nl;               /* Computed Parameter: RXstatus_Y0_nl
                                        * Referenced by: '<S606>/RX status'
                                        */
  real_T RXtime_Y0_fa;                 /* Computed Parameter: RXtime_Y0_fa
                                        * Referenced by: '<S606>/RX time'
                                        */
  real_T RXdeltatime_Y0_aw;            /* Computed Parameter: RXdeltatime_Y0_aw
                                        * Referenced by: '<S606>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S608>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S608>/Longitude_'
                                        */
  real_T RXstatus_Y0_ic;               /* Computed Parameter: RXstatus_Y0_ic
                                        * Referenced by: '<S608>/RX status'
                                        */
  real_T RXtime_Y0_ct;                 /* Computed Parameter: RXtime_Y0_ct
                                        * Referenced by: '<S608>/RX time'
                                        */
  real_T RXdeltatime_Y0_h3d;           /* Computed Parameter: RXdeltatime_Y0_h3d
                                        * Referenced by: '<S608>/RX delta time'
                                        */
  real_T Latitude_Y0_a;                /* Computed Parameter: Latitude_Y0_a
                                        * Referenced by: '<S609>/Latitude_'
                                        */
  real_T Longitude_Y0_m;               /* Computed Parameter: Longitude_Y0_m
                                        * Referenced by: '<S609>/Longitude_'
                                        */
  real_T RXstatus_Y0_ce;               /* Computed Parameter: RXstatus_Y0_ce
                                        * Referenced by: '<S609>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S609>/RX time'
                                        */
  real_T RXdeltatime_Y0_kr;            /* Computed Parameter: RXdeltatime_Y0_kr
                                        * Referenced by: '<S609>/RX delta time'
                                        */
  real_T PressureP4_Y0;                /* Computed Parameter: PressureP4_Y0
                                        * Referenced by: '<S611>/PressureP4'
                                        */
  real_T PressureP1_Y0;                /* Computed Parameter: PressureP1_Y0
                                        * Referenced by: '<S611>/PressureP1'
                                        */
  real_T PressureP21_Y0;               /* Computed Parameter: PressureP21_Y0
                                        * Referenced by: '<S611>/PressureP21'
                                        */
  real_T PressureP22_Y0;               /* Computed Parameter: PressureP22_Y0
                                        * Referenced by: '<S611>/PressureP22'
                                        */
  real_T PressureP42_Y0;               /* Computed Parameter: PressureP42_Y0
                                        * Referenced by: '<S611>/PressureP42'
                                        */
  real_T XPR1ControlStatus_Y0;         /* Computed Parameter: XPR1ControlStatus_Y0
                                        * Referenced by: '<S611>/XPR1ControlStatus'
                                        */
  real_T XPR2ControlStatus_Y0;         /* Computed Parameter: XPR2ControlStatus_Y0
                                        * Referenced by: '<S611>/XPR2ControlStatus'
                                        */
  real_T XPR3ControlStatus_Y0;         /* Computed Parameter: XPR3ControlStatus_Y0
                                        * Referenced by: '<S611>/XPR3ControlStatus'
                                        */
  real_T XPRErrorState_Y0;             /* Computed Parameter: XPRErrorState_Y0
                                        * Referenced by: '<S611>/XPRErrorState'
                                        */
  real_T XPRControlMode_Y0;            /* Computed Parameter: XPRControlMode_Y0
                                        * Referenced by: '<S611>/XPRControlMode'
                                        */
  real_T RXstatus_Y0_en;               /* Computed Parameter: RXstatus_Y0_en
                                        * Referenced by: '<S611>/RX status'
                                        */
  real_T RXtime_Y0_n3;                 /* Computed Parameter: RXtime_Y0_n3
                                        * Referenced by: '<S611>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
                                        * Referenced by: '<S611>/RX delta time'
                                        */
  real_T PitchAngleExRange_Y0;         /* Computed Parameter: PitchAngleExRange_Y0
                                        * Referenced by: '<S613>/PitchAngleExRange'
                                        */
  real_T RollAngleExRange_Y0;          /* Computed Parameter: RollAngleExRange_Y0
                                        * Referenced by: '<S613>/RollAngleExRange'
                                        */
  real_T PitchAngleExRangeCompensation_Y;/* Computed Parameter: PitchAngleExRangeCompensation_Y
                                          * Referenced by: '<S613>/PitchAngleExRangeCompensation'
                                          */
  real_T PitchAngleExRangeFigureOfMerit_;/* Computed Parameter: PitchAngleExRangeFigureOfMerit_
                                          * Referenced by: '<S613>/PitchAngleExRangeFigureOfMerit'
                                          */
  real_T RollAngleExRangeCompensation_Y0;/* Computed Parameter: RollAngleExRangeCompensation_Y0
                                          * Referenced by: '<S613>/RollAngleExRangeCompensation'
                                          */
  real_T RollAngleExRangeFigureOfMerit_Y;/* Computed Parameter: RollAngleExRangeFigureOfMerit_Y
                                          * Referenced by: '<S613>/RollAngleExRangeFigureOfMerit'
                                          */
  real_T RllAndPtchExRngMsurementLatency;/* Computed Parameter: RllAndPtchExRngMsurementLatency
                                          * Referenced by: '<S613>/RllAndPtchExRngMsurementLatency'
                                          */
  real_T RXstatus_Y0_jj;               /* Computed Parameter: RXstatus_Y0_jj
                                        * Referenced by: '<S613>/RX status'
                                        */
  real_T RXtime_Y0_om;                 /* Computed Parameter: RXtime_Y0_om
                                        * Referenced by: '<S613>/RX time'
                                        */
  real_T RXdeltatime_Y0_fz;            /* Computed Parameter: RXdeltatime_Y0_fz
                                        * Referenced by: '<S613>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0;        /* Computed Parameter: PX2_MapLaneNearPos_Y0
                                        * Referenced by: '<S615>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0;         /* Computed Parameter: PX2_MapLaneMidPos_Y0
                                        * Referenced by: '<S615>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0;         /* Computed Parameter: PX2_MapLaneFarPos_Y0
                                        * Referenced by: '<S615>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0;   /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0
                                        * Referenced by: '<S615>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0
                                        * Referenced by: '<S615>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0
                                        * Referenced by: '<S615>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_me;               /* Computed Parameter: RXstatus_Y0_me
                                        * Referenced by: '<S615>/RX status'
                                        */
  real_T RXtime_Y0_hd;                 /* Computed Parameter: RXtime_Y0_hd
                                        * Referenced by: '<S615>/RX time'
                                        */
  real_T RXdeltatime_Y0_iv;            /* Computed Parameter: RXdeltatime_Y0_iv
                                        * Referenced by: '<S615>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_m;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_m
                                        * Referenced by: '<S617>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_o;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_o
                                        * Referenced by: '<S617>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_i;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_i
                                        * Referenced by: '<S617>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_p; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_p
                                        * Referenced by: '<S617>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_f;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_f
                                        * Referenced by: '<S617>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_l;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_l
                                        * Referenced by: '<S617>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_lk;               /* Computed Parameter: RXstatus_Y0_lk
                                        * Referenced by: '<S617>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S617>/RX time'
                                        */
  real_T RXdeltatime_Y0_l3;            /* Computed Parameter: RXdeltatime_Y0_l3
                                        * Referenced by: '<S617>/RX delta time'
                                        */
  real_T PX2_EgoLaneNearPosErr_Y0;     /* Computed Parameter: PX2_EgoLaneNearPosErr_Y0
                                        * Referenced by: '<S619>/PX2_EgoLaneNearPosErr'
                                        */
  real_T PX2_EgoLaneMidPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneMidPosErr_Y0
                                        * Referenced by: '<S619>/PX2_EgoLaneMidPosErr'
                                        */
  real_T PX2_EgoLaneFarPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneFarPosErr_Y0
                                        * Referenced by: '<S619>/PX2_EgoLaneFarPosErr'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_j; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_j
                                        * Referenced by: '<S619>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_m;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_m
                                        * Referenced by: '<S619>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_m;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_m
                                        * Referenced by: '<S619>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_oj;               /* Computed Parameter: RXstatus_Y0_oj
                                        * Referenced by: '<S619>/RX status'
                                        */
  real_T RXtime_Y0_h0;                 /* Computed Parameter: RXtime_Y0_h0
                                        * Referenced by: '<S619>/RX time'
                                        */
  real_T RXdeltatime_Y0_at;            /* Computed Parameter: RXdeltatime_Y0_at
                                        * Referenced by: '<S619>/RX delta time'
                                        */
  real_T SID_Y0_b;                     /* Computed Parameter: SID_Y0_b
                                        * Referenced by: '<S621>/SID'
                                        */
  real_T Source_Y0;                    /* Computed Parameter: Source_Y0
                                        * Referenced by: '<S621>/Source'
                                        */
  real_T Date_Y0;                      /* Computed Parameter: Date_Y0
                                        * Referenced by: '<S621>/Date'
                                        */
  real_T Time_Y0;                      /* Computed Parameter: Time_Y0
                                        * Referenced by: '<S621>/Time'
                                        */
  real_T RXstatus_Y0_o2;               /* Computed Parameter: RXstatus_Y0_o2
                                        * Referenced by: '<S621>/RX status'
                                        */
  real_T RXtime_Y0_dd;                 /* Computed Parameter: RXtime_Y0_dd
                                        * Referenced by: '<S621>/RX time'
                                        */
  real_T RXdeltatime_Y0_li;            /* Computed Parameter: RXdeltatime_Y0_li
                                        * Referenced by: '<S621>/RX delta time'
                                        */
  real_T SPN681_TransGearShiftInhibitReq;/* Computed Parameter: SPN681_TransGearShiftInhibitReq
                                          * Referenced by: '<S623>/SPN681_TransGearShiftInhibitReq'
                                          */
  real_T SPN682_TransTrqConvLockupDisReq;/* Computed Parameter: SPN682_TransTrqConvLockupDisReq
                                          * Referenced by: '<S623>/SPN682_TransTrqConvLockupDisReq'
                                          */
  real_T SPN683_DisengageDrivelineReq_Y0;/* Computed Parameter: SPN683_DisengageDrivelineReq_Y0
                                          * Referenced by: '<S623>/SPN683_DisengageDrivelineReq'
                                          */
  real_T SPN4242_TransRevGearShiftInhibR;/* Computed Parameter: SPN4242_TransRevGearShiftInhibR
                                          * Referenced by: '<S623>/SPN4242_TransRevGearShiftInhibRq'
                                          */
  real_T SPN684_RequestedPercClutchSlip_;/* Computed Parameter: SPN684_RequestedPercClutchSlip_
                                          * Referenced by: '<S623>/SPN684_RequestedPercClutchSlip'
                                          */
  real_T SPN525_TransRequestedGear_Y0; /* Computed Parameter: SPN525_TransRequestedGear_Y0
                                        * Referenced by: '<S623>/SPN525_TransRequestedGear'
                                        */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* Computed Parameter: SPN685_DisengageDiffLockRqFrAx1
                                          * Referenced by: '<S623>/SPN685_DisengageDiffLockRqFrAx1'
                                          */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* Computed Parameter: SPN686_DisengageDiffLockRqFrAx2
                                          * Referenced by: '<S623>/SPN686_DisengageDiffLockRqFrAx2'
                                          */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* Computed Parameter: SPN687_DisengageDiffLockRqRrAx1
                                          * Referenced by: '<S623>/SPN687_DisengageDiffLockRqRrAx1'
                                          */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* Computed Parameter: SPN688_DisengageDiffLockRqRrAx2
                                          * Referenced by: '<S623>/SPN688_DisengageDiffLockRqRrAx2'
                                          */
  real_T SPN689_DisengageDiffLockRqC_Y0;/* Computed Parameter: SPN689_DisengageDiffLockRqC_Y0
                                         * Referenced by: '<S623>/SPN689_DisengageDiffLockRqC'
                                         */
  real_T SPN690_DisengageDiffLockRqCF_Y0;/* Computed Parameter: SPN690_DisengageDiffLockRqCF_Y0
                                          * Referenced by: '<S623>/SPN690_DisengageDiffLockRqCF'
                                          */
  real_T SPN691_DisengageDiffLockRqCR_Y0;/* Computed Parameter: SPN691_DisengageDiffLockRqCR_Y0
                                          * Referenced by: '<S623>/SPN691_DisengageDiffLockRqCR'
                                          */
  real_T SPN5762_TransLoadRedInhibitRq_Y;/* Computed Parameter: SPN5762_TransLoadRedInhibitRq_Y
                                          * Referenced by: '<S623>/SPN5762_TransLoadRedInhibitRq'
                                          */
  real_T SPN1852_TransmissionMode1_Y0; /* Computed Parameter: SPN1852_TransmissionMode1_Y0
                                        * Referenced by: '<S623>/SPN1852_TransmissionMode1'
                                        */
  real_T SPN1853_TransmissionMode2_Y0; /* Computed Parameter: SPN1853_TransmissionMode2_Y0
                                        * Referenced by: '<S623>/SPN1853_TransmissionMode2'
                                        */
  real_T SPN1854_TransmissionMode3_Y0; /* Computed Parameter: SPN1854_TransmissionMode3_Y0
                                        * Referenced by: '<S623>/SPN1854_TransmissionMode3'
                                        */
  real_T SPN1855_TransmissionMode4_Y0; /* Computed Parameter: SPN1855_TransmissionMode4_Y0
                                        * Referenced by: '<S623>/SPN1855_TransmissionMode4'
                                        */
  real_T SPN7695_TransAutoNeutralRequest;/* Computed Parameter: SPN7695_TransAutoNeutralRequest
                                          * Referenced by: '<S623>/SPN7695_TransAutoNeutralRequest'
                                          */
  real_T SPN4255_TransRequestedLaunchGea;/* Computed Parameter: SPN4255_TransRequestedLaunchGea
                                          * Referenced by: '<S623>/SPN4255_TransRequestedLaunchGear'
                                          */
  real_T SPN2985_TransShiftSelDispModeSw;/* Computed Parameter: SPN2985_TransShiftSelDispModeSw
                                          * Referenced by: '<S623>/SPN2985_TransShiftSelDispModeSw'
                                          */
  real_T SPN4246_TransmissionMode5_Y0; /* Computed Parameter: SPN4246_TransmissionMode5_Y0
                                        * Referenced by: '<S623>/SPN4246_TransmissionMode5'
                                        */
  real_T SPN4247_TransmissionMode6_Y0; /* Computed Parameter: SPN4247_TransmissionMode6_Y0
                                        * Referenced by: '<S623>/SPN4247_TransmissionMode6'
                                        */
  real_T SPN4248_TransmissionMode7_Y0; /* Computed Parameter: SPN4248_TransmissionMode7_Y0
                                        * Referenced by: '<S623>/SPN4248_TransmissionMode7'
                                        */
  real_T SPN4249_TransmissionMode8_Y0; /* Computed Parameter: SPN4249_TransmissionMode8_Y0
                                        * Referenced by: '<S623>/SPN4249_TransmissionMode8'
                                        */
  real_T RXstatus_Y0_hf;               /* Computed Parameter: RXstatus_Y0_hf
                                        * Referenced by: '<S623>/RX status'
                                        */
  real_T RXtime_Y0_di;                 /* Computed Parameter: RXtime_Y0_di
                                        * Referenced by: '<S623>/RX time'
                                        */
  real_T RXdeltatime_Y0_c1;            /* Computed Parameter: RXdeltatime_Y0_c1
                                        * Referenced by: '<S623>/RX delta time'
                                        */
  real_T VDCInformationSignal_Y0;      /* Computed Parameter: VDCInformationSignal_Y0
                                        * Referenced by: '<S625>/VDCInformationSignal'
                                        */
  real_T VDCFullyOperational_Y0;       /* Computed Parameter: VDCFullyOperational_Y0
                                        * Referenced by: '<S625>/VDCFullyOperational'
                                        */
  real_T VDCBrakeLightRq_Y0;           /* Computed Parameter: VDCBrakeLightRq_Y0
                                        * Referenced by: '<S625>/VDCBrakeLightRq'
                                        */
  real_T ROPEngCtrlActive_Y0;          /* Computed Parameter: ROPEngCtrlActive_Y0
                                        * Referenced by: '<S625>/ROPEngCtrlActive'
                                        */
  real_T ROPBrakeCtrlActive_Y0;        /* Computed Parameter: ROPBrakeCtrlActive_Y0
                                        * Referenced by: '<S625>/ROPBrakeCtrlActive'
                                        */
  real_T YCEngCtrlActive_Y0;           /* Computed Parameter: YCEngCtrlActive_Y0
                                        * Referenced by: '<S625>/YCEngCtrlActive'
                                        */
  real_T YCBrakeCtrlActive_Y0;         /* Computed Parameter: YCBrakeCtrlActive_Y0
                                        * Referenced by: '<S625>/YCBrakeCtrlActive'
                                        */
  real_T RXstatus_Y0_d3;               /* Computed Parameter: RXstatus_Y0_d3
                                        * Referenced by: '<S625>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S625>/RX time'
                                        */
  real_T RXdeltatime_Y0_o3;            /* Computed Parameter: RXdeltatime_Y0_o3
                                        * Referenced by: '<S625>/RX delta time'
                                        */
  real_T SteerWheelAngle_Y0;           /* Computed Parameter: SteerWheelAngle_Y0
                                        * Referenced by: '<S627>/SteerWheelAngle'
                                        */
  real_T SteerWheelTurnCounter_Y0;     /* Computed Parameter: SteerWheelTurnCounter_Y0
                                        * Referenced by: '<S627>/SteerWheelTurnCounter'
                                        */
  real_T SteerWheelAngleSensorType_Y0; /* Computed Parameter: SteerWheelAngleSensorType_Y0
                                        * Referenced by: '<S627>/SteerWheelAngleSensorType'
                                        */
  real_T YawRate_Y0;                   /* Computed Parameter: YawRate_Y0
                                        * Referenced by: '<S627>/YawRate'
                                        */
  real_T LateralAcceleration_Y0;       /* Computed Parameter: LateralAcceleration_Y0
                                        * Referenced by: '<S627>/LateralAcceleration'
                                        */
  real_T LongitudinalAcceleration_Y0;  /* Computed Parameter: LongitudinalAcceleration_Y0
                                        * Referenced by: '<S627>/LongitudinalAcceleration'
                                        */
  real_T RXstatus_Y0_nc;               /* Computed Parameter: RXstatus_Y0_nc
                                        * Referenced by: '<S627>/RX status'
                                        */
  real_T RXtime_Y0_ej;                 /* Computed Parameter: RXtime_Y0_ej
                                        * Referenced by: '<S627>/RX time'
                                        */
  real_T RXdeltatime_Y0_os;            /* Computed Parameter: RXdeltatime_Y0_os
                                        * Referenced by: '<S627>/RX delta time'
                                        */
  real_T NetBatteryCurrent_Y0;         /* Computed Parameter: NetBatteryCurrent_Y0
                                        * Referenced by: '<S629>/NetBatteryCurrent'
                                        */
  real_T AltCurrent_Y0;                /* Computed Parameter: AltCurrent_Y0
                                        * Referenced by: '<S629>/AltCurrent'
                                        */
  real_T ChargingSystemPotential_Y0;   /* Computed Parameter: ChargingSystemPotential_Y0
                                        * Referenced by: '<S629>/ChargingSystemPotential'
                                        */
  real_T BatteryPotential_PowerInput1_Y0;/* Computed Parameter: BatteryPotential_PowerInput1_Y0
                                          * Referenced by: '<S629>/BatteryPotential_PowerInput1'
                                          */
  real_T KeyswitchBatteryPotential_Y0; /* Computed Parameter: KeyswitchBatteryPotential_Y0
                                        * Referenced by: '<S629>/KeyswitchBatteryPotential'
                                        */
  real_T RXstatus_Y0_nm;               /* Computed Parameter: RXstatus_Y0_nm
                                        * Referenced by: '<S629>/RX status'
                                        */
  real_T RXtime_Y0_k0;                 /* Computed Parameter: RXtime_Y0_k0
                                        * Referenced by: '<S629>/RX time'
                                        */
  real_T RXdeltatime_Y0_po;            /* Computed Parameter: RXdeltatime_Y0_po
                                        * Referenced by: '<S629>/RX delta time'
                                        */
  real_T RX_time_Y0_b;                 /* Computed Parameter: RX_time_Y0_b
                                        * Referenced by: '<S633>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_dj;/* Expression: 0
                                         * Referenced by: '<S633>/Unit_Delay'
                                         */
  real_T Out_Y0_l;                     /* Computed Parameter: Out_Y0_l
                                        * Referenced by: '<S662>/Out'
                                        */
  real_T Out_Y0_i;                     /* Computed Parameter: Out_Y0_i
                                        * Referenced by: '<S663>/Out'
                                        */
  real_T Out_Y0_a;                     /* Computed Parameter: Out_Y0_a
                                        * Referenced by: '<S664>/Out'
                                        */
  real_T Out_Y0_b;                     /* Computed Parameter: Out_Y0_b
                                        * Referenced by: '<S665>/Out'
                                        */
  real_T Out_Y0_p;                     /* Computed Parameter: Out_Y0_p
                                        * Referenced by: '<S666>/Out'
                                        */
  real_T Out_Y0_m;                     /* Computed Parameter: Out_Y0_m
                                        * Referenced by: '<S722>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_c;/* Expression: 0.0
                                          * Referenced by: '<S797>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_pp;           /* Expression: 1
                                        * Referenced by: '<S722>/Constant1'
                                        */
  real_T Out1_Y0_d;                    /* Computed Parameter: Out1_Y0_d
                                        * Referenced by: '<S802>/Out1'
                                        */
  real_T Constant1_Value_mr;           /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S802>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_a;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S802>/Unit_Delay'
                                        */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S825>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S825>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S825>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S825>/TX delay time'
                                        */
  real_T TXstatus_Y0_d;                /* Computed Parameter: TXstatus_Y0_d
                                        * Referenced by: '<S833>/TX status'
                                        */
  real_T TXtime_Y0_m;                  /* Computed Parameter: TXtime_Y0_m
                                        * Referenced by: '<S833>/TX time'
                                        */
  real_T TXdeltatime_Y0_f;             /* Computed Parameter: TXdeltatime_Y0_f
                                        * Referenced by: '<S833>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_n;             /* Computed Parameter: TXdelaytime_Y0_n
                                        * Referenced by: '<S833>/TX delay time'
                                        */
  real_T TXstatus_Y0_a;                /* Computed Parameter: TXstatus_Y0_a
                                        * Referenced by: '<S845>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S845>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S845>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S845>/TX delay time'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S846>/TX status'
                                        */
  real_T TXtime_Y0_k;                  /* Computed Parameter: TXtime_Y0_k
                                        * Referenced by: '<S846>/TX time'
                                        */
  real_T TXdeltatime_Y0_m;             /* Computed Parameter: TXdeltatime_Y0_m
                                        * Referenced by: '<S846>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S846>/TX delay time'
                                        */
  real_T TXstatus_Y0_db;               /* Computed Parameter: TXstatus_Y0_db
                                        * Referenced by: '<S849>/TX status'
                                        */
  real_T TXtime_Y0_a;                  /* Computed Parameter: TXtime_Y0_a
                                        * Referenced by: '<S849>/TX time'
                                        */
  real_T TXdeltatime_Y0_mj;            /* Computed Parameter: TXdeltatime_Y0_mj
                                        * Referenced by: '<S849>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i;             /* Computed Parameter: TXdelaytime_Y0_i
                                        * Referenced by: '<S849>/TX delay time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S850>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S850>/TX time'
                                        */
  real_T TXdeltatime_Y0_n0;            /* Computed Parameter: TXdeltatime_Y0_n0
                                        * Referenced by: '<S850>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_a;             /* Computed Parameter: TXdelaytime_Y0_a
                                        * Referenced by: '<S850>/TX delay time'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S865>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S865>/TX time'
                                        */
  real_T TXdeltatime_Y0_m1;            /* Computed Parameter: TXdeltatime_Y0_m1
                                        * Referenced by: '<S865>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_at;            /* Computed Parameter: TXdelaytime_Y0_at
                                        * Referenced by: '<S865>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S866>/TX status'
                                        */
  real_T TXtime_Y0_d;                  /* Computed Parameter: TXtime_Y0_d
                                        * Referenced by: '<S866>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S866>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S866>/TX delay time'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S868>/TX status'
                                        */
  real_T TXtime_Y0_i;                  /* Computed Parameter: TXtime_Y0_i
                                        * Referenced by: '<S868>/TX time'
                                        */
  real_T TXdeltatime_Y0_fu;            /* Computed Parameter: TXdeltatime_Y0_fu
                                        * Referenced by: '<S868>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h;             /* Computed Parameter: TXdelaytime_Y0_h
                                        * Referenced by: '<S868>/TX delay time'
                                        */
  real_T TXstatus_Y0_at;               /* Computed Parameter: TXstatus_Y0_at
                                        * Referenced by: '<S870>/TX status'
                                        */
  real_T TXtime_Y0_kr;                 /* Computed Parameter: TXtime_Y0_kr
                                        * Referenced by: '<S870>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S870>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_e;             /* Computed Parameter: TXdelaytime_Y0_e
                                        * Referenced by: '<S870>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S883>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S891>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_g;/* Expression: 0
                                        * Referenced by: '<S883>/Unit_Delay'
                                        */
  real_T Constant_Value_hh;            /* Expression: 0
                                        * Referenced by: '<S892>/Constant'
                                        */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S894>/TX status'
                                        */
  real_T TXtime_Y0_i2;                 /* Computed Parameter: TXtime_Y0_i2
                                        * Referenced by: '<S894>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S894>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_im;            /* Computed Parameter: TXdelaytime_Y0_im
                                        * Referenced by: '<S894>/TX delay time'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S847>/Constant'
                                        */
  real_T Constant1_Value_ac;           /* Expression: 1
                                        * Referenced by: '<S847>/Constant1'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S848>/Constant'
                                        */
  real_T Constant1_Value_oa;           /* Expression: 1
                                        * Referenced by: '<S848>/Constant1'
                                        */
  real_T Constant_Value_fj;            /* Expression: 0
                                        * Referenced by: '<S867>/Constant'
                                        */
  real_T Constant1_Value_jc;           /* Expression: 1
                                        * Referenced by: '<S867>/Constant1'
                                        */
  real_T TXstatus_Y0_a4;               /* Computed Parameter: TXstatus_Y0_a4
                                        * Referenced by: '<S907>/TX status'
                                        */
  real_T TXtime_Y0_nd;                 /* Computed Parameter: TXtime_Y0_nd
                                        * Referenced by: '<S907>/TX time'
                                        */
  real_T TXdeltatime_Y0_l;             /* Computed Parameter: TXdeltatime_Y0_l
                                        * Referenced by: '<S907>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d;             /* Computed Parameter: TXdelaytime_Y0_d
                                        * Referenced by: '<S907>/TX delay time'
                                        */
  real_T TXstatus_Y0_jb;               /* Computed Parameter: TXstatus_Y0_jb
                                        * Referenced by: '<S916>/TX status'
                                        */
  real_T TXtime_Y0_md;                 /* Computed Parameter: TXtime_Y0_md
                                        * Referenced by: '<S916>/TX time'
                                        */
  real_T TXdeltatime_Y0_j;             /* Computed Parameter: TXdeltatime_Y0_j
                                        * Referenced by: '<S916>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d1;            /* Computed Parameter: TXdelaytime_Y0_d1
                                        * Referenced by: '<S916>/TX delay time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S917>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S917>/TX time'
                                        */
  real_T TXdeltatime_Y0_i;             /* Computed Parameter: TXdeltatime_Y0_i
                                        * Referenced by: '<S917>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g;             /* Computed Parameter: TXdelaytime_Y0_g
                                        * Referenced by: '<S917>/TX delay time'
                                        */
  real_T TXstatus_Y0_f;                /* Computed Parameter: TXstatus_Y0_f
                                        * Referenced by: '<S920>/TX status'
                                        */
  real_T TXtime_Y0_c;                  /* Computed Parameter: TXtime_Y0_c
                                        * Referenced by: '<S920>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S920>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_m;             /* Computed Parameter: TXdelaytime_Y0_m
                                        * Referenced by: '<S920>/TX delay time'
                                        */
  real_T TXstatus_Y0_jq;               /* Computed Parameter: TXstatus_Y0_jq
                                        * Referenced by: '<S921>/TX status'
                                        */
  real_T TXtime_Y0_p;                  /* Computed Parameter: TXtime_Y0_p
                                        * Referenced by: '<S921>/TX time'
                                        */
  real_T TXdeltatime_Y0_i2;            /* Computed Parameter: TXdeltatime_Y0_i2
                                        * Referenced by: '<S921>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_c;             /* Computed Parameter: TXdelaytime_Y0_c
                                        * Referenced by: '<S921>/TX delay time'
                                        */
  real_T TXstatus_Y0_i3;               /* Computed Parameter: TXstatus_Y0_i3
                                        * Referenced by: '<S929>/TX status'
                                        */
  real_T TXtime_Y0_dk;                 /* Computed Parameter: TXtime_Y0_dk
                                        * Referenced by: '<S929>/TX time'
                                        */
  real_T TXdeltatime_Y0_k;             /* Computed Parameter: TXdeltatime_Y0_k
                                        * Referenced by: '<S929>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_nk;            /* Computed Parameter: TXdelaytime_Y0_nk
                                        * Referenced by: '<S929>/TX delay time'
                                        */
  real_T zero_Value_n;                 /* Expression: 0
                                        * Referenced by: '<S949>/zero'
                                        */
  real_T Constant_Value_ke;            /* Expression: 8192/360
                                        * Referenced by: '<S960>/Constant'
                                        */
  real_T Constant_Value_ah;            /* Expression: 0
                                        * Referenced by: '<S918>/Constant'
                                        */
  real_T Constant1_Value_fy;           /* Expression: 1
                                        * Referenced by: '<S918>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S959>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S959>/MN'
                                        */
  real_T Constant_Value_hk;            /* Expression: 0
                                        * Referenced by: '<S919>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 1
                                        * Referenced by: '<S919>/Constant1'
                                        */
  real_T TXstatus_Y0_kq;               /* Computed Parameter: TXstatus_Y0_kq
                                        * Referenced by: '<S974>/TX status'
                                        */
  real_T TXtime_Y0_a0;                 /* Computed Parameter: TXtime_Y0_a0
                                        * Referenced by: '<S974>/TX time'
                                        */
  real_T TXdeltatime_Y0_nr;            /* Computed Parameter: TXdeltatime_Y0_nr
                                        * Referenced by: '<S974>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g3;            /* Computed Parameter: TXdelaytime_Y0_g3
                                        * Referenced by: '<S974>/TX delay time'
                                        */
  real_T TXstatus_Y0_d5;               /* Computed Parameter: TXstatus_Y0_d5
                                        * Referenced by: '<S976>/TX status'
                                        */
  real_T TXtime_Y0_gz;                 /* Computed Parameter: TXtime_Y0_gz
                                        * Referenced by: '<S976>/TX time'
                                        */
  real_T TXdeltatime_Y0_c;             /* Computed Parameter: TXdeltatime_Y0_c
                                        * Referenced by: '<S976>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_pg;            /* Computed Parameter: TXdelaytime_Y0_pg
                                        * Referenced by: '<S976>/TX delay time'
                                        */
  real_T TXstatus_Y0_ds;               /* Computed Parameter: TXstatus_Y0_ds
                                        * Referenced by: '<S984>/TX status'
                                        */
  real_T TXtime_Y0_fe;                 /* Computed Parameter: TXtime_Y0_fe
                                        * Referenced by: '<S984>/TX time'
                                        */
  real_T TXdeltatime_Y0_kq;            /* Computed Parameter: TXdeltatime_Y0_kq
                                        * Referenced by: '<S984>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h2;            /* Computed Parameter: TXdelaytime_Y0_h2
                                        * Referenced by: '<S984>/TX delay time'
                                        */
  real_T Constant4_Value_a;            /* Expression: 0
                                        * Referenced by: '<S970>/Constant4'
                                        */
  real_T Constant2_Value_d;            /* Expression: -15.687
                                        * Referenced by: '<S970>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S970>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S970>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S970>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S970>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S970>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S810>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S969>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_ek;       /* Expression: 1
                                        * Referenced by: '<S969>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: 0
                                        * Referenced by: '<S969>/Saturation'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 100
                                        * Referenced by: '<S969>/Gain'
                                        */
  real_T Gain_Gain_md;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S986>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S969>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S969>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S969>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_h;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S986>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S970>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S970>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_c3;               /* Computed Parameter: TXstatus_Y0_c3
                                        * Referenced by: '<S1000>/TX status'
                                        */
  real_T TXtime_Y0_c0;                 /* Computed Parameter: TXtime_Y0_c0
                                        * Referenced by: '<S1000>/TX time'
                                        */
  real_T TXdeltatime_Y0_ow;            /* Computed Parameter: TXdeltatime_Y0_ow
                                        * Referenced by: '<S1000>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S1000>/TX delay time'
                                        */
  real_T TXstatus_Y0_c2;               /* Computed Parameter: TXstatus_Y0_c2
                                        * Referenced by: '<S1011>/TX status'
                                        */
  real_T TXtime_Y0_gb;                 /* Computed Parameter: TXtime_Y0_gb
                                        * Referenced by: '<S1011>/TX time'
                                        */
  real_T TXdeltatime_Y0_gy;            /* Computed Parameter: TXdeltatime_Y0_gy
                                        * Referenced by: '<S1011>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S1011>/TX delay time'
                                        */
  real_T TXstatus_Y0_k4;               /* Computed Parameter: TXstatus_Y0_k4
                                        * Referenced by: '<S1012>/TX status'
                                        */
  real_T TXtime_Y0_fu;                 /* Computed Parameter: TXtime_Y0_fu
                                        * Referenced by: '<S1012>/TX time'
                                        */
  real_T TXdeltatime_Y0_kz;            /* Computed Parameter: TXdeltatime_Y0_kz
                                        * Referenced by: '<S1012>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ph;            /* Computed Parameter: TXdelaytime_Y0_ph
                                        * Referenced by: '<S1012>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S813>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_dsg;              /* Computed Parameter: TXstatus_Y0_dsg
                                        * Referenced by: '<S1019>/TX status'
                                        */
  real_T TXtime_Y0_kl;                 /* Computed Parameter: TXtime_Y0_kl
                                        * Referenced by: '<S1019>/TX time'
                                        */
  real_T TXdeltatime_Y0_lu;            /* Computed Parameter: TXdeltatime_Y0_lu
                                        * Referenced by: '<S1019>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ne;            /* Computed Parameter: TXdelaytime_Y0_ne
                                        * Referenced by: '<S1019>/TX delay time'
                                        */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S1020>/TX status'
                                        */
  real_T TXtime_Y0_fn;                 /* Computed Parameter: TXtime_Y0_fn
                                        * Referenced by: '<S1020>/TX time'
                                        */
  real_T TXdeltatime_Y0_ov;            /* Computed Parameter: TXdeltatime_Y0_ov
                                        * Referenced by: '<S1020>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_at4;           /* Computed Parameter: TXdelaytime_Y0_at4
                                        * Referenced by: '<S1020>/TX delay time'
                                        */
  real_T TXstatus_Y0_l;                /* Computed Parameter: TXstatus_Y0_l
                                        * Referenced by: '<S1024>/TX status'
                                        */
  real_T TXtime_Y0_e;                  /* Computed Parameter: TXtime_Y0_e
                                        * Referenced by: '<S1024>/TX time'
                                        */
  real_T TXdeltatime_Y0_gx;            /* Computed Parameter: TXdeltatime_Y0_gx
                                        * Referenced by: '<S1024>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ag;            /* Computed Parameter: TXdelaytime_Y0_ag
                                        * Referenced by: '<S1024>/TX delay time'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S718>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S718>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S718>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_f2;/* Expression: 0.0
                                          * Referenced by: '<S751>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_b;        /* Expression: 1
                                        * Referenced by: '<S747>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_e;        /* Expression: 1
                                        * Referenced by: '<S750>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S718>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S718>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 100
                                        * Referenced by: '<S402>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S718>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S718>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dx;/* Expression: 0.0
                                          * Referenced by: '<S743>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_n;        /* Expression: 1
                                        * Referenced by: '<S739>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_e3;       /* Expression: 1
                                        * Referenced by: '<S742>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S718>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S718>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S718>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S718>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_lj;/* Expression: 0.0
                                          * Referenced by: '<S767>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_j;        /* Expression: 1
                                        * Referenced by: '<S763>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_i;        /* Expression: 1
                                        * Referenced by: '<S766>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S718>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S718>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 100
                                        * Referenced by: '<S402>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S718>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S718>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_dh;/* Expression: 0.0
                                          * Referenced by: '<S759>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_m;        /* Expression: 1
                                        * Referenced by: '<S755>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_m0;       /* Expression: 1
                                        * Referenced by: '<S758>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S718>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S718>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S718>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S721>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S721>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_j;        /* Expression: Inf
                                        * Referenced by: '<S788>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: 0.0001
                                        * Referenced by: '<S788>/Saturation'
                                        */
  real_T Constant1_Value_ar;           /* Expression: 1
                                        * Referenced by: '<S788>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_i;/* Expression: 0
                                         * Referenced by: '<S788>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S721>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S721>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S721>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S721>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_m;        /* Expression: Inf
                                        * Referenced by: '<S789>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 0.0001
                                        * Referenced by: '<S789>/Saturation'
                                        */
  real_T Constant1_Value_c3;           /* Expression: 1
                                        * Referenced by: '<S789>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_p;/* Expression: 0
                                         * Referenced by: '<S789>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S721>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S721>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S715>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCondit_k;/* Expression: 0.0
                                          * Referenced by: '<S787>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondit_n;/* Expression: 0.0
                                          * Referenced by: '<S786>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S723>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S723>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S718>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S718>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_e;/* Expression: 0.0
                                          * Referenced by: '<S775>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_i3;       /* Expression: 1
                                        * Referenced by: '<S771>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_is;       /* Expression: 1
                                        * Referenced by: '<S774>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_h;/* Expression: 25
                                          * Referenced by: '<S715>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_i;/* Expression: 25
                                          * Referenced by: '<S715>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S715>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S402>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S403>/Rate Transition'
                                          */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S436>/Constant'
                                        */
  real_T Constant_Value_d2;            /* Expression: 1
                                        * Referenced by: '<S435>/Constant'
                                        */
  real_T dsa_tcpip_setup_P1_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P1_Size
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P1;           /* Expression: boardType
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P2_Size
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P2;           /* Expression: boardNo
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P3_Size
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P3;           /* Expression: channelNo
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P4_Size
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P4;           /* Expression: localIpNum
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P5_Size
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P5;           /* Expression: localSnMask
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6_Size[2];   /* Computed Parameter: dsa_tcpip_setup_P6_Size
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T dsa_tcpip_setup_P6;           /* Expression: localGateway
                                        * Referenced by: '<S386>/dsa_tcpip_setup'
                                        */
  real_T Heartbeat_Amp;                /* Expression: 1
                                        * Referenced by: '<S385>/Heartbeat'
                                        */
  real_T Heartbeat_Period;             /* Expression: 10
                                        * Referenced by: '<S385>/Heartbeat'
                                        */
  real_T Heartbeat_Duty;               /* Expression: 5
                                        * Referenced by: '<S385>/Heartbeat'
                                        */
  real_T Heartbeat_PhaseDelay;         /* Expression: 0
                                        * Referenced by: '<S385>/Heartbeat'
                                        */
  real_T TCPIP_Com_P1_Size[2];         /* Computed Parameter: TCPIP_Com_P1_Size
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P1;                 /* Expression: localPort
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2_Size[2];         /* Computed Parameter: TCPIP_Com_P2_Size
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P2;                 /* Expression: remotePort
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3_Size[2];         /* Computed Parameter: TCPIP_Com_P3_Size
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P3;                 /* Expression: remoteAddr
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4_Size[2];         /* Computed Parameter: TCPIP_Com_P4_Size
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P4;                 /* Expression: outputSize
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5_Size[2];         /* Computed Parameter: TCPIP_Com_P5_Size
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P5;                 /* Expression: inputSize
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6_Size[2];         /* Computed Parameter: TCPIP_Com_P6_Size
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T TCPIP_Com_P6;                 /* Expression: legacyMode
                                        * Referenced by: '<S387>/TCPIP_Com'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S389>/Unit Delay'
                                        */
  real_T Switch1_Threshold;            /* Expression: 100
                                        * Referenced by: '<S389>/Switch1'
                                        */
  real_T NoData_Value;                 /* Expression: 0
                                        * Referenced by: '<S384>/No Data'
                                        */
  real_T Constant_Value_m3;            /* Expression: 0
                                        * Referenced by: '<S434>/Constant'
                                        */
  real_T Constant_Value_px;            /* Expression: 1
                                        * Referenced by: '<S417>/Constant'
                                        */
  real_T Constant_Value_mg;            /* Expression: 1
                                        * Referenced by: '<S440>/Constant'
                                        */
  real_T Constant_Value_ot;            /* Expression: 0
                                        * Referenced by: '<S1022>/Constant'
                                        */
  real_T Constant1_Value_h;            /* Expression: 1
                                        * Referenced by: '<S1022>/Constant1'
                                        */
  real_T TmpRTBAtANDInport1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_jm;           /* Expression: 1
                                        * Referenced by: '<S805>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1031>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_p5;           /* Expression: 0.001
                                        * Referenced by: '<S805>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1031>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1031>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 0.01
                                        * Referenced by: '<S805>/Gain1'
                                        */
  real_T Constant1_Value_gg;           /* Expression: 1
                                        * Referenced by: '<S805>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1031>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_ad;           /* Expression: 0.001
                                        * Referenced by: '<S805>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1031>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1031>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 0.01
                                        * Referenced by: '<S805>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S402>/ShifterControlDC'
                                        */
  real_T Constant_Value_kt;            /* Expression: .4
                                        * Referenced by: '<S1032>/Constant'
                                        */
  real_T Constant1_Value_do;           /* Expression: 0.5
                                        * Referenced by: '<S1032>/Constant1'
                                        */
  real_T Constant_Value_ek;            /* Expression: 0
                                        * Referenced by: '<S1038>/Constant'
                                        */
  real_T Constant_Value_ji;            /* Expression: 0
                                        * Referenced by: '<S1039>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1033>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1033>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1033>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1033>/Flash'
                                        */
  real_T Constant_Value_jo;            /* Expression: 0
                                        * Referenced by: '<S427>/Constant'
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
  real_T Constant_Value_ac;            /* Expression: 0.125
                                        * Referenced by: '<S512>/Constant'
                                        */
  real_T Constant_Value_hu;            /* Expression: -125
                                        * Referenced by: '<S519>/Constant'
                                        */
  real_T Constant_Value_fw;            /* Expression: 0.125
                                        * Referenced by: '<S516>/Constant'
                                        */
  real_T Constant_Value_mr;            /* Expression: 1/1280
                                        * Referenced by: '<S517>/Constant'
                                        */
  real_T Constant_Value_j3;            /* Expression: 0.125
                                        * Referenced by: '<S520>/Constant'
                                        */
  real_T Constant_Value_ker;           /* Expression: 0.1
                                        * Referenced by: '<S521>/Constant'
                                        */
  real_T Constant_Value_mg4;           /* Expression: 10
                                        * Referenced by: '<S522>/Constant'
                                        */
  real_T Constant_Value_aa;            /* Expression: 10
                                        * Referenced by: '<S523>/Constant'
                                        */
  real_T Constant_Value_kn;            /* Expression: -125
                                        * Referenced by: '<S524>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: -125
                                        * Referenced by: '<S525>/Constant'
                                        */
  real_T Constant_Value_eo;            /* Expression: 0.125
                                        * Referenced by: '<S526>/Constant'
                                        */
  real_T Constant_Value_i2;            /* Expression: 0.125
                                        * Referenced by: '<S534>/Constant'
                                        */
  real_T Constant_Value_me;            /* Expression: 0.004
                                        * Referenced by: '<S527>/Constant'
                                        */
  real_T Constant_Value_io;            /* Expression: -125
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Constant_Value_an;            /* Expression: 0.125
                                        * Referenced by: '<S536>/Constant'
                                        */
  real_T Constant_Value_fn;            /* Expression: -125
                                        * Referenced by: '<S537>/Constant'
                                        */
  real_T Constant_Value_iz;            /* Expression: 0.125
                                        * Referenced by: '<S538>/Constant'
                                        */
  real_T Constant_Value_jz;            /* Expression: -125
                                        * Referenced by: '<S513>/Constant'
                                        */
  real_T Constant_Value_e2;            /* Expression: 0.125
                                        * Referenced by: '<S514>/Constant'
                                        */
  real_T Constant_Value_pl;            /* Expression: -125
                                        * Referenced by: '<S515>/Constant'
                                        */
  real_T Constant_Value_oj;            /* Expression: 1
                                        * Referenced by: '<S413>/Constant'
                                        */
  real_T Constant_Value_mi;            /* Expression: 1
                                        * Referenced by: '<S444>/Constant'
                                        */
  real_T Constant2_Value_mc;           /* Expression: 1
                                        * Referenced by: '<S401>/Constant2'
                                        */
  real_T Constant_Value_i0;            /* Expression: 1/1024
                                        * Referenced by: '<S643>/Constant'
                                        */
  real_T Constant1_Value_ei;           /* Expression: 1/1024
                                        * Referenced by: '<S644>/Constant1'
                                        */
  real_T Constant2_Value_gf;           /* Expression: 360/8192
                                        * Referenced by: '<S645>/Constant2'
                                        */
  real_T ShifterControlFreq_Gain;      /* Expression: 1
                                        * Referenced by: '<S402>/ShifterControlFreq'
                                        */
  real_T ShifterControlDC2_Gain;       /* Expression: 1
                                        * Referenced by: '<S402>/ShifterControlDC2'
                                        */
  real_T ShifterControlDC1_Gain;       /* Expression: 1
                                        * Referenced by: '<S402>/ShifterControlDC1'
                                        */
  ENUM_CAN_RX_T Constant_Value_l;      /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S407>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_ch;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S462>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_jc;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S408>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_my;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S471>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_it;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S462>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_j;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S462>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_b;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S462>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_nx;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S462>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S462>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_jq;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S471>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S471>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S471>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_p;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S471>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S471>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_pi;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S593>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_he;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S593>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_hz;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S593>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_b2;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S593>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_ao;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S593>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_g;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S593>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_f0;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S570>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_k;     /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S570>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S570>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_m;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S570>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_ja;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S570>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S570>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_jv;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S581>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_iyd;   /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S581>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_bb;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S581>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_h;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S581>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_j5;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S581>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_o3;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S581>/Constant5'
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
  ENUM_CAN_TX_T Constant2_Value_ks;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S807>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_aru;   /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S807>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S808>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S809>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S809>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S809>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S810>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_lo;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S932>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_ki;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S932>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_i;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                * Referenced by: '<S932>/Constant2'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_hz;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                 * Referenced by: '<S932>/Constant3'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_e;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                * Referenced by: '<S932>/Constant4'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_d;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                * Referenced by: '<S932>/Constant5'
                                                */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S98>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S98>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S970>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S970>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S970>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_a;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S970>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_j;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S970>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_d;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S970>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_l;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S970>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_k;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                     * Referenced by: '<S970>/Constant10'
                                                     */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S970>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S970>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S970>/XBRPriority'
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
                                                                  * Referenced by: '<S808>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S808>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S808>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S808>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S932>/Merge'
                                        */
  real32_T UnitDelay_InitialCondition_c;/* Computed Parameter: UnitDelay_InitialCondition_c
                                         * Referenced by: '<S278>/Unit Delay'
                                         */
  real32_T UnitDelay_InitialCondition_e;/* Computed Parameter: UnitDelay_InitialCondition_e
                                         * Referenced by: '<S283>/Unit Delay'
                                         */
  real32_T RX_delta_time_Y0;           /* Computed Parameter: RX_delta_time_Y0
                                        * Referenced by: '<S509>/RX_delta_time'
                                        */
  real32_T RX_delta_time_Y0_d;         /* Computed Parameter: RX_delta_time_Y0_d
                                        * Referenced by: '<S633>/RX_delta_time'
                                        */
  uint32_T Constant_Value_jc3;         /* Computed Parameter: Constant_Value_jc3
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
  uint32_T Operator_BitMask_cf;        /* Expression: BitMask
                                        * Referenced by: '<S886>/Operator'
                                        */
  uint32_T Operator_BitMask_gs;        /* Expression: BitMask
                                        * Referenced by: '<S887>/Operator'
                                        */
  uint32_T Operator_BitMask_nv;        /* Expression: BitMask
                                        * Referenced by: '<S888>/Operator'
                                        */
  uint32_T Operator_BitMask_jg;        /* Expression: BitMask
                                        * Referenced by: '<S889>/Operator'
                                        */
  uint32_T Constant_Value_ey;          /* Computed Parameter: Constant_Value_ey
                                        * Referenced by: '<S962>/Constant'
                                        */
  uint32_T Operator_BitMask_al;        /* Expression: BitMask
                                        * Referenced by: '<S936>/Operator'
                                        */
  uint32_T Operator_BitMask_ac;        /* Expression: BitMask
                                        * Referenced by: '<S937>/Operator'
                                        */
  uint32_T Operator_BitMask_g0;        /* Expression: BitMask
                                        * Referenced by: '<S938>/Operator'
                                        */
  uint32_T Operator_BitMask_je;        /* Expression: BitMask
                                        * Referenced by: '<S939>/Operator'
                                        */
  uint32_T IV_Value_l;                 /* Computed Parameter: IV_Value_l
                                        * Referenced by: '<S962>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_m1;/* Computed Parameter: UnitDelay_InitialCondition_m1
                                          * Referenced by: '<S962>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_ie;        /* Expression: BitMask
                                        * Referenced by: '<S940>/Operator'
                                        */
  uint32_T Operator_BitMask_ms;        /* Expression: BitMask
                                        * Referenced by: '<S941>/Operator'
                                        */
  uint32_T Operator_BitMask_px;        /* Expression: BitMask
                                        * Referenced by: '<S942>/Operator'
                                        */
  uint32_T Operator_BitMask_g5;        /* Expression: BitMask
                                        * Referenced by: '<S943>/Operator'
                                        */
  uint32_T Constant_Value_bt;          /* Computed Parameter: Constant_Value_bt
                                        * Referenced by: '<S990>/Constant'
                                        */
  uint32_T IV_Value_m0;                /* Computed Parameter: IV_Value_m0
                                        * Referenced by: '<S990>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_ip;/* Computed Parameter: UnitDelay_InitialCondition_ip
                                          * Referenced by: '<S990>/Unit Delay'
                                          */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S986>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S986>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S986>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S986>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_fr;          /* Computed Parameter: Constant_Value_fr
                                        * Referenced by: '<S1005>/Constant'
                                        */
  uint32_T IV_Value_c;                 /* Computed Parameter: IV_Value_c
                                        * Referenced by: '<S1005>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_g4;/* Computed Parameter: UnitDelay_InitialCondition_g4
                                          * Referenced by: '<S1005>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_ek5;       /* Expression: BitMask
                                        * Referenced by: '<S1001>/Operator'
                                        */
  uint32_T Operator_BitMask_h5;        /* Expression: BitMask
                                        * Referenced by: '<S1002>/Operator'
                                        */
  uint32_T Operator_BitMask_f2c;       /* Expression: BitMask
                                        * Referenced by: '<S1003>/Operator'
                                        */
  uint32_T Constant2_Value_na;         /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S422>/Constant2'
                                        */
  uint32_T Constant2_Value_ph;         /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S445>/Constant2'
                                        */
  int16_T Constant_Value_ie;           /* Expression: int16(512)
                                        * Referenced by: '<S839>/Constant'
                                        */
  uint16_T Operator_BitMask_a3f;       /* Expression: BitMask
                                        * Referenced by: '<S871>/Operator'
                                        */
  uint16_T Operator_BitMask_gx;        /* Expression: BitMask
                                        * Referenced by: '<S872>/Operator'
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
  boolean_T Constant_Value_lo0;        /* Expression: false
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
  boolean_T Constant_Value_m3d;        /* Expression: false
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
  boolean_T Constant_Value_ot0;        /* Expression: false
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
                                        * Referenced by: '<S321>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_ls;/* Expression: true
                                            * Referenced by: '<S323>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_i0;/* Expression: true
                                            * Referenced by: '<S324>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ld;/* Expression: false
                                            * Referenced by: '<S322>/Unit_Delay'
                                            */
  boolean_T Constant_Value_hg;         /* Expression: false
                                        * Referenced by: '<S324>/Constant'
                                        */
  boolean_T APTC_PEDAL_POSITION_OVR_APV_Val;/* Expression: false
                                             * Referenced by: '<S83>/APTC_PEDAL_POSITION_OVR_APV'
                                             */
  boolean_T Unit_Delay_InitialCondition_b1;/* Expression: true
                                            * Referenced by: '<S376>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gz;/* Expression: true
                                            * Referenced by: '<S377>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_aw;/* Expression: true
                                            * Referenced by: '<S365>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_gt;/* Expression: true
                                            * Referenced by: '<S366>/Unit_Delay'
                                            */
  boolean_T CPV_Value_a;               /* Expression: false
                                        * Referenced by: '<S343>/CPV'
                                        */
  boolean_T Unit_Delay_InitialCondition_ml;/* Expression: false
                                            * Referenced by: '<S349>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_ag;/* Expression: true
                                            * Referenced by: '<S338>/Unit_Delay'
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
  boolean_T zero_Value_g;              /* Expression: boolean(0)
                                        * Referenced by: '<S275>/zero'
                                        */
  boolean_T Unit_Delay1_InitialCondition_m;/* Expression: true
                                            * Referenced by: '<S314>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_ps;/* Expression: true
                                             * Referenced by: '<S315>/Unit_Delay1'
                                             */
  boolean_T zero3_Value;               /* Expression: boolean(0)
                                        * Referenced by: '<S275>/zero3'
                                        */
  boolean_T Unit_Delay1_InitialCondition_j;/* Expression: true
                                            * Referenced by: '<S316>/Unit_Delay1'
                                            */
  boolean_T Constant8_Value_l;         /* Expression: boolean(0)
                                        * Referenced by: '<S273>/Constant8'
                                        */
  boolean_T Constant_Value_hx;         /* Expression: false
                                        * Referenced by: '<S314>/Constant'
                                        */
  boolean_T Constant_Value_bh;         /* Expression: false
                                        * Referenced by: '<S315>/Constant'
                                        */
  boolean_T Constant_Value_hxo;        /* Expression: false
                                        * Referenced by: '<S316>/Constant'
                                        */
  boolean_T Constant_Value_pu;         /* Expression: false
                                        * Referenced by: '<S338>/Constant'
                                        */
  boolean_T Constant_Value_am;         /* Expression: false
                                        * Referenced by: '<S366>/Constant'
                                        */
  boolean_T Constant_Value_c1;         /* Expression: false
                                        * Referenced by: '<S377>/Constant'
                                        */
  boolean_T Constant3_Value_a;         /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S389>/Constant3'
                                        */
  boolean_T Constant2_Value_c;         /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S389>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S506>/RX_status'
                                        */
  boolean_T RX_status_Y0_n;            /* Computed Parameter: RX_status_Y0_n
                                        * Referenced by: '<S630>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_i;        /* Expression: false
                                        * Referenced by: '<S722>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_n;/* Expression: true
                                           * Referenced by: '<S793>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_c3;/* Expression: true
                                            * Referenced by: '<S794>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_c4;/* Expression: false
                                            * Referenced by: '<S792>/Unit_Delay'
                                            */
  boolean_T Constant_Value_dt;         /* Expression: false
                                        * Referenced by: '<S794>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S716>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S880>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S880>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S808>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S834>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S808>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S808>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_k;                 /* Expression: true
                                        * Referenced by: '<S962>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_j4;/* Computed Parameter: Unit_Delay_InitialCondition_j4
                                            * Referenced by: '<S961>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_h;  /* Expression: boolean(0)
                                        * Referenced by: '<S930>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_o;          /* Expression: boolean(0)
                                        * Referenced by: '<S930>/DataPage'
                                        */
  boolean_T E_Value_jr;                /* Expression: true
                                        * Referenced by: '<S990>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S970>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_or;/* Expression: false
                                            * Referenced by: '<S966>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S969>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_h5;/* Computed Parameter: Unit_Delay_InitialCondition_h5
                                            * Referenced by: '<S989>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_d;  /* Expression: boolean(0)
                                        * Referenced by: '<S985>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_p;          /* Expression: boolean(0)
                                        * Referenced by: '<S985>/DataPage'
                                        */
  boolean_T CPV_Value_c;               /* Expression: true
                                        * Referenced by: '<S969>/CPV'
                                        */
  boolean_T E_Value_f;                 /* Expression: true
                                        * Referenced by: '<S1005>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S995>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_hm;/* Computed Parameter: Unit_Delay_InitialCondition_hm
                                            * Referenced by: '<S1004>/Unit_Delay'
                                            */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1010>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_ek2;        /* Expression: boolean(1)
                                        * Referenced by: '<S411>/Constant'
                                        */
  boolean_T Constant_Value_pc;         /* Expression: boolean(1)
                                        * Referenced by: '<S412>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_bw;/* Expression: true
                                            * Referenced by: '<S721>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_jh;/* Expression: true
                                             * Referenced by: '<S788>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_a1;/* Expression: true
                                             * Referenced by: '<S721>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_g;/* Expression: true
                                            * Referenced by: '<S789>/Unit_Delay1'
                                            */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S715>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_e0;         /* Expression: boolean(1)
                                        * Referenced by: '<S416>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S421>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S428>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_g0;        /* Expression: boolean(1)
                                        * Referenced by: '<S420>/Constant1'
                                        */
  boolean_T Enable_RX_ETC2_03_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S426>/Enable_RX_ETC2_03'
                                        */
  boolean_T Enable_RX_EEC1_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S423>/Enable_RX_EEC1_00'
                                        */
  boolean_T Enable_RX_EEC3_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S425>/Enable_RX_EEC3_00'
                                        */
  boolean_T Constant_Value_dz;         /* Expression: boolean(1)
                                        * Referenced by: '<S418>/Constant'
                                        */
  boolean_T Constant_Value_cy;         /* Expression: boolean(1)
                                        * Referenced by: '<S409>/Constant'
                                        */
  boolean_T Constant_Value_cqb;        /* Expression: boolean(1)
                                        * Referenced by: '<S442>/Constant'
                                        */
  boolean_T Constant_Value_g3;         /* Expression: boolean(1)
                                        * Referenced by: '<S443>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S631>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_au;/* Expression: true
                                            * Referenced by: '<S631>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_a4;/* Expression: false
                                            * Referenced by: '<S637>/Unit_Delay'
                                            */
  boolean_T Constant_Value_mk;         /* Expression: boolean(0)
                                        * Referenced by: '<S433>/Constant'
                                        */
  boolean_T useReAX_CAN_Ch2_Value;     /* Expression: true
                                        * Referenced by: '<S452>/useReAX_CAN_Ch2'
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
                                        * Referenced by: '<S392>/Constant'
                                        */
  boolean_T useGPSSA00_Value;          /* Expression: boolean(1)
                                        * Referenced by: '<S452>/useGPSSA00'
                                        */
  boolean_T useGPSSA0_Value;           /* Expression: boolean(0)
                                        * Referenced by: '<S452>/useGPSSA0'
                                        */
  boolean_T Constant_Value_jr;         /* Expression: boolean(1)
                                        * Referenced by: '<S415>/Constant'
                                        */
  boolean_T Constant_Value_cx;         /* Expression: boolean(1)
                                        * Referenced by: '<S441>/Constant'
                                        */
  boolean_T Constant_Value_fx;         /* Computed Parameter: Constant_Value_fx
                                        * Referenced by: '<S1021>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S814>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S814>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1032>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_mf;        /* Expression: false
                                        * Referenced by: '<S1032>/Constant2'
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
  boolean_T Constant_Value_ll;         /* Expression: boolean(1)
                                        * Referenced by: '<S410>/Constant'
                                        */
  boolean_T Constant_Value_pr;         /* Expression: boolean(0)
                                        * Referenced by: '<S414>/Constant'
                                        */
  boolean_T Constant1_Value_l0;        /* Expression: boolean(1)
                                        * Referenced by: '<S419>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S424>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S437>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_p;/* Expression: boolean(0)
                                             * Referenced by: '<S438>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_b2;         /* Expression: boolean(0)
                                        * Referenced by: '<S439>/Constant'
                                        */
  boolean_T Constant_Value_p1;         /* Expression: false
                                        * Referenced by: '<S631>/Constant'
                                        */
  boolean_T Constant1_Value_kk;        /* Expression: false
                                        * Referenced by: '<S631>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_d;/* Expression: true
                                            * Referenced by: '<S631>/Unit_Delay2'
                                            */
  boolean_T Unit_Delay1_InitialCondition_k;/* Expression: true
                                            * Referenced by: '<S631>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_c5;/* Expression: false
                                            * Referenced by: '<S638>/Unit_Delay'
                                            */
  boolean_T Constant_Value_dh;         /* Expression: false
                                        * Referenced by: '<S721>/Constant'
                                        */
  boolean_T Constant_Value_hgb;        /* Expression: false
                                        * Referenced by: '<S788>/Constant'
                                        */
  boolean_T Constant1_Value_fgm;       /* Expression: false
                                        * Referenced by: '<S721>/Constant1'
                                        */
  boolean_T Constant_Value_no;         /* Expression: false
                                        * Referenced by: '<S789>/Constant'
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
                                        * Referenced by: '<S384>/for_logging7'
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
                                           * Referenced by: '<S327>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_np;      /* Computed Parameter: FixPtConstant_Value_np
                                        * Referenced by: '<S327>/FixPt Constant'
                                        */
  uint8_T Supervisor_Autonomous_Mode_Valu;/* Computed Parameter: Supervisor_Autonomous_Mode_Valu
                                           * Referenced by: '<S76>/Supervisor_Autonomous_Mode'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_f5;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_f5
                                           * Referenced by: '<S381>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_po;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_po
                                           * Referenced by: '<S370>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_i;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_i
                                           * Referenced by: '<S358>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_ck;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ck
                                           * Referenced by: '<S342>/FixPt Unit Delay2'
                                           */
  uint8_T Constant_Value_mgt;          /* Expression: uint8(3)
                                        * Referenced by: '<S276>/Constant'
                                        */
  uint8_T Constant1_Value_ls;          /* Expression: uint8(5)
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint8_T FixPtConstant_Value_az;      /* Computed Parameter: FixPtConstant_Value_az
                                        * Referenced by: '<S342>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_g;       /* Computed Parameter: FixPtConstant_Value_g
                                        * Referenced by: '<S358>/FixPt Constant'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_g;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_g
                                           * Referenced by: '<S360>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_pz;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pz
                                           * Referenced by: '<S361>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_el;      /* Computed Parameter: FixPtConstant_Value_el
                                        * Referenced by: '<S361>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_p;       /* Computed Parameter: FixPtConstant_Value_p
                                        * Referenced by: '<S360>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_d;       /* Computed Parameter: FixPtConstant_Value_d
                                        * Referenced by: '<S370>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jx;      /* Computed Parameter: FixPtConstant_Value_jx
                                        * Referenced by: '<S381>/FixPt Constant'
                                        */
  uint8_T Failure_Value_g;             /* Computed Parameter: Failure_Value_g
                                        * Referenced by: '<S384>/Failure'
                                        */
  uint8_T RawData_Y0;                  /* Computed Parameter: RawData_Y0
                                        * Referenced by: '<S509>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_f[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                            * Referenced by: '<S506>/Unit Delay'
                                            */
  uint8_T RawData_Y0_l;                /* Computed Parameter: RawData_Y0_l
                                        * Referenced by: '<S633>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_k[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                            * Referenced by: '<S630>/Unit Delay'
                                            */
  uint8_T FixPtUnitDelay2_InitialCondi_e1;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_e1
                                           * Referenced by: '<S797>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_pn;      /* Computed Parameter: FixPtConstant_Value_pn
                                        * Referenced by: '<S797>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_aa;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S841>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S880>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S880>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S880>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S880>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_fz;         /* Expression: BitMask
                                        * Referenced by: '<S885>/Operator'
                                        */
  uint8_T Operator_BitMask_g3;         /* Expression: BitMask
                                        * Referenced by: '<S884>/Operator'
                                        */
  uint8_T Constant_Value_by;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S840>/Constant'
                                        */
  uint8_T Constant1_Value_la;          /* Expression: uint8(0)
                                        * Referenced by: '<S933>/Constant1'
                                        */
  uint8_T Constant_Value_p4;           /* Expression: uint8(1)
                                        * Referenced by: '<S933>/Constant'
                                        */
  uint8_T Constant_Value_mgq;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S931>/Constant'
                                        */
  uint8_T Constant1_Value_gd;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S931>/Constant1'
                                        */
  uint8_T Operator_BitMask_cz;         /* Expression: BitMask
                                        * Referenced by: '<S944>/Operator'
                                        */
  uint8_T Priority_Value_p;            /* Expression: uint8(6)
                                        * Referenced by: '<S930>/Priority'
                                        */
  uint8_T PDUFormat_Value_l;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S930>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_d;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S930>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_f;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S930>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_h5t;        /* Expression: BitMask
                                        * Referenced by: '<S945>/Operator'
                                        */
  uint8_T Constant2_Value_ksv;         /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S986>/Constant2'
                                        */
  uint8_T Constant3_Value_dy;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S986>/Constant3'
                                        */
  uint8_T Constant4_Value_o0;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S986>/Constant4'
                                        */
  uint8_T Constant_Value_pq;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S986>/Constant'
                                        */
  uint8_T Constant1_Value_hg;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S986>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S986>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_c;            /* Expression: uint8(3)
                                        * Referenced by: '<S985>/Priority'
                                        */
  uint8_T PDUFormat_Value_o;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S985>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_g;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S985>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_c;       /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S985>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S986>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1016>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1016>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1016>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1016>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1016>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1016>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1016>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1016>/Byte1'
                                        */
  uint8_T Byte8_Value_d;               /* Expression: uint8('N')
                                        * Referenced by: '<S1015>/Byte8'
                                        */
  uint8_T Byte7_Value_o;               /* Expression: uint8('R')
                                        * Referenced by: '<S1015>/Byte7'
                                        */
  uint8_T Byte6_Value_j;               /* Expression: uint8('*')
                                        * Referenced by: '<S1015>/Byte6'
                                        */
  uint8_T Byte5_Value_c;               /* Expression: uint8('R')
                                        * Referenced by: '<S1015>/Byte5'
                                        */
  uint8_T Byte4_Value_a;               /* Expression: uint8('A')
                                        * Referenced by: '<S1015>/Byte4'
                                        */
  uint8_T Byte3_Value_i;               /* Expression: uint8('C')
                                        * Referenced by: '<S1015>/Byte3'
                                        */
  uint8_T Byte2_Value_f;               /* Expression: uint8('P')
                                        * Referenced by: '<S1015>/Byte2'
                                        */
  uint8_T Byte1_Value_j;               /* Computed Parameter: Byte1_Value_j
                                        * Referenced by: '<S1015>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondi_ik;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_ik
                                           * Referenced by: '<S751>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_aj;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_aj
                                           * Referenced by: '<S743>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_d;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_d
                                           * Referenced by: '<S767>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_m;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_m
                                           * Referenced by: '<S759>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_b;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_b
                                           * Referenced by: '<S787>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_fd;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_fd
                                           * Referenced by: '<S786>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_n;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_n
                                           * Referenced by: '<S775>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_ji;          /* Expression: uint8(32)
                                        * Referenced by: '<S455>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S631>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_ft;           /* Computed Parameter: Constant_Value_ft
                                        * Referenced by: '<S635>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Byte1_Value_c;               /* Computed Parameter: Byte1_Value_c
                                        * Referenced by: '<S1013>/Byte1'
                                        */
  uint8_T Byte2_Value_j;               /* Computed Parameter: Byte2_Value_j
                                        * Referenced by: '<S1013>/Byte2'
                                        */
  uint8_T Byte3_Value_k;               /* Computed Parameter: Byte3_Value_k
                                        * Referenced by: '<S1013>/Byte3'
                                        */
  uint8_T Byte4_Value_f;               /* Computed Parameter: Byte4_Value_f
                                        * Referenced by: '<S1013>/Byte4'
                                        */
  uint8_T Byte5_Value_m;               /* Computed Parameter: Byte5_Value_m
                                        * Referenced by: '<S1013>/Byte5'
                                        */
  uint8_T Byte6_Value_a;               /* Computed Parameter: Byte6_Value_a
                                        * Referenced by: '<S1013>/Byte6'
                                        */
  uint8_T Byte7_Value_f;               /* Computed Parameter: Byte7_Value_f
                                        * Referenced by: '<S1013>/Byte7'
                                        */
  uint8_T Byte8_Value_n;               /* Computed Parameter: Byte8_Value_n
                                        * Referenced by: '<S1013>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_h;/* Computed Parameter: UnitDelay1_InitialCondition_h
                                         * Referenced by: '<S814>/Unit Delay1'
                                         */
  uint8_T Constant1_Value_kd;          /* Computed Parameter: Constant1_Value_kd
                                        * Referenced by: '<S814>/Constant1'
                                        */
  uint8_T Constant2_Value_fk;          /* Computed Parameter: Constant2_Value_fk
                                        * Referenced by: '<S1033>/Constant2'
                                        */
  uint8_T Constant3_Value_g1;          /* Computed Parameter: Constant3_Value_g1
                                        * Referenced by: '<S1033>/Constant3'
                                        */
  uint8_T Unit_Delay_135_InitialCondition;/* Computed Parameter: Unit_Delay_135_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S631>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_oc;           /* Computed Parameter: Constant_Value_oc
                                        * Referenced by: '<S636>/Constant'
                                        */
  uint8_T Constant_Value_pw;           /* Expression: uint8(16)
                                        * Referenced by: '<S455>/Constant'
                                        */
  uint8_T Constant1_Value_ht;          /* Expression: uint8(17)
                                        * Referenced by: '<S455>/Constant1'
                                        */
  uint8_T Constant2_Value_is;          /* Expression: uint8(19)
                                        * Referenced by: '<S455>/Constant2'
                                        */
  uint8_T Constant4_Value_j4;          /* Expression: uint8(255)
                                        * Referenced by: '<S455>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_pm;      /* Computed Parameter: FixPtConstant_Value_pm
                                        * Referenced by: '<S743>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jxb;     /* Computed Parameter: FixPtConstant_Value_jxb
                                        * Referenced by: '<S751>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_es;      /* Computed Parameter: FixPtConstant_Value_es
                                        * Referenced by: '<S759>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_h;       /* Computed Parameter: FixPtConstant_Value_h
                                        * Referenced by: '<S767>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jh;      /* Computed Parameter: FixPtConstant_Value_jh
                                        * Referenced by: '<S775>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_gf;      /* Computed Parameter: FixPtConstant_Value_gf
                                        * Referenced by: '<S786>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_k1;      /* Computed Parameter: FixPtConstant_Value_k1
                                        * Referenced by: '<S787>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S932>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S932>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S932>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S932>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S932>/ALL_CTRL_DISABLED' */
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
extern real_T GLB_Absolute_Timestamp;  /* '<S403>/Rate Transition' */
extern real_T ReAX_ActualHandwheelPos; /* '<S429>/Switch' */
extern real_T EthernetLinkStatus;      /* '<S386>/dsa_tcpip_setup' */
extern real_T CurrentAzimuth_rad;      /* '<S384>/Switch' */
extern real_T TargetAzimuth_rad;       /* '<S384>/Switch1' */
extern real_T TargetVelocity_kph;      /* '<S384>/Switch3' */
extern real_T Curvature;               /* '<S384>/Switch4' */
extern real_T CurrentVelocity_kph;     /* '<S384>/Switch2' */
extern real_T CrosstrackError;         /* '<S384>/Switch5' */
extern real_T GPS_X;                   /* '<S384>/Switch6' */
extern real_T GPS_Y;                   /* '<S384>/Switch7' */
extern real_T GPS_Time;                /* '<S384>/Switch8' */
extern real_T ReAX_EchoedSteerWheelPos;/* '<S429>/Switch' */
extern real_T SteerWheelAngle;         /* '<S627>/S-Function1' */
extern real_T YawRate;                 /* '<S627>/S-Function1' */
extern real_T SPN1810_LongitudinalAcceleration;/* '<S627>/S-Function1' */
extern real_T WheelBasedVehicleSpeed;  /* '<S492>/S-Function1' */
extern real_T BrakeSwitch;             /* '<S492>/S-Function1' */
extern real_T Lateral_Control_Output;  /* '<S274>/Sum1' */
extern real_T Lateral_Control_Rate_Limiter_Output;/* '<S299>/If_Then_Else' */
extern real_T SteerCommandDeg;         /* '<S80>/sign1' */
extern real_T DesiredSteeringAngle;    /* '<S80>/sign2' */
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
extern real32_T REAX_Handwheel_Torque; /* '<S405>/Data Type Conversion3' */
extern real32_T REAX_Handwheel_Velocity;/* '<S405>/Data Type Conversion4' */
extern real32_T REAX_Pull_Compensation;/* '<S405>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN1_Status;/* '<S1>/Data Type Conversion' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN5_Status;/* '<S1>/Data Type Conversion5' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN6_Status;/* '<S1>/Data Type Conversion4' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN3_Status;/* '<S1>/Data Type Conversion3' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN4_Status;/* '<S1>/Data Type Conversion2' */
extern ENUM_CAN_STATUS_DIAG_T DIAG_CAN2_Status;/* '<S1>/Data Type Conversion1' */
extern uint8_T SupervisorMode;         /* '<S384>/Switch9' */
extern uint8_T REAX_Current_Mode;      /* '<S405>/Data Type Conversion' */
extern uint8_T REAX_Req_Mode;          /* '<S405>/Data Type Conversion1' */
extern uint8_T REAX_Status;            /* '<S405>/Data Type Conversion2' */
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1046>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S402>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S716>/Switch' */
extern boolean_T RTMapsOk;             /* '<S384>/AND' */
extern boolean_T EngagePB;             /* '<S402>/Logical Operator2' */
extern boolean_T AutonomousEnabled;    /* '<S76>/Autonomous Mode Switch1' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T RateLimiterActive;    /* '<S306>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S720>/Switch' */

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
extern real_T Lateral_Control_I;       /* Variable: Lateral_Control_I
                                        * Referenced by: '<S298>/Integral Gain'
                                        */
extern real_T Lateral_Control_P;       /* Variable: Lateral_Control_P
                                        * Referenced by:
                                        *   '<S274>/PGain'
                                        *   '<S298>/Proportional Gain'
                                        */
extern real_T Lateral_Control_Pole;    /* Variable: Lateral_Control_Pole
                                        * Referenced by: '<S300>/GainPole'
                                        */
extern real_T Lateral_Control_YawRate_Limit;/* Variable: Lateral_Control_YawRate_Limit
                                             * Referenced by:
                                             *   '<S274>/Constant2'
                                             *   '<S274>/Constant4'
                                             */
extern real_T Lateral_Control_Zero;    /* Variable: Lateral_Control_Zero
                                        * Referenced by: '<S300>/GainZero'
                                        */
extern real_T PROPB_REAX_1_E4_DESIRED_POSITION_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_POSITION_APV
                                                    * Referenced by: '<S949>/Constant7'
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
extern ENUM_CAN_RX_T CANR_PROPB_REAX_3_13_CHANNEL_APV;/* Variable: CANR_PROPB_REAX_3_13_CHANNEL_APV
                                                       * Referenced by: '<S430>/Constant'
                                                       */
extern ENUM_CAN_RX_T CANR_PROPB_REAX_4_13_CHANNEL_APV;/* Variable: CANR_PROPB_REAX_4_13_CHANNEL_APV
                                                       * Referenced by: '<S431>/Constant'
                                                       */
extern ENUM_CAN_RX_T CANR_PROPB_XPR_1_50_CHANNEL_APV;/* Variable: CANR_PROPB_XPR_1_50_CHANNEL_APV
                                                      * Referenced by: '<S432>/Constant'
                                                      */
extern ENUM_LONG_SPEED_DEMAND_SOURCE_T LONG_SPEED_SRC_SELECTOR_APV;/* Variable: LONG_SPEED_SRC_SELECTOR_APV
                                                                    * Referenced by:
                                                                    *   '<S80>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    *   '<S81>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    */
extern ENUM_REAX_OPERATION_MODE_T PROPB_REAX_1_E4_DESIRED_OPMODE_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_OPMODE_APV
                                                                      * Referenced by: '<S932>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S949>/Constant1'
                                                                      */
extern ENUM_SWITCH_T RATE_LIMITER_ENABLE_APV;/* Variable: RATE_LIMITER_ENABLE_APV
                                              * Referenced by: '<S299>/RATE_LIMITER_ENABLE_APV'
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
 * '<S299>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation'
 * '<S300>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Transfer Fcn Lead or Lag'
 * '<S301>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation'
 * '<S302>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else'
 * '<S303>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Curvature Saturation/If_Then_Else1'
 * '<S304>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else'
 * '<S305>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Error Saturation/If_Then_Else1'
 * '<S306>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Compare To Constant'
 * '<S307>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/If_Then_Else'
 * '<S308>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter'
 * '<S309>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Saturation'
 * '<S310>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Rate Limiter with Saturation/Rate Limiter/Saturation Dynamic'
 * '<S311>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else'
 * '<S312>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/SteerController/Yaw Rate Saturation/If_Then_Else1'
 * '<S313>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/Detect Change'
 * '<S314>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order'
 * '<S315>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied'
 * '<S316>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1'
 * '<S317>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/LPF_first_order/If_Then_Else'
 * '<S318>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied/If_Then_Else'
 * '<S319>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/ValidateError/correctionApplied1/If_Then_Else'
 * '<S320>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Chart'
 * '<S321>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event'
 * '<S322>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/RS flip-flop'
 * '<S323>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Rising_edge'
 * '<S324>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset'
 * '<S325>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S326>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S327>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/STEERCTRL_10ms/slew/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S328>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Compare To Zero'
 * '<S329>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Detect Change1'
 * '<S330>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile'
 * '<S331>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile'
 * '<S332>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit'
 * '<S333>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/If_Then_Else'
 * '<S334>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit'
 * '<S335>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/dT'
 * '<S336>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Detect Change1'
 * '<S337>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values'
 * '<S338>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset'
 * '<S339>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Determine_slew_time_values/If_Then_Else'
 * '<S340>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Check Static  Lower Bound'
 * '<S341>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/If_Then_Else'
 * '<S342>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_linear_vehicle_speed_profile/Slew_init_reset/Unit Delay External IC'
 * '<S343>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile'
 * '<S344>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value'
 * '<S345>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/TwentyPointVectorCalculation'
 * '<S346>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/VehicleSpeedSetpointDynamicCalculation'
 * '<S347>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value'
 * '<S348>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Compare To Zero'
 * '<S349>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/SR flip-flop'
 * '<S350>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Determine_inhibit_sigmoid_vehicle_speed_profile/Capture_initial_vehicle_speed_value/If_Then_Else'
 * '<S351>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/If_Then_Else'
 * '<S352>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators'
 * '<S353>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance'
 * '<S354>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator'
 * '<S355>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT'
 * '<S356>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/dT1'
 * '<S357>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/If_Then_Else'
 * '<S358>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/CalculateDistance/Unit Delay Resettable External IC1'
 * '<S359>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method'
 * '<S360>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Unit Delay Resettable External IC1'
 * '<S361>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Determine_sigmoid_vehicle_speed_profile/Select_vehicle_speed_target_value/Integrators/Discrete-Time Integrator/Integrator_method/Unit Delay Resettable External IC'
 * '<S362>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant3'
 * '<S363>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Compare To Constant8'
 * '<S364>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/If_Then_Else4'
 * '<S365>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Rising_edge'
 * '<S366>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset'
 * '<S367>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/dT'
 * '<S368>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S369>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/If_Then_Else'
 * '<S370>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Forward collision warning speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S371>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant10'
 * '<S372>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant11'
 * '<S373>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant12'
 * '<S374>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Compare To Constant9'
 * '<S375>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/If_Then_Else4'
 * '<S376>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Rising_edge'
 * '<S377>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset'
 * '<S378>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/dT'
 * '<S379>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Check Static  Lower Bound'
 * '<S380>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/If_Then_Else'
 * '<S381>' : 'L4_MABX/Controller/L4_Controller/Task_10ms/Vehicle_speed_target/Stability control speed limit/Slew_init_reset/Unit Delay External IC'
 * '<S382>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Mapping'
 * '<S383>' : 'L4_MABX/Controller/L4_Controller/Task_20ms/Odometry'
 * '<S384>' : 'L4_MABX/ETHERNET/Data RX'
 * '<S385>' : 'L4_MABX/ETHERNET/Data TX'
 * '<S386>' : 'L4_MABX/ETHERNET/TCPIP_Setup'
 * '<S387>' : 'L4_MABX/ETHERNET/UDPIP_Communication'
 * '<S388>' : 'L4_MABX/ETHERNET/Update_RTMaps_Interface'
 * '<S389>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check'
 * '<S390>' : 'L4_MABX/ETHERNET/Data RX/RTMapsDecode'
 * '<S391>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1'
 * '<S392>' : 'L4_MABX/ETHERNET/Data RX/RTMaps Health Check/Detect Rise Positive1/Positive'
 * '<S393>' : 'L4_MABX/ETHERNET/Data TX/RTMapsEncode'
 * '<S394>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background'
 * '<S395>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Background_Task'
 * '<S396>' : 'L4_MABX/ETHERNET/TCPIP_Setup/IRQ_Level_2_SW_INT'
 * '<S397>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task'
 * '<S398>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block'
 * '<S399>' : 'L4_MABX/ETHERNET/TCPIP_Setup/Interrupt_Task/Tcp Input Processing'
 * '<S400>' : 'L4_MABX/ETHERNET/TCPIP_Setup/TCPIP_Interrupt_Block/Common Hardware Interrupt Interface'
 * '<S401>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW'
 * '<S402>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL'
 * '<S403>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access'
 * '<S404>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_EC1'
 * '<S405>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_3'
 * '<S406>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Arb_PropB_REAX_4'
 * '<S407>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00'
 * '<S408>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00'
 * '<S409>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A'
 * '<S410>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A'
 * '<S411>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31'
 * '<S412>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00'
 * '<S413>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31'
 * '<S414>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks'
 * '<S415>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00'
 * '<S416>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31'
 * '<S417>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01'
 * '<S418>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B'
 * '<S419>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B'
 * '<S420>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B'
 * '<S421>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B'
 * '<S422>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00'
 * '<S423>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00'
 * '<S424>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00'
 * '<S425>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00'
 * '<S426>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03'
 * '<S427>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00'
 * '<S428>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B'
 * '<S429>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13'
 * '<S430>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13'
 * '<S431>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13'
 * '<S432>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50'
 * '<S433>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2'
 * '<S434>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01'
 * '<S435>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30'
 * '<S436>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03'
 * '<S437>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2'
 * '<S438>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3'
 * '<S439>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5'
 * '<S440>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01'
 * '<S441>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05'
 * '<S442>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B'
 * '<S443>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B'
 * '<S444>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03'
 * '<S445>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00'
 * '<S446>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C1'
 * '<S447>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M1_C2'
 * '<S448>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C1'
 * '<S449>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M2_C2'
 * '<S450>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C1'
 * '<S451>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_TYPE1_SETUP_M3_C2'
 * '<S452>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable'
 * '<S453>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3'
 * '<S454>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4'
 * '<S455>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM'
 * '<S456>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPDT'
 * '<S457>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses15'
 * '<S458>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses16'
 * '<S459>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses2'
 * '<S460>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/MergeBuses3'
 * '<S461>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1'
 * '<S462>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel'
 * '<S463>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S464>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ'
 * '<S465>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ1'
 * '<S466>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ2'
 * '<S467>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ3'
 * '<S468>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ4'
 * '<S469>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPCM_FF_00/SelectChannel/EQ5'
 * '<S470>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1'
 * '<S471>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel'
 * '<S472>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S473>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ'
 * '<S474>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ1'
 * '<S475>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ2'
 * '<S476>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ3'
 * '<S477>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ4'
 * '<S478>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN1_RX_TPDT_FF_00/SelectChannel/EQ5'
 * '<S479>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1'
 * '<S480>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ACC1_2A/RX_CAN_1/ACC1_2A_'
 * '<S481>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1'
 * '<S482>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AEBS1_2A/RX_CAN_1/AEBS1_A0'
 * '<S483>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1'
 * '<S484>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AIR1_31/RX_CAN_1/AIR1'
 * '<S485>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1'
 * '<S486>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_AMB_00/RX_CAN_1/AMB'
 * '<S487>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4'
 * '<S488>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_B2_31/RX_CAN_4/B2'
 * '<S489>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1'
 * '<S490>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Bendix_RADAR_Tracks/RX_CAN_1/Tracks'
 * '<S491>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1'
 * '<S492>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_00/RX_CAN_1/CCVS1_00'
 * '<S493>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1'
 * '<S494>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CCVS1_31/RX_CAN_1/CCVS1_31'
 * '<S495>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4'
 * '<S496>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_00'
 * '<S497>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_COGSOGRapidUpdate_01/RX_CAN_4/COGSOGRapidUpdate_1'
 * '<S498>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1'
 * '<S499>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_CVW_0B/RX_CAN_1/CVW_0B1'
 * '<S500>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1'
 * '<S501>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_0B/RX_CAN_1_EBC1/EBC1_0B'
 * '<S502>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1'
 * '<S503>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC1_8B/RX_CAN_5_EBC1/EBC1_0B'
 * '<S504>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1'
 * '<S505>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EBC2_0B/RX_CAN_1/EBC2_0B1'
 * '<S506>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00'
 * '<S507>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1'
 * '<S508>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/EQ1'
 * '<S509>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/Decode'
 * '<S510>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/CAN_RX_EC1_00/serialize_tpdt'
 * '<S511>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/MergeBuses'
 * '<S512>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1'
 * '<S513>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte11'
 * '<S514>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13'
 * '<S515>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte14'
 * '<S516>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16'
 * '<S517>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18'
 * '<S518>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20'
 * '<S519>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte2'
 * '<S520>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22'
 * '<S521>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte23'
 * '<S522>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte24'
 * '<S523>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte25'
 * '<S524>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte26'
 * '<S525>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte27'
 * '<S526>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29'
 * '<S527>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31'
 * '<S528>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33'
 * '<S529>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte34'
 * '<S530>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte35'
 * '<S531>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte36'
 * '<S532>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte37'
 * '<S533>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte38'
 * '<S534>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4'
 * '<S535>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte5'
 * '<S536>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7'
 * '<S537>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte8'
 * '<S538>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10'
 * '<S539>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte0_byte1/OR'
 * '<S540>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte12_byte13/OR'
 * '<S541>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte15_byte16/OR'
 * '<S542>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte17_byte18/OR'
 * '<S543>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte19_byte20/OR'
 * '<S544>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte21_byte22/OR'
 * '<S545>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte28_byte29/OR'
 * '<S546>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte30_byte31/OR'
 * '<S547>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte32_byte33/OR'
 * '<S548>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte3_byte4/OR'
 * '<S549>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte6_byte7/OR'
 * '<S550>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EC1_00/Decode_EC1/decode_byte9_byte10/OR'
 * '<S551>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1'
 * '<S552>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC1_00/RX_CAN_1/EEC1_001'
 * '<S553>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2'
 * '<S554>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC2_00/RX_CAN_2/EEC2_001'
 * '<S555>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1'
 * '<S556>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_EEC3_00/RX_CAN_1/EEC3_001'
 * '<S557>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1'
 * '<S558>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_ETC2_03/RX_CAN_1/ETC2_031'
 * '<S559>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4'
 * '<S560>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_011'
 * '<S561>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_GNSSDOPs_00/RX_CAN_4/GNSSDOPs_1'
 * '<S562>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1'
 * '<S563>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_HRW_0B/RX_CAN_1/HRW_0B'
 * '<S564>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2'
 * '<S565>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6'
 * '<S566>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_2/PropB_REAX_2_13'
 * '<S567>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_2_13/RX_CAN_6/PropB_REAX_2_13'
 * '<S568>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1'
 * '<S569>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2'
 * '<S570>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel'
 * '<S571>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S572>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S573>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ'
 * '<S574>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ1'
 * '<S575>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ2'
 * '<S576>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ3'
 * '<S577>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ4'
 * '<S578>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ5'
 * '<S579>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1'
 * '<S580>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2'
 * '<S581>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel'
 * '<S582>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S583>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S584>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ'
 * '<S585>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ1'
 * '<S586>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ2'
 * '<S587>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ3'
 * '<S588>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ4'
 * '<S589>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ5'
 * '<S590>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1'
 * '<S591>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2'
 * '<S592>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3'
 * '<S593>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel'
 * '<S594>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S595>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S596>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3/CAN_TYPE1_RX_M2_C1'
 * '<S597>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ'
 * '<S598>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ1'
 * '<S599>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ2'
 * '<S600>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ3'
 * '<S601>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ4'
 * '<S602>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ5'
 * '<S603>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6'
 * '<S604>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeLeft'
 * '<S605>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeRight'
 * '<S606>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LanePosEst'
 * '<S607>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4'
 * '<S608>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_011'
 * '<S609>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_1'
 * '<S610>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3'
 * '<S611>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3/Bendix_Prop2C2_Status_30'
 * '<S612>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1'
 * '<S613>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1/SSI2_031'
 * '<S614>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6'
 * '<S615>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6/PX2_MapLaneEgoLeft'
 * '<S616>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6'
 * '<S617>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6/PX2_MapLaneEgoRight'
 * '<S618>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6'
 * '<S619>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6/PX2_EgoLanePos'
 * '<S620>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4'
 * '<S621>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4/SystemTime_01'
 * '<S622>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5'
 * '<S623>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5/TC1_03_05'
 * '<S624>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1'
 * '<S625>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1/VDC1_0B_'
 * '<S626>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1'
 * '<S627>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1/VDC2_0B1'
 * '<S628>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1'
 * '<S629>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1/VEP1'
 * '<S630>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00'
 * '<S631>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI'
 * '<S632>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/EQ1'
 * '<S633>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/Decode'
 * '<S634>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/serialize_tpdt'
 * '<S635>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero1'
 * '<S636>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero2'
 * '<S637>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop'
 * '<S638>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop1'
 * '<S639>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/If_Then_Else'
 * '<S640>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/MergeBuses'
 * '<S641>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1'
 * '<S642>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte2'
 * '<S643>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4'
 * '<S644>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6'
 * '<S645>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8'
 * '<S646>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND1'
 * '<S647>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND2'
 * '<S648>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4/OR'
 * '<S649>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6/OR1'
 * '<S650>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8/OR2'
 * '<S651>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/MergeBuses'
 * '<S652>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1'
 * '<S653>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte2'
 * '<S654>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte3'
 * '<S655>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte5'
 * '<S656>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7'
 * '<S657>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte8'
 * '<S658>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND'
 * '<S659>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND1'
 * '<S660>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND2'
 * '<S661>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7/OR'
 * '<S662>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM'
 * '<S663>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS'
 * '<S664>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort'
 * '<S665>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck'
 * '<S666>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS'
 * '<S667>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ'
 * '<S668>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ1'
 * '<S669>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ2'
 * '<S670>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ3'
 * '<S671>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ4'
 * '<S672>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/MergeBuses'
 * '<S673>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte1'
 * '<S674>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3'
 * '<S675>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte4'
 * '<S676>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8'
 * '<S677>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3/OR'
 * '<S678>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8/OR'
 * '<S679>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/MergeBuses'
 * '<S680>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte1'
 * '<S681>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte2'
 * '<S682>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte3'
 * '<S683>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8'
 * '<S684>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8/OR'
 * '<S685>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/MergeBuses'
 * '<S686>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte1'
 * '<S687>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte2'
 * '<S688>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8'
 * '<S689>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8/OR'
 * '<S690>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/MergeBuses'
 * '<S691>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte1'
 * '<S692>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3'
 * '<S693>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte4'
 * '<S694>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8'
 * '<S695>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3/OR'
 * '<S696>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8/OR'
 * '<S697>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/MergeBuses'
 * '<S698>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte1'
 * '<S699>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3'
 * '<S700>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte4'
 * '<S701>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte5'
 * '<S702>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8'
 * '<S703>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3/OR'
 * '<S704>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8/OR'
 * '<S705>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL1'
 * '<S706>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL2'
 * '<S707>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL3'
 * '<S708>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL1'
 * '<S709>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL2'
 * '<S710>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL3'
 * '<S711>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL4'
 * '<S712>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S713>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S714>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S715>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S716>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S717>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S718>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S719>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S720>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S721>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S722>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S723>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S724>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S725>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S726>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S727>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S728>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S729>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S730>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S731>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S804>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S805>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S806>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S807>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S808>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S809>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S810>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S811>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S812>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S813>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S814>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S815>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S816>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S817>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S818>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S819>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S820>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S821>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S822>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S823>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S824>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S825>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S826>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S827>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S828>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S829>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S830>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S831>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S832>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S833>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S834>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S835>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S836>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S837>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S838>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S839>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S840>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S841>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S842>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S843>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S844>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S845>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S846>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S847>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S848>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S849>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S850>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S851>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S852>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S853>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S854>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL3'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL4'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1043>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1044>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1045>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1046>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
