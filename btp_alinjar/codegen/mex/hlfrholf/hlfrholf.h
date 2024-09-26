/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hlfrholf.h
 *
 * Code generation for function 'hlfrholf'
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
void hlfrholf(const emlrtStack *sp, const real_T eb10g[3],
              const real_T eb20g[3], const real_T ab10g[3],
              const real_T cmb2[3], const real_T cmb1[3], const real_T cmb3[3],
              const real_T eb30g[3], const real_T ab20g[3], real_T hLF[9],
              real_T rhoLF[27]);

/* End of code generation (hlfrholf.h) */
