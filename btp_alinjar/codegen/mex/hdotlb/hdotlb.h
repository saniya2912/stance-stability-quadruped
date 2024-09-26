/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotlb.h
 *
 * Code generation for function 'hdotlb'
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
void hdotlb(const real_T ed_dg1[3], const real_T ed1g[3], const real_T ed2g[3],
            const real_T ed3g[3], const real_T ed_dg2[3],
            const real_T ed_dg3[3], const real_T rho_dotLB[27],
            const real_T rhoLB[27], real_T h_dotLB[9]);

/* End of code generation (hdotlb.h) */
