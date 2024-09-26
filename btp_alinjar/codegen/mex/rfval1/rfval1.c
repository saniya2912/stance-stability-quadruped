/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rfval1.c
 *
 * Code generation for function 'rfval1'
 *
 */

/* Include files */
#include "rfval1.h"
#include "rfval1_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rfval1(const emlrtStack *sp, const real_T ea1g[3], const real_T ea2g[3],
            const real_T aa1g[3], const real_T aa2g[3], const real_T ea3g[3],
            const real_T vlinks[36], const real_T w_torso[3], real_T td1,
            const real_T v_torso[3], real_T td2, real_T td3, real_T ea_dg1[3],
            real_T ea_dg2[3], real_T ea_dg3[3], real_T rho_dotRF[27])
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
  int32_T rho_dotRF_tmp;
  d = w_torso[0] + ea1g[0] * td1;
  w1_idx_0 = d;
  d1 = d + ea2g[0] * td2;
  w2_idx_0 = d1;
  w3_idx_0 = d1 + ea3g[0] * td3;
  d = w_torso[1] + ea1g[1] * td1;
  w1_idx_1 = d;
  d1 = d + ea2g[1] * td2;
  w2_idx_1 = d1;
  w3_idx_1 = d1 + ea3g[1] * td3;
  d = w_torso[2] + ea1g[2] * td1;
  d1 = d + ea2g[2] * td2;
  w3_idx_2 = d1 + ea3g[2] * td3;
  /* e dot = omega X e */
  ea_dg1[0] = w1_idx_1 * ea1g[2] - ea1g[1] * d;
  ea_dg1[1] = ea1g[0] * d - w1_idx_0 * ea1g[2];
  ea_dg1[2] = w1_idx_0 * ea1g[1] - ea1g[0] * w1_idx_1;
  ea_dg2[0] = w2_idx_1 * ea2g[2] - ea2g[1] * d1;
  ea_dg2[1] = ea2g[0] * d1 - w2_idx_0 * ea2g[2];
  ea_dg2[2] = w2_idx_0 * ea2g[1] - ea2g[0] * w2_idx_1;
  ea_dg3[0] = w3_idx_1 * ea3g[2] - ea3g[1] * w3_idx_2;
  ea_dg3[1] = ea3g[0] * w3_idx_2 - w3_idx_0 * ea3g[2];
  ea_dg3[2] = w3_idx_0 * ea3g[1] - ea3g[0] * w3_idx_1;
  vcf[0] = vlinks[0];
  vcf[3] = vlinks[1];
  vcf[6] = vlinks[2];
  vof[0] = v_torso[0];
  vcf[1] = vlinks[0];
  vcf[4] = vlinks[1];
  vcf[7] = vlinks[2];
  vof[1] = v_torso[1];
  vcf[2] = vlinks[0];
  vcf[5] = vlinks[1];
  vcf[8] = vlinks[2];
  vof[2] = v_torso[2];
  vof[3] = v_torso[0] + (w1_idx_1 * aa1g[2] - aa1g[1] * d);
  vof[4] = v_torso[1] + (aa1g[0] * d - w1_idx_0 * aa1g[2]);
  vof[5] = v_torso[2] + (w1_idx_0 * aa1g[1] - aa1g[0] * w1_idx_1);
  vof[6] = vof[3] + (w2_idx_1 * aa2g[2] - aa2g[1] * d1);
  vof[7] = vof[4] + (aa2g[0] * d1 - w2_idx_0 * aa2g[2]);
  vof[8] = vof[5] + (w2_idx_0 * aa2g[1] - aa2g[0] * w2_idx_1);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        rho_dotRF_tmp = 3 * j + 9 * i;
        rho_dotRF[rho_dotRF_tmp] = 0.0;
        rho_dotRF[rho_dotRF_tmp + 1] = 0.0;
        rho_dotRF[rho_dotRF_tmp + 2] = 0.0;
      } else {
        rho_dotRF_tmp = 3 * j + 9 * i;
        rho_dotRF[rho_dotRF_tmp] = vcf[3 * j] - vof[3 * i];
        rho_dotRF[rho_dotRF_tmp + 1] = vcf[3 * j + 1] - vof[3 * i + 1];
        rho_dotRF[rho_dotRF_tmp + 2] = vcf[3 * j + 2] - vof[3 * i + 2];
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

/* End of code generation (rfval1.c) */
