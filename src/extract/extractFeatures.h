/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * extractFeatures.h
 *
 * Code generation for function 'extractFeatures'
 *
 */

#ifndef EXTRACTFEATURES_H
#define EXTRACTFEATURES_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void extractFeatures(const double b_signal[192000], double Fs,
                            double features[7]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (extractFeatures.h) */
