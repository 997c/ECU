#include "AVTsafety.h"
#include <string.h>

bool AVT_safety_check(const VehicleState* vs, const AVT_State* state) {
    (void)vs; (void)state;
    /* TODO: AVT safety limits for Active Valve Timing Full Control */
    return true;
}

void AVT_safety_enter_failsoft(AVT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
