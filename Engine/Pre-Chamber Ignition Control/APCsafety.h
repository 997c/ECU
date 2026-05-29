#ifndef ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCSAFETY_H
#define ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCSAFETY_H

#include "APC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool APC_safety_check(const VehicleState* vs, const APC_State* state);
void APC_safety_enter_failsoft(APC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCSAFETY_H */
