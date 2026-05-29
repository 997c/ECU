#ifndef ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2SAFETY_H
#define ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2SAFETY_H

#include "ADS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ADS2_safety_check(const VehicleState* vs, const ADS2_State* state);
void ADS2_safety_enter_failsoft(ADS2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2SAFETY_H */
