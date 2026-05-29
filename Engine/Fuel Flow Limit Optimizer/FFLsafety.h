#ifndef ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLSAFETY_H
#define ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLSAFETY_H

#include "FFL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FFL_safety_check(const VehicleState* vs, const FFL_State* state);
void FFL_safety_enter_failsoft(FFL_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLSAFETY_H */
