/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hdotrf_mex.c
 *
 * Code generation for function '_coder_hdotrf_mex'
 *
 */

/* Include files */
#include "_coder_hdotrf_mex.h"
#include "_coder_hdotrf_api.h"
#include "hdotrf_data.h"
#include "hdotrf_initialize.h"
#include "hdotrf_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hdotrf_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                        const mxArray *prhs[8])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 8, 4,
                        6, "hdotrf");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "hdotrf");
  }
  /* Call the function. */
  hdotrf_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&hdotrf_atexit);
  /* Module initialization. */
  hdotrf_initialize();
  /* Dispatch the entry-point. */
  hdotrf_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  hdotrf_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_hdotrf_mex.c) */
