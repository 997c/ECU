#ifndef ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSSAFETY_H
#define ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSSAFETY_H

#include "MRS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool MRS_safety_check(const VehicleState* vs, const MRS_State* state);
void MRS_safety_enter_failsoft(MRS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSSAFETY_H */
