/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * acttheta.c
 *
 * Code generation for function 'acttheta'
 *
 */

/* Include files */
#include "acttheta.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void acttheta(const real_T tdRF[3], const real_T tdLF[3], const real_T tdRB[3],
              const real_T tdLB[3], const real_T t2dRF[3],
              const real_T t2dLF[3], const real_T t2dRB[3],
              const real_T t2dLB[3], real_T td[12], real_T t2d[12])
{
  td[0] = tdRF[0];
  td[3] = tdLF[0];
  td[6] = tdRB[0];
  td[9] = tdLB[0];
  t2d[0] = t2dRF[0];
  t2d[3] = t2dLF[0];
  t2d[6] = t2dRB[0];
  t2d[9] = t2dLB[0];
  td[1] = tdRF[1];
  td[4] = tdLF[1];
  td[7] = tdRB[1];
  td[10] = tdLB[1];
  t2d[1] = t2dRF[1];
  t2d[4] = t2dLF[1];
  t2d[7] = t2dRB[1];
  t2d[10] = t2dLB[1];
  td[2] = tdRF[2];
  td[5] = tdLF[2];
  td[8] = tdRB[2];
  td[11] = tdLB[2];
  t2d[2] = t2dRF[2];
  t2d[5] = t2dLF[2];
  t2d[8] = t2dRB[2];
  t2d[11] = t2dLB[2];
}

/* End of code generation (acttheta.c) */
