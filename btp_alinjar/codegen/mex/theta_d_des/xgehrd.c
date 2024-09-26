/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgehrd.c
 *
 * Code generation for function 'xgehrd'
 *
 */

/* Include files */
#include "xgehrd.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "theta_d_des_data.h"
#include "xnrm2.h"
#include "xscal.h"
#include "xzlarf.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = {
    18,       /* lineNo */
    "xgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    31,        /* lineNo */
    "xzgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgehrd.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    35,        /* lineNo */
    "xzgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgehrd.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    43,        /* lineNo */
    "xzgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgehrd.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    20,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    41,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    53,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    68,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    71,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    81,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    53,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    84,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    91,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    121,      /* lineNo */
    "ilazlr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    58,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemv.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    51,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemv.m" /* pathName */
};

/* Function Definitions */
void xgehrd(const emlrtStack *sp, real_T a[144], real_T tau[11])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T work[12];
  real_T b_alpha1_tmp;
  real_T xnorm;
  int32_T alpha1_tmp;
  int32_T b;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T ia;
  int32_T iac;
  int32_T ic0;
  int32_T im1n_tmp;
  int32_T in;
  int32_T iv0;
  int32_T knt;
  int32_T lastc;
  int32_T lastv;
  int32_T work_tmp;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &q_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  memset(&work[0], 0, 12U * sizeof(real_T));
  for (i = 0; i < 11; i++) {
    im1n_tmp = i * 12;
    in = (i + 1) * 12;
    alpha1_tmp = (i + 12 * i) + 1;
    b_alpha1_tmp = a[alpha1_tmp];
    b_i = i + 3;
    b_i = muIntScalarMin_sint32(b_i, 12) + im1n_tmp;
    b_st.site = &r_emlrtRSI;
    tau[i] = 0.0;
    c_st.site = &u_emlrtRSI;
    xnorm = xnrm2(&c_st, 10 - i, a, b_i);
    if (xnorm != 0.0) {
      xnorm = muDoubleScalarHypot(b_alpha1_tmp, xnorm);
      if (b_alpha1_tmp >= 0.0) {
        xnorm = -xnorm;
      }
      if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
        knt = 0;
        do {
          knt++;
          c_st.site = &v_emlrtRSI;
          xscal(&c_st, 10 - i, 9.9792015476736E+291, a, b_i);
          xnorm *= 9.9792015476736E+291;
          b_alpha1_tmp *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));
        c_st.site = &w_emlrtRSI;
        xnorm = xnrm2(&c_st, 10 - i, a, b_i);
        xnorm = muDoubleScalarHypot(b_alpha1_tmp, xnorm);
        if (b_alpha1_tmp >= 0.0) {
          xnorm = -xnorm;
        }
        tau[i] = (xnorm - b_alpha1_tmp) / xnorm;
        c_st.site = &x_emlrtRSI;
        xscal(&c_st, 10 - i, 1.0 / (b_alpha1_tmp - xnorm), a, b_i);
        c_st.site = &y_emlrtRSI;
        if ((1 <= knt) && (knt > 2147483646)) {
          d_st.site = &i_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (b_i = 0; b_i < knt; b_i++) {
          xnorm *= 1.0020841800044864E-292;
        }
        b_alpha1_tmp = xnorm;
      } else {
        tau[i] = (xnorm - a[alpha1_tmp]) / xnorm;
        c_st.site = &ab_emlrtRSI;
        xscal(&c_st, 10 - i, 1.0 / (a[(i + 12 * i) + 1] - xnorm), a, b_i);
        b_alpha1_tmp = xnorm;
      }
    }
    a[alpha1_tmp] = 1.0;
    iv0 = (i + im1n_tmp) + 1;
    ic0 = in + 1;
    b_st.site = &s_emlrtRSI;
    if (tau[i] != 0.0) {
      lastv = 10 - i;
      b_i = (iv0 - i) + 10;
      while ((lastv + 1 > 0) && (a[b_i] == 0.0)) {
        lastv--;
        b_i--;
      }
      c_st.site = &fb_emlrtRSI;
      lastc = 12;
      exitg2 = false;
      while ((!exitg2) && (lastc > 0)) {
        knt = in + lastc;
        d_st.site = &ib_emlrtRSI;
        ia = knt;
        do {
          exitg1 = 0;
          if (ia <= knt + lastv * 12) {
            if (a[ia - 1] != 0.0) {
              exitg1 = 1;
            } else {
              ia += 12;
            }
          } else {
            lastc--;
            exitg1 = 2;
          }
        } while (exitg1 == 0);
        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    } else {
      lastv = -1;
      lastc = 0;
    }
    if (lastv + 1 > 0) {
      c_st.site = &gb_emlrtRSI;
      d_st.site = &jb_emlrtRSI;
      if (lastc != 0) {
        e_st.site = &mb_emlrtRSI;
        if (0 <= lastc - 1) {
          memset(&work[0], 0, lastc * sizeof(real_T));
        }
        knt = iv0;
        b = (in + 12 * lastv) + 1;
        e_st.site = &lb_emlrtRSI;
        for (iac = ic0; iac <= b; iac += 12) {
          b_i = (iac + lastc) - 1;
          e_st.site = &kb_emlrtRSI;
          for (ia = iac; ia <= b_i; ia++) {
            work_tmp = ia - iac;
            work[work_tmp] += a[ia - 1] * a[knt];
          }
          knt++;
        }
      }
      c_st.site = &hb_emlrtRSI;
      d_st.site = &nb_emlrtRSI;
      e_st.site = &ob_emlrtRSI;
      f_st.site = &pb_emlrtRSI;
      if (!(-tau[i] == 0.0)) {
        knt = in;
        g_st.site = &qb_emlrtRSI;
        for (work_tmp = 0; work_tmp <= lastv; work_tmp++) {
          xnorm = a[iv0 + work_tmp];
          if (xnorm != 0.0) {
            xnorm *= -tau[i];
            b_i = knt + 1;
            b = lastc + knt;
            g_st.site = &rb_emlrtRSI;
            if ((knt + 1 <= b) && (b > 2147483646)) {
              h_st.site = &i_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }
            for (ic0 = b_i; ic0 <= b; ic0++) {
              a[ic0 - 1] += work[(ic0 - knt) - 1] * xnorm;
            }
          }
          knt += 12;
        }
      }
    }
    b_st.site = &t_emlrtRSI;
    xzlarf(&b_st, 11 - i, 11 - i, (i + im1n_tmp) + 2, tau[i], a, (i + in) + 2,
           work);
    a[alpha1_tmp] = b_alpha1_tmp;
  }
}

/* End of code generation (xgehrd.c) */
