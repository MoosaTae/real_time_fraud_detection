/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictRealTime.h
 *
 * Code generation for function 'predictRealTime'
 *
 */

#ifndef PREDICTREALTIME_H
#define PREDICTREALTIME_H

/* Include files */
#include "predictRealTime_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void predictRealTime(const double features[7], double Fs,
                            cell_wrap_0 label[1], double score[3]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (predictRealTime.h) */
