#ifndef ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALESAFETY_H
#define ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALESAFETY_H

#include "ALE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ALE_safety_check(const VehicleState* vs, const ALE_State* state);
void ALE_safety_enter_failsoft(ALE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALESAFETY_H */
