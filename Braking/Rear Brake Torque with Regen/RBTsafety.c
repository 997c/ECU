#include "RBTsafety.h"
#include <string.h>

bool RBT_safety_check(const VehicleState* vs, const RBT_State* state) {
    (void)vs; (void)state;
    /* TODO: RBT safety limits for Rear Brake Torque with Regen */
    return true;
}

void RBT_safety_enter_failsoft(RBT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
