/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hrfrhorf.h
 *
 * Code generation for function 'hrfrhorf'
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
void hrfrhorf(const emlrtStack *sp, const real_T ea10g[3],
              const real_T ea20g[3], const real_T aa10g[3],
              const real_T cma2[3], const real_T cma1[3], const real_T cma3[3],
              const real_T ea30g[3], const real_T aa20g[3], real_T hRF[9],
              real_T rhoRF[27]);

/* End of code generation (hrfrhorf.h) */
