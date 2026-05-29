#ifndef ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRSAFETY_H
#define ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRSAFETY_H

#include "EGR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EGR_safety_check(const VehicleState* vs, const EGR_State* state);
void EGR_safety_enter_failsoft(EGR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRSAFETY_H */
