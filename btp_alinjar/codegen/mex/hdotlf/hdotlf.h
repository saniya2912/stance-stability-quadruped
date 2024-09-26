/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotlf.h
 *
 * Code generation for function 'hdotlf'
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
void hdotlf(const real_T eb_dg1[3], const real_T eb1g[3], const real_T eb2g[3],
            const real_T eb3g[3], const real_T eb_dg2[3],
            const real_T eb_dg3[3], const real_T rho_dotLF[27],
            const real_T rhoLF[27], real_T h_dotLF[9]);

/* End of code generation (hdotlf.h) */
