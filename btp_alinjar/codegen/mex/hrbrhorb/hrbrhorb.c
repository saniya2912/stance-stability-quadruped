/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hrbrhorb.c
 *
 * Code generation for function 'hrbrhorb'
 *
 */

/* Include files */
#include "hrbrhorb.h"
#include "hrbrhorb_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hrbrhorb(const emlrtStack *sp, const real_T ec10g[3],
              const real_T ec20g[3], const real_T ac10g[3],
              const real_T cmc2[3], const real_T cmc1[3], const real_T cmc3[3],
              const real_T ec30g[3], const real_T ac20g[3], real_T hRB[9],
              real_T rhoRB[27])
{
  real_T scf[9];
  real_T sof[9];
  real_T d;
  int32_T i;
  int32_T j;
  int32_T rhoRB_tmp;
  /*  */
  /*  */
  scf[0] = cmc1[0];
  scf[3] = ac10g[0] + cmc2[0];
  d = ac10g[0] + ac20g[0];
  scf[6] = d + cmc3[0];
  sof[0] = 0.0;
  sof[3] = ac10g[0];
  sof[6] = d;
  scf[1] = cmc1[1];
  scf[4] = ac10g[1] + cmc2[1];
  d = ac10g[1] + ac20g[1];
  scf[7] = d + cmc3[1];
  sof[1] = 0.0;
  sof[4] = ac10g[1];
  sof[7] = d;
  scf[2] = cmc1[2];
  scf[5] = ac10g[2] + cmc2[2];
  d = ac10g[2] + ac20g[2];
  scf[8] = d + cmc3[2];
  sof[2] = 0.0;
  sof[5] = ac10g[2];
  sof[8] = d;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        rhoRB_tmp = 3 * j + 9 * i;
        rhoRB[rhoRB_tmp] = 0.0;
        rhoRB[rhoRB_tmp + 1] = 0.0;
        rhoRB[rhoRB_tmp + 2] = 0.0;
      } else {
        rhoRB_tmp = 3 * j + 9 * i;
        rhoRB[rhoRB_tmp] = scf[3 * j] - sof[3 * i];
        rhoRB[rhoRB_tmp + 1] = scf[3 * j + 1] - sof[3 * i + 1];
        rhoRB[rhoRB_tmp + 2] = scf[3 * j + 2] - sof[3 * i + 2];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  hRB[0] =
      (0.017671458676438125 * (ec10g[1] * rhoRB[2] - rhoRB[1] * ec10g[2]) +
       0.017671458676438125 * (ec10g[1] * rhoRB[5] - ec10g[2] * rhoRB[4])) +
      0.096 * (ec10g[1] * rhoRB[8] - ec10g[2] * rhoRB[7]);
  hRB[3] =
      0.017671458676438125 * (ec20g[1] * rhoRB[14] - ec20g[2] * rhoRB[13]) +
      0.096 * (ec20g[1] * rhoRB[17] - ec20g[2] * rhoRB[16]);
  hRB[1] =
      (0.017671458676438125 * (rhoRB[0] * ec10g[2] - ec10g[0] * rhoRB[2]) +
       0.017671458676438125 * (ec10g[2] * rhoRB[3] - ec10g[0] * rhoRB[5])) +
      0.096 * (ec10g[2] * rhoRB[6] - ec10g[0] * rhoRB[8]);
  hRB[4] =
      0.017671458676438125 * (ec20g[2] * rhoRB[12] - ec20g[0] * rhoRB[14]) +
      0.096 * (ec20g[2] * rhoRB[15] - ec20g[0] * rhoRB[17]);
  hRB[2] =
      (0.017671458676438125 * (ec10g[0] * rhoRB[1] - rhoRB[0] * ec10g[1]) +
       0.017671458676438125 * (ec10g[0] * rhoRB[4] - ec10g[1] * rhoRB[3])) +
      0.096 * (ec10g[0] * rhoRB[7] - ec10g[1] * rhoRB[6]);
  hRB[5] =
      0.017671458676438125 * (ec20g[0] * rhoRB[13] - ec20g[1] * rhoRB[12]) +
      0.096 * (ec20g[0] * rhoRB[16] - ec20g[1] * rhoRB[15]);
  hRB[6] = 0.096 * (ec30g[1] * rhoRB[26] - ec30g[2] * rhoRB[25]);
  hRB[7] = 0.096 * (ec30g[2] * rhoRB[24] - ec30g[0] * rhoRB[26]);
  hRB[8] = 0.096 * (ec30g[0] * rhoRB[25] - ec30g[1] * rhoRB[24]);
}

/* End of code generation (hrbrhorb.c) */
