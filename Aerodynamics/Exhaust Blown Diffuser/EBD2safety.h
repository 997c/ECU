#ifndef ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2SAFETY_H
#define ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2SAFETY_H

#include "EBD2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EBD2_safety_check(const VehicleState* vs, const EBD2_State* state);
void EBD2_safety_enter_failsoft(EBD2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2SAFETY_H */
