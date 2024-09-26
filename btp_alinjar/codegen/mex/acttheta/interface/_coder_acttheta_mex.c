/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_acttheta_mex.c
 *
 * Code generation for function '_coder_acttheta_mex'
 *
 */

/* Include files */
#include "_coder_acttheta_mex.h"
#include "_coder_acttheta_api.h"
#include "acttheta_data.h"
#include "acttheta_initialize.h"
#include "acttheta_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void acttheta_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
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
                        8, "acttheta");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "acttheta");
  }
  /* Call the function. */
  acttheta_api(prhs, nlhs, outputs);
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
  mexAtExit(&acttheta_atexit);
  /* Module initialization. */
  acttheta_initialize();
  /* Dispatch the entry-point. */
  acttheta_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  acttheta_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_acttheta_mex.c) */
