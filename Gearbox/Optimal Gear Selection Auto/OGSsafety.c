#include "OGSsafety.h"
#include <string.h>

bool OGS_safety_check(const VehicleState* vs, const OGS_State* state) {
    (void)vs; (void)state;
    /* TODO: OGS safety limits for Optimal Gear Selection Auto */
    return true;
}

void OGS_safety_enter_failsoft(OGS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
