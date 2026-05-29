#ifndef ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSESAFETY_H
#define ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSESAFETY_H

#include "VSE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VSE_safety_check(const VehicleState* vs, const VSE_State* state);
void VSE_safety_enter_failsoft(VSE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSESAFETY_H */
