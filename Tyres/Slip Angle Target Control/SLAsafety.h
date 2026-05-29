#ifndef ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLASAFETY_H
#define ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLASAFETY_H

#include "SLA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SLA_safety_check(const VehicleState* vs, const SLA_State* state);
void SLA_safety_enter_failsoft(SLA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_ANGLE_TARGET_CONTROL_SLASAFETY_H */
