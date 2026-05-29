#ifndef ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSSAFETY_H
#define ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSSAFETY_H

#include "EPS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EPS_safety_check(const VehicleState* vs, const EPS_State* state);
void EPS_safety_enter_failsoft(EPS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSSAFETY_H */
