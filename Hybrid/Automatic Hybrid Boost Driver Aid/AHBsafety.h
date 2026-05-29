#ifndef ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBSAFETY_H
#define ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBSAFETY_H

#include "AHB.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AHB_safety_check(const VehicleState* vs, const AHB_State* state);
void AHB_safety_enter_failsoft(AHB_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBSAFETY_H */
