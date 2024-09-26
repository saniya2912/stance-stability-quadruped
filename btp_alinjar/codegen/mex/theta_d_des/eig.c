/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "rt_nonfinite.h"
#include "theta_d_des_data.h"
#include "vAllOrAny.h"
#include "warning.h"
#include "xgehrd.h"
#include "lapacke.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = {
    93,    /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo d_emlrtRSI = {
    137,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo e_emlrtRSI = {
    145,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo j_emlrtRSI = {
    32,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    33,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    35,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo m_emlrtRSI = {
    66,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo n_emlrtRSI = {
    69,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo o_emlrtRSI = {
    70,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo p_emlrtRSI = {
    83,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo yb_emlrtRSI = {
    11,          /* lineNo */
    "xungorghr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    69,                /* lineNo */
    "ceval_xungorghr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    17,       /* lineNo */
    "xhseqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    128,            /* lineNo */
    "ceval_xhseqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    62,                        /* lineNo */
    "diagDiagUpperHessNoImag", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    59,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    31,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    36,      /* lineNo */
    "xgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    143,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const real_T A[144], creal_T V[144],
         creal_T D[144])
{
  static const int32_T iv[2] = {12, 12};
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'g', 'h', 'r'};
  static const char_T c_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'h', 's', 'e', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'e', 'v', 'x'};
  ptrdiff_t ihi_t;
  ptrdiff_t ilo_t;
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  creal_T W[12];
  real_T b_A[144];
  real_T vright[144];
  real_T scale[12];
  real_T wimag[12];
  real_T wreal[12];
  real_T tau[11];
  real_T abnrm;
  real_T rconde;
  real_T rcondv;
  real_T vleft;
  int32_T exitg1;
  int32_T i;
  int32_T im_tmp;
  int32_T info;
  int32_T istart;
  int32_T j;
  boolean_T b_p;
  boolean_T exitg2;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &c_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &f_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  p = flatVectorAllOrAny(A, iv);
  if (!p) {
    for (istart = 0; istart < 144; istart++) {
      V[istart].re = rtNaN;
      V[istart].im = 0.0;
      D[istart].re = 0.0;
      D[istart].im = 0.0;
    }
    for (im_tmp = 0; im_tmp < 12; im_tmp++) {
      istart = im_tmp + 12 * im_tmp;
      D[istart].re = rtNaN;
      D[istart].im = 0.0;
    }
  } else {
    p = true;
    j = 0;
    exitg2 = false;
    while ((!exitg2) && (j < 12)) {
      i = 0;
      do {
        exitg1 = 0;
        if (i <= j) {
          if (!(A[i + 12 * j] == A[j + 12 * i])) {
            p = false;
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          j++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
    if (p) {
      st.site = &d_emlrtRSI;
      b_st.site = &j_emlrtRSI;
      c_st.site = &l_emlrtRSI;
      d_st.site = &f_emlrtRSI;
      p = flatVectorAllOrAny(A, iv);
      if (!p) {
        for (istart = 0; istart < 144; istart++) {
          vright[istart] = rtNaN;
        }
        istart = 2;
        for (j = 0; j < 11; j++) {
          if (istart <= 12) {
            memset(&vright[(j * 12 + istart) + -1], 0,
                   (13 - istart) * sizeof(real_T));
          }
          istart++;
        }
        for (istart = 0; istart < 144; istart++) {
          b_A[istart] = rtNaN;
        }
      } else {
        memcpy(&b_A[0], &A[0], 144U * sizeof(real_T));
        c_st.site = &m_emlrtRSI;
        xgehrd(&c_st, b_A, tau);
        c_st.site = &n_emlrtRSI;
        memcpy(&vright[0], &b_A[0], 144U * sizeof(real_T));
        d_st.site = &yb_emlrtRSI;
        info_t = LAPACKE_dorghr(102, (ptrdiff_t)12, (ptrdiff_t)1, (ptrdiff_t)12,
                                &vright[0], (ptrdiff_t)12, &tau[0]);
        info = (int32_T)info_t;
        e_st.site = &ac_emlrtRSI;
        if (info != 0) {
          p = true;
          b_p = false;
          if (info == -5) {
            b_p = true;
          } else if (info == -7) {
            b_p = true;
          }
          if (!b_p) {
            if (info == -1010) {
              emlrtErrorWithMessageIdR2018a(&e_st, &b_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(&e_st, &emlrtRTEI,
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            5, 4, 14, &b_fname[0], 12, info);
            }
          }
        } else {
          p = false;
        }
        if (p) {
          for (istart = 0; istart < 144; istart++) {
            vright[istart] = rtNaN;
          }
        }
        c_st.site = &o_emlrtRSI;
        d_st.site = &bc_emlrtRSI;
        ilo_t = (ptrdiff_t)12;
        info_t = LAPACKE_dhseqr(102, 'S', 'V', ilo_t, (ptrdiff_t)1,
                                (ptrdiff_t)12, &b_A[0], ilo_t, &scale[0],
                                &wreal[0], &vright[0], (ptrdiff_t)12);
        info = (int32_T)info_t;
        e_st.site = &cc_emlrtRSI;
        if (info < 0) {
          p = true;
          b_p = false;
          if (info == -7) {
            b_p = true;
          } else if (info == -11) {
            b_p = true;
          }
          if (!b_p) {
            if (info == -1010) {
              emlrtErrorWithMessageIdR2018a(&e_st, &b_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(&e_st, &emlrtRTEI,
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            "Coder:toolbox:LAPACKCallErrorInfo",
                                            5, 4, 14, &c_fname[0], 12, info);
            }
          }
        } else {
          p = false;
        }
        if (p) {
          for (istart = 0; istart < 144; istart++) {
            b_A[istart] = rtNaN;
            vright[istart] = rtNaN;
          }
        }
        if (info != 0) {
          c_st.site = &p_emlrtRSI;
          warning(&c_st);
        }
      }
      b_st.site = &k_emlrtRSI;
      for (j = 0; j < 11; j++) {
        b_A[(j + 12 * j) + 1] = 0.0;
        c_st.site = &dc_emlrtRSI;
        for (i = 0; i <= j; i++) {
          b_A[i + 12 * (j + 1)] = 0.0;
        }
      }
      for (istart = 0; istart < 144; istart++) {
        V[istart].re = vright[istart];
        V[istart].im = 0.0;
        D[istart].re = b_A[istart];
        D[istart].im = 0.0;
      }
    } else {
      st.site = &e_emlrtRSI;
      b_st.site = &fc_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      memcpy(&b_A[0], &A[0], 144U * sizeof(real_T));
      info_t = LAPACKE_dgeevx(102, 'B', 'N', 'V', 'N', (ptrdiff_t)12, &b_A[0],
                              (ptrdiff_t)12, &wreal[0], &wimag[0], &vleft,
                              (ptrdiff_t)1, &vright[0], (ptrdiff_t)12, &ilo_t,
                              &ihi_t, &scale[0], &abnrm, &rconde, &rcondv);
      info = (int32_T)info_t;
      d_st.site = &hc_emlrtRSI;
      if (info < 0) {
        if (info == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, info);
        }
      }
      for (i = 0; i < 12; i++) {
        W[i].re = wreal[i];
        W[i].im = wimag[i];
      }
      for (istart = 0; istart < 144; istart++) {
        V[istart].re = vright[istart];
        V[istart].im = 0.0;
      }
      for (i = 0; i < 11; i++) {
        if ((wimag[i] > 0.0) && (wimag[i + 1] < 0.0)) {
          for (j = 0; j < 12; j++) {
            istart = j + 12 * i;
            vleft = V[istart].re;
            im_tmp = j + 12 * (i + 1);
            abnrm = V[im_tmp].re;
            V[istart].re = vleft;
            V[istart].im = abnrm;
            V[im_tmp].re = vleft;
            V[im_tmp].im = -abnrm;
          }
        }
      }
      memset(&D[0], 0, 144U * sizeof(creal_T));
      for (im_tmp = 0; im_tmp < 12; im_tmp++) {
        D[im_tmp + 12 * im_tmp] = W[im_tmp];
      }
      if (info != 0) {
        b_st.site = &ec_emlrtRSI;
        b_warning(&b_st);
      }
    }
  }
}

/* End of code generation (eig.c) */
