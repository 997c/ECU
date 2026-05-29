#ifndef ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDSAFETY_H
#define ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDSAFETY_H

#include "WSD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool WSD_safety_check(const VehicleState* vs, const WSD_State* state);
void WSD_safety_enter_failsoft(WSD_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDSAFETY_H */
