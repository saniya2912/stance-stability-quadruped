/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lf2.c
 *
 * Code generation for function 'lf2'
 *
 */

/* Include files */
#include "lf2.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lf2(const real_T tddLF[3], real_T *tddLF_hip, real_T *tddLF_knee,
         real_T *tddLF_ankle)
{
  *tddLF_hip = tddLF[0];
  *tddLF_knee = tddLF[1];
  *tddLF_ankle = tddLF[2];
}

/* End of code generation (lf2.c) */
