#include "OVCsafety.h"
#include <string.h>

bool OVC_safety_check(const VehicleState* vs, const OVC_State* state) {
    (void)vs; (void)state;
    /* TODO: OVC safety limits for Oversteer Control Auto */
    return true;
}

void OVC_safety_enter_failsoft(OVC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
