/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * svd.c
 *
 * Code generation for function 'svd'
 *
 */

/* Include files */
#include "svd.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "xrot.h"
#include "xrotg.h"
#include "xswap.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void svd(const double A[36], double U[36], double s[3], double V[9])
{
  double b_A[36];
  double work[12];
  double Vf[9];
  double b_s[3];
  double e[3];
  double nrm;
  double rt;
  double scale;
  double sm;
  double snorm;
  double sqds;
  double ztest;
  int exitg1;
  int k;
  int kase;
  int m;
  int q;
  int qjj;
  int qp1;
  int qq;
  boolean_T apply_transform;
  boolean_T exitg2;
  memcpy(&b_A[0], &A[0], 36U * sizeof(double));
  b_s[0] = 0.0;
  e[0] = 0.0;
  b_s[1] = 0.0;
  e[1] = 0.0;
  b_s[2] = 0.0;
  e[2] = 0.0;
  memset(&work[0], 0, 12U * sizeof(double));
  memset(&U[0], 0, 36U * sizeof(double));
  memset(&Vf[0], 0, 9U * sizeof(double));
  for (q = 0; q < 3; q++) {
    qp1 = q + 2;
    qq = (q + 12 * q) + 1;
    apply_transform = false;
    nrm = xnrm2(12 - q, b_A, qq);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qq - 1] < 0.0) {
        ztest = -nrm;
        b_s[q] = -nrm;
      } else {
        ztest = nrm;
        b_s[q] = nrm;
      }
      if (fabs(ztest) >= 1.0020841800044864E-292) {
        nrm = 1.0 / ztest;
        qjj = (qq - q) + 11;
        for (k = qq; k <= qjj; k++) {
          b_A[k - 1] *= nrm;
        }
      } else {
        qjj = (qq - q) + 11;
        for (k = qq; k <= qjj; k++) {
          b_A[k - 1] /= b_s[q];
        }
      }
      b_A[qq - 1]++;
      b_s[q] = -b_s[q];
    } else {
      b_s[q] = 0.0;
    }
    for (kase = qp1; kase < 4; kase++) {
      qjj = q + 12 * (kase - 1);
      if (apply_transform) {
        xaxpy(12 - q, -(xdotc(12 - q, b_A, qq, b_A, qjj + 1) / b_A[q + 12 * q]),
              qq, b_A, qjj + 1);
      }
      e[kase - 1] = b_A[qjj];
    }
    for (k = q + 1; k < 13; k++) {
      kase = (k + 12 * q) - 1;
      U[kase] = b_A[kase];
    }
    if (q + 1 <= 1) {
      nrm = b_xnrm2(e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }
        nrm = e[0];
        if (fabs(e[0]) >= 1.0020841800044864E-292) {
          nrm = 1.0 / e[0];
          for (k = qp1; k < 4; k++) {
            e[k - 1] *= nrm;
          }
        } else {
          for (k = qp1; k < 4; k++) {
            e[k - 1] /= nrm;
          }
        }
        e[1]++;
        e[0] = -e[0];
        for (k = qp1; k < 13; k++) {
          work[k - 1] = 0.0;
        }
        for (kase = qp1; kase < 4; kase++) {
          b_xaxpy(11, e[kase - 1], b_A, 12 * (kase - 1) + 2, work, 2);
        }
        for (kase = qp1; kase < 4; kase++) {
          c_xaxpy(11, -e[kase - 1] / e[1], work, 2, b_A, 12 * (kase - 1) + 2);
        }
      }
      for (k = qp1; k < 4; k++) {
        Vf[k - 1] = e[k - 1];
      }
    }
  }
  m = 1;
  e[1] = b_A[25];
  e[2] = 0.0;
  for (q = 2; q >= 0; q--) {
    qp1 = q + 2;
    qq = q + 12 * q;
    if (b_s[q] != 0.0) {
      for (kase = qp1; kase < 4; kase++) {
        qjj = (q + 12 * (kase - 1)) + 1;
        xaxpy(12 - q, -(xdotc(12 - q, U, qq + 1, U, qjj) / U[qq]), qq + 1, U,
              qjj);
      }
      for (k = q + 1; k < 13; k++) {
        kase = (k + 12 * q) - 1;
        U[kase] = -U[kase];
      }
      U[qq]++;
      for (k = 0; k < q; k++) {
        U[k + 12 * q] = 0.0;
      }
    } else {
      memset(&U[q * 12], 0, 12U * sizeof(double));
      U[qq] = 1.0;
    }
  }
  for (q = 2; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      d_xaxpy(-(b_xdotc(Vf, Vf, 5) / Vf[1]), Vf, 5);
      d_xaxpy(-(b_xdotc(Vf, Vf, 8) / Vf[1]), Vf, 8);
    }
    Vf[3 * q] = 0.0;
    Vf[3 * q + 1] = 0.0;
    Vf[3 * q + 2] = 0.0;
    Vf[q + 3 * q] = 1.0;
  }
  qp1 = 0;
  snorm = 0.0;
  for (q = 0; q < 3; q++) {
    ztest = b_s[q];
    if (ztest != 0.0) {
      rt = fabs(ztest);
      nrm = ztest / rt;
      b_s[q] = rt;
      if (q + 1 < 3) {
        e[q] /= nrm;
      }
      kase = 12 * q;
      qjj = kase + 12;
      for (k = kase + 1; k <= qjj; k++) {
        U[k - 1] *= nrm;
      }
    }
    if (q + 1 < 3) {
      ztest = e[q];
      if (ztest != 0.0) {
        rt = fabs(ztest);
        nrm = rt / ztest;
        e[q] = rt;
        b_s[q + 1] *= nrm;
        kase = 3 * (q + 1);
        qjj = kase + 3;
        for (k = kase + 1; k <= qjj; k++) {
          Vf[k - 1] *= nrm;
        }
      }
    }
    nrm = fabs(b_s[q]);
    ztest = fabs(e[q]);
    if ((nrm > ztest) || rtIsNaN(ztest)) {
      ztest = nrm;
    }
    if ((!(snorm > ztest)) && (!rtIsNaN(ztest))) {
      snorm = ztest;
    }
  }
  while ((m + 2 > 0) && (qp1 < 75)) {
    k = m;
    do {
      exitg1 = 0;
      q = k + 1;
      if (k + 1 == 0) {
        exitg1 = 1;
      } else {
        nrm = fabs(e[k]);
        if ((nrm <=
             2.2204460492503131E-16 * (fabs(b_s[k]) + fabs(b_s[k + 1]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((qp1 > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e[k] = 0.0;
          exitg1 = 1;
        } else {
          k--;
        }
      }
    } while (exitg1 == 0);
    if (k + 1 == m + 1) {
      kase = 4;
    } else {
      qjj = m + 2;
      kase = m + 2;
      exitg2 = false;
      while ((!exitg2) && (kase >= k + 1)) {
        qjj = kase;
        if (kase == k + 1) {
          exitg2 = true;
        } else {
          nrm = 0.0;
          if (kase < m + 2) {
            nrm = fabs(e[kase - 1]);
          }
          if (kase > k + 2) {
            nrm += fabs(e[kase - 2]);
          }
          ztest = fabs(b_s[kase - 1]);
          if ((ztest <= 2.2204460492503131E-16 * nrm) ||
              (ztest <= 1.0020841800044864E-292)) {
            b_s[kase - 1] = 0.0;
            exitg2 = true;
          } else {
            kase--;
          }
        }
      }
      if (qjj == k + 1) {
        kase = 3;
      } else if (qjj == m + 2) {
        kase = 1;
      } else {
        kase = 2;
        q = qjj;
      }
    }
    switch (kase) {
    case 1:
      ztest = e[m];
      e[m] = 0.0;
      qjj = m + 1;
      for (k = qjj; k >= q + 1; k--) {
        xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
        if (k > q + 1) {
          ztest = -sqds * e[0];
          e[0] *= sm;
        }
        xrot(Vf, 3 * (k - 1) + 1, 3 * (m + 1) + 1, sm, sqds);
      }
      break;
    case 2:
      ztest = e[q - 1];
      e[q - 1] = 0.0;
      for (k = q + 1; k <= m + 2; k++) {
        xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
        rt = e[k - 1];
        ztest = -sqds * rt;
        e[k - 1] = rt * sm;
        b_xrot(U, 12 * (k - 1) + 1, 12 * (q - 1) + 1, sm, sqds);
      }
      break;
    case 3:
      kase = m + 1;
      nrm = b_s[m + 1];
      scale = fabs(nrm);
      ztest = fabs(b_s[m]);
      if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
        scale = ztest;
      }
      ztest = fabs(e[m]);
      if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
        scale = ztest;
      }
      ztest = fabs(b_s[q]);
      if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
        scale = ztest;
      }
      ztest = fabs(e[q]);
      if ((!(scale > ztest)) && (!rtIsNaN(ztest))) {
        scale = ztest;
      }
      sm = nrm / scale;
      nrm = b_s[m] / scale;
      ztest = e[m] / scale;
      sqds = b_s[q] / scale;
      rt = ((nrm + sm) * (nrm - sm) + ztest * ztest) / 2.0;
      nrm = sm * ztest;
      nrm *= nrm;
      if ((rt != 0.0) || (nrm != 0.0)) {
        ztest = sqrt(rt * rt + nrm);
        if (rt < 0.0) {
          ztest = -ztest;
        }
        ztest = nrm / (rt + ztest);
      } else {
        ztest = 0.0;
      }
      ztest += (sqds + sm) * (sqds - sm);
      nrm = sqds * (e[q] / scale);
      for (k = q + 1; k <= kase; k++) {
        xrotg(&ztest, &nrm, &sm, &sqds);
        if (k > q + 1) {
          e[0] = ztest;
        }
        nrm = e[k - 1];
        rt = b_s[k - 1];
        e[k - 1] = sm * nrm - sqds * rt;
        ztest = sqds * b_s[k];
        b_s[k] *= sm;
        xrot(Vf, 3 * (k - 1) + 1, 3 * k + 1, sm, sqds);
        b_s[k - 1] = sm * rt + sqds * nrm;
        xrotg(&b_s[k - 1], &ztest, &sm, &sqds);
        ztest = sm * e[k - 1] + sqds * b_s[k];
        b_s[k] = -sqds * e[k - 1] + sm * b_s[k];
        nrm = sqds * e[k];
        e[k] *= sm;
        b_xrot(U, 12 * (k - 1) + 1, 12 * k + 1, sm, sqds);
      }
      e[m] = ztest;
      qp1++;
      break;
    default:
      if (b_s[q] < 0.0) {
        b_s[q] = -b_s[q];
        kase = 3 * q;
        qjj = kase + 3;
        for (k = kase + 1; k <= qjj; k++) {
          Vf[k - 1] = -Vf[k - 1];
        }
      }
      qp1 = q + 1;
      while ((q + 1 < 3) && (b_s[q] < b_s[qp1])) {
        rt = b_s[q];
        b_s[q] = b_s[qp1];
        b_s[qp1] = rt;
        xswap(Vf, 3 * q + 1, 3 * (q + 1) + 1);
        b_xswap(U, 12 * q + 1, 12 * (q + 1) + 1);
        q = qp1;
        qp1++;
      }
      qp1 = 0;
      m--;
      break;
    }
  }
  for (k = 0; k < 3; k++) {
    s[k] = b_s[k];
    V[3 * k] = Vf[3 * k];
    kase = 3 * k + 1;
    V[kase] = Vf[kase];
    kase = 3 * k + 2;
    V[kase] = Vf[kase];
  }
}

/* End of code generation (svd.c) */
