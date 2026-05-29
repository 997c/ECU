#ifndef ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKSAFETY_H
#define ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKSAFETY_H

#include "MGK.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool MGK_safety_check(const VehicleState* vs, const MGK_State* state);
void MGK_safety_enter_failsoft(MGK_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_K_TORQUE_BLEND_CONTROL_MGKSAFETY_H */
