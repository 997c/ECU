#include "AGS2safety.h"
#include <string.h>

bool AGS2_safety_check(const VehicleState* vs, const AGS2_State* state) {
    (void)vs; (void)state;
    /* TODO: AGS2 safety limits for Automatic Gear Shift Strategy */
    return true;
}

void AGS2_safety_enter_failsoft(AGS2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
