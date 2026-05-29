#ifndef ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2SAFETY_H
#define ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2SAFETY_H

#include "ETC2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool ETC2_safety_check(const VehicleState* vs, const ETC2_State* state);
void ETC2_safety_enter_failsoft(ETC2_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2SAFETY_H */
