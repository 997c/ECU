#ifndef ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSASAFETY_H
#define ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSASAFETY_H

#include "CSA.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool CSA_safety_check(const VehicleState* vs, const CSA_State* state);
void CSA_safety_enter_failsoft(CSA_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSASAFETY_H */
