//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Wiper_System.h
//
// Code generated for Simulink model 'Wiper_System'.
//
// Model version                  : 1.1
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Mon Dec 25 23:25:07 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_Wiper_System_h_
#define RTW_HEADER_Wiper_System_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

// Class declaration for model Wiper_System
class Wiper_System final
{
  // public data and function members
 public:
  // Real-time Model Data Structure
  struct RT_MODEL {
    const char_T *errorStatus;
    RTWSolverInfo solverInfo;

    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      uint32_T clockTick0;
      time_T stepSize0;
      uint32_T clockTick1;
      SimTimeStep simTimeStep;
      time_T *t;
      time_T tArray[2];
    } Timing;
  };

  // Copy Constructor
  Wiper_System(Wiper_System const&) = delete;

  // Assignment Operator
  Wiper_System& operator= (Wiper_System const&) & = delete;

  // Move Constructor
  Wiper_System(Wiper_System &&) = delete;

  // Move Assignment Operator
  Wiper_System& operator= (Wiper_System &&) = delete;

  // Real-Time Model get method
  Wiper_System::RT_MODEL * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  Wiper_System();

  // Destructor
  ~Wiper_System();

  // private data and function members
 private:
  // Real-Time Model
  RT_MODEL rtM;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<S1>/FromWs' : Unused code path elimination
//  Block '<S3>/AND' : Unused code path elimination
//  Block '<S3>/Constant' : Unused code path elimination
//  Block '<S3>/Constant1' : Unused code path elimination
//  Block '<S3>/Constant10' : Unused code path elimination
//  Block '<S3>/Constant11' : Unused code path elimination
//  Block '<S3>/Constant12' : Unused code path elimination
//  Block '<S3>/Constant2' : Unused code path elimination
//  Block '<S3>/Constant3' : Unused code path elimination
//  Block '<S3>/Constant4' : Unused code path elimination
//  Block '<S3>/Constant5' : Unused code path elimination
//  Block '<S3>/Constant6' : Unused code path elimination
//  Block '<S3>/Constant7' : Unused code path elimination
//  Block '<S3>/Constant8' : Unused code path elimination
//  Block '<S3>/Constant9' : Unused code path elimination
//  Block '<S3>/Multiport Switch' : Unused code path elimination
//  Block '<S3>/Select_WiperMode' : Unused code path elimination
//  Block '<S4>/Add' : Unused code path elimination
//  Block '<S4>/Add1' : Unused code path elimination
//  Block '<S4>/Saturation' : Unused code path elimination
//  Block '<S3>/Switch' : Unused code path elimination
//  Block '<S3>/Unit Delay' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Wiper_System'
//  '<S1>'   : 'Wiper_System/Signal Builder'
//  '<S2>'   : 'Wiper_System/Subsystem'
//  '<S3>'   : 'Wiper_System/Subsystem/Subsystem1'
//  '<S4>'   : 'Wiper_System/Subsystem/Subsystem1/Smoothing'

#endif                                 // RTW_HEADER_Wiper_System_h_

//
// File trailer for generated code.
//
// [EOF]
//
