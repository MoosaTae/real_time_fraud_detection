/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * extractFeatures.c
 *
 * Code generation for function 'extractFeatures'
 *
 */

/* Include files */
#include "extractFeatures.h"
#include "mean.h"
#include "minOrMax.h"
#include "pwelch.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include <math.h>

/* Function Definitions */
void extractFeatures(const double b_signal[192000], double Fs,
                     double features[7])
{
  static double y[192000];
  static double P[4097];
  static double P_data[4097];
  static double f[4097];
  double b_P_data[4097];
  double c_P_data[4097];
  double d;
  double peak;
  double rms;
  int b_partialTrueCount;
  int b_trueCount;
  int c_trueCount;
  int i;
  int k;
  int partialTrueCount;
  int trueCount;
  short b_tmp_data[4097];
  short c_tmp_data[4097];
  short tmp_data[4097];
  /*  Row vector */
  /*  Single scalar */
  /*  Time-domain features */
  for (k = 0; k < 192000; k++) {
    d = b_signal[k];
    y[k] = d * d;
  }
  rms = sqrt(mean(y));
  for (k = 0; k < 192000; k++) {
    y[k] = fabs(b_signal[k]);
  }
  peak = maximum_extract(y);
  /*  Frequency-domain features - using shorter window */
  pwelch(b_signal, Fs, P, f);
  /*  Spectral centroid */
  /*  Energy bands */
  trueCount = 0;
  k = 0;
  b_trueCount = 0;
  partialTrueCount = 0;
  c_trueCount = 0;
  b_partialTrueCount = 0;
  for (i = 0; i < 4097; i++) {
    d = f[i];
    if ((d >= 0.0) && (d <= 1000.0)) {
      trueCount++;
      tmp_data[k] = (short)i;
      k++;
    }
    if ((d > 1000.0) && (d <= 5000.0)) {
      b_trueCount++;
      b_tmp_data[partialTrueCount] = (short)i;
      partialTrueCount++;
    }
    if ((d > 5000.0) && (d <= 10000.0)) {
      c_trueCount++;
      c_tmp_data[b_partialTrueCount] = (short)i;
      b_partialTrueCount++;
    }
    d *= P[i];
    f[i] = d;
  }
  for (k = 0; k < trueCount; k++) {
    P_data[k] = P[tmp_data[k]];
  }
  for (k = 0; k < b_trueCount; k++) {
    b_P_data[k] = P[b_tmp_data[k]];
  }
  for (k = 0; k < c_trueCount; k++) {
    c_P_data[k] = P[c_tmp_data[k]];
  }
  features[0] = rms;
  features[1] = peak;
  features[2] = peak / rms;
  features[3] = sum(f) / sum(P);
  features[4] = b_mean(P_data, trueCount);
  features[5] = b_mean(b_P_data, b_trueCount);
  features[6] = b_mean(c_P_data, c_trueCount);
}

/* End of code generation (extractFeatures.c) */
