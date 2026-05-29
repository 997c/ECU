#ifndef ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSSAFETY_H
#define ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSSAFETY_H

#include "BMS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool BMS_safety_check(const VehicleState* vs, const BMS_State* state);
void BMS_safety_enter_failsoft(BMS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_MIGRATION_SHAPING_BMSSAFETY_H */
