#include "RLCsafety.h"
#include <string.h>

bool RLC_safety_check(const VehicleState* vs, const RLC_State* state) {
    (void)vs; (void)state;
    /* TODO: RLC safety limits for Roll Control */
    return true;
}

void RLC_safety_enter_failsoft(RLC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
