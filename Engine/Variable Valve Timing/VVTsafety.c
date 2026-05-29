#include "VVTsafety.h"
#include <string.h>

bool VVT_safety_check(const VehicleState* vs, const VVT_State* state) {
    (void)vs; (void)state;
    /* TODO: VVT safety limits for Variable Valve Timing */
    return true;
}

void VVT_safety_enter_failsoft(VVT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
