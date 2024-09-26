/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * findh.h
 *
 * Code generation for function 'findh'
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
void findh(const real_T h[36], const real_T h_dot[36], const real_T td[12],
           const real_T t2d[12], const real_T theta_d_des[12],
           const real_T theta_2d_des[12], real_T ht2d[3], real_T h_dottd[3],
           real_T htd[3], real_T ht2ddes[3], real_T hdtddes[3]);

/* End of code generation (findh.h) */
