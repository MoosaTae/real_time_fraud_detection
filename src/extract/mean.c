/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "mean.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double b_mean(const double x_data[], int x_size)
{
  double y;
  int ib;
  int k;
  if (x_size == 0) {
    y = 0.0;
  } else {
    int firstBlockLength;
    int lastBlockLength;
    int nblocks;
    if (x_size <= 1024) {
      firstBlockLength = x_size;
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = (int)((unsigned int)x_size >> 10);
      lastBlockLength = x_size - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    y = x_data[0];
    for (k = 2; k <= firstBlockLength; k++) {
      y += x_data[k - 1];
    }
    for (ib = 2; ib <= nblocks; ib++) {
      double bsum;
      int hi;
      firstBlockLength = (ib - 1) << 10;
      bsum = x_data[firstBlockLength];
      if (ib == nblocks) {
        hi = lastBlockLength;
      } else {
        hi = 1024;
      }
      for (k = 2; k <= hi; k++) {
        bsum += x_data[(firstBlockLength + k) - 1];
      }
      y += bsum;
    }
  }
  y /= (double)x_size;
  return y;
}

double mean(const double x[192000])
{
  double accumulatedData;
  double y;
  int ib;
  int k;
  accumulatedData = x[0];
  for (k = 0; k < 1023; k++) {
    accumulatedData += x[k + 1];
  }
  for (ib = 0; ib < 187; ib++) {
    int hi;
    int xblockoffset;
    xblockoffset = (ib + 1) << 10;
    y = x[xblockoffset];
    if (ib + 2 == 188) {
      hi = 512;
    } else {
      hi = 1024;
    }
    for (k = 2; k <= hi; k++) {
      y += x[(xblockoffset + k) - 1];
    }
    accumulatedData += y;
  }
  return accumulatedData / 192000.0;
}

/* End of code generation (mean.c) */
