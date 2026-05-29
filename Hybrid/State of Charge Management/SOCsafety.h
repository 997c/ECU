#ifndef ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCSAFETY_H
#define ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCSAFETY_H

#include "SOC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SOC_safety_check(const VehicleState* vs, const SOC_State* state);
void SOC_safety_enter_failsoft(SOC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCSAFETY_H */
