/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_findh_api.c
 *
 * Code generation for function '_coder_findh_api'
 *
 */

/* Include files */
#include "_coder_findh_api.h"
#include "findh.h"
#include "findh_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[36];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *td,
                                   const char_T *identifier))[12];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[12];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[36];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                 const char_T *identifier))[36];

static const mxArray *emlrt_marshallOut(const real_T u[3]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[12];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[36]
{
  real_T(*y)[36];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *td,
                                   const char_T *identifier))[12]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[12];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(td), &thisId);
  emlrtDestroyArray(&td);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[12]
{
  real_T(*y)[12];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[36]
{
  static const int32_T dims[2] = {3, 12};
  real_T(*ret)[36];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[36])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                 const char_T *identifier))[36]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[36];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(h), &thisId);
  emlrtDestroyArray(&h);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  static const int32_T i = 0;
  static const int32_T i1 = 3;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void findh_api(const mxArray *const prhs[6], int32_T nlhs,
               const mxArray *plhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*h)[36];
  real_T(*h_dot)[36];
  real_T(*t2d)[12];
  real_T(*td)[12];
  real_T(*theta_2d_des)[12];
  real_T(*theta_d_des)[12];
  real_T(*h_dottd)[3];
  real_T(*hdtddes)[3];
  real_T(*ht2d)[3];
  real_T(*ht2ddes)[3];
  real_T(*htd)[3];
  st.tls = emlrtRootTLSGlobal;
  ht2d = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  h_dottd = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  htd = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  ht2ddes = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  hdtddes = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  /* Marshall function inputs */
  h = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "h");
  h_dot = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "h_dot");
  td = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "td");
  t2d = c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "t2d");
  theta_d_des = c_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "theta_d_des");
  theta_2d_des = c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "theta_2d_des");
  /* Invoke the target function */
  findh(*h, *h_dot, *td, *t2d, *theta_d_des, *theta_2d_des, *ht2d, *h_dottd,
        *htd, *ht2ddes, *hdtddes);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*ht2d);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*h_dottd);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*htd);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*ht2ddes);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(*hdtddes);
  }
}

/* End of code generation (_coder_findh_api.c) */
