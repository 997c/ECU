#include "AFLsafety.h"
#include <string.h>

bool AFL_safety_check(const VehicleState* vs, const AFL_State* state) {
    (void)vs; (void)state;
    /* TODO: AFL safety limits for Actuator Fallback Logic */
    return true;
}

void AFL_safety_enter_failsoft(AFL_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
