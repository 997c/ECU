#ifndef ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMSAFETY_H
#define ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMSAFETY_H

#include "EBM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EBM_safety_check(const VehicleState* vs, const EBM_State* state);
void EBM_safety_enter_failsoft(EBM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMSAFETY_H */
