#ifndef ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCSAFETY_H
#define ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCSAFETY_H

#include "ITC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ITC_safety_check(const VehicleState* vs, const ITC_State* state);
void ITC_safety_enter_failsoft(ITC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_IGNITION_TIMING_CONTROL_ITCSAFETY_H */
