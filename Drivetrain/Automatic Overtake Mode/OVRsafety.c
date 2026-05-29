#include "OVRsafety.h"
#include <string.h>

bool OVR_safety_check(const VehicleState* vs, const OVR_State* state) {
    (void)vs; (void)state;
    /* TODO: OVR safety limits for Automatic Overtake Mode */
    return true;
}

void OVR_safety_enter_failsoft(OVR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
