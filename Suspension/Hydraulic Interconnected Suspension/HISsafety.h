#ifndef ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISSAFETY_H
#define ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISSAFETY_H

#include "HIS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool HIS_safety_check(const VehicleState* vs, const HIS_State* state);
void HIS_safety_enter_failsoft(HIS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISSAFETY_H */
