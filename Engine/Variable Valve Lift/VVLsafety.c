#include "VVLsafety.h"
#include <string.h>

bool VVL_safety_check(const VehicleState* vs, const VVL_State* state) {
    (void)vs; (void)state;
    /* TODO: VVL safety limits for Variable Valve Lift */
    return true;
}

void VVL_safety_enter_failsoft(VVL_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
