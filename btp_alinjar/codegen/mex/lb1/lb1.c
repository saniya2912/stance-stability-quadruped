/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lb1.c
 *
 * Code generation for function 'lb1'
 *
 */

/* Include files */
#include "lb1.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lb1(const real_T theta_2d_des[12], real_T *t2ddhip, real_T *t2ddknee,
         real_T *t2ddankle)
{
  *t2ddhip = theta_2d_des[9];
  *t2ddknee = theta_2d_des[10];
  *t2ddankle = theta_2d_des[11];
}

/* End of code generation (lb1.c) */
