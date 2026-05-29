#ifndef ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDSAFETY_H
#define ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDSAFETY_H

#include "EBD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EBD_safety_check(const VehicleState* vs, const EBD_State* state);
void EBD_safety_enter_failsoft(EBD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDSAFETY_H */
