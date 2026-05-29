#include "AGPsafety.h"
#include <string.h>

bool AGP_safety_check(const VehicleState* vs, const AGP_State* state) {
    (void)vs; (void)state;
    /* TODO: AGP safety limits for Automatic Gear Protection */
    return true;
}

void AGP_safety_enter_failsoft(AGP_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
