/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hdotrf_api.c
 *
 * Code generation for function '_coder_hdotrf_api'
 *
 */

/* Include files */
#include "_coder_hdotrf_api.h"
#include "hdotrf.h"
#include "hdotrf_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp,
                                   const mxArray *rho_dotRF,
                                   const char_T *identifier))[27];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[27];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ea_dg1,
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
                                   const mxArray *rho_dotRF,
                                   const char_T *identifier))[27]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[27];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(rho_dotRF), &thisId);
  emlrtDestroyArray(&rho_dotRF);
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

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ea_dg1,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(ea_dg1), &thisId);
  emlrtDestroyArray(&ea_dg1);
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

void hdotrf_api(const mxArray *const prhs[8], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*rhoRF)[27];
  real_T(*rho_dotRF)[27];
  real_T(*h_dotRF)[9];
  real_T(*ea1g)[3];
  real_T(*ea2g)[3];
  real_T(*ea3g)[3];
  real_T(*ea_dg1)[3];
  real_T(*ea_dg2)[3];
  real_T(*ea_dg3)[3];
  st.tls = emlrtRootTLSGlobal;
  h_dotRF = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  /* Marshall function inputs */
  ea_dg1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ea_dg1");
  ea1g = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "ea1g");
  ea2g = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "ea2g");
  ea3g = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "ea3g");
  ea_dg2 = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "ea_dg2");
  ea_dg3 = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "ea_dg3");
  rho_dotRF = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "rho_dotRF");
  rhoRF = c_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "rhoRF");
  /* Invoke the target function */
  hdotrf(*ea_dg1, *ea1g, *ea2g, *ea3g, *ea_dg2, *ea_dg3, *rho_dotRF, *rhoRF,
         *h_dotRF);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(*h_dotRF);
}

/* End of code generation (_coder_hdotrf_api.c) */
