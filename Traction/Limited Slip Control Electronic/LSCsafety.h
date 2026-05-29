#ifndef ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCSAFETY_H
#define ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCSAFETY_H

#include "LSC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool LSC_safety_check(const VehicleState* vs, const LSC_State* state);
void LSC_safety_enter_failsoft(LSC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCSAFETY_H */
