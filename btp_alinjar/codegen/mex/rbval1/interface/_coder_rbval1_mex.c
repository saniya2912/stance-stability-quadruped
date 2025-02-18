/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rbval1_mex.c
 *
 * Code generation for function '_coder_rbval1_mex'
 *
 */

/* Include files */
#include "_coder_rbval1_mex.h"
#include "_coder_rbval1_api.h"
#include "rbval1_data.h"
#include "rbval1_initialize.h"
#include "rbval1_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&rbval1_atexit);
  /* Module initialization. */
  rbval1_initialize();
  /* Dispatch the entry-point. */
  rbval1_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  rbval1_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void rbval1_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
                        const mxArray *prhs[11])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[4];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 11, 4,
                        6, "rbval1");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "rbval1");
  }
  /* Call the function. */
  rbval1_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_rbval1_mex.c) */
