/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_lfval1_mex.c
 *
 * Code generation for function '_coder_lfval1_mex'
 *
 */

/* Include files */
#include "_coder_lfval1_mex.h"
#include "_coder_lfval1_api.h"
#include "lfval1_data.h"
#include "lfval1_initialize.h"
#include "lfval1_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void lfval1_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
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
                        6, "lfval1");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "lfval1");
  }
  /* Call the function. */
  lfval1_api(prhs, nlhs, outputs);
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
  mexAtExit(&lfval1_atexit);
  /* Module initialization. */
  lfval1_initialize();
  /* Dispatch the entry-point. */
  lfval1_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  lfval1_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_lfval1_mex.c) */
