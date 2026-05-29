#include "HVCsafety.h"
#include <string.h>

bool HVC_safety_check(const VehicleState* vs, const HVC_State* state) {
    (void)vs; (void)state;
    /* TODO: HVC safety limits for Heave Control */
    return true;
}

void HVC_safety_enter_failsoft(HVC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
