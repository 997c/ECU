#ifndef ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVSAFETY_H
#define ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVSAFETY_H

#include "TQV.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TQV_safety_check(const VehicleState* vs, const TQV_State* state);
void TQV_safety_enter_failsoft(TQV_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TORQUE_VECTORING_FULL_AUTO_TQVSAFETY_H */
