/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rfval_api.c
 *
 * Code generation for function '_coder_rfval_api'
 *
 */

/* Include files */
#include "_coder_rfval_api.h"
#include "rfval.h"
#include "rfval_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *b_emlrt_marshallOut(const real_T u[9]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Qquat,
                                   const char_T *identifier))[4];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[4];

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *qha,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const real_T u[3]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[4];

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[9])
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

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Qquat,
                                   const char_T *identifier))[4]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[4];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(Qquat), &thisId);
  emlrtDestroyArray(&Qquat);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[4]
{
  real_T(*y)[4];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *qha,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(qha), &thisId);
  emlrtDestroyArray(&qha);
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
                                   const emlrtMsgIdentifier *msgId))[4]
{
  static const int32_T dims = 4;
  real_T(*ret)[4];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void rfval_api(const mxArray *const prhs[4], int32_T nlhs,
               const mxArray *plhs[9])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*Qd3g)[9];
  real_T(*Qquat)[4];
  real_T(*aa1g)[3];
  real_T(*aa2g)[3];
  real_T(*cma1g)[3];
  real_T(*cma2g)[3];
  real_T(*cma3g)[3];
  real_T(*ea1g)[3];
  real_T(*ea2g)[3];
  real_T(*ea3g)[3];
  real_T qaa;
  real_T qha;
  real_T qka;
  st.tls = emlrtRootTLSGlobal;
  ea1g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  ea2g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  ea3g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  aa1g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  aa2g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  cma1g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  cma2g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  cma3g = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  Qd3g = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  /* Marshall function inputs */
  qha = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "qha");
  qaa = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "qaa");
  Qquat = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "Qquat");
  qka = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "qka");
  /* Invoke the target function */
  rfval(&st, qha, qaa, *Qquat, qka, *ea1g, *ea2g, *ea3g, *aa1g, *aa2g, *cma1g,
        *cma2g, *cma3g, *Qd3g);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*ea1g);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*ea2g);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*ea3g);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*aa1g);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(*aa2g);
  }
  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(*cma1g);
  }
  if (nlhs > 6) {
    plhs[6] = emlrt_marshallOut(*cma2g);
  }
  if (nlhs > 7) {
    plhs[7] = emlrt_marshallOut(*cma3g);
  }
  if (nlhs > 8) {
    plhs[8] = b_emlrt_marshallOut(*Qd3g);
  }
}

/* End of code generation (_coder_rfval_api.c) */
