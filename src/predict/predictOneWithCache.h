/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictOneWithCache.h
 *
 * Code generation for function 'predictOneWithCache'
 *
 */

#ifndef PREDICTONEWITHCACHE_H
#define PREDICTONEWITHCACHE_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
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
                         double score[3]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (predictOneWithCache.h) */
