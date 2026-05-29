#ifndef ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRSAFETY_H
#define ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRSAFETY_H

#include "AKR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AKR_safety_check(const VehicleState* vs, const AKR_State* state);
void AKR_safety_enter_failsoft(AKR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRSAFETY_H */
