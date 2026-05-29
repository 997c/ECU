#ifndef ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2SAFETY_H
#define ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2SAFETY_H

#include "ARS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ARS2_safety_check(const VehicleState* vs, const ARS2_State* state);
void ARS2_safety_enter_failsoft(ARS2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2SAFETY_H */
