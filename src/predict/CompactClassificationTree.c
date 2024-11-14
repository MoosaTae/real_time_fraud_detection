/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationTree.c
 *
 * Code generation for function 'CompactClassificationTree'
 *
 */

/* Include files */
#include "CompactClassificationTree.h"
#include "predictRealTime_data.h"
#include "predictRealTime_internal_types.h"
#include "predictRealTime_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
c_classreg_learning_coderutils_ ab_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.38758523922312915, 0.4189499565329094,  0.31448272131856259,
      0.26647659089755532, 0.1440913986327122,  0.551722768008951,
      0.34593816987931547, 0.43695864483437841, 0.13379451067248652};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ac_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.3718010704644919,  0.0,
                               0.45233612479914181, 0.27708430204533113,
                               0.49346223749235824, 0.2302151287901941,
                               0.35111462749017691, 0.50653776250764182,
                               0.31744874641066412};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ad_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36355631026661045, 0.38062514480753484, 0.34836000216077428,
      0.28613934896263132, 0.12649782976379045, 0.42826748937038789,
      0.35030434077075817, 0.49287702542867479, 0.22337250846883788};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ae_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35872040077232792, 0.35681015516608328, 0.36699887070641879,
      0.29175775763073841, 0.35908046086445472, 0.0,
      0.34952184159693372, 0.284109383969462,   0.6330011292935811};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ bb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.38789774910153746, 0.0,
                               0.48151964300975814, 0.26601277046349509,
                               0.49672580922657478, 0.21032852973678165,
                               0.34608948043496751, 0.50327419077342528,
                               0.30815182725346024};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ bc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36943291030747755, 0.37836471553397538, 0.36132359657099949,
      0.27862386061688671, 0.11613507563236157, 0.42614975294035362,
      0.35194322907563569, 0.50550020883366309, 0.21252665048864697};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ bd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.36388644391866887, 0.38342149925828739, 0.0,
                               0.28615760706507809, 0.24783534779216598, 1.0,
                               0.3499559490162531,  0.36874315294954657, 0.0};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.2371100094503422;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ be_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.35899786617496959, 0.37721207270274937, 0.0,
                               0.29176773518926763, 0.25583468389193059, 1.0,
                               0.34923439863576278, 0.36695324340532015, 0.0};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.2371100094503422;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ c_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.49391727493917265, 0.634551495016611,    0.10909090909090927,
      0.30656934306569344, 0.099667774086378891, 0.87272727272727257,
      0.19951338199513388, 0.26578073089701,     0.018181818181818209};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9923691166801816;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

void c_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[3], const double obj_Children[6],
    const double obj_CutPoint[3], const bool obj_NanCutPoints[3],
    const int obj_ClassNamesLength[3], const double obj_Cost[9],
    const double obj_ClassProbability[9], const double Xin[7],
    cell_wrap_0 *labels, double scores[3])
{
  double a__1[3];
  double d;
  int i;
  int idx;
  int m;
  bool exitg1;
  m = 0;
  exitg1 = false;
  while (!(exitg1 || (obj_CutPredictorIndex[m] == 0.0))) {
    d = Xin[(int)obj_CutPredictorIndex[m] - 1];
    if (rtIsNaN(d) || obj_NanCutPoints[m]) {
      exitg1 = true;
    } else if (d < obj_CutPoint[m]) {
      m = (int)obj_Children[m << 1] - 1;
    } else {
      m = (int)obj_Children[(m << 1) + 1] - 1;
    }
  }
  for (i = 0; i < 3; i++) {
    scores[i] = obj_ClassProbability[m + 3 * i];
    a__1[i] = (obj_ClassProbability[m] * obj_Cost[3 * i] +
               obj_ClassProbability[m + 3] * obj_Cost[3 * i + 1]) +
              obj_ClassProbability[m + 6] * obj_Cost[3 * i + 2];
  }
  if (!rtIsNaN(a__1[0])) {
    idx = 1;
  } else {
    idx = 0;
    m = 2;
    exitg1 = false;
    while ((!exitg1) && (m < 4)) {
      if (!rtIsNaN(a__1[m - 1])) {
        idx = m;
        exitg1 = true;
      } else {
        m++;
      }
    }
  }
  if (idx == 0) {
    idx = 1;
  } else {
    double ex;
    ex = a__1[idx - 1];
    i = idx + 1;
    for (m = i; m < 4; m++) {
      d = a__1[m - 1];
      if (ex > d) {
        ex = d;
        idx = m;
      }
    }
  }
  m = obj_ClassNamesLength[idx - 1];
  labels->f1.size[0] = 1;
  labels->f1.size[1] = m;
  for (i = 0; i < m; i++) {
    labels->f1.data[i] = cv[(idx + 3 * i) - 1];
  }
}

