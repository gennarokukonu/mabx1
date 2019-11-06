/************************ dSPACE target specific file *************************

   Include file .\L4_MABX_rti1401\L4_MABX_th.c :

   Task Configuration file for model : L4_MABX

   RTI1401 7.10 (02-May-2018)/2.17
   06-Nov-2019 11:22:42

   MATLAB 9.4.0.949201 (R2018a) Update 6

   Copyright (c) 1993-2002 dSPACE GmbH, GERMANY

 *****************************************************************************/

/* ===== List of model tasks and assigned interrupt sources ================

   Timer Task 1 [0.01 0] s        : Timer A interrupt
   Timer Task 2 [0.02 0] s        : Timer Task 1
   Timer Task 3 [0.05 0] s        : Timer Task 1
   Timer Task 4 [0.1 0] s         : Timer Task 1
   Timer Task 5 [0.25 0] s        : Timer Task 1
   Timer Task 6 [0.5 0] s         : Timer Task 1
   Timer Task 7 [1 0] s           : Timer Task 1
   Timer Task 8 [5 0] s           : Timer Task 1
   Timer Task 9 [10 0] s          : Timer Task 1
   MABXII_ETH_B1 HWINT0 Task      : BB_BYP_ETH Type 1 Module 1 HW-Int 0 Interrupt 0
   Timer Interrupt                : Timer B interrupt
   Tcp Input Processing           : Software Trigger

  * ========================================================================= */

#ifndef  _RTI_TH_MODEL_C__
# define _RTI_TH_MODEL_C__

/* ===== File includes ===================================================== */

/* Auxiliary functions of TaskHandling*/

/* No sub-interrupts used by application: */
/* RTITH_USES_SUBINT not defined for rti_th_aux.c */
# include <rti_th_aux.c>

/* rtkernel.h already included in RTI Simulation Engine. */

/* ===== Macro definitions ================================================= */

/* Number of local tasks of the specific type */
# define  RTITH_TIMER_TASKS_LOCAL_NUM_OF      (9)
# define  RTITH_HWINT_TASKS_LOCAL_NUM_OF      (1)
# define  RTITH_SWINT_TASKS_LOCAL_NUM_OF      (1)
# define  RTITH_TMRINT_TASKS_LOCAL_NUM_OF     (1)

# define  RTITH_INT_TASKS_ALL_LOCAL_NUM_OF    (3)
# define  RTITH_TASKS_ALL_LOCAL_NUM_OF        (12)

/* Default scaling factor for timer tasks */
# ifndef  RTI_TIMER_TASK_TIME_SCALE
#   define RTI_TIMER_TASK_TIME_SCALE           (1.0)
# endif

/* Avoid compilation with invalid timer task mode */
# ifndef MULTITASKING
#   error Cannot compile in single timer task mode (.\L4_MABX_rti1401\L4_MABX_th.c is for MT).
# endif


/* ===== Type definitions ================================================ */

typedef struct tagRtiTimerTask1TriggerSource {
  int service;
  int subentry;
  int subsubentry;
} RtiTimerTask1TriggerSource;


/* ===== Global declarations =============================================== */

/* Pointers to task information variables */
  /* --- Task  1 : Timer Task 1 (TIMER TIMERA) */
double               *pRti_TIMERA_STime;
double               *pRti_TIMERA_TTime;
rtk_task_state_type  *pRti_TIMERA_TState;
rtk_ovc_check_type   *pRti_TIMERA_OType;
int                  *pRti_TIMERA_OMax;
int                  *pRti_TIMERA_ORpt;
int                  *pRti_TIMERA_OCnt;
double               *pRti_TIMERA_TCnt;
int                  *pRti_TIMERA_Prio;

  /* --- Task  2 : Timer Task 2 (TIMER TIMERA2) */
double               *pRti_TIMERA2_STime;
double               *pRti_TIMERA2_TTime;
rtk_task_state_type  *pRti_TIMERA2_TState;
rtk_ovc_check_type   *pRti_TIMERA2_OType;
int                  *pRti_TIMERA2_OMax;
int                  *pRti_TIMERA2_ORpt;
int                  *pRti_TIMERA2_OCnt;
double               *pRti_TIMERA2_TCnt;
int                  *pRti_TIMERA2_Prio;

  /* --- Task  3 : Timer Task 3 (TIMER TIMERA3) */
