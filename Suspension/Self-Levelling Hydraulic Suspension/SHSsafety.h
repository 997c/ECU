#ifndef ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSSAFETY_H
#define ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSSAFETY_H

#include "SHS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool SHS_safety_check(const VehicleState* vs, const SHS_State* state);
void SHS_safety_enter_failsoft(SHS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSSAFETY_H */
