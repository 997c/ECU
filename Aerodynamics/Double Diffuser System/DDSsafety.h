#ifndef ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSSAFETY_H
#define ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSSAFETY_H

#include "DDS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DDS_safety_check(const VehicleState* vs, const DDS_State* state);
void DDS_safety_enter_failsoft(DDS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSSAFETY_H */
