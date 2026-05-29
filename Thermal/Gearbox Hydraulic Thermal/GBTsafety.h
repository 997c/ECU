#ifndef ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTSAFETY_H
#define ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTSAFETY_H

#include "GBT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool GBT_safety_check(const VehicleState* vs, const GBT_State* state);
void GBT_safety_enter_failsoft(GBT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_GEARBOX_HYDRAULIC_THERMAL_GBTSAFETY_H */
