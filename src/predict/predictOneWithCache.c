/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictOneWithCache.c
 *
 * Code generation for function 'predictOneWithCache'
 *
 */

/* Include files */
#include "predictOneWithCache.h"
#include "CompactClassificationTree.h"
#include "predictRealTime_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void predictOneWithCache(const double X[7], double cachedScore[3],
                         double *cachedWeights,
                         const double weak_learner_CutPredictorIndex[3],
                         const double weak_learner_Children[6],
                         const double weak_learner_CutPoint[3],
                         const bool weak_learner_NanCutPoints[3],
                         const int weak_learner_ClassNamesLength[3],
                         const double weak_learner_Cost[9],
                         const double weak_learner_ClassProbability[9],
                         double learnerWeights, bool *cached, bool initCache,
                         double score[3])
{
  cell_wrap_0 a__2;
  double dv[3];
  c_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
  if (initCache) {
    cachedScore[0] = 0.0;
    cachedScore[1] = 0.0;
    cachedScore[2] = 0.0;
  } else {
    int k;
    bool exitg1;
    bool y;
    y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (rtIsNaN(cachedScore[k])) {
        y = true;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (y) {
      if (rtIsNaN(cachedScore[0])) {
        cachedScore[0] = 0.0;
      }
      if (rtIsNaN(cachedScore[1])) {
        cachedScore[1] = 0.0;
      }
      if (rtIsNaN(cachedScore[2])) {
        cachedScore[2] = 0.0;
      }
    }
  }
  if (!*cached) {
    cachedScore[0] += dv[0] * learnerWeights;
    cachedScore[1] += dv[1] * learnerWeights;
    cachedScore[2] += dv[2] * learnerWeights;
    *cachedWeights += learnerWeights;
  }
  score[0] = cachedScore[0];
  score[1] = cachedScore[1];
  score[2] = cachedScore[2];
  *cached = true;
}

/* End of code generation (predictOneWithCache.c) */
