/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xdotc.c
 *
 * Code generation for function 'xdotc'
 *
 */

/* Include files */
#include "xdotc.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double b_xdotc(const double x[9], const double y[9], int iy0)
{
  return x[1] * y[iy0 - 1] + x[2] * y[iy0];
}

double xdotc(int n, const double x[36], int ix0, const double y[36], int iy0)
{
  double d;
  int k;
  d = 0.0;
  for (k = 0; k < n; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

/* End of code generation (xdotc.c) */
