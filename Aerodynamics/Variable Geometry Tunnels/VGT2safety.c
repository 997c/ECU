#include "VGT2safety.h"
#include <string.h>

bool VGT2_safety_check(const VehicleState* vs, const VGT2_State* state) {
    (void)vs; (void)state;
    /* TODO: VGT2 safety limits for Variable Geometry Tunnels */
    return true;
}

void VGT2_safety_enter_failsoft(VGT2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
