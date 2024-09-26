/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rb3_mex.c
 *
 * Code generation for function '_coder_rb3_mex'
 *
 */

/* Include files */
#include "_coder_rb3_mex.h"
#include "_coder_rb3_api.h"
#include "rb3_data.h"
#include "rb3_initialize.h"
#include "rb3_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&rb3_atexit);
  /* Module initialization. */
  rb3_initialize();
  /* Dispatch the entry-point. */
  rb3_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  rb3_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void rb3_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
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
                        3, "rb3");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 3,
                        "rb3");
  }
  /* Call the function. */
  rb3_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/* End of code generation (_coder_rb3_mex.c) */
