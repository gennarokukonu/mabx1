/**
 * dsa_gen_rx_RTMapsDecode1_sfun.c
 *
 *    ABSTRACT:
 *      The purpose of this sfunction is to call a simple legacy
 *      function during simulation:
 *
 *         void Update_Rx_RTMapsDecode1(uint8 u1[], uint32 u2, uint32 u3, RTMapsRx_Pos y1[1], int32 y2[1], double y3[1])
 *
 *    Simulink version           : 9.1 (R2018a) 06-Feb-2018
 *    C source code generated on : 25-Jan-2019 14:04:40
 *
 * THIS S-FUNCTION IS GENERATED BY THE LEGACY CODE TOOL AND MAY NOT WORK IF MODIFIED
 */

/**
     %%%-MATLAB_Construction_Commands_Start
     def = legacy_code('initialize');
     def.SFunctionName = 'dsa_gen_rx_RTMapsDecode1_sfun';
     def.OutputFcnSpec = 'void Update_Rx_RTMapsDecode1(uint8 u1[], uint32 u2, uint32 u3, RTMapsRx_Pos y1[1], int32 y2[1], double y3[1])';
     def.StartFcnSpec = 'void Init_Rx_RTMapsDecode1()';
     def.HeaderFiles = {'dsa_gen_rx_RTMapsDecode1.h'};
     def.SourceFiles = {'dsa_gen_rx_RTMapsDecode1.c'};
     def.Options.outputsConditionallyWritten = true;
     legacy_code('sfcn_cmex_generate', def);
     legacy_code('compile', def);
     %%%-MATLAB_Construction_Commands_End
 */

/* Must specify the S_FUNCTION_NAME as the name of the S-function */
#define S_FUNCTION_NAME  dsa_gen_rx_RTMapsDecode1_sfun
#define S_FUNCTION_LEVEL 2

/**
 * Need to include simstruc.h for the definition of the SimStruct and
 * its associated macro definitions.
 */
#include "simstruc.h"

#include <string.h>
#include <stdlib.h>

/* Specific header file(s) required by the legacy code function */
#include "dsa_gen_rx_RTMapsDecode1.h"

/* Specific header file(s) required for data types declarations */
#include "dsa_gen_RTMapsRx_Pos.h"

#define IS_SIMULATION_TARGET(S) (ssRTWGenIsAccelerator(S) || ssIsRapidAcceleratorActive(S) || ssRTWGenIsModelReferenceSimTarget(S) || (ssGetSimMode(S)==SS_SIMMODE_NORMAL) || (ssGetSimMode(S)==SS_SIMMODE_SIZES_CALL_ONLY) || !((ssRTWGenIsCodeGen(S) || ssGetSimMode(S)==SS_SIMMODE_EXTERNAL) && GetRTWEnvironmentMode(S)==0))


/* Utility function prototypes */
static void CheckDataTypes(SimStruct *S);
static int_T GetRTWEnvironmentMode(SimStruct *S);

/* Function: mdlInitializeSizes ===========================================
 * Abstract:
 *   The sizes information is used by Simulink to determine the S-function
 *   block's characteristics (number of inputs, outputs, states, etc.).
 */
