/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * theta_2d_des.c
 *
 * Code generation for function 'theta_2d_des'
 *
 */

/* Include files */
#include "theta_2d_des.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "theta_2d_des_data.h"
#include "theta_2d_des_initialize.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void theta_2d_des(const double theta_d_des[12], const double h_dot[36],
                  const double h[36], const double a_torso[3], double M,
                  const double f[3], double b_theta_2d_des[12])
{
  static const double b[3] = {0.0, 0.0, -9.80665};
  double A[36];
  double C[36];
  double U[36];
  double V[9];
  double s[3];
  double absx;
  double d;
  double d1;
  int ar;
  int br;
  int i;
  int i1;
  int i2;
  int ib;
  int ic;
  int r;
  int vcol;
  boolean_T p;
  if (!isInitialized_theta_2d_des) {
    theta_2d_des_initialize();
  }
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 12; i1++) {
      A[i1 + 12 * i] = h[i + 3 * i1];
    }
  }
  p = true;
  for (ar = 0; ar < 36; ar++) {
    C[ar] = 0.0;
    if ((!p) || (rtIsInf(A[ar]) || rtIsNaN(A[ar]))) {
      p = false;
    }
  }
  if (!p) {
    for (i = 0; i < 36; i++) {
      C[i] = rtNaN;
    }
  } else {
    svd(A, U, s, V);
    absx = fabs(s[0]);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &vcol);
        absx = ldexp(1.0, vcol - 53);
      }
    } else {
      absx = rtNaN;
    }
    absx *= 12.0;
    r = -1;
    ar = 0;
    while ((ar < 3) && (s[ar] > absx)) {
      r++;
      ar++;
    }
    if (r + 1 > 0) {
      vcol = 1;
      for (br = 0; br <= r; br++) {
        absx = 1.0 / s[br];
        i = vcol + 2;
        for (ar = vcol; ar <= i; ar++) {
          V[ar - 1] *= absx;
        }
        vcol += 3;
      }
      for (vcol = 0; vcol <= 33; vcol += 3) {
        i = vcol + 1;
        i1 = vcol + 3;
        if (i <= i1) {
          memset(&C[i + -1], 0, ((i1 - i) + 1) * sizeof(double));
        }
      }
      br = 0;
      for (vcol = 0; vcol <= 33; vcol += 3) {
        ar = -1;
        br++;
        i = br + 12 * r;
        for (ib = br; ib <= i; ib += 12) {
          i1 = vcol + 1;
          i2 = vcol + 3;
          for (ic = i1; ic <= i2; ic++) {
            C[ic - 1] += U[ib - 1] * V[(ar + ic) - vcol];
          }
          ar += 3;
        }
      }
    }
  }
  for (i = 0; i < 36; i++) {
    A[i] = -h_dot[i];
  }
  for (i = 0; i < 3; i++) {
    absx = 0.0;
    for (i1 = 0; i1 < 12; i1++) {
      absx += A[i + 3 * i1] * theta_d_des[i1];
    }
    s[i] = ((absx - M * a_torso[i]) + M * b[i]) + f[i];
  }
  absx = s[0];
  d = s[1];
  d1 = s[2];
  for (i = 0; i < 12; i++) {
    b_theta_2d_des[i] =
        (C[3 * i] * absx + C[3 * i + 1] * d) + C[3 * i + 2] * d1;
  }
}

/* End of code generation (theta_2d_des.c) */
