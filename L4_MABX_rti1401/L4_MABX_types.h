/*
 * L4_MABX_types.h
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

#ifndef RTW_HEADER_L4_MABX_types_h_
#define RTW_HEADER_L4_MABX_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "EnumTypes.h"
#include "dsa_gen_RTMapsRX.h"
#include "dsa_gen_RTMapsTX.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_isB4Cw3Ovpp8VfzP6RUqbD_
#define DEFINED_TYPEDEF_FOR_struct_isB4Cw3Ovpp8VfzP6RUqbD_

typedef struct {
  int32_T OutputPortsWidth;
} struct_isB4Cw3Ovpp8VfzP6RUqbD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_6Hj7z6Di1PEUr8TFSJkHvD_
#define DEFINED_TYPEDEF_FOR_struct_6Hj7z6Di1PEUr8TFSJkHvD_

typedef struct {
  int32_T OutputPortsWidth[2];
} struct_6Hj7z6Di1PEUr8TFSJkHvD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_z8IL72b4r57TjkVvP5IoWE_
#define DEFINED_TYPEDEF_FOR_struct_z8IL72b4r57TjkVvP5IoWE_

typedef struct {
  int32_T InputPortsWidth[2];
} struct_z8IL72b4r57TjkVvP5IoWE;

#endif

/* Parameters for system: '<S112>/Calculate_D_term' */
typedef struct P_Calculate_D_term_L4_MABX_T_ P_Calculate_D_term_L4_MABX_T;

/* Parameters for system: '<S112>/Calculate_I_term' */
typedef struct P_Calculate_I_term_L4_MABX_T_ P_Calculate_I_term_L4_MABX_T;

/* Parameters for system: '<S977>/ALL_CTRL_DISABLED' */
typedef struct P_ALL_CTRL_DISABLED_L4_MABX_T_ P_ALL_CTRL_DISABLED_L4_MABX_T;

/* Parameters (default storage) */
typedef struct P_L4_MABX_T_ P_L4_MABX_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_L4_MABX_T RT_MODEL_L4_MABX_T;

#endif                                 /* RTW_HEADER_L4_MABX_types_h_ */
