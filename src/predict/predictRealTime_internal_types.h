/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictRealTime_internal_types.h
 *
 * Code generation for function 'predictRealTime'
 *
 */

#ifndef PREDICTREALTIME_INTERNAL_TYPES_H
#define PREDICTREALTIME_INTERNAL_TYPES_H

/* Include files */
#include "predictRealTime_types.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef c_enum_c_classreg_learning_code
#define c_enum_c_classreg_learning_code
enum c_classreg_learning_coderutils_
{
  Logit = 0, /* Default value */
  Doublelogit,
  Invlogit,
  Ismax,
  Sign,
  Symmetric,
  Symmetricismax,
  Symmetriclogit,
  Identity
};
#endif /* c_enum_c_classreg_learning_code */
#ifndef c_typedef_c_classreg_learning_c
#define c_typedef_c_classreg_learning_c
typedef enum c_classreg_learning_coderutils_ c_classreg_learning_coderutils_;
#endif /* c_typedef_c_classreg_learning_c */

#endif
/* End of code generation (predictRealTime_internal_types.h) */
