#include "ERBsafety.h"
#include <string.h>

bool ERB_safety_check(const VehicleState* vs, const ERB_State* state) {
    (void)vs; (void)state;
    /* TODO: ERB safety limits for Energy Recovery Braking */
    return true;
}

void ERB_safety_enter_failsoft(ERB_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
