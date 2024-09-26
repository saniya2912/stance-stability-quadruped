/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hdotrb.c
 *
 * Code generation for function 'hdotrb'
 *
 */

/* Include files */
#include "hdotrb.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hdotrb(const real_T ec_dg1[3], const real_T ec1g[3], const real_T ec2g[3],
            const real_T ec3g[3], const real_T ec_dg2[3],
            const real_T ec_dg3[3], const real_T rho_dotRB[27],
            const real_T rhoRB[27], real_T h_dotRB[9])
{
  /*  */
  /*  */
  h_dotRB[0] =
      ((((0.017671458676438125 *
              (ec1g[1] * rho_dotRB[2] - rho_dotRB[1] * ec1g[2]) +
          0.017671458676438125 *
              (ec_dg1[1] * rhoRB[2] - rhoRB[1] * ec_dg1[2])) +
         0.017671458676438125 *
             (ec1g[1] * rho_dotRB[5] - ec1g[2] * rho_dotRB[4])) +
        0.017671458676438125 * (ec_dg1[1] * rhoRB[5] - ec_dg1[2] * rhoRB[4])) +
       0.096 * (ec1g[1] * rho_dotRB[8] - ec1g[2] * rho_dotRB[7])) +
      0.096 * (ec_dg1[1] * rhoRB[8] - ec_dg1[2] * rhoRB[7]);
  h_dotRB[3] = ((0.017671458676438125 *
                     (ec2g[1] * rho_dotRB[14] - ec2g[2] * rho_dotRB[13]) +
                 0.017671458676438125 *
                     (ec_dg2[1] * rhoRB[14] - ec_dg2[2] * rhoRB[13])) +
                0.096 * (ec2g[1] * rho_dotRB[17] - ec2g[2] * rho_dotRB[16])) +
               0.096 * (ec_dg2[1] * rhoRB[17] - ec_dg2[2] * rhoRB[16]);
  h_dotRB[6] = 0.096 * (ec3g[1] * rho_dotRB[26] - ec3g[2] * rho_dotRB[25]) +
               0.096 * (ec_dg3[1] * rhoRB[26] - ec_dg3[2] * rhoRB[25]);
  h_dotRB[1] =
      ((((0.017671458676438125 *
              (rho_dotRB[0] * ec1g[2] - ec1g[0] * rho_dotRB[2]) +
          0.017671458676438125 *
              (rhoRB[0] * ec_dg1[2] - ec_dg1[0] * rhoRB[2])) +
         0.017671458676438125 *
             (ec1g[2] * rho_dotRB[3] - ec1g[0] * rho_dotRB[5])) +
        0.017671458676438125 * (ec_dg1[2] * rhoRB[3] - ec_dg1[0] * rhoRB[5])) +
       0.096 * (ec1g[2] * rho_dotRB[6] - ec1g[0] * rho_dotRB[8])) +
      0.096 * (ec_dg1[2] * rhoRB[6] - ec_dg1[0] * rhoRB[8]);
  h_dotRB[4] = ((0.017671458676438125 *
                     (ec2g[2] * rho_dotRB[12] - ec2g[0] * rho_dotRB[14]) +
                 0.017671458676438125 *
                     (ec_dg2[2] * rhoRB[12] - ec_dg2[0] * rhoRB[14])) +
                0.096 * (ec2g[2] * rho_dotRB[15] - ec2g[0] * rho_dotRB[17])) +
               0.096 * (ec_dg2[2] * rhoRB[15] - ec_dg2[0] * rhoRB[17]);
  h_dotRB[7] = 0.096 * (ec3g[2] * rho_dotRB[24] - ec3g[0] * rho_dotRB[26]) +
               0.096 * (ec_dg3[2] * rhoRB[24] - ec_dg3[0] * rhoRB[26]);
  h_dotRB[2] =
      ((((0.017671458676438125 *
              (ec1g[0] * rho_dotRB[1] - rho_dotRB[0] * ec1g[1]) +
          0.017671458676438125 *
              (ec_dg1[0] * rhoRB[1] - rhoRB[0] * ec_dg1[1])) +
         0.017671458676438125 *
             (ec1g[0] * rho_dotRB[4] - ec1g[1] * rho_dotRB[3])) +
        0.017671458676438125 * (ec_dg1[0] * rhoRB[4] - ec_dg1[1] * rhoRB[3])) +
       0.096 * (ec1g[0] * rho_dotRB[7] - ec1g[1] * rho_dotRB[6])) +
      0.096 * (ec_dg1[0] * rhoRB[7] - ec_dg1[1] * rhoRB[6]);
  h_dotRB[5] = ((0.017671458676438125 *
                     (ec2g[0] * rho_dotRB[13] - ec2g[1] * rho_dotRB[12]) +
                 0.017671458676438125 *
                     (ec_dg2[0] * rhoRB[13] - ec_dg2[1] * rhoRB[12])) +
                0.096 * (ec2g[0] * rho_dotRB[16] - ec2g[1] * rho_dotRB[15])) +
               0.096 * (ec_dg2[0] * rhoRB[16] - ec_dg2[1] * rhoRB[15]);
  h_dotRB[8] = 0.096 * (ec3g[0] * rho_dotRB[25] - ec3g[1] * rho_dotRB[24]) +
               0.096 * (ec_dg3[0] * rhoRB[25] - ec_dg3[1] * rhoRB[24]);
}

/* End of code generation (hdotrb.c) */
