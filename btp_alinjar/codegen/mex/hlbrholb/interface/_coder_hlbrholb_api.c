/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hlbrholb_api.c
 *
 * Code generation for function '_coder_hlbrholb_api'
 *
 */

/* Include files */
#include "_coder_hlbrholb_api.h"
#include "hlbrholb.h"
#include "hlbrholb_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static const mxArray *b_emlrt_marshallOut(const real_T u[27]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ed10g,
                                 const char_T *identifier))[3];

static const mxArray *emlrt_marshallOut(const real_T u[9]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3]
{
  real_T(*y)[3];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[27])
{
  static const int32_T iv[3] = {0, 0, 0};
  static const int32_T iv1[3] = {3, 3, 3};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(3, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 3);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3]
{
  static const int32_T dims = 3;
  real_T(*ret)[3];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ed10g,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(ed10g), &thisId);
  emlrtDestroyArray(&ed10g);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[9])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {3, 3};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

void hlbrholb_api(const mxArray *const prhs[8], int32_T nlhs,
                  const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*rhoLB)[27];
  real_T(*hLB)[9];
  real_T(*ad10g)[3];
  real_T(*ad20g)[3];
  real_T(*cmd1)[3];
  real_T(*cmd2)[3];
  real_T(*cmd3)[3];
  real_T(*ed10g)[3];
  real_T(*ed20g)[3];
  real_T(*ed30g)[3];
  st.tls = emlrtRootTLSGlobal;
  hLB = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  rhoLB = (real_T(*)[27])mxMalloc(sizeof(real_T[27]));
  /* Marshall function inputs */
  ed10g = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ed10g");
  ed20g = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "ed20g");
  ad10g = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "ad10g");
  cmd2 = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "cmd2");
  cmd1 = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "cmd1");
  cmd3 = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "cmd3");
  ed30g = emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "ed30g");
  ad20g = emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "ad20g");
  /* Invoke the target function */
  hlbrholb(&st, *ed10g, *ed20g, *ad10g, *cmd2, *cmd1, *cmd3, *ed30g, *ad20g,
           *hLB, *rhoLB);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*hLB);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*rhoLB);
  }
}

/* End of code generation (_coder_hlbrholb_api.c) */