static void mdlInitializeSizes(SimStruct *S)
{
    /* Flag for detecting standalone or simulation target mode */
    boolean_T isSimulationTarget = IS_SIMULATION_TARGET(S);

    /* Number of expected parameters */
    ssSetNumSFcnParams(S, 0);


    /* Set the number of work vectors */
    if (!IS_SIMULATION_TARGET(S)) {
        ssSetNumPWork(S, 0);
        if (!ssSetNumDWork(S, 0)) return;
    } else {
        ssSetNumPWork(S, 1);
        if (!ssSetNumDWork(S, 2)) return;

        /* Configure the dwork 1 (__dtSizeInfo) */
        ssSetDWorkDataType(S, 0, SS_INT32);
        ssSetDWorkUsageType(S, 0, SS_DWORK_USED_AS_DWORK);
        ssSetDWorkName(S, 0, "dtSizeInfo");
        ssSetDWorkWidth(S, 0, 3);
        ssSetDWorkComplexSignal(S, 0, COMPLEX_NO);

        /* Configure the dwork 2 (__dtBusInfo) */
        ssSetDWorkDataType(S, 1, SS_INT32);
        ssSetDWorkUsageType(S, 1, SS_DWORK_USED_AS_DWORK);
        ssSetDWorkName(S, 1, "dtBusInfo");
        ssSetDWorkWidth(S, 1, 8);
        ssSetDWorkComplexSignal(S, 1, COMPLEX_NO);
    } /* if */

    /* Set the number of input ports */
    if (!ssSetNumInputPorts(S, 3)) return;

    /* Configure the input port 1 */
    ssSetInputPortDataType(S, 0, SS_UINT8);
    {
        int_T u1Width = DYNAMICALLY_SIZED;
        ssSetInputPortWidth(S, 0, u1Width);
    }
    ssSetInputPortComplexSignal(S, 0, COMPLEX_NO);
    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortAcceptExprInRTW(S, 0, 0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
    ssSetInputPortRequiredContiguous(S, 0, 1);

    /* Configure the input port 2 */
    ssSetInputPortDataType(S, 1, SS_UINT32);
    {
        int_T u2Width = 1;
        ssSetInputPortWidth(S, 1, u2Width);
    }
    ssSetInputPortComplexSignal(S, 1, COMPLEX_NO);
    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortAcceptExprInRTW(S, 1, 1);
    ssSetInputPortOverWritable(S, 1, 1);
    ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
    ssSetInputPortRequiredContiguous(S, 1, 1);

    /* Configure the input port 3 */
    ssSetInputPortDataType(S, 2, SS_UINT32);
    {
        int_T u3Width = 1;
        ssSetInputPortWidth(S, 2, u3Width);
    }
    ssSetInputPortComplexSignal(S, 2, COMPLEX_NO);
    ssSetInputPortDirectFeedThrough(S, 2, 1);
    ssSetInputPortAcceptExprInRTW(S, 2, 1);
    ssSetInputPortOverWritable(S, 2, 1);
    ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
    ssSetInputPortRequiredContiguous(S, 2, 1);

    /* Set the number of output ports */
    if (!ssSetNumOutputPorts(S, 3)) return;

    /* Configure the output port 1 */
    #if defined(MATLAB_MEX_FILE) 
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
        DTypeId dataTypeIdReg;

        ssRegisterTypeFromNamedObject(S, "RTMapsRx_Pos", &dataTypeIdReg);
        if(dataTypeIdReg == INVALID_DTYPE_ID) return;

        ssSetOutputPortDataType(S, 0, dataTypeIdReg);
    } /* if */
    #endif
    ssSetBusOutputObjectName(S, 0, (void *)"RTMapsRx_Pos");
    ssSetBusOutputAsStruct(S, 0, 1);
    {
        int_T y1Width = 1;
        ssSetOutputPortWidth(S, 0, y1Width);
    }
    ssSetOutputPortComplexSignal(S, 0, COMPLEX_NO);
    ssSetOutputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
    ssSetOutputPortOutputExprInRTW(S, 0, 0);

    /* Configure the output port 2 */
    ssSetOutputPortDataType(S, 1, SS_INT32);
    {
        int_T y2Width = 1;
        ssSetOutputPortWidth(S, 1, y2Width);
    }
    ssSetOutputPortComplexSignal(S, 1, COMPLEX_NO);
    ssSetOutputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
    ssSetOutputPortOutputExprInRTW(S, 1, 0);

    /* Configure the output port 3 */
    ssSetOutputPortDataType(S, 2, SS_DOUBLE);
    {
        int_T y3Width = 1;
        ssSetOutputPortWidth(S, 2, y3Width);
    }
    ssSetOutputPortComplexSignal(S, 2, COMPLEX_NO);
    ssSetOutputPortOptimOpts(S, 2, SS_NOT_REUSABLE_AND_GLOBAL);
    ssSetOutputPortOutputExprInRTW(S, 2, 0);

    /* Register reserved identifiers to avoid name conflict */
    if (ssRTWGenIsCodeGen(S) || ssGetSimMode(S)==SS_SIMMODE_EXTERNAL) {

        /* Register reserved identifier for  */
        ssRegMdlInfo(S, "Init_Rx_RTMapsDecode1", MDL_INFO_ID_RESERVED, 0, 0, ssGetPath(S));

        /* Register reserved identifier for  */
        ssRegMdlInfo(S, "Update_Rx_RTMapsDecode1", MDL_INFO_ID_RESERVED, 0, 0, ssGetPath(S));

        /* Register reserved identifier for wrappers */
        if (isSimulationTarget) {

            /* Register reserved identifier for  */
            ssRegMdlInfo(S, "Init_Rx_RTMapsDecode1_wrapper_Start", MDL_INFO_ID_RESERVED, 0, 0, ssGetPath(S));

            /* Register reserved identifier for  */
            ssRegMdlInfo(S, "Update_Rx_RTMapsDecode1_wrapper_Output", MDL_INFO_ID_RESERVED, 0, 0, ssGetPath(S));

            /* Register reserved identifier for allocating PWork for SimulationTarget */
            ssRegMdlInfo(S, "dsa_gen_rx_RTMapsDecode1_sfun_wrapper_allocmem", MDL_INFO_ID_RESERVED, 0, 0, ssGetPath(S));

            /* Register reserved identifier for freeing PWork for SimulationTarget */
            ssRegMdlInfo(S, "dsa_gen_rx_RTMapsDecode1_sfun_wrapper_freemem", MDL_INFO_ID_RESERVED, 0, 0, ssGetPath(S));
        } /* if */
    } /* if */

    /* This S-function can be used in referenced model simulating in normal mode */
    ssSetModelReferenceNormalModeSupport(S, MDL_START_AND_MDL_PROCESS_PARAMS_OK);

    /* Set the number of sample time */
    ssSetNumSampleTimes(S, 1);

    /* Set the compliance with the SimState feature */
    ssSetSimStateCompliance(S, USE_DEFAULT_SIM_STATE);

    ssSetSupportedForRowMajorCodeGen(S, true);

    ssSetArrayLayoutForCodeGen(S, SS_COLUMN_MAJOR);

    /* Set the Simulink version this S-Function has been generated in */
    ssSetSimulinkVersionGeneratedIn(S, "9.1");

    /**
     * All options have the form SS_OPTION_<name> and are documented in
     * matlabroot/simulink/include/simstruc.h. The options should be
     * bitwise or'd together as in
     *    ssSetOptions(S, (SS_OPTION_name1 | SS_OPTION_name2))
     */
    ssSetOptions(S,
        SS_OPTION_USE_TLC_WITH_ACCELERATOR |
        SS_OPTION_CAN_BE_CALLED_CONDITIONALLY |
        SS_OPTION_EXCEPTION_FREE_CODE |
        SS_OPTION_WORKS_WITH_CODE_REUSE |
        SS_OPTION_SFUNCTION_INLINED_FOR_RTW |
        SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME
    );

    /* Verify Data Type consistency with specification */
    #if defined(MATLAB_MEX_FILE)
    if ((ssGetSimMode(S)!=SS_SIMMODE_SIZES_CALL_ONLY) && !ssRTWGenIsCodeGen(S)) {
        CheckDataTypes(S);
    } /* if */
    #endif
}

