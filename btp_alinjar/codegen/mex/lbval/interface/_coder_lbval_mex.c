/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lbval_mex.c
 *
 * Code generation for function '_coder_lbval_mex'
 *
 */

/* Include files */
#include "_coder_lbval_mex.h"
#include "_coder_lbval_api.h"
#include "lbval_data.h"
#include "lbval_initialize.h"
#include "lbval_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lbval_mexFunction(int32_T nlhs, mxArray *plhs[9], int32_T nrhs,
                       const mxArray *prhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[9];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        5, "lbval");
  }
  if (nlhs > 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "lbval");
  }
  /* Call the function. */
  lbval_api(prhs, nlhs, outputs);
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
  mexAtExit(&lbval_atexit);
  /* Module initialization. */
  lbval_initialize();
  /* Dispatch the entry-point. */
  lbval_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  lbval_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_lbval_mex.c) */
