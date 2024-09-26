/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rfval.c
 *
 * Code generation for function 'rfval'
 *
 */

/* Include files */
#include "rfval.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    8,       /* lineNo */
    "rfval", /* fcnName */
    "C:\\Users\\Saniya\\OneDrive\\Documents\\Robotics\\Delhi\\Quadruped robot "
    "Simmechanics\\btp_alinjar\\rfval.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI =
    {
        32,          /* lineNo */
        "quat2rotm", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\shared\\robotics\\robotutils\\quat2rot"
        "m.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        43,          /* lineNo */
        "quat2rotm", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\shared\\robotics\\robotutils\\quat2rot"
        "m.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI =
    {
        44,          /* lineNo */
        "quat2rotm", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\shared\\robotics\\robotutils\\quat2rot"
        "m.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI =
    {
        45,          /* lineNo */
        "quat2rotm", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\shared\\robotics\\robotutils\\quat2rot"
        "m.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    15,              /* lineNo */
    "normalizeRows", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+"
    "internal\\normalizeRows.m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

/* Function Definitions */
void rfval(const emlrtStack *sp, real_T qha, real_T qaa, const real_T Qquat[4],
           real_T qka, real_T ea1g[3], real_T ea2g[3], real_T ea3g[3],
           real_T aa1g[3], real_T aa2g[3], real_T cma1g[3], real_T cma2g[3],
           real_T cma3g[3], real_T Qd3g[9])
{
  static const int8_T b[3] = {0, 1, 0};
  static const int8_T b_b[3] = {0, 0, 1};
  static const int8_T c_b[3] = {0, 0, -10};
  static const int8_T d_b[3] = {-1, 0, 0};
  static const int8_T iv[3] = {0, 1, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T Qd0g[9];
  real_T Qd10[9];
  real_T Qd1g[9];
  real_T Qd20[9];
  real_T Qd21_tmp[9];
  real_T tempR[9];
  real_T normRowMatrix[4];
  real_T b_tempR_tmp;
  real_T c_tempR_tmp;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d_tempR_tmp;
  real_T e_tempR_tmp;
  real_T tempR_tmp;
  real_T x;
  int32_T Qd0g_tmp;
  int32_T b_i;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  */
  /*  */
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  normRowMatrix[0] = Qquat[0] * Qquat[0];
  normRowMatrix[1] = Qquat[1] * Qquat[1];
  normRowMatrix[2] = Qquat[2] * Qquat[2];
  normRowMatrix[3] = Qquat[3] * Qquat[3];
  x = sumColumnB(normRowMatrix, 1);
  c_st.site = &f_emlrtRSI;
  if (x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  x = muDoubleScalarSqrt(x);
  x = 1.0 / x;
  normRowMatrix[0] = Qquat[0] * x;
  normRowMatrix[1] = Qquat[1] * x;
  normRowMatrix[2] = Qquat[2] * x;
  normRowMatrix[3] = Qquat[3] * x;
  b_st.site = &c_emlrtRSI;
  b_st.site = &c_emlrtRSI;
  b_st.site = &d_emlrtRSI;
  b_st.site = &d_emlrtRSI;
  b_st.site = &e_emlrtRSI;
  b_st.site = &e_emlrtRSI;
  x = normRowMatrix[3] * normRowMatrix[3];
  tempR_tmp = normRowMatrix[2] * normRowMatrix[2];
  tempR[0] = 1.0 - 2.0 * (tempR_tmp + x);
  b_tempR_tmp = normRowMatrix[1] * normRowMatrix[2];
  c_tempR_tmp = normRowMatrix[0] * normRowMatrix[3];
  tempR[1] = 2.0 * (b_tempR_tmp - c_tempR_tmp);
  d_tempR_tmp = normRowMatrix[1] * normRowMatrix[3];
  e_tempR_tmp = normRowMatrix[0] * normRowMatrix[2];
  tempR[2] = 2.0 * (d_tempR_tmp + e_tempR_tmp);
  tempR[3] = 2.0 * (b_tempR_tmp + c_tempR_tmp);
  b_tempR_tmp = normRowMatrix[1] * normRowMatrix[1];
  tempR[4] = 1.0 - 2.0 * (b_tempR_tmp + x);
  x = normRowMatrix[2] * normRowMatrix[3];
  c_tempR_tmp = normRowMatrix[0] * normRowMatrix[1];
  tempR[5] = 2.0 * (x - c_tempR_tmp);
  tempR[6] = 2.0 * (d_tempR_tmp - e_tempR_tmp);
  tempR[7] = 2.0 * (x + c_tempR_tmp);
  tempR[8] = 1.0 - 2.0 * (b_tempR_tmp + tempR_tmp);
  memcpy(&Qd0g[0], &tempR[0], 9U * sizeof(real_T));
  for (k = 0; k < 3; k++) {
    Qd0g_tmp = 3 * k;
    Qd0g[k] = tempR[Qd0g_tmp];
    Qd0g[k + 3] = tempR[Qd0g_tmp + 1];
    Qd0g[k + 6] = tempR[Qd0g_tmp + 2];
  }
  x = muDoubleScalarSin(qha);
  tempR_tmp = muDoubleScalarCos(qha);
  Qd10[0] = tempR_tmp;
  Qd10[3] = 0.0;
  Qd10[6] = x;
  Qd10[1] = 0.0;
  Qd10[4] = 1.0;
  Qd10[7] = 0.0;
  Qd10[2] = -x;
  Qd10[5] = 0.0;
  Qd10[8] = tempR_tmp;
  x = muDoubleScalarSin(qka);
  tempR_tmp = muDoubleScalarCos(qka);
  b_tempR_tmp = muDoubleScalarSin(qaa);
  c_tempR_tmp = muDoubleScalarCos(qaa);
  Qd21_tmp[0] = tempR_tmp;
  Qd21_tmp[3] = 0.0;
  Qd21_tmp[6] = x;
  for (i = 0; i < 3; i++) {
    d = Qd10[i];
    k = (int32_T)Qd10[i + 3];
    d1 = Qd10[i + 6];
    for (Qd0g_tmp = 0; Qd0g_tmp < 3; Qd0g_tmp++) {
      Qd1g[i + 3 * Qd0g_tmp] =
          (d * Qd0g[3 * Qd0g_tmp] + (real_T)k * Qd0g[3 * Qd0g_tmp + 1]) +
          d1 * Qd0g[3 * Qd0g_tmp + 2];
    }
    Qd21_tmp[3 * i + 1] = iv[i];
  }
  Qd21_tmp[2] = -x;
  Qd21_tmp[5] = 0.0;
  Qd21_tmp[8] = tempR_tmp;
  for (i = 0; i < 3; i++) {
    d = Qd21_tmp[i];
    k = (int32_T)Qd21_tmp[i + 3];
    d1 = Qd21_tmp[i + 6];
    for (Qd0g_tmp = 0; Qd0g_tmp < 3; Qd0g_tmp++) {
      Qd20[i + 3 * Qd0g_tmp] =
          (d * Qd10[3 * Qd0g_tmp] + (real_T)k * Qd10[3 * Qd0g_tmp + 1]) +
          d1 * Qd10[3 * Qd0g_tmp + 2];
    }
  }
  for (i = 0; i < 3; i++) {
    d = Qd20[i];
    d1 = Qd20[i + 3];
    d2 = Qd20[i + 6];
    for (k = 0; k < 3; k++) {
      Qd10[i + 3 * k] =
          (d * Qd0g[3 * k] + d1 * Qd0g[3 * k + 1]) + d2 * Qd0g[3 * k + 2];
    }
  }
  memcpy(&tempR[0], &Qd10[0], 9U * sizeof(real_T));
  Qd10[0] = 1.0;
  Qd10[3] = 0.0;
  Qd10[6] = 0.0;
  Qd10[1] = 0.0;
  Qd10[4] = c_tempR_tmp;
  Qd10[7] = -b_tempR_tmp;
  Qd10[2] = 0.0;
  Qd10[5] = b_tempR_tmp;
  Qd10[8] = c_tempR_tmp;
  /* axis in local frames */
  /* link vector in local frame */
  /* axis in global frames */
  /* link vector in global frame */
  /* COM distances in base frame */
  for (b_i = 0; b_i < 3; b_i++) {
    i = (int32_T)Qd10[b_i];
    d = Qd10[b_i + 3];
    d1 = Qd10[b_i + 6];
    for (k = 0; k < 3; k++) {
      Qd21_tmp[b_i + 3 * k] = ((real_T)i * Qd20[3 * k] + d * Qd20[3 * k + 1]) +
                              d1 * Qd20[3 * k + 2];
    }
    d = Qd21_tmp[b_i];
    d1 = Qd21_tmp[b_i + 3];
    d2 = Qd21_tmp[b_i + 6];
    x = 0.0;
    tempR_tmp = 0.0;
    b_tempR_tmp = 0.0;
    c_tempR_tmp = 0.0;
    d_tempR_tmp = 0.0;
    e_tempR_tmp = 0.0;
    for (i = 0; i < 3; i++) {
      d3 = (d * Qd0g[3 * i] + d1 * Qd0g[3 * i + 1]) + d2 * Qd0g[3 * i + 2];
      Qd0g_tmp = b_i + 3 * i;
      Qd3g[Qd0g_tmp] = d3;
      d4 = Qd1g[Qd0g_tmp];
      k = b[i];
      x += d4 * (real_T)k;
      d5 = tempR[Qd0g_tmp];
      tempR_tmp += d5 * (real_T)k;
      b_tempR_tmp += d3 * (real_T)b_b[i];
      Qd0g_tmp = c_b[i];
      c_tempR_tmp += d4 * (real_T)Qd0g_tmp;
      d_tempR_tmp += d5 * (real_T)Qd0g_tmp;
      e_tempR_tmp += d3 * (real_T)d_b[i];
    }
    cma3g[b_i] = e_tempR_tmp;
    aa2g[b_i] = d_tempR_tmp;
    aa1g[b_i] = c_tempR_tmp;
    ea3g[b_i] = b_tempR_tmp;
    ea2g[b_i] = tempR_tmp;
    ea1g[b_i] = x;
    cma1g[b_i] = c_tempR_tmp / 2.0;
    cma2g[b_i] = d_tempR_tmp / 2.0;
  }
}

/* End of code generation (rfval.c) */