c_classreg_learning_coderutils_ cb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.38369967464907989, 0.37925208993103149, 0.38792211548358752,
      0.26845615964752995, 0.10021932090887521, 0.42817657933412984,
      0.34784416570339022, 0.52052858916009337, 0.1839013051822827};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ cc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36979930181864418, 0.39298400271990724, 0.31503119900967136,
      0.27880568769647074, 0.17147706737284463, 0.53234292060118316,
      0.35139501048488514, 0.43553892990724813, 0.15262588038914537};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ cd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36366035158387272, 0.38167575429118844, 0.34766075619973946,
      0.2859095326140586,  0.12648423692140226, 0.42749616636954207,
      0.35043011580206868, 0.49184000878740924, 0.22484307743071844};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ d_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.47913053529930388, 0.070750538932367629, 0.68822870511252443,
      0.2880750781748545,  0.62729084095237431,  0.11439028509100381,
      0.23279438652584167, 0.30195862011525809,  0.19738100979647186};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ db_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.38397289085568687, 0.41429192716425511, 0.31328282473779645,
      0.26907665127216152, 0.14874388002254862, 0.549637400934917,
      0.34695045787215162, 0.43696419281319621, 0.13707977432728655};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ dc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.370158214696138,   0.39123112395057591, 0.0,
                               0.27858981732831123, 0.23752032133685411, 1.0,
                               0.35125196797555069, 0.37124855471256996, 0.0};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.2371100094503422;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ dd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36397476116237532, 0.36719173963604584, 0.350362444682656,
      0.28592479880104077, 0.3534969805235168,  0.0,
      0.35010044003658392, 0.2793112798404373,  0.649637555317344};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ e_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.44969752590423173, 0.566375394669807,    0.21449127737028964,
      0.29043441873179088, 0.074191163340707328, 0.72635054755218686,
      0.25986805536397739, 0.35943344198948568,  0.059158175077523432};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ eb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.38432662363609404, 0.13726186073700486, 0.50971725133950463,
      0.26864405788201634, 0.47573517452977754, 0.16354090677475336,
      0.34702931848188967, 0.38700296473321755, 0.32674184188574207};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ec_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36976569242474222, 0.38024243164672861, 0.36029704551236691,
      0.27835945502561271, 0.11601955079032181, 0.4250786966162573,
      0.35187485254964512, 0.50373801756294956, 0.21462425787137565};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ed_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.36422059100042997, 0.0,
                               0.4385520402334977,  0.28611450892552187,
                               0.4836757948283229,  0.24579549057137742,
                               0.34966490007404827, 0.516324205171677,
                               0.31565246919512496};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ f_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.446454364333211,   0.53968349149073547,  0.23470680870488375,
      0.27804375199425452, 0.091280150938996732, 0.70223238498418672,
      0.27550188367253459, 0.36903635757026776,  0.063060806310929446};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9287804583630872;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ fb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.3814486351870231,  0.37832563369161387, 0.38439477540529443,
      0.26950893232271211, 0.10256885349000146, 0.42699488966646465,
      0.34904243249026479, 0.51910551281838468, 0.188610334928241};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ fc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37010030148609246, 0.37997705239593788, 0.3297365013552967,
      0.2785266950020312,  0.34668030738152145, 0.0,
      0.35137300351187634, 0.27334264022254079, 0.67026349864470336};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ fd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36252188301802718, 0.37973449052413843, 0.17043916875401691,
      0.28729394608423375, 0.23870119741544107, 0.829560831245983,
      0.35018417089773912, 0.38156431206042052, 0.0};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4940.815330833575;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ g_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.44349399403221135, 0.5151167634040279,  0.070719210921834641,
      0.27037798496909909, 0.15515309391279841, 0.87008858188063454,
      0.28612802099868956, 0.32973014268317369, 0.059192207197530808};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.082244840612935;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ gb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.38174901451180165, 0.40719875748035156, 0.0,
                               0.27006708383387368, 0.22140525526447091, 1.0,
                               0.34818390165432467, 0.37139598725517758, 0.0};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.2371100094503422;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ gc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.37028181440100627, 0.0,
                               0.44912926414116189, 0.27905030929895835,
                               0.49007123589754681, 0.23411571824695451,
                               0.35066787630003532, 0.50992876410245314,
                               0.31675501761188368};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ gd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36255963954864112, 0.36499082887469347, 0.35224624817488093,
      0.2871362819022289,  0.35482329564816095, 0.0,
      0.35030407854913,    0.28018587547714557, 0.647753751825119};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ h_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.43699385919218731, 0.095069558633854037, 0.61381499201894951,
      0.26581243936615351, 0.535380384441218,    0.12640933363742368,
      0.29719370144165919, 0.36955005692492776,  0.25977567434362686};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ hb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.380935256926842,   0.3799831325853284,  0.38182821053973459,
      0.26966188074098957, 0.10298341062829225, 0.42598194902316416,
      0.34940286233216838, 0.51703345678637935, 0.1921898404371013};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ hc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36808258486895368, 0.38020408297843061, 0.35716659601545753,
      0.28051019220883006, 0.11845568920234013, 0.42644802369639478,
      0.35140722292221627, 0.50134022781922916, 0.21638538028814769};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ hd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36282787261631916, 0.14897019768846861, 0.46737688166359703,
      0.2872882440862547,  0.47703855071634832, 0.19452465011523498,
      0.34988388329742609, 0.37399125159518315, 0.33809846822116796};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ i_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.42291615968915713, 0.49209879255354588, 0.26927900187544412,
      0.26837131291191646, 0.10036152016687036, 0.64147863730093269,
      0.30871252739892635, 0.40753968727958378, 0.089242360823623107};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ib_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.38121700781178386, 0.40893569353372916, 0.31612401486979058,
      0.27016526242380778, 0.15402345667289155, 0.54290610655515315,
      0.34861772976440836, 0.43704084979337932, 0.1409698785750563};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ic_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.368426919572878,   0.376929069821018,   0.33343834687143614,
      0.28063146734151256, 0.34882432905247657, 0.0,
      0.35094161308560945, 0.27424660112650551, 0.66656165312856386};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ id_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36185150368182345, 0.38061036653902858, 0.345196832905001,
      0.28751239850273219, 0.12916577123008852, 0.42809719652172279,
      0.35063609781544436, 0.49022386223088288, 0.22670597057327618};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ j_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.42218707984252374, 0.10669834520017801, 0.585736087927274,
      0.26443313040763622, 0.51366530152208689, 0.1352314509410561,
      0.31337978974984004, 0.37963635327773504, 0.2790324611316698};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ jb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.38155200691754448, 0.0,
                               0.47030374261858221, 0.26984351633119508,
                               0.49321934406558282, 0.21788469534308455,
                               0.34860447675126044, 0.50678065593441712,
                               0.31181156203833316};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ jc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.36863947036621553, 0.0,
                               0.44661784461032761, 0.28106852349946038,
                               0.49045426864217628, 0.23677711872964341,
                               0.35029200613432404, 0.50954573135782377,
                               0.31660503666002904};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ jd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.36217422682722761, 0.0,
                               0.43531016441233139, 0.2875082567772449,
                               0.48357947171692961, 0.24791446164807088,
                               0.35031751639552755, 0.51642052828307028,
                               0.31677537393959776};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ k_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.41222126041836094, 0.47116114108794749, 0.28056868878921565,
      0.26656798692646155, 0.10765113172846903, 0.6215366842558413,
      0.3212107526551774,  0.42118772718358349, 0.09789462695494297};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ kb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37813059969384438, 0.379189628169452,   0.37714323896868773,
      0.27194134916535717, 0.10551027074268762, 0.42710951892191618,
      0.34992805114079845, 0.5153001010878604,  0.19574724210939615};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ kc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36656381499782731, 0.38655678780189945, 0.31412456622786339,
      0.28244844508493816, 0.1830530482731984,  0.54315104249648638,
      0.35098773991723464, 0.4303901639249022,  0.1427243912756504};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9287804583630872;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ kd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36060906651694169, 0.3624018386894049,  0.35298581181229638,
      0.28861045474972463, 0.35648340560915553, 0.0,
      0.35078047873333373, 0.28111475570143951, 0.64701418818770362};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ l_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.41220904009930454, 0.46568388746495903, 0.29136929760429109,
      0.26370950775171076, 0.11305982813251743, 0.60413999776619676,
      0.32408145214898476, 0.42125628440252361, 0.10449070462951214};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ lb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37846223421661535, 0.40303106638665709, 0.31496231002476821,
      0.27235656784477552, 0.16353066138231193, 0.55362499617902,
      0.34918119793860913, 0.43343827223103093, 0.13141269379621193};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9287804583630872;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ lc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36694563968647115, 0.38072542818752664, 0.35458508395530441,
      0.28225251250328087, 0.12035669305449988, 0.427474066432512,
      0.35080184781024804, 0.49891787875797344, 0.21794084961218363};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ld_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36091415076265065, 0.38232698500958157, 0.30980244387417771,
      0.28872328155365135, 0.18892746132938304, 0.526932509401599,
      0.350362567683698,   0.42874555366103539, 0.16326504672422323};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ m_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.41199702722761072, 0.45748454524210913, 0.067572388070955614,
      0.26166729105524961, 0.18075800255732941, 0.87430024426311015,
      0.32633568171713973, 0.36175745220056155, 0.058127367665934217};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.1392438802582525;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ mb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.37884502105031159, 0.0,
                               0.46536114371729265, 0.27206865427935856,
                               0.49510149952916277, 0.22113506421949247,
                               0.34908632467032991, 0.50489850047083717,
                               0.31350379206321483};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ mc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36728790160004982, 0.37451538050712391, 0.33734112561823287,
      0.28233590654692514, 0.35047602321646626, 0.0,
      0.35037619185302504, 0.27500859627640978, 0.66265887438176707};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ md_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36121135381087349, 0.36208398983907314, 0.35747636004461425,
      0.28854592215951225, 0.3559611799147579,  0.0,
      0.35024272402961426, 0.281954830246169,   0.64252363995538575};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ n_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.40939468535967244, 0.11765009428905415, 0.55991717413018249,
      0.26014301879279367, 0.48983539748188265, 0.14163570263305275,
      0.33046229584753389, 0.39251450822906331, 0.29844712323676476};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ nb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37573459018267868, 0.37861479492679379, 0.37306351418252676,
      0.27398858331895293, 0.10782035278383396, 0.42809150724376144,
      0.35027682649836839, 0.51356485228937232, 0.19884497857371175};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ nc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36751403181168563, 0.14677829244603077, 0.47576675371430355,
      0.28270096358440439, 0.47864200504517318, 0.18660800133226543,
      0.34978500460390993, 0.37457970250879608, 0.3376252449534311};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ nd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.36148190281763481, 0.0,
                               0.43398820044855235, 0.2886459789409842,
                               0.481948685171291,   0.24987318439290618,
                               0.34987211824138087, 0.51805131482870892,
                               0.31613861515854152};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ o_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.4024635862173121,  0.44613080630243079, 0.3015874308791972,
      0.26202476280124742, 0.12266560871834299, 0.58395997295780666,
      0.33551165098144037, 0.43120358497922612, 0.11445259616299622};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ob_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37610182002699216, 0.40242463611792906, 0.31418843168872662,
      0.27433068958450085, 0.161423492235628,   0.53989753210985825,
      0.34956749038850693, 0.43615187164644287, 0.14591403620141502};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ oc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.3662410628379375,  0.38462115762619908, 0.1680423863619013,
      0.28301200432994889, 0.23210514404168775, 0.83195761363809873,
      0.35074693283211361, 0.38327369833211322, 0.0};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4940.815330833575;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ od_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35997054888284763, 0.38040952363380243, 0.3418899076971289,
      0.28971718414960018, 0.1308256801748181,  0.43027512826532172,
      0.35031226696755213, 0.48876479619137941, 0.22783496403754946};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ p_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.40260405783155928, 0.12510148447114589, 0.545632179205292,
      0.26077836894626621, 0.48086122566131734, 0.1473450513329003,
      0.3366175732221745,  0.39403728986753672, 0.30702276946180773};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ pb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37646453894104448, 0.14153751809458789, 0.49373492935448005,
      0.27403903130371549, 0.47790073852864912, 0.17227576069108336,
      0.34949642975524003, 0.38056174337676296, 0.33398930995443665};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ pc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.3662124280842679,  0.37250856443595559, 0.3399715777582743,
      0.28285143973801347, 0.35071780876712816, 0.0,
      0.35093613217771868, 0.27677362679691636, 0.66002842224172575};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ pd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36031354948855548, 0.36041415825104806, 0.35988159739295233,
      0.28967638925288963, 0.35714679475078775, 0.0,
      0.35001006125855483, 0.28243904699816419, 0.64011840260704767};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ q_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.39707347783431496, 0.43622487431583273, 0.30666894966662184,
      0.26241718655463159, 0.12760285705138577, 0.57371708756169615,
      0.34050933561105351, 0.43617226863278147, 0.11961396277168224};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ qb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37442738931961289, 0.37825392704391386, 0.37089623251645337,
      0.27460733189904352, 0.10975438929900715, 0.4267348246154915,
      0.35096527878134354, 0.51199168365707892, 0.20236894286805515};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ qc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.36645044222258505, 0.0,
                               0.4431649314250341,  0.28317552126557693,
                               0.48845237335323211, 0.24020188270894566,
                               0.35037403651183796, 0.51154762664676789,
                               0.31663318586602029};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ qd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.36059232987162237, 0.0,
                               0.43246528577647569, 0.28974623494739687,
                               0.48242681405519,    0.25134130611580963,
                               0.34966143518098064, 0.51757318594481,
                               0.31619340810771474};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ r_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.39738953456737125, 0.43405918836089841, 0.31226898961984634,
      0.26145018688331695, 0.13126060075787044, 0.56365670838166837,
      0.3411602785493118,  0.43468021088123127, 0.12407430199848513};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ rb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.3747885620977916,  0.39777580308493687, 0.0,
                               0.27492325311257049, 0.23045147462076146, 1.0,
                               0.35028818478963791, 0.37177272229430169, 0.0};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.2371100094503422;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ rc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36453845396820406, 0.37940666430150183, 0.3512190634566697,
      0.28446878332445646, 0.12356760408761253, 0.42860890456167838,
      0.35099276270733948, 0.49702573161088565, 0.22017203198165186};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ rd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35914265049339733, 0.367566614896503,   0.30601267521962722,
      0.29077340444716249, 0.23132181540022037, 0.66573480087541559,
      0.35008394505944007, 0.40111156970327655, 0.028252523904957128};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4769.2056135514867;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ s_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.39757225241011623, 0.1329159811181882,  0.53397647928087921,
      0.26074095185528839, 0.472002622757133,   0.15185637962837473,
      0.34168679573459537, 0.39508139612467869, 0.31416714109074606};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ sb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37424755253117126, 0.37976348419204486, 0.36918064791236843,
      0.27461827895819896, 0.11006373963329184, 0.42577717769228085,
      0.35113416851062984, 0.51017277617466339, 0.20504217439535072};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ sc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36490065519687231, 0.38730606991216465, 0.3116315603597366,
      0.28451529769409106, 0.18116486581973423, 0.530231970513208,
      0.35058404710903657, 0.43152906426810111, 0.15813646912705545};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ sd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35944646112732481, 0.35884024282907179, 0.3620561813776943,
      0.29080987290750587, 0.35836280937422815, 0.0,
      0.34974366596516931, 0.28279694779670006, 0.63794381862230576};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ t_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.39308417504064108, 0.42640204764595374, 0.31586266362698562,
      0.26219157762962819, 0.13547187367674354, 0.55589241444632642,
      0.34472424732973067, 0.43812607867730274, 0.12824492192668785};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ tb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.37458504325318071, 0.0,
                               0.45764262927078359, 0.27490627914154792,
                               0.49256716664369032, 0.22664383991180573,
                               0.35050867760527121, 0.50743283335630973,
                               0.31571353081741055};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ tc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36522759722737624, 0.37040382230057423, 0.34352987688811659,
      0.28431470229276595, 0.3521410392385747,  0.0,
      0.35045770047985775, 0.27745513846085096, 0.65647012311188346};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ td_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35973332467031882, 0.38105451427403492, 0.34086579283960927,
      0.29085167363426617, 0.13340507006407354, 0.4301792092788953,
      0.34941500169541512, 0.48554041566189154, 0.2289549978814954};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ u_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.3933768459549411,  0.38178899431855617,  0.40459382966566493,
      0.26163616968889436, 0.092167450173490165, 0.42568106135052391,
      0.34498698435616448, 0.52604355550795368,  0.16972510898381116};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ub_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37192819086805268, 0.39375337444177944, 0.31498237209577179,
      0.27661067577460358, 0.17241177806364696, 0.54848429027481227,
      0.35146113335734375, 0.43383484749457363, 0.136533337629416};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9287804583630872;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ uc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36547450186020275, 0.14798439051709797, 0.47227831813426979,
      0.28458265255661197, 0.47746705735930495, 0.18986206776560746,
      0.34994284558318522, 0.37454855212359706, 0.33785961410012272};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ ud_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36004811184242858, 0.15000091910570518, 0.46231319618112,
      0.29080400440313392, 0.4776878055373498,  0.19981641520702037,
      0.34914788375443756, 0.37231127535694508, 0.33787038861185975};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ v_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.39339834439391541, 0.42998610384169739, 0.080531853645153445,
      0.26265754337323294, 0.19508771308339262, 0.84045558300021184,
      0.3439441122328516,  0.37492618307491,    0.07901256335463476};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 3.1392438802582525;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ vb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37234959820338992, 0.3793745519175093,  0.36592532809892403,
      0.27637804709072128, 0.11214312805737212, 0.42656971003856448,
      0.35127235470588875, 0.50848232002511862, 0.20750496186251155};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ vc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36433500069848518, 0.38009732909535837, 0.35026023789251359,
      0.28485708870828019, 0.12492754980066961, 0.42766405663311707,
      0.35080791059323474, 0.494975121103972,   0.22207570547436942};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ vd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35922057841032756, 0.38036149617406995, 0.30876738832725575,
      0.29097362636950108, 0.19248269336441215, 0.5260240541653638,
      0.34980579522017136, 0.4271558104615179,  0.16520855750738039};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9206883558857042;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ w_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.39212676577392513, 0.38259584326299539,  0.40129790500167178,
      0.26206253892644765, 0.093738668160580338, 0.42403234325300621,
      0.3458106952996271,  0.52366548857642425,  0.17466975174532204};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ wb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37270655690772914, 0.14476584514441879, 0.48519763239269137,
      0.27661512365491542, 0.47766546183445613, 0.17739472290475786,
      0.35067831943735545, 0.37756869302112506, 0.3374076447025508};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 1.9565035941536907E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 6.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ wc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.3646723578176857,  0.0,
                               0.44011121893591121, 0.28489775803549855,
                               0.48784309181848889, 0.24291496300966606,
                               0.35042988414681575, 0.51215690818151116,
                               0.31697381805442276};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ wd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35950518200267234, 0.35825660310282137, 0.36490301610907311,
      0.29080009081899388, 0.35806537728653481, 0.0,
      0.34969472717833389, 0.28367801961064393, 0.635096983890927};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ x_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.39215383475312321, 0.0,
                               0.48876053453041834, 0.26299208650253475,
                               0.49491838397054611, 0.20585727815861779,
                               0.3448540787443421,  0.50508161602945389,
                               0.30538218731096395};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ xb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37105070330830475, 0.37864449965112534, 0.36412860982337508,
      0.27706793863722473, 0.11422996392498984, 0.42550221748386846,
      0.35188135805447046, 0.50712553642388492, 0.21036917269275632};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ xc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36290024631587148, 0.36729429933668672, 0.34442089458109587,
      0.28610793968897613, 0.35413919287972806, 0.0,
      0.35099181399515234, 0.2785665077835851,  0.65557910541890418};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 9.5154397808288525E-6;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 5.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ xd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {0.35977642475385357, 0.0,
                               0.43080235548913071, 0.29083277974347088,
                               0.48103655478616758, 0.25328334842369116,
                               0.34939079550267566, 0.51896344521383242,
                               0.31591429608717814};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 0.12738106709753372;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 1.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ y_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.38740621705742095, 0.38048017922928756,  0.394027941410208,
      0.26572064946850865, 0.097386164081996421, 0.42665892167518266,
      0.34687313347407028, 0.522133656688716,    0.17931313691460937};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ yb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.37140579993492912, 0.39234087526679629, 0.31693851076561963,
      0.27728959684684013, 0.17437358631789998, 0.54504865750322784,
      0.3513046032182307,  0.43328553841530359, 0.1380128317311525};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9287804583630872;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ yc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.36319640967366273, 0.38220855953539418, 0.313393805314207,
      0.28632174411657196, 0.18951335657627275, 0.5399127297973072,
      0.35048184620976519, 0.42827808388833311, 0.14669346488848581};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 2.9287804583630872;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 3.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

