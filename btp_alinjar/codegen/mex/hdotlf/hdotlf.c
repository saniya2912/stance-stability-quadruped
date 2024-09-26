/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotlf.c
 *
 * Code generation for function 'hdotlf'
 *
 */

/* Include files */
#include "hdotlf.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hdotlf(const real_T eb_dg1[3], const real_T eb1g[3], const real_T eb2g[3],
            const real_T eb3g[3], const real_T eb_dg2[3],
            const real_T eb_dg3[3], const real_T rho_dotLF[27],
            const real_T rhoLF[27], real_T h_dotLF[9])
{
  /*  */
  /*  */
  h_dotLF[0] =
      ((((0.017671458676438125 *
              (eb1g[1] * rho_dotLF[2] - rho_dotLF[1] * eb1g[2]) +
          0.017671458676438125 *
              (eb_dg1[1] * rhoLF[2] - rhoLF[1] * eb_dg1[2])) +
         0.017671458676438125 *
             (eb1g[1] * rho_dotLF[5] - eb1g[2] * rho_dotLF[4])) +
        0.017671458676438125 * (eb_dg1[1] * rhoLF[5] - eb_dg1[2] * rhoLF[4])) +
       0.096 * (eb1g[1] * rho_dotLF[8] - eb1g[2] * rho_dotLF[7])) +
      0.096 * (eb_dg1[1] * rhoLF[8] - eb_dg1[2] * rhoLF[7]);
  h_dotLF[3] = ((0.017671458676438125 *
                     (eb2g[1] * rho_dotLF[14] - eb2g[2] * rho_dotLF[13]) +
                 0.017671458676438125 *
                     (eb_dg2[1] * rhoLF[14] - eb_dg2[2] * rhoLF[13])) +
                0.096 * (eb2g[1] * rho_dotLF[17] - eb2g[2] * rho_dotLF[16])) +
               0.096 * (eb_dg2[1] * rhoLF[17] - eb_dg2[2] * rhoLF[16]);
  h_dotLF[6] = 0.096 * (eb3g[1] * rho_dotLF[26] - eb3g[2] * rho_dotLF[25]) +
               0.096 * (eb_dg3[1] * rhoLF[26] - eb_dg3[2] * rhoLF[25]);
  h_dotLF[1] =
      ((((0.017671458676438125 *
              (rho_dotLF[0] * eb1g[2] - eb1g[0] * rho_dotLF[2]) +
          0.017671458676438125 *
              (rhoLF[0] * eb_dg1[2] - eb_dg1[0] * rhoLF[2])) +
         0.017671458676438125 *
             (eb1g[2] * rho_dotLF[3] - eb1g[0] * rho_dotLF[5])) +
        0.017671458676438125 * (eb_dg1[2] * rhoLF[3] - eb_dg1[0] * rhoLF[5])) +
       0.096 * (eb1g[2] * rho_dotLF[6] - eb1g[0] * rho_dotLF[8])) +
      0.096 * (eb_dg1[2] * rhoLF[6] - eb_dg1[0] * rhoLF[8]);
  h_dotLF[4] = ((0.017671458676438125 *
                     (eb2g[2] * rho_dotLF[12] - eb2g[0] * rho_dotLF[14]) +
                 0.017671458676438125 *
                     (eb_dg2[2] * rhoLF[12] - eb_dg2[0] * rhoLF[14])) +
                0.096 * (eb2g[2] * rho_dotLF[15] - eb2g[0] * rho_dotLF[17])) +
               0.096 * (eb_dg2[2] * rhoLF[15] - eb_dg2[0] * rhoLF[17]);
  h_dotLF[7] = 0.096 * (eb3g[2] * rho_dotLF[24] - eb3g[0] * rho_dotLF[26]) +
               0.096 * (eb_dg3[2] * rhoLF[24] - eb_dg3[0] * rhoLF[26]);
  h_dotLF[2] =
      ((((0.017671458676438125 *
              (eb1g[0] * rho_dotLF[1] - rho_dotLF[0] * eb1g[1]) +
          0.017671458676438125 *
              (eb_dg1[0] * rhoLF[1] - rhoLF[0] * eb_dg1[1])) +
         0.017671458676438125 *
             (eb1g[0] * rho_dotLF[4] - eb1g[1] * rho_dotLF[3])) +
        0.017671458676438125 * (eb_dg1[0] * rhoLF[4] - eb_dg1[1] * rhoLF[3])) +
       0.096 * (eb1g[0] * rho_dotLF[7] - eb1g[1] * rho_dotLF[6])) +
      0.096 * (eb_dg1[0] * rhoLF[7] - eb_dg1[1] * rhoLF[6]);
  h_dotLF[5] = ((0.017671458676438125 *
                     (eb2g[0] * rho_dotLF[13] - eb2g[1] * rho_dotLF[12]) +
                 0.017671458676438125 *
                     (eb_dg2[0] * rhoLF[13] - eb_dg2[1] * rhoLF[12])) +
                0.096 * (eb2g[0] * rho_dotLF[16] - eb2g[1] * rho_dotLF[15])) +
               0.096 * (eb_dg2[0] * rhoLF[16] - eb_dg2[1] * rhoLF[15]);
  h_dotLF[8] = 0.096 * (eb3g[0] * rho_dotLF[25] - eb3g[1] * rho_dotLF[24]) +
               0.096 * (eb_dg3[0] * rhoLF[25] - eb_dg3[1] * rhoLF[24]);
}

/* End of code generation (hdotlf.c) */
