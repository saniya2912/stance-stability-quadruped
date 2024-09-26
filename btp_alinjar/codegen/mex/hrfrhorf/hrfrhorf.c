/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hrfrhorf.c
 *
 * Code generation for function 'hrfrhorf'
 *
 */

/* Include files */
#include "hrfrhorf.h"
#include "hrfrhorf_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hrfrhorf(const emlrtStack *sp, const real_T ea10g[3],
              const real_T ea20g[3], const real_T aa10g[3],
              const real_T cma2[3], const real_T cma1[3], const real_T cma3[3],
              const real_T ea30g[3], const real_T aa20g[3], real_T hRF[9],
              real_T rhoRF[27])
{
  real_T scf[9];
  real_T sof[9];
  real_T d;
  int32_T i;
  int32_T j;
  int32_T rhoRF_tmp;
  /*  */
  /*  */
  scf[0] = cma1[0];
  scf[3] = aa10g[0] + cma2[0];
  d = aa10g[0] + aa20g[0];
  scf[6] = d + cma3[0];
  sof[0] = 0.0;
  sof[3] = aa10g[0];
  sof[6] = d;
  scf[1] = cma1[1];
  scf[4] = aa10g[1] + cma2[1];
  d = aa10g[1] + aa20g[1];
  scf[7] = d + cma3[1];
  sof[1] = 0.0;
  sof[4] = aa10g[1];
  sof[7] = d;
  scf[2] = cma1[2];
  scf[5] = aa10g[2] + cma2[2];
  d = aa10g[2] + aa20g[2];
  scf[8] = d + cma3[2];
  sof[2] = 0.0;
  sof[5] = aa10g[2];
  sof[8] = d;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        rhoRF_tmp = 3 * j + 9 * i;
        rhoRF[rhoRF_tmp] = 0.0;
        rhoRF[rhoRF_tmp + 1] = 0.0;
        rhoRF[rhoRF_tmp + 2] = 0.0;
      } else {
        rhoRF_tmp = 3 * j + 9 * i;
        rhoRF[rhoRF_tmp] = scf[3 * j] - sof[3 * i];
        rhoRF[rhoRF_tmp + 1] = scf[3 * j + 1] - sof[3 * i + 1];
        rhoRF[rhoRF_tmp + 2] = scf[3 * j + 2] - sof[3 * i + 2];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  hRF[0] =
      (0.017671458676438125 * (ea10g[1] * rhoRF[2] - rhoRF[1] * ea10g[2]) +
       0.017671458676438125 * (ea10g[1] * rhoRF[5] - ea10g[2] * rhoRF[4])) +
      0.096 * (ea10g[1] * rhoRF[8] - ea10g[2] * rhoRF[7]);
  hRF[3] =
      0.017671458676438125 * (ea20g[1] * rhoRF[14] - ea20g[2] * rhoRF[13]) +
      0.096 * (ea20g[1] * rhoRF[17] - ea20g[2] * rhoRF[16]);
  hRF[1] =
      (0.017671458676438125 * (rhoRF[0] * ea10g[2] - ea10g[0] * rhoRF[2]) +
       0.017671458676438125 * (ea10g[2] * rhoRF[3] - ea10g[0] * rhoRF[5])) +
      0.096 * (ea10g[2] * rhoRF[6] - ea10g[0] * rhoRF[8]);
  hRF[4] =
      0.017671458676438125 * (ea20g[2] * rhoRF[12] - ea20g[0] * rhoRF[14]) +
      0.096 * (ea20g[2] * rhoRF[15] - ea20g[0] * rhoRF[17]);
  hRF[2] =
      (0.017671458676438125 * (ea10g[0] * rhoRF[1] - rhoRF[0] * ea10g[1]) +
       0.017671458676438125 * (ea10g[0] * rhoRF[4] - ea10g[1] * rhoRF[3])) +
      0.096 * (ea10g[0] * rhoRF[7] - ea10g[1] * rhoRF[6]);
  hRF[5] =
      0.017671458676438125 * (ea20g[0] * rhoRF[13] - ea20g[1] * rhoRF[12]) +
      0.096 * (ea20g[0] * rhoRF[16] - ea20g[1] * rhoRF[15]);
  hRF[6] = 0.096 * (ea30g[1] * rhoRF[26] - ea30g[2] * rhoRF[25]);
  hRF[7] = 0.096 * (ea30g[2] * rhoRF[24] - ea30g[0] * rhoRF[26]);
  hRF[8] = 0.096 * (ea30g[0] * rhoRF[25] - ea30g[1] * rhoRF[24]);
}

/* End of code generation (hrfrhorf.c) */
