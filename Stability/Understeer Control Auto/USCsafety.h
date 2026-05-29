#ifndef ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCSAFETY_H
#define ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCSAFETY_H

#include "USC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool USC_safety_check(const VehicleState* vs, const USC_State* state);
void USC_safety_enter_failsoft(USC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCSAFETY_H */
