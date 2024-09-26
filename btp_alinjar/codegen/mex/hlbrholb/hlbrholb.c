/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hlbrholb.c
 *
 * Code generation for function 'hlbrholb'
 *
 */

/* Include files */
#include "hlbrholb.h"
#include "hlbrholb_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hlbrholb(const emlrtStack *sp, const real_T ed10g[3],
              const real_T ed20g[3], const real_T ad10g[3],
              const real_T cmd2[3], const real_T cmd1[3], const real_T cmd3[3],
              const real_T ed30g[3], const real_T ad20g[3], real_T hLB[9],
              real_T rhoLB[27])
{
  real_T scf[9];
  real_T sof[9];
  real_T d;
  int32_T i;
  int32_T j;
  int32_T rhoLB_tmp;
  /*  */
  /*  */
  scf[0] = cmd1[0];
  scf[3] = ad10g[0] + cmd2[0];
  d = ad10g[0] + ad20g[0];
  scf[6] = d + cmd3[0];
  sof[0] = 0.0;
  sof[3] = ad10g[0];
  sof[6] = d;
  scf[1] = cmd1[1];
  scf[4] = ad10g[1] + cmd2[1];
  d = ad10g[1] + ad20g[1];
  scf[7] = d + cmd3[1];
  sof[1] = 0.0;
  sof[4] = ad10g[1];
  sof[7] = d;
  scf[2] = cmd1[2];
  scf[5] = ad10g[2] + cmd2[2];
  d = ad10g[2] + ad20g[2];
  scf[8] = d + cmd3[2];
  sof[2] = 0.0;
  sof[5] = ad10g[2];
  sof[8] = d;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        rhoLB_tmp = 3 * j + 9 * i;
        rhoLB[rhoLB_tmp] = 0.0;
        rhoLB[rhoLB_tmp + 1] = 0.0;
        rhoLB[rhoLB_tmp + 2] = 0.0;
      } else {
        rhoLB_tmp = 3 * j + 9 * i;
        rhoLB[rhoLB_tmp] = scf[3 * j] - sof[3 * i];
        rhoLB[rhoLB_tmp + 1] = scf[3 * j + 1] - sof[3 * i + 1];
        rhoLB[rhoLB_tmp + 2] = scf[3 * j + 2] - sof[3 * i + 2];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  hLB[0] =
      (0.017671458676438125 * (ed10g[1] * rhoLB[2] - rhoLB[1] * ed10g[2]) +
       0.017671458676438125 * (ed10g[1] * rhoLB[5] - ed10g[2] * rhoLB[4])) +
      0.096 * (ed10g[1] * rhoLB[8] - ed10g[2] * rhoLB[7]);
  hLB[3] =
      0.017671458676438125 * (ed20g[1] * rhoLB[14] - ed20g[2] * rhoLB[13]) +
      0.096 * (ed20g[1] * rhoLB[17] - ed20g[2] * rhoLB[16]);
  hLB[1] =
      (0.017671458676438125 * (rhoLB[0] * ed10g[2] - ed10g[0] * rhoLB[2]) +
       0.017671458676438125 * (ed10g[2] * rhoLB[3] - ed10g[0] * rhoLB[5])) +
      0.096 * (ed10g[2] * rhoLB[6] - ed10g[0] * rhoLB[8]);
  hLB[4] =
      0.017671458676438125 * (ed20g[2] * rhoLB[12] - ed20g[0] * rhoLB[14]) +
      0.096 * (ed20g[2] * rhoLB[15] - ed20g[0] * rhoLB[17]);
  hLB[2] =
      (0.017671458676438125 * (ed10g[0] * rhoLB[1] - rhoLB[0] * ed10g[1]) +
       0.017671458676438125 * (ed10g[0] * rhoLB[4] - ed10g[1] * rhoLB[3])) +
      0.096 * (ed10g[0] * rhoLB[7] - ed10g[1] * rhoLB[6]);
  hLB[5] =
      0.017671458676438125 * (ed20g[0] * rhoLB[13] - ed20g[1] * rhoLB[12]) +
      0.096 * (ed20g[0] * rhoLB[16] - ed20g[1] * rhoLB[15]);
  hLB[6] = 0.096 * (ed30g[1] * rhoLB[26] - ed30g[2] * rhoLB[25]);
  hLB[7] = 0.096 * (ed30g[2] * rhoLB[24] - ed30g[0] * rhoLB[26]);
  hLB[8] = 0.096 * (ed30g[0] * rhoLB[25] - ed30g[1] * rhoLB[24]);
}

/* End of code generation (hlbrholb.c) */
