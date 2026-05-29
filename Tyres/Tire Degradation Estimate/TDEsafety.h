#ifndef ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDESAFETY_H
#define ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDESAFETY_H

#include "TDE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TDE_safety_check(const VehicleState* vs, const TDE_State* state);
void TDE_safety_enter_failsoft(TDE_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDESAFETY_H */
