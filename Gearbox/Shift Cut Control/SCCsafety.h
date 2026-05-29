#ifndef ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCSAFETY_H
#define ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCSAFETY_H

#include "SCC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SCC_safety_check(const VehicleState* vs, const SCC_State* state);
void SCC_safety_enter_failsoft(SCC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_SHIFT_CUT_CONTROL_SCCSAFETY_H */
