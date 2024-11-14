/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rtGetInf_extract.c
 *
 * Code generation for function 'extractFeatures'
 *
 */

/*
 * Abstract:
 *       MATLAB for code generation function to initialize non-finite, Inf and
 * MinusInf
 */
/* Include files */
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/*
 * Function: rtGetInf_extract
 * ================================================================== Abstract:
 *  Initialize rtInf_extract needed by the generated code.
 */
real_T rtGetInf_extract(void)
{
  return rtInf_extract;
}

/*
 * Function: rtGetInfF_extract
 * ================================================================= Abstract:
 *  Initialize rtInfF_extract needed by the generated code.
 */
real32_T rtGetInfF_extract(void)
{
  return rtInfF_extract;
}

/*
 * Function: rtGetMinusInf_extract
 * ============================================================= Abstract:
 *  Initialize rtMinusInf_extract needed by the generated code.
 */
real_T rtGetMinusInf_extract(void)
{
  return rtMinusInf_extract;
}

/*
 * Function: rtGetMinusInfF_extract
 * ============================================================ Abstract:
 *  Initialize rtMinusInfF_extract needed by the generated code.
 */
real32_T rtGetMinusInfF_extract(void)
{
  return rtMinusInfF_extract;
}

/* End of code generation (rtGetInf_extract.c) */
