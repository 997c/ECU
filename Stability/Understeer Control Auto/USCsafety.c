#include "USCsafety.h"
#include <string.h>

bool USC_safety_check(const VehicleState* vs, const USC_State* state) {
    (void)vs; (void)state;
    /* TODO: USC safety limits for Understeer Control Auto */
    return true;
}

void USC_safety_enter_failsoft(USC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
