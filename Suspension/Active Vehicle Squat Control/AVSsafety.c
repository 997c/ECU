#include "AVSsafety.h"
#include <string.h>

bool AVS_safety_check(const VehicleState* vs, const AVS_State* state) {
    (void)vs; (void)state;
    /* TODO: AVS safety limits for Active Vehicle Squat Control */
    return true;
}

void AVS_safety_enter_failsoft(AVS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
