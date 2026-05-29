#include "KNCsafety.h"
#include <string.h>

bool KNC_safety_check(const VehicleState* vs, const KNC_State* state) {
    (void)vs; (void)state;
    /* TODO: KNC safety limits for Knock Combustion Control */
    return true;
}

void KNC_safety_enter_failsoft(KNC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
