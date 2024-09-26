/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sumMatrixIncludeNaN.c
 *
 * Code generation for function 'sumMatrixIncludeNaN'
 *
 */

/* Include files */
#include "sumMatrixIncludeNaN.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T sumColumnB(const real_T x[4], int32_T col)
{
  int32_T i0;
  i0 = (col - 1) << 2;
  return ((x[i0] + x[i0 + 1]) + x[i0 + 2]) + x[i0 + 3];
}

/* End of code generation (sumMatrixIncludeNaN.c) */