/* Function: mdlInitializeSampleTimes =====================================
 * Abstract:
 *   This function is used to specify the sample time(s) for your
 *   S-function. You must register the same number of sample times as
 *   specified in ssSetNumSampleTimes.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
    ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);

    #if defined(ssSetModelReferenceSampleTimeDefaultInheritance)
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
    #endif
}

#define MDL_SET_INPUT_PORT_DIMENSION_INFO
#if defined(MDL_SET_INPUT_PORT_DIMENSION_INFO) && defined(MATLAB_MEX_FILE)
/* Function: mdlSetInputPortDimensionInfo =================================
 * Abstract:
 *   This method is called with the candidate dimensions for an input port
 *   with unknown dimensions. If the proposed dimensions are acceptable, the
 *   method should go ahead and set the actual port dimensions.
 *   If they are unacceptable an error should be generated via
 *   ssSetErrorStatus.
 *   Note that any other input or output ports whose dimensions are
 *   implicitly defined by virtue of knowing the dimensions of the given
 *   port can also have their dimensions set.
 */
static void mdlSetInputPortDimensionInfo(SimStruct *S, int_T portIndex, const DimsInfo_T *dimsInfo)
{
    /* Set input port dimension */
    if(!ssSetInputPortDimensionInfo(S, portIndex, dimsInfo)) return;
}
#endif

