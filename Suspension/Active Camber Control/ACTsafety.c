#include "ACTsafety.h"
#include <string.h>

bool ACT_safety_check(const VehicleState* vs, const ACT_State* state) {
    (void)vs; (void)state;
    /* TODO: ACT safety limits for Active Camber Control */
    return true;
}

void ACT_safety_enter_failsoft(ACT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
