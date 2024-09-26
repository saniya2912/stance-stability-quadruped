/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotrf.c
 *
 * Code generation for function 'hdotrf'
 *
 */

/* Include files */
#include "hdotrf.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hdotrf(const real_T ea_dg1[3], const real_T ea1g[3], const real_T ea2g[3],
            const real_T ea3g[3], const real_T ea_dg2[3],
            const real_T ea_dg3[3], const real_T rho_dotRF[27],
            const real_T rhoRF[27], real_T h_dotRF[9])
{
  /*  */
  /*  */
  h_dotRF[0] =
      ((((0.017671458676438125 *
              (ea1g[1] * rho_dotRF[2] - rho_dotRF[1] * ea1g[2]) +
          0.017671458676438125 *
              (ea_dg1[1] * rhoRF[2] - rhoRF[1] * ea_dg1[2])) +
         0.017671458676438125 *
             (ea1g[1] * rho_dotRF[5] - ea1g[2] * rho_dotRF[4])) +
        0.017671458676438125 * (ea_dg1[1] * rhoRF[5] - ea_dg1[2] * rhoRF[4])) +
       0.096 * (ea1g[1] * rho_dotRF[8] - ea1g[2] * rho_dotRF[7])) +
      0.096 * (ea_dg1[1] * rhoRF[8] - ea_dg1[2] * rhoRF[7]);
  h_dotRF[3] = ((0.017671458676438125 *
                     (ea2g[1] * rho_dotRF[14] - ea2g[2] * rho_dotRF[13]) +
                 0.017671458676438125 *
                     (ea_dg2[1] * rhoRF[14] - ea_dg2[2] * rhoRF[13])) +
                0.096 * (ea2g[1] * rho_dotRF[17] - ea2g[2] * rho_dotRF[16])) +
               0.096 * (ea_dg2[1] * rhoRF[17] - ea_dg2[2] * rhoRF[16]);
  h_dotRF[6] = 0.096 * (ea3g[1] * rho_dotRF[26] - ea3g[2] * rho_dotRF[25]) +
               0.096 * (ea_dg3[1] * rhoRF[26] - ea_dg3[2] * rhoRF[25]);
  h_dotRF[1] =
      ((((0.017671458676438125 *
              (rho_dotRF[0] * ea1g[2] - ea1g[0] * rho_dotRF[2]) +
          0.017671458676438125 *
              (rhoRF[0] * ea_dg1[2] - ea_dg1[0] * rhoRF[2])) +
         0.017671458676438125 *
             (ea1g[2] * rho_dotRF[3] - ea1g[0] * rho_dotRF[5])) +
        0.017671458676438125 * (ea_dg1[2] * rhoRF[3] - ea_dg1[0] * rhoRF[5])) +
       0.096 * (ea1g[2] * rho_dotRF[6] - ea1g[0] * rho_dotRF[8])) +
      0.096 * (ea_dg1[2] * rhoRF[6] - ea_dg1[0] * rhoRF[8]);
  h_dotRF[4] = ((0.017671458676438125 *
                     (ea2g[2] * rho_dotRF[12] - ea2g[0] * rho_dotRF[14]) +
                 0.017671458676438125 *
                     (ea_dg2[2] * rhoRF[12] - ea_dg2[0] * rhoRF[14])) +
                0.096 * (ea2g[2] * rho_dotRF[15] - ea2g[0] * rho_dotRF[17])) +
               0.096 * (ea_dg2[2] * rhoRF[15] - ea_dg2[0] * rhoRF[17]);
  h_dotRF[7] = 0.096 * (ea3g[2] * rho_dotRF[24] - ea3g[0] * rho_dotRF[26]) +
               0.096 * (ea_dg3[2] * rhoRF[24] - ea_dg3[0] * rhoRF[26]);
  h_dotRF[2] =
      ((((0.017671458676438125 *
              (ea1g[0] * rho_dotRF[1] - rho_dotRF[0] * ea1g[1]) +
          0.017671458676438125 *
              (ea_dg1[0] * rhoRF[1] - rhoRF[0] * ea_dg1[1])) +
         0.017671458676438125 *
             (ea1g[0] * rho_dotRF[4] - ea1g[1] * rho_dotRF[3])) +
        0.017671458676438125 * (ea_dg1[0] * rhoRF[4] - ea_dg1[1] * rhoRF[3])) +
       0.096 * (ea1g[0] * rho_dotRF[7] - ea1g[1] * rho_dotRF[6])) +
      0.096 * (ea_dg1[0] * rhoRF[7] - ea_dg1[1] * rhoRF[6]);
  h_dotRF[5] = ((0.017671458676438125 *
                     (ea2g[0] * rho_dotRF[13] - ea2g[1] * rho_dotRF[12]) +
                 0.017671458676438125 *
                     (ea_dg2[0] * rhoRF[13] - ea_dg2[1] * rhoRF[12])) +
                0.096 * (ea2g[0] * rho_dotRF[16] - ea2g[1] * rho_dotRF[15])) +
               0.096 * (ea_dg2[0] * rhoRF[16] - ea_dg2[1] * rhoRF[15]);
  h_dotRF[8] = 0.096 * (ea3g[0] * rho_dotRF[25] - ea3g[1] * rho_dotRF[24]) +
               0.096 * (ea_dg3[0] * rhoRF[25] - ea_dg3[1] * rhoRF[24]);
}

/* End of code generation (hdotrf.c) */
