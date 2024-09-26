/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * theta_2d_des_initialize.c
 *
 * Code generation for function 'theta_2d_des_initialize'
 *
 */

/* Include files */
#include "theta_2d_des_initialize.h"
#include "rt_nonfinite.h"
#include "theta_2d_des_data.h"

/* Function Definitions */
void theta_2d_des_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_theta_2d_des = true;
}

/* End of code generation (theta_2d_des_initialize.c) */
