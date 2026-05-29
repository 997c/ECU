#ifndef ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLSAFETY_H
#define ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLSAFETY_H

#include "EDL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EDL_safety_check(const VehicleState* vs, const EDL_State* state);
void EDL_safety_enter_failsoft(EDL_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_ELECTRONIC_DIFFERENTIAL_LOCK_EDLSAFETY_H */
