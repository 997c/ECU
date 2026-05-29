#ifndef ECU_ENGINE_TORQUE_SHAPING_TQSSAFETY_H
#define ECU_ENGINE_TORQUE_SHAPING_TQSSAFETY_H

#include "TQS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TQS_safety_check(const VehicleState* vs, const TQS_State* state);
void TQS_safety_enter_failsoft(TQS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TORQUE_SHAPING_TQSSAFETY_H */
