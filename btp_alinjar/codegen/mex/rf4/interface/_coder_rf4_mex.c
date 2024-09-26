/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rf4_mex.c
 *
 * Code generation for function '_coder_rf4_mex'
 *
 */

/* Include files */
#include "_coder_rf4_mex.h"
#include "_coder_rf4_api.h"
#include "rf4_data.h"
#include "rf4_initialize.h"
#include "rf4_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&rf4_atexit);
  /* Module initialization. */
  rf4_initialize();
  /* Dispatch the entry-point. */
  rf4_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  rf4_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void rf4_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                     const mxArray *prhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        3, "rf4");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 3,
                        "rf4");
  }
  /* Call the function. */
  rf4_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/* End of code generation (_coder_rf4_mex.c) */
