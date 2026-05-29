#ifndef ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSSAFETY_H
#define ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSSAFETY_H

#include "OGS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool OGS_safety_check(const VehicleState* vs, const OGS_State* state);
void OGS_safety_enter_failsoft(OGS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_OPTIMAL_GEAR_SELECTION_AUTO_OGSSAFETY_H */
