/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hrfrhorf_initialize.c
 *
 * Code generation for function 'hrfrhorf_initialize'
 *
 */

/* Include files */
#include "hrfrhorf_initialize.h"
#include "_coder_hrfrhorf_mex.h"
#include "hrfrhorf_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hrfrhorf_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (hrfrhorf_initialize.c) */
