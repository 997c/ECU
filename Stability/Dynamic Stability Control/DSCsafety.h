#ifndef ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCSAFETY_H
#define ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCSAFETY_H

#include "DSC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DSC_safety_check(const VehicleState* vs, const DSC_State* state);
void DSC_safety_enter_failsoft(DSC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_STABILITY_CONTROL_DSCSAFETY_H */
