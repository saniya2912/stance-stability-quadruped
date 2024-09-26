/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lb3_mex.c
 *
 * Code generation for function '_coder_lb3_mex'
 *
 */

/* Include files */
#include "_coder_lb3_mex.h"
#include "_coder_lb3_api.h"
#include "lb3_data.h"
#include "lb3_initialize.h"
#include "lb3_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lb3_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
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
                        3, "lb3");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 3,
                        "lb3");
  }
  /* Call the function. */
  lb3_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&lb3_atexit);
  /* Module initialization. */
  lb3_initialize();
  /* Dispatch the entry-point. */
  lb3_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  lb3_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_lb3_mex.c) */
