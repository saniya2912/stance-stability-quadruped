/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lb3.c
 *
 * Code generation for function 'lb3'
 *
 */

/* Include files */
#include "lb3.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lb3(real_T ankle, real_T knee, real_T hip, real_T tdLB[3])
{
  tdLB[0] = hip;
  tdLB[1] = knee;
  tdLB[2] = ankle;
}

/* End of code generation (lb3.c) */
