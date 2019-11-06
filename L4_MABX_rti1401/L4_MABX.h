/*
 * L4_MABX.h
 *
 * Code generation for model "L4_MABX".
 *
 * Model version              : 1.846
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Wed Nov  6 11:22:45 2019
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

/* Block signals for system '<S981>/If_Then_Else' */
typedef struct {
  real_T XBRExternalAccelDemand;       /* '<S1005>/Switch' */
  real_T XBRUrgency;                   /* '<S1005>/Switch' */
  real_T XBRPassThroughEnabled;        /* '<S1005>/Switch' */
  ENUM_XBR_PRIORITY_T XBRPriority;     /* '<S1005>/Switch' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S1005>/Switch' */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* '<S1005>/Switch' */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode;/* '<S1005>/Switch' */
} B_If_Then_Else_L4_MABX_i_T;

/* Block signals (default storage) */
typedef struct {
  RTMapsRX Decoder_o1;                 /* '<S390>/Decoder' */
  real_T SFunction1_o1;                /* '<S724>/S-Function1' */
  real_T SFunction1_o2;                /* '<S724>/S-Function1' */
  real_T Pedal_1_pwm_freq_raw_value;   /* '<S402>/Data Type Conversion2' */
  real_T Xold;                         /* '<S762>/FixPt Unit Delay1' */
  real_T Init;                         /* '<S762>/Init' */
  real_T FixPtSum1;                    /* '<S758>/FixPt Sum1' */
  real_T FixPtSum1_h;                  /* '<S761>/FixPt Sum1' */
  real_T Gain;                         /* '<S402>/Gain' */
  real_T Pedal_1_pwm_dc_raw_value;     /* '<S402>/Data Type Conversion9' */
  real_T Xold_m;                       /* '<S754>/FixPt Unit Delay1' */
  real_T Init_d;                       /* '<S754>/Init' */
  real_T FixPtSum1_m;                  /* '<S750>/FixPt Sum1' */
  real_T FixPtSum1_o;                  /* '<S753>/FixPt Sum1' */
  real_T SFunction1_o1_i;              /* '<S725>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S725>/S-Function1' */
  real_T Pedal_2_pwm_freq_raw_value;   /* '<S402>/Data Type Conversion3' */
  real_T Xold_mr;                      /* '<S778>/FixPt Unit Delay1' */
  real_T Init_n;                       /* '<S778>/Init' */
  real_T FixPtSum1_my;                 /* '<S774>/FixPt Sum1' */
  real_T FixPtSum1_e;                  /* '<S777>/FixPt Sum1' */
  real_T Gain1;                        /* '<S402>/Gain1' */
  real_T Pedal_2_pwm_dc_raw_value;     /* '<S402>/Data Type Conversion1' */
  real_T Xold_j;                       /* '<S770>/FixPt Unit Delay1' */
  real_T Init_e;                       /* '<S770>/Init' */
  real_T FixPtSum1_l;                  /* '<S766>/FixPt Sum1' */
  real_T FixPtSum1_g;                  /* '<S769>/FixPt Sum1' */
  real_T MinMax1;                      /* '<S799>/MinMax1' */
  real_T Saturation;                   /* '<S799>/Saturation' */
  real_T Divide;                       /* '<S799>/Divide' */
  real_T Product2;                     /* '<S799>/Product2' */
  real_T Subtract1;                    /* '<S799>/Subtract1' */
  real_T Unit_Delay2;                  /* '<S799>/Unit_Delay2' */
  real_T Product1;                     /* '<S799>/Product1' */
  real_T Add1;                         /* '<S799>/Add1' */
  real_T Pedal_1_pwm_undefault;        /* '<S732>/PEDAL_PWM_ANGLE_SENS_1_MPV' */
  real_T MinMax1_a;                    /* '<S800>/MinMax1' */
  real_T Saturation_l;                 /* '<S800>/Saturation' */
  real_T Divide_k;                     /* '<S800>/Divide' */
  real_T Product2_f;                   /* '<S800>/Product2' */
  real_T Subtract1_g;                  /* '<S800>/Subtract1' */
  real_T Unit_Delay2_j;                /* '<S800>/Unit_Delay2' */
  real_T Product1_b;                   /* '<S800>/Product1' */
  real_T Add1_c;                       /* '<S800>/Add1' */
  real_T Pedal_2_pwm_undefault;        /* '<S732>/PEDAL_PWM_ANGLE_SENS_2_MPV' */
  real_T Subtract;                     /* '<S734>/Subtract' */
  real_T Abs;                          /* '<S734>/Abs' */
  real_T Xold_d;                       /* '<S798>/FixPt Unit Delay1' */
  real_T Init_dm;                      /* '<S798>/Init' */
  real_T Xold_i;                       /* '<S797>/FixPt Unit Delay1' */
  real_T Init_o;                       /* '<S797>/Init' */
  real_T MinMax;                       /* '<S728>/MinMax' */
  real_T PEDAL_PWM_ANGLE_DEV_MPV;      /* '<S734>/PEDAL_PWM_ANGLE_DEV_MPV' */
  real_T DataTypeConversion2;          /* '<S729>/Data Type Conversion2' */
  real_T Xold_k;                       /* '<S786>/FixPt Unit Delay1' */
  real_T Init_g;                       /* '<S786>/Init' */
  real_T FixPtSum1_b;                  /* '<S782>/FixPt Sum1' */
  real_T FixPtSum1_c;                  /* '<S785>/FixPt Sum1' */
  real_T SFunction1;                   /* '<S718>/S-Function1' */
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
  real_T PitchAngleExRange;            /* '<S616>/Data Type Conversion1' */
  real_T PressureP1;                   /* '<S614>/Data Type Conversion7' */
  real_T PressureP4;                   /* '<S614>/Data Type Conversion6' */
  real_T PressureP21;                  /* '<S614>/Data Type Conversion11' */
  real_T PressureP22;                  /* '<S614>/Data Type Conversion12' */
  real_T PressureP42;                  /* '<S614>/Data Type Conversion13' */
  real_T Heartbeat;                    /* '<S385>/Heartbeat' */
  real_T Decoder_o3;                   /* '<S390>/Decoder' */
  real_T UnitDelay;                    /* '<S389>/Unit Delay' */
  real_T Count;                        /* '<S389>/Switch' */
  real_T Latitude_;                    /* '<S611>/Switch' */
  real_T Longitude_;                   /* '<S611>/Switch' */
  real_T SID;                          /* '<S495>/Switch' */
  real_T COGReference;                 /* '<S495>/Switch' */
  real_T CourseOverGround;             /* '<S495>/Switch' */
  real_T SpeedOverGround;              /* '<S495>/Switch' */
  real_T DataTypeConversion[8];        /* '<S1028>/Data Type Conversion' */
  real_T DataTypeConversion_b[8];      /* '<S1029>/Data Type Conversion' */
  real_T TmpRTBAtANDInport1;           /* '<S1044>/Flash' */
  real_T MinMax_a;                     /* '<S816>/MinMax' */
  real_T DataTypeConversion1;          /* '<S816>/Data Type Conversion1' */
  real_T Divide_c;                     /* '<S816>/Divide' */
  real_T PWMOut_P2C1_Period;           /* '<S816>/Data Type Conversion5' */
  real_T PedalPWMA_DC_out;             /* '<S1042>/1-D Lookup Table2' */
  real_T Gain1_n;                      /* '<S816>/Gain1' */
  real_T PWMOut_P2C1_DC;               /* '<S816>/Data Type Conversion6' */
  real_T MinMax1_d;                    /* '<S816>/MinMax1' */
  real_T DataTypeConversion2_h;        /* '<S816>/Data Type Conversion2' */
  real_T Divide1;                      /* '<S816>/Divide1' */
  real_T PWMOut_P2C2_Period;           /* '<S816>/Data Type Conversion9' */
  real_T PedalPWMB_DC_out;             /* '<S1042>/1-D Lookup Table3' */
  real_T Gain_p;                       /* '<S816>/Gain' */
  real_T PWMOut_P2C2_DC;               /* '<S816>/Data Type Conversion10' */
  real_T SFunction1_o1_g;              /* '<S723>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S723>/S-Function1' */
  real_T ShiftControlDC;               /* '<S402>/ShifterControlDC' */
  real_T Flash;                        /* '<S1044>/Flash' */
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
  real_T DataTypeConversion2_f;        /* '<S512>/Data Type Conversion2' */
  real_T SPN188_EngineSpeedAtIdlePoint1;/* '<S512>/Product' */
  real_T DataTypeConversion_e;         /* '<S404>/Data Type Conversion' */
  real_T DataTypeConversion_l;         /* '<S519>/Data Type Conversion' */
  real_T SPN539_EnginePercentTorqueAtIdl;/* '<S519>/Add' */
  real_T DataTypeConversion1_a;        /* '<S404>/Data Type Conversion1' */
  real_T DataTypeConversion2_m;        /* '<S516>/Data Type Conversion2' */
  real_T SPN532_EngineSpeedAtHighIdlePoi;/* '<S516>/Product' */
  real_T DataTypeConversion10;         /* '<S404>/Data Type Conversion10' */
  real_T DataTypeConversion2_o;        /* '<S517>/Data Type Conversion2' */
  real_T SPN545_EngineGainKpOfTheEndspee;/* '<S517>/Product' */
  real_T DataTypeConversion11;         /* '<S404>/Data Type Conversion11' */
  real_T DataTypeConversion2_b;        /* '<S520>/Data Type Conversion2' */
  real_T SPN533_EngineMaximumMomentaryOv;/* '<S520>/Product' */
  real_T DataTypeConversion13;         /* '<S404>/Data Type Conversion13' */
  real_T DataTypeConversion2_hw;       /* '<S521>/Data Type Conversion2' */
  real_T SPN534_EngineMaximumMomentaryOv;/* '<S521>/Product' */
  real_T DataTypeConversion14;         /* '<S404>/Data Type Conversion14' */
  real_T DataTypeConversion2_a;        /* '<S522>/Data Type Conversion2' */
  real_T SPN535_EngineRequestedSpeedCont;/* '<S522>/Product' */
  real_T DataTypeConversion15;         /* '<S404>/Data Type Conversion15' */
  real_T DataTypeConversion2_og;       /* '<S523>/Data Type Conversion2' */
  real_T SPN536_EngineRequestedSpeedCont;/* '<S523>/Product' */
  real_T DataTypeConversion16;         /* '<S404>/Data Type Conversion16' */
  real_T DataTypeConversion_a;         /* '<S524>/Data Type Conversion' */
  real_T SPN537_EngineRequestedTorqueCon;/* '<S524>/Add' */
  real_T DataTypeConversion17;         /* '<S404>/Data Type Conversion17' */
  real_T DataTypeConversion_an;        /* '<S525>/Data Type Conversion' */
  real_T SPN538_EngineRequestedTorqueCon;/* '<S525>/Add' */
  real_T DataTypeConversion18;         /* '<S404>/Data Type Conversion18' */
  real_T DataTypeConversion2_p;        /* '<S526>/Data Type Conversion2' */
  real_T SPN1712_EngRequestedSpeedCtrlRn;/* '<S526>/Product' */
  real_T DataTypeConversion19;         /* '<S404>/Data Type Conversion19' */
  real_T DataTypeConversion2_f4;       /* '<S534>/Data Type Conversion2' */
  real_T SPN528_EngineSpeedAtPoint2;   /* '<S534>/Product' */
  real_T DataTypeConversion2_n;        /* '<S404>/Data Type Conversion2' */
  real_T DataTypeConversion2_g;        /* '<S527>/Data Type Conversion2' */
  real_T SPN1794_EngineMomentOfInertia;/* '<S527>/Product' */
  real_T DataTypeConversion20;         /* '<S404>/Data Type Conversion20' */
  real_T DataTypeConversion_m;         /* '<S535>/Data Type Conversion' */
  real_T SPN540_EnginePercentTorqueAtPoi;/* '<S535>/Add' */
  real_T DataTypeConversion3;          /* '<S404>/Data Type Conversion3' */
  real_T DataTypeConversion2_l;        /* '<S536>/Data Type Conversion2' */
  real_T SPN529_EngineSpeedAtPoint3;   /* '<S536>/Product' */
  real_T DataTypeConversion4;          /* '<S404>/Data Type Conversion4' */
  real_T DataTypeConversion_a4;        /* '<S537>/Data Type Conversion' */
  real_T SPN541_EnginePercentTorqueAtPoi;/* '<S537>/Add' */
  real_T DataTypeConversion5;          /* '<S404>/Data Type Conversion5' */
  real_T DataTypeConversion2_j;        /* '<S538>/Data Type Conversion2' */
  real_T SPN530_EngineSpeedAtPoint4;   /* '<S538>/Product' */
  real_T DataTypeConversion6;          /* '<S404>/Data Type Conversion6' */
  real_T DataTypeConversion_d;         /* '<S513>/Data Type Conversion' */
  real_T SPN542_EnginePercentTorqueAtPoi;/* '<S513>/Add' */
  real_T DataTypeConversion7;          /* '<S404>/Data Type Conversion7' */
  real_T DataTypeConversion2_c;        /* '<S514>/Data Type Conversion2' */
  real_T SPN531_EngineSpeedAtPoint5;   /* '<S514>/Product' */
  real_T DataTypeConversion8;          /* '<S404>/Data Type Conversion8' */
  real_T DataTypeConversion_p;         /* '<S515>/Data Type Conversion' */
  real_T SPN543_EnginePercentTorqueAtPoi;/* '<S515>/Add' */
  real_T DataTypeConversion9;          /* '<S404>/Data Type Conversion9' */
  real_T RX_time;                      /* '<S461>/Data Type Conversion9' */
  real_T RX_time_e;                    /* '<S407>/Multiport_Switch' */
  real_T RX_delta_time;                /* '<S461>/Data Type Conversion10' */
  real_T RX_delta_time_m;              /* '<S407>/Multiport_Switch' */
  real_T RX_time_k;                    /* '<S470>/Data Type Conversion9' */
  real_T RX_time_m;                    /* '<S408>/Multiport_Switch' */
  real_T RX_delta_time_ms;             /* '<S470>/Data Type Conversion10' */
  real_T RX_delta_time_e;              /* '<S408>/Multiport_Switch' */
  real_T SpeedOfForwardVehicle;        /* '<S479>/Data Type Conversion1' */
  real_T RX_delta_time_l;              /* '<S479>/Data Type Conversion10' */
  real_T ACCSystemShutoffWarning;      /* '<S479>/Data Type Conversion11' */
  real_T DistanceToForwardVehicle;     /* '<S479>/Data Type Conversion2' */
  real_T AdaptiveCruiseCtrlSetSpeed;   /* '<S479>/Data Type Conversion3' */
  real_T AdaptiveCruiseCtrlMode;       /* '<S479>/Data Type Conversion4' */
  real_T AdptveCruiseCtrlSetDistanceMode;/* '<S479>/Data Type Conversion5' */
  real_T RoadCurvature;                /* '<S479>/Data Type Conversion6' */
  real_T ACCTargetDetected;            /* '<S479>/Data Type Conversion7' */
  real_T RX_time_p;                    /* '<S479>/Data Type Conversion9' */
  real_T RX_delta_time_h;              /* '<S481>/Data Type Conversion10' */
  real_T RX_time_l;                    /* '<S481>/Data Type Conversion9' */
  real_T RX_delta_time_k;              /* '<S483>/Data Type Conversion10' */
  real_T RX_time_n;                    /* '<S483>/Data Type Conversion9' */
  real_T RX_delta_time_j;              /* '<S485>/Data Type Conversion10' */
  real_T RX_time_a;                    /* '<S485>/Data Type Conversion9' */
  real_T RX_delta_time_c;              /* '<S487>/Data Type Conversion10' */
  real_T RX_time_f;                    /* '<S487>/Data Type Conversion9' */
  real_T Bendix_RADAR_Tracks_RX_delta_ti;/* '<S489>/Data Type Conversion10' */
  real_T Bendix_RADAR_Tracks_RX_time;  /* '<S489>/Data Type Conversion9' */
  real_T RX_delta_time_hu;             /* '<S491>/Data Type Conversion10' */
  real_T RX_time_i;                    /* '<S491>/Data Type Conversion9' */
  real_T RX_delta_time_b;              /* '<S493>/Data Type Conversion10' */
  real_T RX_time_mf;                   /* '<S493>/Data Type Conversion9' */
  real_T RX_time_d;                    /* '<S495>/Switch' */
  real_T RX_delta_time_n;              /* '<S495>/Switch' */
  real_T RX_delta_time_ee;             /* '<S498>/Data Type Conversion10' */
  real_T RX_time_m0;                   /* '<S498>/Data Type Conversion9' */
  real_T RX_delta_time_a;              /* '<S500>/Data Type Conversion10' */
  real_T RX_time_ko;                   /* '<S500>/Data Type Conversion9' */
  real_T RX_delta_time_k5;             /* '<S502>/Data Type Conversion10' */
  real_T RX_time_kf;                   /* '<S502>/Data Type Conversion9' */
  real_T RX_delta_time_f;              /* '<S504>/Data Type Conversion10' */
  real_T RX_time_h;                    /* '<S504>/Data Type Conversion9' */
  real_T RX_delta_time_lg;             /* '<S551>/Data Type Conversion10' */
  real_T RX_time_o;                    /* '<S551>/Data Type Conversion9' */
  real_T RX_delta_time_m5;             /* '<S553>/Data Type Conversion10' */
  real_T RX_time_dz;                   /* '<S553>/Data Type Conversion9' */
  real_T RX_delta_time_jw;             /* '<S555>/Data Type Conversion10' */
  real_T RX_time_n3;                   /* '<S555>/Data Type Conversion9' */
  real_T RX_delta_time_g;              /* '<S557>/Data Type Conversion10' */
  real_T RX_time_mk;                   /* '<S557>/Data Type Conversion9' */
  real_T SID_k;                        /* '<S559>/Switch' */
  real_T SetMode;                      /* '<S559>/Switch' */
  real_T OpMode;                       /* '<S559>/Switch' */
  real_T VDOP;                         /* '<S559>/Switch' */
  real_T TDOP;                         /* '<S559>/Switch' */
  real_T RX_time_nd;                   /* '<S559>/Switch' */
  real_T RX_delta_time_i;              /* '<S559>/Switch' */
  real_T RX_delta_time_aa;             /* '<S562>/Data Type Conversion10' */
  real_T RX_time_pu;                   /* '<S562>/Data Type Conversion9' */
  real_T RX_time_ii;                   /* '<S429>/Switch' */
  real_T RX_delta_time_lk;             /* '<S429>/Switch' */
  real_T RX_time_k3;                   /* '<S596>/Data Type Conversion9' */
  real_T RX_time_he;                   /* '<S432>/Multiport_Switch' */
  real_T RX_delta_time_hh;             /* '<S596>/Data Type Conversion10' */
  real_T RX_delta_time_lz;             /* '<S432>/Multiport_Switch' */
  real_T RX_delta_time_bq;             /* '<S607>/Data Type Conversion1' */
  real_T RX_delta_time_ko;             /* '<S607>/Data Type Conversion10' */
  real_T RX_time_dd;                   /* '<S607>/Data Type Conversion3' */
  real_T RX_delta_time_d;              /* '<S607>/Data Type Conversion4' */
  real_T RX_time_lg;                   /* '<S607>/Data Type Conversion6' */
  real_T RX_time_ag;                   /* '<S607>/Data Type Conversion9' */
  real_T RX_time_mh;                   /* '<S611>/Switch' */
  real_T RX_delta_time_ft;             /* '<S611>/Switch' */
  real_T XPR1ControlStatus;            /* '<S614>/Data Type Conversion1' */
  real_T RX_delta_time_b0;             /* '<S614>/Data Type Conversion10' */
  real_T XPR2ControlStatus;            /* '<S614>/Data Type Conversion2' */
  real_T XPR3ControlStatus;            /* '<S614>/Data Type Conversion3' */
  real_T RX_time_fk;                   /* '<S614>/Data Type Conversion9' */
  real_T RX_delta_time_ig;             /* '<S616>/Data Type Conversion10' */
  real_T RX_time_mk4;                  /* '<S616>/Data Type Conversion9' */
  real_T RX_delta_time_cd;             /* '<S618>/Data Type Conversion10' */
  real_T RX_time_pz;                   /* '<S618>/Data Type Conversion9' */
  real_T RX_delta_time_hg;             /* '<S620>/Data Type Conversion10' */
  real_T RX_time_g;                    /* '<S620>/Data Type Conversion9' */
  real_T RX_delta_time_jf;             /* '<S622>/Data Type Conversion10' */
  real_T RX_time_j;                    /* '<S622>/Data Type Conversion9' */
  real_T RX_delta_time_ek;             /* '<S624>/Data Type Conversion10' */
  real_T RX_time_fo;                   /* '<S624>/Data Type Conversion9' */
  real_T RX_delta_time_ha;             /* '<S626>/Data Type Conversion10' */
  real_T RX_time_fj;                   /* '<S626>/Data Type Conversion9' */
  real_T RX_delta_time_gw;             /* '<S628>/Data Type Conversion10' */
  real_T RX_time_pw;                   /* '<S628>/Data Type Conversion9' */
  real_T RX_delta_time_hgq;            /* '<S630>/Data Type Conversion10' */
  real_T RX_time_oy;                   /* '<S630>/Data Type Conversion9' */
  real_T PitchAngleExRange_n;          /* '<S632>/Data Type Conversion1' */
  real_T RX_delta_time_ns;             /* '<S632>/Data Type Conversion10' */
  real_T AltCurrent;                   /* '<S632>/Data Type Conversion2' */
  real_T ChargingSystemPotential;      /* '<S632>/Data Type Conversion3' */
  real_T BatteryPotential_PowerInput1; /* '<S632>/Data Type Conversion4' */
  real_T KeyswitchBatteryPotential;    /* '<S632>/Data Type Conversion5' */
  real_T RX_time_k3g;                  /* '<S632>/Data Type Conversion9' */
  real_T PX2_HeartBeat;                /* '<S401>/Constant2' */
  real_T DataTypeConversion4_e;        /* '<S654>/Data Type Conversion4' */
  real_T DataTypeConversion1_f;        /* '<S655>/Data Type Conversion1' */
  real_T DataTypeConversion1_g;        /* '<S656>/Data Type Conversion1' */
  real_T RX_time_ny;                   /* '<S569>/Data Type Conversion9' */
  real_T RX_time_ne;                   /* '<S570>/Data Type Conversion9' */
  real_T RX_time_dj;                   /* '<S430>/Multiport_Switch' */
  real_T RX_delta_time_o;              /* '<S569>/Data Type Conversion10' */
  real_T RX_delta_time_mr;             /* '<S570>/Data Type Conversion10' */
  real_T RX_delta_time_mp;             /* '<S430>/Multiport_Switch' */
  real_T PropB_REAX_4_PercHandwheelTorqu;/* '<S666>/Data Type Conversion5' */
  real_T DataTypeConversion5_k;        /* '<S406>/Data Type Conversion5' */
  real_T PropB_REAX_4_AbsSteeringAngle;/* '<S667>/Data Type Conversion9' */
  real_T DataTypeConversion6_i;        /* '<S406>/Data Type Conversion6' */
  real_T PropB_REAX_4_PercMotorTorque; /* '<S668>/Data Type Conversion11' */
  real_T DataTypeConversion7_b;        /* '<S406>/Data Type Conversion7' */
  real_T RX_time_ml;                   /* '<S583>/Data Type Conversion9' */
  real_T RX_time_en;                   /* '<S431>/Multiport_Switch' */
  real_T RX_delta_time_l2;             /* '<S583>/Data Type Conversion10' */
  real_T RX_delta_time_e1;             /* '<S431>/Multiport_Switch' */
  real_T ShiftControlFreq;             /* '<S402>/ShifterControlFreq' */
  real_T SFunction1_g;                 /* '<S716>/S-Function1' */
  real_T ShifterControlDC2;            /* '<S402>/ShifterControlDC2' */
  real_T SFunction1_i;                 /* '<S717>/S-Function1' */
  real_T ShifterControlDC1;            /* '<S402>/ShifterControlDC1' */
  real_T SFunction1_o1_b;              /* '<S1035>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S1035>/S-Function1' */
  real_T SFunction1_o3;                /* '<S1035>/S-Function1' */
  real_T SFunction1_o4;                /* '<S1035>/S-Function1' */
  real_T SFunction1_o1_f;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S1031>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S1030>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S1030>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S1030>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S1030>/S-Function1' */
  real_T TPCM_ts_Prev;                 /* '<S825>/Chart' */
  real_T TPDT_ts_Prev;                 /* '<S825>/Chart' */
  real_T TwoSpeedAxleSwitch;           /* '<S1020>/Bus Selector' */
  real_T ParkingBrakeSwitch;           /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch;        /* '<S1020>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq;    /* '<S1020>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_g;     /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlActive;             /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_k;     /* '<S1020>/Bus Selector' */
  real_T BrakeSwitch_e;                /* '<S1020>/Bus Selector' */
  real_T ClutchSwitch;                 /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlSetSwitch;          /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch;        /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch;       /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch;   /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlSetSpeed;           /* '<S1020>/Bus Selector' */
  real_T PTOGovernorState;             /* '<S1020>/Bus Selector' */
  real_T CruiseCtrlStates;             /* '<S1020>/Bus Selector' */
  real_T EngIdleIncrementSwitch;       /* '<S1020>/Bus Selector' */
  real_T EngIdleDecrementSwitch;       /* '<S1020>/Bus Selector' */
  real_T EngTestModeSwitch;            /* '<S1020>/Bus Selector' */
  real_T EngShutdownOverrideSwitch;    /* '<S1020>/Bus Selector' */
  real_T SPN681_TransGearShiftInhibitReq;/* '<S1021>/Bus Selector' */
  real_T SPN682_TransTrqConvLockupDisReq;/* '<S1021>/Bus Selector' */
  real_T SPN683_DisengageDrivelineReq; /* '<S1021>/Bus Selector' */
  real_T SPN4242_TransRevGearShiftInhibR;/* '<S1021>/Bus Selector' */
  real_T SPN684_RequestedPercClutchSlip;/* '<S1021>/Bus Selector' */
  real_T SPN525_TransRequestedGear;    /* '<S1021>/Bus Selector' */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* '<S1021>/Bus Selector' */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* '<S1021>/Bus Selector' */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* '<S1021>/Bus Selector' */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* '<S1021>/Bus Selector' */
  real_T SPN689_DisengageDiffLockRqC;  /* '<S1021>/Bus Selector' */
  real_T SPN690_DisengageDiffLockRqCF; /* '<S1021>/Bus Selector' */
  real_T SPN691_DisengageDiffLockRqCR; /* '<S1021>/Bus Selector' */
  real_T SPN5762_TransLoadRedInhibitRq;/* '<S1021>/Bus Selector' */
  real_T SPN1852_TransmissionMode1;    /* '<S1021>/Bus Selector' */
  real_T SPN1853_TransmissionMode2;    /* '<S1021>/Bus Selector' */
  real_T SPN1854_TransmissionMode3;    /* '<S1021>/Bus Selector' */
  real_T SPN1855_TransmissionMode4;    /* '<S1021>/Bus Selector' */
  real_T SPN7695_TransAutoNeutralRequest;/* '<S1021>/Bus Selector' */
  real_T SPN4255_TransRequestedLaunchGea;/* '<S1021>/Bus Selector' */
  real_T SPN2985_TransShiftSelDispModeSw;/* '<S1021>/Bus Selector' */
  real_T SPN4246_TransmissionMode5;    /* '<S1021>/Bus Selector' */
  real_T SPN4247_TransmissionMode6;    /* '<S1021>/Bus Selector' */
  real_T SPN4248_TransmissionMode7;    /* '<S1021>/Bus Selector' */
  real_T SPN4249_TransmissionMode8;    /* '<S1021>/Bus Selector' */
  real_T SFunction1_o1_d;              /* '<S1023>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S1023>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S1023>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S1023>/S-Function1' */
  real_T SFunction1_o1_m;              /* '<S1022>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S1022>/S-Function1' */
  real_T SFunction1_o3_g2;             /* '<S1022>/S-Function1' */
  real_T SFunction1_o4_mj;             /* '<S1022>/S-Function1' */
  real_T DataTypeConversion_et;        /* '<S1009>/Data Type Conversion' */
  real_T DataTypeConversion1_n;        /* '<S1009>/Data Type Conversion1' */
  real_T DataTypeConversion2_ai;       /* '<S1009>/Data Type Conversion2' */
  real_T SFunction1_o1_a;              /* '<S1011>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S1011>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S1011>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S1011>/S-Function1' */
  real_T BrakingPID_Y_j;               /* '<S981>/Bus Selector2' */
  real_T XBRExternalAccelDemand;       /* '<S981>/Switch1' */
  real_T DataTypeConversion1_gs;       /* '<S984>/Data Type Conversion1' */
  real_T DataTypeConversion2_ac;       /* '<S984>/Data Type Conversion2' */
  real_T DataTypeConversion3_i;        /* '<S984>/Data Type Conversion3' */
  real_T DataTypeConversion4_d;        /* '<S984>/Data Type Conversion4' */
  real_T DataTypeConversion5_h;        /* '<S984>/Data Type Conversion5' */
  real_T DataTypeConversion6_h;        /* '<S984>/Data Type Conversion6' */
  real_T DataTypeConversion7_g;        /* '<S984>/Data Type Conversion7' */
  real_T Saturation_m;                 /* '<S980>/Saturation' */
  real_T BrakingPID_Y_je;              /* '<S980>/Bus Selector' */
  real_T Gain_n;                       /* '<S980>/Gain' */
  real_T Gain_k;                       /* '<S997>/Gain' */
  real_T Gain1_o;                      /* '<S997>/Gain1' */
  real_T DataTypeConversion1_d[8];     /* '<S978>/Data Type Conversion1' */
  real_T FrontAxleSpeed_n;             /* '<S994>/Bus Selector4' */
  real_T DataTypeConversion_i;         /* '<S994>/Data Type Conversion' */
  real_T SPN1807_SteeringWheelAngle_b; /* '<S994>/Bus Selector4' */
  real_T DataTypeConversion1_l;        /* '<S994>/Data Type Conversion1' */
  real_T SPN1808_YawRate_m;            /* '<S994>/Bus Selector4' */
  real_T DataTypeConversion2_i;        /* '<S994>/Data Type Conversion2' */
  real_T SPN1810_LongitudinalAccelerat_c;/* '<S994>/Bus Selector4' */
  real_T DataTypeConversion3_l;        /* '<S994>/Data Type Conversion3' */
  real_T DataType;                     /* '<S993>/DataType' */
  real_T Shift_Arithmetic4;            /* '<S979>/Shift_Arithmetic 4' */
  real_T DataType_b;                   /* '<S989>/DataType' */
  real_T DataType_n;                   /* '<S990>/DataType' */
  real_T DataType_nf;                  /* '<S991>/DataType' */
  real_T DataType_h;                   /* '<S992>/DataType' */
  real_T Shift_Arithmetic;             /* '<S979>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1;            /* '<S979>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2;            /* '<S979>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic3;            /* '<S979>/Shift_Arithmetic 3' */
  real_T XBRUrgency;                   /* '<S981>/DECEL_GOV_XBR_URGENCY_MPV' */
  real_T XBRExternalAccelDemand_c;     /* '<S981>/Divide1' */
  real_T SFunction1_o1_ge;             /* '<S995>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S995>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S995>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S995>/S-Function1' */
  real_T SFunction1_o1_gq;             /* '<S987>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S987>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S987>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S987>/S-Function1' */
  real_T SFunction1_o1_ea;             /* '<S985>/S-Function1' */
  real_T SFunction1_o2_me;             /* '<S985>/S-Function1' */
  real_T SFunction1_o3_ja;             /* '<S985>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S985>/S-Function1' */
  real_T DataTypeConversion4_n;        /* '<S917>/Data Type Conversion4' */
  real_T DataType_m;                   /* '<S914>/DataType' */
  real_T Shift_Arithmetic2_k;          /* '<S906>/Shift_Arithmetic 2' */
  real_T DataType_c;                   /* '<S912>/DataType' */
  real_T DataType_p;                   /* '<S913>/DataType' */
  real_T DataType_f;                   /* '<S915>/DataType' */
  real_T DataType_mj;                  /* '<S916>/DataType' */
  real_T Shift_Arithmetic_c;           /* '<S906>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_d;          /* '<S906>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_b;          /* '<S906>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_l;          /* '<S906>/Shift_Arithmetic 4' */
  real_T DataTypeConversion1_c;        /* '<S925>/Data Type Conversion1' */
  real_T DataTypeConversion2_pa;       /* '<S925>/Data Type Conversion2' */
  real_T DataTypeConversion3_e;        /* '<S925>/Data Type Conversion3' */
  real_T DataTypeConversion4_o;        /* '<S925>/Data Type Conversion4' */
  real_T DataTypeConversion5_a;        /* '<S925>/Data Type Conversion5' */
  real_T DataTypeConversion6_f;        /* '<S925>/Data Type Conversion6' */
  real_T DataTypeConversion7_f;        /* '<S925>/Data Type Conversion7' */
  real_T DataTypeConversion8_o;        /* '<S925>/Data Type Conversion8' */
  real_T DataType_co;                  /* '<S922>/DataType' */
  real_T Shift_Arithmetic2_o;          /* '<S907>/Shift_Arithmetic 2' */
  real_T DataTypeConversion1_fu;       /* '<S926>/Data Type Conversion1' */
  real_T DataTypeConversion2_jt;       /* '<S926>/Data Type Conversion2' */
  real_T DataTypeConversion3_g;        /* '<S926>/Data Type Conversion3' */
  real_T DataTypeConversion4_i;        /* '<S926>/Data Type Conversion4' */
  real_T DataTypeConversion5_p;        /* '<S926>/Data Type Conversion5' */
  real_T DataTypeConversion6_o;        /* '<S926>/Data Type Conversion6' */
  real_T DataTypeConversion7_gu;       /* '<S926>/Data Type Conversion7' */
  real_T DataTypeConversion8_n;        /* '<S926>/Data Type Conversion8' */
  real_T DataType_e;                   /* '<S923>/DataType' */
  real_T Shift_Arithmetic3_c;          /* '<S907>/Shift_Arithmetic 3' */
  real_T DataType_ba;                  /* '<S920>/DataType' */
  real_T DataType_d;                   /* '<S921>/DataType' */
  real_T DataType_d4;                  /* '<S924>/DataType' */
  real_T Shift_Arithmetic_g;           /* '<S907>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_p;          /* '<S907>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic4_o;          /* '<S907>/Shift_Arithmetic 4' */
  real_T Switch;                       /* '<S960>/Switch' */
  real_T Switch2;                      /* '<S970>/Switch2' */
  real_T DataType_n0;                  /* '<S970>/DataType' */
  real_T DataTypeConversion1_e[8];     /* '<S908>/Data Type Conversion1' */
  real_T DataType_pp;                  /* '<S937>/DataType' */
  real_T Shift_Arithmetic3_bf;         /* '<S909>/Shift_Arithmetic 3' */
  real_T DataType_j;                   /* '<S934>/DataType' */
  real_T DataType_o;                   /* '<S935>/DataType' */
  real_T DataType_a;                   /* '<S936>/DataType' */
  real_T DataType_jn;                  /* '<S938>/DataType' */
  real_T Shift_Arithmetic_d;           /* '<S909>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_i;          /* '<S909>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic2_d;          /* '<S909>/Shift_Arithmetic 2' */
  real_T Shift_Arithmetic4_c;          /* '<S909>/Shift_Arithmetic 4' */
  real_T Product;                      /* '<S971>/Product' */
  real_T Switch1;                      /* '<S970>/Switch1' */
  real_T Multiport_Switch;             /* '<S960>/Multiport_Switch' */
  real_T SFunction1_o1_h;              /* '<S940>/S-Function1' */
  real_T SFunction1_o2_m5;             /* '<S940>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S940>/S-Function1' */
  real_T SFunction1_o4_ao;             /* '<S940>/S-Function1' */
  real_T SFunction1_o1_gn;             /* '<S932>/S-Function1' */
  real_T SFunction1_o2_jo;             /* '<S932>/S-Function1' */
  real_T SFunction1_o3_cr;             /* '<S932>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S932>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S931>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S931>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S931>/S-Function1' */
  real_T SFunction1_o4_de;             /* '<S931>/S-Function1' */
  real_T SFunction1_o1_j;              /* '<S928>/S-Function1' */
  real_T SFunction1_o2_op;             /* '<S928>/S-Function1' */
  real_T SFunction1_o3_c2;             /* '<S928>/S-Function1' */
  real_T SFunction1_o4_db;             /* '<S928>/S-Function1' */
  real_T SFunction1_o1_jg;             /* '<S927>/S-Function1' */
  real_T SFunction1_o2_gv;             /* '<S927>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S927>/S-Function1' */
  real_T SFunction1_o4_eo;             /* '<S927>/S-Function1' */
  real_T SFunction1_o1_fo;             /* '<S918>/S-Function1' */
  real_T SFunction1_o2_dw;             /* '<S918>/S-Function1' */
  real_T SFunction1_o3_o5;             /* '<S918>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S918>/S-Function1' */
  real_T DataTypeConversion1_nd[8];    /* '<S847>/Data Type Conversion1' */
  real_T DataType_ak;                  /* '<S867>/DataType' */
  real_T Shift_Arithmetic2_i;          /* '<S847>/Shift_Arithmetic 2' */
  real_T DataType_f5;                  /* '<S863>/DataType' */
  real_T DataType_h1;                  /* '<S868>/DataType' */
  real_T Shift_Arithmetic3_l;          /* '<S847>/Shift_Arithmetic 3' */
  real_T DataType_ma;                  /* '<S869>/DataType' */
  real_T Shift_Arithmetic4_a;          /* '<S847>/Shift_Arithmetic 4' */
  real_T DataType_pj;                  /* '<S866>/DataType' */
  real_T Shift_Arithmetic_i;           /* '<S847>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_l;          /* '<S847>/Shift_Arithmetic 1' */
  real_T Latitude__d;                  /* '<S904>/Bus Selector' */
  real_T DataTypeConversion_k;         /* '<S904>/Data Type Conversion' */
  real_T Longitude__g;                 /* '<S904>/Bus Selector' */
  real_T DataTypeConversion1_co;       /* '<S904>/Data Type Conversion1' */
  real_T TwoSpeedAxleSwitch_d;         /* '<S854>/Bus Selector' */
  real_T ParkingBrakeSwitch_b;         /* '<S854>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_d;      /* '<S854>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_b;  /* '<S854>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_gh;    /* '<S854>/Bus Selector' */
  real_T CruiseCtrlActive_b;           /* '<S854>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_kn;    /* '<S854>/Bus Selector' */
  real_T BrakeSwitch_et;               /* '<S854>/Bus Selector' */
  real_T ClutchSwitch_b;               /* '<S854>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_b;        /* '<S854>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_j;      /* '<S854>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_j;     /* '<S854>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_j; /* '<S854>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_m;         /* '<S854>/Bus Selector' */
  real_T PTOGovernorState_g;           /* '<S854>/Bus Selector' */
  real_T CruiseCtrlStates_n;           /* '<S854>/Bus Selector' */
  real_T EngIdleIncrementSwitch_j;     /* '<S854>/Bus Selector' */
  real_T EngIdleDecrementSwitch_l;     /* '<S854>/Bus Selector' */
  real_T EngTestModeSwitch_d;          /* '<S854>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_g;  /* '<S854>/Bus Selector' */
  real_T TwoSpeedAxleSwitch_dg;        /* '<S855>/Bus Selector' */
  real_T ParkingBrakeSwitch_br;        /* '<S855>/Bus Selector' */
  real_T CruiseCtrlPauseSwitch_dm;     /* '<S855>/Bus Selector' */
  real_T ParkBrakeReleaseInhibitRq_b1; /* '<S855>/Bus Selector' */
  real_T WheelBasedVehicleSpeed_gh3;   /* '<S855>/Bus Selector' */
  real_T CruiseCtrlActive_bl;          /* '<S855>/Bus Selector' */
  real_T CruiseCtrlEnableSwitch_kn0;   /* '<S855>/Bus Selector' */
  real_T BrakeSwitch_ets;              /* '<S855>/Bus Selector' */
  real_T ClutchSwitch_bo;              /* '<S855>/Bus Selector' */
  real_T CruiseCtrlSetSwitch_bj;       /* '<S855>/Bus Selector' */
  real_T CruiseCtrlCoastSwitch_jy;     /* '<S855>/Bus Selector' */
  real_T CruiseCtrlResumeSwitch_jd;    /* '<S855>/Bus Selector' */
  real_T CruiseCtrlAccelerateSwitch_jp;/* '<S855>/Bus Selector' */
  real_T CruiseCtrlSetSpeed_mb;        /* '<S855>/Bus Selector' */
  real_T PTOGovernorState_gp;          /* '<S855>/Bus Selector' */
  real_T CruiseCtrlStates_nb;          /* '<S855>/Bus Selector' */
  real_T EngIdleIncrementSwitch_jl;    /* '<S855>/Bus Selector' */
  real_T EngIdleDecrementSwitch_l4;    /* '<S855>/Bus Selector' */
  real_T EngTestModeSwitch_dg;         /* '<S855>/Bus Selector' */
  real_T EngShutdownOverrideSwitch_g5; /* '<S855>/Bus Selector' */
  real_T DataTypeConversion1_b[8];     /* '<S846>/Data Type Conversion1' */
  real_T SID_f;                        /* '<S878>/Bus Selector' */
  real_T DataTypeConversion_c;         /* '<S878>/Data Type Conversion' */
  real_T COGReference_e;               /* '<S878>/Bus Selector' */
  real_T DataTypeConversion1_nu;       /* '<S878>/Data Type Conversion1' */
  real_T CourseOverGround_a;           /* '<S878>/Bus Selector' */
  real_T DataTypeConversion2_ch;       /* '<S878>/Data Type Conversion2' */
  real_T SpeedOverGround_c;            /* '<S878>/Bus Selector' */
  real_T DataTypeConversion3_k;        /* '<S878>/Data Type Conversion3' */
  real_T ASREngCtrlActive;             /* '<S880>/Bus Selector' */
  real_T ASRBrakeCtrlActive;           /* '<S880>/Bus Selector' */
  real_T AntiLockBrakingActive;        /* '<S880>/Bus Selector' */
  real_T EBSBrakeSwitch_c;             /* '<S880>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S880>/Bus Selector' */
  real_T ABSOffroadSwitch;             /* '<S880>/Bus Selector' */
  real_T ASROffroadSwitch;             /* '<S880>/Bus Selector' */
  real_T ASRHillHolderSwitch;          /* '<S880>/Bus Selector' */
  real_T TractionCtrlOverrideSwitch;   /* '<S880>/Bus Selector' */
  real_T AccelInterlockSwitch;         /* '<S880>/Bus Selector' */
  real_T EngDerateSwitch;              /* '<S880>/Bus Selector' */
  real_T EngAuxShutdownSwitch;         /* '<S880>/Bus Selector' */
  real_T RemoteAccelEnableSwitch;      /* '<S880>/Bus Selector' */
  real_T EngRetarderSelection;         /* '<S880>/Bus Selector' */
  real_T ABSFullyOperational;          /* '<S880>/Bus Selector' */
  real_T EBSRedWarningSignal;          /* '<S880>/Bus Selector' */
  real_T ABS_EBSAmberWarningSignal;    /* '<S880>/Bus Selector' */
  real_T ATC_ASRInformationSignal;     /* '<S880>/Bus Selector' */
  real_T SrcAddrssOfCtrllngDvcFrBrkCntrl;/* '<S880>/Bus Selector' */
  real_T HaltBrakeSwitch;              /* '<S880>/Bus Selector' */
  real_T TrailerABSStatus;             /* '<S880>/Bus Selector' */
  real_T TrctrMntdTrilerABSWarningSignal;/* '<S880>/Bus Selector' */
  real_T SFunction1_o1_fm;             /* '<S905>/S-Function1' */
  real_T SFunction1_o2_pa;             /* '<S905>/S-Function1' */
  real_T SFunction1_o3_kn;             /* '<S905>/S-Function1' */
  real_T SFunction1_o4_eb;             /* '<S905>/S-Function1' */
  real_T Unit_Delay;                   /* '<S894>/Unit_Delay' */
  real_T FixPtSum1_ct;                 /* '<S902>/FixPt Sum1' */
  real_T FixPtSwitch;                  /* '<S903>/FixPt Switch' */
  real_T SFunction1_o1_jj;             /* '<S881>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S881>/S-Function1' */
  real_T SFunction1_o3_jr;             /* '<S881>/S-Function1' */
  real_T SFunction1_o4_aoa;            /* '<S881>/S-Function1' */
  real_T SFunction1_o1_b2;             /* '<S879>/S-Function1' */
  real_T SFunction1_o2_it;             /* '<S879>/S-Function1' */
  real_T SFunction1_o3_pz;             /* '<S879>/S-Function1' */
  real_T SFunction1_o4_gy;             /* '<S879>/S-Function1' */
  real_T SFunction1_o1_oj;             /* '<S877>/S-Function1' */
  real_T SFunction1_o2_mc;             /* '<S877>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S877>/S-Function1' */
  real_T SFunction1_o4_di;             /* '<S877>/S-Function1' */
  real_T SFunction1_o1_l;              /* '<S876>/S-Function1' */
  real_T SFunction1_o2_lm;             /* '<S876>/S-Function1' */
  real_T SFunction1_o3_ph;             /* '<S876>/S-Function1' */
  real_T SFunction1_o4_hs;             /* '<S876>/S-Function1' */
  real_T SFunction1_o1_c;              /* '<S861>/S-Function1' */
  real_T SFunction1_o2_jv;             /* '<S861>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S861>/S-Function1' */
  real_T SFunction1_o4_e2;             /* '<S861>/S-Function1' */
  real_T SFunction1_o1_d5;             /* '<S860>/S-Function1' */
  real_T SFunction1_o2_nr;             /* '<S860>/S-Function1' */
  real_T SFunction1_o3_aa;             /* '<S860>/S-Function1' */
  real_T SFunction1_o4_a4;             /* '<S860>/S-Function1' */
  real_T SFunction1_o1_ip;             /* '<S857>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S857>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S857>/S-Function1' */
  real_T SFunction1_o4_pe;             /* '<S857>/S-Function1' */
  real_T SFunction1_o1_ex;             /* '<S856>/S-Function1' */
  real_T SFunction1_o2_lx;             /* '<S856>/S-Function1' */
  real_T SFunction1_o3_ax;             /* '<S856>/S-Function1' */
  real_T SFunction1_o4_ci;             /* '<S856>/S-Function1' */
  real_T PneumaticSupplyPress;         /* '<S835>/Bus Selector' */
  real_T ParkingAnd_orTrailerAirPress; /* '<S835>/Bus Selector' */
  real_T ServiceBrakeCircuit1AirPress; /* '<S835>/Bus Selector' */
  real_T ServiceBrakeCircuit2AirPress; /* '<S835>/Bus Selector' */
  real_T AuxEquipmentSupplyPress;      /* '<S835>/Bus Selector' */
  real_T AirSuspensionSupplyPress;     /* '<S835>/Bus Selector' */
  real_T AirCompressorStatus;          /* '<S835>/Bus Selector' */
  real_T PowertrainCircuitAirSupplyPress;/* '<S835>/Bus Selector' */
  real_T DataType_oo;                  /* '<S832>/DataType' */
  real_T Shift_Arithmetic2_b;          /* '<S827>/Shift_Arithmetic 2' */
  real_T DataType_jb;                  /* '<S830>/DataType' */
  real_T DataType_k;                   /* '<S831>/DataType' */
  real_T DataType_hk;                  /* '<S833>/DataType' */
  real_T DataType_mi;                  /* '<S834>/DataType' */
  real_T Shift_Arithmetic_e;           /* '<S827>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_j;          /* '<S827>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_n;          /* '<S827>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_e;          /* '<S827>/Shift_Arithmetic 4' */
  real_T BarometricPress_c;            /* '<S843>/Bus Selector' */
  real_T CabInteriorTemp;              /* '<S843>/Bus Selector' */
  real_T AmbientAirTemp_g;             /* '<S843>/Bus Selector' */
  real_T EngAirIntakeTemp;             /* '<S843>/Bus Selector' */
  real_T RoadSurfaceTemp;              /* '<S843>/Bus Selector' */
  real_T DataType_hd;                  /* '<S840>/DataType' */
  real_T Shift_Arithmetic2_f;          /* '<S828>/Shift_Arithmetic 2' */
  real_T DataType_fq;                  /* '<S838>/DataType' */
  real_T DataType_od;                  /* '<S839>/DataType' */
  real_T DataType_oz;                  /* '<S841>/DataType' */
  real_T DataType_me;                  /* '<S842>/DataType' */
  real_T Shift_Arithmetic_de;          /* '<S828>/Shift_Arithmetic ' */
  real_T Shift_Arithmetic1_ju;         /* '<S828>/Shift_Arithmetic 1' */
  real_T Shift_Arithmetic3_p;          /* '<S828>/Shift_Arithmetic 3' */
  real_T Shift_Arithmetic4_ok;         /* '<S828>/Shift_Arithmetic 4' */
  real_T SFunction1_o1_c4;             /* '<S844>/S-Function1' */
  real_T SFunction1_o2_nd;             /* '<S844>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S844>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S844>/S-Function1' */
  real_T SFunction1_o1_a3;             /* '<S836>/S-Function1' */
  real_T SFunction1_o2_cq;             /* '<S836>/S-Function1' */
  real_T SFunction1_o3_ds;             /* '<S836>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S836>/S-Function1' */
  real_T Unit_Delay_j;                 /* '<S813>/Unit_Delay' */
  real_T Add;                          /* '<S813>/Add' */
  real_T Xold_o;                       /* '<S808>/FixPt Unit Delay1' */
  real_T Init_i;                       /* '<S808>/Init' */
  real_T Abs_f;                        /* '<S805>/Abs' */
  real_T Product1_bn;                  /* '<S805>/Product1' */
  real_T Add1_d;                       /* '<S805>/Add1' */
  real_T MinMax2;                      /* '<S805>/MinMax2' */
  real_T Abs1;                         /* '<S805>/Abs1' */
  real_T Product2_m;                   /* '<S805>/Product2' */
  real_T Subtract1_p;                  /* '<S805>/Subtract1' */
  real_T MinMax1_e;                    /* '<S805>/MinMax1' */
  real_T Subtract_j;                   /* '<S733>/Subtract' */
  real_T Abs_g;                        /* '<S733>/Abs' */
  real_T timeStamp;                    /* '<S637>/timeStamp' */
  real_T Unit_Delay_b;                 /* '<S637>/Unit_Delay' */
  real_T SFunction1_o1_b1;             /* '<S633>/S-Function1' */
  real_T SFunction1_o2_j3;             /* '<S633>/S-Function1' */
  real_T SFunction1_o3_pt;             /* '<S633>/S-Function1' */
  real_T SFunction1_o4_fn;             /* '<S633>/S-Function1' */
  real_T SFunction1_o5;                /* '<S633>/S-Function1' */
  real_T SFunction1_o6;                /* '<S633>/S-Function1' */
  real_T SFunction1_o7;                /* '<S633>/S-Function1' */
  real_T SFunction1_o8;                /* '<S633>/S-Function1' */
  real_T SFunction1_o2_pd;             /* '<S631>/S-Function1' */
  real_T SFunction1_o3_ig;             /* '<S631>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S631>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S631>/S-Function1' */
  real_T SFunction1_o8_o;              /* '<S631>/S-Function1' */
  real_T SFunction1_o9;                /* '<S631>/S-Function1' */
  real_T SFunction1_o1_jf;             /* '<S629>/S-Function1' */
  real_T SFunction1_o2_ih;             /* '<S629>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S629>/S-Function1' */
  real_T SFunction1_o4_gk;             /* '<S629>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S629>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S629>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S629>/S-Function1' */
  real_T SFunction1_o8_i;              /* '<S629>/S-Function1' */
  real_T SFunction1_o9_e;              /* '<S629>/S-Function1' */
  real_T SFunction1_o10;               /* '<S629>/S-Function1' */
  real_T SFunction1_o1_ln;             /* '<S627>/S-Function1' */
  real_T SFunction1_o2_cu;             /* '<S627>/S-Function1' */
  real_T SFunction1_o3_ck;             /* '<S627>/S-Function1' */
  real_T SFunction1_o4_mjq;            /* '<S627>/S-Function1' */
  real_T SFunction1_o5_ma;             /* '<S627>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S627>/S-Function1' */
  real_T SFunction1_o7_gi;             /* '<S627>/S-Function1' */
  real_T SFunction1_o8_k;              /* '<S627>/S-Function1' */
  real_T SFunction1_o9_o;              /* '<S627>/S-Function1' */
  real_T SFunction1_o10_f;             /* '<S627>/S-Function1' */
  real_T SFunction1_o11;               /* '<S627>/S-Function1' */
  real_T SFunction1_o12;               /* '<S627>/S-Function1' */
  real_T SFunction1_o13;               /* '<S627>/S-Function1' */
  real_T SFunction1_o14;               /* '<S627>/S-Function1' */
  real_T SFunction1_o15;               /* '<S627>/S-Function1' */
  real_T SFunction1_o16;               /* '<S627>/S-Function1' */
  real_T SFunction1_o17;               /* '<S627>/S-Function1' */
  real_T SFunction1_o18;               /* '<S627>/S-Function1' */
  real_T SFunction1_o19;               /* '<S627>/S-Function1' */
  real_T SFunction1_o20;               /* '<S627>/S-Function1' */
  real_T SFunction1_o21;               /* '<S627>/S-Function1' */
  real_T SFunction1_o22;               /* '<S627>/S-Function1' */
  real_T SFunction1_o23;               /* '<S627>/S-Function1' */
  real_T SFunction1_o24;               /* '<S627>/S-Function1' */
  real_T SFunction1_o25;               /* '<S627>/S-Function1' */
  real_T SFunction1_o26;               /* '<S627>/S-Function1' */
  real_T SFunction1_o27;               /* '<S627>/S-Function1' */
  real_T SFunction1_o28;               /* '<S627>/S-Function1' */
  real_T SFunction1_o1_j4;             /* '<S625>/S-Function1' */
  real_T SFunction1_o2_gh;             /* '<S625>/S-Function1' */
  real_T SFunction1_o3_kg;             /* '<S625>/S-Function1' */
  real_T SFunction1_o4_cb;             /* '<S625>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S625>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S625>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S625>/S-Function1' */
  real_T SFunction1_o1_gi;             /* '<S623>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S623>/S-Function1' */
  real_T SFunction1_o3_br;             /* '<S623>/S-Function1' */
  real_T SFunction1_o4_cbx;            /* '<S623>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S623>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S623>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S623>/S-Function1' */
  real_T SFunction1_o8_p;              /* '<S623>/S-Function1' */
  real_T SFunction1_o9_a;              /* '<S623>/S-Function1' */
  real_T SFunction1_o1_d1;             /* '<S621>/S-Function1' */
  real_T SFunction1_o2_is;             /* '<S621>/S-Function1' */
  real_T SFunction1_o3_h2;             /* '<S621>/S-Function1' */
  real_T SFunction1_o4_gj;             /* '<S621>/S-Function1' */
  real_T SFunction1_o5_i;              /* '<S621>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S621>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S621>/S-Function1' */
  real_T SFunction1_o8_f;              /* '<S621>/S-Function1' */
  real_T SFunction1_o9_l;              /* '<S621>/S-Function1' */
  real_T SFunction1_o1_aw;             /* '<S619>/S-Function1' */
  real_T SFunction1_o2_jd;             /* '<S619>/S-Function1' */
  real_T SFunction1_o3_hj;             /* '<S619>/S-Function1' */
  real_T SFunction1_o4_es;             /* '<S619>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S619>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S619>/S-Function1' */
  real_T SFunction1_o7_e4;             /* '<S619>/S-Function1' */
  real_T SFunction1_o8_fv;             /* '<S619>/S-Function1' */
  real_T SFunction1_o9_h;              /* '<S619>/S-Function1' */
  real_T SFunction1_o1_bv;             /* '<S617>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S617>/S-Function1' */
  real_T SFunction1_o3_lm;             /* '<S617>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S617>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S617>/S-Function1' */
  real_T SFunction1_o6_id;             /* '<S617>/S-Function1' */
  real_T SFunction1_o7_gn;             /* '<S617>/S-Function1' */
  real_T SFunction1_o8_a;              /* '<S617>/S-Function1' */
  real_T SFunction1_o9_aw;             /* '<S617>/S-Function1' */
  real_T SFunction1_o10_a;             /* '<S617>/S-Function1' */
  real_T SFunction1_o1_ad;             /* '<S615>/S-Function1' */
  real_T SFunction1_o2_iy;             /* '<S615>/S-Function1' */
  real_T SFunction1_o3_ax1;            /* '<S615>/S-Function1' */
  real_T SFunction1_o4_aj;             /* '<S615>/S-Function1' */
  real_T SFunction1_o5_fo;             /* '<S615>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S615>/S-Function1' */
  real_T SFunction1_o7_io;             /* '<S615>/S-Function1' */
  real_T SFunction1_o8_g;              /* '<S615>/S-Function1' */
  real_T SFunction1_o9_m;              /* '<S615>/S-Function1' */
  real_T SFunction1_o10_e;             /* '<S615>/S-Function1' */
  real_T SFunction1_o11_a;             /* '<S615>/S-Function1' */
  real_T SFunction1_o12_i;             /* '<S615>/S-Function1' */
  real_T SFunction1_o13_l;             /* '<S615>/S-Function1' */
  real_T RX_time_jv;                   /* '<S611>/Data Type Conversion9' */
  real_T RX_time_jk;                   /* '<S611>/Data Type Conversion2' */
  real_T RX_delta_time_bo;             /* '<S611>/Data Type Conversion10' */
  real_T RX_delta_time_kh;             /* '<S611>/Data Type Conversion1' */
  real_T SFunction1_o1_p;              /* '<S613>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S613>/S-Function1' */
  real_T SFunction1_o3_cu;             /* '<S613>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S613>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S613>/S-Function1' */
  real_T SFunction1_o1_jv;             /* '<S612>/S-Function1' */
  real_T SFunction1_o2_go;             /* '<S612>/S-Function1' */
  real_T SFunction1_o3_bb;             /* '<S612>/S-Function1' */
  real_T SFunction1_o4_d2;             /* '<S612>/S-Function1' */
  real_T SFunction1_o5_j1;             /* '<S612>/S-Function1' */
  real_T SFunction1_o1_ai;             /* '<S610>/S-Function1' */
  real_T SFunction1_o2_dt;             /* '<S610>/S-Function1' */
  real_T SFunction1_o3_kw;             /* '<S610>/S-Function1' */
  real_T SFunction1_o4_cj;             /* '<S610>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S610>/S-Function1' */
  real_T SFunction1_o6_im;             /* '<S610>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S610>/S-Function1' */
  real_T SFunction1_o1_er;             /* '<S609>/S-Function1' */
  real_T SFunction1_o2_ia;             /* '<S609>/S-Function1' */
  real_T SFunction1_o3_oq;             /* '<S609>/S-Function1' */
  real_T SFunction1_o4_gs;             /* '<S609>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S609>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S609>/S-Function1' */
  real_T SFunction1_o1_lx;             /* '<S608>/S-Function1' */
  real_T SFunction1_o2_er;             /* '<S608>/S-Function1' */
  real_T SFunction1_o3_jg;             /* '<S608>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S608>/S-Function1' */
  real_T SFunction1_o5_dq;             /* '<S608>/S-Function1' */
  real_T SFunction1_o6_d2;             /* '<S608>/S-Function1' */
  real_T SFunction1_o1_ir;             /* '<S600>/S-Function1' */
  real_T SFunction1_o2_b4;             /* '<S600>/S-Function1' */
  real_T SFunction1_o3_ix;             /* '<S600>/S-Function1' */
  real_T SFunction1_o4_ji;             /* '<S600>/S-Function1' */
  real_T SFunction1_o5_ip;             /* '<S600>/S-Function1' */
  real_T SFunction1_o1_c4q;            /* '<S599>/S-Function1' */
  real_T SFunction1_o2_in;             /* '<S599>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S599>/S-Function1' */
  real_T SFunction1_o4_dp;             /* '<S599>/S-Function1' */
  real_T SFunction1_o5_mf;             /* '<S599>/S-Function1' */
  real_T SFunction1_o1_pd;             /* '<S598>/S-Function1' */
  real_T SFunction1_o2_hg;             /* '<S598>/S-Function1' */
  real_T SFunction1_o3_ky;             /* '<S598>/S-Function1' */
  real_T SFunction1_o4_dw;             /* '<S598>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S598>/S-Function1' */
  real_T RX_time_b;                    /* '<S594>/Data Type Conversion9' */
  real_T RX_time_dc;                   /* '<S595>/Data Type Conversion9' */
  real_T RX_delta_time_mu;             /* '<S594>/Data Type Conversion10' */
  real_T RX_delta_time_bob;            /* '<S595>/Data Type Conversion10' */
  real_T SFunction1_o1_oa;             /* '<S587>/S-Function1' */
  real_T SFunction1_o2_bm;             /* '<S587>/S-Function1' */
  real_T SFunction1_o3_dl;             /* '<S587>/S-Function1' */
  real_T SFunction1_o4_gd;             /* '<S587>/S-Function1' */
  real_T SFunction1_o5_k;              /* '<S587>/S-Function1' */
  real_T SFunction1_o6_iy;             /* '<S587>/S-Function1' */
  real_T SFunction1_o7_nw;             /* '<S587>/S-Function1' */
  real_T SFunction1_o8_ki;             /* '<S587>/S-Function1' */
  real_T SFunction1_o9_n;              /* '<S587>/S-Function1' */
  real_T SFunction1_o10_g;             /* '<S587>/S-Function1' */
  real_T SFunction1_o11_n;             /* '<S587>/S-Function1' */
  real_T SFunction1_o1_k;              /* '<S586>/S-Function1' */
  real_T SFunction1_o2_lt;             /* '<S586>/S-Function1' */
  real_T SFunction1_o3_lj;             /* '<S586>/S-Function1' */
  real_T SFunction1_o4_g2;             /* '<S586>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S586>/S-Function1' */
  real_T SFunction1_o6_eq;             /* '<S586>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S586>/S-Function1' */
  real_T SFunction1_o8_gr;             /* '<S586>/S-Function1' */
  real_T SFunction1_o9_c;              /* '<S586>/S-Function1' */
  real_T SFunction1_o10_d;             /* '<S586>/S-Function1' */
  real_T SFunction1_o11_ad;            /* '<S586>/S-Function1' */
  real_T SFunction1_o1_h0;             /* '<S585>/S-Function1' */
  real_T SFunction1_o2_ij;             /* '<S585>/S-Function1' */
  real_T SFunction1_o3_h21;            /* '<S585>/S-Function1' */
  real_T SFunction1_o4_hg;             /* '<S585>/S-Function1' */
  real_T SFunction1_o5_f5;             /* '<S585>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S585>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S585>/S-Function1' */
  real_T SFunction1_o8_pk;             /* '<S585>/S-Function1' */
  real_T SFunction1_o9_p;              /* '<S585>/S-Function1' */
  real_T SFunction1_o10_ds;            /* '<S585>/S-Function1' */
  real_T SFunction1_o11_g;             /* '<S585>/S-Function1' */
  real_T RX_time_fv;                   /* '<S581>/Data Type Conversion9' */
  real_T RX_time_ih;                   /* '<S582>/Data Type Conversion9' */
  real_T RX_delta_time_fr;             /* '<S581>/Data Type Conversion10' */
  real_T RX_delta_time_mpj;            /* '<S582>/Data Type Conversion10' */
  real_T SFunction1_o1_hs;             /* '<S574>/S-Function1' */
  real_T SFunction1_o2_oh;             /* '<S574>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S574>/S-Function1' */
  real_T SFunction1_o4_gs2;            /* '<S574>/S-Function1' */
  real_T SFunction1_o5_cw;             /* '<S574>/S-Function1' */
  real_T SFunction1_o6_es;             /* '<S574>/S-Function1' */
  real_T SFunction1_o7_dz;             /* '<S574>/S-Function1' */
  real_T SFunction1_o8_fm;             /* '<S574>/S-Function1' */
  real_T SFunction1_o9_op;             /* '<S574>/S-Function1' */
  real_T SFunction1_o10_k;             /* '<S574>/S-Function1' */
  real_T SFunction1_o11_aw;            /* '<S574>/S-Function1' */
  real_T SFunction1_o1_i4;             /* '<S573>/S-Function1' */
  real_T SFunction1_o2_by;             /* '<S573>/S-Function1' */
  real_T SFunction1_o3_be;             /* '<S573>/S-Function1' */
  real_T SFunction1_o4_fnt;            /* '<S573>/S-Function1' */
  real_T SFunction1_o5_lm;             /* '<S573>/S-Function1' */
  real_T SFunction1_o6_ol;             /* '<S573>/S-Function1' */
  real_T SFunction1_o7_go;             /* '<S573>/S-Function1' */
  real_T SFunction1_o8_fm0;            /* '<S573>/S-Function1' */
  real_T SFunction1_o9_g;              /* '<S573>/S-Function1' */
  real_T SFunction1_o10_i;             /* '<S573>/S-Function1' */
  real_T SFunction1_o11_l;             /* '<S573>/S-Function1' */
  real_T SFunction1_o1_lk;             /* '<S572>/S-Function1' */
  real_T SFunction1_o2_hv;             /* '<S572>/S-Function1' */
  real_T SFunction1_o3_d0;             /* '<S572>/S-Function1' */
  real_T SFunction1_o4_j2;             /* '<S572>/S-Function1' */
  real_T SFunction1_o5_pv;             /* '<S572>/S-Function1' */
  real_T SFunction1_o6_d3;             /* '<S572>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S572>/S-Function1' */
  real_T SFunction1_o8_pv;             /* '<S572>/S-Function1' */
  real_T SFunction1_o9_n2;             /* '<S572>/S-Function1' */
  real_T SFunction1_o10_ag;            /* '<S572>/S-Function1' */
  real_T SFunction1_o11_nf;            /* '<S572>/S-Function1' */
  real_T RX_time_ln;                   /* '<S568>/Data Type Conversion9' */
  real_T RX_delta_time_ei;             /* '<S568>/Data Type Conversion10' */
  real_T RX_time_jd;                   /* '<S564>/Data Type Conversion9' */
  real_T RX_time_do;                   /* '<S565>/Data Type Conversion9' */
  real_T RX_delta_time_ed;             /* '<S564>/Data Type Conversion10' */
  real_T RX_delta_time_ov;             /* '<S565>/Data Type Conversion10' */
  real_T SFunction1_o1_i5;             /* '<S567>/S-Function1' */
  real_T SFunction1_o2_ll;             /* '<S567>/S-Function1' */
  real_T SFunction1_o3_m2;             /* '<S567>/S-Function1' */
  real_T SFunction1_o4_dwj;            /* '<S567>/S-Function1' */
  real_T SFunction1_o5_i0;             /* '<S567>/S-Function1' */
  real_T SFunction1_o1_fs;             /* '<S566>/S-Function1' */
  real_T SFunction1_o2_ji;             /* '<S566>/S-Function1' */
  real_T SFunction1_o3_k5;             /* '<S566>/S-Function1' */
  real_T SFunction1_o4_g4;             /* '<S566>/S-Function1' */
  real_T SFunction1_o5_ot;             /* '<S566>/S-Function1' */
  real_T SFunction1_o1_bn;             /* '<S563>/S-Function1' */
  real_T SFunction1_o2_nn;             /* '<S563>/S-Function1' */
  real_T SFunction1_o3_ht;             /* '<S563>/S-Function1' */
  real_T SFunction1_o4_da;             /* '<S563>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S563>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S563>/S-Function1' */
  real_T SFunction1_o7_lj;             /* '<S563>/S-Function1' */
  real_T RX_time_hr;                   /* '<S559>/Data Type Conversion9' */
  real_T RX_time_dzo;                  /* '<S559>/Data Type Conversion2' */
  real_T RX_delta_time_at;             /* '<S559>/Data Type Conversion10' */
  real_T RX_delta_time_na;             /* '<S559>/Data Type Conversion1' */
  real_T SFunction1_o1_oq;             /* '<S561>/S-Function1' */
  real_T SFunction1_o2_dtj;            /* '<S561>/S-Function1' */
  real_T SFunction1_o3_mj;             /* '<S561>/S-Function1' */
  real_T SFunction1_o4_ly;             /* '<S561>/S-Function1' */
  real_T SFunction1_o5_pz;             /* '<S561>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S561>/S-Function1' */
  real_T SFunction1_o7_bz;             /* '<S561>/S-Function1' */
  real_T SFunction1_o8_m;              /* '<S561>/S-Function1' */
  real_T SFunction1_o9_hi;             /* '<S561>/S-Function1' */
  real_T SFunction1_o1_ig;             /* '<S560>/S-Function1' */
  real_T SFunction1_o2_cn;             /* '<S560>/S-Function1' */
  real_T SFunction1_o3_ia;             /* '<S560>/S-Function1' */
  real_T SFunction1_o4_al;             /* '<S560>/S-Function1' */
  real_T SFunction1_o5_aw;             /* '<S560>/S-Function1' */
  real_T SFunction1_o6_nd;             /* '<S560>/S-Function1' */
  real_T SFunction1_o7_eh;             /* '<S560>/S-Function1' */
  real_T SFunction1_o8_l;              /* '<S560>/S-Function1' */
  real_T SFunction1_o9_d;              /* '<S560>/S-Function1' */
  real_T SFunction1_o1_la;             /* '<S558>/S-Function1' */
  real_T SFunction1_o2_n5;             /* '<S558>/S-Function1' */
  real_T SFunction1_o3_lc;             /* '<S558>/S-Function1' */
  real_T SFunction1_o4_mn;             /* '<S558>/S-Function1' */
  real_T SFunction1_o5_jl;             /* '<S558>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S558>/S-Function1' */
  real_T SFunction1_o1_do;             /* '<S556>/S-Function1' */
  real_T SFunction1_o2_h0;             /* '<S556>/S-Function1' */
  real_T SFunction1_o3_jq;             /* '<S556>/S-Function1' */
  real_T SFunction1_o4_if;             /* '<S556>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S556>/S-Function1' */
  real_T SFunction1_o1_fok;            /* '<S554>/S-Function1' */
  real_T SFunction1_o2_kw;             /* '<S554>/S-Function1' */
  real_T SFunction1_o3_nv;             /* '<S554>/S-Function1' */
  real_T SFunction1_o4_dio;            /* '<S554>/S-Function1' */
  real_T SFunction1_o5_l5;             /* '<S554>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S554>/S-Function1' */
  real_T SFunction1_o7_kz;             /* '<S554>/S-Function1' */
  real_T SFunction1_o8_fg;             /* '<S554>/S-Function1' */
  real_T SFunction1_o9_p0;             /* '<S554>/S-Function1' */
  real_T SFunction1_o10_gp;            /* '<S554>/S-Function1' */
  real_T SFunction1_o11_e;             /* '<S554>/S-Function1' */
  real_T SFunction1_o12_o;             /* '<S554>/S-Function1' */
  real_T SFunction1_o13_a;             /* '<S554>/S-Function1' */
  real_T SFunction1_o14_h;             /* '<S554>/S-Function1' */
  real_T SFunction1_o15_p;             /* '<S554>/S-Function1' */
  real_T SFunction1_o16_p;             /* '<S554>/S-Function1' */
  real_T SFunction1_o17_m;             /* '<S554>/S-Function1' */
  real_T SFunction1_o1_gr;             /* '<S552>/S-Function1' */
  real_T SFunction1_o2_b0;             /* '<S552>/S-Function1' */
  real_T SFunction1_o3_an;             /* '<S552>/S-Function1' */
  real_T SFunction1_o4_k2;             /* '<S552>/S-Function1' */
  real_T SFunction1_o5_f1;             /* '<S552>/S-Function1' */
  real_T SFunction1_o6_kx;             /* '<S552>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S552>/S-Function1' */
  real_T SFunction1_o8_e;              /* '<S552>/S-Function1' */
  real_T SFunction1_o9_f;              /* '<S552>/S-Function1' */
  real_T SFunction1_o10_l;             /* '<S552>/S-Function1' */
  real_T SFunction1_o11_ah;            /* '<S552>/S-Function1' */
  real_T timeStamp_b;                  /* '<S509>/timeStamp' */
  real_T Unit_Delay_n;                 /* '<S509>/Unit_Delay' */
  real_T SFunction1_o1_in;             /* '<S505>/S-Function1' */
  real_T SFunction1_o2_be;             /* '<S505>/S-Function1' */
  real_T SFunction1_o3_lh;             /* '<S505>/S-Function1' */
  real_T SFunction1_o4_i2;             /* '<S505>/S-Function1' */
  real_T SFunction1_o5_hh;             /* '<S505>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S505>/S-Function1' */
  real_T SFunction1_o7_ix;             /* '<S505>/S-Function1' */
  real_T SFunction1_o8_ea;             /* '<S505>/S-Function1' */
  real_T SFunction1_o9_i;              /* '<S505>/S-Function1' */
  real_T SFunction1_o10_j;             /* '<S505>/S-Function1' */
  real_T SFunction1_o1_br;             /* '<S503>/S-Function1' */
  real_T SFunction1_o2_ow;             /* '<S503>/S-Function1' */
  real_T SFunction1_o3_nk;             /* '<S503>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S503>/S-Function1' */
  real_T SFunction1_o5_jlz;            /* '<S503>/S-Function1' */
  real_T SFunction1_o6_ch;             /* '<S503>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S503>/S-Function1' */
  real_T SFunction1_o8_b;              /* '<S503>/S-Function1' */
  real_T SFunction1_o9_n5;             /* '<S503>/S-Function1' */
  real_T SFunction1_o10_ai;            /* '<S503>/S-Function1' */
  real_T SFunction1_o11_o;             /* '<S503>/S-Function1' */
  real_T SFunction1_o12_c;             /* '<S503>/S-Function1' */
  real_T SFunction1_o13_b;             /* '<S503>/S-Function1' */
  real_T SFunction1_o14_n;             /* '<S503>/S-Function1' */
  real_T SFunction1_o15_i;             /* '<S503>/S-Function1' */
  real_T SFunction1_o16_c;             /* '<S503>/S-Function1' */
  real_T SFunction1_o17_mb;            /* '<S503>/S-Function1' */
  real_T SFunction1_o18_g;             /* '<S503>/S-Function1' */
  real_T SFunction1_o19_o;             /* '<S503>/S-Function1' */
  real_T SFunction1_o20_b;             /* '<S503>/S-Function1' */
  real_T SFunction1_o21_i;             /* '<S503>/S-Function1' */
  real_T SFunction1_o22_c;             /* '<S503>/S-Function1' */
  real_T SFunction1_o23_e;             /* '<S503>/S-Function1' */
  real_T SFunction1_o24_a;             /* '<S503>/S-Function1' */
  real_T SFunction1_o25_b;             /* '<S503>/S-Function1' */
  real_T SFunction1_o1_je;             /* '<S501>/S-Function1' */
  real_T SFunction1_o2_pn;             /* '<S501>/S-Function1' */
  real_T SFunction1_o3_la;             /* '<S501>/S-Function1' */
  real_T SFunction1_o4_mi;             /* '<S501>/S-Function1' */
  real_T SFunction1_o5_ks;             /* '<S501>/S-Function1' */
  real_T SFunction1_o6_aa;             /* '<S501>/S-Function1' */
  real_T SFunction1_o7_f2;             /* '<S501>/S-Function1' */
  real_T SFunction1_o8_ei;             /* '<S501>/S-Function1' */
  real_T SFunction1_o9_j;              /* '<S501>/S-Function1' */
  real_T SFunction1_o10_p;             /* '<S501>/S-Function1' */
  real_T SFunction1_o11_gi;            /* '<S501>/S-Function1' */
  real_T SFunction1_o12_d;             /* '<S501>/S-Function1' */
  real_T SFunction1_o13_i;             /* '<S501>/S-Function1' */
  real_T SFunction1_o14_l;             /* '<S501>/S-Function1' */
  real_T SFunction1_o15_j;             /* '<S501>/S-Function1' */
  real_T SFunction1_o16_pw;            /* '<S501>/S-Function1' */
  real_T SFunction1_o17_l;             /* '<S501>/S-Function1' */
  real_T SFunction1_o18_c;             /* '<S501>/S-Function1' */
  real_T SFunction1_o19_n;             /* '<S501>/S-Function1' */
  real_T SFunction1_o20_f;             /* '<S501>/S-Function1' */
  real_T SFunction1_o21_m;             /* '<S501>/S-Function1' */
  real_T SFunction1_o22_j;             /* '<S501>/S-Function1' */
  real_T SFunction1_o23_f;             /* '<S501>/S-Function1' */
  real_T SFunction1_o24_i;             /* '<S501>/S-Function1' */
  real_T SFunction1_o25_bb;            /* '<S501>/S-Function1' */
  real_T SFunction1_o1_ly;             /* '<S499>/S-Function1' */
  real_T SFunction1_o2_kwd;            /* '<S499>/S-Function1' */
  real_T SFunction1_o3_lv;             /* '<S499>/S-Function1' */
  real_T SFunction1_o4_o1;             /* '<S499>/S-Function1' */
  real_T RX_time_nf;                   /* '<S495>/Data Type Conversion9' */
  real_T RX_time_aa;                   /* '<S495>/Data Type Conversion2' */
  real_T RX_delta_time_p;              /* '<S495>/Data Type Conversion10' */
  real_T RX_delta_time_mt;             /* '<S495>/Data Type Conversion3' */
  real_T SFunction1_o1_ko;             /* '<S497>/S-Function1' */
  real_T SFunction1_o2_c3;             /* '<S497>/S-Function1' */
  real_T SFunction1_o3_cq;             /* '<S497>/S-Function1' */
  real_T SFunction1_o4_fx;             /* '<S497>/S-Function1' */
  real_T SFunction1_o5_hd;             /* '<S497>/S-Function1' */
  real_T SFunction1_o6_est;            /* '<S497>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S497>/S-Function1' */
  real_T SFunction1_o1_mp;             /* '<S496>/S-Function1' */
  real_T SFunction1_o2_ghu;            /* '<S496>/S-Function1' */
  real_T SFunction1_o3_fl;             /* '<S496>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S496>/S-Function1' */
  real_T SFunction1_o5_lj;             /* '<S496>/S-Function1' */
  real_T SFunction1_o6_fh;             /* '<S496>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S496>/S-Function1' */
  real_T SFunction1_o1_dq;             /* '<S494>/S-Function1' */
  real_T SFunction1_o2_om;             /* '<S494>/S-Function1' */
  real_T SFunction1_o3_mjk;            /* '<S494>/S-Function1' */
  real_T SFunction1_o4_pt;             /* '<S494>/S-Function1' */
  real_T SFunction1_o5_k2;             /* '<S494>/S-Function1' */
  real_T SFunction1_o6_fd;             /* '<S494>/S-Function1' */
  real_T SFunction1_o7_fa;             /* '<S494>/S-Function1' */
  real_T SFunction1_o8_g5;             /* '<S494>/S-Function1' */
  real_T SFunction1_o9_c0;             /* '<S494>/S-Function1' */
  real_T SFunction1_o10_m;             /* '<S494>/S-Function1' */
  real_T SFunction1_o11_ai;            /* '<S494>/S-Function1' */
  real_T SFunction1_o12_e;             /* '<S494>/S-Function1' */
  real_T SFunction1_o13_lf;            /* '<S494>/S-Function1' */
  real_T SFunction1_o14_f;             /* '<S494>/S-Function1' */
  real_T SFunction1_o15_k;             /* '<S494>/S-Function1' */
  real_T SFunction1_o16_h;             /* '<S494>/S-Function1' */
  real_T SFunction1_o17_h;             /* '<S494>/S-Function1' */
  real_T SFunction1_o18_k;             /* '<S494>/S-Function1' */
  real_T SFunction1_o19_nj;            /* '<S494>/S-Function1' */
  real_T SFunction1_o20_l;             /* '<S494>/S-Function1' */
  real_T SFunction1_o21_d;             /* '<S494>/S-Function1' */
  real_T SFunction1_o22_l;             /* '<S494>/S-Function1' */
  real_T SFunction1_o23_k;             /* '<S494>/S-Function1' */
  real_T SFunction1_o1_g3;             /* '<S492>/S-Function1' */
  real_T SFunction1_o2_l2;             /* '<S492>/S-Function1' */
  real_T SFunction1_o3_gw;             /* '<S492>/S-Function1' */
  real_T SFunction1_o4_nw;             /* '<S492>/S-Function1' */
  real_T SFunction1_o6_fi;             /* '<S492>/S-Function1' */
  real_T SFunction1_o7_ng;             /* '<S492>/S-Function1' */
  real_T SFunction1_o9_f0;             /* '<S492>/S-Function1' */
  real_T SFunction1_o10_em;            /* '<S492>/S-Function1' */
  real_T SFunction1_o11_gw;            /* '<S492>/S-Function1' */
  real_T SFunction1_o12_j;             /* '<S492>/S-Function1' */
  real_T SFunction1_o13_o;             /* '<S492>/S-Function1' */
  real_T SFunction1_o14_nw;            /* '<S492>/S-Function1' */
  real_T SFunction1_o15_h;             /* '<S492>/S-Function1' */
  real_T SFunction1_o16_g;             /* '<S492>/S-Function1' */
  real_T SFunction1_o17_f;             /* '<S492>/S-Function1' */
  real_T SFunction1_o18_d;             /* '<S492>/S-Function1' */
  real_T SFunction1_o19_m;             /* '<S492>/S-Function1' */
  real_T SFunction1_o20_lk;            /* '<S492>/S-Function1' */
  real_T SFunction1_o21_n;             /* '<S492>/S-Function1' */
  real_T SFunction1_o22_a;             /* '<S492>/S-Function1' */
  real_T SFunction1_o23_n;             /* '<S492>/S-Function1' */
  real_T SFunction1_o1_ow;             /* '<S490>/S-Function1' */
  real_T SFunction1_o2_bma;            /* '<S490>/S-Function1' */
  real_T SFunction1_o3_gs;             /* '<S490>/S-Function1' */
  real_T SFunction1_o4_nf;             /* '<S490>/S-Function1' */
  real_T SFunction1_o5_mm;             /* '<S490>/S-Function1' */
  real_T SFunction1_o6_ci;             /* '<S490>/S-Function1' */
  real_T SFunction1_o7_ds;             /* '<S490>/S-Function1' */
  real_T SFunction1_o8_n;              /* '<S490>/S-Function1' */
  real_T SFunction1_o9_iv;             /* '<S490>/S-Function1' */
  real_T SFunction1_o10_fp;            /* '<S490>/S-Function1' */
  real_T SFunction1_o11_k;             /* '<S490>/S-Function1' */
  real_T SFunction1_o12_a;             /* '<S490>/S-Function1' */
  real_T SFunction1_o13_g;             /* '<S490>/S-Function1' */
  real_T SFunction1_o14_k;             /* '<S490>/S-Function1' */
  real_T SFunction1_o15_il;            /* '<S490>/S-Function1' */
  real_T SFunction1_o16_cg;            /* '<S490>/S-Function1' */
  real_T SFunction1_o17_l1;            /* '<S490>/S-Function1' */
  real_T SFunction1_o18_a;             /* '<S490>/S-Function1' */
  real_T SFunction1_o19_l;             /* '<S490>/S-Function1' */
  real_T SFunction1_o20_i;             /* '<S490>/S-Function1' */
  real_T SFunction1_o21_d4;            /* '<S490>/S-Function1' */
  real_T SFunction1_o22_j1;            /* '<S490>/S-Function1' */
  real_T SFunction1_o23_o;             /* '<S490>/S-Function1' */
  real_T SFunction1_o24_g;             /* '<S490>/S-Function1' */
  real_T SFunction1_o25_g;             /* '<S490>/S-Function1' */
  real_T SFunction1_o26_o;             /* '<S490>/S-Function1' */
  real_T SFunction1_o27_b;             /* '<S490>/S-Function1' */
  real_T SFunction1_o28_h;             /* '<S490>/S-Function1' */
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
  real_T SFunction1_o1_jm;             /* '<S488>/S-Function1' */
  real_T SFunction1_o2_ii;             /* '<S488>/S-Function1' */
  real_T SFunction1_o3_bi;             /* '<S488>/S-Function1' */
  real_T SFunction1_o4_hn;             /* '<S488>/S-Function1' */
  real_T SFunction1_o5_bt;             /* '<S488>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S486>/S-Function1' */
  real_T SFunction1_o2_cz;             /* '<S486>/S-Function1' */
  real_T SFunction1_o3_fv;             /* '<S486>/S-Function1' */
  real_T SFunction1_o4_it;             /* '<S486>/S-Function1' */
  real_T SFunction1_o5_h5;             /* '<S486>/S-Function1' */
  real_T SFunction1_o6_fk;             /* '<S486>/S-Function1' */
  real_T SFunction1_o7_kx;             /* '<S486>/S-Function1' */
  real_T SFunction1_o8_bj;             /* '<S486>/S-Function1' */
  real_T SFunction1_o1_n4;             /* '<S484>/S-Function1' */
  real_T SFunction1_o2_p4;             /* '<S484>/S-Function1' */
  real_T SFunction1_o3_iv;             /* '<S484>/S-Function1' */
  real_T SFunction1_o4_av;             /* '<S484>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S484>/S-Function1' */
  real_T SFunction1_o6_dp;             /* '<S484>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S484>/S-Function1' */
  real_T SFunction1_o8_nj;             /* '<S484>/S-Function1' */
  real_T SFunction1_o9_ft;             /* '<S484>/S-Function1' */
  real_T SFunction1_o10_fb;            /* '<S484>/S-Function1' */
  real_T SFunction1_o11_h;             /* '<S484>/S-Function1' */
  real_T SFunction1_o1_cj;             /* '<S482>/S-Function1' */
  real_T SFunction1_o2_gf;             /* '<S482>/S-Function1' */
  real_T SFunction1_o3_bn;             /* '<S482>/S-Function1' */
  real_T SFunction1_o4_ey;             /* '<S482>/S-Function1' */
  real_T SFunction1_o5_os;             /* '<S482>/S-Function1' */
  real_T SFunction1_o6_lf;             /* '<S482>/S-Function1' */
  real_T SFunction1_o7_n4;             /* '<S482>/S-Function1' */
  real_T SFunction1_o8_c;              /* '<S482>/S-Function1' */
  real_T SFunction1_o1_du;             /* '<S480>/S-Function1' */
  real_T SFunction1_o2_kv;             /* '<S480>/S-Function1' */
  real_T SFunction1_o3_bf;             /* '<S480>/S-Function1' */
  real_T SFunction1_o4_fr;             /* '<S480>/S-Function1' */
  real_T SFunction1_o5_jg;             /* '<S480>/S-Function1' */
  real_T SFunction1_o6_fw;             /* '<S480>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S480>/S-Function1' */
  real_T SFunction1_o8_gw;             /* '<S480>/S-Function1' */
  real_T SFunction1_o9_k;              /* '<S480>/S-Function1' */
  real_T SFunction1_o10_j4;            /* '<S480>/S-Function1' */
  real_T SFunction1_o11_hg;            /* '<S480>/S-Function1' */
  real_T SFunction1_o12_b;             /* '<S480>/S-Function1' */
  real_T SFunction1_o13_e;             /* '<S480>/S-Function1' */
  real_T SFunction1_o1_os;             /* '<S472>/S-Function1' */
  real_T SFunction1_o2_iaz;            /* '<S472>/S-Function1' */
  real_T SFunction1_o3_h5;             /* '<S472>/S-Function1' */
  real_T SFunction1_o4_fi;             /* '<S472>/S-Function1' */
  real_T SFunction1_o5_jm;             /* '<S472>/S-Function1' */
  real_T SFunction1_o6_mp;             /* '<S472>/S-Function1' */
  real_T SFunction1_o7_b3;             /* '<S472>/S-Function1' */
  real_T SFunction1_o8_fc;             /* '<S472>/S-Function1' */
  real_T SFunction1_o9_ms;             /* '<S472>/S-Function1' */
  real_T SFunction1_o10_o;             /* '<S472>/S-Function1' */
  real_T SFunction1_o11_p;             /* '<S472>/S-Function1' */
  real_T SFunction1_o1_bs;             /* '<S463>/S-Function1' */
  real_T SFunction1_o2_ao;             /* '<S463>/S-Function1' */
  real_T SFunction1_o3_id;             /* '<S463>/S-Function1' */
  real_T SFunction1_o4_d0;             /* '<S463>/S-Function1' */
  real_T SFunction1_o5_nc;             /* '<S463>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S463>/S-Function1' */
  real_T SFunction1_o7_nd;             /* '<S463>/S-Function1' */
  real_T SFunction1_o8_gj;             /* '<S463>/S-Function1' */
  real_T SFunction1_o9_e1;             /* '<S463>/S-Function1' */
  real_T SFunction1_o10_n;             /* '<S463>/S-Function1' */
  real_T SFunction1_o11_pr;            /* '<S463>/S-Function1' */
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
  real_T DataTypeConversion1_av;       /* '<S84>/Data Type Conversion1' */
  real_T Subtract_j0;                  /* '<S84>/Subtract' */
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
  real_T Unit_Delay_k;                 /* '<S334>/Unit_Delay' */
  real_T MinMax_d;                     /* '<S334>/MinMax' */
  real_T Xold_h;                       /* '<S381>/FixPt Unit Delay1' */
  real_T Init_ip;                      /* '<S381>/Init' */
  real_T Abs_e;                        /* '<S377>/Abs' */
  real_T DigitalClock;                 /* '<S378>/Digital Clock' */
  real_T Unit_Delay_d;                 /* '<S378>/Unit_Delay' */
  real_T Subtract_l;                   /* '<S378>/Subtract' */
  real_T Product1_hp;                  /* '<S377>/Product1' */
  real_T Add1_n;                       /* '<S377>/Add1' */
  real_T MinMax2_g;                    /* '<S377>/MinMax2' */
  real_T Abs1_h;                       /* '<S377>/Abs1' */
  real_T Product2_c;                   /* '<S377>/Product2' */
  real_T Subtract1_n;                  /* '<S377>/Subtract1' */
  real_T MinMax1_h;                    /* '<S377>/MinMax1' */
  real_T Unit_Delay_nc;                /* '<S332>/Unit_Delay' */
  real_T MinMax_n;                     /* '<S332>/MinMax' */
  real_T Xold_f;                       /* '<S370>/FixPt Unit Delay1' */
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
  real_T MinMax1_j;                    /* '<S366>/MinMax1' */
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
  real_T Xold_p;                       /* '<S358>/FixPt Unit Delay1' */
  real_T Init_h;                       /* '<S358>/Init' */
  real_T Gain1_c;                      /* '<S344>/Gain1' */
  real_T DigitalClock_f;               /* '<S356>/Digital Clock' */
  real_T Unit_Delay_e;                 /* '<S356>/Unit_Delay' */
  real_T Subtract_b;                   /* '<S356>/Subtract' */
  real_T Product1_a;                   /* '<S353>/Product1' */
  real_T Add_h;                        /* '<S353>/Add' */
  real_T MinMax_aw;                    /* '<S353>/MinMax' */
  real_T LookupTableDynamic;           /* '<S344>/Lookup Table Dynamic' */
  real_T Uk1_k[2];                     /* '<S336>/Delay Input1' */
  real_T Xold_o5;                      /* '<S342>/FixPt Unit Delay1' */
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
  real_T Unit_Delay_bb;                /* '<S335>/Unit_Delay' */
  real_T Subtract_g;                   /* '<S335>/Subtract' */
  real_T MinMax3_n;                    /* '<S337>/MinMax3' */
  real_T Saturation1_e;                /* '<S337>/Saturation1' */
  real_T Divide_e;                     /* '<S337>/Divide' */
  real_T Abs_ma;                       /* '<S338>/Abs' */
  real_T Product1_iv;                  /* '<S338>/Product1' */
  real_T Add1_bf;                      /* '<S338>/Add1' */
  real_T MinMax2_c;                    /* '<S338>/MinMax2' */
  real_T Abs1_f;                       /* '<S338>/Abs1' */
  real_T Product2_m1;                  /* '<S338>/Product2' */
  real_T Subtract1_h2;                 /* '<S338>/Subtract1' */
  real_T MinMax1_p;                    /* '<S338>/MinMax1' */
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
  real_T MinMax1_au;                   /* '<S315>/MinMax1' */
  real_T Saturation_e;                 /* '<S315>/Saturation' */
  real_T Divide_d;                     /* '<S315>/Divide' */
  real_T Product2_fk;                  /* '<S315>/Product2' */
  real_T Subtract1_b;                  /* '<S315>/Subtract1' */
  real_T Unit_Delay2_l;                /* '<S315>/Unit_Delay2' */
  real_T Product1_c;                   /* '<S315>/Product1' */
  real_T Add1_p;                       /* '<S315>/Add1' */
  real_T Sign;                         /* '<S275>/Sign' */
  real_T Product_cf;                   /* '<S275>/Product' */
  real_T MinMax1_e0;                   /* '<S316>/MinMax1' */
  real_T Saturation_o;                 /* '<S316>/Saturation' */
  real_T Divide_j;                     /* '<S316>/Divide' */
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
  real_T DataTypeConversion1_ev;       /* '<S80>/Data Type Conversion1' */
  real_T Conversion;                   /* '<S279>/Conversion' */
  real_T Abs_d;                        /* '<S80>/Abs' */
  real_T SteeringControlPGainErrorBased;/* '<S80>/SteeringControlPGainErrorBased' */
  real_T DataTypeConversion_ku;        /* '<S80>/Data Type Conversion' */
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
  real_T Subtract_o;                   /* '<S299>/Subtract' */
  real_T Abs2_k;                       /* '<S299>/Abs2' */
  real_T RateFeedbackGain;             /* '<S274>/RateFeedbackGain' */
  real_T UndersteerCorrection;         /* '<S274>/UndersteerCorrection' */
  real_T Sum2;                         /* '<S274>/Sum2' */
  real_T Switch1_p;                    /* '<S80>/Switch1' */
  real_T UnitDelay_p;                  /* '<S80>/Unit Delay' */
  real_T Switch2_i1;                   /* '<S80>/Switch2' */
  real_T Xnew;                         /* '<S358>/Reset' */
  real_T Xold_dp;                      /* '<S360>/FixPt Unit Delay1' */
  real_T Init_oa;                      /* '<S360>/Init' */
  real_T Xold_mg;                      /* '<S361>/FixPt Unit Delay1' */
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
  real_T Xold_g;                       /* '<S327>/FixPt Unit Delay1' */
  real_T Init_j;                       /* '<S327>/Init' */
  real_T Abs_a;                        /* '<S324>/Abs' */
  real_T Product1_i3;                  /* '<S324>/Product1' */
  real_T Add1_b0;                      /* '<S324>/Add1' */
  real_T MinMax2_l;                    /* '<S324>/MinMax2' */
  real_T Abs1_e;                       /* '<S324>/Abs1' */
  real_T Product2_k;                   /* '<S324>/Product2' */
  real_T Subtract1_gl;                 /* '<S324>/Subtract1' */
  real_T MinMax1_k;                    /* '<S324>/MinMax1' */
  real_T Subtract_ij;                  /* '<S321>/Subtract' */
  real_T Abs_eu;                       /* '<S321>/Abs' */
  real_T error;                        /* '<S274>/Error Calc' */
  real_T Switch1_m;                    /* '<S288>/Switch1' */
  real_T MultiportSwitch_f;            /* '<S80>/Multiport Switch' */
  real_T rad2deg2;                     /* '<S80>/rad2deg2' */
  real_T DataTypeConversion2_ox;       /* '<S80>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S80>/Data Type Conversion3' */
  real_T Product3;                     /* '<S80>/Product3' */
  real_T deg2rad_d;                    /* '<S80>/deg2rad' */
  real_T Product2_my;                  /* '<S80>/Product2' */
  real_T DataTypeConversion9_h;        /* '<S213>/Data Type Conversion9' */
  real_T DataTypeConversion1_i;        /* '<S213>/Data Type Conversion1' */
  real_T Add_di;                       /* '<S213>/Add' */
  real_T DataTypeConversion2_id;       /* '<S213>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S213>/Data Type Conversion3' */
  real_T DataTypeConversion5_i;        /* '<S217>/Data Type Conversion5' */
  real_T Coeff_of_drag_Cd;             /* '<S224>/1-D Lookup Table' */
  real_T KPH_TO_MS;                    /* '<S224>/KPH_TO_M//S' */
  real_T MathFunction;                 /* '<S224>/Math Function' */
  real_T DataTypeConversion_ik;        /* '<S217>/Data Type Conversion' */
  real_T KPA_TO_PA;                    /* '<S224>/KPA_TO_PA' */
  real_T DataTypeConversion4_b;        /* '<S217>/Data Type Conversion4' */
  real_T Add_o;                        /* '<S224>/Add' */
  real_T Product_n;                    /* '<S224>/Product' */
  real_T Air_density_kgm3;             /* '<S224>/Divide' */
  real_T Aerodynamic_resistance_Ra;    /* '<S224>/Product1' */
  real_T DataTypeConversion6_fq;       /* '<S217>/Data Type Conversion6' */
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
  real_T MinMax1_dx;                   /* '<S261>/MinMax1' */
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
  real_T MinMax1_n;                    /* '<S204>/MinMax1' */
  real_T DataTypeConversion3_m;        /* '<S79>/Data Type Conversion3' */
  real_T ThrottlePID_Y_c;              /* '<S79>/Product' */
  real_T Unit_Delay_dl;                /* '<S178>/Unit_Delay' */
  real_T Xold_e;                       /* '<S192>/FixPt Unit Delay1' */
  real_T Init_br;                      /* '<S192>/Init' */
  real_T Abs_gb;                       /* '<S188>/Abs' */
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
  real_T Saturation_mo;                /* '<S167>/Saturation' */
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
  real_T Unit_Delay_jc;                /* '<S105>/Unit_Delay' */
  real_T Subtract_jr;                  /* '<S105>/Subtract' */
  real_T Xold_g3;                      /* '<S134>/FixPt Unit Delay1' */
  real_T Init_hw;                      /* '<S134>/Init' */
  real_T Abs_l;                        /* '<S130>/Abs' */
  real_T Product1_bi;                  /* '<S130>/Product1' */
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
  real_T Subtract1_pm;                 /* '<S129>/Subtract1' */
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
  uint32_T SFunction1_o1_kx;           /* '<S28>/S-Function1' */
  uint32_T SFunction1_o1_g3j;          /* '<S20>/S-Function1' */
  uint32_T SFunction1_o1_ar;           /* '<S21>/S-Function1' */
  uint32_T SFunction1_o1_h4;           /* '<S18>/S-Function1' */
  uint32_T SFunction1_o1_ma;           /* '<S19>/S-Function1' */
  uint32_T SFunction1_o1_og;           /* '<S17>/S-Function1' */
  uint32_T Reshape[8];                 /* '<S1015>/Reshape' */
  uint32_T UnitDelay_py;               /* '<S1016>/Unit Delay' */
  uint32_T Switch1_a;                  /* '<S1019>/Switch1' */
  uint32_T Selector;                   /* '<S1015>/Selector' */
  uint32_T DataTypeConversion_eh;      /* '<S1007>/Data Type Conversion' */
  uint32_T Operator;                   /* '<S1012>/Operator' */
  uint32_T Operator_d;                 /* '<S1013>/Operator' */
  uint32_T Operator_j;                 /* '<S1014>/Operator' */
  uint32_T DataType_ok;                /* '<S1014>/DataType' */
  uint32_T Shift_Arithmetic1_jd;       /* '<S1007>/Shift_Arithmetic 1' */
  uint32_T Width;                      /* '<S1015>/Width' */
  uint32_T Switch1_n;                  /* '<S1018>/Switch1' */
  uint32_T Subtract_b1;                /* '<S1016>/Subtract' */
  uint32_T UnitDelay_k;                /* '<S1001>/Unit Delay' */
  uint32_T Switch1_fd;                 /* '<S1004>/Switch1' */
  uint32_T DataTypeConversion6_g;      /* '<S996>/Data Type Conversion6' */
  uint32_T Shift_Arithmetic5;          /* '<S996>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion7_p;      /* '<S996>/Data Type Conversion7' */
  uint32_T Shift_Arithmetic6;          /* '<S996>/Shift_Arithmetic 6' */
  uint32_T DataTypeConversion8_m;      /* '<S996>/Data Type Conversion8' */
  uint32_T Shift_Arithmetic7;          /* '<S996>/Shift_Arithmetic 7' */
  uint32_T DataTypeConversion9_e;      /* '<S996>/Data Type Conversion9' */
  uint32_T Shift_Arithmetic8;          /* '<S996>/Shift_Arithmetic 8' */
  uint32_T DataTypeConversion10_n;     /* '<S996>/Data Type Conversion10' */
  uint32_T Shift_Arithmetic9;          /* '<S996>/Shift_Arithmetic 9' */
  uint32_T DataTypeConversion11_e;     /* '<S996>/Data Type Conversion11' */
  uint32_T BitwiseOperator17;          /* '<S996>/Bitwise Operator17' */
  uint32_T DataTypeConversion7_d;      /* '<S997>/Data Type Conversion7' */
  uint32_T BitwiseOperator2;           /* '<S997>/Bitwise Operator2' */
  uint32_T BitwiseOperator3;           /* '<S997>/Bitwise Operator3' */
  uint32_T Shift_Arithmetic3_f;        /* '<S997>/Shift_Arithmetic 3' */
  uint32_T BitwiseOperator4;           /* '<S997>/Bitwise Operator4' */
  uint32_T Shift_Arithmetic4_f;        /* '<S997>/Shift_Arithmetic 4' */
  uint32_T BitwiseOperator5;           /* '<S997>/Bitwise Operator5' */
  uint32_T Shift_Arithmetic5_n;        /* '<S997>/Shift_Arithmetic 5' */
  uint32_T Width_l;                    /* '<S1000>/Width' */
  uint32_T Switch1_ji;                 /* '<S1003>/Switch1' */
  uint32_T Subtract_nd;                /* '<S1001>/Subtract' */
  uint32_T DataTypeConversion2_k;      /* '<S942>/Data Type Conversion2' */
  uint32_T Operator_g;                 /* '<S947>/Operator' */
  uint32_T Operator_e;                 /* '<S948>/Operator' */
  uint32_T Operator_k;                 /* '<S949>/Operator' */
  uint32_T DataType_oi;                /* '<S949>/DataType' */
  uint32_T Shift_Arithmetic1_pm;       /* '<S942>/Shift_Arithmetic 1' */
  uint32_T Operator_b;                 /* '<S950>/Operator' */
  uint32_T DataType_js;                /* '<S950>/DataType' */
  uint32_T Shift_Arithmetic2_oy;       /* '<S942>/Shift_Arithmetic 2' */
  uint32_T UnitDelay_h;                /* '<S973>/Unit Delay' */
  uint32_T Switch1_l;                  /* '<S976>/Switch1' */
  uint32_T DataTypeConversion_by;      /* '<S941>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_f;         /* '<S941>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_n3g;    /* '<S941>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_k;        /* '<S941>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_b4;     /* '<S941>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_fx;       /* '<S941>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_b;      /* '<S941>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_k;        /* '<S941>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_ds;     /* '<S941>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_g;        /* '<S941>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_oq;     /* '<S941>/Data Type Conversion5' */
  uint32_T Operator_c;                 /* '<S946>/Operator' */
  uint32_T DataType_oio;               /* '<S946>/DataType' */
  uint32_T DataTypeConversion3_p0;     /* '<S942>/Data Type Conversion3' */
  uint32_T Operator_ko;                /* '<S951>/Operator' */
  uint32_T Operator_cm;                /* '<S952>/Operator' */
  uint32_T Operator_ed;                /* '<S953>/Operator' */
  uint32_T DataType_i;                 /* '<S953>/DataType' */
  uint32_T Shift_Arithmetic4_n;        /* '<S942>/Shift_Arithmetic 4' */
  uint32_T Operator_b4;                /* '<S954>/Operator' */
  uint32_T DataType_nb;                /* '<S954>/DataType' */
  uint32_T Shift_Arithmetic5_p;        /* '<S942>/Shift_Arithmetic 5' */
  uint32_T Width_lp;                   /* '<S972>/Width' */
  uint32_T Switch1_lm;                 /* '<S975>/Switch1' */
  uint32_T Subtract_ji;                /* '<S973>/Subtract' */
  uint32_T DataTypeConversion_pr;      /* '<S891>/Data Type Conversion' */
  uint32_T Shift_Arithmetic_p;         /* '<S891>/Shift_Arithmetic ' */
  uint32_T DataTypeConversion1_am;     /* '<S891>/Data Type Conversion1' */
  uint32_T Shift_Arithmetic1_e;        /* '<S891>/Shift_Arithmetic 1' */
  uint32_T DataTypeConversion2_fy;     /* '<S891>/Data Type Conversion2' */
  uint32_T Shift_Arithmetic2_be;       /* '<S891>/Shift_Arithmetic 2' */
  uint32_T DataTypeConversion3_eg;     /* '<S891>/Data Type Conversion3' */
  uint32_T Shift_Arithmetic3_pv;       /* '<S891>/Shift_Arithmetic 3' */
  uint32_T DataTypeConversion4_f;      /* '<S891>/Data Type Conversion4' */
  uint32_T Shift_Arithmetic4_o4;       /* '<S891>/Shift_Arithmetic 4' */
  uint32_T DataTypeConversion5_ip;     /* '<S891>/Data Type Conversion5' */
  uint32_T Operator_j1;                /* '<S901>/Operator' */
  uint32_T DataType_p4;                /* '<S901>/DataType' */
  uint32_T DataTypeConversion8_f;      /* '<S890>/Data Type Conversion8' */
  uint32_T Operator_dd;                /* '<S897>/Operator' */
  uint32_T Operator_h;                 /* '<S898>/Operator' */
  uint32_T Operator_kg;                /* '<S899>/Operator' */
  uint32_T DataType_dh;                /* '<S899>/DataType' */
  uint32_T Shift_Arithmetic4_h;        /* '<S890>/Shift_Arithmetic 4' */
  uint32_T Operator_hw;                /* '<S900>/Operator' */
  uint32_T DataType_fo;                /* '<S900>/DataType' */
  uint32_T Shift_Arithmetic5_c;        /* '<S890>/Shift_Arithmetic 5' */
  uint32_T DataTypeConversion_n;       /* '<S713>/Data Type Conversion' */
  uint32_T DataTypeConversion1_ar;     /* '<S713>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_d;      /* '<S713>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1;           /* '<S713>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2;           /* '<S713>/Shift Arithmetic2' */
  uint32_T Operator_hy;                /* '<S715>/Operator' */
  uint32_T DataType_g;                 /* '<S715>/DataType' */
  uint32_T DataTypeConversion_ib;      /* '<S705>/Data Type Conversion' */
  uint32_T DataTypeConversion1_f5;     /* '<S705>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_fb;     /* '<S705>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_i;         /* '<S705>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_j;         /* '<S705>/Shift Arithmetic2' */
  uint32_T Operator_f;                 /* '<S707>/Operator' */
  uint32_T DataType_jy;                /* '<S707>/DataType' */
  uint32_T DataTypeConversion_iu;      /* '<S699>/Data Type Conversion' */
  uint32_T DataTypeConversion1_fs;     /* '<S699>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_hwz;    /* '<S699>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_n;         /* '<S699>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_i;         /* '<S699>/Shift Arithmetic2' */
  uint32_T Operator_m;                 /* '<S700>/Operator' */
  uint32_T DataType_i5;                /* '<S700>/DataType' */
  uint32_T DataTypeConversion_o;       /* '<S694>/Data Type Conversion' */
  uint32_T DataTypeConversion1_e3;     /* '<S694>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_ln;     /* '<S694>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_c;         /* '<S694>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_jc;        /* '<S694>/Shift Arithmetic2' */
  uint32_T Operator_f1;                /* '<S695>/Operator' */
  uint32_T DataType_fd;                /* '<S695>/DataType' */
  uint32_T DataTypeConversion_di;      /* '<S687>/Data Type Conversion' */
  uint32_T DataTypeConversion1_n4;     /* '<S687>/Data Type Conversion1' */
  uint32_T DataTypeConversion2_pl;     /* '<S687>/Data Type Conversion2' */
  uint32_T ShiftArithmetic1_b;         /* '<S687>/Shift Arithmetic1' */
  uint32_T ShiftArithmetic2_m;         /* '<S687>/Shift Arithmetic2' */
  uint32_T Operator_p;                 /* '<S689>/Operator' */
  uint32_T DataType_om;                /* '<S689>/DataType' */
  uint32_T UnitDelay_a;                /* '<S61>/Unit Delay' */
  uint32_T Switch1_h;                  /* '<S64>/Switch1' */
  uint32_T Switch1_b;                  /* '<S63>/Switch1' */
  uint32_T Subtract_fc;                /* '<S61>/Subtract' */
  uint32_T UnitDelay_j;                /* '<S55>/Unit Delay' */
  uint32_T Switch1_k;                  /* '<S58>/Switch1' */
  uint32_T Switch1_lh;                 /* '<S57>/Switch1' */
  uint32_T Subtract_m;                 /* '<S55>/Subtract' */
  uint32_T UnitDelay_l;                /* '<S49>/Unit Delay' */
  uint32_T Switch1_e;                  /* '<S52>/Switch1' */
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
  uint32_T UnitDelay_f;                /* '<S31>/Unit Delay' */
  uint32_T Switch1_o;                  /* '<S34>/Switch1' */
  uint32_T Switch1_az;                 /* '<S33>/Switch1' */
  uint32_T Subtract_ot;                /* '<S31>/Subtract' */
  real32_T PropB_REAX_3_HandwheelTorque;/* '<S654>/Product' */
  real32_T PropB_REAX_3_HandwheelVelocity;/* '<S655>/Product1' */
  real32_T PropB_REAX_3_PullCompensation;/* '<S656>/Product2' */
  real32_T Subtract_oj;                /* '<S637>/Subtract' */
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
  int32_T Merge;                       /* '<S943>/Merge' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback;/* '<S596>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_p;/* '<S432>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback;/* '<S596>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_h;/* '<S432>/Multiport_Switch' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_d;/* '<S594>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMInhibitStatusFeedback_g;/* '<S595>/Data Type Conversion2' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_a;/* '<S594>/Data Type Conversion3' */
  ENUM_XPR_FEEDBACK_T EPBPCMManualStatusFeedback_f;/* '<S595>/Data Type Conversion3' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState;/* '<S614>/Data Type Conversion14' */
  ENUM_XPR_ERROR_STATE_T XPRErrorState_a;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode;/* '<S614>/Data Type Conversion5' */
  ENUM_XPR_CONTROL_MODE_T XPRControlMode_d;/* '<S3>/Unit_Delay' */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActive;/* '<S981>/Multiport Switch' */
  ENUM_SWITCH_T DataTypeConversion_lr; /* '<S98>/Data Type Conversion' */
  ENUM_SWITCH_T DataTypeConversion1_lu;/* '<S98>/Data Type Conversion1' */
  ENUM_SIGNAL_HEALTH_T Pedal_2_pwm_health_state;/* '<S729>/Health State Machine PWM Sensor 2' */
  ENUM_SIGNAL_HEALTH_T Pedal_1_pwm_health_state;/* '<S729>/Health State Machine PWM Sensor 1' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch;/* '<S3>/Unit_Delay' */
  ENUM_J1939_SWITCH_T BrkPedArbBrakeSwitch_c;/* '<S77>/Data Type Conversion3' */
  ENUM_J1939_SWITCH_T DataTypeConversion1_cy;/* '<S203>/Data Type Conversion1' */
  ENUM_J1939_SWITCH_T DataTypeConversion3_l5;/* '<S203>/Data Type Conversion3' */
  ENUM_AUTO_CTRL_VEHICLE_STATE_T VehCtrlState;/* '<S79>/Chart' */
  ENUM_AUTO_CTRL_STATE_T CtrlState;    /* '<S79>/Chart' */
  uint16_T DataTypeConversion_p1;      /* '<S518>/Data Type Conversion' */
  uint16_T DataTypeConversion1_p;      /* '<S518>/Data Type Conversion1' */
  uint16_T ShiftArithmetic;            /* '<S518>/Shift Arithmetic' */
  uint16_T Operator_ef;                /* '<S543>/Operator' */
  uint16_T DataType_l;                 /* '<S543>/DataType' */
  uint16_T DataTypeConversion_pz;      /* '<S512>/Data Type Conversion' */
  uint16_T DataTypeConversion1_fx;     /* '<S512>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_o;          /* '<S512>/Shift Arithmetic' */
  uint16_T Operator_f4;                /* '<S539>/Operator' */
  uint16_T DataType_pz;                /* '<S539>/DataType' */
  uint16_T DataTypeConversion_my;      /* '<S516>/Data Type Conversion' */
  uint16_T DataTypeConversion1_gw;     /* '<S516>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_or;         /* '<S516>/Shift Arithmetic' */
  uint16_T Operator_ka;                /* '<S541>/Operator' */
  uint16_T DataType_a0;                /* '<S541>/DataType' */
  uint16_T DataTypeConversion1_o;      /* '<S517>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_p0w;    /* '<S517>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_b;          /* '<S517>/Shift Arithmetic' */
  uint16_T Operator_da;                /* '<S542>/Operator' */
  uint16_T DataType_b4;                /* '<S542>/DataType' */
  uint16_T DataTypeConversion1_em;     /* '<S520>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_j;      /* '<S520>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_m;          /* '<S520>/Shift Arithmetic' */
  uint16_T Operator_ch;                /* '<S544>/Operator' */
  uint16_T DataType_ce;                /* '<S544>/DataType' */
  uint16_T DataTypeConversion1_hy;     /* '<S526>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_d;      /* '<S526>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_l;          /* '<S526>/Shift Arithmetic' */
  uint16_T Operator_i;                 /* '<S545>/Operator' */
  uint16_T DataType_mr;                /* '<S545>/DataType' */
  uint16_T DataTypeConversion_bc;      /* '<S534>/Data Type Conversion' */
  uint16_T DataTypeConversion1_dm;     /* '<S534>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_d;          /* '<S534>/Shift Arithmetic' */
  uint16_T Operator_eo;                /* '<S548>/Operator' */
  uint16_T DataType_i2;                /* '<S548>/DataType' */
  uint16_T DataTypeConversion1_c3;     /* '<S527>/Data Type Conversion1' */
  uint16_T DataTypeConversion3_c;      /* '<S527>/Data Type Conversion3' */
  uint16_T ShiftArithmetic_di;         /* '<S527>/Shift Arithmetic' */
  uint16_T Operator_jg;                /* '<S546>/Operator' */
  uint16_T DataType_ol;                /* '<S546>/DataType' */
  uint16_T DataTypeConversion_ba;      /* '<S528>/Data Type Conversion' */
  uint16_T DataTypeConversion1_dh;     /* '<S528>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_j;          /* '<S528>/Shift Arithmetic' */
  uint16_T Operator_b3;                /* '<S547>/Operator' */
  uint16_T DataType_jj;                /* '<S547>/DataType' */
  uint16_T SPN1846_EngineDefaultTorqueLimi;/* '<S528>/Data Type Conversion2' */
  uint16_T DataTypeConversion21;       /* '<S404>/Data Type Conversion21' */
  uint16_T DataTypeConversion_iz;      /* '<S536>/Data Type Conversion' */
  uint16_T DataTypeConversion1_cz;     /* '<S536>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_i;          /* '<S536>/Shift Arithmetic' */
  uint16_T Operator_l;                 /* '<S549>/Operator' */
  uint16_T DataType_bh;                /* '<S549>/DataType' */
  uint16_T DataTypeConversion_fw;      /* '<S538>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ij;     /* '<S538>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_i1;         /* '<S538>/Shift Arithmetic' */
  uint16_T Operator_jp;                /* '<S550>/Operator' */
  uint16_T DataType_lu;                /* '<S550>/DataType' */
  uint16_T DataTypeConversion_e3;      /* '<S514>/Data Type Conversion' */
  uint16_T DataTypeConversion1_i5;     /* '<S514>/Data Type Conversion1' */
  uint16_T ShiftArithmetic_k;          /* '<S514>/Shift Arithmetic' */
  uint16_T Operator_cl;                /* '<S540>/Operator' */
  uint16_T DataType_eb;                /* '<S540>/DataType' */
  uint16_T DataTypeConversion1_ky;     /* '<S654>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_e;      /* '<S654>/Data Type Conversion2' */
  uint16_T Shift_Arithmetic1_b;        /* '<S654>/Shift_Arithmetic 1' */
  uint16_T Operator_bw;                /* '<S659>/Operator' */
  uint16_T DataType_o0;                /* '<S659>/DataType' */
  uint16_T DataTypeConversion4_l;      /* '<S655>/Data Type Conversion4' */
  uint16_T DataTypeConversion5_as;     /* '<S655>/Data Type Conversion5' */
  uint16_T Shift_Arithmetic2_m;        /* '<S655>/Shift_Arithmetic 2' */
  uint16_T Operator_kt;                /* '<S660>/Operator' */
  uint16_T DataType_j5;                /* '<S660>/DataType' */
  uint16_T DataTypeConversion7_gs;     /* '<S656>/Data Type Conversion7' */
  uint16_T DataTypeConversion8_j;      /* '<S656>/Data Type Conversion8' */
  uint16_T Shift_Arithmetic3_j;        /* '<S656>/Shift_Arithmetic 3' */
  uint16_T Operator_o;                 /* '<S661>/Operator' */
  uint16_T DataType_hi;                /* '<S661>/DataType' */
  uint16_T DataTypeConversion6_g2;     /* '<S667>/Data Type Conversion6' */
  uint16_T DataTypeConversion7_k;      /* '<S667>/Data Type Conversion7' */
  uint16_T Shift_Arithmetic2_dy;       /* '<S667>/Shift_Arithmetic 2' */
  uint16_T Operator_bg;                /* '<S672>/Operator' */
  uint16_T DataType_gk;                /* '<S672>/DataType' */
  uint16_T DataType_bu;                /* '<S1013>/DataType' */
  uint16_T Shift_Arithmetic_gq;        /* '<S1007>/Shift_Arithmetic ' */
  uint16_T DataType_mz;                /* '<S948>/DataType' */
  uint16_T Shift_Arithmetic_o;         /* '<S942>/Shift_Arithmetic ' */
  uint16_T DataType_nbu;               /* '<S952>/DataType' */
  uint16_T Shift_Arithmetic3_ph;       /* '<S942>/Shift_Arithmetic 3' */
  uint16_T DataType_oza;               /* '<S898>/DataType' */
  uint16_T Shift_Arithmetic3_i;        /* '<S890>/Shift_Arithmetic 3' */
  uint16_T DataTypeConversion1_m;      /* '<S851>/Data Type Conversion1' */
  uint16_T Operator_gj;                /* '<S882>/Operator' */
  uint16_T Operator_g5;                /* '<S883>/Operator' */
  uint16_T DataType_bf;                /* '<S883>/DataType' */
  uint16_T Shift_Arithmetic_a;         /* '<S851>/Shift_Arithmetic ' */
  uint16_T DataTypeConversion_fa;      /* '<S710>/Data Type Conversion' */
  uint16_T DataTypeConversion1_bv;     /* '<S710>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_im;        /* '<S710>/Shift Arithmetic2' */
  uint16_T Operator_mk;                /* '<S714>/Operator' */
  uint16_T DataType_ph;                /* '<S714>/DataType' */
  uint16_T DataTypeConversion_cv;      /* '<S703>/Data Type Conversion' */
  uint16_T DataTypeConversion1_ak;     /* '<S703>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_mz;        /* '<S703>/Shift Arithmetic2' */
  uint16_T Operator_k3;                /* '<S706>/Operator' */
  uint16_T DataType_bq;                /* '<S706>/DataType' */
  uint16_T DataTypeConversion_mb;      /* '<S685>/Data Type Conversion' */
  uint16_T DataTypeConversion1_gc;     /* '<S685>/Data Type Conversion1' */
  uint16_T ShiftArithmetic2_h;         /* '<S685>/Shift Arithmetic2' */
  uint16_T Operator_ml;                /* '<S688>/Operator' */
  uint16_T DataType_af;                /* '<S688>/DataType' */
  int16_T DataTypeConversion3_jn;      /* '<S654>/Data Type Conversion3' */
  int16_T DataTypeConversion6_m;       /* '<S655>/Data Type Conversion6' */
  int16_T DataTypeConversion9_g;       /* '<S656>/Data Type Conversion9' */
  int16_T DataTypeConversion8_p;       /* '<S667>/Data Type Conversion8' */
  int16_T DataTypeConversion_a0;       /* '<S851>/Data Type Conversion' */
  uint8_T FixPtUnitDelay2;             /* '<S762>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_p;           /* '<S754>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_h;           /* '<S778>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_e;           /* '<S770>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_e3;          /* '<S798>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_m;           /* '<S797>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_k;           /* '<S786>/FixPt Unit Delay2' */
  uint8_T DataTypeConversion_kt;       /* '<S461>/Data Type Conversion' */
  uint8_T DataTypeConversion1_du;      /* '<S461>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_jb;      /* '<S461>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_f;       /* '<S461>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_ii;      /* '<S461>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_b;       /* '<S461>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_l;       /* '<S461>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_o;       /* '<S461>/Data Type Conversion7' */
  uint8_T RawData[8];                  /* '<S407>/Multiport_Switch' */
  uint8_T DataTypeConversion_cg[8];    /* '<S455>/Data Type Conversion' */
  uint8_T DataTypeConversion_be;       /* '<S470>/Data Type Conversion' */
  uint8_T DataTypeConversion1_fq;      /* '<S470>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_p0;      /* '<S470>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_cy;      /* '<S470>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_lt;      /* '<S470>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_hx;      /* '<S470>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_ix;      /* '<S470>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_l;       /* '<S470>/Data Type Conversion7' */
  uint8_T RawData_k[8];                /* '<S408>/Multiport_Switch' */
  uint8_T DataTypeConversion_j[8];     /* '<S456>/Data Type Conversion' */
  uint8_T DataTypeConversion_j3[39];   /* '<S507>/Data Type Conversion' */
  uint8_T DataTypeConversion_kp;       /* '<S635>/Data Type Conversion' */
  uint8_T DataTypeConversion1_oe;      /* '<S635>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_fb3;     /* '<S635>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ee;      /* '<S635>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_i5;      /* '<S635>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_l;       /* '<S635>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_h3;      /* '<S635>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_ki;      /* '<S635>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_d;       /* '<S635>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_eo;      /* '<S635>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_n2;     /* '<S635>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_o;      /* '<S635>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S635>/Data Type Conversion12' */
  uint8_T DataTypeConversion14_i;      /* '<S635>/Data Type Conversion14' */
  uint8_T DataTypeConversion13_k;      /* '<S635>/Data Type Conversion13' */
  uint8_T DataTypeConversion15_b;      /* '<S635>/Data Type Conversion15' */
  uint8_T DataTypeConversion16_k;      /* '<S635>/Data Type Conversion16' */
  uint8_T Add_ew;                      /* '<S635>/Add' */
  uint8_T DataTypeConversion15_o;      /* '<S614>/Data Type Conversion15' */
  uint8_T DataTypeConversion4_p;       /* '<S614>/Data Type Conversion4' */
  uint8_T MABX_Mode_j;                 /* '<S3>/Unit_Delay' */
  uint8_T Encoder_o1[22];              /* '<S393>/Encoder' */
  uint8_T TCPIP_Com_o3[128];           /* '<S387>/TCPIP_Com' */
  uint8_T VectorConcatenate[8];        /* '<S1024>/Vector Concatenate' */
  uint8_T UnitDelay1_e2;               /* '<S825>/Unit Delay1' */
  uint8_T MultiportSwitch_fi[8];       /* '<S825>/Multiport Switch' */
  uint8_T SupervisorMode_i;            /* '<S3>/Unit_Delay' */
  uint8_T DataTypeConversion22;        /* '<S404>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S404>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S404>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S404>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S404>/Data Type Conversion26' */
  uint8_T DataTypeConversion_bs;       /* '<S596>/Data Type Conversion' */
  uint8_T DataTypeConversion1_gx;      /* '<S596>/Data Type Conversion1' */
  uint8_T Add1_a;                      /* '<S635>/Add1' */
  uint8_T DataTypeConversion_nr;       /* '<S569>/Data Type Conversion' */
  uint8_T DataTypeConversion1_dhc;     /* '<S569>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_hr;      /* '<S569>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ku;      /* '<S569>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_d2;      /* '<S569>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_pa;      /* '<S569>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_gr;      /* '<S569>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_gp;      /* '<S569>/Data Type Conversion7' */
  uint8_T DataTypeConversion_jr;       /* '<S570>/Data Type Conversion' */
  uint8_T DataTypeConversion1_j;       /* '<S570>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ol;      /* '<S570>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_gb;      /* '<S570>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_g;       /* '<S570>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_e;       /* '<S570>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_mb;      /* '<S570>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_da;      /* '<S570>/Data Type Conversion7' */
  uint8_T RawData_i[8];                /* '<S430>/Multiport_Switch' */
  uint8_T Operator_ei;                 /* '<S658>/Operator' */
  uint8_T DataType_gr;                 /* '<S658>/DataType' */
  uint8_T Operator_a;                  /* '<S657>/Operator' */
  uint8_T DataType_m2;                 /* '<S657>/DataType' */
  uint8_T PropB_REAX_3_ReqOperatingMode;/* '<S652>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion_g;        /* '<S583>/Data Type Conversion' */
  uint8_T DataTypeConversion1_pw;      /* '<S583>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_ae;      /* '<S583>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_is;      /* '<S583>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_h;       /* '<S583>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_n;       /* '<S583>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_iv;      /* '<S583>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_j;       /* '<S583>/Data Type Conversion7' */
  uint8_T RawData_j[8];                /* '<S431>/Multiport_Switch' */
  uint8_T Operator_ct;                 /* '<S670>/Operator' */
  uint8_T DataType_nn;                 /* '<S670>/DataType' */
  uint8_T Shift_Arithmetic_n;          /* '<S663>/Shift_Arithmetic ' */
  uint8_T Operator_bv;                 /* '<S669>/Operator' */
  uint8_T Operator_lu;                 /* '<S671>/Operator' */
  uint8_T DataType_fh;                 /* '<S671>/DataType' */
  uint8_T Shift_Arithmetic1_ii;        /* '<S663>/Shift_Arithmetic 1' */
  uint8_T PropB_REAX_4_ControlOperatingMo;/* '<S664>/SignalConversion' */
  uint8_T DataTypeConversion3_b2;      /* '<S406>/Data Type Conversion3' */
  uint8_T PropB_REAX_4_SystemMode;     /* '<S665>/SignalConversion' */
  uint8_T DataTypeConversion4_a;       /* '<S406>/Data Type Conversion4' */
  uint8_T State;                       /* '<S825>/Chart' */
  uint8_T TPDT_count;                  /* '<S825>/Chart' */
  uint8_T VectorConcatenate_g[8];      /* '<S1026>/Vector Concatenate' */
  uint8_T VectorConcatenate_e[8];      /* '<S1027>/Vector Concatenate' */
  uint8_T DataType_h0;                 /* '<S1012>/DataType' */
  uint8_T DataTypeConversion3_fj;      /* '<S1007>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_j4;      /* '<S1007>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_l0;      /* '<S1007>/Data Type Conversion2' */
  uint8_T DataTypeConversion_bf;       /* '<S977>/Data Type Conversion' */
  uint8_T Operator_mm;                 /* '<S982>/Operator' */
  uint8_T DataType_ot;                 /* '<S982>/DataType' */
  uint8_T DataTypeConversion2_hy;      /* '<S997>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_d4;      /* '<S997>/Data Type Conversion3' */
  uint8_T BitwiseOperator14;           /* '<S997>/Bitwise Operator14' */
  uint8_T DataTypeConversion4_lj;      /* '<S997>/Data Type Conversion4' */
  uint8_T BitwiseOperator1;            /* '<S997>/Bitwise Operator1' */
  uint8_T Shift_Arithmetic_ea;         /* '<S997>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion12_e;      /* '<S997>/Data Type Conversion12' */
  uint8_T DataTypeConversion6_e;       /* '<S997>/Data Type Conversion6' */
  uint8_T BitwiseOperator17_m;         /* '<S997>/Bitwise Operator17' */
  uint8_T DataTypeConversion11_b;      /* '<S997>/Data Type Conversion11' */
  uint8_T Reshape_f[16];               /* '<S1000>/Reshape' */
  uint8_T Selector_k;                  /* '<S1000>/Selector' */
  uint8_T DataTypeConversion10_a;      /* '<S997>/Data Type Conversion10' */
  uint8_T BitwiseOperator6;            /* '<S997>/Bitwise Operator6' */
  uint8_T DataTypeConversion5_if;      /* '<S997>/Data Type Conversion5' */
  uint8_T DataTypeConversion8_b;       /* '<S997>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_m;       /* '<S997>/Data Type Conversion9' */
  uint8_T Add2_b;                      /* '<S997>/Add2' */
  uint8_T Shift_Arithmetic6_n;         /* '<S997>/Shift_Arithmetic 6' */
  uint8_T Add3_d;                      /* '<S997>/Add3' */
  uint8_T BitwiseOperator8;            /* '<S997>/Bitwise Operator8' */
  uint8_T Shift_Arithmetic7_e;         /* '<S997>/Shift_Arithmetic 7' */
  uint8_T BitwiseOperator7;            /* '<S997>/Bitwise Operator7' */
  uint8_T DataTypeConversion_op;       /* '<S979>/Data Type Conversion' */
  uint8_T Operator_ho;                 /* '<S993>/Operator' */
  uint8_T Operator_if;                 /* '<S988>/Operator' */
  uint8_T DataType_fw;                 /* '<S988>/DataType' */
  uint8_T Operator_i0;                 /* '<S989>/Operator' */
  uint8_T Operator_mt;                 /* '<S990>/Operator' */
  uint8_T Operator_bm;                 /* '<S991>/Operator' */
  uint8_T Operator_fo;                 /* '<S992>/Operator' */
  uint8_T DataTypeConversion_ab;       /* '<S906>/Data Type Conversion' */
  uint8_T Operator_ai;                 /* '<S914>/Operator' */
  uint8_T Operator_ol;                 /* '<S911>/Operator' */
  uint8_T DataType_pe;                 /* '<S911>/DataType' */
  uint8_T Operator_jo;                 /* '<S912>/Operator' */
  uint8_T Operator_i1;                 /* '<S913>/Operator' */
  uint8_T Operator_dr;                 /* '<S915>/Operator' */
  uint8_T Operator_hz;                 /* '<S916>/Operator' */
  uint8_T DataTypeConversion_gx;       /* '<S907>/Data Type Conversion' */
  uint8_T Operator_cs;                 /* '<S922>/Operator' */
  uint8_T Operator_bs;                 /* '<S923>/Operator' */
  uint8_T Operator_dk;                 /* '<S919>/Operator' */
  uint8_T DataType_fx;                 /* '<S919>/DataType' */
  uint8_T Operator_dl;                 /* '<S920>/Operator' */
  uint8_T Operator_ib;                 /* '<S921>/Operator' */
  uint8_T Operator_cp;                 /* '<S924>/Operator' */
  uint8_T DataTypeConversion_fp;       /* '<S910>/Data Type Conversion' */
  uint8_T Switch_e;                    /* '<S944>/Switch' */
  uint8_T DataTypeConversion_f1;       /* '<S942>/Data Type Conversion' */
  uint8_T DataType_an;                 /* '<S947>/DataType' */
  uint8_T DataTypeConversion4_aa;      /* '<S942>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_f;       /* '<S942>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_c;       /* '<S942>/Data Type Conversion6' */
  uint8_T Reshape_e[16];               /* '<S972>/Reshape' */
  uint8_T Selector_g;                  /* '<S972>/Selector' */
  uint8_T DataTypeConversion1_o0;      /* '<S942>/Data Type Conversion1' */
  uint8_T Operator_ju;                 /* '<S955>/Operator' */
  uint8_T DataType_di;                 /* '<S955>/DataType' */
  uint8_T DataType_ao;                 /* '<S951>/DataType' */
  uint8_T DataTypeConversion8_g;       /* '<S942>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_a;       /* '<S942>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_j;      /* '<S942>/Data Type Conversion10' */
  uint8_T Add_g;                       /* '<S942>/Add' */
  uint8_T Shift_Arithmetic6_e;         /* '<S942>/Shift_Arithmetic 6' */
  uint8_T Add1_d3;                     /* '<S942>/Add1' */
  uint8_T Operator_ob;                 /* '<S956>/Operator' */
  uint8_T DataType_k2;                 /* '<S956>/DataType' */
  uint8_T Shift_Arithmetic7_a;         /* '<S942>/Shift_Arithmetic 7' */
  uint8_T Operator_lp;                 /* '<S957>/Operator' */
  uint8_T DataType_dy;                 /* '<S957>/DataType' */
  uint8_T DataTypeConversion_lq;       /* '<S909>/Data Type Conversion' */
  uint8_T Operator_fl;                 /* '<S937>/Operator' */
  uint8_T Operator_eq;                 /* '<S933>/Operator' */
  uint8_T DataType_nnu;                /* '<S933>/DataType' */
  uint8_T Operator_ho2;                /* '<S934>/Operator' */
  uint8_T Operator_mv;                 /* '<S935>/Operator' */
  uint8_T Operator_e5;                 /* '<S936>/Operator' */
  uint8_T Operator_pz;                 /* '<S938>/Operator' */
  uint8_T DataTypeConversion_kb;       /* '<S852>/Data Type Conversion' */
  uint8_T Operator_mt4;                /* '<S884>/Operator' */
  uint8_T DataType_of;                 /* '<S884>/DataType' */
  uint8_T DataTypeConversion2_nh;      /* '<S852>/Data Type Conversion2' */
  uint8_T Operator_gr;                 /* '<S886>/Operator' */
  uint8_T DataType_ds;                 /* '<S886>/DataType' */
  uint8_T Shift_Arithmetic_h;          /* '<S852>/Shift_Arithmetic ' */
  uint8_T DataTypeConversion4_m;       /* '<S852>/Data Type Conversion4' */
  uint8_T Operator_ld;                 /* '<S887>/Operator' */
  uint8_T DataType_e0;                 /* '<S887>/DataType' */
  uint8_T Shift_Arithmetic1_jb;        /* '<S852>/Shift_Arithmetic 1' */
  uint8_T DataTypeConversion5_c;       /* '<S852>/Data Type Conversion5' */
  uint8_T Operator_me;                 /* '<S885>/Operator' */
  uint8_T DataType_e0l;                /* '<S885>/DataType' */
  uint8_T Shift_Arithmetic2_dp;        /* '<S852>/Shift_Arithmetic 2' */
  uint8_T Operator_df;                 /* '<S892>/Operator' */
  uint8_T DataType_jg;                 /* '<S892>/DataType' */
  uint8_T DataTypeConversion1_mu;      /* '<S852>/Data Type Conversion1' */
  uint8_T Operator_eb;                 /* '<S888>/Operator' */
  uint8_T DataType_iy;                 /* '<S888>/DataType' */
  uint8_T DataType_ef;                 /* '<S897>/DataType' */
  uint8_T MessageIDMidLowByte;         /* '<S890>/Data Type Conversion9' */
  uint8_T MessageIDMidHighByte;        /* '<S890>/Data Type Conversion10' */
  uint8_T MessageIDHighByte;           /* '<S890>/Data Type Conversion11' */
  uint8_T DataTypeConversion13_h;      /* '<S890>/Data Type Conversion13' */
  uint8_T Operator_f0;                 /* '<S896>/Operator' */
  uint8_T DataType_jr;                 /* '<S896>/DataType' */
  uint8_T Checksum;                    /* '<S890>/Add' */
  uint8_T Shift_Arithmetic7_ey;        /* '<S890>/Shift_Arithmetic 7' */
  uint8_T Add1_l;                      /* '<S890>/Add1' */
  uint8_T Operator_mn;                 /* '<S895>/Operator' */
  uint8_T DataType_m4;                 /* '<S895>/DataType' */
  uint8_T DataTypeConversion3_lo;      /* '<S852>/Data Type Conversion3' */
  uint8_T Operator_el;                 /* '<S889>/Operator' */
  uint8_T DataType_jng;                /* '<S889>/DataType' */
  uint8_T Shift_Arithmetic3_jy;        /* '<S852>/Shift_Arithmetic 3' */
  uint8_T Operator_bq;                 /* '<S893>/Operator' */
  uint8_T DataType_ja;                 /* '<S893>/DataType' */
  uint8_T DataTypeConversion_mq;       /* '<S847>/Data Type Conversion' */
  uint8_T Operator_k3z;                /* '<S862>/Operator' */
  uint8_T DataType_hz;                 /* '<S862>/DataType' */
  uint8_T Operator_gg;                 /* '<S867>/Operator' */
  uint8_T Operator_cu;                 /* '<S863>/Operator' */
  uint8_T Operator_en;                 /* '<S868>/Operator' */
  uint8_T Operator_id;                 /* '<S869>/Operator' */
  uint8_T Operator_eh;                 /* '<S866>/Operator' */
  uint8_T DataType_gi;                 /* '<S882>/DataType' */
  uint8_T DataTypeConversion2_a3;      /* '<S851>/Data Type Conversion2' */
  uint8_T DataTypeConversion_lu;       /* '<S827>/Data Type Conversion' */
  uint8_T Operator_cc;                 /* '<S832>/Operator' */
  uint8_T Operator_ent;                /* '<S829>/Operator' */
  uint8_T DataType_el;                 /* '<S829>/DataType' */
  uint8_T Operator_i5;                 /* '<S830>/Operator' */
  uint8_T Operator_pe;                 /* '<S831>/Operator' */
  uint8_T Operator_n;                  /* '<S833>/Operator' */
  uint8_T Operator_ij;                 /* '<S834>/Operator' */
  uint8_T DataTypeConversion_p2;       /* '<S828>/Data Type Conversion' */
  uint8_T Operator_hr;                 /* '<S840>/Operator' */
  uint8_T Operator_g2;                 /* '<S837>/Operator' */
  uint8_T DataType_iyu;                /* '<S837>/DataType' */
  uint8_T Operator_fv;                 /* '<S838>/Operator' */
  uint8_T Operator_gp;                 /* '<S839>/Operator' */
  uint8_T Operator_av;                 /* '<S841>/Operator' */
  uint8_T Operator_ms;                 /* '<S842>/Operator' */
  uint8_T FixPtUnitDelay2_d;           /* '<S808>/FixPt Unit Delay2' */
  uint8_T SPN2556_ControlByte;         /* '<S709>/Signal Conversion' */
  uint8_T SPN2558_TotalNumberOfPackets;/* '<S711>/Signal Conversion' */
  uint8_T SPN2559_MaximumNumberOfPackets;/* '<S712>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_j;       /* '<S702>/Signal Conversion' */
  uint8_T SPN2565_TotalNumberOfPackets;/* '<S704>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_d;       /* '<S697>/Signal Conversion' */
  uint8_T SPN2570_ConnectionAbortReason;/* '<S698>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_jy;      /* '<S691>/Signal Conversion' */
  uint8_T SPN2561_NumberOfPacketsThatCanB;/* '<S692>/Signal Conversion' */
  uint8_T SPN2562_NextPacketNumberToBeSen;/* '<S693>/Signal Conversion' */
  uint8_T SPN2556_ControlByte_l;       /* '<S684>/Signal Conversion' */
  uint8_T SPN2568_TotalNumberOfPackets;/* '<S686>/Signal Conversion' */
  uint8_T UnitDelay_lz[17];            /* '<S634>/Unit Delay' */
  uint8_T Data[17];                    /* '<S634>/serialize_tpdt' */
  uint8_T Inport[17];                  /* '<S637>/Inport' */
  uint8_T DataTypeConversion_bq;       /* '<S594>/Data Type Conversion' */
  uint8_T DataTypeConversion_ot;       /* '<S595>/Data Type Conversion' */
  uint8_T DataTypeConversion1_mo;      /* '<S594>/Data Type Conversion1' */
  uint8_T DataTypeConversion1_mt;      /* '<S595>/Data Type Conversion1' */
  uint8_T DataTypeConversion_jj;       /* '<S581>/Data Type Conversion' */
  uint8_T DataTypeConversion1_m1;      /* '<S581>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_dy;      /* '<S581>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_k1;      /* '<S581>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_em;      /* '<S581>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_ie;      /* '<S581>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_hv;      /* '<S581>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_lz;      /* '<S581>/Data Type Conversion7' */
  uint8_T DataTypeConversion_fn;       /* '<S582>/Data Type Conversion' */
  uint8_T DataTypeConversion1_pk;      /* '<S582>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_bm;      /* '<S582>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ff;      /* '<S582>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_h3;      /* '<S582>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_g;       /* '<S582>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_b;       /* '<S582>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_pw;      /* '<S582>/Data Type Conversion7' */
  uint8_T DataTypeConversion_ef;       /* '<S568>/Data Type Conversion' */
  uint8_T DataTypeConversion1_lb;      /* '<S568>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_jg;      /* '<S568>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_p02;     /* '<S568>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_h3u;     /* '<S568>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_nx;      /* '<S568>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_d;       /* '<S568>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_c;       /* '<S568>/Data Type Conversion7' */
  uint8_T UnitDelay_k0[39];            /* '<S506>/Unit Delay' */
  uint8_T Data_b[39];                  /* '<S506>/serialize_tpdt' */
  uint8_T Inport_k[39];                /* '<S509>/Inport' */
  uint8_T DataTypeConversion1_ba;      /* '<S77>/Data Type Conversion1' */
  uint8_T DataTypeConversion5_pw;      /* '<S203>/Data Type Conversion5' */
  uint8_T DataTypeConversion2_ew;      /* '<S98>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_ps;      /* '<S98>/Data Type Conversion3' */
  uint8_T FixPtUnitDelay2_b;           /* '<S381>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_pl;          /* '<S370>/FixPt Unit Delay2' */
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
  uint8_T FixPtUnitDelay2_g;           /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_do;          /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_mf;          /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_op;          /* '<S134>/FixPt Unit Delay2' */
  int8_T DataTypeConversion4_og;       /* '<S666>/Data Type Conversion4' */
  int8_T DataTypeConversion10_k;       /* '<S668>/Data Type Conversion10' */
  int8_T SupervisorMode_b;             /* '<S384>/for_logging7' */
  boolean_T SFunction1_o;              /* '<S720>/S-Function1' */
  boolean_T EStopSwActive;             /* '<S402>/EStopSwActive' */
  boolean_T SFunction1_f;              /* '<S719>/S-Function1' */
  boolean_T Operator_gz;               /* '<S809>/Operator' */
  boolean_T DataType_is;               /* '<S809>/DataType' */
  boolean_T LogicalOperator;           /* '<S727>/Logical Operator' */
  boolean_T SFunction1_c;              /* '<S722>/S-Function1' */
  boolean_T Operator_aw;               /* '<S810>/Operator' */
  boolean_T DataType_g3;               /* '<S810>/DataType' */
  boolean_T AND2;                      /* '<S727>/AND2' */
  boolean_T min_relop;                 /* '<S757>/min_relop' */
  boolean_T max_relop;                 /* '<S757>/max_relop' */
  boolean_T conjunction;               /* '<S757>/conjunction' */
  boolean_T RelationalOperator1;       /* '<S759>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S759>/Relational Operator' */
  boolean_T F_Fault_Soft;              /* '<S745>/Relational Operator9' */
  boolean_T min_relop_b;               /* '<S749>/min_relop' */
  boolean_T max_relop_g;               /* '<S749>/max_relop' */
  boolean_T conjunction_c;             /* '<S749>/conjunction' */
  boolean_T RelationalOperator1_o;     /* '<S751>/Relational Operator1' */
  boolean_T RelationalOperator_i;      /* '<S751>/Relational Operator' */
  boolean_T F_Fault_Soft_n;            /* '<S744>/Relational Operator9' */
  boolean_T LogicalOperator2;          /* '<S729>/Logical Operator2' */
  boolean_T F_Fault_Hard;              /* '<S745>/Relational Operator8' */
  boolean_T F_Fault_Hard_g;            /* '<S744>/Relational Operator8' */
  boolean_T LogicalOperator1;          /* '<S729>/Logical Operator1' */
  boolean_T Compare;                   /* '<S740>/Compare' */
  boolean_T min_relop_n;               /* '<S773>/min_relop' */
  boolean_T max_relop_j;               /* '<S773>/max_relop' */
  boolean_T conjunction_f;             /* '<S773>/conjunction' */
  boolean_T RelationalOperator1_b;     /* '<S775>/Relational Operator1' */
  boolean_T RelationalOperator_o;      /* '<S775>/Relational Operator' */
  boolean_T F_Fault_Soft_m;            /* '<S747>/Relational Operator9' */
  boolean_T min_relop_d;               /* '<S765>/min_relop' */
  boolean_T max_relop_k;               /* '<S765>/max_relop' */
  boolean_T conjunction_g;             /* '<S765>/conjunction' */
  boolean_T RelationalOperator1_j;     /* '<S767>/Relational Operator1' */
  boolean_T RelationalOperator_i5;     /* '<S767>/Relational Operator' */
  boolean_T F_Fault_Soft_l;            /* '<S746>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S729>/Logical Operator4' */
  boolean_T F_Fault_Hard_i;            /* '<S747>/Relational Operator8' */
  boolean_T F_Fault_Hard_c;            /* '<S746>/Relational Operator8' */
  boolean_T LogicalOperator3;          /* '<S729>/Logical Operator3' */
  boolean_T Compare_i;                 /* '<S741>/Compare' */
  boolean_T F_Pedal_pwm_sens_total_failure;/* '<S729>/Logical Operator5' */
  boolean_T Unit_Delay_ba;             /* '<S732>/Unit_Delay' */
  boolean_T Unit_Delay1;               /* '<S799>/Unit_Delay1' */
  boolean_T LogicalOperator_f;         /* '<S799>/Logical Operator' */
  boolean_T Unit_Delay1_p;             /* '<S732>/Unit_Delay1' */
  boolean_T Unit_Delay1_i;             /* '<S800>/Unit_Delay1' */
  boolean_T LogicalOperator_i;         /* '<S800>/Logical Operator' */
  boolean_T Compare_b;                 /* '<S736>/Compare' */
  boolean_T Compare_e;                 /* '<S792>/Compare' */
  boolean_T LogicalOperator7;          /* '<S730>/Logical Operator7' */
  boolean_T Compare_d;                 /* '<S791>/Compare' */
  boolean_T LogicalOperator8;          /* '<S730>/Logical Operator8' */
  boolean_T Compare_a;                 /* '<S790>/Compare' */
  boolean_T LogicalOperator5;          /* '<S730>/Logical Operator5' */
  boolean_T Compare_h;                 /* '<S789>/Compare' */
  boolean_T LogicalOperator6;          /* '<S730>/Logical Operator6' */
  boolean_T Compare_o;                 /* '<S735>/Compare' */
  boolean_T F_Pedal_pwm_sync_fault;    /* '<S734>/Relational Operator' */
  boolean_T min_relop_m;               /* '<S781>/min_relop' */
  boolean_T max_relop_a;               /* '<S781>/max_relop' */
  boolean_T conjunction_i;             /* '<S781>/conjunction' */
  boolean_T RelationalOperator1_f;     /* '<S783>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S783>/Relational Operator' */
  boolean_T F_Fault_Hard_n;            /* '<S748>/Relational Operator8' */
  boolean_T LogicalOperator6_g;        /* '<S726>/Logical Operator6' */
  boolean_T Operator_mma;              /* '<S464>/Operator' */
  boolean_T Operator_aie;              /* '<S681>/Operator' */
  boolean_T Operator_k3v;              /* '<S473>/Operator' */
  boolean_T RX_status;                 /* '<S470>/Data Type Conversion8' */
  boolean_T RX_status_a;               /* '<S408>/Multiport_Switch' */
  boolean_T Operator_m0;               /* '<S508>/Operator' */
  boolean_T LogicalOperator_h;         /* '<S422>/Logical Operator' */
  boolean_T Unit_Delay3;               /* '<S635>/Unit_Delay3' */
  boolean_T Operator_lf;               /* '<S636>/Operator' */
  boolean_T LogicalOperator_hz;        /* '<S445>/Logical Operator' */
  boolean_T RelationalOperator1_m[17]; /* '<S635>/Relational Operator1' */
  boolean_T Compare_c;                 /* '<S639>/Compare' */
  boolean_T LogicalOperator_o;         /* '<S635>/Logical Operator' */
  boolean_T Unit_Delay_kp;             /* '<S635>/Unit_Delay' */
  boolean_T LogicalOperator3_l;        /* '<S641>/Logical Operator3' */
  boolean_T Unit_Delay_h;              /* '<S641>/Unit_Delay' */
  boolean_T LogicalOperator_p;         /* '<S641>/Logical Operator' */
  boolean_T LogicalOperator1_k;        /* '<S641>/Logical Operator1' */
  boolean_T Operator_k1;               /* '<S646>/Operator' */
  boolean_T Operator_jc;               /* '<S645>/Operator' */
  boolean_T Operator_l4;               /* '<S647>/Operator' */
  boolean_T Operator_bt;               /* '<S648>/Operator' */
  boolean_T Operator_fve;              /* '<S649>/Operator' */
  boolean_T Operator_lue;              /* '<S650>/Operator' */
  boolean_T EnablePropB_ReAX_CAN6;     /* '<S452>/OR' */
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
  boolean_T RX_status_i;               /* '<S624>/Data Type Conversion8' */
  boolean_T Operator_l0;               /* '<S1034>/Operator' */
  boolean_T DataType_p3;               /* '<S1034>/DataType' */
  boolean_T UnitDelay2;                /* '<S825>/Unit Delay2' */
  boolean_T UnitDelay3;                /* '<S825>/Unit Delay3' */
  boolean_T Operator_o2;               /* '<S1053>/Operator' */
  boolean_T LogicalOperator2_m;        /* '<S1044>/Logical Operator2' */
  boolean_T AND;                       /* '<S1044>/AND' */
  boolean_T OR;                        /* '<S1044>/OR' */
  boolean_T LogicalOperator4_g;        /* '<S1044>/Logical Operator4' */
  boolean_T LogicalOperator1_f;        /* '<S1044>/Logical Operator1' */
  boolean_T Operator_n3;               /* '<S1052>/Operator' */
  boolean_T LogicalOperator3_p;        /* '<S1044>/Logical Operator3' */
  boolean_T LogicalOperator_g;         /* '<S1042>/Logical Operator' */
  boolean_T RelationalOperator_k;      /* '<S1043>/Relational Operator' */
  boolean_T RelationalOperator1_f5;    /* '<S1043>/Relational Operator1' */
  boolean_T LogicalOperator_j;         /* '<S1043>/Logical Operator' */
  boolean_T Compare_f;                 /* '<S1049>/Compare' */
  boolean_T Compare_iw;                /* '<S1050>/Compare' */
  boolean_T LogicalOperator1_m;        /* '<S1043>/Logical Operator1' */
  boolean_T Neutral;                   /* '<S1043>/Logical Operator2' */
  boolean_T LogicalOperator_op;        /* '<S816>/Logical Operator' */
  boolean_T RX_status_aq;              /* '<S559>/Data Type Conversion8' */
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
  boolean_T RX_status_m;               /* '<S461>/Data Type Conversion8' */
  boolean_T RX_status_f;               /* '<S407>/Multiport_Switch' */
  boolean_T Operator_ib2;              /* '<S465>/Operator' */
  boolean_T Operator_f1k;              /* '<S466>/Operator' */
  boolean_T Operator_cz;               /* '<S467>/Operator' */
  boolean_T Operator_i2;               /* '<S468>/Operator' */
  boolean_T Operator_du;               /* '<S469>/Operator' */
  boolean_T Operator_km;               /* '<S474>/Operator' */
  boolean_T Operator_kb;               /* '<S475>/Operator' */
  boolean_T Operator_oj;               /* '<S476>/Operator' */
  boolean_T Operator_ce;               /* '<S477>/Operator' */
  boolean_T Operator_b5;               /* '<S478>/Operator' */
  boolean_T RX_status_i1;              /* '<S479>/Data Type Conversion8' */
  boolean_T RX_status_fv;              /* '<S481>/Data Type Conversion8' */
  boolean_T RX_status_c;               /* '<S483>/Data Type Conversion8' */
  boolean_T RX_status_gc;              /* '<S485>/Data Type Conversion8' */
  boolean_T RX_status_d;               /* '<S487>/Data Type Conversion8' */
  boolean_T Bendix_RADAR_Tracks_RX_status;/* '<S489>/Data Type Conversion8' */
  boolean_T RX_status_n;               /* '<S491>/Data Type Conversion8' */
  boolean_T RX_status_fy;              /* '<S493>/Data Type Conversion8' */
  boolean_T RX_status_mo;              /* '<S495>/Switch' */
  boolean_T RX_status_b;               /* '<S498>/Data Type Conversion8' */
  boolean_T RX_status_o;               /* '<S500>/Data Type Conversion8' */
  boolean_T RX_status_h;               /* '<S502>/Data Type Conversion8' */
  boolean_T RX_status_ci;              /* '<S504>/Data Type Conversion8' */
  boolean_T RX_status_ah;              /* '<S551>/Data Type Conversion8' */
  boolean_T RX_status_nd;              /* '<S553>/Data Type Conversion8' */
  boolean_T RX_status_k;               /* '<S555>/Data Type Conversion8' */
  boolean_T RX_status_ke;              /* '<S557>/Data Type Conversion8' */
  boolean_T RX_status_j;               /* '<S559>/Switch' */
  boolean_T RX_status_e;               /* '<S562>/Data Type Conversion8' */
  boolean_T RX_status_on;              /* '<S429>/Switch' */
  boolean_T Operator_f2;               /* '<S601>/Operator' */
  boolean_T Operator_jgw;              /* '<S602>/Operator' */
  boolean_T Operator_jx;               /* '<S603>/Operator' */
  boolean_T RX_status_n2;              /* '<S596>/Data Type Conversion8' */
  boolean_T RX_status_i1p;             /* '<S432>/Multiport_Switch' */
  boolean_T Operator_ly;               /* '<S604>/Operator' */
  boolean_T Operator_ng;               /* '<S605>/Operator' */
  boolean_T Operator_ip;               /* '<S606>/Operator' */
  boolean_T RX_status_oq;              /* '<S607>/Data Type Conversion2' */
  boolean_T RX_status_gr;              /* '<S607>/Data Type Conversion5' */
  boolean_T RX_status_ab;              /* '<S607>/Data Type Conversion8' */
  boolean_T RX_status_oql;             /* '<S611>/Switch' */
  boolean_T RX_status_in;              /* '<S614>/Data Type Conversion8' */
  boolean_T RX_status_cc;              /* '<S616>/Data Type Conversion8' */
  boolean_T RX_status_g4;              /* '<S618>/Data Type Conversion8' */
  boolean_T RX_status_m0;              /* '<S620>/Data Type Conversion8' */
  boolean_T RX_status_ec;              /* '<S622>/Data Type Conversion8' */
  boolean_T RX_status_br;              /* '<S626>/Data Type Conversion8' */
  boolean_T RX_status_aby;             /* '<S628>/Data Type Conversion8' */
  boolean_T RX_status_ms;              /* '<S630>/Data Type Conversion8' */
  boolean_T RX_status_ee;              /* '<S632>/Data Type Conversion8' */
  boolean_T RelationalOperator2[17];   /* '<S635>/Relational Operator2' */
  boolean_T Compare_p;                 /* '<S640>/Compare' */
  boolean_T Unit_Delay2_m;             /* '<S635>/Unit_Delay2' */
  boolean_T LogicalOperator1_b;        /* '<S635>/Logical Operator1' */
  boolean_T LogicalOperator2_g;        /* '<S641>/Logical Operator2' */
  boolean_T Unit_Delay1_ps;            /* '<S635>/Unit_Delay1' */
  boolean_T LogicalOperator3_b;        /* '<S642>/Logical Operator3' */
  boolean_T Unit_Delay_i;              /* '<S642>/Unit_Delay' */
  boolean_T LogicalOperator_oz;        /* '<S642>/Logical Operator' */
  boolean_T LogicalOperator1_l;        /* '<S642>/Logical Operator1' */
  boolean_T LogicalOperator2_e;        /* '<S642>/Logical Operator2' */
  boolean_T Operator_jl;               /* '<S679>/Operator' */
  boolean_T Operator_kx;               /* '<S682>/Operator' */
  boolean_T Operator_oh;               /* '<S680>/Operator' */
  boolean_T Operator_kq;               /* '<S678>/Operator' */
  boolean_T Operator_i3;               /* '<S575>/Operator' */
  boolean_T Operator_e1;               /* '<S576>/Operator' */
  boolean_T Operator_h4;               /* '<S580>/Operator' */
  boolean_T RX_status_ok;              /* '<S569>/Data Type Conversion8' */
  boolean_T RX_status_nl;              /* '<S570>/Data Type Conversion8' */
  boolean_T RX_status_gd;              /* '<S430>/Multiport_Switch' */
  boolean_T Operator_bx;               /* '<S577>/Operator' */
  boolean_T Operator_oi;               /* '<S578>/Operator' */
  boolean_T Operator_ll;               /* '<S579>/Operator' */
  boolean_T Operator_ibq;              /* '<S588>/Operator' */
  boolean_T Operator_i1m;              /* '<S589>/Operator' */
  boolean_T Operator_lj;               /* '<S593>/Operator' */
  boolean_T PropB_REAX_4_PositionIndexValid;/* '<S663>/Data Type Conversion' */
  boolean_T DataTypeConversion_c5;     /* '<S406>/Data Type Conversion' */
  boolean_T DataType_odd;              /* '<S669>/DataType' */
  boolean_T DataTypeConversion1_og;    /* '<S406>/Data Type Conversion1' */
  boolean_T PropB_REAX_4_DriverControlledEf;/* '<S663>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_nz;    /* '<S406>/Data Type Conversion2' */
  boolean_T RX_status_g1;              /* '<S583>/Data Type Conversion8' */
  boolean_T RX_status_n5;              /* '<S431>/Multiport_Switch' */
  boolean_T Operator_bvn;              /* '<S590>/Operator' */
  boolean_T Operator_or;               /* '<S591>/Operator' */
  boolean_T Operator_f1b;              /* '<S592>/Operator' */
  boolean_T SFunction1_b;              /* '<S721>/S-Function1' */
  boolean_T StartPBActive;             /* '<S402>/StartPBActive' */
  boolean_T F_Fault_Soft_d;            /* '<S748>/Relational Operator9' */
  boolean_T Operator_eu;               /* '<S22>/Operator' */
  boolean_T Operator_msz;              /* '<S26>/Operator' */
  boolean_T Operator_fvew;             /* '<S27>/Operator' */
  boolean_T Operator_bsh;              /* '<S24>/Operator' */
  boolean_T Operator_bw3;              /* '<S25>/Operator' */
  boolean_T Operator_ebm;              /* '<S23>/Operator' */
  boolean_T Unit_Delay_jj;             /* '<S10>/Unit_Delay' */
  boolean_T enTPDT;                    /* '<S825>/Chart' */
  boolean_T enTPCM;                    /* '<S825>/Chart' */
  boolean_T DataTypeConversion6_gq;    /* '<S1006>/Data Type Conversion6' */
  boolean_T TmpRTBAtOperatorInport2;   /* '<S1010>/u2' */
  boolean_T Operator_o1;               /* '<S1010>/Operator' */
  boolean_T DataType_g2;               /* '<S1010>/DataType' */
  boolean_T Unit_Delay_c;              /* '<S1015>/Unit_Delay' */
  boolean_T Operator_b3z;              /* '<S1017>/Operator' */
  boolean_T AutonomousOutputEnabled_g; /* '<S981>/Bus Selector2' */
  boolean_T BrakingControlActive_e;    /* '<S981>/Bus Selector2' */
  boolean_T Unit_Delay_ah;             /* '<S977>/Unit_Delay' */
  boolean_T TmpRTBAtLogicalOperator8Inport1;/* '<S977>/OperatorEnable' */
  boolean_T LogicalOperator8_h;        /* '<S977>/Logical Operator8' */
  boolean_T LogicalOperator7_m;        /* '<S977>/Logical Operator7' */
  boolean_T TmpRTBAtLogicalOperator1Inport2;/* '<S977>/OperatorEnable' */
  boolean_T LogicalOperator1_d;        /* '<S977>/Logical Operator1' */
  boolean_T DataTypeConversion2_es;    /* '<S977>/Data Type Conversion2' */
  boolean_T LogicalOperator_b;         /* '<S977>/Logical Operator' */
  boolean_T Compare_ox;                /* '<S983>/Compare' */
  boolean_T TmpRTBAtUnit_DelayInport1; /* '<S977>/OperatorEnable' */
  boolean_T Unit_Delay_l;              /* '<S1000>/Unit_Delay' */
  boolean_T DataTypeConversion7_go;    /* '<S979>/Data Type Conversion7' */
  boolean_T DataTypeConversion2_a1;    /* '<S979>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_p3;    /* '<S979>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_nc;    /* '<S979>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_bi;    /* '<S979>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_dq;    /* '<S979>/Data Type Conversion6' */
  boolean_T Operator_nl;               /* '<S1002>/Operator' */
  boolean_T DataTypeConversion5_gb;    /* '<S906>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_au;    /* '<S906>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_lm;    /* '<S906>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_bv;    /* '<S906>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_bk;    /* '<S906>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_e;     /* '<S906>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_ns;    /* '<S907>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_k;     /* '<S907>/Data Type Conversion6' */
  boolean_T DataTypeConversion2_ls;    /* '<S907>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_hc;    /* '<S907>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_gx;    /* '<S907>/Data Type Conversion4' */
  boolean_T DataTypeConversion7_p3;    /* '<S907>/Data Type Conversion7' */
  boolean_T Operator_e5y;              /* '<S961>/Operator' */
  boolean_T Operator_MX;               /* '<S970>/Operator_MX' */
  boolean_T Operator_MN;               /* '<S970>/Operator_MN' */
  boolean_T Operator_dv;               /* '<S962>/Operator' */
  boolean_T Operator_ns;               /* '<S963>/Operator' */
  boolean_T Operator_kty;              /* '<S964>/Operator' */
  boolean_T Operator_io;               /* '<S965>/Operator' */
  boolean_T Operator_be;               /* '<S966>/Operator' */
  boolean_T Unit_Delay_p5;             /* '<S972>/Unit_Delay' */
  boolean_T DataTypeConversion6_j;     /* '<S909>/Data Type Conversion6' */
  boolean_T DataTypeConversion1_fj;    /* '<S909>/Data Type Conversion1' */
  boolean_T DataTypeConversion3_cs;    /* '<S909>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_hh;    /* '<S909>/Data Type Conversion4' */
  boolean_T DataTypeConversion5_ck;    /* '<S909>/Data Type Conversion5' */
  boolean_T DataTypeConversion7_jc;    /* '<S909>/Data Type Conversion7' */
  boolean_T LogicalOperator1_c;        /* '<S970>/Logical Operator1' */
  boolean_T LogicalOperator_os;        /* '<S970>/Logical Operator' */
  boolean_T Operator_pi;               /* '<S974>/Operator' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_R;/* '<S852>/F_MessageEnable' */
  boolean_T TmpRTBAtOperatorInport1;   /* '<S870>/u1' */
  boolean_T DataTypeConversion2_p0z;   /* '<S847>/Data Type Conversion2' */
  boolean_T Operator_kob;              /* '<S870>/Operator' */
  boolean_T DataType_kx;               /* '<S870>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_d; /* '<S873>/u1' */
  boolean_T DataTypeConversion5_kb;    /* '<S847>/Data Type Conversion5' */
  boolean_T Operator_kp;               /* '<S873>/Operator' */
  boolean_T DataType_l1;               /* '<S873>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_l; /* '<S864>/u1' */
  boolean_T DataTypeConversion6_a;     /* '<S847>/Data Type Conversion6' */
  boolean_T Operator_au;               /* '<S864>/Operator' */
  boolean_T DataType_hs;               /* '<S864>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_a; /* '<S865>/u1' */
  boolean_T DataTypeConversion7_h;     /* '<S847>/Data Type Conversion7' */
  boolean_T Operator_hl;               /* '<S865>/Operator' */
  boolean_T DataType_jc;               /* '<S865>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_g; /* '<S871>/u1' */
  boolean_T DataTypeConversion3_g2;    /* '<S847>/Data Type Conversion3' */
  boolean_T Operator_mg;               /* '<S871>/Operator' */
  boolean_T DataType_kf;               /* '<S871>/DataType' */
  boolean_T TmpRTBAtOperatorInport1_o; /* '<S872>/u1' */
  boolean_T DataTypeConversion4_k;     /* '<S847>/Data Type Conversion4' */
  boolean_T Operator_pb;               /* '<S872>/Operator' */
  boolean_T DataType_fhi;              /* '<S872>/DataType' */
  boolean_T DataTypeConversion2_mj;    /* '<S853>/Data Type Conversion2' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_P;/* '<S858>/Enable' */
  boolean_T TmpRTBAtHiddenBuf_InsertedFor_b;/* '<S859>/Enable' */
  boolean_T DataTypeConversion2_mm;    /* '<S848>/Data Type Conversion2' */
  boolean_T DataTypeConversion2_oi;    /* '<S849>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_a1;    /* '<S827>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_lg;    /* '<S827>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_hk;    /* '<S827>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_p4;    /* '<S827>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_ct;    /* '<S827>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_bq;    /* '<S827>/Data Type Conversion7' */
  boolean_T DataTypeConversion5_c0;    /* '<S828>/Data Type Conversion5' */
  boolean_T DataTypeConversion2_in;    /* '<S828>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_jx;    /* '<S828>/Data Type Conversion3' */
  boolean_T DataTypeConversion4_mc;    /* '<S828>/Data Type Conversion4' */
  boolean_T DataTypeConversion6_m1;    /* '<S828>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_ly;    /* '<S828>/Data Type Conversion7' */
  boolean_T DiagPassed;                /* '<S811>/Chart' */
  boolean_T Unit_Delay_aw;             /* '<S804>/Unit_Delay' */
  boolean_T LogicalOperator1_b3;       /* '<S804>/Logical Operator1' */
  boolean_T LogicalOperator_hr;        /* '<S804>/Logical Operator' */
  boolean_T Unit_Delay_o;              /* '<S805>/Unit_Delay' */
  boolean_T LogicalOperator1_o;        /* '<S805>/Logical Operator1' */
  boolean_T RelationalOperator1_c;     /* '<S733>/Relational Operator1' */
  boolean_T LogicalOperator3_pt;       /* '<S803>/Logical Operator3' */
  boolean_T Unit_Delay_ez;             /* '<S803>/Unit_Delay' */
  boolean_T LogicalOperator1_mz;       /* '<S803>/Logical Operator1' */
  boolean_T LogicalOperator_jl;        /* '<S803>/Logical Operator' */
  boolean_T LogicalOperator2_h;        /* '<S803>/Logical Operator2' */
  boolean_T min_relop_p;               /* '<S806>/min_relop' */
  boolean_T RX_status_di;              /* '<S634>/serialize_tpdt' */
  boolean_T RX_status_cp;              /* '<S611>/Data Type Conversion8' */
  boolean_T RX_status_be;              /* '<S611>/Data Type Conversion3' */
  boolean_T RX_status_hk;              /* '<S594>/Data Type Conversion8' */
  boolean_T RX_status_iy;              /* '<S595>/Data Type Conversion8' */
  boolean_T RX_status_hq;              /* '<S581>/Data Type Conversion8' */
  boolean_T RX_status_ect;             /* '<S582>/Data Type Conversion8' */
  boolean_T RX_status_fe;              /* '<S568>/Data Type Conversion8' */
  boolean_T RX_status_bc;              /* '<S564>/Data Type Conversion8' */
  boolean_T RX_status_ng;              /* '<S565>/Data Type Conversion8' */
  boolean_T RX_status_id;              /* '<S559>/Data Type Conversion3' */
  boolean_T RX_status_l;               /* '<S506>/serialize_tpdt' */
  boolean_T RX_status_js;              /* '<S495>/Data Type Conversion1' */
  boolean_T CheckHDOP;                 /* '<S382>/CheckHDOP' */
  boolean_T Operator_ns5;              /* '<S95>/Operator' */
  boolean_T AND_l;                     /* '<S76>/AND' */
  boolean_T LogicalOperator_d;         /* '<S83>/Logical Operator' */
  boolean_T f_vspd_geq_than_target_plus_hys;/* '<S103>/Relational Operator' */
  boolean_T f_target_is_stop_thresh;   /* '<S103>/Relational Operator1' */
  boolean_T Compare_eu;                /* '<S199>/Compare' */
  boolean_T RelationalOperator2_p;     /* '<S103>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S103>/Relational Operator3' */
  boolean_T f_vspd_leq_than_hyst_and_target;/* '<S103>/Logical Operator' */
  boolean_T LogicalOperator1_mr;       /* '<S103>/Logical Operator1' */
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
  boolean_T LogicalOperator_k;         /* '<S203>/Logical Operator' */
  boolean_T LogicalOperator_j2;        /* '<S82>/Logical Operator' */
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
  boolean_T Compare_g;                 /* '<S200>/Compare' */
  boolean_T RelationalOperator4_l;     /* '<S103>/Relational Operator4' */
  boolean_T F_Hold_brakes_at_zero_d;   /* '<S103>/Logical Operator3' */
  boolean_T Compare_ey;                /* '<S374>/Compare' */
  boolean_T Compare_j;                 /* '<S371>/Compare' */
  boolean_T Compare_hc;                /* '<S372>/Compare' */
  boolean_T Compare_bp;                /* '<S373>/Compare' */
  boolean_T LogicalOperator2_f;        /* '<S334>/Logical Operator2' */
  boolean_T Unit_Delay_ot;             /* '<S376>/Unit_Delay' */
  boolean_T LogicalOperator1_j;        /* '<S376>/Logical Operator1' */
  boolean_T LogicalOperator_fl;        /* '<S376>/Logical Operator' */
  boolean_T Unit_Delay_jz;             /* '<S377>/Unit_Delay' */
  boolean_T LogicalOperator1_a;        /* '<S377>/Logical Operator1' */
  boolean_T Compare_d3;                /* '<S362>/Compare' */
  boolean_T Compare_dv;                /* '<S363>/Compare' */
  boolean_T LogicalOperator1_g;        /* '<S332>/Logical Operator1' */
  boolean_T Unit_Delay_hz;             /* '<S365>/Unit_Delay' */
  boolean_T LogicalOperator1_jp;       /* '<S365>/Logical Operator1' */
  boolean_T LogicalOperator_kf;        /* '<S365>/Logical Operator' */
  boolean_T Unit_Delay_c4;             /* '<S366>/Unit_Delay' */
  boolean_T LogicalOperator1_l4;       /* '<S366>/Logical Operator1' */
  boolean_T Compare_jr;                /* '<S328>/Compare' */
  boolean_T FixPtRelationalOperator_d[2];/* '<S329>/FixPt Relational Operator' */
  boolean_T LogicalOperator1_ja;       /* '<S81>/Logical Operator1' */
  boolean_T Compare_n[33];             /* '<S348>/Compare' */
  boolean_T f_vspd_output_less_than_zero;/* '<S343>/Logical Operator' */
  boolean_T RelationalOperator_f;      /* '<S343>/Relational Operator' */
  boolean_T LogicalOperator3_o;        /* '<S349>/Logical Operator3' */
  boolean_T Unit_Delay_ag;             /* '<S349>/Unit_Delay' */
  boolean_T LogicalOperator_ob;        /* '<S349>/Logical Operator' */
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
  boolean_T RelationalOperator1_h;     /* '<S344>/Relational Operator1' */
  boolean_T LogicalOperator_da;        /* '<S344>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S344>/Relational Operator2' */
  boolean_T F_set_max_distance_accumulated;/* '<S344>/Logical Operator2' */
  boolean_T RelationalOperator_l;      /* '<S344>/Relational Operator' */
  boolean_T FixPtRelationalOperator_p[2];/* '<S336>/FixPt Relational Operator' */
  boolean_T LogicalOperator_gb;        /* '<S330>/Logical Operator' */
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
  boolean_T RelationalOperator1_cn;    /* '<S205>/Relational Operator1' */
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
  boolean_T LogicalOperator_a;         /* '<S315>/Logical Operator' */
  boolean_T Unit_Delay1_d;             /* '<S316>/Unit_Delay1' */
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
  boolean_T LogicalOperator_bs;        /* '<S291>/Logical Operator' */
  boolean_T LogicalOperator3_oi;       /* '<S291>/Logical Operator3' */
  boolean_T LowerRelop1;               /* '<S290>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S290>/UpperRelop' */
  boolean_T DataTypeConversion_dn;     /* '<S272>/Data Type Conversion' */
  boolean_T RelationalOperator1_gr;    /* '<S293>/Relational Operator1' */
  boolean_T RelationalOperator_oj;     /* '<S293>/Relational Operator' */
  boolean_T RelationalOperator1_p;     /* '<S295>/Relational Operator1' */
  boolean_T RelationalOperator_hy;     /* '<S295>/Relational Operator' */
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
  boolean_T RelationalOperator1_fu;    /* '<S301>/Relational Operator1' */
  boolean_T RelationalOperator_l4;     /* '<S301>/Relational Operator' */
  boolean_T min_relop_k;               /* '<S340>/min_relop' */
  boolean_T LogicalOperator2_gg;       /* '<S349>/Logical Operator2' */
  boolean_T min_relop_c;               /* '<S368>/min_relop' */
  boolean_T min_relop_f;               /* '<S379>/min_relop' */
  boolean_T Unit_Delay_o3;             /* '<S323>/Unit_Delay' */
  boolean_T LogicalOperator1_gw;       /* '<S323>/Logical Operator1' */
  boolean_T LogicalOperator_d2;        /* '<S323>/Logical Operator' */
  boolean_T Unit_Delay_hj;             /* '<S324>/Unit_Delay' */
  boolean_T LogicalOperator1_h;        /* '<S324>/Logical Operator1' */
  boolean_T RelationalOperator1_e;     /* '<S321>/Relational Operator1' */
  boolean_T LogicalOperator3_a;        /* '<S322>/Logical Operator3' */
  boolean_T Unit_Delay_ig;             /* '<S322>/Unit_Delay' */
  boolean_T LogicalOperator1_jo;       /* '<S322>/Logical Operator1' */
  boolean_T LogicalOperator_dm;        /* '<S322>/Logical Operator' */
  boolean_T LogicalOperator2_j;        /* '<S322>/Logical Operator2' */
  boolean_T min_relop_dc;              /* '<S325>/min_relop' */
  boolean_T RelationalOperator1_mf;    /* '<S288>/Relational Operator1' */
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
  boolean_T LogicalOperator1_ob;       /* '<S241>/Logical Operator1' */
  boolean_T Unit_Delay1_dw;            /* '<S261>/Unit_Delay1' */
  boolean_T LogicalOperator_at;        /* '<S261>/Logical Operator' */
  boolean_T Unit_Delay_ne;             /* '<S262>/Unit_Delay' */
  boolean_T LogicalOperator1_kz;       /* '<S262>/Logical Operator1' */
  boolean_T Compare_go;                /* '<S246>/Compare' */
  boolean_T RelationalOperator_a;      /* '<S206>/Relational Operator' */
  boolean_T Compare_pj;                /* '<S245>/Compare' */
  boolean_T min_relop_cb;              /* '<S264>/min_relop' */
  boolean_T RelationalOperator1_ja;    /* '<S267>/Relational Operator1' */
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
  boolean_T Unit_Delay1_iq;            /* '<S129>/Unit_Delay1' */
  boolean_T LogicalOperator_m;         /* '<S129>/Logical Operator' */
  boolean_T Unit_Delay_nl;             /* '<S130>/Unit_Delay' */
  boolean_T LogicalOperator1_mk;       /* '<S130>/Logical Operator1' */
  boolean_T Compare_aa;                /* '<S114>/Compare' */
  boolean_T Compare_jrp;               /* '<S113>/Compare' */
  boolean_T min_relop_ph;              /* '<S132>/min_relop' */
  boolean_T RelationalOperator1_gi;    /* '<S135>/Relational Operator1' */
  boolean_T RelationalOperator_b;      /* '<S135>/Relational Operator' */
  boolean_T Reshape_j[2];              /* '<S60>/Reshape' */
  boolean_T Unit_Delay_mw;             /* '<S60>/Unit_Delay' */
  boolean_T Selector_h;                /* '<S60>/Selector' */
  boolean_T Operator_bgt;              /* '<S62>/Operator' */
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
  B_If_Then_Else_L4_MABX_c_T If_Then_Else_f4;/* '<S1043>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else5;/* '<S1042>/If_Then_Else5' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4;/* '<S1042>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_e;/* '<S1042>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_e;/* '<S1042>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_i_T If_Then_Else_mo;/* '<S981>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_lk;/* '<S980>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ee;/* '<S805>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n;/* '<S800>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_h;/* '<S799>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_j3;/* '<S730>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2_o;/* '<S730>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_g;/* '<S730>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_g;/* '<S730>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_j;/* '<S748>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o;/* '<S783>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_k;/* '<S783>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_h;/* '<S747>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_fn;/* '<S775>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_c;/* '<S775>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_c;/* '<S746>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_j;/* '<S767>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_o;/* '<S767>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3_d;/* '<S745>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_f;/* '<S759>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_j;/* '<S759>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else3;/* '<S744>/If_Then_Else3' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_b;/* '<S751>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_f;/* '<S751>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else2;/* '<S728>/If_Then_Else2' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1;/* '<S728>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_i;/* '<S728>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_c_T If_Then_Else;/* '<S452>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m4;/* '<S377>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_h;/* '<S334>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_ji;/* '<S81>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bf;/* '<S366>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else4_e;/* '<S332>/If_Then_Else4' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gf;/* '<S353>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_jh;/* '<S344>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_og;/* '<S347>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pz;/* '<S338>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_h_T If_Then_Else_mm;/* '<S337>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_n3;/* '<S324>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_lh;/* '<S316>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_mk;/* '<S315>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_b;/* '<S314>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_o0;/* '<S301>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_m0;/* '<S301>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_mf_T If_Then_Else_co;/* '<S299>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_m;/* '<S274>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_m;/* '<S274>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_k;/* '<S295>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_pn;/* '<S295>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_d;/* '<S293>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_p;/* '<S293>/If_Then_Else' */
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
  B_If_Then_Else_L4_MABX_T If_Then_Else1_h;/* '<S218>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ct;/* '<S218>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nr;/* '<S222>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ga;/* '<S197>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ep;/* '<S188>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_o5;/* '<S178>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_il;/* '<S178>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nz;/* '<S181>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else1_mf;/* '<S177>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_k_T If_Then_Else_gj;/* '<S177>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_m_T If_Then_Else_l;/* '<S98>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_gx;/* '<S173>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fo;/* '<S173>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iy;/* '<S168>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bc;/* '<S167>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term_e;/* '<S144>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term_p;/* '<S144>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_bq;/* '<S135>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_nj;/* '<S135>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_bg;/* '<S130>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ly;/* '<S129>/If_Then_Else' */
  B_Calculate_I_term_L4_MABX_T Calculate_I_term;/* '<S106>/Calculate_I_term' */
  B_Calculate_D_term_L4_MABX_T Calculate_D_term;/* '<S106>/Calculate_D_term' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_p;/* '<S90>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_iz;/* '<S90>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_lo;/* '<S89>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_ff;/* '<S89>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else1_l;/* '<S83>/If_Then_Else1' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_oy;/* '<S83>/If_Then_Else' */
  B_If_Then_Else_L4_MABX_T If_Then_Else_fh;/* '<S82>/If_Then_Else' */
} B_L4_MABX_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T FixPtUnitDelay1_DSTATE;       /* '<S762>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_m;     /* '<S754>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a;     /* '<S778>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_my;    /* '<S770>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE;           /* '<S799>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_i;         /* '<S800>/Unit_Delay2' */
  real_T FixPtUnitDelay1_DSTATE_c;     /* '<S798>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_k;     /* '<S797>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_mr;    /* '<S786>/FixPt Unit Delay1' */
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
  real_T Unit_Delay_DSTATE;            /* '<S894>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_d;          /* '<S813>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S808>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_p;          /* '<S637>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_k;          /* '<S509>/Unit_Delay' */
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
  real_T FixPtUnitDelay1_DSTATE_li;    /* '<S358>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_ps;         /* '<S356>/Unit_Delay' */
  real_T DelayInput1_DSTATE_f[2];      /* '<S336>/Delay Input1' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S342>/FixPt Unit Delay1' */
  real_T Unit_Delay_1_DSTATE_j;        /* '<S337>/Unit_Delay' */
  real_T Unit_Delay_2_DSTATE_e;        /* '<S337>/Unit_Delay' */
  real_T Unit_Delay_3_DSTATE_j;        /* '<S337>/Unit_Delay' */
  real_T Unit_Delay_DSTATE_f;          /* '<S335>/Unit_Delay' */
  real_T Unit_Delay2_DSTATE_e;         /* '<S197>/Unit_Delay2' */
  real_T UD_DSTATE;                    /* '<S196>/UD' */
  real_T Unit_Delay2_DSTATE_d;         /* '<S314>/Unit_Delay2' */
  real_T Unit_Delay2_DSTATE_im;        /* '<S315>/Unit_Delay2' */
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
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S360>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_g;     /* '<S361>/FixPt Unit Delay1' */
  real_T Unit_Delay_DSTATE_j;          /* '<S355>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_o;     /* '<S327>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_a0;    /* '<S266>/FixPt Unit Delay1' */
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
  real_T Unit_Delay_DSTATE_dc;         /* '<S105>/Unit_Delay' */
  real_T FixPtUnitDelay1_DSTATE_g1;    /* '<S134>/FixPt Unit Delay1' */
  real_T Unit_Delay2_DSTATE_dy;        /* '<S129>/Unit_Delay2' */
  real_T Unit_Delay_DSTATE_i;          /* '<S104>/Unit_Delay' */
  volatile real_T RateTransition_Buffer0;/* '<S403>/Rate Transition' */
  volatile real_T RateTransition_Buffer1;/* '<S403>/Rate Transition' */
  real_T TmpRTBAtANDInport1_Buffer0;   /* synthesized block */
  real_T Subtract_DWORK1;              /* '<S637>/Subtract' */
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
  void* Assertion_slioAccessor;        /* '<S749>/Assertion' */
  void* Assertion_slioAccessor_i;      /* '<S757>/Assertion' */
  void* Assertion_slioAccessor_j;      /* '<S765>/Assertion' */
  void* Assertion_slioAccessor_e;      /* '<S773>/Assertion' */
  void* Assertion_slioAccessor_p;      /* '<S781>/Assertion' */
  void* Assertion_slioAccessor_jh;     /* '<S806>/Assertion' */
  void* Assertion_slioAccessor_a;      /* '<S278>/Assertion' */
  void* Assertion_slioAccessor_k;      /* '<S283>/Assertion' */
  void* Assertion_slioAccessor_o;      /* '<S340>/Assertion' */
  void* Assertion_slioAccessor_ad;     /* '<S368>/Assertion' */
  void* Assertion_slioAccessor_ax;     /* '<S379>/Assertion' */
  void* Assertion_slioAccessor_n;      /* '<S325>/Assertion' */
  void* Assertion_slioAccessor_eg;     /* '<S264>/Assertion' */
  void* Assertion_slioAccessor_d;      /* '<S190>/Assertion' */
  void* Assertion_slioAccessor_n2;     /* '<S183>/Assertion' */
  void* Assertion_slioAccessor_e5;     /* '<S170>/Assertion' */
  void* Assertion_slioAccessor_b;      /* '<S132>/Assertion' */
  real32_T UnitDelay_DSTATE_d;         /* '<S278>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S283>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_n;         /* '<S1016>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_es;        /* '<S1001>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_a;         /* '<S973>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr;        /* '<S61>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_p;         /* '<S55>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_dr4;       /* '<S43>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_b;         /* '<S37>/Unit Delay' */
  uint32_T UnitDelay_DSTATE_j;         /* '<S31>/Unit Delay' */
  ENUM_J1939_SWITCH_T Unit_Delay_34_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_CONTROL_MODE_T Unit_Delay_125_DSTATE;/* '<S3>/Unit_Delay' */
  ENUM_XPR_ERROR_STATE_T Unit_Delay_126_DSTATE;/* '<S3>/Unit_Delay' */
  int32_T clockTickCounter;            /* '<S385>/Heartbeat' */
  int32_T clockTickCounter_j;          /* '<S1044>/Flash' */
  uint32_T Add_DWORK1;                 /* '<S635>/Add' */
  uint32_T Subtract_DWORK1_g;          /* '<S1016>/Subtract' */
  uint32_T Add2_DWORK1;                /* '<S997>/Add2' */
  uint32_T temporalCounter_i1;         /* '<S205>/Relay_control_state_machine' */
  uint32_T Subtract_DWORK1_o;          /* '<S61>/Subtract' */
  int_T dsa_tcpip_setup_IWORK;         /* '<S386>/dsa_tcpip_setup' */
  int_T SFunction1_IWORK[2];           /* '<S446>/S-Function1' */
  int_T SFunction1_IWORK_o[2];         /* '<S447>/S-Function1' */
  int_T SFunction1_IWORK_h[2];         /* '<S448>/S-Function1' */
  int_T SFunction1_IWORK_i[2];         /* '<S449>/S-Function1' */
  int_T SFunction1_IWORK_g[2];         /* '<S450>/S-Function1' */
  int_T SFunction1_IWORK_oc[2];        /* '<S451>/S-Function1' */
  int_T dsa_tcpip_bkg_sfcn_IWORK;      /* '<S395>/dsa_tcpip_bkg_sfcn' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S762>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S754>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_f;    /* '<S778>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_i;    /* '<S770>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S798>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_d;    /* '<S797>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_fl;   /* '<S786>/FixPt Unit Delay2' */
  uint8_T Unit_Delay_47_DSTATE;        /* '<S3>/Unit_Delay' */
  uint8_T UnitDelay1_DSTATE_o;         /* '<S825>/Unit Delay1' */
  uint8_T Unit_Delay_135_DSTATE;       /* '<S3>/Unit_Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_l;    /* '<S808>/FixPt Unit Delay2' */
  uint8_T UnitDelay_DSTATE_c[17];      /* '<S634>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_hw[39];     /* '<S506>/Unit Delay' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S381>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ip;   /* '<S370>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_fh;   /* '<S358>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S342>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_aw;   /* '<S360>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_g;    /* '<S361>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_ji;   /* '<S327>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gq;   /* '<S266>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_la;   /* '<S192>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_je;   /* '<S185>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o4;   /* '<S172>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_gm;   /* '<S134>/FixPt Unit Delay2' */
  boolean_T Unit_Delay_DSTATE_kp;      /* '<S732>/Unit_Delay' */
  boolean_T Unit_Delay1_DSTATE;        /* '<S799>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_l;      /* '<S732>/Unit_Delay1' */
  boolean_T Unit_Delay1_DSTATE_h;      /* '<S800>/Unit_Delay1' */
  boolean_T Unit_Delay3_DSTATE;        /* '<S635>/Unit_Delay3' */
  boolean_T Unit_Delay_DSTATE_mg;      /* '<S635>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_a;       /* '<S641>/Unit_Delay' */
  boolean_T Unit_Delay_79_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_80_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_81_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T Unit_Delay_45_DSTATE;      /* '<S3>/Unit_Delay' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S391>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S825>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE;         /* '<S825>/Unit Delay3' */
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
  boolean_T Unit_Delay2_DSTATE_o;      /* '<S635>/Unit_Delay2' */
  boolean_T Unit_Delay1_DSTATE_hq;     /* '<S635>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_n;       /* '<S642>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_do;      /* '<S10>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_l;       /* '<S1015>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ki;      /* '<S977>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_px;      /* '<S1000>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ia;      /* '<S972>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_eb;      /* '<S804>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mm;      /* '<S805>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_pn;      /* '<S803>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_cx;      /* '<S376>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_d0;      /* '<S377>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_iy;      /* '<S365>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_mv;      /* '<S366>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ko;      /* '<S349>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_la;      /* '<S338>/Unit_Delay' */
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
  boolean_T Unit_Delay1_DSTATE_h5;     /* '<S261>/Unit_Delay1' */
  boolean_T Unit_Delay_DSTATE_fi;      /* '<S262>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_ae;      /* '<S188>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_or;      /* '<S181>/Unit_Delay' */
  boolean_T Unit_Delay_DSTATE_nw;      /* '<S147>/Unit_Delay' */
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
  uint8_T is_active_c4_SUB_ECU_L4_MABX_HW;/* '<S825>/Chart' */
  uint8_T is_c4_SUB_ECU_L4_MABX_HW_Interf;/* '<S825>/Chart' */
  uint8_T temporalCounter_i1_f;        /* '<S825>/Chart' */
  uint8_T is_active_c5_SUB_ECU_L4_MABX_HW;/* '<S811>/Chart' */
  uint8_T is_c5_SUB_ECU_L4_MABX_HW_Interf;/* '<S811>/Chart' */
  uint8_T is_active_c10_SUB_ECU_L4_MABX_H;/* '<S729>/Health State Machine PWM Sensor 2' */
  uint8_T is_c10_SUB_ECU_L4_MABX_HW_Inter;/* '<S729>/Health State Machine PWM Sensor 2' */
  uint8_T is_FAILURE_DETECTED;         /* '<S729>/Health State Machine PWM Sensor 2' */
  uint8_T is_active_c9_SUB_ECU_L4_MABX_HW;/* '<S729>/Health State Machine PWM Sensor 1' */
  uint8_T is_c9_SUB_ECU_L4_MABX_HW_Interf;/* '<S729>/Health State Machine PWM Sensor 1' */
  uint8_T is_FAILURE_DETECTED_g;       /* '<S729>/Health State Machine PWM Sensor 1' */
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
  boolean_T Slew_at_event_MODE;        /* '<S726>/Slew_at_event' */
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
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE;/* '<S1029>/CAN_TYPE1_TX_M1_C1' */
  ZCSigState CAN_TYPE1_TX_M1_C1_Trig_ZCE_i;/* '<S1028>/CAN_TYPE1_TX_M1_C1' */
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

/* Parameters for system: '<S943>/ALL_CTRL_DISABLED' */
struct P_ALL_CTRL_DISABLED_L4_MABX_T_ {
  int32_T Constant_Value;              /* Expression: typecast(uint32(hex2dec('FFFFFFFF')), 'int32')
                                        * Referenced by: '<S958>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_L4_MABX_T_ {
  uint8_T GLB_SWVERSION_CPV[100];      /* Variable: GLB_SWVERSION_CPV
                                        * Referenced by: '<S1057>/Constant'
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
                                        * Referenced by: '<S903>/FixPt Switch'
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
  real_T CheckStaticLowerBound_min_g;  /* Mask Parameter: CheckStaticLowerBound_min_g
                                        * Referenced by: '<S806>/min_val'
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
  ENUM_SIGNAL_HEALTH_T CompareToConstant_const_a;/* Mask Parameter: CompareToConstant_const_a
                                                  * Referenced by: '<S740>/Constant'
                                                  */
  ENUM_SIGNAL_HEALTH_T CompareToConstant2_const_c;/* Mask Parameter: CompareToConstant2_const_c
                                                   * Referenced by: '<S741>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_p;/* Mask Parameter: CompareToConstant3_const_p
                                                   * Referenced by: '<S736>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant5_const;/* Mask Parameter: CompareToConstant5_const
                                                 * Referenced by: '<S792>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant4_const;/* Mask Parameter: CompareToConstant4_const
                                                 * Referenced by: '<S791>/Constant'
                                                 */
  ENUM_SIGNAL_HEALTH_T CompareToConstant3_const_j;/* Mask Parameter: CompareToConstant3_const_j
                                                   * Referenced by: '<S790>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_n;/* Mask Parameter: CompareToConstant1_const_n
                                                   * Referenced by: '<S789>/Constant'
                                                   */
  ENUM_SIGNAL_HEALTH_T CompareToConstant1_const_f;/* Mask Parameter: CompareToConstant1_const_f
                                                   * Referenced by: '<S735>/Constant'
                                                   */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T CompareToConstant_const_m;/* Mask Parameter: CompareToConstant_const_m
                                                            * Referenced by: '<S983>/Constant'
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
                                               * Referenced by: '<S1015>/Constant'
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
                                        * Referenced by: '<S832>/Operator'
                                        */
  uint8_T Operator_BitMask_c;          /* Mask Parameter: Operator_BitMask_c
                                        * Referenced by: '<S829>/Operator'
                                        */
  uint8_T Operator_BitMask_a;          /* Mask Parameter: Operator_BitMask_a
                                        * Referenced by: '<S830>/Operator'
                                        */
  uint8_T Operator_BitMask_o;          /* Mask Parameter: Operator_BitMask_o
                                        * Referenced by: '<S831>/Operator'
                                        */
  uint8_T Operator_BitMask_p;          /* Mask Parameter: Operator_BitMask_p
                                        * Referenced by: '<S833>/Operator'
                                        */
  uint8_T Operator_BitMask_k;          /* Mask Parameter: Operator_BitMask_k
                                        * Referenced by: '<S834>/Operator'
                                        */
  uint8_T Operator_BitMask_b;          /* Mask Parameter: Operator_BitMask_b
                                        * Referenced by: '<S840>/Operator'
                                        */
  uint8_T Operator_BitMask_ox;         /* Mask Parameter: Operator_BitMask_ox
                                        * Referenced by: '<S837>/Operator'
                                        */
  uint8_T Operator_BitMask_kb;         /* Mask Parameter: Operator_BitMask_kb
                                        * Referenced by: '<S838>/Operator'
                                        */
  uint8_T Operator_BitMask_h;          /* Mask Parameter: Operator_BitMask_h
                                        * Referenced by: '<S839>/Operator'
                                        */
  uint8_T Operator_BitMask_o5;         /* Mask Parameter: Operator_BitMask_o5
                                        * Referenced by: '<S841>/Operator'
                                        */
  uint8_T Operator_BitMask_kf;         /* Mask Parameter: Operator_BitMask_kf
                                        * Referenced by: '<S842>/Operator'
                                        */
  uint8_T Operator_BitMask_j;          /* Mask Parameter: Operator_BitMask_j
                                        * Referenced by: '<S884>/Operator'
                                        */
  uint8_T Operator_BitMask_n;          /* Mask Parameter: Operator_BitMask_n
                                        * Referenced by: '<S886>/Operator'
                                        */
  uint8_T Operator_BitMask_oq;         /* Mask Parameter: Operator_BitMask_oq
                                        * Referenced by: '<S887>/Operator'
                                        */
  uint8_T Operator_BitMask_e;          /* Mask Parameter: Operator_BitMask_e
                                        * Referenced by: '<S885>/Operator'
                                        */
  uint8_T Operator_BitMask_ov;         /* Mask Parameter: Operator_BitMask_ov
                                        * Referenced by: '<S888>/Operator'
                                        */
  uint8_T Operator_BitMask_jb;         /* Mask Parameter: Operator_BitMask_jb
                                        * Referenced by: '<S889>/Operator'
                                        */
  uint8_T Operator_BitMask_a5;         /* Mask Parameter: Operator_BitMask_a5
                                        * Referenced by: '<S862>/Operator'
                                        */
  uint8_T Operator_BitMask_ju;         /* Mask Parameter: Operator_BitMask_ju
                                        * Referenced by: '<S867>/Operator'
                                        */
  uint8_T Operator_BitMask_f;          /* Mask Parameter: Operator_BitMask_f
                                        * Referenced by: '<S863>/Operator'
                                        */
  uint8_T Operator_BitMask_jf;         /* Mask Parameter: Operator_BitMask_jf
                                        * Referenced by: '<S868>/Operator'
                                        */
  uint8_T Operator_BitMask_d;          /* Mask Parameter: Operator_BitMask_d
                                        * Referenced by: '<S869>/Operator'
                                        */
  uint8_T Operator_BitMask_fk;         /* Mask Parameter: Operator_BitMask_fk
                                        * Referenced by: '<S866>/Operator'
                                        */
  uint8_T Operator_BitMask_p4;         /* Mask Parameter: Operator_BitMask_p4
                                        * Referenced by: '<S914>/Operator'
                                        */
  uint8_T Operator_BitMask_k5;         /* Mask Parameter: Operator_BitMask_k5
                                        * Referenced by: '<S911>/Operator'
                                        */
  uint8_T Operator_BitMask_a3;         /* Mask Parameter: Operator_BitMask_a3
                                        * Referenced by: '<S912>/Operator'
                                        */
  uint8_T Operator_BitMask_n5;         /* Mask Parameter: Operator_BitMask_n5
                                        * Referenced by: '<S913>/Operator'
                                        */
  uint8_T Operator_BitMask_l;          /* Mask Parameter: Operator_BitMask_l
                                        * Referenced by: '<S915>/Operator'
                                        */
  uint8_T Operator_BitMask_kw;         /* Mask Parameter: Operator_BitMask_kw
                                        * Referenced by: '<S916>/Operator'
                                        */
  uint8_T Operator_BitMask_jz;         /* Mask Parameter: Operator_BitMask_jz
                                        * Referenced by: '<S922>/Operator'
                                        */
  uint8_T Operator_BitMask_lp;         /* Mask Parameter: Operator_BitMask_lp
                                        * Referenced by: '<S923>/Operator'
                                        */
  uint8_T Operator_BitMask_oy;         /* Mask Parameter: Operator_BitMask_oy
                                        * Referenced by: '<S919>/Operator'
                                        */
  uint8_T Operator_BitMask_fa;         /* Mask Parameter: Operator_BitMask_fa
                                        * Referenced by: '<S920>/Operator'
                                        */
  uint8_T Operator_BitMask_ob;         /* Mask Parameter: Operator_BitMask_ob
                                        * Referenced by: '<S921>/Operator'
                                        */
  uint8_T Operator_BitMask_ck;         /* Mask Parameter: Operator_BitMask_ck
                                        * Referenced by: '<S924>/Operator'
                                        */
  uint8_T Operator_BitMask_i;          /* Mask Parameter: Operator_BitMask_i
                                        * Referenced by: '<S937>/Operator'
                                        */
  uint8_T Operator_BitMask_h1;         /* Mask Parameter: Operator_BitMask_h1
                                        * Referenced by: '<S933>/Operator'
                                        */
  uint8_T Operator_BitMask_ny;         /* Mask Parameter: Operator_BitMask_ny
                                        * Referenced by: '<S934>/Operator'
                                        */
  uint8_T Operator_BitMask_m;          /* Mask Parameter: Operator_BitMask_m
                                        * Referenced by: '<S935>/Operator'
                                        */
  uint8_T Operator_BitMask_mx;         /* Mask Parameter: Operator_BitMask_mx
                                        * Referenced by: '<S936>/Operator'
                                        */
  uint8_T Operator_BitMask_pi;         /* Mask Parameter: Operator_BitMask_pi
                                        * Referenced by: '<S938>/Operator'
                                        */
  uint8_T Operator_BitMask_ec;         /* Mask Parameter: Operator_BitMask_ec
                                        * Referenced by: '<S982>/Operator'
                                        */
  uint8_T BitwiseOperator14_BitMask;   /* Mask Parameter: BitwiseOperator14_BitMask
                                        * Referenced by: '<S997>/Bitwise Operator14'
                                        */
  uint8_T BitwiseOperator1_BitMask;    /* Mask Parameter: BitwiseOperator1_BitMask
                                        * Referenced by: '<S997>/Bitwise Operator1'
                                        */
  uint8_T Operator_BitMask_ce;         /* Mask Parameter: Operator_BitMask_ce
                                        * Referenced by: '<S993>/Operator'
                                        */
  uint8_T Operator_BitMask_g;          /* Mask Parameter: Operator_BitMask_g
                                        * Referenced by: '<S988>/Operator'
                                        */
  uint8_T Operator_BitMask_e3;         /* Mask Parameter: Operator_BitMask_e3
                                        * Referenced by: '<S989>/Operator'
                                        */
  uint8_T Operator_BitMask_mb;         /* Mask Parameter: Operator_BitMask_mb
                                        * Referenced by: '<S990>/Operator'
                                        */
  uint8_T Operator_BitMask_j4;         /* Mask Parameter: Operator_BitMask_j4
                                        * Referenced by: '<S991>/Operator'
                                        */
  uint8_T Operator_BitMask_i5;         /* Mask Parameter: Operator_BitMask_i5
                                        * Referenced by: '<S992>/Operator'
                                        */
  uint8_T Operator_BitMask_mq;         /* Mask Parameter: Operator_BitMask_mq
                                        * Referenced by: '<S809>/Operator'
                                        */
  uint8_T Operator_BitMask_c5;         /* Mask Parameter: Operator_BitMask_c5
                                        * Referenced by: '<S810>/Operator'
                                        */
  uint8_T Operator_BitMask_m2;         /* Mask Parameter: Operator_BitMask_m2
                                        * Referenced by: '<S658>/Operator'
                                        */
  uint8_T Operator_BitMask_do;         /* Mask Parameter: Operator_BitMask_do
                                        * Referenced by: '<S657>/Operator'
                                        */
  uint8_T Operator_BitMask_l4;         /* Mask Parameter: Operator_BitMask_l4
                                        * Referenced by: '<S670>/Operator'
                                        */
  uint8_T Operator_BitMask_fb;         /* Mask Parameter: Operator_BitMask_fb
                                        * Referenced by: '<S669>/Operator'
                                        */
  uint8_T Operator_BitMask_dou;        /* Mask Parameter: Operator_BitMask_dou
                                        * Referenced by: '<S671>/Operator'
                                        */
  uint8_T Repeating_Sequence_Stair_Out_ln[16];/* Mask Parameter: Repeating_Sequence_Stair_Out_ln
                                               * Referenced by: '<S972>/Constant'
                                               */
  uint8_T Repeating_Sequence_Stair_OutV_a[16];/* Mask Parameter: Repeating_Sequence_Stair_OutV_a
                                               * Referenced by: '<S1000>/Constant'
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
  real_T byte1_Y0_c;                   /* Computed Parameter: byte1_Y0_c
                                        * Referenced by: '<S472>/byte1'
                                        */
  real_T byte2_Y0_e;                   /* Computed Parameter: byte2_Y0_e
                                        * Referenced by: '<S472>/byte2'
                                        */
  real_T byte3_Y0_g;                   /* Computed Parameter: byte3_Y0_g
                                        * Referenced by: '<S472>/byte3'
                                        */
  real_T byte4_Y0_l;                   /* Computed Parameter: byte4_Y0_l
                                        * Referenced by: '<S472>/byte4'
                                        */
  real_T byte5_Y0_c;                   /* Computed Parameter: byte5_Y0_c
                                        * Referenced by: '<S472>/byte5'
                                        */
  real_T byte6_Y0_n;                   /* Computed Parameter: byte6_Y0_n
                                        * Referenced by: '<S472>/byte6'
                                        */
  real_T byte7_Y0_l;                   /* Computed Parameter: byte7_Y0_l
                                        * Referenced by: '<S472>/byte7'
                                        */
  real_T byte8_Y0_j;                   /* Computed Parameter: byte8_Y0_j
                                        * Referenced by: '<S472>/byte8'
                                        */
  real_T RXstatus_Y0_g;                /* Computed Parameter: RXstatus_Y0_g
                                        * Referenced by: '<S472>/RX status'
                                        */
  real_T RXtime_Y0_a;                  /* Computed Parameter: RXtime_Y0_a
                                        * Referenced by: '<S472>/RX time'
                                        */
  real_T RXdeltatime_Y0_o;             /* Computed Parameter: RXdeltatime_Y0_o
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
  real_T RXstatus_Y0_k;                /* Computed Parameter: RXstatus_Y0_k
                                        * Referenced by: '<S480>/RX status'
                                        */
  real_T RXtime_Y0_g;                  /* Computed Parameter: RXtime_Y0_g
                                        * Referenced by: '<S480>/RX time'
                                        */
  real_T RXdeltatime_Y0_i;             /* Computed Parameter: RXdeltatime_Y0_i
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
  real_T RXstatus_Y0_p;                /* Computed Parameter: RXstatus_Y0_p
                                        * Referenced by: '<S482>/RX status'
                                        */
  real_T RXtime_Y0_j;                  /* Computed Parameter: RXtime_Y0_j
                                        * Referenced by: '<S482>/RX time'
                                        */
  real_T RXdeltatime_Y0_oj;            /* Computed Parameter: RXdeltatime_Y0_oj
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
  real_T RXstatus_Y0_m;                /* Computed Parameter: RXstatus_Y0_m
                                        * Referenced by: '<S484>/RX status'
                                        */
  real_T RXtime_Y0_e;                  /* Computed Parameter: RXtime_Y0_e
                                        * Referenced by: '<S484>/RX time'
                                        */
  real_T RXdeltatime_Y0_k;             /* Computed Parameter: RXdeltatime_Y0_k
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
  real_T RXstatus_Y0_ku;               /* Computed Parameter: RXstatus_Y0_ku
                                        * Referenced by: '<S486>/RX status'
                                        */
  real_T RXtime_Y0_i;                  /* Computed Parameter: RXtime_Y0_i
                                        * Referenced by: '<S486>/RX time'
                                        */
  real_T RXdeltatime_Y0_l;             /* Computed Parameter: RXdeltatime_Y0_l
                                        * Referenced by: '<S486>/RX delta time'
                                        */
  real_T BrakeAppPressDemanded_Y0;     /* Computed Parameter: BrakeAppPressDemanded_Y0
                                        * Referenced by: '<S488>/BrakeAppPressDemanded'
                                        */
  real_T BrakeSwitch2_Y0;              /* Computed Parameter: BrakeSwitch2_Y0
                                        * Referenced by: '<S488>/BrakeSwitch2'
                                        */
  real_T RXstatus_Y0_km;               /* Computed Parameter: RXstatus_Y0_km
                                        * Referenced by: '<S488>/RX status'
                                        */
  real_T RXtime_Y0_k;                  /* Computed Parameter: RXtime_Y0_k
                                        * Referenced by: '<S488>/RX time'
                                        */
  real_T RXdeltatime_Y0_n;             /* Computed Parameter: RXdeltatime_Y0_n
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
  real_T RXstatus_Y0_n;                /* Computed Parameter: RXstatus_Y0_n
                                        * Referenced by: '<S490>/RX status'
                                        */
  real_T RXtime_Y0_gl;                 /* Computed Parameter: RXtime_Y0_gl
                                        * Referenced by: '<S490>/RX time'
                                        */
  real_T RXdeltatime_Y0_f;             /* Computed Parameter: RXdeltatime_Y0_f
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
  real_T RXstatus_Y0_mk;               /* Computed Parameter: RXstatus_Y0_mk
                                        * Referenced by: '<S492>/RX status'
                                        */
  real_T RXtime_Y0_o;                  /* Computed Parameter: RXtime_Y0_o
                                        * Referenced by: '<S492>/RX time'
                                        */
  real_T RXdeltatime_Y0_ob;            /* Computed Parameter: RXdeltatime_Y0_ob
                                        * Referenced by: '<S492>/RX delta time'
                                        */
  real_T TwoSpeedAxleSwitch_Y0_k;      /* Computed Parameter: TwoSpeedAxleSwitch_Y0_k
                                        * Referenced by: '<S494>/TwoSpeedAxleSwitch'
                                        */
  real_T ParkingBrakeSwitch_Y0_g;      /* Computed Parameter: ParkingBrakeSwitch_Y0_g
                                        * Referenced by: '<S494>/ParkingBrakeSwitch'
                                        */
  real_T CruiseCtrlPauseSwitch_Y0_i;   /* Computed Parameter: CruiseCtrlPauseSwitch_Y0_i
                                        * Referenced by: '<S494>/CruiseCtrlPauseSwitch'
                                        */
  real_T ParkBrakeReleaseInhibitRq_Y0_b;/* Computed Parameter: ParkBrakeReleaseInhibitRq_Y0_b
                                         * Referenced by: '<S494>/ParkBrakeReleaseInhibitRq'
                                         */
  real_T WheelBasedVehicleSpeed_Y0_l;  /* Computed Parameter: WheelBasedVehicleSpeed_Y0_l
                                        * Referenced by: '<S494>/WheelBasedVehicleSpeed'
                                        */
  real_T CruiseCtrlActive_Y0_h;        /* Computed Parameter: CruiseCtrlActive_Y0_h
                                        * Referenced by: '<S494>/CruiseCtrlActive'
                                        */
  real_T CruiseCtrlEnableSwitch_Y0_l;  /* Computed Parameter: CruiseCtrlEnableSwitch_Y0_l
                                        * Referenced by: '<S494>/CruiseCtrlEnableSwitch'
                                        */
  real_T BrakeSwitch_Y0_b;             /* Computed Parameter: BrakeSwitch_Y0_b
                                        * Referenced by: '<S494>/BrakeSwitch'
                                        */
  real_T ClutchSwitch_Y0_b;            /* Computed Parameter: ClutchSwitch_Y0_b
                                        * Referenced by: '<S494>/ClutchSwitch'
                                        */
  real_T CruiseCtrlSetSwitch_Y0_h;     /* Computed Parameter: CruiseCtrlSetSwitch_Y0_h
                                        * Referenced by: '<S494>/CruiseCtrlSetSwitch'
                                        */
  real_T CruiseCtrlCoastSwitch_Y0_n;   /* Computed Parameter: CruiseCtrlCoastSwitch_Y0_n
                                        * Referenced by: '<S494>/CruiseCtrlCoastSwitch'
                                        */
  real_T CruiseCtrlResumeSwitch_Y0_e;  /* Computed Parameter: CruiseCtrlResumeSwitch_Y0_e
                                        * Referenced by: '<S494>/CruiseCtrlResumeSwitch'
                                        */
  real_T CruiseCtrlAccelerateSwitch_Y0_n;/* Computed Parameter: CruiseCtrlAccelerateSwitch_Y0_n
                                          * Referenced by: '<S494>/CruiseCtrlAccelerateSwitch'
                                          */
  real_T CruiseCtrlSetSpeed_Y0_b;      /* Computed Parameter: CruiseCtrlSetSpeed_Y0_b
                                        * Referenced by: '<S494>/CruiseCtrlSetSpeed'
                                        */
  real_T PTOGovernorState_Y0_p;        /* Computed Parameter: PTOGovernorState_Y0_p
                                        * Referenced by: '<S494>/PTOGovernorState'
                                        */
  real_T CruiseCtrlStates_Y0_f;        /* Computed Parameter: CruiseCtrlStates_Y0_f
                                        * Referenced by: '<S494>/CruiseCtrlStates'
                                        */
  real_T EngIdleIncrementSwitch_Y0_j;  /* Computed Parameter: EngIdleIncrementSwitch_Y0_j
                                        * Referenced by: '<S494>/EngIdleIncrementSwitch'
                                        */
  real_T EngIdleDecrementSwitch_Y0_b;  /* Computed Parameter: EngIdleDecrementSwitch_Y0_b
                                        * Referenced by: '<S494>/EngIdleDecrementSwitch'
                                        */
  real_T EngTestModeSwitch_Y0_k;       /* Computed Parameter: EngTestModeSwitch_Y0_k
                                        * Referenced by: '<S494>/EngTestModeSwitch'
                                        */
  real_T EngShutdownOverrideSwitch_Y0_g;/* Computed Parameter: EngShutdownOverrideSwitch_Y0_g
                                         * Referenced by: '<S494>/EngShutdownOverrideSwitch'
                                         */
  real_T RXstatus_Y0_f;                /* Computed Parameter: RXstatus_Y0_f
                                        * Referenced by: '<S494>/RX status'
                                        */
  real_T RXtime_Y0_c;                  /* Computed Parameter: RXtime_Y0_c
                                        * Referenced by: '<S494>/RX time'
                                        */
  real_T RXdeltatime_Y0_p;             /* Computed Parameter: RXdeltatime_Y0_p
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
  real_T RXstatus_Y0_kj;               /* Computed Parameter: RXstatus_Y0_kj
                                        * Referenced by: '<S496>/RX status'
                                        */
  real_T RXtime_Y0_f;                  /* Computed Parameter: RXtime_Y0_f
                                        * Referenced by: '<S496>/RX time'
                                        */
  real_T RXdeltatime_Y0_a;             /* Computed Parameter: RXdeltatime_Y0_a
                                        * Referenced by: '<S496>/RX delta time'
                                        */
  real_T SID_Y0_b;                     /* Computed Parameter: SID_Y0_b
                                        * Referenced by: '<S497>/SID'
                                        */
  real_T COGReference_Y0_a;            /* Computed Parameter: COGReference_Y0_a
                                        * Referenced by: '<S497>/COGReference'
                                        */
  real_T CourseOverGround_Y0_i;        /* Computed Parameter: CourseOverGround_Y0_i
                                        * Referenced by: '<S497>/CourseOverGround'
                                        */
  real_T SpeedOverGround_Y0_b;         /* Computed Parameter: SpeedOverGround_Y0_b
                                        * Referenced by: '<S497>/SpeedOverGround'
                                        */
  real_T RXstatus_Y0_o;                /* Computed Parameter: RXstatus_Y0_o
                                        * Referenced by: '<S497>/RX status'
                                        */
  real_T RXtime_Y0_a4;                 /* Computed Parameter: RXtime_Y0_a4
                                        * Referenced by: '<S497>/RX time'
                                        */
  real_T RXdeltatime_Y0_d;             /* Computed Parameter: RXdeltatime_Y0_d
                                        * Referenced by: '<S497>/RX delta time'
                                        */
  real_T SPN1760_GrossCombinationVehicle;/* Computed Parameter: SPN1760_GrossCombinationVehicle
                                          * Referenced by: '<S499>/SPN1760_GrossCombinationVehicleWeight'
                                          */
  real_T RXstatus_Y0_ka;               /* Computed Parameter: RXstatus_Y0_ka
                                        * Referenced by: '<S499>/RX status'
                                        */
  real_T RXtime_Y0_p;                  /* Computed Parameter: RXtime_Y0_p
                                        * Referenced by: '<S499>/RX time'
                                        */
  real_T RXdeltatime_Y0_e;             /* Computed Parameter: RXdeltatime_Y0_e
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
  real_T RXstatus_Y0_c;                /* Computed Parameter: RXstatus_Y0_c
                                        * Referenced by: '<S501>/RX status'
                                        */
  real_T RXtime_Y0_l;                  /* Computed Parameter: RXtime_Y0_l
                                        * Referenced by: '<S501>/RX time'
                                        */
  real_T RXdeltatime_Y0_fa;            /* Computed Parameter: RXdeltatime_Y0_fa
                                        * Referenced by: '<S501>/RX delta time'
                                        */
  real_T ASREngCtrlActive_Y0_l;        /* Computed Parameter: ASREngCtrlActive_Y0_l
                                        * Referenced by: '<S503>/ASREngCtrlActive'
                                        */
  real_T ASRBrakeCtrlActive_Y0_e;      /* Computed Parameter: ASRBrakeCtrlActive_Y0_e
                                        * Referenced by: '<S503>/ASRBrakeCtrlActive'
                                        */
  real_T AntiLockBrakingActive_Y0_j;   /* Computed Parameter: AntiLockBrakingActive_Y0_j
                                        * Referenced by: '<S503>/AntiLockBrakingActive'
                                        */
  real_T EBSBrakeSwitch_Y0_n;          /* Computed Parameter: EBSBrakeSwitch_Y0_n
                                        * Referenced by: '<S503>/EBSBrakeSwitch'
                                        */
  real_T BrakePedalPos_Y0_e;           /* Computed Parameter: BrakePedalPos_Y0_e
                                        * Referenced by: '<S503>/BrakePedalPos'
                                        */
  real_T ABSOffroadSwitch_Y0_l;        /* Computed Parameter: ABSOffroadSwitch_Y0_l
                                        * Referenced by: '<S503>/ABSOffroadSwitch'
                                        */
  real_T ASROffroadSwitch_Y0_o;        /* Computed Parameter: ASROffroadSwitch_Y0_o
                                        * Referenced by: '<S503>/ASROffroadSwitch'
                                        */
  real_T ASRHillHolderSwitch_Y0_n;     /* Computed Parameter: ASRHillHolderSwitch_Y0_n
                                        * Referenced by: '<S503>/ASRHillHolderSwitch'
                                        */
  real_T TractionCtrlOverrideSwitch_Y0_a;/* Computed Parameter: TractionCtrlOverrideSwitch_Y0_a
                                          * Referenced by: '<S503>/TractionCtrlOverrideSwitch'
                                          */
  real_T AccelInterlockSwitch_Y0_c;    /* Computed Parameter: AccelInterlockSwitch_Y0_c
                                        * Referenced by: '<S503>/AccelInterlockSwitch'
                                        */
  real_T EngDerateSwitch_Y0_f;         /* Computed Parameter: EngDerateSwitch_Y0_f
                                        * Referenced by: '<S503>/EngDerateSwitch'
                                        */
  real_T EngAuxShutdownSwitch_Y0_f;    /* Computed Parameter: EngAuxShutdownSwitch_Y0_f
                                        * Referenced by: '<S503>/EngAuxShutdownSwitch'
                                        */
  real_T RemoteAccelEnableSwitch_Y0_p; /* Computed Parameter: RemoteAccelEnableSwitch_Y0_p
                                        * Referenced by: '<S503>/RemoteAccelEnableSwitch'
                                        */
  real_T EngRetarderSelection_Y0_f;    /* Computed Parameter: EngRetarderSelection_Y0_f
                                        * Referenced by: '<S503>/EngRetarderSelection'
                                        */
  real_T ABSFullyOperational_Y0_n;     /* Computed Parameter: ABSFullyOperational_Y0_n
                                        * Referenced by: '<S503>/ABSFullyOperational'
                                        */
  real_T EBSRedWarningSignal_Y0_o;     /* Computed Parameter: EBSRedWarningSignal_Y0_o
                                        * Referenced by: '<S503>/EBSRedWarningSignal'
                                        */
  real_T ABS_EBSAmberWarningSignal_Y0_f;/* Computed Parameter: ABS_EBSAmberWarningSignal_Y0_f
                                         * Referenced by: '<S503>/ABS_EBSAmberWarningSignal'
                                         */
  real_T ATC_ASRInformationSignal_Y0_o;/* Computed Parameter: ATC_ASRInformationSignal_Y0_o
                                        * Referenced by: '<S503>/ATC_ASRInformationSignal'
                                        */
  real_T SrcAddrssOfCtrllngDvcFrBrkCnt_a;/* Computed Parameter: SrcAddrssOfCtrllngDvcFrBrkCnt_a
                                          * Referenced by: '<S503>/SrcAddrssOfCtrllngDvcFrBrkCntrl'
                                          */
  real_T HaltBrakeSwitch_Y0_b;         /* Computed Parameter: HaltBrakeSwitch_Y0_b
                                        * Referenced by: '<S503>/HaltBrakeSwitch'
                                        */
  real_T TrailerABSStatus_Y0_b;        /* Computed Parameter: TrailerABSStatus_Y0_b
                                        * Referenced by: '<S503>/TrailerABSStatus'
                                        */
  real_T TrctrMntdTrilerABSWarningSign_l;/* Computed Parameter: TrctrMntdTrilerABSWarningSign_l
                                          * Referenced by: '<S503>/TrctrMntdTrilerABSWarningSignal'
                                          */
  real_T RXstatus_Y0_op;               /* Computed Parameter: RXstatus_Y0_op
                                        * Referenced by: '<S503>/RX status'
                                        */
  real_T RXtime_Y0_n;                  /* Computed Parameter: RXtime_Y0_n
                                        * Referenced by: '<S503>/RX time'
                                        */
  real_T RXdeltatime_Y0_iu;            /* Computed Parameter: RXdeltatime_Y0_iu
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
  real_T RXstatus_Y0_a;                /* Computed Parameter: RXstatus_Y0_a
                                        * Referenced by: '<S505>/RX status'
                                        */
  real_T RXtime_Y0_m;                  /* Computed Parameter: RXtime_Y0_m
                                        * Referenced by: '<S505>/RX time'
                                        */
  real_T RXdeltatime_Y0_h;             /* Computed Parameter: RXdeltatime_Y0_h
                                        * Referenced by: '<S505>/RX delta time'
                                        */
  real_T RX_time_Y0;                   /* Computed Parameter: RX_time_Y0
                                        * Referenced by: '<S509>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_k5;/* Expression: 0
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
  real_T RXstatus_Y0_nn;               /* Computed Parameter: RXstatus_Y0_nn
                                        * Referenced by: '<S552>/RX status'
                                        */
  real_T RXtime_Y0_ac;                 /* Computed Parameter: RXtime_Y0_ac
                                        * Referenced by: '<S552>/RX time'
                                        */
  real_T RXdeltatime_Y0_dl;            /* Computed Parameter: RXdeltatime_Y0_dl
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
  real_T RXstatus_Y0_gv;               /* Computed Parameter: RXstatus_Y0_gv
                                        * Referenced by: '<S554>/RX status'
                                        */
  real_T RXtime_Y0_li;                 /* Computed Parameter: RXtime_Y0_li
                                        * Referenced by: '<S554>/RX time'
                                        */
  real_T RXdeltatime_Y0_c;             /* Computed Parameter: RXdeltatime_Y0_c
                                        * Referenced by: '<S554>/RX delta time'
                                        */
  real_T SPN514_NominalFrictionPercentTo;/* Computed Parameter: SPN514_NominalFrictionPercentTo
                                          * Referenced by: '<S556>/SPN514_NominalFrictionPercentTorque'
                                          */
  real_T SPN2978_EstEngParasiticLossesPe;/* Computed Parameter: SPN2978_EstEngParasiticLossesPe
                                          * Referenced by: '<S556>/SPN2978_EstEngParasiticLossesPercentTorque'
                                          */
  real_T RXstatus_Y0_l;                /* Computed Parameter: RXstatus_Y0_l
                                        * Referenced by: '<S556>/RX status'
                                        */
  real_T RXtime_Y0_io;                 /* Computed Parameter: RXtime_Y0_io
                                        * Referenced by: '<S556>/RX time'
                                        */
  real_T RXdeltatime_Y0_g;             /* Computed Parameter: RXdeltatime_Y0_g
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
  real_T RXstatus_Y0_on;               /* Computed Parameter: RXstatus_Y0_on
                                        * Referenced by: '<S558>/RX status'
                                        */
  real_T RXtime_Y0_il;                 /* Computed Parameter: RXtime_Y0_il
                                        * Referenced by: '<S558>/RX time'
                                        */
  real_T RXdeltatime_Y0_gg;            /* Computed Parameter: RXdeltatime_Y0_gg
                                        * Referenced by: '<S558>/RX delta time'
                                        */
  real_T SID_Y0_i;                     /* Computed Parameter: SID_Y0_i
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
  real_T RXstatus_Y0_ln;               /* Computed Parameter: RXstatus_Y0_ln
                                        * Referenced by: '<S560>/RX status'
                                        */
  real_T RXtime_Y0_ot;                 /* Computed Parameter: RXtime_Y0_ot
                                        * Referenced by: '<S560>/RX time'
                                        */
  real_T RXdeltatime_Y0_k0;            /* Computed Parameter: RXdeltatime_Y0_k0
                                        * Referenced by: '<S560>/RX delta time'
                                        */
  real_T SID_Y0_h;                     /* Computed Parameter: SID_Y0_h
                                        * Referenced by: '<S561>/SID'
                                        */
  real_T SetMode_Y0_b;                 /* Computed Parameter: SetMode_Y0_b
                                        * Referenced by: '<S561>/SetMode'
                                        */
  real_T OpMode_Y0_a;                  /* Computed Parameter: OpMode_Y0_a
                                        * Referenced by: '<S561>/OpMode'
                                        */
  real_T HDOP_Y0_c;                    /* Computed Parameter: HDOP_Y0_c
                                        * Referenced by: '<S561>/HDOP_'
                                        */
  real_T VDOP_Y0_g;                    /* Computed Parameter: VDOP_Y0_g
                                        * Referenced by: '<S561>/VDOP'
                                        */
  real_T TDOP_Y0_p;                    /* Computed Parameter: TDOP_Y0_p
                                        * Referenced by: '<S561>/TDOP'
                                        */
  real_T RXstatus_Y0_kjx;              /* Computed Parameter: RXstatus_Y0_kjx
                                        * Referenced by: '<S561>/RX status'
                                        */
  real_T RXtime_Y0_nn;                 /* Computed Parameter: RXtime_Y0_nn
                                        * Referenced by: '<S561>/RX time'
                                        */
  real_T RXdeltatime_Y0_nn;            /* Computed Parameter: RXdeltatime_Y0_nn
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
  real_T RXstatus_Y0_d;                /* Computed Parameter: RXstatus_Y0_d
                                        * Referenced by: '<S563>/RX status'
                                        */
  real_T RXtime_Y0_mk;                 /* Computed Parameter: RXtime_Y0_mk
                                        * Referenced by: '<S563>/RX time'
                                        */
  real_T RXdeltatime_Y0_m;             /* Computed Parameter: RXdeltatime_Y0_m
                                        * Referenced by: '<S563>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelPos;/* Computed Parameter: PropB_REAX_2_ActualHandwheelPos
                                          * Referenced by: '<S566>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos_Y0;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos_Y0
                                          * Referenced by: '<S566>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_cn;               /* Computed Parameter: RXstatus_Y0_cn
                                        * Referenced by: '<S566>/RX status'
                                        */
  real_T RXtime_Y0_kq;                 /* Computed Parameter: RXtime_Y0_kq
                                        * Referenced by: '<S566>/RX time'
                                        */
  real_T RXdeltatime_Y0_mi;            /* Computed Parameter: RXdeltatime_Y0_mi
                                        * Referenced by: '<S566>/RX delta time'
                                        */
  real_T PropB_REAX_2_ActualHandwheelP_n;/* Computed Parameter: PropB_REAX_2_ActualHandwheelP_n
                                          * Referenced by: '<S567>/PropB_REAX_2_ActualHandwheelPos'
                                          */
  real_T PropB_REAX_2_EchoedStrWhlPos__p;/* Computed Parameter: PropB_REAX_2_EchoedStrWhlPos__p
                                          * Referenced by: '<S567>/PropB_REAX_2_EchoedStrWhlPos'
                                          */
  real_T RXstatus_Y0_mq;               /* Computed Parameter: RXstatus_Y0_mq
                                        * Referenced by: '<S567>/RX status'
                                        */
  real_T RXtime_Y0_j3;                 /* Computed Parameter: RXtime_Y0_j3
                                        * Referenced by: '<S567>/RX time'
                                        */
  real_T RXdeltatime_Y0_o4;            /* Computed Parameter: RXdeltatime_Y0_o4
                                        * Referenced by: '<S567>/RX delta time'
                                        */
  real_T byte1_Y0_k;                   /* Computed Parameter: byte1_Y0_k
                                        * Referenced by: '<S572>/byte1'
                                        */
  real_T byte2_Y0_a;                   /* Computed Parameter: byte2_Y0_a
                                        * Referenced by: '<S572>/byte2'
                                        */
  real_T byte3_Y0_a;                   /* Computed Parameter: byte3_Y0_a
                                        * Referenced by: '<S572>/byte3'
                                        */
  real_T byte4_Y0_e;                   /* Computed Parameter: byte4_Y0_e
                                        * Referenced by: '<S572>/byte4'
                                        */
  real_T byte5_Y0_m;                   /* Computed Parameter: byte5_Y0_m
                                        * Referenced by: '<S572>/byte5'
                                        */
  real_T byte6_Y0_nh;                  /* Computed Parameter: byte6_Y0_nh
                                        * Referenced by: '<S572>/byte6'
                                        */
  real_T byte7_Y0_lq;                  /* Computed Parameter: byte7_Y0_lq
                                        * Referenced by: '<S572>/byte7'
                                        */
  real_T byte8_Y0_h;                   /* Computed Parameter: byte8_Y0_h
                                        * Referenced by: '<S572>/byte8'
                                        */
  real_T RXstatus_Y0_lg;               /* Computed Parameter: RXstatus_Y0_lg
                                        * Referenced by: '<S572>/RX status'
                                        */
  real_T RXtime_Y0_fm;                 /* Computed Parameter: RXtime_Y0_fm
                                        * Referenced by: '<S572>/RX time'
                                        */
  real_T RXdeltatime_Y0_kv;            /* Computed Parameter: RXdeltatime_Y0_kv
                                        * Referenced by: '<S572>/RX delta time'
                                        */
  real_T byte1_Y0_p;                   /* Computed Parameter: byte1_Y0_p
                                        * Referenced by: '<S573>/byte1'
                                        */
  real_T byte2_Y0_j;                   /* Computed Parameter: byte2_Y0_j
                                        * Referenced by: '<S573>/byte2'
                                        */
  real_T byte3_Y0_n;                   /* Computed Parameter: byte3_Y0_n
                                        * Referenced by: '<S573>/byte3'
                                        */
  real_T byte4_Y0_o;                   /* Computed Parameter: byte4_Y0_o
                                        * Referenced by: '<S573>/byte4'
                                        */
  real_T byte5_Y0_p;                   /* Computed Parameter: byte5_Y0_p
                                        * Referenced by: '<S573>/byte5'
                                        */
  real_T byte6_Y0_g;                   /* Computed Parameter: byte6_Y0_g
                                        * Referenced by: '<S573>/byte6'
                                        */
  real_T byte7_Y0_k;                   /* Computed Parameter: byte7_Y0_k
                                        * Referenced by: '<S573>/byte7'
                                        */
  real_T byte8_Y0_g;                   /* Computed Parameter: byte8_Y0_g
                                        * Referenced by: '<S573>/byte8'
                                        */
  real_T RXstatus_Y0_af;               /* Computed Parameter: RXstatus_Y0_af
                                        * Referenced by: '<S573>/RX status'
                                        */
  real_T RXtime_Y0_ac2;                /* Computed Parameter: RXtime_Y0_ac2
                                        * Referenced by: '<S573>/RX time'
                                        */
  real_T RXdeltatime_Y0_lp;            /* Computed Parameter: RXdeltatime_Y0_lp
                                        * Referenced by: '<S573>/RX delta time'
                                        */
  real_T byte1_Y0_k5;                  /* Computed Parameter: byte1_Y0_k5
                                        * Referenced by: '<S574>/byte1'
                                        */
  real_T byte2_Y0_jq;                  /* Computed Parameter: byte2_Y0_jq
                                        * Referenced by: '<S574>/byte2'
                                        */
  real_T byte3_Y0_m;                   /* Computed Parameter: byte3_Y0_m
                                        * Referenced by: '<S574>/byte3'
                                        */
  real_T byte4_Y0_b;                   /* Computed Parameter: byte4_Y0_b
                                        * Referenced by: '<S574>/byte4'
                                        */
  real_T byte5_Y0_f;                   /* Computed Parameter: byte5_Y0_f
                                        * Referenced by: '<S574>/byte5'
                                        */
  real_T byte6_Y0_h;                   /* Computed Parameter: byte6_Y0_h
                                        * Referenced by: '<S574>/byte6'
                                        */
  real_T byte7_Y0_i;                   /* Computed Parameter: byte7_Y0_i
                                        * Referenced by: '<S574>/byte7'
                                        */
  real_T byte8_Y0_c;                   /* Computed Parameter: byte8_Y0_c
                                        * Referenced by: '<S574>/byte8'
                                        */
  real_T RXstatus_Y0_b;                /* Computed Parameter: RXstatus_Y0_b
                                        * Referenced by: '<S574>/RX status'
                                        */
  real_T RXtime_Y0_i5;                 /* Computed Parameter: RXtime_Y0_i5
                                        * Referenced by: '<S574>/RX time'
                                        */
  real_T RXdeltatime_Y0_nv;            /* Computed Parameter: RXdeltatime_Y0_nv
                                        * Referenced by: '<S574>/RX delta time'
                                        */
  real_T byte1_Y0_k2;                  /* Computed Parameter: byte1_Y0_k2
                                        * Referenced by: '<S585>/byte1'
                                        */
  real_T byte2_Y0_k;                   /* Computed Parameter: byte2_Y0_k
                                        * Referenced by: '<S585>/byte2'
                                        */
  real_T byte3_Y0_d;                   /* Computed Parameter: byte3_Y0_d
                                        * Referenced by: '<S585>/byte3'
                                        */
  real_T byte4_Y0_n;                   /* Computed Parameter: byte4_Y0_n
                                        * Referenced by: '<S585>/byte4'
                                        */
  real_T byte5_Y0_j;                   /* Computed Parameter: byte5_Y0_j
                                        * Referenced by: '<S585>/byte5'
                                        */
  real_T byte6_Y0_m;                   /* Computed Parameter: byte6_Y0_m
                                        * Referenced by: '<S585>/byte6'
                                        */
  real_T byte7_Y0_kn;                  /* Computed Parameter: byte7_Y0_kn
                                        * Referenced by: '<S585>/byte7'
                                        */
  real_T byte8_Y0_k;                   /* Computed Parameter: byte8_Y0_k
                                        * Referenced by: '<S585>/byte8'
                                        */
  real_T RXstatus_Y0_dy;               /* Computed Parameter: RXstatus_Y0_dy
                                        * Referenced by: '<S585>/RX status'
                                        */
  real_T RXtime_Y0_fn;                 /* Computed Parameter: RXtime_Y0_fn
                                        * Referenced by: '<S585>/RX time'
                                        */
  real_T RXdeltatime_Y0_ds;            /* Computed Parameter: RXdeltatime_Y0_ds
                                        * Referenced by: '<S585>/RX delta time'
                                        */
  real_T byte1_Y0_h;                   /* Computed Parameter: byte1_Y0_h
                                        * Referenced by: '<S586>/byte1'
                                        */
  real_T byte2_Y0_kg;                  /* Computed Parameter: byte2_Y0_kg
                                        * Referenced by: '<S586>/byte2'
                                        */
  real_T byte3_Y0_k;                   /* Computed Parameter: byte3_Y0_k
                                        * Referenced by: '<S586>/byte3'
                                        */
  real_T byte4_Y0_ll;                  /* Computed Parameter: byte4_Y0_ll
                                        * Referenced by: '<S586>/byte4'
                                        */
  real_T byte5_Y0_k;                   /* Computed Parameter: byte5_Y0_k
                                        * Referenced by: '<S586>/byte5'
                                        */
  real_T byte6_Y0_o;                   /* Computed Parameter: byte6_Y0_o
                                        * Referenced by: '<S586>/byte6'
                                        */
  real_T byte7_Y0_a;                   /* Computed Parameter: byte7_Y0_a
                                        * Referenced by: '<S586>/byte7'
                                        */
  real_T byte8_Y0_b;                   /* Computed Parameter: byte8_Y0_b
                                        * Referenced by: '<S586>/byte8'
                                        */
  real_T RXstatus_Y0_gy;               /* Computed Parameter: RXstatus_Y0_gy
                                        * Referenced by: '<S586>/RX status'
                                        */
  real_T RXtime_Y0_d;                  /* Computed Parameter: RXtime_Y0_d
                                        * Referenced by: '<S586>/RX time'
                                        */
  real_T RXdeltatime_Y0_k0w;           /* Computed Parameter: RXdeltatime_Y0_k0w
                                        * Referenced by: '<S586>/RX delta time'
                                        */
  real_T byte1_Y0_i;                   /* Computed Parameter: byte1_Y0_i
                                        * Referenced by: '<S587>/byte1'
                                        */
  real_T byte2_Y0_p;                   /* Computed Parameter: byte2_Y0_p
                                        * Referenced by: '<S587>/byte2'
                                        */
  real_T byte3_Y0_j;                   /* Computed Parameter: byte3_Y0_j
                                        * Referenced by: '<S587>/byte3'
                                        */
  real_T byte4_Y0_k;                   /* Computed Parameter: byte4_Y0_k
                                        * Referenced by: '<S587>/byte4'
                                        */
  real_T byte5_Y0_g;                   /* Computed Parameter: byte5_Y0_g
                                        * Referenced by: '<S587>/byte5'
                                        */
  real_T byte6_Y0_j;                   /* Computed Parameter: byte6_Y0_j
                                        * Referenced by: '<S587>/byte6'
                                        */
  real_T byte7_Y0_at;                  /* Computed Parameter: byte7_Y0_at
                                        * Referenced by: '<S587>/byte7'
                                        */
  real_T byte8_Y0_e;                   /* Computed Parameter: byte8_Y0_e
                                        * Referenced by: '<S587>/byte8'
                                        */
  real_T RXstatus_Y0_fk;               /* Computed Parameter: RXstatus_Y0_fk
                                        * Referenced by: '<S587>/RX status'
                                        */
  real_T RXtime_Y0_pl;                 /* Computed Parameter: RXtime_Y0_pl
                                        * Referenced by: '<S587>/RX time'
                                        */
  real_T RXdeltatime_Y0_g2;            /* Computed Parameter: RXdeltatime_Y0_g2
                                        * Referenced by: '<S587>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y0;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y0
                                         * Referenced by: '<S598>/EPBPCMInhibitStatusFeedback'
                                         */
  real_T EPBPCMManualStatusFeedback_Y0;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0
                                        * Referenced by: '<S598>/EPBPCMManualStatusFeedback'
                                        */
  real_T RXstatus_Y0_h;                /* Computed Parameter: RXstatus_Y0_h
                                        * Referenced by: '<S598>/RX status'
                                        */
  real_T RXtime_Y0_c5;                 /* Computed Parameter: RXtime_Y0_c5
                                        * Referenced by: '<S598>/RX time'
                                        */
  real_T RXdeltatime_Y0_j;             /* Computed Parameter: RXdeltatime_Y0_j
                                        * Referenced by: '<S598>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_a;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_a
                                          * Referenced by: '<S599>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_h;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_h
                                          * Referenced by: '<S599>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_o3;               /* Computed Parameter: RXstatus_Y0_o3
                                        * Referenced by: '<S599>/RX status'
                                        */
  real_T RXtime_Y0_n0;                 /* Computed Parameter: RXtime_Y0_n0
                                        * Referenced by: '<S599>/RX time'
                                        */
  real_T RXdeltatime_Y0_dy;            /* Computed Parameter: RXdeltatime_Y0_dy
                                        * Referenced by: '<S599>/RX delta time'
                                        */
  real_T EPBPCMInhibitStatusFeedback_Y_p;/* Computed Parameter: EPBPCMInhibitStatusFeedback_Y_p
                                          * Referenced by: '<S600>/EPBPCMInhibitStatusFeedback'
                                          */
  real_T EPBPCMManualStatusFeedback_Y0_o;/* Computed Parameter: EPBPCMManualStatusFeedback_Y0_o
                                          * Referenced by: '<S600>/EPBPCMManualStatusFeedback'
                                          */
  real_T RXstatus_Y0_bf;               /* Computed Parameter: RXstatus_Y0_bf
                                        * Referenced by: '<S600>/RX status'
                                        */
  real_T RXtime_Y0_b;                  /* Computed Parameter: RXtime_Y0_b
                                        * Referenced by: '<S600>/RX time'
                                        */
  real_T RXdeltatime_Y0_jt;            /* Computed Parameter: RXdeltatime_Y0_jt
                                        * Referenced by: '<S600>/RX delta time'
                                        */
  real_T PX2_LaneEdgeLeftAngle_Y0;     /* Computed Parameter: PX2_LaneEdgeLeftAngle_Y0
                                        * Referenced by: '<S608>/PX2_LaneEdgeLeftAngle'
                                        */
  real_T PX2_LaneEdgeLeftNumPoints_Y0; /* Computed Parameter: PX2_LaneEdgeLeftNumPoints_Y0
                                        * Referenced by: '<S608>/PX2_LaneEdgeLeftNumPoints'
                                        */
  real_T PX2_LaneEdgeLeftPosition_Y0;  /* Computed Parameter: PX2_LaneEdgeLeftPosition_Y0
                                        * Referenced by: '<S608>/PX2_LaneEdgeLeftPosition'
                                        */
  real_T RXstatus_Y0_mg;               /* Computed Parameter: RXstatus_Y0_mg
                                        * Referenced by: '<S608>/RX status'
                                        */
  real_T RXtime_Y0_eq;                 /* Computed Parameter: RXtime_Y0_eq
                                        * Referenced by: '<S608>/RX time'
                                        */
  real_T RXdeltatime_Y0_ht;            /* Computed Parameter: RXdeltatime_Y0_ht
                                        * Referenced by: '<S608>/RX delta time'
                                        */
  real_T PX2_LaneEdgeRightAngle_Y0;    /* Computed Parameter: PX2_LaneEdgeRightAngle_Y0
                                        * Referenced by: '<S609>/PX2_LaneEdgeRightAngle'
                                        */
  real_T PX2_LaneEdgeRightNumPoints_Y0;/* Computed Parameter: PX2_LaneEdgeRightNumPoints_Y0
                                        * Referenced by: '<S609>/PX2_LaneEdgeRightNumPoints'
                                        */
  real_T PX2_LaneEdgeRightPosition_Y0; /* Computed Parameter: PX2_LaneEdgeRightPosition_Y0
                                        * Referenced by: '<S609>/PX2_LaneEdgeRightPosition'
                                        */
  real_T RXstatus_Y0_l5;               /* Computed Parameter: RXstatus_Y0_l5
                                        * Referenced by: '<S609>/RX status'
                                        */
  real_T RXtime_Y0_jo;                 /* Computed Parameter: RXtime_Y0_jo
                                        * Referenced by: '<S609>/RX time'
                                        */
  real_T RXdeltatime_Y0_fh;            /* Computed Parameter: RXdeltatime_Y0_fh
                                        * Referenced by: '<S609>/RX delta time'
                                        */
  real_T PX2_LanePosEstAngle_Y0;       /* Computed Parameter: PX2_LanePosEstAngle_Y0
                                        * Referenced by: '<S610>/PX2_LanePosEstAngle'
                                        */
  real_T PX2_LanePosEstNumPoints_Y0;   /* Computed Parameter: PX2_LanePosEstNumPoints_Y0
                                        * Referenced by: '<S610>/PX2_LanePosEstNumPoints'
                                        */
  real_T PX2_LanePosEstPosition_Y0;    /* Computed Parameter: PX2_LanePosEstPosition_Y0
                                        * Referenced by: '<S610>/PX2_LanePosEstPosition'
                                        */
  real_T PX2_LanePosEstNumLanes_Y0;    /* Computed Parameter: PX2_LanePosEstNumLanes_Y0
                                        * Referenced by: '<S610>/PX2_LanePosEstNumLanes'
                                        */
  real_T RXstatus_Y0_gyv;              /* Computed Parameter: RXstatus_Y0_gyv
                                        * Referenced by: '<S610>/RX status'
                                        */
  real_T RXtime_Y0_ng;                 /* Computed Parameter: RXtime_Y0_ng
                                        * Referenced by: '<S610>/RX time'
                                        */
  real_T RXdeltatime_Y0_hc;            /* Computed Parameter: RXdeltatime_Y0_hc
                                        * Referenced by: '<S610>/RX delta time'
                                        */
  real_T Latitude_Y0;                  /* Computed Parameter: Latitude_Y0
                                        * Referenced by: '<S612>/Latitude_'
                                        */
  real_T Longitude_Y0;                 /* Computed Parameter: Longitude_Y0
                                        * Referenced by: '<S612>/Longitude_'
                                        */
  real_T RXstatus_Y0_l2;               /* Computed Parameter: RXstatus_Y0_l2
                                        * Referenced by: '<S612>/RX status'
                                        */
  real_T RXtime_Y0_iz;                 /* Computed Parameter: RXtime_Y0_iz
                                        * Referenced by: '<S612>/RX time'
                                        */
  real_T RXdeltatime_Y0_mk;            /* Computed Parameter: RXdeltatime_Y0_mk
                                        * Referenced by: '<S612>/RX delta time'
                                        */
  real_T Latitude_Y0_i;                /* Computed Parameter: Latitude_Y0_i
                                        * Referenced by: '<S613>/Latitude_'
                                        */
  real_T Longitude_Y0_c;               /* Computed Parameter: Longitude_Y0_c
                                        * Referenced by: '<S613>/Longitude_'
                                        */
  real_T RXstatus_Y0_ff;               /* Computed Parameter: RXstatus_Y0_ff
                                        * Referenced by: '<S613>/RX status'
                                        */
  real_T RXtime_Y0_ef;                 /* Computed Parameter: RXtime_Y0_ef
                                        * Referenced by: '<S613>/RX time'
                                        */
  real_T RXdeltatime_Y0_ld;            /* Computed Parameter: RXdeltatime_Y0_ld
                                        * Referenced by: '<S613>/RX delta time'
                                        */
  real_T PressureP4_Y0;                /* Computed Parameter: PressureP4_Y0
                                        * Referenced by: '<S615>/PressureP4'
                                        */
  real_T PressureP1_Y0;                /* Computed Parameter: PressureP1_Y0
                                        * Referenced by: '<S615>/PressureP1'
                                        */
  real_T PressureP21_Y0;               /* Computed Parameter: PressureP21_Y0
                                        * Referenced by: '<S615>/PressureP21'
                                        */
  real_T PressureP22_Y0;               /* Computed Parameter: PressureP22_Y0
                                        * Referenced by: '<S615>/PressureP22'
                                        */
  real_T PressureP42_Y0;               /* Computed Parameter: PressureP42_Y0
                                        * Referenced by: '<S615>/PressureP42'
                                        */
  real_T XPR1ControlStatus_Y0;         /* Computed Parameter: XPR1ControlStatus_Y0
                                        * Referenced by: '<S615>/XPR1ControlStatus'
                                        */
  real_T XPR2ControlStatus_Y0;         /* Computed Parameter: XPR2ControlStatus_Y0
                                        * Referenced by: '<S615>/XPR2ControlStatus'
                                        */
  real_T XPR3ControlStatus_Y0;         /* Computed Parameter: XPR3ControlStatus_Y0
                                        * Referenced by: '<S615>/XPR3ControlStatus'
                                        */
  real_T XPRErrorState_Y0;             /* Computed Parameter: XPRErrorState_Y0
                                        * Referenced by: '<S615>/XPRErrorState'
                                        */
  real_T XPRControlMode_Y0;            /* Computed Parameter: XPRControlMode_Y0
                                        * Referenced by: '<S615>/XPRControlMode'
                                        */
  real_T RXstatus_Y0_hv;               /* Computed Parameter: RXstatus_Y0_hv
                                        * Referenced by: '<S615>/RX status'
                                        */
  real_T RXtime_Y0_ix;                 /* Computed Parameter: RXtime_Y0_ix
                                        * Referenced by: '<S615>/RX time'
                                        */
  real_T RXdeltatime_Y0_b;             /* Computed Parameter: RXdeltatime_Y0_b
                                        * Referenced by: '<S615>/RX delta time'
                                        */
  real_T PitchAngleExRange_Y0;         /* Computed Parameter: PitchAngleExRange_Y0
                                        * Referenced by: '<S617>/PitchAngleExRange'
                                        */
  real_T RollAngleExRange_Y0;          /* Computed Parameter: RollAngleExRange_Y0
                                        * Referenced by: '<S617>/RollAngleExRange'
                                        */
  real_T PitchAngleExRangeCompensation_Y;/* Computed Parameter: PitchAngleExRangeCompensation_Y
                                          * Referenced by: '<S617>/PitchAngleExRangeCompensation'
                                          */
  real_T PitchAngleExRangeFigureOfMerit_;/* Computed Parameter: PitchAngleExRangeFigureOfMerit_
                                          * Referenced by: '<S617>/PitchAngleExRangeFigureOfMerit'
                                          */
  real_T RollAngleExRangeCompensation_Y0;/* Computed Parameter: RollAngleExRangeCompensation_Y0
                                          * Referenced by: '<S617>/RollAngleExRangeCompensation'
                                          */
  real_T RollAngleExRangeFigureOfMerit_Y;/* Computed Parameter: RollAngleExRangeFigureOfMerit_Y
                                          * Referenced by: '<S617>/RollAngleExRangeFigureOfMerit'
                                          */
  real_T RllAndPtchExRngMsurementLatency;/* Computed Parameter: RllAndPtchExRngMsurementLatency
                                          * Referenced by: '<S617>/RllAndPtchExRngMsurementLatency'
                                          */
  real_T RXstatus_Y0_p5;               /* Computed Parameter: RXstatus_Y0_p5
                                        * Referenced by: '<S617>/RX status'
                                        */
  real_T RXtime_Y0_h;                  /* Computed Parameter: RXtime_Y0_h
                                        * Referenced by: '<S617>/RX time'
                                        */
  real_T RXdeltatime_Y0_p2;            /* Computed Parameter: RXdeltatime_Y0_p2
                                        * Referenced by: '<S617>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0;        /* Computed Parameter: PX2_MapLaneNearPos_Y0
                                        * Referenced by: '<S619>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0;         /* Computed Parameter: PX2_MapLaneMidPos_Y0
                                        * Referenced by: '<S619>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0;         /* Computed Parameter: PX2_MapLaneFarPos_Y0
                                        * Referenced by: '<S619>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0;   /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0
                                        * Referenced by: '<S619>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0
                                        * Referenced by: '<S619>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0;    /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0
                                        * Referenced by: '<S619>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_g4;               /* Computed Parameter: RXstatus_Y0_g4
                                        * Referenced by: '<S619>/RX status'
                                        */
  real_T RXtime_Y0_k4;                 /* Computed Parameter: RXtime_Y0_k4
                                        * Referenced by: '<S619>/RX time'
                                        */
  real_T RXdeltatime_Y0_bk;            /* Computed Parameter: RXdeltatime_Y0_bk
                                        * Referenced by: '<S619>/RX delta time'
                                        */
  real_T PX2_MapLaneNearPos_Y0_p;      /* Computed Parameter: PX2_MapLaneNearPos_Y0_p
                                        * Referenced by: '<S621>/PX2_MapLaneNearPos'
                                        */
  real_T PX2_MapLaneMidPos_Y0_d;       /* Computed Parameter: PX2_MapLaneMidPos_Y0_d
                                        * Referenced by: '<S621>/PX2_MapLaneMidPos'
                                        */
  real_T PX2_MapLaneFarPos_Y0_f;       /* Computed Parameter: PX2_MapLaneFarPos_Y0_f
                                        * Referenced by: '<S621>/PX2_MapLaneFarPos'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_p; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_p
                                        * Referenced by: '<S621>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_h;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_h
                                        * Referenced by: '<S621>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_d;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_d
                                        * Referenced by: '<S621>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_km4;              /* Computed Parameter: RXstatus_Y0_km4
                                        * Referenced by: '<S621>/RX status'
                                        */
  real_T RXtime_Y0_ak;                 /* Computed Parameter: RXtime_Y0_ak
                                        * Referenced by: '<S621>/RX time'
                                        */
  real_T RXdeltatime_Y0_cx;            /* Computed Parameter: RXdeltatime_Y0_cx
                                        * Referenced by: '<S621>/RX delta time'
                                        */
  real_T PX2_EgoLaneNearPosErr_Y0;     /* Computed Parameter: PX2_EgoLaneNearPosErr_Y0
                                        * Referenced by: '<S623>/PX2_EgoLaneNearPosErr'
                                        */
  real_T PX2_EgoLaneMidPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneMidPosErr_Y0
                                        * Referenced by: '<S623>/PX2_EgoLaneMidPosErr'
                                        */
  real_T PX2_EgoLaneFarPosErr_Y0;      /* Computed Parameter: PX2_EgoLaneFarPosErr_Y0
                                        * Referenced by: '<S623>/PX2_EgoLaneFarPosErr'
                                        */
  real_T PX2_EgoLaneNearPosValid_Y0_f; /* Computed Parameter: PX2_EgoLaneNearPosValid_Y0_f
                                        * Referenced by: '<S623>/PX2_EgoLaneNearPosValid'
                                        */
  real_T PX2_EgoLaneMidPosValid_Y0_c;  /* Computed Parameter: PX2_EgoLaneMidPosValid_Y0_c
                                        * Referenced by: '<S623>/PX2_EgoLaneMidPosValid'
                                        */
  real_T PX2_EgoLaneFarPosValid_Y0_f;  /* Computed Parameter: PX2_EgoLaneFarPosValid_Y0_f
                                        * Referenced by: '<S623>/PX2_EgoLaneFarPosValid'
                                        */
  real_T RXstatus_Y0_fkm;              /* Computed Parameter: RXstatus_Y0_fkm
                                        * Referenced by: '<S623>/RX status'
                                        */
  real_T RXtime_Y0_ex;                 /* Computed Parameter: RXtime_Y0_ex
                                        * Referenced by: '<S623>/RX time'
                                        */
  real_T RXdeltatime_Y0_b2;            /* Computed Parameter: RXdeltatime_Y0_b2
                                        * Referenced by: '<S623>/RX delta time'
                                        */
  real_T SID_Y0_l;                     /* Computed Parameter: SID_Y0_l
                                        * Referenced by: '<S625>/SID'
                                        */
  real_T Source_Y0;                    /* Computed Parameter: Source_Y0
                                        * Referenced by: '<S625>/Source'
                                        */
  real_T Date_Y0;                      /* Computed Parameter: Date_Y0
                                        * Referenced by: '<S625>/Date'
                                        */
  real_T Time_Y0;                      /* Computed Parameter: Time_Y0
                                        * Referenced by: '<S625>/Time'
                                        */
  real_T RXstatus_Y0_e;                /* Computed Parameter: RXstatus_Y0_e
                                        * Referenced by: '<S625>/RX status'
                                        */
  real_T RXtime_Y0_b5;                 /* Computed Parameter: RXtime_Y0_b5
                                        * Referenced by: '<S625>/RX time'
                                        */
  real_T RXdeltatime_Y0_lf;            /* Computed Parameter: RXdeltatime_Y0_lf
                                        * Referenced by: '<S625>/RX delta time'
                                        */
  real_T SPN681_TransGearShiftInhibitReq;/* Computed Parameter: SPN681_TransGearShiftInhibitReq
                                          * Referenced by: '<S627>/SPN681_TransGearShiftInhibitReq'
                                          */
  real_T SPN682_TransTrqConvLockupDisReq;/* Computed Parameter: SPN682_TransTrqConvLockupDisReq
                                          * Referenced by: '<S627>/SPN682_TransTrqConvLockupDisReq'
                                          */
  real_T SPN683_DisengageDrivelineReq_Y0;/* Computed Parameter: SPN683_DisengageDrivelineReq_Y0
                                          * Referenced by: '<S627>/SPN683_DisengageDrivelineReq'
                                          */
  real_T SPN4242_TransRevGearShiftInhibR;/* Computed Parameter: SPN4242_TransRevGearShiftInhibR
                                          * Referenced by: '<S627>/SPN4242_TransRevGearShiftInhibRq'
                                          */
  real_T SPN684_RequestedPercClutchSlip_;/* Computed Parameter: SPN684_RequestedPercClutchSlip_
                                          * Referenced by: '<S627>/SPN684_RequestedPercClutchSlip'
                                          */
  real_T SPN525_TransRequestedGear_Y0; /* Computed Parameter: SPN525_TransRequestedGear_Y0
                                        * Referenced by: '<S627>/SPN525_TransRequestedGear'
                                        */
  real_T SPN685_DisengageDiffLockRqFrAx1;/* Computed Parameter: SPN685_DisengageDiffLockRqFrAx1
                                          * Referenced by: '<S627>/SPN685_DisengageDiffLockRqFrAx1'
                                          */
  real_T SPN686_DisengageDiffLockRqFrAx2;/* Computed Parameter: SPN686_DisengageDiffLockRqFrAx2
                                          * Referenced by: '<S627>/SPN686_DisengageDiffLockRqFrAx2'
                                          */
  real_T SPN687_DisengageDiffLockRqRrAx1;/* Computed Parameter: SPN687_DisengageDiffLockRqRrAx1
                                          * Referenced by: '<S627>/SPN687_DisengageDiffLockRqRrAx1'
                                          */
  real_T SPN688_DisengageDiffLockRqRrAx2;/* Computed Parameter: SPN688_DisengageDiffLockRqRrAx2
                                          * Referenced by: '<S627>/SPN688_DisengageDiffLockRqRrAx2'
                                          */
  real_T SPN689_DisengageDiffLockRqC_Y0;/* Computed Parameter: SPN689_DisengageDiffLockRqC_Y0
                                         * Referenced by: '<S627>/SPN689_DisengageDiffLockRqC'
                                         */
  real_T SPN690_DisengageDiffLockRqCF_Y0;/* Computed Parameter: SPN690_DisengageDiffLockRqCF_Y0
                                          * Referenced by: '<S627>/SPN690_DisengageDiffLockRqCF'
                                          */
  real_T SPN691_DisengageDiffLockRqCR_Y0;/* Computed Parameter: SPN691_DisengageDiffLockRqCR_Y0
                                          * Referenced by: '<S627>/SPN691_DisengageDiffLockRqCR'
                                          */
  real_T SPN5762_TransLoadRedInhibitRq_Y;/* Computed Parameter: SPN5762_TransLoadRedInhibitRq_Y
                                          * Referenced by: '<S627>/SPN5762_TransLoadRedInhibitRq'
                                          */
  real_T SPN1852_TransmissionMode1_Y0; /* Computed Parameter: SPN1852_TransmissionMode1_Y0
                                        * Referenced by: '<S627>/SPN1852_TransmissionMode1'
                                        */
  real_T SPN1853_TransmissionMode2_Y0; /* Computed Parameter: SPN1853_TransmissionMode2_Y0
                                        * Referenced by: '<S627>/SPN1853_TransmissionMode2'
                                        */
  real_T SPN1854_TransmissionMode3_Y0; /* Computed Parameter: SPN1854_TransmissionMode3_Y0
                                        * Referenced by: '<S627>/SPN1854_TransmissionMode3'
                                        */
  real_T SPN1855_TransmissionMode4_Y0; /* Computed Parameter: SPN1855_TransmissionMode4_Y0
                                        * Referenced by: '<S627>/SPN1855_TransmissionMode4'
                                        */
  real_T SPN7695_TransAutoNeutralRequest;/* Computed Parameter: SPN7695_TransAutoNeutralRequest
                                          * Referenced by: '<S627>/SPN7695_TransAutoNeutralRequest'
                                          */
  real_T SPN4255_TransRequestedLaunchGea;/* Computed Parameter: SPN4255_TransRequestedLaunchGea
                                          * Referenced by: '<S627>/SPN4255_TransRequestedLaunchGear'
                                          */
  real_T SPN2985_TransShiftSelDispModeSw;/* Computed Parameter: SPN2985_TransShiftSelDispModeSw
                                          * Referenced by: '<S627>/SPN2985_TransShiftSelDispModeSw'
                                          */
  real_T SPN4246_TransmissionMode5_Y0; /* Computed Parameter: SPN4246_TransmissionMode5_Y0
                                        * Referenced by: '<S627>/SPN4246_TransmissionMode5'
                                        */
  real_T SPN4247_TransmissionMode6_Y0; /* Computed Parameter: SPN4247_TransmissionMode6_Y0
                                        * Referenced by: '<S627>/SPN4247_TransmissionMode6'
                                        */
  real_T SPN4248_TransmissionMode7_Y0; /* Computed Parameter: SPN4248_TransmissionMode7_Y0
                                        * Referenced by: '<S627>/SPN4248_TransmissionMode7'
                                        */
  real_T SPN4249_TransmissionMode8_Y0; /* Computed Parameter: SPN4249_TransmissionMode8_Y0
                                        * Referenced by: '<S627>/SPN4249_TransmissionMode8'
                                        */
  real_T RXstatus_Y0_gvd;              /* Computed Parameter: RXstatus_Y0_gvd
                                        * Referenced by: '<S627>/RX status'
                                        */
  real_T RXtime_Y0_hc;                 /* Computed Parameter: RXtime_Y0_hc
                                        * Referenced by: '<S627>/RX time'
                                        */
  real_T RXdeltatime_Y0_lz;            /* Computed Parameter: RXdeltatime_Y0_lz
                                        * Referenced by: '<S627>/RX delta time'
                                        */
  real_T VDCInformationSignal_Y0;      /* Computed Parameter: VDCInformationSignal_Y0
                                        * Referenced by: '<S629>/VDCInformationSignal'
                                        */
  real_T VDCFullyOperational_Y0;       /* Computed Parameter: VDCFullyOperational_Y0
                                        * Referenced by: '<S629>/VDCFullyOperational'
                                        */
  real_T VDCBrakeLightRq_Y0;           /* Computed Parameter: VDCBrakeLightRq_Y0
                                        * Referenced by: '<S629>/VDCBrakeLightRq'
                                        */
  real_T ROPEngCtrlActive_Y0;          /* Computed Parameter: ROPEngCtrlActive_Y0
                                        * Referenced by: '<S629>/ROPEngCtrlActive'
                                        */
  real_T ROPBrakeCtrlActive_Y0;        /* Computed Parameter: ROPBrakeCtrlActive_Y0
                                        * Referenced by: '<S629>/ROPBrakeCtrlActive'
                                        */
  real_T YCEngCtrlActive_Y0;           /* Computed Parameter: YCEngCtrlActive_Y0
                                        * Referenced by: '<S629>/YCEngCtrlActive'
                                        */
  real_T YCBrakeCtrlActive_Y0;         /* Computed Parameter: YCBrakeCtrlActive_Y0
                                        * Referenced by: '<S629>/YCBrakeCtrlActive'
                                        */
  real_T RXstatus_Y0_oq;               /* Computed Parameter: RXstatus_Y0_oq
                                        * Referenced by: '<S629>/RX status'
                                        */
  real_T RXtime_Y0_am;                 /* Computed Parameter: RXtime_Y0_am
                                        * Referenced by: '<S629>/RX time'
                                        */
  real_T RXdeltatime_Y0_fp;            /* Computed Parameter: RXdeltatime_Y0_fp
                                        * Referenced by: '<S629>/RX delta time'
                                        */
  real_T SteerWheelAngle_Y0;           /* Computed Parameter: SteerWheelAngle_Y0
                                        * Referenced by: '<S631>/SteerWheelAngle'
                                        */
  real_T SteerWheelTurnCounter_Y0;     /* Computed Parameter: SteerWheelTurnCounter_Y0
                                        * Referenced by: '<S631>/SteerWheelTurnCounter'
                                        */
  real_T SteerWheelAngleSensorType_Y0; /* Computed Parameter: SteerWheelAngleSensorType_Y0
                                        * Referenced by: '<S631>/SteerWheelAngleSensorType'
                                        */
  real_T YawRate_Y0;                   /* Computed Parameter: YawRate_Y0
                                        * Referenced by: '<S631>/YawRate'
                                        */
  real_T LateralAcceleration_Y0;       /* Computed Parameter: LateralAcceleration_Y0
                                        * Referenced by: '<S631>/LateralAcceleration'
                                        */
  real_T LongitudinalAcceleration_Y0;  /* Computed Parameter: LongitudinalAcceleration_Y0
                                        * Referenced by: '<S631>/LongitudinalAcceleration'
                                        */
  real_T RXstatus_Y0_pe;               /* Computed Parameter: RXstatus_Y0_pe
                                        * Referenced by: '<S631>/RX status'
                                        */
  real_T RXtime_Y0_bd;                 /* Computed Parameter: RXtime_Y0_bd
                                        * Referenced by: '<S631>/RX time'
                                        */
  real_T RXdeltatime_Y0_n2;            /* Computed Parameter: RXdeltatime_Y0_n2
                                        * Referenced by: '<S631>/RX delta time'
                                        */
  real_T NetBatteryCurrent_Y0;         /* Computed Parameter: NetBatteryCurrent_Y0
                                        * Referenced by: '<S633>/NetBatteryCurrent'
                                        */
  real_T AltCurrent_Y0;                /* Computed Parameter: AltCurrent_Y0
                                        * Referenced by: '<S633>/AltCurrent'
                                        */
  real_T ChargingSystemPotential_Y0;   /* Computed Parameter: ChargingSystemPotential_Y0
                                        * Referenced by: '<S633>/ChargingSystemPotential'
                                        */
  real_T BatteryPotential_PowerInput1_Y0;/* Computed Parameter: BatteryPotential_PowerInput1_Y0
                                          * Referenced by: '<S633>/BatteryPotential_PowerInput1'
                                          */
  real_T KeyswitchBatteryPotential_Y0; /* Computed Parameter: KeyswitchBatteryPotential_Y0
                                        * Referenced by: '<S633>/KeyswitchBatteryPotential'
                                        */
  real_T RXstatus_Y0_lw;               /* Computed Parameter: RXstatus_Y0_lw
                                        * Referenced by: '<S633>/RX status'
                                        */
  real_T RXtime_Y0_bq;                 /* Computed Parameter: RXtime_Y0_bq
                                        * Referenced by: '<S633>/RX time'
                                        */
  real_T RXdeltatime_Y0_pm;            /* Computed Parameter: RXdeltatime_Y0_pm
                                        * Referenced by: '<S633>/RX delta time'
                                        */
  real_T RX_time_Y0_f;                 /* Computed Parameter: RX_time_Y0_f
                                        * Referenced by: '<S637>/RX_time'
                                        */
  real_T Unit_Delay_InitialCondition_im;/* Expression: 0
                                         * Referenced by: '<S637>/Unit_Delay'
                                         */
  real_T Out_Y0_d;                     /* Computed Parameter: Out_Y0_d
                                        * Referenced by: '<S673>/Out'
                                        */
  real_T Out_Y0_g;                     /* Computed Parameter: Out_Y0_g
                                        * Referenced by: '<S674>/Out'
                                        */
  real_T Out_Y0_h;                     /* Computed Parameter: Out_Y0_h
                                        * Referenced by: '<S675>/Out'
                                        */
  real_T Out_Y0_dx;                    /* Computed Parameter: Out_Y0_dx
                                        * Referenced by: '<S676>/Out'
                                        */
  real_T Out_Y0_k;                     /* Computed Parameter: Out_Y0_k
                                        * Referenced by: '<S677>/Out'
                                        */
  real_T Out_Y0_a;                     /* Computed Parameter: Out_Y0_a
                                        * Referenced by: '<S733>/Out'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_hw;/* Expression: 0.0
                                          * Referenced by: '<S808>/FixPt Unit Delay1'
                                          */
  real_T Constant1_Value_if;           /* Expression: 1
                                        * Referenced by: '<S733>/Constant1'
                                        */
  real_T Out1_Y0_d;                    /* Computed Parameter: Out1_Y0_d
                                        * Referenced by: '<S813>/Out1'
                                        */
  real_T Constant1_Value_jk;           /* Expression: ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S813>/Constant1'
                                        */
  real_T Unit_Delay_InitialCondition_g;/* Expression: -ptc_matlab_lib.get_system_sample_time()
                                        * Referenced by: '<S813>/Unit_Delay'
                                        */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S836>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S836>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S836>/TX delta time'
                                        */
  real_T TXdelaytime_Y0;               /* Computed Parameter: TXdelaytime_Y0
                                        * Referenced by: '<S836>/TX delay time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S844>/TX status'
                                        */
  real_T TXtime_Y0_p;                  /* Computed Parameter: TXtime_Y0_p
                                        * Referenced by: '<S844>/TX time'
                                        */
  real_T TXdeltatime_Y0_i;             /* Computed Parameter: TXdeltatime_Y0_i
                                        * Referenced by: '<S844>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_c;             /* Computed Parameter: TXdelaytime_Y0_c
                                        * Referenced by: '<S844>/TX delay time'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S856>/TX status'
                                        */
  real_T TXtime_Y0_h;                  /* Computed Parameter: TXtime_Y0_h
                                        * Referenced by: '<S856>/TX time'
                                        */
  real_T TXdeltatime_Y0_j;             /* Computed Parameter: TXdeltatime_Y0_j
                                        * Referenced by: '<S856>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_n;             /* Computed Parameter: TXdelaytime_Y0_n
                                        * Referenced by: '<S856>/TX delay time'
                                        */
  real_T TXstatus_Y0_iw;               /* Computed Parameter: TXstatus_Y0_iw
                                        * Referenced by: '<S857>/TX status'
                                        */
  real_T TXtime_Y0_he;                 /* Computed Parameter: TXtime_Y0_he
                                        * Referenced by: '<S857>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S857>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_i;             /* Computed Parameter: TXdelaytime_Y0_i
                                        * Referenced by: '<S857>/TX delay time'
                                        */
  real_T TXstatus_Y0_a;                /* Computed Parameter: TXstatus_Y0_a
                                        * Referenced by: '<S860>/TX status'
                                        */
  real_T TXtime_Y0_b;                  /* Computed Parameter: TXtime_Y0_b
                                        * Referenced by: '<S860>/TX time'
                                        */
  real_T TXdeltatime_Y0_c;             /* Computed Parameter: TXdeltatime_Y0_c
                                        * Referenced by: '<S860>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_g;             /* Computed Parameter: TXdelaytime_Y0_g
                                        * Referenced by: '<S860>/TX delay time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S861>/TX status'
                                        */
  real_T TXtime_Y0_e;                  /* Computed Parameter: TXtime_Y0_e
                                        * Referenced by: '<S861>/TX time'
                                        */
  real_T TXdeltatime_Y0_is;            /* Computed Parameter: TXdeltatime_Y0_is
                                        * Referenced by: '<S861>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_l;             /* Computed Parameter: TXdelaytime_Y0_l
                                        * Referenced by: '<S861>/TX delay time'
                                        */
  real_T TXstatus_Y0_f;                /* Computed Parameter: TXstatus_Y0_f
                                        * Referenced by: '<S876>/TX status'
                                        */
  real_T TXtime_Y0_n;                  /* Computed Parameter: TXtime_Y0_n
                                        * Referenced by: '<S876>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S876>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_e;             /* Computed Parameter: TXdelaytime_Y0_e
                                        * Referenced by: '<S876>/TX delay time'
                                        */
  real_T TXstatus_Y0_fh;               /* Computed Parameter: TXstatus_Y0_fh
                                        * Referenced by: '<S877>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S877>/TX time'
                                        */
  real_T TXdeltatime_Y0_a5;            /* Computed Parameter: TXdeltatime_Y0_a5
                                        * Referenced by: '<S877>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_j;             /* Computed Parameter: TXdelaytime_Y0_j
                                        * Referenced by: '<S877>/TX delay time'
                                        */
  real_T TXstatus_Y0_g;                /* Computed Parameter: TXstatus_Y0_g
                                        * Referenced by: '<S879>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S879>/TX time'
                                        */
  real_T TXdeltatime_Y0_jz;            /* Computed Parameter: TXdeltatime_Y0_jz
                                        * Referenced by: '<S879>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k;             /* Computed Parameter: TXdelaytime_Y0_k
                                        * Referenced by: '<S879>/TX delay time'
                                        */
  real_T TXstatus_Y0_ge;               /* Computed Parameter: TXstatus_Y0_ge
                                        * Referenced by: '<S881>/TX status'
                                        */
  real_T TXtime_Y0_bu;                 /* Computed Parameter: TXtime_Y0_bu
                                        * Referenced by: '<S881>/TX time'
                                        */
  real_T TXdeltatime_Y0_aa;            /* Computed Parameter: TXdeltatime_Y0_aa
                                        * Referenced by: '<S881>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ew;            /* Computed Parameter: TXdelaytime_Y0_ew
                                        * Referenced by: '<S881>/TX delay time'
                                        */
  real_T Rolling_15_counter_Y0;        /* Expression: 15
                                        * Referenced by: '<S894>/Rolling_15_counter'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S902>/FixPt Constant'
                                        */
  real_T Unit_Delay_InitialCondition_gn;/* Expression: 0
                                         * Referenced by: '<S894>/Unit_Delay'
                                         */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S903>/Constant'
                                        */
  real_T TXstatus_Y0_p;                /* Computed Parameter: TXstatus_Y0_p
                                        * Referenced by: '<S905>/TX status'
                                        */
  real_T TXtime_Y0_i;                  /* Computed Parameter: TXtime_Y0_i
                                        * Referenced by: '<S905>/TX time'
                                        */
  real_T TXdeltatime_Y0_p;             /* Computed Parameter: TXdeltatime_Y0_p
                                        * Referenced by: '<S905>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_gk;            /* Computed Parameter: TXdelaytime_Y0_gk
                                        * Referenced by: '<S905>/TX delay time'
                                        */
  real_T Constant_Value_hl;            /* Expression: 0
                                        * Referenced by: '<S858>/Constant'
                                        */
  real_T Constant1_Value_nm;           /* Expression: 1
                                        * Referenced by: '<S858>/Constant1'
                                        */
  real_T Constant_Value_dq;            /* Expression: 0
                                        * Referenced by: '<S859>/Constant'
                                        */
  real_T Constant1_Value_pt;           /* Expression: 1
                                        * Referenced by: '<S859>/Constant1'
                                        */
  real_T Constant_Value_ke;            /* Expression: 0
                                        * Referenced by: '<S878>/Constant'
                                        */
  real_T Constant1_Value_h;            /* Expression: 1
                                        * Referenced by: '<S878>/Constant1'
                                        */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S918>/TX status'
                                        */
  real_T TXtime_Y0_pz;                 /* Computed Parameter: TXtime_Y0_pz
                                        * Referenced by: '<S918>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S918>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_no;            /* Computed Parameter: TXdelaytime_Y0_no
                                        * Referenced by: '<S918>/TX delay time'
                                        */
  real_T TXstatus_Y0_kd;               /* Computed Parameter: TXstatus_Y0_kd
                                        * Referenced by: '<S927>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S927>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S927>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_o;             /* Computed Parameter: TXdelaytime_Y0_o
                                        * Referenced by: '<S927>/TX delay time'
                                        */
  real_T TXstatus_Y0_n;                /* Computed Parameter: TXstatus_Y0_n
                                        * Referenced by: '<S928>/TX status'
                                        */
  real_T TXtime_Y0_g5;                 /* Computed Parameter: TXtime_Y0_g5
                                        * Referenced by: '<S928>/TX time'
                                        */
  real_T TXdeltatime_Y0_aq;            /* Computed Parameter: TXdeltatime_Y0_aq
                                        * Referenced by: '<S928>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_p;             /* Computed Parameter: TXdelaytime_Y0_p
                                        * Referenced by: '<S928>/TX delay time'
                                        */
  real_T TXstatus_Y0_c;                /* Computed Parameter: TXstatus_Y0_c
                                        * Referenced by: '<S931>/TX status'
                                        */
  real_T TXtime_Y0_if;                 /* Computed Parameter: TXtime_Y0_if
                                        * Referenced by: '<S931>/TX time'
                                        */
  real_T TXdeltatime_Y0_hh;            /* Computed Parameter: TXdeltatime_Y0_hh
                                        * Referenced by: '<S931>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_k3;            /* Computed Parameter: TXdelaytime_Y0_k3
                                        * Referenced by: '<S931>/TX delay time'
                                        */
  real_T TXstatus_Y0_bv;               /* Computed Parameter: TXstatus_Y0_bv
                                        * Referenced by: '<S932>/TX status'
                                        */
  real_T TXtime_Y0_iu;                 /* Computed Parameter: TXtime_Y0_iu
                                        * Referenced by: '<S932>/TX time'
                                        */
  real_T TXdeltatime_Y0_e;             /* Computed Parameter: TXdeltatime_Y0_e
                                        * Referenced by: '<S932>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_jd;            /* Computed Parameter: TXdelaytime_Y0_jd
                                        * Referenced by: '<S932>/TX delay time'
                                        */
  real_T TXstatus_Y0_im;               /* Computed Parameter: TXstatus_Y0_im
                                        * Referenced by: '<S940>/TX status'
                                        */
  real_T TXtime_Y0_fh;                 /* Computed Parameter: TXtime_Y0_fh
                                        * Referenced by: '<S940>/TX time'
                                        */
  real_T TXdeltatime_Y0_gz;            /* Computed Parameter: TXdeltatime_Y0_gz
                                        * Referenced by: '<S940>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_n4;            /* Computed Parameter: TXdelaytime_Y0_n4
                                        * Referenced by: '<S940>/TX delay time'
                                        */
  real_T zero_Value_f;                 /* Expression: 0
                                        * Referenced by: '<S960>/zero'
                                        */
  real_T Constant_Value_de;            /* Expression: 8192/360
                                        * Referenced by: '<S971>/Constant'
                                        */
  real_T Constant_Value_d3;            /* Expression: 0
                                        * Referenced by: '<S929>/Constant'
                                        */
  real_T Constant1_Value_k;            /* Expression: 1
                                        * Referenced by: '<S929>/Constant1'
                                        */
  real_T MX_Value;                     /* Expression: 32765*360/8192
                                        * Referenced by: '<S970>/MX'
                                        */
  real_T MN_Value;                     /* Expression: -32765*360/8192
                                        * Referenced by: '<S970>/MN'
                                        */
  real_T Constant_Value_hr;            /* Expression: 0
                                        * Referenced by: '<S930>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 1
                                        * Referenced by: '<S930>/Constant1'
                                        */
  real_T TXstatus_Y0_oh;               /* Computed Parameter: TXstatus_Y0_oh
                                        * Referenced by: '<S985>/TX status'
                                        */
  real_T TXtime_Y0_h5;                 /* Computed Parameter: TXtime_Y0_h5
                                        * Referenced by: '<S985>/TX time'
                                        */
  real_T TXdeltatime_Y0_b;             /* Computed Parameter: TXdeltatime_Y0_b
                                        * Referenced by: '<S985>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_m;             /* Computed Parameter: TXdelaytime_Y0_m
                                        * Referenced by: '<S985>/TX delay time'
                                        */
  real_T TXstatus_Y0_nh;               /* Computed Parameter: TXstatus_Y0_nh
                                        * Referenced by: '<S987>/TX status'
                                        */
  real_T TXtime_Y0_nu;                 /* Computed Parameter: TXtime_Y0_nu
                                        * Referenced by: '<S987>/TX time'
                                        */
  real_T TXdeltatime_Y0_io;            /* Computed Parameter: TXdeltatime_Y0_io
                                        * Referenced by: '<S987>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_cy;            /* Computed Parameter: TXdelaytime_Y0_cy
                                        * Referenced by: '<S987>/TX delay time'
                                        */
  real_T TXstatus_Y0_a2;               /* Computed Parameter: TXstatus_Y0_a2
                                        * Referenced by: '<S995>/TX status'
                                        */
  real_T TXtime_Y0_n3;                 /* Computed Parameter: TXtime_Y0_n3
                                        * Referenced by: '<S995>/TX time'
                                        */
  real_T TXdeltatime_Y0_be;            /* Computed Parameter: TXdeltatime_Y0_be
                                        * Referenced by: '<S995>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_a;             /* Computed Parameter: TXdelaytime_Y0_a
                                        * Referenced by: '<S995>/TX delay time'
                                        */
  real_T Constant4_Value_g;            /* Expression: 0
                                        * Referenced by: '<S981>/Constant4'
                                        */
  real_T Constant2_Value_mv;           /* Expression: -15.687
                                        * Referenced by: '<S981>/Constant2'
                                        */
  real_T XBRExternalAccelDemandOVR_Value;/* Expression: 0
                                          * Referenced by: '<S981>/XBRExternalAccelDemandOVR'
                                          */
  real_T XBRUrgencyOVR_Value;          /* Expression: 25
                                        * Referenced by: '<S981>/XBRUrgencyOVR'
                                        */
  real_T XBRPassThroughEnabledOVR_Value;/* Expression: 1
                                         * Referenced by: '<S981>/XBRPassThroughEnabledOVR'
                                         */
  real_T XBRUrgency_Value;             /* Expression: 25
                                        * Referenced by: '<S981>/XBRUrgency'
                                        */
  real_T XBRPassThroughEnabled_Value;  /* Expression: 1
                                        * Referenced by: '<S981>/XBRPassThroughEnabled'
                                        */
  real_T CANT_PROPB_XBR_B3_CHANNEL_APV_V;/* Expression: 0
                                          * Referenced by: '<S821>/CANT_PROPB_XBR_B3_CHANNEL_APV'
                                          */
  real_T uC2_OR_VALUE_APV_Value;       /* Expression: 0
                                        * Referenced by: '<S980>/2C2_OR_VALUE_APV'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1
                                        * Referenced by: '<S980>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 0
                                        * Referenced by: '<S980>/Saturation'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 100
                                        * Referenced by: '<S980>/Gain'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.4^-1
                                        * Referenced by: '<S997>/Gain'
                                        */
  real_T BrkControlMode_Active_Value;  /* Expression: 2
                                        * Referenced by: '<S980>/BrkControlMode_Active'
                                        */
  real_T BrkControlPriority_Value;     /* Expression: 3
                                        * Referenced by: '<S980>/BrkControlPriority'
                                        */
  real_T BrkControl_RearAxlePressureProp;/* Expression: 0
                                          * Referenced by: '<S980>/BrkControl_RearAxlePressureProportioning'
                                          */
  real_T Gain1_Gain_f;                 /* Expression: 0.4^-1
                                        * Referenced by: '<S997>/Gain1'
                                        */
  real_T DECEL_GOV_XBR_URGENCY_MPV_table[8];/* Expression: [100 50 20 15 15 15 10 10]
                                             * Referenced by: '<S981>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T DECEL_GOV_XBR_URGENCY_MPV_bp01D[8];/* Expression: [-15.687 -2 -1.5 -1.2 -1.1 -1 -0.9 0]
                                             * Referenced by: '<S981>/DECEL_GOV_XBR_URGENCY_MPV'
                                             */
  real_T TXstatus_Y0_j;                /* Computed Parameter: TXstatus_Y0_j
                                        * Referenced by: '<S1011>/TX status'
                                        */
  real_T TXtime_Y0_m;                  /* Computed Parameter: TXtime_Y0_m
                                        * Referenced by: '<S1011>/TX time'
                                        */
  real_T TXdeltatime_Y0_o;             /* Computed Parameter: TXdeltatime_Y0_o
                                        * Referenced by: '<S1011>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_b;             /* Computed Parameter: TXdelaytime_Y0_b
                                        * Referenced by: '<S1011>/TX delay time'
                                        */
  real_T TXstatus_Y0_e;                /* Computed Parameter: TXstatus_Y0_e
                                        * Referenced by: '<S1022>/TX status'
                                        */
  real_T TXtime_Y0_o;                  /* Computed Parameter: TXtime_Y0_o
                                        * Referenced by: '<S1022>/TX time'
                                        */
  real_T TXdeltatime_Y0_m;             /* Computed Parameter: TXdeltatime_Y0_m
                                        * Referenced by: '<S1022>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_ia;            /* Computed Parameter: TXdelaytime_Y0_ia
                                        * Referenced by: '<S1022>/TX delay time'
                                        */
  real_T TXstatus_Y0_gn;               /* Computed Parameter: TXstatus_Y0_gn
                                        * Referenced by: '<S1023>/TX status'
                                        */
  real_T TXtime_Y0_o3;                 /* Computed Parameter: TXtime_Y0_o3
                                        * Referenced by: '<S1023>/TX time'
                                        */
  real_T TXdeltatime_Y0_d;             /* Computed Parameter: TXdeltatime_Y0_d
                                        * Referenced by: '<S1023>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_n5;            /* Computed Parameter: TXdelaytime_Y0_n5
                                        * Referenced by: '<S1023>/TX delay time'
                                        */
  real_T enable_CAN_TX_CCVS1_CAN3_Value;/* Expression: 0
                                         * Referenced by: '<S824>/enable_CAN_TX_CCVS1_CAN3'
                                         */
  real_T TXstatus_Y0_j2;               /* Computed Parameter: TXstatus_Y0_j2
                                        * Referenced by: '<S1030>/TX status'
                                        */
  real_T TXtime_Y0_py;                 /* Computed Parameter: TXtime_Y0_py
                                        * Referenced by: '<S1030>/TX time'
                                        */
  real_T TXdeltatime_Y0_jk;            /* Computed Parameter: TXdeltatime_Y0_jk
                                        * Referenced by: '<S1030>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_h;             /* Computed Parameter: TXdelaytime_Y0_h
                                        * Referenced by: '<S1030>/TX delay time'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S1031>/TX status'
                                        */
  real_T TXtime_Y0_mk;                 /* Computed Parameter: TXtime_Y0_mk
                                        * Referenced by: '<S1031>/TX time'
                                        */
  real_T TXdeltatime_Y0_oz;            /* Computed Parameter: TXdeltatime_Y0_oz
                                        * Referenced by: '<S1031>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_d;             /* Computed Parameter: TXdelaytime_Y0_d
                                        * Referenced by: '<S1031>/TX delay time'
                                        */
  real_T TXstatus_Y0_bk;               /* Computed Parameter: TXstatus_Y0_bk
                                        * Referenced by: '<S1035>/TX status'
                                        */
  real_T TXtime_Y0_ii;                 /* Computed Parameter: TXtime_Y0_ii
                                        * Referenced by: '<S1035>/TX time'
                                        */
  real_T TXdeltatime_Y0_ht;            /* Computed Parameter: TXdeltatime_Y0_ht
                                        * Referenced by: '<S1035>/TX delta time'
                                        */
  real_T TXdelaytime_Y0_if;            /* Computed Parameter: TXdelaytime_Y0_if
                                        * Referenced by: '<S1035>/TX delay time'
                                        */
  real_T PWMAFreqRngMin_Value;         /* Expression: 180
                                        * Referenced by: '<S729>/PWMAFreqRngMin'
                                        */
  real_T PWMAFreqRngMax_Value;         /* Expression: 220
                                        * Referenced by: '<S729>/PWMAFreqRngMax'
                                        */
  real_T PWMAFreqRngFaultLimMin_Value; /* Expression: -5
                                        * Referenced by: '<S729>/PWMAFreqRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_je;/* Expression: 0.0
                                          * Referenced by: '<S762>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_c;        /* Expression: 1
                                        * Referenced by: '<S758>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_g;        /* Expression: 1
                                        * Referenced by: '<S761>/FixPt Constant'
                                        */
  real_T PWMAFreqRngFaultLimMax_Value; /* Expression: 5
                                        * Referenced by: '<S729>/PWMAFreqRngFaultLimMax'
                                        */
  real_T PWMADCRngMin_Value;           /* Expression: 7
                                        * Referenced by: '<S729>/PWMADCRngMin'
                                        */
  real_T Gain_Gain_kn;                 /* Expression: 100
                                        * Referenced by: '<S402>/Gain'
                                        */
  real_T PWMADCRngMax_Value;           /* Expression: 48
                                        * Referenced by: '<S729>/PWMADCRngMax'
                                        */
  real_T PWMADCRngFaultLimMin_Value;   /* Expression: -5
                                        * Referenced by: '<S729>/PWMADCRngFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondi_p2;/* Expression: 0.0
                                          * Referenced by: '<S754>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_i;        /* Expression: 1
                                        * Referenced by: '<S750>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_p;        /* Expression: 1
                                        * Referenced by: '<S753>/FixPt Constant'
                                        */
  real_T PWMADCRngFaultLimMax_Value;   /* Expression: 5
                                        * Referenced by: '<S729>/PWMADCRngFaultLimMax'
                                        */
  real_T PWMBFreqRngMin1_Value;        /* Expression: 180
                                        * Referenced by: '<S729>/PWMBFreqRngMin1'
                                        */
  real_T PWMBFreqRngMax1_Value;        /* Expression: 220
                                        * Referenced by: '<S729>/PWMBFreqRngMax1'
                                        */
  real_T PWMBFreqRngFaultLimMin1_Value;/* Expression: -5
                                        * Referenced by: '<S729>/PWMBFreqRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_c;/* Expression: 0.0
                                          * Referenced by: '<S778>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_h;        /* Expression: 1
                                        * Referenced by: '<S774>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_j;        /* Expression: 1
                                        * Referenced by: '<S777>/FixPt Constant'
                                        */
  real_T PWMBFreqRngFaultLimMax1_Value;/* Expression: 5
                                        * Referenced by: '<S729>/PWMBFreqRngFaultLimMax1'
                                        */
  real_T PWMBDCRngMin1_Value;          /* Expression: 17
                                        * Referenced by: '<S729>/PWMBDCRngMin1'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: 100
                                        * Referenced by: '<S402>/Gain1'
                                        */
  real_T PWMBDCRngMax1_Value;          /* Expression: 93
                                        * Referenced by: '<S729>/PWMBDCRngMax1'
                                        */
  real_T PWMBDCRngFaultLimMin1_Value;  /* Expression: -5
                                        * Referenced by: '<S729>/PWMBDCRngFaultLimMin1'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_n;/* Expression: 0.0
                                          * Referenced by: '<S770>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_b;        /* Expression: 1
                                        * Referenced by: '<S766>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_e;        /* Expression: 1
                                        * Referenced by: '<S769>/FixPt Constant'
                                        */
  real_T PWMBDCRngFaultLimMax1_Value;  /* Expression: 5
                                        * Referenced by: '<S729>/PWMBDCRngFaultLimMax1'
                                        */
  real_T PWMSynchFaultLimMax_Value;    /* Expression: 5
                                        * Referenced by: '<S729>/PWMSynchFaultLimMax'
                                        */
  real_T PWMSynchRngMin_Value;         /* Expression: 0
                                        * Referenced by: '<S729>/PWMSynchRngMin'
                                        */
  real_T dT_Value;                     /* Expression: 0.01
                                        * Referenced by: '<S732>/dT'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT1_CON;/* Expression: 0.1
                                          * Referenced by: '<S732>/PEDAL_PWM_SENSOR_DATA_APV.T1_CONST'
                                          */
  real_T Saturation_UpperSat_g;        /* Expression: Inf
                                        * Referenced by: '<S799>/Saturation'
                                        */
  real_T Saturation_LowerSat_gy;       /* Expression: 0.0001
                                        * Referenced by: '<S799>/Saturation'
                                        */
  real_T Constant1_Value_jm;           /* Expression: 1
                                        * Referenced by: '<S799>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_a1;/* Expression: 0
                                          * Referenced by: '<S799>/Unit_Delay2'
                                          */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_tabl[8];/* Expression: [-25 0 28.57 100 228.57 231.43 255 255]
                                             * Referenced by: '<S732>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_1_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S732>/PEDAL_PWM_ANGLE_SENS_1_MPV'
                                             */
  real_T dT1_Value;                    /* Expression: 0.01
                                        * Referenced by: '<S732>/dT1'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVT2_CON;/* Expression: 0.1
                                          * Referenced by: '<S732>/PEDAL_PWM_SENSOR_DATA_APV.T2_CONST'
                                          */
  real_T Saturation_UpperSat_e5;       /* Expression: Inf
                                        * Referenced by: '<S800>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: 0.0001
                                        * Referenced by: '<S800>/Saturation'
                                        */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S800>/Constant1'
                                        */
  real_T Unit_Delay2_InitialCondition_c;/* Expression: 0
                                         * Referenced by: '<S800>/Unit_Delay2'
                                         */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_tabl[8];/* Expression: [-25 -14.29 0 35.71 100 101.43 113.57 114.29]
                                             * Referenced by: '<S732>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_SENS_2_MPV_bp01[8];/* Expression: [0 10 20 45 90 91 99.5 100]
                                             * Referenced by: '<S732>/PEDAL_PWM_ANGLE_SENS_2_MPV'
                                             */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFAUL;/* Expression: 0
                                          * Referenced by: '<S726>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_VALUE'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_fo;/* Expression: 0.0
                                          * Referenced by: '<S798>/FixPt Unit Delay1'
                                          */
  real_T FixPtUnitDelay1_InitialCondi_b5;/* Expression: 0.0
                                          * Referenced by: '<S797>/FixPt Unit Delay1'
                                          */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_tableDa[8];/* Expression: [10 10 10 10 10 10 10 10]
                                             * Referenced by: '<S734>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PEDAL_PWM_ANGLE_DEV_MPV_bp01Dat[8];/* Expression: [0 14 15 20 80 85 86 100]
                                             * Referenced by: '<S734>/PEDAL_PWM_ANGLE_DEV_MPV'
                                             */
  real_T PWMSynchRngMax_Value;         /* Expression: 0.1
                                        * Referenced by: '<S729>/PWMSynchRngMax'
                                        */
  real_T PWMSynchFaultLimMin_Value;    /* Expression: -5
                                        * Referenced by: '<S729>/PWMSynchFaultLimMin'
                                        */
  real_T FixPtUnitDelay1_InitialCondit_g;/* Expression: 0.0
                                          * Referenced by: '<S786>/FixPt Unit Delay1'
                                          */
  real_T FixPtConstant_Value_ja;       /* Expression: 1
                                        * Referenced by: '<S782>/FixPt Constant'
                                        */
  real_T FixPtConstant_Value_pi;       /* Expression: 1
                                        * Referenced by: '<S785>/FixPt Constant'
                                        */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEFA_f;/* Expression: 25
                                          * Referenced by: '<S726>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_UP'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDEF_fn;/* Expression: 25
                                          * Referenced by: '<S726>/PEDAL_PWM_SENSOR_DATA_APV.DEFAULT_SLEW_DOWN'
                                          */
  real_T PEDAL_PWM_SENSOR_DATA_APVDT_Val;/* Expression: 0.01
                                          * Referenced by: '<S726>/PEDAL_PWM_SENSOR_DATA_APV.DT'
                                          */
  real_T KL15_Monitor_Gain;            /* Expression: 10
                                        * Referenced by: '<S402>/KL15_Monitor'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<S403>/Rate Transition'
                                          */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S436>/Constant'
                                        */
  real_T Constant_Value_gd;            /* Expression: 1
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
  real_T Constant_Value_pt;            /* Expression: 0
                                        * Referenced by: '<S434>/Constant'
                                        */
  real_T Constant_Value_ec;            /* Expression: 1
                                        * Referenced by: '<S417>/Constant'
                                        */
  real_T Constant_Value_dey;           /* Expression: 1
                                        * Referenced by: '<S440>/Constant'
                                        */
  real_T Constant_Value_np;            /* Expression: 0
                                        * Referenced by: '<S1033>/Constant'
                                        */
  real_T Constant1_Value_pl;           /* Expression: 1
                                        * Referenced by: '<S1033>/Constant1'
                                        */
  real_T TmpRTBAtANDInport1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Constant3_Value_pv;           /* Expression: 1
                                        * Referenced by: '<S816>/Constant3'
                                        */
  real_T APTC_PEDAL_A_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1042>/APTC_PEDAL_A_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant2_Value_pj;           /* Expression: 0.001
                                        * Referenced by: '<S816>/Constant2'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [10 45]
                                        * Referenced by: '<S1042>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1042>/1-D Lookup Table2'
                                        */
  real_T Gain1_Gain_k3;                /* Expression: 0.01
                                        * Referenced by: '<S816>/Gain1'
                                        */
  real_T Constant1_Value_bk;           /* Expression: 1
                                        * Referenced by: '<S816>/Constant1'
                                        */
  real_T APTC_PEDAL_B_PWM_FREQ_HZ_APV_Va;/* Expression: 200
                                          * Referenced by: '<S1042>/APTC_PEDAL_B_PWM_FREQ_HZ_APV'
                                          */
  real_T Constant4_Value_l;            /* Expression: 0.001
                                        * Referenced by: '<S816>/Constant4'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [20 90]
                                        * Referenced by: '<S1042>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [0 100]
                                        * Referenced by: '<S1042>/1-D Lookup Table3'
                                        */
  real_T Gain_Gain_pb;                 /* Expression: 0.01
                                        * Referenced by: '<S816>/Gain'
                                        */
  real_T ShifterControlDC_Gain;        /* Expression: 1
                                        * Referenced by: '<S402>/ShifterControlDC'
                                        */
  real_T Constant_Value_aw;            /* Expression: .4
                                        * Referenced by: '<S1043>/Constant'
                                        */
  real_T Constant1_Value_gp;           /* Expression: 0.5
                                        * Referenced by: '<S1043>/Constant1'
                                        */
  real_T Constant_Value_f3;            /* Expression: 0
                                        * Referenced by: '<S1049>/Constant'
                                        */
  real_T Constant_Value_eo;            /* Expression: 0
                                        * Referenced by: '<S1050>/Constant'
                                        */
  real_T Flash_Amp;                    /* Expression: 1
                                        * Referenced by: '<S1044>/Flash'
                                        */
  real_T Flash_Period;                 /* Expression: 10
                                        * Referenced by: '<S1044>/Flash'
                                        */
  real_T Flash_Duty;                   /* Expression: 5
                                        * Referenced by: '<S1044>/Flash'
                                        */
  real_T Flash_PhaseDelay;             /* Expression: 0
                                        * Referenced by: '<S1044>/Flash'
                                        */
  real_T Constant_Value_ez;            /* Expression: 0
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
  real_T Constant_Value_eg;            /* Expression: 0.125
                                        * Referenced by: '<S512>/Constant'
                                        */
  real_T Constant_Value_gf;            /* Expression: -125
                                        * Referenced by: '<S519>/Constant'
                                        */
  real_T Constant_Value_ah;            /* Expression: 0.125
                                        * Referenced by: '<S516>/Constant'
                                        */
  real_T Constant_Value_na;            /* Expression: 1/1280
                                        * Referenced by: '<S517>/Constant'
                                        */
  real_T Constant_Value_ar;            /* Expression: 0.125
                                        * Referenced by: '<S520>/Constant'
                                        */
  real_T Constant_Value_pc;            /* Expression: 0.1
                                        * Referenced by: '<S521>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 10
                                        * Referenced by: '<S522>/Constant'
                                        */
  real_T Constant_Value_kj;            /* Expression: 10
                                        * Referenced by: '<S523>/Constant'
                                        */
  real_T Constant_Value_eos;           /* Expression: -125
                                        * Referenced by: '<S524>/Constant'
                                        */
  real_T Constant_Value_hpq;           /* Expression: -125
                                        * Referenced by: '<S525>/Constant'
                                        */
  real_T Constant_Value_jn;            /* Expression: 0.125
                                        * Referenced by: '<S526>/Constant'
                                        */
  real_T Constant_Value_du;            /* Expression: 0.125
                                        * Referenced by: '<S534>/Constant'
                                        */
  real_T Constant_Value_js;            /* Expression: 0.004
                                        * Referenced by: '<S527>/Constant'
                                        */
  real_T Constant_Value_h5;            /* Expression: -125
                                        * Referenced by: '<S535>/Constant'
                                        */
  real_T Constant_Value_an;            /* Expression: 0.125
                                        * Referenced by: '<S536>/Constant'
                                        */
  real_T Constant_Value_er;            /* Expression: -125
                                        * Referenced by: '<S537>/Constant'
                                        */
  real_T Constant_Value_j4;            /* Expression: 0.125
                                        * Referenced by: '<S538>/Constant'
                                        */
  real_T Constant_Value_j2;            /* Expression: -125
                                        * Referenced by: '<S513>/Constant'
                                        */
  real_T Constant_Value_m1;            /* Expression: 0.125
                                        * Referenced by: '<S514>/Constant'
                                        */
  real_T Constant_Value_ml;            /* Expression: -125
                                        * Referenced by: '<S515>/Constant'
                                        */
  real_T Constant_Value_ev;            /* Expression: 1
                                        * Referenced by: '<S413>/Constant'
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S444>/Constant'
                                        */
  real_T Constant2_Value_p0;           /* Expression: 1
                                        * Referenced by: '<S401>/Constant2'
                                        */
  real_T Constant_Value_jb;            /* Expression: 1/1024
                                        * Referenced by: '<S654>/Constant'
                                        */
  real_T Constant1_Value_pl0;          /* Expression: 1/1024
                                        * Referenced by: '<S655>/Constant1'
                                        */
  real_T Constant2_Value_o;            /* Expression: 360/8192
                                        * Referenced by: '<S656>/Constant2'
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
  ENUM_CAN_RX_T Constant_Value_oo;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S407>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_pi;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S462>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_b1;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S408>/Constant'
                                        */
  ENUM_CAN_RX_T Constant_Value_m2;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S471>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_de;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S644>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant_Value_ke5;    /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S644>/Constant'
                                        */
  ENUM_CAN_RX_T Constant2_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S644>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S644>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_om;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S644>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S644>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_py;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S462>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S462>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S462>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S462>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_l;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S462>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant1_Value_nr;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S471>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_e;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S471>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_fk;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S471>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_c;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S471>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_i1;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S471>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_en;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S597>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_n3;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S597>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant2_Value_i;     /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S597>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_j0;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S597>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_o5;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S597>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant5_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S597>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant_Value_d3b;    /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S571>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_bz;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S571>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_ay;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S571>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_n4;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S571>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_a;     /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S571>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_nx;    /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S571>/Constant4'
                                        */
  ENUM_CAN_RX_T Constant_Value_my;     /* Expression: ENUM_CAN_RX_T.RX_CAN_1
                                        * Referenced by: '<S584>/Constant'
                                        */
  ENUM_CAN_RX_T Constant1_Value_lc;    /* Expression: ENUM_CAN_RX_T.RX_CAN_2
                                        * Referenced by: '<S584>/Constant1'
                                        */
  ENUM_CAN_RX_T Constant5_Value_lh;    /* Expression: ENUM_CAN_RX_T.RX_CAN_6
                                        * Referenced by: '<S584>/Constant5'
                                        */
  ENUM_CAN_RX_T Constant2_Value_by;    /* Expression: ENUM_CAN_RX_T.RX_CAN_3
                                        * Referenced by: '<S584>/Constant2'
                                        */
  ENUM_CAN_RX_T Constant3_Value_iv;    /* Expression: ENUM_CAN_RX_T.RX_CAN_4
                                        * Referenced by: '<S584>/Constant3'
                                        */
  ENUM_CAN_RX_T Constant4_Value_f;     /* Expression: ENUM_CAN_RX_T.RX_CAN_5
                                        * Referenced by: '<S584>/Constant4'
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
  ENUM_CAN_TX_T Constant2_Value_k;     /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S818>/Constant2'
                                        */
  ENUM_CAN_TX_T Constant1_Value_ij;    /* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                        * Referenced by: '<S818>/Constant1'
                                        */
  ENUM_CAN_TX_T CANT_PROPB_XPR_FC_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                 * Referenced by: '<S819>/CANT_PROPB_XPR_FC_CHANNEL_APV'
                                                 */
  ENUM_CAN_TX_T CANT_ACCS_E4_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4
                                                * Referenced by: '<S820>/CANT_ACCS_E4_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_EEC1_00_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_4_5
                                                * Referenced by: '<S820>/CANT_EEC1_00_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_VDC2_0B_CHANNEL_APV_Value;/* Expression: ENUM_CAN_TX_T.TX_CAN_5
                                                * Referenced by: '<S820>/CANT_VDC2_0B_CHANNEL_APV'
                                                */
  ENUM_CAN_TX_T CANT_STD_ODOMETRY_CHANNEL_APV_V;/* Expression: ENUM_CAN_TX_T.TX_CAN_6
                                                 * Referenced by: '<S821>/CANT_STD_ODOMETRY_CHANNEL_APV'
                                                 */
  ENUM_J1939_SWITCH_T Unit_Delay_34_InitialCondition;/* Computed Parameter: Unit_Delay_34_InitialCondition
                                                      * Referenced by: '<S3>/Unit_Delay'
                                                      */
  ENUM_PEDAL_POS_SIGNAL_SOURCE_T APTC_PEDAL_POS_SIG_SOURCE_APV_V;/* Expression: ENUM_PEDAL_POS_SIGNAL_SOURCE_T.CAN_EEC2_00_AND_SW_EMULATION
                                                                  * Referenced by: '<S83>/APTC_PEDAL_POS_SIG_SOURCE_APV'
                                                                  */
  ENUM_REAX_OPERATION_MODE_T Constant_Value_au;/* Expression: ENUM_REAX_OPERATION_MODE_T.DEFAULT_TRQ_CTRL_MODE
                                                * Referenced by: '<S943>/Constant'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant1_Value_o4;/* Expression: ENUM_REAX_OPERATION_MODE_T.POSITION_CTRL_MODE
                                                 * Referenced by: '<S943>/Constant1'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant2_Value_al;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_A
                                                 * Referenced by: '<S943>/Constant2'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant3_Value_m;/* Expression: ENUM_REAX_OPERATION_MODE_T.ALL_CTRL_DISABLED
                                                * Referenced by: '<S943>/Constant3'
                                                */
  ENUM_REAX_OPERATION_MODE_T Constant4_Value_cy;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_B
                                                 * Referenced by: '<S943>/Constant4'
                                                 */
  ENUM_REAX_OPERATION_MODE_T Constant5_Value_g;/* Expression: ENUM_REAX_OPERATION_MODE_T.EXT_TRQ_CTRL_MODE_C
                                                * Referenced by: '<S943>/Constant5'
                                                */
  ENUM_SWITCH_T CPV3_Value_p;          /* Expression: ENUM_SWITCH_T.ERROR
                                        * Referenced by: '<S98>/CPV3'
                                        */
  ENUM_SWITCH_T CPV4_Value_n;          /* Expression: ENUM_SWITCH_T.ON
                                        * Referenced by: '<S98>/CPV4'
                                        */
  ENUM_XBR_CONTROL_MODE_T XBRControlModeOVR_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                   * Referenced by: '<S981>/XBRControlModeOVR'
                                                   */
  ENUM_XBR_CONTROL_MODE_T XBRControlMode_Value;/* Expression: ENUM_XBR_CONTROL_MODE_T.ACCEL_CTRL_WITH_MAX_MODE
                                                * Referenced by: '<S981>/XBRControlMode'
                                                */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationMod;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S981>/XBREnduranceBrakeIntegrationModeOVR'
                                                       */
  ENUM_XBR_EBI_MODE_T XBREnduranceBrakeIntegrationM_e;/* Expression: ENUM_XBR_EBI_MODE_T.EBI_ALLOWED
                                                       * Referenced by: '<S981>/XBREnduranceBrakeIntegrationMode'
                                                       */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant9_Value_h;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_AVAILABLE
                                                    * Referenced by: '<S981>/Constant9'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant8_Value_g;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ERROR
                                                    * Referenced by: '<S981>/Constant8'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant7_Value_l;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                    * Referenced by: '<S981>/Constant7'
                                                    */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T Constant10_Value_g;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.NOT_ACTIVE
                                                     * Referenced by: '<S981>/Constant10'
                                                     */
  ENUM_XBR_PASS_THROUGH_ACTIVE_T XBRPassThroughActiveOVR_Value;/* Expression: ENUM_XBR_PASS_THROUGH_ACTIVE_T.ACTIVE
                                                                * Referenced by: '<S981>/XBRPassThroughActiveOVR'
                                                                */
  ENUM_XBR_PRIORITY_T XBRPriorityOVR_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                            * Referenced by: '<S981>/XBRPriorityOVR'
                                            */
  ENUM_XBR_PRIORITY_T XBRPriority_Value;/* Expression: ENUM_XBR_PRIORITY_T.MEDIUM_PRIORITY
                                         * Referenced by: '<S981>/XBRPriority'
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
                                                                  * Referenced by: '<S819>/PROPB_XPR_INHIBIT_PARK_MANUAL_APV'
                                                                  */
  ENUM_XPR_INHIBIT_UNPARK_MANUAL_T PROPB_XPR_INHIBIT_UNPARK_MANUAL;/* Expression: ENUM_XPR_INHIBIT_UNPARK_MANUAL_T.NO_OVERRIDE
                                                                    * Referenced by: '<S819>/PROPB_XPR_INHIBIT_UNPARK_MANUAL_APV'
                                                                    */
  ENUM_XPR_PARK_MANUAL_T PROPB_XPR_PARK_MANUAL_APV_Value;/* Expression: ENUM_XPR_PARK_MANUAL_T.NO_OVERRIDE
                                                          * Referenced by: '<S819>/PROPB_XPR_PARK_MANUAL_APV'
                                                          */
  ENUM_XPR_UNPARK_MANUAL_T PROPB_XPR_UNPARK_MANUAL_APV_Val;/* Expression: ENUM_XPR_UNPARK_MANUAL_T.NO_OVERRIDE
                                                            * Referenced by: '<S819>/PROPB_XPR_UNPARK_MANUAL_APV'
                                                            */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S943>/Merge'
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
  real32_T RX_delta_time_Y0_m;         /* Computed Parameter: RX_delta_time_Y0_m
                                        * Referenced by: '<S637>/RX_delta_time'
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
  uint32_T Operator_BitMask_hi;        /* Expression: BitMask
                                        * Referenced by: '<S897>/Operator'
                                        */
  uint32_T Operator_BitMask_g0;        /* Expression: BitMask
                                        * Referenced by: '<S898>/Operator'
                                        */
  uint32_T Operator_BitMask_ba;        /* Expression: BitMask
                                        * Referenced by: '<S899>/Operator'
                                        */
  uint32_T Operator_BitMask_i2;        /* Expression: BitMask
                                        * Referenced by: '<S900>/Operator'
                                        */
  uint32_T Constant_Value_hu;          /* Computed Parameter: Constant_Value_hu
                                        * Referenced by: '<S973>/Constant'
                                        */
  uint32_T Operator_BitMask_fi;        /* Expression: BitMask
                                        * Referenced by: '<S947>/Operator'
                                        */
  uint32_T Operator_BitMask_ku;        /* Expression: BitMask
                                        * Referenced by: '<S948>/Operator'
                                        */
  uint32_T Operator_BitMask_en;        /* Expression: BitMask
                                        * Referenced by: '<S949>/Operator'
                                        */
  uint32_T Operator_BitMask_hk;        /* Expression: BitMask
                                        * Referenced by: '<S950>/Operator'
                                        */
  uint32_T IV_Value_ox;                /* Computed Parameter: IV_Value_ox
                                        * Referenced by: '<S973>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_ey;/* Computed Parameter: UnitDelay_InitialCondition_ey
                                          * Referenced by: '<S973>/Unit Delay'
                                          */
  uint32_T Operator_BitMask_lj;        /* Expression: BitMask
                                        * Referenced by: '<S951>/Operator'
                                        */
  uint32_T Operator_BitMask_op;        /* Expression: BitMask
                                        * Referenced by: '<S952>/Operator'
                                        */
  uint32_T Operator_BitMask_hz;        /* Expression: BitMask
                                        * Referenced by: '<S953>/Operator'
                                        */
  uint32_T Operator_BitMask_lz;        /* Expression: BitMask
                                        * Referenced by: '<S954>/Operator'
                                        */
  uint32_T Constant_Value_fo;          /* Computed Parameter: Constant_Value_fo
                                        * Referenced by: '<S1001>/Constant'
                                        */
  uint32_T IV_Value_a;                 /* Computed Parameter: IV_Value_a
                                        * Referenced by: '<S1001>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_ll;/* Computed Parameter: UnitDelay_InitialCondition_ll
                                          * Referenced by: '<S1001>/Unit Delay'
                                          */
  uint32_T BitwiseOperator2_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S997>/Bitwise Operator2'
                                        */
  uint32_T BitwiseOperator3_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S997>/Bitwise Operator3'
                                        */
  uint32_T BitwiseOperator4_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S997>/Bitwise Operator4'
                                        */
  uint32_T BitwiseOperator5_BitMask;   /* Expression: BitMask
                                        * Referenced by: '<S997>/Bitwise Operator5'
                                        */
  uint32_T Constant_Value_kt;          /* Computed Parameter: Constant_Value_kt
                                        * Referenced by: '<S1016>/Constant'
                                        */
  uint32_T IV_Value_hl;                /* Computed Parameter: IV_Value_hl
                                        * Referenced by: '<S1016>/IV'
                                        */
  uint32_T UnitDelay_InitialCondition_f;/* Computed Parameter: UnitDelay_InitialCondition_f
                                         * Referenced by: '<S1016>/Unit Delay'
                                         */
  uint32_T Operator_BitMask_ef;        /* Expression: BitMask
                                        * Referenced by: '<S1012>/Operator'
                                        */
  uint32_T Operator_BitMask_fkw;       /* Expression: BitMask
                                        * Referenced by: '<S1013>/Operator'
                                        */
  uint32_T Operator_BitMask_e1;        /* Expression: BitMask
                                        * Referenced by: '<S1014>/Operator'
                                        */
  uint32_T Constant2_Value_mw;         /* Expression: uint32(hex2dec('FEE3'))
                                        * Referenced by: '<S422>/Constant2'
                                        */
  uint32_T Constant2_Value_c1;         /* Expression: uint32(hex2dec('FEEC'))
                                        * Referenced by: '<S445>/Constant2'
                                        */
  int16_T Constant_Value_cy;           /* Expression: int16(512)
                                        * Referenced by: '<S850>/Constant'
                                        */
  uint16_T Operator_BitMask_l5;        /* Expression: BitMask
                                        * Referenced by: '<S882>/Operator'
                                        */
  uint16_T Operator_BitMask_g3;        /* Expression: BitMask
                                        * Referenced by: '<S883>/Operator'
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
  boolean_T Constant_Value_l;          /* Expression: false
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
  boolean_T Constant_Value_m2w;        /* Expression: false
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
  boolean_T Unit_Delay_InitialCondition_a;/* Expression: true
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
  boolean_T Constant3_Value_am;        /* Computed Parameter: Constant3_Value_am
                                        * Referenced by: '<S389>/Constant3'
                                        */
  boolean_T Constant2_Value_cw;        /* Computed Parameter: Constant2_Value_cw
                                        * Referenced by: '<S389>/Constant2'
                                        */
  boolean_T RX_status_Y0;              /* Computed Parameter: RX_status_Y0
                                        * Referenced by: '<S506>/RX_status'
                                        */
  boolean_T RX_status_Y0_i;            /* Computed Parameter: RX_status_Y0_i
                                        * Referenced by: '<S634>/RX_status'
                                        */
  boolean_T F_Out_slewing_Y0_h;        /* Expression: false
                                        * Referenced by: '<S733>/F_Out_slewing'
                                        */
  boolean_T Unit_Delay_InitialCondition_aw;/* Expression: true
                                            * Referenced by: '<S804>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_n;/* Expression: true
                                           * Referenced by: '<S805>/Unit_Delay'
                                           */
  boolean_T Unit_Delay_InitialCondition_nn;/* Expression: false
                                            * Referenced by: '<S803>/Unit_Delay'
                                            */
  boolean_T Constant_Value_m12;        /* Expression: false
                                        * Referenced by: '<S805>/Constant'
                                        */
  boolean_T OverrideOperatorEnableSW_Defaul;/* Expression: boolean(0)
                                             * Referenced by: '<S727>/OverrideOperatorEnableSW_Default'
                                             */
  boolean_T ExtendedDataPage_Value;    /* Expression: boolean(0)
                                        * Referenced by: '<S891>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value;            /* Expression: boolean(0)
                                        * Referenced by: '<S891>/DataPage'
                                        */
  boolean_T enablePosRapidUpdateTX_Value;/* Expression: boolean(1)
                                          * Referenced by: '<S819>/enablePosRapidUpdateTX'
                                          */
  boolean_T Enable_TX_CCVS1_00_Value;  /* Expression: boolean(1)
                                        * Referenced by: '<S845>/Enable_TX_CCVS1_00'
                                        */
  boolean_T enableCOGSRapidUpdateTX_Value;/* Expression: boolean(1)
                                           * Referenced by: '<S819>/enableCOGSRapidUpdateTX'
                                           */
  boolean_T enableEBC1_8B_TX_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S819>/enableEBC1_8B_TX'
                                        */
  boolean_T E_Value_jv;                /* Expression: true
                                        * Referenced by: '<S973>/E'
                                        */
  boolean_T Unit_Delay_InitialCondition_nd;/* Computed Parameter: Unit_Delay_InitialCondition_nd
                                            * Referenced by: '<S972>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_e;  /* Expression: boolean(0)
                                        * Referenced by: '<S941>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_l;          /* Expression: boolean(0)
                                        * Referenced by: '<S941>/DataPage'
                                        */
  boolean_T E_Value_ld;                /* Expression: true
                                        * Referenced by: '<S1001>/E'
                                        */
  boolean_T XBRValueOverride_Value;    /* Expression: false
                                        * Referenced by: '<S981>/XBRValueOverride'
                                        */
  boolean_T Unit_Delay_InitialCondition_nb;/* Expression: false
                                            * Referenced by: '<S977>/Unit_Delay'
                                            */
  boolean_T F_2C2_OR_APV_Value;        /* Expression: false
                                        * Referenced by: '<S980>/F_2C2_OR_APV'
                                        */
  boolean_T Unit_Delay_InitialCondition_eq;/* Computed Parameter: Unit_Delay_InitialCondition_eq
                                            * Referenced by: '<S1000>/Unit_Delay'
                                            */
  boolean_T ExtendedDataPage_Value_j;  /* Expression: boolean(0)
                                        * Referenced by: '<S996>/ExtendedDataPage'
                                        */
  boolean_T DataPage_Value_a;          /* Expression: boolean(0)
                                        * Referenced by: '<S996>/DataPage'
                                        */
  boolean_T CPV_Value_f;               /* Expression: true
                                        * Referenced by: '<S980>/CPV'
                                        */
  boolean_T E_Value_o;                 /* Expression: true
                                        * Referenced by: '<S1016>/E'
                                        */
  boolean_T Enable_TX_RequestDiagMsgFromREA;/* Expression: boolean(1)
                                             * Referenced by: '<S1006>/Enable_TX_RequestDiagMsgFromREAX'
                                             */
  boolean_T Unit_Delay_InitialCondition_p5;/* Computed Parameter: Unit_Delay_InitialCondition_p5
                                            * Referenced by: '<S1015>/Unit_Delay'
                                            */
  boolean_T CANT_TC1_03_05_APV_Value;  /* Expression: false
                                        * Referenced by: '<S1021>/CANT_TC1_03_05_APV'
                                        */
  boolean_T Constant_Value_ig;         /* Expression: boolean(1)
                                        * Referenced by: '<S411>/Constant'
                                        */
  boolean_T Constant_Value_dz;         /* Expression: boolean(1)
                                        * Referenced by: '<S412>/Constant'
                                        */
  boolean_T Unit_Delay_InitialCondition_cd;/* Expression: true
                                            * Referenced by: '<S732>/Unit_Delay'
                                            */
  boolean_T Unit_Delay1_InitialCondition_mv;/* Expression: true
                                             * Referenced by: '<S799>/Unit_Delay1'
                                             */
  boolean_T Unit_Delay1_InitialCondition_c;/* Expression: true
                                            * Referenced by: '<S732>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay1_InitialCondition_e;/* Expression: true
                                            * Referenced by: '<S800>/Unit_Delay1'
                                            */
  boolean_T F_PEDAL_TORQUE_SLEW_AT_FAULT_Va;/* Expression: true
                                             * Referenced by: '<S726>/F_PEDAL_TORQUE_SLEW_AT_FAULT'
                                             */
  boolean_T Constant_Value_gc;         /* Expression: boolean(1)
                                        * Referenced by: '<S416>/Constant'
                                        */
  boolean_T Enable_RX_EBC2_0B_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S421>/Enable_RX_EBC2_0B'
                                        */
  boolean_T Enable_HRW_RX_0B_Value;    /* Expression: boolean(1)
                                        * Referenced by: '<S428>/Enable_HRW_RX_0B'
                                        */
  boolean_T Constant1_Value_ahf;       /* Expression: boolean(1)
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
  boolean_T Constant_Value_jg1;        /* Expression: boolean(1)
                                        * Referenced by: '<S418>/Constant'
                                        */
  boolean_T Constant_Value_fl;         /* Expression: boolean(1)
                                        * Referenced by: '<S409>/Constant'
                                        */
  boolean_T Constant_Value_os;         /* Expression: boolean(1)
                                        * Referenced by: '<S442>/Constant'
                                        */
  boolean_T Constant_Value_fd;         /* Expression: boolean(1)
                                        * Referenced by: '<S443>/Constant'
                                        */
  boolean_T Unit_Delay3_InitialCondition;/* Expression: true
                                          * Referenced by: '<S635>/Unit_Delay3'
                                          */
  boolean_T Unit_Delay_InitialCondition_ct;/* Expression: true
                                            * Referenced by: '<S635>/Unit_Delay'
                                            */
  boolean_T Unit_Delay_InitialCondition_av;/* Expression: false
                                            * Referenced by: '<S641>/Unit_Delay'
                                            */
  boolean_T Constant_Value_jo;         /* Expression: boolean(0)
                                        * Referenced by: '<S433>/Constant'
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
  boolean_T Constant_Value_j4z;        /* Expression: boolean(1)
                                        * Referenced by: '<S415>/Constant'
                                        */
  boolean_T Constant_Value_ds;         /* Expression: boolean(1)
                                        * Referenced by: '<S441>/Constant'
                                        */
  boolean_T Constant_Value_lx;         /* Computed Parameter: Constant_Value_lx
                                        * Referenced by: '<S1032>/Constant'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S825>/Unit Delay2'
                                         */
  boolean_T UnitDelay3_InitialCondition;/* Computed Parameter: UnitDelay3_InitialCondition
                                         * Referenced by: '<S825>/Unit Delay3'
                                         */
  boolean_T F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT;/* Expression: true
                                             * Referenced by: '<S1043>/F_ALLOW_ETC2_FOR_NEUTRAL_OUTPUT_APV'
                                             */
  boolean_T Constant2_Value_l;         /* Expression: false
                                        * Referenced by: '<S1043>/Constant2'
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
  boolean_T Constant_Value_ip;         /* Expression: boolean(1)
                                        * Referenced by: '<S410>/Constant'
                                        */
  boolean_T Constant_Value_ga;         /* Expression: boolean(0)
                                        * Referenced by: '<S414>/Constant'
                                        */
  boolean_T Constant1_Value_hf;        /* Expression: boolean(1)
                                        * Referenced by: '<S419>/Constant1'
                                        */
  boolean_T Enable_RX_EEC2_00_Value;   /* Expression: boolean(1)
                                        * Referenced by: '<S424>/Enable_RX_EEC2_00'
                                        */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLeft;/* Expression: boolean(0)
                                             * Referenced by: '<S437>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T CAN_RXEnable_PX2_MapLaneEgoLe_b;/* Expression: boolean(0)
                                             * Referenced by: '<S438>/CAN_RX-Enable_PX2_MapLaneEgoLeft'
                                             */
  boolean_T Constant_Value_kr;         /* Expression: boolean(0)
                                        * Referenced by: '<S439>/Constant'
                                        */
  boolean_T Constant_Value_bz;         /* Expression: false
                                        * Referenced by: '<S635>/Constant'
                                        */
  boolean_T Constant1_Value_pc;        /* Expression: false
                                        * Referenced by: '<S635>/Constant1'
                                        */
  boolean_T Unit_Delay2_InitialCondition_gn;/* Expression: true
                                             * Referenced by: '<S635>/Unit_Delay2'
                                             */
  boolean_T Unit_Delay1_InitialCondition_l;/* Expression: true
                                            * Referenced by: '<S635>/Unit_Delay1'
                                            */
  boolean_T Unit_Delay_InitialCondition_ad;/* Expression: false
                                            * Referenced by: '<S642>/Unit_Delay'
                                            */
  boolean_T Constant_Value_po;         /* Expression: false
                                        * Referenced by: '<S732>/Constant'
                                        */
  boolean_T Constant_Value_oj;         /* Expression: false
                                        * Referenced by: '<S799>/Constant'
                                        */
  boolean_T Constant1_Value_f2;        /* Expression: false
                                        * Referenced by: '<S732>/Constant1'
                                        */
  boolean_T Constant_Value_i1;         /* Expression: false
                                        * Referenced by: '<S800>/Constant'
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
  uint8_T FixPtConstant_Value_n;       /* Computed Parameter: FixPtConstant_Value_n
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
  uint8_T Constant_Value_mg;           /* Expression: uint8(3)
                                        * Referenced by: '<S276>/Constant'
                                        */
  uint8_T Constant1_Value_ls;          /* Expression: uint8(5)
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint8_T FixPtConstant_Value_az;      /* Computed Parameter: FixPtConstant_Value_az
                                        * Referenced by: '<S342>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_gy;      /* Computed Parameter: FixPtConstant_Value_gy
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
  uint8_T FixPtConstant_Value_p2;      /* Computed Parameter: FixPtConstant_Value_p2
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
  uint8_T UnitDelay_InitialCondition_cm[39];/* Expression: uint8(hex2dec('FF')) * ones(39, 1, 'uint8')
                                             * Referenced by: '<S506>/Unit Delay'
                                             */
  uint8_T RawData_Y0_o;                /* Computed Parameter: RawData_Y0_o
                                        * Referenced by: '<S637>/RawData'
                                        */
  uint8_T UnitDelay_InitialCondition_fw[17];/* Expression: uint8(hex2dec('FF')) * ones(17, 1, 'uint8')
                                             * Referenced by: '<S634>/Unit Delay'
                                             */
  uint8_T FixPtUnitDelay2_InitialCondi_pa;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_pa
                                           * Referenced by: '<S808>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtConstant_Value_jkx;     /* Computed Parameter: FixPtConstant_Value_jkx
                                        * Referenced by: '<S808>/FixPt Constant'
                                        */
  uint8_T Constant3_Value_k;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S852>/Constant3'
                                        */
  uint8_T Priority_Value;              /* Expression: uint8(6)
                                        * Referenced by: '<S891>/Priority'
                                        */
  uint8_T PDUFormat_Value;             /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S891>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value;           /* Expression: uint8(hex2dec('04'))
                                        * Referenced by: '<S891>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value;         /* Expression: uint8(hex2dec('FC'))
                                        * Referenced by: '<S891>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_eh;         /* Expression: BitMask
                                        * Referenced by: '<S896>/Operator'
                                        */
  uint8_T Operator_BitMask_lq;         /* Expression: BitMask
                                        * Referenced by: '<S895>/Operator'
                                        */
  uint8_T Constant_Value_b3;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S851>/Constant'
                                        */
  uint8_T Constant1_Value_nt;          /* Expression: uint8(0)
                                        * Referenced by: '<S944>/Constant1'
                                        */
  uint8_T Constant_Value_hz;           /* Expression: uint8(1)
                                        * Referenced by: '<S944>/Constant'
                                        */
  uint8_T Constant_Value_on;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S942>/Constant'
                                        */
  uint8_T Constant1_Value_dh;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S942>/Constant1'
                                        */
  uint8_T Operator_BitMask_b5;         /* Expression: BitMask
                                        * Referenced by: '<S955>/Operator'
                                        */
  uint8_T Priority_Value_p;            /* Expression: uint8(6)
                                        * Referenced by: '<S941>/Priority'
                                        */
  uint8_T PDUFormat_Value_h;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S941>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_a;         /* Expression: uint8(hex2dec('EF'))
                                        * Referenced by: '<S941>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_b;       /* Expression: uint8(hex2dec('E4'))
                                        * Referenced by: '<S941>/SourceAddress'
                                        */
  uint8_T Operator_BitMask_os;         /* Expression: BitMask
                                        * Referenced by: '<S956>/Operator'
                                        */
  uint8_T Constant2_Value_ad;          /* Expression: uint8(hex2dec('F0'))
                                        * Referenced by: '<S997>/Constant2'
                                        */
  uint8_T Constant3_Value_h3;          /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S997>/Constant3'
                                        */
  uint8_T Constant4_Value_k;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S997>/Constant4'
                                        */
  uint8_T Constant_Value_n5;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S997>/Constant'
                                        */
  uint8_T Constant1_Value_ahq;         /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S997>/Constant1'
                                        */
  uint8_T BitwiseOperator6_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S997>/Bitwise Operator6'
                                        */
  uint8_T Priority_Value_o;            /* Expression: uint8(3)
                                        * Referenced by: '<S996>/Priority'
                                        */
  uint8_T PDUFormat_Value_p;           /* Expression: uint8(hex2dec('FF'))
                                        * Referenced by: '<S996>/PDUFormat'
                                        */
  uint8_T PDUSpecific_Value_c;         /* Expression: uint8(hex2dec('56'))
                                        * Referenced by: '<S996>/PDUSpecific'
                                        */
  uint8_T SourceAddress_Value_p;       /* Expression: uint8(hex2dec('65'))
                                        * Referenced by: '<S996>/SourceAddress'
                                        */
  uint8_T BitwiseOperator8_BitMask;    /* Expression: BitMask
                                        * Referenced by: '<S997>/Bitwise Operator8'
                                        */
  uint8_T Byte8_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1027>/Byte8'
                                        */
  uint8_T Byte7_Value;                 /* Expression: uint8(255)
                                        * Referenced by: '<S1027>/Byte7'
                                        */
  uint8_T Byte6_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1027>/Byte6'
                                        */
  uint8_T Byte5_Value;                 /* Expression: uint8('*')
                                        * Referenced by: '<S1027>/Byte5'
                                        */
  uint8_T Byte4_Value;                 /* Expression: uint8('L')
                                        * Referenced by: '<S1027>/Byte4'
                                        */
  uint8_T Byte3_Value;                 /* Expression: uint8('M')
                                        * Referenced by: '<S1027>/Byte3'
                                        */
  uint8_T Byte2_Value;                 /* Expression: uint8('D')
                                        * Referenced by: '<S1027>/Byte2'
                                        */
  uint8_T Byte1_Value;                 /* Computed Parameter: Byte1_Value
                                        * Referenced by: '<S1027>/Byte1'
                                        */
  uint8_T Byte8_Value_j;               /* Expression: uint8('N')
                                        * Referenced by: '<S1026>/Byte8'
                                        */
  uint8_T Byte7_Value_g;               /* Expression: uint8('R')
                                        * Referenced by: '<S1026>/Byte7'
                                        */
  uint8_T Byte6_Value_m;               /* Expression: uint8('*')
                                        * Referenced by: '<S1026>/Byte6'
                                        */
  uint8_T Byte5_Value_k;               /* Expression: uint8('R')
                                        * Referenced by: '<S1026>/Byte5'
                                        */
  uint8_T Byte4_Value_c;               /* Expression: uint8('A')
                                        * Referenced by: '<S1026>/Byte4'
                                        */
  uint8_T Byte3_Value_p;               /* Expression: uint8('C')
                                        * Referenced by: '<S1026>/Byte3'
                                        */
  uint8_T Byte2_Value_b;               /* Expression: uint8('P')
                                        * Referenced by: '<S1026>/Byte2'
                                        */
  uint8_T Byte1_Value_m;               /* Computed Parameter: Byte1_Value_m
                                        * Referenced by: '<S1026>/Byte1'
                                        */
  uint8_T FixPtUnitDelay2_InitialCondit_j;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_j
                                           * Referenced by: '<S762>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_b;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_b
                                           * Referenced by: '<S754>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_h;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_h
                                           * Referenced by: '<S778>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondit_k;/* Computed Parameter: FixPtUnitDelay2_InitialCondit_k
                                           * Referenced by: '<S770>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_kv;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_kv
                                           * Referenced by: '<S798>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_cg;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_cg
                                           * Referenced by: '<S797>/FixPt Unit Delay2'
                                           */
  uint8_T FixPtUnitDelay2_InitialCondi_jx;/* Computed Parameter: FixPtUnitDelay2_InitialCondi_jx
                                           * Referenced by: '<S786>/FixPt Unit Delay2'
                                           */
  uint8_T Constant3_Value_g0;          /* Expression: uint8(32)
                                        * Referenced by: '<S455>/Constant3'
                                        */
  uint8_T TRUCK_1571_VIN_CPV_Value[17];/* Expression: uint8('1XPBDP9XXGD305352')
                                        * Referenced by: '<S635>/TRUCK_1571_VIN_CPV'
                                        */
  uint8_T Constant_Value_im;           /* Computed Parameter: Constant_Value_im
                                        * Referenced by: '<S639>/Constant'
                                        */
  uint8_T Unit_Delay_47_InitialCondition;/* Computed Parameter: Unit_Delay_47_InitialCondition
                                          * Referenced by: '<S3>/Unit_Delay'
                                          */
  uint8_T Byte1_Value_c;               /* Computed Parameter: Byte1_Value_c
                                        * Referenced by: '<S1024>/Byte1'
                                        */
  uint8_T Byte2_Value_m;               /* Computed Parameter: Byte2_Value_m
                                        * Referenced by: '<S1024>/Byte2'
                                        */
  uint8_T Byte3_Value_g;               /* Computed Parameter: Byte3_Value_g
                                        * Referenced by: '<S1024>/Byte3'
                                        */
  uint8_T Byte4_Value_k;               /* Computed Parameter: Byte4_Value_k
                                        * Referenced by: '<S1024>/Byte4'
                                        */
  uint8_T Byte5_Value_i;               /* Computed Parameter: Byte5_Value_i
                                        * Referenced by: '<S1024>/Byte5'
                                        */
  uint8_T Byte6_Value_o;               /* Computed Parameter: Byte6_Value_o
                                        * Referenced by: '<S1024>/Byte6'
                                        */
  uint8_T Byte7_Value_d;               /* Computed Parameter: Byte7_Value_d
                                        * Referenced by: '<S1024>/Byte7'
                                        */
  uint8_T Byte8_Value_jk;              /* Computed Parameter: Byte8_Value_jk
                                        * Referenced by: '<S1024>/Byte8'
                                        */
  uint8_T UnitDelay1_InitialCondition_o;/* Computed Parameter: UnitDelay1_InitialCondition_o
                                         * Referenced by: '<S825>/Unit Delay1'
                                         */
  uint8_T Constant1_Value_g3;          /* Computed Parameter: Constant1_Value_g3
                                        * Referenced by: '<S825>/Constant1'
                                        */
  uint8_T Constant2_Value_ol;          /* Computed Parameter: Constant2_Value_ol
                                        * Referenced by: '<S1044>/Constant2'
                                        */
  uint8_T Constant3_Value_hg;          /* Computed Parameter: Constant3_Value_hg
                                        * Referenced by: '<S1044>/Constant3'
                                        */
  uint8_T Unit_Delay_135_InitialCondition;/* Computed Parameter: Unit_Delay_135_InitialCondition
                                           * Referenced by: '<S3>/Unit_Delay'
                                           */
  uint8_T TRUCK_166_VIN_CPV_Value[17]; /* Expression: uint8('1XKYDP9X1EJ388961')
                                        * Referenced by: '<S635>/TRUCK_166_VIN_CPV'
                                        */
  uint8_T Constant_Value_mc;           /* Computed Parameter: Constant_Value_mc
                                        * Referenced by: '<S640>/Constant'
                                        */
  uint8_T Constant_Value_ns;           /* Expression: uint8(16)
                                        * Referenced by: '<S455>/Constant'
                                        */
  uint8_T Constant1_Value_hy;          /* Expression: uint8(17)
                                        * Referenced by: '<S455>/Constant1'
                                        */
  uint8_T Constant2_Value_c2;          /* Expression: uint8(19)
                                        * Referenced by: '<S455>/Constant2'
                                        */
  uint8_T Constant4_Value_oq;          /* Expression: uint8(255)
                                        * Referenced by: '<S455>/Constant4'
                                        */
  uint8_T FixPtConstant_Value_l;       /* Computed Parameter: FixPtConstant_Value_l
                                        * Referenced by: '<S754>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_iq;      /* Computed Parameter: FixPtConstant_Value_iq
                                        * Referenced by: '<S762>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_cl;      /* Computed Parameter: FixPtConstant_Value_cl
                                        * Referenced by: '<S770>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_dc;      /* Computed Parameter: FixPtConstant_Value_dc
                                        * Referenced by: '<S778>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jq;      /* Computed Parameter: FixPtConstant_Value_jq
                                        * Referenced by: '<S786>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_dx;      /* Computed Parameter: FixPtConstant_Value_dx
                                        * Referenced by: '<S797>/FixPt Constant'
                                        */
  uint8_T FixPtConstant_Value_jw;      /* Computed Parameter: FixPtConstant_Value_jw
                                        * Referenced by: '<S798>/FixPt Constant'
                                        */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_C;/* '<S943>/EXT_TRQ_CTRL_MODE_C' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_B;/* '<S943>/EXT_TRQ_CTRL_MODE_B' */
  P_ALL_CTRL_DISABLED_L4_MABX_T EXT_TRQ_CTRL_MODE_A;/* '<S943>/EXT_TRQ_CTRL_MODE_A' */
  P_ALL_CTRL_DISABLED_L4_MABX_T DEFAULT_TRQ_CTRL_MODE;/* '<S943>/DEFAULT_TRQ_CTRL_MODE' */
  P_ALL_CTRL_DISABLED_L4_MABX_T ALL_CTRL_DISABLED;/* '<S943>/ALL_CTRL_DISABLED' */
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
extern real_T SteerWheelAngle;         /* '<S631>/S-Function1' */
extern real_T YawRate;                 /* '<S631>/S-Function1' */
extern real_T SPN1810_LongitudinalAcceleration;/* '<S631>/S-Function1' */
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
extern uint8_T GLB_SWVERSION_CPV_[100];/* '<S1057>/Constant' */
extern uint8_T MABX_Mode;              /* '<S76>/Switch' */
extern boolean_T EStop;                /* '<S402>/Logical Operator1' */
extern boolean_T EnableSw;             /* '<S727>/Switch' */
extern boolean_T RTMapsOk;             /* '<S384>/AND' */
extern boolean_T EngagePB;             /* '<S402>/Logical Operator2' */
extern boolean_T AutonomousEnabled;    /* '<S76>/Autonomous Mode Switch1' */
extern boolean_T AutonomousOutputEnabled;/* '<S76>/Autonomous Mode Switch' */
extern boolean_T RateLimiterActive;    /* '<S306>/Compare' */
extern real_T Pedal_pwm_position;      /* '<S731>/Switch' */

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
                                                    * Referenced by: '<S960>/Constant7'
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
                                                      * Referenced by: '<S432>/Constant'
                                                      */
extern ENUM_CAN_RX_T PROPB_REAX_CHANNEL_APV;/* Variable: PROPB_REAX_CHANNEL_APV
                                             * Referenced by:
                                             *   '<S430>/Constant'
                                             *   '<S431>/Constant'
                                             *   '<S452>/Constant3'
                                             */
extern ENUM_LONG_SPEED_DEMAND_SOURCE_T LONG_SPEED_SRC_SELECTOR_APV;/* Variable: LONG_SPEED_SRC_SELECTOR_APV
                                                                    * Referenced by:
                                                                    *   '<S80>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    *   '<S81>/LONG_SPEED_SRC_SELECTOR_APV'
                                                                    */
extern ENUM_REAX_OPERATION_MODE_T PROPB_REAX_1_E4_DESIRED_OPMODE_APV;/* Variable: PROPB_REAX_1_E4_DESIRED_OPMODE_APV
                                                                      * Referenced by: '<S943>/Constant6'
                                                                      */
extern ENUM_STEERING_POS_SIGNAL_SOURCE_T PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV;/* Variable: PROPB_REAX_1_E4_DES_POS_SIG_SRC_APV
                                                                      * Referenced by: '<S960>/Constant1'
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
 * '<S570>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6'
 * '<S571>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel'
 * '<S572>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S573>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S574>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/RX_CAN_6/CAN_TYPE1_RX_M3_C2'
 * '<S575>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ'
 * '<S576>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ1'
 * '<S577>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ2'
 * '<S578>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ3'
 * '<S579>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ4'
 * '<S580>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_3_13/SelectChannel/EQ5'
 * '<S581>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1'
 * '<S582>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2'
 * '<S583>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3'
 * '<S584>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel'
 * '<S585>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S586>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S587>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/RX_CAN_3/CAN_TYPE1_RX_M3_C2'
 * '<S588>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ'
 * '<S589>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ1'
 * '<S590>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ2'
 * '<S591>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ3'
 * '<S592>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ4'
 * '<S593>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_REAX_4_13/SelectChannel/EQ5'
 * '<S594>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1'
 * '<S595>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2'
 * '<S596>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3'
 * '<S597>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel'
 * '<S598>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_1/CAN_TYPE1_RX_M1_C1'
 * '<S599>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_2/CAN_TYPE1_RX_M1_C2'
 * '<S600>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/RX_CAN_3/CAN_TYPE1_RX_M2_C1'
 * '<S601>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ'
 * '<S602>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ1'
 * '<S603>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ2'
 * '<S604>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ3'
 * '<S605>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ4'
 * '<S606>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PROPB_XPR_1_50/SelectChannel/EQ5'
 * '<S607>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6'
 * '<S608>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeLeft'
 * '<S609>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LaneEdgeRight'
 * '<S610>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PX2/RX_CAN_6/PX2_LanePosEst'
 * '<S611>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4'
 * '<S612>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_011'
 * '<S613>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_PosRapidUpdate_01/RX_CAN_4/PosRapidUpdate_1'
 * '<S614>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3'
 * '<S615>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_Prop2C2_Status_30/RX_CAN_3/Bendix_Prop2C2_Status_30'
 * '<S616>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1'
 * '<S617>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SSI2_03/RX_CAN_1/SSI2_031'
 * '<S618>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6'
 * '<S619>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E2/RX_CAN_6/PX2_MapLaneEgoLeft'
 * '<S620>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6'
 * '<S621>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E3/RX_CAN_6/PX2_MapLaneEgoRight'
 * '<S622>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6'
 * '<S623>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_STD_PROPB_PX2_1_E5/RX_CAN_6/PX2_EgoLanePos'
 * '<S624>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4'
 * '<S625>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_SystemTime_01/RX_CAN_4/SystemTime_01'
 * '<S626>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5'
 * '<S627>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_TC1_05/RX_CAN_5/TC1_03_05'
 * '<S628>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1'
 * '<S629>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC1_0B/RX_CAN_1/VDC1_0B_'
 * '<S630>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1'
 * '<S631>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VDC2_0B/RX_CAN_1/VDC2_0B1'
 * '<S632>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1'
 * '<S633>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VEP1_03/RX_CAN_1/VEP1'
 * '<S634>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00'
 * '<S635>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI'
 * '<S636>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/EQ1'
 * '<S637>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/Decode'
 * '<S638>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/CAN_RX_VI_00/serialize_tpdt'
 * '<S639>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero1'
 * '<S640>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/Compare To Zero2'
 * '<S641>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop'
 * '<S642>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_RX_VI_00/Decode_VI/SR flip-flop1'
 * '<S643>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/If_Then_Else'
 * '<S644>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel'
 * '<S645>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ'
 * '<S646>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ1'
 * '<S647>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ2'
 * '<S648>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ3'
 * '<S649>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ4'
 * '<S650>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/CAN_enable/SelectChannel/EQ5'
 * '<S651>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/MergeBuses'
 * '<S652>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1'
 * '<S653>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte2'
 * '<S654>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4'
 * '<S655>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6'
 * '<S656>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8'
 * '<S657>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND1'
 * '<S658>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte1/AND2'
 * '<S659>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte3_byte4/OR'
 * '<S660>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte5_byte6/OR1'
 * '<S661>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_3/decode_byte7_byte8/OR2'
 * '<S662>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/MergeBuses'
 * '<S663>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1'
 * '<S664>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte2'
 * '<S665>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte3'
 * '<S666>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte5'
 * '<S667>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7'
 * '<S668>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte8'
 * '<S669>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND'
 * '<S670>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND1'
 * '<S671>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte1/AND2'
 * '<S672>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_PropB_REAX_4/decode_byte6_byte7/OR'
 * '<S673>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM'
 * '<S674>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS'
 * '<S675>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort'
 * '<S676>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck'
 * '<S677>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS'
 * '<S678>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ'
 * '<S679>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ1'
 * '<S680>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ2'
 * '<S681>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ3'
 * '<S682>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/EQ4'
 * '<S683>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/MergeBuses'
 * '<S684>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte1'
 * '<S685>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3'
 * '<S686>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte4'
 * '<S687>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8'
 * '<S688>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte2_byte3/OR'
 * '<S689>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_BAM/decode_byte6_byte7_byte8/OR'
 * '<S690>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/MergeBuses'
 * '<S691>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte1'
 * '<S692>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte2'
 * '<S693>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte3'
 * '<S694>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8'
 * '<S695>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_CTS/decode_byte6_byte7_byte8/OR'
 * '<S696>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/MergeBuses'
 * '<S697>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte1'
 * '<S698>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte2'
 * '<S699>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8'
 * '<S700>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_ConnectionAbort/decode_byte6_byte7_byte8/OR'
 * '<S701>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/MergeBuses'
 * '<S702>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte1'
 * '<S703>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3'
 * '<S704>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte4'
 * '<S705>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8'
 * '<S706>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte2_byte3/OR'
 * '<S707>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_EndOfMessageAck/decode_byte6_byte7_byte8/OR'
 * '<S708>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/MergeBuses'
 * '<S709>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte1'
 * '<S710>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3'
 * '<S711>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte4'
 * '<S712>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte5'
 * '<S713>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8'
 * '<S714>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte2_byte3/OR'
 * '<S715>' : 'L4_MABX/INPUTS_PIC_KW/CAN_PIC_KW/Decode_TPCM/Decode_TPCM_RTS/decode_byte6_byte7_byte8/OR'
 * '<S716>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL1'
 * '<S717>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL2'
 * '<S718>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/ADC_TYPE4_BL3'
 * '<S719>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL1'
 * '<S720>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL2'
 * '<S721>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL3'
 * '<S722>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_BIT_IN_CH_BL4'
 * '<S723>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL1'
 * '<S724>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL2'
 * '<S725>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/DIO_TYPE4_PWM2D_BL3'
 * '<S726>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management'
 * '<S727>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check'
 * '<S728>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle'
 * '<S729>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals'
 * '<S730>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration'
 * '<S731>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/If_Then_Else'
 * '<S732>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion'
 * '<S733>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event'
 * '<S734>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Synchronization check sensor 1 and 2'
 * '<S735>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant1'
 * '<S736>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/Compare To Constant3'
 * '<S737>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else'
 * '<S738>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else1'
 * '<S739>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Determine common angle/If_Then_Else2'
 * '<S740>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant'
 * '<S741>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Compare To Constant2'
 * '<S742>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 1'
 * '<S743>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Health State Machine PWM Sensor 2'
 * '<S744>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket'
 * '<S745>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1'
 * '<S746>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2'
 * '<S747>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3'
 * '<S748>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4'
 * '<S749>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Check  Dynamic Range1'
 * '<S750>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Decrement Real World3'
 * '<S751>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3'
 * '<S752>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/If_Then_Else3'
 * '<S753>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Increment Real World3'
 * '<S754>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Unit Delay External IC3'
 * '<S755>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else'
 * '<S756>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket/Dynamic_saturation3/If_Then_Else1'
 * '<S757>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Check  Dynamic Range1'
 * '<S758>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Decrement Real World3'
 * '<S759>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3'
 * '<S760>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/If_Then_Else3'
 * '<S761>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Increment Real World3'
 * '<S762>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Unit Delay External IC3'
 * '<S763>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else'
 * '<S764>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket1/Dynamic_saturation3/If_Then_Else1'
 * '<S765>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Check  Dynamic Range1'
 * '<S766>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Decrement Real World3'
 * '<S767>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3'
 * '<S768>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/If_Then_Else3'
 * '<S769>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Increment Real World3'
 * '<S770>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Unit Delay External IC3'
 * '<S771>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else'
 * '<S772>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket2/Dynamic_saturation3/If_Then_Else1'
 * '<S773>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Check  Dynamic Range1'
 * '<S774>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Decrement Real World3'
 * '<S775>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3'
 * '<S776>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/If_Then_Else3'
 * '<S777>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Increment Real World3'
 * '<S778>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Unit Delay External IC3'
 * '<S779>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else'
 * '<S780>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket3/Dynamic_saturation3/If_Then_Else1'
 * '<S781>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Check  Dynamic Range1'
 * '<S782>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Decrement Real World3'
 * '<S783>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3'
 * '<S784>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/If_Then_Else3'
 * '<S785>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Increment Real World3'
 * '<S786>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Unit Delay External IC3'
 * '<S787>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else'
 * '<S788>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Diagnose pedal input signals/Leaky_bucket4/Dynamic_saturation3/If_Then_Else1'
 * '<S789>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant1'
 * '<S790>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant3'
 * '<S791>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant4'
 * '<S792>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Compare To Constant5'
 * '<S793>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else'
 * '<S794>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else1'
 * '<S795>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else2'
 * '<S796>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/If_Then_Else3'
 * '<S797>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC'
 * '<S798>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Fault arbitration/Unit Delay External IC1'
 * '<S799>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order'
 * '<S800>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1'
 * '<S801>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order/If_Then_Else'
 * '<S802>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/PWM signal filtering conversion/LPF_first_order1/If_Then_Else'
 * '<S803>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/RS flip-flop'
 * '<S804>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Rising_edge'
 * '<S805>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset'
 * '<S806>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Check Static  Lower Bound'
 * '<S807>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/If_Then_Else'
 * '<S808>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/PWM pedal input management/Slew_at_event/Slew_init_reset/Unit Delay External IC'
 * '<S809>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND'
 * '<S810>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/AND1'
 * '<S811>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck'
 * '<S812>' : 'L4_MABX/INPUTS_PIC_KW/DIGITAL/Signal Check/RationalityCheck/Chart'
 * '<S813>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/IncrementTimer'
 * '<S814>' : 'L4_MABX/INPUTS_PIC_KW/Timer_Access/Timer Interrupt'
 * '<S815>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW'
 * '<S816>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out'
 * '<S817>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10000ms'
 * '<S818>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms'
 * '<S819>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms'
 * '<S820>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms'
 * '<S821>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms'
 * '<S822>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_250ms'
 * '<S823>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms'
 * '<S824>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms'
 * '<S825>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM'
 * '<S826>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate'
 * '<S827>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31'
 * '<S828>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00'
 * '<S829>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND'
 * '<S830>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND1'
 * '<S831>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND2'
 * '<S832>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND3'
 * '<S833>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND4'
 * '<S834>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/AND5'
 * '<S835>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4'
 * '<S836>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AIR1_31/TX_CAN4/AIR1'
 * '<S837>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND'
 * '<S838>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND1'
 * '<S839>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND2'
 * '<S840>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND3'
 * '<S841>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND4'
 * '<S842>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/AND5'
 * '<S843>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4'
 * '<S844>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_1000ms/CAN_TX_AMB_00/TX_CAN4/AMB'
 * '<S845>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00'
 * '<S846>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4'
 * '<S847>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC'
 * '<S848>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate'
 * '<S849>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B'
 * '<S850>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EffortsValue'
 * '<S851>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5'
 * '<S852>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC'
 * '<S853>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate'
 * '<S854>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2'
 * '<S855>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6'
 * '<S856>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN2/CCVS1_00'
 * '<S857>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_CCVS1_00/TX_CAN6/CCVS1_00'
 * '<S858>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2'
 * '<S859>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6'
 * '<S860>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN2/PropB_REAX_5_E4'
 * '<S861>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_REAX_5_E4/TX_CAN6/PropB_REAX_5_E4'
 * '<S862>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND'
 * '<S863>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND1'
 * '<S864>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND10'
 * '<S865>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND11'
 * '<S866>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND2'
 * '<S867>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND3'
 * '<S868>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND4'
 * '<S869>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND5'
 * '<S870>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND6'
 * '<S871>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND7'
 * '<S872>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND8'
 * '<S873>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/AND9'
 * '<S874>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1'
 * '<S875>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3'
 * '<S876>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN1/PropB_XPR_FC'
 * '<S877>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/CAN_TX_PROPB_XPR_FC/TX_CAN3/PropB_XPR_FC'
 * '<S878>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX'
 * '<S879>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/COGSRapidUpdate/TX/Std_COGSOGRapidUpdate_01'
 * '<S880>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B'
 * '<S881>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/EBC1_8B/TX_EBC1_8B/EBC1_TX'
 * '<S882>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND'
 * '<S883>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_REAX_5/AND1'
 * '<S884>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND1'
 * '<S885>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND10'
 * '<S886>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND2'
 * '<S887>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND3'
 * '<S888>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND4'
 * '<S889>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/AND5'
 * '<S890>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum'
 * '<S891>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID'
 * '<S892>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR'
 * '<S893>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/OR1'
 * '<S894>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter'
 * '<S895>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND1'
 * '<S896>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND10'
 * '<S897>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND5'
 * '<S898>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND6'
 * '<S899>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND7'
 * '<S900>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Encode_PropB_XPR_FC_checksum/AND8'
 * '<S901>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/MessageID/OR'
 * '<S902>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Increment Real World1'
 * '<S903>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/Encode_PropB_XPR_FC/Rolling_15_counter/Wrap To Zero1'
 * '<S904>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX'
 * '<S905>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_100ms/POSRapidUpdate/TX/Std_PosRapidUpdate_01'
 * '<S906>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4'
 * '<S907>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00'
 * '<S908>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4'
 * '<S909>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B'
 * '<S910>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1'
 * '<S911>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND'
 * '<S912>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND1'
 * '<S913>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND2'
 * '<S914>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND3'
 * '<S915>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND4'
 * '<S916>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/AND5'
 * '<S917>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4'
 * '<S918>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_ACCS_E4/TX_CAN4/ACCS'
 * '<S919>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND'
 * '<S920>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND1'
 * '<S921>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND2'
 * '<S922>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND3'
 * '<S923>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND4'
 * '<S924>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/AND5'
 * '<S925>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4'
 * '<S926>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5'
 * '<S927>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN4/EEC1_00'
 * '<S928>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_EEC1_00/TX_CAN5/EEC1_00'
 * '<S929>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2'
 * '<S930>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6'
 * '<S931>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN2/PropB_REAX_1_E4'
 * '<S932>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_PROPB_REAX_1_E4/TX_CAN6/PropB_REAX_1_E4'
 * '<S933>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND'
 * '<S934>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND1'
 * '<S935>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND2'
 * '<S936>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND3'
 * '<S937>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND4'
 * '<S938>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/AND5'
 * '<S939>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5'
 * '<S940>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/CAN_TX_VDC2_0B/TX_CAN5/VDC2_0B'
 * '<S941>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4'
 * '<S942>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1'
 * '<S943>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController'
 * '<S944>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_DesiredOperatingMode'
 * '<S945>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter'
 * '<S946>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/CAN_ID_PropB_REAX_1_E4/OR'
 * '<S947>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND'
 * '<S948>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND1'
 * '<S949>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND2'
 * '<S950>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND3'
 * '<S951>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND4'
 * '<S952>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND5'
 * '<S953>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND6'
 * '<S954>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND7'
 * '<S955>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND8'
 * '<S956>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/AND9'
 * '<S957>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/Encode_PROPB_REAX_1/OR2'
 * '<S958>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/ALL_CTRL_DISABLED'
 * '<S959>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/DEFAULT_TRQ_CTRL_MODE'
 * '<S960>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Desired_Steering_Angle'
 * '<S961>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ'
 * '<S962>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ1'
 * '<S963>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ2'
 * '<S964>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ3'
 * '<S965>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ4'
 * '<S966>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EQ5'
 * '<S967>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_A'
 * '<S968>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_B'
 * '<S969>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/EXT_TRQ_CTRL_MODE_C'
 * '<S970>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/Limit'
 * '<S971>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_CommandFromExternalController/POSITION_CONTROL_MODE'
 * '<S972>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair'
 * '<S973>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S974>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S975>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S976>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_10ms/Encode_PROPB_REAX_1/PropB_REAX_1_E4_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S977>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3'
 * '<S978>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65'
 * '<S979>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY'
 * '<S980>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR'
 * '<S981>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3'
 * '<S982>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/AND'
 * '<S983>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/Compare To Constant'
 * '<S984>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3'
 * '<S985>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PROPB_XBR_B3/TX_CAN3/PropB_XBR_B3'
 * '<S986>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3'
 * '<S987>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_PropB_2C2_XPR_65/TX_CAN3/PropB_Bendix_2C2_XPR'
 * '<S988>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND'
 * '<S989>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND1'
 * '<S990>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND2'
 * '<S991>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND3'
 * '<S992>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND4'
 * '<S993>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/AND5'
 * '<S994>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6'
 * '<S995>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/CAN_TX_STD_ODOMETRY/TX_CAN6/Std_OdometryData'
 * '<S996>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/CAN_ID_PropB_2C2_XPR_65'
 * '<S997>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/Encode_PropB_2C2_XPR'
 * '<S998>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/If_Then_Else1'
 * '<S999>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter'
 * '<S1000>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair'
 * '<S1001>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE'
 * '<S1002>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/EQ'
 * '<S1003>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1004>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_2C2_XPR/PropB_2C2_XPR_MessageCounter/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1005>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_20ms/Encode_PropB_XBR_B3/If_Then_Else'
 * '<S1006>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4'
 * '<S1007>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST'
 * '<S1008>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN'
 * '<S1009>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5'
 * '<S1010>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/AND'
 * '<S1011>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/CAN_TX_RQST_13_E4/TX_CAN5/RQST_13_E4'
 * '<S1012>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND'
 * '<S1013>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND1'
 * '<S1014>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/Encode_RQST/AND2'
 * '<S1015>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair'
 * '<S1016>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE'
 * '<S1017>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/EQ'
 * '<S1018>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Enable'
 * '<S1019>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_5000ms/RQST_13_E4_PGN/Repeating_Sequence_Stair/Counter_RE/Reset'
 * '<S1020>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1'
 * '<S1021>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05'
 * '<S1022>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_CCVS1/CCVS1_E3'
 * '<S1023>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_50ms/CAN_TX_TC1_05/TC1_03_05'
 * '<S1024>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/CM'
 * '<S1025>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/Chart'
 * '<S1026>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame1'
 * '<S1027>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/DataFrame2'
 * '<S1028>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM'
 * '<S1029>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT'
 * '<S1030>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPCM/CAN_TYPE1_TX_M1_C1'
 * '<S1031>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_BAM/TX_TPDT/CAN_TYPE1_TX_M1_C1'
 * '<S1032>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01'
 * '<S1033>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6'
 * '<S1034>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/AND'
 * '<S1035>' : 'L4_MABX/OUTPUTS_PIC_KW/CAN_Out_PIC_KW/CAN_TX_VariableRate/CAN_TX_Std_SystemTime_01/TX_CAN6/Std_SystemTime_01'
 * '<S1036>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL1'
 * '<S1037>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL2'
 * '<S1038>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL3'
 * '<S1039>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_BIT_OUT_CH_BL4'
 * '<S1040>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL1'
 * '<S1041>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/DIO_TYPE4_PWM_BL2'
 * '<S1042>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values'
 * '<S1043>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control'
 * '<S1044>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights'
 * '<S1045>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else1'
 * '<S1046>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else2'
 * '<S1047>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else4'
 * '<S1048>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Determine pedal PWM and duty cycle values/If_Then_Else5'
 * '<S1049>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero'
 * '<S1050>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/Compare To Zero1'
 * '<S1051>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Shift Control/If_Then_Else'
 * '<S1052>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ1'
 * '<S1053>' : 'L4_MABX/OUTPUTS_PIC_KW/DIGITAL_out/Status Indicator Lights/EQ2'
 * '<S1054>' : 'L4_MABX/RTI Data/RTI Data Store'
 * '<S1055>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store'
 * '<S1056>' : 'L4_MABX/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S1057>' : 'L4_MABX/VersionInformation/EnabledSubsystem'
 */
#endif                                 /* RTW_HEADER_L4_MABX_h_ */
