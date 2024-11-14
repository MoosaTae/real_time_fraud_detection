/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rt_nonfinite.c
 *
 * Code generation for function 'extractFeatures'
 *
 */

/*
 * Abstract:
 *      MATLAB for code generation function to initialize non-finites,
 *      (Inf, NaN and -Inf).
 */
/* Include files */
#include "rt_nonfinite.h"
#include <math.h>

#if defined(__ICL) && __ICL == 1700
#pragma warning(disable : 264)
#endif

real_T rtNaN_extract = (real_T)NAN;
real_T rtInf_extract = (real_T)INFINITY;
real_T rtMinusInf_extract = -(real_T)INFINITY;
real32_T rtNaNF_extract = (real32_T)NAN;
real32_T rtInfF_extract = (real32_T)INFINITY;
real32_T rtMinusInfF_extract = -(real32_T)INFINITY;

#if defined(__ICL) && __ICL == 1700
#pragma warning(default : 264)
#endif

/*
 * Function: rtIsInf_extract ==================================================
 *  Abstract:
 *  Test if value is infinite
 */
boolean_T rtIsInf_extract(real_T value)
{
  return (isinf(value) != 0U);
}

/*
 * Function: rtIsInfF_extract =================================================
 *  Abstract:
 *  Test if single-precision value is infinite
 */
boolean_T rtIsInfF_extract(real32_T value)
{
  return (isinf((real_T)value) != 0U);
}

/*
 * Function: rtIsNaN_extract ==================================================
 *  Abstract:
 *  Test if value is not a number
 */
boolean_T rtIsNaN_extract(real_T value)
{
  return (isnan(value) != 0U);
}

/*
 * Function: rtIsNaNF_extract =================================================
 *  Abstract:
 *  Test if single-precision value is not a number
 */
boolean_T rtIsNaNF_extract(real32_T value)
{
  return (isnan((real_T)value) != 0U);
}

/* End of code generation (rt_nonfinite.c) */
