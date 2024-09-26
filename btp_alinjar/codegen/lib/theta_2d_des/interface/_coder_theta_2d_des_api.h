/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_theta_2d_des_api.h
 *
 * Code generation for function 'theta_2d_des'
 *
 */

#ifndef _CODER_THETA_2D_DES_API_H
#define _CODER_THETA_2D_DES_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void theta_2d_des(real_T theta_d_des[12], real_T h_dot[36], real_T h[36],
                  real_T a_torso[3], real_T M, real_T f[3],
                  real_T b_theta_2d_des[12]);

void theta_2d_des_api(const mxArray *const prhs[6], const mxArray **plhs);

void theta_2d_des_atexit(void);

void theta_2d_des_initialize(void);

void theta_2d_des_terminate(void);

void theta_2d_des_xil_shutdown(void);

void theta_2d_des_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_theta_2d_des_api.h) */
