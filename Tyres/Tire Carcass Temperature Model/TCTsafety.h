#ifndef ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTSAFETY_H
#define ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTSAFETY_H

#include "TCT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TCT_safety_check(const VehicleState* vs, const TCT_State* state);
void TCT_safety_enter_failsoft(TCT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTSAFETY_H */
