/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rb2.c
 *
 * Code generation for function 'rb2'
 *
 */

/* Include files */
#include "rb2.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rb2(const real_T tddRB[3], real_T *tddRB_hip, real_T *tddRB_knee,
         real_T *tddRB_ankle)
{
  *tddRB_hip = tddRB[0];
  *tddRB_knee = tddRB[1];
  *tddRB_ankle = tddRB[2];
}

/* End of code generation (rb2.c) */
