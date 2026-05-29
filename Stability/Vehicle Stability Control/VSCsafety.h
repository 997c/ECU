#ifndef ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCSAFETY_H
#define ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCSAFETY_H

#include "VSC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VSC_safety_check(const VehicleState* vs, const VSC_State* state);
void VSC_safety_enter_failsoft(VSC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCSAFETY_H */