#define MDL_SET_OUTPUT_PORT_DIMENSION_INFO
#if defined(MDL_SET_OUTPUT_PORT_DIMENSION_INFO) && defined(MATLAB_MEX_FILE)
/* Function: mdlSetOutputPortDimensionInfo ================================
 * Abstract:
 *   This method is called with the candidate dimensions for an output port
 *   with unknown dimensions. If the proposed dimensions are acceptable, the
 *   method should go ahead and set the actual port dimensions.
 *   If they are unacceptable an error should be generated via
 *   ssSetErrorStatus.
 *   Note that any other input or output ports whose dimensions are
 *   implicitly defined by virtue of knowing the dimensions of the given
 *   port can also have their dimensions set.
 */
static void mdlSetOutputPortDimensionInfo(SimStruct *S, int_T portIndex, const DimsInfo_T *dimsInfo)
{
    /* Set output port dimension */
    if(!ssSetOutputPortDimensionInfo(S, portIndex, dimsInfo)) return;
}
#endif

#define MDL_SET_DEFAULT_PORT_DIMENSION_INFO
#if defined(MDL_SET_DEFAULT_PORT_DIMENSION_INFO) && defined(MATLAB_MEX_FILE)
/* Function: mdlSetDefaultPortDimensionInfo ===============================
 * Abstract:
 *   This method is called when there is not enough information in your
 *   model to uniquely determine the port dimensionality of signals
 *   entering or leaving your block. When this occurs, Simulink's
 *   dimension propagation engine calls this method to ask you to set
 *   your S-functions default dimensions for any input and output ports
 *   that are dynamically sized.
 *   If you do not provide this method and you have dynamically sized ports
 *   where Simulink does not have enough information to propagate the
 *   dimensionality to your S-function, then Simulink will set these unknown
 *   ports to the 'block width' which is determined by examining any known
 *   ports. If there are no known ports, the width will be set to 1.
 */
static void mdlSetDefaultPortDimensionInfo(SimStruct *S)
{

    /* Set input port 1 default dimension */
    if (ssGetInputPortWidth(S, 0) == DYNAMICALLY_SIZED) {
        ssSetInputPortWidth(S, 0, 1);
    } /* if */
}
#endif

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)
/* Function: mdlSetWorkWidths =============================================
 * Abstract:
 *   The optional method, mdlSetWorkWidths is called after input port
 *   width, output port width, and sample times of the S-function have
 *   been determined to set any state and work vector sizes which are
 *   a function of the input, output, and/or sample times. 
 *   Run-time parameters are registered in this method using methods 
 *   ssSetNumRunTimeParams, ssSetRunTimeParamInfo, and related methods.
 */
static void mdlSetWorkWidths(SimStruct *S)
{
}
#endif

#define MDL_START
#if defined(MDL_START)
/* Function: mdlStart =====================================================
 * Abstract:
 *   This function is called once at start of model execution. If you
 *   have states that should be initialized once, this is the place
 *   to do it.
 */
