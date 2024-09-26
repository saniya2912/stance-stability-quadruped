/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotlb.c
 *
 * Code generation for function 'hdotlb'
 *
 */

/* Include files */
#include "hdotlb.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hdotlb(const real_T ed_dg1[3], const real_T ed1g[3], const real_T ed2g[3],
            const real_T ed3g[3], const real_T ed_dg2[3],
            const real_T ed_dg3[3], const real_T rho_dotLB[27],
            const real_T rhoLB[27], real_T h_dotLB[9])
{
  /*  */
  /*  */
  h_dotLB[0] =
      ((((0.017671458676438125 *
              (ed1g[1] * rho_dotLB[2] - rho_dotLB[1] * ed1g[2]) +
          0.017671458676438125 *
              (ed_dg1[1] * rhoLB[2] - rhoLB[1] * ed_dg1[2])) +
         0.017671458676438125 *
             (ed1g[1] * rho_dotLB[5] - ed1g[2] * rho_dotLB[4])) +
        0.017671458676438125 * (ed_dg1[1] * rhoLB[5] - ed_dg1[2] * rhoLB[4])) +
       0.096 * (ed1g[1] * rho_dotLB[8] - ed1g[2] * rho_dotLB[7])) +
      0.096 * (ed_dg1[1] * rhoLB[8] - ed_dg1[2] * rhoLB[7]);
  h_dotLB[3] = ((0.017671458676438125 *
                     (ed2g[1] * rho_dotLB[14] - ed2g[2] * rho_dotLB[13]) +
                 0.017671458676438125 *
                     (ed_dg2[1] * rhoLB[14] - ed_dg2[2] * rhoLB[13])) +
                0.096 * (ed2g[1] * rho_dotLB[17] - ed2g[2] * rho_dotLB[16])) +
               0.096 * (ed_dg2[1] * rhoLB[17] - ed_dg2[2] * rhoLB[16]);
  h_dotLB[6] = 0.096 * (ed3g[1] * rho_dotLB[26] - ed3g[2] * rho_dotLB[25]) +
               0.096 * (ed_dg3[1] * rhoLB[26] - ed_dg3[2] * rhoLB[25]);
  h_dotLB[1] =
      ((((0.017671458676438125 *
              (rho_dotLB[0] * ed1g[2] - ed1g[0] * rho_dotLB[2]) +
          0.017671458676438125 *
              (rhoLB[0] * ed_dg1[2] - ed_dg1[0] * rhoLB[2])) +
         0.017671458676438125 *
             (ed1g[2] * rho_dotLB[3] - ed1g[0] * rho_dotLB[5])) +
        0.017671458676438125 * (ed_dg1[2] * rhoLB[3] - ed_dg1[0] * rhoLB[5])) +
       0.096 * (ed1g[2] * rho_dotLB[6] - ed1g[0] * rho_dotLB[8])) +
      0.096 * (ed_dg1[2] * rhoLB[6] - ed_dg1[0] * rhoLB[8]);
  h_dotLB[4] = ((0.017671458676438125 *
                     (ed2g[2] * rho_dotLB[12] - ed2g[0] * rho_dotLB[14]) +
                 0.017671458676438125 *
                     (ed_dg2[2] * rhoLB[12] - ed_dg2[0] * rhoLB[14])) +
                0.096 * (ed2g[2] * rho_dotLB[15] - ed2g[0] * rho_dotLB[17])) +
               0.096 * (ed_dg2[2] * rhoLB[15] - ed_dg2[0] * rhoLB[17]);
  h_dotLB[7] = 0.096 * (ed3g[2] * rho_dotLB[24] - ed3g[0] * rho_dotLB[26]) +
               0.096 * (ed_dg3[2] * rhoLB[24] - ed_dg3[0] * rhoLB[26]);
  h_dotLB[2] =
      ((((0.017671458676438125 *
              (ed1g[0] * rho_dotLB[1] - rho_dotLB[0] * ed1g[1]) +
          0.017671458676438125 *
              (ed_dg1[0] * rhoLB[1] - rhoLB[0] * ed_dg1[1])) +
         0.017671458676438125 *
             (ed1g[0] * rho_dotLB[4] - ed1g[1] * rho_dotLB[3])) +
        0.017671458676438125 * (ed_dg1[0] * rhoLB[4] - ed_dg1[1] * rhoLB[3])) +
       0.096 * (ed1g[0] * rho_dotLB[7] - ed1g[1] * rho_dotLB[6])) +
      0.096 * (ed_dg1[0] * rhoLB[7] - ed_dg1[1] * rhoLB[6]);
  h_dotLB[5] = ((0.017671458676438125 *
                     (ed2g[0] * rho_dotLB[13] - ed2g[1] * rho_dotLB[12]) +
                 0.017671458676438125 *
                     (ed_dg2[0] * rhoLB[13] - ed_dg2[1] * rhoLB[12])) +
                0.096 * (ed2g[0] * rho_dotLB[16] - ed2g[1] * rho_dotLB[15])) +
               0.096 * (ed_dg2[0] * rhoLB[16] - ed_dg2[1] * rhoLB[15]);
  h_dotLB[8] = 0.096 * (ed3g[0] * rho_dotLB[25] - ed3g[1] * rho_dotLB[24]) +
               0.096 * (ed_dg3[0] * rhoLB[25] - ed_dg3[1] * rhoLB[24]);
}

/* End of code generation (hdotlb.c) */
