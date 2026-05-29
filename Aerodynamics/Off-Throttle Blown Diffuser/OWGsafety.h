#ifndef ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGSAFETY_H
#define ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGSAFETY_H

#include "OWG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool OWG_safety_check(const VehicleState* vs, const OWG_State* state);
void OWG_safety_enter_failsoft(OWG_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_OFF_THROTTLE_BLOWN_DIFFUSER_OWGSAFETY_H */
