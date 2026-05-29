#ifndef ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBSAFETY_H
#define ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBSAFETY_H

#include "ERB.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ERB_safety_check(const VehicleState* vs, const ERB_State* state);
void ERB_safety_enter_failsoft(ERB_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBSAFETY_H */
