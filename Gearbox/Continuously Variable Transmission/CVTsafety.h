#ifndef ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTSAFETY_H
#define ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTSAFETY_H

#include "CVT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool CVT_safety_check(const VehicleState* vs, const CVT_State* state);
void CVT_safety_enter_failsoft(CVT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTSAFETY_H */
