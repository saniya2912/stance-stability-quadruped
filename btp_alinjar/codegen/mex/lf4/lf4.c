/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lf4.c
 *
 * Code generation for function 'lf4'
 *
 */

/* Include files */
#include "lf4.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lf4(real_T ankle, real_T knee, real_T hip, real_T t2dLF[3])
{
  t2dLF[0] = hip;
  t2dLF[1] = knee;
  t2dLF[2] = ankle;
}

/* End of code generation (lf4.c) */
