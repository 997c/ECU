#ifndef ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBASAFETY_H
#define ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBASAFETY_H

#include "HBA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool HBA_safety_check(const VehicleState* vs, const HBA_State* state);
void HBA_safety_enter_failsoft(HBA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBASAFETY_H */
