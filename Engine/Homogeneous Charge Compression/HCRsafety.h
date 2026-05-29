#ifndef ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRSAFETY_H
#define ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRSAFETY_H

#include "HCR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool HCR_safety_check(const VehicleState* vs, const HCR_State* state);
void HCR_safety_enter_failsoft(HCR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRSAFETY_H */
