#ifndef ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCSAFETY_H
#define ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCSAFETY_H

#include "AYC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AYC_safety_check(const VehicleState* vs, const AYC_State* state);
void AYC_safety_enter_failsoft(AYC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCSAFETY_H */
