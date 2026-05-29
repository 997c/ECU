#include "CBCsafety.h"
#include <string.h>

bool CBC_safety_check(const VehicleState* vs, const CBC_State* state) {
    (void)vs; (void)state;
    /* TODO: CBC safety limits for Cornering Brake Control */
    return true;
}

void CBC_safety_enter_failsoft(CBC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
