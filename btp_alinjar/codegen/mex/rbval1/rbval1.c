/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rbval1.c
 *
 * Code generation for function 'rbval1'
 *
 */

/* Include files */
#include "rbval1.h"
#include "rbval1_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rbval1(const emlrtStack *sp, const real_T ec1g[3], const real_T ec2g[3],
            const real_T ac1g[3], const real_T ac2g[3], const real_T ec3g[3],
            const real_T vlinks[36], const real_T w_torso[3], real_T td1,
            const real_T v_torso[3], real_T td2, real_T td3, real_T ec_dg1[3],
            real_T ec_dg2[3], real_T ec_dg3[3], real_T rho_dotRB[27])
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
  int32_T rho_dotRB_tmp;
  d = w_torso[0] + ec1g[0] * td1;
  w1_idx_0 = d;
  d1 = d + ec2g[0] * td2;
  w2_idx_0 = d1;
  w3_idx_0 = d1 + ec3g[0] * td3;
  d = w_torso[1] + ec1g[1] * td1;
  w1_idx_1 = d;
  d1 = d + ec2g[1] * td2;
  w2_idx_1 = d1;
  w3_idx_1 = d1 + ec3g[1] * td3;
  d = w_torso[2] + ec1g[2] * td1;
  d1 = d + ec2g[2] * td2;
  w3_idx_2 = d1 + ec3g[2] * td3;
  ec_dg1[0] = w1_idx_1 * ec1g[2] - ec1g[1] * d;
  ec_dg1[1] = ec1g[0] * d - w1_idx_0 * ec1g[2];
  ec_dg1[2] = w1_idx_0 * ec1g[1] - ec1g[0] * w1_idx_1;
  ec_dg2[0] = w2_idx_1 * ec2g[2] - ec2g[1] * d1;
  ec_dg2[1] = ec2g[0] * d1 - w2_idx_0 * ec2g[2];
  ec_dg2[2] = w2_idx_0 * ec2g[1] - ec2g[0] * w2_idx_1;
  ec_dg3[0] = w3_idx_1 * ec3g[2] - ec3g[1] * w3_idx_2;
  ec_dg3[1] = ec3g[0] * w3_idx_2 - w3_idx_0 * ec3g[2];
  ec_dg3[2] = w3_idx_0 * ec3g[1] - ec3g[0] * w3_idx_1;
  vcf[0] = vlinks[6];
  vcf[3] = vlinks[7];
  vcf[6] = vlinks[8];
  vof[0] = v_torso[0];
  vcf[1] = vlinks[6];
  vcf[4] = vlinks[7];
  vcf[7] = vlinks[8];
  vof[1] = v_torso[1];
  vcf[2] = vlinks[6];
  vcf[5] = vlinks[7];
  vcf[8] = vlinks[8];
  vof[2] = v_torso[2];
  vof[3] = v_torso[0] + (w1_idx_1 * ac1g[2] - ac1g[1] * d);
  vof[4] = v_torso[1] + (ac1g[0] * d - w1_idx_0 * ac1g[2]);
  vof[5] = v_torso[2] + (w1_idx_0 * ac1g[1] - ac1g[0] * w1_idx_1);
  vof[6] = vof[3] + (w2_idx_1 * ac2g[2] - ac2g[1] * d1);
  vof[7] = vof[4] + (ac2g[0] * d1 - w2_idx_0 * ac2g[2]);
  vof[8] = vof[5] + (w2_idx_0 * ac2g[1] - ac2g[0] * w2_idx_1);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        rho_dotRB_tmp = 3 * j + 9 * i;
        rho_dotRB[rho_dotRB_tmp] = 0.0;
        rho_dotRB[rho_dotRB_tmp + 1] = 0.0;
        rho_dotRB[rho_dotRB_tmp + 2] = 0.0;
      } else {
        rho_dotRB_tmp = 3 * j + 9 * i;
        rho_dotRB[rho_dotRB_tmp] = vcf[3 * j] - vof[3 * i];
        rho_dotRB[rho_dotRB_tmp + 1] = vcf[3 * j + 1] - vof[3 * i + 1];
        rho_dotRB[rho_dotRB_tmp + 2] = vcf[3 * j + 2] - vof[3 * i + 2];
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

/* End of code generation (rbval1.c) */
