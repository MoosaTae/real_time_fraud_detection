/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rtGetNaN_extract.c
 *
 * Code generation for function 'extractFeatures'
 *
 */

/*
 * Abstract:
 *       MATLAB for code generation function to initialize non-finite, NaN
 */
/* Include files */
#include "rtGetNaN.h"
#include "rt_nonfinite.h"

/*
 * Function: rtGetNaN_extract
 * ======================================================================
 *  Abstract:
 * Initialize rtNaN_extract needed by the generated code.
 *  NaN is initialized as non-signaling. Assumes IEEE.
 */
real_T rtGetNaN_extract(void)
{
  return rtNaN_extract;
}

/*
 * Function: rtGetNaNF_extract
 * =====================================================================
 *  Abstract:
 *  Initialize rtNaNF_extract needed by the generated code.
 *  NaN is initialized as non-signaling. Assumes IEEE
 */
real32_T rtGetNaNF_extract(void)
{
  return rtNaNF_extract;
}

/* End of code generation (rtGetNaN_extract.c) */
