#ifndef ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICSAFETY_H
#define ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICSAFETY_H

#include "FRIC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FRIC_safety_check(const VehicleState* vs, const FRIC_State* state);
void FRIC_safety_enter_failsoft(FRIC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICSAFETY_H */
