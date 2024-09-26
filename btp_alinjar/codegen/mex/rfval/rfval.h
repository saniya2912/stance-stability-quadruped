/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rfval.h
 *
 * Code generation for function 'rfval'
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
void rfval(const emlrtStack *sp, real_T qha, real_T qaa, const real_T Qquat[4],
           real_T qka, real_T ea1g[3], real_T ea2g[3], real_T ea3g[3],
           real_T aa1g[3], real_T aa2g[3], real_T cma1g[3], real_T cma2g[3],
           real_T cma3g[3], real_T Qd3g[9]);

/* End of code generation (rfval.h) */
