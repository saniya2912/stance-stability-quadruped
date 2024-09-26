/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rb3.c
 *
 * Code generation for function 'rb3'
 *
 */

/* Include files */
#include "rb3.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void rb3(real_T ankle, real_T knee, real_T hip, real_T tdRF[3])
{
  tdRF[0] = hip;
  tdRF[1] = knee;
  tdRF[2] = ankle;
}

/* End of code generation (rb3.c) */
