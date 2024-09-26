/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rb2_api.c
 *
 * Code generation for function '_coder_rb2_api'
 *
 */

/* Include files */
#include "_coder_rb2_api.h"
#include "rb2.h"
#include "rb2_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tddRB,
                                 const char_T *identifier))[3];

static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3]
{
  real_T(*y)[3];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3]
{
  static const int32_T dims[2] = {1, 3};
  real_T(*ret)[3];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tddRB,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(tddRB), &thisId);
  emlrtDestroyArray(&tddRB);
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

void rb2_api(const mxArray *prhs, int32_T nlhs, const mxArray *plhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*tddRB)[3];
  real_T tddRB_ankle;
  real_T tddRB_hip;
  real_T tddRB_knee;
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  tddRB = emlrt_marshallIn(&st, emlrtAlias(prhs), "tddRB");
  /* Invoke the target function */
  rb2(*tddRB, &tddRB_hip, &tddRB_knee, &tddRB_ankle);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(tddRB_hip);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(tddRB_knee);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(tddRB_ankle);
  }
}

/* End of code generation (_coder_rb2_api.c) */
