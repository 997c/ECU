#include "TCTsafety.h"
#include <string.h>

bool TCT_safety_check(const VehicleState* vs, const TCT_State* state) {
    (void)vs; (void)state;
    /* TODO: TCT safety limits for Tire Carcass Temperature Model */
    return true;
}

void TCT_safety_enter_failsoft(TCT_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
