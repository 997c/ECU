#ifndef ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHSAFETY_H
#define ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHSAFETY_H

#include "RDH.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool RDH_safety_check(const VehicleState* vs, const RDH_State* state);
void RDH_safety_enter_failsoft(RDH_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_REDUNDANCY_HANDLING_RDHSAFETY_H */
