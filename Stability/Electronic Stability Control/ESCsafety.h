#ifndef ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCSAFETY_H
#define ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCSAFETY_H

#include "ESC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ESC_safety_check(const VehicleState* vs, const ESC_State* state);
void ESC_safety_enter_failsoft(ESC_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ELECTRONIC_STABILITY_CONTROL_ESCSAFETY_H */
