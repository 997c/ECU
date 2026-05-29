#ifndef ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCSAFETY_H
#define ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCSAFETY_H

#include "KNC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool KNC_safety_check(const VehicleState* vs, const KNC_State* state);
void KNC_safety_enter_failsoft(KNC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCSAFETY_H */
