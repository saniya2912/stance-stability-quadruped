/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hrbrhorb.h
 *
 * Code generation for function 'hrbrhorb'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void hrbrhorb(const emlrtStack *sp, const real_T ec10g[3],
              const real_T ec20g[3], const real_T ac10g[3],
              const real_T cmc2[3], const real_T cmc1[3], const real_T cmc3[3],
              const real_T ec30g[3], const real_T ac20g[3], real_T hRB[9],
              real_T rhoRB[27]);

/* End of code generation (hrbrhorb.h) */
