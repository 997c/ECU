#ifndef ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRSAFETY_H
#define ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRSAFETY_H

#include "APR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool APR_safety_check(const VehicleState* vs, const APR_State* state);
void APR_safety_enter_failsoft(APR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_POWER_RECOVERY_APRSAFETY_H */