double               *pRti_TIMERA3_STime;
double               *pRti_TIMERA3_TTime;
rtk_task_state_type  *pRti_TIMERA3_TState;
rtk_ovc_check_type   *pRti_TIMERA3_OType;
int                  *pRti_TIMERA3_OMax;
int                  *pRti_TIMERA3_ORpt;
int                  *pRti_TIMERA3_OCnt;
double               *pRti_TIMERA3_TCnt;
int                  *pRti_TIMERA3_Prio;

  /* --- Task  4 : Timer Task 4 (TIMER TIMERA4) */
double               *pRti_TIMERA4_STime;
double               *pRti_TIMERA4_TTime;
rtk_task_state_type  *pRti_TIMERA4_TState;
rtk_ovc_check_type   *pRti_TIMERA4_OType;
int                  *pRti_TIMERA4_OMax;
int                  *pRti_TIMERA4_ORpt;
int                  *pRti_TIMERA4_OCnt;
double               *pRti_TIMERA4_TCnt;
int                  *pRti_TIMERA4_Prio;

  /* --- Task  5 : Timer Task 5 (TIMER TIMERA5) */
double               *pRti_TIMERA5_STime;
double               *pRti_TIMERA5_TTime;
rtk_task_state_type  *pRti_TIMERA5_TState;
rtk_ovc_check_type   *pRti_TIMERA5_OType;
int                  *pRti_TIMERA5_OMax;
int                  *pRti_TIMERA5_ORpt;
int                  *pRti_TIMERA5_OCnt;
double               *pRti_TIMERA5_TCnt;
int                  *pRti_TIMERA5_Prio;

  /* --- Task  6 : Timer Task 6 (TIMER TIMERA6) */
double               *pRti_TIMERA6_STime;
double               *pRti_TIMERA6_TTime;
rtk_task_state_type  *pRti_TIMERA6_TState;
rtk_ovc_check_type   *pRti_TIMERA6_OType;
int                  *pRti_TIMERA6_OMax;
int                  *pRti_TIMERA6_ORpt;
int                  *pRti_TIMERA6_OCnt;
double               *pRti_TIMERA6_TCnt;
int                  *pRti_TIMERA6_Prio;

  /* --- Task  7 : Timer Task 7 (TIMER TIMERA7) */
double               *pRti_TIMERA7_STime;
double               *pRti_TIMERA7_TTime;
rtk_task_state_type  *pRti_TIMERA7_TState;
rtk_ovc_check_type   *pRti_TIMERA7_OType;
int                  *pRti_TIMERA7_OMax;
int                  *pRti_TIMERA7_ORpt;
int                  *pRti_TIMERA7_OCnt;
double               *pRti_TIMERA7_TCnt;
int                  *pRti_TIMERA7_Prio;

  /* --- Task  8 : Timer Task 8 (TIMER TIMERA8) */
double               *pRti_TIMERA8_STime;
double               *pRti_TIMERA8_TTime;
rtk_task_state_type  *pRti_TIMERA8_TState;
rtk_ovc_check_type   *pRti_TIMERA8_OType;
int                  *pRti_TIMERA8_OMax;
int                  *pRti_TIMERA8_ORpt;
int                  *pRti_TIMERA8_OCnt;
double               *pRti_TIMERA8_TCnt;
int                  *pRti_TIMERA8_Prio;

  /* --- Task  9 : Timer Task 9 (TIMER TIMERA9) */
double               *pRti_TIMERA9_STime;
double               *pRti_TIMERA9_TTime;
rtk_task_state_type  *pRti_TIMERA9_TState;
rtk_ovc_check_type   *pRti_TIMERA9_OType;
int                  *pRti_TIMERA9_OMax;
int                  *pRti_TIMERA9_ORpt;
int                  *pRti_TIMERA9_OCnt;
double               *pRti_TIMERA9_TCnt;
int                  *pRti_TIMERA9_Prio;

  /* --- Task 10 : MABXII_ETH_B1 HWINT0 Task (HWINT BB_BYP_ETHT1M0I0S0) */
double               *pRti_BB_BYP_ETHT1M0I0S0_TTime;
rtk_task_state_type  *pRti_BB_BYP_ETHT1M0I0S0_TState;
rtk_ovc_check_type   *pRti_BB_BYP_ETHT1M0I0S0_OType;
int                  *pRti_BB_BYP_ETHT1M0I0S0_OMax;
int                  *pRti_BB_BYP_ETHT1M0I0S0_ORpt;
int                  *pRti_BB_BYP_ETHT1M0I0S0_OCnt;
double               *pRti_BB_BYP_ETHT1M0I0S0_TCnt;
int                  *pRti_BB_BYP_ETHT1M0I0S0_Prio;

  /* --- Task 11 : Timer Interrupt (TMRINT TIMERB) */
