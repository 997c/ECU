#ifndef ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCSAFETY_H
#define ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCSAFETY_H

#include "OVC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool OVC_safety_check(const VehicleState* vs, const OVC_State* state);
void OVC_safety_enter_failsoft(OVC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCSAFETY_H */
