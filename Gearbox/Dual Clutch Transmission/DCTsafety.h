#ifndef ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTSAFETY_H
#define ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTSAFETY_H

#include "DCT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DCT_safety_check(const VehicleState* vs, const DCT_State* state);
void DCT_safety_enter_failsoft(DCT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTSAFETY_H */
