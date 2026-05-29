#ifndef ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCSAFETY_H
#define ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCSAFETY_H

#include "TWC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TWC_safety_check(const VehicleState* vs, const TWC_State* state);
void TWC_safety_enter_failsoft(TWC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCSAFETY_H */
