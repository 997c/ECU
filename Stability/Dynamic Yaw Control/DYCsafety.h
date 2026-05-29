#ifndef ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCSAFETY_H
#define ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCSAFETY_H

#include "DYC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DYC_safety_check(const VehicleState* vs, const DYC_State* state);
void DYC_safety_enter_failsoft(DYC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCSAFETY_H */
