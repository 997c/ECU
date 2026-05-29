#ifndef ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTSAFETY_H
#define ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTSAFETY_H

#include "ECT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ECT_safety_check(const VehicleState* vs, const ECT_State* state);
void ECT_safety_enter_failsoft(ECT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTSAFETY_H */
