#ifndef ECU_ENGINE_FUEL_INJECTION_CONTROL_FICSAFETY_H
#define ECU_ENGINE_FUEL_INJECTION_CONTROL_FICSAFETY_H

#include "FIC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FIC_safety_check(const VehicleState* vs, const FIC_State* state);
void FIC_safety_enter_failsoft(FIC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_INJECTION_CONTROL_FICSAFETY_H */
