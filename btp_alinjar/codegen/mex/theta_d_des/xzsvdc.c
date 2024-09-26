/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzsvdc.c
 *
 * Code generation for function 'xzsvdc'
 *
 */

/* Include files */
#include "xzsvdc.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "xrot.h"
#include "xscal.h"
#include "xswap.h"
#include "blas.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo sc_emlrtRSI = {
    428,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    407,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    394,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    391,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    380,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    353,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    351,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    334,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    251,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    240,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    215,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    194,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    184,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    120,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    114,      /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    94,       /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    82,       /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    77,       /* lineNo */
    "xzsvdc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    21,                   /* lineNo */
    "scaleVectorByRecip", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\scaleVectorByRecip.m" /* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    269,      /* lineNo */
    13,       /* colNo */
    "xzsvdc", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzsvdc.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

/* Function Definitions */
void xzsvdc(const emlrtStack *sp, real_T A[36], real_T U[36], real_T S[3],
            real_T V[9])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T work[12];
  real_T Vf[9];
  real_T e[3];
  real_T s[3];
  real_T b;
  real_T f;
  real_T nrm;
  real_T rt;
  real_T scale;
  real_T snorm;
  real_T sqds;
  int32_T exitg2;
  int32_T k;
  int32_T m;
  int32_T q;
  int32_T qjj;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T apply_transform;
  boolean_T exitg1;
  boolean_T exitg3;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  s[0] = 0.0;
  e[0] = 0.0;
  s[1] = 0.0;
  e[1] = 0.0;
  s[2] = 0.0;
  e[2] = 0.0;
  memset(&work[0], 0, 12U * sizeof(real_T));
  memset(&U[0], 0, 36U * sizeof(real_T));
  memset(&Vf[0], 0, 9U * sizeof(real_T));
  for (q = 0; q < 3; q++) {
    qp1 = q + 2;
    qs = q + 12 * q;
    qq = qs + 1;
    apply_transform = false;
    st.site = &kd_emlrtRSI;
    nrm = b_xnrm2(&st, 12 - q, A, qs + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[qs] < 0.0) {
        rt = -nrm;
        s[q] = -nrm;
      } else {
        rt = nrm;
        s[q] = nrm;
      }
      st.site = &jd_emlrtRSI;
      if (muDoubleScalarAbs(rt) >= 1.0020841800044864E-292) {
        b_st.site = &ld_emlrtRSI;
        b_xscal(&b_st, 12 - q, 1.0 / rt, A, qs + 1);
      } else {
        qjj = (qs - q) + 12;
        for (k = qq; k <= qjj; k++) {
          A[k - 1] /= s[q];
        }
      }
      A[qs]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }
    for (k = qp1; k < 4; k++) {
      qjj = q + 12 * (k - 1);
      if (apply_transform) {
        st.site = &id_emlrtRSI;
        nrm = xdotc(&st, 12 - q, A, qs + 1, A, qjj + 1);
        nrm = -(nrm / A[qs]);
        xaxpy(12 - q, nrm, qs + 1, A, qjj + 1);
      }
      e[k - 1] = A[qjj];
    }
    for (k = q + 1; k < 13; k++) {
      qjj = (k + 12 * q) - 1;
      U[qjj] = A[qjj];
    }
    if (q + 1 <= 1) {
      st.site = &hd_emlrtRSI;
      nrm = c_xnrm2(&st, e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          e[0] = -nrm;
        } else {
          e[0] = nrm;
        }
        st.site = &gd_emlrtRSI;
        f = e[0];
        if (muDoubleScalarAbs(e[0]) >= 1.0020841800044864E-292) {
          b_st.site = &ld_emlrtRSI;
          c_xscal(&b_st, 1.0 / e[0], e, 2);
        } else {
          for (k = qp1; k < 4; k++) {
            e[k - 1] /= f;
          }
        }
        e[1]++;
        e[0] = -e[0];
        for (k = qp1; k < 13; k++) {
          work[k - 1] = 0.0;
        }
        for (k = qp1; k < 4; k++) {
          b_xaxpy(11, e[k - 1], A, 12 * (k - 1) + 2, work, 2);
        }
        for (k = qp1; k < 4; k++) {
          c_xaxpy(11, -e[k - 1] / e[1], work, 2, A, 12 * (k - 1) + 2);
        }
      }
      for (k = qp1; k < 4; k++) {
        Vf[k - 1] = e[k - 1];
      }
    }
  }
  m = 1;
  e[1] = A[25];
  e[2] = 0.0;
  for (q = 2; q >= 0; q--) {
    qp1 = q + 2;
    qq = q + 12 * q;
    if (s[q] != 0.0) {
      for (k = qp1; k < 4; k++) {
        qjj = (q + 12 * (k - 1)) + 1;
        st.site = &fd_emlrtRSI;
        nrm = xdotc(&st, 12 - q, U, qq + 1, U, qjj);
        nrm = -(nrm / U[qq]);
        xaxpy(12 - q, nrm, qq + 1, U, qjj);
      }
      for (k = q + 1; k < 13; k++) {
        qjj = (k + 12 * q) - 1;
        U[qjj] = -U[qjj];
      }
      U[qq]++;
      st.site = &ed_emlrtRSI;
      for (k = 0; k < q; k++) {
        U[k + 12 * q] = 0.0;
      }
    } else {
      memset(&U[q * 12], 0, 12U * sizeof(real_T));
      U[qq] = 1.0;
    }
  }
  for (q = 2; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      st.site = &dd_emlrtRSI;
      nrm = b_xdotc(Vf, Vf, 5);
      nrm = -(nrm / Vf[1]);
      d_xaxpy(nrm, Vf, 5);
      st.site = &dd_emlrtRSI;
      nrm = b_xdotc(Vf, Vf, 8);
      nrm = -(nrm / Vf[1]);
      d_xaxpy(nrm, Vf, 8);
    }
    Vf[3 * q] = 0.0;
    Vf[3 * q + 1] = 0.0;
    Vf[3 * q + 2] = 0.0;
    Vf[q + 3 * q] = 1.0;
  }
  if (s[0] != 0.0) {
    rt = muDoubleScalarAbs(s[0]);
    nrm = s[0] / rt;
    s[0] = rt;
    e[0] /= nrm;
    st.site = &cd_emlrtRSI;
    d_xscal(&st, nrm, U, 1);
  }
  if (e[0] != 0.0) {
    rt = muDoubleScalarAbs(e[0]);
    nrm = rt / e[0];
    e[0] = rt;
    s[1] *= nrm;
    st.site = &bd_emlrtRSI;
    e_xscal(&st, nrm, Vf, 4);
  }
  if (s[1] != 0.0) {
    rt = muDoubleScalarAbs(s[1]);
    nrm = s[1] / rt;
    s[1] = rt;
    e[1] = A[25] / nrm;
    st.site = &cd_emlrtRSI;
    d_xscal(&st, nrm, U, 13);
  }
  if (e[1] != 0.0) {
    rt = muDoubleScalarAbs(e[1]);
    nrm = rt / e[1];
    e[1] = rt;
    s[2] *= nrm;
    st.site = &bd_emlrtRSI;
    e_xscal(&st, nrm, Vf, 7);
  }
  if (s[2] != 0.0) {
    rt = muDoubleScalarAbs(s[2]);
    nrm = s[2] / rt;
    s[2] = rt;
    st.site = &cd_emlrtRSI;
    d_xscal(&st, nrm, U, 25);
  }
  qp1 = 0;
  snorm = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax(s[0], e[0]),
                                              muDoubleScalarMax(s[1], e[1])),
                            muDoubleScalarMax(s[2], 0.0));
  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (qp1 >= 75) {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    } else {
      k = m;
      do {
        exitg2 = 0;
        q = k + 1;
        if (k + 1 == 0) {
          exitg2 = 1;
        } else {
          nrm = muDoubleScalarAbs(e[k]);
          if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[k]) +
                                                muDoubleScalarAbs(s[k + 1]))) ||
              (nrm <= 1.0020841800044864E-292) ||
              ((qp1 > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
            e[k] = 0.0;
            exitg2 = 1;
          } else {
            k--;
          }
        }
      } while (exitg2 == 0);
      if (k + 1 == m + 1) {
        qjj = 4;
      } else {
        qs = m + 2;
        qjj = m + 2;
        exitg3 = false;
        while ((!exitg3) && (qjj >= k + 1)) {
          qs = qjj;
          if (qjj == k + 1) {
            exitg3 = true;
          } else {
            nrm = 0.0;
            if (qjj < m + 2) {
              nrm = muDoubleScalarAbs(e[qjj - 1]);
            }
            if (qjj > k + 2) {
              nrm += muDoubleScalarAbs(e[qjj - 2]);
            }
            rt = muDoubleScalarAbs(s[qjj - 1]);
            if ((rt <= 2.2204460492503131E-16 * nrm) ||
                (rt <= 1.0020841800044864E-292)) {
              s[qjj - 1] = 0.0;
              exitg3 = true;
            } else {
              qjj--;
            }
          }
        }
        if (qs == k + 1) {
          qjj = 3;
        } else if (qs == m + 2) {
          qjj = 1;
        } else {
          qjj = 2;
          q = qs;
        }
      }
      switch (qjj) {
      case 1:
        f = e[m];
        e[m] = 0.0;
        qjj = m + 1;
        for (k = qjj; k >= q + 1; k--) {
          st.site = &ad_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&s[k - 1], &f, &sqds, &scale);
          if (k > q + 1) {
            f = -scale * e[0];
            e[0] *= sqds;
          }
          xrot(Vf, 3 * (k - 1) + 1, 3 * (m + 1) + 1, sqds, scale);
        }
        break;
      case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        st.site = &yc_emlrtRSI;
        for (k = q + 1; k <= m + 2; k++) {
          st.site = &xc_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&s[k - 1], &f, &sqds, &scale);
          nrm = e[k - 1];
          f = -scale * nrm;
          e[k - 1] = nrm * sqds;
          b_xrot(U, 12 * (k - 1) + 1, 12 * (q - 1) + 1, sqds, scale);
        }
        break;
      case 3:
        qjj = m + 1;
        nrm = s[m + 1];
        scale = muDoubleScalarMax(
            muDoubleScalarMax(
                muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarAbs(nrm),
                                                    muDoubleScalarAbs(s[m])),
                                  muDoubleScalarAbs(e[m])),
                muDoubleScalarAbs(s[q])),
            muDoubleScalarAbs(e[q]));
        f = nrm / scale;
        nrm = s[m] / scale;
        rt = e[m] / scale;
        sqds = s[q] / scale;
        b = ((nrm + f) * (nrm - f) + rt * rt) / 2.0;
        nrm = f * rt;
        nrm *= nrm;
        if ((b != 0.0) || (nrm != 0.0)) {
          rt = b * b + nrm;
          st.site = &wc_emlrtRSI;
          if (rt < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          rt = muDoubleScalarSqrt(rt);
          if (b < 0.0) {
            rt = -rt;
          }
          rt = nrm / (b + rt);
        } else {
          rt = 0.0;
        }
        f = (sqds + f) * (sqds - f) + rt;
        nrm = sqds * (e[q] / scale);
        st.site = &vc_emlrtRSI;
        for (k = q + 1; k <= qjj; k++) {
          st.site = &uc_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&f, &nrm, &sqds, &scale);
          if (k > q + 1) {
            e[0] = f;
          }
          nrm = e[k - 1];
          rt = s[k - 1];
          f = sqds * rt + scale * nrm;
          e[k - 1] = sqds * nrm - scale * rt;
          rt = s[k];
          b = scale * rt;
          rt *= sqds;
          xrot(Vf, 3 * (k - 1) + 1, 3 * k + 1, sqds, scale);
          st.site = &tc_emlrtRSI;
          sqds = 0.0;
          scale = 0.0;
          drotg(&f, &b, &sqds, &scale);
          s[k - 1] = f;
          f = sqds * e[k - 1] + scale * rt;
          rt = -scale * e[k - 1] + sqds * rt;
          s[k] = rt;
          nrm = scale * e[k];
          e[k] *= sqds;
          b_xrot(U, 12 * (k - 1) + 1, 12 * k + 1, sqds, scale);
        }
        e[m] = f;
        qp1++;
        break;
      default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          st.site = &sc_emlrtRSI;
          e_xscal(&st, -1.0, Vf, 3 * q + 1);
        }
        qp1 = q + 1;
        while ((q + 1 < 3) && (s[q] < s[qp1])) {
          rt = s[q];
          s[q] = s[qp1];
          s[qp1] = rt;
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
  }
  for (k = 0; k < 3; k++) {
    S[k] = s[k];
    V[3 * k] = Vf[3 * k];
    qjj = 3 * k + 1;
    V[qjj] = Vf[qjj];
    qjj = 3 * k + 2;
    V[qjj] = Vf[qjj];
  }
}

/* End of code generation (xzsvdc.c) */
