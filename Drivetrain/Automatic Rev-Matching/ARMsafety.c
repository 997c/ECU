#include "ARMsafety.h"
#include <string.h>

bool ARM_safety_check(const VehicleState* vs, const ARM_State* state) {
    (void)vs; (void)state;
    /* TODO: ARM safety limits for Automatic Rev-Matching */
    return true;
}

void ARM_safety_enter_failsoft(ARM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
