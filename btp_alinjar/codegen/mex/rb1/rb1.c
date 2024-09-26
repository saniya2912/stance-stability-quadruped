/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rb1.c
 *
 * Code generation for function 'rb1'
 *
 */

/* Include files */
#include "rb1.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rb1(const real_T theta_2d_des[12], real_T *t2ddhip, real_T *t2ddknee,
         real_T *t2ddankle)
{
  *t2ddhip = theta_2d_des[6];
  *t2ddknee = theta_2d_des[7];
  *t2ddankle = theta_2d_des[8];
}

/* End of code generation (rb1.c) */
