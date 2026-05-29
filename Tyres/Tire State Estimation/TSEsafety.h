#ifndef ECU_TYRES_TIRE_STATE_ESTIMATION_TSESAFETY_H
#define ECU_TYRES_TIRE_STATE_ESTIMATION_TSESAFETY_H

#include "TSE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TSE_safety_check(const VehicleState* vs, const TSE_State* state);
void TSE_safety_enter_failsoft(TSE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_STATE_ESTIMATION_TSESAFETY_H */
