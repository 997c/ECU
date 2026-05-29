#ifndef ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPSAFETY_H
#define ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPSAFETY_H

#include "DSP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DSP_safety_check(const VehicleState* vs, const DSP_State* state);
void DSP_safety_enter_failsoft(DSP_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DOWNSHIFT_PROTECTION_DSPSAFETY_H */