c_classreg_learning_coderutils_ yd_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[3], double obj_Children[6],
    double obj_CutPoint[3], bool obj_NanCutPoints[3], bool obj_InfCutPoints[3],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9],
    double obj_ClassProbability[9])
{
  static const double dv[9] = {
      0.35839555695906955, 0.380430735586051,   0.3389538392894374,
      0.29181770488904979, 0.13452524442364414, 0.43059741072659291,
      0.34978673815188072, 0.48504401999030478, 0.23044874998396961};
  static const signed char b_iv[6] = {2, 3, 0, 0, 0, 0};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_CutPoint[0] = 4358.1525095327888;
  obj_NanCutPoints[0] = false;
  obj_CutPoint[1] = 0.0;
  obj_NanCutPoints[1] = true;
  obj_CutPoint[2] = 0.0;
  obj_NanCutPoints[2] = true;
  memcpy(&obj_ClassProbability[0], &dv[0], 9U * sizeof(double));
  obj_ScoreTransform = Identity;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_CutPredictorIndex[0] = 4.0;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_CutPredictorIndex[1] = 0.0;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_CutPredictorIndex[2] = 0.0;
  for (i = 0; i < 6; i++) {
    obj_Children[i] = b_iv[i];
  }
  obj_InfCutPoints[0] = false;
  obj_Prior[0] = 0.49391727493917276;
  obj_InfCutPoints[1] = false;
  obj_Prior[1] = 0.30656934306569344;
  obj_InfCutPoints[2] = false;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

/* End of code generation (CompactClassificationTree.c) */
