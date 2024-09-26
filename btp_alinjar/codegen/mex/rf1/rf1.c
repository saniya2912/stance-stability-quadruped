/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rf1.c
 *
 * Code generation for function 'rf1'
 *
 */

/* Include files */
#include "rf1.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rf1(const real_T theta_2d_des[12], real_T *t2ddhip, real_T *t2ddknee,
         real_T *t2ddankle)
{
  *t2ddhip = theta_2d_des[0];
  *t2ddknee = theta_2d_des[1];
  *t2ddankle = theta_2d_des[2];
}

/* End of code generation (rf1.c) */
