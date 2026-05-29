#ifndef ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTSAFETY_H
#define ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTSAFETY_H

#include "TST.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TST_safety_check(const VehicleState* vs, const TST_State* state);
void TST_safety_enter_failsoft(TST_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTSAFETY_H */
