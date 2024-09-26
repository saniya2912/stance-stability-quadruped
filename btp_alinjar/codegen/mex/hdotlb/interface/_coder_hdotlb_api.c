/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hdotlb_api.c
 *
 * Code generation for function '_coder_hdotlb_api'
 *
 */

/* Include files */
#include "_coder_hdotlb_api.h"
#include "hdotlb.h"
#include "hdotlb_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp,
                                   const mxArray *rho_dotLB,
                                   const char_T *identifier))[27];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[27];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ed_dg1,
                                 const char_T *identifier))[3];

static const mxArray *emlrt_marshallOut(const real_T u[9]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[27];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3]
{
  real_T(*y)[3];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp,
                                   const mxArray *rho_dotLB,
                                   const char_T *identifier))[27]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[27];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(rho_dotLB), &thisId);
  emlrtDestroyArray(&rho_dotLB);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[27]
{
  real_T(*y)[27];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ed_dg1,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(ed_dg1), &thisId);
  emlrtDestroyArray(&ed_dg1);
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

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[27]
{
  static const int32_T dims[3] = {3, 3, 3};
  real_T(*ret)[27];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 3U, (void *)&dims[0]);
  ret = (real_T(*)[27])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void hdotlb_api(const mxArray *const prhs[8], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*rhoLB)[27];
  real_T(*rho_dotLB)[27];
  real_T(*h_dotLB)[9];
  real_T(*ed1g)[3];
  real_T(*ed2g)[3];
  real_T(*ed3g)[3];
  real_T(*ed_dg1)[3];
  real_T(*ed_dg2)[3];
  real_T(*ed_dg3)[3];
  st.tls = emlrtRootTLSGlobal;
  h_dotLB = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  /* Marshall function inputs */
  ed_dg1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ed_dg1");
  ed1g = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "ed1g");
  ed2g = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "ed2g");
  ed3g = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "ed3g");
  ed_dg2 = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "ed_dg2");
  ed_dg3 = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "ed_dg3");
  rho_dotLB = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "rho_dotLB");
  rhoLB = c_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "rhoLB");
  /* Invoke the target function */
  hdotlb(*ed_dg1, *ed1g, *ed2g, *ed3g, *ed_dg2, *ed_dg3, *rho_dotLB, *rhoLB,
         *h_dotLB);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(*h_dotLB);
}

/* End of code generation (_coder_hdotlb_api.c) */
