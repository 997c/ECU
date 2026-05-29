#ifndef ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDSAFETY_H
#define ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDSAFETY_H

#include "BSD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool BSD_safety_check(const VehicleState* vs, const BSD_State* state);
void BSD_safety_enter_failsoft(BSD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDSAFETY_H */
