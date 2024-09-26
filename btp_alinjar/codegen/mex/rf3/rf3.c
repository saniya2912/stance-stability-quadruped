/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rf3.c
 *
 * Code generation for function 'rf3'
 *
 */

/* Include files */
#include "rf3.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rf3(real_T ankle, real_T knee, real_T hip, real_T tdRF[3])
{
  tdRF[0] = hip;
  tdRF[1] = knee;
  tdRF[2] = ankle;
}

/* End of code generation (rf3.c) */
