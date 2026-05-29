#include "APRsafety.h"
#include <string.h>

bool APR_safety_check(const VehicleState* vs, const APR_State* state) {
    (void)vs; (void)state;
    /* TODO: APR safety limits for Automatic Power Recovery */
    return true;
}

void APR_safety_enter_failsoft(APR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