double               *pRti_TIMERB_STime;
double               *pRti_TIMERB_TTime;
rtk_task_state_type  *pRti_TIMERB_TState;
rtk_ovc_check_type   *pRti_TIMERB_OType;
int                  *pRti_TIMERB_OMax;
int                  *pRti_TIMERB_ORpt;
int                  *pRti_TIMERB_OCnt;
double               *pRti_TIMERB_TCnt;
int                  *pRti_TIMERB_Prio;

  /* --- Task 12 : Tcp Input Processing (SWINT SWI1) */
double               *pRti_SWI1_TTime;
rtk_task_state_type  *pRti_SWI1_TState;
rtk_ovc_check_type   *pRti_SWI1_OType;
int                  *pRti_SWI1_OMax;
int                  *pRti_SWI1_ORpt;
int                  *pRti_SWI1_OCnt;
double               *pRti_SWI1_TCnt;
int                  *pRti_SWI1_Prio;

/* Pointer to RTK task control block of 'Timer Task 1' */
static rtk_p_task_control_block    pRtiTimerTask1TCB = NULL;


/* ===== Function definitions ============================================== */

/* Interface function of Task Handling to create and bind all tasks */
static void rti_th_initialize(void)
{
  /* --- Local declarations ------------------------------------------------ */

  /* Pointers to task control blocks */
  rtk_p_task_control_block pTask1;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask2;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask3;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask4;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask5;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask6;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask7;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask8;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask9;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask10;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask11;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask12;  /*  Task (TCB pointer).              */

  int subentry;        /*  RTK subentry.                    */
  int service;         /*  RTK service.                     */

/* Initialize dynamically generated services */

  /* --- Initialization code -----------------------------------------------
   * Task  1 : Timer Task 1 (TIMER TIMERA)
   * Priority: 2, Source: 1, Target: 1
   * Source IntNo: 0, SubIntNo: RTK_NO_SINT, TaskId: 0
   * ----------------------------------------------------------------------- */
  service   = S_PERIODIC_A;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      0);                /*  Interrupt number.                */
  pTask1   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA,                 /*  Task function pointer.           */
      2,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      0);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask1,          /*  Task (TCB pointer).              */
      "Timer Task 1");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask1,             /*  Task (TCB pointer).              */
      (0.01 * RTI_TIMER_TASK_TIME_SCALE),             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA_STime       = &(pTask1->sample_time);
  pRti_TIMERA_TTime       = &(pTask1->turnaround_time);
  pRti_TIMERA_TState      = &(pTask1->state);
  pRti_TIMERA_OType       = &(pTask1->ovc_type);
  pRti_TIMERA_OMax        = &(pTask1->ovc_max);
  pRti_TIMERA_ORpt        = &(pTask1->ovc_repeat);
  pRti_TIMERA_OCnt        = &(pTask1->ovc_counter);
  pRti_TIMERA_TCnt        = &(pTask1->tm_task_calls);
  pRti_TIMERA_Prio        = &(pTask1->priority);

  /* ... Assign pointer to RTK task control block of of 'Timer Task 1' ..... */
  pRtiTimerTask1TCB = pTask1;         /*  Reference task (time stamping).  */

  /* ... Mark driving interrupt as unused in non-RT simulation mode ........ */
# ifdef SMODE
#   if SMODE == NRTSIM
  rtith_int_status_bit_clear( /* --------------------------------- */
    service, subentry,                 /*  RTK service, RTK subentry.       */
    RTK_NO_SINT,                     /*  Sub-interrupt number.            */
    RTK_STATUS_USED);       /*  RTK mask: Interrupt is bound.    */
