/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationEnsemble.h
 *
 * Code generation for function 'CompactClassificationEnsemble'
 *
 */

#ifndef COMPACTCLASSIFICATIONENSEMBLE_H
#define COMPACTCLASSIFICATIONENSEMBLE_H

/* Include files */
#include "predictRealTime_internal_types.h"
#include "predictRealTime_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
c_classreg_learning_coderutils_ c_CompactClassificationEnsemble(
    bool obj_IsCached[100], double obj_LearnerWeights[100],
    int obj_ClassNamesLength[3], double obj_Prior[3],
    bool obj_ClassLogicalIndices[3], double obj_Cost[9]);

void d_CompactClassificationEnsemble(const bool obj_IsCached[100],
                                     const double obj_LearnerWeights[100],
                                     const int obj_ClassNamesLength[3],
                                     const double obj_Prior[3],
                                     const double Xin[7], cell_wrap_0 *labels,
                                     double score[3]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (CompactClassificationEnsemble.h) */
