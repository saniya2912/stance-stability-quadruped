/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_acttheta_api.c
 *
 * Code generation for function '_coder_acttheta_api'
 *
 */

/* Include files */
#include "_coder_acttheta_api.h"
#include "acttheta.h"
#include "acttheta_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tdRF,
                                 const char_T *identifier))[3];

static const mxArray *emlrt_marshallOut(const real_T u[12]);

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
  static const int32_T dims = 3;
  real_T(*ret)[3];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tdRF,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(tdRF), &thisId);
  emlrtDestroyArray(&tdRF);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[12])
{
  static const int32_T i = 0;
  static const int32_T i1 = 12;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

void acttheta_api(const mxArray *const prhs[8], int32_T nlhs,
                  const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*t2d)[12];
  real_T(*td)[12];
  real_T(*t2dLB)[3];
  real_T(*t2dLF)[3];
  real_T(*t2dRB)[3];
  real_T(*t2dRF)[3];
  real_T(*tdLB)[3];
  real_T(*tdLF)[3];
  real_T(*tdRB)[3];
  real_T(*tdRF)[3];
  st.tls = emlrtRootTLSGlobal;
  td = (real_T(*)[12])mxMalloc(sizeof(real_T[12]));
  t2d = (real_T(*)[12])mxMalloc(sizeof(real_T[12]));
  /* Marshall function inputs */
  tdRF = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "tdRF");
  tdLF = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "tdLF");
  tdRB = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "tdRB");
  tdLB = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "tdLB");
  t2dRF = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "t2dRF");
  t2dLF = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "t2dLF");
  t2dRB = emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "t2dRB");
  t2dLB = emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "t2dLB");
  /* Invoke the target function */
  acttheta(*tdRF, *tdLF, *tdRB, *tdLB, *t2dRF, *t2dLF, *t2dRB, *t2dLB, *td,
           *t2d);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*td);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*t2d);
  }
}

/* End of code generation (_coder_acttheta_api.c) */
