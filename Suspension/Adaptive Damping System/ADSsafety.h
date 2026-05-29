#ifndef ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSSAFETY_H
#define ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSSAFETY_H

#include "ADS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ADS_safety_check(const VehicleState* vs, const ADS_State* state);
void ADS_safety_enter_failsoft(ADS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSSAFETY_H */
