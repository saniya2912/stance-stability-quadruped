/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xscal.c
 *
 * Code generation for function 'xscal'
 *
 */

/* Include files */
#include "xscal.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "theta_d_des_data.h"

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = {
    31,      /* lineNo */
    "xscal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal."
    "m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    18,      /* lineNo */
    "xscal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xscal.m" /* pathName */
};

/* Function Definitions */
void b_xscal(const emlrtStack *sp, int32_T n, real_T a, real_T x[36],
             int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &db_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &eb_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = ix0; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void c_xscal(const emlrtStack *sp, real_T a, real_T x[3], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &db_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 1;
  b_st.site = &eb_emlrtRSI;
  if ((ix0 <= ix0 + 1) && (ix0 + 1 > 2147483646)) {
    c_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = ix0; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void d_xscal(const emlrtStack *sp, real_T a, real_T x[36], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &db_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 11;
  b_st.site = &eb_emlrtRSI;
  if ((ix0 <= ix0 + 11) && (ix0 + 11 > 2147483646)) {
    c_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = ix0; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void e_xscal(const emlrtStack *sp, real_T a, real_T x[9], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &db_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = ix0 + 2;
  b_st.site = &eb_emlrtRSI;
  if ((ix0 <= ix0 + 2) && (ix0 + 2 > 2147483646)) {
    c_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = ix0; k <= b; k++) {
    x[k - 1] *= a;
  }
}

void xscal(const emlrtStack *sp, int32_T n, real_T a, real_T x[144],
           int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &db_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &eb_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = ix0; k <= b; k++) {
    x[k - 1] *= a;
  }
}

/* End of code generation (xscal.c) */
