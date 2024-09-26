/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hlbrholb_initialize.c
 *
 * Code generation for function 'hlbrholb_initialize'
 *
 */

/* Include files */
#include "hlbrholb_initialize.h"
#include "_coder_hlbrholb_mex.h"
#include "hlbrholb_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void hlbrholb_initialize(void)
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

/* End of code generation (hlbrholb_initialize.c) */
