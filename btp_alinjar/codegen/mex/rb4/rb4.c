/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rb4.c
 *
 * Code generation for function 'rb4'
 *
 */

/* Include files */
#include "rb4.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rb4(real_T ankle, real_T knee, real_T hip, real_T t2dRF[3])
{
  t2dRF[0] = hip;
  t2dRF[1] = knee;
  t2dRF[2] = ankle;
}

/* End of code generation (rb4.c) */
