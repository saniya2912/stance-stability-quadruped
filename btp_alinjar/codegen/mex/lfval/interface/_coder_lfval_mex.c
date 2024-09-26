/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lfval_mex.c
 *
 * Code generation for function '_coder_lfval_mex'
 *
 */

/* Include files */
#include "_coder_lfval_mex.h"
#include "_coder_lfval_api.h"
#include "lfval_data.h"
#include "lfval_initialize.h"
#include "lfval_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lfval_mexFunction(int32_T nlhs, mxArray *plhs[9], int32_T nrhs,
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
                        5, "lfval");
  }
  if (nlhs > 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "lfval");
  }
  /* Call the function. */
  lfval_api(prhs, nlhs, outputs);
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
  mexAtExit(&lfval_atexit);
  /* Module initialization. */
  lfval_initialize();
  /* Dispatch the entry-point. */
  lfval_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  lfval_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_lfval_mex.c) */
