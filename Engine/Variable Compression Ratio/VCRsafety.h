#ifndef ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRSAFETY_H
#define ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRSAFETY_H

#include "VCR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool VCR_safety_check(const VehicleState* vs, const VCR_State* state);
void VCR_safety_enter_failsoft(VCR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRSAFETY_H */
