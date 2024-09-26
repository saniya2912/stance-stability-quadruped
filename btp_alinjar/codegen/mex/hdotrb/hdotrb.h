/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotrb.h
 *
 * Code generation for function 'hdotrb'
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
void hdotrb(const real_T ec_dg1[3], const real_T ec1g[3], const real_T ec2g[3],
            const real_T ec3g[3], const real_T ec_dg2[3],
            const real_T ec_dg3[3], const real_T rho_dotRB[27],
            const real_T rhoRB[27], real_T h_dotRB[9]);

/* End of code generation (hdotrb.h) */
