/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lf1.c
 *
 * Code generation for function 'lf1'
 *
 */

/* Include files */
#include "lf1.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lf1(const real_T theta_2d_des[12], real_T *t2ddhip, real_T *t2ddknee,
         real_T *t2ddankle)
{
  *t2ddhip = theta_2d_des[3];
  *t2ddknee = theta_2d_des[4];
  *t2ddankle = theta_2d_des[5];
}

/* End of code generation (lf1.c) */
