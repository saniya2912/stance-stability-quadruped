/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lbval.h
 *
 * Code generation for function 'lbval'
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
void lbval(const emlrtStack *sp, real_T qhd, real_T qad, const real_T Qquat[4],
           real_T qkd, real_T ed1g[3], real_T ed2g[3], real_T ed3g[3],
           real_T ad1g[3], real_T ad2g[3], real_T cmd1g[3], real_T cmd2g[3],
           real_T cmd3g[3], real_T Qd3g[9]);

/* End of code generation (lbval.h) */
