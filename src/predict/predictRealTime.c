/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictRealTime.c
 *
 * Code generation for function 'predictRealTime'
 *
 */

/* Include files */
#include "predictRealTime.h"
#include "CompactClassificationEnsemble.h"
#include "predictRealTime_internal_types.h"
#include "predictRealTime_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void predictRealTime(const double features[7], double Fs, cell_wrap_0 label[1],
                     double score[3])
{
  double model_LearnerWeights[100];
  double expl_temp[9];
  double model_Prior[3];
  int model_ClassNamesLength[3];
  bool model_IsCached[100];
  bool model_ClassLogicalIndices[3];
  (void)Fs;
  c_CompactClassificationEnsemble(model_IsCached, model_LearnerWeights,
                                  model_ClassNamesLength, model_Prior,
                                  model_ClassLogicalIndices, expl_temp);
  d_CompactClassificationEnsemble(model_IsCached, model_LearnerWeights,
                                  model_ClassNamesLength, model_Prior, features,
                                  &label[0], score);
  /*  label = label{1};  % Extract from cell */
}

/* End of code generation (predictRealTime.c) */
