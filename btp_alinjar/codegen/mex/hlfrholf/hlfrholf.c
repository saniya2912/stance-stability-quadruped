/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hlfrholf.c
 *
 * Code generation for function 'hlfrholf'
 *
 */

/* Include files */
#include "hlfrholf.h"
#include "hlfrholf_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hlfrholf(const emlrtStack *sp, const real_T eb10g[3],
              const real_T eb20g[3], const real_T ab10g[3],
              const real_T cmb2[3], const real_T cmb1[3], const real_T cmb3[3],
              const real_T eb30g[3], const real_T ab20g[3], real_T hLF[9],
              real_T rhoLF[27])
{
  real_T scf[9];
  real_T sof[9];
  real_T d;
  int32_T i;
  int32_T j;
  int32_T rhoLF_tmp;
  /*  */
  /*  */
  scf[0] = cmb1[0];
  scf[3] = ab10g[0] + cmb2[0];
  d = ab10g[0] + ab20g[0];
  scf[6] = d + cmb3[0];
  sof[0] = 0.0;
  sof[3] = ab10g[0];
  sof[6] = d;
  scf[1] = cmb1[1];
  scf[4] = ab10g[1] + cmb2[1];
  d = ab10g[1] + ab20g[1];
  scf[7] = d + cmb3[1];
  sof[1] = 0.0;
  sof[4] = ab10g[1];
  sof[7] = d;
  scf[2] = cmb1[2];
  scf[5] = ab10g[2] + cmb2[2];
  d = ab10g[2] + ab20g[2];
  scf[8] = d + cmb3[2];
  sof[2] = 0.0;
  sof[5] = ab10g[2];
  sof[8] = d;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        rhoLF_tmp = 3 * j + 9 * i;
        rhoLF[rhoLF_tmp] = 0.0;
        rhoLF[rhoLF_tmp + 1] = 0.0;
        rhoLF[rhoLF_tmp + 2] = 0.0;
      } else {
        rhoLF_tmp = 3 * j + 9 * i;
        rhoLF[rhoLF_tmp] = scf[3 * j] - sof[3 * i];
        rhoLF[rhoLF_tmp + 1] = scf[3 * j + 1] - sof[3 * i + 1];
        rhoLF[rhoLF_tmp + 2] = scf[3 * j + 2] - sof[3 * i + 2];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  hLF[0] =
      (0.017671458676438125 * (eb10g[1] * rhoLF[2] - rhoLF[1] * eb10g[2]) +
       0.017671458676438125 * (eb10g[1] * rhoLF[5] - eb10g[2] * rhoLF[4])) +
      0.096 * (eb10g[1] * rhoLF[8] - eb10g[2] * rhoLF[7]);
  hLF[3] =
      0.017671458676438125 * (eb20g[1] * rhoLF[14] - eb20g[2] * rhoLF[13]) +
      0.096 * (eb20g[1] * rhoLF[17] - eb20g[2] * rhoLF[16]);
  hLF[1] =
      (0.017671458676438125 * (rhoLF[0] * eb10g[2] - eb10g[0] * rhoLF[2]) +
       0.017671458676438125 * (eb10g[2] * rhoLF[3] - eb10g[0] * rhoLF[5])) +
      0.096 * (eb10g[2] * rhoLF[6] - eb10g[0] * rhoLF[8]);
  hLF[4] =
      0.017671458676438125 * (eb20g[2] * rhoLF[12] - eb20g[0] * rhoLF[14]) +
      0.096 * (eb20g[2] * rhoLF[15] - eb20g[0] * rhoLF[17]);
  hLF[2] =
      (0.017671458676438125 * (eb10g[0] * rhoLF[1] - rhoLF[0] * eb10g[1]) +
       0.017671458676438125 * (eb10g[0] * rhoLF[4] - eb10g[1] * rhoLF[3])) +
      0.096 * (eb10g[0] * rhoLF[7] - eb10g[1] * rhoLF[6]);
  hLF[5] =
      0.017671458676438125 * (eb20g[0] * rhoLF[13] - eb20g[1] * rhoLF[12]) +
      0.096 * (eb20g[0] * rhoLF[16] - eb20g[1] * rhoLF[15]);
  hLF[6] = 0.096 * (eb30g[1] * rhoLF[26] - eb30g[2] * rhoLF[25]);
  hLF[7] = 0.096 * (eb30g[2] * rhoLF[24] - eb30g[0] * rhoLF[26]);
  hLF[8] = 0.096 * (eb30g[0] * rhoLF[25] - eb30g[1] * rhoLF[24]);
}

/* End of code generation (hlfrholf.c) */
