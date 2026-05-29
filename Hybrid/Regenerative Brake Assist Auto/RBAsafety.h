#ifndef ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBASAFETY_H
#define ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBASAFETY_H

#include "RBA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool RBA_safety_check(const VehicleState* vs, const RBA_State* state);
void RBA_safety_enter_failsoft(RBA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_BRAKE_ASSIST_AUTO_RBASAFETY_H */
