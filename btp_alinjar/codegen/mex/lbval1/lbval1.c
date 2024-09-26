/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lbval1.c
 *
 * Code generation for function 'lbval1'
 *
 */

/* Include files */
#include "lbval1.h"
#include "lbval1_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lbval1(const emlrtStack *sp, const real_T ed1g[3], const real_T ed2g[3],
            const real_T ad1g[3], const real_T ad2g[3], const real_T ed3g[3],
            const real_T vlinks[36], const real_T w_torso[3], real_T td1,
            const real_T v_torso[3], real_T td2, real_T td3, real_T ed_dg1[3],
            real_T ed_dg2[3], real_T ed_dg3[3], real_T rho_dotLB[27])
{
  real_T vcf[9];
  real_T vof[9];
  real_T d;
  real_T d1;
  real_T w1_idx_0;
  real_T w1_idx_1;
  real_T w2_idx_0;
  real_T w2_idx_1;
  real_T w3_idx_0;
  real_T w3_idx_1;
  real_T w3_idx_2;
  int32_T i;
  int32_T j;
  int32_T rho_dotLB_tmp;
  d = w_torso[0] + ed1g[0] * td1;
  w1_idx_0 = d;
  d1 = d + ed2g[0] * td2;
  w2_idx_0 = d1;
  w3_idx_0 = d1 + ed3g[0] * td3;
  d = w_torso[1] + ed1g[1] * td1;
  w1_idx_1 = d;
  d1 = d + ed2g[1] * td2;
  w2_idx_1 = d1;
  w3_idx_1 = d1 + ed3g[1] * td3;
  d = w_torso[2] + ed1g[2] * td1;
  d1 = d + ed2g[2] * td2;
  w3_idx_2 = d1 + ed3g[2] * td3;
  ed_dg1[0] = w1_idx_1 * ed1g[2] - ed1g[1] * d;
  ed_dg1[1] = ed1g[0] * d - w1_idx_0 * ed1g[2];
  ed_dg1[2] = w1_idx_0 * ed1g[1] - ed1g[0] * w1_idx_1;
  ed_dg2[0] = w2_idx_1 * ed2g[2] - ed2g[1] * d1;
  ed_dg2[1] = ed2g[0] * d1 - w2_idx_0 * ed2g[2];
  ed_dg2[2] = w2_idx_0 * ed2g[1] - ed2g[0] * w2_idx_1;
  ed_dg3[0] = w3_idx_1 * ed3g[2] - ed3g[1] * w3_idx_2;
  ed_dg3[1] = ed3g[0] * w3_idx_2 - w3_idx_0 * ed3g[2];
  ed_dg3[2] = w3_idx_0 * ed3g[1] - ed3g[0] * w3_idx_1;
  vcf[0] = vlinks[9];
  vcf[3] = vlinks[10];
  vcf[6] = vlinks[11];
  vof[0] = v_torso[0];
  vcf[1] = vlinks[9];
  vcf[4] = vlinks[10];
  vcf[7] = vlinks[11];
  vof[1] = v_torso[1];
  vcf[2] = vlinks[9];
  vcf[5] = vlinks[10];
  vcf[8] = vlinks[11];
  vof[2] = v_torso[2];
  vof[3] = v_torso[0] + (w1_idx_1 * ad1g[2] - ad1g[1] * d);
  vof[4] = v_torso[1] + (ad1g[0] * d - w1_idx_0 * ad1g[2]);
  vof[5] = v_torso[2] + (w1_idx_0 * ad1g[1] - ad1g[0] * w1_idx_1);
  vof[6] = vof[3] + (w2_idx_1 * ad2g[2] - ad2g[1] * d1);
  vof[7] = vof[4] + (ad2g[0] * d1 - w2_idx_0 * ad2g[2]);
  vof[8] = vof[5] + (w2_idx_0 * ad2g[1] - ad2g[0] * w2_idx_1);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        rho_dotLB_tmp = 3 * j + 9 * i;
        rho_dotLB[rho_dotLB_tmp] = 0.0;
        rho_dotLB[rho_dotLB_tmp + 1] = 0.0;
        rho_dotLB[rho_dotLB_tmp + 2] = 0.0;
      } else {
        rho_dotLB_tmp = 3 * j + 9 * i;
        rho_dotLB[rho_dotLB_tmp] = vcf[3 * j] - vof[3 * i];
        rho_dotLB[rho_dotLB_tmp + 1] = vcf[3 * j + 1] - vof[3 * i + 1];
        rho_dotLB[rho_dotLB_tmp + 2] = vcf[3 * j + 2] - vof[3 * i + 2];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
}

/* End of code generation (lbval1.c) */
