/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlarf.c
 *
 * Code generation for function 'xzlarf'
 *
 */

/* Include files */
#include "xzlarf.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "theta_d_des_data.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo sb_emlrtRSI = {
    75,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    68,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    50,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    103,      /* lineNo */
    "ilazlc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    74,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemv.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    71,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemv.m" /* pathName */
};

/* Function Declarations */
static int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);

/* Function Definitions */
static int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T b_numerator;
  if (((numerator < 0) != (denominator < 0)) &&
      (numerator % denominator != 0)) {
    b_numerator = -1;
  } else {
    b_numerator = 0;
  }
  return numerator / denominator + b_numerator;
}

void xzlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T iv0, real_T tau,
            real_T C[144], int32_T ic0, real_T work[12])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T c;
  int32_T colbottom;
  int32_T exitg1;
  int32_T i;
  int32_T ia;
  int32_T iac;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
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
  if (tau != 0.0) {
    lastv = m - 1;
    i = iv0 + m;
    while ((lastv + 1 > 0) && (C[i - 2] == 0.0)) {
      lastv--;
      i--;
    }
    st.site = &ub_emlrtRSI;
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      i = ic0 + (lastc - 1) * 12;
      colbottom = i + lastv;
      b_st.site = &vb_emlrtRSI;
      if ((i <= colbottom) && (colbottom > 2147483646)) {
        c_st.site = &i_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      do {
        exitg1 = 0;
        if (i <= colbottom) {
          if (C[i - 1] != 0.0) {
            exitg1 = 1;
          } else {
            i++;
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
    st.site = &tb_emlrtRSI;
    b_st.site = &jb_emlrtRSI;
    if (lastc != 0) {
      c_st.site = &mb_emlrtRSI;
      if ((1 <= lastc) && (lastc > 2147483646)) {
        d_st.site = &i_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      if (0 <= lastc - 1) {
        memset(&work[0], 0, lastc * sizeof(real_T));
      }
      colbottom = ic0 + 12 * (lastc - 1);
      c_st.site = &xb_emlrtRSI;
      if ((ic0 <= colbottom) && (colbottom > 2147483635)) {
        d_st.site = &i_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (iac = ic0; iac <= colbottom; iac += 12) {
        c = 0.0;
        i = iac + lastv;
        c_st.site = &wb_emlrtRSI;
        if ((iac <= i) && (i > 2147483646)) {
          d_st.site = &i_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (ia = iac; ia <= i; ia++) {
          c += C[ia - 1] * C[((iv0 + ia) - iac) - 1];
        }
        i = div_nde_s32_floor(iac - ic0, 12);
        work[i] += c;
      }
    }
    st.site = &sb_emlrtRSI;
    b_st.site = &nb_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    d_st.site = &pb_emlrtRSI;
    if (!(-tau == 0.0)) {
      i = ic0;
      e_st.site = &qb_emlrtRSI;
      for (ia = 0; ia < lastc; ia++) {
        if (work[ia] != 0.0) {
          c = work[ia] * -tau;
          colbottom = lastv + i;
          e_st.site = &rb_emlrtRSI;
          if ((i <= colbottom) && (colbottom > 2147483646)) {
            f_st.site = &i_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }
          for (iac = i; iac <= colbottom; iac++) {
            C[iac - 1] += C[((iv0 + iac) - i) - 1] * c;
          }
        }
        i += 12;
      }
    }
  }
}

/* End of code generation (xzlarf.c) */
