/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pwelch.c
 *
 * Code generation for function 'pwelch'
 *
 */

/* Include files */
#include "pwelch.h"
#include "computeperiodogram.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void pwelch(const double x[192000], double varargin_4, double varargout_1[4097],
            double varargout_2[4097])
{
  static double Sxx1[8192];
  static double Sxxk[8192];
  static double w1[8192];
  double Sxx[4097];
  double Fs1;
  double freq_res;
  int b_i;
  int i;
  bool Fs1_tmp;
  computeperiodogram(&x[0], varargin_4, Sxx1, w1);
  for (i = 0; i < 44; i++) {
    computeperiodogram(&x[(i + 1) << 12], varargin_4, Sxxk, w1);
    for (b_i = 0; b_i < 8192; b_i++) {
      Sxx1[b_i] += Sxxk[b_i];
    }
  }
  Fs1_tmp = rtIsNaN_extract(varargin_4);
  if (Fs1_tmp) {
    Fs1 = 6.2831853071795862;
  } else {
    Fs1 = varargin_4;
  }
  freq_res = Fs1 / 8192.0;
  for (b_i = 0; b_i < 8192; b_i++) {
    Sxx1[b_i] /= 45.0;
    w1[b_i] = freq_res * (double)b_i;
  }
  w1[4096] = Fs1 / 2.0;
  w1[8191] = Fs1 - freq_res;
  memcpy(&Sxx[0], &Sxx1[0], 4097U * sizeof(double));
  for (b_i = 0; b_i < 4095; b_i++) {
    Sxx[b_i + 1] = 2.0 * Sxx1[b_i + 1];
  }
  if (!Fs1_tmp) {
    for (i = 0; i < 4097; i++) {
      varargout_1[i] = Sxx[i] / varargin_4;
    }
  } else {
    for (i = 0; i < 4097; i++) {
      varargout_1[i] = Sxx[i] / 6.2831853071795862;
    }
  }
  memcpy(&varargout_2[0], &w1[0], 4097U * sizeof(double));
}

/* End of code generation (pwelch.c) */
