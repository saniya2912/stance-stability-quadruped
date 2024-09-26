/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rbval.h
 *
 * Code generation for function 'rbval'
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
void rbval(const emlrtStack *sp, real_T qhc, real_T qac, const real_T Qquat[4],
           real_T qkc, real_T ec1g[3], real_T ec2g[3], real_T ec3g[3],
           real_T ac1g[3], real_T ac2g[3], real_T cmc1g[3], real_T cmc2g[3],
           real_T cmc3g[3], real_T Qd3g[9]);

/* End of code generation (rbval.h) */
