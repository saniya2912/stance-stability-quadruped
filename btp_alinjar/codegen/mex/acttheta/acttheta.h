/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * acttheta.h
 *
 * Code generation for function 'acttheta'
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
void acttheta(const real_T tdRF[3], const real_T tdLF[3], const real_T tdRB[3],
              const real_T tdLB[3], const real_T t2dRF[3],
              const real_T t2dLF[3], const real_T t2dRB[3],
              const real_T t2dLB[3], real_T td[12], real_T t2d[12]);

/* End of code generation (acttheta.h) */
