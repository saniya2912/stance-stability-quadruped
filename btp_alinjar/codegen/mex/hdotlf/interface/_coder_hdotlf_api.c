/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hdotlf_api.c
 *
 * Code generation for function '_coder_hdotlf_api'
 *
 */

/* Include files */
#include "_coder_hdotlf_api.h"
#include "hdotlf.h"
#include "hdotlf_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp,
                                   const mxArray *rho_dotLF,
                                   const char_T *identifier))[27];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[27];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *eb_dg1,
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
                                   const mxArray *rho_dotLF,
                                   const char_T *identifier))[27]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[27];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(rho_dotLF), &thisId);
  emlrtDestroyArray(&rho_dotLF);
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

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *eb_dg1,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(eb_dg1), &thisId);
  emlrtDestroyArray(&eb_dg1);
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

void hdotlf_api(const mxArray *const prhs[8], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*rhoLF)[27];
  real_T(*rho_dotLF)[27];
  real_T(*h_dotLF)[9];
  real_T(*eb1g)[3];
  real_T(*eb2g)[3];
  real_T(*eb3g)[3];
  real_T(*eb_dg1)[3];
  real_T(*eb_dg2)[3];
  real_T(*eb_dg3)[3];
  st.tls = emlrtRootTLSGlobal;
  h_dotLF = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  /* Marshall function inputs */
  eb_dg1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "eb_dg1");
  eb1g = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "eb1g");
  eb2g = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "eb2g");
  eb3g = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "eb3g");
  eb_dg2 = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "eb_dg2");
  eb_dg3 = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "eb_dg3");
  rho_dotLF = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "rho_dotLF");
  rhoLF = c_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "rhoLF");
  /* Invoke the target function */
  hdotlf(*eb_dg1, *eb1g, *eb2g, *eb3g, *eb_dg2, *eb_dg3, *rho_dotLF, *rhoLF,
         *h_dotLF);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(*h_dotLF);
}

/* End of code generation (_coder_hdotlf_api.c) */
