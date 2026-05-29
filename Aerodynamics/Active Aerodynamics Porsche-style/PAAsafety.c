#include "PAAsafety.h"
#include <string.h>

bool PAA_safety_check(const VehicleState* vs, const PAA_State* state) {
    (void)vs; (void)state;
    /* TODO: PAA safety limits for Active Aerodynamics Porsche-style */
    return true;
}

void PAA_safety_enter_failsoft(PAA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
