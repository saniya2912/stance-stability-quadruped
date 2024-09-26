/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lf3_mex.c
 *
 * Code generation for function '_coder_lf3_mex'
 *
 */

/* Include files */
#include "_coder_lf3_mex.h"
#include "_coder_lf3_api.h"
#include "lf3_data.h"
#include "lf3_initialize.h"
#include "lf3_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lf3_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
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
                        3, "lf3");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 3,
                        "lf3");
  }
  /* Call the function. */
  lf3_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&lf3_atexit);
  /* Module initialization. */
  lf3_initialize();
  /* Dispatch the entry-point. */
  lf3_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  lf3_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_lf3_mex.c) */
