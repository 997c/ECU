#ifndef ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMSAFETY_H
#define ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMSAFETY_H

#include "OTM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool OTM_safety_check(const VehicleState* vs, const OTM_State* state);
void OTM_safety_enter_failsoft(OTM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_OIL_THERMAL_MANAGEMENT_OTMSAFETY_H */
