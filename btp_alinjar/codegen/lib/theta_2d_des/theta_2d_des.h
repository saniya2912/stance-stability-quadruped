/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * theta_2d_des.h
 *
 * Code generation for function 'theta_2d_des'
 *
 */

#ifndef THETA_2D_DES_H
#define THETA_2D_DES_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void theta_2d_des(const double theta_d_des[12], const double h_dot[36],
                         const double h[36], const double a_torso[3], double M,
                         const double f[3], double b_theta_2d_des[12]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (theta_2d_des.h) */
