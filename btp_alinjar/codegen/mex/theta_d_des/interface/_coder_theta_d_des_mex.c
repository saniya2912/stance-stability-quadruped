/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_theta_d_des_mex.c
 *
 * Code generation for function '_coder_theta_d_des_mex'
 *
 */

/* Include files */
#include "_coder_theta_d_des_mex.h"
#include "_coder_theta_d_des_api.h"
#include "rt_nonfinite.h"
#include "theta_d_des_data.h"
#include "theta_d_des_initialize.h"
#include "theta_d_des_terminate.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&theta_d_des_atexit);
  /* Module initialization. */
  theta_d_des_initialize();
  /* Dispatch the entry-point. */
  theta_d_des_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  theta_d_des_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void theta_d_des_mexFunction(int32_T nlhs, mxArray *plhs[8], int32_T nrhs,
                             const mxArray *prhs[9])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[8];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        11, "theta_d_des");
  }
  if (nlhs > 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "theta_d_des");
  }
  /* Call the function. */
  theta_d_des_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_theta_d_des_mex.c) */