#   endif
# endif

  /* --- Initialization code -----------------------------------------------
   * Task  2 : Timer Task 2 (TIMER TIMERA2)
   * Priority: 3, Source: 1, Target: 1
   * Source IntNo: 0, SubIntNo: RTK_NO_SINT, TaskId: 1
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      0);                /*  Interrupt number.                */
  pTask2   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA2,                 /*  Task function pointer.           */
      3,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask2,          /*  Task (TCB pointer).              */
      "Timer Task 2");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask2,             /*  Task (TCB pointer).              */
      0.02,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA2_STime      = &(pTask2->sample_time);
  pRti_TIMERA2_TTime      = &(pTask2->turnaround_time);
  pRti_TIMERA2_TState     = &(pTask2->state);
  pRti_TIMERA2_OType      = &(pTask2->ovc_type);
  pRti_TIMERA2_OMax       = &(pTask2->ovc_max);
  pRti_TIMERA2_ORpt       = &(pTask2->ovc_repeat);
  pRti_TIMERA2_OCnt       = &(pTask2->ovc_counter);
  pRti_TIMERA2_TCnt       = &(pTask2->tm_task_calls);
  pRti_TIMERA2_Prio       = &(pTask2->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  3 : Timer Task 3 (TIMER TIMERA3)
   * Priority: 4, Source: 1, Target: 1
   * Source IntNo: 1, SubIntNo: RTK_NO_SINT, TaskId: 2
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      1);                /*  Interrupt number.                */
  pTask3   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA3,                 /*  Task function pointer.           */
      4,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      2);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask3,          /*  Task (TCB pointer).              */
      "Timer Task 3");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask3,             /*  Task (TCB pointer).              */
      0.05,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA3_STime      = &(pTask3->sample_time);
  pRti_TIMERA3_TTime      = &(pTask3->turnaround_time);
  pRti_TIMERA3_TState     = &(pTask3->state);
  pRti_TIMERA3_OType      = &(pTask3->ovc_type);
  pRti_TIMERA3_OMax       = &(pTask3->ovc_max);
  pRti_TIMERA3_ORpt       = &(pTask3->ovc_repeat);
  pRti_TIMERA3_OCnt       = &(pTask3->ovc_counter);
  pRti_TIMERA3_TCnt       = &(pTask3->tm_task_calls);
  pRti_TIMERA3_Prio       = &(pTask3->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  4 : Timer Task 4 (TIMER TIMERA4)
   * Priority: 5, Source: 1, Target: 1
   * Source IntNo: 2, SubIntNo: RTK_NO_SINT, TaskId: 3
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      2);                /*  Interrupt number.                */
  pTask4   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA4,                 /*  Task function pointer.           */
      5,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      3);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask4,          /*  Task (TCB pointer).              */
      "Timer Task 4");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask4,             /*  Task (TCB pointer).              */
      0.1,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA4_STime      = &(pTask4->sample_time);
  pRti_TIMERA4_TTime      = &(pTask4->turnaround_time);
  pRti_TIMERA4_TState     = &(pTask4->state);
  pRti_TIMERA4_OType      = &(pTask4->ovc_type);
  pRti_TIMERA4_OMax       = &(pTask4->ovc_max);
  pRti_TIMERA4_ORpt       = &(pTask4->ovc_repeat);
  pRti_TIMERA4_OCnt       = &(pTask4->ovc_counter);
  pRti_TIMERA4_TCnt       = &(pTask4->tm_task_calls);
  pRti_TIMERA4_Prio       = &(pTask4->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  5 : Timer Task 5 (TIMER TIMERA5)
   * Priority: 6, Source: 1, Target: 1
   * Source IntNo: 3, SubIntNo: RTK_NO_SINT, TaskId: 4
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      3);                /*  Interrupt number.                */
  pTask5   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA5,                 /*  Task function pointer.           */
      6,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      4);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask5,          /*  Task (TCB pointer).              */
      "Timer Task 5");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask5,             /*  Task (TCB pointer).              */
      0.25,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA5_STime      = &(pTask5->sample_time);
  pRti_TIMERA5_TTime      = &(pTask5->turnaround_time);
  pRti_TIMERA5_TState     = &(pTask5->state);
  pRti_TIMERA5_OType      = &(pTask5->ovc_type);
  pRti_TIMERA5_OMax       = &(pTask5->ovc_max);
  pRti_TIMERA5_ORpt       = &(pTask5->ovc_repeat);
  pRti_TIMERA5_OCnt       = &(pTask5->ovc_counter);
  pRti_TIMERA5_TCnt       = &(pTask5->tm_task_calls);
  pRti_TIMERA5_Prio       = &(pTask5->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  6 : Timer Task 6 (TIMER TIMERA6)
   * Priority: 7, Source: 1, Target: 1
   * Source IntNo: 4, SubIntNo: RTK_NO_SINT, TaskId: 5
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      4);                /*  Interrupt number.                */
  pTask6   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA6,                 /*  Task function pointer.           */
      7,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      5);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask6,          /*  Task (TCB pointer).              */
      "Timer Task 6");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask6,             /*  Task (TCB pointer).              */
      0.5,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA6_STime      = &(pTask6->sample_time);
  pRti_TIMERA6_TTime      = &(pTask6->turnaround_time);
  pRti_TIMERA6_TState     = &(pTask6->state);
  pRti_TIMERA6_OType      = &(pTask6->ovc_type);
  pRti_TIMERA6_OMax       = &(pTask6->ovc_max);
  pRti_TIMERA6_ORpt       = &(pTask6->ovc_repeat);
  pRti_TIMERA6_OCnt       = &(pTask6->ovc_counter);
  pRti_TIMERA6_TCnt       = &(pTask6->tm_task_calls);
  pRti_TIMERA6_Prio       = &(pTask6->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  7 : Timer Task 7 (TIMER TIMERA7)
   * Priority: 8, Source: 1, Target: 1
   * Source IntNo: 5, SubIntNo: RTK_NO_SINT, TaskId: 6
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      5);                /*  Interrupt number.                */
  pTask7   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA7,                 /*  Task function pointer.           */
      8,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      6);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask7,          /*  Task (TCB pointer).              */
      "Timer Task 7");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask7,             /*  Task (TCB pointer).              */
      1,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA7_STime      = &(pTask7->sample_time);
  pRti_TIMERA7_TTime      = &(pTask7->turnaround_time);
  pRti_TIMERA7_TState     = &(pTask7->state);
  pRti_TIMERA7_OType      = &(pTask7->ovc_type);
  pRti_TIMERA7_OMax       = &(pTask7->ovc_max);
  pRti_TIMERA7_ORpt       = &(pTask7->ovc_repeat);
  pRti_TIMERA7_OCnt       = &(pTask7->ovc_counter);
  pRti_TIMERA7_TCnt       = &(pTask7->tm_task_calls);
  pRti_TIMERA7_Prio       = &(pTask7->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  8 : Timer Task 8 (TIMER TIMERA8)
   * Priority: 9, Source: 1, Target: 1
   * Source IntNo: 6, SubIntNo: RTK_NO_SINT, TaskId: 7
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      6);                /*  Interrupt number.                */
  pTask8   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA8,                 /*  Task function pointer.           */
      9,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      7);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask8,          /*  Task (TCB pointer).              */
      "Timer Task 8");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask8,             /*  Task (TCB pointer).              */
      5,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA8_STime      = &(pTask8->sample_time);
  pRti_TIMERA8_TTime      = &(pTask8->turnaround_time);
  pRti_TIMERA8_TState     = &(pTask8->state);
  pRti_TIMERA8_OType      = &(pTask8->ovc_type);
  pRti_TIMERA8_OMax       = &(pTask8->ovc_max);
  pRti_TIMERA8_ORpt       = &(pTask8->ovc_repeat);
  pRti_TIMERA8_OCnt       = &(pTask8->ovc_counter);
  pRti_TIMERA8_TCnt       = &(pTask8->tm_task_calls);
  pRti_TIMERA8_Prio       = &(pTask8->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  9 : Timer Task 9 (TIMER TIMERA9)
   * Priority: 10, Source: 1, Target: 1
   * Source IntNo: 7, SubIntNo: RTK_NO_SINT, TaskId: 8
   * ----------------------------------------------------------------------- */
  service   = S_SAMPLERATE;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      7);                /*  Interrupt number.                */
  pTask9   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA9,                 /*  Task function pointer.           */
      10,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      8);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask9,          /*  Task (TCB pointer).              */
      "Timer Task 9");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask9,             /*  Task (TCB pointer).              */
      10,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA9_STime      = &(pTask9->sample_time);
  pRti_TIMERA9_TTime      = &(pTask9->turnaround_time);
  pRti_TIMERA9_TState     = &(pTask9->state);
  pRti_TIMERA9_OType      = &(pTask9->ovc_type);
  pRti_TIMERA9_OMax       = &(pTask9->ovc_max);
  pRti_TIMERA9_ORpt       = &(pTask9->ovc_repeat);
  pRti_TIMERA9_OCnt       = &(pTask9->ovc_counter);
  pRti_TIMERA9_TCnt       = &(pTask9->tm_task_calls);
  pRti_TIMERA9_Prio       = &(pTask9->priority);

  /* --- Initialization code -----------------------------------------------
   * Task 10 : MABXII_ETH_B1 HWINT0 Task (HWINT BB_BYP_ETHT1M0I0S0)
   * Priority: 1, Source: 1, Target: 1
   * Source IntNo: 0, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_BB_BYP_ETH, DS1401_MODULE_TP1, 0, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      0);                /*  Interrupt number.                */
  pTask10   = rtith_create_task( /* --- Create task. ---------------- */
      rti_BB_BYP_ETHT1M0I0S0,                 /*  Task function pointer.           */
      1,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask10,          /*  Task (TCB pointer).              */
      "MABXII_ETH_B1 HWINT0 Task");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask10,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_BB_BYP_ETHT1M0I0S0_TTime = &(pTask10->turnaround_time);
  pRti_BB_BYP_ETHT1M0I0S0_TState = &(pTask10->state);
  pRti_BB_BYP_ETHT1M0I0S0_OType = &(pTask10->ovc_type);
  pRti_BB_BYP_ETHT1M0I0S0_OMax = &(pTask10->ovc_max);
  pRti_BB_BYP_ETHT1M0I0S0_ORpt = &(pTask10->ovc_repeat);
  pRti_BB_BYP_ETHT1M0I0S0_OCnt = &(pTask10->ovc_counter);
  pRti_BB_BYP_ETHT1M0I0S0_TCnt = &(pTask10->tm_task_calls);
  pRti_BB_BYP_ETHT1M0I0S0_Prio = &(pTask10->priority);

  /* --- Initialization code -----------------------------------------------
   * Task 11 : Timer Interrupt (TMRINT TIMERB)
   * Priority: 11, Source: 1, Target: 1
   * Source IntNo: 0, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = S_PERIODIC_B;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      0);                /*  Interrupt number.                */
  pTask11   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERB,                 /*  Task function pointer.           */
      11,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask11,          /*  Task (TCB pointer).              */
      "Timer Interrupt");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask11,             /*  Task (TCB pointer).              */
      0.01,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERB_STime       = &(pTask11->sample_time);
  pRti_TIMERB_TTime       = &(pTask11->turnaround_time);
  pRti_TIMERB_TState      = &(pTask11->state);
  pRti_TIMERB_OType       = &(pTask11->ovc_type);
  pRti_TIMERB_OMax        = &(pTask11->ovc_max);
  pRti_TIMERB_ORpt        = &(pTask11->ovc_repeat);
  pRti_TIMERB_OCnt        = &(pTask11->ovc_counter);
  pRti_TIMERB_TCnt        = &(pTask11->tm_task_calls);
  pRti_TIMERB_Prio        = &(pTask11->priority);

  /* --- Initialization code -----------------------------------------------
   * Task 12 : Tcp Input Processing (SWINT SWI1)
   * Priority: 12, Source: 1, Target: 1
   * Source IntNo: 0, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = S_SOFTTASK;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      0);                /*  Interrupt number.                */
  pTask12   = rtith_create_task( /* --- Create task. ---------------- */
      rti_SWI1,                 /*  Task function pointer.           */
      12,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask12,          /*  Task (TCB pointer).              */
      "Tcp Input Processing");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask12,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_inherited,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_SWI1_TTime         = &(pTask12->turnaround_time);
  pRti_SWI1_TState        = &(pTask12->state);
  pRti_SWI1_OType         = &(pTask12->ovc_type);
  pRti_SWI1_OMax          = &(pTask12->ovc_max);
  pRti_SWI1_ORpt          = &(pTask12->ovc_repeat);
  pRti_SWI1_OCnt          = &(pTask12->ovc_counter);
  pRti_SWI1_TCnt          = &(pTask12->tm_task_calls);
  pRti_SWI1_Prio          = &(pTask12->priority);

  return;
}

void rti_th_timertask1_trigger_source(RtiTimerTask1TriggerSource* triggerSource)
{
  triggerSource->service = S_PERIODIC_A;
  triggerSource->subentry = rtk_get_subentry(
    S_PERIODIC_A,
    0,
    0);
  triggerSource->subsubentry = RTK_NO_SINT;
}

#endif /* _RTI_TH_MODEL_C__ */

/****** [EOF] ****************************************************************/
