/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lfval.h
 *
 * Code generation for function 'lfval'
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
void lfval(const emlrtStack *sp, real_T qhb, real_T qab, const real_T Qquat[4],
           real_T qkb, real_T eb1g[3], real_T eb2g[3], real_T eb3g[3],
           real_T ab1g[3], real_T ab2g[3], real_T cmb1g[3], real_T cmb2g[3],
           real_T cmb3g[3], real_T Qd3g[9]);

/* End of code generation (lfval.h) */
