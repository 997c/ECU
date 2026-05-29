#ifndef ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGESAFETY_H
#define ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGESAFETY_H

#include "TGE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TGE_safety_check(const VehicleState* vs, const TGE_State* state);
void TGE_safety_enter_failsoft(TGE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGESAFETY_H */
