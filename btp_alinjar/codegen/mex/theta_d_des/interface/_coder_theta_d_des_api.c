/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_theta_d_des_api.c
 *
 * Code generation for function '_coder_theta_d_des_api'
 *
 */

/* Include files */
#include "_coder_theta_d_des_api.h"
#include "rt_nonfinite.h"
#include "theta_d_des.h"
#include "theta_d_des_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[9];

static const mxArray *b_emlrt_marshallOut(const real_T u[36]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *v_torso,
                                   const char_T *identifier))[3];

static const mxArray *c_emlrt_marshallOut(const real_T u[12]);

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static const mxArray *d_emlrt_marshallOut(const real_T u);

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[9];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *hLF,
                                 const char_T *identifier))[9];

static const mxArray *emlrt_marshallOut(const real_T u[3]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[9]
{
  real_T(*y)[9];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[36])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {3, 12};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *v_torso,
                                   const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(v_torso), &thisId);
  emlrtDestroyArray(&v_torso);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const real_T u[12])
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

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3]
{
  real_T(*y)[3];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[9]
{
  static const int32_T dims[2] = {3, 3};
  real_T(*ret)[9];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[9])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *hLF,
                                 const char_T *identifier))[9]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[9];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(hLF), &thisId);
  emlrtDestroyArray(&hLF);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {1, 3};
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

void theta_d_des_api(const mxArray *const prhs[9], int32_T nlhs,
                     const mxArray *plhs[8])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*h)[36];
  real_T(*h_dot)[36];
  real_T(*b_theta_d_des)[12];
  real_T(*hLB)[9];
  real_T(*hLF)[9];
  real_T(*hRB)[9];
  real_T(*hRF)[9];
  real_T(*h_dotLB)[9];
  real_T(*h_dotLF)[9];
  real_T(*h_dotRB)[9];
  real_T(*h_dotRF)[9];
  real_T(*tddLB)[3];
  real_T(*tddLF)[3];
  real_T(*tddRB)[3];
  real_T(*tddRF)[3];
  real_T(*v_torso)[3];
  real_T M;
  st.tls = emlrtRootTLSGlobal;
  tddRF = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  tddLF = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  tddRB = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  tddLB = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  h = (real_T(*)[36])mxMalloc(sizeof(real_T[36]));
  h_dot = (real_T(*)[36])mxMalloc(sizeof(real_T[36]));
  b_theta_d_des = (real_T(*)[12])mxMalloc(sizeof(real_T[12]));
  /* Marshall function inputs */
  hLF = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "hLF");
  hRB = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "hRB");
  hLB = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "hLB");
  h_dotLF = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "h_dotLF");
  hRF = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "hRF");
  h_dotRF = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "h_dotRF");
  v_torso = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "v_torso");
  h_dotRB = emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "h_dotRB");
  h_dotLB = emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "h_dotLB");
  /* Invoke the target function */
  theta_d_des(&st, *hLF, *hRB, *hLB, *h_dotLF, *hRF, *h_dotRF, *v_torso,
              *h_dotRB, *h_dotLB, *tddRF, *tddLF, *tddRB, *tddLB, *h, *h_dot,
              *b_theta_d_des, &M);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*tddRF);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*tddLF);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*tddRB);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*tddLB);
  }
  if (nlhs > 4) {
    plhs[4] = b_emlrt_marshallOut(*h);
  }
  if (nlhs > 5) {
    plhs[5] = b_emlrt_marshallOut(*h_dot);
  }
  if (nlhs > 6) {
    plhs[6] = c_emlrt_marshallOut(*b_theta_d_des);
  }
  if (nlhs > 7) {
    plhs[7] = d_emlrt_marshallOut(M);
  }
}

/* End of code generation (_coder_theta_d_des_api.c) */
