#ifndef ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRSAFETY_H
#define ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRSAFETY_H

#include "UTR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool UTR_safety_check(const VehicleState* vs, const UTR_State* state);
void UTR_safety_enter_failsoft(UTR_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRSAFETY_H */
