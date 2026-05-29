#ifndef ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBSAFETY_H
#define ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBSAFETY_H

#include "TVB.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TVB_safety_check(const VehicleState* vs, const TVB_State* state);
void TVB_safety_enter_failsoft(TVB_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBSAFETY_H */
