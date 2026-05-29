#include "SPLsafety.h"
#include <string.h>

bool SPL_safety_check(const VehicleState* vs, const SPL_State* state) {
    (void)vs; (void)state;
    /* TODO: SPL safety limits for Sensor Plausibility Checking */
    return true;
}

void SPL_safety_enter_failsoft(SPL_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
