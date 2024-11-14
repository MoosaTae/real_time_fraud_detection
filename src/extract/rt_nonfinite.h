/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rt_nonfinite.h
 *
 * Code generation for function 'extractFeatures'
 *
 */

#ifndef RT_NONFINITE_H
#define RT_NONFINITE_H

/* Include files */
#include "rtwtypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

    extern real_T rtInf_extract;
    extern real_T rtMinusInf_extract;
    extern real_T rtNaN_extract;
    extern real32_T rtInfF_extract;
    extern real32_T rtMinusInfF_extract;
    extern real32_T rtNaNF_extract;

    extern boolean_T rtIsInf_extract(real_T value);
    extern boolean_T rtIsInfF_extract(real32_T value);
    extern boolean_T rtIsNaN_extract(real_T value);
    extern boolean_T rtIsNaNF_extract(real32_T value);

#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (rt_nonfinite.h) */
