/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictRealTime_types.h
 *
 * Code generation for function 'predictRealTime'
 *
 */

#ifndef PREDICTREALTIME_TYPES_H
#define PREDICTREALTIME_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x12
#define struct_emxArray_char_T_1x12
struct emxArray_char_T_1x12 {
  char data[12];
  int size[2];
};
#endif /* struct_emxArray_char_T_1x12 */
#ifndef typedef_emxArray_char_T_1x12
#define typedef_emxArray_char_T_1x12
typedef struct emxArray_char_T_1x12 emxArray_char_T_1x12;
#endif /* typedef_emxArray_char_T_1x12 */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  emxArray_char_T_1x12 f1;
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

#endif
/* End of code generation (predictRealTime_types.h) */
