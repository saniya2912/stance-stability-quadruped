/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lb2.c
 *
 * Code generation for function 'lb2'
 *
 */

/* Include files */
#include "lb2.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lb2(const real_T tddLB[3], real_T *tddLB_hip, real_T *tddLB_knee,
         real_T *tddLB_ankle)
{
  *tddLB_hip = tddLB[0];
  *tddLB_knee = tddLB[1];
  *tddLB_ankle = tddLB[2];
}

/* End of code generation (lb2.c) */