static void mdlStart(SimStruct *S)
{
    if (IS_SIMULATION_TARGET(S)) {

        /* Access bus/struct information */
        int32_T* __dtSizeInfo = (int32_T*) ssGetDWork(S, 0);
        int32_T* __dtBusInfo = (int32_T*) ssGetDWork(S, 1);


        /* Get common data type Id */
        DTypeId __RTMapsRx_PosId = ssGetDataTypeId(S, "RTMapsRx_Pos");
        DTypeId __int32Id = ssGetDataTypeId(S, "int32");
        DTypeId __doubleId = ssGetDataTypeId(S, "double");

        /* Get common data type size */
        __dtSizeInfo[0] = ssGetDataTypeSize(S, __RTMapsRx_PosId);
        __dtSizeInfo[1] = ssGetDataTypeSize(S, __int32Id);
        __dtSizeInfo[2] = ssGetDataTypeSize(S, __doubleId);

        /* Get information for accessing RTMapsRx_Pos.SequencePos */
        __dtBusInfo[0] = ssGetBusElementOffset(S, __RTMapsRx_PosId, 0);
        __dtBusInfo[1] = __dtSizeInfo[1];

        /* Get information for accessing RTMapsRx_Pos.Position_m */
        __dtBusInfo[2] = ssGetBusElementOffset(S, __RTMapsRx_PosId, 1);
        __dtBusInfo[3] = 3*__dtSizeInfo[2];

        /* Get information for accessing RTMapsRx_Pos.Orientation_rad */
        __dtBusInfo[4] = ssGetBusElementOffset(S, __RTMapsRx_PosId, 2);
        __dtBusInfo[5] = 4*__dtSizeInfo[2];

        /* Get information for accessing RTMapsRx_Pos.Heading_rad */
        __dtBusInfo[6] = ssGetBusElementOffset(S, __RTMapsRx_PosId, 3);
        __dtBusInfo[7] = __dtSizeInfo[2];


        /* Alloc memory for the pwork 1 (__y1BUS) */
        {
            RTMapsRx_Pos* __y1BUS = (RTMapsRx_Pos*)calloc(sizeof(RTMapsRx_Pos), ssGetOutputPortWidth(S, 0));
            if (__y1BUS==NULL) {
                ssSetErrorStatus(S, "Unexpected error during the memory allocation for __y1BUS");
                return;
            } /* if */
            ssSetPWorkValue(S, 0, __y1BUS);
        }

        {

            /* Call the legacy code function */
            Init_Rx_RTMapsDecode1();
        }
    } /* if */
}
#endif

/* Function: mdlOutputs ===================================================
 * Abstract:
 *   In this function, you compute the outputs of your S-function
 *   block. Generally outputs are placed in the output vector(s),
 *   ssGetOutputPortSignal.
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    if (IS_SIMULATION_TARGET(S)) {

        /* Access bus/struct information */
        int32_T* __dtSizeInfo = (int32_T*) ssGetDWork(S, 0);
        int32_T* __dtBusInfo = (int32_T*) ssGetDWork(S, 1);


        /* Get access to Parameter/Input/Output/DWork data */
        uint8_T* u1 = (uint8_T*) ssGetInputPortSignal(S, 0);
        uint32_T* u2 = (uint32_T*) ssGetInputPortSignal(S, 1);
        uint32_T* u3 = (uint32_T*) ssGetInputPortSignal(S, 2);
        char* y1 = (char*) ssGetOutputPortSignal(S, 0);
        int32_T* y2 = (int32_T*) ssGetOutputPortSignal(S, 1);
        real_T* y3 = (real_T*) ssGetOutputPortSignal(S, 2);

        RTMapsRx_Pos* __y1BUS = (RTMapsRx_Pos*) ssGetPWorkValue(S, 0);

        /* Call the legacy code function */
        Update_Rx_RTMapsDecode1(u1, *u2, *u3, __y1BUS, y2, y3);

        /* Assign the user structure __y1BUS to the Simulink structure y1 */
        (void) memcpy(y1 +  __dtBusInfo[0], &__y1BUS[0].SequencePos,  __dtBusInfo[1]);
        (void) memcpy(y1 +  __dtBusInfo[2], __y1BUS[0].Position_m,  __dtBusInfo[3]);
        (void) memcpy(y1 +  __dtBusInfo[4], __y1BUS[0].Orientation_rad,  __dtBusInfo[5]);
        (void) memcpy(y1 +  __dtBusInfo[6], &__y1BUS[0].Heading_rad,  __dtBusInfo[7]);
    } /* if */
}

/* Function: mdlTerminate =================================================
 * Abstract:
 *   In this function, you should perform any actions that are necessary
 *   at the termination of a simulation.
 */
static void mdlTerminate(SimStruct *S)
{
    if (IS_SIMULATION_TARGET(S)) {

        /* Access bus/struct information */
        int32_T* __dtSizeInfo = (int32_T*) ssGetDWork(S, 0);
        int32_T* __dtBusInfo = (int32_T*) ssGetDWork(S, 1);


        /* Free memory for the pwork 1 (__y1BUS) */
        {
            RTMapsRx_Pos* __y1BUS = (RTMapsRx_Pos*)ssGetPWorkValue(S, 0);
            if (__y1BUS!=NULL) {
                free(__y1BUS);
                ssSetPWorkValue(S, 0, NULL);
            } /* if */
        }

    } /* if */
}

