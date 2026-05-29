#ifndef ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRSAFETY_H
#define ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRSAFETY_H

#include "MDR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool MDR_safety_check(const VehicleState* vs, const MDR_State* state);
void MDR_safety_enter_failsoft(MDR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MASS_DAMPER_TUNED_MASS_MDRSAFETY_H */
