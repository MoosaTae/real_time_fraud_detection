/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeperiodogram.h
 *
 * Code generation for function 'computeperiodogram'
 *
 */

#ifndef COMPUTEPERIODOGRAM_H
#define COMPUTEPERIODOGRAM_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void computeperiodogram(const double x[8192], double sampleFreq,
                        double Pxx[8192], double F[8192]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (computeperiodogram.h) */
