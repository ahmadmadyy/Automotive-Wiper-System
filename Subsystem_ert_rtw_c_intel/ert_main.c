/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Dec 25 23:21:26 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include <stdio.h>
#include "Subsystem.h"                 /* Model header file */

/* Example use case for call to exported function: Scheduler_10ms */
extern void sample_usage_Scheduler_10ms(void);
void sample_usage_Scheduler_10ms(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Scheduler_10ms();

  /* Read function outputs here */
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  Subsystem_initialize();
  while (rtmGetErrorStatus(rtM) == (NULL)) {
    /*  Perform application tasks here. */
  }

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
