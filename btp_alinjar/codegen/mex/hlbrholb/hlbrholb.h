/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hlbrholb.h
 *
 * Code generation for function 'hlbrholb'
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
void hlbrholb(const emlrtStack *sp, const real_T ed10g[3],
              const real_T ed20g[3], const real_T ad10g[3],
              const real_T cmd2[3], const real_T cmd1[3], const real_T cmd3[3],
              const real_T ed30g[3], const real_T ad20g[3], real_T hLB[9],
              real_T rhoLB[27]);

/* End of code generation (hlbrholb.h) */
