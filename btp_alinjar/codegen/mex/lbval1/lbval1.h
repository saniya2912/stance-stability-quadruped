/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lbval1.h
 *
 * Code generation for function 'lbval1'
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
void lbval1(const emlrtStack *sp, const real_T ed1g[3], const real_T ed2g[3],
            const real_T ad1g[3], const real_T ad2g[3], const real_T ed3g[3],
            const real_T vlinks[36], const real_T w_torso[3], real_T td1,
            const real_T v_torso[3], real_T td2, real_T td3, real_T ed_dg1[3],
            real_T ed_dg2[3], real_T ed_dg3[3], real_T rho_dotLB[27]);

/* End of code generation (lbval1.h) */
