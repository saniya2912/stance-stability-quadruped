/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lfval1_api.c
 *
 * Code generation for function '_coder_lfval1_api'
 *
 */

/* Include files */
#include "_coder_lfval1_api.h"
#include "lfval1.h"
#include "lfval1_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static const mxArray *b_emlrt_marshallOut(const real_T u[27]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *vlinks,
                                   const char_T *identifier))[36];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[36];

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *td1,
                                 const char_T *identifier);

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *eb1g,
                                 const char_T *identifier))[3];

static const mxArray *emlrt_marshallOut(const real_T u[3]);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[36];

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3]
{
  real_T(*y)[3];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
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

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *vlinks,
                                   const char_T *identifier))[36]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[36];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(vlinks), &thisId);
  emlrtDestroyArray(&vlinks);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[36]
{
  real_T(*y)[36];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *td1,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(td1), &thisId);
  emlrtDestroyArray(&td1);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *eb1g,
                                 const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(eb1g), &thisId);
  emlrtDestroyArray(&eb1g);
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

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void lfval1_api(const mxArray *const prhs[11], int32_T nlhs,
                const mxArray *plhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*vlinks)[36];
  real_T(*rho_dotLF)[27];
  real_T(*ab1g)[3];
  real_T(*ab2g)[3];
  real_T(*eb1g)[3];
  real_T(*eb2g)[3];
  real_T(*eb3g)[3];
  real_T(*eb_dg1)[3];
  real_T(*eb_dg2)[3];
  real_T(*eb_dg3)[3];
  real_T(*v_torso)[3];
  real_T(*w_torso)[3];
  real_T td1;
  real_T td2;
  real_T td3;
  st.tls = emlrtRootTLSGlobal;
  eb_dg1 = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  eb_dg2 = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  eb_dg3 = (real_T(*)[3])mxMalloc(sizeof(real_T[3]));
  rho_dotLF = (real_T(*)[27])mxMalloc(sizeof(real_T[27]));
  /* Marshall function inputs */
  eb1g = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "eb1g");
  eb2g = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "eb2g");
  ab1g = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "ab1g");
  ab2g = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "ab2g");
  eb3g = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "eb3g");
  vlinks = c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "vlinks");
  w_torso = emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "w_torso");
  td1 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "td1");
  v_torso = emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "v_torso");
  td2 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "td2");
  td3 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "td3");
  /* Invoke the target function */
  lfval1(&st, *eb1g, *eb2g, *ab1g, *ab2g, *eb3g, *vlinks, *w_torso, td1,
         *v_torso, td2, td3, *eb_dg1, *eb_dg2, *eb_dg3, *rho_dotLF);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*eb_dg1);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*eb_dg2);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*eb_dg3);
  }
  if (nlhs > 3) {
    plhs[3] = b_emlrt_marshallOut(*rho_dotLF);
  }
}

/* End of code generation (_coder_lfval1_api.c) */
