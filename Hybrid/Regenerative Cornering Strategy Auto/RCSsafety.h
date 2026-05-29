#ifndef ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSSAFETY_H
#define ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSSAFETY_H

#include "RCS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool RCS_safety_check(const VehicleState* vs, const RCS_State* state);
void RCS_safety_enter_failsoft(RCS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_REGENERATIVE_CORNERING_STRATEGY_AUTO_RCSSAFETY_H */
