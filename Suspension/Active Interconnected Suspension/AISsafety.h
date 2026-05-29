#ifndef ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISSAFETY_H
#define ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISSAFETY_H

#include "AIS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AIS_safety_check(const VehicleState* vs, const AIS_State* state);
void AIS_safety_enter_failsoft(AIS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISSAFETY_H */
