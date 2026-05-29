#include "AGSsafety.h"
#include <string.h>

bool AGS_safety_check(const VehicleState* vs, const AGS_State* state) {
    (void)vs; (void)state;
    /* TODO: AGS safety limits for Automatic Gear Selection */
    return true;
}

void AGS_safety_enter_failsoft(AGS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
