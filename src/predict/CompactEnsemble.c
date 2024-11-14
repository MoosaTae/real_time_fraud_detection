/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactEnsemble.c
 *
 * Code generation for function 'CompactEnsemble'
 *
 */

/* Include files */
#include "CompactEnsemble.h"
#include "CompactClassificationTree.h"
#include "predictOneWithCache.h"
#include "predictRealTime_internal_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void CompactEnsemble_ensemblePredict(const bool obj_IsCached[100],
                                     const double obj_LearnerWeights[100],
                                     const double X[7], double score[3])
{
  double weak_learner_ClassProbability[9];
  double weak_learner_Cost[9];
  double weak_learner_Children[6];
  double cachedScore[3];
  double unusedExpr[3];
  double weak_learner_CutPoint[3];
  double weak_learner_CutPredictorIndex[3];
  double cachedWeights;
  int weak_learner_ClassNamesLength[3];
  bool b_expl_temp[3];
  bool expl_temp[3];
  bool weak_learner_NanCutPoints[3];
  bool b;
  c_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  cachedScore[0] = 0.0;
  cachedScore[1] = 0.0;
  cachedScore[2] = 0.0;
  cachedWeights = 0.0;
  b = false;
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[0], &b,
                      true, unusedExpr);
  d_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[1];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[1], &b,
                      false, unusedExpr);
  e_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[2];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[2], &b,
                      false, unusedExpr);
  f_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[3];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[3], &b,
                      false, unusedExpr);
  g_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[4];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[4], &b,
                      false, unusedExpr);
  h_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[5];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[5], &b,
                      false, unusedExpr);
  i_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[6];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[6], &b,
                      false, unusedExpr);
  j_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[7];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[7], &b,
                      false, unusedExpr);
  k_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[8];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[8], &b,
                      false, unusedExpr);
  l_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[9];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[9], &b,
                      false, unusedExpr);
  m_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[10];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[10], &b,
                      false, unusedExpr);
  n_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[11];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[11], &b,
                      false, unusedExpr);
  o_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[12];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[12], &b,
                      false, unusedExpr);
  p_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[13];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[13], &b,
                      false, unusedExpr);
  q_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[14];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[14], &b,
                      false, unusedExpr);
  r_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[15];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[15], &b,
                      false, unusedExpr);
  s_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[16];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[16], &b,
                      false, unusedExpr);
  t_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[17];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[17], &b,
                      false, unusedExpr);
  u_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[18];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[18], &b,
                      false, unusedExpr);
  v_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[19];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[19], &b,
                      false, unusedExpr);
  w_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[20];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[20], &b,
                      false, unusedExpr);
  x_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[21];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[21], &b,
                      false, unusedExpr);
  y_CompactClassificationTree_Com(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[22];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[22], &b,
                      false, unusedExpr);
  ab_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[23];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[23], &b,
                      false, unusedExpr);
  bb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[24];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[24], &b,
                      false, unusedExpr);
  cb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[25];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[25], &b,
                      false, unusedExpr);
  db_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[26];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[26], &b,
                      false, unusedExpr);
  eb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[27];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[27], &b,
                      false, unusedExpr);
  fb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[28];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[28], &b,
                      false, unusedExpr);
  gb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[29];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[29], &b,
                      false, unusedExpr);
  hb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[30];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[30], &b,
                      false, unusedExpr);
  ib_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[31];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[31], &b,
                      false, unusedExpr);
  jb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[32];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[32], &b,
                      false, unusedExpr);
  kb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[33];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[33], &b,
                      false, unusedExpr);
  lb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[34];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[34], &b,
                      false, unusedExpr);
  mb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[35];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[35], &b,
                      false, unusedExpr);
  nb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[36];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[36], &b,
                      false, unusedExpr);
  ob_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[37];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[37], &b,
                      false, unusedExpr);
  pb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[38];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[38], &b,
                      false, unusedExpr);
  qb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[39];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[39], &b,
                      false, unusedExpr);
  rb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[40];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[40], &b,
                      false, unusedExpr);
  sb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[41];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[41], &b,
                      false, unusedExpr);
  tb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[42];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[42], &b,
                      false, unusedExpr);
  ub_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[43];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[43], &b,
                      false, unusedExpr);
  vb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[44];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[44], &b,
                      false, unusedExpr);
  wb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[45];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[45], &b,
                      false, unusedExpr);
  xb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[46];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[46], &b,
                      false, unusedExpr);
  yb_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[47];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[47], &b,
                      false, unusedExpr);
  ac_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[48];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[48], &b,
                      false, unusedExpr);
  bc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[49];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[49], &b,
                      false, unusedExpr);
  cc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[50];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[50], &b,
                      false, unusedExpr);
  dc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[51];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[51], &b,
                      false, unusedExpr);
  ec_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[52];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[52], &b,
                      false, unusedExpr);
  fc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[53];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[53], &b,
                      false, unusedExpr);
  gc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[54];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[54], &b,
                      false, unusedExpr);
  hc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[55];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[55], &b,
                      false, unusedExpr);
  ic_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[56];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[56], &b,
                      false, unusedExpr);
  jc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[57];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[57], &b,
                      false, unusedExpr);
  kc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[58];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[58], &b,
                      false, unusedExpr);
  lc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[59];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[59], &b,
                      false, unusedExpr);
  mc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[60];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[60], &b,
                      false, unusedExpr);
  nc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[61];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[61], &b,
                      false, unusedExpr);
  oc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[62];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[62], &b,
                      false, unusedExpr);
  pc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[63];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[63], &b,
                      false, unusedExpr);
  qc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[64];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[64], &b,
                      false, unusedExpr);
  rc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[65];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[65], &b,
                      false, unusedExpr);
  sc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[66];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[66], &b,
                      false, unusedExpr);
  tc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[67];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[67], &b,
                      false, unusedExpr);
  uc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[68];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[68], &b,
                      false, unusedExpr);
  vc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[69];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[69], &b,
                      false, unusedExpr);
  wc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[70];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[70], &b,
                      false, unusedExpr);
  xc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[71];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[71], &b,
                      false, unusedExpr);
  yc_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[72];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[72], &b,
                      false, unusedExpr);
  ad_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[73];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[73], &b,
                      false, unusedExpr);
  bd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[74];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[74], &b,
                      false, unusedExpr);
  cd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[75];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[75], &b,
                      false, unusedExpr);
  dd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[76];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[76], &b,
                      false, unusedExpr);
  ed_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[77];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[77], &b,
                      false, unusedExpr);
  fd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[78];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[78], &b,
                      false, unusedExpr);
  gd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[79];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[79], &b,
                      false, unusedExpr);
  hd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[80];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[80], &b,
                      false, unusedExpr);
  id_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[81];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[81], &b,
                      false, unusedExpr);
  jd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[82];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[82], &b,
                      false, unusedExpr);
  kd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[83];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[83], &b,
                      false, unusedExpr);
  ld_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[84];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[84], &b,
                      false, unusedExpr);
  md_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[85];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[85], &b,
                      false, unusedExpr);
  nd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[86];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[86], &b,
                      false, unusedExpr);
  od_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[87];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[87], &b,
                      false, unusedExpr);
  pd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[88];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[88], &b,
                      false, unusedExpr);
  qd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[89];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[89], &b,
                      false, unusedExpr);
  rd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[90];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[90], &b,
                      false, unusedExpr);
  sd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[91];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[91], &b,
                      false, unusedExpr);
  td_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[92];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[92], &b,
                      false, unusedExpr);
  ud_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[93];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[93], &b,
                      false, unusedExpr);
  vd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[94];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[94], &b,
                      false, unusedExpr);
  wd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[95];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[95], &b,
                      false, unusedExpr);
  xd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[96];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[96], &b,
                      false, unusedExpr);
  yd_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[97];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[97], &b,
                      false, unusedExpr);
  ae_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[98];
  predictOneWithCache(X, cachedScore, &cachedWeights,
                      weak_learner_CutPredictorIndex, weak_learner_Children,
                      weak_learner_CutPoint, weak_learner_NanCutPoints,
                      weak_learner_ClassNamesLength, weak_learner_Cost,
                      weak_learner_ClassProbability, obj_LearnerWeights[98], &b,
                      false, unusedExpr);
  be_CompactClassificationTree_Co(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, expl_temp,
      weak_learner_ClassNamesLength, unusedExpr, b_expl_temp, weak_learner_Cost,
      weak_learner_ClassProbability);
  b = obj_IsCached[99];
  predictOneWithCache(
      X, cachedScore, &cachedWeights, weak_learner_CutPredictorIndex,
      weak_learner_Children, weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, obj_LearnerWeights[99], &b, false, score);
}

/* End of code generation (CompactEnsemble.c) */
