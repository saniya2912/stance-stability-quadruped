/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lb4.c
 *
 * Code generation for function 'lb4'
 *
 */

/* Include files */
#include "lb4.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lb4(real_T ankle, real_T knee, real_T hip, real_T t2dLB[3])
{
  t2dLB[0] = hip;
  t2dLB[1] = knee;
  t2dLB[2] = ankle;
}

/* End of code generation (lb4.c) */
