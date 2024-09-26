/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rf2.c
 *
 * Code generation for function 'rf2'
 *
 */

/* Include files */
#include "rf2.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rf2(const real_T tddRF[3], real_T *tddRF_hip, real_T *tddRF_knee,
         real_T *tddRF_ankle)
{
  *tddRF_hip = tddRF[0];
  *tddRF_knee = tddRF[1];
  *tddRF_ankle = tddRF[2];
}

/* End of code generation (rf2.c) */
