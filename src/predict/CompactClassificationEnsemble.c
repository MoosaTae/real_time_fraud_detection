/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationEnsemble.c
 *
 * Code generation for function 'CompactClassificationEnsemble'
 *
 */

/* Include files */
#include "CompactClassificationEnsemble.h"
#include "CompactEnsemble.h"
#include "minOrMax.h"
#include "predictRealTime_data.h"
#include "predictRealTime_internal_types.h"
#include "predictRealTime_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
c_classreg_learning_coderutils_ c_CompactClassificationEnsemble(
    bool obj_IsCached[100], double obj_LearnerWeights[100],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9])
{
  static const double dv[100] = {
      0.35582303938081744,  0.27563757479180268,  0.23688557989757311,
      0.19095388429490556,  0.1726191156444617,   0.16547290965252531,
      0.13571283279664728,  0.13312077763164154,  0.11614933392400359,
      0.10330350296483488,  0.11126253128494988,  0.106890718956905,
      0.085807202914647759, 0.093119652213477719, 0.077734310234884765,
      0.071401718725696,    0.0817603444634628,   0.065606184516100591,
      0.085129310761604349, 0.080581967706365568, 0.080134230113143815,
      0.083475692866257209, 0.0756524188854294,   0.057154239847063519,
      0.077517740892082951, 0.071419224754700278, 0.053267679305885988,
      0.064166141901082413, 0.067336125285128237, 0.073272334175851273,
      0.0642704673604764,   0.047581103563959108, 0.068608142108805462,
      0.061105652487977426, 0.046014400479503975, 0.064700954649423423,
      0.058316738206604039, 0.04228090898984356,  0.052895079518777317,
      0.055386425259032944, 0.064015909976871774, 0.053215154046311955,
      0.058783924224634007, 0.039822974260286678, 0.051036819430164665,
      0.046890316714340956, 0.048770686854785909, 0.037611664411779537,
      0.054691355971204489, 0.046905768685024336, 0.034569171368542977,
      0.057170548731846904, 0.045201690863725115, 0.049051651947761309,
      0.051972355688899095, 0.0433343027180498,   0.047139740170007938,
      0.050063651251080379, 0.032907368899698211, 0.041595949053288582,
      0.045223867028956685, 0.039806484909896439, 0.053084736403629651,
      0.043529897322709052, 0.047553467668603515, 0.039447532998976208,
      0.029113834976622822, 0.041912216233079592, 0.037096505461498522,
      0.037685731456868682, 0.045225823929207216, 0.040957366801421979,
      0.029046765510187623, 0.0363331811822989,   0.050864278595290975,
      0.03534589574771288,  0.03868062191944624,  0.043680689332096768,
      0.0486106086013266,   0.0377769551887521,   0.033643515633224083,
      0.033706198522360578, 0.041616653864277257, 0.037072505867315642,
      0.024755989062463544, 0.035511796933669453, 0.040559464523552774,
      0.03283432403249871,  0.034638799754481892, 0.03941696800911644,
      0.041249635252046071, 0.033877070021174904, 0.031064621639026263,
      0.03023612064357081,  0.023077067527476743, 0.032675018533499509,
      0.038004151537298525, 0.030266791442517545, 0.03197314323829295,
      0.046204274292415332};
  int i;
  c_classreg_learning_coderutils_ obj_ScoreTransform;
  obj_ClassNamesLength[0] = 6;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 12;
  obj_ClassLogicalIndices[1] = true;
  obj_ClassNamesLength[2] = 6;
  obj_ClassLogicalIndices[2] = true;
  obj_ScoreTransform = Identity;
  for (i = 0; i < 100; i++) {
    obj_LearnerWeights[i] = dv[i];
    obj_IsCached[i] = false;
  }
  obj_Prior[0] = 0.49391727493917276;
  obj_Prior[1] = 0.30656934306569344;
  obj_Prior[2] = 0.19951338199513383;
  for (i = 0; i < 9; i++) {
    obj_Cost[i] = iv[i];
  }
  return obj_ScoreTransform;
}

void d_CompactClassificationEnsemble(const bool obj_IsCached[100],
                                     const double obj_LearnerWeights[100],
                                     const int obj_ClassNamesLength[3],
                                     const double obj_Prior[3],
                                     const double Xin[7], cell_wrap_0 *labels,
                                     double score[3])
{
  int i;
  int iindx;
  int k;
  bool b[3];
  bool exitg1;
  bool y;
  CompactEnsemble_ensemblePredict(obj_IsCached, obj_LearnerWeights, Xin, score);
  b[0] = rtIsNaN(score[0]);
  b[1] = rtIsNaN(score[1]);
  b[2] = rtIsNaN(score[2]);
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!b[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  maximum(obj_Prior, &iindx);
  k = obj_ClassNamesLength[iindx - 1];
  labels->f1.size[0] = 1;
  labels->f1.size[1] = k;
  for (i = 0; i < k; i++) {
    labels->f1.data[i] = cv[(iindx + 3 * i) - 1];
  }
  if (!y) {
    maximum(score, &iindx);
    i = iindx;
    if (iindx < 0) {
      i = 0;
    }
    k = obj_ClassNamesLength[i - 1];
    if (iindx < 0) {
      iindx = 0;
    }
    labels->f1.size[0] = 1;
    labels->f1.size[1] = k;
    for (i = 0; i < k; i++) {
      labels->f1.data[i] = cv[(iindx + 3 * i) - 1];
    }
  }
}

/* End of code generation (CompactClassificationEnsemble.c) */
