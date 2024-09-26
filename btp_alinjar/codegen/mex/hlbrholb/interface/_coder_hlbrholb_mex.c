/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hlbrholb_mex.c
 *
 * Code generation for function '_coder_hlbrholb_mex'
 *
 */

/* Include files */
#include "_coder_hlbrholb_mex.h"
#include "_coder_hlbrholb_api.h"
#include "hlbrholb_data.h"
#include "hlbrholb_initialize.h"
#include "hlbrholb_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hlbrholb_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                          const mxArray *prhs[8])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[2];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 8, 4,
                        8, "hlbrholb");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "hlbrholb");
  }
  /* Call the function. */
  hlbrholb_api(prhs, nlhs, outputs);
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
  mexAtExit(&hlbrholb_atexit);
  /* Module initialization. */
  hlbrholb_initialize();
  /* Dispatch the entry-point. */
  hlbrholb_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  hlbrholb_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_hlbrholb_mex.c) */
