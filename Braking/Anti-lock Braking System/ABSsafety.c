#include "ABSsafety.h"
#include <string.h>

bool ABS_safety_check(const VehicleState* vs, const ABS_State* state) {
    (void)vs; (void)state;
    /* TODO: ABS safety limits for Anti-lock Braking System */
    return true;
}

void ABS_safety_enter_failsoft(ABS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
