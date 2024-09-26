/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hdotrb_api.c
 *
 * Code generation for function '_coder_hdotrb_api'
 *
 */

/* Include files */
#include "_coder_hdotrb_api.h"
#include "hdotrb.h"
#include "hdotrb_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp,
                                   const mxArray *rho_dotRB,
                                   const char_T *identifier))[27];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[27];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ec_dg1,
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
                                   const mxArray *rho_dotRB,
                                   const char_T *identifier))[27]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[27];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(rho_dotRB), &thisId);
  emlrtDestroyArray(&rho_dotRB);
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

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *ec_dg1,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(ec_dg1), &thisId);
  emlrtDestroyArray(&ec_dg1);
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

void hdotrb_api(const mxArray *const prhs[8], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*rhoRB)[27];
  real_T(*rho_dotRB)[27];
  real_T(*h_dotRB)[9];
  real_T(*ec1g)[3];
  real_T(*ec2g)[3];
  real_T(*ec3g)[3];
  real_T(*ec_dg1)[3];
  real_T(*ec_dg2)[3];
  real_T(*ec_dg3)[3];
  st.tls = emlrtRootTLSGlobal;
  h_dotRB = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  /* Marshall function inputs */
  ec_dg1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ec_dg1");
  ec1g = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "ec1g");
  ec2g = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "ec2g");
  ec3g = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "ec3g");
  ec_dg2 = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "ec_dg2");
  ec_dg3 = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "ec_dg3");
  rho_dotRB = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "rho_dotRB");
  rhoRB = c_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "rhoRB");
  /* Invoke the target function */
  hdotrb(*ec_dg1, *ec1g, *ec2g, *ec3g, *ec_dg2, *ec_dg3, *rho_dotRB, *rhoRB,
         *h_dotRB);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(*h_dotRB);
}

/* End of code generation (_coder_hdotrb_api.c) */
