/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hdotlf_mex.c
 *
 * Code generation for function '_coder_hdotlf_mex'
 *
 */

/* Include files */
#include "_coder_hdotlf_mex.h"
#include "_coder_hdotlf_api.h"
#include "hdotlf_data.h"
#include "hdotlf_initialize.h"
#include "hdotlf_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hdotlf_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
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
                        6, "hdotlf");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "hdotlf");
  }
  /* Call the function. */
  hdotlf_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&hdotlf_atexit);
  /* Module initialization. */
  hdotlf_initialize();
  /* Dispatch the entry-point. */
  hdotlf_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  hdotlf_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_hdotlf_mex.c) */
