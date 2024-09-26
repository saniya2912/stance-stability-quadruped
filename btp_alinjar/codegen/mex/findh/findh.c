/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * findh.c
 *
 * Code generation for function 'findh'
 *
 */

/* Include files */
#include "findh.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void findh(const real_T h[36], const real_T h_dot[36], const real_T td[12],
           const real_T t2d[12], const real_T theta_d_des[12],
           const real_T theta_2d_des[12], real_T ht2d[3], real_T h_dottd[3],
           real_T htd[3], real_T ht2ddes[3], real_T hdtddes[3])
{
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  int32_T i;
  int32_T i1;
  int32_T i2;
  for (i = 0; i < 3; i++) {
    d = 0.0;
    d1 = 0.0;
    d2 = 0.0;
    d3 = 0.0;
    d4 = 0.0;
    for (i1 = 0; i1 < 12; i1++) {
      i2 = i + 3 * i1;
      d5 = h[i2];
      d += d5 * t2d[i1];
      d6 = td[i1];
      d1 += d5 * d6;
      d7 = h_dot[i2];
      d2 += d7 * d6;
      d3 += d5 * theta_2d_des[i1];
      d4 += d7 * theta_d_des[i1];
    }
    hdtddes[i] = d4;
    ht2ddes[i] = d3;
    h_dottd[i] = d2;
    htd[i] = d1;
    ht2d[i] = d;
  }
}

/* End of code generation (findh.c) */
