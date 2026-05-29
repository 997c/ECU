#ifndef ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSSAFETY_H
#define ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSSAFETY_H

#include "DVS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DVS_safety_check(const VehicleState* vs, const DVS_State* state);
void DVS_safety_enter_failsoft(DVS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSSAFETY_H */
