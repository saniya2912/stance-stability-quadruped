/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rb1_api.c
 *
 * Code generation for function '_coder_rb1_api'
 *
 */

/* Include files */
#include "_coder_rb1_api.h"
#include "rb1.h"
#include "rb1_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[12];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[12];

static real_T (*emlrt_marshallIn(const emlrtStack *sp,
                                 const mxArray *theta_2d_des,
                                 const char_T *identifier))[12];

static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[12]
{
  real_T(*y)[12];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[12]
{
  static const int32_T dims = 12;
  real_T(*ret)[12];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[12])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp,
                                 const mxArray *theta_2d_des,
                                 const char_T *identifier))[12]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[12];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(theta_2d_des), &thisId);
  emlrtDestroyArray(&theta_2d_des);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

void rb1_api(const mxArray *prhs, int32_T nlhs, const mxArray *plhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*theta_2d_des)[12];
  real_T t2ddankle;
  real_T t2ddhip;
  real_T t2ddknee;
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  theta_2d_des = emlrt_marshallIn(&st, emlrtAlias(prhs), "theta_2d_des");
  /* Invoke the target function */
  rb1(*theta_2d_des, &t2ddhip, &t2ddknee, &t2ddankle);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(t2ddhip);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(t2ddknee);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(t2ddankle);
  }
}

/* End of code generation (_coder_rb1_api.c) */
