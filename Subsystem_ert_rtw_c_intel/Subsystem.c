/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Subsystem.c
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

#include "Subsystem.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Scheduler_10ms(void)
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Scheduler_10ms' incorporates:
   *  SubSystem: '<Root>/Subsystem1'
   */
  /* MultiPortSwitch: '<S1>/Select_WiperMode' incorporates:
   *  Inport: '<Root>/WiperMod'
   */
  switch ((int32_T)rtU.WiperMod) {
   case 0:
    /* Outport: '<Root>/WiprMotPwmDutyCyc1' incorporates:
     *  Constant: '<S1>/Constant'
     */
    rtY.WiprMotPwmDutyCyc1 = 0.0;
    break;

   case 1:
    {
      boolean_T rtb_Switch;

      /* Switch: '<S1>/Switch' incorporates:
       *  Constant: '<S1>/Constant4'
       *  Inport: '<Root>/RainSensorErr'
       *  Saturate: '<S2>/Saturation'
       *  Sum: '<S2>/Add1'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      if (rtU.RainSensorErr > 0.0) {
        rtb_Switch = false;
      } else {
        real_T rtb_Saturation;

        /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
         *  Constant: '<S1>/Constant10'
         *  Constant: '<S1>/Constant11'
         *  Constant: '<S1>/Constant12'
         *  Constant: '<S1>/Constant5'
         *  Constant: '<S1>/Constant6'
         *  Constant: '<S1>/Constant7'
         *  Constant: '<S1>/Constant8'
         *  Constant: '<S1>/Constant9'
         *  Inport: '<Root>/WiperSpdReq'
         */
        switch ((int32_T)rtU.WiperSpdReq) {
         case 0:
          rtb_Saturation = 0.0;
          break;

         case 1:
          rtb_Saturation = 0.4;
          break;

         case 2:
          rtb_Saturation = 0.45;
          break;

         case 3:
          rtb_Saturation = 0.5;
          break;

         case 4:
          rtb_Saturation = 0.55;
          break;

         case 5:
          rtb_Saturation = 0.6;
          break;

         case 6:
          rtb_Saturation = 0.65;
          break;

         default:
          rtb_Saturation = 0.7;
          break;
        }

        /* End of MultiPortSwitch: '<S1>/Multiport Switch' */

        /* Sum: '<S2>/Add' incorporates:
         *  UnitDelay: '<S1>/Unit Delay'
         */
        rtb_Saturation -= rtY.WiprMotPwmDutyCyc1;

        /* Saturate: '<S2>/Saturation' */
        if (rtb_Saturation > 0.005) {
          rtb_Saturation = 0.005;
        } else if (rtb_Saturation < -0.005) {
          rtb_Saturation = -0.005;
        }

        rtb_Switch = (rtb_Saturation + rtY.WiprMotPwmDutyCyc1 != 0.0);
      }

      /* End of Switch: '<S1>/Switch' */

      /* Outport: '<Root>/WiprMotPwmDutyCyc1' */
      rtY.WiprMotPwmDutyCyc1 = rtb_Switch;
    }
    break;

   case 2:
    /* Outport: '<Root>/WiprMotPwmDutyCyc1' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    rtY.WiprMotPwmDutyCyc1 = 0.4;
    break;

   default:
    /* Outport: '<Root>/WiprMotPwmDutyCyc1' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    rtY.WiprMotPwmDutyCyc1 = 0.7;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/Select_WiperMode' */

  /* Outport: '<Root>/WiprActv1' incorporates:
   *  Logic: '<S1>/AND'
   *  Outport: '<Root>/WiprMotPwmDutyCyc1'
   */
  rtY.WiprActv1 = (rtY.WiprMotPwmDutyCyc1 != 0.0);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Scheduler_10ms' */
}

/* Model initialize function */
void Subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
