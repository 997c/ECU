#ifndef ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLSAFETY_H
#define ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLSAFETY_H

#include "AFL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AFL_safety_check(const VehicleState* vs, const AFL_State* state);
void AFL_safety_enter_failsoft(AFL_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLSAFETY_H */
