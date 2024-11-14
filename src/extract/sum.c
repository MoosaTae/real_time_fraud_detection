/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "sum.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double sum(const double x[4097])
{
  double y;
  int ib;
  int k;
  y = x[0];
  for (k = 0; k < 1023; k++) {
    y += x[k + 1];
  }
  for (ib = 0; ib < 4; ib++) {
    double bsum;
    int hi;
    int xblockoffset;
    xblockoffset = (ib + 1) << 10;
    bsum = x[xblockoffset];
    if (ib + 2 == 5) {
      hi = 1;
    } else {
      hi = 1024;
    }
    for (k = 2; k <= hi; k++) {
      bsum += x[(xblockoffset + k) - 1];
    }
    y += bsum;
  }
  return y;
}

/* End of code generation (sum.c) */
