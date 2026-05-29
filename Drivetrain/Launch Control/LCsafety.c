#include "LCsafety.h"
#include <string.h>

bool LC_safety_check(const VehicleState* vs, const LC_State* state) {
    (void)vs; (void)state;
    /* TODO: LC safety limits for Launch Control */
    return true;
}

void LC_safety_enter_failsoft(LC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
