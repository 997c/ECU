#ifndef ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCSAFETY_H
#define ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCSAFETY_H

#include "ETC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ETC_safety_check(const VehicleState* vs, const ETC_State* state);
void ETC_safety_enter_failsoft(ETC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCSAFETY_H */
