#ifndef ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLSAFETY_H
#define ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLSAFETY_H

#include "SPL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SPL_safety_check(const VehicleState* vs, const SPL_State* state);
void SPL_safety_enter_failsoft(SPL_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLSAFETY_H */
