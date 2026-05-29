#include "PLSsafety.h"
#include <string.h>

bool PLS_safety_check(const VehicleState* vs, const PLS_State* state) {
    (void)vs; (void)state;
    /* TODO: PLS safety limits for Pit Lane Speed Limiter */
    return true;
}

void PLS_safety_enter_failsoft(PLS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
