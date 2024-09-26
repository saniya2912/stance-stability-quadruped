/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotrf.h
 *
 * Code generation for function 'hdotrf'
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
void hdotrf(const real_T ea_dg1[3], const real_T ea1g[3], const real_T ea2g[3],
            const real_T ea3g[3], const real_T ea_dg2[3],
            const real_T ea_dg3[3], const real_T rho_dotRF[27],
            const real_T rhoRF[27], real_T h_dotRF[9]);

/* End of code generation (hdotrf.h) */
