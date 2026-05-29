#include "AFCsafety.h"
#include <string.h>

bool AFC_safety_check(const VehicleState* vs, const AFC_State* state) {
    (void)vs; (void)state;
    /* TODO: AFC safety limits for Active Floor Clearance Control */
    return true;
}

void AFC_safety_enter_failsoft(AFC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
