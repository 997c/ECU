#ifndef ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFESAFETY_H
#define ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFESAFETY_H

#include "TFE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TFE_safety_check(const VehicleState* vs, const TFE_State* state);
void TFE_safety_enter_failsoft(TFE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFESAFETY_H */
