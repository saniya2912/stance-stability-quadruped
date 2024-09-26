/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_findh_mex.c
 *
 * Code generation for function '_coder_findh_mex'
 *
 */

/* Include files */
#include "_coder_findh_mex.h"
#include "_coder_findh_api.h"
#include "findh_data.h"
#include "findh_initialize.h"
#include "findh_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void findh_mexFunction(int32_T nlhs, mxArray *plhs[5], int32_T nrhs,
                       const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[5];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        5, "findh");
  }
  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "findh");
  }
  /* Call the function. */
  findh_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&findh_atexit);
  /* Module initialization. */
  findh_initialize();
  /* Dispatch the entry-point. */
  findh_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  findh_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_findh_mex.c) */
