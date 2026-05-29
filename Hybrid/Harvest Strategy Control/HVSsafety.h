#ifndef ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSSAFETY_H
#define ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSSAFETY_H

#include "HVS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool HVS_safety_check(const VehicleState* vs, const HVS_State* state);
void HVS_safety_enter_failsoft(HVS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSSAFETY_H */