/* Function: CheckDataTypeChecksum ========================================
 * Abstract:
 *   CheckDataTypeChecksum invokes a MATLAB helper for checking the consistency
 *   between the data type definition used when this S-Function was generated
 *   and the data type used when calling the S-Function.
 */
static int_T CheckDataTypeChecksum(SimStruct *S, const char* dtypeName, uint32_T* chkRef)
{
    mxArray *plhs[1] = {NULL};
    mxArray *prhs[3];
    mxArray *err = NULL;
    const char *bpath = ssGetPath(S);
    int_T status = -1;

    prhs[0] = mxCreateString(bpath);
    prhs[1] = mxCreateString(dtypeName);
    prhs[2] = mxCreateDoubleMatrix(1, 4, mxREAL);
    mxGetPr(prhs[2])[0] = chkRef[0];
    mxGetPr(prhs[2])[1] = chkRef[1];
    mxGetPr(prhs[2])[2] = chkRef[2];
    mxGetPr(prhs[2])[3] = chkRef[3];

    err = mexCallMATLABWithTrap(1, plhs, 3, prhs, "legacycode.LCT.getOrCompareDataTypeChecksum");
    mxDestroyArray(prhs[0]);
    mxDestroyArray(prhs[1]);
    mxDestroyArray(prhs[2]);

    if (err==NULL && plhs[0]!=NULL) {
        status = mxIsEmpty(plhs[0]) ? -1 : (int_T) (mxGetScalar(plhs[0]) != 0);
        mxDestroyArray(plhs[0]);
    } /* if */

    return status;
}

/* Function: CheckDataTypes ===============================================
 * Abstract:
 *   CheckDataTypes verifies data type consistency between the data type 
 *   definition used when this S-Function was generated and the data type
 *   used when calling the S-Function.
 */
static void CheckDataTypes(SimStruct *S)
{

    /* Verify Bus/StructType 'RTMapsRx_Pos', specification */
    {
        uint32_T chk[] = {3311070685, 3496430781, 2497945028, 1776297071};
        int_T status;
        status = CheckDataTypeChecksum(S, "RTMapsRx_Pos", &chk[0]);
        if (status==-1) {
          ssSetErrorStatus(S, "Unexpected error when checking the validity of the Simulink Bus/StructType 'RTMapsRx_Pos'");
        } else if (status==0) {
          ssSetErrorStatus(S, "The Simulink Bus/StructType 'RTMapsRx_Pos' definition has changed since the S-Function was generated");
        }
    }
}

/* Function: GetRTWEnvironmentMode ========================================
 * Abstract:
 *   Must be called when ssRTWGenIsCodeGen(S)==true. This function
 *   returns the code generation mode:
 *       -1 if an error occurred
 *        0 for standalone code generation target
 *        1 for simulation target (Accelerator, RTW-SFcn,...)
 */
static int_T GetRTWEnvironmentMode(SimStruct *S)
{
    int_T status;
    mxArray * err;
    mxArray *plhs[1];
    mxArray *prhs[1];

    /* Get the name of the Simulink block diagram */
    prhs[0] = mxCreateString(ssGetModelName(ssGetRootSS(S)));
    plhs[0] = NULL;

    /* Call "isSimulationTarget = rtwenvironmentmode(modelName)" in MATLAB */
    err = mexCallMATLABWithTrap(1, plhs, 1, prhs, "rtwenvironmentmode");

    mxDestroyArray(prhs[0]);

    /* Set the error status if an error occurred */
    if (err) {
        if (plhs[0]) {
            mxDestroyArray(plhs[0]);
            plhs[0] = NULL;
        } /* if: } */
        ssSetErrorStatus(S, "Unknown error during call to 'rtwenvironmentmode'.");
        return -1;
    } /* if */

    /* Get the value returned by rtwenvironmentmode(modelName) */
    if (plhs[0]) {
        status = (int_T) (mxGetScalar(plhs[0]) != 0);
        mxDestroyArray(plhs[0]);
        plhs[0] = NULL;
    } /* if */

    return status;
}

/* Required S-function trailer */
#ifdef    MATLAB_MEX_FILE
# include "simulink.c"
#else
# include "cg_sfun.h"
#endif

