/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hlfrholf_api.c
 *
 * Code generation for function '_coder_hlfrholf_api'
 *
 */

/* Include files */
#include "_coder_hlfrholf_api.h"
#include "hlfrholf.h"
#include "hlfrholf_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static const mxArray *b_emlrt_marshallOut(const real_T u[27]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *eb10g,
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

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *eb10g,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(eb10g), &thisId);
  emlrtDestroyArray(&eb10g);
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

void hlfrholf_api(const mxArray *const prhs[8], int32_T nlhs,
                  const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*rhoLF)[27];
  real_T(*hLF)[9];
  real_T(*ab10g)[3];
  real_T(*ab20g)[3];
  real_T(*cmb1)[3];
  real_T(*cmb2)[3];
  real_T(*cmb3)[3];
  real_T(*eb10g)[3];
  real_T(*eb20g)[3];
  real_T(*eb30g)[3];
  st.tls = emlrtRootTLSGlobal;
  hLF = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  rhoLF = (real_T(*)[27])mxMalloc(sizeof(real_T[27]));
  /* Marshall function inputs */
  eb10g = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "eb10g");
  eb20g = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "eb20g");
  ab10g = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "ab10g");
  cmb2 = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "cmb2");
  cmb1 = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "cmb1");
  cmb3 = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "cmb3");
  eb30g = emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "eb30g");
  ab20g = emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "ab20g");
  /* Invoke the target function */
  hlfrholf(&st, *eb10g, *eb20g, *ab10g, *cmb2, *cmb1, *cmb3, *eb30g, *ab20g,
           *hLF, *rhoLF);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*hLF);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*rhoLF);
  }
}

/* End of code generation (_coder_hlfrholf_api.c) */
