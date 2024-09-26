/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lf4_mex.c
 *
 * Code generation for function '_coder_lf4_mex'
 *
 */

/* Include files */
#include "_coder_lf4_mex.h"
#include "_coder_lf4_api.h"
#include "lf4_data.h"
#include "lf4_initialize.h"
#include "lf4_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lf4_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
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
                        3, "lf4");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 3,
                        "lf4");
  }
  /* Call the function. */
  lf4_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&lf4_atexit);
  /* Module initialization. */
  lf4_initialize();
  /* Dispatch the entry-point. */
  lf4_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  lf4_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_lf4_mex.c) */
