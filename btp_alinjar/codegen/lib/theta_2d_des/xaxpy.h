/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xaxpy.h
 *
 * Code generation for function 'xaxpy'
 *
 */

#ifndef XAXPY_H
#define XAXPY_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_xaxpy(int n, double a, const double x[36], int ix0, double y[12],
             int iy0);

void c_xaxpy(int n, double a, const double x[12], int ix0, double y[36],
             int iy0);

void d_xaxpy(double a, double y[9], int iy0);

void xaxpy(int n, double a, int ix0, double y[36], int iy0);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (xaxpy.h) */
