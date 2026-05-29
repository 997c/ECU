#ifndef ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMSAFETY_H
#define ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMSAFETY_H

#include "AIM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AIM_safety_check(const VehicleState* vs, const AIM_State* state);
void AIM_safety_enter_failsoft(AIM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_INTAKE_MANIFOLD_AIMSAFETY_H */
