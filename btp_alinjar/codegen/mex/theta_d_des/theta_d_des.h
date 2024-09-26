/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * theta_d_des.h
 *
 * Code generation for function 'theta_d_des'
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
void theta_d_des(const emlrtStack *sp, const real_T hLF[9], const real_T hRB[9],
                 const real_T hLB[9], const real_T h_dotLF[9],
                 const real_T hRF[9], const real_T h_dotRF[9],
                 const real_T v_torso[3], const real_T h_dotRB[9],
                 const real_T h_dotLB[9], real_T tddRF[3], real_T tddLF[3],
                 real_T tddRB[3], real_T tddLB[3], real_T h[36],
                 real_T h_dot[36], real_T b_theta_d_des[12], real_T *M);

/* End of code generation (theta_d_des.h) */
